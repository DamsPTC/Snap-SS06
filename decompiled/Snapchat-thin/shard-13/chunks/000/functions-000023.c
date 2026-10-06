/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d6ca70; end: 109d6cc07;  */

undefined1  [16] FUN_109d6ca70(long *param_1,undefined1 *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  long **pplVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined1 *unaff_x20;
  long *plVar18;
  undefined1 *unaff_x22;
  undefined8 *puVar19;
  undefined1 *unaff_x23;
  long unaff_x25;
  long lVar20;
  uint uVar21;
  undefined8 ****ppppuVar22;
  code *pcVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long lStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [8];
  long alStack_180 [3];
  long lStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  long **pplStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  long *plStack_108;
  long alStack_100 [3];
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  long *plStack_c8;
  undefined8 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  long alStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_1[2];
  if ((int)lVar16 == 0) {
    *param_3 = 0;
    puVar6 = (undefined1 *)0x0;
    puVar5 = param_2;
  }
  else {
    unaff_x25 = *param_1;
    FUN_109de7f14(alStack_80,&UNK_10e05aebc,1);
    puVar12 = (undefined8 *)0x2;
    FUN_109de7f14(auStack_a0,&UNK_10e05aebc,2);
    puVar5 = param_2;
    FUN_109def140();
    puStack_b0 = (undefined1 *)0x0;
    uVar21 = (uint)puVar5;
    unaff_x23 = (undefined1 *)0x1;
    while( true ) {
      uVar21 = (int)lVar16 - 1U & uVar21;
      unaff_x22 = (undefined1 *)(unaff_x25 + (ulong)uVar21 * 0x28);
      puVar6 = param_2;
      puVar5 = unaff_x22;
      FUN_109d67e08(param_2,unaff_x22);
      if (((ulong)puVar6 & 1) != 0) break;
      puVar5 = auStack_88;
      puVar7 = unaff_x22;
      FUN_109d67e08(unaff_x22,puVar5);
      if ((int)puVar7 != 0) {
        if (puStack_b0 != (undefined1 *)0x0) {
          unaff_x22 = puStack_b0;
        }
        break;
      }
      puVar5 = unaff_x22;
      FUN_109d67e08(unaff_x22,auStack_a8);
      if (((uint)puVar5 & (uint)(puStack_b0 == (undefined1 *)0x0)) == 0) {
        unaff_x22 = puStack_b0;
      }
      uVar21 = uVar21 + (int)unaff_x23;
      unaff_x23 = (undefined1 *)(ulong)((int)unaff_x23 + 1);
      puStack_b0 = unaff_x22;
    }
    *param_3 = unaff_x22;
    FUN_109d32234(auStack_a0);
    param_1 = alStack_80;
    FUN_109d32234();
    param_3 = puVar12;
    unaff_x20 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar24._8_8_ = puVar5;
    auVar24._0_8_ = puVar6;
    return auVar24;
  }
  ___stack_chk_fail();
  FUN_109d32234(auStack_a0);
  FUN_109d32234(alStack_80);
  plVar8 = param_1;
  __Unwind_Resume();
  plVar4 = (long *)auStack_110;
  puStack_e0 = unaff_x22;
  puStack_d8 = puVar6;
  puStack_d0 = unaff_x20;
  plStack_c8 = param_1;
  ppuStack_c0 = (undefined8 **)&stack0xfffffffffffffff0;
  pcStack_b8 = FUN_109d6cc08;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = *(uint *)(plVar8 + 2);
  if (*(uint *)(plVar8 + 1) * 4 + 4 < uVar21 * 3) {
    plVar15 = param_4;
    if ((uVar21 + ~*(uint *)(plVar8 + 1)) - *(int *)((long)plVar8 + 0xc) <= uVar21 >> 3) {
      FUN_109d6cd44(plVar8);
      FUN_109d6ca70(plVar8,param_3,&plStack_108);
      plVar15 = plStack_108;
    }
  }
  else {
    FUN_109d6cd44(plVar8,uVar21 << 1);
    FUN_109d6ca70(plVar8,param_3,&plStack_108);
    plVar15 = plStack_108;
  }
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  FUN_109de7f14(alStack_100,&UNK_10e05aebc,1);
  pplVar11 = &plStack_108;
  plVar13 = plVar15;
  FUN_109d67e08();
  if (((ulong)plVar13 & 1) == 0) {
    *(int *)((long)plVar8 + 0xc) = *(int *)((long)plVar8 + 0xc) + -1;
  }
  plVar8 = alStack_100;
  FUN_109d32234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    auVar25._8_8_ = pplVar11;
    auVar25._0_8_ = plVar15;
    return auVar25;
  }
  ___stack_chk_fail();
  iVar10 = (int)pplVar11;
  FUN_109d32234(alStack_100);
  plVar13 = plVar8;
  __Unwind_Resume();
  pcStack_118 = FUN_109d6cd44;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(plVar13 + 2);
  lVar16 = *plVar13;
  uVar2 = iVar10 - 1U | iVar10 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar21 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar21 = uVar2 + 1;
  }
  puStack_160 = auStack_a8;
  lStack_158 = unaff_x25;
  puStack_150 = auStack_88;
  puStack_148 = unaff_x23;
  puStack_140 = unaff_x22;
  pplStack_138 = &plStack_108;
  plStack_130 = plVar15;
  plStack_128 = plVar8;
  pppuStack_120 = &ppuStack_c0;
  *(uint *)(plVar13 + 2) = uVar21;
  plVar8 = (long *)((ulong)uVar21 * 0x28);
  __ZnwmSt11align_val_t(plVar8,8);
  *plVar13 = (long)plVar8;
  if (lVar16 == 0) {
    plVar15 = plVar13;
    plVar17 = plStack_128;
    plVar18 = plStack_130;
    ppppuVar22 = (undefined8 ****)pppuStack_120;
    pcVar23 = pcStack_118;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) goto code_r0x000109d6cf40;
  }
  else {
    FUN_109d6cf40(plVar13);
    unaff_x23 = auStack_188;
    FUN_109de7f14(alStack_180,&UNK_10e05aebc,1);
    FUN_109de7f14(auStack_1a0,&UNK_10e05aebc,2);
    if (uVar1 != 0) {
      lVar20 = (ulong)uVar1 * 0x28;
      puVar12 = (undefined8 *)(lVar16 + 0x20);
      do {
        puVar19 = puVar12 + -4;
        puVar9 = puVar19;
        FUN_109d67e08(puVar19,auStack_188);
        if ((((ulong)puVar9 & 1) == 0) &&
           (puVar9 = puVar19, FUN_109d67e08(puVar19,auStack_1a8), ((ulong)puVar9 & 1) == 0)) {
          FUN_109d6ca70(plVar13,puVar19,&lStack_1b0);
          lVar3 = lStack_1b0;
          FUN_109d32568(lStack_1b0 + 8,puVar12 + -3);
          uVar14 = *puVar12;
          *puVar12 = 0;
          *(undefined8 *)(lVar3 + 0x20) = uVar14;
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          FUN_109d67d18(puVar12,0);
        }
        FUN_109d32234(puVar12 + -3);
        puVar12 = puVar12 + 5;
        lVar20 = lVar20 + -0x28;
      } while (lVar20 != 0);
    }
    FUN_109d32234(auStack_1a0);
    plVar8 = alStack_180;
    FUN_109d32234();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
      uVar14 = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar16,8);
      auVar28._8_8_ = uVar14;
      auVar28._0_8_ = lVar16;
      return auVar28;
    }
  }
  ___stack_chk_fail();
  FUN_109d32234(unaff_x23 + 8);
  plVar15 = plVar8;
  __Unwind_Resume();
  plVar4 = &lStack_1b0;
  plVar17 = plVar8;
  plVar18 = plVar13;
  ppppuVar22 = &pppuStack_120;
  pcVar23 = FUN_109d6cf40;
code_r0x000109d6cf40:
  *(long **)((long)plVar4 + -0x20) = plVar18;
  *(long **)((long)plVar4 + -0x18) = plVar17;
  *(undefined8 *****)((long)plVar4 + -0x10) = ppppuVar22;
  *(code **)((long)plVar4 + -8) = pcVar23;
  *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar15[1] = 0;
  plVar8 = (long *)&UNK_10e05aebc;
  plVar13 = (long *)0x1;
  FUN_109de7f14((undefined1 *)((long)plVar4 + -0x40));
  if (*(uint *)(plVar15 + 2) != 0) {
    lVar20 = (ulong)*(uint *)(plVar15 + 2) * 0x28;
    lVar16 = *plVar15 + 8;
    do {
      plVar8 = (long *)((long)plVar4 + -0x40);
      FUN_109d32470(lVar16);
      lVar16 = lVar16 + 0x28;
      lVar20 = lVar20 + -0x28;
    } while (lVar20 != 0);
  }
  puVar5 = (undefined1 *)((long)plVar4 + -0x40);
  FUN_109d32234(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar4 + -0x28)) {
    ___stack_chk_fail();
    __Unwind_Resume(puVar5);
    if (plVar8 != plVar13) {
      plVar4 = param_4 + 1;
      do {
        param_4 = plVar4;
        plVar4 = param_4 + -1;
        lVar16 = *plVar8;
        if (*plVar4 != 0) {
          lVar20 = *param_4;
          *(long *)param_4[1] = lVar20;
          if (lVar20 != 0) {
            *(long *)(lVar20 + 0x10) = param_4[1];
          }
        }
        *plVar4 = lVar16;
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 8);
          lVar16 = *plVar15;
          *param_4 = lVar16;
          if (lVar16 != 0) {
            *(long **)(lVar16 + 0x10) = param_4;
          }
          param_4[1] = (long)plVar15;
          *plVar15 = (long)plVar4;
        }
        plVar8 = plVar8 + 1;
        plVar4 = param_4 + 4;
      } while (plVar8 != plVar13);
      param_4 = param_4 + 3;
      plVar8 = plVar13;
    }
    auVar27._8_8_ = param_4;
    auVar27._0_8_ = plVar8;
    return auVar27;
  }
  auVar26._8_8_ = plVar8;
  auVar26._0_8_ = puVar5;
  return auVar26;
}



/* Entry: 109d6cc08; end: 109d6cd43;  */

undefined1  [16] FUN_109d6cc08(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long *plVar9;
  int iVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *unaff_x23;
  long lVar19;
  undefined8 ****ppppuVar20;
  code *pcVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [8];
  long alStack_d0 [3];
  long lStack_b8;
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long alStack_50 [3];
  long lStack_38;
  
  plVar4 = (long *)auStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar14 * 3) {
    plVar9 = param_4;
    if ((uVar14 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc) <= uVar14 >> 3) {
      FUN_109d6cd44(param_1);
      FUN_109d6ca70(param_1,param_3,&plStack_58);
      plVar9 = plStack_58;
    }
  }
  else {
    FUN_109d6cd44(param_1,uVar14 << 1);
    FUN_109d6ca70(param_1,param_3,&plStack_58);
    plVar9 = plStack_58;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  FUN_109de7f14(alStack_50,&UNK_10e05aebc,1);
  pplVar11 = &plStack_58;
  plVar12 = plVar9;
  FUN_109d67e08();
  if (((ulong)plVar12 & 1) == 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  plVar12 = alStack_50;
  FUN_109d32234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar22._8_8_ = pplVar11;
    auVar22._0_8_ = plVar9;
    return auVar22;
  }
  ___stack_chk_fail();
  iVar10 = (int)pplVar11;
  FUN_109d32234(alStack_50);
  plVar15 = plVar12;
  __Unwind_Resume();
  pcStack_68 = FUN_109d6cd44;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(plVar15 + 2);
  lVar16 = *plVar15;
  uVar2 = iVar10 - 1U | iVar10 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar14 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar14 = uVar2 + 1;
  }
  pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
  *(uint *)(plVar15 + 2) = uVar14;
  plVar5 = (long *)((ulong)uVar14 * 0x28);
  __ZnwmSt11align_val_t(plVar5,8);
  *plVar15 = (long)plVar5;
  if (lVar16 == 0) {
    plVar7 = plVar15;
    ppppuVar20 = (undefined8 ****)pppuStack_70;
    pcVar21 = pcStack_68;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto code_r0x000109d6cf40;
  }
  else {
    FUN_109d6cf40(plVar15);
    unaff_x23 = auStack_d8;
    FUN_109de7f14(alStack_d0,&UNK_10e05aebc,1);
    FUN_109de7f14(auStack_f0,&UNK_10e05aebc,2);
    if (uVar1 != 0) {
      lVar19 = (ulong)uVar1 * 0x28;
      puVar17 = (undefined8 *)(lVar16 + 0x20);
      do {
        puVar18 = puVar17 + -4;
        puVar6 = puVar18;
        FUN_109d67e08(puVar18,auStack_d8);
        if ((((ulong)puVar6 & 1) == 0) &&
           (puVar6 = puVar18, FUN_109d67e08(puVar18,auStack_f8), ((ulong)puVar6 & 1) == 0)) {
          FUN_109d6ca70(plVar15,puVar18,&lStack_100);
          lVar3 = lStack_100;
          FUN_109d32568(lStack_100 + 8,puVar17 + -3);
          uVar13 = *puVar17;
          *puVar17 = 0;
          *(undefined8 *)(lVar3 + 0x20) = uVar13;
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          FUN_109d67d18(puVar17,0);
        }
        FUN_109d32234(puVar17 + -3);
        puVar17 = puVar17 + 5;
        lVar19 = lVar19 + -0x28;
      } while (lVar19 != 0);
    }
    FUN_109d32234(auStack_f0);
    plVar5 = alStack_d0;
    FUN_109d32234();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      uVar13 = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar16,8);
      auVar25._8_8_ = uVar13;
      auVar25._0_8_ = lVar16;
      return auVar25;
    }
  }
  ___stack_chk_fail();
  FUN_109d32234(unaff_x23 + 8);
  plVar7 = plVar5;
  __Unwind_Resume();
  plVar4 = &lStack_100;
  plVar12 = plVar5;
  plVar9 = plVar15;
  ppppuVar20 = &pppuStack_70;
  pcVar21 = FUN_109d6cf40;
code_r0x000109d6cf40:
  *(long **)((long)plVar4 + -0x20) = plVar9;
  *(long **)((long)plVar4 + -0x18) = plVar12;
  *(undefined8 *****)((long)plVar4 + -0x10) = ppppuVar20;
  *(code **)((long)plVar4 + -8) = pcVar21;
  *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar7[1] = 0;
  plVar9 = (long *)&UNK_10e05aebc;
  plVar12 = (long *)0x1;
  FUN_109de7f14((undefined1 *)((long)plVar4 + -0x40));
  if (*(uint *)(plVar7 + 2) != 0) {
    lVar19 = (ulong)*(uint *)(plVar7 + 2) * 0x28;
    lVar16 = *plVar7 + 8;
    do {
      plVar9 = (long *)((long)plVar4 + -0x40);
      FUN_109d32470(lVar16);
      lVar16 = lVar16 + 0x28;
      lVar19 = lVar19 + -0x28;
    } while (lVar19 != 0);
  }
  puVar8 = (undefined1 *)((long)plVar4 + -0x40);
  FUN_109d32234(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar4 + -0x28)) {
    ___stack_chk_fail();
    __Unwind_Resume(puVar8);
    if (plVar9 != plVar12) {
      plVar4 = param_4 + 1;
      do {
        param_4 = plVar4;
        plVar4 = param_4 + -1;
        lVar16 = *plVar9;
        if (*plVar4 != 0) {
          lVar19 = *param_4;
          *(long *)param_4[1] = lVar19;
          if (lVar19 != 0) {
            *(long *)(lVar19 + 0x10) = param_4[1];
          }
        }
        *plVar4 = lVar16;
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 8);
          lVar16 = *plVar15;
          *param_4 = lVar16;
          if (lVar16 != 0) {
            *(long **)(lVar16 + 0x10) = param_4;
          }
          param_4[1] = (long)plVar15;
          *plVar15 = (long)plVar4;
        }
        plVar9 = plVar9 + 1;
        plVar4 = param_4 + 4;
      } while (plVar9 != plVar12);
      param_4 = param_4 + 3;
      plVar9 = plVar12;
    }
    auVar24._8_8_ = param_4;
    auVar24._0_8_ = plVar9;
    return auVar24;
  }
  auVar23._8_8_ = plVar9;
  auVar23._0_8_ = puVar8;
  return auVar23;
}



/* Entry: 109d6cd44; end: 109d6cf3f;  */

