/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c51f60; end: 109c52063;  */

void FUN_109c51f60(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  FUN_109c182f4(param_3,1);
  plVar4 = (long *)*param_2;
  cVar2 = *(char *)(*plVar4 + 0x48);
  if (cVar2 == '\x01') {
    pcVar3 = FUN_109c52064;
  }
  else {
    if (cVar2 != '\x04') {
      FUN_109c129d4(auStack_60,cVar2);
      FUN_10928a5e0(auStack_48,&UNK_10f5a3e0d,auStack_60);
      func_0x000105687ee0(auStack_48);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109c52030);
      (*pcVar3)();
    }
    pcVar3 = FUN_109c5238c;
  }
  plVar1 = (long *)(param_1 + 0x90);
  if (param_2[1] - (long)plVar4 != 0x10) {
    plVar1 = plVar4 + 2;
  }
  (*pcVar3)(plVar4,plVar1,*param_3,*(undefined8 *)(param_1 + 0x68));
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
  return;
}



/* Entry: 109c52064; end: 109c5238b;  */

undefined8 * FUN_109c52064(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 auStack_298 [2];
  char cStack_281;
  long *plStack_280;
  undefined8 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  uint uStack_258;
  undefined8 uStack_254;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  int aiStack_240 [6];
  undefined4 uStack_228;
  int aiStack_224 [5];
  int aiStack_210 [6];
  uint auStack_1f8 [6];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  int aiStack_110 [6];
  undefined4 uStack_f8;
  long alStack_f4 [2];
  int aiStack_e0 [6];
  uint auStack_c8 [6];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(*param_2 + 0x40);
  lVar15 = *param_1;
  uVar14 = (ulong)auStack_c8 | 4;
  auStack_c8[2] = 0;
  auStack_c8[3] = 0;
  auStack_c8[4] = 0;
  auStack_c8[5] = 0;
  auStack_c8[0] = 0;
  auStack_c8[1] = 0;
  uVar1 = *(uint *)(lVar15 + 8);
  puVar5 = param_4;
  if (uVar1 == 0) goto LAB_109c52124;
  plVar4 = (long *)((long)(int)uVar1 << 2);
  plVar3 = (long *)(lVar15 + 0xc);
  _memcpy(uVar14);
  auStack_c8[0] = uVar1;
  if ((int)uVar1 < 6) {
    if ((int)uVar1 < 1) {
LAB_109c52124:
      _memset_pattern16(uVar14,&UNK_10dfd94a0,(ulong)(4 - uVar1) * 4 + 4);
      uVar6 = 5 - uVar1;
      uVar7 = (ulong)uVar6;
    }
    else {
      uVar7 = 5;
      do {
        auStack_c8[uVar7] = auStack_c8[uVar7 - (5 - (ulong)uVar1)];
        uVar7 = uVar7 - 1;
      } while (5 - (ulong)uVar1 < uVar7);
      if (uVar1 != 5) goto LAB_109c52124;
      uVar7 = 0;
      uVar6 = 0;
    }
    uVar8 = 0;
    auStack_c8[0] = 5;
    aiStack_e0[0] = 0;
    aiStack_e0[1] = 0;
    aiStack_e0[2] = 0;
    aiStack_e0[3] = 0;
    aiStack_e0[4] = 0;
    do {
      if (uVar8 < uVar7) {
        iVar9 = (int)uVar8;
      }
      else {
        iVar9 = *(int *)(lVar13 + uVar7 * -4 + uVar8 * 4) + uVar6;
      }
      aiStack_e0[uVar8] = iVar9;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 5);
    plVar3 = (long *)&UNK_10dfd94a0;
    plVar4 = (long *)0x14;
    _memset_pattern16(alStack_f4);
    lVar13 = 0;
    uStack_f8 = 5;
    aiStack_110[0] = 0;
    aiStack_110[1] = 0;
    aiStack_110[2] = 0;
    aiStack_110[3] = 0;
    aiStack_110[4] = 0;
    do {
      iVar9 = aiStack_e0[lVar13];
      *(undefined4 *)((long)alStack_f4 + lVar13 * 4) = *(undefined4 *)(uVar14 + (long)iVar9 * 4);
      iVar11 = 1;
      for (lVar10 = (long)iVar9 << 2; lVar10 != 0x10; lVar10 = lVar10 + 4) {
        iVar11 = *(int *)((long)auStack_c8 + lVar10 + 8) * iVar11;
      }
      aiStack_110[lVar13] = iVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 5);
    uStack_11c = 0;
    uStack_124 = 0;
    uStack_114 = 0;
    if ((int)uVar1 < 6) {
      uStack_128 = uVar1;
      if (uVar1 != 0) {
        _memcpy(&uStack_124,(long)alStack_f4 + uVar7 * 4,(long)(int)uVar1 << 2);
      }
      (*(code *)**(undefined8 **)*param_4)
                (&uStack_b0,(undefined8 *)*param_4,&uStack_128,*(undefined1 *)(lVar15 + 0x48));
      func_0x000109c18360(param_3,&uStack_b0);
      FUN_109c180ec(&uStack_b0);
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      lVar15 = *(long *)(*param_1 + 0x40);
      lVar13 = *(long *)(*param_3 + 0x40);
      puVar2 = (undefined8 *)&UNK_10f5749aa;
      plVar3 = (long *)0x1a;
      puVar5 = (undefined8 *)0x5;
      plVar4 = alStack_f4;
      FUN_109c60fbc();
      if (0 < (int)puVar2) {
        uVar14 = 0;
        do {
          lVar10 = 0;
          iVar9 = 0;
          do {
            iVar9 = iVar9 + *(int *)((long)aiStack_110 + lVar10) *
                            *(int *)((long)&uStack_b0 + lVar10);
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0x14);
          *(undefined4 *)(lVar13 + uVar14 * 4) = *(undefined4 *)(lVar15 + (long)iVar9 * 4);
          uVar7 = 4;
          do {
            iVar9 = *(int *)((long)&uStack_b0 + uVar7 * 4) + 1;
            *(int *)((long)&uStack_b0 + uVar7 * 4) = iVar9;
            if (iVar9 != *(int *)((long)alStack_f4 + uVar7 * 4)) break;
            *(undefined4 *)((long)&uStack_b0 + uVar7 * 4) = 0;
            uVar1 = (int)uVar7 - 1;
            uVar7 = (ulong)uVar1;
          } while (uVar1 != 0xffffffff);
          uVar14 = uVar14 + 1;
        } while (uVar14 != ((ulong)puVar2 & 0xffffffff));
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return puVar2;
      }
    }
    else {
      FUN_10940ce60(&UNK_10f574967);
    }
    ___stack_chk_fail();
  }
  plVar12 = (long *)&UNK_10f5a3d83;
  func_0x000105688514();
  FUN_109c180ec(&uStack_b0);
  __Unwind_Resume();
  pcStack_138 = FUN_109c5238c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(*plVar3 + 0x40);
  lVar15 = *plVar12;
  uVar14 = (ulong)auStack_1f8 | 4;
  auStack_1f8[2] = 0;
  auStack_1f8[3] = 0;
  auStack_1f8[4] = 0;
  auStack_1f8[5] = 0;
  auStack_1f8[0] = 0;
  auStack_1f8[1] = 0;
  uVar1 = *(uint *)(lVar15 + 8);
  puStack_140 = &stack0xfffffffffffffff0;
  if (uVar1 == 0) goto LAB_109c5244c;
  _memcpy(uVar14,lVar15 + 0xc,(long)(int)uVar1 << 2);
  auStack_1f8[0] = uVar1;
  if (5 < (int)uVar1) goto LAB_109c5268c;
  if ((int)uVar1 < 1) {
LAB_109c5244c:
    _memset_pattern16(uVar14,&UNK_10dfd94a0,(ulong)(4 - uVar1) * 4 + 4);
    uVar6 = 5 - uVar1;
    uVar7 = (ulong)uVar6;
  }
  else {
    uVar7 = 5;
    do {
      auStack_1f8[uVar7] = auStack_1f8[uVar7 - (5 - (ulong)uVar1)];
      uVar7 = uVar7 - 1;
    } while (5 - (ulong)uVar1 < uVar7);
    if (uVar1 != 5) goto LAB_109c5244c;
    uVar7 = 0;
    uVar6 = 0;
  }
  uVar8 = 0;
  auStack_1f8[0] = 5;
  aiStack_210[0] = 0;
  aiStack_210[1] = 0;
  aiStack_210[2] = 0;
  aiStack_210[3] = 0;
  aiStack_210[4] = 0;
  do {
    if (uVar8 < uVar7) {
      iVar9 = (int)uVar8;
    }
    else {
      iVar9 = *(int *)(lVar13 + uVar7 * -4 + uVar8 * 4) + uVar6;
    }
    aiStack_210[uVar8] = iVar9;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 5);
  _memset_pattern16(aiStack_224,&UNK_10dfd94a0,0x14);
  lVar13 = 0;
  uStack_228 = 5;
  aiStack_240[0] = 0;
  aiStack_240[1] = 0;
  aiStack_240[2] = 0;
  aiStack_240[3] = 0;
  aiStack_240[4] = 0;
  do {
    aiStack_224[lVar13] = *(int *)(uVar14 + (long)aiStack_210[lVar13] * 4);
    iVar9 = 1;
    for (lVar10 = (long)aiStack_210[lVar13] << 2; lVar10 != 0x10; lVar10 = lVar10 + 4) {
      iVar9 = *(int *)((long)auStack_1f8 + lVar10 + 8) * iVar9;
    }
    aiStack_240[lVar13] = iVar9;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 5);
  uStack_24c = 0;
  uStack_254 = 0;
  uStack_244 = 0;
  if ((int)uVar1 < 6) {
    uStack_258 = uVar1;
    if (uVar1 != 0) {
      _memcpy(&uStack_254,aiStack_224 + uVar7,(long)(int)uVar1 << 2);
    }
    (*(code *)**(undefined8 **)*puVar5)
              (&uStack_1e0,(undefined8 *)*puVar5,&uStack_258,*(undefined1 *)(lVar15 + 0x48));
    func_0x000109c18360(plVar4,&uStack_1e0);
    FUN_109c180ec(&uStack_1e0);
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    plVar12 = *(long **)(*plVar12 + 0x40);
    lVar13 = *(long *)(*plVar4 + 0x40);
    puVar5 = (undefined8 *)&UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,aiStack_224,5);
    if (0 < (int)puVar5) {
      uVar14 = 0;
      do {
        lVar15 = 0;
        iVar9 = 0;
        do {
          iVar9 = iVar9 + *(int *)((long)aiStack_240 + lVar15) *
                          *(int *)((long)&uStack_1e0 + lVar15);
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0x14);
        *(undefined4 *)(lVar13 + uVar14 * 4) = *(undefined4 *)((long)plVar12 + (long)iVar9 * 4);
        uVar7 = 4;
        do {
          iVar9 = *(int *)((long)&uStack_1e0 + uVar7 * 4) + 1;
          *(int *)((long)&uStack_1e0 + uVar7 * 4) = iVar9;
          if (iVar9 != aiStack_224[uVar7]) break;
          *(undefined4 *)((long)&uStack_1e0 + uVar7 * 4) = 0;
          uVar1 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar1;
        } while (uVar1 != 0xffffffff);
        uVar14 = uVar14 + 1;
      } while (uVar14 != ((ulong)puVar5 & 0xffffffff));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return puVar5;
    }
  }
  else {
    FUN_10940ce60(&UNK_10f574967);
  }
  ___stack_chk_fail();
LAB_109c5268c:
  puVar5 = (undefined8 *)&UNK_10f5a3d83;
  func_0x000105688514();
  FUN_109c180ec(&uStack_1e0);
  puVar2 = puVar5;
  __Unwind_Resume();
  pcStack_268 = FUN_109c526b4;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[0x11] = 0;
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
  *(undefined1 *)((long)puVar2 + 0x61) = 1;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0x3f800000;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  *puVar2 = &PTR_FUN_110b2e410;
  *(undefined2 *)((long)puVar2 + 0xbc) = 1;
  puVar2[0x18] = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  plStack_280 = plVar12;
  puStack_278 = puVar5;
  ppuStack_270 = &puStack_140;
  func_0x000107c31940(auStack_298,&UNK_10f5a5c7b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar2 + 6,auStack_298);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  return puVar2;
}



/* Entry: 109c5238c; end: 109c526b3;  */

undefined8 * FUN_109c5238c(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 auStack_168 [2];
  char cStack_151;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  int aiStack_110 [6];
  undefined4 uStack_f8;
  int aiStack_f4 [5];
  int aiStack_e0 [6];
  uint auStack_c8 [6];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(*param_2 + 0x40);
  lVar11 = *param_1;
  uVar10 = (ulong)auStack_c8 | 4;
  auStack_c8[2] = 0;
  auStack_c8[3] = 0;
  auStack_c8[4] = 0;
  auStack_c8[5] = 0;
  auStack_c8[0] = 0;
  auStack_c8[1] = 0;
  uVar1 = *(uint *)(lVar11 + 8);
  if (uVar1 == 0) goto LAB_109c5244c;
  _memcpy(uVar10,lVar11 + 0xc,(long)(int)uVar1 << 2);
  auStack_c8[0] = uVar1;
  if (5 < (int)uVar1) goto LAB_109c5268c;
  if ((int)uVar1 < 1) {
LAB_109c5244c:
    _memset_pattern16(uVar10,&UNK_10dfd94a0,(ulong)(4 - uVar1) * 4 + 4);
    uVar4 = 5 - uVar1;
    uVar5 = (ulong)uVar4;
  }
  else {
    uVar5 = 5;
    do {
      auStack_c8[uVar5] = auStack_c8[uVar5 - (5 - (ulong)uVar1)];
      uVar5 = uVar5 - 1;
    } while (5 - (ulong)uVar1 < uVar5);
    if (uVar1 != 5) goto LAB_109c5244c;
    uVar5 = 0;
    uVar4 = 0;
  }
  uVar6 = 0;
  auStack_c8[0] = 5;
  aiStack_e0[0] = 0;
  aiStack_e0[1] = 0;
  aiStack_e0[2] = 0;
  aiStack_e0[3] = 0;
  aiStack_e0[4] = 0;
  do {
    if (uVar6 < uVar5) {
      iVar7 = (int)uVar6;
    }
    else {
      iVar7 = *(int *)(lVar9 + uVar5 * -4 + uVar6 * 4) + uVar4;
    }
    aiStack_e0[uVar6] = iVar7;
    uVar6 = uVar6 + 1;
  } while (uVar6 != 5);
  _memset_pattern16(aiStack_f4,&UNK_10dfd94a0,0x14);
  lVar9 = 0;
  uStack_f8 = 5;
  aiStack_110[0] = 0;
  aiStack_110[1] = 0;
  aiStack_110[2] = 0;
  aiStack_110[3] = 0;
  aiStack_110[4] = 0;
  do {
    aiStack_f4[lVar9] = *(int *)(uVar10 + (long)aiStack_e0[lVar9] * 4);
    iVar7 = 1;
    for (lVar8 = (long)aiStack_e0[lVar9] << 2; lVar8 != 0x10; lVar8 = lVar8 + 4) {
      iVar7 = *(int *)((long)auStack_c8 + lVar8 + 8) * iVar7;
    }
    aiStack_110[lVar9] = iVar7;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 5);
  uStack_11c = 0;
  uStack_124 = 0;
  uStack_114 = 0;
  if ((int)uVar1 < 6) {
    uStack_128 = uVar1;
    if (uVar1 != 0) {
      _memcpy(&uStack_124,aiStack_f4 + uVar5,(long)(int)uVar1 << 2);
    }
    (*(code *)**(undefined8 **)*param_4)
              (&uStack_b0,(undefined8 *)*param_4,&uStack_128,*(undefined1 *)(lVar11 + 0x48));
    func_0x000109c18360(param_3,&uStack_b0);
    FUN_109c180ec(&uStack_b0);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    param_1 = *(long **)(*param_1 + 0x40);
    lVar9 = *(long *)(*param_3 + 0x40);
    puVar2 = (undefined8 *)&UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,aiStack_f4,5);
    if (0 < (int)puVar2) {
      uVar10 = 0;
      do {
        lVar11 = 0;
        iVar7 = 0;
        do {
          iVar7 = iVar7 + *(int *)((long)aiStack_110 + lVar11) * *(int *)((long)&uStack_b0 + lVar11)
          ;
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0x14);
        *(undefined4 *)(lVar9 + uVar10 * 4) = *(undefined4 *)((long)param_1 + (long)iVar7 * 4);
        uVar5 = 4;
        do {
          iVar7 = *(int *)((long)&uStack_b0 + uVar5 * 4) + 1;
          *(int *)((long)&uStack_b0 + uVar5 * 4) = iVar7;
          if (iVar7 != aiStack_f4[uVar5]) break;
          *(undefined4 *)((long)&uStack_b0 + uVar5 * 4) = 0;
          uVar1 = (int)uVar5 - 1;
          uVar5 = (ulong)uVar1;
        } while (uVar1 != 0xffffffff);
        uVar10 = uVar10 + 1;
      } while (uVar10 != ((ulong)puVar2 & 0xffffffff));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar2;
    }
  }
  else {
    FUN_10940ce60(&UNK_10f574967);
  }
  ___stack_chk_fail();
LAB_109c5268c:
  puVar2 = (undefined8 *)&UNK_10f5a3d83;
  func_0x000105688514();
  FUN_109c180ec(&uStack_b0);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_138 = FUN_109c526b4;
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
  *puVar3 = &PTR_FUN_110b2e410;
  *(undefined2 *)((long)puVar3 + 0xbc) = 1;
  puVar3[0x18] = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  plStack_150 = param_1;
  puStack_148 = puVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c31940(auStack_168,&UNK_10f5a5c7b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar3 + 6,auStack_168);
  if (cStack_151 < '\0') {
    __ZdlPv(auStack_168[0]);
  }
  return puVar3;
}



/* Entry: 109c526b4; end: 109c5278f;  */

undefined8 * FUN_109c526b4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2e410;
  *(undefined2 *)((long)param_1 + 0xbc) = 1;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a5c7b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c52790; end: 109c52793;  */

undefined8 * FUN_109c52790(undefined8 *param_1)

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



/* Entry: 109c52794; end: 109c527a7;  */

void FUN_109c52794(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c527a8; end: 109c53e37;  */

void FUN_109c527a8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  unkbyte10 *pVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  code *pcVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  undefined8 *puVar27;
  long lVar28;
  uint *puVar29;
  undefined1 uVar30;
  int iVar31;
  long lVar32;
  undefined1 *puVar33;
  long lVar34;
  char cVar35;
  undefined1 uVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  float *pfVar43;
  char *pcVar44;
  char cVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined1 (*pauVar49) [16];
  ulong uVar50;
  unkbyte10 *pVar51;
  int iVar52;
  int iVar53;
  char *pcVar54;
  long lVar56;
  int *piVar57;
  long lVar58;
  ulong uVar59;
  long *plVar60;
  long lVar61;
  float *pfVar62;
  long lVar63;
  long lVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  long lVar68;
  uint uVar69;
  long *plVar70;
  double dVar71;
  undefined8 uVar72;
  undefined1 auVar73 [16];
  undefined2 uVar74;
  undefined2 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  undefined8 in_stack_fffffffffffff988;
  uint uStack_5ec;
  int iStack_5b4;
  ulong uStack_5a8;
  ulong uStack_550;
  ulong uStack_548;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  short sStack_488;
  short sStack_486;
  short sStack_484;
  short sStack_482;
  uint auStack_480 [3];
  undefined1 auStack_474 [4];
  int aiStack_470 [12];
  undefined8 uStack_440;
  long lStack_80;
  char *pcVar55;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar60 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar61 = *plVar60;
  if ((*(int *)(lVar61 + 0x3c) == 0) ||
     ((*(int *)(lVar61 + 0x3c) == 2 && (*(int *)(lVar61 + 8) == 4)))) {
    iVar39 = *(int *)(param_1 + 0xb8);
    if (iVar39 == 2) {
      iVar8 = *(int *)(lVar61 + 0xc);
      iVar39 = *(int *)(lVar61 + 0x10);
      iVar7 = *(int *)(lVar61 + 0x14);
      uVar9 = *(uint *)(lVar61 + 0x18);
      if (*(char *)(param_1 + 0xa0) == '\x01') {
        *(undefined8 *)(param_1 + 0xac) = 0x100000001;
        if (*(byte *)(param_1 + 0xbd) < 2) {
          uVar38 = *(uint *)(param_1 + 0xa4);
        }
        else {
          uVar38 = *(int *)(param_1 + 0x90) - *(int *)(lVar61 + 0x14);
          uVar38 = (uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU)) >> 1;
        }
        *(uint *)(param_1 + 0xa8) = -uVar38;
      }
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      if ((uint *)(lVar61 + 8U) != (uint *)&uStack_4e8) {
        uVar38 = *(uint *)(lVar61 + 8U);
        if (uVar38 != 0) {
          _memmove((ulong)&uStack_4e8 | 4,(int *)(lVar61 + 0xc),(long)(int)uVar38 << 2);
        }
        uStack_4e8 = (ulong)uVar38;
      }
      uStack_4e8 = CONCAT44(iVar8,(uint)uStack_4e8);
      uStack_4e0 = 0x100000001;
      uStack_4d8 = CONCAT44(uStack_4d8._4_4_,uVar9);
      puVar27 = (undefined8 *)**(undefined8 **)(param_1 + 0x68);
      if (*(char *)(lVar61 + 0x48) == '\x02') {
        (**(code **)*puVar27)(auStack_480,puVar27,&uStack_4e8,2);
        lVar61 = CONCAT44(auStack_480[1],auStack_480[0]);
        lVar34 = *plVar60;
        iVar39 = *(int *)(lVar34 + 0xc);
        iVar8 = *(int *)(lVar34 + 0x10);
        iVar7 = *(int *)(lVar34 + 0x14);
        lVar64 = (long)*(int *)(lVar34 + 0x18);
        plVar70 = (long *)(param_1 + 8);
        lVar28 = *plVar70;
        if (lVar28 == 0) {
          if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
            uVar74 = (undefined2)*(undefined4 *)(param_1 + 0x78);
            uVar75 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x78) >> 0x10);
            cVar35 = -0x80;
          }
          else {
            fVar78 = *(float *)(param_1 + 0x78);
            uVar74 = SUB42(fVar78,0);
            uVar75 = (undefined2)((uint)fVar78 >> 0x10);
            iVar53 = *(int *)(param_1 + 0x7c) + (int)(*(float *)(param_1 + 0x80) / fVar78);
            if (iVar53 < -0x7f) {
              iVar53 = -0x80;
            }
            if (0x7e < iVar53) {
              iVar53 = 0x7f;
            }
            cVar35 = (char)iVar53;
          }
          if ((*(byte *)(param_1 + 0x8c) & 1) == 0) {
            iVar53 = *(int *)(param_1 + 0x7c);
            cVar45 = '\x7f';
          }
          else {
            iVar53 = *(int *)(param_1 + 0x7c);
            iVar37 = iVar53 + (int)(*(float *)(param_1 + 0x88) / (float)CONCAT22(uVar75,uVar74));
            if (iVar37 < -0x7f) {
              iVar37 = -0x80;
            }
            if (0x7e < iVar37) {
              iVar37 = 0x7f;
            }
            cVar45 = (char)iVar37;
          }
          lVar28 = (long)*(char *)(lVar34 + 0x50);
          FUN_109c62084(lVar28,(int)(char)iVar53,(int)cVar35,(int)cVar45,0,plVar70);
          if (((int)lVar28 == 0) && (lVar28 = *plVar70, lVar28 != 0)) {
            *(code **)(param_1 + 0x10) = FUN_109c61e08;
            lVar34 = *plVar60;
            goto LAB_109c53ae8;
          }
        }
        else {
LAB_109c53ae8:
          lVar34 = *(long *)(lVar34 + 0x40);
          lVar63 = *(long *)(lVar61 + 0x40);
          if ((((*(int *)(param_1 + 0xc0) != iVar39) || (*(int *)(param_1 + 0xc4) != iVar8)) ||
              (*(int *)(param_1 + 200) != iVar7)) ||
             ((*(long *)(param_1 + 0xd0) != lVar34 || (*(long *)(param_1 + 0xd8) != lVar63)))) {
            FUN_109c62270(lVar28,(long)iVar39,(long)(iVar7 * iVar8),lVar64,lVar64,lVar64,
                          *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
            if ((int)lVar28 != 0) goto LAB_109c53db4;
            *(int *)(param_1 + 0xc0) = iVar39;
            *(int *)(param_1 + 0xc4) = iVar8;
            *(int *)(param_1 + 200) = iVar7;
            *(long *)(param_1 + 0xd0) = lVar34;
            *(long *)(param_1 + 0xd8) = lVar63;
            lVar28 = *(long *)(param_1 + 8);
          }
          FUN_109c62484(lVar28,lVar34,lVar63);
          if ((int)lVar28 == 0) {
            uVar72 = *(undefined8 *)(param_1 + 8);
            FUN_109c61efc(uVar72,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
            if ((int)uVar72 != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (lVar61 + 0x20,param_1 + 0x48);
              *(undefined4 *)(lVar61 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
              *(undefined4 *)(lVar61 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
              goto LAB_109c53ba4;
            }
          }
        }
LAB_109c53db4:
        func_0x000105688514(&UNK_10f5a5cae);
        goto LAB_109c53de8;
      }
      (**(code **)*puVar27)(auStack_480,puVar27,&uStack_4e8,1);
      pfVar62 = *(float **)(CONCAT44(auStack_480[1],auStack_480[0]) + 0x40);
      lVar61 = *(long *)(*plVar60 + 0x40);
      uVar38 = uVar9 * iVar8;
      uVar59 = (ulong)uVar38;
      if (0 < (int)uVar38) {
        _bzero(pfVar62,uVar59 << 2);
      }
      iVar7 = iVar7 * iVar39;
      if (0 < iVar8) {
        iVar39 = 0;
        pfVar43 = pfVar62;
        do {
          if (0 < iVar7) {
            iVar53 = 0;
            do {
              if (0 < (int)uVar9) {
                lVar28 = 0;
                do {
                  *(float *)((long)pfVar43 + lVar28) =
                       *(float *)(lVar61 + lVar28) + *(float *)((long)pfVar43 + lVar28);
                  lVar28 = lVar28 + 4;
                } while ((ulong)uVar9 * 4 - lVar28 != 0);
              }
              lVar61 = lVar61 + (long)(int)uVar9 * 4;
              iVar53 = iVar53 + 1;
            } while (iVar53 != iVar7);
          }
          iVar39 = iVar39 + 1;
          pfVar43 = pfVar43 + (int)uVar9;
        } while (iVar39 != iVar8);
      }
      if (0 < (int)uVar38) {
        do {
          *pfVar62 = (1.0 / (float)iVar7) * *pfVar62;
          uVar59 = uVar59 - 1;
          pfVar62 = pfVar62 + 1;
        } while (uVar59 != 0);
      }
LAB_109c53ba4:
      func_0x000109c18360(*param_3,auStack_480);
LAB_109c53d44:
      puVar29 = auStack_480;
LAB_109c53d48:
      FUN_109c180ec(puVar29);
      goto LAB_109c53d4c;
    }
    if (iVar39 == 1) {
      iVar39 = *(int *)(lVar61 + 0xc);
      iVar8 = *(int *)(lVar61 + 0x10);
      iVar7 = *(int *)(lVar61 + 0x14);
      uVar9 = *(uint *)(lVar61 + 0x18);
      if (*(char *)(param_1 + 0xa0) == '\x01') {
        iVar53 = *(int *)(param_1 + 0x9c);
        if (*(byte *)(param_1 + 0xbd) < 2) {
          iVar37 = iVar53 + -1;
          iVar15 = *(int *)(param_1 + 0x98);
          bVar24 = *(char *)(param_1 + 0xbc) == '\0';
          if (bVar24) {
            iVar37 = 0;
          }
          uVar38 = *(uint *)(param_1 + 0xa4);
          iVar31 = iVar15 + -1;
          iVar14 = 0;
          if (iVar53 != 0) {
            iVar14 = (int)((iVar8 - *(int *)(param_1 + 0x94)) + uVar38 * 2 + iVar37) / iVar53;
          }
          if (bVar24) {
            iVar31 = 0;
          }
          iVar37 = 1;
          iVar53 = iVar37;
          if (1 < iVar14 + 1) {
            iVar53 = iVar14 + 1;
          }
          *(int *)(param_1 + 0xb0) = iVar53;
          iVar53 = 0;
          if (iVar15 != 0) {
            iVar53 = (int)(((*(int *)(lVar61 + 0x14) + uVar38 * 2) - *(int *)(param_1 + 0x90)) +
                          iVar31) / iVar15;
          }
          if (1 < iVar53 + 1) {
            iVar37 = iVar53 + 1;
          }
          *(int *)(param_1 + 0xac) = iVar37;
        }
        else {
          if (*(byte *)(param_1 + 0xbd) != 2) goto LAB_109c53dd0;
          iVar37 = 0;
          if (iVar53 != 0) {
            iVar37 = (iVar8 + iVar53 + -1) / iVar53;
          }
          if (iVar37 < 2) {
            iVar37 = 1;
          }
          *(int *)(param_1 + 0xb0) = iVar37;
          iVar37 = *(int *)(param_1 + 0x98);
          iVar53 = 0;
          if (iVar37 != 0) {
            iVar53 = (*(int *)(lVar61 + 0x14) + iVar37 + -1) / iVar37;
          }
          if (iVar53 < 2) {
            iVar53 = 1;
          }
          *(int *)(param_1 + 0xac) = iVar53;
          uVar38 = (*(int *)(param_1 + 0x90) - *(int *)(lVar61 + 0x14)) + (iVar53 + -1) * iVar37;
          uVar38 = (uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU)) >> 1;
        }
        *(uint *)(param_1 + 0xa8) = -uVar38;
      }
      else {
        uVar38 = 0;
      }
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      if ((uint *)(lVar61 + 8U) != (uint *)&uStack_500) {
        uVar26 = *(uint *)(lVar61 + 8U);
        if (uVar26 != 0) {
          _memmove((ulong)&uStack_500 | 4,(int *)(lVar61 + 0xc),(long)(int)uVar26 << 2);
        }
        uStack_500 = (ulong)uVar26;
      }
      uStack_500 = CONCAT44(iVar39,(uint)uStack_500);
      uStack_4f8 = NEON_rev64(*(undefined8 *)(param_1 + 0xac),4);
      uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar9);
      puVar27 = (undefined8 *)**(undefined8 **)(param_1 + 0x68);
      if (*(char *)(lVar61 + 0x48) == '\x02') {
        (**(code **)*puVar27)(&uStack_4e8,puVar27,&uStack_500,2);
        lVar61 = uStack_4e8;
        lVar28 = *plVar60;
        uVar9 = *(uint *)(lVar28 + 0xc);
        iVar7 = *(int *)(lVar28 + 0x10);
        iVar39 = *(int *)(lVar28 + 0x14);
        uVar26 = *(uint *)(lVar28 + 0x18);
        uVar66 = *(uint *)(uStack_4e8 + 0x10);
        uVar11 = *(uint *)(uStack_4e8 + 0x14);
        iVar8 = *(int *)(param_1 + 0x98);
        iVar53 = *(int *)(param_1 + 0x9c);
        lVar64 = *(long *)(lVar28 + 0x40);
        lVar34 = *(long *)(uStack_4e8 + 0x40);
        iVar15 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x94);
        fVar78 = *(float *)(param_1 + 0x78);
        iVar37 = *(int *)(lVar28 + 0x50);
        if (*(float *)(lVar28 + 0x4c) / (fVar78 * (float)iVar15) == 0.0) {
          uVar59 = 0;
        }
        else {
          dVar71 = (double)_frexp(auStack_480);
          uVar59 = (ulong)(double)(long)(dVar71 * 2147483648.0);
          if (uVar59 == 0x80000000) {
            auStack_480[0] = auStack_480[0] + 1;
          }
          uVar42 = 0x40000000;
          if (uVar59 != 0x80000000) {
            uVar42 = uVar59 & 0xffffffff;
          }
          uVar3 = 0;
          if (-0x20 < (int)auStack_480[0]) {
            uVar3 = auStack_480[0];
          }
          uVar59 = 0;
          if (-0x20 < (int)auStack_480[0]) {
            uVar59 = uVar42;
          }
          uVar59 = uVar59 | (ulong)uVar3 << 0x20;
        }
        if (0 < (int)uVar9) {
          iStack_5b4 = 0;
          uVar42 = 0;
          bVar24 = false;
          lVar28 = (long)(int)uVar26;
          uVar19 = (uint)(uVar59 >> 0x20);
          uVar3 = 0;
          if ((int)uVar19 < 1) {
            uVar3 = -uVar19;
          }
          uVar13 = ~(uint)(-1L << ((ulong)uVar3 & 0x3f));
          do {
            if (0 < (int)uVar26) {
              lVar63 = 0;
              uVar65 = uVar26;
              do {
                uVar40 = uVar65;
                if ((int)uVar65 < 2) {
                  uVar40 = 1;
                }
                uVar48 = (ulong)uVar40;
                if (0xff < uVar48) {
                  uVar48 = 0x100;
                }
                lVar68 = lVar28 - lVar63;
                uVar40 = (uint)lVar68;
                if (0xff < (int)uVar40) {
                  uVar40 = 0x100;
                }
                if (0 < (int)uVar66) {
                  uStack_5a8 = 0;
                  uStack_5ec = uVar38;
                  do {
                    if (0 < (int)uVar11) {
                      uVar46 = 0;
                      lVar32 = -(long)(int)uVar38 + uStack_5a8 * (long)iVar53;
                      iVar31 = (int)lVar32;
                      uVar5 = -iVar31;
                      uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
                      uVar67 = iVar7 - iVar31;
                      do {
                        lVar56 = -(long)(int)uVar38 + uVar46 * (long)iVar8;
                        iVar31 = (int)lVar56;
                        uVar69 = -iVar31;
                        uVar69 = uVar69 & ((int)uVar69 >> 0x1f ^ 0xffffffffU);
                        uVar16 = iVar39 - iVar31;
                        if ((int)*(uint *)(param_1 + 0x90) <= (int)uVar16) {
                          uVar16 = *(uint *)(param_1 + 0x90);
                        }
                        uVar6 = uVar67;
                        if ((int)*(uint *)(param_1 + 0x94) <= (int)uVar67) {
                          uVar6 = *(uint *)(param_1 + 0x94);
                        }
                        if (uVar16 == uVar69 || uVar6 == uVar5) {
                          if (bVar24) goto LAB_109c535ec;
                          goto LAB_109c53ddc;
                        }
                        _bzero(auStack_480,
                               -(ulong)(uVar40 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar40 << 2);
                        if ((int)uVar5 < (int)uVar6) {
                          uVar41 = (ulong)(uStack_5ec & ((int)uStack_5ec >> 0x1f ^ 0xffffffffU));
                          do {
                            if ((int)uVar69 < (int)uVar16) {
                              pcVar44 = (char *)(lVar64 + lVar63 +
                                                 (lVar56 + (lVar32 + uVar42 * (long)iVar7) *
                                                           (long)iVar39) * lVar28 +
                                                ((ulong)uVar69 + uVar41 * (long)iVar39) * lVar28);
                              uVar47 = (ulong)uVar69;
                              do {
                                pcVar54 = pcVar44;
                                if (lVar68 < 0x10) {
                                  uVar50 = 0;
                                }
                                else {
                                  uVar50 = 0;
                                  puVar29 = auStack_480;
                                  do {
                                    lVar58 = 0;
                                    uStack_498 = CONCAT26((short)pcVar54[7],
                                                          CONCAT24((short)pcVar54[6],
                                                                   CONCAT22((short)pcVar54[5],
                                                                            (short)pcVar54[4])));
                                    uStack_4a0 = CONCAT26((short)pcVar54[3],
                                                          CONCAT24((short)pcVar54[2],
                                                                   CONCAT22((short)pcVar54[1],
                                                                            (short)*pcVar54)));
                                    sStack_488 = (short)pcVar54[0xc];
                                    sStack_486 = (short)pcVar54[0xd];
                                    sStack_484 = (short)pcVar54[0xe];
                                    sStack_482 = (short)pcVar54[0xf];
                                    uStack_490 = CONCAT26((short)pcVar54[0xb],
                                                          CONCAT24((short)pcVar54[10],
                                                                   CONCAT22((short)pcVar54[9],
                                                                            (short)pcVar54[8])));
                                    do {
                                      puVar17 = puVar29 + lVar58 * 4;
                                      uVar1 = *puVar17;
                                      uVar20 = puVar17[1];
                                      uVar21 = puVar17[3];
                                      uVar72 = (&uStack_4a0)[lVar58];
                                      puVar18 = puVar29 + lVar58 * 4;
                                      puVar18[2] = puVar17[2] + (int)(short)((ulong)uVar72 >> 0x20);
                                      puVar18[3] = uVar21 + (int)(short)((ulong)uVar72 >> 0x30);
                                      *puVar18 = uVar1 + (int)(short)uVar72;
                                      puVar18[1] = uVar20 + (int)(short)((ulong)uVar72 >> 0x10);
                                      lVar58 = lVar58 + 1;
                                    } while (lVar58 != 4);
                                    pcVar54 = pcVar54 + 0x10;
                                    uVar50 = uVar50 + 0x10;
                                    puVar29 = puVar29 + 0x10;
                                  } while ((long)uVar50 <= (long)(int)(uVar40 - 0x10));
                                }
                                if ((int)uVar50 <= (int)(uVar40 - 8)) {
                                  piVar57 = aiStack_470 + uVar50;
                                  pcVar55 = pcVar54;
                                  do {
                                    pcVar54 = pcVar55 + 8;
                                    uVar72 = *(undefined8 *)pcVar55;
                                    uVar77 = *(undefined8 *)(piVar57 + 2);
                                    uVar76 = *(undefined8 *)piVar57;
                                    iVar31 = (int)((ulong)*(undefined8 *)(piVar57 + -4) >> 0x20) +
                                             (int)(short)(char)((ulong)uVar72 >> 8);
                                    iVar14 = (int)((ulong)*(undefined8 *)(piVar57 + -2) >> 0x20) +
                                             (int)(short)(char)((ulong)uVar72 >> 0x18);
                                    *(ulong *)(piVar57 + -2) =
                                         CONCAT26((short)((uint)iVar14 >> 0x10),
                                                  CONCAT24((short)iVar14,
                                                           (int)*(undefined8 *)(piVar57 + -2) +
                                                           (int)(short)(char)((ulong)uVar72 >> 0x10)
                                                          ));
                                    *(ulong *)(piVar57 + -4) =
                                         CONCAT26((short)((uint)iVar31 >> 0x10),
                                                  CONCAT24((short)iVar31,
                                                           (int)*(undefined8 *)(piVar57 + -4) +
                                                           (int)(short)(char)uVar72));
                                    piVar57[2] = (int)uVar77 +
                                                 (int)(short)(char)((ulong)uVar72 >> 0x30);
                                    piVar57[3] = (int)((ulong)uVar77 >> 0x20) +
                                                 (int)(short)(char)((ulong)uVar72 >> 0x38);
                                    *piVar57 = (int)uVar76 +
                                               (int)(short)(char)((ulong)uVar72 >> 0x20);
                                    piVar57[1] = (int)((ulong)uVar76 >> 0x20) +
                                                 (int)(short)(char)((ulong)uVar72 >> 0x28);
                                    uVar50 = uVar50 + 8;
                                    piVar57 = piVar57 + 8;
                                    pcVar55 = pcVar54;
                                  } while ((long)uVar50 <= (long)(int)(uVar40 - 8));
                                  uVar50 = uVar50 & 0xffffffff;
                                }
                                if ((int)uVar50 < (int)uVar40) {
                                  do {
                                    auStack_480[uVar50] = auStack_480[uVar50] + (int)*pcVar54;
                                    uVar50 = uVar50 + 1;
                                    pcVar54 = pcVar54 + 1;
                                  } while ((long)uVar50 < (long)(int)uVar40);
                                }
                                pcVar44 = pcVar44 + lVar28;
                                uVar1 = (int)uVar47 + 1;
                                uVar47 = (ulong)uVar1;
                              } while ((int)uVar1 < (int)uVar16);
                            }
                            uVar41 = uVar41 + 1;
                          } while (uVar41 < uVar6);
                        }
                        if (0 < lVar68) {
                          puVar33 = (undefined1 *)
                                    (lVar34 + ((int)lVar63 +
                                              *(int *)(lVar61 + 0x18) *
                                              ((int)uVar46 +
                                              *(int *)(lVar61 + 0x14) *
                                              ((int)uStack_5a8 +
                                              iStack_5b4 * *(int *)(lVar61 + 0x10)))));
                          puVar29 = auStack_480;
                          uVar41 = uVar48;
                          do {
                            iVar31 = *puVar29 - iVar37 * iVar15 <<
                                     (ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU) & 0x1f);
                            if (((uVar59 & 0xffffffff) == 0x80000000) && (iVar31 == -0x80000000)) {
                              uVar69 = 0x7fffffff;
                            }
                            else {
                              lVar56 = 0x40000000;
                              if (0x7fffffffffffffff < (ulong)((long)(int)uVar59 * (long)iVar31)) {
                                lVar56 = -0x3fffffff;
                              }
                              uVar50 = lVar56 + (long)(int)uVar59 * (long)iVar31;
                              uVar47 = uVar50 + 0x7fffffff;
                              if (-1 < (long)uVar50) {
                                uVar47 = uVar50;
                              }
                              uVar69 = (uint)(uVar47 >> 0x1f);
                            }
                            iVar31 = *(int *)(param_1 + 0x7c) + ((int)uVar69 >> (uVar3 & 0x1f));
                            if (((int)uVar13 >> 1) - ((int)uVar69 >> 0x1f) < (int)(uVar69 & uVar13))
                            {
                              iVar31 = iVar31 + 1;
                            }
                            if (iVar31 < -0x7f) {
                              iVar31 = -0x80;
                            }
                            if (0x7e < iVar31) {
                              iVar31 = 0x7f;
                            }
                            *puVar33 = (char)iVar31;
                            uVar41 = uVar41 - 1;
                            puVar33 = puVar33 + 1;
                            puVar29 = puVar29 + 1;
                          } while (uVar41 != 0);
                        }
                        uVar46 = uVar46 + 1;
                      } while (uVar46 != uVar11);
                    }
                    uStack_5a8 = uStack_5a8 + 1;
                    uStack_5ec = uStack_5ec - iVar53;
                  } while (uStack_5a8 != uVar66);
                }
                lVar63 = lVar63 + 0x100;
                uVar65 = uVar65 - 0x100;
              } while ((int)lVar63 < (int)uVar26);
            }
            uVar42 = uVar42 + 1;
            iStack_5b4 = iStack_5b4 + 1;
            bVar24 = uVar9 <= uVar42;
          } while (uVar42 != uVar9);
          fVar78 = *(float *)(param_1 + 0x78);
        }
        *(float *)(lVar61 + 0x4c) = fVar78;
        *(undefined4 *)(lVar61 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
      }
      else {
        (**(code **)*puVar27)(&uStack_4e8,puVar27,&uStack_500,1);
        lVar61 = uStack_4e8;
        if (0 < iVar39) {
          iVar37 = 0;
          iVar53 = 0;
          uVar38 = *(uint *)(param_1 + 0xac);
          iVar14 = *(int *)(param_1 + 0xb0);
          iVar31 = *(int *)(param_1 + 0x98);
          iVar52 = *(int *)(param_1 + 0x9c);
          uVar26 = *(uint *)(param_1 + 0xa8);
          iVar15 = iVar8;
          if (*(int *)(param_1 + 0x94) <= iVar8) {
            iVar15 = *(int *)(param_1 + 0x94);
          }
          iVar10 = iVar7;
          if (*(int *)(param_1 + 0x90) <= iVar7) {
            iVar10 = *(int *)(param_1 + 0x90);
          }
          uStack_5ec = 0;
          do {
            if (0 < iVar14) {
              iVar2 = 0;
              uVar11 = uStack_5ec;
              uVar66 = uVar26;
              do {
                if (0 < (int)uVar38) {
                  uVar59 = 0;
                  iVar12 = iVar2 * iVar52;
                  uVar3 = iVar12 + uVar26;
                  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
                  iVar12 = iVar15 + uVar26 + iVar12;
                  uVar19 = uVar26;
                  uVar13 = uVar11;
                  if (iVar8 <= iVar12) {
                    iVar12 = iVar8;
                  }
                  do {
                    if ((int)uVar3 < iVar12) {
                      uVar65 = 0;
                      uVar67 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
                      uVar5 = uVar9 * (iVar7 * (iVar37 + (uVar66 & ((int)uVar66 >> 0x1f ^
                                                                   0xffffffffU))) + uVar67);
                      lVar34 = *(long *)(lVar61 + 0x40);
                      lVar28 = lVar34 + (long)(int)(((iVar2 + iVar53 * iVar14) * uVar38 +
                                                    (int)uVar59) * uVar9) * 4;
                      iVar25 = iVar31 * (int)uVar59;
                      uVar40 = iVar25 + uVar26;
                      iVar25 = iVar10 + uVar26 + iVar25;
                      if (iVar7 <= iVar25) {
                        iVar25 = iVar7;
                      }
                      bVar24 = true;
                      uVar69 = uVar3;
                      do {
                        bVar22 = bVar24;
                        if ((int)(uVar40 & ((int)uVar40 >> 0x1f ^ 0xffffffffU)) < iVar25) {
                          uVar42 = (ulong)uVar67;
                          uVar16 = uVar5;
                          do {
                            if (bVar24) {
                              if (uVar9 != 0) {
                                _memmove(lVar28,*(long *)(*plVar60 + 0x40) +
                                                (long)(int)(((uVar69 + iVar53 * iVar8) * iVar7 +
                                                            (int)uVar42) * uVar9) * 4,
                                         (long)(int)uVar9 << 2);
                              }
                            }
                            else if (0 < (int)uVar9) {
                              pfVar62 = (float *)(*(long *)(*plVar60 + 0x40) +
                                                 (-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 |
                                                 (ulong)uVar16 << 2));
                              pfVar43 = (float *)(lVar34 + (-(ulong)(uVar13 >> 0x1f) &
                                                            0xfffffffc00000000 | (ulong)uVar13 << 2)
                                                 );
                              uVar48 = (ulong)uVar9;
                              do {
                                *pfVar43 = *pfVar62 + *pfVar43;
                                uVar48 = uVar48 - 1;
                                pfVar62 = pfVar62 + 1;
                                pfVar43 = pfVar43 + 1;
                              } while (uVar48 != 0);
                            }
                            bVar24 = false;
                            uVar65 = uVar65 + 1;
                            uVar42 = uVar42 + 1;
                            uVar16 = uVar16 + uVar9;
                            bVar22 = false;
                          } while ((long)uVar42 < (long)iVar25);
                        }
                        bVar24 = bVar22;
                        uVar69 = uVar69 + 1;
                        uVar5 = uVar5 + iVar7 * uVar9;
                      } while ((int)uVar69 < iVar12);
                      if (1 < (int)uVar65) {
                        uStack_498 = 0;
                        uStack_490 = 0;
                        uStack_4a0._0_4_ = 1;
                        uStack_4a0._4_4_ = uVar9;
                        FUN_109c0ffb0(auStack_480,&uStack_4a0,lVar28,0);
                        uStack_4a0 = CONCAT44(uStack_4a0._4_4_,(float)uVar65);
                        uVar65 = auStack_480[2] & ((int)auStack_480[2] >> 0x1f ^ 0xffffffffU);
                        if (4 < (int)uVar65) {
                          uVar65 = 5;
                        }
                        iVar25 = 0xf5749aa;
                        FUN_109c60fbc(&UNK_10f5749aa,0x1a,auStack_474,uVar65);
                        _vDSP_vsdiv(uStack_440,1,&uStack_4a0,uStack_440,1,(long)iVar25);
                        FUN_109c10e9c(auStack_480);
                      }
                    }
                    uVar59 = uVar59 + 1;
                    uVar19 = uVar19 + iVar31;
                    uVar13 = uVar13 + uVar9;
                  } while (uVar59 != uVar38);
                }
                iVar2 = iVar2 + 1;
                uVar66 = uVar66 + iVar52;
                uVar11 = uVar11 + uVar38 * uVar9;
              } while (iVar2 != iVar14);
            }
            iVar53 = iVar53 + 1;
            iVar37 = iVar37 + iVar8;
            uStack_5ec = uStack_5ec + uVar38 * uVar9 * iVar14;
          } while (iVar53 != iVar39);
        }
      }
LAB_109c535ec:
      func_0x000109c18360(*param_3,&uStack_4e8);
      puVar29 = (uint *)&uStack_4e8;
      goto LAB_109c53d48;
    }
    if (iVar39 != 0) {
      func_0x000105688514(&UNK_10f5a5c84);
LAB_109c53dd0:
      func_0x000105688514(&UNK_10f5a4075);
LAB_109c53ddc:
      func_0x000105688514(&UNK_10f5a5cae);
      goto LAB_109c53de8;
    }
    iVar39 = *(int *)(lVar61 + 0xc);
    iVar8 = *(int *)(lVar61 + 0x10);
    iVar7 = *(int *)(lVar61 + 0x14);
    uVar9 = *(uint *)(lVar61 + 0x18);
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      iVar53 = *(int *)(param_1 + 0x9c);
      if (*(byte *)(param_1 + 0xbd) < 2) {
        cVar35 = *(char *)(param_1 + 0xbc);
        iVar37 = iVar53 + -1;
        iVar31 = *(int *)(param_1 + 0x98);
        iVar15 = iVar31 + -1;
        if (cVar35 == '\0') {
          iVar37 = 0;
        }
        uVar26 = *(uint *)(param_1 + 0xa4);
        iVar14 = 0;
        if (iVar53 != 0) {
          iVar14 = (int)((iVar8 - *(int *)(param_1 + 0x94)) + uVar26 * 2 + iVar37) / iVar53;
        }
        if (cVar35 == '\0') {
          iVar15 = 0;
        }
        iVar52 = 1;
        iVar37 = iVar52;
        if (1 < iVar14 + 1) {
          iVar37 = iVar14 + 1;
        }
        *(int *)(param_1 + 0xb0) = iVar37;
        iVar14 = 0;
        if (iVar31 != 0) {
          iVar14 = (int)(((*(int *)(lVar61 + 0x14) + uVar26 * 2) - *(int *)(param_1 + 0x90)) +
                        iVar15) / iVar31;
        }
        if (1 < iVar14 + 1) {
          iVar52 = iVar14 + 1;
        }
        *(uint *)(param_1 + 0xa8) = -uVar26;
        *(int *)(param_1 + 0xac) = iVar52;
        uVar38 = uVar26;
        uVar66 = uVar26;
        if (cVar35 == '\x01') {
          uVar38 = (*(int *)(param_1 + 0x94) + (iVar37 + -1) * iVar53) - (iVar8 + uVar26);
          uVar66 = ((*(int *)(param_1 + 0x90) - uVar26) - iVar7) + (iVar52 + -1) * iVar31;
        }
      }
      else {
        if (*(byte *)(param_1 + 0xbd) != 2) goto LAB_109c53dd0;
        iVar37 = 0;
        if (iVar53 != 0) {
          iVar37 = (iVar8 + iVar53 + -1) / iVar53;
        }
        if (iVar37 < 2) {
          iVar37 = 1;
        }
        *(int *)(param_1 + 0xb0) = iVar37;
        iVar37 = *(int *)(param_1 + 0x98);
        iVar53 = 0;
        if (iVar37 != 0) {
          iVar53 = (*(int *)(lVar61 + 0x14) + iVar37 + -1) / iVar37;
        }
        if (iVar53 < 2) {
          iVar53 = 1;
        }
        *(int *)(param_1 + 0xac) = iVar53;
        uVar38 = (*(int *)(param_1 + 0x90) - *(int *)(lVar61 + 0x14)) + (iVar53 + -1) * iVar37;
        uVar38 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
        uVar26 = uVar38 >> 1;
        *(uint *)(param_1 + 0xa8) = -(uVar38 >> 1);
        uVar38 = uVar38 - (uVar38 >> 1);
        uVar66 = uVar38;
      }
    }
    else {
      uVar26 = 0;
      uVar38 = 0;
      uVar66 = 0;
    }
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    if ((uint *)(lVar61 + 8U) != (uint *)&uStack_4e8) {
      uVar11 = *(uint *)(lVar61 + 8U);
      if (uVar11 != 0) {
        _memmove((ulong)&uStack_4e8 | 4,(int *)(lVar61 + 0xc),(long)(int)uVar11 << 2);
      }
      uStack_4e8 = (ulong)uVar11;
    }
    uStack_4e8 = CONCAT44(iVar39,(uint)uStack_4e8);
    uStack_4e0 = NEON_rev64(*(undefined8 *)(param_1 + 0xac),4);
    uStack_4d8 = CONCAT44(uStack_4d8._4_4_,uVar9);
    puVar27 = (undefined8 *)**(undefined8 **)(param_1 + 0x68);
    if (*(char *)(lVar61 + 0x48) != '\x02') {
      (**(code **)*puVar27)(auStack_480,puVar27,&uStack_4e8,1);
      if (0 < iVar39) {
        iVar37 = 0;
        iVar53 = 0;
        uVar38 = *(uint *)(param_1 + 0xac);
        iVar14 = *(int *)(param_1 + 0xb0);
        iVar15 = *(int *)(param_1 + 0x98);
        iVar52 = *(int *)(param_1 + 0x9c);
        uVar26 = *(uint *)(param_1 + 0xa8);
        iVar31 = *(int *)(param_1 + 0x90);
        iVar10 = *(int *)(param_1 + 0x94);
        uStack_5ec = 0;
        do {
          if (0 < iVar14) {
            iVar2 = 0;
            uVar11 = uVar26;
            uVar66 = uStack_5ec;
            do {
              if (0 < (int)uVar38) {
                uStack_548 = 0;
                iVar12 = iVar2 * iVar52;
                uVar3 = iVar12 + uVar26;
                uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
                iVar12 = iVar10 + uVar26 + iVar12;
                uVar19 = uVar26;
                uVar13 = uVar66;
                if (iVar8 <= iVar12) {
                  iVar12 = iVar8;
                }
                do {
                  uStack_550 = (ulong)uVar13;
                  if ((int)uVar3 < iVar12) {
                    uVar5 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
                    uVar40 = uVar9 * (iVar7 * (iVar37 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU
                                                                  ))) + uVar5);
                    lVar61 = *(long *)(CONCAT44(auStack_480[1],auStack_480[0]) + 0x40);
                    iVar25 = iVar15 * (int)uStack_548;
                    uVar65 = iVar25 + uVar26;
                    iVar25 = iVar31 + uVar26 + iVar25;
                    if (iVar7 <= iVar25) {
                      iVar25 = iVar7;
                    }
                    pVar4 = (unkbyte10 *)
                            (lVar61 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 |
                                      uStack_550 << 2));
                    bVar24 = true;
                    uVar67 = uVar3;
                    do {
                      bVar22 = bVar24;
                      if ((int)(uVar65 & ((int)uVar65 >> 0x1f ^ 0xffffffffU)) < iVar25) {
                        uVar59 = (ulong)uVar5;
                        uVar69 = uVar40;
                        do {
                          lVar28 = *(long *)(*plVar60 + 0x40);
                          if (bVar24) {
                            if (uVar9 != 0) {
                              _memmove(lVar61 + (long)(int)(((iVar2 + iVar53 * iVar14) * uVar38 +
                                                            (int)uStack_548) * uVar9) * 4,
                                       lVar28 + (long)(int)(((uVar67 + iVar53 * iVar8) * iVar7 +
                                                            (int)uVar59) * uVar9) * 4,
                                       (long)(int)uVar9 << 2);
                            }
                          }
                          else {
                            uVar42 = -(ulong)(uVar69 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar69 << 2;
                            if ((int)uVar9 < 4) {
                              uVar48 = 0;
                            }
                            else {
                              uVar48 = 0;
                              pauVar49 = (undefined1 (*) [16])(lVar28 + uVar42);
                              pVar51 = pVar4;
                              do {
                                uVar72 = *(undefined8 *)((long)pVar51 + 8);
                                auVar73._10_2_ = (short)((ulong)uVar72 >> 0x10);
                                auVar73._0_10_ = *pVar51;
                                auVar73._12_2_ = (short)((ulong)uVar72 >> 0x20);
                                auVar73._14_2_ = (short)((ulong)uVar72 >> 0x30);
                                auVar73 = NEON_fmax(auVar73,*pauVar49,4);
                                *(long *)((long)pVar51 + 8) = auVar73._8_8_;
                                *(long *)pVar51 = auVar73._0_8_;
                                uVar48 = uVar48 + 4;
                                pauVar49 = pauVar49 + 1;
                                pVar51 = pVar51 + 1;
                              } while ((long)uVar48 <= (long)(int)uVar9 + -4);
                              uVar48 = uVar48 & 0xffffffff;
                            }
                            if ((int)uVar48 < (int)uVar9) {
                              lVar34 = uVar9 - uVar48;
                              pfVar62 = (float *)(lVar28 + uVar42 + uVar48 * 4);
                              pfVar43 = (float *)((long)pVar4 + uVar48 * 4);
                              do {
                                fVar78 = *pfVar62;
                                if (*pfVar62 <= *pfVar43) {
                                  fVar78 = *pfVar43;
                                }
                                *pfVar43 = fVar78;
                                lVar34 = lVar34 + -1;
                                pfVar62 = pfVar62 + 1;
                                pfVar43 = pfVar43 + 1;
                              } while (lVar34 != 0);
                            }
                          }
                          bVar24 = false;
                          uVar59 = uVar59 + 1;
                          uVar69 = uVar69 + uVar9;
                          bVar22 = false;
                        } while ((long)uVar59 < (long)iVar25);
                      }
                      bVar24 = bVar22;
                      uVar67 = uVar67 + 1;
                      uVar40 = uVar40 + iVar7 * uVar9;
                    } while ((int)uVar67 < iVar12);
                  }
                  uStack_548 = uStack_548 + 1;
                  uVar19 = uVar19 + iVar15;
                  uVar13 = uVar13 + uVar9;
                } while (uStack_548 != uVar38);
              }
              iVar2 = iVar2 + 1;
              uVar66 = uVar66 + uVar38 * uVar9;
              uVar11 = uVar11 + iVar52;
            } while (iVar2 != iVar14);
          }
          iVar53 = iVar53 + 1;
          uStack_5ec = uStack_5ec + uVar38 * uVar9 * iVar14;
          iVar37 = iVar37 + iVar8;
        } while (iVar53 != iVar39);
      }
LAB_109c53d34:
      func_0x000109c18360(*param_3,auStack_480);
      goto LAB_109c53d44;
    }
    (**(code **)*puVar27)(auStack_480,puVar27,&uStack_4e8,2);
    lVar61 = CONCAT44(auStack_480[1],auStack_480[0]);
    lVar34 = *plVar60;
    iVar39 = *(int *)(lVar34 + 0xc);
    iVar8 = *(int *)(lVar34 + 0x10);
    iVar7 = *(int *)(lVar34 + 0x14);
    lVar64 = (long)*(int *)(lVar34 + 0x18);
    plVar70 = (long *)(param_1 + 8);
    lVar28 = *plVar70;
    if (lVar28 == 0) {
      if (*(char *)(param_1 + 0x84) == '\x01') {
        iVar53 = *(int *)(param_1 + 0x7c) +
                 (int)(*(float *)(param_1 + 0x80) / *(float *)(param_1 + 0x78));
        if (iVar53 < -0x7f) {
          iVar53 = -0x80;
        }
        if (0x7e < iVar53) {
          iVar53 = 0x7f;
        }
        uVar30 = (undefined1)iVar53;
      }
      else {
        uVar30 = 0x80;
      }
      uVar36 = 0x7f;
      if (*(char *)(param_1 + 0x8c) == '\x01') {
        iVar53 = *(int *)(param_1 + 0x7c) +
                 (int)(*(float *)(param_1 + 0x88) / *(float *)(param_1 + 0x78));
        if (iVar53 < -0x7f) {
          iVar53 = -0x80;
        }
        if (0x7e < iVar53) {
          iVar53 = 0x7f;
        }
        uVar36 = (undefined1)iVar53;
      }
      func_0x000109bd5160(uVar26,uVar66,uVar38,uVar26,*(undefined4 *)(param_1 + 0x94),
                          *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x9c),
                          *(undefined4 *)(param_1 + 0x98),0x100000001,
                          CONCAT71(CONCAT61((int6)((ulong)in_stack_fffffffffffff988 >> 0x10),uVar36)
                                   ,uVar30) & 0xffffffff,plVar70);
      if ((uVar26 == 0) && (lVar28 = *plVar70, lVar28 != 0)) {
        lVar34 = *plVar60;
        goto LAB_109c53c3c;
      }
    }
    else {
LAB_109c53c3c:
      lVar34 = *(long *)(lVar34 + 0x40);
      lVar63 = *(long *)(lVar61 + 0x40);
      if ((((*(int *)(param_1 + 0xc0) != iVar39) || (*(int *)(param_1 + 0xc4) != iVar8)) ||
          (*(int *)(param_1 + 200) != iVar7)) ||
         ((*(long *)(param_1 + 0xd0) != lVar34 || (*(long *)(param_1 + 0xd8) != lVar63)))) {
        func_0x000109bd5464(lVar28,0x5d,(long)iVar39,(long)iVar8,(long)iVar7,lVar64,lVar64,lVar64,0,
                            *(undefined8 *)(lVar28 + 0xe8),lVar28 + 0x70,8,0,0);
        if (((int)lVar28 != 0) || (lVar28 = *plVar70, *(int *)(lVar28 + 0xb8) != 0x5d))
        goto LAB_109c53da4;
        if (*(int *)(lVar28 + 0x200) != 2) {
          if (*(int *)(lVar28 + 0x200) == 0) goto LAB_109c53da4;
          *(long *)(lVar28 + 0x130) = lVar34 - *(long *)(*(long *)(lVar28 + 0x10) + 0x98);
          *(long *)(lVar28 + 0x140) = lVar63;
          *(undefined4 *)(lVar28 + 0x200) = 1;
          lVar28 = *plVar70;
        }
        *(int *)(param_1 + 0xc0) = iVar39;
        *(int *)(param_1 + 0xc4) = iVar8;
        *(int *)(param_1 + 200) = iVar7;
        *(long *)(param_1 + 0xd0) = lVar34;
        *(long *)(param_1 + 0xd8) = lVar63;
      }
      iVar39 = (int)lVar28;
      func_0x000109bce408();
      if (iVar39 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar61 + 0x20,param_1 + 0x48);
        *(undefined4 *)(lVar61 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(lVar61 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
        goto LAB_109c53d34;
      }
    }
  }
  else {
LAB_109c53d4c:
    *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar60 + 0x3c);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
LAB_109c53da4:
  func_0x000105688514(&UNK_10f5a5cae);
LAB_109c53de8:
                    /* WARNING: Does not return */
  pcVar23 = (code *)SoftwareBreakpoint(1,0x109c53dec);
  (*pcVar23)();
}



/* Entry: 109c53e38; end: 109c53f2b;  */

undefined8 * FUN_109c53e38(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2e450;
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a5cf9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c53f2c; end: 109c53f8f;  */

undefined8 * FUN_109c53f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e450;
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



/* Entry: 109c53f90; end: 109c545e3;  */

float * FUN_109c53f90(long param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  char cVar13;
  float *pfVar14;
  long *plVar15;
  uint uVar16;
  float *pfVar17;
  long lVar18;
  undefined *puVar19;
  uint uVar20;
  char *pcVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  uint uVar31;
  int iVar32;
  float fVar33;
  undefined8 uVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long *plStack_f0;
  float *pfStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  float *pfStack_d0;
  float *pfStack_c8;
  float afStack_c0 [18];
  long lStack_78;
  
  cVar13 = (char)&pfStack_d0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  pfVar17 = *(float **)*param_2;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    pfStack_c8 = (float *)((undefined8 *)*param_2)[1];
    pfStack_d0 = pfVar17;
    if (pfStack_c8 != (float *)0x0) {
      pfVar17 = pfStack_c8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pfVar17,0x10);
        if (bVar7) {
          *(long *)pfVar17 = *(long *)pfVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (afStack_c0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),pfVar17 + 2,
               *(undefined1 *)(pfVar17 + 0x12));
    FUN_109c18570(&pfStack_d0,afStack_c0);
  }
  pfVar17 = (float *)*param_3;
  func_0x000109c1e534();
  pfVar11 = pfStack_c8;
  if (pfStack_c8 != (float *)0x0) {
    pfVar10 = pfStack_c8 + 2;
    do {
      lVar18 = *(long *)pfVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pfVar10,0x10);
      if (bVar7) {
        *(long *)pfVar10 = lVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*(long *)pfStack_c8 + 0x10))(pfStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pfVar17 = pfVar11;
    }
  }
  if ((bVar3 & 1) == 0) {
    pfVar17 = afStack_c0;
    FUN_109c180ec();
  }
  plVar25 = (long *)*param_2;
  lVar18 = *plVar25;
  if (*(char *)(lVar18 + 0x48) == '\x02') {
    uVar16 = *(uint *)(*(long *)(param_1 + 0x90) + 8);
    uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar16) {
      uVar16 = 5;
    }
    pfVar17 = (float *)&UNK_10f5749aa;
    cVar13 = '\x1a';
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,*(long *)(param_1 + 0x90) + 0xc,uVar16);
    plVar25 = (long *)*param_2;
    if ((int)pfVar17 == 1) {
      param_3 = (long *)*param_3;
      lVar18 = *plVar25;
      fVar36 = *(float *)(lVar18 + 0x4c);
      fVar37 = *(float *)(param_1 + 0x78);
      fVar33 = (**(float **)(*(long *)(param_1 + 0x90) + 0x40) * fVar36) / fVar37;
      if (fVar33 == 0.0) {
        uVar24 = 0;
      }
      else {
        dVar35 = (double)fVar33;
        _frexp(&pfStack_d0);
        uVar24 = (ulong)(double)(long)(dVar35 * 2147483648.0);
        uVar16 = (uint)pfStack_d0;
        if (uVar24 == 0x80000000) {
          uVar16 = (uint)pfStack_d0 + 1;
        }
        uVar27 = 0x40000000;
        if (uVar24 != 0x80000000) {
          uVar27 = uVar24 & 0xffffffff;
        }
        uVar20 = 0;
        if (-0x20 < (int)uVar16) {
          uVar20 = uVar16;
        }
        uVar24 = 0;
        if (-0x20 < (int)uVar16) {
          uVar24 = uVar27;
        }
        uVar24 = uVar24 | (ulong)uVar20 << 0x20;
      }
      fVar36 = fVar36 / fVar37;
      if (fVar36 == 0.0) {
        uVar27 = 0;
      }
      else {
        dVar35 = (double)fVar36;
        _frexp(&pfStack_d0);
        uVar27 = (ulong)(double)(long)(dVar35 * 2147483648.0);
        uVar16 = (uint)pfStack_d0;
        if (uVar27 == 0x80000000) {
          uVar16 = (uint)pfStack_d0 + 1;
        }
        uVar12 = 0x40000000;
        if (uVar27 != 0x80000000) {
          uVar12 = uVar27 & 0xffffffff;
        }
        uVar20 = 0;
        if (-0x20 < (int)uVar16) {
          uVar20 = uVar16;
        }
        uVar27 = 0;
        if (-0x20 < (int)uVar16) {
          uVar27 = uVar12;
        }
        uVar27 = uVar27 | (ulong)uVar20 << 0x20;
      }
      uVar16 = *(uint *)(lVar18 + 8) & ((int)*(uint *)(lVar18 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar16) {
        uVar16 = 5;
      }
      puVar19 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar18 + 0xc,uVar16);
      lVar18 = *param_3;
      if (0 < (int)puVar19) {
        uVar20 = (uint)(uVar24 >> 0x20);
        uVar16 = 0;
        if ((int)uVar20 < 1) {
          uVar16 = -uVar20;
        }
        uVar4 = ~(uint)(-1L << ((ulong)uVar16 & 0x3f));
        uVar8 = (uint)(uVar27 >> 0x20);
        uVar2 = 0;
        if ((int)uVar8 < 1) {
          uVar2 = -uVar8;
        }
        uVar5 = ~(uint)(-1L << ((ulong)uVar2 & 0x3f));
        uVar12 = (ulong)puVar19 & 0xffffffff;
        pcVar21 = *(char **)(*plVar25 + 0x40);
        puVar22 = *(undefined1 **)(lVar18 + 0x40);
        do {
          iVar32 = (int)*pcVar21 - *(int *)(*plVar25 + 0x50);
          if (iVar32 < 0) {
            iVar32 = iVar32 << (ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU) & 0x1f);
            if (((uVar24 & 0xffffffff) == 0x80000000) && (iVar32 == -0x80000000)) {
              uVar28 = 0x7fffffff;
            }
            else {
              lVar18 = 0x40000000;
              if (0x7fffffffffffffff < (ulong)((long)(int)uVar24 * (long)iVar32)) {
                lVar18 = -0x3fffffff;
              }
              uVar30 = lVar18 + (long)(int)uVar24 * (long)iVar32;
              uVar1 = uVar30 + 0x7fffffff;
              if (-1 < (long)uVar30) {
                uVar1 = uVar30;
              }
              uVar28 = (uint)(uVar1 >> 0x1f);
            }
            uVar31 = uVar28 & uVar4;
            iVar32 = ((int)uVar4 >> 1) - ((int)uVar28 >> 0x1f);
            iVar29 = (int)uVar28 >> (uVar16 & 0x1f);
          }
          else {
            iVar32 = iVar32 << (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU) & 0x1f);
            if (((uVar27 & 0xffffffff) == 0x80000000) && (iVar32 == -0x80000000)) {
              uVar28 = 0x7fffffff;
            }
            else {
              lVar18 = 0x40000000;
              if (0x7fffffffffffffff < (ulong)((long)(int)uVar27 * (long)iVar32)) {
                lVar18 = -0x3fffffff;
              }
              uVar30 = lVar18 + (long)(int)uVar27 * (long)iVar32;
              uVar1 = uVar30 + 0x7fffffff;
              if (-1 < (long)uVar30) {
                uVar1 = uVar30;
              }
              uVar28 = (uint)(uVar1 >> 0x1f);
            }
            uVar31 = uVar28 & uVar5;
            iVar32 = ((int)uVar5 >> 1) - ((int)uVar28 >> 0x1f);
            iVar29 = (int)uVar28 >> (uVar2 & 0x1f);
          }
          iVar32 = iVar29 + *(int *)(param_1 + 0x7c) + (uint)(iVar32 < (int)uVar31);
          if (iVar32 < -0x7f) {
            iVar32 = -0x80;
          }
          if (0x7e < iVar32) {
            iVar32 = 0x7f;
          }
          *puVar22 = (char)iVar32;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar21 + 1;
          puVar22 = puVar22 + 1;
        } while (uVar12 != 0);
        lVar18 = *param_3;
      }
      pfVar17 = (float *)(lVar18 + 0x20);
      cVar13 = (char)param_1 + 'H';
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      lVar18 = *param_3;
      *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)(*plVar25 + 0x3c);
      *(undefined4 *)(lVar18 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(lVar18 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
      goto LAB_109c5456c;
    }
    lVar18 = *plVar25;
  }
  if (*(int *)(lVar18 + 0x3c) == 0) {
    uVar16 = *(uint *)(lVar18 + 8);
  }
  else {
    if (*(int *)(lVar18 + 0x3c) != 2 || *(int *)(lVar18 + 8) != 4) goto LAB_109c5456c;
    uVar16 = 4;
  }
  iVar32 = *(int *)(lVar18 + 0xc);
  plVar26 = (long *)*param_3;
  iVar29 = *(int *)(lVar18 + 0x18);
  param_3 = (long *)(long)iVar29;
  uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar16) {
    uVar16 = 5;
  }
  iVar9 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(int *)(lVar18 + 0xc),uVar16);
  pfStack_d0 = (float *)0x0;
  pfStack_c8 = (float *)0x0;
  pfVar17 = *(float **)(*(long *)(param_1 + 0x90) + 0x40);
  if (*(int *)(param_1 + 0xa0) == 1) {
    if (iVar29 != 0) {
      fVar33 = *pfVar17;
      FUN_1093c61bc(&pfStack_d0,param_3,1);
      if (0 < (long)pfStack_c8) {
        puVar19 = (undefined *)((long)pfStack_c8 + 1);
        pfVar17 = pfStack_d0;
        do {
          *pfVar17 = fVar33;
          puVar19 = puVar19 + -1;
          pfVar17 = pfVar17 + 1;
        } while ((undefined *)0x1 < puVar19);
      }
    }
  }
  else if (iVar29 != 0) {
    FUN_1093c61bc(&pfStack_d0,param_3,1);
    pfVar11 = (float *)((long)pfStack_c8 + 3);
    if (-1 < (long)pfStack_c8) {
      pfVar11 = pfStack_c8;
    }
    if (3 < (long)pfStack_c8) {
      lVar18 = 0;
      pfVar10 = pfStack_d0;
      pfVar14 = pfVar17;
      do {
        uVar34 = *(undefined8 *)pfVar14;
        *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)(pfVar14 + 2);
        *(undefined8 *)pfVar10 = uVar34;
        lVar18 = lVar18 + 4;
        pfVar10 = pfVar10 + 4;
        pfVar14 = pfVar14 + 4;
      } while (lVar18 < (long)((ulong)pfVar11 & 0xfffffffffffffffc));
    }
    lVar18 = (long)pfStack_c8 % 4;
    if (lVar18 != 0 && (long)((ulong)pfVar11 & 0xfffffffffffffffc) <= (long)pfStack_c8) {
      pfVar10 = pfStack_d0 + ((long)pfVar11 >> 2) * 4;
      pfVar17 = pfVar17 + ((long)pfVar11 >> 2) * 4;
      do {
        *pfVar10 = *pfVar17;
        lVar18 = lVar18 + -1;
        pfVar10 = pfVar10 + 1;
        pfVar17 = pfVar17 + 1;
      } while (lVar18 != 0);
    }
  }
  FUN_109c11af8(*plVar26,*plVar25);
  lVar18 = *plVar26;
  uVar16 = *(uint *)(*plVar25 + 0xc);
  if (0 < (int)uVar16) {
    uVar24 = 0;
    uVar20 = 0;
    if (iVar32 != 0) {
      uVar20 = iVar9 / iVar32;
    }
    pfVar17 = *(float **)(lVar18 + 0x40);
    iVar32 = 0;
    if (iVar29 != 0) {
      iVar32 = (int)uVar20 / iVar29;
    }
    do {
      if (0 < iVar32) {
        lVar23 = 0;
        pfVar11 = pfVar17;
        do {
          pfVar10 = pfVar11;
          pfVar14 = pfStack_d0;
          plVar15 = param_3;
          if (0 < iVar29) {
            do {
              fVar36 = *pfVar10;
              fVar33 = 0.0;
              if (0.0 <= fVar36) {
                fVar33 = fVar36;
              }
              fVar37 = 0.0;
              if (fVar36 <= 0.0) {
                fVar37 = fVar36;
              }
              *pfVar10 = fVar33 + *pfVar14 * fVar37;
              plVar15 = (long *)((long)plVar15 + -1);
              pfVar10 = pfVar10 + 1;
              pfVar14 = pfVar14 + 1;
            } while (plVar15 != (long *)0x0);
          }
          lVar23 = lVar23 + 1;
          pfVar11 = pfVar11 + (long)param_3;
        } while (lVar23 != iVar32);
      }
      uVar24 = uVar24 + 1;
      pfVar17 = (float *)((long)pfVar17 +
                         (-(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2));
    } while (uVar24 != uVar16);
  }
  cVar13 = (char)param_1 + 'H';
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar18 + 0x20);
  *(undefined4 *)(*plVar26 + 0x3c) = *(undefined4 *)(*plVar25 + 0x3c);
  pfVar17 = pfStack_d0;
  _free();
LAB_109c5456c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _free(pfStack_d0);
    pfVar11 = pfVar17;
    __Unwind_Resume();
    pcStack_d8 = FUN_109c545e4;
    *(undefined8 *)((long)pfVar11 + 0x59) = 0;
    *(undefined8 *)((long)pfVar11 + 0x51) = 0;
    pfVar11[0x14] = 0.0;
    pfVar11[0x15] = 0.0;
    pfVar11[0x12] = 0.0;
    pfVar11[0x13] = 0.0;
    pfVar11[0x10] = 0.0;
    pfVar11[0x11] = 0.0;
    pfVar11[0xe] = 0.0;
    pfVar11[0xf] = 0.0;
    pfVar11[0xc] = 0.0;
    pfVar11[0xd] = 0.0;
    pfVar11[10] = 0.0;
    pfVar11[0xb] = 0.0;
    pfVar11[8] = 0.0;
    pfVar11[9] = 0.0;
    pfVar11[6] = 0.0;
    pfVar11[7] = 0.0;
    pfVar11[4] = 0.0;
    pfVar11[5] = 0.0;
    pfVar11[2] = 0.0;
    pfVar11[3] = 0.0;
    *(undefined2 *)((long)pfVar11 + 0x61) = 1;
    *(undefined1 *)((long)pfVar11 + 99) = 0;
    pfVar11[0x1a] = 0.0;
    pfVar11[0x1b] = 0.0;
    pfVar11[0x1c] = 0.0;
    pfVar11[0x1d] = 0.0;
    pfVar11[0x1e] = 1.0;
    pfVar11[0x1f] = 0.0;
    *(undefined1 *)(pfVar11 + 0x20) = 0;
    *(undefined1 *)(pfVar11 + 0x21) = 0;
    *(undefined1 *)(pfVar11 + 0x22) = 0;
    *(undefined1 *)(pfVar11 + 0x23) = 0;
    *(undefined ***)pfVar11 = &PTR_FUN_110b2e490;
    *(char *)(pfVar11 + 0x24) = cVar13;
    plStack_f0 = param_3;
    pfStack_e8 = pfVar17;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107c31940(auStack_108,&UNK_10f5a5d03);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pfVar11 + 0xc,auStack_108);
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    return pfVar11;
  }
  return pfVar17;
}



/* Entry: 109c545e4; end: 109c546b7;  */

undefined8 * FUN_109c545e4(undefined8 *param_1,undefined1 param_2)

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
  *param_1 = &PTR_FUN_110b2e490;
  *(undefined1 *)(param_1 + 0x12) = param_2;
  func_0x000107c31940(auStack_38,&UNK_10f5a5d03);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c546b8; end: 109c54783;  */

undefined8 * FUN_109c546b8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 auStack_80 [9];
  long lStack_38;
  
  puVar1 = auStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  FUN_109c1b3e4(auStack_80,*(undefined4 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68),plVar2,
                *(undefined4 *)(param_1 + 0x7c),*(undefined1 *)(param_1 + 0x90));
  func_0x000109c18360(*param_3,auStack_80);
  FUN_109c180ec();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar2 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(puVar1 + 0xd);
  if (*(char *)((long)puVar1 + 0x5f) < '\0') {
    __ZdlPv(puVar1[9]);
  }
  if (*(char *)((long)puVar1 + 0x47) < '\0') {
    __ZdlPv(puVar1[6]);
  }
  FUN_109c61bbc(puVar1 + 1);
  return puVar1;
}



/* Entry: 109c54784; end: 109c54787;  */

undefined8 * FUN_109c54784(undefined8 *param_1)

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



/* Entry: 109c54788; end: 109c5479b;  */

void FUN_109c54788(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5479c; end: 109c5486b;  */

undefined8 * FUN_109c5479c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2e4d0;
  func_0x000107c31940(auStack_38,&UNK_10f5a5d0c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5486c; end: 109c5486f;  */

undefined8 * FUN_109c5486c(undefined8 *param_1)

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



/* Entry: 109c54870; end: 109c54883;  */

void FUN_109c54870(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c54884; end: 109c54acf;  */

void FUN_109c54884(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  float *pfVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  plVar8 = (long *)*param_3;
  param_2 = (long *)*param_2;
  lVar5 = *param_2;
  if (*(char *)(lVar5 + 0x48) == '\x04') {
    iVar10 = **(int **)(lVar5 + 0x40);
    iVar2 = **(int **)(param_2[4] + 0x40);
    iVar3 = **(int **)(param_2[2] + 0x40) - iVar10;
    iVar1 = -iVar3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = -iVar2;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    uVar9 = 0;
    if (iVar3 != 0) {
      uVar9 = (iVar1 + iVar3 + -1) / iVar3;
    }
    uVar11 = (ulong)uVar9;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 1;
    uStack_b4 = uVar9;
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_b8,4);
    func_0x000109c18360(plVar8,auStack_a0);
    FUN_109c180ec(auStack_a0);
    lVar5 = *plVar8;
    if (0 < (int)uVar9) {
      piVar7 = *(int **)(lVar5 + 0x40);
      do {
        *piVar7 = iVar10;
        iVar10 = iVar10 + iVar2;
        uVar11 = uVar11 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if (*(char *)(lVar5 + 0x48) != '\x01') goto LAB_109c54a58;
    fVar12 = **(float **)(lVar5 + 0x40);
    fVar13 = **(float **)(param_2[4] + 0x40);
    uVar9 = (uint)ABS((**(float **)(param_2[2] + 0x40) - fVar12) / fVar13);
    uVar11 = (ulong)uVar9;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 1;
    uStack_b4 = uVar9;
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_b8,1);
    func_0x000109c18360(plVar8,auStack_a0);
    FUN_109c180ec(auStack_a0);
    lVar5 = *plVar8;
    if (0 < (int)uVar9) {
      pfVar6 = *(float **)(lVar5 + 0x40);
      do {
        *pfVar6 = fVar12;
        fVar12 = fVar13 + fVar12;
        uVar11 = uVar11 - 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar11 != 0);
    }
  }
  *(undefined4 *)(lVar5 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_109c54a58:
  FUN_109c129d4(&uStack_b8);
  FUN_10928a5e0(auStack_a0,&UNK_10f5a3e0d,&uStack_b8);
  func_0x000105687ee0(auStack_a0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109c54a80);
  (*pcVar4)();
}



/* Entry: 109c54ad0; end: 109c54b9b;  */

undefined8 * FUN_109c54ad0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2e510;
  func_0x000107c31940(auStack_38,&UNK_10f5a5d12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c54b9c; end: 109c54b9f;  */

undefined8 * FUN_109c54b9c(undefined8 *param_1)

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



/* Entry: 109c54ba0; end: 109c54bb3;  */

void FUN_109c54ba0(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c54bb4; end: 109c551bb;  */

void FUN_109c54bb4(long param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long lVar37;
  long *plVar38;
  long *plVar39;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long alStack_80 [9];
  long lStack_38;
  
  plVar9 = alStack_80;
  plVar10 = alStack_80;
  plVar11 = alStack_80;
  plVar12 = alStack_80;
  plVar13 = alStack_80;
  plVar14 = alStack_80;
  plVar15 = alStack_80;
  plVar16 = alStack_80;
  plVar17 = alStack_80;
  plVar18 = alStack_80;
  plVar19 = alStack_80;
  plVar20 = alStack_80;
  plVar21 = alStack_80;
  plVar22 = alStack_80;
  plVar23 = alStack_80;
  plVar24 = alStack_80;
  plVar25 = alStack_80;
  plVar26 = alStack_80;
  plVar27 = alStack_80;
  plVar28 = alStack_80;
  plVar29 = alStack_80;
  plVar30 = alStack_80;
  plVar31 = alStack_80;
  plVar32 = alStack_80;
  plVar33 = alStack_80;
  plVar34 = alStack_80;
  plVar35 = alStack_80;
  plVar36 = alStack_80;
  plVar7 = alStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar39 = (long *)*param_2;
  puVar8 = (undefined1 *)0x1;
  plVar6 = param_3;
  plVar38 = param_3;
  FUN_109c182f4();
  iVar2 = *(int *)(*plVar39 + 0x3c);
  if ((iVar2 != 0) && (iVar2 != 2 || *(int *)(*plVar39 + 8) != 4)) goto LAB_109c550f0;
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          plVar38 = plVar39;
          FUN_109c551bc(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar23;
        }
        else {
          if (iVar2 != 1) goto LAB_109c550f0;
          plVar38 = plVar39;
          FUN_109c552ac(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar12;
        }
      }
      else if (iVar2 == 2) {
        plVar38 = plVar39;
        FUN_109c5539c(alStack_80,param_1);
        func_0x000109c18360(*param_3);
      }
      else {
        if (iVar2 != 3) goto LAB_109c550f0;
        plVar38 = plVar39;
        FUN_109c5548c(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar16;
      }
    }
    else if (iVar2 == 1) {
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          plVar38 = plVar39;
          FUN_109c5557c(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar35;
        }
        else {
          if (iVar2 != 1) goto LAB_109c550f0;
          plVar38 = plVar39;
          FUN_109c55664(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar15;
        }
      }
      else if (iVar2 == 2) {
        plVar38 = plVar39;
        FUN_109c5574c(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar36;
      }
      else {
        if (iVar2 != 3) goto LAB_109c550f0;
        plVar38 = plVar39;
        FUN_109c55834(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar22;
      }
    }
    else {
      if (iVar2 != 2) goto LAB_109c550f0;
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          plVar38 = plVar39;
          FUN_109c5591c(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar33;
        }
        else {
          if (iVar2 != 1) goto LAB_109c550f0;
          plVar38 = plVar39;
          FUN_109c55a08(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar10;
        }
      }
      else if (iVar2 == 2) {
        plVar38 = plVar39;
        FUN_109c55af4(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar34;
      }
      else {
        if (iVar2 != 3) goto LAB_109c550f0;
        plVar38 = plVar39;
        FUN_109c55be0(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar21;
      }
    }
  }
  else if (iVar2 < 5) {
    if (iVar2 == 3) {
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          plVar38 = plVar39;
          FUN_109c55ccc(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar25;
        }
        else {
          if (iVar2 != 1) goto LAB_109c550f0;
          plVar38 = plVar39;
          FUN_109c55db8(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar13;
        }
      }
      else if (iVar2 == 2) {
        plVar38 = plVar39;
        FUN_109c55ea4(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar27;
      }
      else {
        if (iVar2 != 3) goto LAB_109c550f0;
        plVar38 = plVar39;
        FUN_109c55f90(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar17;
      }
    }
    else {
      if (iVar2 != 4) goto LAB_109c550f0;
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          plVar38 = plVar39;
          FUN_109c5607c(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar29;
        }
        else {
          if (iVar2 != 1) goto LAB_109c550f0;
          plVar38 = plVar39;
          FUN_109c56164(alStack_80,param_1);
          func_0x000109c18360(*param_3);
          plVar24 = plVar9;
        }
      }
      else if (iVar2 == 2) {
        plVar38 = plVar39;
        FUN_109c5624c(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar31;
      }
      else {
        if (iVar2 != 3) goto LAB_109c550f0;
        plVar38 = plVar39;
        FUN_109c56334(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar19;
      }
    }
  }
  else if (iVar2 == 5) {
    iVar2 = *(int *)(param_1 + 0x94);
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        plVar38 = plVar39;
        FUN_109c5641c(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar26;
      }
      else {
        if (iVar2 != 1) goto LAB_109c550f0;
        plVar38 = plVar39;
        FUN_109c5650c(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar14;
      }
    }
    else if (iVar2 == 2) {
      plVar38 = plVar39;
      FUN_109c565fc(alStack_80,param_1);
      func_0x000109c18360(*param_3);
      plVar24 = plVar28;
    }
    else {
      if (iVar2 != 3) goto LAB_109c550f0;
      plVar38 = plVar39;
      FUN_109c566ec(alStack_80,param_1);
      func_0x000109c18360(*param_3);
      plVar24 = plVar18;
    }
  }
  else {
    if (iVar2 != 6) goto LAB_109c550f0;
    iVar2 = *(int *)(param_1 + 0x94);
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        plVar38 = plVar39;
        FUN_109c567dc(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar30;
      }
      else {
        if (iVar2 != 1) goto LAB_109c550f0;
        plVar38 = plVar39;
        FUN_109c568c4(alStack_80,param_1);
        func_0x000109c18360(*param_3);
        plVar24 = plVar11;
      }
    }
    else if (iVar2 == 2) {
      plVar38 = plVar39;
      FUN_109c569ac(alStack_80,param_1);
      func_0x000109c18360(*param_3);
      plVar24 = plVar32;
    }
    else {
      if (iVar2 != 3) goto LAB_109c550f0;
      plVar38 = plVar39;
      FUN_109c56a94(alStack_80,param_1);
      func_0x000109c18360(*param_3);
      plVar24 = plVar20;
    }
  }
  FUN_109c180ec();
  plVar6 = plVar7;
  puVar8 = (undefined1 *)plVar24;
LAB_109c550f0:
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar39 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_80);
  __Unwind_Resume();
  lVar37 = *plVar38;
  uVar5 = *(undefined4 *)(lVar37 + 0xc);
  iVar2 = *(int *)(lVar37 + 0x10);
  iVar1 = *(int *)(lVar37 + 0x14);
  iVar3 = *(int *)(lVar37 + 0x18);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  if ((uint *)(lVar37 + 8U) != (uint *)&uStack_e8) {
    uVar4 = *(uint *)(lVar37 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_e8 | 4,(undefined4 *)(lVar37 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_e8 = (ulong)uVar4;
  }
  uStack_e8 = CONCAT44(uVar5,(uint)uStack_e8);
  uStack_e0 = 0x100000001;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,1);
  (*(code *)**(undefined8 **)**(undefined8 **)(puVar8 + 0x68))
            (plVar6,(undefined8 *)**(undefined8 **)(puVar8 + 0x68),&uStack_e8,1);
  FUN_109c56b7c(*(undefined8 *)(*plVar38 + 0x40),*(undefined8 *)(*plVar6 + 0x40),
                iVar1 * iVar2 * iVar3,uVar5);
  return;
}



/* Entry: 109c551bc; end: 109c552ab;  */

void FUN_109c551bc(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56b7c(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c552ac; end: 109c5539b;  */

void FUN_109c552ac(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56c58(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c5539c; end: 109c5548b;  */

void FUN_109c5539c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56d44(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c5548c; end: 109c5557b;  */

void FUN_109c5548c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56e10(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c5557c; end: 109c55663;  */

void FUN_109c5557c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  iVar5 = *(int *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  uVar3 = *(undefined4 *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56b7c(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c55664; end: 109c5574b;  */

void FUN_109c55664(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  iVar5 = *(int *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  uVar3 = *(undefined4 *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56c58(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c5574c; end: 109c55833;  */

void FUN_109c5574c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  iVar5 = *(int *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  uVar3 = *(undefined4 *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56d44(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c55834; end: 109c5591b;  */

void FUN_109c55834(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  iVar5 = *(int *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  uVar3 = *(undefined4 *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56e10(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c5591c; end: 109c55a07;  */

void FUN_109c5591c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56edc(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,uVar3,
                iVar2 * iVar1);
  return;
}



/* Entry: 109c55a08; end: 109c55af3;  */

void FUN_109c55a08(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56fb8(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,uVar3,
                iVar2 * iVar1);
  return;
}



/* Entry: 109c55af4; end: 109c55bdf;  */

void FUN_109c55af4(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c570a4(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,uVar3,
                iVar2 * iVar1);
  return;
}



/* Entry: 109c55be0; end: 109c55ccb;  */

void FUN_109c55be0(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = 0x100000001;
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c57180(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,uVar3,
                iVar2 * iVar1);
  return;
}



/* Entry: 109c55ccc; end: 109c55db7;  */

void FUN_109c55ccc(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  uVar5 = *(undefined4 *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  iVar3 = *(int *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(1,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56edc(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c55db8; end: 109c55ea3;  */

void FUN_109c55db8(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  uVar5 = *(undefined4 *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  iVar3 = *(int *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(1,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56fb8(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c55ea4; end: 109c55f8f;  */

void FUN_109c55ea4(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  uVar5 = *(undefined4 *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  iVar3 = *(int *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(1,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c570a4(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c55f90; end: 109c5607b;  */

void FUN_109c55f90(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_3;
  uVar5 = *(undefined4 *)(lVar7 + 0xc);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  iVar3 = *(int *)(lVar7 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar7 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar7 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar7 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(1,(uint)uStack_68);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  uStack_60 = uVar6;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c57180(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,
                iVar2 * iVar1 * iVar3,uVar5);
  return;
}



/* Entry: 109c5607c; end: 109c56163;  */

void FUN_109c5607c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  uVar2 = *(undefined4 *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(1,iVar1);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56edc(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),iVar1 * iVar5,
                uVar3,uVar2);
  return;
}



/* Entry: 109c56164; end: 109c5624b;  */

void FUN_109c56164(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  uVar2 = *(undefined4 *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(1,iVar1);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56fb8(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),iVar1 * iVar5,
                uVar3,uVar2);
  return;
}



/* Entry: 109c5624c; end: 109c56333;  */

void FUN_109c5624c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  uVar2 = *(undefined4 *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(1,iVar1);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c570a4(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),iVar1 * iVar5,
                uVar3,uVar2);
  return;
}



/* Entry: 109c56334; end: 109c5641b;  */

void FUN_109c56334(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  uVar2 = *(undefined4 *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(int *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(iVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(1,iVar1);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c57180(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),iVar1 * iVar5,
                uVar3,uVar2);
  return;
}



/* Entry: 109c5641c; end: 109c5650b;  */

void FUN_109c5641c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int aiStack_68 [6];
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  aiStack_68[3] = 0;
  aiStack_68[4] = 0;
  aiStack_68[5] = 0;
  iVar4 = aiStack_68[0];
  if (((int *)(lVar6 + 8U) != aiStack_68) && (iVar4 = *(int *)(lVar6 + 8U), iVar4 != 0)) {
    _memmove((ulong)aiStack_68 | 4,(int *)(lVar6 + 0xc),(long)iVar4 << 2);
  }
  aiStack_68[0] = iVar4;
  aiStack_68[1] = 1;
  aiStack_68[2] = 1;
  aiStack_68[3] = 1;
  aiStack_68[4] = uVar3;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),aiStack_68,1);
  FUN_109c56edc(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c5650c; end: 109c565fb;  */

void FUN_109c5650c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int aiStack_68 [6];
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  aiStack_68[3] = 0;
  aiStack_68[4] = 0;
  aiStack_68[5] = 0;
  iVar4 = aiStack_68[0];
  if (((int *)(lVar6 + 8U) != aiStack_68) && (iVar4 = *(int *)(lVar6 + 8U), iVar4 != 0)) {
    _memmove((ulong)aiStack_68 | 4,(int *)(lVar6 + 0xc),(long)iVar4 << 2);
  }
  aiStack_68[0] = iVar4;
  aiStack_68[1] = 1;
  aiStack_68[2] = 1;
  aiStack_68[3] = 1;
  aiStack_68[4] = uVar3;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),aiStack_68,1);
  FUN_109c56fb8(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c565fc; end: 109c566eb;  */

void FUN_109c565fc(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int aiStack_68 [6];
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  aiStack_68[3] = 0;
  aiStack_68[4] = 0;
  aiStack_68[5] = 0;
  iVar4 = aiStack_68[0];
  if (((int *)(lVar6 + 8U) != aiStack_68) && (iVar4 = *(int *)(lVar6 + 8U), iVar4 != 0)) {
    _memmove((ulong)aiStack_68 | 4,(int *)(lVar6 + 0xc),(long)iVar4 << 2);
  }
  aiStack_68[0] = iVar4;
  aiStack_68[1] = 1;
  aiStack_68[2] = 1;
  aiStack_68[3] = 1;
  aiStack_68[4] = uVar3;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),aiStack_68,1);
  FUN_109c570a4(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c566ec; end: 109c567db;  */

void FUN_109c566ec(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int aiStack_68 [6];
  
  lVar6 = *param_3;
  iVar5 = *(int *)(lVar6 + 0xc);
  iVar1 = *(int *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  uVar3 = *(undefined4 *)(lVar6 + 0x18);
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  aiStack_68[3] = 0;
  aiStack_68[4] = 0;
  aiStack_68[5] = 0;
  iVar4 = aiStack_68[0];
  if (((int *)(lVar6 + 8U) != aiStack_68) && (iVar4 = *(int *)(lVar6 + 8U), iVar4 != 0)) {
    _memmove((ulong)aiStack_68 | 4,(int *)(lVar6 + 0xc),(long)iVar4 << 2);
  }
  aiStack_68[0] = iVar4;
  aiStack_68[1] = 1;
  aiStack_68[2] = 1;
  aiStack_68[3] = 1;
  aiStack_68[4] = uVar3;
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),aiStack_68,1);
  FUN_109c57180(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),1,uVar3,
                iVar1 * iVar5 * iVar2);
  return;
}



/* Entry: 109c567dc; end: 109c568c3;  */

void FUN_109c567dc(long *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  uVar1 = *(undefined4 *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(iVar2,1);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56edc(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,
                iVar3 * iVar2,uVar1);
  return;
}



/* Entry: 109c568c4; end: 109c569ab;  */

void FUN_109c568c4(long *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  uVar1 = *(undefined4 *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(iVar2,1);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c56fb8(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,
                iVar3 * iVar2,uVar1);
  return;
}



/* Entry: 109c569ac; end: 109c56a93;  */

void FUN_109c569ac(long *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  uVar1 = *(undefined4 *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(iVar2,1);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c570a4(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,
                iVar3 * iVar2,uVar1);
  return;
}



/* Entry: 109c56a94; end: 109c56b7b;  */

void FUN_109c56a94(long *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_3;
  uVar5 = *(undefined4 *)(lVar6 + 0xc);
  uVar1 = *(undefined4 *)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((uint *)(lVar6 + 8U) != (uint *)&uStack_68) {
    uVar4 = *(uint *)(lVar6 + 8U);
    if (uVar4 != 0) {
      _memmove((ulong)&uStack_68 | 4,(undefined4 *)(lVar6 + 0xc),(long)(int)uVar4 << 2);
    }
    uStack_68 = (ulong)uVar4;
  }
  uStack_68 = CONCAT44(uVar5,(uint)uStack_68);
  uStack_60 = CONCAT44(iVar2,1);
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
            (param_1,(undefined8 *)**(undefined8 **)(param_2 + 0x68),&uStack_68,1);
  FUN_109c57180(*(undefined8 *)(*param_3 + 0x40),*(undefined8 *)(*param_1 + 0x40),uVar5,
                iVar3 * iVar2,uVar1);
  return;
}



/* Entry: 109c56b7c; end: 109c56c57;  */

undefined8
FUN_109c56b7c(undefined8 param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
             uint param_5,int param_6)

{
  ulong ****ppppuVar1;
  ulong uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  int iVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong ****ppppuVar13;
  ulong ****ppppuVar14;
  ulong ****ppppuVar15;
  undefined8 *puVar16;
  ulong *****unaff_x19;
  ulong *****pppppuVar17;
  ulong *****unaff_x20;
  ulong *****unaff_x21;
  ulong *****pppppuVar18;
  long unaff_x22;
  long lVar19;
  ulong *****unaff_x23;
  ulong *****pppppuVar20;
  ulong uVar21;
  long unaff_x24;
  long lVar22;
  ulong *****unaff_x25;
  ulong *****pppppuVar23;
  ulong *****unaff_x26;
  ulong *****unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *puVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  ulong ****ppppuStack_728;
  long lStack_720;
  undefined1 uStack_709;
  ulong ****ppppuStack_708;
  ulong ****ppppuStack_700;
  undefined1 *puStack_6f8;
  ulong ****ppppuStack_6f0;
  ulong ****appppuStack_6e8 [2];
  long lStack_6d8;
  ulong ****ppppuStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6a8;
  undefined1 *puStack_6a0;
  ulong ****ppppuStack_698;
  ulong ****ppppuStack_690;
  ulong ****ppppuStack_688;
  long lStack_680;
  ulong ****ppppuStack_678;
  long lStack_670;
  ulong ****ppppuStack_668;
  ulong ****ppppuStack_660;
  ulong ****ppppuStack_658;
  undefined8 ****ppppuStack_650;
  code *pcStack_648;
  ulong ****ppppuStack_638;
  ulong ****ppppuStack_630;
  undefined1 uStack_619;
  ulong ****ppppuStack_618;
  ulong ****ppppuStack_610;
  undefined1 *puStack_608;
  ulong ****ppppuStack_600;
  ulong ****appppuStack_5f8 [2];
  ulong ****ppppuStack_5e8;
  ulong ****ppppuStack_5e0;
  ulong ****ppppuStack_5d8;
  long lStack_5d0;
  long lStack_5b8;
  undefined1 *puStack_5b0;
  ulong ****ppppuStack_5a8;
  ulong ****ppppuStack_5a0;
  ulong ****ppppuStack_598;
  long lStack_590;
  ulong ****ppppuStack_588;
  long lStack_580;
  ulong ****ppppuStack_578;
  ulong ****ppppuStack_570;
  ulong ****ppppuStack_568;
  undefined8 ****ppppuStack_560;
  code *pcStack_558;
  ulong ****ppppuStack_550;
  ulong ****ppppuStack_548;
  undefined1 uStack_531;
  ulong ****ppppuStack_530;
  ulong ****ppppuStack_528;
  undefined1 *puStack_520;
  undefined1 *puStack_518;
  ulong ****appppuStack_510 [2];
  ulong ****ppppuStack_500;
  ulong ***pppuStack_4f8;
  ulong ****ppppuStack_4f0;
  ulong ****ppppuStack_4e8;
  long lStack_4e0;
  float fStack_4c8;
  long lStack_4c0;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  ulong ****ppppuStack_438;
  ulong ****ppppuStack_430;
  undefined1 uStack_419;
  ulong ****ppppuStack_418;
  ulong ****ppppuStack_410;
  undefined1 *puStack_408;
  ulong ****ppppuStack_400;
  ulong ****appppuStack_3f8 [2];
  ulong ****ppppuStack_3e8;
  ulong ****ppppuStack_3e0;
  ulong ****ppppuStack_3d8;
  long lStack_3d0;
  long lStack_3b8;
  undefined1 ****ppppuStack_360;
  code *pcStack_358;
  undefined1 uStack_341;
  ulong ****ppppuStack_340;
  long lStack_338;
  ulong ****ppppuStack_328;
  long lStack_320;
  ulong ****ppppuStack_318;
  undefined8 uStack_308;
  ulong ****ppppuStack_300;
  long lStack_2f8;
  ulong ****appppuStack_2f0 [2];
  long lStack_2e0;
  long lStack_2d8;
  ulong ****ppppuStack_2d0;
  ulong ****ppppuStack_2c8;
  long lStack_2c0;
  ulong ****ppppuStack_2b8;
  long lStack_2b0;
  ulong ****ppppuStack_2a8;
  ulong ****ppppuStack_2a0;
  ulong ****ppppuStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined1 uStack_271;
  ulong ****ppppuStack_270;
  long lStack_268;
  ulong ****ppppuStack_258;
  long lStack_250;
  ulong ****ppppuStack_248;
  undefined8 uStack_238;
  ulong ****ppppuStack_230;
  long lStack_228;
  ulong ****appppuStack_220 [2];
  long lStack_210;
  long lStack_208;
  ulong ****ppppuStack_200;
  ulong ****ppppuStack_1f8;
  long lStack_1f0;
  ulong ****ppppuStack_1e8;
  long lStack_1e0;
  ulong ****ppppuStack_1d8;
  ulong ****ppppuStack_1d0;
  ulong ****ppppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 uStack_1a1;
  ulong ****ppppuStack_1a0;
  ulong ****ppppuStack_198;
  ulong ****ppppuStack_188;
  ulong ****ppppuStack_180;
  long lStack_178;
  undefined8 uStack_168;
  long lStack_160;
  ulong ****ppppuStack_158;
  ulong ****appppuStack_150 [2];
  ulong ****ppppuStack_140;
  long lStack_138;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 uStack_c1;
  ulong ****ppppuStack_c0;
  ulong ****ppppuStack_b8;
  ulong ****ppppuStack_a8;
  ulong ****ppppuStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  long lStack_80;
  ulong ****ppppuStack_78;
  ulong ****appppuStack_70 [2];
  ulong ****ppppuStack_60;
  long lStack_58;
  
  uVar27 = (undefined4)((ulong)param_1 >> 0x20);
  fVar25 = (float)param_1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = param_2;
  pppppuVar9 = param_3;
  pppppuVar11 = param_4;
  if (0 < (int)param_5) {
    unaff_x22 = 0;
    unaff_x23 = (ulong *****)(long)(int)param_4;
    unaff_x24 = (long)(int)param_5;
    unaff_x25 = (ulong *****)((long)unaff_x23 * 4);
    unaff_x26 = param_2;
    do {
      uStack_88 = 0;
      ppppuStack_c0 = (ulong ****)unaff_x26;
      ppppuStack_b8 = (ulong ****)unaff_x23;
      ppppuStack_a8 = (ulong ****)param_2;
      ppppuStack_a0 = (ulong ****)unaff_x23;
      lStack_98 = unaff_x24;
      lStack_80 = unaff_x22;
      ppppuStack_78 = (ulong ****)unaff_x23;
      if ((int)param_4 == 0) {
        fVar25 = 0.0;
        uVar27 = 0;
      }
      else {
        pppppuVar6 = appppuStack_70;
        pppppuVar9 = (ulong *****)&uStack_c1;
        pppppuVar11 = &ppppuStack_c0;
        appppuStack_70[0] = (ulong ****)unaff_x26;
        ppppuStack_60 = (ulong ****)unaff_x23;
        FUN_109c5725c();
      }
      *(float *)((long)param_3 + unaff_x22 * 4) = fVar25;
      unaff_x22 = unaff_x22 + 1;
      unaff_x26 = (ulong *****)((long)unaff_x26 + (long)unaff_x25);
      unaff_x19 = param_4;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
    } while (unaff_x24 != unaff_x22);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_d8 = FUN_109c56c58;
  ppuStack_1c0 = &puStack_e0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar7 = pppppuVar6;
  pppppuVar8 = pppppuVar9;
  pppppuVar12 = pppppuVar11;
  ppppuStack_1c8 = (ulong ****)unaff_x19;
  ppppuStack_1d0 = (ulong ****)unaff_x20;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (0 < (int)param_5) {
    unaff_x22 = 0;
    iVar10 = (int)pppppuVar11;
    unaff_x23 = (ulong *****)(long)iVar10;
    unaff_x24 = (long)(int)param_5;
    unaff_x25 = (ulong *****)((long)unaff_x23 * 4);
    unaff_x26 = pppppuVar6;
    do {
      uStack_168 = 0;
      ppppuStack_1a0 = (ulong ****)unaff_x26;
      ppppuStack_198 = (ulong ****)unaff_x23;
      ppppuStack_188 = (ulong ****)pppppuVar6;
      ppppuStack_180 = (ulong ****)unaff_x23;
      lStack_178 = unaff_x24;
      lStack_160 = unaff_x22;
      ppppuStack_158 = (ulong ****)unaff_x23;
      if (iVar10 == 0) {
        fVar25 = 0.0;
      }
      else {
        pppppuVar7 = appppuStack_150;
        pppppuVar8 = (ulong *****)&uStack_1a1;
        pppppuVar12 = &ppppuStack_1a0;
        appppuStack_150[0] = (ulong ****)unaff_x26;
        ppppuStack_140 = (ulong ****)unaff_x23;
        FUN_109c5725c();
      }
      fVar25 = fVar25 / (float)iVar10;
      uVar27 = 0;
      *(float *)((long)pppppuVar9 + unaff_x22 * 4) = fVar25;
      unaff_x22 = unaff_x22 + 1;
      unaff_x26 = (ulong *****)((long)unaff_x26 + (long)unaff_x25);
      ppppuStack_1c8 = (ulong ****)pppppuVar11;
      ppppuStack_1d0 = (ulong ****)pppppuVar9;
      unaff_x21 = pppppuVar6;
    } while (unaff_x24 != unaff_x22);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_1b8 = FUN_109c56d44;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar7;
  pppppuVar9 = pppppuVar8;
  pppppuVar17 = (ulong *****)ppppuStack_1c8;
  pppppuVar11 = (ulong *****)ppppuStack_1d0;
  lVar19 = unaff_x22;
  pppppuVar20 = unaff_x23;
  lVar22 = unaff_x24;
  ppppuStack_200 = (ulong ****)unaff_x26;
  ppppuStack_1f8 = (ulong ****)unaff_x25;
  lStack_1f0 = unaff_x24;
  ppppuStack_1e8 = (ulong ****)unaff_x23;
  lStack_1e0 = unaff_x22;
  ppppuStack_1d8 = (ulong ****)unaff_x21;
  if (0 < (int)param_5) {
    lVar19 = (long)(int)pppppuVar12;
    pppppuVar20 = (ulong *****)(long)(int)param_5;
    lVar22 = lVar19 * 4;
    pppppuVar18 = (ulong *****)0x0;
    pppppuVar23 = pppppuVar7;
    do {
      uStack_238 = 0;
      pppppuVar6 = appppuStack_220;
      pppppuVar9 = (ulong *****)&uStack_271;
      pppppuVar12 = &ppppuStack_270;
      ppppuStack_270 = (ulong ****)pppppuVar23;
      lStack_268 = lVar19;
      ppppuStack_258 = (ulong ****)pppppuVar7;
      lStack_250 = lVar19;
      ppppuStack_248 = (ulong ****)pppppuVar20;
      ppppuStack_230 = (ulong ****)pppppuVar18;
      lStack_228 = lVar19;
      appppuStack_220[0] = (ulong ****)pppppuVar23;
      lStack_210 = lVar19;
      FUN_109c57368();
      *(float *)((long)pppppuVar8 + (long)pppppuVar18 * 4) = fVar25;
      unaff_x21 = (ulong *****)((long)pppppuVar18 + 1);
      unaff_x25 = (ulong *****)((long)pppppuVar23 + lVar22);
      pppppuVar17 = pppppuVar8;
      pppppuVar11 = pppppuVar7;
      pppppuVar18 = unaff_x21;
      pppppuVar23 = unaff_x25;
    } while (pppppuVar20 != unaff_x21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_288 = FUN_109c56e10;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar8 = pppppuVar6;
  pppppuVar7 = pppppuVar9;
  ppppuStack_2d0 = (ulong ****)unaff_x26;
  ppppuStack_2c8 = (ulong ****)unaff_x25;
  lStack_2c0 = lVar22;
  ppppuStack_2b8 = (ulong ****)pppppuVar20;
  lStack_2b0 = lVar19;
  ppppuStack_2a8 = (ulong ****)unaff_x21;
  ppppuStack_2a0 = (ulong ****)pppppuVar11;
  ppppuStack_298 = (ulong ****)pppppuVar17;
  pppuStack_290 = &ppuStack_1c0;
  if (0 < (int)param_5) {
    lVar19 = (long)(int)pppppuVar12;
    pppppuVar20 = (ulong *****)(long)(int)param_5;
    lVar22 = lVar19 * 4;
    pppppuVar18 = (ulong *****)0x0;
    pppppuVar23 = pppppuVar6;
    do {
      uStack_308 = 0;
      pppppuVar8 = appppuStack_2f0;
      pppppuVar7 = (ulong *****)&uStack_341;
      pppppuVar12 = &ppppuStack_340;
      ppppuStack_340 = (ulong ****)pppppuVar23;
      lStack_338 = lVar19;
      ppppuStack_328 = (ulong ****)pppppuVar6;
      lStack_320 = lVar19;
      ppppuStack_318 = (ulong ****)pppppuVar20;
      ppppuStack_300 = (ulong ****)pppppuVar18;
      lStack_2f8 = lVar19;
      appppuStack_2f0[0] = (ulong ****)pppppuVar23;
      lStack_2e0 = lVar19;
      func_0x000109c574f8();
      *(float *)((long)pppppuVar9 + (long)pppppuVar18 * 4) = fVar25;
      unaff_x21 = (ulong *****)((long)pppppuVar18 + 1);
      unaff_x25 = (ulong *****)((long)pppppuVar23 + lVar22);
      pppppuVar17 = pppppuVar9;
      pppppuVar11 = pppppuVar6;
      pppppuVar18 = unaff_x21;
      pppppuVar23 = unaff_x25;
    } while (pppppuVar20 != unaff_x21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_358 = FUN_109c56edc;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_360 = &pppuStack_290;
  if (0 < (int)pppppuVar12) {
    unaff_x21 = (ulong *****)(long)(int)param_5;
    lVar19 = (long)param_6;
    uVar21 = (ulong)pppppuVar12 & 0xffffffff;
    lVar22 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (ulong *****)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    unaff_x27 = &ppppuStack_3e0;
    unaff_x28 = &uStack_419;
    unaff_x26 = &ppppuStack_438;
    pppppuVar17 = pppppuVar7;
    pppppuVar11 = pppppuVar8;
    do {
      ppppuStack_418 = (ulong ****)appppuStack_3f8;
      pppppuVar8 = &ppppuStack_418;
      ppppuStack_438 = (ulong ****)pppppuVar17;
      ppppuStack_430 = (ulong ****)unaff_x21;
      ppppuStack_410 = (ulong ****)unaff_x27;
      puStack_408 = unaff_x28;
      ppppuStack_400 = (ulong ****)unaff_x26;
      appppuStack_3f8[0] = (ulong ****)pppppuVar17;
      ppppuStack_3e8 = (ulong ****)unaff_x21;
      ppppuStack_3e0 = (ulong ****)pppppuVar11;
      ppppuStack_3d8 = (ulong ****)unaff_x21;
      lStack_3d0 = lVar19;
      FUN_109c57688();
      pppppuVar11 = (ulong *****)((long)pppppuVar11 + lVar22);
      pppppuVar17 = (ulong *****)((long)pppppuVar17 + (long)unaff_x25);
      uVar21 = uVar21 - 1;
      pppppuVar20 = (ulong *****)0x0;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_448 = FUN_109c56fb8;
  lStack_4c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_450 = &ppppuStack_360;
  if (0 < (int)pppppuVar12) {
    unaff_x21 = (ulong *****)(long)(int)param_5;
    lVar19 = (long)param_6;
    uVar21 = (ulong)pppppuVar12 & 0xffffffff;
    lVar22 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (ulong *****)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    fVar34 = (float)param_6;
    unaff_x27 = (ulong *****)&pppuStack_4f8;
    unaff_x28 = &uStack_531;
    pppppuVar17 = pppppuVar7;
    pppppuVar11 = pppppuVar8;
    do {
      ppppuStack_530 = (ulong ****)appppuStack_510;
      pppppuVar8 = &ppppuStack_530;
      ppppuStack_550 = (ulong ****)pppppuVar17;
      ppppuStack_548 = (ulong ****)unaff_x21;
      ppppuStack_528 = (ulong ****)unaff_x27;
      puStack_520 = unaff_x28;
      puStack_518 = (undefined1 *)&ppppuStack_550;
      appppuStack_510[0] = (ulong ****)pppppuVar17;
      ppppuStack_500 = (ulong ****)unaff_x21;
      ppppuStack_4f0 = (ulong ****)pppppuVar11;
      ppppuStack_4e8 = (ulong ****)unaff_x21;
      lStack_4e0 = lVar19;
      fStack_4c8 = fVar34;
      FUN_109c5791c();
      pppppuVar11 = (ulong *****)((long)pppppuVar11 + lVar22);
      pppppuVar17 = (ulong *****)((long)pppppuVar17 + (long)unaff_x25);
      uVar21 = uVar21 - 1;
      pppppuVar20 = (ulong *****)0x0;
      unaff_x26 = &ppppuStack_550;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c0) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_558 = FUN_109c570a4;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar18 = unaff_x21;
  pppppuVar23 = unaff_x25;
  pppppuVar9 = unaff_x26;
  pppppuVar6 = unaff_x27;
  puVar24 = unaff_x28;
  puStack_5b0 = unaff_x28;
  ppppuStack_5a8 = (ulong ****)unaff_x27;
  ppppuStack_5a0 = (ulong ****)unaff_x26;
  ppppuStack_598 = (ulong ****)unaff_x25;
  lStack_590 = lVar22;
  ppppuStack_588 = (ulong ****)pppppuVar20;
  lStack_580 = lVar19;
  ppppuStack_578 = (ulong ****)unaff_x21;
  ppppuStack_570 = (ulong ****)pppppuVar11;
  ppppuStack_568 = (ulong ****)pppppuVar17;
  ppppuStack_560 = &ppppuStack_450;
  if (0 < (int)pppppuVar12) {
    pppppuVar18 = (ulong *****)(long)(int)param_5;
    lVar19 = (long)param_6;
    uVar21 = (ulong)pppppuVar12 & 0xffffffff;
    lVar22 = (long)param_6 * (long)(int)param_5 * 4;
    pppppuVar23 = (ulong *****)
                  (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    pppppuVar6 = &ppppuStack_5e0;
    puVar24 = &uStack_619;
    pppppuVar9 = &ppppuStack_638;
    pppppuVar17 = pppppuVar7;
    pppppuVar11 = pppppuVar8;
    do {
      ppppuStack_618 = (ulong ****)appppuStack_5f8;
      pppppuVar8 = &ppppuStack_618;
      ppppuStack_638 = (ulong ****)pppppuVar17;
      ppppuStack_630 = (ulong ****)pppppuVar18;
      ppppuStack_610 = (ulong ****)pppppuVar6;
      puStack_608 = puVar24;
      ppppuStack_600 = (ulong ****)pppppuVar9;
      appppuStack_5f8[0] = (ulong ****)pppppuVar17;
      ppppuStack_5e8 = (ulong ****)pppppuVar18;
      ppppuStack_5e0 = (ulong ****)pppppuVar11;
      ppppuStack_5d8 = (ulong ****)pppppuVar18;
      lStack_5d0 = lVar19;
      FUN_109c57b1c();
      pppppuVar11 = (ulong *****)((long)pppppuVar11 + lVar22);
      pppppuVar17 = (ulong *****)((long)pppppuVar17 + (long)pppppuVar23);
      uVar21 = uVar21 - 1;
      pppppuVar20 = (ulong *****)0x0;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_648 = FUN_109c57180;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_6a0 = puVar24;
  ppppuStack_698 = (ulong ****)pppppuVar6;
  ppppuStack_690 = (ulong ****)pppppuVar9;
  ppppuStack_688 = (ulong ****)pppppuVar23;
  lStack_680 = lVar22;
  ppppuStack_678 = (ulong ****)pppppuVar20;
  lStack_670 = lVar19;
  ppppuStack_668 = (ulong ****)pppppuVar18;
  ppppuStack_660 = (ulong ****)pppppuVar11;
  ppppuStack_658 = (ulong ****)pppppuVar17;
  ppppuStack_650 = &ppppuStack_560;
  if (0 < (int)pppppuVar12) {
    lVar19 = (long)(int)param_5;
    uVar21 = (ulong)pppppuVar12 & 0xffffffff;
    pppppuVar6 = pppppuVar8;
    do {
      ppppuStack_708 = (ulong ****)appppuStack_6e8;
      pppppuVar8 = &ppppuStack_708;
      ppppuStack_728 = (ulong ****)pppppuVar7;
      lStack_720 = lVar19;
      ppppuStack_700 = (ulong ****)&ppppuStack_6d0;
      puStack_6f8 = &uStack_709;
      ppppuStack_6f0 = (ulong ****)&ppppuStack_728;
      appppuStack_6e8[0] = (ulong ****)pppppuVar7;
      lStack_6d8 = lVar19;
      ppppuStack_6d0 = (ulong ****)pppppuVar6;
      lStack_6c8 = lVar19;
      lStack_6c0 = (long)param_6;
      FUN_109c57da0();
      pppppuVar6 = (ulong *****)((long)pppppuVar6 + (long)param_6 * (long)(int)param_5 * 4);
      pppppuVar7 = (ulong *****)
                   ((long)pppppuVar7 +
                   (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppppuVar1 = pppppuVar12[1];
  ppppuVar13 = (ulong ****)((ulong)-((uint)*pppppuVar12 >> 2) & 3);
  if ((long)ppppuVar1 <= (long)ppppuVar13) {
    ppppuVar13 = ppppuVar1;
  }
  ppppuVar14 = ppppuVar1;
  if (((ulong)*pppppuVar12 & 3) == 0) {
    ppppuVar14 = ppppuVar13;
  }
  uVar2 = (long)ppppuVar1 - (long)ppppuVar14;
  uVar21 = uVar2 + 3;
  uVar5 = uVar2 + 7;
  if ((long)ppppuVar14 <= (long)ppppuVar1) {
    uVar21 = uVar2;
    uVar5 = uVar2;
  }
  ppppuVar13 = *pppppuVar8;
  if (uVar2 + 3 < 7) {
    fVar26 = *(float *)ppppuVar13;
    fVar25 = 0.0;
    if (1 < (long)ppppuVar1) {
      lVar19 = (long)ppppuVar1 - 1;
      do {
        ppppuVar13 = (ulong ****)((long)ppppuVar13 + 4);
        fVar26 = fVar26 + *(float *)ppppuVar13;
        fVar25 = 0.0;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  else {
    puVar16 = (undefined8 *)((long)ppppuVar13 + (long)ppppuVar14 * 4);
    fVar26 = (float)puVar16[1];
    fVar28 = (float)((ulong)puVar16[1] >> 0x20);
    fVar25 = (float)*puVar16;
    fVar34 = (float)((ulong)*puVar16 >> 0x20);
    if (7 < (long)uVar2) {
      lVar19 = (uVar5 & 0xfffffffffffffff8) + (long)ppppuVar14;
      fVar29 = *(float *)(puVar16 + 2);
      fVar31 = *(float *)((long)puVar16 + 0x14);
      fVar32 = *(float *)(puVar16 + 3);
      fVar33 = *(float *)((long)puVar16 + 0x1c);
      if (0xf < uVar2) {
        ppppuVar15 = ppppuVar14 + 1;
        puVar16 = puVar16 + 6;
        do {
          fVar25 = fVar25 + (float)puVar16[-2];
          fVar34 = fVar34 + (float)((ulong)puVar16[-2] >> 0x20);
          fVar26 = fVar26 + (float)puVar16[-1];
          fVar28 = fVar28 + (float)((ulong)puVar16[-1] >> 0x20);
          fVar29 = fVar29 + (float)*puVar16;
          fVar31 = fVar31 + (float)((ulong)*puVar16 >> 0x20);
          fVar32 = fVar32 + (float)puVar16[1];
          fVar33 = fVar33 + (float)((ulong)puVar16[1] >> 0x20);
          ppppuVar15 = ppppuVar15 + 1;
          puVar16 = puVar16 + 4;
        } while ((long)ppppuVar15 < lVar19);
      }
      fVar25 = fVar29 + fVar25;
      fVar34 = fVar31 + fVar34;
      fVar26 = fVar32 + fVar26;
      fVar28 = fVar33 + fVar28;
      if ((long)(uVar5 & 0xfffffffffffffff8) < (long)(uVar21 & 0xfffffffffffffffc)) {
        pfVar3 = (float *)((long)ppppuVar13 + lVar19 * 4);
        fVar25 = fVar25 + *pfVar3;
        fVar34 = fVar34 + pfVar3[1];
        fVar26 = fVar26 + pfVar3[2];
        fVar28 = fVar28 + pfVar3[3];
      }
    }
    lVar19 = (uVar21 & 0xfffffffffffffffc) + (long)ppppuVar14;
    auVar30._4_4_ = fVar34;
    auVar30._0_4_ = fVar25;
    auVar30._8_4_ = fVar26;
    auVar30._12_4_ = fVar28;
    auVar4._4_4_ = fVar34;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar26;
    auVar4._12_4_ = fVar28;
    auVar30 = NEON_ext(auVar30,auVar4,8,1);
    fVar25 = fVar25 + auVar30._0_4_;
    fVar34 = fVar34 + auVar30._4_4_;
    fVar26 = fVar25 + fVar34;
    fVar25 = fVar25 + fVar34;
    ppppuVar15 = ppppuVar13;
    if (0 < (long)ppppuVar14) {
      do {
        fVar26 = fVar26 + *(float *)ppppuVar15;
        fVar25 = 0.0;
        ppppuVar14 = (ulong ****)((long)ppppuVar14 - 1);
        ppppuVar15 = (ulong ****)((long)ppppuVar15 + 4);
      } while (ppppuVar14 != (ulong ****)0x0);
    }
    for (; lVar19 < (long)ppppuVar1; lVar19 = lVar19 + 1) {
      fVar26 = fVar26 + *(float *)((long)ppppuVar13 + lVar19 * 4);
      fVar25 = 0.0;
    }
  }
  return CONCAT44(fVar25,fVar26);
}



/* Entry: 109c56c58; end: 109c56d43;  */

undefined8
FUN_109c56c58(undefined8 param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
             uint param_5,int param_6)

{
  ulong ****ppppuVar1;
  ulong uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  int iVar10;
  ulong *****pppppuVar11;
  ulong ****ppppuVar12;
  ulong ****ppppuVar13;
  ulong ****ppppuVar14;
  undefined8 *puVar15;
  ulong *****unaff_x19;
  ulong *****pppppuVar16;
  ulong *****unaff_x20;
  ulong *****pppppuVar17;
  ulong *****unaff_x21;
  ulong *****pppppuVar18;
  long unaff_x22;
  long lVar19;
  ulong *****unaff_x23;
  ulong *****pppppuVar20;
  ulong uVar21;
  long unaff_x24;
  long lVar22;
  ulong *****unaff_x25;
  ulong *****pppppuVar23;
  ulong *****unaff_x26;
  ulong *****unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *puVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  ulong ****ppppuStack_658;
  long lStack_650;
  undefined1 uStack_639;
  ulong ****ppppuStack_638;
  ulong ****ppppuStack_630;
  undefined1 *puStack_628;
  ulong ****ppppuStack_620;
  ulong ****appppuStack_618 [2];
  long lStack_608;
  ulong ****ppppuStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5d8;
  undefined1 *puStack_5d0;
  ulong ****ppppuStack_5c8;
  ulong ****ppppuStack_5c0;
  ulong ****ppppuStack_5b8;
  long lStack_5b0;
  ulong ****ppppuStack_5a8;
  long lStack_5a0;
  ulong ****ppppuStack_598;
  ulong ****ppppuStack_590;
  ulong ****ppppuStack_588;
  undefined8 ****ppppuStack_580;
  code *pcStack_578;
  ulong ****ppppuStack_568;
  ulong ****ppppuStack_560;
  undefined1 uStack_549;
  ulong ****ppppuStack_548;
  ulong ****ppppuStack_540;
  undefined1 *puStack_538;
  ulong ****ppppuStack_530;
  ulong ****appppuStack_528 [2];
  ulong ****ppppuStack_518;
  ulong ****ppppuStack_510;
  ulong ****ppppuStack_508;
  long lStack_500;
  long lStack_4e8;
  undefined1 *puStack_4e0;
  ulong ****ppppuStack_4d8;
  ulong ****ppppuStack_4d0;
  ulong ****ppppuStack_4c8;
  long lStack_4c0;
  ulong ****ppppuStack_4b8;
  long lStack_4b0;
  ulong ****ppppuStack_4a8;
  ulong ****ppppuStack_4a0;
  ulong ****ppppuStack_498;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  ulong ****ppppuStack_480;
  ulong ****ppppuStack_478;
  undefined1 uStack_461;
  ulong ****ppppuStack_460;
  ulong ****ppppuStack_458;
  undefined1 *puStack_450;
  undefined1 *puStack_448;
  ulong ****appppuStack_440 [2];
  ulong ****ppppuStack_430;
  ulong ***pppuStack_428;
  ulong ****ppppuStack_420;
  ulong ****ppppuStack_418;
  long lStack_410;
  float fStack_3f8;
  long lStack_3f0;
  undefined1 ****ppppuStack_380;
  code *pcStack_378;
  ulong ****ppppuStack_368;
  ulong ****ppppuStack_360;
  undefined1 uStack_349;
  ulong ****ppppuStack_348;
  ulong ****ppppuStack_340;
  undefined1 *puStack_338;
  ulong ****ppppuStack_330;
  ulong ****appppuStack_328 [2];
  ulong ****ppppuStack_318;
  ulong ****ppppuStack_310;
  ulong ****ppppuStack_308;
  long lStack_300;
  long lStack_2e8;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined1 uStack_271;
  ulong ****ppppuStack_270;
  long lStack_268;
  ulong ****ppppuStack_258;
  long lStack_250;
  ulong ****ppppuStack_248;
  undefined8 uStack_238;
  ulong ****ppppuStack_230;
  long lStack_228;
  ulong ****appppuStack_220 [2];
  long lStack_210;
  long lStack_208;
  ulong ****ppppuStack_200;
  ulong ****ppppuStack_1f8;
  long lStack_1f0;
  ulong ****ppppuStack_1e8;
  long lStack_1e0;
  ulong ****ppppuStack_1d8;
  ulong ****ppppuStack_1d0;
  ulong ****ppppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 uStack_1a1;
  ulong ****ppppuStack_1a0;
  long lStack_198;
  ulong ****ppppuStack_188;
  long lStack_180;
  ulong ****ppppuStack_178;
  undefined8 uStack_168;
  ulong ****ppppuStack_160;
  long lStack_158;
  ulong ****appppuStack_150 [2];
  long lStack_140;
  long lStack_138;
  ulong ****ppppuStack_130;
  ulong ****ppppuStack_128;
  long lStack_120;
  ulong ****ppppuStack_118;
  long lStack_110;
  ulong ****ppppuStack_108;
  ulong ****ppppuStack_100;
  ulong ****ppppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 uStack_d1;
  ulong ****ppppuStack_d0;
  ulong ****ppppuStack_c8;
  ulong ****ppppuStack_b8;
  ulong ****ppppuStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  ulong ****ppppuStack_88;
  ulong ****appppuStack_80 [2];
  ulong ****ppppuStack_70;
  long lStack_68;
  
  uVar27 = (undefined4)((ulong)param_1 >> 0x20);
  fVar25 = (float)param_1;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = param_2;
  pppppuVar8 = param_3;
  pppppuVar11 = param_4;
  if (0 < (int)param_5) {
    unaff_x22 = 0;
    iVar10 = (int)param_4;
    unaff_x23 = (ulong *****)(long)iVar10;
    unaff_x24 = (long)(int)param_5;
    unaff_x25 = (ulong *****)((long)unaff_x23 * 4);
    unaff_x26 = param_2;
    do {
      uStack_98 = 0;
      ppppuStack_d0 = (ulong ****)unaff_x26;
      ppppuStack_c8 = (ulong ****)unaff_x23;
      ppppuStack_b8 = (ulong ****)param_2;
      ppppuStack_b0 = (ulong ****)unaff_x23;
      lStack_a8 = unaff_x24;
      lStack_90 = unaff_x22;
      ppppuStack_88 = (ulong ****)unaff_x23;
      if (iVar10 == 0) {
        fVar25 = 0.0;
      }
      else {
        pppppuVar6 = appppuStack_80;
        pppppuVar8 = (ulong *****)&uStack_d1;
        pppppuVar11 = &ppppuStack_d0;
        appppuStack_80[0] = (ulong ****)unaff_x26;
        ppppuStack_70 = (ulong ****)unaff_x23;
        FUN_109c5725c();
      }
      fVar25 = fVar25 / (float)iVar10;
      uVar27 = 0;
      *(float *)((long)param_3 + unaff_x22 * 4) = fVar25;
      unaff_x22 = unaff_x22 + 1;
      unaff_x26 = (ulong *****)((long)unaff_x26 + (long)unaff_x25);
      unaff_x19 = param_4;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
    } while (unaff_x24 != unaff_x22);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_e8 = FUN_109c56d44;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar7 = pppppuVar6;
  pppppuVar9 = pppppuVar8;
  lVar19 = unaff_x22;
  pppppuVar20 = unaff_x23;
  lVar22 = unaff_x24;
  ppppuStack_130 = (ulong ****)unaff_x26;
  ppppuStack_128 = (ulong ****)unaff_x25;
  lStack_120 = unaff_x24;
  ppppuStack_118 = (ulong ****)unaff_x23;
  lStack_110 = unaff_x22;
  ppppuStack_108 = (ulong ****)unaff_x21;
  ppppuStack_100 = (ulong ****)unaff_x20;
  ppppuStack_f8 = (ulong ****)unaff_x19;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (0 < (int)param_5) {
    lVar19 = (long)(int)pppppuVar11;
    pppppuVar20 = (ulong *****)(long)(int)param_5;
    lVar22 = lVar19 * 4;
    pppppuVar18 = (ulong *****)0x0;
    pppppuVar23 = pppppuVar6;
    do {
      uStack_168 = 0;
      pppppuVar7 = appppuStack_150;
      pppppuVar9 = (ulong *****)&uStack_1a1;
      pppppuVar11 = &ppppuStack_1a0;
      ppppuStack_1a0 = (ulong ****)pppppuVar23;
      lStack_198 = lVar19;
      ppppuStack_188 = (ulong ****)pppppuVar6;
      lStack_180 = lVar19;
      ppppuStack_178 = (ulong ****)pppppuVar20;
      ppppuStack_160 = (ulong ****)pppppuVar18;
      lStack_158 = lVar19;
      appppuStack_150[0] = (ulong ****)pppppuVar23;
      lStack_140 = lVar19;
      FUN_109c57368();
      *(float *)((long)pppppuVar8 + (long)pppppuVar18 * 4) = fVar25;
      unaff_x21 = (ulong *****)((long)pppppuVar18 + 1);
      unaff_x25 = (ulong *****)((long)pppppuVar23 + lVar22);
      unaff_x19 = pppppuVar8;
      unaff_x20 = pppppuVar6;
      pppppuVar18 = unaff_x21;
      pppppuVar23 = unaff_x25;
    } while (pppppuVar20 != unaff_x21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_1b8 = FUN_109c56e10;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar8 = pppppuVar7;
  pppppuVar6 = pppppuVar9;
  ppppuStack_200 = (ulong ****)unaff_x26;
  ppppuStack_1f8 = (ulong ****)unaff_x25;
  lStack_1f0 = lVar22;
  ppppuStack_1e8 = (ulong ****)pppppuVar20;
  lStack_1e0 = lVar19;
  ppppuStack_1d8 = (ulong ****)unaff_x21;
  ppppuStack_1d0 = (ulong ****)unaff_x20;
  ppppuStack_1c8 = (ulong ****)unaff_x19;
  ppuStack_1c0 = &puStack_f0;
  if (0 < (int)param_5) {
    lVar19 = (long)(int)pppppuVar11;
    pppppuVar20 = (ulong *****)(long)(int)param_5;
    lVar22 = lVar19 * 4;
    pppppuVar18 = (ulong *****)0x0;
    pppppuVar23 = pppppuVar7;
    do {
      uStack_238 = 0;
      pppppuVar8 = appppuStack_220;
      pppppuVar6 = (ulong *****)&uStack_271;
      pppppuVar11 = &ppppuStack_270;
      ppppuStack_270 = (ulong ****)pppppuVar23;
      lStack_268 = lVar19;
      ppppuStack_258 = (ulong ****)pppppuVar7;
      lStack_250 = lVar19;
      ppppuStack_248 = (ulong ****)pppppuVar20;
      ppppuStack_230 = (ulong ****)pppppuVar18;
      lStack_228 = lVar19;
      appppuStack_220[0] = (ulong ****)pppppuVar23;
      lStack_210 = lVar19;
      func_0x000109c574f8();
      *(float *)((long)pppppuVar9 + (long)pppppuVar18 * 4) = fVar25;
      unaff_x21 = (ulong *****)((long)pppppuVar18 + 1);
      unaff_x25 = (ulong *****)((long)pppppuVar23 + lVar22);
      unaff_x19 = pppppuVar9;
      unaff_x20 = pppppuVar7;
      pppppuVar18 = unaff_x21;
      pppppuVar23 = unaff_x25;
    } while (pppppuVar20 != unaff_x21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_288 = FUN_109c56edc;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_290 = &ppuStack_1c0;
  if (0 < (int)pppppuVar11) {
    unaff_x21 = (ulong *****)(long)(int)param_5;
    lVar19 = (long)param_6;
    uVar21 = (ulong)pppppuVar11 & 0xffffffff;
    lVar22 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (ulong *****)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    unaff_x27 = &ppppuStack_310;
    unaff_x28 = &uStack_349;
    unaff_x26 = &ppppuStack_368;
    unaff_x19 = pppppuVar6;
    unaff_x20 = pppppuVar8;
    do {
      ppppuStack_348 = (ulong ****)appppuStack_328;
      pppppuVar8 = &ppppuStack_348;
      ppppuStack_368 = (ulong ****)unaff_x19;
      ppppuStack_360 = (ulong ****)unaff_x21;
      ppppuStack_340 = (ulong ****)unaff_x27;
      puStack_338 = unaff_x28;
      ppppuStack_330 = (ulong ****)unaff_x26;
      appppuStack_328[0] = (ulong ****)unaff_x19;
      ppppuStack_318 = (ulong ****)unaff_x21;
      ppppuStack_310 = (ulong ****)unaff_x20;
      ppppuStack_308 = (ulong ****)unaff_x21;
      lStack_300 = lVar19;
      FUN_109c57688();
      unaff_x20 = (ulong *****)((long)unaff_x20 + lVar22);
      unaff_x19 = (ulong *****)((long)unaff_x19 + (long)unaff_x25);
      uVar21 = uVar21 - 1;
      pppppuVar20 = (ulong *****)0x0;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_378 = FUN_109c56fb8;
  lStack_3f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_380 = &pppuStack_290;
  if (0 < (int)pppppuVar11) {
    unaff_x21 = (ulong *****)(long)(int)param_5;
    lVar19 = (long)param_6;
    uVar21 = (ulong)pppppuVar11 & 0xffffffff;
    lVar22 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (ulong *****)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    fVar34 = (float)param_6;
    unaff_x27 = (ulong *****)&pppuStack_428;
    unaff_x28 = &uStack_461;
    unaff_x19 = pppppuVar6;
    unaff_x20 = pppppuVar8;
    do {
      ppppuStack_460 = (ulong ****)appppuStack_440;
      pppppuVar8 = &ppppuStack_460;
      ppppuStack_480 = (ulong ****)unaff_x19;
      ppppuStack_478 = (ulong ****)unaff_x21;
      ppppuStack_458 = (ulong ****)unaff_x27;
      puStack_450 = unaff_x28;
      puStack_448 = (undefined1 *)&ppppuStack_480;
      appppuStack_440[0] = (ulong ****)unaff_x19;
      ppppuStack_430 = (ulong ****)unaff_x21;
      ppppuStack_420 = (ulong ****)unaff_x20;
      ppppuStack_418 = (ulong ****)unaff_x21;
      lStack_410 = lVar19;
      fStack_3f8 = fVar34;
      FUN_109c5791c();
      unaff_x20 = (ulong *****)((long)unaff_x20 + lVar22);
      unaff_x19 = (ulong *****)((long)unaff_x19 + (long)unaff_x25);
      uVar21 = uVar21 - 1;
      pppppuVar20 = (ulong *****)0x0;
      unaff_x26 = &ppppuStack_480;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f0) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_488 = FUN_109c570a4;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar18 = unaff_x21;
  pppppuVar23 = unaff_x25;
  pppppuVar9 = unaff_x26;
  pppppuVar7 = unaff_x27;
  puVar24 = unaff_x28;
  puStack_4e0 = unaff_x28;
  ppppuStack_4d8 = (ulong ****)unaff_x27;
  ppppuStack_4d0 = (ulong ****)unaff_x26;
  ppppuStack_4c8 = (ulong ****)unaff_x25;
  lStack_4c0 = lVar22;
  ppppuStack_4b8 = (ulong ****)pppppuVar20;
  lStack_4b0 = lVar19;
  ppppuStack_4a8 = (ulong ****)unaff_x21;
  ppppuStack_4a0 = (ulong ****)unaff_x20;
  ppppuStack_498 = (ulong ****)unaff_x19;
  ppppuStack_490 = &ppppuStack_380;
  if (0 < (int)pppppuVar11) {
    pppppuVar18 = (ulong *****)(long)(int)param_5;
    lVar19 = (long)param_6;
    uVar21 = (ulong)pppppuVar11 & 0xffffffff;
    lVar22 = (long)param_6 * (long)(int)param_5 * 4;
    pppppuVar23 = (ulong *****)
                  (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    pppppuVar7 = &ppppuStack_510;
    puVar24 = &uStack_549;
    pppppuVar9 = &ppppuStack_568;
    pppppuVar16 = pppppuVar6;
    pppppuVar17 = pppppuVar8;
    do {
      ppppuStack_548 = (ulong ****)appppuStack_528;
      pppppuVar8 = &ppppuStack_548;
      ppppuStack_568 = (ulong ****)pppppuVar16;
      ppppuStack_560 = (ulong ****)pppppuVar18;
      ppppuStack_540 = (ulong ****)pppppuVar7;
      puStack_538 = puVar24;
      ppppuStack_530 = (ulong ****)pppppuVar9;
      appppuStack_528[0] = (ulong ****)pppppuVar16;
      ppppuStack_518 = (ulong ****)pppppuVar18;
      ppppuStack_510 = (ulong ****)pppppuVar17;
      ppppuStack_508 = (ulong ****)pppppuVar18;
      lStack_500 = lVar19;
      FUN_109c57b1c();
      unaff_x20 = (ulong *****)((long)pppppuVar17 + lVar22);
      unaff_x19 = (ulong *****)((long)pppppuVar16 + (long)pppppuVar23);
      uVar21 = uVar21 - 1;
      pppppuVar20 = (ulong *****)0x0;
      pppppuVar16 = unaff_x19;
      pppppuVar17 = unaff_x20;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_578 = FUN_109c57180;
  lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_5d0 = puVar24;
  ppppuStack_5c8 = (ulong ****)pppppuVar7;
  ppppuStack_5c0 = (ulong ****)pppppuVar9;
  ppppuStack_5b8 = (ulong ****)pppppuVar23;
  lStack_5b0 = lVar22;
  ppppuStack_5a8 = (ulong ****)pppppuVar20;
  lStack_5a0 = lVar19;
  ppppuStack_598 = (ulong ****)pppppuVar18;
  ppppuStack_590 = (ulong ****)unaff_x20;
  ppppuStack_588 = (ulong ****)unaff_x19;
  ppppuStack_580 = &ppppuStack_490;
  if (0 < (int)pppppuVar11) {
    lVar19 = (long)(int)param_5;
    uVar21 = (ulong)pppppuVar11 & 0xffffffff;
    pppppuVar7 = pppppuVar8;
    do {
      ppppuStack_638 = (ulong ****)appppuStack_618;
      pppppuVar8 = &ppppuStack_638;
      ppppuStack_658 = (ulong ****)pppppuVar6;
      lStack_650 = lVar19;
      ppppuStack_630 = (ulong ****)&ppppuStack_600;
      puStack_628 = &uStack_639;
      ppppuStack_620 = (ulong ****)&ppppuStack_658;
      appppuStack_618[0] = (ulong ****)pppppuVar6;
      lStack_608 = lVar19;
      ppppuStack_600 = (ulong ****)pppppuVar7;
      lStack_5f8 = lVar19;
      lStack_5f0 = (long)param_6;
      FUN_109c57da0();
      pppppuVar7 = (ulong *****)((long)pppppuVar7 + (long)param_6 * (long)(int)param_5 * 4);
      pppppuVar6 = (ulong *****)
                   ((long)pppppuVar6 +
                   (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
    return CONCAT44(uVar27,fVar25);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppppuVar1 = pppppuVar11[1];
  ppppuVar12 = (ulong ****)((ulong)-((uint)*pppppuVar11 >> 2) & 3);
  if ((long)ppppuVar1 <= (long)ppppuVar12) {
    ppppuVar12 = ppppuVar1;
  }
  ppppuVar13 = ppppuVar1;
  if (((ulong)*pppppuVar11 & 3) == 0) {
    ppppuVar13 = ppppuVar12;
  }
  uVar2 = (long)ppppuVar1 - (long)ppppuVar13;
  uVar21 = uVar2 + 3;
  uVar5 = uVar2 + 7;
  if ((long)ppppuVar13 <= (long)ppppuVar1) {
    uVar21 = uVar2;
    uVar5 = uVar2;
  }
  ppppuVar12 = *pppppuVar8;
  if (uVar2 + 3 < 7) {
    fVar26 = *(float *)ppppuVar12;
    fVar25 = 0.0;
    if (1 < (long)ppppuVar1) {
      lVar19 = (long)ppppuVar1 - 1;
      do {
        ppppuVar12 = (ulong ****)((long)ppppuVar12 + 4);
        fVar26 = fVar26 + *(float *)ppppuVar12;
        fVar25 = 0.0;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  else {
    puVar15 = (undefined8 *)((long)ppppuVar12 + (long)ppppuVar13 * 4);
    fVar26 = (float)puVar15[1];
    fVar28 = (float)((ulong)puVar15[1] >> 0x20);
    fVar25 = (float)*puVar15;
    fVar34 = (float)((ulong)*puVar15 >> 0x20);
    if (7 < (long)uVar2) {
      lVar19 = (uVar5 & 0xfffffffffffffff8) + (long)ppppuVar13;
      fVar29 = *(float *)(puVar15 + 2);
      fVar31 = *(float *)((long)puVar15 + 0x14);
      fVar32 = *(float *)(puVar15 + 3);
      fVar33 = *(float *)((long)puVar15 + 0x1c);
      if (0xf < uVar2) {
        ppppuVar14 = ppppuVar13 + 1;
        puVar15 = puVar15 + 6;
        do {
          fVar25 = fVar25 + (float)puVar15[-2];
          fVar34 = fVar34 + (float)((ulong)puVar15[-2] >> 0x20);
          fVar26 = fVar26 + (float)puVar15[-1];
          fVar28 = fVar28 + (float)((ulong)puVar15[-1] >> 0x20);
          fVar29 = fVar29 + (float)*puVar15;
          fVar31 = fVar31 + (float)((ulong)*puVar15 >> 0x20);
          fVar32 = fVar32 + (float)puVar15[1];
          fVar33 = fVar33 + (float)((ulong)puVar15[1] >> 0x20);
          ppppuVar14 = ppppuVar14 + 1;
          puVar15 = puVar15 + 4;
        } while ((long)ppppuVar14 < lVar19);
      }
      fVar25 = fVar29 + fVar25;
      fVar34 = fVar31 + fVar34;
      fVar26 = fVar32 + fVar26;
      fVar28 = fVar33 + fVar28;
      if ((long)(uVar5 & 0xfffffffffffffff8) < (long)(uVar21 & 0xfffffffffffffffc)) {
        pfVar3 = (float *)((long)ppppuVar12 + lVar19 * 4);
        fVar25 = fVar25 + *pfVar3;
        fVar34 = fVar34 + pfVar3[1];
        fVar26 = fVar26 + pfVar3[2];
        fVar28 = fVar28 + pfVar3[3];
      }
    }
    lVar19 = (uVar21 & 0xfffffffffffffffc) + (long)ppppuVar13;
    auVar30._4_4_ = fVar34;
    auVar30._0_4_ = fVar25;
    auVar30._8_4_ = fVar26;
    auVar30._12_4_ = fVar28;
    auVar4._4_4_ = fVar34;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar26;
    auVar4._12_4_ = fVar28;
    auVar30 = NEON_ext(auVar30,auVar4,8,1);
    fVar25 = fVar25 + auVar30._0_4_;
    fVar34 = fVar34 + auVar30._4_4_;
    fVar26 = fVar25 + fVar34;
    fVar25 = fVar25 + fVar34;
    ppppuVar14 = ppppuVar12;
    if (0 < (long)ppppuVar13) {
      do {
        fVar26 = fVar26 + *(float *)ppppuVar14;
        fVar25 = 0.0;
        ppppuVar13 = (ulong ****)((long)ppppuVar13 - 1);
        ppppuVar14 = (ulong ****)((long)ppppuVar14 + 4);
      } while (ppppuVar13 != (ulong ****)0x0);
    }
    for (; lVar19 < (long)ppppuVar1; lVar19 = lVar19 + 1) {
      fVar26 = fVar26 + *(float *)((long)ppppuVar12 + lVar19 * 4);
      fVar25 = 0.0;
    }
  }
  return CONCAT44(fVar25,fVar26);
}



/* Entry: 109c56d44; end: 109c56e0f;  */

undefined8
FUN_109c56d44(undefined8 param_1,long ******param_2,long ***param_3,long ******param_4,uint param_5,
             int param_6)

{
  long *****ppppplVar1;
  ulong uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  undefined8 *puVar13;
  long ***unaff_x19;
  long ***ppplVar14;
  long ******unaff_x20;
  long ******pppppplVar15;
  long unaff_x21;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long unaff_x23;
  ulong uVar18;
  long unaff_x24;
  long lVar19;
  long ******unaff_x25;
  long ******pppppplVar20;
  long ***unaff_x26;
  long ******unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *puVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  float fVar32;
  long **pplStack_578;
  long lStack_570;
  undefined1 uStack_559;
  long ****pppplStack_558;
  long *****ppppplStack_550;
  undefined1 *puStack_548;
  long **pplStack_540;
  long ***appplStack_538 [2];
  long lStack_528;
  long *****ppppplStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_4f8;
  undefined1 *puStack_4f0;
  long *****ppppplStack_4e8;
  long **pplStack_4e0;
  long *****ppppplStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long *****ppppplStack_4b0;
  long **pplStack_4a8;
  undefined1 *****pppppuStack_4a0;
  code *pcStack_498;
  long **pplStack_488;
  long lStack_480;
  undefined1 uStack_469;
  long ****pppplStack_468;
  long *****ppppplStack_460;
  undefined1 *puStack_458;
  long **pplStack_450;
  long ***appplStack_448 [2];
  long lStack_438;
  long *****ppppplStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_408;
  undefined1 *puStack_400;
  long *****ppppplStack_3f8;
  long **pplStack_3f0;
  long *****ppppplStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long *****ppppplStack_3c0;
  long **pplStack_3b8;
  undefined1 ****ppppuStack_3b0;
  code *pcStack_3a8;
  long **pplStack_3a0;
  long lStack_398;
  undefined1 uStack_381;
  long ****pppplStack_380;
  long *****ppppplStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  long ***appplStack_360 [2];
  long lStack_350;
  long ****pppplStack_348;
  long *****ppppplStack_340;
  long lStack_338;
  long lStack_330;
  float fStack_318;
  long lStack_310;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  long **pplStack_288;
  long lStack_280;
  undefined1 uStack_269;
  long ****pppplStack_268;
  long *****ppppplStack_260;
  undefined1 *puStack_258;
  long **pplStack_250;
  long ***appplStack_248 [2];
  long lStack_238;
  long *****ppppplStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_208;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 uStack_191;
  long *****ppppplStack_190;
  long lStack_188;
  long *****ppppplStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long *****appppplStack_140 [2];
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 uStack_c1;
  long *****ppppplStack_c0;
  long lStack_b8;
  long *****ppppplStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long *****appppplStack_70 [2];
  long lStack_60;
  long lStack_58;
  
  uVar24 = (undefined4)((ulong)param_1 >> 0x20);
  uVar22 = (undefined4)param_1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar6 = param_2;
  ppplVar8 = param_3;
  if (0 < (int)param_5) {
    unaff_x21 = 0;
    unaff_x22 = (long)(int)param_4;
    unaff_x23 = (long)(int)param_5;
    unaff_x24 = unaff_x22 * 4;
    unaff_x25 = param_2;
    do {
      uStack_88 = 0;
      pppppplVar6 = appppplStack_70;
      ppplVar8 = (long ***)&uStack_c1;
      param_4 = &ppppplStack_c0;
      ppppplStack_c0 = (long *****)unaff_x25;
      lStack_b8 = unaff_x22;
      ppppplStack_a8 = (long *****)param_2;
      lStack_a0 = unaff_x22;
      lStack_98 = unaff_x23;
      lStack_80 = unaff_x21;
      lStack_78 = unaff_x22;
      appppplStack_70[0] = (long *****)unaff_x25;
      lStack_60 = unaff_x22;
      FUN_109c57368();
      *(undefined4 *)((long)param_3 + unaff_x21 * 4) = uVar22;
      unaff_x21 = unaff_x21 + 1;
      unaff_x25 = (long ******)((long)unaff_x25 + unaff_x24);
      unaff_x19 = param_3;
      unaff_x20 = param_2;
    } while (unaff_x23 != unaff_x21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_d8 = FUN_109c56e10;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar7 = pppppplVar6;
  ppplVar9 = ppplVar8;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (0 < (int)param_5) {
    unaff_x21 = 0;
    unaff_x22 = (long)(int)param_4;
    unaff_x23 = (long)(int)param_5;
    unaff_x24 = unaff_x22 * 4;
    unaff_x25 = pppppplVar6;
    do {
      uStack_158 = 0;
      pppppplVar7 = appppplStack_140;
      ppplVar9 = (long ***)&uStack_191;
      param_4 = &ppppplStack_190;
      ppppplStack_190 = (long *****)unaff_x25;
      lStack_188 = unaff_x22;
      ppppplStack_178 = (long *****)pppppplVar6;
      lStack_170 = unaff_x22;
      lStack_168 = unaff_x23;
      lStack_150 = unaff_x21;
      lStack_148 = unaff_x22;
      appppplStack_140[0] = (long *****)unaff_x25;
      lStack_130 = unaff_x22;
      func_0x000109c574f8();
      *(undefined4 *)((long)ppplVar8 + unaff_x21 * 4) = uVar22;
      unaff_x21 = unaff_x21 + 1;
      unaff_x25 = (long ******)((long)unaff_x25 + unaff_x24);
      unaff_x19 = ppplVar8;
      unaff_x20 = pppppplVar6;
    } while (unaff_x23 != unaff_x21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_1a8 = FUN_109c56edc;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1b0 = &puStack_e0;
  if (0 < (int)param_4) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    uVar18 = (ulong)param_4 & 0xffffffff;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (long ******)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    unaff_x27 = &ppppplStack_230;
    unaff_x28 = &uStack_269;
    unaff_x26 = &pplStack_288;
    unaff_x19 = ppplVar9;
    unaff_x20 = pppppplVar7;
    do {
      pppplStack_268 = appplStack_248;
      pppppplVar7 = (long ******)&pppplStack_268;
      pplStack_288 = (long **)unaff_x19;
      lStack_280 = unaff_x21;
      ppppplStack_260 = (long *****)unaff_x27;
      puStack_258 = unaff_x28;
      pplStack_250 = (long **)unaff_x26;
      appplStack_248[0] = unaff_x19;
      lStack_238 = unaff_x21;
      ppppplStack_230 = (long *****)unaff_x20;
      lStack_228 = unaff_x21;
      lStack_220 = unaff_x22;
      FUN_109c57688();
      unaff_x20 = (long ******)((long)unaff_x20 + unaff_x24);
      unaff_x19 = (long ***)((long)unaff_x19 + (long)unaff_x25);
      uVar18 = uVar18 - 1;
      unaff_x23 = 0;
    } while (uVar18 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_298 = FUN_109c56fb8;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_2a0 = &ppuStack_1b0;
  if (0 < (int)param_4) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    uVar18 = (ulong)param_4 & 0xffffffff;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (long ******)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    fVar32 = (float)param_6;
    unaff_x27 = (long ******)&pppplStack_348;
    unaff_x28 = &uStack_381;
    unaff_x19 = ppplVar9;
    unaff_x20 = pppppplVar7;
    do {
      pppplStack_380 = appplStack_360;
      pppppplVar7 = (long ******)&pppplStack_380;
      pplStack_3a0 = (long **)unaff_x19;
      lStack_398 = unaff_x21;
      ppppplStack_378 = (long *****)unaff_x27;
      puStack_370 = unaff_x28;
      puStack_368 = (undefined1 *)&pplStack_3a0;
      appplStack_360[0] = unaff_x19;
      lStack_350 = unaff_x21;
      ppppplStack_340 = (long *****)unaff_x20;
      lStack_338 = unaff_x21;
      lStack_330 = unaff_x22;
      fStack_318 = fVar32;
      FUN_109c5791c();
      unaff_x20 = (long ******)((long)unaff_x20 + unaff_x24);
      unaff_x19 = (long ***)((long)unaff_x19 + (long)unaff_x25);
      uVar18 = uVar18 - 1;
      unaff_x23 = 0;
      unaff_x26 = &pplStack_3a0;
    } while (uVar18 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_3a8 = FUN_109c570a4;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = unaff_x21;
  lVar17 = unaff_x22;
  lVar19 = unaff_x24;
  pppppplVar20 = unaff_x25;
  ppplVar8 = unaff_x26;
  pppppplVar6 = unaff_x27;
  puVar21 = unaff_x28;
  puStack_400 = unaff_x28;
  ppppplStack_3f8 = (long *****)unaff_x27;
  pplStack_3f0 = (long **)unaff_x26;
  ppppplStack_3e8 = (long *****)unaff_x25;
  lStack_3e0 = unaff_x24;
  lStack_3d8 = unaff_x23;
  lStack_3d0 = unaff_x22;
  lStack_3c8 = unaff_x21;
  ppppplStack_3c0 = (long *****)unaff_x20;
  pplStack_3b8 = (long **)unaff_x19;
  ppppuStack_3b0 = &pppuStack_2a0;
  if (0 < (int)param_4) {
    lVar16 = (long)(int)param_5;
    lVar17 = (long)param_6;
    uVar18 = (ulong)param_4 & 0xffffffff;
    lVar19 = (long)param_6 * (long)(int)param_5 * 4;
    pppppplVar20 = (long ******)
                   (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    pppppplVar6 = &ppppplStack_430;
    puVar21 = &uStack_469;
    ppplVar8 = &pplStack_488;
    ppplVar14 = ppplVar9;
    pppppplVar15 = pppppplVar7;
    do {
      pppplStack_468 = appplStack_448;
      pppppplVar7 = (long ******)&pppplStack_468;
      pplStack_488 = (long **)ppplVar14;
      lStack_480 = lVar16;
      ppppplStack_460 = (long *****)pppppplVar6;
      puStack_458 = puVar21;
      pplStack_450 = (long **)ppplVar8;
      appplStack_448[0] = ppplVar14;
      lStack_438 = lVar16;
      ppppplStack_430 = (long *****)pppppplVar15;
      lStack_428 = lVar16;
      lStack_420 = lVar17;
      FUN_109c57b1c();
      unaff_x20 = (long ******)((long)pppppplVar15 + lVar19);
      unaff_x19 = (long ***)((long)ppplVar14 + (long)pppppplVar20);
      uVar18 = uVar18 - 1;
      unaff_x23 = 0;
      ppplVar14 = unaff_x19;
      pppppplVar15 = unaff_x20;
    } while (uVar18 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_498 = FUN_109c57180;
  lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4f0 = puVar21;
  ppppplStack_4e8 = (long *****)pppppplVar6;
  pplStack_4e0 = (long **)ppplVar8;
  ppppplStack_4d8 = (long *****)pppppplVar20;
  lStack_4d0 = lVar19;
  lStack_4c8 = unaff_x23;
  lStack_4c0 = lVar17;
  lStack_4b8 = lVar16;
  ppppplStack_4b0 = (long *****)unaff_x20;
  pplStack_4a8 = (long **)unaff_x19;
  pppppuStack_4a0 = &ppppuStack_3b0;
  if (0 < (int)param_4) {
    lVar16 = (long)(int)param_5;
    uVar18 = (ulong)param_4 & 0xffffffff;
    pppppplVar6 = pppppplVar7;
    do {
      pppplStack_558 = appplStack_538;
      pppppplVar7 = (long ******)&pppplStack_558;
      pplStack_578 = (long **)ppplVar9;
      lStack_570 = lVar16;
      ppppplStack_550 = (long *****)&ppppplStack_520;
      puStack_548 = &uStack_559;
      pplStack_540 = (long **)&pplStack_578;
      appplStack_538[0] = ppplVar9;
      lStack_528 = lVar16;
      ppppplStack_520 = (long *****)pppppplVar6;
      lStack_518 = lVar16;
      lStack_510 = (long)param_6;
      FUN_109c57da0();
      pppppplVar6 = (long ******)((long)pppppplVar6 + (long)param_6 * (long)(int)param_5 * 4);
      ppplVar9 = (long ***)
                 ((long)ppplVar9 +
                 (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppppplVar1 = param_4[1];
  ppppplVar10 = (long *****)((ulong)-((uint)*param_4 >> 2) & 3);
  if ((long)ppppplVar1 <= (long)ppppplVar10) {
    ppppplVar10 = ppppplVar1;
  }
  ppppplVar11 = ppppplVar1;
  if (((ulong)*param_4 & 3) == 0) {
    ppppplVar11 = ppppplVar10;
  }
  uVar2 = (long)ppppplVar1 - (long)ppppplVar11;
  uVar18 = uVar2 + 3;
  uVar5 = uVar2 + 7;
  if ((long)ppppplVar11 <= (long)ppppplVar1) {
    uVar18 = uVar2;
    uVar5 = uVar2;
  }
  ppppplVar10 = *pppppplVar7;
  if (uVar2 + 3 < 7) {
    fVar23 = *(float *)ppppplVar10;
    fVar32 = 0.0;
    if (1 < (long)ppppplVar1) {
      lVar16 = (long)ppppplVar1 - 1;
      do {
        ppppplVar10 = (long *****)((long)ppppplVar10 + 4);
        fVar23 = fVar23 + *(float *)ppppplVar10;
        fVar32 = 0.0;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  else {
    puVar13 = (undefined8 *)((long)ppppplVar10 + (long)ppppplVar11 * 4);
    fVar23 = (float)puVar13[1];
    fVar26 = (float)((ulong)puVar13[1] >> 0x20);
    fVar32 = (float)*puVar13;
    fVar25 = (float)((ulong)*puVar13 >> 0x20);
    if (7 < (long)uVar2) {
      lVar16 = (uVar5 & 0xfffffffffffffff8) + (long)ppppplVar11;
      fVar27 = *(float *)(puVar13 + 2);
      fVar29 = *(float *)((long)puVar13 + 0x14);
      fVar30 = *(float *)(puVar13 + 3);
      fVar31 = *(float *)((long)puVar13 + 0x1c);
      if (0xf < uVar2) {
        ppppplVar12 = ppppplVar11 + 1;
        puVar13 = puVar13 + 6;
        do {
          fVar32 = fVar32 + (float)puVar13[-2];
          fVar25 = fVar25 + (float)((ulong)puVar13[-2] >> 0x20);
          fVar23 = fVar23 + (float)puVar13[-1];
          fVar26 = fVar26 + (float)((ulong)puVar13[-1] >> 0x20);
          fVar27 = fVar27 + (float)*puVar13;
          fVar29 = fVar29 + (float)((ulong)*puVar13 >> 0x20);
          fVar30 = fVar30 + (float)puVar13[1];
          fVar31 = fVar31 + (float)((ulong)puVar13[1] >> 0x20);
          ppppplVar12 = ppppplVar12 + 1;
          puVar13 = puVar13 + 4;
        } while ((long)ppppplVar12 < lVar16);
      }
      fVar32 = fVar27 + fVar32;
      fVar25 = fVar29 + fVar25;
      fVar23 = fVar30 + fVar23;
      fVar26 = fVar31 + fVar26;
      if ((long)(uVar5 & 0xfffffffffffffff8) < (long)(uVar18 & 0xfffffffffffffffc)) {
        pfVar3 = (float *)((long)ppppplVar10 + lVar16 * 4);
        fVar32 = fVar32 + *pfVar3;
        fVar25 = fVar25 + pfVar3[1];
        fVar23 = fVar23 + pfVar3[2];
        fVar26 = fVar26 + pfVar3[3];
      }
    }
    lVar16 = (uVar18 & 0xfffffffffffffffc) + (long)ppppplVar11;
    auVar28._4_4_ = fVar25;
    auVar28._0_4_ = fVar32;
    auVar28._8_4_ = fVar23;
    auVar28._12_4_ = fVar26;
    auVar4._4_4_ = fVar25;
    auVar4._0_4_ = fVar32;
    auVar4._8_4_ = fVar23;
    auVar4._12_4_ = fVar26;
    auVar28 = NEON_ext(auVar28,auVar4,8,1);
    fVar32 = fVar32 + auVar28._0_4_;
    fVar25 = fVar25 + auVar28._4_4_;
    fVar23 = fVar32 + fVar25;
    fVar32 = fVar32 + fVar25;
    ppppplVar12 = ppppplVar10;
    if (0 < (long)ppppplVar11) {
      do {
        fVar23 = fVar23 + *(float *)ppppplVar12;
        fVar32 = 0.0;
        ppppplVar11 = (long *****)((long)ppppplVar11 - 1);
        ppppplVar12 = (long *****)((long)ppppplVar12 + 4);
      } while (ppppplVar11 != (long *****)0x0);
    }
    for (; lVar16 < (long)ppppplVar1; lVar16 = lVar16 + 1) {
      fVar23 = fVar23 + *(float *)((long)ppppplVar10 + lVar16 * 4);
      fVar32 = 0.0;
    }
  }
  return CONCAT44(fVar32,fVar23);
}



/* Entry: 109c56e10; end: 109c56edb;  */

undefined8
FUN_109c56e10(undefined8 param_1,long ******param_2,long ***param_3,long ******param_4,uint param_5,
             int param_6)

{
  long *****ppppplVar1;
  ulong uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  long ******pppppplVar6;
  long ***ppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  undefined8 *puVar11;
  long ***unaff_x19;
  long ***ppplVar12;
  long ******unaff_x20;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long unaff_x21;
  long lVar15;
  long unaff_x22;
  long lVar16;
  long unaff_x23;
  ulong uVar17;
  long unaff_x24;
  long lVar18;
  long ******unaff_x25;
  long ******pppppplVar19;
  long ***unaff_x26;
  long ***ppplVar20;
  long ******unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *puVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  float fVar32;
  long **pplStack_4a8;
  long lStack_4a0;
  undefined1 uStack_489;
  long ****pppplStack_488;
  long *****ppppplStack_480;
  undefined1 *puStack_478;
  long **pplStack_470;
  long ***appplStack_468 [2];
  long lStack_458;
  long *****ppppplStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_428;
  undefined1 *puStack_420;
  long *****ppppplStack_418;
  long **pplStack_410;
  long *****ppppplStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long *****ppppplStack_3e0;
  long **pplStack_3d8;
  undefined1 ****ppppuStack_3d0;
  code *pcStack_3c8;
  long **pplStack_3b8;
  long lStack_3b0;
  undefined1 uStack_399;
  long ****pppplStack_398;
  long *****ppppplStack_390;
  undefined1 *puStack_388;
  long **pplStack_380;
  long ***appplStack_378 [2];
  long lStack_368;
  long *****ppppplStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_338;
  undefined1 *puStack_330;
  long *****ppppplStack_328;
  long **pplStack_320;
  long *****ppppplStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long *****ppppplStack_2f0;
  long **pplStack_2e8;
  undefined1 ***pppuStack_2e0;
  code *pcStack_2d8;
  long **pplStack_2d0;
  long lStack_2c8;
  undefined1 uStack_2b1;
  long ****pppplStack_2b0;
  long *****ppppplStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  long ***appplStack_290 [2];
  long lStack_280;
  long ****pppplStack_278;
  long *****ppppplStack_270;
  long lStack_268;
  long lStack_260;
  float fStack_248;
  long lStack_240;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  long **pplStack_1b8;
  long lStack_1b0;
  undefined1 uStack_199;
  long ****pppplStack_198;
  long *****ppppplStack_190;
  undefined1 *puStack_188;
  long **pplStack_180;
  long ***appplStack_178 [2];
  long lStack_168;
  long *****ppppplStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_138;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 uStack_c1;
  long *****ppppplStack_c0;
  long lStack_b8;
  long *****ppppplStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long *****appppplStack_70 [2];
  long lStack_60;
  long lStack_58;
  
  uVar24 = (undefined4)((ulong)param_1 >> 0x20);
  uVar22 = (undefined4)param_1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar6 = param_2;
  ppplVar7 = param_3;
  if (0 < (int)param_5) {
    unaff_x21 = 0;
    unaff_x22 = (long)(int)param_4;
    unaff_x23 = (long)(int)param_5;
    unaff_x24 = unaff_x22 * 4;
    unaff_x25 = param_2;
    do {
      uStack_88 = 0;
      pppppplVar6 = appppplStack_70;
      ppplVar7 = (long ***)&uStack_c1;
      param_4 = &ppppplStack_c0;
      ppppplStack_c0 = (long *****)unaff_x25;
      lStack_b8 = unaff_x22;
      ppppplStack_a8 = (long *****)param_2;
      lStack_a0 = unaff_x22;
      lStack_98 = unaff_x23;
      lStack_80 = unaff_x21;
      lStack_78 = unaff_x22;
      appppplStack_70[0] = (long *****)unaff_x25;
      lStack_60 = unaff_x22;
      func_0x000109c574f8();
      *(undefined4 *)((long)param_3 + unaff_x21 * 4) = uVar22;
      unaff_x21 = unaff_x21 + 1;
      unaff_x25 = (long ******)((long)unaff_x25 + unaff_x24);
      unaff_x19 = param_3;
      unaff_x20 = param_2;
    } while (unaff_x23 != unaff_x21);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_d8 = FUN_109c56edc;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (0 < (int)param_4) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    uVar17 = (ulong)param_4 & 0xffffffff;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (long ******)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    unaff_x27 = &ppppplStack_160;
    unaff_x28 = &uStack_199;
    unaff_x26 = &pplStack_1b8;
    unaff_x19 = ppplVar7;
    unaff_x20 = pppppplVar6;
    do {
      pppplStack_198 = appplStack_178;
      pppppplVar6 = (long ******)&pppplStack_198;
      pplStack_1b8 = (long **)unaff_x19;
      lStack_1b0 = unaff_x21;
      ppppplStack_190 = (long *****)unaff_x27;
      puStack_188 = unaff_x28;
      pplStack_180 = (long **)unaff_x26;
      appplStack_178[0] = unaff_x19;
      lStack_168 = unaff_x21;
      ppppplStack_160 = (long *****)unaff_x20;
      lStack_158 = unaff_x21;
      lStack_150 = unaff_x22;
      FUN_109c57688();
      unaff_x20 = (long ******)((long)unaff_x20 + unaff_x24);
      unaff_x19 = (long ***)((long)unaff_x19 + (long)unaff_x25);
      uVar17 = uVar17 - 1;
      unaff_x23 = 0;
    } while (uVar17 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_1c8 = FUN_109c56fb8;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1d0 = &puStack_e0;
  if (0 < (int)param_4) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    uVar17 = (ulong)param_4 & 0xffffffff;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = (long ******)(-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    fVar32 = (float)param_6;
    unaff_x27 = (long ******)&pppplStack_278;
    unaff_x28 = &uStack_2b1;
    unaff_x19 = ppplVar7;
    unaff_x20 = pppppplVar6;
    do {
      pppplStack_2b0 = appplStack_290;
      pppppplVar6 = (long ******)&pppplStack_2b0;
      pplStack_2d0 = (long **)unaff_x19;
      lStack_2c8 = unaff_x21;
      ppppplStack_2a8 = (long *****)unaff_x27;
      puStack_2a0 = unaff_x28;
      puStack_298 = (undefined1 *)&pplStack_2d0;
      appplStack_290[0] = unaff_x19;
      lStack_280 = unaff_x21;
      ppppplStack_270 = (long *****)unaff_x20;
      lStack_268 = unaff_x21;
      lStack_260 = unaff_x22;
      fStack_248 = fVar32;
      FUN_109c5791c();
      unaff_x20 = (long ******)((long)unaff_x20 + unaff_x24);
      unaff_x19 = (long ***)((long)unaff_x19 + (long)unaff_x25);
      uVar17 = uVar17 - 1;
      unaff_x23 = 0;
      unaff_x26 = &pplStack_2d0;
    } while (uVar17 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_2d8 = FUN_109c570a4;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = unaff_x21;
  lVar16 = unaff_x22;
  lVar18 = unaff_x24;
  pppppplVar19 = unaff_x25;
  ppplVar20 = unaff_x26;
  pppppplVar14 = unaff_x27;
  puVar21 = unaff_x28;
  puStack_330 = unaff_x28;
  ppppplStack_328 = (long *****)unaff_x27;
  pplStack_320 = (long **)unaff_x26;
  ppppplStack_318 = (long *****)unaff_x25;
  lStack_310 = unaff_x24;
  lStack_308 = unaff_x23;
  lStack_300 = unaff_x22;
  lStack_2f8 = unaff_x21;
  ppppplStack_2f0 = (long *****)unaff_x20;
  pplStack_2e8 = (long **)unaff_x19;
  pppuStack_2e0 = &ppuStack_1d0;
  if (0 < (int)param_4) {
    lVar15 = (long)(int)param_5;
    lVar16 = (long)param_6;
    uVar17 = (ulong)param_4 & 0xffffffff;
    lVar18 = (long)param_6 * (long)(int)param_5 * 4;
    pppppplVar19 = (long ******)
                   (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
    pppppplVar14 = &ppppplStack_360;
    puVar21 = &uStack_399;
    ppplVar20 = &pplStack_3b8;
    ppplVar12 = ppplVar7;
    pppppplVar13 = pppppplVar6;
    do {
      pppplStack_398 = appplStack_378;
      pppppplVar6 = (long ******)&pppplStack_398;
      pplStack_3b8 = (long **)ppplVar12;
      lStack_3b0 = lVar15;
      ppppplStack_390 = (long *****)pppppplVar14;
      puStack_388 = puVar21;
      pplStack_380 = (long **)ppplVar20;
      appplStack_378[0] = ppplVar12;
      lStack_368 = lVar15;
      ppppplStack_360 = (long *****)pppppplVar13;
      lStack_358 = lVar15;
      lStack_350 = lVar16;
      FUN_109c57b1c();
      unaff_x20 = (long ******)((long)pppppplVar13 + lVar18);
      unaff_x19 = (long ***)((long)ppplVar12 + (long)pppppplVar19);
      uVar17 = uVar17 - 1;
      unaff_x23 = 0;
      ppplVar12 = unaff_x19;
      pppppplVar13 = unaff_x20;
    } while (uVar17 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_3c8 = FUN_109c57180;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_420 = puVar21;
  ppppplStack_418 = (long *****)pppppplVar14;
  pplStack_410 = (long **)ppplVar20;
  ppppplStack_408 = (long *****)pppppplVar19;
  lStack_400 = lVar18;
  lStack_3f8 = unaff_x23;
  lStack_3f0 = lVar16;
  lStack_3e8 = lVar15;
  ppppplStack_3e0 = (long *****)unaff_x20;
  pplStack_3d8 = (long **)unaff_x19;
  ppppuStack_3d0 = &pppuStack_2e0;
  if (0 < (int)param_4) {
    lVar15 = (long)(int)param_5;
    uVar17 = (ulong)param_4 & 0xffffffff;
    pppppplVar14 = pppppplVar6;
    do {
      pppplStack_488 = appplStack_468;
      pppppplVar6 = (long ******)&pppplStack_488;
      pplStack_4a8 = (long **)ppplVar7;
      lStack_4a0 = lVar15;
      ppppplStack_480 = (long *****)&ppppplStack_450;
      puStack_478 = &uStack_489;
      pplStack_470 = (long **)&pplStack_4a8;
      appplStack_468[0] = ppplVar7;
      lStack_458 = lVar15;
      ppppplStack_450 = (long *****)pppppplVar14;
      lStack_448 = lVar15;
      lStack_440 = (long)param_6;
      FUN_109c57da0();
      pppppplVar14 = (long ******)((long)pppppplVar14 + (long)param_6 * (long)(int)param_5 * 4);
      ppplVar7 = (long ***)
                 ((long)ppplVar7 +
                 (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2));
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return CONCAT44(uVar24,uVar22);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppppplVar1 = param_4[1];
  ppppplVar8 = (long *****)((ulong)-((uint)*param_4 >> 2) & 3);
  if ((long)ppppplVar1 <= (long)ppppplVar8) {
    ppppplVar8 = ppppplVar1;
  }
  ppppplVar9 = ppppplVar1;
  if (((ulong)*param_4 & 3) == 0) {
    ppppplVar9 = ppppplVar8;
  }
  uVar2 = (long)ppppplVar1 - (long)ppppplVar9;
  uVar17 = uVar2 + 3;
  uVar5 = uVar2 + 7;
  if ((long)ppppplVar9 <= (long)ppppplVar1) {
    uVar17 = uVar2;
    uVar5 = uVar2;
  }
  ppppplVar8 = *pppppplVar6;
  if (uVar2 + 3 < 7) {
    fVar23 = *(float *)ppppplVar8;
    fVar32 = 0.0;
    if (1 < (long)ppppplVar1) {
      lVar15 = (long)ppppplVar1 - 1;
      do {
        ppppplVar8 = (long *****)((long)ppppplVar8 + 4);
        fVar23 = fVar23 + *(float *)ppppplVar8;
        fVar32 = 0.0;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  else {
    puVar11 = (undefined8 *)((long)ppppplVar8 + (long)ppppplVar9 * 4);
    fVar23 = (float)puVar11[1];
    fVar26 = (float)((ulong)puVar11[1] >> 0x20);
    fVar32 = (float)*puVar11;
    fVar25 = (float)((ulong)*puVar11 >> 0x20);
    if (7 < (long)uVar2) {
      lVar15 = (uVar5 & 0xfffffffffffffff8) + (long)ppppplVar9;
      fVar27 = *(float *)(puVar11 + 2);
      fVar29 = *(float *)((long)puVar11 + 0x14);
      fVar30 = *(float *)(puVar11 + 3);
      fVar31 = *(float *)((long)puVar11 + 0x1c);
      if (0xf < uVar2) {
        ppppplVar10 = ppppplVar9 + 1;
        puVar11 = puVar11 + 6;
        do {
          fVar32 = fVar32 + (float)puVar11[-2];
          fVar25 = fVar25 + (float)((ulong)puVar11[-2] >> 0x20);
          fVar23 = fVar23 + (float)puVar11[-1];
          fVar26 = fVar26 + (float)((ulong)puVar11[-1] >> 0x20);
          fVar27 = fVar27 + (float)*puVar11;
          fVar29 = fVar29 + (float)((ulong)*puVar11 >> 0x20);
          fVar30 = fVar30 + (float)puVar11[1];
          fVar31 = fVar31 + (float)((ulong)puVar11[1] >> 0x20);
          ppppplVar10 = ppppplVar10 + 1;
          puVar11 = puVar11 + 4;
        } while ((long)ppppplVar10 < lVar15);
      }
      fVar32 = fVar27 + fVar32;
      fVar25 = fVar29 + fVar25;
      fVar23 = fVar30 + fVar23;
      fVar26 = fVar31 + fVar26;
      if ((long)(uVar5 & 0xfffffffffffffff8) < (long)(uVar17 & 0xfffffffffffffffc)) {
        pfVar3 = (float *)((long)ppppplVar8 + lVar15 * 4);
        fVar32 = fVar32 + *pfVar3;
        fVar25 = fVar25 + pfVar3[1];
        fVar23 = fVar23 + pfVar3[2];
        fVar26 = fVar26 + pfVar3[3];
      }
    }
    lVar15 = (uVar17 & 0xfffffffffffffffc) + (long)ppppplVar9;
    auVar28._4_4_ = fVar25;
    auVar28._0_4_ = fVar32;
    auVar28._8_4_ = fVar23;
    auVar28._12_4_ = fVar26;
    auVar4._4_4_ = fVar25;
    auVar4._0_4_ = fVar32;
    auVar4._8_4_ = fVar23;
    auVar4._12_4_ = fVar26;
    auVar28 = NEON_ext(auVar28,auVar4,8,1);
    fVar32 = fVar32 + auVar28._0_4_;
    fVar25 = fVar25 + auVar28._4_4_;
    fVar23 = fVar32 + fVar25;
    fVar32 = fVar32 + fVar25;
    ppppplVar10 = ppppplVar8;
    if (0 < (long)ppppplVar9) {
      do {
        fVar23 = fVar23 + *(float *)ppppplVar10;
        fVar32 = 0.0;
        ppppplVar9 = (long *****)((long)ppppplVar9 - 1);
        ppppplVar10 = (long *****)((long)ppppplVar10 + 4);
      } while (ppppplVar9 != (long *****)0x0);
    }
    for (; lVar15 < (long)ppppplVar1; lVar15 = lVar15 + 1) {
      fVar23 = fVar23 + *(float *)((long)ppppplVar8 + lVar15 * 4);
      fVar32 = 0.0;
    }
  }
  return CONCAT44(fVar32,fVar23);
}



/* Entry: 109c56edc; end: 109c56fb7;  */

undefined8
FUN_109c56edc(undefined8 param_1,long **param_2,long param_3,ulong param_4,uint param_5,int param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long unaff_x19;
  long lVar9;
  long **unaff_x20;
  long **pplVar10;
  long unaff_x21;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  ulong uVar13;
  ulong uVar14;
  long unaff_x24;
  long lVar15;
  ulong unaff_x25;
  long *unaff_x26;
  long *plVar16;
  long ***unaff_x27;
  long ***ppplVar17;
  undefined1 *unaff_x28;
  undefined1 *puVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  long lStack_3d8;
  long lStack_3d0;
  undefined1 uStack_3b9;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined1 *puStack_3a8;
  long *plStack_3a0;
  long alStack_398 [2];
  long lStack_388;
  long **pplStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_358;
  undefined1 *puStack_350;
  undefined8 ***pppuStack_348;
  long *plStack_340;
  ulong uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  long **pplStack_310;
  long lStack_308;
  undefined1 ***pppuStack_300;
  code *pcStack_2f8;
  long lStack_2e8;
  long lStack_2e0;
  undefined1 uStack_2c9;
  long *plStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined1 *puStack_2b8;
  long *plStack_2b0;
  long alStack_2a8 [2];
  long lStack_298;
  long **pplStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_268;
  undefined1 *puStack_260;
  undefined8 ***pppuStack_258;
  long *plStack_250;
  ulong uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long **pplStack_220;
  long lStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 uStack_1e1;
  long *plStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  long alStack_1c0 [2];
  long lStack_1b0;
  undefined8 **ppuStack_1a8;
  long **pplStack_1a0;
  long lStack_198;
  long lStack_190;
  float fStack_178;
  long lStack_170;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_c9;
  long *plStack_c8;
  undefined8 ***pppuStack_c0;
  undefined1 *puStack_b8;
  long *plStack_b0;
  long alStack_a8 [2];
  long lStack_98;
  long **pplStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_68;
  
  uVar21 = (undefined4)((ulong)param_1 >> 0x20);
  uVar19 = (undefined4)param_1;
  uVar5 = (undefined4)(param_4 >> 0x20);
  uVar4 = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < (int)uVar4) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    param_4 = param_4 & 0xffffffff;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    unaff_x27 = &pplStack_90;
    unaff_x28 = &uStack_c9;
    unaff_x26 = &lStack_e8;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    do {
      plStack_c8 = alStack_a8;
      param_2 = &plStack_c8;
      lStack_e8 = unaff_x19;
      lStack_e0 = unaff_x21;
      pppuStack_c0 = unaff_x27;
      puStack_b8 = unaff_x28;
      plStack_b0 = unaff_x26;
      alStack_a8[0] = unaff_x19;
      lStack_98 = unaff_x21;
      pplStack_90 = unaff_x20;
      lStack_88 = unaff_x21;
      lStack_80 = unaff_x22;
      FUN_109c57688();
      unaff_x20 = (long **)((long)unaff_x20 + unaff_x24);
      unaff_x19 = unaff_x19 + unaff_x25;
      param_4 = param_4 - 1;
      unaff_x23 = 0;
    } while (param_4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return CONCAT44(uVar21,uVar19);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_f8 = FUN_109c56fb8;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = &stack0xfffffffffffffff0;
  if (0 < (int)uVar4) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    uVar13 = (ulong)uVar4;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    fVar29 = (float)param_6;
    unaff_x27 = &ppuStack_1a8;
    unaff_x28 = &uStack_1e1;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    do {
      plStack_1e0 = alStack_1c0;
      param_2 = &plStack_1e0;
      lStack_200 = unaff_x19;
      lStack_1f8 = unaff_x21;
      pppuStack_1d8 = unaff_x27;
      puStack_1d0 = unaff_x28;
      puStack_1c8 = (undefined1 *)&lStack_200;
      alStack_1c0[0] = unaff_x19;
      lStack_1b0 = unaff_x21;
      pplStack_1a0 = unaff_x20;
      lStack_198 = unaff_x21;
      lStack_190 = unaff_x22;
      fStack_178 = fVar29;
      FUN_109c5791c();
      unaff_x20 = (long **)((long)unaff_x20 + unaff_x24);
      unaff_x19 = unaff_x19 + unaff_x25;
      uVar13 = uVar13 - 1;
      unaff_x23 = 0;
      unaff_x26 = &lStack_200;
    } while (uVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    return CONCAT44(uVar21,uVar19);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_208 = FUN_109c570a4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = unaff_x21;
  lVar12 = unaff_x22;
  lVar15 = unaff_x24;
  uVar13 = unaff_x25;
  plVar16 = unaff_x26;
  ppplVar17 = unaff_x27;
  puVar18 = unaff_x28;
  puStack_260 = unaff_x28;
  pppuStack_258 = unaff_x27;
  plStack_250 = unaff_x26;
  uStack_248 = unaff_x25;
  lStack_240 = unaff_x24;
  uStack_238 = unaff_x23;
  lStack_230 = unaff_x22;
  lStack_228 = unaff_x21;
  pplStack_220 = unaff_x20;
  lStack_218 = unaff_x19;
  ppuStack_210 = &puStack_100;
  if (0 < (int)uVar4) {
    lVar11 = (long)(int)param_5;
    lVar12 = (long)param_6;
    uVar14 = (ulong)uVar4;
    lVar15 = (long)param_6 * (long)(int)param_5 * 4;
    uVar13 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    ppplVar17 = &pplStack_290;
    puVar18 = &uStack_2c9;
    plVar16 = &lStack_2e8;
    lVar9 = param_3;
    pplVar10 = param_2;
    do {
      plStack_2c8 = alStack_2a8;
      param_2 = &plStack_2c8;
      lStack_2e8 = lVar9;
      lStack_2e0 = lVar11;
      pppuStack_2c0 = ppplVar17;
      puStack_2b8 = puVar18;
      plStack_2b0 = plVar16;
      alStack_2a8[0] = lVar9;
      lStack_298 = lVar11;
      pplStack_290 = pplVar10;
      lStack_288 = lVar11;
      lStack_280 = lVar12;
      FUN_109c57b1c();
      unaff_x20 = (long **)((long)pplVar10 + lVar15);
      unaff_x19 = lVar9 + uVar13;
      uVar14 = uVar14 - 1;
      unaff_x23 = 0;
      lVar9 = unaff_x19;
      pplVar10 = unaff_x20;
    } while (uVar14 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return CONCAT44(uVar21,uVar19);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_2f8 = FUN_109c57180;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_350 = puVar18;
  pppuStack_348 = ppplVar17;
  plStack_340 = plVar16;
  uStack_338 = uVar13;
  lStack_330 = lVar15;
  uStack_328 = unaff_x23;
  lStack_320 = lVar12;
  lStack_318 = lVar11;
  pplStack_310 = unaff_x20;
  lStack_308 = unaff_x19;
  pppuStack_300 = &ppuStack_210;
  if (0 < (int)uVar4) {
    lVar11 = (long)(int)param_5;
    uVar13 = (ulong)uVar4;
    pplVar10 = param_2;
    do {
      plStack_3b8 = alStack_398;
      param_2 = &plStack_3b8;
      lStack_3d8 = param_3;
      lStack_3d0 = lVar11;
      pppuStack_3b0 = &pplStack_380;
      puStack_3a8 = &uStack_3b9;
      plStack_3a0 = &lStack_3d8;
      alStack_398[0] = param_3;
      lStack_388 = lVar11;
      pplStack_380 = pplVar10;
      lStack_378 = lVar11;
      lStack_370 = (long)param_6;
      FUN_109c57da0();
      pplVar10 = (long **)((long)pplVar10 + (long)param_6 * (long)(int)param_5 * 4);
      param_3 = param_3 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return CONCAT44(uVar21,uVar19);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar14 = *(ulong *)CONCAT44(uVar5,uVar4);
  uVar1 = ((ulong *)CONCAT44(uVar5,uVar4))[1];
  uVar13 = (ulong)-((uint)uVar14 >> 2) & 3;
  if ((long)uVar1 <= (long)uVar13) {
    uVar13 = uVar1;
  }
  uVar7 = uVar1;
  if ((uVar14 & 3) == 0) {
    uVar7 = uVar13;
  }
  uVar14 = uVar1 - uVar7;
  uVar13 = uVar14 + 3;
  uVar3 = uVar14 + 7;
  if ((long)uVar7 <= (long)uVar1) {
    uVar13 = uVar14;
    uVar3 = uVar14;
  }
  pfVar6 = (float *)*param_2;
  if (uVar14 + 3 < 7) {
    fVar20 = *pfVar6;
    fVar29 = 0.0;
    if (1 < (long)uVar1) {
      lVar11 = uVar1 - 1;
      do {
        pfVar6 = pfVar6 + 1;
        fVar20 = fVar20 + *pfVar6;
        fVar29 = 0.0;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  else {
    pfVar8 = pfVar6 + uVar7;
    fVar20 = (float)*(undefined8 *)(pfVar8 + 2);
    fVar23 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
    fVar29 = (float)*(undefined8 *)pfVar8;
    fVar22 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
    if (7 < (long)uVar14) {
      lVar11 = (uVar3 & 0xfffffffffffffff8) + uVar7;
      fVar24 = pfVar8[4];
      fVar26 = pfVar8[5];
      fVar27 = pfVar8[6];
      fVar28 = pfVar8[7];
      if (0xf < uVar14) {
        lVar12 = uVar7 + 8;
        pfVar8 = pfVar8 + 0xc;
        do {
          fVar29 = fVar29 + (float)*(undefined8 *)(pfVar8 + -4);
          fVar22 = fVar22 + (float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20);
          fVar20 = fVar20 + (float)*(undefined8 *)(pfVar8 + -2);
          fVar23 = fVar23 + (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
          fVar24 = fVar24 + (float)*(undefined8 *)pfVar8;
          fVar26 = fVar26 + (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
          fVar27 = fVar27 + (float)*(undefined8 *)(pfVar8 + 2);
          fVar28 = fVar28 + (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
          lVar12 = lVar12 + 8;
          pfVar8 = pfVar8 + 8;
        } while (lVar12 < lVar11);
      }
      fVar29 = fVar24 + fVar29;
      fVar22 = fVar26 + fVar22;
      fVar20 = fVar27 + fVar20;
      fVar23 = fVar28 + fVar23;
      if ((long)(uVar3 & 0xfffffffffffffff8) < (long)(uVar13 & 0xfffffffffffffffc)) {
        pfVar8 = pfVar6 + lVar11;
        fVar29 = fVar29 + *pfVar8;
        fVar22 = fVar22 + pfVar8[1];
        fVar20 = fVar20 + pfVar8[2];
        fVar23 = fVar23 + pfVar8[3];
      }
    }
    lVar11 = (uVar13 & 0xfffffffffffffffc) + uVar7;
    auVar25._4_4_ = fVar22;
    auVar25._0_4_ = fVar29;
    auVar25._8_4_ = fVar20;
    auVar25._12_4_ = fVar23;
    auVar2._4_4_ = fVar22;
    auVar2._0_4_ = fVar29;
    auVar2._8_4_ = fVar20;
    auVar2._12_4_ = fVar23;
    auVar25 = NEON_ext(auVar25,auVar2,8,1);
    fVar29 = fVar29 + auVar25._0_4_;
    fVar22 = fVar22 + auVar25._4_4_;
    fVar20 = fVar29 + fVar22;
    fVar29 = fVar29 + fVar22;
    pfVar8 = pfVar6;
    if (0 < (long)uVar7) {
      do {
        fVar20 = fVar20 + *pfVar8;
        fVar29 = 0.0;
        uVar7 = uVar7 - 1;
        pfVar8 = pfVar8 + 1;
      } while (uVar7 != 0);
    }
    for (; lVar11 < (long)uVar1; lVar11 = lVar11 + 1) {
      fVar20 = fVar20 + pfVar6[lVar11];
      fVar29 = 0.0;
    }
  }
  return CONCAT44(fVar29,fVar20);
}



/* Entry: 109c56fb8; end: 109c570a3;  */

undefined8
FUN_109c56fb8(undefined8 param_1,long **param_2,long param_3,ulong param_4,uint param_5,int param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  long unaff_x19;
  long lVar9;
  long **unaff_x20;
  long **pplVar10;
  long unaff_x21;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  ulong uVar13;
  long unaff_x24;
  long lVar14;
  ulong unaff_x25;
  ulong uVar15;
  long *unaff_x26;
  long *plVar16;
  long ***unaff_x27;
  long ***ppplVar17;
  undefined1 *unaff_x28;
  undefined1 *puVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  long lStack_2e8;
  long lStack_2e0;
  undefined1 uStack_2c9;
  long *plStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined1 *puStack_2b8;
  long *plStack_2b0;
  long alStack_2a8 [2];
  long lStack_298;
  long **pplStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_268;
  undefined1 *puStack_260;
  undefined8 ***pppuStack_258;
  long *plStack_250;
  ulong uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long **pplStack_220;
  long lStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 uStack_1d9;
  long *plStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined1 *puStack_1c8;
  long *plStack_1c0;
  long alStack_1b8 [2];
  long lStack_1a8;
  long **pplStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 ***pppuStack_168;
  long *plStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long **pplStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 uStack_f1;
  long *plStack_f0;
  undefined8 ***pppuStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  long alStack_d0 [2];
  long lStack_c0;
  undefined8 **ppuStack_b8;
  long **pplStack_b0;
  long lStack_a8;
  long lStack_a0;
  float fStack_88;
  long lStack_80;
  
  uVar21 = (undefined4)((ulong)param_1 >> 0x20);
  uVar19 = (undefined4)param_1;
  uVar5 = (undefined4)(param_4 >> 0x20);
  uVar4 = (uint)param_4;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_160 = unaff_x26;
  if (0 < (int)uVar4) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    param_4 = param_4 & 0xffffffff;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    fVar29 = (float)param_6;
    unaff_x27 = &ppuStack_b8;
    unaff_x28 = &uStack_f1;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    do {
      plStack_f0 = alStack_d0;
      param_2 = &plStack_f0;
      lStack_110 = unaff_x19;
      lStack_108 = unaff_x21;
      pppuStack_e8 = unaff_x27;
      puStack_e0 = unaff_x28;
      puStack_d8 = (undefined1 *)&lStack_110;
      alStack_d0[0] = unaff_x19;
      lStack_c0 = unaff_x21;
      pplStack_b0 = unaff_x20;
      lStack_a8 = unaff_x21;
      lStack_a0 = unaff_x22;
      fStack_88 = fVar29;
      FUN_109c5791c();
      unaff_x20 = (long **)((long)unaff_x20 + unaff_x24);
      unaff_x19 = unaff_x19 + unaff_x25;
      param_4 = param_4 - 1;
      unaff_x23 = 0;
      plStack_160 = &lStack_110;
    } while (param_4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return CONCAT44(uVar21,uVar19);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_118 = FUN_109c570a4;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = unaff_x21;
  lVar12 = unaff_x22;
  lVar14 = unaff_x24;
  uVar15 = unaff_x25;
  plVar16 = plStack_160;
  ppplVar17 = unaff_x27;
  puVar18 = unaff_x28;
  puStack_170 = unaff_x28;
  pppuStack_168 = unaff_x27;
  uStack_158 = unaff_x25;
  lStack_150 = unaff_x24;
  uStack_148 = unaff_x23;
  lStack_140 = unaff_x22;
  lStack_138 = unaff_x21;
  pplStack_130 = unaff_x20;
  lStack_128 = unaff_x19;
  puStack_120 = &stack0xfffffffffffffff0;
  if (0 < (int)uVar4) {
    lVar11 = (long)(int)param_5;
    lVar12 = (long)param_6;
    uVar13 = (ulong)uVar4;
    lVar14 = (long)param_6 * (long)(int)param_5 * 4;
    uVar15 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    ppplVar17 = &pplStack_1a0;
    puVar18 = &uStack_1d9;
    plVar16 = &lStack_1f8;
    lVar9 = param_3;
    pplVar10 = param_2;
    do {
      plStack_1d8 = alStack_1b8;
      param_2 = &plStack_1d8;
      lStack_1f8 = lVar9;
      lStack_1f0 = lVar11;
      pppuStack_1d0 = ppplVar17;
      puStack_1c8 = puVar18;
      plStack_1c0 = plVar16;
      alStack_1b8[0] = lVar9;
      lStack_1a8 = lVar11;
      pplStack_1a0 = pplVar10;
      lStack_198 = lVar11;
      lStack_190 = lVar12;
      FUN_109c57b1c();
      unaff_x20 = (long **)((long)pplVar10 + lVar14);
      unaff_x19 = lVar9 + uVar15;
      uVar13 = uVar13 - 1;
      unaff_x23 = 0;
      lVar9 = unaff_x19;
      pplVar10 = unaff_x20;
    } while (uVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return CONCAT44(uVar21,uVar19);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_208 = FUN_109c57180;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = puVar18;
  pppuStack_258 = ppplVar17;
  plStack_250 = plVar16;
  uStack_248 = uVar15;
  lStack_240 = lVar14;
  uStack_238 = unaff_x23;
  lStack_230 = lVar12;
  lStack_228 = lVar11;
  pplStack_220 = unaff_x20;
  lStack_218 = unaff_x19;
  ppuStack_210 = &puStack_120;
  if (0 < (int)uVar4) {
    lVar11 = (long)(int)param_5;
    uVar15 = (ulong)uVar4;
    pplVar10 = param_2;
    do {
      plStack_2c8 = alStack_2a8;
      param_2 = &plStack_2c8;
      lStack_2e8 = param_3;
      lStack_2e0 = lVar11;
      pppuStack_2c0 = &pplStack_290;
      puStack_2b8 = &uStack_2c9;
      plStack_2b0 = &lStack_2e8;
      alStack_2a8[0] = param_3;
      lStack_298 = lVar11;
      pplStack_290 = pplVar10;
      lStack_288 = lVar11;
      lStack_280 = (long)param_6;
      FUN_109c57da0();
      pplVar10 = (long **)((long)pplVar10 + (long)param_6 * (long)(int)param_5 * 4);
      param_3 = param_3 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return CONCAT44(uVar21,uVar19);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar13 = *(ulong *)CONCAT44(uVar5,uVar4);
  uVar1 = ((ulong *)CONCAT44(uVar5,uVar4))[1];
  uVar15 = (ulong)-((uint)uVar13 >> 2) & 3;
  if ((long)uVar1 <= (long)uVar15) {
    uVar15 = uVar1;
  }
  uVar7 = uVar1;
  if ((uVar13 & 3) == 0) {
    uVar7 = uVar15;
  }
  uVar13 = uVar1 - uVar7;
  uVar15 = uVar13 + 3;
  uVar3 = uVar13 + 7;
  if ((long)uVar7 <= (long)uVar1) {
    uVar15 = uVar13;
    uVar3 = uVar13;
  }
  pfVar6 = (float *)*param_2;
  if (uVar13 + 3 < 7) {
    fVar20 = *pfVar6;
    fVar29 = 0.0;
    if (1 < (long)uVar1) {
      lVar11 = uVar1 - 1;
      do {
        pfVar6 = pfVar6 + 1;
        fVar20 = fVar20 + *pfVar6;
        fVar29 = 0.0;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  else {
    pfVar8 = pfVar6 + uVar7;
    fVar20 = (float)*(undefined8 *)(pfVar8 + 2);
    fVar23 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
    fVar29 = (float)*(undefined8 *)pfVar8;
    fVar22 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
    if (7 < (long)uVar13) {
      lVar11 = (uVar3 & 0xfffffffffffffff8) + uVar7;
      fVar24 = pfVar8[4];
      fVar26 = pfVar8[5];
      fVar27 = pfVar8[6];
      fVar28 = pfVar8[7];
      if (0xf < uVar13) {
        lVar12 = uVar7 + 8;
        pfVar8 = pfVar8 + 0xc;
        do {
          fVar29 = fVar29 + (float)*(undefined8 *)(pfVar8 + -4);
          fVar22 = fVar22 + (float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20);
          fVar20 = fVar20 + (float)*(undefined8 *)(pfVar8 + -2);
          fVar23 = fVar23 + (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
          fVar24 = fVar24 + (float)*(undefined8 *)pfVar8;
          fVar26 = fVar26 + (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
          fVar27 = fVar27 + (float)*(undefined8 *)(pfVar8 + 2);
          fVar28 = fVar28 + (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
          lVar12 = lVar12 + 8;
          pfVar8 = pfVar8 + 8;
        } while (lVar12 < lVar11);
      }
      fVar29 = fVar24 + fVar29;
      fVar22 = fVar26 + fVar22;
      fVar20 = fVar27 + fVar20;
      fVar23 = fVar28 + fVar23;
      if ((long)(uVar3 & 0xfffffffffffffff8) < (long)(uVar15 & 0xfffffffffffffffc)) {
        pfVar8 = pfVar6 + lVar11;
        fVar29 = fVar29 + *pfVar8;
        fVar22 = fVar22 + pfVar8[1];
        fVar20 = fVar20 + pfVar8[2];
        fVar23 = fVar23 + pfVar8[3];
      }
    }
    lVar11 = (uVar15 & 0xfffffffffffffffc) + uVar7;
    auVar25._4_4_ = fVar22;
    auVar25._0_4_ = fVar29;
    auVar25._8_4_ = fVar20;
    auVar25._12_4_ = fVar23;
    auVar2._4_4_ = fVar22;
    auVar2._0_4_ = fVar29;
    auVar2._8_4_ = fVar20;
    auVar2._12_4_ = fVar23;
    auVar25 = NEON_ext(auVar25,auVar2,8,1);
    fVar29 = fVar29 + auVar25._0_4_;
    fVar22 = fVar22 + auVar25._4_4_;
    fVar20 = fVar29 + fVar22;
    fVar29 = fVar29 + fVar22;
    pfVar8 = pfVar6;
    if (0 < (long)uVar7) {
      do {
        fVar20 = fVar20 + *pfVar8;
        fVar29 = 0.0;
        uVar7 = uVar7 - 1;
        pfVar8 = pfVar8 + 1;
      } while (uVar7 != 0);
    }
    for (; lVar11 < (long)uVar1; lVar11 = lVar11 + 1) {
      fVar20 = fVar20 + pfVar6[lVar11];
      fVar29 = 0.0;
    }
  }
  return CONCAT44(fVar29,fVar20);
}



/* Entry: 109c570a4; end: 109c5717f;  */

undefined8
FUN_109c570a4(undefined8 param_1,long **param_2,long param_3,ulong param_4,uint param_5,int param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  long unaff_x19;
  long **unaff_x20;
  long **pplVar11;
  long unaff_x21;
  long lVar12;
  long unaff_x22;
  undefined8 unaff_x23;
  ulong uVar13;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long ***unaff_x27;
  undefined1 *unaff_x28;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  long lStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1b9;
  long *plStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined1 *puStack_1a8;
  long *plStack_1a0;
  long alStack_198 [2];
  long lStack_188;
  long **pplStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_158;
  undefined1 *puStack_150;
  undefined8 ***pppuStack_148;
  long *plStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long **pplStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_c9;
  long *plStack_c8;
  undefined8 ***pppuStack_c0;
  undefined1 *puStack_b8;
  long *plStack_b0;
  long alStack_a8 [2];
  long lStack_98;
  long **pplStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_68;
  
  uVar16 = (undefined4)((ulong)param_1 >> 0x20);
  uVar14 = (undefined4)param_1;
  uVar6 = (undefined4)(param_4 >> 0x20);
  uVar5 = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < (int)uVar5) {
    unaff_x21 = (long)(int)param_5;
    unaff_x22 = (long)param_6;
    param_4 = param_4 & 0xffffffff;
    unaff_x24 = (long)param_6 * (long)(int)param_5 * 4;
    unaff_x25 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    unaff_x27 = &pplStack_90;
    unaff_x28 = &uStack_c9;
    unaff_x26 = &lStack_e8;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    do {
      plStack_c8 = alStack_a8;
      param_2 = &plStack_c8;
      lStack_e8 = unaff_x19;
      lStack_e0 = unaff_x21;
      pppuStack_c0 = unaff_x27;
      puStack_b8 = unaff_x28;
      plStack_b0 = unaff_x26;
      alStack_a8[0] = unaff_x19;
      lStack_98 = unaff_x21;
      pplStack_90 = unaff_x20;
      lStack_88 = unaff_x21;
      lStack_80 = unaff_x22;
      FUN_109c57b1c();
      unaff_x20 = (long **)((long)unaff_x20 + unaff_x24);
      unaff_x19 = unaff_x19 + unaff_x25;
      param_4 = param_4 - 1;
      unaff_x23 = 0;
    } while (param_4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return CONCAT44(uVar16,uVar14);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_f8 = FUN_109c57180;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = unaff_x28;
  pppuStack_148 = unaff_x27;
  plStack_140 = unaff_x26;
  uStack_138 = unaff_x25;
  lStack_130 = unaff_x24;
  uStack_128 = unaff_x23;
  lStack_120 = unaff_x22;
  lStack_118 = unaff_x21;
  pplStack_110 = unaff_x20;
  lStack_108 = unaff_x19;
  puStack_100 = &stack0xfffffffffffffff0;
  if (0 < (int)uVar5) {
    lVar12 = (long)(int)param_5;
    uVar13 = (ulong)uVar5;
    pplVar11 = param_2;
    do {
      plStack_1b8 = alStack_198;
      param_2 = &plStack_1b8;
      lStack_1d8 = param_3;
      lStack_1d0 = lVar12;
      pppuStack_1b0 = &pplStack_180;
      puStack_1a8 = &uStack_1b9;
      plStack_1a0 = &lStack_1d8;
      alStack_198[0] = param_3;
      lStack_188 = lVar12;
      pplStack_180 = pplVar11;
      lStack_178 = lVar12;
      lStack_170 = (long)param_6;
      FUN_109c57da0();
      pplVar11 = (long **)((long)pplVar11 + (long)param_6 * (long)(int)param_5 * 4);
      param_3 = param_3 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return CONCAT44(uVar16,uVar14);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar1 = *(ulong *)CONCAT44(uVar6,uVar5);
  uVar2 = ((ulong *)CONCAT44(uVar6,uVar5))[1];
  uVar13 = (ulong)-((uint)uVar1 >> 2) & 3;
  if ((long)uVar2 <= (long)uVar13) {
    uVar13 = uVar2;
  }
  uVar8 = uVar2;
  if ((uVar1 & 3) == 0) {
    uVar8 = uVar13;
  }
  uVar1 = uVar2 - uVar8;
  uVar13 = uVar1 + 3;
  uVar4 = uVar1 + 7;
  if ((long)uVar8 <= (long)uVar2) {
    uVar13 = uVar1;
    uVar4 = uVar1;
  }
  pfVar7 = (float *)*param_2;
  if (uVar1 + 3 < 7) {
    fVar15 = *pfVar7;
    fVar17 = 0.0;
    if (1 < (long)uVar2) {
      lVar12 = uVar2 - 1;
      do {
        pfVar7 = pfVar7 + 1;
        fVar15 = fVar15 + *pfVar7;
        fVar17 = 0.0;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else {
    pfVar9 = pfVar7 + uVar8;
    fVar15 = (float)*(undefined8 *)(pfVar9 + 2);
    fVar19 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
    fVar17 = (float)*(undefined8 *)pfVar9;
    fVar18 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
    if (7 < (long)uVar1) {
      lVar12 = (uVar4 & 0xfffffffffffffff8) + uVar8;
      fVar20 = pfVar9[4];
      fVar22 = pfVar9[5];
      fVar23 = pfVar9[6];
      fVar24 = pfVar9[7];
      if (0xf < uVar1) {
        lVar10 = uVar8 + 8;
        pfVar9 = pfVar9 + 0xc;
        do {
          fVar17 = fVar17 + (float)*(undefined8 *)(pfVar9 + -4);
          fVar18 = fVar18 + (float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20);
          fVar15 = fVar15 + (float)*(undefined8 *)(pfVar9 + -2);
          fVar19 = fVar19 + (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
          fVar20 = fVar20 + (float)*(undefined8 *)pfVar9;
          fVar22 = fVar22 + (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          fVar23 = fVar23 + (float)*(undefined8 *)(pfVar9 + 2);
          fVar24 = fVar24 + (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
          lVar10 = lVar10 + 8;
          pfVar9 = pfVar9 + 8;
        } while (lVar10 < lVar12);
      }
      fVar17 = fVar20 + fVar17;
      fVar18 = fVar22 + fVar18;
      fVar15 = fVar23 + fVar15;
      fVar19 = fVar24 + fVar19;
      if ((long)(uVar4 & 0xfffffffffffffff8) < (long)(uVar13 & 0xfffffffffffffffc)) {
        pfVar9 = pfVar7 + lVar12;
        fVar17 = fVar17 + *pfVar9;
        fVar18 = fVar18 + pfVar9[1];
        fVar15 = fVar15 + pfVar9[2];
        fVar19 = fVar19 + pfVar9[3];
      }
    }
    lVar12 = (uVar13 & 0xfffffffffffffffc) + uVar8;
    auVar21._4_4_ = fVar18;
    auVar21._0_4_ = fVar17;
    auVar21._8_4_ = fVar15;
    auVar21._12_4_ = fVar19;
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar17;
    auVar3._8_4_ = fVar15;
    auVar3._12_4_ = fVar19;
    auVar21 = NEON_ext(auVar21,auVar3,8,1);
    fVar17 = fVar17 + auVar21._0_4_;
    fVar18 = fVar18 + auVar21._4_4_;
    fVar15 = fVar17 + fVar18;
    fVar17 = fVar17 + fVar18;
    pfVar9 = pfVar7;
    if (0 < (long)uVar8) {
      do {
        fVar15 = fVar15 + *pfVar9;
        fVar17 = 0.0;
        uVar8 = uVar8 - 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar8 != 0);
    }
    for (; lVar12 < (long)uVar2; lVar12 = lVar12 + 1) {
      fVar15 = fVar15 + pfVar7[lVar12];
      fVar17 = 0.0;
    }
  }
  return CONCAT44(fVar17,fVar15);
}



/* Entry: 109c57180; end: 109c5725b;  */

undefined8
FUN_109c57180(undefined8 param_1,long **param_2,long param_3,ulong param_4,uint param_5,int param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  long **pplVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_c9;
  long *plStack_c8;
  undefined8 ***pppuStack_c0;
  undefined1 *puStack_b8;
  long *plStack_b0;
  long alStack_a8 [2];
  long lStack_98;
  long **pplStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_68;
  
  uVar16 = (undefined4)((ulong)param_1 >> 0x20);
  uVar14 = (undefined4)param_1;
  uVar6 = (undefined4)(param_4 >> 0x20);
  iVar5 = (int)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < iVar5) {
    lVar13 = (long)(int)param_5;
    param_4 = param_4 & 0xffffffff;
    pplVar12 = param_2;
    do {
      plStack_c8 = alStack_a8;
      param_2 = &plStack_c8;
      lStack_e8 = param_3;
      lStack_e0 = lVar13;
      pppuStack_c0 = &pplStack_90;
      puStack_b8 = &uStack_c9;
      plStack_b0 = &lStack_e8;
      alStack_a8[0] = param_3;
      lStack_98 = lVar13;
      pplStack_90 = pplVar12;
      lStack_88 = lVar13;
      lStack_80 = (long)param_6;
      FUN_109c57da0();
      pplVar12 = (long **)((long)pplVar12 + (long)param_6 * (long)(int)param_5 * 4);
      param_3 = param_3 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return CONCAT44(uVar16,uVar14);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar1 = *(ulong *)CONCAT44(uVar6,iVar5);
  uVar2 = ((ulong *)CONCAT44(uVar6,iVar5))[1];
  uVar8 = (ulong)-((uint)uVar1 >> 2) & 3;
  if ((long)uVar2 <= (long)uVar8) {
    uVar8 = uVar2;
  }
  uVar9 = uVar2;
  if ((uVar1 & 3) == 0) {
    uVar9 = uVar8;
  }
  uVar1 = uVar2 - uVar9;
  uVar8 = uVar1 + 3;
  uVar4 = uVar1 + 7;
  if ((long)uVar9 <= (long)uVar2) {
    uVar8 = uVar1;
    uVar4 = uVar1;
  }
  pfVar7 = (float *)*param_2;
  if (uVar1 + 3 < 7) {
    fVar15 = *pfVar7;
    fVar17 = 0.0;
    if (1 < (long)uVar2) {
      lVar13 = uVar2 - 1;
      do {
        pfVar7 = pfVar7 + 1;
        fVar15 = fVar15 + *pfVar7;
        fVar17 = 0.0;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  else {
    pfVar10 = pfVar7 + uVar9;
    fVar15 = (float)*(undefined8 *)(pfVar10 + 2);
    fVar19 = (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20);
    fVar17 = (float)*(undefined8 *)pfVar10;
    fVar18 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
    if (7 < (long)uVar1) {
      lVar13 = (uVar4 & 0xfffffffffffffff8) + uVar9;
      fVar20 = pfVar10[4];
      fVar22 = pfVar10[5];
      fVar23 = pfVar10[6];
      fVar24 = pfVar10[7];
      if (0xf < uVar1) {
        lVar11 = uVar9 + 8;
        pfVar10 = pfVar10 + 0xc;
        do {
          fVar17 = fVar17 + (float)*(undefined8 *)(pfVar10 + -4);
          fVar18 = fVar18 + (float)((ulong)*(undefined8 *)(pfVar10 + -4) >> 0x20);
          fVar15 = fVar15 + (float)*(undefined8 *)(pfVar10 + -2);
          fVar19 = fVar19 + (float)((ulong)*(undefined8 *)(pfVar10 + -2) >> 0x20);
          fVar20 = fVar20 + (float)*(undefined8 *)pfVar10;
          fVar22 = fVar22 + (float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
          fVar23 = fVar23 + (float)*(undefined8 *)(pfVar10 + 2);
          fVar24 = fVar24 + (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20);
          lVar11 = lVar11 + 8;
          pfVar10 = pfVar10 + 8;
        } while (lVar11 < lVar13);
      }
      fVar17 = fVar20 + fVar17;
      fVar18 = fVar22 + fVar18;
      fVar15 = fVar23 + fVar15;
      fVar19 = fVar24 + fVar19;
      if ((long)(uVar4 & 0xfffffffffffffff8) < (long)(uVar8 & 0xfffffffffffffffc)) {
        pfVar10 = pfVar7 + lVar13;
        fVar17 = fVar17 + *pfVar10;
        fVar18 = fVar18 + pfVar10[1];
        fVar15 = fVar15 + pfVar10[2];
        fVar19 = fVar19 + pfVar10[3];
      }
    }
    lVar13 = (uVar8 & 0xfffffffffffffffc) + uVar9;
    auVar21._4_4_ = fVar18;
    auVar21._0_4_ = fVar17;
    auVar21._8_4_ = fVar15;
    auVar21._12_4_ = fVar19;
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar17;
    auVar3._8_4_ = fVar15;
    auVar3._12_4_ = fVar19;
    auVar21 = NEON_ext(auVar21,auVar3,8,1);
    fVar17 = fVar17 + auVar21._0_4_;
    fVar18 = fVar18 + auVar21._4_4_;
    fVar15 = fVar17 + fVar18;
    fVar17 = fVar17 + fVar18;
    pfVar10 = pfVar7;
    if (0 < (long)uVar9) {
      do {
        fVar15 = fVar15 + *pfVar10;
        fVar17 = 0.0;
        uVar9 = uVar9 - 1;
        pfVar10 = pfVar10 + 1;
      } while (uVar9 != 0);
    }
    for (; lVar13 < (long)uVar2; lVar13 = lVar13 + 1) {
      fVar15 = fVar15 + pfVar7[lVar13];
      fVar17 = 0.0;
    }
  }
  return CONCAT44(fVar17,fVar15);
}



/* Entry: 109c5725c; end: 109c57367;  */

undefined8 FUN_109c5725c(long *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  
  uVar1 = param_3[1];
  uVar7 = (ulong)-((uint)*param_3 >> 2) & 3;
  if ((long)uVar1 <= (long)uVar7) {
    uVar7 = uVar1;
  }
  uVar8 = uVar1;
  if ((*param_3 & 3) == 0) {
    uVar8 = uVar7;
  }
  uVar2 = uVar1 - uVar8;
  uVar7 = uVar2 + 3;
  uVar4 = uVar2 + 7;
  if ((long)uVar8 <= (long)uVar1) {
    uVar7 = uVar2;
    uVar4 = uVar2;
  }
  pfVar6 = (float *)*param_1;
  if (uVar2 + 3 < 7) {
    fVar11 = *pfVar6;
    fVar12 = 0.0;
    if (1 < (long)uVar1) {
      lVar5 = uVar1 - 1;
      do {
        pfVar6 = pfVar6 + 1;
        fVar11 = fVar11 + *pfVar6;
        fVar12 = 0.0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    pfVar9 = pfVar6 + uVar8;
    fVar11 = (float)*(undefined8 *)(pfVar9 + 2);
    fVar14 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
    fVar12 = (float)*(undefined8 *)pfVar9;
    fVar13 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
    if (7 < (long)uVar2) {
      lVar5 = (uVar4 & 0xfffffffffffffff8) + uVar8;
      fVar15 = pfVar9[4];
      fVar17 = pfVar9[5];
      fVar18 = pfVar9[6];
      fVar19 = pfVar9[7];
      if (0xf < uVar2) {
        lVar10 = uVar8 + 8;
        pfVar9 = pfVar9 + 0xc;
        do {
          fVar12 = fVar12 + (float)*(undefined8 *)(pfVar9 + -4);
          fVar13 = fVar13 + (float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20);
          fVar11 = fVar11 + (float)*(undefined8 *)(pfVar9 + -2);
          fVar14 = fVar14 + (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
          fVar15 = fVar15 + (float)*(undefined8 *)pfVar9;
          fVar17 = fVar17 + (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          fVar18 = fVar18 + (float)*(undefined8 *)(pfVar9 + 2);
          fVar19 = fVar19 + (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
          lVar10 = lVar10 + 8;
          pfVar9 = pfVar9 + 8;
        } while (lVar10 < lVar5);
      }
      fVar12 = fVar15 + fVar12;
      fVar13 = fVar17 + fVar13;
      fVar11 = fVar18 + fVar11;
      fVar14 = fVar19 + fVar14;
      if ((long)(uVar4 & 0xfffffffffffffff8) < (long)(uVar7 & 0xfffffffffffffffc)) {
        pfVar9 = pfVar6 + lVar5;
        fVar12 = fVar12 + *pfVar9;
        fVar13 = fVar13 + pfVar9[1];
        fVar11 = fVar11 + pfVar9[2];
        fVar14 = fVar14 + pfVar9[3];
      }
    }
    lVar5 = (uVar7 & 0xfffffffffffffffc) + uVar8;
    auVar16._4_4_ = fVar13;
    auVar16._0_4_ = fVar12;
    auVar16._8_4_ = fVar11;
    auVar16._12_4_ = fVar14;
    auVar3._4_4_ = fVar13;
    auVar3._0_4_ = fVar12;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar14;
    auVar16 = NEON_ext(auVar16,auVar3,8,1);
    fVar12 = fVar12 + auVar16._0_4_;
    fVar13 = fVar13 + auVar16._4_4_;
    fVar11 = fVar12 + fVar13;
    fVar12 = fVar12 + fVar13;
    pfVar9 = pfVar6;
    if (0 < (long)uVar8) {
      do {
        fVar11 = fVar11 + *pfVar9;
        fVar12 = 0.0;
        uVar8 = uVar8 - 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar8 != 0);
    }
    for (; lVar5 < (long)uVar1; lVar5 = lVar5 + 1) {
      fVar11 = fVar11 + pfVar6[lVar5];
      fVar12 = 0.0;
    }
  }
  return CONCAT44(fVar12,fVar11);
}



/* Entry: 109c57368; end: 109c57687;  */

void FUN_109c57368(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 extraout_var;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 uStack_d1;
  long alStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_3[1];
  uVar10 = (ulong)-((uint)*param_3 >> 2) & 3;
  if ((long)uVar19 <= (long)uVar10) {
    uVar10 = uVar19;
  }
  uVar12 = uVar19;
  if ((*param_3 & 3) == 0) {
    uVar12 = uVar10;
  }
  uVar16 = uVar19 - uVar12;
  uVar10 = uVar16 + 3;
  uVar11 = uVar16 + 7;
  if ((long)uVar12 <= (long)uVar19) {
    uVar10 = uVar16;
    uVar11 = uVar16;
  }
  pfVar9 = (float *)*param_1;
  if (uVar16 + 3 < 7) {
    if (1 < (long)uVar19) {
      lVar8 = uVar19 - 1;
      fVar20 = *pfVar9;
      do {
        pfVar9 = pfVar9 + 1;
        fVar23 = *pfVar9;
        if (*pfVar9 <= fVar20) {
          fVar23 = fVar20;
        }
        lVar8 = lVar8 + -1;
        fVar20 = fVar23;
      } while (lVar8 != 0);
    }
  }
  else {
    lVar8 = (uVar10 & 0xfffffffffffffffc) + uVar12;
    pauVar18 = (undefined1 (*) [16])(pfVar9 + uVar12);
    auVar22 = *pauVar18;
    if (7 < (long)uVar16) {
      lVar14 = (uVar11 & 0xfffffffffffffff8) + uVar12;
      auVar24 = pauVar18[1];
      if (0xf < uVar16) {
        lVar15 = uVar12 + 8;
        pauVar18 = pauVar18 + 3;
        do {
          auVar3._12_4_ = (int)((ulong)*(undefined8 *)(pauVar18[-1] + 8) >> 0x20);
          auVar3._0_12_ = *(undefined1 (*) [12])pauVar18[-1];
          auVar22 = NEON_fmax(auVar22,auVar3,4);
          auVar5._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20);
          auVar5._0_12_ = *(undefined1 (*) [12])*pauVar18;
          auVar24 = NEON_fmax(auVar24,auVar5,4);
          lVar15 = lVar15 + 8;
          pauVar18 = pauVar18 + 2;
        } while (lVar15 < lVar14);
      }
      auVar22 = NEON_fmax(auVar22,auVar24,4);
      if ((long)(uVar11 & 0xfffffffffffffff8) < (long)(uVar10 & 0xfffffffffffffffc)) {
        auVar22 = NEON_fmax(auVar22,*(undefined1 (*) [16])(pfVar9 + lVar14),4);
      }
    }
    uStack_28 = auVar22._8_8_;
    uStack_30 = auVar22._0_8_;
    uVar10 = 2;
    do {
      uVar16 = 0;
      do {
        fVar23 = *(float *)((long)&uStack_30 + uVar16 * 4);
        fVar20 = *(float *)((long)&uStack_30 + uVar16 * 4 + uVar10 * 4);
        if (fVar20 <= fVar23) {
          fVar20 = fVar23;
        }
        *(float *)((long)&uStack_30 + uVar16 * 4) = fVar20;
        uVar16 = uVar16 + 1;
      } while (uVar10 != uVar16);
      bVar6 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar6);
    pfVar13 = pfVar9;
    fVar20 = (float)uStack_30;
    fVar23 = (float)uStack_30;
    if (0 < (long)uVar12) {
      do {
        fVar20 = *pfVar13;
        if (*pfVar13 <= fVar23) {
          fVar20 = fVar23;
        }
        uVar12 = uVar12 - 1;
        pfVar13 = pfVar13 + 1;
        fVar23 = fVar20;
      } while (uVar12 != 0);
    }
    for (; lVar8 < (long)uVar19; lVar8 = lVar8 + 1) {
      fVar23 = pfVar9[lVar8];
      if (pfVar9[lVar8] <= fVar20) {
        fVar23 = fVar20;
      }
      fVar20 = fVar23;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  puStack_40 = &stack0xfffffffffffffff0;
  uStack_38 = 0x109c574f8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_3[1];
  uVar10 = (ulong)-((uint)*param_3 >> 2) & 3;
  if ((long)uVar19 <= (long)uVar10) {
    uVar10 = uVar19;
  }
  uVar12 = uVar19;
  if ((*param_3 & 3) == 0) {
    uVar12 = uVar10;
  }
  uVar16 = uVar19 - uVar12;
  uVar10 = uVar16 + 3;
  uVar11 = uVar16 + 7;
  if ((long)uVar12 <= (long)uVar19) {
    uVar10 = uVar16;
    uVar11 = uVar16;
  }
  pfVar9 = (float *)*param_1;
  if (uVar16 + 3 < 7) {
    if (1 < (long)uVar19) {
      lVar8 = uVar19 - 1;
      fVar20 = *pfVar9;
      do {
        pfVar9 = pfVar9 + 1;
        fVar23 = *pfVar9;
        if (fVar20 <= *pfVar9) {
          fVar23 = fVar20;
        }
        lVar8 = lVar8 + -1;
        fVar20 = fVar23;
      } while (lVar8 != 0);
    }
  }
  else {
    lVar8 = (uVar10 & 0xfffffffffffffffc) + uVar12;
    pauVar18 = (undefined1 (*) [16])(pfVar9 + uVar12);
    auVar22 = *pauVar18;
    if (7 < (long)uVar16) {
      lVar14 = (uVar11 & 0xfffffffffffffff8) + uVar12;
      auVar24 = pauVar18[1];
      if (0xf < uVar16) {
        lVar15 = uVar12 + 8;
        pauVar18 = pauVar18 + 3;
        do {
          auVar2._12_4_ = (int)((ulong)*(undefined8 *)(pauVar18[-1] + 8) >> 0x20);
          auVar2._0_12_ = *(undefined1 (*) [12])pauVar18[-1];
          auVar22 = NEON_fmin(auVar22,auVar2,4);
          auVar4._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20);
          auVar4._0_12_ = *(undefined1 (*) [12])*pauVar18;
          auVar24 = NEON_fmin(auVar24,auVar4,4);
          lVar15 = lVar15 + 8;
          pauVar18 = pauVar18 + 2;
        } while (lVar15 < lVar14);
      }
      auVar22 = NEON_fmin(auVar22,auVar24,4);
      if ((long)(uVar11 & 0xfffffffffffffff8) < (long)(uVar10 & 0xfffffffffffffffc)) {
        auVar22 = NEON_fmin(auVar22,*(undefined1 (*) [16])(pfVar9 + lVar14),4);
      }
    }
    uStack_58 = auVar22._8_8_;
    uStack_60 = auVar22._0_8_;
    uVar10 = 2;
    do {
      uVar16 = 0;
      do {
        fVar20 = *(float *)((long)&uStack_60 + uVar16 * 4 + uVar10 * 4);
        fVar23 = *(float *)((long)&uStack_60 + uVar16 * 4);
        if (fVar23 <= fVar20) {
          fVar20 = fVar23;
        }
        *(float *)((long)&uStack_60 + uVar16 * 4) = fVar20;
        uVar16 = uVar16 + 1;
      } while (uVar10 != uVar16);
      bVar6 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar6);
    pfVar13 = pfVar9;
    fVar20 = (float)uStack_60;
    fVar23 = (float)uStack_60;
    if (0 < (long)uVar12) {
      do {
        fVar20 = *pfVar13;
        if (fVar23 <= *pfVar13) {
          fVar20 = fVar23;
        }
        uVar12 = uVar12 - 1;
        pfVar13 = pfVar13 + 1;
        fVar23 = fVar20;
      } while (uVar12 != 0);
    }
    for (; lVar8 < (long)uVar19; lVar8 = lVar8 + 1) {
      fVar23 = pfVar9[lVar8];
      if (fVar20 <= pfVar9[lVar8]) {
        fVar23 = fVar20;
      }
      fVar20 = fVar23;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar19 = *(ulong *)param_1[3];
    uVar12 = ((ulong *)param_1[3])[1];
    uVar10 = (ulong)-((uint)uVar19 >> 2) & 3;
    if ((long)uVar12 <= (long)uVar10) {
      uVar10 = uVar12;
    }
    uVar16 = uVar12;
    if ((uVar19 & 3) == 0) {
      uVar16 = uVar10;
    }
    uVar19 = uVar12 - uVar16;
    uVar10 = uVar19 + 3;
    if ((long)uVar16 <= (long)uVar12) {
      uVar10 = uVar19;
    }
    if (0 < (long)uVar16) {
      uVar11 = 0;
      plVar1 = (long *)param_1[1];
      lVar14 = *(long *)*param_1;
      lVar15 = *plVar1;
      lVar17 = plVar1[2];
      lVar8 = lVar15;
      do {
        if (lVar17 == 0) {
          fVar20 = 0.0;
        }
        else {
          fVar20 = *(float *)(lVar15 + uVar11 * 4);
          if (1 < lVar17) {
            pfVar9 = (float *)(lVar8 + plVar1[1] * 4);
            lVar7 = lVar17 + -1;
            do {
              fVar20 = fVar20 + *pfVar9;
              pfVar9 = pfVar9 + plVar1[1];
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
        }
        *(float *)(lVar14 + uVar11 * 4) = fVar20;
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 4;
      } while (uVar11 != uVar16);
    }
    uVar11 = (uVar10 & 0xfffffffffffffffc) + uVar16;
    if (3 < (long)uVar19) {
      lVar8 = uVar16 << 2;
      uVar19 = uVar16;
      do {
        plVar1 = (long *)param_1[1];
        lVar14 = *(long *)*param_1;
        lStack_c0 = plVar1[1];
        alStack_d0[0] = *plVar1 + lVar8;
        param_3 = (ulong *)plVar1[2];
        uVar21 = FUN_109c57864(alStack_d0,&uStack_d1);
        ((undefined8 *)(lVar14 + lVar8))[1] = extraout_var;
        *(undefined8 *)(lVar14 + lVar8) = uVar21;
        uVar19 = uVar19 + 4;
        lVar8 = lVar8 + 0x10;
      } while ((long)uVar19 < (long)uVar11);
    }
    if ((long)uVar11 < (long)uVar12) {
      plVar1 = (long *)param_1[1];
      lVar14 = *(long *)*param_1;
      lVar15 = *plVar1;
      lVar17 = plVar1[2];
      lVar8 = lVar15 + ((long)uVar10 >> 2) * 0x10 + uVar16 * 4;
      do {
        if (lVar17 == 0) {
          fVar20 = 0.0;
        }
        else {
          fVar20 = *(float *)(lVar15 + uVar11 * 4);
          if (1 < lVar17) {
            pfVar9 = (float *)(lVar8 + plVar1[1] * 4);
            lVar7 = lVar17 + -1;
            do {
              fVar20 = fVar20 + *pfVar9;
              pfVar9 = pfVar9 + plVar1[1];
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
        }
        *(float *)(lVar14 + uVar11 * 4) = fVar20;
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 4;
      } while (uVar11 != uVar12);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      __Unwind_Resume();
      if (param_3 == (ulong *)0x0) {
        return;
      }
      if ((long)param_3 < 5) {
        lVar8 = 1;
      }
      else {
        uVar10 = (long)param_3 - 1U & 0xfffffffffffffffc;
        lVar8 = 1;
        do {
          lVar8 = lVar8 + 4;
        } while (lVar8 < (long)uVar10);
        lVar8 = uVar10 + 1;
      }
      lVar14 = (long)param_3 - lVar8;
      if (lVar14 != 0 && lVar8 <= (long)param_3) {
        do {
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 109c57688; end: 109c57863;  */

ulong FUN_109c57688(ulong param_1,float *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  float *pfVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  ulong *puVar16;
  long lVar17;
  ulong in_register_00005008;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 uStack_71;
  long alStack_70 [2];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = **(ulong **)(param_2 + 6);
  uVar2 = (*(ulong **)(param_2 + 6))[1];
  uVar9 = (ulong)-((uint)uVar10 >> 2) & 3;
  if ((long)uVar2 <= (long)uVar9) {
    uVar9 = uVar2;
  }
  uVar1 = uVar2;
  if ((uVar10 & 3) == 0) {
    uVar1 = uVar9;
  }
  uVar10 = uVar2 - uVar1;
  uVar9 = uVar10 + 3;
  if ((long)uVar1 <= (long)uVar2) {
    uVar9 = uVar10;
  }
  pfVar5 = param_2;
  if (0 < (long)uVar1) {
    uVar11 = 0;
    plVar3 = *(long **)(param_2 + 2);
    lVar12 = **(long **)param_2;
    lVar13 = *plVar3;
    lVar14 = plVar3[2];
    lVar17 = lVar13;
    do {
      if (lVar14 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = (ulong)*(uint *)(lVar13 + uVar11 * 4);
        if (1 < lVar14) {
          pfVar5 = (float *)(lVar17 + plVar3[1] * 4);
          lVar6 = lVar14 + -1;
          do {
            param_1 = (ulong)(uint)((float)param_1 + *pfVar5);
            pfVar5 = pfVar5 + plVar3[1];
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      in_register_00005008 = 0;
      *(int *)(lVar12 + uVar11 * 4) = (int)param_1;
      uVar11 = uVar11 + 1;
      lVar17 = lVar17 + 4;
    } while (uVar11 != uVar1);
  }
  uVar11 = (uVar9 & 0xfffffffffffffffc) + uVar1;
  if (3 < (long)uVar10) {
    lVar17 = uVar1 << 2;
    uVar10 = uVar1;
    do {
      plVar3 = *(long **)(param_2 + 2);
      lVar12 = **(long **)param_2;
      lStack_60 = plVar3[1];
      alStack_70[0] = *plVar3 + lVar17;
      param_4 = plVar3[2];
      pfVar5 = (float *)alStack_70;
      FUN_109c57864(pfVar5,&uStack_71);
      ((ulong *)(lVar12 + lVar17))[1] = in_register_00005008;
      *(ulong *)(lVar12 + lVar17) = param_1;
      uVar10 = uVar10 + 4;
      lVar17 = lVar17 + 0x10;
    } while ((long)uVar10 < (long)uVar11);
  }
  if ((long)uVar11 < (long)uVar2) {
    plVar3 = *(long **)(param_2 + 2);
    lVar12 = **(long **)param_2;
    lVar13 = *plVar3;
    lVar14 = plVar3[2];
    lVar17 = lVar13 + ((long)uVar9 >> 2) * 0x10 + uVar1 * 4;
    do {
      if (lVar14 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = (ulong)*(uint *)(lVar13 + uVar11 * 4);
        if (1 < lVar14) {
          pfVar15 = (float *)(lVar17 + plVar3[1] * 4);
          lVar6 = lVar14 + -1;
          do {
            param_1 = (ulong)(uint)((float)param_1 + *pfVar15);
            pfVar15 = pfVar15 + plVar3[1];
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      *(int *)(lVar12 + uVar11 * 4) = (int)param_1;
      uVar11 = uVar11 + 1;
      lVar17 = lVar17 + 4;
    } while (uVar11 != uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (param_4 == 0) {
      return 0;
    }
    puVar7 = *(ulong **)pfVar5;
    uVar9 = *puVar7;
    if (param_4 < 5) {
      lVar17 = 1;
    }
    else {
      uVar10 = param_4 - 1U & 0xfffffffffffffffc;
      lVar12 = *(long *)(pfVar5 + 4);
      lVar17 = 1;
      puVar16 = puVar7;
      do {
        uVar18 = *(undefined8 *)((long)puVar16 + lVar12 * 4);
        puVar4 = puVar16 + lVar12;
        uVar19 = *(undefined8 *)((long)puVar16 + lVar12 * 0xc);
        puVar16 = puVar16 + lVar12 * 2;
        uVar9 = CONCAT44((float)(uVar9 >> 0x20) +
                         (float)((ulong)uVar18 >> 0x20) + (float)(*puVar4 >> 0x20) +
                         (float)((ulong)uVar19 >> 0x20) + (float)(*puVar16 >> 0x20),
                         (float)uVar9 +
                         (float)uVar18 + (float)*puVar4 + (float)uVar19 + (float)*puVar16);
        lVar17 = lVar17 + 4;
      } while (lVar17 < (long)uVar10);
      lVar17 = uVar10 + 1;
    }
    lVar12 = param_4 - lVar17;
    if (lVar12 != 0 && lVar17 <= param_4) {
      puVar8 = (undefined8 *)((long)puVar7 + lVar17 * *(long *)(pfVar5 + 4) * 4);
      do {
        uVar9 = CONCAT44((float)(uVar9 >> 0x20) + (float)((ulong)*puVar8 >> 0x20),
                         (float)uVar9 + (float)*puVar8);
        puVar8 = (undefined8 *)((long)puVar8 + *(long *)(pfVar5 + 4) * 4);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    return uVar9;
  }
  return param_1;
}



/* Entry: 109c57864; end: 109c5791b;  */

undefined8 FUN_109c57864(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)*param_1;
    uVar7 = *puVar2;
    if (param_3 < 5) {
      lVar5 = 1;
    }
    else {
      uVar3 = param_3 - 1U & 0xfffffffffffffffc;
      lVar4 = param_1[2];
      lVar5 = 1;
      puVar6 = puVar2;
      do {
        uVar8 = *(undefined8 *)((long)puVar6 + lVar4 * 4);
        puVar1 = puVar6 + lVar4;
        uVar9 = *(undefined8 *)((long)puVar6 + lVar4 * 0xc);
        puVar6 = puVar6 + lVar4 * 2;
        uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                         (float)((ulong)uVar8 >> 0x20) + (float)((ulong)*puVar1 >> 0x20) +
                         (float)((ulong)uVar9 >> 0x20) + (float)((ulong)*puVar6 >> 0x20),
                         (float)uVar7 +
                         (float)uVar8 + (float)*puVar1 + (float)uVar9 + (float)*puVar6);
        lVar5 = lVar5 + 4;
      } while (lVar5 < (long)uVar3);
      lVar5 = uVar3 + 1;
    }
    lVar4 = param_3 - lVar5;
    if (lVar4 != 0 && lVar5 <= param_3) {
      puVar2 = (undefined8 *)((long)puVar2 + lVar5 * param_1[2] * 4);
      do {
        uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)*puVar2 >> 0x20),
                         (float)uVar7 + (float)*puVar2);
        puVar2 = (undefined8 *)((long)puVar2 + param_1[2] * 4);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return uVar7;
  }
  return 0;
}



/* Entry: 109c5791c; end: 109c57b1b;  */

ulong FUN_109c5791c(ulong param_1,float *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  undefined1 *puVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  long unaff_x24;
  long lVar21;
  ulong unaff_x25;
  long unaff_x26;
  float fVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 extraout_var;
  ulong extraout_var_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 uStack_101;
  long alStack_100 [2];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  float *pfStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_81;
  long alStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = **(ulong **)(param_2 + 6);
  uVar3 = (*(ulong **)(param_2 + 6))[1];
  uVar12 = (ulong)-((uint)uVar13 >> 2) & 3;
  if ((long)uVar3 <= (long)uVar12) {
    uVar12 = uVar3;
  }
  uVar1 = uVar3;
  if ((uVar13 & 3) == 0) {
    uVar1 = uVar12;
  }
  uVar13 = uVar3 - uVar1;
  uVar12 = uVar13 + 3;
  if ((long)uVar1 <= (long)uVar3) {
    uVar12 = uVar13;
  }
  pfVar8 = param_2;
  auVar25._0_8_ = param_1;
  if (0 < (long)uVar1) {
    uVar14 = 0;
    lVar17 = *(long *)(param_2 + 2);
    lVar16 = **(long **)param_2;
    lVar18 = *(long *)(lVar17 + 8);
    lVar19 = *(long *)(lVar17 + 0x18);
    lVar21 = lVar18;
    do {
      if (lVar19 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = *(float *)(lVar18 + uVar14 * 4);
        if (1 < lVar19) {
          pfVar8 = (float *)(lVar21 + *(long *)(lVar17 + 0x10) * 4);
          lVar10 = lVar19 + -1;
          do {
            fVar22 = fVar22 + *pfVar8;
            pfVar8 = pfVar8 + *(long *)(lVar17 + 0x10);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
      fVar22 = fVar22 / *(float *)(lVar17 + 0x30);
      auVar25._0_8_ = (ulong)(uint)fVar22;
      *(float *)(lVar16 + uVar14 * 4) = fVar22;
      uVar14 = uVar14 + 1;
      lVar21 = lVar21 + 4;
    } while (uVar14 != uVar1);
  }
  uVar14 = (uVar12 & 0xfffffffffffffffc) + uVar1;
  if (3 < (long)uVar13) {
    unaff_x24 = uVar1 << 2;
    unaff_x25 = uVar1;
    do {
      lVar21 = *(long *)(param_2 + 2);
      unaff_x26 = **(long **)param_2;
      uStack_70 = *(undefined8 *)(lVar21 + 0x10);
      alStack_80[0] = *(long *)(lVar21 + 8) + unaff_x24;
      param_4 = *(long *)(lVar21 + 0x18);
      pfVar8 = (float *)alStack_80;
      uVar23 = FUN_109c57864(pfVar8,&uStack_81);
      fVar22 = *(float *)(lVar21 + 0x30);
      auVar25._0_8_ = CONCAT44((float)((ulong)uVar23 >> 0x20) / fVar22,(float)uVar23 / fVar22);
      auVar25._8_4_ = (float)extraout_var / fVar22;
      auVar25._12_4_ = (float)((ulong)extraout_var >> 0x20) / fVar22;
      ((ulong *)(unaff_x26 + unaff_x24))[1] = auVar25._8_8_;
      *(ulong *)(unaff_x26 + unaff_x24) = auVar25._0_8_;
      unaff_x25 = unaff_x25 + 4;
      unaff_x24 = unaff_x24 + 0x10;
    } while ((long)unaff_x25 < (long)uVar14);
  }
  if ((long)uVar14 < (long)uVar3) {
    lVar17 = *(long *)(param_2 + 2);
    lVar16 = **(long **)param_2;
    lVar18 = *(long *)(lVar17 + 8);
    lVar19 = *(long *)(lVar17 + 0x18);
    lVar21 = lVar18 + ((long)uVar12 >> 2) * 0x10 + uVar1 * 4;
    do {
      if (lVar19 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = *(float *)(lVar18 + uVar14 * 4);
        if (1 < lVar19) {
          pfVar9 = (float *)(lVar21 + *(long *)(lVar17 + 0x10) * 4);
          lVar10 = lVar19 + -1;
          do {
            fVar22 = fVar22 + *pfVar9;
            pfVar9 = pfVar9 + *(long *)(lVar17 + 0x10);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
      fVar22 = fVar22 / *(float *)(lVar17 + 0x30);
      auVar25._0_8_ = (ulong)(uint)fVar22;
      *(float *)(lVar16 + uVar14 * 4) = fVar22;
      uVar14 = uVar14 + 1;
      lVar21 = lVar21 + 4;
    } while (uVar14 != uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return auVar25._0_8_;
  }
  ___stack_chk_fail();
  uVar24 = __Unwind_Resume();
  pcStack_98 = FUN_109c57b1c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar25._0_8_ = **(ulong **)(pfVar8 + 6);
  uVar4 = (*(ulong **)(pfVar8 + 6))[1];
  uVar13 = (ulong)-((uint)auVar25._0_8_ >> 2) & 3;
  if ((long)uVar4 <= (long)uVar13) {
    uVar13 = uVar4;
  }
  uVar2 = uVar4;
  if ((auVar25._0_8_ & 3) == 0) {
    uVar2 = uVar13;
  }
  auVar25._0_8_ = uVar4 - uVar2;
  uVar13 = auVar25._0_8_ + 3;
  if ((long)uVar2 <= (long)uVar4) {
    uVar13 = auVar25._0_8_;
  }
  pfVar9 = pfVar8;
  if (0 < (long)uVar2) {
    uVar15 = 0;
    plVar5 = *(long **)(pfVar8 + 2);
    lVar17 = **(long **)pfVar8;
    lVar16 = *plVar5;
    lVar18 = plVar5[2];
    lVar21 = lVar16;
    do {
      fVar22 = *(float *)(lVar16 + uVar15 * 4);
      if (1 < lVar18) {
        pfVar9 = (float *)(lVar21 + plVar5[1] * 4);
        lVar19 = lVar18 + -1;
        fVar6 = fVar22;
        do {
          fVar22 = *pfVar9;
          if (*pfVar9 <= fVar6) {
            fVar22 = fVar6;
          }
          pfVar9 = pfVar9 + plVar5[1];
          lVar19 = lVar19 + -1;
          fVar6 = fVar22;
        } while (lVar19 != 0);
      }
      uVar24 = (ulong)(uint)fVar22;
      *(float *)(lVar17 + uVar15 * 4) = fVar22;
      uVar15 = uVar15 + 1;
      lVar21 = lVar21 + 4;
    } while (uVar15 != uVar2);
  }
  uVar15 = (uVar13 & 0xfffffffffffffffc) + uVar2;
  lStack_e0 = unaff_x26;
  uStack_d8 = unaff_x25;
  lStack_d0 = unaff_x24;
  uStack_c8 = uVar14;
  uStack_c0 = uVar12;
  uStack_b8 = uVar1;
  uStack_b0 = uVar3;
  pfStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (3 < (long)auVar25._0_8_) {
    lVar21 = uVar2 << 2;
    uVar12 = uVar2;
    do {
      plVar5 = *(long **)(pfVar8 + 2);
      lVar17 = **(long **)pfVar8;
      lStack_f0 = plVar5[1];
      alStack_100[0] = *plVar5 + lVar21;
      param_4 = plVar5[2];
      pfVar9 = (float *)alStack_100;
      uVar24 = FUN_109c57ce8(pfVar9,&uStack_101);
      ((ulong *)(lVar17 + lVar21))[1] = extraout_var_00;
      *(ulong *)(lVar17 + lVar21) = uVar24;
      uVar12 = uVar12 + 4;
      lVar21 = lVar21 + 0x10;
    } while ((long)uVar12 < (long)uVar15);
  }
  if ((long)uVar15 < (long)uVar4) {
    plVar5 = *(long **)(pfVar8 + 2);
    lVar17 = **(long **)pfVar8;
    lVar16 = *plVar5;
    lVar18 = plVar5[2];
    lVar21 = lVar16 + ((long)uVar13 >> 2) * 0x10 + uVar2 * 4;
    do {
      fVar22 = *(float *)(lVar16 + uVar15 * 4);
      if (1 < lVar18) {
        pfVar8 = (float *)(lVar21 + plVar5[1] * 4);
        lVar19 = lVar18 + -1;
        fVar6 = fVar22;
        do {
          fVar22 = *pfVar8;
          if (*pfVar8 <= fVar6) {
            fVar22 = fVar6;
          }
          pfVar8 = pfVar8 + plVar5[1];
          lVar19 = lVar19 + -1;
          fVar6 = fVar22;
        } while (lVar19 != 0);
      }
      uVar24 = (ulong)(uint)fVar22;
      *(float *)(lVar17 + uVar15 * 4) = fVar22;
      uVar15 = uVar15 + 1;
      lVar21 = lVar21 + 4;
    } while (uVar15 != uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return uVar24;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (param_4 != 0) {
    pauVar11 = *(undefined1 (**) [16])pfVar9;
    auVar25 = *pauVar11;
    if (param_4 < 5) {
      lVar21 = 1;
    }
    else {
      uVar12 = param_4 - 1U & 0xfffffffffffffffc;
      lVar17 = *(long *)(pfVar9 + 4);
      lVar21 = 1;
      pauVar20 = pauVar11;
      do {
        auVar26 = NEON_fmax(*(undefined1 (*) [16])(*pauVar20 + lVar17 * 4),
                            *(undefined1 (*) [16])(*pauVar20 + lVar17 * 8),4);
        puVar7 = *pauVar20;
        pauVar20 = pauVar20 + lVar17;
        auVar27 = NEON_fmax(*(undefined1 (*) [16])(puVar7 + lVar17 * 0xc),*pauVar20,4);
        auVar26 = NEON_fmax(auVar26,auVar27,4);
        auVar25 = NEON_fmax(auVar25,auVar26,4);
        lVar21 = lVar21 + 4;
      } while (lVar21 < (long)uVar12);
      lVar21 = uVar12 + 1;
    }
    uVar12 = auVar25._0_8_;
    lVar17 = param_4 - lVar21;
    if (lVar17 != 0 && lVar21 <= param_4) {
      pauVar11 = (undefined1 (*) [16])(*pauVar11 + lVar21 * *(long *)(pfVar9 + 4) * 4);
      do {
        auVar25 = NEON_fmax(auVar25,*pauVar11,4);
        uVar12 = auVar25._0_8_;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + *(long *)(pfVar9 + 4) * 4);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    return uVar12;
  }
  return 0;
}



/* Entry: 109c57b1c; end: 109c57ce7;  */

ulong FUN_109c57b1c(ulong param_1,float *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  undefined1 *puVar5;
  float *pfVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  ulong uVar17;
  float fVar18;
  ulong extraout_var;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 uStack_71;
  long alStack_70 [2];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = **(ulong **)(param_2 + 6);
  uVar2 = (*(ulong **)(param_2 + 6))[1];
  uVar9 = (ulong)-((uint)uVar17 >> 2) & 3;
  if ((long)uVar2 <= (long)uVar9) {
    uVar9 = uVar2;
  }
  uVar1 = uVar2;
  if ((uVar17 & 3) == 0) {
    uVar1 = uVar9;
  }
  uVar17 = uVar2 - uVar1;
  uVar9 = uVar17 + 3;
  if ((long)uVar1 <= (long)uVar2) {
    uVar9 = uVar17;
  }
  pfVar6 = param_2;
  if (0 < (long)uVar1) {
    uVar10 = 0;
    plVar3 = *(long **)(param_2 + 2);
    lVar11 = **(long **)param_2;
    lVar12 = *plVar3;
    lVar13 = plVar3[2];
    lVar16 = lVar12;
    do {
      fVar18 = *(float *)(lVar12 + uVar10 * 4);
      if (1 < lVar13) {
        pfVar6 = (float *)(lVar16 + plVar3[1] * 4);
        lVar7 = lVar13 + -1;
        fVar4 = fVar18;
        do {
          fVar18 = *pfVar6;
          if (*pfVar6 <= fVar4) {
            fVar18 = fVar4;
          }
          pfVar6 = pfVar6 + plVar3[1];
          lVar7 = lVar7 + -1;
          fVar4 = fVar18;
        } while (lVar7 != 0);
      }
      param_1 = (ulong)(uint)fVar18;
      *(float *)(lVar11 + uVar10 * 4) = fVar18;
      uVar10 = uVar10 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar10 != uVar1);
  }
  uVar10 = (uVar9 & 0xfffffffffffffffc) + uVar1;
  if (3 < (long)uVar17) {
    lVar16 = uVar1 << 2;
    uVar17 = uVar1;
    do {
      plVar3 = *(long **)(param_2 + 2);
      lVar11 = **(long **)param_2;
      lStack_60 = plVar3[1];
      alStack_70[0] = *plVar3 + lVar16;
      param_4 = plVar3[2];
      pfVar6 = (float *)alStack_70;
      param_1 = FUN_109c57ce8(pfVar6,&uStack_71);
      ((ulong *)(lVar11 + lVar16))[1] = extraout_var;
      *(ulong *)(lVar11 + lVar16) = param_1;
      uVar17 = uVar17 + 4;
      lVar16 = lVar16 + 0x10;
    } while ((long)uVar17 < (long)uVar10);
  }
  if ((long)uVar10 < (long)uVar2) {
    plVar3 = *(long **)(param_2 + 2);
    lVar11 = **(long **)param_2;
    lVar12 = *plVar3;
    lVar13 = plVar3[2];
    lVar16 = lVar12 + ((long)uVar9 >> 2) * 0x10 + uVar1 * 4;
    do {
      fVar18 = *(float *)(lVar12 + uVar10 * 4);
      if (1 < lVar13) {
        pfVar14 = (float *)(lVar16 + plVar3[1] * 4);
        lVar7 = lVar13 + -1;
        fVar4 = fVar18;
        do {
          fVar18 = *pfVar14;
          if (*pfVar14 <= fVar4) {
            fVar18 = fVar4;
          }
          pfVar14 = pfVar14 + plVar3[1];
          lVar7 = lVar7 + -1;
          fVar4 = fVar18;
        } while (lVar7 != 0);
      }
      param_1 = (ulong)(uint)fVar18;
      *(float *)(lVar11 + uVar10 * 4) = fVar18;
      uVar10 = uVar10 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar10 != uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (param_4 != 0) {
    pauVar8 = *(undefined1 (**) [16])pfVar6;
    auVar19 = *pauVar8;
    if (param_4 < 5) {
      lVar16 = 1;
    }
    else {
      uVar9 = param_4 - 1U & 0xfffffffffffffffc;
      lVar11 = *(long *)(pfVar6 + 4);
      lVar16 = 1;
      pauVar15 = pauVar8;
      do {
        auVar20 = NEON_fmax(*(undefined1 (*) [16])(*pauVar15 + lVar11 * 4),
                            *(undefined1 (*) [16])(*pauVar15 + lVar11 * 8),4);
        puVar5 = *pauVar15;
        pauVar15 = pauVar15 + lVar11;
        auVar21 = NEON_fmax(*(undefined1 (*) [16])(puVar5 + lVar11 * 0xc),*pauVar15,4);
        auVar20 = NEON_fmax(auVar20,auVar21,4);
        auVar19 = NEON_fmax(auVar19,auVar20,4);
        lVar16 = lVar16 + 4;
      } while (lVar16 < (long)uVar9);
      lVar16 = uVar9 + 1;
    }
    uVar9 = auVar19._0_8_;
    lVar11 = param_4 - lVar16;
    if (lVar11 != 0 && lVar16 <= param_4) {
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + lVar16 * *(long *)(pfVar6 + 4) * 4);
      do {
        auVar19 = NEON_fmax(auVar19,*pauVar8,4);
        uVar9 = auVar19._0_8_;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + *(long *)(pfVar6 + 4) * 4);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    return uVar9;
  }
  return 0;
}



/* Entry: 109c57ce8; end: 109c57d9f;  */

undefined8 FUN_109c57ce8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_3 != 0) {
    pauVar2 = (undefined1 (*) [16])*param_1;
    auVar8 = *pauVar2;
    if (param_3 < 5) {
      lVar5 = 1;
    }
    else {
      uVar3 = param_3 - 1U & 0xfffffffffffffffc;
      lVar4 = param_1[2];
      lVar5 = 1;
      pauVar6 = pauVar2;
      do {
        auVar9 = NEON_fmax(*(undefined1 (*) [16])(*pauVar6 + lVar4 * 4),
                           *(undefined1 (*) [16])(*pauVar6 + lVar4 * 8),4);
        puVar1 = *pauVar6;
        pauVar6 = pauVar6 + lVar4;
        auVar10 = NEON_fmax(*(undefined1 (*) [16])(puVar1 + lVar4 * 0xc),*pauVar6,4);
        auVar9 = NEON_fmax(auVar9,auVar10,4);
        auVar8 = NEON_fmax(auVar8,auVar9,4);
        lVar5 = lVar5 + 4;
      } while (lVar5 < (long)uVar3);
      lVar5 = uVar3 + 1;
    }
    uVar7 = auVar8._0_8_;
    lVar4 = param_3 - lVar5;
    if (lVar4 != 0 && lVar5 <= param_3) {
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + lVar5 * param_1[2] * 4);
      do {
        auVar8 = NEON_fmax(auVar8,*pauVar2,4);
        uVar7 = auVar8._0_8_;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + param_1[2] * 4);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return uVar7;
  }
  return 0;
}



/* Entry: 109c57da0; end: 109c57f6b;  */

ulong FUN_109c57da0(ulong param_1,float *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  undefined1 *puVar5;
  float *pfVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  ulong uVar17;
  float fVar18;
  ulong extraout_var;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 uStack_71;
  long alStack_70 [2];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = **(ulong **)(param_2 + 6);
  uVar2 = (*(ulong **)(param_2 + 6))[1];
  uVar9 = (ulong)-((uint)uVar17 >> 2) & 3;
  if ((long)uVar2 <= (long)uVar9) {
    uVar9 = uVar2;
  }
  uVar1 = uVar2;
  if ((uVar17 & 3) == 0) {
    uVar1 = uVar9;
  }
  uVar17 = uVar2 - uVar1;
  uVar9 = uVar17 + 3;
  if ((long)uVar1 <= (long)uVar2) {
    uVar9 = uVar17;
  }
  pfVar6 = param_2;
  if (0 < (long)uVar1) {
    uVar10 = 0;
    plVar3 = *(long **)(param_2 + 2);
    lVar11 = **(long **)param_2;
    lVar12 = *plVar3;
    lVar13 = plVar3[2];
    lVar16 = lVar12;
    do {
      fVar18 = *(float *)(lVar12 + uVar10 * 4);
      if (1 < lVar13) {
        pfVar6 = (float *)(lVar16 + plVar3[1] * 4);
        lVar7 = lVar13 + -1;
        fVar4 = fVar18;
        do {
          fVar18 = *pfVar6;
          if (fVar4 <= *pfVar6) {
            fVar18 = fVar4;
          }
          pfVar6 = pfVar6 + plVar3[1];
          lVar7 = lVar7 + -1;
          fVar4 = fVar18;
        } while (lVar7 != 0);
      }
      param_1 = (ulong)(uint)fVar18;
      *(float *)(lVar11 + uVar10 * 4) = fVar18;
      uVar10 = uVar10 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar10 != uVar1);
  }
  uVar10 = (uVar9 & 0xfffffffffffffffc) + uVar1;
  if (3 < (long)uVar17) {
    lVar16 = uVar1 << 2;
    uVar17 = uVar1;
    do {
      plVar3 = *(long **)(param_2 + 2);
      lVar11 = **(long **)param_2;
      lStack_60 = plVar3[1];
      alStack_70[0] = *plVar3 + lVar16;
      param_4 = plVar3[2];
      pfVar6 = (float *)alStack_70;
      param_1 = FUN_109c57f6c(pfVar6,&uStack_71);
      ((ulong *)(lVar11 + lVar16))[1] = extraout_var;
      *(ulong *)(lVar11 + lVar16) = param_1;
      uVar17 = uVar17 + 4;
      lVar16 = lVar16 + 0x10;
    } while ((long)uVar17 < (long)uVar10);
  }
  if ((long)uVar10 < (long)uVar2) {
    plVar3 = *(long **)(param_2 + 2);
    lVar11 = **(long **)param_2;
    lVar12 = *plVar3;
    lVar13 = plVar3[2];
    lVar16 = lVar12 + ((long)uVar9 >> 2) * 0x10 + uVar1 * 4;
    do {
      fVar18 = *(float *)(lVar12 + uVar10 * 4);
      if (1 < lVar13) {
        pfVar14 = (float *)(lVar16 + plVar3[1] * 4);
        lVar7 = lVar13 + -1;
        fVar4 = fVar18;
        do {
          fVar18 = *pfVar14;
          if (fVar4 <= *pfVar14) {
            fVar18 = fVar4;
          }
          pfVar14 = pfVar14 + plVar3[1];
          lVar7 = lVar7 + -1;
          fVar4 = fVar18;
        } while (lVar7 != 0);
      }
      param_1 = (ulong)(uint)fVar18;
      *(float *)(lVar11 + uVar10 * 4) = fVar18;
      uVar10 = uVar10 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar10 != uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (param_4 != 0) {
    pauVar8 = *(undefined1 (**) [16])pfVar6;
    auVar19 = *pauVar8;
    if (param_4 < 5) {
      lVar16 = 1;
    }
    else {
      uVar9 = param_4 - 1U & 0xfffffffffffffffc;
      lVar11 = *(long *)(pfVar6 + 4);
      lVar16 = 1;
      pauVar15 = pauVar8;
      do {
        auVar20 = NEON_fmin(*(undefined1 (*) [16])(*pauVar15 + lVar11 * 4),
                            *(undefined1 (*) [16])(*pauVar15 + lVar11 * 8),4);
        puVar5 = *pauVar15;
        pauVar15 = pauVar15 + lVar11;
        auVar21 = NEON_fmin(*(undefined1 (*) [16])(puVar5 + lVar11 * 0xc),*pauVar15,4);
        auVar20 = NEON_fmin(auVar20,auVar21,4);
        auVar19 = NEON_fmin(auVar19,auVar20,4);
        lVar16 = lVar16 + 4;
      } while (lVar16 < (long)uVar9);
      lVar16 = uVar9 + 1;
    }
    uVar9 = auVar19._0_8_;
    lVar11 = param_4 - lVar16;
    if (lVar11 != 0 && lVar16 <= param_4) {
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + lVar16 * *(long *)(pfVar6 + 4) * 4);
      do {
        auVar19 = NEON_fmin(auVar19,*pauVar8,4);
        uVar9 = auVar19._0_8_;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + *(long *)(pfVar6 + 4) * 4);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    return uVar9;
  }
  return 0;
}



/* Entry: 109c57f6c; end: 109c58023;  */

undefined8 FUN_109c57f6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_3 != 0) {
    pauVar2 = (undefined1 (*) [16])*param_1;
    auVar8 = *pauVar2;
    if (param_3 < 5) {
      lVar5 = 1;
    }
    else {
      uVar3 = param_3 - 1U & 0xfffffffffffffffc;
      lVar4 = param_1[2];
      lVar5 = 1;
      pauVar6 = pauVar2;
      do {
        auVar9 = NEON_fmin(*(undefined1 (*) [16])(*pauVar6 + lVar4 * 4),
                           *(undefined1 (*) [16])(*pauVar6 + lVar4 * 8),4);
        puVar1 = *pauVar6;
        pauVar6 = pauVar6 + lVar4;
        auVar10 = NEON_fmin(*(undefined1 (*) [16])(puVar1 + lVar4 * 0xc),*pauVar6,4);
        auVar9 = NEON_fmin(auVar9,auVar10,4);
        auVar8 = NEON_fmin(auVar8,auVar9,4);
        lVar5 = lVar5 + 4;
      } while (lVar5 < (long)uVar3);
      lVar5 = uVar3 + 1;
    }
    uVar7 = auVar8._0_8_;
    lVar4 = param_3 - lVar5;
    if (lVar4 != 0 && lVar5 <= param_3) {
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + lVar5 * param_1[2] * 4);
      do {
        auVar8 = NEON_fmin(auVar8,*pauVar2,4);
        uVar7 = auVar8._0_8_;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + param_1[2] * 4);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return uVar7;
  }
  return 0;
}



/* Entry: 109c58024; end: 109c58157;  */

undefined8 * FUN_109c58024(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2e550;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a5d1d);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c58158; end: 109c581af;  */

undefined8 * FUN_109c58158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e550;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  if (param_1[0x1a] != 0) {
    __ZdlPv();
  }
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



/* Entry: 109c581b0; end: 109c581b3;  */

undefined8 * FUN_109c581b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e550;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  if (param_1[0x1a] != 0) {
    __ZdlPv();
  }
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



/* Entry: 109c581b4; end: 109c581c7;  */

void FUN_109c581b4(void)

{
  FUN_109c58158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c581c8; end: 109c5a36f;  */

void FUN_109c581c8(ulong param_1,long param_2,int *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  int **ppiVar24;
  int *piVar25;
  undefined8 uVar26;
  long *plVar27;
  float fVar28;
  undefined8 uStack_150;
  int *piStack_148;
  undefined8 uStack_140;
  undefined1 uStack_131;
  undefined8 uStack_130;
  int **ppiStack_128;
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  int *piStack_e8;
  int *piStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  long lStack_c0;
  float fStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  int *piStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = *(long **)param_3;
  FUN_109c182f4(param_4,1);
  plVar27 = (long *)*param_4;
  lVar21 = *plVar20;
  iVar11 = *(int *)(lVar21 + 8);
  if (iVar11 == 0) {
    FUN_109c1bed0(&piStack_e8,**(undefined8 **)(param_2 + 0x68),lVar21);
    func_0x000109c18360(plVar27,&piStack_e8);
    FUN_109c180ec(&piStack_e8);
LAB_109c5a17c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(param_2 + 0xd8) == 0) {
      piVar17 = *(int **)(param_2 + 0xa0);
      piVar22 = *(int **)(param_2 + 0x98);
      if (*(int **)(param_2 + 0x98) != piVar17) {
        do {
          piVar25 = piVar22 + 1;
          *piVar22 = (*(uint *)(lVar21 + 8) & *piVar22 >> 0x1f) + *piVar22;
          piVar22 = piVar25;
        } while (piVar25 != piVar17);
        iVar11 = *(int *)(lVar21 + 8);
      }
      piStack_e8 = (int *)0x0;
      piStack_e0 = (int *)0x0;
      piStack_d8 = (int *)0x0;
      uStack_130 = (int **)0x0;
      ppiStack_128 = (int **)0x0;
      puStack_120 = (undefined1 *)0x0;
      if (0 < iVar11) {
        uVar23 = 0;
        do {
          puVar12 = *(uint **)(param_2 + 0x98);
          puVar3 = *(uint **)(param_2 + 0xa0);
          if (puVar12 == puVar3) {
            uStack_150 = (int *)CONCAT71(uStack_150._1_7_,1);
LAB_109c582c8:
            if (*(char *)(param_2 + 0xb0) == '\x01') {
              uStack_98 = (int *)CONCAT44(uStack_98._4_4_,1);
              FUN_1092d7128(&uStack_130,&uStack_98);
            }
          }
          else {
            do {
              if (uVar23 == *puVar12) {
                uStack_150 = (int *)CONCAT71(uStack_150._1_7_,puVar12 != puVar3);
                if (puVar12 != puVar3) goto LAB_109c582c8;
                goto LAB_109c582e8;
              }
              puVar12 = puVar12 + 1;
            } while (puVar12 != puVar3);
            uStack_150 = (int *)((ulong)uStack_150 & 0xffffffffffffff00);
LAB_109c582e8:
            uStack_98 = (int *)CONCAT44(uStack_98._4_4_,*(undefined4 *)(lVar21 + 0xc + uVar23 * 4));
            FUN_1092d7128(&uStack_130,&uStack_98);
          }
          lVar13 = (long)*(int *)(lVar21 + 8);
          if ((long)uVar23 < lVar13) {
            iVar11 = *(int *)(lVar21 + 0xc + uVar23 * 4);
            if (iVar11 != 1) goto LAB_109c5831c;
          }
          else {
            iVar11 = -1;
LAB_109c5831c:
            uStack_98 = (int *)CONCAT44(uStack_98._4_4_,iVar11);
            FUN_1092d7128(&piStack_e8,&uStack_98);
            func_0x0001078db3d4(param_2 + 0xd0,&uStack_150);
            lVar13 = (long)*(int *)(lVar21 + 8);
          }
          uVar23 = uVar23 + 1;
        } while ((long)uVar23 < lVar13);
      }
      iVar11 = (int)((ulong)((long)ppiStack_128 - (long)uStack_130) >> 2);
      if (5 < iVar11) {
        FUN_10940ce60(&UNK_10f574967);
        goto LAB_109c5a294;
      }
      if (iVar11 != 0) {
        _memmove(param_2 + 0xb8,uStack_130,
                 ((long)ppiStack_128 - (long)uStack_130) * 0x40000000 >> 0x1e & 0xfffffffffffffffc);
      }
      *(int *)(param_2 + 0xb4) = iVar11;
      if (piStack_e8 == piStack_e0) {
        uStack_98 = (int *)CONCAT44(uStack_98._4_4_,1);
        FUN_1092d7128(param_2 + 0xe8,&uStack_98);
        uStack_98 = (int *)((ulong)uStack_98 & 0xffffffffffffff00);
        func_0x0001078db3d4(param_2 + 0xd0,&uStack_98);
      }
      else {
        FUN_10923b3a0(param_2 + 0xe8);
      }
      piVar17 = piStack_e8;
      if (4 < (ulong)((long)piStack_e0 - (long)piStack_e8)) {
        uVar23 = 1;
        piVar22 = piStack_e0;
        do {
          uStack_98 = (int *)CONCAT44(uStack_98._4_4_,piVar17[uVar23]);
          if ((((uint)(*(ulong *)(*(long *)(param_2 + 0xd0) + (uVar23 - 1 >> 6) * 8) >>
                      (uVar23 - 1 & 0x3f)) ^
               (uint)(*(ulong *)(*(long *)(param_2 + 0xd0) + (uVar23 >> 6) * 8) >> (uVar23 & 0x3f)))
              & 1) == 0) {
            *(int *)(*(long *)(param_2 + 0xf0) + -4) =
                 *(int *)(*(long *)(param_2 + 0xf0) + -4) * piVar17[uVar23];
          }
          else {
            FUN_10923b3a0(param_2 + 0xe8,&uStack_98);
            piVar17 = piStack_e8;
            piVar22 = piStack_e0;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < (ulong)((long)piVar22 - (long)piVar17 >> 2));
      }
      if (uStack_130 != (int **)0x0) {
        ppiStack_128 = uStack_130;
        __ZdlPv(uStack_130);
        piVar17 = piStack_e8;
      }
      if (piVar17 != (int *)0x0) {
        piStack_e0 = piVar17;
        __ZdlPv();
      }
    }
    bVar4 = *(byte *)(**(long **)param_3 + 0x48);
    param_3 = (int *)(ulong)bVar4;
    (*(code *)**(undefined8 **)**(undefined8 **)(param_2 + 0x68))
              (&piStack_e8,(undefined8 *)**(undefined8 **)(param_2 + 0x68),param_2 + 0xb4,param_3);
    func_0x000109c18360(plVar27,&piStack_e8);
    FUN_109c180ec(&piStack_e8);
    iVar11 = (int)param_1;
    if (bVar4 == 1) {
      iVar15 = *(int *)(param_2 + 0x90);
      lVar21 = *(long *)(param_2 + 0x68);
      if (iVar15 < 2) {
        if (iVar15 == 0) {
          piVar17 = *(int **)(param_2 + 0xe8);
          iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
          if (iVar11 == 3) {
            piVar22 = *(int **)(*plVar20 + 0x40);
            param_3 = *(int **)(*plVar27 + 0x40);
            if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
              iVar11 = piVar17[2];
              piVar25 = (int *)(long)iVar11;
              lVar13 = (long)piVar17[1] * (long)*piVar17;
              piStack_148 = (int *)0x0;
              uStack_140 = 0;
              uStack_150 = (int *)CONCAT44((int)lVar13,1);
              (**(code **)**(undefined8 **)(lVar21 + 0x10))
                        (&uStack_130,*(undefined8 **)(lVar21 + 0x10),&uStack_150,
                         *(undefined1 *)(*plVar20 + 0x48));
              piVar17 = uStack_130[8];
              uVar1 = (uint)uStack_150 & ((int)(uint)uStack_150 >> 0x1f ^ 0xffffffffU);
              if (4 < (int)uVar1) {
                uVar1 = 5;
              }
              iVar15 = 0xf5749aa;
              FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_150 + 4,uVar1);
              if (0 < iVar15) {
                lVar21 = 0;
                piVar9 = piVar22;
                do {
                  uStack_b0 = 0;
                  piStack_e8 = piVar9;
                  piStack_e0 = piVar25;
                  piStack_d0 = piVar22;
                  piStack_c8 = piVar25;
                  lStack_c0 = lVar13;
                  lStack_a8 = lVar21;
                  piStack_a0 = piVar25;
                  if (iVar11 == 0) {
                    param_1 = 0;
                  }
                  else {
                    uStack_98 = piVar9;
                    piStack_88 = piVar25;
                    FUN_109c5725c(&uStack_98,&uStack_131,&piStack_e8);
                  }
                  piVar17[lVar21] = (int)param_1;
                  lVar21 = lVar21 + 1;
                  piVar9 = piVar9 + (long)piVar25;
                } while (iVar15 != lVar21);
              }
              uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
              uVar23 = (ulong)-((uint)param_3 >> 2) & 3;
              if ((long)uVar14 <= (long)uVar23) {
                uVar23 = uVar14;
              }
              uVar2 = uVar14;
              if (((ulong)param_3 & 3) == 0) {
                uVar2 = uVar23;
              }
              uVar6 = uVar14 - uVar2;
              uVar23 = uVar6 + 3;
              if ((long)uVar2 <= (long)uVar14) {
                uVar23 = uVar6;
              }
              piVar22 = param_3;
              piVar25 = piVar17;
              uVar18 = uVar2;
              if (0 < (long)uVar2) {
                do {
                  *piVar22 = *piVar25;
                  uVar18 = uVar18 - 1;
                  piVar22 = piVar22 + 1;
                  piVar25 = piVar25 + 1;
                } while (uVar18 != 0);
              }
              lVar21 = (uVar23 & 0xfffffffffffffffc) + uVar2;
              if (3 < (long)uVar6) {
                piVar22 = piVar17 + uVar2;
                uVar18 = uVar2;
                piVar25 = param_3 + uVar2;
                do {
                  uVar10 = *(undefined8 *)piVar22;
                  *(undefined8 *)(piVar25 + 2) = *(undefined8 *)(piVar22 + 2);
                  *(undefined8 *)piVar25 = uVar10;
                  uVar18 = uVar18 + 4;
                  piVar22 = piVar22 + 4;
                  piVar25 = piVar25 + 4;
                } while ((long)uVar18 < lVar21);
              }
              if (lVar21 < (long)uVar14) {
                lVar21 = uVar6 - (uVar23 & 0xfffffffffffffffc);
                piVar17 = piVar17 + uVar2 + ((long)uVar23 >> 2) * 4;
                piVar22 = param_3 + uVar2 + ((long)uVar23 >> 2) * 4;
                do {
                  *piVar22 = *piVar17;
                  lVar21 = lVar21 + -1;
                  piVar17 = piVar17 + 1;
                  piVar22 = piVar22 + 1;
                } while (lVar21 != 0);
              }
              goto LAB_109c5a06c;
            }
            if (0 < *piVar17) {
              iVar11 = 0;
              do {
                piStack_e0 = (int *)(long)piVar17[1];
                piStack_148 = (int *)(long)piVar17[2];
                iVar15 = piVar17[2] * iVar11;
                uStack_150 = param_3 + iVar15;
                piStack_e8 = piVar22 + iVar15 * piVar17[1];
                uStack_130 = (int **)&uStack_98;
                ppiStack_128 = &piStack_e8;
                puStack_120 = &uStack_131;
                puStack_118 = &uStack_150;
                piStack_d8 = piStack_148;
                uStack_98 = uStack_150;
                piStack_88 = piStack_148;
                FUN_109c57688(&uStack_130);
                iVar11 = iVar11 + 1;
                piVar17 = *(int **)(param_2 + 0xe8);
              } while (iVar11 < *piVar17);
            }
          }
          else if (iVar11 == 2) {
            uVar10 = *(undefined8 *)(*plVar20 + 0x40);
            uVar26 = *(undefined8 *)(*plVar27 + 0x40);
            lVar13 = (long)*piVar17;
            iVar11 = piVar17[1];
            param_3 = (int *)(long)iVar11;
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
              func_0x000109c1a4c0(lVar21,param_3);
              _cblas_sgemm(0x3f800000,0,0x66,0x6f,0x6f,1,lVar13,param_3,lVar21,1,uVar10,iVar11);
            }
            else {
              func_0x000109c1a4c0(lVar21,lVar13);
              _cblas_sgemv(0x3f800000,0,0x66,0x6f,param_3,lVar13,uVar10,param_3,lVar21,1,uVar26,1);
            }
          }
          else {
            if (iVar11 != 1) {
              func_0x000105688514(&UNK_10f5a5d27);
              goto LAB_109c5a294;
            }
            uVar10 = *(undefined8 *)(*plVar20 + 0x40);
            piVar22 = *(int **)(*plVar27 + 0x40);
            lVar21 = (long)*piVar17;
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto LAB_109c58838;
            _vDSP_sve(uVar10,1);
          }
        }
        else if (iVar15 == 1) {
          piVar17 = *(int **)(param_2 + 0xe8);
          iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
          if (iVar11 == 3) {
            piVar22 = *(int **)(*plVar20 + 0x40);
            param_3 = *(int **)(*plVar27 + 0x40);
            if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
              iVar11 = piVar17[2];
              piVar25 = (int *)(long)iVar11;
              lVar13 = (long)piVar17[1] * (long)*piVar17;
              piStack_148 = (int *)0x0;
              uStack_140 = 0;
              uStack_150 = (int *)CONCAT44((int)lVar13,1);
              (**(code **)**(undefined8 **)(lVar21 + 0x10))
                        (&uStack_130,*(undefined8 **)(lVar21 + 0x10),&uStack_150,
                         *(undefined1 *)(*plVar20 + 0x48));
              piVar17 = uStack_130[8];
              uVar1 = (uint)uStack_150 & ((int)(uint)uStack_150 >> 0x1f ^ 0xffffffffU);
              if (4 < (int)uVar1) {
                uVar1 = 5;
              }
              iVar15 = 0xf5749aa;
              FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_150 + 4,uVar1);
              if (0 < iVar15) {
                lVar21 = 0;
                piVar9 = piVar22;
                do {
                  fVar28 = (float)param_1;
                  uStack_b0 = 0;
                  piStack_e8 = piVar9;
                  piStack_e0 = piVar25;
                  piStack_d0 = piVar22;
                  piStack_c8 = piVar25;
                  lStack_c0 = lVar13;
                  lStack_a8 = lVar21;
                  piStack_a0 = piVar25;
                  if (iVar11 == 0) {
                    fVar28 = 0.0;
                  }
                  else {
                    uStack_98 = piVar9;
                    piStack_88 = piVar25;
                    FUN_109c5725c(&uStack_98,&uStack_131,&piStack_e8);
                  }
                  param_1 = (ulong)(uint)(fVar28 / (float)iVar11);
                  piVar17[lVar21] = (int)(fVar28 / (float)iVar11);
                  lVar21 = lVar21 + 1;
                  piVar9 = piVar9 + (long)piVar25;
                } while (iVar15 != lVar21);
              }
              uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
              uVar23 = (ulong)-((uint)param_3 >> 2) & 3;
              if ((long)uVar14 <= (long)uVar23) {
                uVar23 = uVar14;
              }
              uVar2 = uVar14;
              if (((ulong)param_3 & 3) == 0) {
                uVar2 = uVar23;
              }
              uVar6 = uVar14 - uVar2;
              uVar23 = uVar6 + 3;
              if ((long)uVar2 <= (long)uVar14) {
                uVar23 = uVar6;
              }
              piVar22 = param_3;
              piVar25 = piVar17;
              uVar18 = uVar2;
              if (0 < (long)uVar2) {
                do {
                  *piVar22 = *piVar25;
                  uVar18 = uVar18 - 1;
                  piVar22 = piVar22 + 1;
                  piVar25 = piVar25 + 1;
                } while (uVar18 != 0);
              }
              lVar21 = (uVar23 & 0xfffffffffffffffc) + uVar2;
              if (3 < (long)uVar6) {
                piVar22 = piVar17 + uVar2;
                uVar18 = uVar2;
                piVar25 = param_3 + uVar2;
                do {
                  uVar10 = *(undefined8 *)piVar22;
                  *(undefined8 *)(piVar25 + 2) = *(undefined8 *)(piVar22 + 2);
                  *(undefined8 *)piVar25 = uVar10;
                  uVar18 = uVar18 + 4;
                  piVar22 = piVar22 + 4;
                  piVar25 = piVar25 + 4;
                } while ((long)uVar18 < lVar21);
              }
              if (lVar21 < (long)uVar14) {
                lVar21 = uVar6 - (uVar23 & 0xfffffffffffffffc);
                piVar17 = piVar17 + uVar2 + ((long)uVar23 >> 2) * 4;
                piVar22 = param_3 + uVar2 + ((long)uVar23 >> 2) * 4;
                do {
                  *piVar22 = *piVar17;
                  lVar21 = lVar21 + -1;
                  piVar17 = piVar17 + 1;
                  piVar22 = piVar22 + 1;
                } while (lVar21 != 0);
              }
              goto LAB_109c5a06c;
            }
            if (0 < *piVar17) {
              iVar11 = 0;
              do {
                piStack_d8 = (int *)(long)piVar17[1];
                iVar15 = piVar17[2];
                piStack_148 = (int *)(long)iVar15;
                piStack_e0 = piVar22 + iVar15 * iVar11 * piVar17[1];
                uStack_150 = param_3 + iVar15 * iVar11;
                fStack_b8 = (float)iVar15;
                uStack_130 = (int **)&uStack_98;
                ppiStack_128 = &piStack_e8;
                puStack_120 = &uStack_131;
                puStack_118 = &uStack_150;
                piStack_d0 = piStack_148;
                uStack_98 = uStack_150;
                piStack_88 = piStack_148;
                FUN_109c5791c(&uStack_130);
                iVar11 = iVar11 + 1;
                piVar17 = *(int **)(param_2 + 0xe8);
              } while (iVar11 < *piVar17);
            }
          }
          else {
            if (iVar11 == 2) {
              uVar10 = *(undefined8 *)(*plVar20 + 0x40);
              uVar26 = *(undefined8 *)(*plVar27 + 0x40);
              iVar11 = *piVar17;
              uVar1 = piVar17[1];
              param_3 = (int *)(ulong)uVar1;
              if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
                ppiStack_128 = (int **)0x0;
                puStack_120 = (undefined1 *)0x0;
                uStack_130._0_4_ = 1;
                uStack_130._4_4_ = uVar1;
                (**(code **)**(undefined8 **)(lVar21 + 0x10))
                          (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_130,1);
                uStack_130 = (int **)CONCAT44(uStack_130._4_4_,1.0 / (float)(int)uVar1);
                _vDSP_vfill(&uStack_130,*(undefined8 *)(piStack_e8 + 0x10),1,(long)(int)uVar1);
                _cblas_sgemm(0x3f800000,0,0x66,0x6f,0x6f,1,iVar11,param_3,
                             *(undefined8 *)(piStack_e8 + 0x10),1,uVar10,uVar1);
              }
              else {
                ppiStack_128 = (int **)0x0;
                puStack_120 = (undefined1 *)0x0;
                uStack_130._0_4_ = 1;
                uStack_130._4_4_ = iVar11;
                (**(code **)**(undefined8 **)(lVar21 + 0x10))
                          (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_130,1);
                uStack_130 = (int **)CONCAT44(uStack_130._4_4_,1.0 / (float)iVar11);
                _vDSP_vfill(&uStack_130,*(undefined8 *)(piStack_e8 + 0x10),1,(long)iVar11);
                _cblas_sgemv(0x3f800000,0,0x66,0x6f,param_3,iVar11,uVar10,param_3,
                             *(undefined8 *)(piStack_e8 + 0x10),1,uVar26,1);
              }
              goto LAB_109c5a114;
            }
            if (iVar11 != 1) {
              func_0x000105688514(&UNK_10f5a5d27);
              goto LAB_109c5a294;
            }
            uVar10 = *(undefined8 *)(*plVar20 + 0x40);
            piVar22 = *(int **)(*plVar27 + 0x40);
            lVar21 = (long)*piVar17;
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto LAB_109c58838;
            _vDSP_meanv(uVar10,1);
          }
        }
      }
      else if (iVar15 == 2) {
        piVar17 = *(int **)(param_2 + 0xe8);
        iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
        if (iVar11 == 3) {
          piVar22 = *(int **)(*plVar20 + 0x40);
          param_3 = *(int **)(*plVar27 + 0x40);
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
            if (0 < *piVar17) {
              iVar11 = 0;
              do {
                piStack_e0 = (int *)(long)piVar17[1];
                piStack_148 = (int *)(long)piVar17[2];
                iVar15 = piVar17[2] * iVar11;
                uStack_150 = param_3 + iVar15;
                piStack_e8 = piVar22 + iVar15 * piVar17[1];
                uStack_130 = (int **)&uStack_98;
                ppiStack_128 = &piStack_e8;
                puStack_120 = &uStack_131;
                puStack_118 = &uStack_150;
                piStack_d8 = piStack_148;
                uStack_98 = uStack_150;
                piStack_88 = piStack_148;
                FUN_109c57b1c(&uStack_130);
                iVar11 = iVar11 + 1;
                piVar17 = *(int **)(param_2 + 0xe8);
              } while (iVar11 < *piVar17);
            }
          }
          else {
            iVar15 = *piVar17;
            iVar11 = piVar17[1];
            piVar17 = (int *)(long)piVar17[2];
            piStack_148 = (int *)0x0;
            uStack_140 = 0;
            uStack_150 = (int *)CONCAT44((int)((long)iVar11 * (long)iVar15),1);
            (**(code **)**(undefined8 **)(lVar21 + 0x10))
                      (&uStack_130,*(undefined8 **)(lVar21 + 0x10),&uStack_150,
                       *(undefined1 *)(*plVar20 + 0x48));
            piVar25 = uStack_130[8];
            uVar1 = (uint)uStack_150 & ((int)(uint)uStack_150 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar1) {
              uVar1 = 5;
            }
            iVar8 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_150 + 4,uVar1);
            if (0 < iVar8) {
              lVar21 = 0;
              piVar9 = piVar22;
              do {
                uStack_b0 = 0;
                piStack_e8 = piVar9;
                piStack_e0 = piVar17;
                piStack_d0 = piVar22;
                piStack_c8 = piVar17;
                lStack_c0 = (long)iVar11 * (long)iVar15;
                lStack_a8 = lVar21;
                piStack_a0 = piVar17;
                uStack_98 = piVar9;
                piStack_88 = piVar17;
                func_0x000109c57368(&uStack_98,&uStack_131,&piStack_e8);
                piVar25[lVar21] = (int)param_1;
                lVar21 = lVar21 + 1;
                piVar9 = piVar9 + (long)piVar17;
              } while (iVar8 != lVar21);
            }
            uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
            uVar23 = (ulong)-((uint)param_3 >> 2) & 3;
            if ((long)uVar14 <= (long)uVar23) {
              uVar23 = uVar14;
            }
            uVar2 = uVar14;
            if (((ulong)param_3 & 3) == 0) {
              uVar2 = uVar23;
            }
            uVar6 = uVar14 - uVar2;
            uVar23 = uVar6 + 3;
            if ((long)uVar2 <= (long)uVar14) {
              uVar23 = uVar6;
            }
            piVar17 = param_3;
            piVar22 = piVar25;
            uVar18 = uVar2;
            if (0 < (long)uVar2) {
              do {
                *piVar17 = *piVar22;
                uVar18 = uVar18 - 1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (uVar18 != 0);
            }
            lVar21 = (uVar23 & 0xfffffffffffffffc) + uVar2;
            if (3 < (long)uVar6) {
              piVar17 = piVar25 + uVar2;
              uVar18 = uVar2;
              piVar22 = param_3 + uVar2;
              do {
                uVar10 = *(undefined8 *)piVar17;
                *(undefined8 *)(piVar22 + 2) = *(undefined8 *)(piVar17 + 2);
                *(undefined8 *)piVar22 = uVar10;
                uVar18 = uVar18 + 4;
                piVar17 = piVar17 + 4;
                piVar22 = piVar22 + 4;
              } while ((long)uVar18 < lVar21);
            }
            if (lVar21 < (long)uVar14) {
              lVar21 = uVar6 - (uVar23 & 0xfffffffffffffffc);
              piVar17 = piVar25 + uVar2 + ((long)uVar23 >> 2) * 4;
              piVar22 = param_3 + uVar2 + ((long)uVar23 >> 2) * 4;
              do {
                *piVar22 = *piVar17;
                lVar21 = lVar21 + -1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (lVar21 != 0);
            }
LAB_109c5a06c:
            ppiVar24 = (int **)&uStack_130;
LAB_109c5a118:
            FUN_109c180ec(ppiVar24);
          }
        }
        else if (iVar11 == 2) {
          param_3 = *(int **)(*plVar20 + 0x40);
          lVar21 = *(long *)(*plVar27 + 0x40);
          uVar1 = piVar17[1];
          lVar13 = (long)*piVar17;
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
            if (0 < *piVar17) {
              do {
                _vDSP_maxv(param_3,1,lVar21,(long)(int)uVar1);
                lVar21 = lVar21 + 4;
                param_3 = param_3 + (int)uVar1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
          else {
            uVar23 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              do {
                _vDSP_maxv(param_3,(ulong)uVar1,lVar21,lVar13);
                param_3 = param_3 + 1;
                lVar21 = lVar21 + 4;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
          }
        }
        else {
          if (iVar11 != 1) {
            func_0x000105688514(&UNK_10f5a5d27);
            goto LAB_109c5a294;
          }
          uVar10 = *(undefined8 *)(*plVar20 + 0x40);
          piVar22 = *(int **)(*plVar27 + 0x40);
          lVar21 = (long)*piVar17;
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
LAB_109c58838:
            iVar11 = (int)lVar21;
joined_r0x000109c58838:
            if (iVar11 != 0) {
              _memmove(piVar22,uVar10,lVar21 << 2);
            }
          }
          else {
            _vDSP_maxv(uVar10,1);
          }
        }
      }
      else if (iVar15 == 3) {
        piVar17 = *(int **)(param_2 + 0xe8);
        iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
        if (iVar11 == 3) {
          piVar22 = *(int **)(*plVar20 + 0x40);
          param_3 = *(int **)(*plVar27 + 0x40);
          if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
            iVar15 = *piVar17;
            iVar11 = piVar17[1];
            piVar17 = (int *)(long)piVar17[2];
            piStack_148 = (int *)0x0;
            uStack_140 = 0;
            uStack_150 = (int *)CONCAT44((int)((long)iVar11 * (long)iVar15),1);
            (**(code **)**(undefined8 **)(lVar21 + 0x10))
                      (&uStack_130,*(undefined8 **)(lVar21 + 0x10),&uStack_150,
                       *(undefined1 *)(*plVar20 + 0x48));
            piVar25 = uStack_130[8];
            uVar1 = (uint)uStack_150 & ((int)(uint)uStack_150 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar1) {
              uVar1 = 5;
            }
            iVar8 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_150 + 4,uVar1);
            if (0 < iVar8) {
              lVar21 = 0;
              piVar9 = piVar22;
              do {
                uStack_b0 = 0;
                piStack_e8 = piVar9;
                piStack_e0 = piVar17;
                piStack_d0 = piVar22;
                piStack_c8 = piVar17;
                lStack_c0 = (long)iVar11 * (long)iVar15;
                lStack_a8 = lVar21;
                piStack_a0 = piVar17;
                uStack_98 = piVar9;
                piStack_88 = piVar17;
                func_0x000109c574f8(&uStack_98,&uStack_131,&piStack_e8);
                piVar25[lVar21] = (int)param_1;
                lVar21 = lVar21 + 1;
                piVar9 = piVar9 + (long)piVar17;
              } while (iVar8 != lVar21);
            }
            uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
            uVar23 = (ulong)-((uint)param_3 >> 2) & 3;
            if ((long)uVar14 <= (long)uVar23) {
              uVar23 = uVar14;
            }
            uVar2 = uVar14;
            if (((ulong)param_3 & 3) == 0) {
              uVar2 = uVar23;
            }
            uVar6 = uVar14 - uVar2;
            uVar23 = uVar6 + 3;
            if ((long)uVar2 <= (long)uVar14) {
              uVar23 = uVar6;
            }
            piVar17 = param_3;
            piVar22 = piVar25;
            uVar18 = uVar2;
            if (0 < (long)uVar2) {
              do {
                *piVar17 = *piVar22;
                uVar18 = uVar18 - 1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (uVar18 != 0);
            }
            lVar21 = (uVar23 & 0xfffffffffffffffc) + uVar2;
            if (3 < (long)uVar6) {
              piVar17 = piVar25 + uVar2;
              uVar18 = uVar2;
              piVar22 = param_3 + uVar2;
              do {
                uVar10 = *(undefined8 *)piVar17;
                *(undefined8 *)(piVar22 + 2) = *(undefined8 *)(piVar17 + 2);
                *(undefined8 *)piVar22 = uVar10;
                uVar18 = uVar18 + 4;
                piVar17 = piVar17 + 4;
                piVar22 = piVar22 + 4;
              } while ((long)uVar18 < lVar21);
            }
            if (lVar21 < (long)uVar14) {
              lVar21 = uVar6 - (uVar23 & 0xfffffffffffffffc);
              piVar17 = piVar25 + uVar2 + ((long)uVar23 >> 2) * 4;
              piVar22 = param_3 + uVar2 + ((long)uVar23 >> 2) * 4;
              do {
                *piVar22 = *piVar17;
                lVar21 = lVar21 + -1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (lVar21 != 0);
            }
            goto LAB_109c5a06c;
          }
          if (0 < *piVar17) {
            iVar11 = 0;
            do {
              piStack_e0 = (int *)(long)piVar17[1];
              piStack_148 = (int *)(long)piVar17[2];
              iVar15 = piVar17[2] * iVar11;
              uStack_150 = param_3 + iVar15;
              piStack_e8 = piVar22 + iVar15 * piVar17[1];
              uStack_130 = (int **)&uStack_98;
              ppiStack_128 = &piStack_e8;
              puStack_120 = &uStack_131;
              puStack_118 = &uStack_150;
              piStack_d8 = piStack_148;
              uStack_98 = uStack_150;
              piStack_88 = piStack_148;
              FUN_109c57da0(&uStack_130);
              iVar11 = iVar11 + 1;
              piVar17 = *(int **)(param_2 + 0xe8);
            } while (iVar11 < *piVar17);
          }
        }
        else if (iVar11 == 2) {
          param_3 = *(int **)(*plVar20 + 0x40);
          lVar21 = *(long *)(*plVar27 + 0x40);
          uVar1 = piVar17[1];
          lVar13 = (long)*piVar17;
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
            if (0 < *piVar17) {
              do {
                _vDSP_minv(param_3,1,lVar21,(long)(int)uVar1);
                lVar21 = lVar21 + 4;
                param_3 = param_3 + (int)uVar1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
          else {
            uVar23 = (ulong)uVar1;
            if (0 < (int)uVar1) {
              do {
                _vDSP_minv(param_3,(ulong)uVar1,lVar21,lVar13);
                param_3 = param_3 + 1;
                lVar21 = lVar21 + 4;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
          }
        }
        else {
          if (iVar11 != 1) {
            func_0x000105688514(&UNK_10f5a5d27);
            goto LAB_109c5a294;
          }
          uVar10 = *(undefined8 *)(*plVar20 + 0x40);
          piVar22 = *(int **)(*plVar27 + 0x40);
          lVar21 = (long)*piVar17;
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto LAB_109c58838;
          _vDSP_minv(uVar10,1);
        }
      }
      else if (iVar15 == 6) {
        piVar17 = *(int **)(param_2 + 0xe8);
        iVar15 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
        if (iVar15 == 3) {
          ppiVar24 = *(int ***)(*plVar20 + 0x40);
          piVar22 = *(int **)(*plVar27 + 0x40);
          if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
            iVar8 = *piVar17;
            iVar11 = piVar17[1];
            iVar15 = piVar17[2];
            uStack_90 = 0;
            piStack_88 = (int *)0x0;
            uStack_98 = (int *)CONCAT44((int)(undefined1 *)((long)iVar11 * (long)iVar8),1);
            (**(code **)**(undefined8 **)(lVar21 + 0x10))
                      (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_98,
                       *(undefined1 *)(*plVar20 + 0x48));
            param_3 = *(int **)(piStack_e8 + 0x10);
            uVar1 = (uint)uStack_98 & ((int)(uint)uStack_98 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar1) {
              uVar1 = 5;
            }
            iVar19 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_98 + 4,uVar1);
            uStack_130 = ppiVar24;
            ppiStack_128 = (int **)(long)iVar15;
            puStack_120 = (undefined1 *)((long)iVar11 * (long)iVar8);
            func_0x000109c5a688(&uStack_130,param_3,(long)iVar19);
            uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
            uVar23 = uVar14;
            if ((((ulong)piVar22 & 3) == 0) &&
               (uVar23 = (ulong)-((uint)piVar22 >> 2) & 3, (long)uVar14 <= (long)uVar23)) {
              uVar23 = uVar14;
            }
            uVar6 = uVar14 - uVar23;
            uVar2 = uVar6 + 3;
            if ((long)uVar23 <= (long)uVar14) {
              uVar2 = uVar6;
            }
            piVar17 = piVar22;
            piVar25 = param_3;
            uVar18 = uVar23;
            if (0 < (long)uVar23) {
              do {
                *piVar17 = *piVar25;
                uVar18 = uVar18 - 1;
                piVar17 = piVar17 + 1;
                piVar25 = piVar25 + 1;
              } while (uVar18 != 0);
            }
            lVar21 = (uVar2 & 0xfffffffffffffffc) + uVar23;
            if (3 < (long)uVar6) {
              piVar17 = param_3 + uVar23;
              uVar18 = uVar23;
              piVar25 = piVar22 + uVar23;
              do {
                uVar10 = *(undefined8 *)piVar17;
                *(undefined8 *)(piVar25 + 2) = *(undefined8 *)(piVar17 + 2);
                *(undefined8 *)piVar25 = uVar10;
                uVar18 = uVar18 + 4;
                piVar17 = piVar17 + 4;
                piVar25 = piVar25 + 4;
              } while ((long)uVar18 < lVar21);
            }
            if (lVar21 < (long)uVar14) {
              lVar21 = uVar6 - (uVar2 & 0xfffffffffffffffc);
              piVar17 = param_3 + uVar23 + ((long)uVar2 >> 2) * 4;
              piVar22 = piVar22 + uVar23 + ((long)uVar2 >> 2) * 4;
              do {
                *piVar22 = *piVar17;
                lVar21 = lVar21 + -1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (lVar21 != 0);
            }
            goto LAB_109c5a114;
          }
          if (0 < *piVar17) {
            param_3 = (int *)0x0;
            do {
              piStack_e0 = (int *)(long)piVar17[1];
              piStack_148 = (int *)(long)piVar17[2];
              iVar11 = piVar17[2] * (int)param_3;
              uStack_150 = piVar22 + iVar11;
              piStack_e8 = (int *)((long)ppiVar24 + (long)(iVar11 * piVar17[1]) * 4);
              uStack_130 = (int **)&uStack_98;
              ppiStack_128 = &piStack_e8;
              puStack_120 = &uStack_131;
              puStack_118 = &uStack_150;
              piStack_d8 = piStack_148;
              uStack_98 = uStack_150;
              piStack_88 = piStack_148;
              func_0x000109c5a478(&uStack_130);
              uVar1 = (int)param_3 + 1;
              param_3 = (int *)(ulong)uVar1;
              piVar17 = *(int **)(param_2 + 0xe8);
            } while ((int)uVar1 < *piVar17);
          }
        }
        else if (iVar15 == 2) {
          piStack_e8 = *(int **)(*plVar20 + 0x40);
          piStack_d8 = (int *)(long)*piVar17;
          piStack_e0 = (int *)(long)piVar17[1];
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
            func_0x000109c5a688(&piStack_e8);
          }
          else {
            uStack_130 = (int **)&uStack_98;
            ppiStack_128 = &piStack_e8;
            puStack_120 = &uStack_131;
            puStack_118 = &uStack_150;
            uStack_150 = *(int **)(*plVar27 + 0x40);
            piStack_148 = piStack_e0;
            uStack_98 = *(int **)(*plVar27 + 0x40);
            piStack_88 = piStack_e0;
            func_0x000109c5a478(&uStack_130);
          }
        }
        else {
          if (iVar15 != 1) {
            func_0x000105688514(&UNK_10f5a5d27);
            goto LAB_109c5a294;
          }
          uVar10 = *(undefined8 *)(*plVar20 + 0x40);
          param_3 = *(int **)(*plVar27 + 0x40);
          lVar21 = (long)*piVar17;
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto LAB_109c58894;
          if (*piVar17 == 0) {
            iVar11 = 0x3f800000;
          }
          else {
            func_0x000109c5a370(uVar10);
          }
          *param_3 = iVar11;
        }
      }
LAB_109c5a154:
      if (*(char *)(param_2 + 0xb0) == '\x01') {
        uVar16 = *(undefined4 *)(*plVar20 + 0x3c);
      }
      else {
        uVar16 = 2;
      }
      *(undefined4 *)(*plVar27 + 0x3c) = uVar16;
      goto LAB_109c5a17c;
    }
    if (bVar4 == 4) {
      iVar11 = *(int *)(param_2 + 0x90);
      lVar21 = *(long *)(param_2 + 0x68);
      if (iVar11 < 2) {
        if (iVar11 == 0) {
          piVar17 = *(int **)(param_2 + 0xe8);
          iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
          if (iVar11 == 3) {
            ppiVar24 = *(int ***)(*plVar20 + 0x40);
            piVar22 = *(int **)(*plVar27 + 0x40);
            if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
              iVar8 = *piVar17;
              iVar11 = piVar17[1];
              iVar15 = piVar17[2];
              uStack_90 = 0;
              piStack_88 = (int *)0x0;
              uStack_98 = (int *)CONCAT44((int)(undefined1 *)((long)iVar11 * (long)iVar8),1);
              (**(code **)**(undefined8 **)(lVar21 + 0x10))
                        (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_98,
                         *(undefined1 *)(*plVar20 + 0x48));
              param_3 = *(int **)(piStack_e8 + 0x10);
              uVar1 = (uint)uStack_98 & ((int)(uint)uStack_98 >> 0x1f ^ 0xffffffffU);
              if (4 < (int)uVar1) {
                uVar1 = 5;
              }
              iVar19 = 0xf5749aa;
              FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_98 + 4,uVar1);
              uStack_130 = ppiVar24;
              ppiStack_128 = (int **)(long)iVar15;
              puStack_120 = (undefined1 *)((long)iVar11 * (long)iVar8);
              FUN_109c5a8fc(&uStack_130,param_3,(long)iVar19);
              uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
              uVar23 = uVar14;
              if ((((ulong)piVar22 & 3) == 0) &&
                 (uVar23 = (ulong)-((uint)piVar22 >> 2) & 3, (long)uVar14 <= (long)uVar23)) {
                uVar23 = uVar14;
              }
              uVar6 = uVar14 - uVar23;
              uVar2 = uVar6 + 3;
              if ((long)uVar23 <= (long)uVar14) {
                uVar2 = uVar6;
              }
              piVar17 = piVar22;
              piVar25 = param_3;
              uVar18 = uVar23;
              if (0 < (long)uVar23) {
                do {
                  *piVar17 = *piVar25;
                  uVar18 = uVar18 - 1;
                  piVar17 = piVar17 + 1;
                  piVar25 = piVar25 + 1;
                } while (uVar18 != 0);
              }
              lVar21 = (uVar2 & 0xfffffffffffffffc) + uVar23;
              if (3 < (long)uVar6) {
                piVar17 = param_3 + uVar23;
                uVar18 = uVar23;
                piVar25 = piVar22 + uVar23;
                do {
                  uVar10 = *(undefined8 *)piVar17;
                  *(undefined8 *)(piVar25 + 2) = *(undefined8 *)(piVar17 + 2);
                  *(undefined8 *)piVar25 = uVar10;
                  uVar18 = uVar18 + 4;
                  piVar17 = piVar17 + 4;
                  piVar25 = piVar25 + 4;
                } while ((long)uVar18 < lVar21);
              }
              if (lVar21 < (long)uVar14) {
                lVar21 = uVar6 - (uVar2 & 0xfffffffffffffffc);
                piVar17 = param_3 + uVar23 + ((long)uVar2 >> 2) * 4;
                piVar22 = piVar22 + uVar23 + ((long)uVar2 >> 2) * 4;
                do {
                  *piVar22 = *piVar17;
                  lVar21 = lVar21 + -1;
                  piVar17 = piVar17 + 1;
                  piVar22 = piVar22 + 1;
                } while (lVar21 != 0);
              }
              goto LAB_109c5a114;
            }
            if (0 < *piVar17) {
              param_3 = (int *)0x0;
              do {
                piStack_e0 = (int *)(long)piVar17[1];
                piStack_148 = (int *)(long)piVar17[2];
                iVar11 = piVar17[2] * (int)param_3;
                uStack_150 = piVar22 + iVar11;
                piStack_e8 = (int *)((long)ppiVar24 + (long)(iVar11 * piVar17[1]) * 4);
                uStack_130 = (int **)&uStack_98;
                ppiStack_128 = &piStack_e8;
                puStack_120 = &uStack_131;
                puStack_118 = &uStack_150;
                piStack_d8 = piStack_148;
                uStack_98 = uStack_150;
                piStack_88 = piStack_148;
                func_0x000109c5a968(&uStack_130);
                uVar1 = (int)param_3 + 1;
                param_3 = (int *)(ulong)uVar1;
                piVar17 = *(int **)(param_2 + 0xe8);
              } while ((int)uVar1 < *piVar17);
            }
          }
          else {
            if (iVar11 != 2) {
              if (iVar11 != 1) {
                func_0x000105688514(&UNK_10f5a5d27);
                goto LAB_109c5a294;
              }
              uVar10 = *(undefined8 *)(*plVar20 + 0x40);
              param_3 = *(int **)(*plVar27 + 0x40);
              lVar21 = (long)*piVar17;
              if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto LAB_109c58894;
              if (*piVar17 == 0) {
                iVar11 = 0;
              }
              else {
                func_0x000109c5a7ec();
                iVar11 = (int)uVar10;
              }
              goto LAB_109c5a150;
            }
            piStack_e8 = *(int **)(*plVar20 + 0x40);
            piStack_d8 = (int *)(long)*piVar17;
            piStack_e0 = (int *)(long)piVar17[1];
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
              FUN_109c5a8fc(&piStack_e8);
            }
            else {
              uStack_130 = (int **)&uStack_98;
              ppiStack_128 = &piStack_e8;
              puStack_120 = &uStack_131;
              puStack_118 = &uStack_150;
              uStack_150 = *(int **)(*plVar27 + 0x40);
              piStack_148 = piStack_e0;
              uStack_98 = *(int **)(*plVar27 + 0x40);
              piStack_88 = piStack_e0;
              func_0x000109c5a968(&uStack_130);
            }
          }
        }
        else if (iVar11 == 1) {
          piVar17 = *(int **)(param_2 + 0xe8);
          iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
          if (iVar11 == 3) {
            ppiVar24 = *(int ***)(*plVar20 + 0x40);
            piVar22 = *(int **)(*plVar27 + 0x40);
            if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
              iVar8 = *piVar17;
              iVar11 = piVar17[1];
              iVar15 = piVar17[2];
              uStack_90 = 0;
              piStack_88 = (int *)0x0;
              uStack_98 = (int *)CONCAT44((int)(undefined1 *)((long)iVar11 * (long)iVar8),1);
              (**(code **)**(undefined8 **)(lVar21 + 0x10))
                        (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_98,
                         *(undefined1 *)(*plVar20 + 0x48));
              param_3 = *(int **)(piStack_e8 + 0x10);
              uVar1 = (uint)uStack_98 & ((int)(uint)uStack_98 >> 0x1f ^ 0xffffffffU);
              if (4 < (int)uVar1) {
                uVar1 = 5;
              }
              iVar19 = 0xf5749aa;
              FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_98 + 4,uVar1);
              uStack_130 = ppiVar24;
              ppiStack_128 = (int **)(long)iVar15;
              puStack_120 = (undefined1 *)((long)iVar11 * (long)iVar8);
              FUN_109c5acf8(&uStack_130,param_3,(long)iVar19);
              iVar11 = *(int *)(*(long *)(param_2 + 0xe8) + 4);
              lVar21 = (long)iVar11;
              piVar17 = param_3;
              if (0 < iVar11) {
                do {
                  param_3 = piVar17 + 1;
                  *piVar22 = *piVar17;
                  lVar21 = lVar21 + -1;
                  piVar17 = param_3;
                  piVar22 = piVar22 + 1;
                } while (lVar21 != 0);
              }
              goto LAB_109c5a114;
            }
            iVar11 = *piVar17;
            if (0 < iVar11) {
              iVar15 = 0;
              do {
                iVar8 = piVar17[2];
                if (0 < iVar8) {
                  lVar21 = 0;
                  iVar11 = piVar17[1];
                  piVar25 = (int *)((long)ppiVar24 +
                                   (long)iVar11 * 4 + (long)(iVar8 * iVar11 * iVar15) * 4);
                  do {
                    iVar19 = *(int *)((long)ppiVar24 +
                                     lVar21 * 4 + (long)(iVar8 * iVar15 * iVar11) * 4);
                    piVar9 = piVar25;
                    lVar13 = (long)iVar8 + -1;
                    if (iVar8 != 1) {
                      do {
                        iVar19 = *piVar9 + iVar19;
                        lVar13 = lVar13 + -1;
                        piVar9 = piVar9 + iVar11;
                      } while (lVar13 != 0);
                    }
                    iVar5 = 0;
                    if (iVar8 != 0) {
                      iVar5 = iVar19 / iVar8;
                    }
                    piVar22[iVar8 * iVar15 + lVar21] = iVar5;
                    lVar21 = lVar21 + 1;
                    piVar25 = piVar25 + 1;
                  } while (lVar21 != iVar8);
                  iVar11 = *piVar17;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < iVar11);
            }
          }
          else if (iVar11 == 2) {
            piStack_e8 = *(int **)(*plVar20 + 0x40);
            piStack_d8 = (int *)(long)*piVar17;
            piStack_e0 = (int *)(long)piVar17[1];
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
              FUN_109c5acf8(&piStack_e8,*(undefined8 *)(*plVar27 + 0x40),piStack_d8);
            }
            else {
              func_0x000109c5ac88(&piStack_e8,*(undefined8 *)(*plVar27 + 0x40));
            }
          }
          else {
            if (iVar11 != 1) {
              func_0x000105688514(&UNK_10f5a5d27);
              goto LAB_109c5a294;
            }
            uVar10 = *(undefined8 *)(*plVar20 + 0x40);
            param_3 = *(int **)(*plVar27 + 0x40);
            iVar11 = *piVar17;
            lVar21 = (long)iVar11;
            piVar22 = param_3;
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto joined_r0x000109c58838;
            func_0x000109c5a7ec(uVar10,uVar10,lVar21);
            iVar15 = 0;
            if (iVar11 != 0) {
              iVar15 = (int)uVar10 / iVar11;
            }
            *param_3 = iVar15;
          }
        }
      }
      else if (iVar11 == 2) {
        piVar17 = *(int **)(param_2 + 0xe8);
        iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
        if (iVar11 == 3) {
          ppiVar24 = *(int ***)(*plVar20 + 0x40);
          piVar22 = *(int **)(*plVar27 + 0x40);
          if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
            iVar8 = *piVar17;
            iVar11 = piVar17[1];
            iVar15 = piVar17[2];
            uStack_90 = 0;
            piStack_88 = (int *)0x0;
            uStack_98 = (int *)CONCAT44((int)(undefined1 *)((long)iVar11 * (long)iVar8),1);
            (**(code **)**(undefined8 **)(lVar21 + 0x10))
                      (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_98,
                       *(undefined1 *)(*plVar20 + 0x48));
            param_3 = *(int **)(piStack_e8 + 0x10);
            uVar1 = (uint)uStack_98 & ((int)(uint)uStack_98 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar1) {
              uVar1 = 5;
            }
            iVar19 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_98 + 4,uVar1);
            uStack_130 = ppiVar24;
            ppiStack_128 = (int **)(long)iVar15;
            puStack_120 = (undefined1 *)((long)iVar11 * (long)iVar8);
            FUN_109c5aef8(&uStack_130,param_3,(long)iVar19);
            uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
            uVar23 = uVar14;
            if ((((ulong)piVar22 & 3) == 0) &&
               (uVar23 = (ulong)-((uint)piVar22 >> 2) & 3, (long)uVar14 <= (long)uVar23)) {
              uVar23 = uVar14;
            }
            uVar6 = uVar14 - uVar23;
            uVar2 = uVar6 + 3;
            if ((long)uVar23 <= (long)uVar14) {
              uVar2 = uVar6;
            }
            piVar17 = piVar22;
            piVar25 = param_3;
            uVar18 = uVar23;
            if (0 < (long)uVar23) {
              do {
                *piVar17 = *piVar25;
                uVar18 = uVar18 - 1;
                piVar17 = piVar17 + 1;
                piVar25 = piVar25 + 1;
              } while (uVar18 != 0);
            }
            lVar21 = (uVar2 & 0xfffffffffffffffc) + uVar23;
            if (3 < (long)uVar6) {
              piVar17 = param_3 + uVar23;
              uVar18 = uVar23;
              piVar25 = piVar22 + uVar23;
              do {
                uVar10 = *(undefined8 *)piVar17;
                *(undefined8 *)(piVar25 + 2) = *(undefined8 *)(piVar17 + 2);
                *(undefined8 *)piVar25 = uVar10;
                uVar18 = uVar18 + 4;
                piVar17 = piVar17 + 4;
                piVar25 = piVar25 + 4;
              } while ((long)uVar18 < lVar21);
            }
            if (lVar21 < (long)uVar14) {
              lVar21 = uVar6 - (uVar2 & 0xfffffffffffffffc);
              piVar17 = param_3 + uVar23 + ((long)uVar2 >> 2) * 4;
              piVar22 = piVar22 + uVar23 + ((long)uVar2 >> 2) * 4;
              do {
                *piVar22 = *piVar17;
                lVar21 = lVar21 + -1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (lVar21 != 0);
            }
LAB_109c5a114:
            ppiVar24 = &piStack_e8;
            goto LAB_109c5a118;
          }
          if (0 < *piVar17) {
            param_3 = (int *)0x0;
            do {
              piStack_e0 = (int *)(long)piVar17[1];
              piStack_148 = (int *)(long)piVar17[2];
              iVar11 = piVar17[2] * (int)param_3;
              uStack_150 = piVar22 + iVar11;
              piStack_e8 = (int *)((long)ppiVar24 + (long)(iVar11 * piVar17[1]) * 4);
              uStack_130 = (int **)&uStack_98;
              ppiStack_128 = &piStack_e8;
              puStack_120 = &uStack_131;
              puStack_118 = &uStack_150;
              piStack_d8 = piStack_148;
              uStack_98 = uStack_150;
              piStack_88 = piStack_148;
              FUN_109c5b0d8(&uStack_130);
              uVar1 = (int)param_3 + 1;
              param_3 = (int *)(ulong)uVar1;
              piVar17 = *(int **)(param_2 + 0xe8);
            } while ((int)uVar1 < *piVar17);
          }
        }
        else if (iVar11 == 2) {
          piStack_e8 = *(int **)(*plVar20 + 0x40);
          piStack_d8 = (int *)(long)*piVar17;
          piStack_e0 = (int *)(long)piVar17[1];
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
            FUN_109c5aef8(&piStack_e8);
          }
          else {
            uStack_130 = (int **)&uStack_98;
            ppiStack_128 = &piStack_e8;
            puStack_120 = &uStack_131;
            puStack_118 = &uStack_150;
            uStack_150 = *(int **)(*plVar27 + 0x40);
            piStack_148 = piStack_e0;
            uStack_98 = *(int **)(*plVar27 + 0x40);
            piStack_88 = piStack_e0;
            FUN_109c5b0d8(&uStack_130);
          }
        }
        else {
          if (iVar11 != 1) {
            func_0x000105688514(&UNK_10f5a5d27);
            goto LAB_109c5a294;
          }
          uVar10 = *(undefined8 *)(*plVar20 + 0x40);
          param_3 = *(int **)(*plVar27 + 0x40);
          lVar21 = (long)*piVar17;
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
LAB_109c58894:
            iVar11 = (int)lVar21;
            piVar22 = param_3;
            goto joined_r0x000109c58838;
          }
          FUN_109c5ad68();
          iVar11 = (int)uVar10;
LAB_109c5a150:
          *param_3 = iVar11;
        }
      }
      else if (iVar11 == 3) {
        piVar17 = *(int **)(param_2 + 0xe8);
        iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
        if (iVar11 == 3) {
          ppiVar24 = *(int ***)(*plVar20 + 0x40);
          piVar22 = *(int **)(*plVar27 + 0x40);
          if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
            iVar8 = *piVar17;
            iVar11 = piVar17[1];
            iVar15 = piVar17[2];
            uStack_90 = 0;
            piStack_88 = (int *)0x0;
            uStack_98 = (int *)CONCAT44((int)(undefined1 *)((long)iVar11 * (long)iVar8),1);
            (**(code **)**(undefined8 **)(lVar21 + 0x10))
                      (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_98,
                       *(undefined1 *)(*plVar20 + 0x48));
            param_3 = *(int **)(piStack_e8 + 0x10);
            uVar1 = (uint)uStack_98 & ((int)(uint)uStack_98 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar1) {
              uVar1 = 5;
            }
            iVar19 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_98 + 4,uVar1);
            uStack_130 = ppiVar24;
            ppiStack_128 = (int **)(long)iVar15;
            puStack_120 = (undefined1 *)((long)iVar11 * (long)iVar8);
            FUN_109c5b464(&uStack_130,param_3,(long)iVar19);
            uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
            uVar23 = uVar14;
            if ((((ulong)piVar22 & 3) == 0) &&
               (uVar23 = (ulong)-((uint)piVar22 >> 2) & 3, (long)uVar14 <= (long)uVar23)) {
              uVar23 = uVar14;
            }
            uVar6 = uVar14 - uVar23;
            uVar2 = uVar6 + 3;
            if ((long)uVar23 <= (long)uVar14) {
              uVar2 = uVar6;
            }
            piVar17 = piVar22;
            piVar25 = param_3;
            uVar18 = uVar23;
            if (0 < (long)uVar23) {
              do {
                *piVar17 = *piVar25;
                uVar18 = uVar18 - 1;
                piVar17 = piVar17 + 1;
                piVar25 = piVar25 + 1;
              } while (uVar18 != 0);
            }
            lVar21 = (uVar2 & 0xfffffffffffffffc) + uVar23;
            if (3 < (long)uVar6) {
              piVar17 = param_3 + uVar23;
              uVar18 = uVar23;
              piVar25 = piVar22 + uVar23;
              do {
                uVar10 = *(undefined8 *)piVar17;
                *(undefined8 *)(piVar25 + 2) = *(undefined8 *)(piVar17 + 2);
                *(undefined8 *)piVar25 = uVar10;
                uVar18 = uVar18 + 4;
                piVar17 = piVar17 + 4;
                piVar25 = piVar25 + 4;
              } while ((long)uVar18 < lVar21);
            }
            if (lVar21 < (long)uVar14) {
              lVar21 = uVar6 - (uVar2 & 0xfffffffffffffffc);
              piVar17 = param_3 + uVar23 + ((long)uVar2 >> 2) * 4;
              piVar22 = piVar22 + uVar23 + ((long)uVar2 >> 2) * 4;
              do {
                *piVar22 = *piVar17;
                lVar21 = lVar21 + -1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (lVar21 != 0);
            }
            goto LAB_109c5a114;
          }
          if (0 < *piVar17) {
            param_3 = (int *)0x0;
            do {
              piStack_e0 = (int *)(long)piVar17[1];
              piStack_148 = (int *)(long)piVar17[2];
              iVar11 = piVar17[2] * (int)param_3;
              uStack_150 = piVar22 + iVar11;
              piStack_e8 = (int *)((long)ppiVar24 + (long)(iVar11 * piVar17[1]) * 4);
              uStack_130 = (int **)&uStack_98;
              ppiStack_128 = &piStack_e8;
              puStack_120 = &uStack_131;
              puStack_118 = &uStack_150;
              piStack_d8 = piStack_148;
              uStack_98 = uStack_150;
              piStack_88 = piStack_148;
              func_0x000109c5b644(&uStack_130);
              uVar1 = (int)param_3 + 1;
              param_3 = (int *)(ulong)uVar1;
              piVar17 = *(int **)(param_2 + 0xe8);
            } while ((int)uVar1 < *piVar17);
          }
        }
        else {
          if (iVar11 != 2) {
            if (iVar11 != 1) {
              func_0x000105688514(&UNK_10f5a5d27);
              goto LAB_109c5a294;
            }
            uVar10 = *(undefined8 *)(*plVar20 + 0x40);
            param_3 = *(int **)(*plVar27 + 0x40);
            lVar21 = (long)*piVar17;
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto LAB_109c58894;
            FUN_109c5b2d4();
            iVar11 = (int)uVar10;
            goto LAB_109c5a150;
          }
          piStack_e8 = *(int **)(*plVar20 + 0x40);
          piStack_d8 = (int *)(long)*piVar17;
          piStack_e0 = (int *)(long)piVar17[1];
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
            FUN_109c5b464(&piStack_e8);
          }
          else {
            uStack_130 = (int **)&uStack_98;
            ppiStack_128 = &piStack_e8;
            puStack_120 = &uStack_131;
            puStack_118 = &uStack_150;
            uStack_150 = *(int **)(*plVar27 + 0x40);
            piStack_148 = piStack_e0;
            uStack_98 = *(int **)(*plVar27 + 0x40);
            piStack_88 = piStack_e0;
            func_0x000109c5b644(&uStack_130);
          }
        }
      }
      else if (iVar11 == 6) {
        piVar17 = *(int **)(param_2 + 0xe8);
        iVar11 = (int)((ulong)(*(long *)(param_2 + 0xf0) - (long)piVar17) >> 2);
        if (iVar11 == 3) {
          ppiVar24 = *(int ***)(*plVar20 + 0x40);
          piVar22 = *(int **)(*plVar27 + 0x40);
          if ((**(byte **)(param_2 + 0xd0) & 1) != 0) {
            iVar8 = *piVar17;
            iVar11 = piVar17[1];
            iVar15 = piVar17[2];
            uStack_90 = 0;
            piStack_88 = (int *)0x0;
            uStack_98 = (int *)CONCAT44((int)(undefined1 *)((long)iVar11 * (long)iVar8),1);
            (**(code **)**(undefined8 **)(lVar21 + 0x10))
                      (&piStack_e8,*(undefined8 **)(lVar21 + 0x10),&uStack_98,
                       *(undefined1 *)(*plVar20 + 0x48));
            param_3 = *(int **)(piStack_e8 + 0x10);
            uVar1 = (uint)uStack_98 & ((int)(uint)uStack_98 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar1) {
              uVar1 = 5;
            }
            iVar19 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_98 + 4,uVar1);
            uStack_130 = ppiVar24;
            ppiStack_128 = (int **)(long)iVar15;
            puStack_120 = (undefined1 *)((long)iVar11 * (long)iVar8);
            func_0x000109c5b950(&uStack_130,param_3,(long)iVar19);
            uVar14 = (ulong)*(int *)(*(long *)(param_2 + 0xe8) + 4);
            uVar23 = uVar14;
            if ((((ulong)piVar22 & 3) == 0) &&
               (uVar23 = (ulong)-((uint)piVar22 >> 2) & 3, (long)uVar14 <= (long)uVar23)) {
              uVar23 = uVar14;
            }
            uVar6 = uVar14 - uVar23;
            uVar2 = uVar6 + 3;
            if ((long)uVar23 <= (long)uVar14) {
              uVar2 = uVar6;
            }
            piVar17 = piVar22;
            piVar25 = param_3;
            uVar18 = uVar23;
            if (0 < (long)uVar23) {
              do {
                *piVar17 = *piVar25;
                uVar18 = uVar18 - 1;
                piVar17 = piVar17 + 1;
                piVar25 = piVar25 + 1;
              } while (uVar18 != 0);
            }
            lVar21 = (uVar2 & 0xfffffffffffffffc) + uVar23;
            if (3 < (long)uVar6) {
              piVar17 = param_3 + uVar23;
              uVar18 = uVar23;
              piVar25 = piVar22 + uVar23;
              do {
                uVar10 = *(undefined8 *)piVar17;
                *(undefined8 *)(piVar25 + 2) = *(undefined8 *)(piVar17 + 2);
                *(undefined8 *)piVar25 = uVar10;
                uVar18 = uVar18 + 4;
                piVar17 = piVar17 + 4;
                piVar25 = piVar25 + 4;
              } while ((long)uVar18 < lVar21);
            }
            if (lVar21 < (long)uVar14) {
              lVar21 = uVar6 - (uVar2 & 0xfffffffffffffffc);
              piVar17 = param_3 + uVar23 + ((long)uVar2 >> 2) * 4;
              piVar22 = piVar22 + uVar23 + ((long)uVar2 >> 2) * 4;
              do {
                *piVar22 = *piVar17;
                lVar21 = lVar21 + -1;
                piVar17 = piVar17 + 1;
                piVar22 = piVar22 + 1;
              } while (lVar21 != 0);
            }
            goto LAB_109c5a114;
          }
          if (0 < *piVar17) {
            param_3 = (int *)0x0;
            do {
              piStack_e0 = (int *)(long)piVar17[1];
              piStack_148 = (int *)(long)piVar17[2];
              iVar11 = piVar17[2] * (int)param_3;
              uStack_150 = piVar22 + iVar11;
              piStack_e8 = (int *)((long)ppiVar24 + (long)(iVar11 * piVar17[1]) * 4);
              uStack_130 = (int **)&uStack_98;
              ppiStack_128 = &piStack_e8;
              puStack_120 = &uStack_131;
              puStack_118 = &uStack_150;
              piStack_d8 = piStack_148;
              uStack_98 = uStack_150;
              piStack_88 = piStack_148;
              func_0x000109c5bab8(&uStack_130);
              uVar1 = (int)param_3 + 1;
              param_3 = (int *)(ulong)uVar1;
              piVar17 = *(int **)(param_2 + 0xe8);
            } while ((int)uVar1 < *piVar17);
          }
        }
        else {
          if (iVar11 != 2) {
            if (iVar11 != 1) {
              func_0x000105688514(&UNK_10f5a5d27);
              goto LAB_109c5a294;
            }
            uVar10 = *(undefined8 *)(*plVar20 + 0x40);
            param_3 = *(int **)(*plVar27 + 0x40);
            lVar21 = (long)*piVar17;
            if ((**(byte **)(param_2 + 0xd0) & 1) == 0) goto LAB_109c58894;
            if (*piVar17 == 0) {
              iVar11 = 1;
            }
            else {
              func_0x000109c5b840();
              iVar11 = (int)uVar10;
            }
            goto LAB_109c5a150;
          }
          piStack_e8 = *(int **)(*plVar20 + 0x40);
          piStack_d8 = (int *)(long)*piVar17;
          piStack_e0 = (int *)(long)piVar17[1];
          if ((**(byte **)(param_2 + 0xd0) & 1) == 0) {
            func_0x000109c5b950(&piStack_e8);
          }
          else {
            uStack_130 = (int **)&uStack_98;
            ppiStack_128 = &piStack_e8;
            puStack_120 = &uStack_131;
            puStack_118 = &uStack_150;
            uStack_150 = *(int **)(*plVar27 + 0x40);
            piStack_148 = piStack_e0;
            uStack_98 = *(int **)(*plVar27 + 0x40);
            piStack_88 = piStack_e0;
            func_0x000109c5bab8(&uStack_130);
          }
        }
      }
      goto LAB_109c5a154;
    }
  }
  FUN_109c129d4(&uStack_130,param_3);
  FUN_10928a5e0(&piStack_e8,&UNK_10f5a3e0d,&uStack_130);
  func_0x000105687ee0(&piStack_e8);
LAB_109c5a294:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109c5a298);
  (*pcVar7)();
}



/* Entry: 109c5a370; end: 109c5a8fb;  */

float FUN_109c5a370(float *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  
  uVar4 = (ulong)-(param_2 >> 2) & 3;
  if ((long)param_3 <= (long)uVar4) {
    uVar4 = param_3;
  }
  uVar6 = param_3;
  if ((param_2 & 3) == 0) {
    uVar6 = uVar4;
  }
  uVar1 = param_3 - uVar6;
  uVar4 = uVar1 + 3;
  uVar3 = uVar1 + 7;
  if ((long)uVar6 <= (long)param_3) {
    uVar4 = uVar1;
    uVar3 = uVar1;
  }
  if (uVar1 + 3 < 7) {
    fVar9 = *param_1;
    if (1 < (long)param_3) {
      lVar5 = param_3 - 1;
      do {
        param_1 = param_1 + 1;
        fVar9 = fVar9 * *param_1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    pfVar7 = param_1 + uVar6;
    fVar11 = (float)*(undefined8 *)(pfVar7 + 2);
    fVar12 = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
    fVar9 = (float)*(undefined8 *)pfVar7;
    fVar10 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
    if (7 < (long)uVar1) {
      lVar5 = (uVar3 & 0xfffffffffffffff8) + uVar6;
      fVar13 = pfVar7[4];
      fVar15 = pfVar7[5];
      fVar16 = pfVar7[6];
      fVar17 = pfVar7[7];
      if (0xf < uVar1) {
        lVar8 = uVar6 + 8;
        pfVar7 = pfVar7 + 0xc;
        do {
          fVar9 = fVar9 * (float)*(undefined8 *)(pfVar7 + -4);
          fVar10 = fVar10 * (float)((ulong)*(undefined8 *)(pfVar7 + -4) >> 0x20);
          fVar11 = fVar11 * (float)*(undefined8 *)(pfVar7 + -2);
          fVar12 = fVar12 * (float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20);
          fVar13 = fVar13 * (float)*(undefined8 *)pfVar7;
          fVar15 = fVar15 * (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
          fVar16 = fVar16 * (float)*(undefined8 *)(pfVar7 + 2);
          fVar17 = fVar17 * (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
          lVar8 = lVar8 + 8;
          pfVar7 = pfVar7 + 8;
        } while (lVar8 < lVar5);
      }
      fVar9 = fVar13 * fVar9;
      fVar10 = fVar15 * fVar10;
      fVar11 = fVar16 * fVar11;
      fVar12 = fVar17 * fVar12;
      if ((long)(uVar3 & 0xfffffffffffffff8) < (long)(uVar4 & 0xfffffffffffffffc)) {
        pfVar7 = param_1 + lVar5;
        fVar9 = fVar9 * *pfVar7;
        fVar10 = fVar10 * pfVar7[1];
        fVar11 = fVar11 * pfVar7[2];
        fVar12 = fVar12 * pfVar7[3];
      }
    }
    lVar5 = (uVar4 & 0xfffffffffffffffc) + uVar6;
    auVar14._4_4_ = fVar10;
    auVar14._0_4_ = fVar9;
    auVar14._8_4_ = fVar11;
    auVar14._12_4_ = fVar12;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar12;
    auVar14 = NEON_ext(auVar14,auVar2,8,1);
    fVar9 = fVar9 * auVar14._0_4_ * fVar10 * auVar14._4_4_;
    pfVar7 = param_1;
    if (0 < (long)uVar6) {
      do {
        fVar9 = fVar9 * *pfVar7;
        uVar6 = uVar6 - 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar6 != 0);
    }
    for (; lVar5 < (long)param_3; lVar5 = lVar5 + 1) {
      fVar9 = fVar9 * param_1[lVar5];
    }
  }
  return fVar9;
}



/* Entry: 109c5a8fc; end: 109c5a967;  */

void FUN_109c5a8fc(long *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar4;
  long lVar3;
  
  if (0 < param_3) {
    lVar4 = *param_1;
    lVar1 = param_1[1];
    do {
      if (lVar1 == 0) {
        uVar2 = 0;
      }
      else {
        lVar3 = lVar4;
        func_0x000109c5ab78(lVar4,lVar4,lVar1);
        uVar2 = (undefined4)lVar3;
      }
      *param_2 = uVar2;
      lVar4 = lVar4 + lVar1 * 4;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109c5a968; end: 109c5acf7;  */

void FUN_109c5a968(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar11 = *(ulong *)param_1[3];
  uVar2 = ((ulong *)param_1[3])[1];
  uVar8 = (ulong)-((uint)uVar11 >> 2) & 3;
  if ((long)uVar2 <= (long)uVar8) {
    uVar8 = uVar2;
  }
  uVar1 = uVar2;
  if ((uVar11 & 3) == 0) {
    uVar1 = uVar8;
  }
  uVar11 = uVar2 - uVar1;
  uVar8 = uVar11 + 3;
  if ((long)uVar1 <= (long)uVar2) {
    uVar8 = uVar11;
  }
  if (0 < (long)uVar1) {
    uVar10 = 0;
    plVar13 = (long *)param_1[1];
    lVar12 = *(long *)*param_1;
    lVar14 = *plVar13;
    lVar16 = plVar13[2];
    lVar9 = lVar14;
    do {
      if (lVar16 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar14 + uVar10 * 4);
        if (1 < lVar16) {
          piVar4 = (int *)(lVar9 + plVar13[1] * 4);
          lVar7 = lVar16 + -1;
          do {
            iVar6 = *piVar4 + iVar6;
            piVar4 = piVar4 + plVar13[1];
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      *(int *)(lVar12 + uVar10 * 4) = iVar6;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 4;
    } while (uVar10 != uVar1);
  }
  uVar10 = (uVar8 & 0xfffffffffffffffc) + uVar1;
  if (3 < (long)uVar11) {
    lVar9 = uVar1 << 2;
    uVar11 = uVar1;
    do {
      plVar13 = (long *)param_1[1];
      lVar12 = plVar13[2];
      if (lVar12 == 0) {
        uVar18 = 0;
        uVar19 = 0;
      }
      else {
        lVar14 = *plVar13;
        lVar16 = plVar13[1];
        puVar5 = (undefined8 *)(lVar14 + uVar11 * 4);
        uVar19 = puVar5[1];
        uVar18 = *puVar5;
        if (lVar12 < 5) {
          lVar7 = 1;
        }
        else {
          uVar17 = lVar12 - 1U & 0xfffffffffffffffc;
          puVar5 = (undefined8 *)(lVar14 + lVar9);
          lVar7 = 1;
          do {
            puVar3 = (undefined8 *)((long)puVar5 + lVar16 * 4);
            uVar21 = puVar3[1];
            uVar20 = *puVar3;
            uVar23 = (puVar5 + lVar16)[1];
            uVar22 = puVar5[lVar16];
            puVar3 = (undefined8 *)((long)puVar5 + lVar16 * 0xc);
            uVar25 = puVar3[1];
            uVar24 = *puVar3;
            puVar5 = puVar5 + lVar16 * 2;
            uVar18 = CONCAT44((int)((ulong)uVar20 >> 0x20) + (int)((ulong)uVar18 >> 0x20) +
                              (int)((ulong)uVar22 >> 0x20) + (int)((ulong)uVar24 >> 0x20) +
                              (int)((ulong)*puVar5 >> 0x20),
                              (int)uVar20 + (int)uVar18 + (int)uVar22 + (int)uVar24 + (int)*puVar5);
            uVar19 = CONCAT44((int)((ulong)uVar21 >> 0x20) + (int)((ulong)uVar19 >> 0x20) +
                              (int)((ulong)uVar23 >> 0x20) + (int)((ulong)uVar25 >> 0x20) +
                              (int)((ulong)puVar5[1] >> 0x20),
                              (int)uVar21 + (int)uVar19 + (int)uVar23 + (int)uVar25 + (int)puVar5[1]
                             );
            lVar7 = lVar7 + 4;
          } while (lVar7 < (long)uVar17);
          lVar7 = uVar17 + 1;
        }
        lVar15 = lVar12 - lVar7;
        if (lVar15 != 0 && lVar7 <= lVar12) {
          lVar14 = lVar14 + lVar7 * lVar16 * 4;
          do {
            uVar21 = ((undefined8 *)(lVar14 + lVar9))[1];
            uVar20 = *(undefined8 *)(lVar14 + lVar9);
            uVar18 = CONCAT44((int)((ulong)uVar20 >> 0x20) + (int)((ulong)uVar18 >> 0x20),
                              (int)uVar20 + (int)uVar18);
            uVar19 = CONCAT44((int)((ulong)uVar21 >> 0x20) + (int)((ulong)uVar19 >> 0x20),
                              (int)uVar21 + (int)uVar19);
            lVar14 = lVar14 + lVar16 * 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      puVar5 = (undefined8 *)(*(long *)*param_1 + uVar11 * 4);
      puVar5[1] = uVar19;
      *puVar5 = uVar18;
      uVar11 = uVar11 + 4;
      lVar9 = lVar9 + 0x10;
    } while ((long)uVar11 < (long)uVar10);
  }
  if ((long)uVar10 < (long)uVar2) {
    plVar13 = (long *)param_1[1];
    lVar12 = *(long *)*param_1;
    lVar14 = *plVar13;
    lVar16 = plVar13[2];
    lVar9 = lVar14 + ((long)uVar8 >> 2) * 0x10 + uVar1 * 4;
    do {
      if (lVar16 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar14 + uVar10 * 4);
        if (1 < lVar16) {
          piVar4 = (int *)(lVar9 + plVar13[1] * 4);
          lVar7 = lVar16 + -1;
          do {
            iVar6 = *piVar4 + iVar6;
            piVar4 = piVar4 + plVar13[1];
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      *(int *)(lVar12 + uVar10 * 4) = iVar6;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 4;
    } while (uVar10 != uVar2);
  }
  return;
}



/* Entry: 109c5acf8; end: 109c5ad67;  */

void FUN_109c5acf8(long *param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar5;
  long lVar4;
  
  if (0 < param_3) {
    lVar5 = *param_1;
    lVar1 = param_1[1];
    do {
      if (lVar1 == 0) {
        iVar3 = 0;
      }
      else {
        lVar4 = lVar5;
        func_0x000109c5ab78(lVar5,lVar5,lVar1);
        iVar3 = (int)lVar4;
      }
      iVar2 = 0;
      if ((int)lVar1 != 0) {
        iVar2 = iVar3 / (int)lVar1;
      }
      *param_2 = iVar2;
      lVar5 = lVar5 + lVar1 * 4;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 109c5ad68; end: 109c5aef7;  */

uint * FUN_109c5ad68(uint *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  uint *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  ulong uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (ulong)-((uint)param_2 >> 2) & 3;
  if ((long)param_3 <= (long)uVar15) {
    uVar15 = param_3;
  }
  uVar18 = param_3;
  if ((param_2 & 3) == 0) {
    uVar18 = uVar15;
  }
  uVar26 = param_3 - uVar18;
  uVar15 = uVar26 + 3;
  uVar10 = uVar26 + 7;
  if ((long)uVar18 <= (long)param_3) {
    uVar15 = uVar26;
    uVar10 = uVar26;
  }
  if (uVar26 + 3 < 7) {
    puVar16 = (uint *)(ulong)*param_1;
    if (1 < (long)param_3) {
      lVar17 = param_3 - 1;
      puVar19 = param_1;
      do {
        puVar19 = puVar19 + 1;
        uVar8 = (uint)puVar16;
        if ((int)(uint)puVar16 <= (int)*puVar19) {
          uVar8 = *puVar19;
        }
        puVar16 = (uint *)(ulong)uVar8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  else {
    lVar17 = (uVar15 & 0xfffffffffffffffc) + uVar18;
    pauVar11 = (undefined1 (*) [16])(param_1 + uVar18);
    auVar29 = *pauVar11;
    if (7 < (long)uVar26) {
      lVar22 = (uVar10 & 0xfffffffffffffff8) + uVar18;
      auVar30 = pauVar11[1];
      if (0xf < uVar26) {
        lVar24 = uVar18 + 8;
        pauVar11 = pauVar11 + 3;
        do {
          auVar29 = NEON_smax(auVar29,pauVar11[-1],4);
          auVar30 = NEON_smax(auVar30,*pauVar11,4);
          lVar24 = lVar24 + 8;
          pauVar11 = pauVar11 + 2;
        } while (lVar24 < lVar22);
      }
      auVar29 = NEON_smax(auVar29,auVar30,4);
      if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar15 & 0xfffffffffffffffc)) {
        auVar29 = NEON_smax(auVar29,*(undefined1 (*) [16])(param_1 + lVar22),4);
      }
    }
    uStack_28 = auVar29._8_8_;
    uStack_30 = auVar29._0_8_;
    uVar15 = 2;
    do {
      uVar26 = 0;
      do {
        iVar9 = *(int *)((long)&uStack_30 + uVar26 * 4);
        iVar4 = *(int *)((long)&uStack_30 + uVar26 * 4 + uVar15 * 4);
        if (iVar9 <= iVar4) {
          iVar9 = iVar4;
        }
        *(int *)((long)&uStack_30 + uVar26 * 4) = iVar9;
        uVar26 = uVar26 + 1;
      } while (uVar15 != uVar26);
      bVar6 = 1 < uVar15;
      uVar15 = uVar15 >> 1;
    } while (bVar6);
    puVar16 = (uint *)(uStack_30 & 0xffffffff);
    puVar19 = param_1;
    if (0 < (long)uVar18) {
      do {
        uVar8 = (uint)puVar16;
        if ((int)(uint)puVar16 <= (int)*puVar19) {
          uVar8 = *puVar19;
        }
        puVar16 = (uint *)(ulong)uVar8;
        uVar18 = uVar18 - 1;
        puVar19 = puVar19 + 1;
      } while (uVar18 != 0);
    }
    for (; lVar17 < (long)param_3; lVar17 = lVar17 + 1) {
      uVar8 = (uint)puVar16;
      if ((int)(uint)puVar16 <= (int)param_1[lVar17]) {
        uVar8 = param_1[lVar17];
      }
      puVar16 = (uint *)(ulong)uVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar16;
  }
  ___stack_chk_fail();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < (long)param_3) {
    uVar15 = 0;
    puVar2 = *(uint **)param_1;
    uVar18 = *(ulong *)(param_1 + 2);
    puVar19 = puVar2 + 0xc;
    puVar16 = puVar2 + 8;
    puVar23 = puVar2;
    do {
      param_1 = puVar2 + uVar15 * uVar18;
      uVar26 = uVar18;
      if ((((ulong)puVar2 & 3) == 0) &&
         (uVar26 = (ulong)-((uint)param_1 >> 2) & 3, (long)uVar18 <= (long)uVar26)) {
        uVar26 = uVar18;
      }
      uVar20 = uVar18 - uVar26;
      uVar10 = uVar20 + 3;
      uVar7 = uVar20 + 7;
      if ((long)uVar26 <= (long)uVar18) {
        uVar10 = uVar20;
        uVar7 = uVar20;
      }
      if (uVar20 + 3 < 7) {
        uVar8 = *param_1;
        if (1 < (long)uVar18) {
          uVar26 = 1;
          do {
            uVar3 = puVar23[uVar26];
            param_1 = (uint *)(ulong)uVar3;
            if ((int)uVar8 <= (int)uVar3) {
              uVar8 = uVar3;
            }
            uVar26 = uVar26 + 1;
          } while (uVar18 != uVar26);
        }
      }
      else {
        auVar29 = *(undefined1 (*) [16])(param_1 + uVar26);
        if (7 < (long)uVar20) {
          lVar17 = (uVar7 & 0xfffffffffffffff8) + uVar26;
          auVar30 = ((undefined1 (*) [16])(param_1 + uVar26))[1];
          if (0xf < uVar20) {
            lVar22 = uVar26 + 8;
            pauVar11 = (undefined1 (*) [16])(puVar19 + uVar26);
            pauVar28 = (undefined1 (*) [16])(puVar16 + uVar26);
            do {
              auVar29 = NEON_smax(auVar29,*pauVar28,4);
              auVar30 = NEON_smax(auVar30,*pauVar11,4);
              lVar22 = lVar22 + 8;
              pauVar11 = pauVar11 + 2;
              pauVar28 = pauVar28 + 2;
            } while (lVar22 < lVar17);
          }
          auVar29 = NEON_smax(auVar29,auVar30,4);
          if ((long)(uVar7 & 0xfffffffffffffff8) < (long)(uVar10 & 0xfffffffffffffffc)) {
            auVar29 = NEON_smax(auVar29,*(undefined1 (*) [16])(param_1 + lVar17),4);
          }
        }
        param_1 = (uint *)((uVar10 & 0xfffffffffffffffc) + uVar26);
        uStack_68 = auVar29._8_8_;
        uStack_70 = auVar29._0_8_;
        uVar10 = 2;
        do {
          uVar20 = 0;
          do {
            iVar9 = *(int *)((long)&uStack_70 + uVar20 * 4);
            iVar4 = *(int *)((long)&uStack_70 + uVar20 * 4 + uVar10 * 4);
            if (iVar9 <= iVar4) {
              iVar9 = iVar4;
            }
            *(int *)((long)&uStack_70 + uVar20 * 4) = iVar9;
            uVar20 = uVar20 + 1;
          } while (uVar10 != uVar20);
          bVar6 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar6);
        puVar12 = puVar23;
        uVar8 = (uint)uStack_70;
        if (0 < (long)uVar26) {
          do {
            if ((int)uVar8 <= (int)*puVar12) {
              uVar8 = *puVar12;
            }
            uVar26 = uVar26 - 1;
            puVar12 = puVar12 + 1;
          } while (uVar26 != 0);
        }
        for (; (long)param_1 < (long)uVar18; param_1 = (uint *)((long)param_1 + 1)) {
          if ((int)uVar8 <= (int)puVar23[(long)param_1]) {
            uVar8 = puVar23[(long)param_1];
          }
        }
      }
      *(uint *)(param_2 + uVar15 * 4) = uVar8;
      uVar15 = uVar15 + 1;
      puVar19 = puVar19 + uVar18;
      puVar16 = puVar16 + uVar18;
      puVar23 = puVar23 + uVar18;
    } while (uVar15 != param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar18 = **(ulong **)(param_1 + 6);
  uVar26 = (*(ulong **)(param_1 + 6))[1];
  uVar15 = (ulong)-((uint)uVar18 >> 2) & 3;
  if ((long)uVar26 <= (long)uVar15) {
    uVar15 = uVar26;
  }
  uVar10 = uVar26;
  if ((uVar18 & 3) == 0) {
    uVar10 = uVar15;
  }
  uVar18 = uVar26 - uVar10;
  uVar15 = uVar18 + 3;
  if ((long)uVar10 <= (long)uVar26) {
    uVar15 = uVar18;
  }
  if (0 < (long)uVar10) {
    uVar20 = 0;
    plVar21 = *(long **)(param_1 + 2);
    lVar22 = **(long **)param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar17 = lVar24;
    do {
      iVar9 = *(int *)(lVar24 + uVar20 * 4);
      if (1 < lVar27) {
        piVar13 = (int *)(lVar17 + plVar21[1] * 4);
        lVar14 = lVar27 + -1;
        do {
          if (iVar9 <= *piVar13) {
            iVar9 = *piVar13;
          }
          piVar13 = piVar13 + plVar21[1];
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      *(int *)(lVar22 + uVar20 * 4) = iVar9;
      uVar20 = uVar20 + 1;
      lVar17 = lVar17 + 4;
    } while (uVar20 != uVar10);
  }
  uVar20 = (uVar15 & 0xfffffffffffffffc) + uVar10;
  if (3 < (long)uVar18) {
    lVar17 = uVar10 << 2;
    uVar18 = uVar10;
    do {
      plVar21 = *(long **)(param_1 + 2);
      lVar22 = plVar21[2];
      if (lVar22 == 0) {
        auVar29 = ZEXT216(0);
      }
      else {
        lVar24 = *plVar21;
        lVar27 = plVar21[1];
        auVar29 = *(undefined1 (*) [16])(lVar24 + uVar18 * 4);
        if (lVar22 < 5) {
          lVar14 = 1;
        }
        else {
          uVar7 = lVar22 - 1U & 0xfffffffffffffffc;
          pauVar11 = (undefined1 (*) [16])(lVar24 + lVar17);
          lVar14 = 1;
          do {
            auVar30 = NEON_smax(*(undefined1 (*) [16])(*pauVar11 + lVar27 * 4),
                                *(undefined1 (*) [16])(*pauVar11 + lVar27 * 8),4);
            puVar5 = *pauVar11;
            pauVar11 = pauVar11 + lVar27;
            auVar31 = NEON_smax(*(undefined1 (*) [16])(puVar5 + lVar27 * 0xc),*pauVar11,4);
            auVar30 = NEON_smax(auVar30,auVar31,4);
            auVar29 = NEON_smax(auVar29,auVar30,4);
            lVar14 = lVar14 + 4;
          } while (lVar14 < (long)uVar7);
          lVar14 = uVar7 + 1;
        }
        lVar25 = lVar22 - lVar14;
        if (lVar25 != 0 && lVar14 <= lVar22) {
          lVar24 = lVar24 + lVar14 * lVar27 * 4;
          do {
            auVar29 = NEON_smax(auVar29,*(undefined1 (*) [16])(lVar24 + lVar17),4);
            lVar24 = lVar24 + lVar27 * 4;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
      }
      puVar1 = (undefined8 *)(**(long **)param_1 + uVar18 * 4);
      puVar1[1] = auVar29._8_8_;
      *puVar1 = auVar29._0_8_;
      uVar18 = uVar18 + 4;
      lVar17 = lVar17 + 0x10;
    } while ((long)uVar18 < (long)uVar20);
  }
  if ((long)uVar20 < (long)uVar26) {
    plVar21 = *(long **)(param_1 + 2);
    lVar22 = **(long **)param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar17 = lVar24 + ((long)uVar15 >> 2) * 0x10 + uVar10 * 4;
    do {
      uVar8 = *(uint *)(lVar24 + uVar20 * 4);
      if (1 < lVar27) {
        param_1 = (uint *)(lVar17 + plVar21[1] * 4);
        lVar14 = lVar27 + -1;
        do {
          if ((int)uVar8 <= (int)*param_1) {
            uVar8 = *param_1;
          }
          param_1 = param_1 + plVar21[1];
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      *(uint *)(lVar22 + uVar20 * 4) = uVar8;
      uVar20 = uVar20 + 1;
      lVar17 = lVar17 + 4;
    } while (uVar20 != uVar26);
  }
  return param_1;
}



/* Entry: 109c5aef8; end: 109c5b0d7;  */

void FUN_109c5aef8(ulong *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < param_3) {
    lVar16 = 0;
    puVar2 = (uint *)*param_1;
    uVar17 = param_1[1];
    puVar18 = puVar2 + 0xc;
    puVar20 = puVar2 + 8;
    puVar23 = puVar2;
    do {
      param_1 = (ulong *)(puVar2 + lVar16 * uVar17);
      uVar26 = uVar17;
      if ((((ulong)puVar2 & 3) == 0) &&
         (uVar26 = (ulong)-((uint)param_1 >> 2) & 3, (long)uVar17 <= (long)uVar26)) {
        uVar26 = uVar17;
      }
      uVar13 = uVar17 - uVar26;
      uVar11 = uVar13 + 3;
      uVar19 = uVar13 + 7;
      if ((long)uVar26 <= (long)uVar17) {
        uVar11 = uVar13;
        uVar19 = uVar13;
      }
      if (uVar13 + 3 < 7) {
        uVar9 = (uint)*param_1;
        if (1 < (long)uVar17) {
          uVar26 = 1;
          do {
            uVar3 = puVar23[uVar26];
            param_1 = (ulong *)(ulong)uVar3;
            if ((int)uVar9 <= (int)uVar3) {
              uVar9 = uVar3;
            }
            uVar26 = uVar26 + 1;
          } while (uVar17 != uVar26);
        }
      }
      else {
        pauVar12 = (undefined1 (*) [16])((long)param_1 + uVar26 * 4);
        auVar29 = *pauVar12;
        if (7 < (long)uVar13) {
          lVar22 = (uVar19 & 0xfffffffffffffff8) + uVar26;
          auVar30 = pauVar12[1];
          if (0xf < uVar13) {
            lVar24 = uVar26 + 8;
            pauVar12 = (undefined1 (*) [16])(puVar18 + uVar26);
            pauVar28 = (undefined1 (*) [16])(puVar20 + uVar26);
            do {
              auVar29 = NEON_smax(auVar29,*pauVar28,4);
              auVar30 = NEON_smax(auVar30,*pauVar12,4);
              lVar24 = lVar24 + 8;
              pauVar12 = pauVar12 + 2;
              pauVar28 = pauVar28 + 2;
            } while (lVar24 < lVar22);
          }
          auVar29 = NEON_smax(auVar29,auVar30,4);
          if ((long)(uVar19 & 0xfffffffffffffff8) < (long)(uVar11 & 0xfffffffffffffffc)) {
            auVar29 = NEON_smax(auVar29,*(undefined1 (*) [16])((long)param_1 + lVar22 * 4),4);
          }
        }
        param_1 = (ulong *)((uVar11 & 0xfffffffffffffffc) + uVar26);
        uStack_38 = auVar29._8_8_;
        uStack_40 = auVar29._0_8_;
        uVar11 = 2;
        do {
          uVar13 = 0;
          do {
            iVar10 = *(int *)((long)&uStack_40 + uVar13 * 4);
            iVar4 = *(int *)((long)&uStack_40 + uVar13 * 4 + uVar11 * 4);
            if (iVar10 <= iVar4) {
              iVar10 = iVar4;
            }
            *(int *)((long)&uStack_40 + uVar13 * 4) = iVar10;
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
          bVar6 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar6);
        puVar14 = puVar23;
        uVar9 = (uint)uStack_40;
        if (0 < (long)uVar26) {
          do {
            if ((int)uVar9 <= (int)*puVar14) {
              uVar9 = *puVar14;
            }
            uVar26 = uVar26 - 1;
            puVar14 = puVar14 + 1;
          } while (uVar26 != 0);
        }
        for (; (long)param_1 < (long)uVar17; param_1 = (ulong *)((long)param_1 + 1)) {
          if ((int)uVar9 <= (int)puVar23[(long)param_1]) {
            uVar9 = puVar23[(long)param_1];
          }
        }
      }
      *(uint *)(param_2 + lVar16 * 4) = uVar9;
      lVar16 = lVar16 + 1;
      puVar18 = puVar18 + uVar17;
      puVar20 = puVar20 + uVar17;
      puVar23 = puVar23 + uVar17;
    } while (lVar16 != param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar26 = *(ulong *)param_1[3];
  uVar11 = ((ulong *)param_1[3])[1];
  uVar17 = (ulong)-((uint)uVar26 >> 2) & 3;
  if ((long)uVar11 <= (long)uVar17) {
    uVar17 = uVar11;
  }
  uVar13 = uVar11;
  if ((uVar26 & 3) == 0) {
    uVar13 = uVar17;
  }
  uVar26 = uVar11 - uVar13;
  uVar17 = uVar26 + 3;
  if ((long)uVar13 <= (long)uVar11) {
    uVar17 = uVar26;
  }
  if (0 < (long)uVar13) {
    uVar19 = 0;
    plVar21 = (long *)param_1[1];
    lVar22 = *(long *)*param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar16 = lVar24;
    do {
      iVar10 = *(int *)(lVar24 + uVar19 * 4);
      if (1 < lVar27) {
        piVar7 = (int *)(lVar16 + plVar21[1] * 4);
        lVar15 = lVar27 + -1;
        do {
          if (iVar10 <= *piVar7) {
            iVar10 = *piVar7;
          }
          piVar7 = piVar7 + plVar21[1];
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      *(int *)(lVar22 + uVar19 * 4) = iVar10;
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar19 != uVar13);
  }
  uVar19 = (uVar17 & 0xfffffffffffffffc) + uVar13;
  if (3 < (long)uVar26) {
    lVar16 = uVar13 << 2;
    uVar26 = uVar13;
    do {
      plVar21 = (long *)param_1[1];
      lVar22 = plVar21[2];
      if (lVar22 == 0) {
        auVar29 = ZEXT216(0);
      }
      else {
        lVar24 = *plVar21;
        lVar27 = plVar21[1];
        auVar29 = *(undefined1 (*) [16])(lVar24 + uVar26 * 4);
        if (lVar22 < 5) {
          lVar15 = 1;
        }
        else {
          uVar8 = lVar22 - 1U & 0xfffffffffffffffc;
          pauVar12 = (undefined1 (*) [16])(lVar24 + lVar16);
          lVar15 = 1;
          do {
            auVar30 = NEON_smax(*(undefined1 (*) [16])(*pauVar12 + lVar27 * 4),
                                *(undefined1 (*) [16])(*pauVar12 + lVar27 * 8),4);
            puVar5 = *pauVar12;
            pauVar12 = pauVar12 + lVar27;
            auVar31 = NEON_smax(*(undefined1 (*) [16])(puVar5 + lVar27 * 0xc),*pauVar12,4);
            auVar30 = NEON_smax(auVar30,auVar31,4);
            auVar29 = NEON_smax(auVar29,auVar30,4);
            lVar15 = lVar15 + 4;
          } while (lVar15 < (long)uVar8);
          lVar15 = uVar8 + 1;
        }
        lVar25 = lVar22 - lVar15;
        if (lVar25 != 0 && lVar15 <= lVar22) {
          lVar24 = lVar24 + lVar15 * lVar27 * 4;
          do {
            auVar29 = NEON_smax(auVar29,*(undefined1 (*) [16])(lVar24 + lVar16),4);
            lVar24 = lVar24 + lVar27 * 4;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
      }
      puVar1 = (undefined8 *)(*(long *)*param_1 + uVar26 * 4);
      puVar1[1] = auVar29._8_8_;
      *puVar1 = auVar29._0_8_;
      uVar26 = uVar26 + 4;
      lVar16 = lVar16 + 0x10;
    } while ((long)uVar26 < (long)uVar19);
  }
  if ((long)uVar19 < (long)uVar11) {
    plVar21 = (long *)param_1[1];
    lVar22 = *(long *)*param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar16 = lVar24 + ((long)uVar17 >> 2) * 0x10 + uVar13 * 4;
    do {
      iVar10 = *(int *)(lVar24 + uVar19 * 4);
      if (1 < lVar27) {
        piVar7 = (int *)(lVar16 + plVar21[1] * 4);
        lVar15 = lVar27 + -1;
        do {
          if (iVar10 <= *piVar7) {
            iVar10 = *piVar7;
          }
          piVar7 = piVar7 + plVar21[1];
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      *(int *)(lVar22 + uVar19 * 4) = iVar10;
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar19 != uVar11);
  }
  return;
}



/* Entry: 109c5b0d8; end: 109c5b2d3;  */

void FUN_109c5b0d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar13 = *(ulong *)param_1[3];
  uVar3 = ((ulong *)param_1[3])[1];
  uVar10 = (ulong)-((uint)uVar13 >> 2) & 3;
  if ((long)uVar3 <= (long)uVar10) {
    uVar10 = uVar3;
  }
  uVar2 = uVar3;
  if ((uVar13 & 3) == 0) {
    uVar2 = uVar10;
  }
  uVar13 = uVar3 - uVar2;
  uVar10 = uVar13 + 3;
  if ((long)uVar2 <= (long)uVar3) {
    uVar10 = uVar13;
  }
  if (0 < (long)uVar2) {
    uVar12 = 0;
    plVar14 = (long *)param_1[1];
    lVar15 = *(long *)*param_1;
    lVar16 = *plVar14;
    lVar18 = plVar14[2];
    lVar11 = lVar16;
    do {
      iVar7 = *(int *)(lVar16 + uVar12 * 4);
      if (1 < lVar18) {
        piVar5 = (int *)(lVar11 + plVar14[1] * 4);
        lVar9 = lVar18 + -1;
        do {
          if (iVar7 <= *piVar5) {
            iVar7 = *piVar5;
          }
          piVar5 = piVar5 + plVar14[1];
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      *(int *)(lVar15 + uVar12 * 4) = iVar7;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 4;
    } while (uVar12 != uVar2);
  }
  uVar12 = (uVar10 & 0xfffffffffffffffc) + uVar2;
  if (3 < (long)uVar13) {
    lVar11 = uVar2 << 2;
    uVar13 = uVar2;
    do {
      plVar14 = (long *)param_1[1];
      lVar15 = plVar14[2];
      if (lVar15 == 0) {
        auVar19 = ZEXT216(0);
      }
      else {
        lVar16 = *plVar14;
        lVar18 = plVar14[1];
        auVar19 = *(undefined1 (*) [16])(lVar16 + uVar13 * 4);
        if (lVar15 < 5) {
          lVar9 = 1;
        }
        else {
          uVar6 = lVar15 - 1U & 0xfffffffffffffffc;
          pauVar8 = (undefined1 (*) [16])(lVar16 + lVar11);
          lVar9 = 1;
          do {
            auVar20 = NEON_smax(*(undefined1 (*) [16])(*pauVar8 + lVar18 * 4),
                                *(undefined1 (*) [16])(*pauVar8 + lVar18 * 8),4);
            puVar4 = *pauVar8;
            pauVar8 = pauVar8 + lVar18;
            auVar21 = NEON_smax(*(undefined1 (*) [16])(puVar4 + lVar18 * 0xc),*pauVar8,4);
            auVar20 = NEON_smax(auVar20,auVar21,4);
            auVar19 = NEON_smax(auVar19,auVar20,4);
            lVar9 = lVar9 + 4;
          } while (lVar9 < (long)uVar6);
          lVar9 = uVar6 + 1;
        }
        lVar17 = lVar15 - lVar9;
        if (lVar17 != 0 && lVar9 <= lVar15) {
          lVar16 = lVar16 + lVar9 * lVar18 * 4;
          do {
            auVar19 = NEON_smax(auVar19,*(undefined1 (*) [16])(lVar16 + lVar11),4);
            lVar16 = lVar16 + lVar18 * 4;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
      }
      puVar1 = (undefined8 *)(*(long *)*param_1 + uVar13 * 4);
      puVar1[1] = auVar19._8_8_;
      *puVar1 = auVar19._0_8_;
      uVar13 = uVar13 + 4;
      lVar11 = lVar11 + 0x10;
    } while ((long)uVar13 < (long)uVar12);
  }
  if ((long)uVar12 < (long)uVar3) {
    plVar14 = (long *)param_1[1];
    lVar15 = *(long *)*param_1;
    lVar16 = *plVar14;
    lVar18 = plVar14[2];
    lVar11 = lVar16 + ((long)uVar10 >> 2) * 0x10 + uVar2 * 4;
    do {
      iVar7 = *(int *)(lVar16 + uVar12 * 4);
      if (1 < lVar18) {
        piVar5 = (int *)(lVar11 + plVar14[1] * 4);
        lVar9 = lVar18 + -1;
        do {
          if (iVar7 <= *piVar5) {
            iVar7 = *piVar5;
          }
          piVar5 = piVar5 + plVar14[1];
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      *(int *)(lVar15 + uVar12 * 4) = iVar7;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 4;
    } while (uVar12 != uVar3);
  }
  return;
}



/* Entry: 109c5b2d4; end: 109c5b463;  */

uint * FUN_109c5b2d4(uint *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  uint *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  ulong uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (ulong)-((uint)param_2 >> 2) & 3;
  if ((long)param_3 <= (long)uVar15) {
    uVar15 = param_3;
  }
  uVar18 = param_3;
  if ((param_2 & 3) == 0) {
    uVar18 = uVar15;
  }
  uVar26 = param_3 - uVar18;
  uVar15 = uVar26 + 3;
  uVar10 = uVar26 + 7;
  if ((long)uVar18 <= (long)param_3) {
    uVar15 = uVar26;
    uVar10 = uVar26;
  }
  if (uVar26 + 3 < 7) {
    puVar16 = (uint *)(ulong)*param_1;
    if (1 < (long)param_3) {
      lVar17 = param_3 - 1;
      puVar19 = param_1;
      do {
        puVar19 = puVar19 + 1;
        uVar7 = *puVar19;
        if ((int)(uint)puVar16 <= (int)*puVar19) {
          uVar7 = (uint)puVar16;
        }
        puVar16 = (uint *)(ulong)uVar7;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  else {
    lVar17 = (uVar15 & 0xfffffffffffffffc) + uVar18;
    pauVar11 = (undefined1 (*) [16])(param_1 + uVar18);
    auVar29 = *pauVar11;
    if (7 < (long)uVar26) {
      lVar22 = (uVar10 & 0xfffffffffffffff8) + uVar18;
      auVar30 = pauVar11[1];
      if (0xf < uVar26) {
        lVar24 = uVar18 + 8;
        pauVar11 = pauVar11 + 3;
        do {
          auVar29 = NEON_smin(auVar29,pauVar11[-1],4);
          auVar30 = NEON_smin(auVar30,*pauVar11,4);
          lVar24 = lVar24 + 8;
          pauVar11 = pauVar11 + 2;
        } while (lVar24 < lVar22);
      }
      auVar29 = NEON_smin(auVar29,auVar30,4);
      if ((long)(uVar10 & 0xfffffffffffffff8) < (long)(uVar15 & 0xfffffffffffffffc)) {
        auVar29 = NEON_smin(auVar29,*(undefined1 (*) [16])(param_1 + lVar22),4);
      }
    }
    uStack_28 = auVar29._8_8_;
    uStack_30 = auVar29._0_8_;
    uVar15 = 2;
    do {
      uVar26 = 0;
      do {
        iVar9 = *(int *)((long)&uStack_30 + uVar26 * 4 + uVar15 * 4);
        iVar8 = *(int *)((long)&uStack_30 + uVar26 * 4);
        if (iVar8 <= iVar9) {
          iVar9 = iVar8;
        }
        *(int *)((long)&uStack_30 + uVar26 * 4) = iVar9;
        uVar26 = uVar26 + 1;
      } while (uVar15 != uVar26);
      bVar4 = 1 < uVar15;
      uVar15 = uVar15 >> 1;
    } while (bVar4);
    puVar16 = (uint *)(uStack_30 & 0xffffffff);
    puVar19 = param_1;
    if (0 < (long)uVar18) {
      do {
        uVar7 = *puVar19;
        if ((int)(uint)puVar16 <= (int)*puVar19) {
          uVar7 = (uint)puVar16;
        }
        puVar16 = (uint *)(ulong)uVar7;
        uVar18 = uVar18 - 1;
        puVar19 = puVar19 + 1;
      } while (uVar18 != 0);
    }
    for (; lVar17 < (long)param_3; lVar17 = lVar17 + 1) {
      uVar7 = param_1[lVar17];
      if ((int)(uint)puVar16 <= (int)param_1[lVar17]) {
        uVar7 = (uint)puVar16;
      }
      puVar16 = (uint *)(ulong)uVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar16;
  }
  ___stack_chk_fail();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < (long)param_3) {
    uVar15 = 0;
    puVar2 = *(uint **)param_1;
    uVar18 = *(ulong *)(param_1 + 2);
    puVar19 = puVar2 + 0xc;
    puVar16 = puVar2 + 8;
    puVar23 = puVar2;
    do {
      param_1 = puVar2 + uVar15 * uVar18;
      uVar26 = uVar18;
      if ((((ulong)puVar2 & 3) == 0) &&
         (uVar26 = (ulong)-((uint)param_1 >> 2) & 3, (long)uVar18 <= (long)uVar26)) {
        uVar26 = uVar18;
      }
      uVar20 = uVar18 - uVar26;
      uVar10 = uVar20 + 3;
      uVar5 = uVar20 + 7;
      if ((long)uVar26 <= (long)uVar18) {
        uVar10 = uVar20;
        uVar5 = uVar20;
      }
      if (uVar20 + 3 < 7) {
        uVar7 = *param_1;
        if (1 < (long)uVar18) {
          uVar26 = 1;
          uVar6 = uVar7;
          do {
            uVar7 = puVar23[uVar26];
            param_1 = (uint *)(ulong)uVar7;
            if ((int)uVar6 <= (int)uVar7) {
              uVar7 = uVar6;
            }
            uVar26 = uVar26 + 1;
            uVar6 = uVar7;
          } while (uVar18 != uVar26);
        }
      }
      else {
        auVar29 = *(undefined1 (*) [16])(param_1 + uVar26);
        if (7 < (long)uVar20) {
          lVar17 = (uVar5 & 0xfffffffffffffff8) + uVar26;
          auVar30 = ((undefined1 (*) [16])(param_1 + uVar26))[1];
          if (0xf < uVar20) {
            lVar22 = uVar26 + 8;
            pauVar11 = (undefined1 (*) [16])(puVar19 + uVar26);
            pauVar28 = (undefined1 (*) [16])(puVar16 + uVar26);
            do {
              auVar29 = NEON_smin(auVar29,*pauVar28,4);
              auVar30 = NEON_smin(auVar30,*pauVar11,4);
              lVar22 = lVar22 + 8;
              pauVar11 = pauVar11 + 2;
              pauVar28 = pauVar28 + 2;
            } while (lVar22 < lVar17);
          }
          auVar29 = NEON_smin(auVar29,auVar30,4);
          if ((long)(uVar5 & 0xfffffffffffffff8) < (long)(uVar10 & 0xfffffffffffffffc)) {
            auVar29 = NEON_smin(auVar29,*(undefined1 (*) [16])(param_1 + lVar17),4);
          }
        }
        param_1 = (uint *)((uVar10 & 0xfffffffffffffffc) + uVar26);
        uStack_68 = auVar29._8_8_;
        uStack_70 = auVar29._0_8_;
        uVar10 = 2;
        do {
          uVar20 = 0;
          do {
            iVar9 = *(int *)((long)&uStack_70 + uVar20 * 4 + uVar10 * 4);
            iVar8 = *(int *)((long)&uStack_70 + uVar20 * 4);
            if (iVar8 <= iVar9) {
              iVar9 = iVar8;
            }
            *(int *)((long)&uStack_70 + uVar20 * 4) = iVar9;
            uVar20 = uVar20 + 1;
          } while (uVar10 != uVar20);
          bVar4 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar4);
        puVar12 = puVar23;
        uVar7 = (uint)uStack_70;
        uVar6 = (uint)uStack_70;
        if (0 < (long)uVar26) {
          do {
            uVar7 = *puVar12;
            if ((int)uVar6 <= (int)*puVar12) {
              uVar7 = uVar6;
            }
            uVar26 = uVar26 - 1;
            puVar12 = puVar12 + 1;
            uVar6 = uVar7;
          } while (uVar26 != 0);
        }
        for (; (long)param_1 < (long)uVar18; param_1 = (uint *)((long)param_1 + 1)) {
          uVar6 = puVar23[(long)param_1];
          if ((int)uVar7 <= (int)puVar23[(long)param_1]) {
            uVar6 = uVar7;
          }
          uVar7 = uVar6;
        }
      }
      *(uint *)(param_2 + uVar15 * 4) = uVar7;
      uVar15 = uVar15 + 1;
      puVar19 = puVar19 + uVar18;
      puVar16 = puVar16 + uVar18;
      puVar23 = puVar23 + uVar18;
    } while (uVar15 != param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar18 = **(ulong **)(param_1 + 6);
  uVar26 = (*(ulong **)(param_1 + 6))[1];
  uVar15 = (ulong)-((uint)uVar18 >> 2) & 3;
  if ((long)uVar26 <= (long)uVar15) {
    uVar15 = uVar26;
  }
  uVar10 = uVar26;
  if ((uVar18 & 3) == 0) {
    uVar10 = uVar15;
  }
  uVar18 = uVar26 - uVar10;
  uVar15 = uVar18 + 3;
  if ((long)uVar10 <= (long)uVar26) {
    uVar15 = uVar18;
  }
  if (0 < (long)uVar10) {
    uVar20 = 0;
    plVar21 = *(long **)(param_1 + 2);
    lVar22 = **(long **)param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar17 = lVar24;
    do {
      iVar9 = *(int *)(lVar24 + uVar20 * 4);
      if (1 < lVar27) {
        piVar13 = (int *)(lVar17 + plVar21[1] * 4);
        lVar14 = lVar27 + -1;
        iVar8 = iVar9;
        do {
          iVar9 = *piVar13;
          if (iVar8 <= *piVar13) {
            iVar9 = iVar8;
          }
          piVar13 = piVar13 + plVar21[1];
          lVar14 = lVar14 + -1;
          iVar8 = iVar9;
        } while (lVar14 != 0);
      }
      *(int *)(lVar22 + uVar20 * 4) = iVar9;
      uVar20 = uVar20 + 1;
      lVar17 = lVar17 + 4;
    } while (uVar20 != uVar10);
  }
  uVar20 = (uVar15 & 0xfffffffffffffffc) + uVar10;
  if (3 < (long)uVar18) {
    lVar17 = uVar10 << 2;
    uVar18 = uVar10;
    do {
      plVar21 = *(long **)(param_1 + 2);
      lVar22 = plVar21[2];
      if (lVar22 == 0) {
        auVar29 = ZEXT216(0);
      }
      else {
        lVar24 = *plVar21;
        lVar27 = plVar21[1];
        auVar29 = *(undefined1 (*) [16])(lVar24 + uVar18 * 4);
        if (lVar22 < 5) {
          lVar14 = 1;
        }
        else {
          uVar5 = lVar22 - 1U & 0xfffffffffffffffc;
          pauVar11 = (undefined1 (*) [16])(lVar24 + lVar17);
          lVar14 = 1;
          do {
            auVar30 = NEON_smin(*(undefined1 (*) [16])(*pauVar11 + lVar27 * 4),
                                *(undefined1 (*) [16])(*pauVar11 + lVar27 * 8),4);
            puVar3 = *pauVar11;
            pauVar11 = pauVar11 + lVar27;
            auVar31 = NEON_smin(*(undefined1 (*) [16])(puVar3 + lVar27 * 0xc),*pauVar11,4);
            auVar30 = NEON_smin(auVar30,auVar31,4);
            auVar29 = NEON_smin(auVar29,auVar30,4);
            lVar14 = lVar14 + 4;
          } while (lVar14 < (long)uVar5);
          lVar14 = uVar5 + 1;
        }
        lVar25 = lVar22 - lVar14;
        if (lVar25 != 0 && lVar14 <= lVar22) {
          lVar24 = lVar24 + lVar14 * lVar27 * 4;
          do {
            auVar29 = NEON_smin(auVar29,*(undefined1 (*) [16])(lVar24 + lVar17),4);
            lVar24 = lVar24 + lVar27 * 4;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
      }
      puVar1 = (undefined8 *)(**(long **)param_1 + uVar18 * 4);
      puVar1[1] = auVar29._8_8_;
      *puVar1 = auVar29._0_8_;
      uVar18 = uVar18 + 4;
      lVar17 = lVar17 + 0x10;
    } while ((long)uVar18 < (long)uVar20);
  }
  if ((long)uVar20 < (long)uVar26) {
    plVar21 = *(long **)(param_1 + 2);
    lVar22 = **(long **)param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar17 = lVar24 + ((long)uVar15 >> 2) * 0x10 + uVar10 * 4;
    do {
      uVar7 = *(uint *)(lVar24 + uVar20 * 4);
      if (1 < lVar27) {
        param_1 = (uint *)(lVar17 + plVar21[1] * 4);
        lVar14 = lVar27 + -1;
        uVar6 = uVar7;
        do {
          uVar7 = *param_1;
          if ((int)uVar6 <= (int)*param_1) {
            uVar7 = uVar6;
          }
          param_1 = param_1 + plVar21[1];
          lVar14 = lVar14 + -1;
          uVar6 = uVar7;
        } while (lVar14 != 0);
      }
      *(uint *)(lVar22 + uVar20 * 4) = uVar7;
      uVar20 = uVar20 + 1;
      lVar17 = lVar17 + 4;
    } while (uVar20 != uVar26);
  }
  return param_1;
}



/* Entry: 109c5b464; end: 109c5b643;  */

void FUN_109c5b464(ulong *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int *piVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < param_3) {
    lVar16 = 0;
    puVar2 = (uint *)*param_1;
    uVar17 = param_1[1];
    puVar18 = puVar2 + 0xc;
    puVar20 = puVar2 + 8;
    puVar23 = puVar2;
    do {
      param_1 = (ulong *)(puVar2 + lVar16 * uVar17);
      uVar26 = uVar17;
      if ((((ulong)puVar2 & 3) == 0) &&
         (uVar26 = (ulong)-((uint)param_1 >> 2) & 3, (long)uVar17 <= (long)uVar26)) {
        uVar26 = uVar17;
      }
      uVar13 = uVar17 - uVar26;
      uVar11 = uVar13 + 3;
      uVar19 = uVar13 + 7;
      if ((long)uVar26 <= (long)uVar17) {
        uVar11 = uVar13;
        uVar19 = uVar13;
      }
      if (uVar13 + 3 < 7) {
        uVar8 = (uint)*param_1;
        if (1 < (long)uVar17) {
          uVar26 = 1;
          uVar7 = uVar8;
          do {
            uVar8 = puVar23[uVar26];
            param_1 = (ulong *)(ulong)uVar8;
            if ((int)uVar7 <= (int)uVar8) {
              uVar8 = uVar7;
            }
            uVar26 = uVar26 + 1;
            uVar7 = uVar8;
          } while (uVar17 != uVar26);
        }
      }
      else {
        pauVar12 = (undefined1 (*) [16])((long)param_1 + uVar26 * 4);
        auVar29 = *pauVar12;
        if (7 < (long)uVar13) {
          lVar22 = (uVar19 & 0xfffffffffffffff8) + uVar26;
          auVar30 = pauVar12[1];
          if (0xf < uVar13) {
            lVar24 = uVar26 + 8;
            pauVar12 = (undefined1 (*) [16])(puVar18 + uVar26);
            pauVar28 = (undefined1 (*) [16])(puVar20 + uVar26);
            do {
              auVar29 = NEON_smin(auVar29,*pauVar28,4);
              auVar30 = NEON_smin(auVar30,*pauVar12,4);
              lVar24 = lVar24 + 8;
              pauVar12 = pauVar12 + 2;
              pauVar28 = pauVar28 + 2;
            } while (lVar24 < lVar22);
          }
          auVar29 = NEON_smin(auVar29,auVar30,4);
          if ((long)(uVar19 & 0xfffffffffffffff8) < (long)(uVar11 & 0xfffffffffffffffc)) {
            auVar29 = NEON_smin(auVar29,*(undefined1 (*) [16])((long)param_1 + lVar22 * 4),4);
          }
        }
        param_1 = (ulong *)((uVar11 & 0xfffffffffffffffc) + uVar26);
        uStack_38 = auVar29._8_8_;
        uStack_40 = auVar29._0_8_;
        uVar11 = 2;
        do {
          uVar13 = 0;
          do {
            iVar10 = *(int *)((long)&uStack_40 + uVar13 * 4 + uVar11 * 4);
            iVar9 = *(int *)((long)&uStack_40 + uVar13 * 4);
            if (iVar9 <= iVar10) {
              iVar10 = iVar9;
            }
            *(int *)((long)&uStack_40 + uVar13 * 4) = iVar10;
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
          bVar4 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar4);
        puVar14 = puVar23;
        uVar8 = (uint)uStack_40;
        uVar7 = (uint)uStack_40;
        if (0 < (long)uVar26) {
          do {
            uVar8 = *puVar14;
            if ((int)uVar7 <= (int)*puVar14) {
              uVar8 = uVar7;
            }
            uVar26 = uVar26 - 1;
            puVar14 = puVar14 + 1;
            uVar7 = uVar8;
          } while (uVar26 != 0);
        }
        for (; (long)param_1 < (long)uVar17; param_1 = (ulong *)((long)param_1 + 1)) {
          uVar7 = puVar23[(long)param_1];
          if ((int)uVar8 <= (int)puVar23[(long)param_1]) {
            uVar7 = uVar8;
          }
          uVar8 = uVar7;
        }
      }
      *(uint *)(param_2 + lVar16 * 4) = uVar8;
      lVar16 = lVar16 + 1;
      puVar18 = puVar18 + uVar17;
      puVar20 = puVar20 + uVar17;
      puVar23 = puVar23 + uVar17;
    } while (lVar16 != param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar26 = *(ulong *)param_1[3];
  uVar11 = ((ulong *)param_1[3])[1];
  uVar17 = (ulong)-((uint)uVar26 >> 2) & 3;
  if ((long)uVar11 <= (long)uVar17) {
    uVar17 = uVar11;
  }
  uVar13 = uVar11;
  if ((uVar26 & 3) == 0) {
    uVar13 = uVar17;
  }
  uVar26 = uVar11 - uVar13;
  uVar17 = uVar26 + 3;
  if ((long)uVar13 <= (long)uVar11) {
    uVar17 = uVar26;
  }
  if (0 < (long)uVar13) {
    uVar19 = 0;
    plVar21 = (long *)param_1[1];
    lVar22 = *(long *)*param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar16 = lVar24;
    do {
      iVar10 = *(int *)(lVar24 + uVar19 * 4);
      if (1 < lVar27) {
        piVar5 = (int *)(lVar16 + plVar21[1] * 4);
        lVar15 = lVar27 + -1;
        iVar9 = iVar10;
        do {
          iVar10 = *piVar5;
          if (iVar9 <= *piVar5) {
            iVar10 = iVar9;
          }
          piVar5 = piVar5 + plVar21[1];
          lVar15 = lVar15 + -1;
          iVar9 = iVar10;
        } while (lVar15 != 0);
      }
      *(int *)(lVar22 + uVar19 * 4) = iVar10;
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar19 != uVar13);
  }
  uVar19 = (uVar17 & 0xfffffffffffffffc) + uVar13;
  if (3 < (long)uVar26) {
    lVar16 = uVar13 << 2;
    uVar26 = uVar13;
    do {
      plVar21 = (long *)param_1[1];
      lVar22 = plVar21[2];
      if (lVar22 == 0) {
        auVar29 = ZEXT216(0);
      }
      else {
        lVar24 = *plVar21;
        lVar27 = plVar21[1];
        auVar29 = *(undefined1 (*) [16])(lVar24 + uVar26 * 4);
        if (lVar22 < 5) {
          lVar15 = 1;
        }
        else {
          uVar6 = lVar22 - 1U & 0xfffffffffffffffc;
          pauVar12 = (undefined1 (*) [16])(lVar24 + lVar16);
          lVar15 = 1;
          do {
            auVar30 = NEON_smin(*(undefined1 (*) [16])(*pauVar12 + lVar27 * 4),
                                *(undefined1 (*) [16])(*pauVar12 + lVar27 * 8),4);
            puVar3 = *pauVar12;
            pauVar12 = pauVar12 + lVar27;
            auVar31 = NEON_smin(*(undefined1 (*) [16])(puVar3 + lVar27 * 0xc),*pauVar12,4);
            auVar30 = NEON_smin(auVar30,auVar31,4);
            auVar29 = NEON_smin(auVar29,auVar30,4);
            lVar15 = lVar15 + 4;
          } while (lVar15 < (long)uVar6);
          lVar15 = uVar6 + 1;
        }
        lVar25 = lVar22 - lVar15;
        if (lVar25 != 0 && lVar15 <= lVar22) {
          lVar24 = lVar24 + lVar15 * lVar27 * 4;
          do {
            auVar29 = NEON_smin(auVar29,*(undefined1 (*) [16])(lVar24 + lVar16),4);
            lVar24 = lVar24 + lVar27 * 4;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
      }
      puVar1 = (undefined8 *)(*(long *)*param_1 + uVar26 * 4);
      puVar1[1] = auVar29._8_8_;
      *puVar1 = auVar29._0_8_;
      uVar26 = uVar26 + 4;
      lVar16 = lVar16 + 0x10;
    } while ((long)uVar26 < (long)uVar19);
  }
  if ((long)uVar19 < (long)uVar11) {
    plVar21 = (long *)param_1[1];
    lVar22 = *(long *)*param_1;
    lVar24 = *plVar21;
    lVar27 = plVar21[2];
    lVar16 = lVar24 + ((long)uVar17 >> 2) * 0x10 + uVar13 * 4;
    do {
      iVar10 = *(int *)(lVar24 + uVar19 * 4);
      if (1 < lVar27) {
        piVar5 = (int *)(lVar16 + plVar21[1] * 4);
        lVar15 = lVar27 + -1;
        iVar9 = iVar10;
        do {
          iVar10 = *piVar5;
          if (iVar9 <= *piVar5) {
            iVar10 = iVar9;
          }
          piVar5 = piVar5 + plVar21[1];
          lVar15 = lVar15 + -1;
          iVar9 = iVar10;
        } while (lVar15 != 0);
      }
      *(int *)(lVar22 + uVar19 * 4) = iVar10;
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 4;
    } while (uVar19 != uVar11);
  }
  return;
}



/* Entry: 109c5b644; end: 109c5bcc7;  */

void FUN_109c5b644(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar14 = *(ulong *)param_1[3];
  uVar3 = ((ulong *)param_1[3])[1];
  uVar11 = (ulong)-((uint)uVar14 >> 2) & 3;
  if ((long)uVar3 <= (long)uVar11) {
    uVar11 = uVar3;
  }
  uVar2 = uVar3;
  if ((uVar14 & 3) == 0) {
    uVar2 = uVar11;
  }
  uVar14 = uVar3 - uVar2;
  uVar11 = uVar14 + 3;
  if ((long)uVar2 <= (long)uVar3) {
    uVar11 = uVar14;
  }
  if (0 < (long)uVar2) {
    uVar13 = 0;
    plVar15 = (long *)param_1[1];
    lVar16 = *(long *)*param_1;
    lVar17 = *plVar15;
    lVar19 = plVar15[2];
    lVar12 = lVar17;
    do {
      iVar8 = *(int *)(lVar17 + uVar13 * 4);
      if (1 < lVar19) {
        piVar5 = (int *)(lVar12 + plVar15[1] * 4);
        lVar10 = lVar19 + -1;
        iVar7 = iVar8;
        do {
          iVar8 = *piVar5;
          if (iVar7 <= *piVar5) {
            iVar8 = iVar7;
          }
          piVar5 = piVar5 + plVar15[1];
          lVar10 = lVar10 + -1;
          iVar7 = iVar8;
        } while (lVar10 != 0);
      }
      *(int *)(lVar16 + uVar13 * 4) = iVar8;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 4;
    } while (uVar13 != uVar2);
  }
  uVar13 = (uVar11 & 0xfffffffffffffffc) + uVar2;
  if (3 < (long)uVar14) {
    lVar12 = uVar2 << 2;
    uVar14 = uVar2;
    do {
      plVar15 = (long *)param_1[1];
      lVar16 = plVar15[2];
      if (lVar16 == 0) {
        auVar20 = ZEXT216(0);
      }
      else {
        lVar17 = *plVar15;
        lVar19 = plVar15[1];
        auVar20 = *(undefined1 (*) [16])(lVar17 + uVar14 * 4);
        if (lVar16 < 5) {
          lVar10 = 1;
        }
        else {
          uVar6 = lVar16 - 1U & 0xfffffffffffffffc;
          pauVar9 = (undefined1 (*) [16])(lVar17 + lVar12);
          lVar10 = 1;
          do {
            auVar21 = NEON_smin(*(undefined1 (*) [16])(*pauVar9 + lVar19 * 4),
                                *(undefined1 (*) [16])(*pauVar9 + lVar19 * 8),4);
            puVar4 = *pauVar9;
            pauVar9 = pauVar9 + lVar19;
            auVar22 = NEON_smin(*(undefined1 (*) [16])(puVar4 + lVar19 * 0xc),*pauVar9,4);
            auVar21 = NEON_smin(auVar21,auVar22,4);
            auVar20 = NEON_smin(auVar20,auVar21,4);
            lVar10 = lVar10 + 4;
          } while (lVar10 < (long)uVar6);
          lVar10 = uVar6 + 1;
        }
        lVar18 = lVar16 - lVar10;
        if (lVar18 != 0 && lVar10 <= lVar16) {
          lVar17 = lVar17 + lVar10 * lVar19 * 4;
          do {
            auVar20 = NEON_smin(auVar20,*(undefined1 (*) [16])(lVar17 + lVar12),4);
            lVar17 = lVar17 + lVar19 * 4;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
      }
      puVar1 = (undefined8 *)(*(long *)*param_1 + uVar14 * 4);
      puVar1[1] = auVar20._8_8_;
      *puVar1 = auVar20._0_8_;
      uVar14 = uVar14 + 4;
      lVar12 = lVar12 + 0x10;
    } while ((long)uVar14 < (long)uVar13);
  }
  if ((long)uVar13 < (long)uVar3) {
    plVar15 = (long *)param_1[1];
    lVar16 = *(long *)*param_1;
    lVar17 = *plVar15;
    lVar19 = plVar15[2];
    lVar12 = lVar17 + ((long)uVar11 >> 2) * 0x10 + uVar2 * 4;
    do {
      iVar8 = *(int *)(lVar17 + uVar13 * 4);
      if (1 < lVar19) {
        piVar5 = (int *)(lVar12 + plVar15[1] * 4);
        lVar10 = lVar19 + -1;
        iVar7 = iVar8;
        do {
          iVar8 = *piVar5;
          if (iVar7 <= *piVar5) {
            iVar8 = iVar7;
          }
          piVar5 = piVar5 + plVar15[1];
          lVar10 = lVar10 + -1;
          iVar7 = iVar8;
        } while (lVar10 != 0);
      }
      *(int *)(lVar16 + uVar13 * 4) = iVar8;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 4;
    } while (uVar13 != uVar3);
  }
  return;
}



/* Entry: 109c5bcc8; end: 109c5bdb3;  */

undefined8 * FUN_109c5bcc8(undefined8 *param_1)

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
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2e590;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  func_0x000107c31940(auStack_48,&UNK_10f5a5dac);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c5bdb4; end: 109c5be17;  */

undefined8 * FUN_109c5bdb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e590;
  FUN_109c5c068(param_1 + 0x12);
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



/* Entry: 109c5be18; end: 109c5c067;  */

undefined ** FUN_109c5be18(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  uint *puVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  ppuVar7 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  FUN_109c1bed0(&puStack_a0,**(undefined8 **)(param_1 + 0x68),*plVar16);
  func_0x000109c18360(*param_3,&puStack_a0);
  FUN_109c180ec(&puStack_a0);
  uVar10 = *(ulong *)(param_1 + 0x98);
  if (uVar10 != 0) {
    uVar9 = *(uint *)(*plVar16 + 0x3c);
    uVar11 = (ulong)uVar9;
    uVar12 = uVar10 - 1;
    uVar8 = (uint)uVar10;
    if ((uVar10 & uVar12) == 0) {
      uVar13 = (ulong)(uVar8 - 1 & uVar9);
    }
    else {
      uVar13 = uVar11;
      if (uVar10 <= uVar11) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar9 / uVar8;
        }
        uVar13 = (ulong)(uVar9 - uVar2 * uVar8);
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x90) + uVar13 * 8);
    if (plVar14 != (long *)0x0) {
      for (plVar14 = (long *)*plVar14; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar15 = plVar14[1];
        if (uVar15 == uVar11) {
          if (*(uint *)(plVar14 + 2) == uVar9) {
            lVar17 = *(long *)*param_3;
            puVar18 = (uint *)(lVar17 + 8);
            uVar9 = *puVar18 & ((int)*puVar18 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar9) {
              uVar9 = 5;
            }
            iVar5 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar17 + 0xc,uVar9);
            puVar1 = (uint *)((long)plVar14 + 0x14);
            uVar9 = *puVar1 & ((int)*puVar1 >> 0x1f ^ 0xffffffffU);
            if (4 < (int)uVar9) {
              uVar9 = 5;
            }
            iVar6 = 0xf5749aa;
            FUN_109c60fbc(&UNK_10f5749aa,0x1a,plVar14 + 3,uVar9);
            puStack_a0 = &UNK_10f574cf1;
            uStack_98 = 0xf;
            puStack_88 = &UNK_10f574d01;
            uStack_80 = 0xe;
            uStack_90 = iVar5 == iVar6;
            FUN_10959b640();
            if (puVar18 != puVar1 && iVar5 == iVar6) {
              uVar9 = 0;
              if (*puVar1 != 0) {
                ppuVar7 = (undefined **)(lVar17 + 0xc);
                _memmove(ppuVar7,plVar14 + 3,(long)(int)*puVar1 << 2);
                uVar9 = *puVar1;
              }
              *puVar18 = uVar9;
            }
            lVar17 = *(long *)*param_3;
            *(undefined4 *)(lVar17 + 0x3c) = *(undefined4 *)(*plVar16 + 0x3c);
            *(undefined4 *)(lVar17 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
            *(undefined4 *)(lVar17 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
              ___stack_chk_fail();
              FUN_109c180ec(&puStack_a0);
              __Unwind_Resume();
              plVar16 = (long *)ppuVar7[2];
              while (plVar16 != (long *)0x0) {
                plVar16 = (long *)*plVar16;
                __ZdlPv();
              }
              lVar17 = (long)*ppuVar7;
              *ppuVar7 = (undefined *)0x0;
              if (lVar17 != 0) {
                __ZdlPv();
              }
              return (undefined **)(long *)ppuVar7;
            }
            return ppuVar7;
          }
        }
        else {
          if ((uVar10 & uVar12) == 0) {
            uVar15 = uVar15 & uVar12;
          }
          else if (uVar10 <= uVar15) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar3 * uVar10;
          }
          if (uVar15 != uVar13) break;
        }
      }
    }
  }
  FUN_109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109c5bf30);
  (*pcVar4)();
}



/* Entry: 109c5c068; end: 109c5c0af;  */

long * FUN_109c5c068(long *param_1)

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



/* Entry: 109c5c0b0; end: 109c5c1af;  */

undefined8 * FUN_109c5c0b0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2e5d0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a5db4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c5c1b0; end: 109c5c1f3;  */

undefined8 * FUN_109c5c1b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e5d0;
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
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



/* Entry: 109c5c1f4; end: 109c5c1f7;  */

undefined8 * FUN_109c5c1f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e5d0;
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
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



/* Entry: 109c5c1f8; end: 109c5c20b;  */

void FUN_109c5c1f8(void)

{
  FUN_109c5c1b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5c20c; end: 109c5c3db;  */

undefined8 * FUN_109c5c20c(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  plVar3 = (long *)*param_2;
  plVar14 = (long *)*param_3;
  puVar16 = *(undefined8 **)(param_1 + 0x68);
  cVar6 = *(char *)(param_1 + 99);
  plVar2 = (long *)(param_1 + 0x90);
  if (param_2[1] - (long)plVar3 != 0x10) {
    plVar2 = plVar3 + 2;
  }
  uVar4 = *(uint *)(*plVar2 + 8);
  if (uVar4 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar4) {
      uVar4 = 5;
    }
    puVar13 = &UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar2 + 0xc,uVar4);
  }
  if (cVar6 == '\0') {
    FUN_109c1bed0(auStack_a0,*puVar16,*plVar3);
    func_0x000109c18360(plVar14,auStack_a0);
    FUN_109c180ec(auStack_a0);
  }
  else {
    func_0x000109c1e534(plVar14,plVar3);
  }
  lVar15 = *(long *)(*plVar2 + 0x40);
  uVar4 = *(uint *)(*plVar3 + 8);
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar4) {
    uVar4 = 5;
  }
  puVar16 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar3 + 0xc,uVar4);
  lVar9 = *plVar14;
  if (0 < (int)puVar13) {
    uVar11 = 0;
    lVar1 = lVar9 + 0xc;
    iVar10 = 0x7fffffff;
    iVar12 = 1;
    do {
      iVar5 = *(int *)(lVar15 + uVar11 * 4);
      iVar7 = iVar5;
      if (iVar5 == -1) {
        iVar7 = 1;
        iVar10 = (int)uVar11;
      }
      iVar12 = iVar7 * iVar12;
      *(int *)(lVar1 + uVar11 * 4) = iVar5;
      uVar11 = uVar11 + 1;
    } while (((ulong)puVar13 & 0xffffffff) != uVar11);
    if (iVar10 != 0x7fffffff) {
      iVar7 = 0;
      if (iVar12 != 0) {
        iVar7 = (int)puVar16 / iVar12;
      }
      *(int *)(lVar1 + (long)iVar10 * 4) = iVar7;
    }
  }
  *(int *)(lVar9 + 8) = (int)puVar13;
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_a0);
    puVar8 = puVar16;
    __Unwind_Resume();
    pcStack_a8 = FUN_109c5c3dc;
    puVar8[0xc] = 0;
    puVar8[0xb] = 0;
    puVar8[0xe] = 0;
    puVar8[0xd] = 0;
    puVar8[0x10] = 0;
    puVar8[0xf] = 0;
    puVar8[0x11] = 0;
    puVar8[10] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[1] = 0;
    *(undefined1 *)((long)puVar8 + 0x61) = 1;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    *(undefined4 *)(puVar8 + 0xf) = 0x3f800000;
    *(undefined1 *)(puVar8 + 0x11) = 0;
    *puVar8 = &PTR_FUN_110b2e610;
    puVar8[0x13] = 0;
    puVar8[0x12] = 0;
    puVar8[0x15] = 0;
    puVar8[0x14] = 0;
    puVar8[0x17] = 0;
    puVar8[0x16] = 0;
    puVar8[0x19] = 0;
    puVar8[0x18] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1c] = 0;
    uVar17 = NEON_fmov(0x3f800000,4);
    puVar8[0x20] = 0xffffffffffffffff;
    puVar8[0x1f] = 0xffffffffffffffff;
    puVar8[0x1d] = uVar17;
    *(undefined4 *)(puVar8 + 0x1e) = 1;
    puVar8[0x22] = 0xffffffffffffffff;
    puVar8[0x21] = 0xffffffffffffffff;
    *(undefined1 *)(puVar8 + 0x23) = 0;
    puStack_c0 = puVar13;
    puStack_b8 = puVar16;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000107c31940(auStack_d8,&UNK_10f5a5dbf);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar8 + 6,auStack_d8);
    if (cStack_c1 < '\0') {
      __ZdlPv(auStack_d8[0]);
    }
    return puVar8;
  }
  return puVar16;
}



/* Entry: 109c5c3dc; end: 109c5c4f7;  */

undefined8 * FUN_109c5c3dc(undefined8 *param_1)

{
  undefined8 uVar1;
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
  *param_1 = &PTR_FUN_110b2e610;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  param_1[0x20] = 0xffffffffffffffff;
  param_1[0x1f] = 0xffffffffffffffff;
  param_1[0x1d] = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x21] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x23) = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a5dbf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5c4f8; end: 109c5c543;  */

undefined8 * FUN_109c5c4f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e610;
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
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



/* Entry: 109c5c544; end: 109c5c547;  */

undefined8 * FUN_109c5c544(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e610;
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
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



/* Entry: 109c5c548; end: 109c5c55b;  */

void FUN_109c5c548(void)

{
  FUN_109c5c4f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c5c55c; end: 109c5d51b;  */

void FUN_109c5c55c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  unkuint9 Var9;
  unkuint9 Var10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  float *pfVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  float fVar32;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  int *piVar36;
  int *piVar37;
  int *piVar38;
  int *piVar39;
  int *piVar40;
  long lVar41;
  undefined8 uVar42;
  int *piVar43;
  long *plVar44;
  long lVar45;
  long *plVar46;
  long *plVar47;
  int *piVar48;
  int *piVar49;
  long lVar50;
  ulong uVar51;
  uint uVar52;
  int iVar53;
  double dVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  int iVar63;
  int iStack_1ec;
  long lStack_1e0;
  ulong uStack_1c8;
  ulong uStack_150;
  long lStack_140;
  undefined1 auStack_120 [24];
  int aiStack_108 [2];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  undefined4 uStack_d4;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar47 = (long *)*param_2;
  lVar41 = *plVar47;
  if (*(int *)(lVar41 + 0x3c) == 1) {
    func_0x000105688514(&UNK_10f5a5e19);
LAB_109c5d3fc:
    ___stack_chk_fail();
  }
  else {
    uVar33 = *(uint *)(lVar41 + 0x10);
    uVar52 = *(uint *)(lVar41 + 0x14);
    if ((*(ulong *)(param_1 + 0xf8) != (ulong)uVar52) ||
       (*(ulong *)(param_1 + 0x100) != (ulong)uVar33)) {
      fVar61 = *(float *)(param_1 + 0xec);
      *(long *)(param_1 + 0xf8) = (long)(int)uVar52;
      *(long *)(param_1 + 0x100) = (long)(int)uVar33;
      uVar16 = (uint)(fVar61 * (float)(int)uVar33);
      *(long *)(param_1 + 0x108) = (long)(int)(*(float *)(param_1 + 0xe8) * (float)(int)uVar52);
      *(long *)(param_1 + 0x110) = (long)(int)uVar16;
      if (*(int *)(param_1 + 0xf0) == 1) {
        bVar5 = *(byte *)(param_1 + 0x118);
        FUN_109c5d51c(param_1 + 0xd0,(long)(int)(uVar16 + 1));
        lVar41 = *(long *)(param_1 + 0xd0);
        *(undefined8 *)(lVar41 + (long)(int)uVar16 * 0xc) = 0;
        if ((((int)uVar33 < 2) || ((int)uVar16 < 2)) || ((bVar5 & 1) == 0)) {
          if (0 < (int)uVar16) {
            fVar61 = 1.0 / fVar61;
            goto LAB_109c5c674;
          }
        }
        else {
          fVar61 = (float)(uVar33 - 1) / (float)(uVar16 - 1);
LAB_109c5c674:
          uVar30 = (ulong)uVar16;
          pfVar25 = (float *)(lVar41 + uVar30 * 0xc + -4);
          do {
            fVar56 = fVar61 * (float)(uVar30 - 1 & 0xffffffff);
            fVar32 = (float)(int)fVar56;
            fVar62 = (float)(uVar33 - 1);
            if ((int)fVar32 + 1 <= (int)(uVar33 - 1)) {
              fVar62 = (float)((int)fVar32 + 1);
            }
            pfVar25[-2] = fVar32;
            pfVar25[-1] = fVar62;
            *pfVar25 = fVar56 - (float)(int)fVar56;
            bVar12 = uVar30 != 0;
            uVar30 = uVar30 - 1;
            pfVar25 = pfVar25 + -3;
          } while (bVar12 && uVar30 != 0);
        }
        uVar30 = *(ulong *)(param_1 + 0x108);
        iVar13 = *(int *)(param_1 + 0xf8);
        fVar62 = *(float *)(param_1 + 0xe8);
        uVar33 = (uint)uVar30;
        bVar5 = *(byte *)(param_1 + 0x118);
        FUN_109c5d51c(param_1 + 0xb8,(long)(int)(uVar33 + 1));
        lVar41 = *(long *)(param_1 + 0xb8);
        *(undefined8 *)(lVar41 + (long)(int)uVar33 * 0xc) = 0;
        fVar61 = (float)(iVar13 - 1);
        if (((fVar61 == 0.0 || iVar13 < 1) || (uVar33 - 1 == 0 || (int)uVar33 < 1)) ||
           ((bVar5 & 1) == 0)) {
          if ((int)uVar33 < 1) goto LAB_109c5c778;
          fVar62 = 1.0 / fVar62;
        }
        else {
          fVar62 = (float)(uint)fVar61 / (float)(uVar33 - 1);
        }
        uVar26 = (uVar30 & 0xffffffff) + 1;
        pfVar25 = (float *)(lVar41 + (uVar30 & 0xffffffff) * 0xc + -4);
        do {
          uVar33 = uVar33 - 1;
          fVar57 = fVar62 * (float)uVar33;
          fVar56 = (float)(int)fVar57;
          fVar32 = fVar61;
          if ((int)fVar56 + 1 <= (int)fVar61) {
            fVar32 = (float)((int)fVar56 + 1);
          }
          pfVar25[-2] = fVar56;
          pfVar25[-1] = fVar32;
          *pfVar25 = fVar57 - (float)(int)fVar57;
          uVar26 = uVar26 - 1;
          pfVar25 = pfVar25 + -3;
        } while (1 < uVar26);
      }
LAB_109c5c778:
      lVar41 = *plVar47;
    }
    aiStack_108[0] = 0;
    aiStack_108[1] = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    if ((int *)(lVar41 + 8) != aiStack_108) {
      iVar13 = *(int *)(lVar41 + 8);
      if (iVar13 == 0) {
        uVar18 = 0;
      }
      else {
        _memmove((ulong)aiStack_108 | 4,lVar41 + 0xc,(long)iVar13 << 2);
        uVar18 = *(undefined4 *)(lVar41 + 8);
      }
      aiStack_108[0] = uVar18;
    }
    uStack_100 = CONCAT44((int)*(undefined8 *)(param_1 + 0x108),
                          (int)*(undefined8 *)(param_1 + 0x110));
    FUN_109c182f4(param_3,1);
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (&uStack_d8,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_108,
               *(undefined1 *)(*plVar47 + 0x48));
    func_0x000109c18360(*param_3,&uStack_d8);
    FUN_109c180ec(&uStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)*param_3 + 0x20,param_1 + 0x48);
    plVar46 = (long *)*param_3;
    lVar41 = *plVar46;
    lVar50 = *plVar47;
    iVar13 = *(int *)(lVar50 + 0x3c);
    *(int *)(lVar41 + 0x3c) = iVar13;
    if (*(int *)(param_1 + 0xf0) == 0) {
      iVar13 = *(int *)(lVar50 + 0xc);
      if ((ulong)*(byte *)(lVar50 + 0x48) < 9) {
        iVar63 = *(int *)(&UNK_10e03aa58 + (ulong)*(byte *)(lVar50 + 0x48) * 4);
      }
      else {
        iVar63 = 4;
      }
      if (0 < iVar13) {
        iVar53 = 0;
        uVar30 = *(ulong *)(param_1 + 0xf8);
        uVar31 = *(ulong *)(param_1 + 0x100);
        uVar26 = *(ulong *)(param_1 + 0x108);
        uVar51 = *(ulong *)(param_1 + 0x110);
        lVar41 = *(long *)(lVar41 + 0x40);
        Var9 = (unkuint9)uVar51;
        Var10 = (unkuint9)uVar26;
        lVar19 = *(long *)(lVar50 + 0x40);
        lVar50 = (long)*(int *)(lVar50 + 0x18) * (long)iVar63;
        do {
          if (0 < (int)uVar51) {
            uVar33 = 0;
            do {
              iVar23 = (int)(((float)uVar31 / (float)(unkint9)Var9) * (float)uVar33);
              iVar17 = *(int *)(param_1 + 0x100) + -1;
              if (iVar23 <= iVar17) {
                iVar17 = iVar23;
              }
              if (0 < (int)uVar26) {
                uVar52 = 0;
                do {
                  iVar29 = (int)(((float)uVar30 / (float)(unkint9)Var10) * (float)uVar52);
                  iVar23 = *(int *)(param_1 + 0xf8) + -1;
                  if (iVar29 <= iVar23) {
                    iVar23 = iVar29;
                  }
                  lVar28 = *plVar47;
                  _memcpy(lVar41,lVar19 + *(int *)(lVar28 + 0x18) * iVar63 *
                                          (iVar23 + (iVar17 + *(int *)(lVar28 + 0x10) * iVar53) *
                                                    *(int *)(lVar28 + 0x14)),lVar50);
                  lVar41 = lVar41 + lVar50;
                  uVar52 = uVar52 + 1;
                  uVar26 = *(ulong *)(param_1 + 0x108);
                } while ((int)uVar52 < (int)uVar26);
                uVar51 = *(ulong *)(param_1 + 0x110);
              }
              uVar33 = uVar33 + 1;
            } while ((int)uVar33 < (int)uVar51);
          }
          iVar53 = iVar53 + 1;
        } while (iVar53 != iVar13);
      }
      goto LAB_109c5d2c0;
    }
    if (*(int *)(param_1 + 0xf0) == 1) {
      cVar6 = *(char *)(lVar50 + 0x48);
      if (cVar6 == '\x01') {
        if (iVar13 == 0) {
          iVar13 = *(int *)(lVar50 + 0xc);
          iVar63 = *(int *)(lVar50 + 0x18);
          plVar44 = (long *)(param_1 + 8);
          if ((*plVar44 == 0) || (*(int *)(param_1 + 0xa4) != iVar63)) {
            uVar18 = 0xc;
            if (*(char *)(param_1 + 0x118) == '\0') {
              uVar18 = 4;
            }
            iVar53 = 1;
            func_0x000109bd6320(1,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x108),
                                uVar18,plVar44);
            if (iVar53 == 0) {
              *(int *)(param_1 + 0xa4) = iVar63;
              lVar50 = *plVar47;
              lVar41 = *plVar46;
              goto LAB_109c5cffc;
            }
          }
          else {
LAB_109c5cffc:
            lVar50 = *(long *)(lVar50 + 0x40);
            lVar41 = *(long *)(lVar41 + 0x40);
            if (*(int *)(param_1 + 0x90) == iVar13) {
              lVar45 = (long)*(int *)(param_1 + 0x94);
              lVar19 = *(long *)(param_1 + 0xf8);
              lVar28 = *(long *)(param_1 + 0x100);
              if (((((lVar28 != lVar45) || (lVar28 = lVar45, lVar19 != *(int *)(param_1 + 0x98))) ||
                   (*(long *)(param_1 + 0x110) != (long)*(int *)(param_1 + 0x9c))) ||
                  ((*(long *)(param_1 + 0x108) != (long)*(int *)(param_1 + 0xa0) ||
                   (*(long *)(param_1 + 0xa8) != lVar50)))) || (*(long *)(param_1 + 0xb0) != lVar41)
                 ) goto LAB_109c5d22c;
LAB_109c5d2a8:
              iVar13 = (int)*(undefined8 *)(param_1 + 8);
              func_0x000109bce408();
              if (iVar13 == 0) goto LAB_109c5d2c0;
            }
            else {
              lVar19 = *(long *)(param_1 + 0xf8);
              lVar28 = *(long *)(param_1 + 0x100);
LAB_109c5d22c:
              lVar45 = (long)iVar63;
              uVar42 = *(undefined8 *)(param_1 + 8);
              func_0x000109bd64e8(uVar42,(long)iVar13,lVar28,lVar19,lVar45,lVar45,lVar45,&uStack_d8,
                                  *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
              if ((int)uVar42 == 0) {
                FUN_109c61c8c(plVar44,0x10,CONCAT44(uStack_d4,uStack_d8));
                uVar42 = *(undefined8 *)(param_1 + 8);
                func_0x000109bd68b0(uVar42,*(undefined8 *)(param_1 + 0x18),lVar50,lVar41);
                if ((int)uVar42 == 0) {
                  *(int *)(param_1 + 0x90) = iVar13;
                  auVar55._4_4_ = *(undefined4 *)(param_1 + 0x100);
                  auVar55._0_4_ = *(undefined4 *)(param_1 + 0xf8);
                  auVar55._8_4_ = (int)*(undefined8 *)(param_1 + 0x108);
                  auVar55._12_4_ = (int)*(undefined8 *)(param_1 + 0x110);
                  auVar55 = NEON_rev64(auVar55,4);
                  *(long *)(param_1 + 0x9c) = auVar55._8_8_;
                  *(long *)(param_1 + 0x94) = auVar55._0_8_;
                  *(long *)(param_1 + 0xa8) = lVar50;
                  *(long *)(param_1 + 0xb0) = lVar41;
                  goto LAB_109c5d2a8;
                }
              }
            }
          }
          func_0x000105688514(&UNK_10f5a5dca);
          goto LAB_109c5d470;
        }
        uVar42 = *(undefined8 *)(lVar41 + 0x40);
        bVar5 = *(byte *)(lVar41 + 0x48);
        uVar33 = *(uint *)(lVar41 + 8) & ((int)*(uint *)(lVar41 + 8) >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar33) {
          uVar33 = 5;
        }
        uStack_d8 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar41 + 0xc,uVar33);
        if (bVar5 < 9) {
          uStack_d4 = *(undefined4 *)(&UNK_10e03aa58 + (ulong)bVar5 * 4);
        }
        else {
          uStack_d4 = 4;
        }
        iVar13 = 0xf57499d;
        FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_d8,2);
        _bzero(uVar42,(long)iVar13);
        lVar41 = *plVar47;
        iVar13 = *(int *)(lVar41 + 0xc);
        if (0 < iVar13) {
          iVar63 = 0;
          lVar19 = *(long *)(param_1 + 0x100);
          iVar53 = *(int *)(lVar41 + 0x18);
          lVar45 = (long)iVar53;
          lVar28 = *(long *)(param_1 + 0xf8) * lVar45;
          uVar30 = *(ulong *)(param_1 + 0x108);
          uVar26 = *(ulong *)(param_1 + 0x110);
          lVar50 = *(long *)(*plVar46 + 0x40);
          lStack_140 = *(long *)(lVar41 + 0x40);
          do {
            if (0 < (int)uVar26) {
              uVar31 = 0;
              do {
                if (0 < (int)uVar30) {
                  lVar41 = 0;
                  piVar43 = (int *)(*(long *)(param_1 + 0xd0) + uVar31 * 0xc);
                  lVar2 = lStack_140 + lVar28 * *piVar43 * 4;
                  lVar3 = lStack_140 + lVar28 * piVar43[1] * 4;
                  uVar51 = uVar30 & 0x7fffffff;
                  do {
                    piVar43 = (int *)(*(long *)(param_1 + 0xb8) + lVar41);
                    iVar17 = *piVar43;
                    iVar23 = piVar43[1] * iVar53;
                    _cblas_saxpy(lVar45,lVar2 + (long)iVar23 * 4,1,lVar50,1);
                    _cblas_saxpy(lVar45,lVar3 + (long)iVar23 * 4,1,lVar50,1);
                    iVar17 = iVar17 * iVar53;
                    _cblas_saxpy(lVar45,lVar2 + (long)iVar17 * 4,1,lVar50,1);
                    _cblas_saxpy(lVar45,lVar3 + (long)iVar17 * 4,1,lVar50,1);
                    lVar41 = lVar41 + 0xc;
                    lVar50 = lVar50 + lVar45 * 4;
                    uVar51 = uVar51 - 1;
                  } while (uVar51 != 0);
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 != (uVar26 & 0x7fffffff));
            }
            lStack_140 = lStack_140 + lVar28 * lVar19 * 4;
            iVar63 = iVar63 + 1;
          } while (iVar63 != iVar13);
        }
      }
      else {
        if (cVar6 != '\x02') {
          if (cVar6 == '\x03') {
            func_0x000105688514(&UNK_10f5a5e42);
          }
          else {
            func_0x000105688514(&UNK_10f5a5e7d);
          }
          goto LAB_109c5d470;
        }
        lVar41 = *(long *)(lVar41 + 0x40);
        iVar13 = *(int *)(lVar50 + 0xc);
        lVar19 = *(long *)(param_1 + 0xf8);
        lVar28 = *(long *)(param_1 + 0x100);
        uVar30 = *(ulong *)(param_1 + 0x108);
        uVar26 = *(ulong *)(param_1 + 0x110);
        uVar33 = *(uint *)(lVar50 + 0x18);
        lStack_1e0 = *(long *)(lVar50 + 0x40);
        fVar61 = *(float *)(lVar50 + 0x4c) / (*(float *)(param_1 + 0x78) * 255.0);
        if (fVar61 == 0.0) {
          uStack_150 = 0;
        }
        else {
          dVar54 = (double)_frexp((double)fVar61,&uStack_d8);
          uVar31 = (ulong)(double)(long)(dVar54 * 2147483648.0);
          uVar52 = uStack_d8;
          if (uVar31 == 0x80000000) {
            uVar52 = uStack_d8 + 1;
          }
          uVar51 = 0x40000000;
          if (uVar31 != 0x80000000) {
            uVar51 = uVar31 & 0xffffffff;
          }
          uVar16 = 0;
          if (-0x20 < (int)uVar52) {
            uVar16 = uVar52;
          }
          uStack_150 = 0;
          if (-0x20 < (int)uVar52) {
            uStack_150 = uVar51;
          }
          uStack_150 = uStack_150 | (ulong)uVar16 << 0x20;
        }
        iVar63 = *(int *)(lVar50 + 0x50);
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f0 = 1;
        puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
        uStack_ec = uVar33;
        (**(code **)*puVar14)(&uStack_d8,puVar14,&uStack_f0,4);
        if (0 < iVar13) {
          iStack_1ec = 0;
          uVar51 = (ulong)(int)uVar33;
          lVar19 = lVar19 * uVar51;
          iVar53 = (int)((float)iVar63 * 255.0);
          piVar43 = *(int **)(CONCAT44(uStack_d4,uStack_d8) + 0x40);
          iVar63 = -iVar53;
          uVar31 = (ulong)-((uint)piVar43 >> 2) & 3;
          if ((long)uVar51 <= (long)uVar31) {
            uVar31 = uVar51;
          }
          uVar16 = (uint)(uStack_150 >> 0x20);
          uVar52 = 0;
          if ((int)uVar16 < 1) {
            uVar52 = -uVar16;
          }
          uVar7 = ~(uint)(-1L << ((ulong)uVar52 & 0x3f));
          if (((ulong)piVar43 & 3) != 0) {
            uVar31 = uVar51;
          }
          uVar8 = uVar51 - uVar31;
          uVar1 = uVar8 + 3;
          if ((long)uVar31 <= (long)uVar51) {
            uVar1 = uVar8;
          }
          uVar1 = (uVar1 & 0xfffffffffffffffc) + uVar31;
          piVar20 = (int *)(uVar51 << 2);
          lVar50 = 0;
          if (uVar51 != 0) {
            lVar50 = 0x7fffffffffffffff / (long)uVar51;
          }
          do {
            if (0 < (int)uVar26) {
              uStack_1c8 = 0;
              do {
                if (0 < (int)uVar30) {
                  uVar35 = 0;
                  piVar21 = (int *)(*(long *)(param_1 + 0xd0) + uStack_1c8 * 0xc);
                  fVar61 = (float)piVar21[2];
                  lVar45 = lStack_1e0 + lVar19 * *piVar21;
                  lVar2 = lStack_1e0 + lVar19 * piVar21[1];
                  do {
                    piVar21 = (int *)(*(long *)(param_1 + 0xb8) + uVar35 * 0xc);
                    fVar62 = (float)piVar21[2];
                    if (uVar33 == 0) {
LAB_109c5cd18:
                      piVar49 = (int *)0x0;
                      piVar48 = (int *)0x0;
                      piVar21 = (int *)0x0;
                      piVar15 = (int *)0x0;
                    }
                    else {
                      if (lVar50 < 1) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109c5d470;
                      }
                      if ((int)uVar33 < 1) goto LAB_109c5cd18;
                      iVar17 = *piVar21;
                      iVar23 = piVar21[1];
                      piVar21 = piVar20;
                      _malloc();
                      if (piVar21 == (int *)0x0) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109c5d470;
                      }
                      uVar22 = 0;
                      do {
                        piVar21[uVar22] = (int)*(char *)(lVar45 + (int)(iVar17 * uVar33) + uVar22);
                        uVar22 = uVar22 + 1;
                      } while (uVar51 != uVar22);
                      piVar48 = piVar20;
                      _malloc();
                      if (piVar48 == (int *)0x0) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109c5d470;
                      }
                      uVar22 = 0;
                      do {
                        piVar48[uVar22] = (int)*(char *)(lVar45 + (int)(iVar23 * uVar33) + uVar22);
                        uVar22 = uVar22 + 1;
                      } while (uVar51 != uVar22);
                      piVar49 = piVar20;
                      _malloc();
                      if (piVar49 == (int *)0x0) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109c5d470;
                      }
                      uVar22 = 0;
                      do {
                        piVar49[uVar22] = (int)*(char *)(lVar2 + (int)(iVar17 * uVar33) + uVar22);
                        uVar22 = uVar22 + 1;
                      } while (uVar51 != uVar22);
                      piVar15 = piVar20;
                      _malloc();
                      if (piVar15 == (int *)0x0) {
                        ___cxa_allocate_exception(8);
                        __ZNSt9bad_allocC1Ev();
                        ___cxa_throw();
                        goto LAB_109c5d470;
                      }
                      uVar22 = 0;
                      do {
                        piVar15[uVar22] = (int)*(char *)(lVar2 + (int)(iVar23 * uVar33) + uVar22);
                        uVar22 = uVar22 + 1;
                      } while (uVar51 != uVar22);
                    }
                    iVar17 = (int)(float)(int)((1.0 - fVar61) * (1.0 - fVar62) * 255.0);
                    iVar23 = (int)(float)(int)((1.0 - fVar61) * fVar62 * 255.0);
                    iVar29 = (int)(float)(int)(fVar61 * (1.0 - fVar62) * 255.0);
                    iVar34 = (int)(float)(int)(fVar61 * fVar62 * 255.0);
                    piVar36 = piVar43;
                    piVar37 = piVar21;
                    piVar38 = piVar48;
                    piVar39 = piVar49;
                    piVar40 = piVar15;
                    uVar22 = uVar31;
                    if (0 < (long)uVar31) {
                      do {
                        *piVar36 = (*piVar37 * iVar17 - iVar53) + *piVar38 * iVar23 +
                                   *piVar39 * iVar29 + *piVar40 * iVar34;
                        uVar22 = uVar22 - 1;
                        piVar36 = piVar36 + 1;
                        piVar37 = piVar37 + 1;
                        piVar38 = piVar38 + 1;
                        piVar39 = piVar39 + 1;
                        piVar40 = piVar40 + 1;
                      } while (uVar22 != 0);
                    }
                    if (3 < (long)uVar8) {
                      piVar36 = piVar15 + uVar31;
                      piVar37 = piVar49 + uVar31;
                      piVar38 = piVar48 + uVar31;
                      piVar39 = piVar21 + uVar31;
                      piVar40 = piVar43 + uVar31;
                      uVar22 = uVar31;
                      do {
                        uVar42 = *(undefined8 *)piVar39;
                        uVar58 = *(undefined8 *)piVar38;
                        uVar59 = *(undefined8 *)piVar37;
                        uVar60 = *(undefined8 *)piVar36;
                        *(ulong *)(piVar40 + 2) =
                             CONCAT44(iVar63 + (int)((ulong)*(undefined8 *)(piVar39 + 2) >> 0x20) *
                                               iVar17 +
                                      (int)((ulong)*(undefined8 *)(piVar38 + 2) >> 0x20) * iVar23 +
                                      (int)((ulong)*(undefined8 *)(piVar37 + 2) >> 0x20) * iVar29 +
                                      (int)((ulong)*(undefined8 *)(piVar36 + 2) >> 0x20) * iVar34,
                                      iVar63 + (int)*(undefined8 *)(piVar39 + 2) * iVar17 +
                                      (int)*(undefined8 *)(piVar38 + 2) * iVar23 +
                                      (int)*(undefined8 *)(piVar37 + 2) * iVar29 +
                                      (int)*(undefined8 *)(piVar36 + 2) * iVar34);
                        *(ulong *)piVar40 =
                             CONCAT44(iVar63 + (int)((ulong)uVar42 >> 0x20) * iVar17 +
                                      (int)((ulong)uVar58 >> 0x20) * iVar23 +
                                      (int)((ulong)uVar59 >> 0x20) * iVar29 +
                                      (int)((ulong)uVar60 >> 0x20) * iVar34,
                                      iVar63 + (int)uVar42 * iVar17 + (int)uVar58 * iVar23 +
                                      (int)uVar59 * iVar29 + (int)uVar60 * iVar34);
                        uVar22 = uVar22 + 4;
                        piVar36 = piVar36 + 4;
                        piVar37 = piVar37 + 4;
                        piVar38 = piVar38 + 4;
                        piVar39 = piVar39 + 4;
                        piVar40 = piVar40 + 4;
                      } while ((long)uVar22 < (long)uVar1);
                    }
                    uVar22 = uVar1;
                    if ((long)uVar1 < (long)uVar51) {
                      do {
                        piVar43[uVar22] =
                             (piVar21[uVar22] * iVar17 - iVar53) + piVar48[uVar22] * iVar23 +
                             piVar49[uVar22] * iVar29 + piVar15[uVar22] * iVar34;
                        uVar22 = uVar22 + 1;
                      } while (uVar51 != uVar22);
                    }
                    if (0 < (int)uVar33) {
                      uVar22 = 0;
                      do {
                        iVar17 = piVar43[uVar22] <<
                                 (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU) & 0x1f);
                        if (((uStack_150 & 0xffffffff) == 0x80000000) && (iVar17 == -0x80000000)) {
                          uVar24 = 0x7fffffff;
                        }
                        else {
                          lVar3 = 0x40000000;
                          if (0x7fffffffffffffff < (ulong)((long)(int)uStack_150 * (long)iVar17)) {
                            lVar3 = -0x3fffffff;
                          }
                          uVar27 = lVar3 + (long)(int)uStack_150 * (long)iVar17;
                          uVar4 = uVar27 + 0x7fffffff;
                          if (-1 < (long)uVar27) {
                            uVar4 = uVar27;
                          }
                          uVar24 = (uint)(uVar4 >> 0x1f);
                        }
                        iVar17 = *(int *)(param_1 + 0x7c) + ((int)uVar24 >> (uVar52 & 0x1f));
                        if (((int)uVar7 >> 1) - ((int)uVar24 >> 0x1f) < (int)(uVar24 & uVar7)) {
                          iVar17 = iVar17 + 1;
                        }
                        if (iVar17 < -0x7f) {
                          iVar17 = -0x80;
                        }
                        if (0x7e < iVar17) {
                          iVar17 = 0x7f;
                        }
                        *(char *)(lVar41 + uVar22) = (char)iVar17;
                        uVar22 = uVar22 + 1;
                      } while (uVar33 != uVar22);
                    }
                    lVar41 = lVar41 + uVar51;
                    _free();
                    _free(piVar49);
                    _free(piVar48);
                    _free(piVar21);
                    uVar35 = uVar35 + 1;
                  } while (uVar35 != (uVar30 & 0x7fffffff));
                }
                uStack_1c8 = uStack_1c8 + 1;
              } while (uStack_1c8 != (uVar26 & 0x7fffffff));
            }
            lStack_1e0 = lStack_1e0 + lVar19 * lVar28;
            iStack_1ec = iStack_1ec + 1;
          } while (iStack_1ec != iVar13);
        }
        FUN_109c180ec(&uStack_d8);
      }
LAB_109c5d2c0:
      lVar41 = *(long *)*param_3;
      if (*(byte *)(lVar41 + 0x48) < 8 &&
          (1 << (ulong)(*(byte *)(lVar41 + 0x48) & 0x1f) & 0xccU) != 0) {
        *(undefined4 *)(lVar41 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(lVar41 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
        return;
      }
      goto LAB_109c5d3fc;
    }
  }
  __ZNSt3__19to_stringEi(auStack_120);
  FUN_10928a5e0(&uStack_f0,&UNK_10f5a5eda,auStack_120);
  FUN_109259240(&uStack_d8,&uStack_f0,&DAT_10f638984);
  func_0x000105687ee0(&uStack_d8);
LAB_109c5d470:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109c5d474);
  (*pcVar11)();
}



/* Entry: 109c5d51c; end: 109c5d69b;  */

long * FUN_109c5d51c(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 auStack_98 [2];
  char cStack_81;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar4 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  lVar8 = (long)plVar5 - (long)plVar4;
  bVar2 = (ulong)((lVar8 >> 2) * -0x5555555555555555) <= param_2;
  uVar1 = param_2 + (lVar8 >> 2) * 0x5555555555555555;
  if (bVar2 && uVar1 != 0) {
    if ((ulong)((param_1[2] - (long)plVar5 >> 2) * -0x5555555555555555) < uVar1) {
      if (param_2 < 0x1555555555555556) {
        lVar6 = param_1[2] - (long)plVar4 >> 2;
        uVar7 = lVar6 * 0x5555555555555556;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
          uVar7 = 0x1555555555555555;
        }
        if (uVar7 < 0x1555555555555556) {
          plVar3 = (long *)(uVar7 * 0xc);
          __Znwm();
          lVar6 = ((uVar1 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          _bzero((long)plVar3 + lVar8,lVar6);
          plVar5 = plVar3;
          _memcpy(plVar3,plVar4,lVar8);
          *param_1 = (long)plVar3;
          param_1[1] = (long)plVar3 + lVar8 + lVar6;
          param_1[2] = (long)plVar3 + uVar7 * 0xc;
          if (plVar4 == (long *)0x0) {
            return plVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar4);
          return plVar4;
        }
      }
      else {
        FUN_109c5d69c();
      }
      func_0x000104c4f740();
      pcStack_58 = FUN_109c5d69c;
      plVar5 = (long *)&DAT_10f62a4d8;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_68 = FUN_109c5d6b0;
      *(undefined8 *)((long)plVar5 + 0x59) = 0;
      *(undefined8 *)((long)plVar5 + 0x51) = 0;
      plVar5[10] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[3] = 0;
      plVar5[2] = 0;
      plVar5[1] = 0;
      *(undefined2 *)((long)plVar5 + 0x61) = 1;
      *(undefined1 *)((long)plVar5 + 99) = 0;
      plVar5[0xd] = 0;
      plVar5[0xe] = 0;
      plVar5[0xf] = 0x3f800000;
      *(undefined1 *)(plVar5 + 0x10) = 0;
      *(undefined1 *)((long)plVar5 + 0x84) = 0;
      *(undefined1 *)(plVar5 + 0x11) = 0;
      *(undefined1 *)((long)plVar5 + 0x8c) = 0;
      plVar5[0x12] = 0x100000001;
      plVar5[0x14] = 0;
      plVar5[0x13] = 0;
      plVar5[0x16] = 0;
      plVar5[0x15] = 0;
      plVar5[0x18] = 0;
      plVar5[0x17] = 0;
      *(undefined1 *)(plVar5 + 0x19) = 0;
      *(undefined1 *)(plVar5 + 0x20) = 0;
      plVar5[0x1d] = 0;
      plVar5[0x1c] = 0;
      plVar5[0x1f] = 0;
      plVar5[0x1e] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x1a] = 0;
      *plVar5 = (long)&PTR_FUN_110b2e650;
      plStack_80 = plVar4;
      plStack_78 = param_1;
      puStack_70 = (undefined1 *)&puStack_60;
      func_0x000107c31940(auStack_98,&UNK_10f5a5f0f);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (plVar5 + 6,auStack_98);
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      return plVar5;
    }
    lVar8 = ((uVar1 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    plVar4 = plVar5;
    _bzero(plVar5,lVar8);
    lVar8 = (long)plVar5 + lVar8;
  }
  else {
    if (bVar2) {
      return param_1;
    }
    lVar8 = (long)plVar4 + param_2 * 0xc;
    plVar4 = param_1;
  }
  param_1[1] = lVar8;
  return plVar4;
}



/* Entry: 109c5d69c; end: 109c5d6af;  */

undefined8 * FUN_109c5d69c(void)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
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
  puVar1[0x12] = 0x100000001;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  *puVar1 = &PTR_FUN_110b2e650;
  func_0x000107c31940(auStack_48,&UNK_10f5a5f0f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return puVar1;
}



/* Entry: 109c5d6b0; end: 109c5d7a3;  */

undefined8 * FUN_109c5d6b0(undefined8 *param_1)

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
  param_1[0x12] = 0x100000001;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_110b2e650;
  func_0x000107c31940(auStack_38,&UNK_10f5a5f0f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c5d7a4; end: 109c5d7a7;  */

void FUN_109c5d7a4(undefined8 *param_1)

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