undefined1  [16] FUN_109d6cd44(long *param_1,int param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long *unaff_x19;
  long lVar12;
  long *unaff_x20;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *unaff_x23;
  long lVar15;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  long alStack_70 [3];
  long lStack_58;
  
  puVar7 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 2);
  lVar12 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar10 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar10 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar10;
  plVar4 = (long *)((ulong)uVar10 * 0x28);
  __ZnwmSt11align_val_t(plVar4,8);
  *param_1 = (long)plVar4;
  if (lVar12 == 0) {
    plVar6 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto code_r0x000109d6cf40;
  }
  else {
    FUN_109d6cf40(param_1);
    unaff_x23 = auStack_78;
    FUN_109de7f14(alStack_70,&UNK_10e05aebc,1);
    FUN_109de7f14(auStack_90,&UNK_10e05aebc,2);
    if (uVar1 != 0) {
      lVar15 = (ulong)uVar1 * 0x28;
      puVar13 = (undefined8 *)(lVar12 + 0x20);
      do {
        puVar14 = puVar13 + -4;
        puVar5 = puVar14;
        FUN_109d67e08(puVar14,auStack_78);
        if ((((ulong)puVar5 & 1) == 0) &&
           (puVar5 = puVar14, FUN_109d67e08(puVar14,auStack_98), ((ulong)puVar5 & 1) == 0)) {
          FUN_109d6ca70(param_1,puVar14,&lStack_a0);
          lVar3 = lStack_a0;
          FUN_109d32568(lStack_a0 + 8,puVar13 + -3);
          uVar9 = *puVar13;
          *puVar13 = 0;
          *(undefined8 *)(lVar3 + 0x20) = uVar9;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          FUN_109d67d18(puVar13,0);
        }
        FUN_109d32234(puVar13 + -3);
        puVar13 = puVar13 + 5;
        lVar15 = lVar15 + -0x28;
      } while (lVar15 != 0);
    }
    FUN_109d32234(auStack_90);
    plVar4 = alStack_70;
    FUN_109d32234();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      uVar9 = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar12,8);
      auVar18._8_8_ = uVar9;
      auVar18._0_8_ = lVar12;
      return auVar18;
    }
  }
  ___stack_chk_fail();
  FUN_109d32234(unaff_x23 + 8);
  unaff_x30 = FUN_109d6cf40;
  plVar6 = plVar4;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)&lStack_a0;
  unaff_x19 = plVar4;
  unaff_x20 = param_1;
  unaff_x29 = puVar7;
code_r0x000109d6cf40:
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6[1] = 0;
  plVar4 = (long *)&UNK_10e05aebc;
  plVar8 = (long *)0x1;
  FUN_109de7f14((undefined1 *)((long)register0x00000008 + -0x40));
  if (*(uint *)(plVar6 + 2) != 0) {
    lVar15 = (ulong)*(uint *)(plVar6 + 2) * 0x28;
    lVar12 = *plVar6 + 8;
    do {
      plVar4 = (long *)((long)register0x00000008 + -0x40);
      FUN_109d32470(lVar12);
      lVar12 = lVar12 + 0x28;
      lVar15 = lVar15 + -0x28;
    } while (lVar15 != 0);
  }
  puVar7 = (undefined1 *)((long)register0x00000008 + -0x40);
  FUN_109d32234(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x28)) {
    ___stack_chk_fail();
    __Unwind_Resume(puVar7);
    if (plVar4 != plVar8) {
      plVar6 = param_4 + 1;
      do {
        param_4 = plVar6;
        plVar6 = param_4 + -1;
        lVar12 = *plVar4;
        if (*plVar6 != 0) {
          lVar15 = *param_4;
          *(long *)param_4[1] = lVar15;
          if (lVar15 != 0) {
            *(long *)(lVar15 + 0x10) = param_4[1];
          }
        }
        *plVar6 = lVar12;
        if (lVar12 != 0) {
          plVar11 = (long *)(lVar12 + 8);
          lVar12 = *plVar11;
          *param_4 = lVar12;
          if (lVar12 != 0) {
            *(long **)(lVar12 + 0x10) = param_4;
          }
          param_4[1] = (long)plVar11;
          *plVar11 = (long)plVar6;
        }
        plVar4 = plVar4 + 1;
        plVar6 = param_4 + 4;
      } while (plVar4 != plVar8);
      param_4 = param_4 + 3;
      plVar4 = plVar8;
    }
    auVar17._8_8_ = param_4;
    auVar17._0_8_ = plVar4;
    return auVar17;
  }
  auVar16._8_8_ = plVar4;
  auVar16._0_8_ = puVar7;
  return auVar16;
}



/* Entry: 109d6cf40; end: 109d6cffb;  */

undefined1  [16] FUN_109d6cf40(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  plVar2 = (long *)&UNK_10e05aebc;
  plVar3 = (long *)0x1;
  FUN_109de7f14(alStack_40);
  if (*(uint *)(param_1 + 2) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 2) * 0x28;
    lVar4 = *param_1 + 8;
    do {
      plVar2 = alStack_40;
      FUN_109d32470(lVar4);
      lVar4 = lVar4 + 0x28;
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != 0);
  }
  plVar1 = alStack_40;
  FUN_109d32234(plVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume(plVar1);
    if (plVar2 != plVar3) {
      plVar1 = param_4 + 1;
      do {
        param_4 = plVar1;
        plVar1 = param_4 + -1;
        lVar4 = *plVar2;
        if (*plVar1 != 0) {
          lVar6 = *param_4;
          *(long *)param_4[1] = lVar6;
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = param_4[1];
          }
        }
        *plVar1 = lVar4;
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 8);
          lVar4 = *plVar5;
          *param_4 = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = param_4;
          }
          param_4[1] = (long)plVar5;
          *plVar5 = (long)plVar1;
        }
        plVar2 = plVar2 + 1;
        plVar1 = param_4 + 4;
      } while (plVar2 != plVar3);
      param_4 = param_4 + 3;
      plVar2 = plVar3;
    }
    auVar8._8_8_ = param_4;
    auVar8._0_8_ = plVar2;
    return auVar8;
  }
  auVar7._8_8_ = plVar2;
  auVar7._0_8_ = plVar1;
  return auVar7;
}



/* Entry: 109d6cffc; end: 109d6d073;  */

undefined1  [16] FUN_109d6cffc(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  if (param_2 != param_3) {
    plVar2 = param_4 + 1;
    do {
      param_4 = plVar2;
      plVar2 = param_4 + -1;
      lVar3 = *param_2;
      if (*plVar2 != 0) {
        lVar1 = *param_4;
        *(long *)param_4[1] = lVar1;
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x10) = param_4[1];
        }
      }
      *plVar2 = lVar3;
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 8);
        lVar3 = *plVar4;
        *param_4 = lVar3;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = param_4;
        }
        param_4[1] = (long)plVar4;
        *plVar4 = (long)plVar2;
      }
      param_2 = param_2 + 1;
      plVar2 = param_4 + 4;
    } while (param_2 != param_3);
    param_4 = param_4 + 3;
    param_2 = param_3;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 109d6d074; end: 109d6d0ff;  */

/* WARNING: Possible PIC construction at 0x000109d6d0d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d6d0d4) */
/* WARNING: Removing unreachable block (ram,0x000109d6d0fc) */
/* WARNING: Removing unreachable block (ram,0x000109d6d0ec) */

void FUN_109d6d074(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1[1];
  func_0x000109d6d258(uVar1,uVar1 + param_1[2] * 8);
  FUN_109d2fb48(auStack_a8);
  uStack_f0 = 0;
  puVar2 = auStack_a8;
  func_0x000109d6d178(auStack_a8,&uStack_f0,auStack_a8,auStack_68,*param_1);
  uStack_e8 = uStack_f0;
  puVar3 = auStack_a8;
  FUN_109d35318(auStack_a8,&uStack_e8,puVar2,auStack_68,uVar1 & 0xffffffff);
  func_0x000109d353f8(auStack_a8,uStack_e8,puVar3,auStack_68);
  return;
}



/* Entry: 109d6d100; end: 109d6d363;  */

void FUN_109d6d100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  func_0x000109d6d178(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d6d364; end: 109d6d44b;  */

undefined8 FUN_109d6d364(long *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *param_1;
    puVar7 = param_2 + 2;
    uVar2 = (int)param_1[2] - 1;
    uVar10 = *param_2 & uVar2;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
    puVar3 = puVar7;
    FUN_109d6d44c(puVar7,*plVar8);
    if (((ulong)puVar3 & 1) == 0) {
      plVar5 = (long *)0x0;
      iVar6 = 1;
      do {
        if (*plVar8 == -0x1000) {
          uVar4 = 0;
          if (plVar5 != (long *)0x0) {
            plVar8 = plVar5;
          }
          goto LAB_109d6d3c4;
        }
        plVar1 = plVar8;
        if (plVar5 != (long *)0x0 || *plVar8 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar10 = uVar10 + iVar6 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
        puVar3 = puVar7;
        FUN_109d6d44c(puVar7,*plVar8);
        plVar5 = plVar1;
        iVar6 = iVar6 + 1;
      } while ((int)puVar3 == 0);
    }
    uVar4 = 1;
  }
LAB_109d6d3c4:
  *param_3 = (long)plVar8;
  return uVar4;
}



/* Entry: 109d6d44c; end: 109d6d4bf;  */

bool FUN_109d6d44c(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  if (((((ulong)param_2 | 0x1000) == 0xfffffffffffff000) || (*param_1 != *param_2)) ||
     (uVar4 = param_1[2], uVar4 != ((ulong)*(uint *)((long)param_2 + 0x14) & 0x7ffffff))) {
    bVar1 = false;
  }
  else {
    if (uVar4 == 0) {
      return true;
    }
    plVar2 = (long *)param_1[1];
    plVar3 = param_2 + uVar4 * -4;
    do {
      uVar4 = uVar4 - 1;
      bVar1 = *plVar2 == *plVar3;
      if (!bVar1) {
        return bVar1;
      }
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 != 0);
  }
  return bVar1;
}



/* Entry: 109d6d4c0; end: 109d6d51f;  */

undefined8 FUN_109d6d4c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  FUN_109da2290(0x18,*(undefined4 *)(param_1 + 8));
  FUN_109d67ea4();
  return uVar1;
}



/* Entry: 109d6d520; end: 109d6d5a7;  */

void FUN_109d6d520(ulong *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  FUN_109d6d364(param_2,param_4,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d6d5a8(param_2,param_3,param_4);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d6d5a8; end: 109d6d64f;  */

long * FUN_109d6d5a8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6d5f4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6d650(param_1,uVar1);
  FUN_109d6d364(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6d5f4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6d650; end: 109d6d7df;  */

void FUN_109d6d650(long *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  
  uVar2 = *(uint *)(param_1 + 2);
  puVar12 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar8 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar8 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar8;
  puVar4 = (undefined8 *)((ulong)uVar8 << 3);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = (long)puVar4;
  if (puVar12 == (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar4 = 0xfffffffffffff000;
        lVar6 = lVar6 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar6 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar4 = 0xfffffffffffff000;
      lVar6 = lVar6 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
  }
  if (uVar2 != 0) {
    puVar13 = puVar12;
    do {
      uVar5 = *puVar13;
      if ((uVar5 | 0x1000) != 0xfffffffffffff000) {
        lVar14 = *param_1;
        lVar6 = param_1[2];
        FUN_109d6d7e0();
        uVar3 = (int)lVar6 - 1;
        uVar7 = *puVar13;
        uVar8 = (uint)uVar5 & uVar3;
        puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
        uVar5 = *puVar9;
        if (uVar7 != uVar5) {
          iVar11 = 1;
          puVar10 = (ulong *)0x0;
          do {
            if (uVar5 == 0xfffffffffffff000) {
              if (puVar10 != (ulong *)0x0) {
                puVar9 = puVar10;
              }
              break;
            }
            puVar1 = puVar9;
            if (puVar10 != (ulong *)0x0 || uVar5 != 0xffffffffffffe000) {
              puVar1 = puVar10;
            }
            uVar8 = uVar8 + iVar11;
            iVar11 = iVar11 + 1;
            uVar8 = uVar8 & uVar3;
            puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
            uVar5 = *puVar9;
            puVar10 = puVar1;
          } while (uVar7 != uVar5);
        }
        *puVar9 = uVar7;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar12 + uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar12,8);
  return;
}



/* Entry: 109d6d7e0; end: 109d6d8eb;  */

long * FUN_109d6d7e0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lStack_248;
  uint uStack_240;
  long *plStack_238;
  ulong uStack_230;
  long alStack_228 [16];
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_170;
  long *plStack_168;
  ulong uStack_160;
  long *plStack_158;
  ulong uStack_150;
  long alStack_148 [32];
  long lStack_48;
  
  plVar1 = &lStack_170;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0x2000000000;
  lVar6 = *param_1;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff;
  plVar5 = param_1;
  plStack_158 = alStack_148;
  if ((int)uVar7 == 0) {
    uStack_160 = 0;
  }
  else {
    do {
      param_2 = (long *)plVar5[((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4];
      FUN_109d31fec(&plStack_158);
      uVar7 = uVar7 - 1;
      plVar5 = plVar5 + 4;
    } while (uVar7 != 0);
    uStack_160 = uStack_150 & 0xffffffff;
    uVar7 = 0;
  }
  lStack_170 = lVar6;
  plStack_168 = plStack_158;
  FUN_109d6d074(&lStack_170);
  plVar5 = plStack_158;
  if (plStack_158 != alStack_148) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (plStack_158 != alStack_148) {
    _free();
  }
  plVar1 = plVar5;
  __Unwind_Resume();
  pcStack_178 = FUN_109d6d8ec;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_230 = 0x1000000000;
  plStack_238 = alStack_228;
  uStack_1a0 = uVar7;
  lStack_198 = lVar6;
  plStack_190 = alStack_148;
  plStack_188 = plVar5;
  puStack_180 = &stack0xfffffffffffffff0;
  if (param_2 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar6 = (long)param_2 << 3;
    plVar5 = plVar1;
    do {
      uVar3 = SUB82(param_2,0);
      lVar4 = *plVar5;
      if (lVar4 == 0 || *(char *)(lVar4 + 0x10) != '\x11') {
        plVar5 = (long *)0x0;
        goto LAB_109d6d9d4;
      }
      FUN_109d323e4(&lStack_248,lVar4 + 0x18);
      param_2 = &lStack_248;
      func_0x000109d30394(param_2,0xffffffffffffffff);
      FUN_109d38988(&plStack_238);
      if ((0x40 < uStack_240) && (lStack_248 != 0)) {
        __ZdaPv();
      }
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    uVar7 = uStack_230 & 0xffffffff;
  }
  plVar5 = plStack_238;
  uVar2 = *(undefined8 *)*plVar1;
  FUN_109d9ffc0(uVar2,uVar7);
  lVar6 = uVar7 << 3;
  FUN_109d6b230(plVar5,lVar6,uVar2);
  uVar3 = (undefined2)lVar6;
LAB_109d6d9d4:
  plVar1 = plStack_238;
  if (plStack_238 != alStack_228) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (plStack_238 != alStack_228) {
    _free();
  }
  __Unwind_Resume();
  lVar6 = plVar1[1];
  plVar5 = plVar1;
  if ((ulong)plVar1[2] < lVar6 + 1U) {
    FUN_109dffce4(plVar1,plVar1 + 3,lVar6 + 1U,2);
    lVar6 = plVar1[1];
  }
  *(undefined2 *)(*plVar1 + lVar6 * 2) = uVar3;
  plVar1[1] = plVar1[1] + 1;
  return plVar5;
}



/* Entry: 109d6d8ec; end: 109d6da57;  */

long * FUN_109d6d8ec(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lStack_d8;
  uint uStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  long alStack_b8 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = 0x1000000000;
  plStack_c8 = alStack_b8;
  if (param_2 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar6 = (long)param_2 << 3;
    plVar5 = param_1;
    do {
      uVar3 = SUB82(param_2,0);
      lVar4 = *plVar5;
      if (lVar4 == 0 || *(char *)(lVar4 + 0x10) != '\x11') {
        plVar5 = (long *)0x0;
        goto LAB_109d6d9d4;
      }
      FUN_109d323e4(&lStack_d8,lVar4 + 0x18);
      param_2 = &lStack_d8;
      func_0x000109d30394(param_2,0xffffffffffffffff);
      FUN_109d38988(&plStack_c8);
      if ((0x40 < uStack_d0) && (lStack_d8 != 0)) {
        __ZdaPv();
      }
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    uVar7 = uStack_c0 & 0xffffffff;
  }
  plVar5 = plStack_c8;
  uVar1 = *(undefined8 *)*param_1;
  FUN_109d9ffc0(uVar1,uVar7);
  lVar6 = uVar7 << 3;
  FUN_109d6b230(plVar5,lVar6,uVar1);
  uVar3 = (undefined2)lVar6;
LAB_109d6d9d4:
  plVar2 = plStack_c8;
  if (plStack_c8 != alStack_b8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (plStack_c8 != alStack_b8) {
    _free();
  }
  __Unwind_Resume();
  lVar6 = plVar2[1];
  plVar5 = plVar2;
  if ((ulong)plVar2[2] < lVar6 + 1U) {
    FUN_109dffce4(plVar2,plVar2 + 3,lVar6 + 1U,2);
    lVar6 = plVar2[1];
  }
  *(undefined2 *)(*plVar2 + lVar6 * 2) = uVar3;
  plVar2[1] = plVar2[1] + 1;
  return plVar5;
}



/* Entry: 109d6da58; end: 109d6db3f;  */

void FUN_109d6da58(long *param_1,undefined2 param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((ulong)param_1[2] < lVar1 + 1U) {
    FUN_109dffce4(param_1,param_1 + 3,lVar1 + 1U,2);
    lVar1 = param_1[1];
  }
  *(undefined2 *)(*param_1 + lVar1 * 2) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



/* Entry: 109d6db40; end: 109d6dc97;  */

void FUN_109d6db40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  func_0x000109d6dbb8(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d6dc98; end: 109d6dd7f;  */

undefined8 FUN_109d6dc98(long *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *param_1;
    puVar7 = param_2 + 2;
    uVar2 = (int)param_1[2] - 1;
    uVar10 = *param_2 & uVar2;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
    puVar3 = puVar7;
    FUN_109d6dd80(puVar7,*plVar8);
    if (((ulong)puVar3 & 1) == 0) {
      plVar5 = (long *)0x0;
      iVar6 = 1;
      do {
        if (*plVar8 == -0x1000) {
          uVar4 = 0;
          if (plVar5 != (long *)0x0) {
            plVar8 = plVar5;
          }
          goto LAB_109d6dcf8;
        }
        plVar1 = plVar8;
        if (plVar5 != (long *)0x0 || *plVar8 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar10 = uVar10 + iVar6 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
        puVar3 = puVar7;
        FUN_109d6dd80(puVar7,*plVar8);
        plVar5 = plVar1;
        iVar6 = iVar6 + 1;
      } while ((int)puVar3 == 0);
    }
    uVar4 = 1;
  }
LAB_109d6dcf8:
  *param_3 = (long)plVar8;
  return uVar4;
}



/* Entry: 109d6dd80; end: 109d6ddf3;  */

bool FUN_109d6dd80(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  if (((((ulong)param_2 | 0x1000) == 0xfffffffffffff000) || (*param_1 != *param_2)) ||
     (uVar4 = param_1[2], uVar4 != ((ulong)*(uint *)((long)param_2 + 0x14) & 0x7ffffff))) {
    bVar1 = false;
  }
  else {
    if (uVar4 == 0) {
      return true;
    }
    plVar2 = (long *)param_1[1];
    plVar3 = param_2 + uVar4 * -4;
    do {
      uVar4 = uVar4 - 1;
      bVar1 = *plVar2 == *plVar3;
      if (!bVar1) {
        return bVar1;
      }
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 != 0);
  }
  return bVar1;
}



/* Entry: 109d6ddf4; end: 109d6de53;  */

undefined8 FUN_109d6ddf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  FUN_109da2290(0x18,*(undefined4 *)(param_1 + 8));
  FUN_109d67ea4();
  return uVar1;
}



/* Entry: 109d6de54; end: 109d6dedb;  */

void FUN_109d6de54(ulong *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  FUN_109d6dc98(param_2,param_4,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d6dedc(param_2,param_3,param_4);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d6dedc; end: 109d6df83;  */

long * FUN_109d6dedc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6df28;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6df84(param_1,uVar1);
  FUN_109d6dc98(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6df28:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6df84; end: 109d6e113;  */

void FUN_109d6df84(long *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  
  uVar2 = *(uint *)(param_1 + 2);
  puVar12 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar8 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar8 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar8;
  puVar4 = (undefined8 *)((ulong)uVar8 << 3);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = (long)puVar4;
  if (puVar12 == (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar4 = 0xfffffffffffff000;
        lVar6 = lVar6 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar6 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar4 = 0xfffffffffffff000;
      lVar6 = lVar6 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
  }
  if (uVar2 != 0) {
    puVar13 = puVar12;
    do {
      uVar5 = *puVar13;
      if ((uVar5 | 0x1000) != 0xfffffffffffff000) {
        lVar14 = *param_1;
        lVar6 = param_1[2];
        FUN_109d6e114();
        uVar3 = (int)lVar6 - 1;
        uVar7 = *puVar13;
        uVar8 = (uint)uVar5 & uVar3;
        puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
        uVar5 = *puVar9;
        if (uVar7 != uVar5) {
          iVar11 = 1;
          puVar10 = (ulong *)0x0;
          do {
            if (uVar5 == 0xfffffffffffff000) {
              if (puVar10 != (ulong *)0x0) {
                puVar9 = puVar10;
              }
              break;
            }
            puVar1 = puVar9;
            if (puVar10 != (ulong *)0x0 || uVar5 != 0xffffffffffffe000) {
              puVar1 = puVar10;
            }
            uVar8 = uVar8 + iVar11;
            iVar11 = iVar11 + 1;
            uVar8 = uVar8 & uVar3;
            puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
            uVar5 = *puVar9;
            puVar10 = puVar1;
          } while (uVar7 != uVar5);
        }
        *puVar9 = uVar7;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar12 + uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar12,8);
  return;
}



/* Entry: 109d6e114; end: 109d6e21f;  */

undefined1 * FUN_109d6e114(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined4 uStack_21c;
  undefined1 auStack_218 [64];
  undefined1 auStack_1d8 [64];
  long lStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  ulong uStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined1 auStack_148 [256];
  long lStack_48;
  
  puVar1 = &uStack_170;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0x2000000000;
  uVar9 = *param_1;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff;
  puVar11 = param_1;
  puStack_158 = auStack_148;
  if ((int)uVar10 == 0) {
    uStack_160 = 0;
  }
  else {
    do {
      FUN_109d31fec(&puStack_158,puVar11[((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4])
      ;
      uVar10 = uVar10 - 1;
      puVar11 = puVar11 + 4;
    } while (uVar10 != 0);
    uStack_160 = uStack_150 & 0xffffffff;
    uVar10 = 0;
  }
  uStack_170 = uVar9;
  puStack_168 = puStack_158;
  func_0x000109d6dab4(&uStack_170);
  puVar2 = puStack_158;
  if (puStack_158 != auStack_148) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (puStack_158 != auStack_148) {
      _free();
    }
    puVar3 = puVar2;
    __Unwind_Resume();
    pcStack_178 = FUN_109d6e220;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = *(long *)(puVar3 + 8);
    puStack_190 = auStack_148;
    puStack_188 = puVar2;
    puStack_180 = &stack0xfffffffffffffff0;
    func_0x000109d6d258(lVar4,lVar4 + *(long *)(puVar3 + 0x10) * 8);
    uStack_21c = (undefined4)lVar4;
    FUN_109d2fb48(auStack_218);
    puVar2 = auStack_218;
    puVar7 = auStack_1d8;
    puVar8 = &uStack_21c;
    uVar6 = 0;
    FUN_109d6e2ac(puVar2,0,auStack_218,puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      pcStack_228 = FUN_109d6e2ac;
      puVar5 = puVar2;
      uStack_250 = uVar10;
      uStack_248 = uVar9;
      puStack_240 = auStack_218;
      puStack_238 = puVar3;
      ppuStack_230 = &puStack_180;
      func_0x000109d6e324();
      puVar3 = puVar2;
      uStack_258 = uVar6;
      FUN_109d35318(puVar2,&uStack_258,puVar5,puVar7,*puVar8);
      func_0x000109d353f8(puVar2,uStack_258,puVar3,puVar7);
      return puVar2;
    }
    return puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109d6e220; end: 109d6e2ab;  */

void FUN_109d6e220(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined8 uStack_e8;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x000109d6d258(lVar1,lVar1 + *(long *)(param_1 + 0x10) * 8);
  uStack_ac = (undefined4)lVar1;
  FUN_109d2fb48(auStack_a8);
  puVar2 = auStack_a8;
  puVar6 = auStack_68;
  puVar7 = &uStack_ac;
  uVar5 = 0;
  FUN_109d6e2ac(puVar2,0,auStack_a8,puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x000109d6e324();
  puVar4 = puVar2;
  uStack_e8 = uVar5;
  FUN_109d35318(puVar2,&uStack_e8,puVar3,puVar6,*puVar7);
  func_0x000109d353f8(puVar2,uStack_e8,puVar4,puVar6);
  return;
}



/* Entry: 109d6e2ac; end: 109d6e403;  */

void FUN_109d6e2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uStack_40 = param_2;
  func_0x000109d6e324(param_1,&uStack_40,param_3,param_4,*param_5);
  uStack_38 = uStack_40;
  uVar2 = param_1;
  FUN_109d35318(param_1,&uStack_38,uVar1,param_4,*param_6);
  func_0x000109d353f8(param_1,uStack_38,uVar2,param_4);
  return;
}



/* Entry: 109d6e404; end: 109d6e4eb;  */

undefined8 FUN_109d6e404(long *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar9 = *param_1;
    puVar7 = param_2 + 2;
    uVar2 = (int)param_1[2] - 1;
    uVar10 = *param_2 & uVar2;
    plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
    puVar3 = puVar7;
    FUN_109d6e4ec(puVar7,*plVar8);
    if (((ulong)puVar3 & 1) == 0) {
      plVar5 = (long *)0x0;
      iVar6 = 1;
      do {
        if (*plVar8 == -0x1000) {
          uVar4 = 0;
          if (plVar5 != (long *)0x0) {
            plVar8 = plVar5;
          }
          goto LAB_109d6e464;
        }
        plVar1 = plVar8;
        if (plVar5 != (long *)0x0 || *plVar8 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar10 = uVar10 + iVar6 & uVar2;
        plVar8 = (long *)(lVar9 + (ulong)uVar10 * 8);
        puVar3 = puVar7;
        FUN_109d6e4ec(puVar7,*plVar8);
        plVar5 = plVar1;
        iVar6 = iVar6 + 1;
      } while ((int)puVar3 == 0);
    }
    uVar4 = 1;
  }
LAB_109d6e464:
  *param_3 = (long)plVar8;
  return uVar4;
}



/* Entry: 109d6e4ec; end: 109d6e55f;  */

bool FUN_109d6e4ec(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  if (((((ulong)param_2 | 0x1000) == 0xfffffffffffff000) || (*param_1 != *param_2)) ||
     (uVar4 = param_1[2], uVar4 != ((ulong)*(uint *)((long)param_2 + 0x14) & 0x7ffffff))) {
    bVar1 = false;
  }
  else {
    if (uVar4 == 0) {
      return true;
    }
    plVar2 = (long *)param_1[1];
    plVar3 = param_2 + uVar4 * -4;
    do {
      uVar4 = uVar4 - 1;
      bVar1 = *plVar2 == *plVar3;
      if (!bVar1) {
        return bVar1;
      }
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 != 0);
  }
  return bVar1;
}



/* Entry: 109d6e560; end: 109d6e5bf;  */

undefined8 FUN_109d6e560(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  FUN_109da2290(0x18,*(undefined4 *)(param_1 + 8));
  FUN_109d67ea4();
  return uVar1;
}



/* Entry: 109d6e5c0; end: 109d6e647;  */

void FUN_109d6e5c0(ulong *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  FUN_109d6e404(param_2,param_4,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d6e648(param_2,param_3,param_4);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d6e648; end: 109d6e6ef;  */

long * FUN_109d6e648(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6e694;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6e6f0(param_1,uVar1);
  FUN_109d6e404(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6e694:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6e6f0; end: 109d6e87f;  */

void FUN_109d6e6f0(long *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  
  uVar2 = *(uint *)(param_1 + 2);
  puVar12 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar8 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar8 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar8;
  puVar4 = (undefined8 *)((ulong)uVar8 << 3);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = (long)puVar4;
  if (puVar12 == (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar4 = 0xfffffffffffff000;
        lVar6 = lVar6 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar6 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar4 = 0xfffffffffffff000;
      lVar6 = lVar6 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
  }
  if (uVar2 != 0) {
    puVar13 = puVar12;
    do {
      uVar5 = *puVar13;
      if ((uVar5 | 0x1000) != 0xfffffffffffff000) {
        lVar14 = *param_1;
        lVar6 = param_1[2];
        FUN_109d6e880();
        uVar3 = (int)lVar6 - 1;
        uVar7 = *puVar13;
        uVar8 = (uint)uVar5 & uVar3;
        puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
        uVar5 = *puVar9;
        if (uVar7 != uVar5) {
          iVar11 = 1;
          puVar10 = (ulong *)0x0;
          do {
            if (uVar5 == 0xfffffffffffff000) {
              if (puVar10 != (ulong *)0x0) {
                puVar9 = puVar10;
              }
              break;
            }
            puVar1 = puVar9;
            if (puVar10 != (ulong *)0x0 || uVar5 != 0xffffffffffffe000) {
              puVar1 = puVar10;
            }
            uVar8 = uVar8 + iVar11;
            iVar11 = iVar11 + 1;
            uVar8 = uVar8 & uVar3;
            puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
            uVar5 = *puVar9;
            puVar10 = puVar1;
          } while (uVar7 != uVar5);
        }
        *puVar9 = uVar7;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar12 + uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar12,8);
  return;
}



/* Entry: 109d6e880; end: 109d6e98b;  */

long * FUN_109d6e880(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plStack_278;
  long lStack_248;
  uint uStack_240;
  long *plStack_238;
  ulong uStack_230;
  long alStack_228 [16];
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_170;
  long *plStack_168;
  ulong uStack_160;
  long *plStack_158;
  ulong uStack_150;
  long alStack_148 [32];
  long lStack_48;
  
  plVar1 = &lStack_170;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0x2000000000;
  lVar5 = *param_1;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff;
  plVar4 = param_1;
  plStack_158 = alStack_148;
  if ((int)uVar6 == 0) {
    uStack_160 = 0;
  }
  else {
    do {
      param_2 = (long *)plVar4[((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4];
      FUN_109d31fec(&plStack_158);
      uVar6 = uVar6 - 1;
      plVar4 = plVar4 + 4;
    } while (uVar6 != 0);
    uStack_160 = uStack_150 & 0xffffffff;
    uVar6 = 0;
  }
  lStack_170 = lVar5;
  plStack_168 = plStack_158;
  FUN_109d6e220(&lStack_170);
  plVar4 = plStack_158;
  if (plStack_158 != alStack_148) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (plStack_158 != alStack_148) {
    _free();
  }
  plVar1 = plVar4;
  __Unwind_Resume();
  pcStack_178 = FUN_109d6e98c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_230 = 0x1000000000;
  plStack_238 = alStack_228;
  uStack_1a0 = uVar6;
  lStack_198 = lVar5;
  plStack_190 = alStack_148;
  plStack_188 = plVar4;
  puStack_180 = &stack0xfffffffffffffff0;
  if (param_2 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar5 = (long)param_2 << 3;
    plVar4 = plVar1;
    do {
      lVar3 = *plVar4;
      if (lVar3 == 0 || *(char *)(lVar3 + 0x10) != '\x11') {
        plVar4 = (long *)0x0;
        goto LAB_109d6ea74;
      }
      FUN_109d323e4(&lStack_248,lVar3 + 0x18);
      param_2 = &lStack_248;
      func_0x000109d30394(param_2,0xffffffffffffffff);
      FUN_109d38988(&plStack_238);
      if ((0x40 < uStack_240) && (lStack_248 != 0)) {
        __ZdaPv();
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    uVar6 = uStack_230 & 0xffffffff;
  }
  plVar4 = plStack_238;
  uVar2 = *(undefined8 *)*plVar1;
  func_0x000109da00ec(uVar2,uVar6);
  param_2 = (long *)(uVar6 << 3);
  FUN_109d6b230(plVar4,param_2,uVar2);
LAB_109d6ea74:
  plVar1 = plStack_238;
  if (plStack_238 != alStack_228) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (plStack_238 != alStack_228) {
    _free();
  }
  __Unwind_Resume();
  plVar4 = plVar1;
  FUN_109d6eb50();
  if (((ulong)plVar4 & 1) == 0) {
    FUN_109d6ebe8(plVar1,param_2,param_2);
    *plVar1 = *param_2;
    plVar1[1] = 0;
    plStack_278 = plVar1;
  }
  return plStack_278;
}



/* Entry: 109d6e98c; end: 109d6eaf7;  */

long * FUN_109d6e98c(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plStack_108;
  long lStack_d8;
  uint uStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  long alStack_b8 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = 0x1000000000;
  plStack_c8 = alStack_b8;
  if (param_2 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar5 = (long)param_2 << 3;
    plVar4 = param_1;
    do {
      lVar3 = *plVar4;
      if (lVar3 == 0 || *(char *)(lVar3 + 0x10) != '\x11') {
        plVar4 = (long *)0x0;
        goto LAB_109d6ea74;
      }
      FUN_109d323e4(&lStack_d8,lVar3 + 0x18);
      param_2 = &lStack_d8;
      func_0x000109d30394(param_2,0xffffffffffffffff);
      FUN_109d38988(&plStack_c8);
      if ((0x40 < uStack_d0) && (lStack_d8 != 0)) {
        __ZdaPv();
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    uVar6 = uStack_c0 & 0xffffffff;
  }
  plVar4 = plStack_c8;
  uVar1 = *(undefined8 *)*param_1;
  func_0x000109da00ec(uVar1,uVar6);
  param_2 = (long *)(uVar6 << 3);
  FUN_109d6b230(plVar4,param_2,uVar1);
LAB_109d6ea74:
  plVar2 = plStack_c8;
  if (plStack_c8 != alStack_b8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (plStack_c8 != alStack_b8) {
    _free();
  }
  __Unwind_Resume();
  plVar4 = plVar2;
  FUN_109d6eb50();
  if (((ulong)plVar4 & 1) == 0) {
    FUN_109d6ebe8(plVar2,param_2,param_2);
    *plVar2 = *param_2;
    plVar2[1] = 0;
    plStack_108 = plVar2;
  }
  return plStack_108;
}



/* Entry: 109d6eaf8; end: 109d6eb4f;  */

undefined8 * FUN_109d6eaf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6eb50(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d6ebe8(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6eb50; end: 109d6ebe7;  */

undefined8 FUN_109d6eb50(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d6eb90;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d6eb90:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d6ebe8; end: 109d6ec8f;  */

long * FUN_109d6ebe8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6ec34;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6ec90(param_1,uVar1);
  FUN_109d6eb50(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6ec34:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6ec90; end: 109d6edcb;  */

void FUN_109d6ec90(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar7 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar7 != 0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar3 = (undefined8 *)(lVar7 + 8);
      do {
        if ((puVar3[-1] | 0x1000) != 0xfffffffffffff000) {
          FUN_109d6eb50(param_1,puVar3 + -1,&puStack_38);
          *puStack_38 = puVar3[-1];
          uVar6 = *puVar3;
          *puVar3 = 0;
          puStack_38[1] = uVar6;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          FUN_109d69b08(puVar3,0);
        }
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar7,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar7 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar7 = lVar7 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 109d6edcc; end: 109d6ee23;  */

undefined8 * FUN_109d6edcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6ee24(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d6eebc(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6ee24; end: 109d6eebb;  */

undefined8 FUN_109d6ee24(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d6ee64;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d6ee64:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d6eebc; end: 109d6ef63;  */

long * FUN_109d6eebc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6ef08;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6ef64(param_1,uVar1);
  FUN_109d6ee24(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6ef08:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6ef64; end: 109d6f09f;  */

void FUN_109d6ef64(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar7 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar7 != 0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar3 = (undefined8 *)(lVar7 + 8);
      do {
        if ((puVar3[-1] | 0x1000) != 0xfffffffffffff000) {
          FUN_109d6ee24(param_1,puVar3 + -1,&puStack_38);
          *puStack_38 = puVar3[-1];
          uVar6 = *puVar3;
          *puVar3 = 0;
          puStack_38[1] = uVar6;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          func_0x000109d69d80(puVar3,0);
        }
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar7,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar7 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar7 = lVar7 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 109d6f0a0; end: 109d6f0f7;  */

undefined8 * FUN_109d6f0a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6f0f8(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d6f190(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6f0f8; end: 109d6f18f;  */

undefined8 FUN_109d6f0f8(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d6f138;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d6f138:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d6f190; end: 109d6f237;  */

long * FUN_109d6f190(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6f1dc;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6f238(param_1,uVar1);
  FUN_109d6f0f8(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6f1dc:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6f238; end: 109d6f373;  */

void FUN_109d6f238(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar7 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar7 != 0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar3 = (undefined8 *)(lVar7 + 8);
      do {
        if ((puVar3[-1] | 0x1000) != 0xfffffffffffff000) {
          FUN_109d6f0f8(param_1,puVar3 + -1,&puStack_38);
          *puStack_38 = puVar3[-1];
          uVar6 = *puVar3;
          *puVar3 = 0;
          puStack_38[1] = uVar6;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          func_0x000109d69da8(puVar3,0);
        }
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar7,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar7 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar7 = lVar7 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 109d6f374; end: 109d6f3cb;  */

undefined8 * FUN_109d6f374(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6f3cc(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d6f464(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6f3cc; end: 109d6f463;  */

undefined8 FUN_109d6f3cc(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d6f40c;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d6f40c:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d6f464; end: 109d6f50b;  */

long * FUN_109d6f464(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6f4b0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6f50c(param_1,uVar1);
  FUN_109d6f3cc(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6f4b0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6f50c; end: 109d6f647;  */

void FUN_109d6f50c(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar7 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar7 != 0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar3 = (undefined8 *)(lVar7 + 8);
      do {
        if ((puVar3[-1] | 0x1000) != 0xfffffffffffff000) {
          FUN_109d6f3cc(param_1,puVar3 + -1,&puStack_38);
          *puStack_38 = puVar3[-1];
          uVar6 = *puVar3;
          *puVar3 = 0;
          puStack_38[1] = uVar6;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          func_0x000109d69dd0(puVar3,0);
        }
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar7,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar7 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar7 = lVar7 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 109d6f648; end: 109d6f6df;  */

undefined8 FUN_109d6f648(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d6f688;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d6f688:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d6f6e0; end: 109d6f7df;  */

undefined8 * FUN_109d6f6e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6f648(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109d6f738(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6f7e0; end: 109d6f91b;  */

void FUN_109d6f7e0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar7 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar7 != 0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar3 = (undefined8 *)(lVar7 + 8);
      do {
        if ((puVar3[-1] | 0x1000) != 0xfffffffffffff000) {
          FUN_109d6f648(param_1,puVar3 + -1,&puStack_38);
          *puStack_38 = puVar3[-1];
          uVar6 = *puVar3;
          *puVar3 = 0;
          puStack_38[1] = uVar6;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          FUN_109d69eb0(puVar3,0);
        }
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar7,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar7 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar7 = lVar7 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 109d6f91c; end: 109d6f97b;  */

undefined8 * FUN_109d6f91c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6f97c(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d6faa4(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6f97c; end: 109d6fa4f;  */

undefined8 FUN_109d6f97c(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = param_1[2];
  if ((int)lVar8 == 0) {
    uVar4 = 0;
    plVar5 = (long *)0x0;
  }
  else {
    lVar10 = *param_1;
    plVar5 = param_2;
    FUN_109d6fa50();
    uVar2 = (int)lVar8 - 1;
    uVar6 = (uint)plVar5 & uVar2;
    plVar5 = (long *)(lVar10 + (ulong)uVar6 * 0x18);
    lVar8 = *plVar5;
    lVar9 = plVar5[1];
    if (*param_2 != lVar8 || param_2[1] != lVar9) {
      iVar3 = 1;
      plVar7 = (long *)0x0;
      do {
        if ((lVar8 == -0x1000) && (lVar9 == -0x1000)) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            plVar5 = plVar7;
          }
          goto LAB_109d6f9dc;
        }
        plVar1 = plVar5;
        if ((plVar7 != (long *)0x0 || lVar9 != -0x2000) || lVar8 != -0x2000) {
          plVar1 = plVar7;
        }
        uVar6 = uVar6 + iVar3;
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 & uVar2;
        plVar5 = (long *)(lVar10 + (ulong)uVar6 * 0x18);
        lVar8 = *plVar5;
        lVar9 = plVar5[1];
        plVar7 = plVar1;
      } while (*param_2 != lVar8 || param_2[1] != lVar9);
    }
    uVar4 = 1;
  }
LAB_109d6f9dc:
  *param_3 = plVar5;
  return uVar4;
}



/* Entry: 109d6fa50; end: 109d6faa3;  */

uint FUN_109d6fa50(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2] >> 4 ^ param_1[2] >> 9;
  uVar2 = CONCAT44(*param_1 >> 4 ^ *param_1 >> 9,uVar1) +
          ((ulong)uVar1 << 0x20 ^ 0xffffffffffffffff);
  uVar2 = uVar2 ^ uVar2 >> 0x16;
  uVar2 = uVar2 + (uVar2 << 0xd ^ 0xffffffffffffffff);
  uVar2 = (uVar2 ^ uVar2 >> 8) * 9;
  uVar2 = uVar2 ^ uVar2 >> 0xf;
  uVar2 = uVar2 + (uVar2 << 0x1b ^ 0xffffffffffffffff);
  return (uint)(uVar2 >> 0x1f) ^ (uint)uVar2;
}



/* Entry: 109d6faa4; end: 109d6fb57;  */

long * FUN_109d6faa4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6faf0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6fb58(param_1,uVar1);
  FUN_109d6f97c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6faf0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if ((*param_4 != -0x1000) || (param_4[1] != -0x1000)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6fb58; end: 109d6fcb7;  */

void FUN_109d6fb58(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar6 = (long *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 * 0x18);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (plVar6 != (long *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
      do {
        puVar3[1] = 0xfffffffffffff000;
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 * 0x18;
      plVar7 = plVar6;
      do {
        if (((*plVar7 != -0x1000) || (plVar7[1] != -0x1000)) &&
           ((*plVar7 != -0x2000 || (plVar7[1] != -0x2000)))) {
          FUN_109d6f97c(param_1,plVar7,&plStack_38);
          *plStack_38 = *plVar7;
          plStack_38[1] = plVar7[1];
          plStack_38[2] = plVar7[2];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        plVar7 = plVar7 + 3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(plVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
    do {
      puVar3[1] = 0xfffffffffffff000;
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d6fcb8; end: 109d6fd0f;  */

undefined8 * FUN_109d6fcb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6fd10(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d6fda8(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6fd10; end: 109d6fda7;  */

undefined8 FUN_109d6fd10(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d6fd50;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d6fd50:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d6fda8; end: 109d6fe4f;  */

long * FUN_109d6fda8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d6fdf4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d6fe50(param_1,uVar1);
  FUN_109d6fd10(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d6fdf4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d6fe50; end: 109d6ff7b;  */

void FUN_109d6fe50(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d6fd10(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d6ff7c; end: 109d6ffd3;  */

undefined8 * FUN_109d6ff7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d6ffd4(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d7006c(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d6ffd4; end: 109d7006b;  */

undefined8 FUN_109d6ffd4(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d70014;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d70014:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d7006c; end: 109d70113;  */

long * FUN_109d7006c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d700b8;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d70114(param_1,uVar1);
  FUN_109d6ffd4(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d700b8:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d70114; end: 109d7023f;  */

void FUN_109d70114(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d6ffd4(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d70240; end: 109d702c3;  */

/* WARNING: Possible PIC construction at 0x000109d70294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d70298) */
/* WARNING: Removing unreachable block (ram,0x000109d702c0) */
/* WARNING: Removing unreachable block (ram,0x000109d70378) */
/* WARNING: Removing unreachable block (ram,0x000109d70364) */
/* WARNING: Removing unreachable block (ram,0x000109d702b0) */

void FUN_109d70240(undefined8 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)param_1 + 8;
  FUN_109d702c4();
  FUN_109d2fb48(auStack_a8);
  uStack_f0 = 0;
  puVar2 = auStack_a8;
  func_0x000109d703f4(auStack_a8,&uStack_f0,auStack_a8,auStack_68,*param_1);
  uStack_e8 = uStack_f0;
  puVar3 = auStack_a8;
  FUN_109d35318(auStack_a8,&uStack_e8,puVar2,auStack_68,iVar1);
  func_0x000109d353f8(auStack_a8,uStack_e8,puVar3,auStack_68);
  return;
}



/* Entry: 109d702c4; end: 109d704d3;  */

void FUN_109d702c4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined8 uStack_118;
  long lStack_c0;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x000109d6d258(lVar1,lVar1 + *(long *)(param_1 + 0x10) * 8);
  lStack_c0 = lVar1;
  func_0x000109d70840(*(long *)(param_1 + 0x18),
                      *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20) * 4);
  FUN_109d2fb48(auStack_b8);
  puVar2 = auStack_b8;
  puVar6 = auStack_78;
  puVar7 = (undefined4 *)(param_1 + 1);
  uVar5 = 0;
  FUN_109d704d4(puVar2,0,auStack_b8,puVar6,param_1,puVar7,param_1 + 2,&lStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x000109d703f4();
  puVar4 = puVar2;
  uStack_118 = uVar5;
  FUN_109d35318(puVar2,&uStack_118,puVar3,puVar6,*puVar7);
  func_0x000109d353f8(puVar2,uStack_118,puVar4,puVar6);
  return;
}



/* Entry: 109d704d4; end: 109d70577;  */

void FUN_109d704d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_1;
  uStack_60 = param_2;
  FUN_109d70578(param_1,&uStack_60,param_3,param_4,*param_5);
  uStack_58 = uStack_60;
  uVar2 = param_1;
  FUN_109d70578(param_1,&uStack_58,uVar1,param_4,*param_6);
  FUN_109d70658(param_1,uStack_58,uVar2,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 109d70578; end: 109d70657;  */

undefined1 *
FUN_109d70578(undefined1 *param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar2 = param_3 + 1;
  if (param_4 < puVar2) {
    lVar3 = (long)param_4 - (long)param_3;
    uStack_31 = param_5;
    _memcpy(param_3,&uStack_31,lVar3);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,*(undefined8 *)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x48) = uStack_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_70;
      *(undefined8 *)(param_1 + 0x58) = uStack_58;
      *(undefined8 *)(param_1 + 0x50) = uStack_60;
      *(undefined8 *)(param_1 + 0x68) = uStack_48;
      *(undefined8 *)(param_1 + 0x60) = uStack_50;
      *(undefined8 *)(param_1 + 0x70) = uStack_40;
      lVar1 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 0x40,param_1);
      lVar1 = *param_2 + 0x40;
    }
    *param_2 = lVar1;
    puVar2 = param_1;
    if (param_1 + (1 - lVar3) <= param_4) {
      _memcpy(param_1,&uStack_31 + lVar3);
      puVar2 = param_1 + (1 - lVar3);
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar2;
}



/* Entry: 109d70658; end: 109d706e7;  */

void FUN_109d70658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined2 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  uStack_50 = param_2;
  FUN_109d706e8(param_1,&uStack_50,param_3,param_4,*param_5);
  uStack_48 = uStack_50;
  uVar2 = param_1;
  FUN_109d358f0(param_1,&uStack_48,uVar1,param_4,*param_6);
  func_0x000109d707c8(param_1,uStack_48,uVar2,param_4,param_7,param_8);
  return;
}



/* Entry: 109d706e8; end: 109d7094b;  */

undefined2 *
FUN_109d706e8(undefined2 *param_1,long *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_32;
  
  puVar3 = param_3 + 1;
  if (param_4 < puVar3) {
    lVar4 = (long)param_4 - (long)param_3;
    uStack_32 = param_5;
    _memcpy(param_3,&uStack_32,lVar4);
    if (*param_2 == 0) {
      FUN_109d35128(&uStack_70,param_1,*(undefined8 *)(param_1 + 0x3c));
      *(undefined8 *)(param_1 + 0x24) = uStack_68;
      *(undefined8 *)(param_1 + 0x20) = uStack_70;
      *(undefined8 *)(param_1 + 0x2c) = uStack_58;
      *(undefined8 *)(param_1 + 0x28) = uStack_60;
      *(undefined8 *)(param_1 + 0x34) = uStack_48;
      *(undefined8 *)(param_1 + 0x30) = uStack_50;
      *(undefined8 *)(param_1 + 0x38) = uStack_40;
      lVar2 = 0x40;
    }
    else {
      FUN_109d351b0(param_1 + 0x20,param_1);
      lVar2 = *param_2 + 0x40;
    }
    *param_2 = lVar2;
    puVar1 = (undefined2 *)((long)param_1 + (2 - lVar4));
    puVar3 = param_1;
    if (puVar1 <= param_4) {
      _memcpy(param_1,(long)&uStack_32 + lVar4);
      puVar3 = puVar1;
    }
  }
  else {
    *param_3 = param_5;
  }
  return puVar3;
}



/* Entry: 109d7094c; end: 109d70a2f;  */

undefined8 FUN_109d7094c(long *param_1,uint *param_2,long *param_3)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  int iVar9;
  
  lVar1 = param_1[2];
  if ((int)lVar1 == 0) {
    uVar3 = 0;
    puVar8 = (ulong *)0x0;
  }
  else {
    lVar7 = *param_1;
    uVar5 = *param_2;
    iVar9 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar5 = uVar5 & (int)lVar1 - 1U;
      puVar8 = (ulong *)(lVar7 + (ulong)uVar5 * 8);
      plVar4 = (long *)*puVar8;
      if ((((ulong)plVar4 | 0x1000) != 0xfffffffffffff000) && (*(long *)(param_2 + 2) == *plVar4)) {
        puVar2 = param_2 + 4;
        FUN_109d70a30();
        if (((ulong)puVar2 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d70a08;
        }
        plVar4 = (long *)*puVar8;
      }
      if (plVar4 == (long *)0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || plVar4 != (long *)0xffffffffffffe000) {
        puVar8 = puVar6;
      }
      uVar5 = uVar5 + iVar9;
      iVar9 = iVar9 + 1;
      puVar6 = puVar8;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar8 = puVar6;
    }
  }
LAB_109d70a08:
  *param_3 = (long)puVar8;
  return uVar3;
}



/* Entry: 109d70a30; end: 109d70b33;  */

bool FUN_109d70a30(byte *param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  if ((((uint)uVar1 == (uint)*param_1) && (param_1[1] == *(byte *)(param_2 + 0x11) >> 1)) &&
     (uVar4 = *(ulong *)(param_1 + 0x10), uVar4 == ((ulong)*(uint *)(param_2 + 0x14) & 0x7ffffff)))
  {
    if (uVar1 - 0x35 < 2) {
      sVar7 = *(short *)(param_2 + 0x18);
    }
    else {
      sVar7 = 0;
    }
    if (sVar7 == *(short *)(param_1 + 2)) {
      if (uVar4 != 0) {
        plVar5 = *(long **)(param_1 + 8);
        plVar8 = (long *)(param_2 + uVar4 * -0x20);
        do {
          if (*plVar5 != *plVar8) {
            return false;
          }
          uVar4 = uVar4 - 1;
          plVar5 = plVar5 + 1;
          plVar8 = plVar8 + 4;
        } while (uVar4 != 0);
      }
      if (uVar1 == 0x3f) {
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        uVar4 = (ulong)*(uint *)(param_2 + 0x20);
      }
      else {
        uVar3 = 0;
        uVar4 = 0;
      }
      if (*(ulong *)(param_1 + 0x20) == uVar4) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        _memcmp(uVar2,uVar3,*(ulong *)(param_1 + 0x20) << 2);
        if ((int)uVar2 == 0) {
          if (uVar1 == 0x22) {
            lVar6 = *(long *)(param_2 + 0x18);
          }
          else {
            lVar6 = 0;
          }
          return *(long *)(param_1 + 0x28) == lVar6;
        }
      }
    }
  }
  return false;
}



/* Entry: 109d70b34; end: 109d7135f;  */

long * FUN_109d70b34(byte *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  
  bVar2 = *param_1;
  uVar10 = (uint)bVar2;
  if (bVar2 < 0x39) {
    if (uVar10 == 0x22) {
      lVar16 = *(long *)(param_1 + 0x28);
      plVar17 = *(long **)(param_1 + 8);
      lVar14 = *(long *)(param_1 + 0x10);
      lVar6 = *plVar17;
      uVar18 = lVar14 - 1;
      bVar2 = param_1[1];
      uVar10 = (int)uVar18 + 1;
      plVar13 = (long *)0x28;
      FUN_109da2290(0x28,uVar10);
      *plVar13 = param_2;
      plVar13[1] = 0;
      *(undefined4 *)(plVar13 + 2) = 0x220005;
      *(uint *)((long)plVar13 + 0x14) =
           *(uint *)((long)plVar13 + 0x14) & 0xc0000000 | uVar10 & 0x7ffffff;
      plVar13[3] = lVar16;
      if (uVar18 == 0) {
        uVar10 = 1;
      }
      else {
        lVar14 = lVar14 * 8 + -0x10;
        plVar5 = plVar17 + 2;
        do {
          if (lVar14 == 0) break;
          func_0x000109d8bf3c(lVar16,*plVar5);
          lVar14 = lVar14 + -8;
          plVar5 = plVar5 + 1;
        } while (lVar16 != 0);
        uVar10 = *(uint *)((long)plVar13 + 0x14);
      }
      plVar13[4] = lVar16;
      plVar5 = plVar13 + (ulong)(uVar10 & 0x7ffffff) * -4;
      if (*plVar5 != 0) {
        lVar14 = plVar5[1];
        *(long *)plVar5[2] = lVar14;
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x10) = plVar5[2];
        }
      }
      *plVar5 = lVar6;
      if (lVar6 != 0) {
        plVar12 = (long *)(lVar6 + 8);
        lVar14 = *plVar12;
        plVar5[1] = lVar14;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 0x10) = plVar5 + 1;
        }
        plVar5[2] = (long)plVar12;
        *plVar12 = (long)plVar5;
      }
      if ((*(uint *)((long)plVar13 + 0x14) >> 0x1e & 1) == 0) {
        plVar5 = plVar13 + ((ulong)*(uint *)((long)plVar13 + 0x14) & 0x7ffffff) * -4;
      }
      else {
        plVar5 = (long *)plVar13[-1];
      }
      if ((int)uVar18 != 0) {
        uVar18 = uVar18 & 0xffffffff;
        do {
          plVar12 = plVar5 + 4;
          plVar17 = plVar17 + 1;
          lVar14 = *plVar17;
          if (*plVar12 != 0) {
            lVar16 = plVar5[5];
            *(long *)plVar5[6] = lVar16;
            if (lVar16 != 0) {
              *(long *)(lVar16 + 0x10) = plVar5[6];
            }
          }
          *plVar12 = lVar14;
          if (lVar14 != 0) {
            plVar15 = (long *)(lVar14 + 8);
            lVar14 = *plVar15;
            plVar5[5] = lVar14;
            if (lVar14 != 0) {
              *(long **)(lVar14 + 0x10) = plVar5 + 5;
            }
            plVar5[6] = (long)plVar15;
            *plVar15 = (long)plVar12;
          }
          uVar18 = uVar18 - 1;
          plVar5 = plVar12;
        } while (uVar18 != 0);
      }
      *(byte *)((long)plVar13 + 0x11) = *(byte *)((long)plVar13 + 0x11) & 1 | bVar2 << 1;
      return plVar13;
    }
    if (uVar10 == 0x35) {
      puVar11 = (undefined8 *)0x60;
      __Znwm();
      plVar17 = puVar11 + 8;
      *(uint *)((long)puVar11 + 0x54) = *(uint *)((long)puVar11 + 0x54) & 0x38000000 | 2;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = plVar17;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = plVar17;
      uVar4 = *(undefined2 *)(param_1 + 2);
      uVar8 = **(undefined8 **)(param_1 + 8);
      uVar9 = (*(undefined8 **)(param_1 + 8))[1];
      uVar7 = 0x35;
    }
    else {
      if (bVar2 != 0x36) goto LAB_109d70e7c;
      puVar11 = (undefined8 *)0x60;
      __Znwm();
      plVar17 = puVar11 + 8;
      *(uint *)((long)puVar11 + 0x54) = *(uint *)((long)puVar11 + 0x54) & 0x38000000 | 2;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = plVar17;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = plVar17;
      uVar4 = *(undefined2 *)(param_1 + 2);
      uVar8 = **(undefined8 **)(param_1 + 8);
      uVar9 = (*(undefined8 **)(param_1 + 8))[1];
      uVar7 = 0x36;
    }
    FUN_109d71360(plVar17,param_2,uVar7,uVar4,uVar8,uVar9);
    return plVar17;
  }
  if (uVar10 == 0x3d || bVar2 < 0x3d) {
    if (bVar2 != 0x39) {
      if (uVar10 == 0x3d) {
        plVar5 = (long *)0x58;
        __Znwm();
        plVar17 = plVar5 + 8;
        *(uint *)((long)plVar5 + 0x54) = *(uint *)((long)plVar5 + 0x54) & 0x38000000 | 2;
        *plVar5 = 0;
        plVar15 = plVar5 + 1;
        *plVar15 = 0;
        plVar5[2] = 0;
        plVar5[3] = (long)plVar17;
        plVar12 = plVar5 + 4;
        *plVar12 = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[7] = (long)plVar17;
        plVar13 = (long *)**(long **)(param_1 + 8);
        lVar14 = (*(long **)(param_1 + 8))[1];
        plVar5[8] = *(long *)(*plVar13 + 0x18);
        plVar5[9] = 0;
        *(undefined1 *)(plVar5 + 10) = 5;
        *(undefined1 *)((long)plVar5 + 0x51) = 0;
        *(undefined4 *)((long)plVar5 + 0x54) = 2;
        *(undefined2 *)((long)plVar5 + 0x52) = 0x3d;
        *plVar5 = (long)plVar13;
        plVar13 = plVar13 + 1;
        lVar16 = *plVar13;
        *plVar15 = lVar16;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 0x10) = plVar15;
        }
        plVar5[2] = (long)plVar13;
        *plVar13 = (long)plVar5;
        if (plVar5[4] != 0) {
          lVar16 = plVar5[5];
          *(long *)plVar5[6] = lVar16;
          if (lVar16 != 0) {
            *(long *)(lVar16 + 0x10) = plVar5[6];
          }
        }
        *plVar12 = lVar14;
        if (lVar14 == 0) {
          return plVar17;
        }
        plVar13 = (long *)(lVar14 + 8);
        lVar14 = *plVar13;
        plVar5[5] = lVar14;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 0x10) = plVar5 + 5;
        }
        plVar5[6] = (long)plVar13;
        *plVar13 = (long)plVar12;
        return plVar17;
      }
LAB_109d70e7c:
      if (uVar10 - 0x26 < 0xd) {
        plVar13 = (long *)0x38;
        __Znwm();
        plVar17 = plVar13 + 4;
        *(uint *)((long)plVar13 + 0x34) = *(uint *)((long)plVar13 + 0x34) & 0x38000000 | 1;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar13[2] = 0;
        plVar13[3] = (long)plVar17;
        bVar2 = *param_1;
        lVar14 = **(long **)(param_1 + 8);
        plVar13[4] = param_2;
        plVar13[5] = 0;
        *(undefined1 *)(plVar13 + 6) = 5;
        *(undefined1 *)((long)plVar13 + 0x31) = 0;
        *(undefined4 *)((long)plVar13 + 0x34) = 1;
        *(ushort *)((long)plVar13 + 0x32) = (ushort)bVar2;
        *plVar13 = lVar14;
        if (lVar14 != 0) {
          plVar5 = (long *)(lVar14 + 8);
          lVar14 = *plVar5;
          plVar13[1] = lVar14;
          if (lVar14 != 0) {
            *(long **)(lVar14 + 0x10) = plVar13 + 1;
          }
          plVar13[2] = (long)plVar5;
          *plVar5 = (long)plVar13;
        }
      }
      else {
        plVar5 = (long *)0x58;
        __Znwm();
        plVar17 = plVar5 + 8;
        *(uint *)((long)plVar5 + 0x54) = *(uint *)((long)plVar5 + 0x54) & 0x38000000 | 2;
        *plVar5 = 0;
        plVar15 = plVar5 + 1;
        *plVar15 = 0;
        plVar5[2] = 0;
        plVar5[3] = (long)plVar17;
        plVar12 = plVar5 + 4;
        *plVar12 = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[7] = (long)plVar17;
        bVar2 = *param_1;
        plVar13 = (long *)**(undefined8 **)(param_1 + 8);
        lVar14 = (*(undefined8 **)(param_1 + 8))[1];
        bVar3 = param_1[1];
        plVar5[8] = *plVar13;
        plVar5[9] = 0;
        *(undefined1 *)(plVar5 + 10) = 5;
        *(undefined1 *)((long)plVar5 + 0x51) = 0;
        *(undefined4 *)((long)plVar5 + 0x54) = 2;
        *(ushort *)((long)plVar5 + 0x52) = (ushort)bVar2;
        *plVar5 = (long)plVar13;
        plVar13 = plVar13 + 1;
        lVar16 = *plVar13;
        *plVar15 = lVar16;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 0x10) = plVar15;
        }
        plVar5[2] = (long)plVar13;
        *plVar13 = (long)plVar5;
        if (plVar5[4] != 0) {
          lVar16 = plVar5[5];
          *(long *)plVar5[6] = lVar16;
          if (lVar16 != 0) {
            *(long *)(lVar16 + 0x10) = plVar5[6];
          }
        }
        *plVar12 = lVar14;
        if (lVar14 != 0) {
          plVar13 = (long *)(lVar14 + 8);
          lVar14 = *plVar13;
          plVar5[5] = lVar14;
          if (lVar14 != 0) {
            *(long **)(lVar14 + 0x10) = plVar5 + 5;
          }
          plVar5[6] = (long)plVar13;
          *plVar13 = (long)plVar12;
        }
        *(byte *)((long)plVar5 + 0x51) = *(byte *)((long)plVar5 + 0x51) & 1 | bVar3 << 1;
      }
      return plVar17;
    }
    plVar13 = (long *)0x78;
    __Znwm();
    lVar14 = 0;
    plVar17 = plVar13 + 0xc;
    *(uint *)((long)plVar13 + 0x74) = *(uint *)((long)plVar13 + 0x74) & 0x38000000 | 3;
    do {
      puVar11 = (undefined8 *)((long)plVar13 + lVar14);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = plVar17;
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != 0x60);
    plVar5 = *(long **)(param_1 + 8);
    lVar16 = *plVar5;
    plVar12 = (long *)plVar5[1];
    lVar14 = plVar5[2];
    plVar13[0xc] = *plVar12;
    plVar13[0xd] = 0;
    *(undefined1 *)(plVar13 + 0xe) = 5;
    *(undefined1 *)((long)plVar13 + 0x71) = 0;
    *(uint *)((long)plVar13 + 0x74) = *(uint *)((long)plVar13 + 0x74) & 0xc0000000 | 3;
    *(undefined2 *)((long)plVar13 + 0x72) = 0x39;
    if (*plVar13 != 0) {
      lVar6 = plVar13[1];
      *(long *)plVar13[2] = lVar6;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = plVar13[2];
      }
    }
    *plVar13 = lVar16;
    if (lVar16 != 0) {
      plVar5 = (long *)(lVar16 + 8);
      lVar16 = *plVar5;
      plVar13[1] = lVar16;
      if (lVar16 != 0) {
        *(long **)(lVar16 + 0x10) = plVar13 + 1;
      }
      plVar13[2] = (long)plVar5;
      *plVar5 = (long)plVar13;
    }
    plVar5 = plVar13 + 4;
    if (*plVar5 != 0) {
      lVar16 = plVar13[5];
      *(long *)plVar13[6] = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x10) = plVar13[6];
      }
    }
    plVar13[4] = (long)plVar12;
  }
  else {
    if (uVar10 != 0x3e) {
      if (bVar2 == 0x3f) {
        plVar5 = (long *)0x80;
        __Znwm();
        plVar17 = plVar5 + 8;
        *(uint *)((long)plVar5 + 0x54) = *(uint *)((long)plVar5 + 0x54) & 0x38000000 | 2;
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar5[3] = (long)plVar17;
        plVar12 = plVar5 + 4;
        *plVar12 = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[7] = (long)plVar17;
        plVar13 = (long *)**(long **)(param_1 + 8);
        lVar16 = (*(long **)(param_1 + 8))[1];
        lVar14 = *(long *)(param_1 + 0x18);
        uVar1 = *(ulong *)(param_1 + 0x20);
        lVar6 = *(long *)(*plVar13 + 0x18);
        uVar18 = 0x100000000;
        if (*(char *)(*plVar13 + 8) != '\x13') {
          uVar18 = 0;
        }
        FUN_109da004c(lVar6,uVar18 | uVar1 & 0xffffffff);
        plVar5[8] = lVar6;
        plVar5[9] = 0;
        *(undefined4 *)(plVar5 + 10) = 0x3f0005;
        *(uint *)((long)plVar5 + 0x54) = *(uint *)((long)plVar5 + 0x54) & 0xc0000000 | 2;
        plVar5[0xb] = (long)(plVar5 + 0xd);
        plVar5[0xc] = 0x400000000;
        if (*plVar5 != 0) {
          lVar6 = plVar5[1];
          *(long *)plVar5[2] = lVar6;
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = plVar5[2];
          }
        }
        *plVar5 = (long)plVar13;
        plVar13 = plVar13 + 1;
        lVar6 = *plVar13;
        plVar5[1] = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar5 + 1;
        }
        plVar5[2] = (long)plVar13;
        *plVar13 = (long)plVar5;
        if (plVar5[4] != 0) {
          lVar6 = plVar5[5];
          *(long *)plVar5[6] = lVar6;
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = plVar5[6];
          }
        }
        *plVar12 = lVar16;
        if (lVar16 != 0) {
          plVar13 = (long *)(lVar16 + 8);
          lVar16 = *plVar13;
          plVar5[5] = lVar16;
          if (lVar16 != 0) {
            *(long **)(lVar16 + 0x10) = plVar5 + 5;
          }
          plVar5[6] = (long)plVar13;
          *plVar13 = (long)plVar12;
        }
        *(undefined4 *)(plVar5 + 0xc) = 0;
        FUN_109d3352c(plVar5 + 0xb,lVar14,lVar14 + uVar1 * 4);
        FUN_109d8c3c0(lVar14,uVar1,*plVar17);
        plVar5[0xf] = lVar14;
        return plVar17;
      }
      goto LAB_109d70e7c;
    }
    plVar13 = (long *)0x78;
    __Znwm();
    lVar14 = 0;
    plVar17 = plVar13 + 0xc;
    *(uint *)((long)plVar13 + 0x74) = *(uint *)((long)plVar13 + 0x74) & 0x38000000 | 3;
    do {
      puVar11 = (undefined8 *)((long)plVar13 + lVar14);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = plVar17;
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != 0x60);
    puVar11 = *(undefined8 **)(param_1 + 8);
    plVar5 = (long *)*puVar11;
    plVar12 = (long *)puVar11[1];
    lVar14 = puVar11[2];
    plVar13[0xc] = *plVar5;
    plVar13[0xd] = 0;
    *(undefined1 *)(plVar13 + 0xe) = 5;
    *(undefined1 *)((long)plVar13 + 0x71) = 0;
    *(uint *)((long)plVar13 + 0x74) = *(uint *)((long)plVar13 + 0x74) & 0xc0000000 | 3;
    *(undefined2 *)((long)plVar13 + 0x72) = 0x3e;
    if (*plVar13 != 0) {
      lVar16 = plVar13[1];
      *(long *)plVar13[2] = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x10) = plVar13[2];
      }
    }
    *plVar13 = (long)plVar5;
    plVar5 = plVar5 + 1;
    lVar16 = *plVar5;
    plVar13[1] = lVar16;
    if (lVar16 != 0) {
      *(long **)(lVar16 + 0x10) = plVar13 + 1;
    }
    plVar13[2] = (long)plVar5;
    *plVar5 = (long)plVar13;
    plVar5 = plVar13 + 4;
    if (*plVar5 != 0) {
      lVar16 = plVar13[5];
      *(long *)plVar13[6] = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x10) = plVar13[6];
      }
    }
    *plVar5 = (long)plVar12;
    if (plVar12 == (long *)0x0) goto LAB_109d710c4;
  }
  plVar12 = plVar12 + 1;
  lVar16 = *plVar12;
  plVar13[5] = lVar16;
  if (lVar16 != 0) {
    *(long **)(lVar16 + 0x10) = plVar13 + 5;
  }
  plVar13[6] = (long)plVar12;
  *plVar12 = (long)plVar5;
LAB_109d710c4:
  plVar5 = plVar13 + 8;
  if (*plVar5 != 0) {
    lVar16 = plVar13[9];
    *(long *)plVar13[10] = lVar16;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 0x10) = plVar13[10];
    }
  }
  *plVar5 = lVar14;
  if (lVar14 == 0) {
    return plVar17;
  }
  plVar12 = (long *)(lVar14 + 8);
  lVar14 = *plVar12;
  plVar13[9] = lVar14;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 0x10) = plVar13 + 9;
  }
  plVar13[10] = (long)plVar12;
  *plVar12 = (long)plVar5;
  return plVar17;
}



/* Entry: 109d71360; end: 109d7140f;  */

void FUN_109d71360(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4,
                  long param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 5;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xc0000000 | 2;
  *(undefined2 *)((long)param_1 + 0x12) = param_3;
  *(undefined2 *)(param_1 + 3) = param_4;
  plVar2 = param_1 + -8;
  if (*plVar2 != 0) {
    lVar3 = param_1[-7];
    *(long *)param_1[-6] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = param_1[-6];
    }
  }
  *plVar2 = param_5;
  if (param_5 != 0) {
    plVar1 = (long *)(param_5 + 8);
    lVar3 = *plVar1;
    param_1[-7] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 **)(lVar3 + 0x10) = param_1 + -7;
    }
    param_1[-6] = plVar1;
    *plVar1 = (long)plVar2;
  }
  plVar2 = param_1 + -4;
  if (*plVar2 != 0) {
    lVar3 = param_1[-3];
    *(long *)param_1[-2] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = param_1[-2];
    }
  }
  *plVar2 = param_6;
  if (param_6 != 0) {
    plVar1 = (long *)(param_6 + 8);
    lVar3 = *plVar1;
    param_1[-3] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 **)(lVar3 + 0x10) = param_1 + -3;
    }
    param_1[-2] = plVar1;
    *plVar1 = (long)plVar2;
  }
  return;
}



/* Entry: 109d71410; end: 109d71497;  */

void FUN_109d71410(ulong *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  FUN_109d7094c(param_2,param_4,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d71498(param_2,param_3,param_4);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d71498; end: 109d7153f;  */

long * FUN_109d71498(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d714e4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d71540(param_1,uVar1);
  FUN_109d7094c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d714e4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d71540; end: 109d716cf;  */

void FUN_109d71540(long *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  
  uVar2 = *(uint *)(param_1 + 2);
  puVar12 = (ulong *)*param_1;
  uVar3 = param_2 - 1U | param_2 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar8 = 0x40;
  if (0x40 < uVar3 + 1) {
    uVar8 = uVar3 + 1;
  }
  *(uint *)(param_1 + 2) = uVar8;
  puVar4 = (undefined8 *)((ulong)uVar8 << 3);
  __ZnwmSt11align_val_t(puVar4,8);
  *param_1 = (long)puVar4;
  if (puVar12 == (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar4 = 0xfffffffffffff000;
        lVar6 = lVar6 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar6 != 0);
    }
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar6 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar4 = 0xfffffffffffff000;
      lVar6 = lVar6 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
  }
  if (uVar2 != 0) {
    puVar13 = puVar12;
    do {
      uVar5 = *puVar13;
      if ((uVar5 | 0x1000) != 0xfffffffffffff000) {
        lVar14 = *param_1;
        lVar6 = param_1[2];
        FUN_109d716d0();
        uVar3 = (int)lVar6 - 1;
        uVar7 = *puVar13;
        uVar8 = (uint)uVar5 & uVar3;
        puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
        uVar5 = *puVar9;
        if (uVar7 != uVar5) {
          iVar11 = 1;
          puVar10 = (ulong *)0x0;
          do {
            if (uVar5 == 0xfffffffffffff000) {
              if (puVar10 != (ulong *)0x0) {
                puVar9 = puVar10;
              }
              break;
            }
            puVar1 = puVar9;
            if (puVar10 != (ulong *)0x0 || uVar5 != 0xffffffffffffe000) {
              puVar1 = puVar10;
            }
            uVar8 = uVar8 + iVar11;
            iVar11 = iVar11 + 1;
            uVar8 = uVar8 & uVar3;
            puVar9 = (ulong *)(lVar14 + (ulong)uVar8 * 8);
            uVar5 = *puVar9;
            puVar10 = puVar1;
          } while (uVar7 != uVar5);
        }
        *puVar9 = uVar7;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar12 + uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar12,8);
  return;
}



/* Entry: 109d716d0; end: 109d7188f;  */

undefined1  [16] FUN_109d716d0(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined2 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  byte bStack_1af;
  undefined2 uStack_1ae;
  long *plStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  ulong uStack_178;
  long alStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = 0x2000000000;
  uVar2 = *(ushort *)((long)param_1 + 0x12);
  if (uVar2 - 0x35 < 2) {
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar9 = *(undefined2 *)(param_1 + 3);
  }
  else if (uVar2 == 0x22) {
    uVar10 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar12 = param_1[3];
  }
  else if (uVar2 == 0x3f) {
    uVar9 = 0;
    uVar12 = 0;
    uVar11 = param_1[3];
    uVar10 = (ulong)*(uint *)(param_1 + 4);
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar12 = 0;
  }
  bVar1 = *(byte *)((long)param_1 + 0x11);
  uVar13 = *param_1;
  uVar14 = (ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff;
  puVar3 = param_1;
  plStack_180 = alStack_170;
  if ((int)uVar14 == 0) {
    uStack_1a0 = 0;
  }
  else {
    do {
      param_2 = puVar3[((ulong)*(uint *)((long)param_1 + 0x14) & 0x7ffffff) * -4];
      FUN_109d31fec(&plStack_180,param_2);
      uVar14 = uVar14 - 1;
      puVar3 = puVar3 + 4;
    } while (uVar14 != 0);
    uStack_1a0 = uStack_178 & 0xffffffff;
  }
  bStack_1af = bVar1 >> 1;
  uStack_1b0 = (undefined1)uVar2;
  puVar3 = &uStack_1b8;
  uStack_1b8 = uVar13;
  uStack_1ae = uVar9;
  plStack_1a8 = plStack_180;
  uStack_198 = uVar11;
  uStack_190 = uVar10;
  uStack_188 = uVar12;
  FUN_109d70240(puVar3);
  plVar4 = plStack_180;
  if (plStack_180 != alStack_170) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = puVar3;
    return auVar15;
  }
  ___stack_chk_fail();
  if (plStack_180 != alStack_170) {
    _free();
  }
  __Unwind_Resume();
  plVar5 = plVar4;
  func_0x000107c2b020();
  plVar7 = (long *)(*plVar4 + ((ulong)plVar5 & 0xffffffff) * 8);
  lVar8 = *plVar7;
  if (lVar8 == -8) {
    *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
  }
  else if (lVar8 != 0) {
    while ((lVar8 == 0 || (lVar8 == -8))) {
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    }
    uVar11 = 0;
    goto LAB_109d71978;
  }
  plVar6 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar6,8);
  if (param_3 != 0) {
    _memcpy(plVar6 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar6 + 2) + param_3) = 0;
  lVar8 = *param_4;
  *param_4 = 0;
  *plVar6 = param_3;
  plVar6[1] = lVar8;
  *plVar7 = (long)plVar6;
  *(int *)((long)plVar4 + 0xc) = *(int *)((long)plVar4 + 0xc) + 1;
  plVar7 = plVar4;
  func_0x000107c2b028(plVar4,plVar5);
  for (plVar7 = (long *)(*plVar4 + ((ulong)plVar7 & 0xffffffff) * 8); *plVar7 == 0 || *plVar7 == -8;
      plVar7 = plVar7 + 1) {
  }
  uVar11 = 1;
LAB_109d71978:
  auVar16._8_8_ = uVar11;
  auVar16._0_8_ = plVar7;
  return auVar16;
}



/* Entry: 109d71890; end: 109d71993;  */

undefined1  [16] FUN_109d71890(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109d71978;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  lVar5 = *param_4;
  *param_4 = 0;
  *plVar2 = param_3;
  plVar2[1] = lVar5;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109d71978:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109d71994; end: 109d719ef;  */

long * FUN_109d71994(long *param_1,undefined8 param_2,undefined2 param_3)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x10;
  param_1[1] = 0;
  FUN_109d719f0(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 109d719f0; end: 109d71a3f;  */

void FUN_109d719f0(long *param_1,ulong param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined2 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 <= (ulong)param_1[2]) {
    puVar4 = (undefined2 *)*param_1;
    uVar5 = param_1[1];
    puVar1 = puVar4;
    uVar2 = uVar5;
    if (param_2 <= uVar5) {
      uVar2 = param_2;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = param_3;
      puVar1 = puVar1 + 1;
    }
    lVar6 = uVar5 - param_2;
    if (uVar5 < param_2) {
      puVar4 = puVar4 + uVar5;
      do {
        *puVar4 = param_3;
        bVar3 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (bVar3);
    }
    param_1[1] = param_2;
    return;
  }
  param_1[1] = 0;
  FUN_109dffce4(param_1,param_1 + 3,param_2,2);
  if (param_2 != 0) {
    puVar4 = (undefined2 *)*param_1;
    uVar5 = param_2;
    do {
      *puVar4 = param_3;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  param_1[1] = param_2;
  return;
}



/* Entry: 109d71a40; end: 109d71a9b;  */

void FUN_109d71a40(undefined8 *param_1,long param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  long lVar2;
  
  param_1[1] = 0;
  FUN_109dffce4(param_1,param_1 + 3,param_2,2);
  if (param_2 != 0) {
    puVar1 = (undefined2 *)*param_1;
    lVar2 = param_2;
    do {
      *puVar1 = param_3;
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}



/* Entry: 109d71a9c; end: 109d71af3;  */

long * FUN_109d71a9c(long *param_1)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x1000000000;
  FUN_109d71af4();
  return param_1;
}



/* Entry: 109d71af4; end: 109d71b4b;  */

void FUN_109d71af4(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  uVar2 = (undefined4)param_2;
  if (param_2 <= *(uint *)((long)param_1 + 0xc)) {
    puVar3 = (undefined4 *)*param_1;
    uVar6 = (ulong)*(uint *)(param_1 + 1);
    uVar4 = uVar6;
    if (param_2 <= uVar6) {
      uVar4 = param_2;
    }
    puVar7 = puVar3;
    if (uVar4 != 0) {
      do {
        *puVar7 = param_3;
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
      uVar6 = (ulong)*(uint *)(param_1 + 1);
    }
    lVar5 = uVar6 - param_2;
    if (uVar6 < param_2) {
      puVar3 = puVar3 + uVar6;
      do {
        *puVar3 = param_3;
        bVar1 = lVar5 != -1;
        lVar5 = lVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (bVar1);
    }
    *(undefined4 *)(param_1 + 1) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x000107c2b01c(param_1,param_1 + 2,param_2,4);
  if (param_2 != 0) {
    puVar3 = (undefined4 *)*param_1;
    do {
      *puVar3 = param_3;
      param_2 = param_2 - 1;
      puVar3 = puVar3 + 1;
    } while (param_2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 109d71b4c; end: 109d71ba7;  */

void FUN_109d71b4c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x000107c2b01c(param_1,param_1 + 2,param_2,4);
  if (param_2 != 0) {
    puVar1 = (undefined4 *)*param_1;
    lVar2 = param_2;
    do {
      *puVar1 = param_3;
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  *(int *)(param_1 + 1) = (int)param_2;
  return;
}



/* Entry: 109d71ba8; end: 109d71bff;  */

long * FUN_109d71ba8(long *param_1)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x1000000000;
  FUN_109d3ad38();
  return param_1;
}



/* Entry: 109d71c00; end: 109d71d67;  */

ulong * FUN_109d71c00(ulong *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(byte *)((long)param_1 + 9) = *(byte *)((long)param_1 + 9) & 0xfe;
  uVar5 = (ulong)*(uint *)(param_2 + 0xc) & 0x7fffffff;
  uVar4 = (uint)uVar5;
  *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0x80000000 | uVar4;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    lVar8 = 0;
    uVar3 = 0;
    do {
      uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar8);
      if ((*(byte *)(param_2 + 9) >> 1 & 1) == 0) {
        uVar2 = param_3;
        FUN_109d73128(param_3,uVar7,1);
        uVar3 = *param_1;
      }
      else {
        uVar2 = 0;
      }
      if ((uVar3 & (-1L << (uVar2 & 0x3f) ^ 0xffffffffffffffffU)) != 0) {
        *(byte *)((long)param_1 + 9) = *(byte *)((long)param_1 + 9) | 1;
        lVar6 = 1L << (uVar2 & 0x3f);
        uVar3 = (uVar3 + lVar6) - 1 & -lVar6;
        *param_1 = uVar3;
      }
      bVar1 = (byte)uVar2;
      if (((uint)uVar2 & 0xff) <= (uint)(byte)param_1[1]) {
        bVar1 = (byte)param_1[1];
      }
      *(byte *)(param_1 + 1) = bVar1;
      *(ulong *)((long)param_1 + lVar8 + 0x10) = uVar3;
      uVar3 = param_3;
      FUN_109d2feb0(param_3,uVar7);
      uVar3 = *param_1 + uVar3;
      *param_1 = uVar3;
      lVar8 = lVar8 + 8;
    } while (uVar5 * 8 - lVar8 != 0);
    uVar5 = (ulong)(byte)param_1[1];
  }
  if ((uVar3 & (-1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU)) != 0) {
    *(byte *)((long)param_1 + 9) = *(byte *)((long)param_1 + 9) | 1;
    lVar8 = 1L << (uVar5 & 0x3f);
    *param_1 = (uVar3 + lVar8) - 1 & -lVar8;
  }
  return param_1;
}



/* Entry: 109d71d68; end: 109d71ef7;  */

void FUN_109d71d68(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_109d71ef8();
  *(undefined8 *)(param_1 + 0x178) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1[9] == '\x01') {
    param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0x15] == '\x01') {
    param_1[0x15] = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar3 = 0x60;
  *(undefined4 *)(param_1 + 0x188) = 0;
  puVar2 = &UNK_10e043fb5;
  do {
    FUN_109d71fb8(&lStack_48,param_1,*(uint *)(puVar2 + -5) & 0xff,puVar2[-1],*puVar2,
                  *(uint *)(puVar2 + -5) >> 8);
    if (lStack_48 != 0) {
      lStack_50 = lStack_48;
      lStack_48 = 0;
      FUN_109df7310(&lStack_50,1);
      goto LAB_109d71ea0;
    }
    lVar3 = lVar3 + -8;
    puVar2 = puVar2 + 8;
  } while (lVar3 != 0);
  FUN_109d7217c(&lStack_48,param_1,0,3,3,0x40,0x40);
  if (lStack_48 == 0) {
    FUN_109d72330(&lStack_48,param_1,param_2,param_3);
    if (lStack_48 == 0) {
      return;
    }
    lStack_60 = lStack_48;
    lStack_48 = 0;
    FUN_109df7310(&lStack_60,1);
  }
  else {
    lStack_58 = lStack_48;
    lStack_48 = 0;
    FUN_109df7310(&lStack_58,1);
  }
LAB_109d71ea0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d71ea4);
  (*pcVar1)();
}



/* Entry: 109d71ef8; end: 109d71fb7;  */

void FUN_109d71ef8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  plVar4 = *(long **)(param_1 + 0x178);
  if (plVar4 != (long *)0x0) {
    if ((int)plVar4[1] != 0) {
      puVar2 = (ulong *)*plVar4;
      uVar1 = *(uint *)(plVar4 + 2);
      puVar5 = puVar2;
      if (uVar1 == 0) {
LAB_109d71f84:
        while (puVar5 != puVar2 + (ulong)uVar1 * 2) {
          _free(puVar5[1]);
          do {
            puVar5 = puVar5 + 2;
            if (puVar5 == puVar2 + (ulong)uVar1 * 2) goto LAB_109d71f58;
          } while ((*puVar5 | 0x1000) == 0xfffffffffffff000);
        }
      }
      else {
        lVar3 = (ulong)uVar1 << 4;
        do {
          if ((*puVar5 | 0x1000) != 0xfffffffffffff000) goto LAB_109d71f84;
          puVar5 = puVar5 + 2;
          lVar3 = lVar3 + -0x10;
        } while (lVar3 != 0);
      }
    }
LAB_109d71f58:
    __ZdlPvSt11align_val_t(*plVar4,8);
    __ZdlPv(plVar4);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



/* Entry: 109d71fb8; end: 109d7217b;  */

void FUN_109d71fb8(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  uVar3 = (uint)param_6;
  if (uVar3 >> 0x18 == 0) {
    if (param_4 <= param_5) {
      puVar7 = (undefined8 *)(param_2 + 0x40);
      puVar6 = (uint *)*puVar7;
      uVar4 = *(uint *)(param_2 + 0x48);
      uVar5 = (ulong)uVar4;
      puVar2 = puVar6;
      FUN_109d72f48(puVar6,uVar5,param_3,param_6);
      uVar9 = (uint)param_3;
      if (puVar2 == puVar6 + uVar5 * 2) {
        if (*(uint *)(param_2 + 0x4c) <= uVar4) {
          func_0x000107c2b01c(puVar7,param_2 + 0x50,uVar5 + 1,8);
          uVar5 = (ulong)*(uint *)(param_2 + 0x48);
          puVar6 = *(uint **)(param_2 + 0x40);
        }
        *(ulong *)(puVar6 + uVar5 * 2) =
             param_5 << 0x28 | param_4 << 0x20 | (ulong)(uVar9 | uVar3 << 8);
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
      }
      else if (uVar9 == (*puVar2 & 0xff) && *puVar2 >> 8 == uVar3) {
        *(char *)(puVar2 + 1) = (char)param_4;
        *(char *)((long)puVar2 + 5) = (char)param_5;
      }
      else {
        lVar8 = (long)puVar2 - (long)puVar6;
        if (*(uint *)(param_2 + 0x4c) <= uVar4) {
          func_0x000107c2b01c(puVar7,param_2 + 0x50,uVar5 + 1,8);
          puVar6 = *(uint **)(param_2 + 0x40);
          uVar5 = (ulong)*(uint *)(param_2 + 0x48);
        }
        puVar2 = (uint *)((long)puVar6 + lVar8);
        *(undefined8 *)(puVar6 + uVar5 * 2) = *(undefined8 *)(puVar6 + uVar5 * 2 + -2);
        uVar4 = *(uint *)(param_2 + 0x48);
        lVar8 = *(long *)(param_2 + 0x40) + (ulong)uVar4 * 8;
        lVar1 = (lVar8 + -8) - (long)puVar2;
        if (lVar1 != 0) {
          _memmove(lVar8 - lVar1,puVar2,lVar1 + -2);
          uVar4 = *(uint *)(param_2 + 0x48);
        }
        *(uint *)(param_2 + 0x48) = uVar4 + 1;
        *(ushort *)(puVar2 + 1) = (ushort)((param_5 << 0x28) >> 0x20) | (ushort)param_4;
        *puVar2 = uVar9 | uVar3 << 8;
      }
      *param_1 = 0;
      return;
    }
    apuStack_88[0] = &UNK_10f5afcde;
  }
  else {
    apuStack_88[0] = &UNK_10f5afcb3;
  }
  uStack_68 = 0x103;
  FUN_109d72d14(param_1,apuStack_88);
  return;
}



/* Entry: 109d7217c; end: 109d7232f;  */

void FUN_109d7217c(undefined8 *param_1,long param_2,uint param_3,ulong param_4,ulong param_5,
                  uint param_6,undefined4 param_7)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  
  if (param_5 < param_4) {
    apuStack_68[0] = &UNK_10f5afcde;
    uStack_48 = 0x103;
    FUN_109d72d14(param_1,apuStack_68);
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0xe8);
    puVar6 = (undefined1 *)*puVar3;
    uVar4 = *(uint *)(param_2 + 0xf0);
    uVar5 = (ulong)uVar4;
    puVar7 = puVar6;
    uVar9 = uVar5;
    if (uVar4 == 0) {
      puVar8 = puVar6;
      uVar10 = 0;
    }
    else {
      do {
        uVar10 = uVar9 >> 1;
        puVar8 = puVar7 + uVar10 * 0x10 + 0x10;
        uVar9 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
        if (param_3 <= *(uint *)(puVar7 + uVar10 * 0x10 + 8)) {
          puVar8 = puVar7;
          uVar9 = uVar10;
        }
        puVar7 = puVar8;
        uVar10 = uVar5;
      } while (uVar9 != 0);
    }
    if ((puVar8 == puVar6 + uVar10 * 0x10) || (*(uint *)(puVar8 + 8) != param_3)) {
      param_4 = (ulong)param_6 << 0x20 | param_5 << 8 | param_4;
      if (puVar6 + uVar5 * 0x10 == puVar8) {
        if (*(uint *)(param_2 + 0xf4) <= uVar4) {
          func_0x000107c2b01c(puVar3,param_2 + 0xf8,uVar5 + 1,0x10);
          uVar5 = (ulong)*(uint *)(param_2 + 0xf0);
          puVar6 = *(undefined1 **)(param_2 + 0xe8);
        }
        *(ulong *)(puVar6 + uVar5 * 0x10) = param_4;
        *(ulong *)((long)(puVar6 + uVar5 * 0x10) + 8) = CONCAT44(param_7,param_3);
        *(int *)(param_2 + 0xf0) = *(int *)(param_2 + 0xf0) + 1;
      }
      else {
        lVar11 = (long)puVar8 - (long)puVar6;
        if (*(uint *)(param_2 + 0xf4) <= uVar4) {
          func_0x000107c2b01c(puVar3,param_2 + 0xf8,uVar5 + 1,0x10);
          puVar6 = *(undefined1 **)(param_2 + 0xe8);
          uVar5 = (ulong)*(uint *)(param_2 + 0xf0);
        }
        puVar1 = (ulong *)(puVar6 + lVar11);
        puVar3 = (undefined8 *)(puVar6 + uVar5 * 0x10);
        puVar3[1] = puVar3[-1];
        *puVar3 = puVar3[-2];
        uVar4 = *(uint *)(param_2 + 0xf0);
        lVar11 = *(long *)(param_2 + 0xe8) + (ulong)uVar4 * 0x10;
        lVar2 = (lVar11 + -0x10) - (long)puVar1;
        if (lVar2 != 0) {
          _memmove(lVar11 - lVar2,puVar1);
          uVar4 = *(uint *)(param_2 + 0xf0);
        }
        *(uint *)(param_2 + 0xf0) = uVar4 + 1;
        *puVar1 = param_4;
        puVar1[1] = CONCAT44(param_7,param_3);
      }
    }
    else {
      *puVar8 = (char)param_4;
      puVar8[1] = (char)param_5;
      *(uint *)(puVar8 + 4) = param_6;
      *(undefined4 *)(puVar8 + 0xc) = param_7;
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 109d72330; end: 109d72bdf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109d72330(long *param_1,undefined8 *param_2,byte *param_3,ulong param_4,undefined1 param_5,
                  undefined8 *param_6)

{
  uint uVar1;
  undefined8 *******pppppppuVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *******pppppppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  short sVar13;
  ulong uVar14;
  long lVar15;
  ushort uVar16;
  undefined4 uVar17;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  byte *pbStack_f8;
  ulong uStack_f0;
  undefined1 uStack_e1;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 *******pppppppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  
  if (0x7ffffffffffffff7 < param_4) {
    uStack_e1 = param_5;
    func_0x000104c4f6b8();
    pbStack_f8 = param_3;
    uStack_f0 = param_4;
    func_0x000109d39ec8(&puStack_120,&pbStack_f8,&uStack_e1,1);
    param_6[1] = uStack_118;
    *param_6 = puStack_120;
    param_6[3] = uStack_108;
    param_6[2] = uStack_110;
    if (param_6[3] == 0) {
      if (param_6[1] == uStack_f0) {
        if (param_6[1] == 0) {
LAB_109d72c2c:
          *param_2 = 0;
          return;
        }
        uVar9 = *param_6;
        _memcmp(uVar9,pbStack_f8);
        if ((int)uVar9 == 0) goto LAB_109d72c2c;
      }
      puStack_120 = &UNK_10f5afd18;
    }
    else {
      if (param_6[1] != 0) goto LAB_109d72c2c;
      puStack_120 = &UNK_10f5afd40;
    }
    uStack_100 = 0x103;
    FUN_109d72d14(param_2,&puStack_120);
    return;
  }
  if (param_4 < 0x17) {
    uStack_98 = CONCAT17((char)param_4,(undefined7)uStack_98);
    pppppppuVar8 = &pppppppuStack_a8;
    if (param_4 == 0) goto LAB_109d723bc;
  }
  else {
    pppppppuVar2 = (undefined8 *******)0x19;
    if ((param_4 | 7) != 0x17) {
      pppppppuVar2 = (undefined8 *******)((param_4 | 7) + 1);
    }
    pppppppuVar8 = pppppppuVar2;
    __Znwm();
    uStack_98 = (ulong)pppppppuVar2 | 0x8000000000000000;
    pppppppuStack_a8 = pppppppuVar8;
    uStack_a0 = param_4;
  }
  _memmove(pppppppuVar8,param_3,param_4);
LAB_109d723bc:
  *(undefined1 *)((long)pppppppuVar8 + param_4) = 0;
  if (*(char *)((long)param_2 + 0xe7) < '\0') {
    __ZdlPv(param_2[0x1a]);
  }
  param_2[0x1b] = uStack_a0;
  param_2[0x1a] = pppppppuStack_a8;
  param_2[0x1c] = uStack_98;
  uVar10 = uStack_78;
joined_r0x000109d723e0:
  while( true ) {
    uStack_78 = uVar10;
    if (param_4 == 0) {
      *param_1 = 0;
      return;
    }
    FUN_109d72be0(param_1,param_3,param_4,0x2d,&pbStack_80);
    param_4 = uStack_68;
    param_3 = pbStack_70;
    if (*param_1 != 0) {
      return;
    }
    FUN_109d72be0(param_1,pbStack_80,uStack_78,0x3a,&pbStack_80);
    if (*param_1 != 0) {
      return;
    }
    if ((uStack_78 != 2) || (*(short *)pbStack_80 != 0x696e)) break;
    do {
      FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
      if (*param_1 != 0) {
        return;
      }
      func_0x000109d72c94(param_1,pbStack_80,uStack_78,&uStack_c0);
      if (*param_1 != 0) {
        return;
      }
      if (uStack_c0 == 0) {
        pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af812;
        goto LAB_109d72ba4;
      }
      func_0x000109d31b50(param_2 + 0x30);
      uVar10 = uStack_78;
    } while (uStack_68 != 0);
  }
  bVar3 = *pbStack_80;
  if (uStack_78 != 0) {
    pbStack_80 = pbStack_80 + 1;
  }
  uVar10 = uStack_78 - (uStack_78 != 0);
  if (bVar3 < 0x65) {
    if (0x46 < bVar3) {
      if (bVar3 < 0x53) {
        if (bVar3 == 0x47) {
          puVar11 = param_2 + 2;
        }
        else {
          if (bVar3 != 0x50) goto LAB_109d72b18;
          puVar11 = (undefined8 *)((long)param_2 + 0xc);
        }
LAB_109d72964:
        uStack_78 = uVar10;
        func_0x000109d72ee4(param_1,pbStack_80,uVar10,puVar11);
        goto LAB_109d7296c;
      }
      if (bVar3 != 0x53) {
        if (bVar3 == 0x61) {
          bVar4 = false;
          bVar6 = true;
          goto LAB_109d727f4;
        }
        goto LAB_109d72b18;
      }
      uStack_78 = uVar10;
      func_0x000109d72e28(param_1,pbStack_80,uVar10,&uStack_c0);
      if (*param_1 != 0) {
        return;
      }
      uVar10 = CONCAT44(uStack_bc,uStack_c0);
      if (uVar10 == 0) {
        uVar16 = 0;
        sVar13 = 0;
      }
      else {
        if ((uVar10 & uVar10 - 1) != 0) {
LAB_109d72b0c:
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afb53;
          goto LAB_109d72ba4;
        }
        uVar16 = (ushort)LZCOUNT(uVar10) ^ 0x3f;
        sVar13 = 1;
      }
      *(ushort *)(param_2 + 1) = uVar16 | sVar13 << 8;
      uVar10 = uStack_78;
      goto joined_r0x000109d723e0;
    }
    if (bVar3 == 0x41) {
      puVar11 = (undefined8 *)((long)param_2 + 4);
      goto LAB_109d72964;
    }
    if (bVar3 == 0x45) {
      *(undefined1 *)param_2 = 1;
      goto joined_r0x000109d723e0;
    }
    if (bVar3 == 0x46) {
      if (*pbStack_80 == 0x69) {
        uVar17 = 0;
      }
      else {
        if (*pbStack_80 != 0x6e) {
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afb7b;
          uStack_78 = uVar10;
          goto LAB_109d72ba4;
        }
        uVar17 = 1;
      }
      *(undefined4 *)(param_2 + 3) = uVar17;
      if (1 < uStack_78) {
        pbStack_80 = pbStack_80 + 1;
      }
      uStack_78 = uVar10 - (1 < uStack_78);
      func_0x000109d72e28(param_1,pbStack_80,uStack_78,&uStack_c0);
      if (*param_1 != 0) {
        return;
      }
      uVar10 = CONCAT44(uStack_bc,uStack_c0);
      if (uVar10 == 0) {
        uVar16 = 0;
        sVar13 = 0;
      }
      else {
        if ((uVar10 & uVar10 - 1) != 0) goto LAB_109d72b0c;
        uVar16 = (ushort)LZCOUNT(uVar10) ^ 0x3f;
        sVar13 = 1;
      }
      *(ushort *)((long)param_2 + 0x14) = uVar16 | sVar13 << 8;
      uVar10 = uStack_78;
      goto joined_r0x000109d723e0;
    }
  }
  else {
    if (0x6d < bVar3) {
      if (bVar3 < 0x73) {
        if (bVar3 == 0x6e) {
          while( true ) {
            uStack_78 = uVar10;
            func_0x000109d72c94(param_1,pbStack_80,uStack_78,&uStack_c0);
            if (*param_1 != 0) {
              return;
            }
            if (uStack_c0 == 0) {
              pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afb1f;
              goto LAB_109d72ba4;
            }
            func_0x000109d360b8(param_2 + 4,uStack_c0 & 0xff);
            uVar10 = uStack_78;
            if (uStack_68 == 0) break;
            FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
            uVar10 = uStack_78;
            if (*param_1 != 0) {
              return;
            }
          }
        }
        else {
          if (bVar3 != 0x70) goto LAB_109d72b18;
          uStack_c0 = 0;
          bVar6 = 1 < uStack_78;
          uStack_78 = uVar10;
          if (bVar6) {
            func_0x000109d72c94(param_1,pbStack_80,uVar10,&uStack_c0);
            if (*param_1 != 0) {
              return;
            }
            if (uStack_c0 >> 0x18 != 0) {
              pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af83c;
              goto LAB_109d72ba4;
            }
          }
          uVar5 = uStack_c0;
          if (uStack_68 == 0) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af86b;
            goto LAB_109d72ba4;
          }
          FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
          if (*param_1 != 0) {
            return;
          }
          func_0x000109d72c94(param_1,pbStack_80,uStack_78,&uStack_ac);
          uVar1 = uStack_ac;
          if (*param_1 != 0) {
            return;
          }
          if (uStack_ac == 0) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af8a7;
            goto LAB_109d72ba4;
          }
          if (uStack_68 == 0) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af8c7;
            goto LAB_109d72ba4;
          }
          FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
          if (*param_1 != 0) {
            return;
          }
          FUN_109d72db8(param_1,pbStack_80,uStack_78,&uStack_b0);
          if (*param_1 != 0) {
            return;
          }
          uVar10 = (ulong)uStack_b0;
          if ((uStack_b0 == 0) || ((uVar10 & uVar10 - 1) != 0)) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af908;
            goto LAB_109d72ba4;
          }
          uStack_b8 = uStack_b0;
          uStack_b4 = uVar1;
          uVar14 = uVar10;
          uVar12 = uVar1;
          if (uStack_68 != 0) {
            FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
            if (*param_1 != 0) {
              return;
            }
            FUN_109d72db8(param_1,pbStack_80,uStack_78,&uStack_b8);
            if (*param_1 != 0) {
              return;
            }
            uVar14 = (ulong)uStack_b8;
            if ((uStack_b8 ^ uStack_b8 - 1) <= uStack_b8 - 1) {
              pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af933;
              goto LAB_109d72ba4;
            }
            if (uStack_68 != 0) {
              FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
              if (*param_1 != 0) {
                return;
              }
              func_0x000109d72c94(param_1,pbStack_80,uStack_78,&uStack_b4);
              if (*param_1 != 0) {
                return;
              }
              uVar12 = uStack_b4;
              if (uStack_b4 == 0) {
                pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af964;
                goto LAB_109d72ba4;
              }
            }
          }
          FUN_109d7217c(param_1,param_2,uVar5,LZCOUNT(uVar10) ^ 0x3f,0x3f - LZCOUNT(uVar14),uVar1,
                        uVar12);
LAB_109d7296c:
          lVar15 = *param_1;
joined_r0x000109d7294c:
          uVar10 = uStack_78;
          if (lVar15 != 0) {
            return;
          }
        }
      }
      else if (bVar3 != 0x73) {
        if (bVar3 == 0x76) goto LAB_109d72798;
        goto LAB_109d72b18;
      }
      goto joined_r0x000109d723e0;
    }
    if (bVar3 < 0x69) {
      if (bVar3 == 0x65) {
        *(undefined1 *)param_2 = 0;
        goto joined_r0x000109d723e0;
      }
      if (bVar3 == 0x66) {
LAB_109d72798:
        bVar6 = false;
        bVar4 = false;
        goto LAB_109d727f4;
      }
    }
    else {
      if (bVar3 == 0x69) {
        bVar6 = false;
        bVar4 = true;
LAB_109d727f4:
        uStack_c0 = 0;
        bVar7 = 1 < uStack_78;
        uStack_78 = uVar10;
        if (bVar7) {
          func_0x000109d72c94(param_1,pbStack_80,uVar10,&uStack_c0);
          if (*param_1 != 0) {
            return;
          }
          bVar7 = false;
          if (uStack_c0 != 0) {
            bVar7 = bVar6;
          }
          if (bVar7) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af982;
            goto LAB_109d72ba4;
          }
        }
        uVar5 = uStack_c0;
        if (uStack_68 == 0) {
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af9b5;
          goto LAB_109d72ba4;
        }
        FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
        if (*param_1 != 0) {
          return;
        }
        FUN_109d72db8(param_1,pbStack_80,uStack_78,&uStack_ac);
        uVar1 = uStack_ac;
        if (*param_1 != 0) {
          return;
        }
        uVar10 = (ulong)uStack_ac;
        if (uStack_ac != 0) {
          bVar6 = true;
        }
        if (!bVar6) {
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5af9ea;
          goto LAB_109d72ba4;
        }
        if (0xffff < uStack_ac) {
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afa29;
          goto LAB_109d72ba4;
        }
        if ((uVar10 & uVar10 - 1) != 0) {
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afa58;
          goto LAB_109d72ba4;
        }
        bVar6 = false;
        if (uVar5 == 8) {
          bVar6 = bVar4;
        }
        if ((bVar6) && (uStack_ac != 1)) {
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afa84;
          goto LAB_109d72ba4;
        }
        uStack_b0 = uStack_ac;
        uVar14 = uVar10;
        if (uStack_68 != 0) {
          FUN_109d72be0(param_1,pbStack_70,uStack_68,0x3a,&pbStack_80);
          if (*param_1 != 0) {
            return;
          }
          FUN_109d72db8(param_1,pbStack_80,uStack_78,&uStack_b0);
          if (*param_1 != 0) {
            return;
          }
          uVar14 = (ulong)uStack_b0;
          if (0xffff < uStack_b0) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afab8;
            goto LAB_109d72ba4;
          }
          if ((uVar14 & uVar14 - 1) != 0) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afaed;
            goto LAB_109d72ba4;
          }
        }
        uVar12 = 0;
        if (uVar1 != 0) {
          uVar12 = 0x3fU - (int)LZCOUNT(uVar10) & 0xff;
        }
        uVar1 = 0;
        if ((int)uVar14 != 0) {
          uVar1 = 0x3fU - (int)LZCOUNT(uVar14) & 0xff;
        }
        FUN_109d71fb8(param_1,param_2,bVar3,uVar12,uVar1,uVar5);
        lVar15 = *param_1;
        goto joined_r0x000109d7294c;
      }
      if (bVar3 == 0x6d) {
        if (1 < uStack_78) {
          pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afbb8;
          uStack_78 = uVar10;
          goto LAB_109d72ba4;
        }
        if (uStack_68 != 1) {
          if (uStack_68 == 0) {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afc05;
            uStack_78 = uVar10;
          }
          else {
            pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afc36;
            uStack_78 = uVar10;
          }
          goto LAB_109d72ba4;
        }
        bVar3 = *pbStack_70;
        if (bVar3 < 0x6d) {
          if (bVar3 == 0x61) {
            uVar17 = 7;
          }
          else {
            if (bVar3 == 0x65) {
              *(undefined4 *)((long)param_2 + 0x1c) = 1;
              goto joined_r0x000109d723e0;
            }
            if (bVar3 != 0x6c) goto LAB_109d72b9c;
            uVar17 = 5;
          }
        }
        else if (bVar3 < 0x77) {
          if (bVar3 == 0x6d) {
            uVar17 = 6;
          }
          else {
            if (bVar3 != 0x6f) {
LAB_109d72b9c:
              pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afc66;
              uStack_78 = uVar10;
              goto LAB_109d72ba4;
            }
            uVar17 = 2;
          }
        }
        else if (bVar3 == 0x77) {
          uVar17 = 3;
        }
        else {
          if (bVar3 != 0x78) goto LAB_109d72b9c;
          uVar17 = 4;
        }
        *(undefined4 *)((long)param_2 + 0x1c) = uVar17;
        goto joined_r0x000109d723e0;
      }
    }
  }
LAB_109d72b18:
  pppppppuStack_a8 = (undefined8 *******)&UNK_10f5afc8c;
  uStack_78 = uVar10;
LAB_109d72ba4:
  uStack_88 = 0x103;
  FUN_109d72d14(param_1,&pppppppuStack_a8);
  return;
}



/* Entry: 109d72be0; end: 109d72d13;  */

void FUN_109d72be0(undefined8 *param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 uStack_21;
  
  uStack_38 = param_2;
  lStack_30 = param_3;
  uStack_21 = param_4;
  func_0x000109d39ec8(&puStack_60,&uStack_38,&uStack_21,1);
  param_5[1] = uStack_58;
  *param_5 = puStack_60;
  param_5[3] = uStack_48;
  param_5[2] = uStack_50;
  if (param_5[3] == 0) {
    if (param_5[1] == lStack_30) {
      if (param_5[1] == 0) {
LAB_109d72c2c:
        *param_1 = 0;
        return;
      }
      uVar1 = *param_5;
      _memcmp(uVar1,uStack_38);
      if ((int)uVar1 == 0) goto LAB_109d72c2c;
    }
    puStack_60 = &UNK_10f5afd18;
  }
  else {
    if (param_5[1] != 0) goto LAB_109d72c2c;
    puStack_60 = &UNK_10f5afd40;
  }
  uStack_40 = 0x103;
  FUN_109d72d14(param_1,&puStack_60);
  return;
}



/* Entry: 109d72d14; end: 109d72db7;  */

void FUN_109d72d14(undefined8 param_1,undefined8 param_2)

{
  undefined1 *apuStack_60 [2];
  char cStack_49;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x000109df6eb4();
  FUN_109e04498(apuStack_60,param_2);
  puStack_48 = apuStack_60[0];
  if (-1 < cStack_49) {
    puStack_48 = (undefined1 *)apuStack_60;
  }
  uStack_40 = 3;
  ppuStack_38 = &PTR_PTR_1132fef20;
  FUN_109df7270(param_1,&puStack_48,&uStack_40);
  if (cStack_49 < '\0') {
    __ZdlPv(apuStack_60[0]);
  }
  return;
}



/* Entry: 109d72db8; end: 109d72f47;  */

void FUN_109d72db8(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  func_0x000109d72c94();
  if (*param_1 == 0) {
    if ((*param_4 & 7) == 0) {
      *param_4 = *param_4 >> 3;
      *param_1 = 0;
    }
    else {
      apuStack_48[0] = &UNK_10f5afde8;
      uStack_28 = 0x103;
      FUN_109d72d14(param_1,apuStack_48);
    }
  }
  return;
}



/* Entry: 109d72f48; end: 109d7300b;  */

void FUN_109d72f48(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar5 = (ulong)param_2;
    do {
      uVar6 = uVar5 >> 1;
      uVar3 = param_1[uVar6 * 2];
      uVar2 = uVar3 & 0xff;
      uVar3 = uVar3 >> 8;
      bVar4 = uVar2 < param_3;
      if (uVar2 == param_3) {
        bVar4 = uVar3 != param_4 && uVar3 < param_4;
      }
      uVar1 = uVar5 + ~uVar6;
      uVar5 = uVar6;
      if (bVar4) {
        param_1 = param_1 + uVar6 * 2 + 2;
        uVar5 = uVar1;
      }
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 109d7300c; end: 109d7308f;  */

long FUN_109d7300c(long param_1)

{
  FUN_109d71ef8();
  if (*(long *)(param_1 + 0x180) != param_1 + 400) {
    _free();
  }
  if (*(long *)(param_1 + 0xe8) != param_1 + 0xf8) {
    _free();
  }
  if (*(char *)(param_1 + 0xe7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
  }
  if (*(long *)(param_1 + 0x40) != param_1 + 0x50) {
    _free();
  }
  if (*(long *)(param_1 + 0x20) != param_1 + 0x38) {
    _free();
  }
  return param_1;
}



/* Entry: 109d73090; end: 109d73127;  */

void FUN_109d73090(long param_1,long param_2,int param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar3 = *(undefined8 **)(param_1 + 0x178);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *(undefined8 **)(param_1 + 0x178) = puVar3;
  }
  FUN_109d73608();
  if (puVar3[1] == 0) {
    lVar4 = (ulong)*(uint *)(param_2 + 0xc) * 8 + 0x10;
    _malloc();
    if (lVar4 == 0) {
      puVar11 = (uint *)&UNK_10f5afda5;
      puVar7 = (uint *)0x1;
      FUN_109df7a04();
      puVar6 = (uint *)&UNK_10e043f98;
      puVar12 = puVar11;
      do {
        uVar8 = puVar7[2];
        puVar9 = (uint *)(ulong)uVar8;
        uVar10 = (uint)((ulong)puVar9 & 0xff);
        uVar2 = in_ZR;
        puVar5 = puVar12;
        switch((ulong)puVar9 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          puVar5 = puVar11;
code_r0x000109d73188:
          FUN_109d3024c();
          puVar12 = *(uint **)(puVar11 + 0x10);
          puVar11 = (uint *)(ulong)puVar11[0x12];
          puVar7 = puVar5;
          puVar6 = puVar12;
code_r0x000109d731a8:
          func_0x000109d72f48();
          if ((puVar12 == puVar6 + (long)puVar11 * 2) ||
             ((*puVar12 & 0xff) != 0x66 || *puVar12 >> 8 != (uint)puVar7)) {
            if ((uint)puVar7 >> 3 != 0) {
code_r0x000109d731e8:
code_r0x000109d73284:
            }
code_r0x000109d73288:
code_r0x000109d7328c:
          }
          else {
code_r0x000109d73314:
code_r0x000109d73318:
code_r0x000109d7331c:
          }
code_r0x000109d73320:
code_r0x000109d73324:
code_r0x000109d73330:
          return;
        case 7:
        case 9:
        case 0xc:
        case 0xe:
        case 0x14:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x109d73378);
          (*pcVar1)();
        case 8:
        case 0xb6:
        case 0xc6:
        case 0xd2:
        case 0xe9:
        case 0xfe:
          if (param_3 == 0) {
code_r0x000109d73340:
          }
          goto code_r0x000109d73320;
        case 10:
        case 0x12:
        case 0x13:
          puVar6 = puVar11;
          FUN_109d3024c(puVar11,puVar7);
          puVar9 = *(uint **)(puVar11 + 0x10);
          uVar10 = puVar11[0x12];
          puVar12 = puVar9;
          func_0x000109d72f48(puVar9,(ulong)uVar10,0x76,puVar6);
          in_ZR = puVar12 == puVar9 + (ulong)uVar10 * 2;
        case 199:
          if (!(bool)in_ZR) {
code_r0x000109d7322c:
            puVar9 = (uint *)(ulong)*puVar12;
code_r0x000109d73230:
            uVar10 = (uint)puVar9 & 0xff;
code_r0x000109d73234:
            uVar8 = (uint)((ulong)puVar9 >> 8);
code_r0x000109d73238:
            uVar2 = uVar10 == 0x76;
code_r0x000109d7323c:
            in_ZR = false;
            if ((bool)uVar2) {
              in_ZR = uVar8 == (uint)puVar6;
            }
code_r0x000109d73240:
            if ((bool)in_ZR) goto code_r0x000109d73314;
          }
code_r0x000109d73244:
          FUN_109d3024c(puVar11,puVar7);
          if ((undefined *)((long)puVar11 + 7) < (undefined *)0x8) goto code_r0x000109d73288;
code_r0x000109d73268:
code_r0x000109d7326c:
code_r0x000109d73270:
code_r0x000109d73278:
code_r0x000109d7327c:
          goto code_r0x000109d73284;
        case 0xb:
          goto code_r0x000109d73320;
        case 0xd:
          puVar6 = puVar11 + 0x10;
          puVar11 = (uint *)(ulong)puVar11[0x12];
          puVar7 = *(uint **)puVar6;
        case 0xa4:
        case 0xab:
        case 0xac:
        case 0xae:
        case 200:
        case 0xd5:
        case 0xd6:
        case 0xdf:
        case 0xeb:
        case 0xf2:
          puVar12 = puVar7;
          puVar7 = puVar12;
code_r0x000109d732ec:
code_r0x000109d732f0:
          func_0x000109d72f48();
code_r0x000109d732f4:
          puVar9 = puVar7 + (long)puVar11 * 2;
code_r0x000109d732f8:
          in_ZR = puVar12 == puVar9;
code_r0x000109d732fc:
          if (!(bool)in_ZR) {
code_r0x000109d73300:
            uVar8 = (uint)(byte)*puVar12;
code_r0x000109d73304:
            in_ZR = uVar8 == 0x69;
code_r0x000109d73308:
            if ((bool)in_ZR) goto code_r0x000109d73314;
          }
code_r0x000109d7330c:
          goto code_r0x000109d73314;
        case 0xf:
        case 0xa6:
        case 0xaa:
        case 0xc1:
        case 0x78:
        case 0x93:
        case 0xa1:
        case 0xad:
        case 0xc5:
        case 0xd1:
        case 0xe8:
        case 0xfd:
          func_0x000109d72f9c();
code_r0x000109d732a4:
          if (param_3 == 0) {
code_r0x000109d73334:
code_r0x000109d73338:
          }
          else {
code_r0x000109d732a8:
          }
          goto code_r0x000109d73320;
        case 0x10:
          if ((param_3 == 0) || ((uVar8 >> 9 & 1) == 0)) {
            FUN_109d73090(puVar11,puVar7);
            goto code_r0x000109d73368;
          }
          goto code_r0x000109d73320;
        default:
          puVar7 = *(uint **)(puVar7 + 6);
        case 0x19:
        case 0x2c:
        case 0x2d:
        case 0x44:
        case 0x45:
          break;
        case 0x15:
        case 0x34:
        case 0x35:
        case 0x3c:
        case 0x4c:
        case 0x4d:
          puVar12 = puVar7;
        case 0x3d:
        case 0x54:
        case 0x55:
        case 100:
        case 0x65:
        case 0x75:
          FUN_109da0310();
code_r0x000109d73178:
          puVar7 = puVar12;
          break;
        case 0x18:
        case 0x20:
        case 0x28:
        case 0x30:
        case 0x38:
        case 0x81:
        case 0x88:
        case 0xdd:
        case 0xe3:
        case 0xf6:
          goto code_r0x000109d7330c;
        case 0x21:
          goto code_r0x000109d73188;
        case 0x29:
        case 0x41:
          goto code_r0x000109d731a8;
        case 0x31:
        case 0x49:
          goto code_r0x000109d731e8;
        case 0x39:
        case 0x51:
        case 0x61:
          goto code_r0x000109d73268;
        case 0x40:
        case 0x48:
        case 0x50:
        case 0x58:
          goto code_r0x000109d73300;
        case 0x59:
        case 0x69:
code_r0x000109d73368:
          goto code_r0x000109d73320;
        case 0x5c:
        case 0x5d:
        case 0x6c:
        case 0x6d:
          goto code_r0x000109d73178;
        case 0x60:
        case 0x68:
        case 0x7c:
        case 0x97:
          goto code_r0x000109d73340;
        case 0x70:
        case 0x82:
        case 0x8b:
        case 0xb3:
        case 0xb9:
        case 0xcb:
        case 0xdb:
        case 0xf0:
        case 0xf5:
          goto code_r0x000109d732ec;
        case 0x79:
        case 0x94:
        case 0xb1:
          goto code_r0x000109d73238;
        case 0x7a:
        case 0x7b:
        case 0x8e:
        case 0x95:
        case 0x96:
        case 0x9b:
          goto code_r0x000109d73318;
        case 0x7d:
        case 0x98:
        case 0xb8:
          goto code_r0x000109d7331c;
        case 0x7e:
        case 0xa2:
        case 0xaf:
        case 0xb0:
        case 0xc3:
        case 0xd7:
        case 0xd8:
        case 0xec:
        case 0xed:
          goto code_r0x000109d7322c;
        case 0x7f:
          goto code_r0x000109d73244;
        case 0x80:
          goto code_r0x000109d73278;
        case 0x83:
        case 0xe5:
          goto code_r0x000109d73304;
        case 0x84:
        case 0x8c:
        case 0xe4:
          goto code_r0x000109d73320;
        case 0x85:
        case 0x9d:
          goto code_r0x000109d73324;
        case 0x86:
        case 0xb4:
        case 0xb5:
        case 0xbc:
        case 0xcd:
        case 0xdc:
        case 0xe0:
        case 0xf8:
          goto code_r0x000109d73334;
        case 0x87:
        case 0x9f:
        case 0xbf:
        case 0xd3:
        case 0xe1:
        case 0xf3:
        case 0xf7:
          goto code_r0x000109d73338;
        case 0x89:
        case 0x9a:
        case 0xde:
        case 0xe7:
        case 0xee:
        case 0xfa:
          goto code_r0x000109d732f4;
        case 0x8a:
          goto code_r0x000109d73288;
        case 0x8d:
          goto code_r0x000109d732f8;
        case 0x8f:
        case 0xb7:
        case 0xce:
          goto code_r0x000109d732fc;
        case 0x90:
        case 0xba:
        case 0xcc:
        case 0xcf:
        case 0xe2:
        case 0xf1:
        case 0xf4:
          return;
        case 0x91:
        case 0xc0:
        case 0xc4:
        case 0xfb:
        case 0xfc:
          goto code_r0x000109d7327c;
        case 0x99:
        case 0xa3:
        case 0xd9:
          goto code_r0x000109d73230;
        case 0x9c:
        case 0xd4:
          goto code_r0x000109d73234;
        case 0x9e:
        case 0xbe:
        case 0xca:
          goto code_r0x000109d73330;
        case 0xa0:
        case 0xd0:
        case 0xe6:
        case 0xf9:
          goto code_r0x000109d7328c;
        case 0xa5:
          goto code_r0x000109d73284;
        case 0xa7:
        case 0xbd:
          goto code_r0x000109d732a4;
        case 0xa8:
          goto code_r0x000109d73270;
        case 0xa9:
          goto code_r0x000109d7326c;
        case 0xb2:
          goto code_r0x000109d732a8;
        case 0xbb:
          goto code_r0x000109d73314;
        case 0xc2:
        case 0xda:
          goto code_r0x000109d732f0;
        case 0xc9:
          goto code_r0x000109d73240;
        case 0xea:
        case 0xff:
          goto code_r0x000109d7323c;
        case 0xef:
          goto code_r0x000109d73308;
        }
      } while( true );
    }
    puVar3[1] = lVar4;
    FUN_109d71c00();
  }
  return;
}


