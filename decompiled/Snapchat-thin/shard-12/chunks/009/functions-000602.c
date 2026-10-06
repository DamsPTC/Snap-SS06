/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c31f90; end: 109c3218f;  */

undefined8 * FUN_109c31f90(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  float *pfVar12;
  long lVar13;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  uint auStack_b8 [6];
  undefined8 auStack_a0 [9];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)*param_2;
  puVar1 = (uint *)(*plVar11 + 8);
  auStack_b8[0] = 0;
  auStack_b8[1] = 0;
  auStack_b8[2] = 0;
  auStack_b8[3] = 0;
  auStack_b8[4] = 0;
  auStack_b8[5] = 0;
  if ((puVar1 != auStack_b8) && (uVar3 = *puVar1, uVar3 != 0)) {
    _memmove((ulong)auStack_b8 | 4,*plVar11 + 0xc,(long)(int)uVar3 << 2);
    auStack_b8[0] = uVar3;
    if (auStack_b8[3] == 1 && auStack_b8[4] == 1) {
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar3) {
        uVar3 = 5;
      }
      puVar9 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)auStack_b8 | 4,uVar3);
      pfVar12 = *(float **)(*plVar11 + 0x40);
      FUN_109c182f4(param_3,1);
      uStack_c4 = *(undefined4 *)(param_1 + 0xa4);
      uStack_d0 = 4;
      uStack_cc = *(undefined8 *)((ulong)auStack_b8 | 4);
      uStack_c0 = 1;
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                (auStack_a0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_d0,1);
      func_0x000109c18360(*param_3,auStack_a0);
      puVar5 = auStack_a0;
      FUN_109c180ec();
      plVar6 = (long *)*param_3;
      if (0 < (int)puVar9) {
        lVar13 = *(long *)(*(long *)(param_1 + 0x90) + 0x40);
        puVar10 = *(undefined8 **)(*plVar6 + 0x40);
        uVar7 = (ulong)*(uint *)(param_1 + 0xa4);
        do {
          if ((int)uVar7 != 0) {
            iVar8 = (int)*pfVar12;
            iVar2 = *(int *)(param_1 + 0xa0) + -1;
            if (-1 < iVar8 && iVar8 < *(int *)(param_1 + 0xa0)) {
              iVar2 = iVar8;
            }
            puVar5 = puVar10;
            _memmove(puVar10,lVar13 + (long)(iVar2 * (int)uVar7) * 4,
                     -(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
            uVar7 = (ulong)*(uint *)(param_1 + 0xa4);
          }
          pfVar12 = pfVar12 + 1;
          puVar10 = (undefined8 *)((long)puVar10 + (long)(int)uVar7 * 4);
          uVar3 = (int)puVar9 - 1;
          puVar9 = (undefined *)(ulong)uVar3;
        } while (uVar3 != 0);
        plVar6 = (long *)*param_3;
      }
      *(undefined4 *)(*plVar6 + 0x3c) = *(undefined4 *)(*plVar11 + 0x3c);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return puVar5;
      }
      ___stack_chk_fail();
      FUN_109c180ec(auStack_a0);
      __Unwind_Resume();
      *puVar5 = &PTR_FUN_110b2c3e0;
      func_0x000109c20db4(puVar5 + 0xd);
      if (*(char *)((long)puVar5 + 0x5f) < '\0') {
        __ZdlPv(puVar5[9]);
      }
      if (*(char *)((long)puVar5 + 0x47) < '\0') {
        __ZdlPv(puVar5[6]);
      }
      FUN_109c61bbc(puVar5 + 1);
      return puVar5;
    }
  }
  func_0x000105688514(&UNK_10f5a458f);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109c32170);
  (*pcVar4)();
}



/* Entry: 109c32190; end: 109c32193;  */

undefined8 * FUN_109c32190(undefined8 *param_1)

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



/* Entry: 109c32194; end: 109c321a7;  */

void FUN_109c32194(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c321a8; end: 109c329bf;  */

void FUN_109c321a8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  code *pcVar11;
  bool bVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  uint *puVar25;
  long lVar26;
  long *plVar27;
  int *piVar28;
  undefined1 uVar29;
  bool bVar30;
  long *plVar31;
  ulong uVar32;
  uint *puVar33;
  ulong uVar34;
  uint uVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int aiStack_2b0 [2];
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_294;
  undefined4 uStack_28c;
  undefined1 uStack_288;
  uint auStack_280 [7];
  undefined1 uStack_261;
  long alStack_260 [9];
  undefined4 uStack_218;
  int iStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined8 uStack_208;
  uint auStack_200 [2];
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  uint uStack_1d4;
  ulong auStack_1d0 [2];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulong uStack_1b8;
  int aiStack_1b0 [2];
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  ulong uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_18c;
  ulong uStack_180;
  undefined1 *puStack_178;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar34 = 1;
  FUN_109c182f4(param_3,1);
  plVar31 = (long *)*param_2;
  puVar36 = *(undefined8 **)(param_1 + 0x68);
  puVar25 = (uint *)(*plVar31 + 8);
  uVar9 = *puVar25;
  piVar3 = (int *)(*plVar31 + 0xc);
  lVar26 = (long)(int)uVar9 * 4 + -4;
  if (lVar26 != 0) {
    uVar34 = 1;
    piVar28 = piVar3;
    do {
      uVar34 = (ulong)(uint)(*piVar28 * (int)uVar34);
      lVar26 = lVar26 + -4;
      piVar28 = piVar28 + 1;
    } while (lVar26 != 0);
  }
  plVar27 = (long *)*param_3;
  puVar33 = *(uint **)(plVar31[2] + 0x40);
  uVar32 = (ulong)auStack_280 | 4;
  auStack_280[0] = 0;
  auStack_280[1] = 0;
  auStack_280[2] = 0;
  auStack_280[3] = 0;
  auStack_280[4] = 0;
  auStack_280[5] = 0;
  if (puVar25 != auStack_280) {
    if (uVar9 != 0) {
      _memmove(uVar32,piVar3);
    }
    auStack_280[0] = uVar9;
  }
  uVar7 = *puVar33;
  uVar6 = (int)uVar7 / 2;
  uVar2 = uVar6 + 1;
  lVar26 = (-((ulong)(long)(int)uVar9 >> 0x1f & 1) & 0xfffffffc00000000 | (ulong)uVar9 << 2) - 4;
  *(uint *)(uVar32 + lVar26) = uVar2;
  uVar8 = *(undefined4 *)((long)piVar3 + lVar26);
  uStack_20c = 0;
  uStack_208._0_4_ = 0;
  uStack_208._4_4_ = 0;
  uStack_218 = 2;
  uVar32 = uVar34 | (ulong)uVar7 << 0x20;
  iStack_214 = (int)uVar34;
  iVar20 = iStack_214;
  puVar13 = (undefined8 *)puVar36[2];
  uStack_210 = uVar7;
  (**(code **)*puVar13)(alStack_260,puVar13,&uStack_218,8);
  lVar26 = 0;
  puVar13 = *(undefined8 **)(alStack_260[0] + 0x40);
  uStack_1b8 = *(ulong *)(*plVar31 + 0x40);
  aiStack_2b0[0] = 0;
  aiStack_2b0[1] = 0;
  uStack_2a8 = uVar32;
  puStack_1f8 = &uStack_2a0;
  puStack_1a0 = &uStack_261;
  uStack_190 = 1;
  uStack_2a0 = 1;
  uStack_294 = 1;
  uStack_28c = 1;
  uStack_288 = 0;
  uStack_218 = SUB84(puVar13,0);
  iStack_214 = (int)((ulong)puVar13 >> 0x20);
  auStack_1d0[0] = 0;
  auStack_1d0[1] = 0;
  aiStack_1b0[1] = uVar8;
  uStack_18c = 0;
  bVar10 = true;
  do {
    bVar12 = bVar10;
    if ((aiStack_1b0[lVar26] != *(int *)((long)&uStack_2a8 + lVar26 * 4)) ||
       (aiStack_2b0[lVar26] != 0)) {
      uStack_190 = 0;
    }
    lVar26 = 1;
    bVar10 = false;
  } while (bVar12);
  uStack_1bc = 1;
  uStack_1dc = 1;
  uVar9 = uVar7;
  if ((int)uVar7 < 2) {
    uVar9 = 1;
  }
  iVar21 = 0x1f;
  if (0x80000000U >> (ulong)((uint)LZCOUNT(uVar9) & 0x1f) != uVar9) {
    iVar21 = 0x20;
  }
  iVar21 = iVar21 - (uint)LZCOUNT(uVar9);
  iStack_1d8 = 0;
  if ((ulong)uVar9 != 0) {
    iStack_1d8 = (int)((ulong)(1L << ((ulong)(iVar21 + 0x20) & 0x3f)) / (ulong)uVar9);
  }
  iStack_1d8 = iStack_1d8 + 1;
  uStack_1d4 = (uint)(iVar21 != 0);
  uVar9 = 0;
  if (iVar21 != 0) {
    uVar9 = iVar21 - 1;
  }
  auStack_1d0[0] = (ulong)uVar9;
  puStack_178 = &uStack_261;
  uStack_180 = 0;
  uStack_108 = 0xa69de9e6a79de9e6;
  uStack_110 = 0xa89de9e6a99de9e6;
  uStack_f8 = 0xa29de9e6a39de9e6;
  uStack_100 = 0xa49de9e6a59de9e6;
  uStack_128 = 0xae9de9e6af9de9e6;
  uStack_130 = 0xb09de9e6b19de9e6;
  uStack_118 = 0xaa9de9e6ab9de9e6;
  uStack_120 = 0xac9de9e6ad9de9e6;
  uStack_168 = 0xbe95f61abf800000;
  uStack_170 = 0xc000000000000000;
  uStack_158 = 0xba9de1c8bb9dc971;
  uStack_160 = 0xbc9d6830bd9be50c;
  uStack_148 = 0xb69de9deb79de9c6;
  uStack_150 = 0xb89de964b99de7df;
  uStack_138 = 0xb29de9e6b39de9e6;
  uStack_140 = 0xb49de9e6b59de9e4;
  uStack_a8 = 0xb7490fdbb7c90fdb;
  uStack_b0 = 0xb8490fdbb8c90fdb;
  uStack_98 = 0xb5490fdbb5c90fdb;
  uStack_a0 = 0xb6490fdbb6c90fdb;
  uStack_88 = 0xb3490fdbb3c90fdb;
  uStack_90 = 0xb4490fdbb4c90fdb;
  uStack_78 = 0xb1490fdbb1c90fdb;
  uStack_80 = 0xb2490fdbb2c90fdb;
  uStack_e8 = 0xbf3504f3bf800000;
  uStack_f0 = 0;
  uStack_d8 = 0xbd48fb30bdc8bd36;
  uStack_e0 = 0xbe47c5c2bec3ef15;
  uStack_c8 = 0xbb490fc6bbc90f88;
  uStack_d0 = 0xbc490e90bcc90ab0;
  uStack_b8 = 0xb9490fdbb9c90fda;
  uStack_c0 = 0xba490fd9bac90fd5;
  uStack_1e4 = 1;
  uVar9 = uVar7 * iVar20;
  uStack_210 = iVar20;
  uStack_20c = uVar7;
  auStack_200[0] = uVar9;
  uStack_1f0 = uVar32;
  uStack_1e8 = uVar7;
  uStack_1e0 = uVar7;
  uStack_1c0 = uVar8;
  aiStack_1b0[0] = iVar20;
  uStack_198 = uVar32;
  uStack_208 = puStack_1a0;
  uStack_1a8 = puStack_1a0;
  if (puVar13 == (undefined8 *)0x0) {
    uVar14 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3;
    _malloc();
    if ((uVar9 != 0) && (uVar14 == 0)) goto LAB_109c3296c;
    uStack_180 = uVar14;
    FUN_109c33ae4(auStack_200);
    uVar35 = uStack_1f0._4_4_ * (int)uStack_1f0;
    uVar9 = uVar35 + 7;
    if (-1 < (int)uVar35) {
      uVar9 = uVar35;
    }
    uVar4 = uVar9 & 0xfffffff8;
    if (7 < (int)uVar35) {
      lVar26 = 0;
      uVar14 = 0;
      do {
        lVar17 = 4;
        lVar18 = lVar26;
        do {
          uVar37 = *(undefined8 *)(uStack_180 + lVar18);
          puVar16 = (undefined8 *)(CONCAT44(iStack_214,uStack_218) + lVar18);
          puVar16[1] = ((undefined8 *)(uStack_180 + lVar18))[1];
          *puVar16 = uVar37;
          lVar18 = lVar18 + 0x10;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        uVar14 = uVar14 + 8;
        lVar26 = lVar26 + 0x40;
      } while (uVar14 < uVar4);
    }
    uVar5 = uVar35 - ((int)uVar35 >> 0x1f) & 0xfffffffe;
    if ((int)uVar4 < (int)uVar5) {
      lVar26 = (long)(int)uVar4;
      uVar14 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
      do {
        uVar37 = *(undefined8 *)(uStack_180 + uVar14);
        puVar16 = (undefined8 *)(CONCAT44(iStack_214,uStack_218) + uVar14);
        puVar16[1] = ((undefined8 *)(uStack_180 + uVar14))[1];
        *puVar16 = uVar37;
        lVar26 = lVar26 + 2;
        uVar14 = uVar14 + 0x10;
      } while (lVar26 < (int)uVar5);
    }
    if ((int)uVar35 <= (int)uVar5) goto LAB_109c32554;
    lVar26 = (long)(int)uVar5;
    do {
      *(undefined8 *)(CONCAT44(iStack_214,uStack_218) + lVar26 * 8) =
           *(undefined8 *)(uStack_180 + lVar26 * 8);
      lVar26 = lVar26 + 1;
    } while ((int)uVar35 != lVar26);
LAB_109c32558:
    _free();
  }
  else {
    FUN_109c33ae4(auStack_200,puVar13);
LAB_109c32554:
    if (uStack_180 != 0) goto LAB_109c32558;
  }
  puVar36 = (undefined8 *)*puVar36;
  (**(code **)*puVar36)(&uStack_218,puVar36,auStack_280,8);
  func_0x000109c18360(plVar27,&uStack_218);
  FUN_109c180ec(&uStack_218);
  lVar26 = 0;
  puVar36 = *(undefined8 **)(*plVar27 + 0x40);
  uStack_1b8 = uVar34 | (ulong)uVar2 << 0x20;
  aiStack_2b0[0] = 0;
  aiStack_2b0[1] = 0;
  uStack_2a8 = uStack_1b8;
  auStack_1d0[0] = uVar32;
  aiStack_1b0[1] = 0;
  uStack_1a8._0_4_ = 0;
  uVar29 = 1;
  bVar10 = true;
  bVar12 = true;
  do {
    bVar30 = bVar12;
    if ((*(int *)((long)auStack_1d0 + lVar26 * 4) != *(int *)((long)&uStack_2a8 + lVar26 * 4)) ||
       (aiStack_2b0[lVar26] != 0)) {
      uVar29 = 0;
      bVar10 = false;
    }
    lVar26 = 1;
    bVar12 = false;
  } while (bVar30);
  aiStack_1b0[0] = CONCAT31(aiStack_1b0[0]._1_3_,uVar29);
  uVar9 = uVar2;
  if ((int)uVar2 < 2) {
    uVar9 = 1;
  }
  iVar21 = 0x1f;
  if (0x80000000U >> (ulong)((uint)LZCOUNT(uVar9) & 0x1f) != uVar9) {
    iVar21 = 0x20;
  }
  iVar21 = iVar21 - (uint)LZCOUNT(uVar9);
  bVar12 = iVar21 != 0;
  iVar23 = 0;
  if ((ulong)uVar9 != 0) {
    iVar23 = (int)((ulong)(1L << ((ulong)(iVar21 + 0x20) & 0x3f)) / (ulong)uVar9);
  }
  uVar34 = (ulong)(iVar23 + 1);
  uVar9 = 0;
  if (iVar21 != 0) {
    uVar9 = iVar21 - 1;
  }
  uVar35 = (uint)bVar12;
  if ((puVar13 == (undefined8 *)0x0) || (puVar36 == (undefined8 *)0x0)) {
LAB_109c32674:
    uVar2 = uVar2 * iVar20;
    uVar4 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar4 = uVar2;
    }
    uVar4 = uVar4 & 0xfffffff8;
    if (7 < (int)uVar2) {
      lVar26 = 0;
      uVar32 = 0;
      puVar15 = puVar36;
      puVar16 = puVar13;
      uVar14 = uVar34;
      do {
        lVar18 = -8;
        uVar19 = uVar14;
        lVar17 = lVar26;
        puVar22 = puVar15;
        puVar24 = puVar16;
        do {
          if (bVar10) {
            uVar38 = puVar24[1];
            uVar37 = *puVar24;
          }
          else {
            iVar20 = (int)((ulong)lVar17 >> 0x20);
            iVar21 = (int)uVar32 + (int)lVar18;
            iVar20 = iVar21 + (~uVar6 + uVar7) *
                              (((int)lVar18 + ((int)uVar32 - iVar20) + 8U >> bVar12) + iVar20 >>
                              (ulong)(uVar9 & 0x1f)) + 8;
            iVar21 = iVar21 + (~uVar6 + uVar7) *
                              (((iVar21 - (int)(uVar19 >> 0x20)) + 9U >> (ulong)uVar35) +
                               (int)(uVar34 + lVar17 >> 0x20) >> (ulong)(uVar9 & 0x1f)) + 9;
            puVar1 = puVar13 + iVar20;
            if (iVar21 - iVar20 == 1) {
              uVar38 = puVar1[1];
              uVar37 = *puVar1;
            }
            else {
              uVar37 = *puVar1;
              uVar38 = puVar13[iVar21];
            }
          }
          puVar22[1] = uVar38;
          *puVar22 = uVar37;
          puVar24 = puVar24 + 2;
          lVar17 = lVar17 + uVar34 * 2;
          uVar19 = uVar19 + uVar34 * 2;
          lVar18 = lVar18 + 2;
          puVar22 = puVar22 + 2;
        } while (lVar18 != 0);
        uVar32 = uVar32 + 8;
        puVar16 = puVar16 + 8;
        puVar15 = puVar15 + 8;
        lVar26 = lVar26 + uVar34 * 8;
        uVar14 = uVar14 + uVar34 * 8;
      } while (uVar32 < uVar4);
    }
    uVar5 = uVar2 - ((int)uVar2 >> 0x1f) & 0xfffffffe;
    if ((int)uVar4 < (int)uVar5) {
      lVar18 = 0;
      puVar16 = puVar13 + (int)uVar4;
      lVar17 = (long)(int)uVar4 * uVar34;
      lVar26 = lVar17 + uVar34;
      puVar15 = puVar36 + (int)uVar4;
      do {
        if (bVar10) {
          uVar38 = puVar16[1];
          uVar37 = *puVar16;
        }
        else {
          iVar21 = uVar4 + (int)lVar18;
          iVar20 = (int)((ulong)lVar17 >> 0x20);
          iVar23 = (int)((ulong)lVar26 >> 0x20);
          iVar20 = iVar21 + (~uVar6 + uVar7) *
                            (((uint)(iVar21 - iVar20) >> (ulong)uVar35) + iVar20 >>
                            (ulong)(uVar9 & 0x1f));
          iVar21 = iVar21 + (~uVar6 + uVar7) *
                            (((iVar21 - iVar23) + 1U >> (ulong)(uint)bVar12) + iVar23 >>
                            (ulong)(uVar9 & 0x1f)) + 1;
          puVar24 = puVar13 + iVar20;
          if (iVar21 - iVar20 == 1) {
            uVar38 = puVar24[1];
            uVar37 = *puVar24;
          }
          else {
            uVar37 = *puVar24;
            uVar38 = puVar13[iVar21];
          }
        }
        puVar15[1] = uVar38;
        *puVar15 = uVar37;
        puVar16 = puVar16 + 2;
        lVar18 = lVar18 + 2;
        lVar17 = lVar17 + uVar34 * 2;
        lVar26 = lVar26 + uVar34 * 2;
        puVar15 = puVar15 + 2;
      } while ((int)uVar4 + lVar18 < (long)(int)uVar5);
    }
    if ((int)uVar5 < (int)uVar2) {
      lVar26 = (long)(int)uVar5;
      lVar18 = lVar26 * uVar34;
      do {
        lVar17 = lVar26;
        if (!bVar10) {
          iVar20 = (int)((ulong)lVar18 >> 0x20);
          lVar17 = (long)(int)((int)lVar26 +
                              (uVar7 + ~uVar6) *
                              (((uint)((int)lVar26 - iVar20) >> (ulong)(uint)bVar12) + iVar20 >>
                              (ulong)(uVar9 & 0x1f)));
        }
        puVar36[lVar26] = puVar13[lVar17];
        lVar26 = lVar26 + 1;
        lVar18 = lVar18 + uVar34;
      } while ((int)uVar2 != lVar26);
    }
  }
  else {
    uVar4 = iVar20 * uVar2;
    if (uVar2 != uVar7) {
      uVar4 = uVar2;
    }
    uVar32 = (ulong)uVar4;
    if ((int)uVar4 < 3) goto LAB_109c32674;
    if (0 < (int)(uVar2 * iVar20)) {
      lVar26 = 0;
      iVar21 = 0;
      do {
        iVar23 = (int)((ulong)lVar26 >> 0x20);
        _memcpy(puVar36,puVar13 + (int)(iVar21 + (uVar7 + ~uVar6) *
                                                 (((uint)(iVar21 - iVar23) >> (ulong)uVar35) +
                                                  iVar23 >> (ulong)(uVar9 & 0x1f))),uVar32 * 8);
        iVar21 = iVar21 + uVar4;
        puVar36 = puVar36 + uVar32;
        lVar26 = lVar26 + uVar32 * uVar34;
      } while (iVar21 < (int)(uVar2 * iVar20));
    }
  }
  FUN_109c180ec(alStack_260);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109c3296c:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109c32990);
  (*pcVar11)();
}



/* Entry: 109c329c0; end: 109c329c3;  */

undefined8 * FUN_109c329c0(undefined8 *param_1)

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



/* Entry: 109c329c4; end: 109c329d7;  */

void FUN_109c329c4(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c329d8; end: 109c3351f;  */

void FUN_109c329d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  bool bVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  bool bVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  uint uVar27;
  undefined8 *puVar28;
  long *plVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int aiStack_338 [3];
  undefined8 uStack_32c;
  int iStack_324;
  undefined8 uStack_320;
  undefined8 uStack_314;
  undefined4 uStack_30c;
  undefined1 uStack_308;
  uint uStack_2fc;
  int aiStack_2f8 [6];
  int iStack_2e0;
  int iStack_2dc;
  uint uStack_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int aiStack_2c8 [7];
  undefined1 uStack_2a9;
  undefined8 uStack_2a8;
  int iStack_2a0;
  long alStack_298 [9];
  undefined4 uStack_250;
  uint uStack_24c;
  uint uStack_248;
  int iStack_244;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  uint auStack_230 [2];
  undefined8 uStack_228;
  uint auStack_220 [18];
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int aiStack_1b8 [2];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  int iStack_198;
  undefined1 uStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  ulong uStack_180;
  undefined1 *puStack_178;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = 1;
  FUN_109c182f4(param_3,1);
  plVar29 = (long *)*param_2;
  piVar11 = (int *)(*plVar29 + 8);
  iVar16 = *piVar11;
  piVar1 = (int *)(*plVar29 + 0xc);
  lVar24 = (long)iVar16 * 4 + -8;
  if (lVar24 != 0) {
    uVar27 = 1;
    piVar14 = piVar1;
    do {
      uVar27 = *piVar14 * uVar27;
      lVar24 = lVar24 + -4;
      piVar14 = piVar14 + 1;
    } while (lVar24 != 0);
  }
  plVar25 = (long *)*param_3;
  puVar28 = *(undefined8 **)(param_1 + 0x68);
  lVar24 = *(long *)(plVar29[2] + 0x40);
  uVar26 = (ulong)aiStack_2c8 | 4;
  aiStack_2c8[0] = 0;
  aiStack_2c8[1] = 0;
  aiStack_2c8[2] = 0;
  aiStack_2c8[3] = 0;
  aiStack_2c8[4] = 0;
  aiStack_2c8[5] = 0;
  if (piVar11 != aiStack_2c8) {
    if (iVar16 != 0) {
      _memmove(uVar26,piVar1);
    }
    aiStack_2c8[0] = iVar16;
  }
  bVar13 = false;
  lVar12 = 0;
  iStack_2d4 = 0;
  iStack_2d0 = 0;
  iStack_2e0 = 0;
  iStack_2dc = 0;
  aiStack_2f8[3] = 0;
  aiStack_2f8[4] = 0;
  aiStack_2f8[0] = 0;
  aiStack_2f8[1] = 0;
  bVar5 = true;
  do {
    bVar19 = bVar5;
    iVar10 = iVar16 + (int)lVar12 + -2;
    iVar7 = *(int *)(lVar24 + lVar12 * 4);
    iVar9 = iVar7;
    if (bVar13) {
      iVar9 = iVar7 / 2 + 1;
    }
    *(int *)(uVar26 + (long)iVar10 * 4) = iVar9;
    if (iVar10 < iVar16) {
      iVar10 = piVar1[iVar10];
    }
    else {
      iVar10 = -1;
    }
    aiStack_2f8[lVar12 + 9] = iVar10;
    aiStack_2f8[lVar12 + 6] = iVar9;
    aiStack_2f8[lVar12 + 3] = iVar7;
    aiStack_2f8[lVar12] = iVar7;
    bVar13 = true;
    lVar12 = 1;
    bVar5 = false;
  } while (bVar19);
  uStack_240 = 0;
  uStack_248 = aiStack_2f8[0];
  uStack_250 = 3;
  iStack_244 = aiStack_2f8[1];
  puVar8 = (undefined8 *)puVar28[2];
  uStack_2fc = uVar27;
  aiStack_2f8[2] = uVar27;
  aiStack_2f8[5] = uVar27;
  uStack_2d8 = uVar27;
  uStack_24c = uVar27;
  (**(code **)*puVar8)(alStack_298,puVar8,&uStack_250,8);
  lVar24 = 0;
  lVar12 = *(long *)(alStack_298[0] + 0x40);
  uStack_2a8 = CONCAT44(aiStack_2f8[0],uStack_2fc);
  iStack_2a0 = aiStack_2f8[1];
  uStack_1a0 = aiStack_2f8[2];
  iStack_19c = aiStack_2f8[3];
  uStack_32c = CONCAT44(aiStack_2f8[3],aiStack_2f8[2]);
  iStack_324 = aiStack_2f8[4];
  uStack_320 = 2;
  uStack_250 = (undefined4)lVar12;
  uVar4 = uStack_250;
  uStack_24c = (uint)((ulong)lVar12 >> 0x20);
  uVar27 = uStack_24c;
  uStack_248 = uStack_2fc;
  iStack_244 = aiStack_2f8[0];
  uStack_240 = CONCAT44(uStack_240._4_4_,aiStack_2f8[1]);
  puStack_238 = &uStack_2a9;
  uStack_228._4_4_ = (undefined4)((ulong)&uStack_320 >> 0x20);
  auStack_220[0] = 0;
  auStack_220[1] = 0;
  uStack_1c8 = *(undefined8 *)(*plVar29 + 0x40);
  uStack_1c0 = CONCAT44(iStack_2d4,uStack_2d8);
  aiStack_1b8[0] = iStack_2d0;
  aiStack_338[2] = 0;
  aiStack_338[0] = 0;
  aiStack_338[1] = 0;
  uStack_314 = 0x100000001;
  uStack_194 = 1;
  uStack_30c = 1;
  uStack_308 = 0;
  auStack_220[0xb] = 0;
  auStack_220[0xc] = 0;
  auStack_220[9] = 0;
  auStack_220[10] = 0;
  auStack_220[0xf] = 0;
  auStack_220[0x10] = 0;
  auStack_220[0xd] = 0;
  auStack_220[0xe] = 0;
  auStack_220[2] = 0;
  auStack_220[0x11] = 0;
  iStack_198 = aiStack_2f8[4];
  uStack_188 = 0;
  uStack_190 = 0;
  do {
    if ((*(int *)((long)&uStack_1c0 + lVar24) != *(int *)((long)&uStack_32c + lVar24)) ||
       (*(int *)((long)aiStack_338 + lVar24) != 0)) {
      uStack_194 = 0;
    }
    lVar24 = lVar24 + 4;
  } while (lVar24 != 0xc);
  lVar24 = 0;
  puStack_1d0 = (undefined1 *)CONCAT44(puStack_1d0._4_4_,1);
  uStack_1d8 = (undefined1 *)CONCAT44(iStack_2d0,iStack_2d4 * iStack_2d0);
  auStack_220[8] = 1;
  uVar20 = 1;
  puVar18 = auStack_220 + 0xe;
  do {
    uVar20 = (&iStack_324)[lVar24] * uVar20;
    uVar22 = uVar20;
    if ((int)uVar20 < 2) {
      uVar22 = 1;
    }
    iVar16 = 0x1f;
    if (0x80000000U >> (ulong)((uint)LZCOUNT(uVar22) & 0x1f) != uVar22) {
      iVar16 = 0x20;
    }
    iVar16 = iVar16 - (uint)LZCOUNT(uVar22);
    auStack_220[lVar24 + 7] = uVar20;
    iVar9 = 0;
    if ((ulong)uVar22 != 0) {
      iVar9 = (int)((ulong)(1L << ((ulong)(iVar16 + 0x20) & 0x3f)) / (ulong)uVar22);
    }
    uVar22 = 0;
    if (iVar16 != 0) {
      uVar22 = iVar16 - 1;
    }
    puVar18[-2] = iVar9 + 1;
    puVar18[-1] = (uint)(iVar16 != 0);
    *puVar18 = uVar22;
    lVar24 = lVar24 + -1;
    puVar18 = puVar18 + -3;
  } while (lVar24 != -2);
  puStack_178 = &uStack_2a9;
  uStack_180 = 0;
  uStack_128 = 0xae9de9e6af9de9e6;
  uStack_130 = 0xb09de9e6b19de9e6;
  uStack_118 = 0xaa9de9e6ab9de9e6;
  uStack_120 = 0xac9de9e6ad9de9e6;
  uStack_108 = 0xa69de9e6a79de9e6;
  uStack_110 = 0xa89de9e6a99de9e6;
  uStack_f8 = 0xa29de9e6a39de9e6;
  uStack_100 = 0xa49de9e6a59de9e6;
  uStack_168 = 0xbe95f61abf800000;
  uStack_170 = 0xc000000000000000;
  uStack_158 = 0xba9de1c8bb9dc971;
  uStack_160 = 0xbc9d6830bd9be50c;
  uStack_148 = 0xb69de9deb79de9c6;
  uStack_150 = 0xb89de964b99de7df;
  uStack_138 = 0xb29de9e6b39de9e6;
  uStack_140 = 0xb49de9e6b59de9e4;
  uStack_88 = 0xb3490fdbb3c90fdb;
  uStack_90 = 0xb4490fdbb4c90fdb;
  uStack_78 = 0xb1490fdbb1c90fdb;
  uStack_80 = 0xb2490fdbb2c90fdb;
  uStack_a8 = 0xb7490fdbb7c90fdb;
  uStack_b0 = 0xb8490fdbb8c90fdb;
  uStack_98 = 0xb5490fdbb5c90fdb;
  uStack_a0 = 0xb6490fdbb6c90fdb;
  uStack_c8 = 0xbb490fc6bbc90f88;
  uStack_d0 = 0xbc490e90bcc90ab0;
  uStack_b8 = 0xb9490fdbb9c90fda;
  uStack_c0 = 0xba490fd9bac90fd5;
  auStack_220[2] = aiStack_2f8[4];
  auStack_220[0] = aiStack_2f8[2];
  auStack_220[1] = aiStack_2f8[3];
  uStack_e8 = 0xbf3504f3bf800000;
  uStack_f0 = 0;
  uStack_d8 = 0xbd48fb30bdc8bd36;
  uStack_e0 = 0xbe47c5c2bec3ef15;
  auStack_220[5] = 1;
  uVar20 = aiStack_2f8[4] * aiStack_2f8[2] * aiStack_2f8[3];
  auStack_220[4] = aiStack_2f8[4];
  auStack_220[3] = aiStack_2f8[3] * aiStack_2f8[4];
  auStack_230[0] = uVar20;
  puStack_1b0 = puStack_238;
  puStack_1a8 = puStack_238;
  uStack_228 = &uStack_320;
  if (lVar12 == 0) {
    uVar26 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3;
    _malloc();
    if ((uVar20 != 0) && (uVar26 == 0)) goto LAB_109c334cc;
    uStack_180 = uVar26;
    FUN_109c34d74(auStack_230);
    uVar22 = auStack_220[2] * auStack_220[0] * auStack_220[1];
    uVar20 = uVar22 + 7;
    if (-1 < (int)uVar22) {
      uVar20 = uVar22;
    }
    uVar2 = uVar20 & 0xfffffff8;
    if (7 < (int)uVar22) {
      lVar24 = 0;
      uVar26 = 0;
      do {
        lVar17 = 4;
        lVar21 = lVar24;
        do {
          uVar31 = *(undefined8 *)(uStack_180 + lVar21);
          puVar8 = (undefined8 *)(CONCAT44(uStack_24c,uStack_250) + lVar21);
          puVar8[1] = ((undefined8 *)(uStack_180 + lVar21))[1];
          *puVar8 = uVar31;
          lVar21 = lVar21 + 0x10;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        uVar26 = uVar26 + 8;
        lVar24 = lVar24 + 0x40;
      } while (uVar26 < uVar2);
    }
    uVar3 = uVar22 - ((int)uVar22 >> 0x1f) & 0xfffffffe;
    if ((int)uVar2 < (int)uVar3) {
      lVar24 = (long)(int)uVar2;
      uVar26 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
      do {
        uVar31 = *(undefined8 *)(uStack_180 + uVar26);
        puVar8 = (undefined8 *)(CONCAT44(uStack_24c,uStack_250) + uVar26);
        puVar8[1] = ((undefined8 *)(uStack_180 + uVar26))[1];
        *puVar8 = uVar31;
        lVar24 = lVar24 + 2;
        uVar26 = uVar26 + 0x10;
      } while (lVar24 < (int)uVar3);
    }
    if ((int)uVar22 <= (int)uVar3) goto LAB_109c32ec0;
    lVar24 = (long)(int)uVar3;
    do {
      *(undefined8 *)(CONCAT44(uStack_24c,uStack_250) + lVar24 * 8) =
           *(undefined8 *)(uStack_180 + lVar24 * 8);
      lVar24 = lVar24 + 1;
    } while ((int)uVar22 != lVar24);
LAB_109c32ec4:
    _free();
  }
  else {
    FUN_109c34d74(auStack_230,lVar12);
LAB_109c32ec0:
    if (uStack_180 != 0) goto LAB_109c32ec4;
  }
  puVar28 = (undefined8 *)*puVar28;
  (**(code **)*puVar28)(&uStack_250,puVar28,aiStack_2c8,8);
  func_0x000109c18360(plVar25,&uStack_250);
  FUN_109c180ec(&uStack_250);
  lVar24 = 0;
  lVar21 = *(long *)(*plVar25 + 0x40);
  uStack_240 = CONCAT44(uStack_240._4_4_,iStack_2dc);
  aiStack_338[0] = 0;
  aiStack_338[1] = 0;
  aiStack_338[2] = 0;
  iStack_324 = iStack_2dc;
  uStack_32c = CONCAT44(iStack_2e0,aiStack_2f8[5]);
  uStack_250 = (undefined4)lVar21;
  uStack_24c = (uint)((ulong)lVar21 >> 0x20);
  uStack_248 = aiStack_2f8[5];
  iStack_244 = iStack_2e0;
  auStack_220[5] = 0;
  auStack_220[6] = 0;
  auStack_220[3] = 0;
  auStack_220[4] = 0;
  auStack_220[1] = 0;
  auStack_220[2] = 0;
  uStack_228._4_4_ = 0;
  auStack_220[0] = 0;
  puStack_238 = &uStack_2a9;
  auStack_220[0x10] = iStack_2a0;
  auStack_220[7] = 0;
  auStack_220[0xe] = (uint)uStack_2a8;
  auStack_220[0xf] = (uint)((ulong)uStack_2a8 >> 0x20);
  uStack_1c8 = CONCAT44(iStack_2e0,aiStack_2f8[5]);
  puStack_1b0 = (undefined1 *)((ulong)puStack_1b0 & 0xffffffff00000000);
  uStack_1c0._0_5_ = CONCAT14(1,iStack_2dc);
  aiStack_1b8[0] = 0;
  aiStack_1b8[1] = 0;
  do {
    if ((*(int *)((long)auStack_220 + lVar24 + 0x38) != *(int *)((long)&uStack_32c + lVar24)) ||
       (*(int *)((long)aiStack_338 + lVar24) != 0)) {
      uStack_1c0._0_5_ = (uint5)(uint)uStack_1c0;
    }
    lVar24 = lVar24 + 4;
  } while (lVar24 != 0xc);
  lVar24 = 0;
  auStack_220[10] = 1;
  auStack_220[9] = iStack_2a0;
  auStack_220[8] = auStack_220[0xf] * iStack_2a0;
  uStack_228._0_4_ = 1;
  uVar20 = 1;
  puVar18 = auStack_220 + 4;
  do {
    uVar20 = (&iStack_324)[lVar24] * uVar20;
    uVar22 = uVar20;
    if ((int)uVar20 < 2) {
      uVar22 = 1;
    }
    iVar16 = 0x1f;
    if (0x80000000U >> (ulong)((uint)LZCOUNT(uVar22) & 0x1f) != uVar22) {
      iVar16 = 0x20;
    }
    iVar16 = iVar16 - (uint)LZCOUNT(uVar22);
    auStack_230[lVar24 + 1] = uVar20;
    iVar9 = 0;
    if ((ulong)uVar22 != 0) {
      iVar9 = (int)((ulong)(1L << ((ulong)(iVar16 + 0x20) & 0x3f)) / (ulong)uVar22);
    }
    uVar22 = 0;
    if (iVar16 != 0) {
      uVar22 = iVar16 - 1;
    }
    puVar18[-2] = iVar9 + 1;
    puVar18[-1] = (uint)(iVar16 != 0);
    *puVar18 = uVar22;
    lVar24 = lVar24 + -1;
    puVar18 = puVar18 + -3;
  } while (lVar24 != -2);
  auStack_220[0xc] = uVar4;
  auStack_220[0xd] = uVar27;
  uStack_1d8 = puStack_238;
  puStack_1d0 = puStack_238;
  if ((lVar12 == 0) || (lVar21 == 0)) {
LAB_109c330b0:
    uVar20 = (uint)uStack_1c0 * aiStack_2f8[5] * iStack_2e0;
    uVar27 = uVar20 + 7;
    if (-1 < (int)uVar20) {
      uVar27 = uVar20;
    }
    uVar27 = uVar27 & 0xfffffff8;
    if (7 < (int)uVar20) {
      uVar26 = 0;
      do {
        lVar24 = 0;
        do {
          uVar30 = uVar26 + lVar24 * 2;
          lVar17 = uVar30 * 8;
          if (uStack_1c0._4_1_ == '\x01') {
            puVar28 = (undefined8 *)(lVar12 + lVar17);
            uVar32 = puVar28[1];
            uVar31 = *puVar28;
          }
          else {
            lVar23 = 0;
            iVar16 = 0;
            iVar9 = 0;
            uVar22 = (uint)uVar30 | 1;
            bVar5 = true;
            do {
              bVar13 = bVar5;
              iVar7 = (int)uVar30;
              uVar30 = (ulong)*(uint *)((long)&uStack_228 + lVar23 * 0xc + 4);
              iVar10 = (int)(uVar30 * (long)iVar7 >> 0x20);
              uVar2 = ((uint)(iVar7 - iVar10) >> (ulong)(auStack_220[lVar23 * 3] & 0x1f)) + iVar10
                      >> (ulong)(auStack_220[lVar23 * 3 + 1] & 0x1f);
              iVar10 = (int)(uVar30 * (long)(int)uVar22 >> 0x20);
              uVar3 = (uVar22 - iVar10 >> (ulong)(auStack_220[lVar23 * 3] & 0x1f)) + iVar10 >>
                      (ulong)(auStack_220[lVar23 * 3 + 1] & 0x1f);
              iVar16 = iVar16 + (uVar2 + aiStack_1b8[lVar23]) * auStack_220[lVar23 + 8];
              iVar9 = iVar9 + (uVar3 + aiStack_1b8[lVar23]) * auStack_220[lVar23 + 8];
              uVar2 = iVar7 - uVar2 * auStack_230[lVar23];
              uVar30 = (ulong)uVar2;
              uVar22 = uVar22 - uVar3 * auStack_230[lVar23];
              lVar23 = 1;
              bVar5 = false;
            } while (bVar13);
            uVar2 = iVar16 + uVar2;
            if ((iVar9 + uVar22) - uVar2 == 1) {
              puVar28 = (undefined8 *)
                        (lVar12 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3)
                        );
              uVar32 = puVar28[1];
              uVar31 = *puVar28;
            }
            else {
              uVar31 = *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8);
              uVar32 = *(undefined8 *)(lVar12 + (long)(int)(iVar9 + uVar22) * 8);
            }
          }
          puVar28 = (undefined8 *)(lVar21 + lVar17);
          puVar28[1] = uVar32;
          *puVar28 = uVar31;
          lVar24 = lVar24 + 1;
        } while (lVar24 != 4);
        uVar26 = uVar26 + 8;
      } while (uVar26 < uVar27);
    }
    uVar22 = uVar20 - ((int)uVar20 >> 0x1f) & 0xfffffffe;
    if ((int)uVar27 < (int)uVar22) {
      uVar26 = (ulong)(int)uVar27;
      do {
        if (uStack_1c0._4_1_ == '\x01') {
          puVar28 = (undefined8 *)(lVar12 + uVar26 * 8);
          uVar32 = puVar28[1];
          uVar31 = *puVar28;
        }
        else {
          lVar24 = 0;
          iVar16 = 0;
          iVar9 = 0;
          uVar27 = (uint)uVar26 | 1;
          uVar30 = uVar26;
          bVar5 = true;
          do {
            bVar13 = bVar5;
            iVar7 = (int)uVar30;
            uVar30 = (ulong)*(uint *)((long)&uStack_228 + lVar24 * 0xc + 4);
            iVar10 = (int)(uVar30 * (long)iVar7 >> 0x20);
            uVar2 = ((uint)(iVar7 - iVar10) >> (ulong)(auStack_220[lVar24 * 3] & 0x1f)) + iVar10 >>
                    (ulong)(auStack_220[lVar24 * 3 + 1] & 0x1f);
            iVar10 = (int)(uVar30 * (long)(int)uVar27 >> 0x20);
            uVar3 = (uVar27 - iVar10 >> (ulong)(auStack_220[lVar24 * 3] & 0x1f)) + iVar10 >>
                    (ulong)(auStack_220[lVar24 * 3 + 1] & 0x1f);
            iVar16 = iVar16 + (uVar2 + aiStack_1b8[lVar24]) * auStack_220[lVar24 + 8];
            iVar9 = iVar9 + (uVar3 + aiStack_1b8[lVar24]) * auStack_220[lVar24 + 8];
            uVar2 = iVar7 - uVar2 * auStack_230[lVar24];
            uVar30 = (ulong)uVar2;
            uVar27 = uVar27 - uVar3 * auStack_230[lVar24];
            lVar24 = 1;
            bVar5 = false;
          } while (bVar13);
          uVar2 = iVar16 + uVar2;
          if ((iVar9 + uVar27) - uVar2 == 1) {
            puVar28 = (undefined8 *)
                      (lVar12 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3));
            uVar32 = puVar28[1];
            uVar31 = *puVar28;
          }
          else {
            uVar31 = *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8);
            uVar32 = *(undefined8 *)(lVar12 + (long)(int)(iVar9 + uVar27) * 8);
          }
        }
        puVar28 = (undefined8 *)(lVar21 + uVar26 * 8);
        puVar28[1] = uVar32;
        *puVar28 = uVar31;
        uVar26 = uVar26 + 2;
      } while ((long)uVar26 < (long)(int)uVar22);
    }
    if ((int)uVar22 < (int)uVar20) {
      uVar26 = (ulong)(int)uVar22;
      do {
        if ((uStack_1c0 & 0x100000000) == 0) {
          lVar24 = 0;
          iVar16 = 0;
          uVar30 = uVar26;
          bVar5 = true;
          do {
            bVar13 = bVar5;
            iVar7 = (int)uVar30;
            iVar9 = (int)((ulong)*(uint *)((long)&uStack_228 + lVar24 * 0xc + 4) * (long)iVar7 >>
                         0x20);
            uVar27 = ((uint)(iVar7 - iVar9) >> (ulong)(auStack_220[lVar24 * 3] & 0x1f)) + iVar9 >>
                     (ulong)(auStack_220[lVar24 * 3 + 1] & 0x1f);
            iVar16 = iVar16 + (uVar27 + aiStack_1b8[lVar24]) * auStack_220[lVar24 + 8];
            uVar27 = iVar7 - uVar27 * auStack_230[lVar24];
            uVar30 = (ulong)uVar27;
            lVar24 = 1;
            bVar5 = false;
          } while (bVar13);
          iVar16 = uVar27 + iVar16;
        }
        else {
          iVar16 = (int)uVar26;
        }
        *(undefined8 *)(lVar21 + uVar26 * 8) = *(undefined8 *)(lVar12 + (long)iVar16 * 8);
        uVar26 = uVar26 + 1;
      } while (uVar26 != (long)(int)uVar20);
    }
  }
  else {
    uVar26 = 2;
    uVar30 = 1;
    do {
      uVar27 = *(uint *)((long)&uStack_1c8 + uVar26 * 4);
      uVar20 = uVar27 * (int)uVar30;
      uVar30 = (ulong)uVar20;
      if ((int)uVar26 == 0) break;
      lVar24 = uVar26 + 0xe;
      uVar26 = (ulong)((int)uVar26 - 1);
    } while (uVar27 == auStack_220[lVar24]);
    if ((int)uVar20 < 3) goto LAB_109c330b0;
    iVar16 = (uint)uStack_1c0 * aiStack_2f8[5] * iStack_2e0;
    if (0 < iVar16) {
      uVar26 = 0;
      do {
        lVar24 = 0;
        iVar9 = 0;
        uVar15 = uVar26;
        bVar5 = true;
        do {
          bVar13 = bVar5;
          iVar7 = (int)uVar15;
          iVar10 = (int)((ulong)*(uint *)((long)&uStack_228 + lVar24 * 0xc + 4) * (long)iVar7 >>
                        0x20);
          uVar27 = ((uint)(iVar7 - iVar10) >> (ulong)(auStack_220[lVar24 * 3] & 0x1f)) + iVar10 >>
                   (ulong)(auStack_220[lVar24 * 3 + 1] & 0x1f);
          iVar9 = iVar9 + (uVar27 + aiStack_1b8[lVar24]) * auStack_220[lVar24 + 8];
          uVar27 = iVar7 - uVar27 * auStack_230[lVar24];
          uVar15 = (ulong)uVar27;
          lVar24 = 1;
          bVar5 = false;
        } while (bVar13);
        _memcpy(lVar21 + uVar26 * 8,lVar12 + (long)(int)(uVar27 + iVar9) * 8,uVar30 << 3);
        uVar26 = uVar26 + uVar30;
      } while ((int)uVar26 < iVar16);
    }
  }
  FUN_109c180ec(alStack_298);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = 2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109c334cc:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c334f0);
  (*pcVar6)();
}



/* Entry: 109c33520; end: 109c335ef;  */

undefined8 * FUN_109c33520(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cbe8;
  func_0x000107c31940(auStack_38,&UNK_10f5a45d3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c335f0; end: 109c336bf;  */

undefined8 * FUN_109c335f0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cc10;
  func_0x000107c31940(auStack_38,&UNK_10f5a45d7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c336c0; end: 109c3378f;  */

undefined8 * FUN_109c336c0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cc38;
  func_0x000107c31940(auStack_38,&UNK_10f5a45dd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c33790; end: 109c33793;  */

undefined8 * FUN_109c33790(undefined8 *param_1)

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



/* Entry: 109c33794; end: 109c337a7;  */

void FUN_109c33794(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c337a8; end: 109c338cf;  */

undefined8 * FUN_109c337a8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined4 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = *(undefined8 **)(param_1 + 0x68);
  FUN_109c182f4(param_3,1);
  plVar5 = (long *)*param_3;
  (*(code *)**(undefined8 **)*puVar8)(auStack_80,(undefined8 *)*puVar8,*(long *)*param_2 + 8,1);
  func_0x000109c18360(plVar5,auStack_80);
  FUN_109c180ec(auStack_80);
  lVar3 = *plVar5;
  *(undefined4 *)(lVar3 + 0x3c) = 2;
  puVar6 = *(undefined4 **)(*(long *)*param_2 + 0x40);
  uVar1 = *(uint *)(lVar3 + 8) & ((int)*(uint *)(lVar3 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puVar8 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar3 + 0xc,uVar1);
  if ((int)puVar8 != 0) {
    lVar3 = (long)(int)puVar8 << 3;
    puVar4 = *(undefined4 **)(*plVar5 + 0x40);
    puVar7 = puVar6;
    do {
      puVar6 = puVar7 + 2;
      *puVar4 = *puVar7;
      lVar3 = lVar3 + -8;
      puVar4 = puVar4 + 1;
      puVar7 = puVar6;
    } while (lVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar8;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  puVar2 = puVar8;
  __Unwind_Resume();
  pcStack_88 = FUN_109c338d0;
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
  *puVar2 = &PTR_FUN_110b2cc60;
  puStack_a0 = puVar6;
  puStack_98 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c31940(auStack_b8,&UNK_10f5a45e2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar2 + 6,auStack_b8);
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  return puVar2;
}



/* Entry: 109c338d0; end: 109c3399f;  */

undefined8 * FUN_109c338d0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cc60;
  func_0x000107c31940(auStack_38,&UNK_10f5a45e2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c339a0; end: 109c339a3;  */

undefined8 * FUN_109c339a0(undefined8 *param_1)

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



/* Entry: 109c339a4; end: 109c339b7;  */

void FUN_109c339a4(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c339b8; end: 109c33ae3;  */

void FUN_109c339b8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  float *pfVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 (*pauVar15) [12];
  uint uVar16;
  undefined *puVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  uint *puVar35;
  long *plVar36;
  float *pfVar37;
  long lVar38;
  undefined8 *puVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  float extraout_s1_05;
  undefined4 extraout_s1_06;
  float extraout_s1_07;
  undefined4 extraout_s1_08;
  float extraout_s1_09;
  undefined4 extraout_s1_10;
  float extraout_s1_11;
  undefined4 extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  double extraout_d1;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  float fStack_290;
  undefined4 uStack_28c;
  float fStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_1a8;
  undefined8 *puStack_168;
  undefined8 *puStack_148;
  uint uStack_124;
  undefined8 uStack_100;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar39 = *(undefined8 **)(param_1 + 0x68);
  FUN_109c182f4(param_3,1);
  plVar36 = (long *)*param_3;
  (*(code *)**(undefined8 **)*puVar39)(auStack_80,(undefined8 *)*puVar39,*(long *)*param_2 + 8,1);
  func_0x000109c18360(plVar36,auStack_80);
  FUN_109c180ec(auStack_80);
  lVar20 = *plVar36;
  *(undefined4 *)(lVar20 + 0x3c) = 2;
  lVar38 = *(long *)(*(long *)*param_2 + 0x40);
  uVar16 = *(uint *)(lVar20 + 8) & ((int)*(uint *)(lVar20 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar16) {
    uVar16 = 5;
  }
  uVar18 = (ulong)uVar16;
  puVar12 = (uint *)&UNK_10f5749aa;
  lVar14 = 0x1a;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar20 + 0xc);
  if ((int)puVar12 != 0) {
    lVar20 = (long)(int)puVar12 << 3;
    puVar21 = *(undefined4 **)(*plVar36 + 0x40);
    puVar30 = (undefined4 *)(lVar38 + 4);
    do {
      *puVar21 = *puVar30;
      lVar20 = lVar20 + -8;
      puVar21 = puVar21 + 1;
      puVar30 = puVar30 + 2;
    } while (lVar20 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  __Unwind_Resume();
  uVar40 = (ulong)*puVar12;
  if (0 < (int)*puVar12) {
    uVar22 = 0;
    uVar16 = puVar12[0x1c];
    lVar20 = *(long *)(puVar12 + 0x12);
    do {
      iVar34 = (int)uVar22;
      if ((char)uVar16 == '\0') {
        iVar33 = (int)(uVar22 * puVar12[10] >> 0x20);
        uVar9 = ((uint)(iVar34 - iVar33) >> (ulong)(puVar12[0xb] & 0x1f)) + iVar33 >>
                (ulong)(puVar12[0xc] & 0x1f);
        iVar34 = ((puVar12[0x1e] + iVar34) - uVar9 * puVar12[8]) +
                 (uVar9 + puVar12[0x1d]) * puVar12[0x10];
      }
      *(ulong *)(lVar14 + uVar22 * 8) = (ulong)*(uint *)(lVar20 + (long)iVar34 * 4);
      uVar22 = uVar22 + 1;
    } while (uVar40 != uVar22);
  }
  puVar23 = *(ulong **)(puVar12 + 2);
  if (*puVar23 != 0) {
    uVar22 = 0;
    do {
      if ((puVar23[3] & 1) == 0) {
        iVar34 = (int)puVar23[2] * (int)uVar22;
      }
      else {
        iVar34 = 0;
        if (*(int *)((long)puVar23 + 0x14) != 0) {
          iVar34 = (int)uVar22 / *(int *)((long)puVar23 + 0x14);
        }
      }
      uVar1 = (long)*(int *)((long)puVar23 + 0xc) + (long)iVar34;
      uVar16 = puVar12[uVar1 + 4];
      uVar42 = (ulong)uVar16;
      puVar13 = (undefined8 *)(-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar42 << 3);
      puVar39 = puVar13;
      _malloc();
      iVar34 = (int)uVar18;
      if (uVar16 != 0 && puVar39 == (undefined8 *)0x0) goto LAB_109c3433c;
      uVar9 = uVar16 - 1;
      if ((uVar16 & uVar9) == 0) {
        if (uVar16 < 2) {
          uStack_124 = 0;
        }
        else {
          uStack_124 = 0;
          uVar25 = uVar42;
          do {
            uVar4 = (int)uVar25 >> 1;
            uVar25 = (ulong)uVar4;
            uStack_124 = uStack_124 + 1;
          } while (1 < uVar4);
        }
        puStack_148 = (undefined8 *)0x0;
        uStack_1a8 = 0;
        uVar25 = 0;
        puStack_168 = (undefined8 *)0x0;
      }
      else {
        uVar24 = 2;
        do {
          uVar25 = uVar24;
          uVar24 = (ulong)(uint)((int)uVar25 << 1);
        } while ((int)uVar25 < (int)(uVar16 * 2 + -1));
        uStack_124 = 0;
        uVar24 = uVar25;
        do {
          uVar4 = (int)uVar24 >> 1;
          uVar24 = (ulong)uVar4;
          uStack_124 = uStack_124 + 1;
        } while (1 < uVar4);
        puStack_168 = (undefined8 *)(-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3);
        puStack_148 = puStack_168;
        _malloc();
        iVar34 = (int)uVar18;
        if (puStack_148 == (undefined8 *)0x0) {
LAB_109c3433c:
          lVar20 = 8;
          ___cxa_allocate_exception();
          __ZNSt9bad_allocC1Ev();
          pauVar15 = (undefined1 (*) [12])PTR___ZTISt9bad_alloc_110346a68;
          puVar17 = PTR___ZNSt9bad_allocD1Ev_110346998;
          ___cxa_throw();
          uVar16 = (uint)puVar17;
          if ((int)uVar16 < 9) {
            if (uVar16 == 2) {
              fVar44 = (float)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20);
              uVar32 = *(undefined8 *)*pauVar15;
              auVar51._12_4_ = fVar44;
              auVar51._0_12_ = *pauVar15;
              auVar10._12_4_ = fVar44;
              auVar10._0_12_ = *pauVar15;
              auVar51 = NEON_ext(auVar51,auVar10,8,1);
              *(ulong *)(*pauVar15 + 8) =
                   CONCAT44(auVar51._12_4_ - fVar44,
                            auVar51._8_4_ - (float)*(undefined8 *)(*pauVar15 + 8));
              *(ulong *)*pauVar15 =
                   CONCAT44(auVar51._4_4_ + (float)((ulong)uVar32 >> 0x20),
                            auVar51._0_4_ + (float)uVar32);
            }
            else if (uVar16 == 4) {
              fVar45 = *(float *)*pauVar15 + *(float *)(*pauVar15 + 8);
              fVar48 = *(float *)(*pauVar15 + 4) + *(float *)pauVar15[1];
              fVar55 = *(float *)*pauVar15 - *(float *)(*pauVar15 + 8);
              fVar56 = *(float *)(*pauVar15 + 4) - *(float *)pauVar15[1];
              fVar46 = *(float *)(pauVar15[1] + 4) + *(float *)pauVar15[2];
              fVar47 = *(float *)(pauVar15[1] + 8) + *(float *)(pauVar15[2] + 4);
              uStack_278 = 0xbf80000000000000;
              fVar44 = *(float *)(pauVar15[1] + 4) - *(float *)pauVar15[2];
              uStack_280 = CONCAT44(*(float *)(pauVar15[1] + 8) - *(float *)(pauVar15[2] + 4),fVar44
                                   );
              FUN_1095512ac(&uStack_278,&uStack_280);
              *(float *)*pauVar15 = fVar45 + fVar46;
              *(float *)(*pauVar15 + 4) = fVar48 + fVar47;
              *(float *)(*pauVar15 + 8) = fVar55 + fVar44;
              *(float *)pauVar15[1] = fVar56 + extraout_s1_18;
              *(float *)(pauVar15[1] + 4) = fVar45 - fVar46;
              *(float *)(pauVar15[1] + 8) = fVar48 - fVar47;
              *(float *)pauVar15[2] = fVar55 - fVar44;
              *(float *)(pauVar15[2] + 4) = fVar56 - extraout_s1_18;
            }
            else if (uVar16 == 8) {
              fVar55 = *(float *)*pauVar15 + *(float *)(*pauVar15 + 8);
              fVar56 = *(float *)(*pauVar15 + 4) + *(float *)pauVar15[1];
              fVar46 = *(float *)*pauVar15 - *(float *)(*pauVar15 + 8);
              fVar47 = *(float *)(*pauVar15 + 4) - *(float *)pauVar15[1];
              fVar57 = *(float *)(pauVar15[1] + 4) + *(float *)pauVar15[2];
              fVar58 = *(float *)(pauVar15[1] + 8) + *(float *)(pauVar15[2] + 4);
              fVar44 = *(float *)(pauVar15[1] + 4) - *(float *)pauVar15[2];
              uStack_278 = CONCAT44(*(float *)(pauVar15[1] + 8) - *(float *)(pauVar15[2] + 4),fVar44
                                   );
              uStack_280 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_278,&uStack_280);
              fVar59 = *(float *)(pauVar15[2] + 8) + *(float *)(pauVar15[3] + 4);
              fVar61 = *(float *)pauVar15[3] + *(float *)(pauVar15[3] + 8);
              fVar64 = *(float *)(pauVar15[2] + 8) - *(float *)(pauVar15[3] + 4);
              fVar45 = *(float *)pauVar15[3] - *(float *)(pauVar15[3] + 8);
              fVar63 = *(float *)pauVar15[4] + *(float *)(pauVar15[4] + 8);
              fVar62 = *(float *)(pauVar15[4] + 4) + *(float *)pauVar15[5];
              fVar48 = *(float *)pauVar15[4] - *(float *)(pauVar15[4] + 8);
              uStack_278 = CONCAT44(*(float *)(pauVar15[4] + 4) - *(float *)pauVar15[5],fVar48);
              uStack_280 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_278,&uStack_280);
              fVar53 = fVar55 + fVar57;
              fVar52 = fVar56 + fVar58;
              fVar54 = fVar46 + fVar44;
              fVar60 = fVar47 + extraout_s1_13;
              fVar55 = fVar55 - fVar57;
              fVar56 = fVar56 - fVar58;
              fVar46 = fVar46 - fVar44;
              fVar47 = fVar47 - extraout_s1_13;
              fVar57 = fVar59 + fVar63;
              fVar58 = fVar61 + fVar62;
              uStack_278 = CONCAT44(fVar45 + extraout_s1_14,fVar64 + fVar48);
              fVar49 = 0.70710677;
              uStack_280 = 0xbf3504f33f3504f3;
              FUN_1095512ac(&uStack_278,&uStack_280);
              uStack_278 = CONCAT44(fVar61 - fVar62,fVar59 - fVar63);
              fVar59 = 0.0;
              uStack_280 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_278,&uStack_280);
              uStack_278 = CONCAT44(fVar45 - extraout_s1_14,fVar64 - fVar48);
              fVar44 = -0.70710677;
              uStack_280 = 0xbf3504f3bf3504f3;
              FUN_1095512ac(&uStack_278,&uStack_280);
              *(float *)*pauVar15 = fVar53 + fVar57;
              *(float *)(*pauVar15 + 4) = fVar52 + fVar58;
              *(float *)(*pauVar15 + 8) = fVar54 + fVar49;
              *(float *)pauVar15[1] = fVar60 + extraout_s1_15;
              *(float *)(pauVar15[1] + 4) = fVar55 + fVar59;
              *(float *)(pauVar15[1] + 8) = fVar56 + extraout_s1_16;
              *(float *)pauVar15[2] = fVar46 + fVar44;
              *(float *)(pauVar15[2] + 4) = fVar47 + extraout_s1_17;
              *(float *)(pauVar15[2] + 8) = fVar53 - fVar57;
              *(float *)pauVar15[3] = fVar52 - fVar58;
              *(float *)(pauVar15[3] + 4) = fVar54 - fVar49;
              *(float *)(pauVar15[3] + 8) = fVar60 - extraout_s1_15;
              *(float *)pauVar15[4] = fVar55 - fVar59;
              *(float *)(pauVar15[4] + 4) = fVar56 - extraout_s1_16;
              *(float *)(pauVar15[4] + 8) = fVar46 - fVar44;
              *(float *)pauVar15[5] = fVar47 - extraout_s1_17;
            }
          }
          else {
            uVar40 = (ulong)(uVar16 >> 1);
            FUN_109c3435c();
            FUN_109c3435c(lVar20,*pauVar15 + uVar40 * 8,uVar40,iVar34 + -1);
            lVar20 = lVar20 + (long)iVar34 * 4;
            fVar44 = *(float *)(lVar20 + 0x90) + 1.0;
            uStack_278 = CONCAT44(*(float *)(lVar20 + 0x110) + 0.0,fVar44);
            FUN_1095512ac(&uStack_278,&uStack_278);
            uStack_280 = CONCAT44(extraout_s1_02,fVar44);
            FUN_1095512ac(&uStack_280,&uStack_278);
            fStack_288 = fVar44;
            uStack_284 = extraout_s1_03;
            FUN_1095512ac(&fStack_288,&uStack_278);
            uVar18 = 0;
            fVar45 = 1.0;
            uStack_298 = 0x3f800000;
            fStack_290 = fVar44;
            uStack_28c = extraout_s1_04;
            do {
              puVar3 = *pauVar15 + uVar40 * 8;
              FUN_1095512ac(puVar3,&uStack_298);
              fVar46 = fVar45;
              FUN_1095512ac(puVar3 + 8,&uStack_298);
              fStack_2a0 = fVar46;
              uStack_29c = extraout_s1_06;
              FUN_1095512ac(&fStack_2a0,&uStack_278);
              fVar47 = fVar46;
              FUN_1095512ac((long)puVar3 + 0x10,&uStack_298);
              fStack_2a0 = fVar47;
              uStack_29c = extraout_s1_08;
              FUN_1095512ac(&fStack_2a0,&uStack_280);
              fVar57 = fVar47;
              FUN_1095512ac((long)puVar3 + 0x18,&uStack_298);
              fStack_2a0 = fVar57;
              uStack_29c = extraout_s1_10;
              FUN_1095512ac(&fStack_2a0,&fStack_288);
              fVar44 = fVar57;
              FUN_1095512ac(&uStack_298,&fStack_290);
              uStack_298 = CONCAT44(extraout_s1_12,fVar44);
              *(ulong *)(*pauVar15 + uVar40 * 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)*pauVar15 >> 0x20) - extraout_s1_05,
                            (float)*(undefined8 *)*pauVar15 - fVar45);
              *(ulong *)(puVar3 + 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20) - extraout_s1_07,
                            (float)*(undefined8 *)(*pauVar15 + 8) - fVar46);
              uVar11 = *(undefined8 *)(*pauVar15 + 8);
              uVar32 = *(undefined8 *)*pauVar15;
              fVar45 = fVar45 + (float)uVar32;
              *(ulong *)(puVar3 + 0x10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pauVar15[1] + 4) >> 0x20) -
                            extraout_s1_09,(float)*(undefined8 *)(pauVar15[1] + 4) - fVar47);
              *(ulong *)(puVar3 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)pauVar15[2] >> 0x20) - extraout_s1_11,
                            (float)*(undefined8 *)pauVar15[2] - fVar57);
              fVar44 = *(float *)(pauVar15[1] + 4);
              fVar48 = *(float *)(pauVar15[1] + 8);
              fVar55 = *(float *)pauVar15[2];
              fVar56 = *(float *)(pauVar15[2] + 4);
              *(ulong *)(*pauVar15 + 8) =
                   CONCAT44(extraout_s1_07 + (float)((ulong)uVar11 >> 0x20),fVar46 + (float)uVar11);
              *(ulong *)*pauVar15 = CONCAT44(extraout_s1_05 + (float)((ulong)uVar32 >> 0x20),fVar45)
              ;
              *(float *)pauVar15[2] = fVar57 + fVar55;
              *(float *)(pauVar15[2] + 4) = extraout_s1_11 + fVar56;
              *(float *)(pauVar15[1] + 4) = fVar47 + fVar44;
              *(float *)(pauVar15[1] + 8) = extraout_s1_09 + fVar48;
              uVar18 = uVar18 + 4;
              pauVar15 = (undefined1 (*) [12])(pauVar15[2] + 8);
            } while (uVar18 < uVar40);
          }
          return;
        }
        _malloc();
        iVar34 = (int)uVar18;
        if (puStack_168 == (undefined8 *)0x0) goto LAB_109c3433c;
        uVar4 = uVar16 + 1;
        uStack_1a8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
        _malloc();
        iVar34 = (int)uVar18;
        if ((uVar4 != 0) && (uStack_1a8 == 0)) goto LAB_109c3433c;
        if (-1 < (int)uVar16) {
          uVar24 = 0;
          do {
            dVar50 = ((double)(uVar24 & 0xffffffff) * 3.141592653589793 *
                     (double)(uVar24 & 0xffffffff)) / (double)uVar16;
            ___sincos_stret();
            *(ulong *)(uStack_1a8 + uVar24 * 8) = CONCAT44((float)dVar50,(float)extraout_d1);
            uVar24 = uVar24 + 1;
          } while (uVar4 != uVar24);
        }
      }
      iVar34 = 0;
      if (uVar16 != 0) {
        iVar34 = (int)uVar40 / (int)uVar16;
      }
      if (0 < iVar34) {
        iVar34 = 0;
        uVar4 = uVar16 >> 1;
        uVar41 = (uint)uVar25;
        uVar6 = uVar41 >> 1;
        pfVar2 = (float *)(uStack_1a8 + 4);
        do {
          iVar19 = 0;
          iVar33 = iVar34;
          if (0 < (int)uVar1) {
            puVar35 = puVar12 + 6;
            uVar18 = uVar1 & 0xffffffff;
            do {
              iVar7 = 0;
              if (puVar12[(uVar1 & 0xffffffff) + 4] != 0) {
                iVar7 = (int)*puVar35 / (int)puVar12[(uVar1 & 0xffffffff) + 4];
              }
              iVar8 = 0;
              if (iVar7 != 0) {
                iVar8 = iVar33 / iVar7;
              }
              iVar33 = iVar33 - iVar8 * iVar7;
              iVar19 = iVar19 + iVar8 * *puVar35;
              uVar18 = uVar18 - 1;
              puVar35 = puVar35 + 1;
            } while (uVar18 != 0);
          }
          iVar33 = iVar33 + iVar19;
          uVar5 = (puVar12 + 6)[uVar1];
          pfVar37 = pfVar2;
          puVar21 = (undefined4 *)((long)puStack_148 + 4);
          uVar18 = uVar42;
          puVar26 = puVar39;
          if (uVar5 == 1) {
            _memcpy(puVar39,lVar14 + (long)iVar33 * 8,puVar13);
            if ((uVar16 & uVar9) == 0) goto LAB_109c3404c;
            if (0 < (int)uVar16) {
LAB_109c33ea0:
              do {
                fVar44 = pfVar37[-1];
                uStack_100 = CONCAT44(-*pfVar37,fVar44);
                FUN_1095512ac(puVar26,&uStack_100);
                puVar21[-1] = fVar44;
                *puVar21 = extraout_s1;
                uVar18 = uVar18 - 1;
                pfVar37 = pfVar37 + 2;
                puVar21 = puVar21 + 2;
                puVar26 = puVar26 + 1;
              } while (uVar18 != 0);
            }
LAB_109c33edc:
            if ((int)uVar16 < (int)uVar41) {
              _bzero((long)puStack_148 + (long)puVar13,(ulong)(uVar41 + ~uVar16) * 8 + 8);
            }
            if (0 < (int)uVar16) {
              _memcpy(puStack_168,uStack_1a8,uVar42 << 3);
            }
            if ((int)uVar16 < (int)(uVar41 - uVar16)) {
              _bzero((long)puStack_168 + (long)puVar13,
                     (ulong)(uVar41 + (uVar16 << 1 ^ 0xffffffff)) * 8 + 8);
            }
            puVar26 = (undefined8 *)(uStack_1a8 + (long)(int)uVar16 * 8);
            lVar20 = (long)(int)(uVar41 - uVar16);
            if (0 < (int)uVar16) {
              do {
                puStack_168[lVar20] = *puVar26;
                lVar20 = lVar20 + 1;
                puVar26 = puVar26 + -1;
              } while (lVar20 < (int)uVar41);
            }
            if ((int)uVar41 < 2) {
              FUN_109c3435c(puVar12,puStack_148,uVar25,uStack_124);
            }
            else {
              uVar18 = 1;
              iVar19 = 1;
              do {
                if ((long)uVar18 < (long)iVar19) {
                  uVar32 = puStack_148[(long)iVar19 + -1];
                  puStack_148[(long)iVar19 + -1] = puStack_148[uVar18 - 1];
                  puStack_148[uVar18 - 1] = uVar32;
                }
                uVar29 = uVar6;
                if ((3 < uVar41) && (uVar28 = uVar6, (int)uVar6 < iVar19)) {
                  do {
                    iVar19 = iVar19 - uVar28;
                    uVar29 = uVar28 >> 1;
                    if (uVar28 < 4) break;
                    uVar28 = uVar29;
                  } while ((int)uVar29 < iVar19);
                }
                iVar19 = uVar29 + iVar19;
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar25);
              FUN_109c3435c(puVar12,puStack_148,uVar25,uStack_124);
              uVar18 = 1;
              iVar19 = 1;
              do {
                if ((long)uVar18 < (long)iVar19) {
                  uVar32 = puStack_168[(long)iVar19 + -1];
                  puStack_168[(long)iVar19 + -1] = puStack_168[uVar18 - 1];
                  puStack_168[uVar18 - 1] = uVar32;
                }
                uVar29 = uVar6;
                if ((3 < uVar41) && (uVar28 = uVar6, (int)uVar6 < iVar19)) {
                  do {
                    iVar19 = iVar19 - uVar28;
                    uVar29 = uVar28 >> 1;
                    if (uVar28 < 4) break;
                    uVar28 = uVar29;
                  } while ((int)uVar29 < iVar19);
                }
                iVar19 = uVar29 + iVar19;
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar25);
            }
            FUN_109c3435c(puVar12,puStack_168,uVar25,uStack_124);
            puVar26 = puStack_168;
            uVar18 = uVar25;
            puVar27 = puStack_148;
            if ((int)uVar41 < 1) {
              uVar18 = (ulong)uStack_124;
              func_0x000109c34868(puVar12,puStack_148,uVar25);
            }
            else {
              do {
                uStack_100 = *puVar26;
                uVar43 = (undefined4)uStack_100;
                FUN_1095512ac(puVar27,&uStack_100);
                *(undefined4 *)puVar27 = uVar43;
                *(undefined4 *)((long)puVar27 + 4) = extraout_s1_00;
                uVar18 = uVar18 - 1;
                puVar26 = puVar26 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar18 != 0);
              uVar18 = (ulong)uStack_124;
              if (1 < (int)uVar41) {
                uVar40 = 1;
                iVar19 = 1;
                do {
                  if ((long)uVar40 < (long)iVar19) {
                    uVar32 = puStack_148[(long)iVar19 + -1];
                    puStack_148[(long)iVar19 + -1] = puStack_148[uVar40 - 1];
                    puStack_148[uVar40 - 1] = uVar32;
                  }
                  uVar29 = uVar6;
                  if ((3 < uVar41) && (uVar28 = uVar6, (int)uVar6 < iVar19)) {
                    do {
                      iVar19 = iVar19 - uVar28;
                      uVar29 = uVar28 >> 1;
                      if (uVar28 < 4) break;
                      uVar28 = uVar29;
                    } while ((int)uVar29 < iVar19);
                  }
                  iVar19 = uVar29 + iVar19;
                  uVar40 = uVar40 + 1;
                } while (uVar40 != uVar25);
              }
              func_0x000109c34868(puVar12,puStack_148,uVar25);
              puVar26 = puStack_148;
              uVar40 = uVar25;
              do {
                *puVar26 = CONCAT44((float)((ulong)*puVar26 >> 0x20) / (float)uVar25,
                                    (float)*puVar26 / (float)uVar25);
                uVar40 = uVar40 - 1;
                puVar26 = puVar26 + 1;
              } while (uVar40 != 0);
            }
            pfVar37 = pfVar2;
            puVar21 = (undefined4 *)((long)puVar39 + 4);
            uVar40 = uVar42;
            puVar26 = puStack_148;
            if (0 < (int)uVar16) {
              do {
                fVar44 = pfVar37[-1];
                uStack_100 = CONCAT44(-*pfVar37,fVar44);
                FUN_1095512ac(puVar26,&uStack_100);
                puVar21[-1] = fVar44;
                *puVar21 = extraout_s1_01;
                puVar21 = puVar21 + 2;
                pfVar37 = pfVar37 + 2;
                puVar26 = puVar26 + 1;
                uVar40 = uVar40 - 1;
              } while (uVar40 != 0);
              if (uVar5 != 1) goto LAB_109c34264;
              goto LAB_109c342a8;
            }
            if (uVar5 == 1) goto LAB_109c342a8;
          }
          else {
            if ((int)uVar16 < 1) {
              if ((uVar16 & uVar16 - 1) != 0) goto LAB_109c33edc;
            }
            else {
              puVar27 = (undefined8 *)(lVar14 + (long)iVar33 * 8);
              puVar31 = puVar39;
              uVar40 = uVar42;
              do {
                *puVar31 = *puVar27;
                puVar27 = puVar27 + (int)uVar5;
                uVar40 = uVar40 - 1;
                puVar31 = puVar31 + 1;
              } while (uVar40 != 0);
              if ((uVar16 & uVar16 - 1) != 0) goto LAB_109c33ea0;
            }
LAB_109c3404c:
            if (1 < (int)uVar16) {
              uVar18 = 1;
              iVar19 = 1;
              do {
                if ((long)uVar18 < (long)iVar19) {
                  uVar32 = puVar39[(long)iVar19 + -1];
                  puVar39[(long)iVar19 + -1] = puVar39[uVar18 - 1];
                  puVar39[uVar18 - 1] = uVar32;
                }
                uVar29 = uVar4;
                if ((3 < uVar16) && (uVar28 = uVar4, (int)uVar4 < iVar19)) {
                  do {
                    iVar19 = iVar19 - uVar28;
                    uVar29 = uVar28 >> 1;
                    if (uVar28 < 4) break;
                    uVar28 = uVar29;
                  } while ((int)uVar29 < iVar19);
                }
                iVar19 = uVar29 + iVar19;
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar42);
            }
            uVar18 = (ulong)uStack_124;
            FUN_109c3435c(puVar12,puVar39,uVar42);
            if (uVar5 == 1) {
LAB_109c342a8:
              _memcpy(lVar14 + (long)iVar33 * 8,puVar39,puVar13);
            }
            else if (0 < (int)uVar16) {
LAB_109c34264:
              puVar26 = (undefined8 *)(lVar14 + (long)iVar33 * 8);
              puVar27 = puVar39;
              uVar40 = uVar42;
              do {
                *puVar26 = *puVar27;
                puVar26 = puVar26 + (int)uVar5;
                uVar40 = uVar40 - 1;
                puVar27 = puVar27 + 1;
              } while (uVar40 != 0);
            }
          }
          iVar34 = iVar34 + 1;
          uVar40 = (ulong)*puVar12;
          iVar33 = 0;
          if (uVar16 != 0) {
            iVar33 = (int)*puVar12 / (int)uVar16;
          }
        } while (iVar34 < iVar33);
      }
      _free(puVar39);
      if ((uVar16 & uVar9) != 0) {
        _free(puStack_148);
        _free(puStack_168);
        _free(uStack_1a8);
      }
      uVar22 = uVar22 + 1;
      puVar23 = *(ulong **)(puVar12 + 2);
    } while (uVar22 < *puVar23);
  }
  return;
}



/* Entry: 109c33ae4; end: 109c3435b;  */

void FUN_109c33ae4(uint *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  float *pfVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [12];
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  uint *puVar31;
  float *pfVar32;
  undefined4 *puVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  float extraout_s1_05;
  undefined4 extraout_s1_06;
  float extraout_s1_07;
  undefined4 extraout_s1_08;
  float extraout_s1_09;
  undefined4 extraout_s1_10;
  float extraout_s1_11;
  undefined4 extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  double extraout_d1;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  float fStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_128;
  undefined8 *puStack_e8;
  undefined8 *puStack_c8;
  uint uStack_a4;
  undefined8 uStack_80;
  
  uVar34 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    uVar18 = 0;
    uVar15 = param_1[0x1c];
    lVar26 = *(long *)(param_1 + 0x12);
    do {
      iVar30 = (int)uVar18;
      if ((char)uVar15 == '\0') {
        iVar29 = (int)(uVar18 * param_1[10] >> 0x20);
        uVar9 = ((uint)(iVar30 - iVar29) >> (ulong)(param_1[0xb] & 0x1f)) + iVar29 >>
                (ulong)(param_1[0xc] & 0x1f);
        iVar30 = ((param_1[0x1e] + iVar30) - uVar9 * param_1[8]) +
                 (uVar9 + param_1[0x1d]) * param_1[0x10];
      }
      *(ulong *)(param_2 + uVar18 * 8) = (ulong)*(uint *)(lVar26 + (long)iVar30 * 4);
      uVar18 = uVar18 + 1;
    } while (uVar34 != uVar18);
  }
  puVar19 = *(ulong **)(param_1 + 2);
  if (*puVar19 != 0) {
    uVar18 = 0;
    do {
      if ((puVar19[3] & 1) == 0) {
        iVar30 = (int)puVar19[2] * (int)uVar18;
      }
      else {
        iVar30 = 0;
        if (*(int *)((long)puVar19 + 0x14) != 0) {
          iVar30 = (int)uVar18 / *(int *)((long)puVar19 + 0x14);
        }
      }
      uVar1 = (long)*(int *)((long)puVar19 + 0xc) + (long)iVar30;
      uVar15 = param_1[uVar1 + 4];
      uVar36 = (ulong)uVar15;
      puVar12 = (undefined8 *)(-(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3);
      puVar13 = puVar12;
      _malloc();
      iVar30 = (int)param_4;
      if (uVar15 != 0 && puVar13 == (undefined8 *)0x0) goto LAB_109c3433c;
      uVar9 = uVar15 - 1;
      if ((uVar15 & uVar9) == 0) {
        if (uVar15 < 2) {
          uStack_a4 = 0;
        }
        else {
          uStack_a4 = 0;
          uVar21 = uVar36;
          do {
            uVar4 = (int)uVar21 >> 1;
            uVar21 = (ulong)uVar4;
            uStack_a4 = uStack_a4 + 1;
          } while (1 < uVar4);
        }
        puStack_c8 = (undefined8 *)0x0;
        uStack_128 = 0;
        uVar21 = 0;
        puStack_e8 = (undefined8 *)0x0;
      }
      else {
        uVar20 = 2;
        do {
          uVar21 = uVar20;
          uVar20 = (ulong)(uint)((int)uVar21 << 1);
        } while ((int)uVar21 < (int)(uVar15 * 2 + -1));
        uStack_a4 = 0;
        uVar20 = uVar21;
        do {
          uVar4 = (int)uVar20 >> 1;
          uVar20 = (ulong)uVar4;
          uStack_a4 = uStack_a4 + 1;
        } while (1 < uVar4);
        puStack_e8 = (undefined8 *)(-(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3);
        puStack_c8 = puStack_e8;
        _malloc();
        iVar30 = (int)param_4;
        if (puStack_c8 == (undefined8 *)0x0) {
LAB_109c3433c:
          lVar26 = 8;
          ___cxa_allocate_exception();
          __ZNSt9bad_allocC1Ev();
          pauVar14 = (undefined1 (*) [12])PTR___ZTISt9bad_alloc_110346a68;
          puVar16 = PTR___ZNSt9bad_allocD1Ev_110346998;
          ___cxa_throw();
          uVar15 = (uint)puVar16;
          if ((int)uVar15 < 9) {
            if (uVar15 == 2) {
              fVar38 = (float)((ulong)*(undefined8 *)(*pauVar14 + 8) >> 0x20);
              uVar28 = *(undefined8 *)*pauVar14;
              auVar45._12_4_ = fVar38;
              auVar45._0_12_ = *pauVar14;
              auVar10._12_4_ = fVar38;
              auVar10._0_12_ = *pauVar14;
              auVar45 = NEON_ext(auVar45,auVar10,8,1);
              *(ulong *)(*pauVar14 + 8) =
                   CONCAT44(auVar45._12_4_ - fVar38,
                            auVar45._8_4_ - (float)*(undefined8 *)(*pauVar14 + 8));
              *(ulong *)*pauVar14 =
                   CONCAT44(auVar45._4_4_ + (float)((ulong)uVar28 >> 0x20),
                            auVar45._0_4_ + (float)uVar28);
            }
            else if (uVar15 == 4) {
              fVar39 = *(float *)*pauVar14 + *(float *)(*pauVar14 + 8);
              fVar42 = *(float *)(*pauVar14 + 4) + *(float *)pauVar14[1];
              fVar49 = *(float *)*pauVar14 - *(float *)(*pauVar14 + 8);
              fVar50 = *(float *)(*pauVar14 + 4) - *(float *)pauVar14[1];
              fVar40 = *(float *)(pauVar14[1] + 4) + *(float *)pauVar14[2];
              fVar41 = *(float *)(pauVar14[1] + 8) + *(float *)(pauVar14[2] + 4);
              uStack_1f8 = 0xbf80000000000000;
              fVar38 = *(float *)(pauVar14[1] + 4) - *(float *)pauVar14[2];
              uStack_200 = CONCAT44(*(float *)(pauVar14[1] + 8) - *(float *)(pauVar14[2] + 4),fVar38
                                   );
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              *(float *)*pauVar14 = fVar39 + fVar40;
              *(float *)(*pauVar14 + 4) = fVar42 + fVar41;
              *(float *)(*pauVar14 + 8) = fVar49 + fVar38;
              *(float *)pauVar14[1] = fVar50 + extraout_s1_18;
              *(float *)(pauVar14[1] + 4) = fVar39 - fVar40;
              *(float *)(pauVar14[1] + 8) = fVar42 - fVar41;
              *(float *)pauVar14[2] = fVar49 - fVar38;
              *(float *)(pauVar14[2] + 4) = fVar50 - extraout_s1_18;
            }
            else if (uVar15 == 8) {
              fVar49 = *(float *)*pauVar14 + *(float *)(*pauVar14 + 8);
              fVar50 = *(float *)(*pauVar14 + 4) + *(float *)pauVar14[1];
              fVar40 = *(float *)*pauVar14 - *(float *)(*pauVar14 + 8);
              fVar41 = *(float *)(*pauVar14 + 4) - *(float *)pauVar14[1];
              fVar51 = *(float *)(pauVar14[1] + 4) + *(float *)pauVar14[2];
              fVar52 = *(float *)(pauVar14[1] + 8) + *(float *)(pauVar14[2] + 4);
              fVar38 = *(float *)(pauVar14[1] + 4) - *(float *)pauVar14[2];
              uStack_1f8 = CONCAT44(*(float *)(pauVar14[1] + 8) - *(float *)(pauVar14[2] + 4),fVar38
                                   );
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              fVar53 = *(float *)(pauVar14[2] + 8) + *(float *)(pauVar14[3] + 4);
              fVar55 = *(float *)pauVar14[3] + *(float *)(pauVar14[3] + 8);
              fVar58 = *(float *)(pauVar14[2] + 8) - *(float *)(pauVar14[3] + 4);
              fVar39 = *(float *)pauVar14[3] - *(float *)(pauVar14[3] + 8);
              fVar57 = *(float *)pauVar14[4] + *(float *)(pauVar14[4] + 8);
              fVar56 = *(float *)(pauVar14[4] + 4) + *(float *)pauVar14[5];
              fVar42 = *(float *)pauVar14[4] - *(float *)(pauVar14[4] + 8);
              uStack_1f8 = CONCAT44(*(float *)(pauVar14[4] + 4) - *(float *)pauVar14[5],fVar42);
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              fVar47 = fVar49 + fVar51;
              fVar46 = fVar50 + fVar52;
              fVar48 = fVar40 + fVar38;
              fVar54 = fVar41 + extraout_s1_13;
              fVar49 = fVar49 - fVar51;
              fVar50 = fVar50 - fVar52;
              fVar40 = fVar40 - fVar38;
              fVar41 = fVar41 - extraout_s1_13;
              fVar51 = fVar53 + fVar57;
              fVar52 = fVar55 + fVar56;
              uStack_1f8 = CONCAT44(fVar39 + extraout_s1_14,fVar58 + fVar42);
              fVar43 = 0.70710677;
              uStack_200 = 0xbf3504f33f3504f3;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              uStack_1f8 = CONCAT44(fVar55 - fVar56,fVar53 - fVar57);
              fVar53 = 0.0;
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              uStack_1f8 = CONCAT44(fVar39 - extraout_s1_14,fVar58 - fVar42);
              fVar38 = -0.70710677;
              uStack_200 = 0xbf3504f3bf3504f3;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              *(float *)*pauVar14 = fVar47 + fVar51;
              *(float *)(*pauVar14 + 4) = fVar46 + fVar52;
              *(float *)(*pauVar14 + 8) = fVar48 + fVar43;
              *(float *)pauVar14[1] = fVar54 + extraout_s1_15;
              *(float *)(pauVar14[1] + 4) = fVar49 + fVar53;
              *(float *)(pauVar14[1] + 8) = fVar50 + extraout_s1_16;
              *(float *)pauVar14[2] = fVar40 + fVar38;
              *(float *)(pauVar14[2] + 4) = fVar41 + extraout_s1_17;
              *(float *)(pauVar14[2] + 8) = fVar47 - fVar51;
              *(float *)pauVar14[3] = fVar46 - fVar52;
              *(float *)(pauVar14[3] + 4) = fVar48 - fVar43;
              *(float *)(pauVar14[3] + 8) = fVar54 - extraout_s1_15;
              *(float *)pauVar14[4] = fVar49 - fVar53;
              *(float *)(pauVar14[4] + 4) = fVar50 - extraout_s1_16;
              *(float *)(pauVar14[4] + 8) = fVar40 - fVar38;
              *(float *)pauVar14[5] = fVar41 - extraout_s1_17;
            }
          }
          else {
            uVar18 = (ulong)(uVar15 >> 1);
            FUN_109c3435c();
            FUN_109c3435c(lVar26,*pauVar14 + uVar18 * 8,uVar18,iVar30 + -1);
            lVar26 = lVar26 + (long)iVar30 * 4;
            fVar38 = *(float *)(lVar26 + 0x90) + 1.0;
            uStack_1f8 = CONCAT44(*(float *)(lVar26 + 0x110) + 0.0,fVar38);
            FUN_1095512ac(&uStack_1f8,&uStack_1f8);
            uStack_200 = CONCAT44(extraout_s1_02,fVar38);
            FUN_1095512ac(&uStack_200,&uStack_1f8);
            fStack_208 = fVar38;
            uStack_204 = extraout_s1_03;
            FUN_1095512ac(&fStack_208,&uStack_1f8);
            uVar34 = 0;
            fVar39 = 1.0;
            uStack_218 = 0x3f800000;
            fStack_210 = fVar38;
            uStack_20c = extraout_s1_04;
            do {
              puVar3 = *pauVar14 + uVar18 * 8;
              FUN_1095512ac(puVar3,&uStack_218);
              fVar40 = fVar39;
              FUN_1095512ac(puVar3 + 8,&uStack_218);
              fStack_220 = fVar40;
              uStack_21c = extraout_s1_06;
              FUN_1095512ac(&fStack_220,&uStack_1f8);
              fVar41 = fVar40;
              FUN_1095512ac((long)puVar3 + 0x10,&uStack_218);
              fStack_220 = fVar41;
              uStack_21c = extraout_s1_08;
              FUN_1095512ac(&fStack_220,&uStack_200);
              fVar51 = fVar41;
              FUN_1095512ac((long)puVar3 + 0x18,&uStack_218);
              fStack_220 = fVar51;
              uStack_21c = extraout_s1_10;
              FUN_1095512ac(&fStack_220,&fStack_208);
              fVar38 = fVar51;
              FUN_1095512ac(&uStack_218,&fStack_210);
              uStack_218 = CONCAT44(extraout_s1_12,fVar38);
              *(ulong *)(*pauVar14 + uVar18 * 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)*pauVar14 >> 0x20) - extraout_s1_05,
                            (float)*(undefined8 *)*pauVar14 - fVar39);
              *(ulong *)(puVar3 + 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(*pauVar14 + 8) >> 0x20) - extraout_s1_07,
                            (float)*(undefined8 *)(*pauVar14 + 8) - fVar40);
              uVar11 = *(undefined8 *)(*pauVar14 + 8);
              uVar28 = *(undefined8 *)*pauVar14;
              fVar39 = fVar39 + (float)uVar28;
              *(ulong *)(puVar3 + 0x10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pauVar14[1] + 4) >> 0x20) -
                            extraout_s1_09,(float)*(undefined8 *)(pauVar14[1] + 4) - fVar41);
              *(ulong *)(puVar3 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)pauVar14[2] >> 0x20) - extraout_s1_11,
                            (float)*(undefined8 *)pauVar14[2] - fVar51);
              fVar38 = *(float *)(pauVar14[1] + 4);
              fVar42 = *(float *)(pauVar14[1] + 8);
              fVar49 = *(float *)pauVar14[2];
              fVar50 = *(float *)(pauVar14[2] + 4);
              *(ulong *)(*pauVar14 + 8) =
                   CONCAT44(extraout_s1_07 + (float)((ulong)uVar11 >> 0x20),fVar40 + (float)uVar11);
              *(ulong *)*pauVar14 = CONCAT44(extraout_s1_05 + (float)((ulong)uVar28 >> 0x20),fVar39)
              ;
              *(float *)pauVar14[2] = fVar51 + fVar49;
              *(float *)(pauVar14[2] + 4) = extraout_s1_11 + fVar50;
              *(float *)(pauVar14[1] + 4) = fVar41 + fVar38;
              *(float *)(pauVar14[1] + 8) = extraout_s1_09 + fVar42;
              uVar34 = uVar34 + 4;
              pauVar14 = (undefined1 (*) [12])(pauVar14[2] + 8);
            } while (uVar34 < uVar18);
          }
          return;
        }
        _malloc();
        iVar30 = (int)param_4;
        if (puStack_e8 == (undefined8 *)0x0) goto LAB_109c3433c;
        uVar4 = uVar15 + 1;
        uStack_128 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
        _malloc();
        iVar30 = (int)param_4;
        if ((uVar4 != 0) && (uStack_128 == 0)) goto LAB_109c3433c;
        if (-1 < (int)uVar15) {
          uVar20 = 0;
          do {
            dVar44 = ((double)(uVar20 & 0xffffffff) * 3.141592653589793 *
                     (double)(uVar20 & 0xffffffff)) / (double)uVar15;
            ___sincos_stret();
            *(ulong *)(uStack_128 + uVar20 * 8) = CONCAT44((float)dVar44,(float)extraout_d1);
            uVar20 = uVar20 + 1;
          } while (uVar4 != uVar20);
        }
      }
      iVar30 = 0;
      if (uVar15 != 0) {
        iVar30 = (int)uVar34 / (int)uVar15;
      }
      if (0 < iVar30) {
        iVar30 = 0;
        uVar4 = uVar15 >> 1;
        uVar35 = (uint)uVar21;
        uVar6 = uVar35 >> 1;
        pfVar2 = (float *)(uStack_128 + 4);
        do {
          iVar17 = 0;
          iVar29 = iVar30;
          if (0 < (int)uVar1) {
            puVar31 = param_1 + 6;
            uVar34 = uVar1 & 0xffffffff;
            do {
              iVar7 = 0;
              if (param_1[(uVar1 & 0xffffffff) + 4] != 0) {
                iVar7 = (int)*puVar31 / (int)param_1[(uVar1 & 0xffffffff) + 4];
              }
              iVar8 = 0;
              if (iVar7 != 0) {
                iVar8 = iVar29 / iVar7;
              }
              iVar29 = iVar29 - iVar8 * iVar7;
              iVar17 = iVar17 + iVar8 * *puVar31;
              uVar34 = uVar34 - 1;
              puVar31 = puVar31 + 1;
            } while (uVar34 != 0);
          }
          iVar29 = iVar29 + iVar17;
          uVar5 = (param_1 + 6)[uVar1];
          pfVar32 = pfVar2;
          puVar33 = (undefined4 *)((long)puStack_c8 + 4);
          uVar34 = uVar36;
          puVar22 = puVar13;
          if (uVar5 == 1) {
            _memcpy(puVar13,param_2 + (long)iVar29 * 8,puVar12);
            if ((uVar15 & uVar9) == 0) goto LAB_109c3404c;
            if (0 < (int)uVar15) {
LAB_109c33ea0:
              do {
                fVar38 = pfVar32[-1];
                uStack_80 = CONCAT44(-*pfVar32,fVar38);
                FUN_1095512ac(puVar22,&uStack_80);
                puVar33[-1] = fVar38;
                *puVar33 = extraout_s1;
                uVar34 = uVar34 - 1;
                pfVar32 = pfVar32 + 2;
                puVar33 = puVar33 + 2;
                puVar22 = puVar22 + 1;
              } while (uVar34 != 0);
            }
LAB_109c33edc:
            if ((int)uVar15 < (int)uVar35) {
              _bzero((long)puStack_c8 + (long)puVar12,(ulong)(uVar35 + ~uVar15) * 8 + 8);
            }
            if (0 < (int)uVar15) {
              _memcpy(puStack_e8,uStack_128,uVar36 << 3);
            }
            if ((int)uVar15 < (int)(uVar35 - uVar15)) {
              _bzero((long)puStack_e8 + (long)puVar12,
                     (ulong)(uVar35 + (uVar15 << 1 ^ 0xffffffff)) * 8 + 8);
            }
            puVar22 = (undefined8 *)(uStack_128 + (long)(int)uVar15 * 8);
            lVar26 = (long)(int)(uVar35 - uVar15);
            if (0 < (int)uVar15) {
              do {
                puStack_e8[lVar26] = *puVar22;
                lVar26 = lVar26 + 1;
                puVar22 = puVar22 + -1;
              } while (lVar26 < (int)uVar35);
            }
            if ((int)uVar35 < 2) {
              FUN_109c3435c(param_1,puStack_c8,uVar21,uStack_a4);
            }
            else {
              uVar34 = 1;
              iVar17 = 1;
              do {
                if ((long)uVar34 < (long)iVar17) {
                  uVar28 = puStack_c8[(long)iVar17 + -1];
                  puStack_c8[(long)iVar17 + -1] = puStack_c8[uVar34 - 1];
                  puStack_c8[uVar34 - 1] = uVar28;
                }
                uVar25 = uVar6;
                if ((3 < uVar35) && (uVar24 = uVar6, (int)uVar6 < iVar17)) {
                  do {
                    iVar17 = iVar17 - uVar24;
                    uVar25 = uVar24 >> 1;
                    if (uVar24 < 4) break;
                    uVar24 = uVar25;
                  } while ((int)uVar25 < iVar17);
                }
                iVar17 = uVar25 + iVar17;
                uVar34 = uVar34 + 1;
              } while (uVar34 != uVar21);
              FUN_109c3435c(param_1,puStack_c8,uVar21,uStack_a4);
              uVar34 = 1;
              iVar17 = 1;
              do {
                if ((long)uVar34 < (long)iVar17) {
                  uVar28 = puStack_e8[(long)iVar17 + -1];
                  puStack_e8[(long)iVar17 + -1] = puStack_e8[uVar34 - 1];
                  puStack_e8[uVar34 - 1] = uVar28;
                }
                uVar25 = uVar6;
                if ((3 < uVar35) && (uVar24 = uVar6, (int)uVar6 < iVar17)) {
                  do {
                    iVar17 = iVar17 - uVar24;
                    uVar25 = uVar24 >> 1;
                    if (uVar24 < 4) break;
                    uVar24 = uVar25;
                  } while ((int)uVar25 < iVar17);
                }
                iVar17 = uVar25 + iVar17;
                uVar34 = uVar34 + 1;
              } while (uVar34 != uVar21);
            }
            FUN_109c3435c(param_1,puStack_e8,uVar21,uStack_a4);
            puVar22 = puStack_e8;
            uVar34 = uVar21;
            puVar23 = puStack_c8;
            if ((int)uVar35 < 1) {
              param_4 = (ulong)uStack_a4;
              func_0x000109c34868(param_1,puStack_c8,uVar21);
            }
            else {
              do {
                uStack_80 = *puVar22;
                uVar37 = (undefined4)uStack_80;
                FUN_1095512ac(puVar23,&uStack_80);
                *(undefined4 *)puVar23 = uVar37;
                *(undefined4 *)((long)puVar23 + 4) = extraout_s1_00;
                uVar34 = uVar34 - 1;
                puVar22 = puVar22 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar34 != 0);
              param_4 = (ulong)uStack_a4;
              if (1 < (int)uVar35) {
                uVar34 = 1;
                iVar17 = 1;
                do {
                  if ((long)uVar34 < (long)iVar17) {
                    uVar28 = puStack_c8[(long)iVar17 + -1];
                    puStack_c8[(long)iVar17 + -1] = puStack_c8[uVar34 - 1];
                    puStack_c8[uVar34 - 1] = uVar28;
                  }
                  uVar25 = uVar6;
                  if ((3 < uVar35) && (uVar24 = uVar6, (int)uVar6 < iVar17)) {
                    do {
                      iVar17 = iVar17 - uVar24;
                      uVar25 = uVar24 >> 1;
                      if (uVar24 < 4) break;
                      uVar24 = uVar25;
                    } while ((int)uVar25 < iVar17);
                  }
                  iVar17 = uVar25 + iVar17;
                  uVar34 = uVar34 + 1;
                } while (uVar34 != uVar21);
              }
              func_0x000109c34868(param_1,puStack_c8,uVar21);
              puVar22 = puStack_c8;
              uVar34 = uVar21;
              do {
                *puVar22 = CONCAT44((float)((ulong)*puVar22 >> 0x20) / (float)uVar21,
                                    (float)*puVar22 / (float)uVar21);
                uVar34 = uVar34 - 1;
                puVar22 = puVar22 + 1;
              } while (uVar34 != 0);
            }
            pfVar32 = pfVar2;
            puVar33 = (undefined4 *)((long)puVar13 + 4);
            uVar34 = uVar36;
            puVar22 = puStack_c8;
            if (0 < (int)uVar15) {
              do {
                fVar38 = pfVar32[-1];
                uStack_80 = CONCAT44(-*pfVar32,fVar38);
                FUN_1095512ac(puVar22,&uStack_80);
                puVar33[-1] = fVar38;
                *puVar33 = extraout_s1_01;
                puVar33 = puVar33 + 2;
                pfVar32 = pfVar32 + 2;
                puVar22 = puVar22 + 1;
                uVar34 = uVar34 - 1;
              } while (uVar34 != 0);
              if (uVar5 != 1) goto LAB_109c34264;
              goto LAB_109c342a8;
            }
            if (uVar5 == 1) goto LAB_109c342a8;
          }
          else {
            if ((int)uVar15 < 1) {
              if ((uVar15 & uVar15 - 1) != 0) goto LAB_109c33edc;
            }
            else {
              puVar23 = (undefined8 *)(param_2 + (long)iVar29 * 8);
              puVar27 = puVar13;
              uVar20 = uVar36;
              do {
                *puVar27 = *puVar23;
                puVar23 = puVar23 + (int)uVar5;
                uVar20 = uVar20 - 1;
                puVar27 = puVar27 + 1;
              } while (uVar20 != 0);
              if ((uVar15 & uVar15 - 1) != 0) goto LAB_109c33ea0;
            }
LAB_109c3404c:
            if (1 < (int)uVar15) {
              uVar34 = 1;
              iVar17 = 1;
              do {
                if ((long)uVar34 < (long)iVar17) {
                  uVar28 = puVar13[(long)iVar17 + -1];
                  puVar13[(long)iVar17 + -1] = puVar13[uVar34 - 1];
                  puVar13[uVar34 - 1] = uVar28;
                }
                uVar25 = uVar4;
                if ((3 < uVar15) && (uVar24 = uVar4, (int)uVar4 < iVar17)) {
                  do {
                    iVar17 = iVar17 - uVar24;
                    uVar25 = uVar24 >> 1;
                    if (uVar24 < 4) break;
                    uVar24 = uVar25;
                  } while ((int)uVar25 < iVar17);
                }
                iVar17 = uVar25 + iVar17;
                uVar34 = uVar34 + 1;
              } while (uVar34 != uVar36);
            }
            param_4 = (ulong)uStack_a4;
            FUN_109c3435c(param_1,puVar13,uVar36);
            if (uVar5 == 1) {
LAB_109c342a8:
              _memcpy(param_2 + (long)iVar29 * 8,puVar13,puVar12);
            }
            else if (0 < (int)uVar15) {
LAB_109c34264:
              puVar22 = (undefined8 *)(param_2 + (long)iVar29 * 8);
              puVar23 = puVar13;
              uVar34 = uVar36;
              do {
                *puVar22 = *puVar23;
                puVar22 = puVar22 + (int)uVar5;
                uVar34 = uVar34 - 1;
                puVar23 = puVar23 + 1;
              } while (uVar34 != 0);
            }
          }
          iVar30 = iVar30 + 1;
          uVar34 = (ulong)*param_1;
          iVar29 = 0;
          if (uVar15 != 0) {
            iVar29 = (int)*param_1 / (int)uVar15;
          }
        } while (iVar30 < iVar29);
      }
      _free(puVar13);
      if ((uVar15 & uVar9) != 0) {
        _free(puStack_c8);
        _free(puStack_e8);
        _free(uStack_128);
      }
      uVar18 = uVar18 + 1;
      puVar19 = *(ulong **)(param_1 + 2);
    } while (uVar18 < *puVar19);
  }
  return;
}



/* Entry: 109c3435c; end: 109c34d73;  */

float FUN_109c3435c(float param_1,long param_2,undefined1 (*param_3) [12],uint param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float extraout_s1_02;
  undefined4 extraout_s1_03;
  float extraout_s1_04;
  undefined4 extraout_s1_05;
  float extraout_s1_06;
  undefined4 extraout_s1_07;
  float extraout_s1_08;
  undefined4 extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((int)param_4 < 9) {
    if (param_4 == 2) {
      fVar9 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      uVar3 = *(undefined8 *)*param_3;
      fVar7 = (float)uVar3;
      auVar12._12_4_ = fVar9;
      auVar12._0_12_ = *param_3;
      auVar2._12_4_ = fVar9;
      auVar2._0_12_ = *param_3;
      auVar12 = NEON_ext(auVar12,auVar2,8,1);
      param_1 = auVar12._0_4_ - fVar7;
      *(ulong *)(*param_3 + 8) =
           CONCAT44(auVar12._12_4_ - fVar9,auVar12._8_4_ - (float)*(undefined8 *)(*param_3 + 8));
      *(ulong *)*param_3 =
           CONCAT44(auVar12._4_4_ + (float)((ulong)uVar3 >> 0x20),auVar12._0_4_ + fVar7);
    }
    else if (param_4 == 4) {
      fVar9 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar10 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar16 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar17 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar8 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      uStack_98 = 0xbf80000000000000;
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_a0 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar9 + fVar17;
      *(float *)(*param_3 + 4) = fVar10 + fVar8;
      *(float *)(*param_3 + 8) = param_1 + fVar7;
      *(float *)param_3[1] = fVar16 + extraout_s1_15;
      *(float *)(param_3[1] + 4) = fVar9 - fVar17;
      *(float *)(param_3[1] + 8) = fVar10 - fVar8;
      param_1 = param_1 - fVar7;
      *(float *)param_3[2] = param_1;
      *(float *)(param_3[2] + 4) = fVar16 - extraout_s1_15;
    }
    else if (param_4 == 8) {
      fVar16 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar17 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar8 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar18 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar19 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_98 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar20 = *(float *)(param_3[2] + 8) + *(float *)(param_3[3] + 4);
      fVar22 = *(float *)param_3[3] + *(float *)(param_3[3] + 8);
      fVar25 = *(float *)(param_3[2] + 8) - *(float *)(param_3[3] + 4);
      fVar9 = *(float *)param_3[3] - *(float *)(param_3[3] + 8);
      fVar24 = *(float *)param_3[4] + *(float *)(param_3[4] + 8);
      fVar23 = *(float *)(param_3[4] + 4) + *(float *)param_3[5];
      fVar10 = *(float *)param_3[4] - *(float *)(param_3[4] + 8);
      uStack_98 = CONCAT44(*(float *)(param_3[4] + 4) - *(float *)param_3[5],fVar10);
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar14 = fVar16 + fVar18;
      fVar13 = fVar17 + fVar19;
      fVar15 = param_1 + fVar7;
      fVar21 = fVar8 + extraout_s1_10;
      fVar16 = fVar16 - fVar18;
      fVar17 = fVar17 - fVar19;
      param_1 = param_1 - fVar7;
      fVar8 = fVar8 - extraout_s1_10;
      fVar18 = fVar20 + fVar24;
      fVar19 = fVar22 + fVar23;
      uStack_98 = CONCAT44(fVar9 + extraout_s1_11,fVar25 + fVar10);
      fVar11 = 0.70710677;
      uStack_a0 = 0xbf3504f33f3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar22 - fVar23,fVar20 - fVar24);
      fVar20 = 0.0;
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar9 - extraout_s1_11,fVar25 - fVar10);
      fVar7 = -0.70710677;
      uStack_a0 = 0xbf3504f3bf3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar14 + fVar18;
      *(float *)(*param_3 + 4) = fVar13 + fVar19;
      *(float *)(*param_3 + 8) = fVar15 + fVar11;
      *(float *)param_3[1] = fVar21 + extraout_s1_12;
      *(float *)(param_3[1] + 4) = fVar16 + fVar20;
      *(float *)(param_3[1] + 8) = fVar17 + extraout_s1_13;
      *(float *)param_3[2] = param_1 + fVar7;
      *(float *)(param_3[2] + 4) = fVar8 + extraout_s1_14;
      *(float *)(param_3[2] + 8) = fVar14 - fVar18;
      *(float *)param_3[3] = fVar13 - fVar19;
      *(float *)(param_3[3] + 4) = fVar15 - fVar11;
      *(float *)(param_3[3] + 8) = fVar21 - extraout_s1_12;
      *(float *)param_3[4] = fVar16 - fVar20;
      *(float *)(param_3[4] + 4) = fVar17 - extraout_s1_13;
      param_1 = param_1 - fVar7;
      *(float *)(param_3[4] + 8) = param_1;
      *(float *)param_3[5] = fVar8 - extraout_s1_14;
    }
  }
  else {
    uVar5 = (ulong)(param_4 >> 1);
    FUN_109c3435c(param_2,param_3,uVar5,param_5 + -1);
    FUN_109c3435c(param_2,*param_3 + uVar5 * 8,uVar5,param_5 + -1);
    param_2 = param_2 + (long)param_5 * 4;
    fVar7 = *(float *)(param_2 + 0x90) + 1.0;
    uStack_98 = CONCAT44(*(float *)(param_2 + 0x110) + 0.0,fVar7);
    FUN_1095512ac(&uStack_98,&uStack_98);
    uStack_a0 = CONCAT44(extraout_s1,fVar7);
    FUN_1095512ac(&uStack_a0,&uStack_98);
    fStack_a8 = fVar7;
    uStack_a4 = extraout_s1_00;
    FUN_1095512ac(&fStack_a8,&uStack_98);
    uVar6 = 0;
    param_1 = 1.0;
    uStack_b8 = 0x3f800000;
    fStack_b0 = fVar7;
    uStack_ac = extraout_s1_01;
    do {
      puVar1 = *param_3 + uVar5 * 8;
      FUN_1095512ac(puVar1,&uStack_b8);
      fVar17 = param_1;
      FUN_1095512ac(puVar1 + 8,&uStack_b8);
      fStack_c0 = fVar17;
      uStack_bc = extraout_s1_03;
      FUN_1095512ac(&fStack_c0,&uStack_98);
      fVar8 = fVar17;
      FUN_1095512ac((long)puVar1 + 0x10,&uStack_b8);
      fStack_c0 = fVar8;
      uStack_bc = extraout_s1_05;
      FUN_1095512ac(&fStack_c0,&uStack_a0);
      fVar18 = fVar8;
      FUN_1095512ac((long)puVar1 + 0x18,&uStack_b8);
      fStack_c0 = fVar18;
      uStack_bc = extraout_s1_07;
      FUN_1095512ac(&fStack_c0,&fStack_a8);
      fVar7 = fVar18;
      FUN_1095512ac(&uStack_b8,&fStack_b0);
      uStack_b8 = CONCAT44(extraout_s1_09,fVar7);
      *(ulong *)(*param_3 + uVar5 * 8) =
           CONCAT44((float)((ulong)*(undefined8 *)*param_3 >> 0x20) - extraout_s1_02,
                    (float)*(undefined8 *)*param_3 - param_1);
      *(ulong *)(puVar1 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) - extraout_s1_04,
                    (float)*(undefined8 *)(*param_3 + 8) - fVar17);
      uVar4 = *(undefined8 *)(*param_3 + 8);
      uVar3 = *(undefined8 *)*param_3;
      param_1 = param_1 + (float)uVar3;
      *(ulong *)(puVar1 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) - extraout_s1_06,
                    (float)*(undefined8 *)(param_3[1] + 4) - fVar8);
      *(ulong *)(puVar1 + 0x18) =
           CONCAT44((float)((ulong)*(undefined8 *)param_3[2] >> 0x20) - extraout_s1_08,
                    (float)*(undefined8 *)param_3[2] - fVar18);
      fVar7 = *(float *)(param_3[1] + 4);
      fVar9 = *(float *)(param_3[1] + 8);
      fVar10 = *(float *)param_3[2];
      fVar16 = *(float *)(param_3[2] + 4);
      *(ulong *)(*param_3 + 8) =
           CONCAT44(extraout_s1_04 + (float)((ulong)uVar4 >> 0x20),fVar17 + (float)uVar4);
      *(ulong *)*param_3 = CONCAT44(extraout_s1_02 + (float)((ulong)uVar3 >> 0x20),param_1);
      *(float *)param_3[2] = fVar18 + fVar10;
      *(float *)(param_3[2] + 4) = extraout_s1_08 + fVar16;
      *(float *)(param_3[1] + 4) = fVar8 + fVar7;
      *(float *)(param_3[1] + 8) = extraout_s1_06 + fVar9;
      uVar6 = uVar6 + 4;
      param_3 = (undefined1 (*) [12])(param_3[2] + 8);
    } while (uVar6 < uVar5);
  }
  return param_1;
}



/* Entry: 109c34d74; end: 109c35637;  */

void FUN_109c34d74(uint *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  float *pfVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 (*pauVar17) [12];
  uint uVar18;
  undefined *puVar19;
  int iVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  uint *puVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  float *pfVar35;
  undefined4 *puVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  float extraout_s1_05;
  undefined4 extraout_s1_06;
  float extraout_s1_07;
  undefined4 extraout_s1_08;
  float extraout_s1_09;
  undefined4 extraout_s1_10;
  float extraout_s1_11;
  undefined4 extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  double extraout_d1;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  float fStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_128;
  undefined8 *puStack_e8;
  undefined8 *puStack_c0;
  uint uStack_a4;
  undefined8 uStack_80;
  
  uVar37 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    uVar21 = 0;
    uVar18 = param_1[0x27];
    lVar32 = *(long *)(param_1 + 0x1a);
    do {
      if ((uVar18 & 1) == 0) {
        lVar34 = 0;
        iVar33 = 0;
        uVar13 = uVar21;
        bVar11 = true;
        do {
          bVar16 = bVar11;
          puVar31 = param_1 + lVar34 * 3 + 0xd;
          iVar12 = (int)uVar13;
          iVar20 = (int)((ulong)*puVar31 * (long)iVar12 >> 0x20);
          uVar3 = ((uint)(iVar12 - iVar20) >> (ulong)(puVar31[1] & 0x1f)) + iVar20 >>
                  (ulong)(puVar31[2] & 0x1f);
          uVar8 = uVar3 + param_1[lVar34 + 0x28];
          param_4 = (ulong)uVar8;
          iVar33 = iVar33 + uVar8 * param_1[lVar34 + 0x16];
          uVar8 = iVar12 - uVar3 * param_1[lVar34 + 10];
          uVar13 = (ulong)uVar8;
          lVar34 = 1;
          bVar11 = false;
        } while (bVar16);
        iVar33 = iVar33 + uVar8 + param_1[0x2a];
      }
      else {
        iVar33 = (int)uVar21;
      }
      *(ulong *)(param_2 + uVar21 * 8) = (ulong)*(uint *)(lVar32 + (long)iVar33 * 4);
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar37);
  }
  puVar22 = *(ulong **)(param_1 + 2);
  if (*puVar22 != 0) {
    uVar21 = 0;
    do {
      if ((puVar22[3] & 1) == 0) {
        iVar33 = (int)puVar22[2] * (int)uVar21;
      }
      else {
        iVar33 = 0;
        if (*(int *)((long)puVar22 + 0x14) != 0) {
          iVar33 = (int)uVar21 / *(int *)((long)puVar22 + 0x14);
        }
      }
      uVar13 = (long)*(int *)((long)puVar22 + 0xc) + (long)iVar33;
      uVar18 = param_1[uVar13 + 4];
      uVar39 = (ulong)uVar18;
      puVar14 = (undefined8 *)(-(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar39 << 3);
      puVar15 = puVar14;
      _malloc();
      iVar33 = (int)param_4;
      if (uVar18 != 0 && puVar15 == (undefined8 *)0x0) goto LAB_109c35618;
      uVar8 = uVar18 - 1;
      if ((uVar18 & uVar8) == 0) {
        if (uVar18 < 2) {
          uStack_a4 = 0;
        }
        else {
          uStack_a4 = 0;
          uVar24 = uVar39;
          do {
            uVar3 = (int)uVar24 >> 1;
            uVar24 = (ulong)uVar3;
            uStack_a4 = uStack_a4 + 1;
          } while (1 < uVar3);
        }
        puStack_c0 = (undefined8 *)0x0;
        uStack_128 = 0;
        uVar24 = 0;
        puStack_e8 = (undefined8 *)0x0;
      }
      else {
        uVar23 = 2;
        do {
          uVar24 = uVar23;
          uVar23 = (ulong)(uint)((int)uVar24 << 1);
        } while ((int)uVar24 < (int)(uVar18 * 2 + -1));
        uStack_a4 = 0;
        uVar23 = uVar24;
        do {
          uVar3 = (int)uVar23 >> 1;
          uVar23 = (ulong)uVar3;
          uStack_a4 = uStack_a4 + 1;
        } while (1 < uVar3);
        puStack_e8 = (undefined8 *)(-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3);
        puStack_c0 = puStack_e8;
        _malloc();
        iVar33 = (int)param_4;
        if (puStack_c0 == (undefined8 *)0x0) {
LAB_109c35618:
          lVar32 = 8;
          ___cxa_allocate_exception();
          __ZNSt9bad_allocC1Ev();
          pauVar17 = (undefined1 (*) [12])PTR___ZTISt9bad_alloc_110346a68;
          puVar19 = PTR___ZNSt9bad_allocD1Ev_110346998;
          ___cxa_throw();
          uVar18 = (uint)puVar19;
          if ((int)uVar18 < 9) {
            if (uVar18 == 2) {
              fVar41 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
              uVar30 = *(undefined8 *)*pauVar17;
              auVar48._12_4_ = fVar41;
              auVar48._0_12_ = *pauVar17;
              auVar9._12_4_ = fVar41;
              auVar9._0_12_ = *pauVar17;
              auVar48 = NEON_ext(auVar48,auVar9,8,1);
              *(ulong *)(*pauVar17 + 8) =
                   CONCAT44(auVar48._12_4_ - fVar41,
                            auVar48._8_4_ - (float)*(undefined8 *)(*pauVar17 + 8));
              *(ulong *)*pauVar17 =
                   CONCAT44(auVar48._4_4_ + (float)((ulong)uVar30 >> 0x20),
                            auVar48._0_4_ + (float)uVar30);
            }
            else if (uVar18 == 4) {
              fVar42 = *(float *)*pauVar17 + *(float *)(*pauVar17 + 8);
              fVar45 = *(float *)(*pauVar17 + 4) + *(float *)pauVar17[1];
              fVar52 = *(float *)*pauVar17 - *(float *)(*pauVar17 + 8);
              fVar53 = *(float *)(*pauVar17 + 4) - *(float *)pauVar17[1];
              fVar43 = *(float *)(pauVar17[1] + 4) + *(float *)pauVar17[2];
              fVar44 = *(float *)(pauVar17[1] + 8) + *(float *)(pauVar17[2] + 4);
              uStack_1f8 = 0xbf80000000000000;
              fVar41 = *(float *)(pauVar17[1] + 4) - *(float *)pauVar17[2];
              uStack_200 = CONCAT44(*(float *)(pauVar17[1] + 8) - *(float *)(pauVar17[2] + 4),fVar41
                                   );
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              *(float *)*pauVar17 = fVar42 + fVar43;
              *(float *)(*pauVar17 + 4) = fVar45 + fVar44;
              *(float *)(*pauVar17 + 8) = fVar52 + fVar41;
              *(float *)pauVar17[1] = fVar53 + extraout_s1_18;
              *(float *)(pauVar17[1] + 4) = fVar42 - fVar43;
              *(float *)(pauVar17[1] + 8) = fVar45 - fVar44;
              *(float *)pauVar17[2] = fVar52 - fVar41;
              *(float *)(pauVar17[2] + 4) = fVar53 - extraout_s1_18;
            }
            else if (uVar18 == 8) {
              fVar52 = *(float *)*pauVar17 + *(float *)(*pauVar17 + 8);
              fVar53 = *(float *)(*pauVar17 + 4) + *(float *)pauVar17[1];
              fVar43 = *(float *)*pauVar17 - *(float *)(*pauVar17 + 8);
              fVar44 = *(float *)(*pauVar17 + 4) - *(float *)pauVar17[1];
              fVar54 = *(float *)(pauVar17[1] + 4) + *(float *)pauVar17[2];
              fVar55 = *(float *)(pauVar17[1] + 8) + *(float *)(pauVar17[2] + 4);
              fVar41 = *(float *)(pauVar17[1] + 4) - *(float *)pauVar17[2];
              uStack_1f8 = CONCAT44(*(float *)(pauVar17[1] + 8) - *(float *)(pauVar17[2] + 4),fVar41
                                   );
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              fVar56 = *(float *)(pauVar17[2] + 8) + *(float *)(pauVar17[3] + 4);
              fVar58 = *(float *)pauVar17[3] + *(float *)(pauVar17[3] + 8);
              fVar61 = *(float *)(pauVar17[2] + 8) - *(float *)(pauVar17[3] + 4);
              fVar42 = *(float *)pauVar17[3] - *(float *)(pauVar17[3] + 8);
              fVar60 = *(float *)pauVar17[4] + *(float *)(pauVar17[4] + 8);
              fVar59 = *(float *)(pauVar17[4] + 4) + *(float *)pauVar17[5];
              fVar45 = *(float *)pauVar17[4] - *(float *)(pauVar17[4] + 8);
              uStack_1f8 = CONCAT44(*(float *)(pauVar17[4] + 4) - *(float *)pauVar17[5],fVar45);
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              fVar50 = fVar52 + fVar54;
              fVar49 = fVar53 + fVar55;
              fVar51 = fVar43 + fVar41;
              fVar57 = fVar44 + extraout_s1_13;
              fVar52 = fVar52 - fVar54;
              fVar53 = fVar53 - fVar55;
              fVar43 = fVar43 - fVar41;
              fVar44 = fVar44 - extraout_s1_13;
              fVar54 = fVar56 + fVar60;
              fVar55 = fVar58 + fVar59;
              uStack_1f8 = CONCAT44(fVar42 + extraout_s1_14,fVar61 + fVar45);
              fVar46 = 0.70710677;
              uStack_200 = 0xbf3504f33f3504f3;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              uStack_1f8 = CONCAT44(fVar58 - fVar59,fVar56 - fVar60);
              fVar56 = 0.0;
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              uStack_1f8 = CONCAT44(fVar42 - extraout_s1_14,fVar61 - fVar45);
              fVar41 = -0.70710677;
              uStack_200 = 0xbf3504f3bf3504f3;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              *(float *)*pauVar17 = fVar50 + fVar54;
              *(float *)(*pauVar17 + 4) = fVar49 + fVar55;
              *(float *)(*pauVar17 + 8) = fVar51 + fVar46;
              *(float *)pauVar17[1] = fVar57 + extraout_s1_15;
              *(float *)(pauVar17[1] + 4) = fVar52 + fVar56;
              *(float *)(pauVar17[1] + 8) = fVar53 + extraout_s1_16;
              *(float *)pauVar17[2] = fVar43 + fVar41;
              *(float *)(pauVar17[2] + 4) = fVar44 + extraout_s1_17;
              *(float *)(pauVar17[2] + 8) = fVar50 - fVar54;
              *(float *)pauVar17[3] = fVar49 - fVar55;
              *(float *)(pauVar17[3] + 4) = fVar51 - fVar46;
              *(float *)(pauVar17[3] + 8) = fVar57 - extraout_s1_15;
              *(float *)pauVar17[4] = fVar52 - fVar56;
              *(float *)(pauVar17[4] + 4) = fVar53 - extraout_s1_16;
              *(float *)(pauVar17[4] + 8) = fVar43 - fVar41;
              *(float *)pauVar17[5] = fVar44 - extraout_s1_17;
            }
          }
          else {
            uVar21 = (ulong)(uVar18 >> 1);
            FUN_109c35638();
            FUN_109c35638(lVar32,*pauVar17 + uVar21 * 8,uVar21,iVar33 + -1);
            lVar32 = lVar32 + (long)iVar33 * 4;
            fVar41 = *(float *)(lVar32 + 0xc0) + 1.0;
            uStack_1f8 = CONCAT44(*(float *)(lVar32 + 0x140) + 0.0,fVar41);
            FUN_1095512ac(&uStack_1f8,&uStack_1f8);
            uStack_200 = CONCAT44(extraout_s1_02,fVar41);
            FUN_1095512ac(&uStack_200,&uStack_1f8);
            fStack_208 = fVar41;
            uStack_204 = extraout_s1_03;
            FUN_1095512ac(&fStack_208,&uStack_1f8);
            uVar37 = 0;
            fVar42 = 1.0;
            uStack_218 = 0x3f800000;
            fStack_210 = fVar41;
            uStack_20c = extraout_s1_04;
            do {
              puVar2 = *pauVar17 + uVar21 * 8;
              FUN_1095512ac(puVar2,&uStack_218);
              fVar43 = fVar42;
              FUN_1095512ac(puVar2 + 8,&uStack_218);
              fStack_220 = fVar43;
              uStack_21c = extraout_s1_06;
              FUN_1095512ac(&fStack_220,&uStack_1f8);
              fVar44 = fVar43;
              FUN_1095512ac((long)puVar2 + 0x10,&uStack_218);
              fStack_220 = fVar44;
              uStack_21c = extraout_s1_08;
              FUN_1095512ac(&fStack_220,&uStack_200);
              fVar54 = fVar44;
              FUN_1095512ac((long)puVar2 + 0x18,&uStack_218);
              fStack_220 = fVar54;
              uStack_21c = extraout_s1_10;
              FUN_1095512ac(&fStack_220,&fStack_208);
              fVar41 = fVar54;
              FUN_1095512ac(&uStack_218,&fStack_210);
              uStack_218 = CONCAT44(extraout_s1_12,fVar41);
              *(ulong *)(*pauVar17 + uVar21 * 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)*pauVar17 >> 0x20) - extraout_s1_05,
                            (float)*(undefined8 *)*pauVar17 - fVar42);
              *(ulong *)(puVar2 + 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20) - extraout_s1_07,
                            (float)*(undefined8 *)(*pauVar17 + 8) - fVar43);
              uVar10 = *(undefined8 *)(*pauVar17 + 8);
              uVar30 = *(undefined8 *)*pauVar17;
              fVar42 = fVar42 + (float)uVar30;
              *(ulong *)(puVar2 + 0x10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pauVar17[1] + 4) >> 0x20) -
                            extraout_s1_09,(float)*(undefined8 *)(pauVar17[1] + 4) - fVar44);
              *(ulong *)(puVar2 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)pauVar17[2] >> 0x20) - extraout_s1_11,
                            (float)*(undefined8 *)pauVar17[2] - fVar54);
              fVar41 = *(float *)(pauVar17[1] + 4);
              fVar45 = *(float *)(pauVar17[1] + 8);
              fVar52 = *(float *)pauVar17[2];
              fVar53 = *(float *)(pauVar17[2] + 4);
              *(ulong *)(*pauVar17 + 8) =
                   CONCAT44(extraout_s1_07 + (float)((ulong)uVar10 >> 0x20),fVar43 + (float)uVar10);
              *(ulong *)*pauVar17 = CONCAT44(extraout_s1_05 + (float)((ulong)uVar30 >> 0x20),fVar42)
              ;
              *(float *)pauVar17[2] = fVar54 + fVar52;
              *(float *)(pauVar17[2] + 4) = extraout_s1_11 + fVar53;
              *(float *)(pauVar17[1] + 4) = fVar44 + fVar41;
              *(float *)(pauVar17[1] + 8) = extraout_s1_09 + fVar45;
              uVar37 = uVar37 + 4;
              pauVar17 = (undefined1 (*) [12])(pauVar17[2] + 8);
            } while (uVar37 < uVar21);
          }
          return;
        }
        _malloc();
        iVar33 = (int)param_4;
        if (puStack_e8 == (undefined8 *)0x0) goto LAB_109c35618;
        uVar3 = uVar18 + 1;
        uStack_128 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
        _malloc();
        iVar33 = (int)param_4;
        if ((uVar3 != 0) && (uStack_128 == 0)) goto LAB_109c35618;
        if (-1 < (int)uVar18) {
          uVar23 = 0;
          do {
            dVar47 = ((double)(uVar23 & 0xffffffff) * 3.141592653589793 *
                     (double)(uVar23 & 0xffffffff)) / (double)uVar18;
            ___sincos_stret();
            *(ulong *)(uStack_128 + uVar23 * 8) = CONCAT44((float)dVar47,(float)extraout_d1);
            uVar23 = uVar23 + 1;
          } while (uVar3 != uVar23);
        }
      }
      iVar33 = 0;
      if (uVar18 != 0) {
        iVar33 = (int)uVar37 / (int)uVar18;
      }
      if (0 < iVar33) {
        iVar33 = 0;
        uVar3 = uVar18 >> 1;
        uVar38 = (uint)uVar24;
        uVar5 = uVar38 >> 1;
        pfVar1 = (float *)(uStack_128 + 4);
        do {
          iVar20 = 0;
          iVar12 = iVar33;
          if (0 < (int)uVar13) {
            puVar31 = param_1 + 7;
            uVar37 = uVar13 & 0xffffffff;
            do {
              iVar6 = 0;
              if (param_1[(uVar13 & 0xffffffff) + 4] != 0) {
                iVar6 = (int)*puVar31 / (int)param_1[(uVar13 & 0xffffffff) + 4];
              }
              iVar7 = 0;
              if (iVar6 != 0) {
                iVar7 = iVar12 / iVar6;
              }
              iVar12 = iVar12 - iVar7 * iVar6;
              iVar20 = iVar20 + iVar7 * *puVar31;
              uVar37 = uVar37 - 1;
              puVar31 = puVar31 + 1;
            } while (uVar37 != 0);
          }
          iVar12 = iVar12 + iVar20;
          uVar4 = (param_1 + 7)[uVar13];
          pfVar35 = pfVar1;
          uVar37 = uVar39;
          puVar25 = puVar15;
          puVar36 = (undefined4 *)((long)puStack_c0 + 4);
          if (uVar4 == 1) {
            _memcpy(puVar15,param_2 + (long)iVar12 * 8,puVar14);
            if ((uVar18 & uVar8) == 0) goto LAB_109c3531c;
            if (0 < (int)uVar18) {
LAB_109c35170:
              do {
                fVar41 = pfVar35[-1];
                uStack_80 = CONCAT44(-*pfVar35,fVar41);
                FUN_1095512ac(puVar25,&uStack_80);
                puVar36[-1] = fVar41;
                *puVar36 = extraout_s1;
                uVar37 = uVar37 - 1;
                pfVar35 = pfVar35 + 2;
                puVar25 = puVar25 + 1;
                puVar36 = puVar36 + 2;
              } while (uVar37 != 0);
            }
LAB_109c351ac:
            if ((int)uVar18 < (int)uVar38) {
              _bzero((long)puStack_c0 + (long)puVar14,(ulong)(uVar38 + ~uVar18) * 8 + 8);
            }
            if (0 < (int)uVar18) {
              _memcpy(puStack_e8,uStack_128,uVar39 << 3);
            }
            if ((int)uVar18 < (int)(uVar38 - uVar18)) {
              _bzero((long)puStack_e8 + (long)puVar14,
                     (ulong)(uVar38 + (uVar18 << 1 ^ 0xffffffff)) * 8 + 8);
            }
            puVar25 = (undefined8 *)(uStack_128 + (long)(int)uVar18 * 8);
            lVar32 = (long)(int)(uVar38 - uVar18);
            if (0 < (int)uVar18) {
              do {
                puStack_e8[lVar32] = *puVar25;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + -1;
              } while (lVar32 < (int)uVar38);
            }
            if ((int)uVar38 < 2) {
              FUN_109c35638(param_1,puStack_c0,uVar24,uStack_a4);
            }
            else {
              uVar37 = 1;
              iVar20 = 1;
              do {
                if ((long)uVar37 < (long)iVar20) {
                  uVar30 = puStack_c0[(long)iVar20 + -1];
                  puStack_c0[(long)iVar20 + -1] = puStack_c0[uVar37 - 1];
                  puStack_c0[uVar37 - 1] = uVar30;
                }
                uVar28 = uVar5;
                if ((3 < uVar38) && (uVar27 = uVar5, (int)uVar5 < iVar20)) {
                  do {
                    iVar20 = iVar20 - uVar27;
                    uVar28 = uVar27 >> 1;
                    if (uVar27 < 4) break;
                    uVar27 = uVar28;
                  } while ((int)uVar28 < iVar20);
                }
                iVar20 = uVar28 + iVar20;
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar24);
              FUN_109c35638(param_1,puStack_c0,uVar24,uStack_a4);
              uVar37 = 1;
              iVar20 = 1;
              do {
                if ((long)uVar37 < (long)iVar20) {
                  uVar30 = puStack_e8[(long)iVar20 + -1];
                  puStack_e8[(long)iVar20 + -1] = puStack_e8[uVar37 - 1];
                  puStack_e8[uVar37 - 1] = uVar30;
                }
                uVar28 = uVar5;
                if ((3 < uVar38) && (uVar27 = uVar5, (int)uVar5 < iVar20)) {
                  do {
                    iVar20 = iVar20 - uVar27;
                    uVar28 = uVar27 >> 1;
                    if (uVar27 < 4) break;
                    uVar27 = uVar28;
                  } while ((int)uVar28 < iVar20);
                }
                iVar20 = uVar28 + iVar20;
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar24);
            }
            FUN_109c35638(param_1,puStack_e8,uVar24,uStack_a4);
            puVar25 = puStack_e8;
            uVar37 = uVar24;
            puVar26 = puStack_c0;
            if ((int)uVar38 < 1) {
              param_4 = (ulong)uStack_a4;
              func_0x000109c35b44(param_1,puStack_c0,uVar24);
            }
            else {
              do {
                uStack_80 = *puVar25;
                uVar40 = (undefined4)uStack_80;
                FUN_1095512ac(puVar26,&uStack_80);
                *(undefined4 *)puVar26 = uVar40;
                *(undefined4 *)((long)puVar26 + 4) = extraout_s1_00;
                uVar37 = uVar37 - 1;
                puVar25 = puVar25 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar37 != 0);
              param_4 = (ulong)uStack_a4;
              if (1 < (int)uVar38) {
                uVar37 = 1;
                iVar20 = 1;
                do {
                  if ((long)uVar37 < (long)iVar20) {
                    uVar30 = puStack_c0[(long)iVar20 + -1];
                    puStack_c0[(long)iVar20 + -1] = puStack_c0[uVar37 - 1];
                    puStack_c0[uVar37 - 1] = uVar30;
                  }
                  uVar28 = uVar5;
                  if ((3 < uVar38) && (uVar27 = uVar5, (int)uVar5 < iVar20)) {
                    do {
                      iVar20 = iVar20 - uVar27;
                      uVar28 = uVar27 >> 1;
                      if (uVar27 < 4) break;
                      uVar27 = uVar28;
                    } while ((int)uVar28 < iVar20);
                  }
                  iVar20 = uVar28 + iVar20;
                  uVar37 = uVar37 + 1;
                } while (uVar37 != uVar24);
              }
              func_0x000109c35b44(param_1,puStack_c0,uVar24);
              puVar25 = puStack_c0;
              uVar37 = uVar24;
              do {
                *puVar25 = CONCAT44((float)((ulong)*puVar25 >> 0x20) / (float)uVar24,
                                    (float)*puVar25 / (float)uVar24);
                uVar37 = uVar37 - 1;
                puVar25 = puVar25 + 1;
              } while (uVar37 != 0);
            }
            pfVar35 = pfVar1;
            puVar36 = (undefined4 *)((long)puVar15 + 4);
            puVar25 = puStack_c0;
            uVar37 = uVar39;
            if (0 < (int)uVar18) {
              do {
                fVar41 = pfVar35[-1];
                uStack_80 = CONCAT44(-*pfVar35,fVar41);
                FUN_1095512ac(puVar25,&uStack_80);
                puVar36[-1] = fVar41;
                *puVar36 = extraout_s1_01;
                puVar36 = puVar36 + 2;
                pfVar35 = pfVar35 + 2;
                puVar25 = puVar25 + 1;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
              if (uVar4 != 1) goto LAB_109c3553c;
              goto LAB_109c35584;
            }
            if (uVar4 == 1) goto LAB_109c35584;
          }
          else {
            if ((int)uVar18 < 1) {
              if ((uVar18 & uVar18 - 1) != 0) goto LAB_109c351ac;
            }
            else {
              puVar26 = (undefined8 *)(param_2 + (long)iVar12 * 8);
              puVar29 = puVar15;
              uVar23 = uVar39;
              do {
                *puVar29 = *puVar26;
                puVar26 = puVar26 + (int)uVar4;
                uVar23 = uVar23 - 1;
                puVar29 = puVar29 + 1;
              } while (uVar23 != 0);
              if ((uVar18 & uVar18 - 1) != 0) goto LAB_109c35170;
            }
LAB_109c3531c:
            if (1 < (int)uVar18) {
              uVar37 = 1;
              iVar20 = 1;
              do {
                if ((long)uVar37 < (long)iVar20) {
                  uVar30 = puVar15[(long)iVar20 + -1];
                  puVar15[(long)iVar20 + -1] = puVar15[uVar37 - 1];
                  puVar15[uVar37 - 1] = uVar30;
                }
                uVar28 = uVar3;
                if ((3 < uVar18) && (uVar27 = uVar3, (int)uVar3 < iVar20)) {
                  do {
                    iVar20 = iVar20 - uVar27;
                    uVar28 = uVar27 >> 1;
                    if (uVar27 < 4) break;
                    uVar27 = uVar28;
                  } while ((int)uVar28 < iVar20);
                }
                iVar20 = uVar28 + iVar20;
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar39);
            }
            param_4 = (ulong)uStack_a4;
            FUN_109c35638(param_1,puVar15,uVar39);
            if (uVar4 == 1) {
LAB_109c35584:
              _memcpy(param_2 + (long)iVar12 * 8,puVar15,puVar14);
            }
            else if (0 < (int)uVar18) {
LAB_109c3553c:
              puVar25 = (undefined8 *)(param_2 + (long)iVar12 * 8);
              puVar26 = puVar15;
              uVar37 = uVar39;
              do {
                *puVar25 = *puVar26;
                puVar25 = puVar25 + (int)uVar4;
                uVar37 = uVar37 - 1;
                puVar26 = puVar26 + 1;
              } while (uVar37 != 0);
            }
          }
          iVar33 = iVar33 + 1;
          uVar37 = (ulong)*param_1;
          iVar12 = 0;
          if (uVar18 != 0) {
            iVar12 = (int)*param_1 / (int)uVar18;
          }
        } while (iVar33 < iVar12);
      }
      _free(puVar15);
      if ((uVar18 & uVar8) != 0) {
        _free(puStack_c0);
        _free(puStack_e8);
        _free(uStack_128);
      }
      uVar21 = uVar21 + 1;
      puVar22 = *(ulong **)(param_1 + 2);
    } while (uVar21 < *puVar22);
  }
  return;
}



/* Entry: 109c35638; end: 109c3604f;  */

float FUN_109c35638(float param_1,long param_2,undefined1 (*param_3) [12],uint param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float extraout_s1_02;
  undefined4 extraout_s1_03;
  float extraout_s1_04;
  undefined4 extraout_s1_05;
  float extraout_s1_06;
  undefined4 extraout_s1_07;
  float extraout_s1_08;
  undefined4 extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((int)param_4 < 9) {
    if (param_4 == 2) {
      fVar9 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      uVar3 = *(undefined8 *)*param_3;
      fVar7 = (float)uVar3;
      auVar12._12_4_ = fVar9;
      auVar12._0_12_ = *param_3;
      auVar2._12_4_ = fVar9;
      auVar2._0_12_ = *param_3;
      auVar12 = NEON_ext(auVar12,auVar2,8,1);
      param_1 = auVar12._0_4_ - fVar7;
      *(ulong *)(*param_3 + 8) =
           CONCAT44(auVar12._12_4_ - fVar9,auVar12._8_4_ - (float)*(undefined8 *)(*param_3 + 8));
      *(ulong *)*param_3 =
           CONCAT44(auVar12._4_4_ + (float)((ulong)uVar3 >> 0x20),auVar12._0_4_ + fVar7);
    }
    else if (param_4 == 4) {
      fVar9 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar10 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar16 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar17 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar8 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      uStack_98 = 0xbf80000000000000;
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_a0 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar9 + fVar17;
      *(float *)(*param_3 + 4) = fVar10 + fVar8;
      *(float *)(*param_3 + 8) = param_1 + fVar7;
      *(float *)param_3[1] = fVar16 + extraout_s1_15;
      *(float *)(param_3[1] + 4) = fVar9 - fVar17;
      *(float *)(param_3[1] + 8) = fVar10 - fVar8;
      param_1 = param_1 - fVar7;
      *(float *)param_3[2] = param_1;
      *(float *)(param_3[2] + 4) = fVar16 - extraout_s1_15;
    }
    else if (param_4 == 8) {
      fVar16 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar17 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar8 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar18 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar19 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_98 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar20 = *(float *)(param_3[2] + 8) + *(float *)(param_3[3] + 4);
      fVar22 = *(float *)param_3[3] + *(float *)(param_3[3] + 8);
      fVar25 = *(float *)(param_3[2] + 8) - *(float *)(param_3[3] + 4);
      fVar9 = *(float *)param_3[3] - *(float *)(param_3[3] + 8);
      fVar24 = *(float *)param_3[4] + *(float *)(param_3[4] + 8);
      fVar23 = *(float *)(param_3[4] + 4) + *(float *)param_3[5];
      fVar10 = *(float *)param_3[4] - *(float *)(param_3[4] + 8);
      uStack_98 = CONCAT44(*(float *)(param_3[4] + 4) - *(float *)param_3[5],fVar10);
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar14 = fVar16 + fVar18;
      fVar13 = fVar17 + fVar19;
      fVar15 = param_1 + fVar7;
      fVar21 = fVar8 + extraout_s1_10;
      fVar16 = fVar16 - fVar18;
      fVar17 = fVar17 - fVar19;
      param_1 = param_1 - fVar7;
      fVar8 = fVar8 - extraout_s1_10;
      fVar18 = fVar20 + fVar24;
      fVar19 = fVar22 + fVar23;
      uStack_98 = CONCAT44(fVar9 + extraout_s1_11,fVar25 + fVar10);
      fVar11 = 0.70710677;
      uStack_a0 = 0xbf3504f33f3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar22 - fVar23,fVar20 - fVar24);
      fVar20 = 0.0;
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar9 - extraout_s1_11,fVar25 - fVar10);
      fVar7 = -0.70710677;
      uStack_a0 = 0xbf3504f3bf3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar14 + fVar18;
      *(float *)(*param_3 + 4) = fVar13 + fVar19;
      *(float *)(*param_3 + 8) = fVar15 + fVar11;
      *(float *)param_3[1] = fVar21 + extraout_s1_12;
      *(float *)(param_3[1] + 4) = fVar16 + fVar20;
      *(float *)(param_3[1] + 8) = fVar17 + extraout_s1_13;
      *(float *)param_3[2] = param_1 + fVar7;
      *(float *)(param_3[2] + 4) = fVar8 + extraout_s1_14;
      *(float *)(param_3[2] + 8) = fVar14 - fVar18;
      *(float *)param_3[3] = fVar13 - fVar19;
      *(float *)(param_3[3] + 4) = fVar15 - fVar11;
      *(float *)(param_3[3] + 8) = fVar21 - extraout_s1_12;
      *(float *)param_3[4] = fVar16 - fVar20;
      *(float *)(param_3[4] + 4) = fVar17 - extraout_s1_13;
      param_1 = param_1 - fVar7;
      *(float *)(param_3[4] + 8) = param_1;
      *(float *)param_3[5] = fVar8 - extraout_s1_14;
    }
  }
  else {
    uVar5 = (ulong)(param_4 >> 1);
    FUN_109c35638(param_2,param_3,uVar5,param_5 + -1);
    FUN_109c35638(param_2,*param_3 + uVar5 * 8,uVar5,param_5 + -1);
    param_2 = param_2 + (long)param_5 * 4;
    fVar7 = *(float *)(param_2 + 0xc0) + 1.0;
    uStack_98 = CONCAT44(*(float *)(param_2 + 0x140) + 0.0,fVar7);
    FUN_1095512ac(&uStack_98,&uStack_98);
    uStack_a0 = CONCAT44(extraout_s1,fVar7);
    FUN_1095512ac(&uStack_a0,&uStack_98);
    fStack_a8 = fVar7;
    uStack_a4 = extraout_s1_00;
    FUN_1095512ac(&fStack_a8,&uStack_98);
    uVar6 = 0;
    param_1 = 1.0;
    uStack_b8 = 0x3f800000;
    fStack_b0 = fVar7;
    uStack_ac = extraout_s1_01;
    do {
      puVar1 = *param_3 + uVar5 * 8;
      FUN_1095512ac(puVar1,&uStack_b8);
      fVar17 = param_1;
      FUN_1095512ac(puVar1 + 8,&uStack_b8);
      fStack_c0 = fVar17;
      uStack_bc = extraout_s1_03;
      FUN_1095512ac(&fStack_c0,&uStack_98);
      fVar8 = fVar17;
      FUN_1095512ac((long)puVar1 + 0x10,&uStack_b8);
      fStack_c0 = fVar8;
      uStack_bc = extraout_s1_05;
      FUN_1095512ac(&fStack_c0,&uStack_a0);
      fVar18 = fVar8;
      FUN_1095512ac((long)puVar1 + 0x18,&uStack_b8);
      fStack_c0 = fVar18;
      uStack_bc = extraout_s1_07;
      FUN_1095512ac(&fStack_c0,&fStack_a8);
      fVar7 = fVar18;
      FUN_1095512ac(&uStack_b8,&fStack_b0);
      uStack_b8 = CONCAT44(extraout_s1_09,fVar7);
      *(ulong *)(*param_3 + uVar5 * 8) =
           CONCAT44((float)((ulong)*(undefined8 *)*param_3 >> 0x20) - extraout_s1_02,
                    (float)*(undefined8 *)*param_3 - param_1);
      *(ulong *)(puVar1 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) - extraout_s1_04,
                    (float)*(undefined8 *)(*param_3 + 8) - fVar17);
      uVar4 = *(undefined8 *)(*param_3 + 8);
      uVar3 = *(undefined8 *)*param_3;
      param_1 = param_1 + (float)uVar3;
      *(ulong *)(puVar1 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) - extraout_s1_06,
                    (float)*(undefined8 *)(param_3[1] + 4) - fVar8);
      *(ulong *)(puVar1 + 0x18) =
           CONCAT44((float)((ulong)*(undefined8 *)param_3[2] >> 0x20) - extraout_s1_08,
                    (float)*(undefined8 *)param_3[2] - fVar18);
      fVar7 = *(float *)(param_3[1] + 4);
      fVar9 = *(float *)(param_3[1] + 8);
      fVar10 = *(float *)param_3[2];
      fVar16 = *(float *)(param_3[2] + 4);
      *(ulong *)(*param_3 + 8) =
           CONCAT44(extraout_s1_04 + (float)((ulong)uVar4 >> 0x20),fVar17 + (float)uVar4);
      *(ulong *)*param_3 = CONCAT44(extraout_s1_02 + (float)((ulong)uVar3 >> 0x20),param_1);
      *(float *)param_3[2] = fVar18 + fVar10;
      *(float *)(param_3[2] + 4) = extraout_s1_08 + fVar16;
      *(float *)(param_3[1] + 4) = fVar8 + fVar7;
      *(float *)(param_3[1] + 8) = extraout_s1_06 + fVar9;
      uVar6 = uVar6 + 4;
      param_3 = (undefined1 (*) [12])(param_3[2] + 8);
    } while (uVar6 < uVar5);
  }
  return param_1;
}



/* Entry: 109c36050; end: 109c3611b;  */

undefined8 * FUN_109c36050(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cce8;
  func_0x000107c31940(auStack_38,&UNK_10f5a45e7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c3611c; end: 109c3611f;  */

undefined8 * FUN_109c3611c(undefined8 *param_1)

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



/* Entry: 109c36120; end: 109c36133;  */

void FUN_109c36120(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c36134; end: 109c36383;  */

undefined ** FUN_109c36134(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  uint uVar10;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  lVar7 = *plVar9;
  iStack_a0 = 0;
  uStack_9c = 0;
  iStack_98 = 0;
  uStack_94 = 0;
  puVar8 = (uint *)(lVar7 + 8);
  uVar10 = *puVar8;
  lStack_a8 = 0;
  if ((int)uVar10 < 1) {
    if (puVar8 == (uint *)&lStack_a8) {
LAB_109c36208:
      uVar10 = 0;
      goto LAB_109c36224;
    }
    if (uVar10 != 0) goto LAB_109c361a8;
  }
  else if (uVar10 == 1) {
    if (puVar8 == (uint *)&lStack_a8) goto LAB_109c36208;
LAB_109c361a8:
    _memmove((ulong)&lStack_a8 | 4,lVar7 + 0xc,(long)(int)uVar10 << 2);
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0xc);
    iVar4 = *(int *)(lVar7 + 0x3c);
    if (4 < uVar10) {
      uVar10 = 5;
    }
    iVar3 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(uint *)(lVar7 + 0xc),uVar10);
    lStack_a8 = (ulong)uVar1 << 0x20;
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = iVar3 / (int)uVar1;
    }
    if (iVar4 == 0) {
      iStack_a0 = 1;
      iStack_98 = iVar2;
    }
    else {
      iStack_98 = 1;
      iStack_a0 = iVar2;
    }
    uStack_9c = 1;
    uVar10 = 4;
  }
  lStack_a8 = CONCAT44(lStack_a8._4_4_,uVar10);
LAB_109c36224:
  FUN_109c182f4(param_3,1);
  FUN_109c1bed0(&puStack_90,**(undefined8 **)(param_1 + 0x68),*plVar9);
  func_0x000109c18360(*param_3,&puStack_90);
  FUN_109c180ec(&puStack_90);
  lVar7 = *(long *)*param_3;
  puVar8 = (uint *)(lVar7 + 8);
  uVar1 = *puVar8 & ((int)*puVar8 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar4 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar7 + 0xc,uVar1);
  iVar3 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&lStack_a8 | 4,
                uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
  puStack_90 = &UNK_10f574cf1;
  uStack_88 = 0xf;
  puStack_78 = &UNK_10f574d01;
  uStack_70 = 0xe;
  ppuVar5 = &puStack_90;
  uStack_80 = iVar4 == iVar3;
  FUN_10959b640();
  if (puVar8 != (uint *)&lStack_a8 && iVar4 == iVar3) {
    uVar10 = (uint)lStack_a8;
    if ((uint)lStack_a8 != 0) {
      ppuVar5 = (undefined **)(lVar7 + 0xc);
      _memmove(ppuVar5,(ulong)&lStack_a8 | 4,(long)(int)(uint)lStack_a8 << 2);
    }
    *puVar8 = uVar10;
  }
  lVar7 = *(long *)*param_3;
  *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(*plVar9 + 0x3c);
  *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&puStack_90);
  ppuVar6 = ppuVar5;
  __Unwind_Resume();
  pcStack_b8 = FUN_109c36384;
  *(undefined8 *)((long)ppuVar6 + 0x59) = 0;
  *(undefined8 *)((long)ppuVar6 + 0x51) = 0;
  ppuVar6[10] = (undefined *)0x0;
  ppuVar6[9] = (undefined *)0x0;
  ppuVar6[8] = (undefined *)0x0;
  ppuVar6[7] = (undefined *)0x0;
  ppuVar6[6] = (undefined *)0x0;
  ppuVar6[5] = (undefined *)0x0;
  ppuVar6[4] = (undefined *)0x0;
  ppuVar6[3] = (undefined *)0x0;
  ppuVar6[2] = (undefined *)0x0;
  ppuVar6[1] = (undefined *)0x0;
  *(undefined2 *)((long)ppuVar6 + 0x61) = 1;
  *(undefined1 *)((long)ppuVar6 + 99) = 0;
  ppuVar6[0xd] = (undefined *)0x0;
  ppuVar6[0xe] = (undefined *)0x0;
  ppuVar6[0xf] = (undefined *)0x3f800000;
  *(undefined1 *)(ppuVar6 + 0x10) = 0;
  *(undefined1 *)((long)ppuVar6 + 0x84) = 0;
  *(undefined1 *)(ppuVar6 + 0x11) = 0;
  *(undefined1 *)((long)ppuVar6 + 0x8c) = 0;
  *ppuVar6 = (undefined *)&PTR_FUN_110b2cd28;
  puStack_d0 = param_3;
  ppuStack_c8 = ppuVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  *(undefined4 *)(ppuVar6 + 0x12) = 0xffffffff;
  func_0x000107c31940(auStack_e8,&UNK_10f5a45ef);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppuVar6 + 6,auStack_e8);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  return ppuVar6;
}



/* Entry: 109c36384; end: 109c3645b;  */

undefined8 * FUN_109c36384(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cd28;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  func_0x000107c31940(auStack_38,&UNK_10f5a45ef);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c3645c; end: 109c3645f;  */

undefined8 * FUN_109c3645c(undefined8 *param_1)

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



/* Entry: 109c36460; end: 109c36473;  */

void FUN_109c36460(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c36474; end: 109c369f7;  */

void FUN_109c36474(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  uint uStack_c8;
  int aiStack_c4 [5];
  undefined1 auStack_b0 [72];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109c182f4(param_3,1);
  plVar17 = (long *)*param_2;
  lVar16 = *plVar17;
  if (*(char *)(lVar16 + 0x48) == '\x04') {
    uVar2 = *(uint *)(lVar16 + 8);
    lVar5 = (long)(int)uVar2;
    lVar1 = (long)*(int *)(param_1 + 0x90) + (long)(int)(*(int *)(param_1 + 0x90) >> 0x1f & uVar2);
    piVar14 = (int *)(lVar16 + 0xc);
    lVar9 = lVar1 * 4;
    uVar20 = 1;
    iVar21 = (int)lVar1;
    piVar7 = piVar14;
    if (iVar21 != 0) {
      do {
        uVar20 = *piVar7 * uVar20;
        lVar9 = lVar9 + -4;
        piVar7 = piVar7 + 1;
      } while (lVar9 != 0);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    iVar18 = *(int *)(plVar17[2] + 8);
    piVar7 = (int *)(lVar16 + lVar1 * 4 + 0x10);
    if (piVar7 == piVar14 + lVar5) {
      uVar19 = 1;
    }
    else {
      lVar9 = lVar5 * 4 + lVar1 * -4 + -4;
      uVar19 = 1;
      do {
        uVar19 = (ulong)(uint)(*piVar7 * (int)uVar19);
        lVar9 = lVar9 + -4;
        piVar7 = piVar7 + 1;
      } while (lVar9 != 0);
    }
    plVar13 = (long *)*param_3;
    aiStack_c4[2] = 0;
    aiStack_c4[3] = 0;
    aiStack_c4[0] = 0;
    aiStack_c4[1] = 0;
    aiStack_c4[4] = 0;
    uStack_c8 = (uVar2 + iVar18) - 1;
    if (0 < (int)uStack_c8) {
      uVar11 = 0;
      iVar12 = -iVar18;
      piVar7 = (int *)(plVar17[2] + lVar1 * -4 + 0xc);
      do {
        iVar12 = iVar12 + 1;
        if ((long)uVar11 < lVar1) {
          if ((long)uVar11 < lVar5) {
            piVar10 = piVar14 + uVar11;
            goto LAB_109c36648;
          }
          iVar8 = -1;
        }
        else {
          piVar10 = piVar7;
          if ((long)(iVar21 + iVar18) <= (long)uVar11) {
            piVar10 = piVar14 + iVar12;
          }
LAB_109c36648:
          iVar8 = *piVar10;
        }
        aiStack_c4[uVar11] = iVar8;
        uVar11 = uVar11 + 1;
        piVar7 = piVar7 + 1;
      } while (uStack_c8 != uVar11);
    }
    (*(code *)**(undefined8 **)*puVar6)(auStack_b0,(undefined8 *)*puVar6,&uStack_c8,4);
    func_0x000109c18360(plVar13,auStack_b0);
    FUN_109c180ec(auStack_b0);
    lVar22 = *(long *)(*plVar17 + 0x40);
    lVar5 = plVar17[2];
    piVar7 = *(int **)(lVar5 + 0x40);
    lVar9 = *(long *)(*plVar13 + 0x40);
    uVar2 = *(uint *)(lVar5 + 8) & ((int)*(uint *)(lVar5 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    uVar4 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar5 + 0xc,uVar2);
    if (iVar21 < *(int *)(lVar16 + 8)) {
      iVar21 = piVar14[lVar1];
    }
    else {
      iVar21 = -1;
    }
    if (0 < (int)uVar20) {
      uVar11 = 0;
      uVar15 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
      iVar18 = (int)uVar19;
      do {
        if (0 < (int)uVar4) {
          piVar14 = piVar7;
          lVar16 = lVar9;
          uVar19 = (ulong)uVar4;
          do {
            if (iVar18 != 0) {
              _memmove(lVar16,lVar22 + (long)((*piVar14 + (int)uVar11 * iVar21) * iVar18) * 4,uVar15
                      );
            }
            piVar14 = piVar14 + 1;
            lVar16 = lVar16 + uVar15;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + (long)(int)uVar4 * (long)iVar18 * 4;
      } while (uVar11 != uVar20);
    }
  }
  else {
    if (*(char *)(lVar16 + 0x48) != '\x01') goto LAB_109c36980;
    uVar2 = *(uint *)(lVar16 + 8);
    lVar5 = (long)(int)uVar2;
    lVar1 = (long)*(int *)(param_1 + 0x90) + (long)(int)(*(int *)(param_1 + 0x90) >> 0x1f & uVar2);
    piVar14 = (int *)(lVar16 + 0xc);
    lVar9 = lVar1 * 4;
    uVar20 = 1;
    iVar21 = (int)lVar1;
    piVar7 = piVar14;
    if (iVar21 != 0) {
      do {
        uVar20 = *piVar7 * uVar20;
        lVar9 = lVar9 + -4;
        piVar7 = piVar7 + 1;
      } while (lVar9 != 0);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    iVar18 = *(int *)(plVar17[2] + 8);
    piVar7 = (int *)(lVar16 + lVar1 * 4 + 0x10);
    if (piVar7 == piVar14 + lVar5) {
      uVar19 = 1;
    }
    else {
      lVar9 = lVar5 * 4 + lVar1 * -4 + -4;
      uVar19 = 1;
      do {
        uVar19 = (ulong)(uint)(*piVar7 * (int)uVar19);
        lVar9 = lVar9 + -4;
        piVar7 = piVar7 + 1;
      } while (lVar9 != 0);
    }
    plVar13 = (long *)*param_3;
    aiStack_c4[2] = 0;
    aiStack_c4[3] = 0;
    aiStack_c4[0] = 0;
    aiStack_c4[1] = 0;
    aiStack_c4[4] = 0;
    uStack_c8 = (uVar2 + iVar18) - 1;
    if (0 < (int)uStack_c8) {
      uVar11 = 0;
      iVar12 = -iVar18;
      piVar7 = (int *)(plVar17[2] + lVar1 * -4 + 0xc);
      do {
        iVar12 = iVar12 + 1;
        if ((long)uVar11 < lVar1) {
          if ((long)uVar11 < lVar5) {
            piVar10 = piVar14 + uVar11;
            goto LAB_109c36800;
          }
          iVar8 = -1;
        }
        else {
          piVar10 = piVar7;
          if ((long)(iVar21 + iVar18) <= (long)uVar11) {
            piVar10 = piVar14 + iVar12;
          }
LAB_109c36800:
          iVar8 = *piVar10;
        }
        aiStack_c4[uVar11] = iVar8;
        uVar11 = uVar11 + 1;
        piVar7 = piVar7 + 1;
      } while (uStack_c8 != uVar11);
    }
    (*(code *)**(undefined8 **)*puVar6)(auStack_b0,(undefined8 *)*puVar6,&uStack_c8,1);
    func_0x000109c18360(plVar13,auStack_b0);
    FUN_109c180ec(auStack_b0);
    lVar22 = *(long *)(*plVar17 + 0x40);
    lVar5 = plVar17[2];
    piVar7 = *(int **)(lVar5 + 0x40);
    lVar9 = *(long *)(*plVar13 + 0x40);
    uVar2 = *(uint *)(lVar5 + 8) & ((int)*(uint *)(lVar5 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar2) {
      uVar2 = 5;
    }
    uVar4 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar5 + 0xc,uVar2);
    if (iVar21 < *(int *)(lVar16 + 8)) {
      iVar21 = piVar14[lVar1];
    }
    else {
      iVar21 = -1;
    }
    if (0 < (int)uVar20) {
      uVar11 = 0;
      uVar15 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
      iVar18 = (int)uVar19;
      do {
        if (0 < (int)uVar4) {
          piVar14 = piVar7;
          lVar16 = lVar9;
          uVar19 = (ulong)uVar4;
          do {
            if (iVar18 != 0) {
              _memmove(lVar16,lVar22 + (long)((*piVar14 + (int)uVar11 * iVar21) * iVar18) * 4,uVar15
                      );
            }
            piVar14 = piVar14 + 1;
            lVar16 = lVar16 + uVar15;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + (long)(int)uVar4 * (long)iVar18 * 4;
      } while (uVar11 != uVar20);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109c36980:
  FUN_109c129d4(&uStack_c8);
  FUN_10928a5e0(auStack_b0,&UNK_10f5a3e0d,&uStack_c8);
  func_0x000105687ee0(auStack_b0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c369a8);
  (*pcVar3)();
}



/* Entry: 109c369f8; end: 109c36af3;  */

undefined8 * FUN_109c369f8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cd68;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a45f6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c36af4; end: 109c36b47;  */

void FUN_109c36af4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b2cd68;
  puStack_28 = param_1 + 0x15;
  func_0x000109c205a8(&puStack_28);
  FUN_10959b818(param_1 + 0x13);
  FUN_109c21610(param_1);
  return;
}



/* Entry: 109c36b48; end: 109c36b4b;  */

void FUN_109c36b48(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b2cd68;
  puStack_28 = param_1 + 0x15;
  func_0x000109c205a8(&puStack_28);
  FUN_10959b818(param_1 + 0x13);
  FUN_109c21610(param_1);
  return;
}



/* Entry: 109c36b4c; end: 109c36b5f;  */

void FUN_109c36b4c(void)

{
  FUN_109c36af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c36b60; end: 109c36eeb;  */

long ** FUN_109c36b60(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  long lVar11;
  undefined4 uVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  undefined4 uVar18;
  long **pplStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  long alStack_108 [3];
  undefined8 ***pppuStack_f0;
  undefined1 uStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)*param_2;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uVar3 = *(uint *)(*plVar14 + 8);
  if ((uVar3 == 0) || (_memcpy(&uStack_88,*plVar14 + 0xc,(long)(int)uVar3 << 2), (int)uVar3 < 1)) {
    uVar12 = 0xffffffff;
LAB_109c36bf0:
    uVar18 = 0xffffffff;
    uVar16 = 0xffffffff;
  }
  else {
    uVar12 = (undefined4)uStack_88;
    uVar16 = uStack_88._4_4_;
    if (uVar3 < 3) {
      if (uVar3 == 1) goto LAB_109c36bf0;
      uVar18 = 0xffffffff;
    }
    else {
      uVar18 = (undefined4)uStack_80;
      if (uVar3 != 3) {
        iVar15 = uStack_80._4_4_;
        goto LAB_109c36bf8;
      }
    }
  }
  iVar15 = -1;
LAB_109c36bf8:
  iVar2 = *(int *)(param_1 + 0x90);
  FUN_109c208d4(alStack_108,(long)iVar2);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar15 / iVar2;
  }
  uStack_120 = 4;
  uStack_10c = 0;
  uStack_11c = uVar12;
  uStack_118 = uVar16;
  uStack_114 = uVar18;
  iStack_110 = iVar4;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar17 = 0;
    do {
      uStack_138 = 0;
      uStack_140 = 4;
      iStack_130 = iVar4 * (int)lVar17;
      uStack_12c = 0;
      FUN_109c16e90(&plStack_d0,*plVar14,&uStack_140,&uStack_120,param_1 + 0x68);
      FUN_109c18570(&puStack_150,&plStack_d0);
      FUN_109c180ec(&plStack_d0);
      plVar13 = (long *)(*(long *)(param_1 + 0xa8) + lVar17 * 0x10);
      plVar8 = (long *)(*plVar13 + 0x68);
      if (*plVar8 == 0) {
        FUN_109c36eec(plVar8,param_1 + 0x68);
      }
      plVar8 = plStack_148;
      puVar7 = puStack_150;
      plStack_d0 = (long *)0x0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      plVar13 = (long *)*plVar13;
      puStack_e0 = puStack_150;
      plStack_d8 = plStack_148;
      puStack_150 = (long *)0x0;
      plStack_148 = (long *)0x0;
      ppuStack_160 = (undefined8 **)0x0;
      ppuStack_158 = (undefined8 **)0x0;
      pplStack_168 = (long **)0x0;
      uStack_e8 = 0;
      pplVar9 = (long **)0x10;
      pppuStack_f0 = &pplStack_168;
      __Znwm();
      ppuStack_160 = pplVar9 + 2;
      *pplVar9 = puVar7;
      pplVar9[1] = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pplStack_168 = pplVar9;
      ppuStack_158 = ppuStack_160;
      (**(code **)(*plVar13 + 0x10))(plVar13,&pplStack_168,&plStack_d0);
      pppuStack_f0 = &pplStack_168;
      FUN_109c2070c(&pppuStack_f0);
      if (plVar8 != (long *)0x0) {
        plVar13 = plVar8 + 1;
        do {
          lVar11 = *plVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      FUN_109c1e9b8(alStack_108[0] + lVar17 * 0x10,plStack_d0);
      pplStack_168 = &plStack_d0;
      FUN_109c2070c(&pplStack_168);
      plVar13 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar8 = plStack_148 + 1;
        do {
          lVar11 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x90));
  }
  FUN_109c182f4(param_3,1);
  FUN_109c14900(&plStack_d0,0x3f800000,alStack_108,3,param_1 + 0x68,0);
  pplVar9 = &plStack_d0;
  func_0x000109c18360(*param_3);
  FUN_109c180ec(&plStack_d0);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar14 + 0x3c);
  plStack_d0 = alStack_108;
  pplVar10 = &plStack_d0;
  FUN_109c2070c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_109c180ec(&plStack_d0);
    plStack_d0 = alStack_108;
    FUN_109c2070c(&plStack_d0);
    __Unwind_Resume();
    plVar13 = pplVar9[1];
    plVar14 = *pplVar9;
    if (pplVar9[1] != (long *)0x0) {
      plVar8 = pplVar9[1] + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = pplVar10[1];
    pplVar10[1] = plVar13;
    *pplVar10 = plVar14;
    if (plVar8 != (long *)0x0) {
      plVar14 = plVar8 + 1;
      do {
        lVar17 = *plVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return pplVar10;
  }
  return pplVar10;
}



/* Entry: 109c36eec; end: 109c36f67;  */

undefined8 * FUN_109c36eec(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 109c36f68; end: 109c3703f;  */

undefined8 * FUN_109c36f68(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cda8;
  param_1[0x12] = 1;
  func_0x000107c31940(auStack_38,&UNK_10f5a4600);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c37040; end: 109c37043;  */

undefined8 * FUN_109c37040(undefined8 *param_1)

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



/* Entry: 109c37044; end: 109c37057;  */

void FUN_109c37044(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c37058; end: 109c376df;  */

long * FUN_109c37058(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 *puStack_198;
  int iStack_18c;
  long lStack_188;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  long lStack_170;
  int iStack_164;
  long *plStack_160;
  int iStack_154;
  long lStack_150;
  long *plStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int aiStack_128 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = (long *)*param_2;
  if ((*(int *)(*plVar16 + 0x3c) == 0) && (*(int *)(plVar16[2] + 0x3c) == 0)) {
    plStack_160 = plVar16;
    if (*(int *)(plVar16[2] + 0x18) != 2) goto LAB_109c37644;
    FUN_109c182f4(param_3,1);
    if (*(int *)(param_1 + 0x90) != 1) goto LAB_109c37650;
    if (*(int *)(param_1 + 0x94) == 0) {
      lVar20 = *plStack_160;
      aiStack_128[0] = 0;
      aiStack_128[1] = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      if ((int *)(lVar20 + 8U) != aiStack_128) {
        iVar9 = *(int *)(lVar20 + 8U);
        if (iVar9 == 0) {
          uVar12 = 0;
        }
        else {
          _memmove((ulong)aiStack_128 | 4,lVar20 + 0xc,(long)iVar9 << 2);
          uVar12 = *(undefined4 *)(lVar20 + 8);
        }
        aiStack_128[0] = uVar12;
      }
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      iVar9 = *(int *)(plStack_160[2] + 8);
      if (iVar9 == 0) {
        uStack_120 = 0;
      }
      else {
        _memcpy(&uStack_c8,plStack_160[2] + 0xc,(long)iVar9 << 2);
        uStack_120 = CONCAT44(uStack_c0,uStack_c4);
      }
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                (&uStack_110,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_128,1);
      FUN_109c18570(&lStack_150,&uStack_110);
      FUN_109c180ec(&uStack_110);
      uVar23 = *(undefined8 *)(lStack_150 + 0x40);
      bVar5 = *(byte *)(lStack_150 + 0x48);
      uVar4 = *(uint *)(lStack_150 + 8) & ((int)*(uint *)(lStack_150 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar4) {
        uVar4 = 5;
      }
      uStack_110 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lStack_150 + 0xc,uVar4);
      if (bVar5 < 9) {
        uStack_10c = *(undefined4 *)(&UNK_10e03a190 + (ulong)bVar5 * 4);
      }
      else {
        uStack_10c = 4;
      }
      iVar9 = 0xf57499d;
      FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_110,2);
      _bzero(uVar23,(long)iVar9);
      lVar20 = *plStack_160;
      iStack_18c = *(int *)(lVar20 + 0xc);
      iStack_164 = *(int *)(lVar20 + 0x10);
      iStack_178 = *(int *)(lStack_150 + 0x10);
      iVar26 = *(int *)(lStack_150 + 0x14);
      iVar9 = *(int *)(lVar20 + 0x14);
      iStack_13c = *(int *)(lVar20 + 0x18);
      lVar24 = (long)iStack_13c;
      lVar21 = *(long *)(plStack_160[2] + 0x40);
      lVar20 = *(long *)(lStack_150 + 0x40);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_140 = 1;
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
      (**(code **)*puVar10)(&uStack_110,puVar10,&uStack_140,1);
      lVar25 = CONCAT44(uStack_10c,uStack_110);
      uVar23 = *(undefined8 *)(lVar25 + 0x40);
      bVar5 = *(byte *)(lVar25 + 0x48);
      uVar4 = *(uint *)(lVar25 + 8) & ((int)*(uint *)(lVar25 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar4) {
        uVar4 = 5;
      }
      uVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar25 + 0xc,uVar4);
      uStack_140 = uVar12;
      if (bVar5 < 9) {
        iStack_13c = *(int *)(&UNK_10e03a190 + (ulong)bVar5 * 4);
      }
      else {
        iStack_13c = 4;
      }
      iVar27 = 0xf57499d;
      FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_140,2);
      puStack_198 = param_3;
      _bzero(uVar23,(long)iVar27);
      plVar16 = plStack_160;
      if (0 < iStack_18c) {
        iVar27 = 0;
        iStack_154 = 0;
        lVar25 = *(long *)(CONCAT44(uStack_10c,uStack_110) + 0x40);
        iVar8 = iStack_164 + -1;
        lStack_188 = lVar21 + 4;
        lStack_170 = lVar24 << 2;
        iVar19 = iStack_164;
        iStack_17c = iVar26;
        do {
          if (0 < iStack_178) {
            iVar13 = 0;
            do {
              iStack_174 = iVar13;
              if (0 < iVar26) {
                pfVar22 = (float *)(lStack_188 + (long)iVar27 * 4);
                do {
                  fVar28 = (pfVar22[-1] + 1.0) * 0.5 * (float)(iVar9 + -1);
                  fVar29 = (*pfVar22 + 1.0) * 0.5 * (float)iVar8;
                  iVar15 = (int)fVar28;
                  iVar13 = (int)fVar29;
                  lVar21 = lVar25;
                  lVar18 = lVar25;
                  lVar14 = lVar25;
                  lVar17 = lVar25;
                  if (iVar15 < 0) {
                    if (iVar15 == -1) goto LAB_109c373e8;
                  }
                  else {
                    if ((iVar13 < iVar19 && iVar15 < iVar9) && (-1 < iVar13)) {
                      lVar17 = *plVar16;
                      lVar17 = *(long *)(lVar17 + 0x40) +
                               (long)((iVar15 + (iVar13 + *(int *)(lVar17 + 0x10) * iStack_154) *
                                                *(int *)(lVar17 + 0x14)) * *(int *)(lVar17 + 0x18))
                               * 4;
                    }
LAB_109c373e8:
                    iVar1 = iVar15 + 1;
                    if (((iVar1 < iVar9) && (-1 < iVar13)) && (iVar13 < iVar19)) {
                      lVar21 = *plVar16;
                      lVar21 = *(long *)(lVar21 + 0x40) +
                               (long)((iVar1 + (iVar13 + *(int *)(lVar21 + 0x10) * iStack_154) *
                                               *(int *)(lVar21 + 0x14)) * *(int *)(lVar21 + 0x18)) *
                               4;
                    }
                    iVar2 = iVar13 + 1;
                    if ((-1 < iVar15) && ((iVar2 < iVar19 && iVar15 < iVar9) && -2 < iVar13)) {
                      lVar18 = *plVar16;
                      lVar18 = *(long *)(lVar18 + 0x40) +
                               (long)((iVar15 + (iVar2 + *(int *)(lVar18 + 0x10) * iStack_154) *
                                                *(int *)(lVar18 + 0x14)) * *(int *)(lVar18 + 0x18))
                               * 4;
                    }
                    if ((iVar1 < iVar9 && -2 < iVar13) && iVar2 < iVar19) {
                      lVar14 = *plVar16;
                      lVar14 = *(long *)(lVar14 + 0x40) +
                               (long)((iVar1 + (iVar2 + *(int *)(lVar14 + 0x10) * iStack_154) *
                                               *(int *)(lVar14 + 0x14)) * *(int *)(lVar14 + 0x18)) *
                               4;
                    }
                  }
                  fVar28 = fVar28 - (float)(int)(float)(int)fVar28;
                  fVar29 = fVar29 - (float)(int)(float)(int)fVar29;
                  _cblas_saxpy(fVar28 * (1.0 - fVar29),lVar24,lVar21,1,lVar20,1);
                  _cblas_saxpy(fVar28 * fVar29,lVar24,lVar14,1,lVar20,1);
                  _cblas_saxpy((1.0 - fVar28) * (1.0 - fVar29),lVar24,lVar17,1,lVar20,1);
                  _cblas_saxpy((1.0 - fVar28) * fVar29,lVar24,lVar18,1,lVar20,1);
                  pfVar22 = pfVar22 + 2;
                  iVar27 = iVar27 + 2;
                  lVar20 = lVar20 + lStack_170;
                  iVar26 = iVar26 + -1;
                  plVar16 = plStack_160;
                  iVar19 = iStack_164;
                } while (iVar26 != 0);
              }
              iVar13 = iStack_174 + 1;
              iVar26 = iStack_17c;
            } while (iVar13 != iStack_178);
          }
          iStack_154 = iStack_154 + 1;
        } while (iStack_154 != iStack_18c);
      }
      *(undefined4 *)(lStack_150 + 0x3c) = *(undefined4 *)(*plVar16 + 0x3c);
      FUN_109c180ec(&uStack_110);
      plVar16 = (long *)*puStack_198;
      FUN_109c1e9b8(plVar16,&lStack_150);
      plVar11 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar3 = plStack_148 + 1;
        do {
          lVar20 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar16 = plVar11;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
        return plVar16;
      }
      goto LAB_109c37668;
    }
  }
  else {
    func_0x000105688514(&UNK_10f5a460f);
LAB_109c37644:
    func_0x000105688514(&UNK_10f5a4650);
LAB_109c37650:
    func_0x000105688514(&UNK_10f5a4681);
  }
  plVar16 = (long *)&UNK_10f5a46d9;
  func_0x000105688514();
LAB_109c37668:
  ___stack_chk_fail();
  if (plStack_148 != (long *)0x0) {
    plVar11 = plStack_148 + 1;
    do {
      lVar20 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  plVar11 = plVar16;
  __Unwind_Resume();
  plStack_1c0 = plStack_148;
  pcStack_1a8 = FUN_109c376e0;
  *(undefined8 *)((long)plVar11 + 0x59) = 0;
  *(undefined8 *)((long)plVar11 + 0x51) = 0;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  plVar11[1] = 0;
  *(undefined2 *)((long)plVar11 + 0x61) = 1;
  *(undefined1 *)((long)plVar11 + 99) = 0;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = 0x3f800000;
  *(undefined1 *)(plVar11 + 0x10) = 0;
  *(undefined1 *)((long)plVar11 + 0x84) = 0;
  *(undefined1 *)(plVar11 + 0x11) = 0;
  *(undefined1 *)((long)plVar11 + 0x8c) = 0;
  plVar11[0x12] = 0x100000001;
  plVar11[0x14] = 0;
  plVar11[0x13] = 0;
  plVar11[0x16] = 0;
  plVar11[0x15] = 0;
  plVar11[0x18] = 0;
  plVar11[0x17] = 0;
  *(undefined1 *)(plVar11 + 0x19) = 0;
  *(undefined1 *)(plVar11 + 0x20) = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1f] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1a] = 0;
  *plVar11 = (long)&PTR_FUN_110b2cde8;
  plStack_1b8 = plVar16;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x000107c31940(auStack_1d8,&UNK_10f5a472a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11 + 6,auStack_1d8);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  return plVar11;
}



/* Entry: 109c376e0; end: 109c377d3;  */

undefined8 * FUN_109c376e0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cde8;
  func_0x000107c31940(auStack_38,&UNK_10f5a472a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c377d4; end: 109c377d7;  */

void FUN_109c377d4(undefined8 *param_1)

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



/* Entry: 109c377d8; end: 109c377eb;  */

void FUN_109c377d8(void)

{
  FUN_109c5dbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c377ec; end: 109c37ccb;  */

void FUN_109c377ec(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  byte bStack_290;
  int iStack_28c;
  undefined1 auStack_260 [88];
  undefined4 uStack_208;
  int iStack_204;
  undefined4 uStack_200;
  undefined8 uStack_1fc;
  undefined4 uStack_1f4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined1 auStack_180 [88];
  long alStack_128 [9];
  undefined8 auStack_e0 [9];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = (long *)*param_2;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  iVar24 = *(int *)(*plVar21 + 8);
  if (iVar24 == 0) {
    iVar23 = 0;
    iVar24 = 0;
  }
  else {
    _memcpy(&uStack_98,*plVar21 + 0xc,(long)iVar24 << 2);
    iVar24 = (int)uStack_98;
    iVar23 = (int)((ulong)uStack_98 >> 0x20);
  }
  uStack_18c = *(undefined4 *)(param_1 + 0x94);
  uStack_198 = 4;
  uStack_188 = 1;
  iStack_194 = iVar24;
  iStack_190 = iVar23;
  FUN_109c182f4(param_3,1);
  (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
            (auStack_180,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_198,1);
  func_0x000109c18360(*param_3,auStack_180);
  FUN_109c180ec(auStack_180);
  uStack_1a4 = 0;
  uStack_19c = 0;
  uStack_1b0 = 2;
  iVar2 = *(int *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x94);
  lVar20 = *(long *)(*plVar21 + 0x40);
  uVar22 = *(ulong *)(plVar21[2] + 0x40);
  uVar26 = *(ulong *)(*(long *)*param_3 + 0x40);
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
  iStack_1ac = iVar23;
  iStack_1a8 = iVar3;
  (**(code **)*puVar10)(auStack_e0,puVar10,&uStack_1b0,1);
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
  puVar11 = &uStack_1b0;
  puVar12 = (undefined4 *)0x1;
  (**(code **)*puVar10)(alStack_128,puVar10,puVar11,1);
  if (0 < iVar24) {
    iVar25 = 0;
    uVar4 = iVar3 * iVar23;
    auVar29 = NEON_fmov(0x3f800000,4);
    uVar27 = uVar26;
    do {
      uStack_200 = *(undefined4 *)(param_1 + 0x90);
      uStack_1fc = 0;
      uStack_1f4 = 0;
      uStack_208 = 2;
      iStack_204 = iVar23;
      FUN_109c0ffb0(auStack_180,&uStack_208,lVar20,0);
      FUN_109c0ffb0(&uStack_208,&uStack_1b0,uVar27,0);
      FUN_109c0ffb0(auStack_260,&uStack_1b0,uVar22,0);
      if (*(char *)(param_1 + 200) == '\x01') {
        uVar13 = **(undefined8 **)(param_1 + 0xd0);
      }
      else {
        uVar13 = 0;
      }
      FUN_109c37ccc(auStack_180,**(undefined8 **)(param_1 + 0x98),auStack_260,
                    **(undefined8 **)(param_1 + 0xb0),auStack_e0[0],alStack_128[0],
                    *(undefined8 *)(param_1 + 0x68),uVar13);
      if (*(char *)(param_1 + 200) == '\x01') {
        uVar13 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10);
      }
      else {
        uVar13 = 0;
      }
      FUN_109c37ccc(auStack_180,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10),auStack_260,
                    *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10),auStack_e0[0],&uStack_208,
                    *(undefined8 *)(param_1 + 0x68),uVar13);
      func_0x000109c2e1ac(auStack_260,0xffffffff,&uStack_208,*(undefined8 *)(param_1 + 0x68));
      if (*(char *)(param_1 + 200) == '\x01') {
        param_8 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x20);
      }
      else {
        param_8 = 0;
      }
      puVar11 = *(undefined4 **)(*(long *)(param_1 + 0x98) + 0x20);
      param_4 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x20);
      param_7 = *(undefined8 *)(param_1 + 0x68);
      bStack_290 = iVar23 == 1;
      iStack_28c = *(int *)(*(long *)(param_1 + 0xe8) + 4);
      puVar12 = &uStack_208;
      param_6 = &uStack_208;
      param_5 = auStack_e0[0];
      FUN_109c37ccc(auStack_180,puVar11,puVar12,param_4,auStack_e0[0],param_6,param_7);
      uVar14 = (ulong)*(uint *)(param_1 + 0x94) * (long)iVar23;
      uVar15 = uVar14;
      if (((uVar26 & 3) == 0) &&
         (uVar15 = (ulong)-((uint)uVar27 >> 2) & 3, (long)uVar14 <= (long)uVar15)) {
        uVar15 = uVar14;
      }
      lVar16 = *(long *)(alStack_128[0] + 0x40);
      uVar5 = uVar14 - uVar15;
      uVar1 = uVar5 + 3;
      if ((long)uVar15 <= (long)uVar14) {
        uVar1 = uVar5;
      }
      if (0 < (long)uVar15) {
        uVar19 = 0;
        do {
          fVar28 = *(float *)(lVar16 + uVar19 * 4);
          *(float *)(uVar27 + uVar19 * 4) =
               (1.0 - fVar28) * *(float *)(uVar27 + uVar19 * 4) +
               fVar28 * *(float *)(uVar22 + uVar19 * 4);
          uVar19 = uVar19 + 1;
        } while (uVar15 != uVar19);
      }
      lVar17 = (uVar1 & 0xfffffffffffffffc) + uVar15;
      if (3 < (long)uVar5) {
        lVar18 = uVar15 << 2;
        do {
          pfVar6 = (float *)(lVar16 + lVar18);
          fVar28 = *pfVar6;
          fVar8 = pfVar6[1];
          fVar9 = pfVar6[3];
          uVar31 = ((undefined8 *)(uVar27 + lVar18))[1];
          uVar13 = *(undefined8 *)(uVar27 + lVar18);
          uVar32 = ((undefined8 *)(uVar22 + lVar18))[1];
          uVar30 = *(undefined8 *)(uVar22 + lVar18);
          pfVar7 = (float *)(uVar27 + lVar18);
          pfVar7[2] = (auVar29._8_4_ - pfVar6[2]) * (float)uVar31 + pfVar6[2] * (float)uVar32;
          pfVar7[3] = (auVar29._12_4_ - fVar9) * (float)((ulong)uVar31 >> 0x20) +
                      fVar9 * (float)((ulong)uVar32 >> 0x20);
          *pfVar7 = (auVar29._0_4_ - fVar28) * (float)uVar13 + fVar28 * (float)uVar30;
          pfVar7[1] = (auVar29._4_4_ - fVar8) * (float)((ulong)uVar13 >> 0x20) +
                      fVar8 * (float)((ulong)uVar30 >> 0x20);
          uVar15 = uVar15 + 4;
          lVar18 = lVar18 + 0x10;
        } while ((long)uVar15 < lVar17);
      }
      if (lVar17 < (long)uVar14) {
        do {
          fVar28 = *(float *)(lVar16 + lVar17 * 4);
          *(float *)(uVar27 + lVar17 * 4) =
               (1.0 - fVar28) * *(float *)(uVar27 + lVar17 * 4) +
               fVar28 * *(float *)(uVar22 + lVar17 * 4);
          lVar17 = lVar17 + 1;
        } while (uVar14 - lVar17 != 0);
      }
      lVar20 = lVar20 + (long)(iVar2 * iVar23) * 4;
      FUN_109c10e9c(auStack_260);
      FUN_109c10e9c(&uStack_208);
      FUN_109c10e9c(auStack_180);
      iVar25 = iVar25 + 1;
      uVar22 = uVar27;
      uVar27 = uVar27 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
    } while (iVar25 != iVar24);
  }
  FUN_109c180ec(alStack_128);
  puVar10 = auStack_e0;
  FUN_109c180ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_e0);
    __Unwind_Resume(puVar10);
    FUN_109c2176c(puVar12,param_4,0x65,0x6f,0x70,param_5,0xffffffff,param_7,param_8,0x100);
    uVar13 = param_5;
    if (bStack_290 == 0) {
      uVar13 = 0;
    }
    FUN_109c2176c(puVar10,puVar11,0x65,0x6f,0x70,param_6,0xffffffff,param_7,uVar13,0x100);
    if ((bStack_290 & 1) == 0) {
      FUN_109c21f4c(param_5,0xffffffff,param_6,param_7);
    }
    if (iStack_28c == 2) {
      FUN_109c19038(param_6);
    }
    else if (iStack_28c == 1) {
      FUN_109c37e0c(param_6);
    }
    else if (iStack_28c == 0) {
      FUN_109c23d78(param_6);
    }
    return;
  }
  return;
}



/* Entry: 109c37ccc; end: 109c37e0b;  */

void FUN_109c37ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9,int param_10)

{
  undefined8 uVar1;
  
  FUN_109c2176c(param_3,param_4,0x65,0x6f,0x70,param_5,0xffffffff,param_7,param_8,0x100);
  uVar1 = param_5;
  if (param_9 == 0) {
    uVar1 = 0;
  }
  FUN_109c2176c(param_1,param_2,0x65,0x6f,0x70,param_6,0xffffffff,param_7,uVar1,0x100);
  if ((param_9 & 1) == 0) {
    FUN_109c21f4c(param_5,0xffffffff,param_6,param_7);
  }
  if (param_10 == 2) {
    FUN_109c19038(param_6);
  }
  else if (param_10 == 1) {
    FUN_109c37e0c(param_6);
  }
  else if (param_10 == 0) {
    FUN_109c23d78(0,param_6);
  }
  return;
}



/* Entry: 109c37e0c; end: 109c37eb7;  */

void FUN_109c37e0c(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *(uint *)(param_1 + 8) & ((int)*(uint *)(param_1 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = 0xbf800000;
  uStack_34 = 0x40000000;
  _vDSP_vsmul(uVar3,1,&uStack_34,uVar3,1,(long)iVar2);
  FUN_109c19038(param_1);
  _vDSP_vsmsa(uVar3,1,&uStack_34,&uStack_38,uVar3,1,(long)iVar2);
  return;
}



/* Entry: 109c37eb8; end: 109c37fbb;  */

undefined8 * FUN_109c37eb8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2ce28;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a472e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c37fbc; end: 109c38007;  */

undefined8 * FUN_109c37fbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2ce28;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
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



/* Entry: 109c38008; end: 109c3800b;  */

undefined8 * FUN_109c38008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2ce28;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
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



/* Entry: 109c3800c; end: 109c3801f;  */

void FUN_109c3800c(void)

{
  FUN_109c37fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c38020; end: 109c38547;  */

void FUN_109c38020(long param_1,undefined8 *param_2,long *param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  long lVar12;
  uint *puVar13;
  undefined *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar14;
  ulong unaff_x23;
  undefined **unaff_x24;
  long *unaff_x25;
  long *plVar15;
  ulong unaff_x27;
  undefined8 uVar16;
  undefined *unaff_x28;
  float fVar17;
  float fVar18;
  float fStack_268;
  int iStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  ulong uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined **ppuStack_230;
  ulong uStack_228;
  long lStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined ***pppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  long *plStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  int iStack_1cc;
  undefined1 auStack_1c8 [88];
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined4 uStack_134;
  float *pfStack_130;
  undefined1 uStack_128;
  undefined8 uStack_124;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 auStack_c8 [3];
  undefined1 uStack_b0;
  undefined4 uStack_ac;
  float *pfStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)*param_2;
  if (*(int *)(*plVar15 + 0x3c) == 0) {
    FUN_109c182f4(param_3,1);
    FUN_109c1bed0(&ppuStack_e8,**(undefined8 **)(param_1 + 0x68),*plVar15);
    func_0x000109c18360(*param_3,&ppuStack_e8);
    FUN_109c180ec(&ppuStack_e8);
    unaff_x23 = 1;
    for (piVar11 = *(int **)(param_1 + 0xb0); iVar14 = (int)unaff_x23,
        piVar11 != *(int **)(param_1 + 0xb8); piVar11 = piVar11 + 1) {
      unaff_x23 = (ulong)(uint)(*piVar11 * iVar14);
    }
    uVar1 = *(uint *)(*plVar15 + 8);
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    iVar4 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,*plVar15 + 0xc,uVar1);
    uVar1 = 0;
    if (iVar14 != 0) {
      uVar1 = iVar4 / iVar14;
    }
    unaff_x27 = (ulong)uVar1;
    uStack_100._0_4_ = 4;
    uStack_f8 = 1;
    uStack_f0 = 1;
    lVar12 = *plVar15;
    puVar13 = (uint *)(lVar12 + 8);
    uVar9 = *puVar13 & ((int)*puVar13 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar9) {
      uVar9 = 5;
    }
    iVar4 = 0xf5749aa;
    uStack_100._4_4_ = uVar1;
    iStack_f4 = iVar14;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar12 + 0xc,uVar9);
    unaff_x24 = (undefined **)&uStack_100;
    uVar9 = (uint)uStack_100 & ((int)(uint)uStack_100 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar9) {
      uVar9 = 5;
    }
    iVar14 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_100 + 4,uVar9);
    ppuStack_e8 = (undefined **)&UNK_10f574cf1;
    uStack_e0 = 0xf;
    uStack_d8 = CONCAT71(uStack_d8._1_7_,iVar4 == iVar14);
    puStack_d0 = &UNK_10f574d01;
    auStack_c8[0] = 0xe;
    FUN_10959b640(&ppuStack_e8);
    uVar9 = (uint)uStack_100;
    if ((puVar13 != (uint *)&uStack_100) && (iVar4 == iVar14)) {
      if ((uint)uStack_100 != 0) {
        _memmove(lVar12 + 0xc,(long)&uStack_100 + 4,(long)(int)(uint)uStack_100 << 2);
      }
      *puVar13 = uVar9;
    }
    unaff_x21 = *plVar15;
    piVar11 = (int *)(unaff_x21 + 8);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    if (piVar11 != (int *)&uStack_118) {
      if (*piVar11 == 0) {
        uVar9 = 0;
      }
      else {
        _memmove((ulong)&uStack_118 | 4,unaff_x21 + 0xc,(long)*piVar11 << 2);
        uVar9 = *(uint *)(unaff_x21 + 8);
      }
      uStack_118 = (ulong)uVar9;
    }
    iStack_1cc = 1;
    uStack_118 = CONCAT44(1,(int)uStack_118);
    iVar14 = *(int *)(unaff_x21 + 0x3c);
    if (iVar14 == 0) {
      iStack_1cc = *piVar11 + -1;
    }
    unaff_x22 = *(long *)*param_3;
    unaff_x25 = param_3;
    if (0 < (int)uVar1) {
      lVar12 = *(long *)(unaff_x22 + 0x40);
      unaff_x24 = &PTR_FUN_110b2bd90;
      uStack_1d8 = -(unaff_x23 >> 0x1f) & 0xfffffffc00000000 | unaff_x23 << 2;
      unaff_x25 = (long *)&UNK_10f5a33f8;
      plStack_1e8 = plVar15;
      plStack_1e0 = param_3;
      do {
        ppuStack_e8 = &PTR_FUN_110b2bd90;
        uStack_d8 = 0;
        puStack_d0 = (undefined *)0x0;
        uStack_e0 = 0;
        func_0x000107c31940(auStack_c8,&UNK_10f5a33f8);
        uStack_b0 = 0;
        uStack_ac = 0;
        pfStack_a8 = (float *)0x0;
        uStack_a0 = 1;
        uStack_9c = 0x3f800000;
        unaff_x23 = 0x3f800000;
        ppuStack_170 = &PTR_FUN_110b2bd90;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_168 = 0;
        func_0x000107c31940(auStack_150,&UNK_10f5a33f8);
        uStack_138 = 0;
        uStack_134 = 0;
        pfStack_130 = (float *)0x0;
        uStack_128 = 1;
        uStack_124 = 0x3f800000;
        FUN_109c0ffb0(auStack_1c8,&uStack_118,lVar12,0);
        param_5 = *(undefined8 *)(param_1 + 0x68);
        FUN_109c38548(auStack_1c8,iStack_1cc,&ppuStack_e8,&ppuStack_170);
        fVar17 = *pfStack_130;
        fVar18 = *(float *)(param_1 + 200);
        FUN_109c3870c(-*pfStack_a8,auStack_1c8);
        FUN_109c18fcc(1.0 / SQRT(fVar17 + fVar18),auStack_1c8);
        lVar6 = *(long *)(param_1 + 0x90);
        if (lVar6 == 0) {
LAB_109c3837c:
          if (*(long *)(param_1 + 0xa0) != 0) {
            FUN_109c21f4c(*(long *)(param_1 + 0xa0),0xffffffff,auStack_1c8,
                          *(undefined8 *)(param_1 + 0x68));
          }
        }
        else {
          if (*(long *)(param_1 + 0xa0) == 0) {
            func_0x000109c2e1ac(lVar6,0xffffffff,auStack_1c8,*(undefined8 *)(param_1 + 0x68));
            goto LAB_109c3837c;
          }
          FUN_109c25b6c(lVar6,*(long *)(param_1 + 0xa0),0xffffffff,auStack_1c8);
        }
        FUN_109c10e9c(auStack_1c8);
        FUN_109c10e9c(&ppuStack_170);
        FUN_109c10e9c(&ppuStack_e8);
        lVar12 = lVar12 + uStack_1d8;
        unaff_x27 = unaff_x27 - 1;
      } while (unaff_x27 != 0);
      unaff_x22 = *(long *)*plStack_1e0;
      unaff_x21 = *plStack_1e8;
      iVar14 = *(int *)(unaff_x21 + 0x3c);
      unaff_x27 = 0;
      plVar15 = unaff_x25;
    }
    unaff_x28 = &UNK_10f574cf1;
    *(int *)(unaff_x22 + 0x3c) = iVar14;
    uVar1 = *(uint *)(unaff_x21 + 8) & ((int)*(uint *)(unaff_x21 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    iVar4 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,unaff_x21 + 0xc,uVar1);
    uVar1 = *(uint *)(unaff_x22 + 8) & ((int)*(uint *)(unaff_x22 + 8) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar1) {
      uVar1 = 5;
    }
    param_4 = (ulong)uVar1;
    unaff_x20 = &UNK_10f5749aa;
    param_3 = (long *)(unaff_x22 + 0xc);
    iVar14 = 0x1a;
    FUN_109c60fbc();
    ppuStack_e8 = (undefined **)&UNK_10f574cf1;
    uStack_e0 = 0xf;
    uStack_d8 = CONCAT71(uStack_d8._1_7_,iVar4 == (int)unaff_x20);
    puStack_d0 = &UNK_10f574d01;
    auStack_c8[0] = 0xe;
    pppuVar7 = &ppuStack_e8;
    FUN_10959b640();
    if ((unaff_x21 != unaff_x22) && (iVar4 == (int)unaff_x20)) {
      uVar10 = 0;
      if (*(int *)(unaff_x22 + 8) != 0) {
        param_3 = (long *)((long)*(int *)(unaff_x22 + 8) << 2);
        pppuVar7 = (undefined ***)(unaff_x21 + 0xc);
        iVar14 = (int)unaff_x22 + 0xc;
        _memmove();
        uVar10 = *(undefined4 *)(unaff_x22 + 8);
      }
      *(undefined4 *)(unaff_x21 + 8) = uVar10;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return;
    }
  }
  else {
    pppuVar7 = (undefined ***)&UNK_10f5a4738;
    func_0x000105688514();
    iVar14 = (int)param_2;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&ppuStack_e8);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_1f8 = FUN_109c38548;
  uVar1 = *(uint *)(pppuVar8 + 1);
  iVar4 = uVar1 - 1;
  if (iVar14 != -1) {
    iVar4 = iVar14;
  }
  if (iVar4 < (int)uVar1) {
    iVar14 = *(int *)((long)pppuVar8 + (long)iVar4 * 4 + 0xc);
  }
  else {
    iVar14 = -1;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  puStack_250 = unaff_x28;
  uStack_248 = unaff_x27;
  plStack_240 = plVar15;
  plStack_238 = unaff_x25;
  ppuStack_230 = unaff_x24;
  uStack_228 = unaff_x23;
  lStack_220 = unaff_x22;
  lStack_218 = unaff_x21;
  puStack_210 = unaff_x20;
  pppuStack_208 = pppuVar7;
  puStack_200 = &stack0xfffffffffffffff0;
  fVar17 = 1.06145056e-29;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(undefined *)((long)pppuVar8 + 0xc),uVar1);
  uVar10 = 0x65;
  if (iVar4 == 1) {
    uVar10 = 0x66;
  }
  uStack_260 = 0;
  uStack_258 = 0;
  fStack_268 = 1.4013e-45;
  iVar3 = 0;
  if (iVar14 != 0) {
    iVar3 = (int)fVar17 / iVar14;
  }
  iStack_264 = iVar14;
  FUN_109c11d2c(param_3,&fStack_268,1);
  uStack_260 = 0;
  uStack_258 = 0;
  fStack_268 = 1.4013e-45;
  iStack_264 = iVar14;
  FUN_109c11d2c(param_4,&fStack_268,1);
  uVar16 = *(undefined8 *)(param_4 + 0x40);
  bVar2 = *(byte *)(param_4 + 0x48);
  uVar1 = *(uint *)(param_4 + 8) & ((int)*(uint *)(param_4 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  fVar17 = 1.06145056e-29;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_4 + 0xc,uVar1);
  fStack_268 = fVar17;
  if ((ulong)bVar2 < 9) {
    iStack_264 = *(int *)(&UNK_10e03a1dc + (ulong)bVar2 * 4);
  }
  else {
    iStack_264 = 4;
  }
  iVar5 = 0xf57499d;
  FUN_109c60fbc(&UNK_10f57499d,0xc,&fStack_268,2);
  _bzero(uVar16,(long)iVar5);
  FUN_109c38778(uVar10,iVar3,iVar14,pppuVar8[8],param_3[8],param_5);
  if (iVar4 == 1) {
    FUN_109c388f0();
  }
  else {
    FUN_109c389dc(pppuVar8[8],iVar3,iVar14,param_3,param_4);
  }
  fStack_268 = 1.0 / (float)iVar3;
  _vDSP_vsmul(*(undefined8 *)(param_4 + 0x40),1,&fStack_268,*(undefined8 *)(param_4 + 0x40),1,
              (long)iVar14);
  return;
}



/* Entry: 109c38548; end: 109c3870b;  */

void FUN_109c38548(long param_1,int param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  float fStack_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(uint *)(param_1 + 8);
  iVar1 = uVar2 - 1;
  if (param_2 != -1) {
    iVar1 = param_2;
  }
  if (iVar1 < (int)uVar2) {
    iVar8 = *(int *)(param_1 + (long)iVar1 * 4 + 0xc);
  }
  else {
    iVar8 = -1;
  }
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  fVar5 = 1.06145056e-29;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_1 + 0xc,uVar2);
  uVar7 = 0x65;
  if (iVar1 == 1) {
    uVar7 = 0x66;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  fStack_78 = 1.4013e-45;
  iVar4 = 0;
  if (iVar8 != 0) {
    iVar4 = (int)fVar5 / iVar8;
  }
  iStack_74 = iVar8;
  FUN_109c11d2c(param_3,&fStack_78,1);
  uStack_70 = 0;
  uStack_68 = 0;
  fStack_78 = 1.4013e-45;
  iStack_74 = iVar8;
  FUN_109c11d2c(param_4,&fStack_78,1);
  uVar9 = *(undefined8 *)(param_4 + 0x40);
  bVar3 = *(byte *)(param_4 + 0x48);
  uVar2 = *(uint *)(param_4 + 8) & ((int)*(uint *)(param_4 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  fVar5 = 1.06145056e-29;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_4 + 0xc,uVar2);
  fStack_78 = fVar5;
  if ((ulong)bVar3 < 9) {
    iStack_74 = *(int *)(&UNK_10e03a1dc + (ulong)bVar3 * 4);
  }
  else {
    iStack_74 = 4;
  }
  iVar6 = 0xf57499d;
  FUN_109c60fbc(&UNK_10f57499d,0xc,&fStack_78,2);
  _bzero(uVar9,(long)iVar6);
  FUN_109c38778(uVar7,iVar4,iVar8,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_3 + 0x40),
                param_5);
  if (iVar1 == 1) {
    FUN_109c388f0();
  }
  else {
    FUN_109c389dc(*(undefined8 *)(param_1 + 0x40),iVar4,iVar8,param_3,param_4);
  }
  fStack_78 = 1.0 / (float)iVar4;
  _vDSP_vsmul(*(undefined8 *)(param_4 + 0x40),1,&fStack_78,*(undefined8 *)(param_4 + 0x40),1,
              (long)iVar8);
  return;
}



/* Entry: 109c3870c; end: 109c38777;  */

void FUN_109c3870c(undefined4 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_24;
  
  uVar1 = *(uint *)(param_2 + 8) & ((int)*(uint *)(param_2 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  iVar2 = 0xf5749aa;
  uStack_24 = param_1;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,param_2 + 0xc,uVar1);
  _vDSP_vsadd(*(undefined8 *)(param_2 + 0x40),1,&uStack_24,*(undefined8 *)(param_2 + 0x40),1,
              (long)iVar2);
  return;
}



/* Entry: 109c38778; end: 109c388ef;  */

void FUN_109c38778(undefined8 param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5
                  ,long param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  float fStack_124;
  float fStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0;
  uStack_98 = 0;
  fStack_a8 = 1.4013e-45;
  iStack_a4 = param_2;
  if (param_6 == 0) {
    lVar7 = 0x58;
    __Znwm();
    FUN_109c1106c();
    pcStack_88 = FUN_109c180b4;
    ppuStack_80 = &PTR_DAT_110b2c028;
    lStack_90 = lVar7;
  }
  else {
    (**(code **)**(undefined8 **)(param_6 + 0x10))
              (&lStack_90,*(undefined8 **)(param_6 + 0x10),&fStack_a8,1);
  }
  lVar7 = lStack_90;
  fStack_a8 = 1.0 / (float)param_2;
  _vDSP_vfill(&fStack_a8,*(undefined8 *)(lStack_90 + 0x40),1,(long)param_2);
  uVar4 = 0x6f;
  uVar5 = 0x6f;
  lVar6 = 1;
  _cblas_sgemm(0x3f800000,0,param_1);
  plVar2 = &lStack_90;
  FUN_109c180ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __ZdlPv(lVar7);
    __Unwind_Resume(plVar2);
    if (0 < (int)uVar5) {
      lVar7 = *(long *)(param_3 + 0x40);
      lVar8 = (long)(int)uVar4;
      uVar10 = -(uVar4 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar4 & 0xffffffff) << 2;
      uVar1 = uVar10;
      if ((int)uVar4 < 0) {
        uVar1 = 0xffffffffffffffff;
      }
      uVar4 = (ulong)uVar5;
      pfVar9 = *(float **)(lVar6 + 0x40);
      do {
        uVar3 = uVar1;
        __Znam(uVar1);
        fStack_124 = -*pfVar9;
        _vDSP_vsadd(plVar2,1,&fStack_124,uVar3,1,lVar8);
        _vDSP_vsq(uVar3,1,uVar3,1,lVar8);
        _vDSP_sve(uVar3,1,lVar7,lVar8);
        __ZdaPv(uVar3);
        lVar7 = lVar7 + 4;
        plVar2 = (long *)((long)plVar2 + uVar10);
        uVar4 = uVar4 - 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar4 != 0);
    }
    return;
  }
  return;
}



/* Entry: 109c388f0; end: 109c389db;  */

void FUN_109c388f0(long param_1,ulong param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  float fStack_54;
  
  if (0 < (int)param_3) {
    lVar3 = *(long *)(param_5 + 0x40);
    lVar4 = (long)(int)param_2;
    uVar6 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
    uVar1 = uVar6;
    if ((int)param_2 < 0) {
      uVar1 = 0xffffffffffffffff;
    }
    uVar7 = (ulong)param_3;
    pfVar5 = *(float **)(param_4 + 0x40);
    do {
      uVar2 = uVar1;
      __Znam(uVar1);
      fStack_54 = -*pfVar5;
      _vDSP_vsadd(param_1,1,&fStack_54,uVar2,1,lVar4);
      _vDSP_vsq(uVar2,1,uVar2,1,lVar4);
      _vDSP_sve(uVar2,1,lVar3,lVar4);
      __ZdaPv(uVar2);
      lVar3 = lVar3 + 4;
      param_1 = param_1 + uVar6;
      uVar7 = uVar7 - 1;
      pfVar5 = pfVar5 + 1;
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 109c389dc; end: 109c38ab7;  */

void FUN_109c389dc(long param_1,int param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (0 < param_2) {
    uVar4 = *(undefined8 *)(param_4 + 0x40);
    uVar5 = *(undefined8 *)(param_5 + 0x40);
    iVar3 = (int)param_3;
    uVar6 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
    uVar1 = uVar6;
    if (iVar3 < 0) {
      uVar1 = 0xffffffffffffffff;
    }
    do {
      uVar2 = uVar1;
      __Znam(uVar1);
      _vDSP_vsub(uVar4,1,param_1,1,uVar2,1,(long)iVar3);
      _vDSP_vma(uVar2,1,uVar2,1,uVar5,1,uVar5,1,(long)iVar3);
      __ZdaPv(uVar2);
      param_1 = param_1 + uVar6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 109c38ab8; end: 109c38bab;  */

undefined8 * FUN_109c38ab8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2ce68;
  func_0x000107c31940(auStack_38,&UNK_10f5a4777);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c38bac; end: 109c38baf;  */

void FUN_109c38bac(undefined8 *param_1)

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



/* Entry: 109c38bb0; end: 109c38bc3;  */

void FUN_109c38bb0(void)

{
  FUN_109c5dbe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c38bc4; end: 109c38e0b;  */

long * FUN_109c38bc4(long *param_1,long *param_2,long *param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  float fVar49;
  int iVar50;
  float fVar51;
  int iVar52;
  float fVar53;
  int iVar54;
  float fVar55;
  int iVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 auStack_638 [2];
  char cStack_621;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  long *plStack_608;
  undefined1 **ppuStack_600;
  code *pcStack_5f8;
  undefined1 uStack_5f0;
  undefined4 uStack_5ec;
  int iStack_5dc;
  ulong uStack_5d8;
  long lStack_5d0;
  uint uStack_5c4;
  undefined8 uStack_5c0;
  float fStack_5b8;
  float fStack_5b4;
  undefined8 uStack_5b0;
  float fStack_5a8;
  float fStack_5a4;
  undefined8 uStack_5a0;
  float fStack_598;
  float fStack_594;
  undefined8 uStack_590;
  float fStack_588;
  float fStack_584;
  undefined8 uStack_580;
  float fStack_578;
  float fStack_574;
  undefined8 uStack_570;
  float fStack_568;
  float fStack_564;
  undefined8 uStack_560;
  float fStack_558;
  float fStack_554;
  undefined8 uStack_550;
  float fStack_548;
  float fStack_544;
  undefined8 uStack_540;
  float fStack_538;
  float fStack_534;
  undefined8 uStack_530;
  float fStack_528;
  float fStack_524;
  undefined8 uStack_520;
  float fStack_518;
  float fStack_514;
  undefined8 uStack_510;
  float fStack_508;
  float fStack_504;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined8 uStack_4c0;
  float fStack_4b8;
  float fStack_4b4;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  float fStack_498;
  float fStack_494;
  undefined8 uStack_490;
  float fStack_488;
  float fStack_484;
  undefined8 uStack_480;
  float fStack_478;
  float fStack_474;
  undefined8 uStack_470;
  float fStack_468;
  float fStack_464;
  undefined8 uStack_460;
  float fStack_458;
  float fStack_454;
  undefined8 uStack_450;
  float fStack_448;
  float fStack_444;
  undefined8 uStack_440;
  float fStack_438;
  float fStack_434;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  long lStack_410;
  int iStack_404;
  long lStack_400;
  ulong uStack_3f8;
  long lStack_3f0;
  ulong uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  long lStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined1 auStack_398 [88];
  undefined4 uStack_340;
  int iStack_33c;
  undefined4 uStack_338;
  undefined8 uStack_334;
  undefined4 uStack_32c;
  undefined1 auStack_2e8 [88];
  undefined1 auStack_290 [64];
  long lStack_250;
  undefined4 uStack_234;
  int iStack_230;
  int iStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long alStack_218 [9];
  long alStack_1d0 [9];
  ulong auStack_188 [2];
  undefined4 uStack_178;
  long lStack_170;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25 = (long *)*param_2;
  lVar27 = *plVar25;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (*(int *)(lVar27 + 8) == 0) {
    uStack_70._0_4_ = 0;
    uStack_c8 = 0;
    plVar14 = param_2;
    plVar15 = param_3;
  }
  else {
    plVar15 = (long *)((long)*(int *)(lVar27 + 8) << 2);
    plVar14 = (long *)(lVar27 + 0xc);
    _memcpy(&uStack_70);
    uStack_c8 = (undefined4)((ulong)uStack_70 >> 0x20);
  }
  uVar17 = 1;
  if (*(byte *)(param_1 + 0x20) != 0) {
    uVar17 = 2;
  }
  iStack_c4 = *(int *)((long)param_1 + 0x94) << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f);
  uStack_d0 = 4;
  uStack_c0 = 1;
  uStack_cc = (undefined4)uStack_70;
  if (((*(int *)(lVar27 + 0x3c) == 0) && (*(int *)(plVar25[2] + 0x3c) == 0)) &&
     (*(int *)(plVar25[4] + 0x3c) == 0)) {
    uStack_e8 = 4;
    uStack_d8 = 1;
    uStack_e4 = uVar17;
    uStack_e0 = uStack_c8;
    iStack_dc = *(int *)((long)param_1 + 0x94);
    FUN_109c182f4(param_3,3);
    (**(code **)**(undefined8 **)param_1[0xd])(auStack_b8,*(undefined8 **)param_1[0xd],&uStack_d0,1)
    ;
    func_0x000109c18360(*param_3,auStack_b8);
    FUN_109c180ec(auStack_b8);
    plVar28 = (long *)*param_3;
    (**(code **)**(undefined8 **)param_1[0xd])(auStack_b8,*(undefined8 **)param_1[0xd],&uStack_e8,1)
    ;
    func_0x000109c18360(*param_3 + 0x10,auStack_b8);
    FUN_109c180ec(auStack_b8);
    lVar27 = *param_3;
    FUN_109c1bed0(auStack_b8,*(undefined8 *)param_1[0xd],plVar25[4]);
    func_0x000109c18360(*param_3 + 0x20,auStack_b8);
    FUN_109c180ec(auStack_b8);
    lVar30 = *param_3;
    plVar14 = (long *)*param_2;
    param_4 = 1;
    plVar12 = param_1;
    plVar15 = param_3;
    FUN_109c38e0c();
    if ((char)param_1[0x20] == '\x01') {
      plVar14 = (long *)*param_2;
      param_4 = 0;
      FUN_109c38e0c();
      plVar12 = param_1;
      plVar15 = param_3;
    }
    lVar19 = *plVar25;
    uVar17 = *(undefined4 *)(lVar19 + 0x3c);
    *(undefined4 *)(*plVar28 + 0x3c) = uVar17;
    *(undefined4 *)(*(long *)(lVar27 + 0x10) + 0x3c) = uVar17;
    *(undefined4 *)(*(long *)(lVar30 + 0x20) + 0x3c) = *(undefined4 *)(lVar19 + 0x3c);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return plVar12;
    }
  }
  else {
    plVar12 = (long *)&UNK_10f5a477c;
    func_0x000105688514();
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_b8);
  __Unwind_Resume();
  pcStack_f8 = FUN_109c38e0c;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_188[0] = 0;
  auStack_188[1] = 0;
  uStack_178 = 0;
  iVar32 = *(int *)(*plVar14 + 8);
  puStack_100 = &stack0xfffffffffffffff0;
  if (iVar32 == 0) {
    uVar35 = 0;
    iVar32 = 0;
  }
  else {
    _memcpy(auStack_188,*plVar14 + 0xc,(long)iVar32 << 2);
    uVar35 = auStack_188[0] >> 0x20;
    iVar32 = (int)auStack_188[0];
  }
  bVar1 = *(byte *)(plVar12 + 0x20);
  lVar27 = plVar12[0x12];
  iVar34 = *(int *)((long)plVar12 + 0x94);
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_234 = 2;
  iVar50 = (int)uVar35;
  plStack_3a0 = (long *)*plVar15;
  puVar13 = *(undefined8 **)(plVar12[0xd] + 0x10);
  iStack_230 = iVar50;
  iStack_22c = iVar34;
  (**(code **)*puVar13)(alStack_1d0,puVar13,&uStack_234,1);
  puVar13 = *(undefined8 **)(plVar12[0xd] + 0x10);
  (**(code **)*puVar13)(alStack_218,puVar13,&uStack_234,1);
  uVar26 = iVar34 * iVar50;
  lStack_410 = (long)(int)uVar26;
  lStack_3a8 = 0;
  if (param_4 == 0) {
    lStack_3a8 = lStack_410;
  }
  lVar30 = *(long *)(plStack_3a0[2] + 0x40) + lStack_3a8 * 4;
  FUN_109c0ffb0(auStack_290,&uStack_234,lVar30,0);
  lVar19 = (long)(int)lVar27 * (long)iVar50;
  uVar21 = uVar26 << (ulong)(bVar1 & 0x1f);
  lVar27 = *(long *)(*plVar14 + 0x40);
  if (param_4 == 0) {
    lVar27 = lVar27 + (long)((int)lVar19 * (iVar32 + -1)) * 4;
    uVar29 = *(long *)(plVar14[2] + 0x40) + lStack_410 * 4;
    lVar20 = *plStack_3a0;
    uVar31 = *(long *)(lVar20 + 0x40) + (long)(int)(uVar21 * (iVar32 + -1)) * 4 + lStack_410 * 4;
    uVar18 = 4;
  }
  else {
    uVar18 = 0;
    uVar29 = *(ulong *)(plVar14[2] + 0x40);
    lVar20 = *plStack_3a0;
    uVar31 = *(ulong *)(lVar20 + 0x40);
  }
  uVar24 = (ulong)uVar26;
  iVar34 = iVar32 + -1;
  uStack_5c4 = param_4;
  if (0 < iVar32) {
    iVar34 = 0;
    uStack_3b0 = (ulong)(uVar18 | 2);
    uStack_3b8 = (ulong)(uVar18 | 3);
    lStack_3c0 = (long)iVar50;
    uStack_3c8 = (ulong)(uVar18 | 1);
    uStack_4f8 = 0xc0fcf84f;
    uStack_4f4 = 0xc0fcf84f;
    uStack_500 = 0xc0fcf84fc0fcf84f;
    uStack_4e8 = 0x40fcf84f;
    uStack_4e4 = 0x40fcf84f;
    uStack_4f0 = 0x40fcf84f40fcf84f;
    lStack_3e0 = -(long)(int)uVar21;
    if (param_4 != 0) {
      lStack_3e0 = (long)(int)uVar21;
    }
    lStack_3d8 = -lVar19;
    if (param_4 != 0) {
      lStack_3d8 = lVar19;
    }
    uStack_3f8 = uVar31 & 3;
    lStack_3e0 = lStack_3e0 << 2;
    lStack_400 = lStack_3a8 << 2;
    fStack_518 = -2.7607684e-16;
    fStack_514 = -2.7607684e-16;
    uStack_520 = 0xa59f25c0a59f25c0;
    fStack_508 = 0.0004;
    fStack_504 = 0.0004;
    uStack_510 = 0x39d1b71739d1b717;
    uStack_3e8 = (ulong)uVar18 << 4;
    fStack_538 = -8.604672e-11;
    fStack_534 = -8.604672e-11;
    uStack_540 = 0xaebd37ffaebd37ff;
    fStack_528 = 2.000188e-13;
    fStack_524 = 2.000188e-13;
    uStack_530 = 0x2a61337e2a61337e;
    fStack_558 = 1.48572235e-05;
    fStack_554 = 1.48572235e-05;
    uStack_560 = 0x3779434a3779434a;
    fStack_548 = 5.1222973e-08;
    fStack_544 = 5.1222973e-08;
    uStack_550 = 0x335c0041335c0041;
    fStack_578 = 0.0048935246;
    fStack_574 = 0.0048935246;
    uStack_580 = 0x3ba059dc3ba059dc;
    fStack_568 = 0.00063726195;
    fStack_564 = 0.00063726195;
    uStack_570 = 0x3a270ded3a270ded;
    fStack_598 = 0.00011853471;
    fStack_594 = 0.00011853471;
    uStack_5a0 = 0x38f895d638f895d6;
    fStack_588 = 1.1982584e-06;
    fStack_584 = 1.1982584e-06;
    uStack_590 = 0x35a0d3d835a0d3d8;
    fStack_5b8 = 0.004893525;
    fStack_5b4 = 0.004893525;
    uStack_5c0 = 0x3ba059dd3ba059dd;
    fStack_5a8 = 0.0022684347;
    fStack_5a4 = 0.0022684347;
    uStack_5b0 = 0x3b14aa053b14aa05;
    uStack_428 = 0xc2b1722d;
    uStack_424 = 0xc2b1722d;
    uStack_430 = 0xc2b1722dc2b1722d;
    uStack_418 = 0x42b1722d;
    uStack_414 = 0x42b1722d;
    uStack_420 = 0x42b1722d42b1722d;
    fStack_448 = -0.6933594;
    fStack_444 = -0.6933594;
    uStack_450 = 0xbf318000bf318000;
    fStack_438 = 1.442695;
    fStack_434 = 1.442695;
    uStack_440 = 0x3fb8aa3b3fb8aa3b;
    fStack_468 = 0.00019875691;
    fStack_464 = 0.00019875691;
    uStack_470 = 0x3950696739506967;
    fStack_458 = 0.00021219444;
    fStack_454 = 0.00021219444;
    uStack_460 = 0x395e8083395e8083;
    fStack_488 = 0.041665796;
    fStack_484 = 0.041665796;
    uStack_490 = 0x3d2aa9c13d2aa9c1;
    fStack_478 = 0.0013981999;
    fStack_474 = 0.0013981999;
    uStack_480 = 0x3ab743ce3ab743ce;
    auVar38 = NEON_fmov(0x3f800000,4);
    uStack_4a8 = auVar38._8_8_;
    uStack_4b0 = auVar38._0_8_;
    fStack_498 = 0.16666666;
    fStack_494 = 0.16666666;
    uStack_4a0 = 0x3e2aaaaa3e2aaaaa;
    uStack_4c8 = 0xc38b0000;
    uStack_4c4 = 0xc38b0000;
    uStack_4d0 = 0xc38b0000c38b0000;
    fStack_4b8 = 0.008333452;
    fStack_4b4 = 0.008333452;
    uStack_4c0 = 0x3c0889083c088908;
    uStack_4d8 = 0x438b0000;
    uStack_4d4 = 0x438b0000;
    uStack_4e0 = 0x438b0000438b0000;
    iStack_5dc = iVar32 + -1;
    uStack_5d8 = (ulong)uVar21;
    lStack_5d0 = lVar30;
    iStack_404 = iVar32;
    uStack_3d0 = uVar35;
    do {
      uVar35 = uStack_3e8;
      uStack_338 = (undefined4)plVar12[0x12];
      uStack_334 = 0;
      uStack_32c = 0;
      uStack_340 = 2;
      iVar50 = (int)uStack_3d0;
      iStack_33c = iVar50;
      FUN_109c0ffb0(auStack_2e8,&uStack_340,lVar27,0);
      FUN_109c0ffb0(&uStack_340,&uStack_234,uVar29,0);
      FUN_109c0ffb0(auStack_398,&uStack_234,uVar31,0);
      if ((char)plVar12[0x19] == '\x01') {
        uVar16 = *(undefined8 *)(plVar12[0x1a] + uVar35);
      }
      else {
        uVar16 = 0;
      }
      uStack_5f0 = iVar50 == 1;
      uStack_5ec = *(undefined4 *)plVar12[0x1d];
      FUN_109c37ccc(auStack_2e8,*(undefined8 *)(plVar12[0x13] + uVar35),&uStack_340,
                    *(undefined8 *)(plVar12[0x16] + uVar35),alStack_1d0[0],auStack_290,plVar12[0xd],
                    uVar16);
      lVar30 = uStack_3b0 * 0x10;
      if ((char)plVar12[0x19] == '\x01') {
        uVar16 = *(undefined8 *)(plVar12[0x1a] + lVar30);
      }
      else {
        uVar16 = 0;
      }
      uStack_5f0 = iVar50 == 1;
      uStack_5ec = *(undefined4 *)plVar12[0x1d];
      FUN_109c37ccc(auStack_2e8,*(undefined8 *)(plVar12[0x13] + lVar30),&uStack_340,
                    *(undefined8 *)(plVar12[0x16] + lVar30),alStack_1d0[0],alStack_218[0],
                    plVar12[0xd],uVar16);
      lVar30 = uStack_3b8 * 0x10;
      if ((char)plVar12[0x19] == '\x01') {
        uVar16 = *(undefined8 *)(plVar12[0x1a] + lVar30);
      }
      else {
        uVar16 = 0;
      }
      uStack_5f0 = iVar50 == 1;
      uStack_5ec = *(undefined4 *)(plVar12[0x1d] + 4);
      FUN_109c37ccc(auStack_2e8,*(undefined8 *)(plVar12[0x13] + lVar30),&uStack_340,
                    *(undefined8 *)(plVar12[0x16] + lVar30),alStack_1d0[0],auStack_398,plVar12[0xd],
                    uVar16);
      lVar30 = *(long *)(alStack_218[0] + 0x40);
      lVar19 = *(long *)(plStack_3a0[4] + 0x40);
      uVar35 = lVar19 + lStack_3a8 * 4;
      uVar24 = (ulong)*(uint *)((long)plVar12 + 0x94) * lStack_3c0;
      uVar29 = (ulong)-((uint)uVar35 >> 2) & 3;
      if ((long)uVar24 <= (long)uVar29) {
        uVar29 = uVar24;
      }
      uVar33 = uVar24;
      if ((uVar35 & 3) == 0) {
        uVar33 = uVar29;
      }
      uVar2 = uVar24 - uVar33;
      uVar29 = uVar2 + 3;
      if ((long)uVar33 <= (long)uVar24) {
        uVar29 = uVar2;
      }
      if (0 < (long)uVar33) {
        uVar22 = 0;
        do {
          *(float *)(uVar35 + uVar22 * 4) =
               *(float *)(lVar30 + uVar22 * 4) * *(float *)(uVar35 + uVar22 * 4) +
               *(float *)(lStack_250 + uVar22 * 4) * *(float *)(uVar31 + uVar22 * 4);
          uVar22 = uVar22 + 1;
        } while (uVar33 != uVar22);
      }
      lVar20 = (uVar29 & 0xfffffffffffffffc) + uVar33;
      if (3 < (long)uVar2) {
        lVar23 = uVar33 << 2;
        uVar22 = uVar33;
        do {
          pfVar3 = (float *)(lVar30 + lVar23);
          fVar36 = *pfVar3;
          fVar37 = pfVar3[1];
          fVar43 = pfVar3[3];
          pfVar4 = (float *)(uVar35 + lVar23);
          fVar44 = *pfVar4;
          fVar46 = pfVar4[1];
          pfVar5 = (float *)(lStack_250 + lVar23);
          fVar47 = *pfVar5;
          fVar48 = pfVar5[1];
          fVar49 = pfVar5[3];
          auVar38 = *(undefined1 (*) [16])(uVar31 + lVar23);
          pfVar6 = (float *)(uVar35 + lVar23);
          pfVar6[2] = pfVar3[2] * pfVar4[2] + pfVar5[2] * auVar38._8_4_;
          pfVar6[3] = fVar43 * pfVar4[3] + fVar49 * auVar38._12_4_;
          *pfVar6 = fVar36 * fVar44 + fVar47 * auVar38._0_4_;
          pfVar6[1] = fVar37 * fVar46 + fVar48 * auVar38._4_4_;
          uVar22 = uVar22 + 4;
          lVar23 = lVar23 + 0x10;
        } while ((long)uVar22 < lVar20);
      }
      if (lVar20 < (long)uVar24) {
        lVar20 = 0;
        lVar23 = ((long)uVar29 >> 2) * 0x10 + uVar33 * 4;
        lVar19 = lVar19 + lStack_400 + lVar23;
        do {
          *(float *)(lVar19 + lVar20 * 4) =
               *(float *)(lVar30 + lVar23 + lVar20 * 4) * *(float *)(lVar19 + lVar20 * 4) +
               *(float *)(lStack_250 + lVar23 + lVar20 * 4) *
               *(float *)(uVar31 + lVar23 + lVar20 * 4);
          lVar20 = lVar20 + 1;
        } while (uVar2 - (uVar29 & 0xfffffffffffffffc) != lVar20);
      }
      lVar30 = uStack_3c8 * 0x10;
      if ((char)plVar12[0x19] == '\x01') {
        uVar16 = *(undefined8 *)(plVar12[0x1a] + lVar30);
      }
      else {
        uVar16 = 0;
      }
      uStack_5f0 = iVar50 == 1;
      uStack_5ec = *(undefined4 *)plVar12[0x1d];
      FUN_109c37ccc(auStack_2e8,*(undefined8 *)(plVar12[0x13] + lVar30),&uStack_340,
                    *(undefined8 *)(plVar12[0x16] + lVar30),alStack_1d0[0],alStack_218[0],
                    plVar12[0xd],uVar16);
      lVar30 = *(long *)(alStack_218[0] + 0x40);
      iVar50 = *(int *)(plVar12[0x1d] + 8);
      uVar26 = (uint)uVar31;
      if (iVar50 == 0) {
        uVar29 = uVar24;
        if ((uStack_3f8 == 0) && (uVar29 = (ulong)-(uVar26 >> 2) & 3, (long)uVar24 <= (long)uVar29))
        {
          uVar29 = uVar24;
        }
        uVar2 = uVar24 - uVar29;
        uVar33 = uVar2 + 3;
        if ((long)uVar29 <= (long)uVar24) {
          uVar33 = uVar2;
        }
        if (0 < (long)uVar29) {
          uVar22 = 0;
          do {
            fVar37 = *(float *)(uVar35 + uVar22 * 4);
            fVar36 = 0.0;
            if (0.0 <= fVar37) {
              fVar36 = fVar37;
            }
            *(float *)(uVar31 + uVar22 * 4) = *(float *)(lVar30 + uVar22 * 4) * fVar36;
            uVar22 = uVar22 + 1;
          } while (uVar29 != uVar22);
        }
        lVar19 = (uVar33 & 0xfffffffffffffffc) + uVar29;
        if (3 < (long)uVar2) {
          lVar20 = uVar29 << 2;
          do {
            auVar38 = NEON_fmax(*(undefined1 (*) [16])(uVar35 + lVar20),ZEXT216(0),4);
            pfVar3 = (float *)(lVar30 + lVar20);
            fVar36 = *pfVar3;
            fVar37 = pfVar3[1];
            fVar43 = pfVar3[3];
            pfVar4 = (float *)(uVar31 + lVar20);
            pfVar4[2] = auVar38._8_4_ * pfVar3[2];
            pfVar4[3] = auVar38._12_4_ * fVar43;
            *pfVar4 = auVar38._0_4_ * fVar36;
            pfVar4[1] = auVar38._4_4_ * fVar37;
            uVar29 = uVar29 + 4;
            lVar20 = lVar20 + 0x10;
          } while ((long)uVar29 < lVar19);
        }
        if (lVar19 < (long)uVar24) {
          do {
            fVar37 = *(float *)(uVar35 + lVar19 * 4);
            fVar36 = 0.0;
            if (0.0 <= fVar37) {
              fVar36 = fVar37;
            }
            *(float *)(uVar31 + lVar19 * 4) = *(float *)(lVar30 + lVar19 * 4) * fVar36;
            lVar19 = lVar19 + 1;
          } while (uVar24 - lVar19 != 0);
        }
      }
      else if (iVar50 == 1) {
        uVar29 = uVar24;
        if ((uStack_3f8 == 0) && (uVar29 = (ulong)-(uVar26 >> 2) & 3, (long)uVar24 <= (long)uVar29))
        {
          uVar29 = uVar24;
        }
        uVar2 = uVar24 - uVar29;
        uVar33 = uVar2 + 3;
        if ((long)uVar29 <= (long)uVar24) {
          uVar33 = uVar2;
        }
        lStack_3f0 = lVar27;
        if (0 < (long)uVar29) {
          uVar22 = 0;
          do {
            uStack_21c = *(undefined4 *)(uVar35 + uVar22 * 4);
            fVar36 = (float)FUN_1099adf44(&uStack_21c);
            *(float *)(uVar31 + uVar22 * 4) = fVar36 * *(float *)(lVar30 + uVar22 * 4);
            uVar22 = uVar22 + 1;
          } while (uVar29 != uVar22);
        }
        lVar27 = lStack_3f0;
        iVar32 = iStack_404;
        lVar19 = (uVar33 & 0xfffffffffffffffc) + uVar29;
        auVar8._8_4_ = uStack_4f8;
        auVar8._0_8_ = uStack_500;
        auVar38._8_4_ = uStack_4e8;
        auVar38._0_8_ = uStack_4f0;
        if (3 < (long)uVar2) {
          lVar20 = uVar29 << 2;
          do {
            auVar9 = *(undefined1 (*) [16])(uVar35 + lVar20);
            auVar38._12_4_ = uStack_4e4;
            auVar41 = NEON_fmin(auVar9,auVar38,4);
            auVar8._12_4_ = uStack_4f4;
            auVar42 = NEON_fmax(auVar41,auVar8,4);
            auVar41._0_4_ = -(uint)(ABS(auVar9._0_4_) < (float)uStack_510);
            auVar41._4_4_ = -(uint)(ABS(auVar9._4_4_) < (float)((ulong)uStack_510 >> 0x20));
            auVar41._8_4_ = -(uint)(ABS(auVar9._8_4_) < fStack_508);
            auVar41._12_4_ = -(uint)(ABS(auVar9._12_4_) < fStack_504);
            fVar36 = auVar42._0_4_;
            fVar46 = fVar36 * fVar36;
            fVar37 = auVar42._4_4_;
            fVar47 = fVar37 * fVar37;
            fVar43 = auVar42._8_4_;
            fVar48 = fVar43 * fVar43;
            fVar44 = auVar42._12_4_;
            fVar49 = fVar44 * fVar44;
            auVar39._0_4_ =
                 (fVar36 * ((float)uStack_580 +
                           ((float)uStack_570 +
                           ((float)uStack_560 +
                           ((float)uStack_550 +
                           ((float)uStack_540 +
                           ((float)uStack_530 + (float)uStack_520 * fVar46) * fVar46) * fVar46) *
                           fVar46) * fVar46) * fVar46)) /
                 ((float)uStack_5c0 +
                 ((float)uStack_5b0 + ((float)uStack_5a0 + (float)uStack_590 * fVar46) * fVar46) *
                 fVar46);
            auVar39._4_4_ =
                 (fVar37 * ((float)((ulong)uStack_580 >> 0x20) +
                           ((float)((ulong)uStack_570 >> 0x20) +
                           ((float)((ulong)uStack_560 >> 0x20) +
                           ((float)((ulong)uStack_550 >> 0x20) +
                           ((float)((ulong)uStack_540 >> 0x20) +
                           ((float)((ulong)uStack_530 >> 0x20) +
                           (float)((ulong)uStack_520 >> 0x20) * fVar47) * fVar47) * fVar47) * fVar47
                           ) * fVar47) * fVar47)) /
                 ((float)((ulong)uStack_5c0 >> 0x20) +
                 ((float)((ulong)uStack_5b0 >> 0x20) +
                 ((float)((ulong)uStack_5a0 >> 0x20) + (float)((ulong)uStack_590 >> 0x20) * fVar47)
                 * fVar47) * fVar47);
            auVar39._8_4_ =
                 (fVar43 * (fStack_578 +
                           (fStack_568 +
                           (fStack_558 +
                           (fStack_548 +
                           (fStack_538 + (fStack_528 + fStack_518 * fVar48) * fVar48) * fVar48) *
                           fVar48) * fVar48) * fVar48)) /
                 (fStack_5b8 + (fStack_5a8 + (fStack_598 + fStack_588 * fVar48) * fVar48) * fVar48);
            auVar39._12_4_ =
                 (fVar44 * (fStack_574 +
                           (fStack_564 +
                           (fStack_554 +
                           (fStack_544 +
                           (fStack_534 + (fStack_524 + fStack_514 * fVar49) * fVar49) * fVar49) *
                           fVar49) * fVar49) * fVar49)) /
                 (fStack_5b4 + (fStack_5a4 + (fStack_594 + fStack_584 * fVar49) * fVar49) * fVar49);
            auVar39 = auVar39 ^ (auVar39 ^ auVar42) & auVar41;
            auVar9 = *(undefined1 (*) [16])(lVar30 + lVar20);
            pfVar3 = (float *)(uVar31 + lVar20);
            pfVar3[2] = auVar9._8_4_ * auVar39._8_4_;
            pfVar3[3] = auVar9._12_4_ * auVar39._12_4_;
            *pfVar3 = auVar9._0_4_ * auVar39._0_4_;
            pfVar3[1] = auVar9._4_4_ * auVar39._4_4_;
            uVar29 = uVar29 + 4;
            lVar20 = lVar20 + 0x10;
          } while ((long)uVar29 < lVar19);
        }
        if (lVar19 < (long)uVar24) {
          do {
            uStack_21c = *(undefined4 *)(uVar35 + lVar19 * 4);
            fVar36 = (float)FUN_1099adf44(&uStack_21c);
            *(float *)(uVar31 + lVar19 * 4) = fVar36 * *(float *)(lVar30 + lVar19 * 4);
            lVar19 = lVar19 + 1;
          } while (uVar24 - lVar19 != 0);
        }
      }
      else if (iVar50 == 2) {
        uVar29 = uVar24;
        if ((uStack_3f8 == 0) && (uVar29 = (ulong)-(uVar26 >> 2) & 3, (long)uVar24 <= (long)uVar29))
        {
          uVar29 = uVar24;
        }
        uVar2 = uVar24 - uVar29;
        uVar33 = uVar2 + 3;
        if ((long)uVar29 <= (long)uVar24) {
          uVar33 = uVar2;
        }
        lStack_3f0 = lVar27;
        if (0 < (long)uVar29) {
          uVar22 = 0;
          do {
            fVar36 = (float)_expf();
            *(float *)(uVar31 + uVar22 * 4) = *(float *)(lVar30 + uVar22 * 4) / (fVar36 + 1.0);
            uVar22 = uVar22 + 1;
          } while (uVar29 != uVar22);
        }
        lVar27 = lStack_3f0;
        iVar32 = iStack_404;
        lVar19 = (uVar33 & 0xfffffffffffffffc) + uVar29;
        auVar10._8_4_ = uStack_428;
        auVar10._0_8_ = uStack_430;
        auVar10._12_4_ = uStack_424;
        auVar11._8_4_ = uStack_418;
        auVar11._0_8_ = uStack_420;
        auVar11._12_4_ = uStack_414;
        auVar42._8_4_ = uStack_4c8;
        auVar42._0_8_ = uStack_4d0;
        auVar42._12_4_ = uStack_4c4;
        auVar9._8_4_ = uStack_4d8;
        auVar9._0_8_ = uStack_4e0;
        auVar9._12_4_ = uStack_4d4;
        if (3 < (long)uVar2) {
          lVar20 = uVar29 << 2;
          do {
            pfVar3 = (float *)(lVar30 + lVar20);
            fVar36 = *pfVar3;
            fVar37 = pfVar3[1];
            fVar43 = pfVar3[3];
            pfVar4 = (float *)(uVar35 + lVar20);
            auVar40._0_4_ = -*pfVar4;
            auVar40._4_4_ = -pfVar4[1];
            auVar40._8_4_ = -pfVar4[2];
            auVar40._12_4_ = -pfVar4[3];
            auVar38 = NEON_fmin(auVar40,auVar11,4);
            auVar38 = NEON_fmax(auVar38,auVar10,4);
            fVar49 = (float)(int)((float)uStack_440 * auVar38._0_4_ + 0.5);
            fVar51 = (float)(int)((float)((ulong)uStack_440 >> 0x20) * auVar38._4_4_ + 0.5);
            fVar53 = (float)(int)(fStack_438 * auVar38._8_4_ + 0.5);
            fVar55 = (float)(int)(fStack_434 * auVar38._12_4_ + 0.5);
            fVar44 = auVar38._0_4_ + (float)uStack_450 * fVar49 + (float)uStack_460 * fVar49;
            fVar46 = auVar38._4_4_ + (float)((ulong)uStack_450 >> 0x20) * fVar51 +
                     (float)((ulong)uStack_460 >> 0x20) * fVar51;
            fVar47 = auVar38._8_4_ + fStack_448 * fVar53 + fStack_458 * fVar53;
            fVar48 = auVar38._12_4_ + fStack_444 * fVar55 + fStack_454 * fVar55;
            fVar57 = (float)uStack_4b0;
            fVar58 = (float)((ulong)uStack_4b0 >> 0x20);
            fVar59 = (float)uStack_4a8;
            fVar60 = (float)((ulong)uStack_4a8 >> 0x20);
            auVar7._4_4_ = fVar51;
            auVar7._0_4_ = fVar49;
            auVar7._8_4_ = fVar53;
            auVar7._12_4_ = fVar55;
            auVar38 = NEON_fmax(auVar7,auVar42,4);
            auVar38 = NEON_fmin(auVar38,auVar9,4);
            iVar50 = (int)auVar38._0_4_ >> 2;
            iVar52 = (int)auVar38._4_4_ >> 2;
            iVar54 = (int)auVar38._8_4_ >> 2;
            iVar56 = (int)auVar38._12_4_ >> 2;
            fVar49 = (float)(iVar50 * 0x800000 + (int)fVar57);
            fVar51 = (float)(iVar52 * 0x800000 + (int)fVar58);
            fVar53 = (float)(iVar54 * 0x800000 + (int)fVar59);
            fVar55 = (float)(iVar56 * 0x800000 + (int)fVar60);
            auVar45._0_4_ =
                 (fVar44 + fVar57 +
                 fVar44 * fVar44 *
                 (fVar44 * ((float)uStack_4a0 + (float)uStack_490 * fVar44) + 0.5 +
                 fVar44 * fVar44 * fVar44 *
                 ((float)uStack_4c0 + fVar44 * ((float)uStack_480 + (float)uStack_470 * fVar44)))) *
                 fVar49 * fVar49 * fVar49 *
                 (float)(((int)auVar38._0_4_ + iVar50 * 0x1fd) * 0x800000 + (int)fVar57);
            auVar45._4_4_ =
                 (fVar46 + fVar58 +
                 fVar46 * fVar46 *
                 (fVar46 * ((float)((ulong)uStack_4a0 >> 0x20) +
                           (float)((ulong)uStack_490 >> 0x20) * fVar46) + 0.5 +
                 fVar46 * fVar46 * fVar46 *
                 ((float)((ulong)uStack_4c0 >> 0x20) +
                 fVar46 * ((float)((ulong)uStack_480 >> 0x20) +
                          (float)((ulong)uStack_470 >> 0x20) * fVar46)))) * fVar51 * fVar51 * fVar51
                 * (float)(((int)auVar38._4_4_ + iVar52 * 0x1fd) * 0x800000 + (int)fVar58);
            auVar45._8_4_ =
                 (fVar47 + fVar59 +
                 fVar47 * fVar47 *
                 (fVar47 * (fStack_498 + fStack_488 * fVar47) + 0.5 +
                 fVar47 * fVar47 * fVar47 *
                 (fStack_4b8 + fVar47 * (fStack_478 + fStack_468 * fVar47)))) * fVar53 * fVar53 *
                 fVar53 * (float)(((int)auVar38._8_4_ + iVar54 * 0x1fd) * 0x800000 + (int)fVar59);
            auVar45._12_4_ =
                 (fVar48 + fVar60 +
                 fVar48 * fVar48 *
                 (fVar48 * (fStack_494 + fStack_484 * fVar48) + 0.5 +
                 fVar48 * fVar48 * fVar48 *
                 (fStack_4b4 + fVar48 * (fStack_474 + fStack_464 * fVar48)))) * fVar55 * fVar55 *
                 fVar55 * (float)(((int)auVar38._12_4_ + iVar56 * 0x1fd) * 0x800000 + (int)fVar60);
            auVar38 = NEON_fmax(auVar45,auVar40,4);
            pfVar4 = (float *)(uVar31 + lVar20);
            pfVar4[2] = pfVar3[2] / (auVar38._8_4_ + fVar59);
            pfVar4[3] = fVar43 / (auVar38._12_4_ + fVar60);
            *pfVar4 = fVar36 / (auVar38._0_4_ + fVar57);
            pfVar4[1] = fVar37 / (auVar38._4_4_ + fVar58);
            uVar29 = uVar29 + 4;
            lVar20 = lVar20 + 0x10;
          } while ((long)uVar29 < lVar19);
        }
        if (lVar19 < (long)uVar24) {
          do {
            fVar36 = (float)_expf();
            *(float *)(uVar31 + lVar19 * 4) = *(float *)(lVar30 + lVar19 * 4) / (fVar36 + 1.0);
            lVar19 = lVar19 + 1;
          } while (uVar24 - lVar19 != 0);
        }
      }
      lVar27 = lVar27 + lStack_3d8 * 4;
      uVar35 = uVar31 + lStack_3e0;
      FUN_109c10e9c(auStack_398);
      FUN_109c10e9c(&uStack_340);
      FUN_109c10e9c(auStack_2e8);
      iVar34 = iVar34 + 1;
      uVar29 = uVar31;
      uVar31 = uVar35;
    } while (iVar34 != iVar32);
    lVar20 = *plStack_3a0;
    uVar21 = (uint)uStack_5d8;
    uVar24 = uStack_3e8;
    lVar30 = lStack_5d0;
    uVar35 = uStack_3d0;
    iVar34 = iStack_5dc;
  }
  uVar26 = uStack_5c4;
  uVar31 = lStack_410 << 2;
  lVar27 = *(long *)(lVar20 + 0x40);
  uVar29 = (ulong)uStack_5c4;
  lVar19 = (long)(int)(uVar21 * iVar34);
  if (uStack_5c4 == 0) {
    lVar19 = lStack_410;
  }
  _memcpy(lVar30,lVar27 + lVar19 * 4,uVar31);
  if ((((uVar26 & 1) == 0) && (iVar34 = (int)uVar35, iVar34 != 1)) && (0 < iVar32)) {
    iVar50 = 0;
    uVar29 = 0;
    if ((long)iVar34 != 0) {
      uVar29 = uVar31 / (ulong)(long)iVar34;
    }
    do {
      uVar24 = *(ulong *)(alStack_1d0[0] + 0x40);
      _memcpy(uVar24,lVar27,uVar31);
      if (0 < iVar34) {
        lVar30 = lVar27 + lStack_410 * 4;
        uVar33 = uVar35;
        do {
          _memcpy(lVar27,uVar24,uVar29);
          lVar27 = lVar27 + (ulong)*(uint *)((long)plVar12 + 0x94) * 4;
          uVar24 = uVar24 + (ulong)*(uint *)((long)plVar12 + 0x94) * 4;
          _memcpy(lVar27,lVar30,uVar29);
          lVar27 = lVar27 + (ulong)*(uint *)((long)plVar12 + 0x94) * 4;
          lVar30 = lVar30 + (ulong)*(uint *)((long)plVar12 + 0x94) * 4;
          uVar26 = (int)uVar33 - 1;
          uVar33 = (ulong)uVar26;
        } while (uVar26 != 0);
      }
      iVar50 = iVar50 + 1;
    } while (iVar50 != iVar32);
  }
  FUN_109c10e9c(auStack_290);
  FUN_109c180ec(alStack_218);
  plVar25 = alStack_1d0;
  FUN_109c180ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    return plVar25;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_218);
  FUN_109c180ec(alStack_1d0);
  plVar14 = plVar25;
  __Unwind_Resume();
  pcStack_5f8 = FUN_109c39a48;
  uStack_620 = uVar31;
  uStack_618 = uVar24;
  uStack_610 = uVar29;
  plStack_608 = plVar25;
  ppuStack_600 = &puStack_100;
  plVar14[0xc] = 0;
  plVar14[0xb] = 0;
  plVar14[0xe] = 0;
  plVar14[0xd] = 0;
  plVar14[0x10] = 0;
  plVar14[0xf] = 0;
  plVar14[0x11] = 0;
  plVar14[10] = 0;
  plVar14[9] = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  plVar14[4] = 0;
  plVar14[3] = 0;
  plVar14[2] = 0;
  plVar14[1] = 0;
  *(undefined1 *)((long)plVar14 + 0x61) = 1;
  plVar14[0xd] = 0;
  plVar14[0xe] = 0;
  *(undefined4 *)(plVar14 + 0xf) = 0x3f800000;
  *(undefined1 *)(plVar14 + 0x11) = 0;
  *plVar14 = (long)&PTR_FUN_110b2cea8;
  plVar14[0x13] = 0;
  plVar14[0x12] = 0;
  plVar14[0x15] = 0;
  plVar14[0x14] = 0;
  func_0x000107c31940(auStack_638,&UNK_10f5a47b1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar14 + 6,auStack_638);
  if (cStack_621 < '\0') {
    __ZdlPv(auStack_638[0]);
  }
  return plVar14;
}



/* Entry: 109c38e0c; end: 109c39a47;  */

long * FUN_109c38e0c(long param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  int iVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [16];
  float fVar45;
  int iVar46;
  float fVar47;
  int iVar48;
  float fVar49;
  int iVar50;
  float fVar51;
  int iVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 auStack_548 [2];
  char cStack_531;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  long *plStack_518;
  undefined1 *puStack_510;
  code *pcStack_508;
  undefined1 uStack_500;
  undefined4 uStack_4fc;
  int iStack_4ec;
  ulong uStack_4e8;
  long lStack_4e0;
  uint uStack_4d4;
  undefined8 uStack_4d0;
  float fStack_4c8;
  float fStack_4c4;
  undefined8 uStack_4c0;
  float fStack_4b8;
  float fStack_4b4;
  undefined8 uStack_4b0;
  float fStack_4a8;
  float fStack_4a4;
  undefined8 uStack_4a0;
  float fStack_498;
  float fStack_494;
  undefined8 uStack_490;
  float fStack_488;
  float fStack_484;
  undefined8 uStack_480;
  float fStack_478;
  float fStack_474;
  undefined8 uStack_470;
  float fStack_468;
  float fStack_464;
  undefined8 uStack_460;
  float fStack_458;
  float fStack_454;
  undefined8 uStack_450;
  float fStack_448;
  float fStack_444;
  undefined8 uStack_440;
  float fStack_438;
  float fStack_434;
  undefined8 uStack_430;
  float fStack_428;
  float fStack_424;
  undefined8 uStack_420;
  float fStack_418;
  float fStack_414;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  float fStack_3c8;
  float fStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  float fStack_3a8;
  float fStack_3a4;
  undefined8 uStack_3a0;
  float fStack_398;
  float fStack_394;
  undefined8 uStack_390;
  float fStack_388;
  float fStack_384;
  undefined8 uStack_380;
  float fStack_378;
  float fStack_374;
  undefined8 uStack_370;
  float fStack_368;
  float fStack_364;
  undefined8 uStack_360;
  float fStack_358;
  float fStack_354;
  undefined8 uStack_350;
  float fStack_348;
  float fStack_344;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  long lStack_320;
  int iStack_314;
  long lStack_310;
  ulong uStack_308;
  long lStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined1 auStack_2a8 [88];
  undefined4 uStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  undefined8 uStack_244;
  undefined4 uStack_23c;
  undefined1 auStack_1f8 [88];
  undefined1 auStack_1a0 [64];
  long lStack_160;
  undefined4 uStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long alStack_128 [9];
  long alStack_e0 [9];
  ulong auStack_98 [2];
  undefined4 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_98[0] = 0;
  auStack_98[1] = 0;
  uStack_88 = 0;
  iVar28 = *(int *)(*param_2 + 8);
  if (iVar28 == 0) {
    uVar31 = 0;
    iVar28 = 0;
  }
  else {
    _memcpy(auStack_98,*param_2 + 0xc,(long)iVar28 << 2);
    uVar31 = auStack_98[0] >> 0x20;
    iVar28 = (int)auStack_98[0];
  }
  bVar1 = *(byte *)(param_1 + 0x100);
  iVar30 = *(int *)(param_1 + 0x90);
  iVar46 = *(int *)(param_1 + 0x94);
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_144 = 2;
  iVar48 = (int)uVar31;
  plStack_2b0 = (long *)*param_3;
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
  iStack_140 = iVar48;
  iStack_13c = iVar46;
  (**(code **)*puVar12)(alStack_e0,puVar12,&uStack_144,1);
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x10);
  (**(code **)*puVar12)(alStack_128,puVar12,&uStack_144,1);
  uVar25 = iVar46 * iVar48;
  lStack_320 = (long)(int)uVar25;
  lStack_2b8 = 0;
  if (param_4 == 0) {
    lStack_2b8 = lStack_320;
  }
  lVar17 = *(long *)(plStack_2b0[2] + 0x40) + lStack_2b8 * 4;
  FUN_109c0ffb0(auStack_1a0,&uStack_144,lVar17,0);
  lVar16 = (long)iVar30 * (long)iVar48;
  uVar20 = uVar25 << (ulong)(bVar1 & 0x1f);
  lVar24 = *(long *)(*param_2 + 0x40);
  if (param_4 == 0) {
    lVar24 = lVar24 + (long)((int)lVar16 * (iVar28 + -1)) * 4;
    uVar26 = *(long *)(param_2[2] + 0x40) + lStack_320 * 4;
    lVar19 = *plStack_2b0;
    uVar27 = *(long *)(lVar19 + 0x40) + (long)(int)(uVar20 * (iVar28 + -1)) * 4 + lStack_320 * 4;
    uVar18 = 4;
  }
  else {
    uVar18 = 0;
    uVar26 = *(ulong *)(param_2[2] + 0x40);
    lVar19 = *plStack_2b0;
    uVar27 = *(ulong *)(lVar19 + 0x40);
  }
  uVar23 = (ulong)uVar25;
  iVar30 = iVar28 + -1;
  uStack_4d4 = param_4;
  if (0 < iVar28) {
    iVar30 = 0;
    uStack_2c0 = (ulong)(uVar18 | 2);
    uStack_2c8 = (ulong)(uVar18 | 3);
    lStack_2d0 = (long)iVar48;
    uStack_2d8 = (ulong)(uVar18 | 1);
    uStack_408 = 0xc0fcf84f;
    uStack_404 = 0xc0fcf84f;
    uStack_410 = 0xc0fcf84fc0fcf84f;
    uStack_3f8 = 0x40fcf84f;
    uStack_3f4 = 0x40fcf84f;
    uStack_400 = 0x40fcf84f40fcf84f;
    lStack_2f0 = -(long)(int)uVar20;
    if (param_4 != 0) {
      lStack_2f0 = (long)(int)uVar20;
    }
    lStack_2e8 = -lVar16;
    if (param_4 != 0) {
      lStack_2e8 = lVar16;
    }
    uStack_308 = uVar27 & 3;
    lStack_2f0 = lStack_2f0 << 2;
    lStack_310 = lStack_2b8 << 2;
    fStack_428 = -2.7607684e-16;
    fStack_424 = -2.7607684e-16;
    uStack_430 = 0xa59f25c0a59f25c0;
    fStack_418 = 0.0004;
    fStack_414 = 0.0004;
    uStack_420 = 0x39d1b71739d1b717;
    uStack_2f8 = (ulong)uVar18 << 4;
    fStack_448 = -8.604672e-11;
    fStack_444 = -8.604672e-11;
    uStack_450 = 0xaebd37ffaebd37ff;
    fStack_438 = 2.000188e-13;
    fStack_434 = 2.000188e-13;
    uStack_440 = 0x2a61337e2a61337e;
    fStack_468 = 1.48572235e-05;
    fStack_464 = 1.48572235e-05;
    uStack_470 = 0x3779434a3779434a;
    fStack_458 = 5.1222973e-08;
    fStack_454 = 5.1222973e-08;
    uStack_460 = 0x335c0041335c0041;
    fStack_488 = 0.0048935246;
    fStack_484 = 0.0048935246;
    uStack_490 = 0x3ba059dc3ba059dc;
    fStack_478 = 0.00063726195;
    fStack_474 = 0.00063726195;
    uStack_480 = 0x3a270ded3a270ded;
    fStack_4a8 = 0.00011853471;
    fStack_4a4 = 0.00011853471;
    uStack_4b0 = 0x38f895d638f895d6;
    fStack_498 = 1.1982584e-06;
    fStack_494 = 1.1982584e-06;
    uStack_4a0 = 0x35a0d3d835a0d3d8;
    fStack_4c8 = 0.004893525;
    fStack_4c4 = 0.004893525;
    uStack_4d0 = 0x3ba059dd3ba059dd;
    fStack_4b8 = 0.0022684347;
    fStack_4b4 = 0.0022684347;
    uStack_4c0 = 0x3b14aa053b14aa05;
    uStack_338 = 0xc2b1722d;
    uStack_334 = 0xc2b1722d;
    uStack_340 = 0xc2b1722dc2b1722d;
    uStack_328 = 0x42b1722d;
    uStack_324 = 0x42b1722d;
    uStack_330 = 0x42b1722d42b1722d;
    fStack_358 = -0.6933594;
    fStack_354 = -0.6933594;
    uStack_360 = 0xbf318000bf318000;
    fStack_348 = 1.442695;
    fStack_344 = 1.442695;
    uStack_350 = 0x3fb8aa3b3fb8aa3b;
    fStack_378 = 0.00019875691;
    fStack_374 = 0.00019875691;
    uStack_380 = 0x3950696739506967;
    fStack_368 = 0.00021219444;
    fStack_364 = 0.00021219444;
    uStack_370 = 0x395e8083395e8083;
    fStack_398 = 0.041665796;
    fStack_394 = 0.041665796;
    uStack_3a0 = 0x3d2aa9c13d2aa9c1;
    fStack_388 = 0.0013981999;
    fStack_384 = 0.0013981999;
    uStack_390 = 0x3ab743ce3ab743ce;
    auVar34 = NEON_fmov(0x3f800000,4);
    uStack_3b8 = auVar34._8_8_;
    uStack_3c0 = auVar34._0_8_;
    fStack_3a8 = 0.16666666;
    fStack_3a4 = 0.16666666;
    uStack_3b0 = 0x3e2aaaaa3e2aaaaa;
    uStack_3d8 = 0xc38b0000;
    uStack_3d4 = 0xc38b0000;
    uStack_3e0 = 0xc38b0000c38b0000;
    fStack_3c8 = 0.008333452;
    fStack_3c4 = 0.008333452;
    uStack_3d0 = 0x3c0889083c088908;
    uStack_3e8 = 0x438b0000;
    uStack_3e4 = 0x438b0000;
    uStack_3f0 = 0x438b0000438b0000;
    iStack_4ec = iVar28 + -1;
    uStack_4e8 = (ulong)uVar20;
    lStack_4e0 = lVar17;
    iStack_314 = iVar28;
    uStack_2e0 = uVar31;
    do {
      uVar31 = uStack_2f8;
      uStack_248 = *(undefined4 *)(param_1 + 0x90);
      uStack_244 = 0;
      uStack_23c = 0;
      uStack_250 = 2;
      iVar46 = (int)uStack_2e0;
      iStack_24c = iVar46;
      FUN_109c0ffb0(auStack_1f8,&uStack_250,lVar24,0);
      FUN_109c0ffb0(&uStack_250,&uStack_144,uVar26,0);
      FUN_109c0ffb0(auStack_2a8,&uStack_144,uVar27,0);
      if (*(char *)(param_1 + 200) == '\x01') {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar31);
      }
      else {
        uVar15 = 0;
      }
      uStack_500 = iVar46 == 1;
      uStack_4fc = **(undefined4 **)(param_1 + 0xe8);
      FUN_109c37ccc(auStack_1f8,*(undefined8 *)(*(long *)(param_1 + 0x98) + uVar31),&uStack_250,
                    *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar31),alStack_e0[0],auStack_1a0,
                    *(undefined8 *)(param_1 + 0x68),uVar15);
      lVar17 = uStack_2c0 * 0x10;
      if (*(char *)(param_1 + 200) == '\x01') {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + lVar17);
      }
      else {
        uVar15 = 0;
      }
      uStack_500 = iVar46 == 1;
      uStack_4fc = **(undefined4 **)(param_1 + 0xe8);
      FUN_109c37ccc(auStack_1f8,*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar17),&uStack_250,
                    *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar17),alStack_e0[0],alStack_128[0]
                    ,*(undefined8 *)(param_1 + 0x68),uVar15);
      lVar17 = uStack_2c8 * 0x10;
      if (*(char *)(param_1 + 200) == '\x01') {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + lVar17);
      }
      else {
        uVar15 = 0;
      }
      uStack_500 = iVar46 == 1;
      uStack_4fc = *(undefined4 *)(*(long *)(param_1 + 0xe8) + 4);
      FUN_109c37ccc(auStack_1f8,*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar17),&uStack_250,
                    *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar17),alStack_e0[0],auStack_2a8,
                    *(undefined8 *)(param_1 + 0x68),uVar15);
      lVar17 = *(long *)(alStack_128[0] + 0x40);
      lVar16 = *(long *)(plStack_2b0[4] + 0x40);
      uVar31 = lVar16 + lStack_2b8 * 4;
      uVar23 = (ulong)*(uint *)(param_1 + 0x94) * lStack_2d0;
      uVar26 = (ulong)-((uint)uVar31 >> 2) & 3;
      if ((long)uVar23 <= (long)uVar26) {
        uVar26 = uVar23;
      }
      uVar29 = uVar23;
      if ((uVar31 & 3) == 0) {
        uVar29 = uVar26;
      }
      uVar2 = uVar23 - uVar29;
      uVar26 = uVar2 + 3;
      if ((long)uVar29 <= (long)uVar23) {
        uVar26 = uVar2;
      }
      if (0 < (long)uVar29) {
        uVar21 = 0;
        do {
          *(float *)(uVar31 + uVar21 * 4) =
               *(float *)(lVar17 + uVar21 * 4) * *(float *)(uVar31 + uVar21 * 4) +
               *(float *)(lStack_160 + uVar21 * 4) * *(float *)(uVar27 + uVar21 * 4);
          uVar21 = uVar21 + 1;
        } while (uVar29 != uVar21);
      }
      lVar19 = (uVar26 & 0xfffffffffffffffc) + uVar29;
      if (3 < (long)uVar2) {
        lVar22 = uVar29 << 2;
        uVar21 = uVar29;
        do {
          pfVar3 = (float *)(lVar17 + lVar22);
          fVar32 = *pfVar3;
          fVar33 = pfVar3[1];
          fVar39 = pfVar3[3];
          pfVar4 = (float *)(uVar31 + lVar22);
          fVar40 = *pfVar4;
          fVar42 = pfVar4[1];
          pfVar5 = (float *)(lStack_160 + lVar22);
          fVar43 = *pfVar5;
          fVar44 = pfVar5[1];
          fVar45 = pfVar5[3];
          auVar34 = *(undefined1 (*) [16])(uVar27 + lVar22);
          pfVar6 = (float *)(uVar31 + lVar22);
          pfVar6[2] = pfVar3[2] * pfVar4[2] + pfVar5[2] * auVar34._8_4_;
          pfVar6[3] = fVar39 * pfVar4[3] + fVar45 * auVar34._12_4_;
          *pfVar6 = fVar32 * fVar40 + fVar43 * auVar34._0_4_;
          pfVar6[1] = fVar33 * fVar42 + fVar44 * auVar34._4_4_;
          uVar21 = uVar21 + 4;
          lVar22 = lVar22 + 0x10;
        } while ((long)uVar21 < lVar19);
      }
      if (lVar19 < (long)uVar23) {
        lVar19 = 0;
        lVar22 = ((long)uVar26 >> 2) * 0x10 + uVar29 * 4;
        lVar16 = lVar16 + lStack_310 + lVar22;
        do {
          *(float *)(lVar16 + lVar19 * 4) =
               *(float *)(lVar17 + lVar22 + lVar19 * 4) * *(float *)(lVar16 + lVar19 * 4) +
               *(float *)(lStack_160 + lVar22 + lVar19 * 4) *
               *(float *)(uVar27 + lVar22 + lVar19 * 4);
          lVar19 = lVar19 + 1;
        } while (uVar2 - (uVar26 & 0xfffffffffffffffc) != lVar19);
      }
      lVar17 = uStack_2d8 * 0x10;
      if (*(char *)(param_1 + 200) == '\x01') {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + lVar17);
      }
      else {
        uVar15 = 0;
      }
      uStack_500 = iVar46 == 1;
      uStack_4fc = **(undefined4 **)(param_1 + 0xe8);
      FUN_109c37ccc(auStack_1f8,*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar17),&uStack_250,
                    *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar17),alStack_e0[0],alStack_128[0]
                    ,*(undefined8 *)(param_1 + 0x68),uVar15);
      lVar17 = *(long *)(alStack_128[0] + 0x40);
      iVar46 = *(int *)(*(long *)(param_1 + 0xe8) + 8);
      uVar25 = (uint)uVar27;
      if (iVar46 == 0) {
        uVar26 = uVar23;
        if ((uStack_308 == 0) && (uVar26 = (ulong)-(uVar25 >> 2) & 3, (long)uVar23 <= (long)uVar26))
        {
          uVar26 = uVar23;
        }
        uVar2 = uVar23 - uVar26;
        uVar29 = uVar2 + 3;
        if ((long)uVar26 <= (long)uVar23) {
          uVar29 = uVar2;
        }
        if (0 < (long)uVar26) {
          uVar21 = 0;
          do {
            fVar33 = *(float *)(uVar31 + uVar21 * 4);
            fVar32 = 0.0;
            if (0.0 <= fVar33) {
              fVar32 = fVar33;
            }
            *(float *)(uVar27 + uVar21 * 4) = *(float *)(lVar17 + uVar21 * 4) * fVar32;
            uVar21 = uVar21 + 1;
          } while (uVar26 != uVar21);
        }
        lVar16 = (uVar29 & 0xfffffffffffffffc) + uVar26;
        if (3 < (long)uVar2) {
          lVar19 = uVar26 << 2;
          do {
            auVar34 = NEON_fmax(*(undefined1 (*) [16])(uVar31 + lVar19),ZEXT216(0),4);
            pfVar3 = (float *)(lVar17 + lVar19);
            fVar32 = *pfVar3;
            fVar33 = pfVar3[1];
            fVar39 = pfVar3[3];
            pfVar4 = (float *)(uVar27 + lVar19);
            pfVar4[2] = auVar34._8_4_ * pfVar3[2];
            pfVar4[3] = auVar34._12_4_ * fVar39;
            *pfVar4 = auVar34._0_4_ * fVar32;
            pfVar4[1] = auVar34._4_4_ * fVar33;
            uVar26 = uVar26 + 4;
            lVar19 = lVar19 + 0x10;
          } while ((long)uVar26 < lVar16);
        }
        if (lVar16 < (long)uVar23) {
          do {
            fVar33 = *(float *)(uVar31 + lVar16 * 4);
            fVar32 = 0.0;
            if (0.0 <= fVar33) {
              fVar32 = fVar33;
            }
            *(float *)(uVar27 + lVar16 * 4) = *(float *)(lVar17 + lVar16 * 4) * fVar32;
            lVar16 = lVar16 + 1;
          } while (uVar23 - lVar16 != 0);
        }
      }
      else if (iVar46 == 1) {
        uVar26 = uVar23;
        if ((uStack_308 == 0) && (uVar26 = (ulong)-(uVar25 >> 2) & 3, (long)uVar23 <= (long)uVar26))
        {
          uVar26 = uVar23;
        }
        uVar2 = uVar23 - uVar26;
        uVar29 = uVar2 + 3;
        if ((long)uVar26 <= (long)uVar23) {
          uVar29 = uVar2;
        }
        lStack_300 = lVar24;
        if (0 < (long)uVar26) {
          uVar21 = 0;
          do {
            uStack_12c = *(undefined4 *)(uVar31 + uVar21 * 4);
            fVar32 = (float)FUN_1099adf44(&uStack_12c);
            *(float *)(uVar27 + uVar21 * 4) = fVar32 * *(float *)(lVar17 + uVar21 * 4);
            uVar21 = uVar21 + 1;
          } while (uVar26 != uVar21);
        }
        lVar24 = lStack_300;
        iVar28 = iStack_314;
        lVar16 = (uVar29 & 0xfffffffffffffffc) + uVar26;
        auVar8._8_4_ = uStack_408;
        auVar8._0_8_ = uStack_410;
        auVar34._8_4_ = uStack_3f8;
        auVar34._0_8_ = uStack_400;
        if (3 < (long)uVar2) {
          lVar19 = uVar26 << 2;
          do {
            auVar9 = *(undefined1 (*) [16])(uVar31 + lVar19);
            auVar34._12_4_ = uStack_3f4;
            auVar37 = NEON_fmin(auVar9,auVar34,4);
            auVar8._12_4_ = uStack_404;
            auVar38 = NEON_fmax(auVar37,auVar8,4);
            auVar37._0_4_ = -(uint)(ABS(auVar9._0_4_) < (float)uStack_420);
            auVar37._4_4_ = -(uint)(ABS(auVar9._4_4_) < (float)((ulong)uStack_420 >> 0x20));
            auVar37._8_4_ = -(uint)(ABS(auVar9._8_4_) < fStack_418);
            auVar37._12_4_ = -(uint)(ABS(auVar9._12_4_) < fStack_414);
            fVar32 = auVar38._0_4_;
            fVar42 = fVar32 * fVar32;
            fVar33 = auVar38._4_4_;
            fVar43 = fVar33 * fVar33;
            fVar39 = auVar38._8_4_;
            fVar44 = fVar39 * fVar39;
            fVar40 = auVar38._12_4_;
            fVar45 = fVar40 * fVar40;
            auVar35._0_4_ =
                 (fVar32 * ((float)uStack_490 +
                           ((float)uStack_480 +
                           ((float)uStack_470 +
                           ((float)uStack_460 +
                           ((float)uStack_450 +
                           ((float)uStack_440 + (float)uStack_430 * fVar42) * fVar42) * fVar42) *
                           fVar42) * fVar42) * fVar42)) /
                 ((float)uStack_4d0 +
                 ((float)uStack_4c0 + ((float)uStack_4b0 + (float)uStack_4a0 * fVar42) * fVar42) *
                 fVar42);
            auVar35._4_4_ =
                 (fVar33 * ((float)((ulong)uStack_490 >> 0x20) +
                           ((float)((ulong)uStack_480 >> 0x20) +
                           ((float)((ulong)uStack_470 >> 0x20) +
                           ((float)((ulong)uStack_460 >> 0x20) +
                           ((float)((ulong)uStack_450 >> 0x20) +
                           ((float)((ulong)uStack_440 >> 0x20) +
                           (float)((ulong)uStack_430 >> 0x20) * fVar43) * fVar43) * fVar43) * fVar43
                           ) * fVar43) * fVar43)) /
                 ((float)((ulong)uStack_4d0 >> 0x20) +
                 ((float)((ulong)uStack_4c0 >> 0x20) +
                 ((float)((ulong)uStack_4b0 >> 0x20) + (float)((ulong)uStack_4a0 >> 0x20) * fVar43)
                 * fVar43) * fVar43);
            auVar35._8_4_ =
                 (fVar39 * (fStack_488 +
                           (fStack_478 +
                           (fStack_468 +
                           (fStack_458 +
                           (fStack_448 + (fStack_438 + fStack_428 * fVar44) * fVar44) * fVar44) *
                           fVar44) * fVar44) * fVar44)) /
                 (fStack_4c8 + (fStack_4b8 + (fStack_4a8 + fStack_498 * fVar44) * fVar44) * fVar44);
            auVar35._12_4_ =
                 (fVar40 * (fStack_484 +
                           (fStack_474 +
                           (fStack_464 +
                           (fStack_454 +
                           (fStack_444 + (fStack_434 + fStack_424 * fVar45) * fVar45) * fVar45) *
                           fVar45) * fVar45) * fVar45)) /
                 (fStack_4c4 + (fStack_4b4 + (fStack_4a4 + fStack_494 * fVar45) * fVar45) * fVar45);
            auVar35 = auVar35 ^ (auVar35 ^ auVar38) & auVar37;
            auVar9 = *(undefined1 (*) [16])(lVar17 + lVar19);
            pfVar3 = (float *)(uVar27 + lVar19);
            pfVar3[2] = auVar9._8_4_ * auVar35._8_4_;
            pfVar3[3] = auVar9._12_4_ * auVar35._12_4_;
            *pfVar3 = auVar9._0_4_ * auVar35._0_4_;
            pfVar3[1] = auVar9._4_4_ * auVar35._4_4_;
            uVar26 = uVar26 + 4;
            lVar19 = lVar19 + 0x10;
          } while ((long)uVar26 < lVar16);
        }
        if (lVar16 < (long)uVar23) {
          do {
            uStack_12c = *(undefined4 *)(uVar31 + lVar16 * 4);
            fVar32 = (float)FUN_1099adf44(&uStack_12c);
            *(float *)(uVar27 + lVar16 * 4) = fVar32 * *(float *)(lVar17 + lVar16 * 4);
            lVar16 = lVar16 + 1;
          } while (uVar23 - lVar16 != 0);
        }
      }
      else if (iVar46 == 2) {
        uVar26 = uVar23;
        if ((uStack_308 == 0) && (uVar26 = (ulong)-(uVar25 >> 2) & 3, (long)uVar23 <= (long)uVar26))
        {
          uVar26 = uVar23;
        }
        uVar2 = uVar23 - uVar26;
        uVar29 = uVar2 + 3;
        if ((long)uVar26 <= (long)uVar23) {
          uVar29 = uVar2;
        }
        lStack_300 = lVar24;
        if (0 < (long)uVar26) {
          uVar21 = 0;
          do {
            fVar32 = (float)_expf();
            *(float *)(uVar27 + uVar21 * 4) = *(float *)(lVar17 + uVar21 * 4) / (fVar32 + 1.0);
            uVar21 = uVar21 + 1;
          } while (uVar26 != uVar21);
        }
        lVar24 = lStack_300;
        iVar28 = iStack_314;
        lVar16 = (uVar29 & 0xfffffffffffffffc) + uVar26;
        auVar10._8_4_ = uStack_338;
        auVar10._0_8_ = uStack_340;
        auVar10._12_4_ = uStack_334;
        auVar11._8_4_ = uStack_328;
        auVar11._0_8_ = uStack_330;
        auVar11._12_4_ = uStack_324;
        auVar38._8_4_ = uStack_3d8;
        auVar38._0_8_ = uStack_3e0;
        auVar38._12_4_ = uStack_3d4;
        auVar9._8_4_ = uStack_3e8;
        auVar9._0_8_ = uStack_3f0;
        auVar9._12_4_ = uStack_3e4;
        if (3 < (long)uVar2) {
          lVar19 = uVar26 << 2;
          do {
            pfVar3 = (float *)(lVar17 + lVar19);
            fVar32 = *pfVar3;
            fVar33 = pfVar3[1];
            fVar39 = pfVar3[3];
            pfVar4 = (float *)(uVar31 + lVar19);
            auVar36._0_4_ = -*pfVar4;
            auVar36._4_4_ = -pfVar4[1];
            auVar36._8_4_ = -pfVar4[2];
            auVar36._12_4_ = -pfVar4[3];
            auVar34 = NEON_fmin(auVar36,auVar11,4);
            auVar34 = NEON_fmax(auVar34,auVar10,4);
            fVar45 = (float)(int)((float)uStack_350 * auVar34._0_4_ + 0.5);
            fVar47 = (float)(int)((float)((ulong)uStack_350 >> 0x20) * auVar34._4_4_ + 0.5);
            fVar49 = (float)(int)(fStack_348 * auVar34._8_4_ + 0.5);
            fVar51 = (float)(int)(fStack_344 * auVar34._12_4_ + 0.5);
            fVar40 = auVar34._0_4_ + (float)uStack_360 * fVar45 + (float)uStack_370 * fVar45;
            fVar42 = auVar34._4_4_ + (float)((ulong)uStack_360 >> 0x20) * fVar47 +
                     (float)((ulong)uStack_370 >> 0x20) * fVar47;
            fVar43 = auVar34._8_4_ + fStack_358 * fVar49 + fStack_368 * fVar49;
            fVar44 = auVar34._12_4_ + fStack_354 * fVar51 + fStack_364 * fVar51;
            fVar53 = (float)uStack_3c0;
            fVar54 = (float)((ulong)uStack_3c0 >> 0x20);
            fVar55 = (float)uStack_3b8;
            fVar56 = (float)((ulong)uStack_3b8 >> 0x20);
            auVar7._4_4_ = fVar47;
            auVar7._0_4_ = fVar45;
            auVar7._8_4_ = fVar49;
            auVar7._12_4_ = fVar51;
            auVar34 = NEON_fmax(auVar7,auVar38,4);
            auVar34 = NEON_fmin(auVar34,auVar9,4);
            iVar46 = (int)auVar34._0_4_ >> 2;
            iVar48 = (int)auVar34._4_4_ >> 2;
            iVar50 = (int)auVar34._8_4_ >> 2;
            iVar52 = (int)auVar34._12_4_ >> 2;
            fVar45 = (float)(iVar46 * 0x800000 + (int)fVar53);
            fVar47 = (float)(iVar48 * 0x800000 + (int)fVar54);
            fVar49 = (float)(iVar50 * 0x800000 + (int)fVar55);
            fVar51 = (float)(iVar52 * 0x800000 + (int)fVar56);
            auVar41._0_4_ =
                 (fVar40 + fVar53 +
                 fVar40 * fVar40 *
                 (fVar40 * ((float)uStack_3b0 + (float)uStack_3a0 * fVar40) + 0.5 +
                 fVar40 * fVar40 * fVar40 *
                 ((float)uStack_3d0 + fVar40 * ((float)uStack_390 + (float)uStack_380 * fVar40)))) *
                 fVar45 * fVar45 * fVar45 *
                 (float)(((int)auVar34._0_4_ + iVar46 * 0x1fd) * 0x800000 + (int)fVar53);
            auVar41._4_4_ =
                 (fVar42 + fVar54 +
                 fVar42 * fVar42 *
                 (fVar42 * ((float)((ulong)uStack_3b0 >> 0x20) +
                           (float)((ulong)uStack_3a0 >> 0x20) * fVar42) + 0.5 +
                 fVar42 * fVar42 * fVar42 *
                 ((float)((ulong)uStack_3d0 >> 0x20) +
                 fVar42 * ((float)((ulong)uStack_390 >> 0x20) +
                          (float)((ulong)uStack_380 >> 0x20) * fVar42)))) * fVar47 * fVar47 * fVar47
                 * (float)(((int)auVar34._4_4_ + iVar48 * 0x1fd) * 0x800000 + (int)fVar54);
            auVar41._8_4_ =
                 (fVar43 + fVar55 +
                 fVar43 * fVar43 *
                 (fVar43 * (fStack_3a8 + fStack_398 * fVar43) + 0.5 +
                 fVar43 * fVar43 * fVar43 *
                 (fStack_3c8 + fVar43 * (fStack_388 + fStack_378 * fVar43)))) * fVar49 * fVar49 *
                 fVar49 * (float)(((int)auVar34._8_4_ + iVar50 * 0x1fd) * 0x800000 + (int)fVar55);
            auVar41._12_4_ =
                 (fVar44 + fVar56 +
                 fVar44 * fVar44 *
                 (fVar44 * (fStack_3a4 + fStack_394 * fVar44) + 0.5 +
                 fVar44 * fVar44 * fVar44 *
                 (fStack_3c4 + fVar44 * (fStack_384 + fStack_374 * fVar44)))) * fVar51 * fVar51 *
                 fVar51 * (float)(((int)auVar34._12_4_ + iVar52 * 0x1fd) * 0x800000 + (int)fVar56);
            auVar34 = NEON_fmax(auVar41,auVar36,4);
            pfVar4 = (float *)(uVar27 + lVar19);
            pfVar4[2] = pfVar3[2] / (auVar34._8_4_ + fVar55);
            pfVar4[3] = fVar39 / (auVar34._12_4_ + fVar56);
            *pfVar4 = fVar32 / (auVar34._0_4_ + fVar53);
            pfVar4[1] = fVar33 / (auVar34._4_4_ + fVar54);
            uVar26 = uVar26 + 4;
            lVar19 = lVar19 + 0x10;
          } while ((long)uVar26 < lVar16);
        }
        if (lVar16 < (long)uVar23) {
          do {
            fVar32 = (float)_expf();
            *(float *)(uVar27 + lVar16 * 4) = *(float *)(lVar17 + lVar16 * 4) / (fVar32 + 1.0);
            lVar16 = lVar16 + 1;
          } while (uVar23 - lVar16 != 0);
        }
      }
      lVar24 = lVar24 + lStack_2e8 * 4;
      uVar31 = uVar27 + lStack_2f0;
      FUN_109c10e9c(auStack_2a8);
      FUN_109c10e9c(&uStack_250);
      FUN_109c10e9c(auStack_1f8);
      iVar30 = iVar30 + 1;
      uVar26 = uVar27;
      uVar27 = uVar31;
    } while (iVar30 != iVar28);
    lVar19 = *plStack_2b0;
    uVar20 = (uint)uStack_4e8;
    uVar23 = uStack_2f8;
    lVar17 = lStack_4e0;
    uVar31 = uStack_2e0;
    iVar30 = iStack_4ec;
  }
  uVar25 = uStack_4d4;
  uVar27 = lStack_320 << 2;
  lVar24 = *(long *)(lVar19 + 0x40);
  uVar26 = (ulong)uStack_4d4;
  lVar16 = (long)(int)(uVar20 * iVar30);
  if (uStack_4d4 == 0) {
    lVar16 = lStack_320;
  }
  _memcpy(lVar17,lVar24 + lVar16 * 4,uVar27);
  if ((((uVar25 & 1) == 0) && (iVar30 = (int)uVar31, iVar30 != 1)) && (0 < iVar28)) {
    iVar46 = 0;
    uVar26 = 0;
    if ((long)iVar30 != 0) {
      uVar26 = uVar27 / (ulong)(long)iVar30;
    }
    do {
      uVar23 = *(ulong *)(alStack_e0[0] + 0x40);
      _memcpy(uVar23,lVar24,uVar27);
      if (0 < iVar30) {
        lVar17 = lVar24 + lStack_320 * 4;
        uVar29 = uVar31;
        do {
          _memcpy(lVar24,uVar23,uVar26);
          lVar24 = lVar24 + (ulong)*(uint *)(param_1 + 0x94) * 4;
          uVar23 = uVar23 + (ulong)*(uint *)(param_1 + 0x94) * 4;
          _memcpy(lVar24,lVar17,uVar26);
          lVar24 = lVar24 + (ulong)*(uint *)(param_1 + 0x94) * 4;
          lVar17 = lVar17 + (ulong)*(uint *)(param_1 + 0x94) * 4;
          uVar25 = (int)uVar29 - 1;
          uVar29 = (ulong)uVar25;
        } while (uVar25 != 0);
      }
      iVar46 = iVar46 + 1;
    } while (iVar46 != iVar28);
  }
  FUN_109c10e9c(auStack_1a0);
  FUN_109c180ec(alStack_128);
  plVar13 = alStack_e0;
  FUN_109c180ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar13;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_128);
  FUN_109c180ec(alStack_e0);
  plVar14 = plVar13;
  __Unwind_Resume();
  pcStack_508 = FUN_109c39a48;
  uStack_530 = uVar27;
  uStack_528 = uVar23;
  uStack_520 = uVar26;
  plStack_518 = plVar13;
  puStack_510 = &stack0xfffffffffffffff0;
  plVar14[0xc] = 0;
  plVar14[0xb] = 0;
  plVar14[0xe] = 0;
  plVar14[0xd] = 0;
  plVar14[0x10] = 0;
  plVar14[0xf] = 0;
  plVar14[0x11] = 0;
  plVar14[10] = 0;
  plVar14[9] = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  plVar14[4] = 0;
  plVar14[3] = 0;
  plVar14[2] = 0;
  plVar14[1] = 0;
  *(undefined1 *)((long)plVar14 + 0x61) = 1;
  plVar14[0xd] = 0;
  plVar14[0xe] = 0;
  *(undefined4 *)(plVar14 + 0xf) = 0x3f800000;
  *(undefined1 *)(plVar14 + 0x11) = 0;
  *plVar14 = (long)&PTR_FUN_110b2cea8;
  plVar14[0x13] = 0;
  plVar14[0x12] = 0;
  plVar14[0x15] = 0;
  plVar14[0x14] = 0;
  func_0x000107c31940(auStack_548,&UNK_10f5a47b1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar14 + 6,auStack_548);
  if (cStack_531 < '\0') {
    __ZdlPv(auStack_548[0]);
  }
  return plVar14;
}



/* Entry: 109c39a48; end: 109c39b37;  */

undefined8 * FUN_109c39a48(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b2cea8;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a47b1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c39b38; end: 109c39b77;  */

undefined8 * FUN_109c39b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2cea8;
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



/* Entry: 109c39b78; end: 109c39b7b;  */

undefined8 * FUN_109c39b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2cea8;
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



/* Entry: 109c39b7c; end: 109c39b8f;  */

void FUN_109c39b7c(void)

{
  FUN_109c39b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c39b90; end: 109c39f13;  */

undefined *** FUN_109c39b90(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 auStack_218 [2];
  char cStack_201;
  long lStack_200;
  undefined ***pppuStack_1f8;
  undefined ***pppuStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  undefined ***pppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [88];
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [24];
  undefined1 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_cc;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  FUN_109c1bed0(&ppuStack_c8,**(undefined8 **)(param_1 + 0x68),*plVar14);
  func_0x000109c18360(*param_3,&ppuStack_c8);
  FUN_109c180ec(&ppuStack_c8);
  puVar7 = (uint *)(*plVar14 + 0xc);
  uVar2 = *puVar7;
  uVar15 = (ulong)uVar2;
  uVar1 = *(uint *)(*plVar14 + 8);
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  pppuVar11 = (undefined ***)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar7,uVar1);
  lVar13 = *plVar14;
  puVar7 = (uint *)(lVar13 + 8);
  pppuVar12 = (undefined ***)((ulong)&uStack_e8 | 4);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  pppuVar5 = pppuVar11;
  if (puVar7 != (uint *)&uStack_e8) {
    uVar1 = *puVar7;
    if (uVar1 != 0) {
      pppuVar5 = pppuVar12;
      _memmove(pppuVar12,lVar13 + 0xc,(long)(int)uVar1 << 2);
    }
    uStack_e8 = (ulong)uVar1;
  }
  uVar10 = 1;
  uStack_e8 = CONCAT44(1,(uint)uStack_e8);
  iVar9 = *(int *)(lVar13 + 0x3c);
  if (iVar9 == 0) {
    uVar10 = (ulong)(*puVar7 - 1);
  }
  lVar8 = *(long *)*param_3;
  if (0 < (int)uVar2) {
    uVar1 = *(uint *)((long)pppuVar12 + (long)(int)uVar10 * 4);
    uStack_1a8 = (ulong)uVar1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (int)pppuVar11 / (int)uVar2;
    }
    lStack_1a0 = (long)(int)uVar1;
    pppuVar12 = *(undefined ****)(lVar8 + 0x40);
    uStack_1b0 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    plStack_1c0 = plVar14;
    puStack_1b8 = param_3;
    do {
      ppuStack_c8 = &PTR_FUN_110b2bd90;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      func_0x000107c31940(auStack_a8,&UNK_10f5a33f8);
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_80 = 1;
      uStack_7c = 0x3f800000;
      ppuStack_140 = &PTR_FUN_110b2bd90;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_138 = 0;
      func_0x000107c31940(auStack_120,&UNK_10f5a33f8);
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_f8 = 1;
      uStack_f4 = 0x3f800000;
      FUN_109c0ffb0(auStack_198,&uStack_e8,pppuVar12,0);
      lVar13 = 0x3f800000;
      FUN_109c38548(auStack_198,uVar10,&ppuStack_c8,&ppuStack_140,*(undefined8 *)(param_1 + 0x68));
      uVar4 = uStack_100;
      _vDSP_vsadd(uStack_100,1,param_1 + 0xb0,uStack_100,1,lStack_1a0);
      uStack_cc = (undefined4)uStack_1a8;
      _vvrsqrtf(uVar4,uVar4,&uStack_cc);
      if (*(long *)(param_1 + 0x90) != 0) {
        func_0x000109c2e1ac(*(long *)(param_1 + 0x90),0xffffffff,&ppuStack_140,
                            *(undefined8 *)(param_1 + 0x68));
      }
      if (*(long *)(param_1 + 0xa0) == 0) {
        func_0x000109c2e1ac(&ppuStack_140,0xffffffff,&ppuStack_c8,*(undefined8 *)(param_1 + 0x68));
      }
      else {
        func_0x000109c2e1ac(&ppuStack_140,0xffffffff,&ppuStack_c8,*(undefined8 *)(param_1 + 0x68));
        func_0x000109c2dee0(*(undefined8 *)(param_1 + 0xa0),0xffffffff,&ppuStack_c8,
                            *(undefined8 *)(param_1 + 0x68));
      }
      func_0x000109c2e1ac(&ppuStack_140,uVar10,auStack_198,*(undefined8 *)(param_1 + 0x68));
      func_0x000109c2dee0(&ppuStack_c8,uVar10,auStack_198,*(undefined8 *)(param_1 + 0x68));
      FUN_109c10e9c(auStack_198);
      FUN_109c10e9c(&ppuStack_140);
      pppuVar5 = &ppuStack_c8;
      FUN_109c10e9c();
      pppuVar12 = (undefined ***)((long)pppuVar12 + uStack_1b0);
      uVar15 = uVar15 - 1;
      pppuVar11 = (undefined ***)0x1;
    } while (uVar15 != 0);
    lVar8 = *(long *)*puStack_1b8;
    iVar9 = *(int *)(*plStack_1c0 + 0x3c);
  }
  *(int *)(lVar8 + 0x3c) = iVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&ppuStack_c8);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_1c8 = FUN_109c39f14;
  pppuVar6[0xc] = (undefined **)0x0;
  pppuVar6[0xb] = (undefined **)0x0;
  pppuVar6[0xe] = (undefined **)0x0;
  pppuVar6[0xd] = (undefined **)0x0;
  pppuVar6[0x10] = (undefined **)0x0;
  pppuVar6[0xf] = (undefined **)0x0;
  pppuVar6[0x11] = (undefined **)0x0;
  pppuVar6[10] = (undefined **)0x0;
  pppuVar6[9] = (undefined **)0x0;
  pppuVar6[8] = (undefined **)0x0;
  pppuVar6[7] = (undefined **)0x0;
  pppuVar6[6] = (undefined **)0x0;
  pppuVar6[5] = (undefined **)0x0;
  pppuVar6[4] = (undefined **)0x0;
  pppuVar6[3] = (undefined **)0x0;
  pppuVar6[2] = (undefined **)0x0;
  pppuVar6[1] = (undefined **)0x0;
  *(undefined1 *)((long)pppuVar6 + 0x61) = 1;
  pppuVar6[0xd] = (undefined **)0x0;
  pppuVar6[0xe] = (undefined **)0x0;
  *(undefined4 *)(pppuVar6 + 0xf) = 0x3f800000;
  *(undefined1 *)(pppuVar6 + 0x11) = 0;
  *pppuVar6 = &PTR_FUN_110b2cee8;
  *(undefined4 *)(pppuVar6 + 0x12) = 0;
  pppuVar6[0x16] = (undefined **)0x0;
  pppuVar6[0x17] = (undefined **)0x0;
  pppuVar6[0x13] = (undefined **)0x0;
  pppuVar6[0x14] = (undefined **)0x0;
  lStack_200 = lVar13;
  pppuStack_1f8 = pppuVar12;
  pppuStack_1f0 = pppuVar11;
  uStack_1e8 = uVar10;
  lStack_1e0 = param_1;
  pppuStack_1d8 = pppuVar5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  pppuVar6[0x19] = (undefined **)0x0;
  pppuVar6[0x1a] = (undefined **)0x0;
  *(undefined1 *)(pppuVar6 + 0x1b) = 0;
  pppuVar6[0x1d] = (undefined **)0x0;
  pppuVar6[0x1c] = (undefined **)0x0;
  *(undefined8 *)((long)pppuVar6 + 0x104) = 0;
  *(undefined8 *)((long)pppuVar6 + 0xfc) = 0;
  pppuVar6[0x1f] = (undefined **)0x0;
  pppuVar6[0x1e] = (undefined **)0x0;
  *(undefined1 *)((long)pppuVar6 + 0x10c) = 1;
  func_0x000107c31940(auStack_218,&UNK_10f5a47b5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pppuVar6 + 6,auStack_218)
  ;
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  return pppuVar6;
}



/* Entry: 109c39f14; end: 109c3a04f;  */

undefined8 * FUN_109c39f14(undefined8 *param_1)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  
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
  *param_1 = &PTR_FUN_110b2cee8;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 1;
  func_0x000107c31940(auStack_58,&UNK_10f5a47b5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 109c3a050; end: 109c3a09f;  */

undefined8 * FUN_109c3a050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2cee8;
  FUN_10959b818(param_1 + 0x1f);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  FUN_10959b818(param_1 + 0x19);
  FUN_10959b818(param_1 + 0x16);
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



/* Entry: 109c3a0a0; end: 109c3a0a3;  */

undefined8 * FUN_109c3a0a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2cee8;
  FUN_10959b818(param_1 + 0x1f);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  FUN_10959b818(param_1 + 0x19);
  FUN_10959b818(param_1 + 0x16);
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



/* Entry: 109c3a0a4; end: 109c3a0b7;  */

void FUN_109c3a0a4(void)

{
  FUN_109c3a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c3a0b8; end: 109c3af1b;  */

void FUN_109c3a0b8(long param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  int iVar17;
  uint *puVar18;
  ulong uVar19;
  uint uStack_288;
  undefined8 auStack_284 [2];
  undefined4 uStack_274;
  long lStack_270;
  long *plStack_268;
  uint uStack_260;
  undefined8 uStack_25c;
  undefined8 uStack_254;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined8 uStack_244;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  uint auStack_230 [6];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long lStack_1f8;
  uint uStack_1f0;
  int iStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined1 uStack_15c;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)(param_1 + 0xb0);
  if (*plVar11 == 0) {
    func_0x000109c1e534(plVar11,*param_2 + 0x10);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0xc);
  }
  plStack_200 = param_2;
  lStack_1f8 = param_1;
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000105688514(&UNK_10f5a47bc);
    goto LAB_109c3ae7c;
  }
  param_2 = (long *)*param_2;
  lVar13 = *param_2;
  uVar9 = (ulong)&uStack_218 | 4;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  if ((int *)(lVar13 + 8U) == (int *)&uStack_218) {
    uVar5 = 0;
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)(lVar13 + 8U);
    if (iVar17 == 0) {
      iVar17 = 0;
      uVar5 = 0;
    }
    else {
      _memmove(uVar9,lVar13 + 0xc,(long)iVar17 << 2);
      uVar5 = *(uint *)(lVar13 + 8);
      iVar17 = uStack_218._4_4_;
    }
    uStack_218 = CONCAT44(uStack_218._4_4_,uVar5);
  }
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar5) {
    uVar5 = 5;
  }
  iVar8 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,uVar9,uVar5);
  lVar13 = *plVar11;
  auStack_230[2] = 0;
  auStack_230[3] = 0;
  auStack_230[4] = 0;
  auStack_230[5] = 0;
  auStack_230[0] = 0;
  auStack_230[1] = 0;
  if ((uint *)(lVar13 + 8U) == auStack_230) {
    uVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar13 + 8U);
    uVar5 = 0;
    if (uVar7 != 0) {
      _memmove((ulong)auStack_230 | 4,lVar13 + 0xc,(long)(int)uVar7 << 2);
      uVar5 = *(uint *)(lVar13 + 8);
    }
    auStack_230[0] = uVar5;
  }
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar5) {
    uVar5 = 5;
  }
  iVar4 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)auStack_230 | 4,uVar5);
  uVar5 = 0;
  if (iVar17 != 0) {
    uVar5 = iVar8 / iVar17;
  }
  uVar7 = 0;
  if (auStack_230[1] != 0) {
    uVar7 = iVar4 / (int)auStack_230[1];
  }
  if ((uVar7 != uVar5) && (*(int *)(*param_2 + 0x3c) != 2)) {
    iVar17 = *(int *)(uVar9 + (long)(int)(uint)uStack_218 * 4 + -4);
    uVar5 = (uint)uStack_218 & ((int)(uint)uStack_218 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar8 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,uVar9,uVar5);
    iStack_1ec = 0;
    if (iVar17 != 0) {
      iStack_1ec = iVar8 / iVar17;
    }
    uStack_1f0 = 4;
    uStack_1e8 = 1;
    uStack_1e4 = 1;
    uStack_1dc = 0;
    lVar13 = *param_2;
    puVar18 = (uint *)(lVar13 + 8);
    uVar5 = *puVar18 & ((int)*puVar18 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar8 = 0xf5749aa;
    iStack_1e0 = iVar17;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar5);
    uVar5 = uStack_1f0 & ((int)uStack_1f0 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar17 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_1ec,uVar5);
    puStack_1c0 = &UNK_10f574cf1;
    puStack_1b8 = (undefined *)0xf;
    puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,iVar8 == iVar17);
    puStack_1a8 = &UNK_10f574d01;
    uStack_1a0 = 0xe;
    FUN_10959b640(&puStack_1c0);
    uVar5 = uStack_1f0;
    if ((puVar18 != &uStack_1f0) && (iVar8 == iVar17)) {
      if (uStack_1f0 != 0) {
        _memmove(lVar13 + 0xc,&iStack_1ec,(long)(int)uStack_1f0 << 2);
      }
      *puVar18 = uVar5;
    }
    iVar17 = uStack_218._4_4_;
  }
  if (((uint)uStack_218 == 4) && (*(int *)(*param_2 + 0x3c) != 2)) {
    lVar13 = *(long *)(param_1 + 0xb0);
    iStack_1ec = *(int *)(param_1 + 0xa8);
    uStack_1f0 = 4;
    uStack_1dc = 0;
    uStack_1e8 = (undefined4)uStack_208;
    uStack_1e4 = (undefined4)uStack_210;
    iStack_1e0 = (int)((ulong)uStack_210 >> 0x20);
    puVar18 = (uint *)(lVar13 + 8);
    uVar5 = *puVar18 & ((int)*puVar18 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar8 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar5);
    uVar5 = uStack_1f0 & ((int)uStack_1f0 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar4 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_1ec,uVar5);
    puStack_1c0 = &UNK_10f574cf1;
    puStack_1b8 = (undefined *)0xf;
    puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,iVar8 == iVar4);
    puStack_1a8 = &UNK_10f574d01;
    uStack_1a0 = 0xe;
    FUN_10959b640(&puStack_1c0);
    uVar5 = uStack_1f0;
    if ((puVar18 != &uStack_1f0) && (iVar8 == iVar4)) {
      if (uStack_1f0 != 0) {
        _memmove(lVar13 + 0xc,&iStack_1ec,(long)(int)uStack_1f0 << 2);
      }
      *puVar18 = uVar5;
    }
    FUN_109c11f88(*plVar11);
    lVar13 = *(long *)(param_1 + 0xb0);
    iStack_1ec = *(int *)(param_1 + 0xa8);
    uStack_1e4 = 0;
    iStack_1e0 = 0;
    uStack_1f0 = 2;
    uStack_1dc = 0;
    puVar18 = (uint *)(lVar13 + 8);
    uVar5 = *puVar18 & ((int)*puVar18 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar8 = 0xf5749aa;
    uStack_1e8 = uVar7;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar5);
    uVar5 = uStack_1f0 & ((int)uStack_1f0 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar4 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_1ec,uVar5);
    puStack_1c0 = &UNK_10f574cf1;
    puStack_1b8 = (undefined *)0xf;
    puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,iVar8 == iVar4);
    puStack_1a8 = &UNK_10f574d01;
    uStack_1a0 = 0xe;
    FUN_10959b640(&puStack_1c0);
    uVar5 = uStack_1f0;
    if ((puVar18 != &uStack_1f0) && (iVar8 == iVar4)) {
      if (uStack_1f0 != 0) {
        _memmove(lVar13 + 0xc,&iStack_1ec,(long)(int)uStack_1f0 << 2);
      }
      *puVar18 = uVar5;
    }
  }
  uStack_23c = 0;
  uStack_234 = 0;
  uStack_248 = 2;
  uStack_244 = CONCAT44(uVar7,iVar17);
  lVar13 = *param_2;
  if (*(int *)(lVar13 + 0x3c) == 2) {
    uStack_254 = 0;
    uStack_25c = 0;
    uStack_24c = 0;
    uVar5 = (uint)uStack_218;
    uVar19 = uStack_218 & 0xffffffff;
    if ((uint)uStack_218 != 0) {
      _memcpy(&uStack_25c,uVar9,(long)(int)(uint)uStack_218 << 2);
    }
    uStack_260 = uVar5;
    uVar14 = 1;
    do {
      uVar15 = uVar14;
      if ((int)uVar19 < 1) break;
      puVar18 = &uStack_260 + uVar19;
      uVar19 = uVar19 - 1;
      uVar14 = *puVar18 * uVar14;
      uVar15 = uVar7;
    } while (uVar14 != uVar7);
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar5) {
      uVar5 = 5;
    }
    iVar8 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_25c,uVar5);
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = iVar8 / (int)uVar15;
    }
    uStack_244 = CONCAT44(uVar15,iVar4);
    lVar13 = *param_2;
  }
  uStack_248 = 2;
  FUN_109c11c4c(&puStack_1c0,lVar13);
  FUN_109c2a93c(&lStack_270,&uStack_1f0,&puStack_1c0);
  FUN_109c10e9c(&puStack_1c0);
  lVar13 = lStack_270;
  puVar18 = (uint *)(lStack_270 + 8);
  uVar5 = *puVar18 & ((int)*puVar18 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar5) {
    uVar5 = 5;
  }
  iVar8 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lStack_270 + 0xc,uVar5);
  uVar5 = uStack_248 & ((int)uStack_248 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar5) {
    uVar5 = 5;
  }
  iVar4 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_244,uVar5);
  puStack_1c0 = &UNK_10f574cf1;
  puStack_1b8 = (undefined *)0xf;
  puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,iVar8 == iVar4);
  puStack_1a8 = &UNK_10f574d01;
  uStack_1a0 = 0xe;
  FUN_10959b640(&puStack_1c0);
  uVar5 = uStack_248;
  if ((puVar18 != &uStack_248) && (iVar8 == iVar4)) {
    if (uStack_248 != 0) {
      _memmove(lVar13 + 0xc,&uStack_244,(long)(int)uStack_248 << 2);
    }
    *puVar18 = uVar5;
  }
  FUN_109c182f4(param_3,1);
  if ((*(char *)(lStack_270 + 0x48) == '\x02') && (*(char *)(*plVar11 + 0x48) == '\x02')) {
    plVar11 = (long *)*param_3;
    iVar17 = *(int *)(lStack_270 + 0xc);
    iStack_1e0 = *(int *)(param_1 + 0xa8);
    uStack_1f0 = 4;
    uStack_1e8 = 1;
    uStack_1e4 = 1;
    uStack_1dc = 0;
    iStack_1ec = iVar17;
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (&puStack_1c0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_1f0,2);
    func_0x000109c18360(plVar11,&puStack_1c0);
    FUN_109c180ec(&puStack_1c0);
    plVar16 = (long *)(param_1 + 8);
    lVar13 = *plVar16;
    if (lVar13 == 0) {
      if (*(char *)(param_1 + 0x84) == '\x01') {
        iVar8 = *(int *)(param_1 + 0x7c) +
                (int)(*(float *)(param_1 + 0x80) / *(float *)(param_1 + 0x78));
        if (iVar8 < -0x7f) {
          iVar8 = -0x80;
        }
        if (0x7e < iVar8) {
          iVar8 = 0x7f;
        }
        fStack_168 = (float)iVar8;
      }
      else {
        fStack_168 = -128.0;
      }
      if (*(char *)(param_1 + 0x8c) == '\x01') {
        iVar8 = *(int *)(param_1 + 0x7c) +
                (int)(*(float *)(param_1 + 0x88) / *(float *)(param_1 + 0x78));
        if (iVar8 < -0x7f) {
          iVar8 = -0x80;
        }
        if (0x7e < iVar8) {
          iVar8 = 0x7f;
        }
        fStack_164 = (float)iVar8;
      }
      else {
        fStack_164 = 127.0;
      }
      puStack_1c0 = (undefined *)(long)*(int *)(lStack_270 + 0x10);
      puStack_1b8 = (undefined *)(long)*(int *)(param_1 + 0xa8);
      uStack_188 = *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x4c);
      uStack_180 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x40);
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        uStack_178 = *(undefined8 *)(*(long *)(param_1 + 200) + 0x40);
      }
      else {
        uStack_178 = 0;
      }
      uStack_16c = *(undefined4 *)(param_1 + 0x78);
      uStack_1a0 = CONCAT71(uStack_1a0._1_7_,(char)*(undefined4 *)(lStack_270 + 0x50));
      uStack_1a0 = CONCAT44(*(undefined4 *)(lStack_270 + 0x4c),(undefined4)uStack_1a0);
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_170 = (undefined1)*(undefined4 *)(param_1 + 0x7c);
      uStack_160 = 0;
      uStack_15c = 1;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d8 = 0x55;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      iVar8 = (int)&puStack_1c0;
      puStack_1b0 = puStack_1c0;
      puStack_1a8 = puStack_1b8;
      plStack_c8 = plVar16;
      func_0x000109bd3250();
      if ((iVar8 == 0) && (lVar13 = *plVar16, lVar13 != 0)) goto LAB_109c3ad20;
    }
    else {
LAB_109c3ad20:
      lVar10 = *(long *)(lStack_270 + 0x40);
      lVar12 = *(long *)(*plVar11 + 0x40);
      if ((*(int *)(param_1 + 0x90) == iVar17) &&
         ((*(long *)(param_1 + 0x98) == lVar10 && (*(long *)(param_1 + 0xa0) == lVar12)))) {
LAB_109c3adb0:
        iVar17 = (int)lVar13;
        func_0x000109bce408();
        if (iVar17 == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (*plVar11 + 0x20,param_1 + 0x48);
          lVar13 = *plVar11;
          *(undefined4 *)(lVar13 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
          *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
          goto LAB_109c3ade4;
        }
      }
      else {
        func_0x000109bd3954(lVar13,0x55,(long)iVar17,0,0,lVar13 + 0x70,0xc,0,
                            *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90));
        if ((int)lVar13 == 0) {
          lVar13 = *plVar16;
          func_0x000109bd3f00(lVar13,0x55,lVar10,lVar12,0,0,0);
          if ((int)lVar13 == 0) {
            *(int *)(param_1 + 0x90) = iVar17;
            *(long *)(param_1 + 0x98) = lVar10;
            *(long *)(param_1 + 0xa0) = lVar12;
            lVar13 = *(long *)(param_1 + 8);
            goto LAB_109c3adb0;
          }
        }
      }
    }
  }
  else {
    uStack_1e8 = *(undefined4 *)(param_1 + 0xa8);
    uStack_1e4 = 0;
    iStack_1e0 = 0;
    uStack_1f0 = 2;
    iStack_1ec = (int)uStack_244;
    uStack_1dc = 0;
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (&puStack_1c0,(undefined8 *)**(undefined8 **)(param_1 + 0x68),&uStack_1f0,1);
    func_0x000109c18360(*param_3,&puStack_1c0);
    FUN_109c180ec(&puStack_1c0);
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      uVar6 = *(undefined8 *)(param_1 + 200);
    }
    else {
      uVar6 = 0;
    }
    FUN_109c2176c(lStack_270,*(undefined8 *)(param_1 + 0xb0),0x65,0x6f,0x70,*(undefined8 *)*param_3,
                  0xffffffff,*(undefined8 *)(param_1 + 0x68),uVar6,0x100);
    lVar13 = *(long *)*param_3;
    if (*(int *)(lStack_270 + 0x3c) == 1) {
      uStack_1e8 = *(uint *)(param_1 + 0xa8);
      uStack_1f0 = 4;
      uStack_1dc = 0;
      uStack_1e4 = 1;
      iStack_1e0 = 1;
      uVar5 = *(uint *)(lVar13 + 8) & ((int)*(uint *)(lVar13 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar5) {
        uVar5 = 5;
      }
      iVar8 = 0xf5749aa;
      iStack_1ec = iVar17;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar5);
      iVar17 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_1ec,4);
      puStack_1c0 = &UNK_10f574cf1;
      puStack_1b8 = (undefined *)0xf;
      puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,iVar8 == iVar17);
      puStack_1a8 = &UNK_10f574d01;
      uStack_1a0 = 0xe;
      FUN_10959b640(&puStack_1c0);
    }
    else if (*(int *)(lStack_270 + 0x3c) == 0) {
      iStack_1e0 = *(int *)(param_1 + 0xa8);
      uStack_1f0 = 4;
      uStack_1e8 = 1;
      uStack_1e4 = 1;
      uStack_1dc = 0;
      uVar5 = *(uint *)(lVar13 + 8) & ((int)*(uint *)(lVar13 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar5) {
        uVar5 = 5;
      }
      iVar8 = 0xf5749aa;
      iStack_1ec = iVar17;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar5);
      iVar17 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_1ec,4);
      puStack_1c0 = &UNK_10f574cf1;
      puStack_1b8 = (undefined *)0xf;
      puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,iVar8 == iVar17);
      puStack_1a8 = &UNK_10f574d01;
      uStack_1a0 = 0xe;
      FUN_10959b640(&puStack_1c0);
    }
    else {
      auStack_284[1] = 0;
      auStack_284[0] = 0;
      uStack_274 = 0;
      uVar5 = (uint)uStack_218;
      uVar19 = uStack_218 & 0xffffffff;
      lVar10 = (long)(int)(uint)uStack_218;
      if ((uint)uStack_218 != 0) {
        _memcpy(auStack_284,uVar9,lVar10 << 2);
      }
      uStack_288 = uVar5;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      if (auStack_230[0] == 0) {
        uVar7 = 0;
      }
      else {
        _memcpy(&uStack_1d8,(ulong)auStack_230 | 4,(long)(int)auStack_230[0] << 2);
        uVar7 = uStack_1d8._4_4_;
      }
      cVar1 = *(char *)(param_1 + 0x10c);
      lVar10 = lVar10 + -1;
      if ((1 < (int)uVar5) && (uVar5 = *(uint *)((long)auStack_284 + lVar10 * 4), uVar5 != uVar7)) {
        lVar10 = uVar19 - 1;
        do {
          uVar9 = lVar10 + 1;
          uVar5 = (&uStack_288)[lVar10] * uVar5;
          (&uStack_288)[lVar10] = uVar5;
          lVar10 = lVar10 + -1;
          uStack_288 = (int)uVar19 - 1;
          uVar19 = (ulong)uStack_288;
          if (uVar9 < 3) break;
        } while (uVar5 != uVar7);
      }
      uVar5 = uStack_288;
      *(undefined4 *)((long)auStack_284 + lVar10 * 4) = (undefined4)uStack_1d8;
      if (cVar1 == '\0') {
        uVar5 = uStack_288 & ((int)uStack_288 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar5) {
          uVar5 = 5;
        }
        iVar17 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,auStack_284,uVar5);
        uStack_1e8 = (&uStack_288)[(int)uStack_288];
        uStack_1e4 = 0;
        iStack_1e0 = 0;
        iStack_1ec = 0;
        if (uStack_1e8 != 0) {
          iStack_1ec = iVar17 / (int)uStack_1e8;
        }
        uStack_1f0 = 2;
        uStack_1dc = 0;
      }
      else {
        uStack_1e4 = 0;
        iStack_1e0 = 0;
        iStack_1ec = 0;
        uStack_1e8 = 0;
        uStack_1dc = 0;
        if (uStack_288 != 0) {
          _memcpy(&iStack_1ec,auStack_284,(long)(int)uStack_288 << 2);
        }
        uStack_1f0 = uVar5;
      }
      uVar7 = uStack_1f0;
      uVar5 = *(uint *)(lVar13 + 8) & ((int)*(uint *)(lVar13 + 8) >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar5) {
        uVar5 = 5;
      }
      iVar8 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar13 + 0xc,uVar5);
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar7) {
        uVar7 = 5;
      }
      iVar17 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_1ec,uVar7);
      puStack_1c0 = &UNK_10f574cf1;
      puStack_1b8 = (undefined *)0xf;
      puStack_1b0 = (undefined *)CONCAT71(puStack_1b0._1_7_,iVar8 == iVar17);
      puStack_1a8 = &UNK_10f574d01;
      uStack_1a0 = 0xe;
      FUN_10959b640(&puStack_1c0);
    }
    uVar5 = uStack_1f0;
    if (((uint *)(lVar13 + 8) != &uStack_1f0) && (iVar8 == iVar17)) {
      if (uStack_1f0 != 0) {
        _memmove(lVar13 + 0xc,&iStack_1ec,(long)(int)uStack_1f0 << 2);
      }
      *(uint *)(lVar13 + 8) = uVar5;
    }
    lVar13 = *(long *)*param_3;
    *(undefined4 *)(lVar13 + 0x3c) = *(undefined4 *)(lStack_270 + 0x3c);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar13 + 0x20,param_1 + 0x48);
    if (0.0 < *(float *)(param_1 + 0x108)) {
      FUN_109c18fcc(1.0 - *(float *)(param_1 + 0x108),*(undefined8 *)*param_3);
    }
LAB_109c3ade4:
    if (plStack_268 != (long *)0x0) {
      plVar11 = plStack_268 + 1;
      do {
        lVar13 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
      }
    }
    FUN_109c3af1c(&plStack_200);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000105688514(&UNK_10f5a47f3);
LAB_109c3ae7c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c3ae80);
  (*pcVar3)();
}



/* Entry: 109c3af1c; end: 109c3afa3;  */

undefined8 * FUN_109c3af1c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (((long *)*param_1)[1] - *(long *)*param_1 == 0x20) {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    FUN_109c1e9b8(param_1[1] + 0xb0,&uStack_30);
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
  }
  return param_1;
}



/* Entry: 109c3afa4; end: 109c3c0af;  */

/* WARNING: Removing unreachable block (ram,0x000109c3bf94) */

long FUN_109c3afa4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  long lStack_cf0;
  long lStack_ce0;
  undefined8 ***pppuStack_cd8;
  undefined1 *puStack_cd0;
  code *pcStack_cc8;
  undefined1 auStack_cc0 [24];
  undefined8 auStack_ca8 [3];
  undefined8 ***pppuStack_c90;
  ulong uStack_c88;
  ulong uStack_c80;
  undefined8 ***pppuStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  code *pcStack_c38;
  undefined1 auStack_c30 [24];
  code *pcStack_c18;
  undefined1 auStack_c10 [24];
  code *pcStack_bf8;
  undefined1 auStack_bf0 [24];
  code *pcStack_bd8;
  undefined1 auStack_bd0 [24];
  code *pcStack_bb8;
  undefined1 auStack_bb0 [24];
  code *pcStack_b98;
  undefined1 auStack_b90 [24];
  code *pcStack_b78;
  undefined1 auStack_b70 [24];
  code *pcStack_b58;
  undefined1 auStack_b50 [24];
  code *pcStack_b38;
  undefined1 auStack_b30 [24];
  code *pcStack_b18;
  undefined1 auStack_b10 [24];
  code *pcStack_af8;
  undefined1 auStack_af0 [24];
  code *pcStack_ad8;
  undefined1 auStack_ad0 [24];
  code *pcStack_ab8;
  undefined1 auStack_ab0 [24];
  code *pcStack_a98;
  undefined1 auStack_a90 [24];
  code *pcStack_a78;
  undefined1 auStack_a70 [24];
  code *pcStack_a58;
  undefined1 auStack_a50 [24];
  code *pcStack_a38;
  undefined1 auStack_a30 [24];
  code *pcStack_a18;
  undefined1 auStack_a10 [24];
  code *pcStack_9f8;
  undefined1 auStack_9f0 [24];
  code *pcStack_9d8;
  undefined1 auStack_9d0 [24];
  code *pcStack_9b8;
  undefined1 auStack_9b0 [24];
  code *pcStack_998;
  undefined1 auStack_990 [24];
  code *pcStack_978;
  undefined1 auStack_970 [24];
  code *pcStack_958;
  undefined1 auStack_950 [24];
  code *pcStack_938;
  undefined1 auStack_930 [24];
  code *pcStack_918;
  undefined1 auStack_910 [24];
  code *pcStack_8f8;
  undefined1 auStack_8f0 [24];
  code *pcStack_8d8;
  undefined1 auStack_8d0 [24];
  code *pcStack_8b8;
  undefined1 auStack_8b0 [24];
  code *pcStack_898;
  undefined1 auStack_890 [24];
  code *pcStack_878;
  undefined1 auStack_870 [24];
  code *pcStack_858;
  undefined1 auStack_850 [24];
  code *pcStack_838;
  undefined1 auStack_830 [24];
  code *pcStack_818;
  undefined1 auStack_810 [24];
  code *pcStack_7f8;
  undefined1 auStack_7f0 [24];
  code *pcStack_7d8;
  undefined1 auStack_7d0 [24];
  code *pcStack_7b8;
  undefined1 auStack_7b0 [24];
  code *pcStack_798;
  undefined1 auStack_790 [24];
  code *pcStack_778;
  undefined1 auStack_770 [24];
  code *pcStack_758;
  undefined1 auStack_750 [24];
  code *pcStack_738;
  undefined1 auStack_730 [24];
  code *pcStack_718;
  undefined1 auStack_710 [24];
  code *pcStack_6f8;
  undefined1 auStack_6f0 [24];
  code *pcStack_6d8;
  undefined1 auStack_6d0 [24];
  code *pcStack_6b8;
  undefined1 auStack_6b0 [24];
  code *pcStack_698;
  undefined1 auStack_690 [24];
  code *pcStack_678;
  undefined1 auStack_670 [24];
  code *pcStack_658;
  undefined1 auStack_650 [24];
  code *pcStack_638;
  undefined1 auStack_630 [24];
  code *pcStack_618;
  undefined1 auStack_610 [24];
  code *pcStack_5f8;
  undefined1 auStack_5f0 [24];
  code *pcStack_5d8;
  undefined1 auStack_5d0 [24];
  code *pcStack_5b8;
  undefined1 auStack_5b0 [24];
  code *pcStack_598;
  undefined1 auStack_590 [24];
  code *pcStack_578;
  undefined1 auStack_570 [24];
  code *pcStack_558;
  undefined1 auStack_550 [24];
  code *pcStack_538;
  undefined1 auStack_530 [24];
  code *pcStack_518;
  undefined1 auStack_510 [24];
  code *pcStack_4f8;
  undefined1 auStack_4f0 [24];
  code *pcStack_4d8;
  undefined1 auStack_4d0 [24];
  code *pcStack_4b8;
  undefined1 auStack_4b0 [24];
  code *pcStack_498;
  undefined1 auStack_490 [24];
  code *pcStack_478;
  undefined1 auStack_470 [24];
  code *pcStack_458;
  undefined1 auStack_450 [24];
  code *pcStack_438;
  undefined1 auStack_430 [24];
  code *pcStack_418;
  undefined1 auStack_410 [24];
  code *pcStack_3f8;
  undefined1 auStack_3f0 [24];
  code *pcStack_3d8;
  undefined1 auStack_3d0 [24];
  code *pcStack_3b8;
  undefined1 auStack_3b0 [24];
  code *pcStack_398;
  undefined1 auStack_390 [24];
  code *pcStack_378;
  undefined1 auStack_370 [24];
  code *pcStack_358;
  undefined1 auStack_350 [24];
  code *pcStack_338;
  undefined1 auStack_330 [24];
  code *pcStack_318;
  undefined1 auStack_310 [24];
  code *pcStack_2f8;
  undefined1 auStack_2f0 [24];
  code *pcStack_2d8;
  undefined1 auStack_2d0 [24];
  code *pcStack_2b8;
  undefined1 auStack_2b0 [24];
  code *pcStack_298;
  undefined1 auStack_290 [24];
  code *pcStack_278;
  undefined1 auStack_270 [24];
  code *pcStack_258;
  undefined1 auStack_250 [24];
  code *pcStack_238;
  undefined1 auStack_230 [24];
  code *pcStack_218;
  undefined1 auStack_210 [24];
  code *pcStack_1f8;
  undefined1 auStack_1f0 [24];
  code *pcStack_1d8;
  undefined1 auStack_1d0 [24];
  code *pcStack_1b8;
  undefined1 auStack_1b0 [24];
  code *pcStack_198;
  undefined1 auStack_190 [24];
  code *pcStack_178;
  undefined1 auStack_170 [24];
  code *pcStack_158;
  undefined1 auStack_150 [24];
  code *pcStack_138;
  undefined1 auStack_130 [24];
  code *pcStack_118;
  undefined1 auStack_110 [24];
  code *pcStack_f8;
  undefined1 auStack_f0 [24];
  code *pcStack_d8;
  undefined1 auStack_d0 [24];
  code *pcStack_b8;
  undefined1 auStack_b0 [24];
  code *pcStack_98;
  undefined1 auStack_90 [24];
  code *pcStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    func_0x000107c3192c(&pppuStack_c70,*puVar8,puVar8[1]);
  }
  else {
    uStack_c68 = puVar8[1];
    pppuStack_c70 = (undefined8 ***)*puVar8;
    uStack_c60 = puVar8[2];
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0xf8) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    func_0x000107c3192c(&pppuStack_c90,*puVar8,puVar8[1]);
  }
  else {
    uStack_c88 = puVar8[1];
    pppuStack_c90 = (undefined8 ***)*puVar8;
    uStack_c80 = puVar8[2];
  }
  ppppuVar5 = &pppuStack_c70;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
            (ppppuVar5,&UNK_10f5a483c);
  if ((((int)ppppuVar5 == 0) && ((*(byte *)(param_1 + 0x16) >> 6 & 1) != 0)) &&
     (1 < *(uint *)(param_1 + 0x1d0))) {
    if (uStack_c60 < 0) {
      uStack_c68 = 5;
      ppppuVar5 = (undefined8 ****)pppuStack_c70;
    }
    else {
      uStack_c60 = CONCAT17(5,(undefined7)uStack_c60);
      ppppuVar5 = &pppuStack_c70;
    }
    *(undefined4 *)ppppuVar5 = 0x6e6f6367;
    *(undefined2 *)((long)ppppuVar5 + 4) = 0x76;
    if ((*(int *)(param_1 + 0x1d0) == *(int *)(param_1 + 0x118)) && (0 < *(int *)(param_1 + 0x28)))
    {
      uVar11 = *(ulong *)(param_1 + 0x20);
      puVar1 = (ulong *)(param_1 + 0x20);
      if ((uVar11 & 1) != 0) {
        puVar1 = (ulong *)(uVar11 + 7);
      }
      if (*(int *)(*puVar1 + 0x5c) == 1) {
        if (uStack_c60 < 0) {
          uStack_c68 = 9;
          ppppuVar5 = (undefined8 ****)pppuStack_c70;
        }
        else {
          uStack_c60 = CONCAT17(9,(undefined7)uStack_c60);
          ppppuVar5 = &pppuStack_c70;
        }
        *(undefined2 *)(ppppuVar5 + 1) = 0x76;
        *ppppuVar5 = (undefined8 ***)0x6e6f636874706564;
      }
    }
  }
  if ((bRam00000001137e1b18 & 1) == 0) {
    iVar4 = 0x137e1b18;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107c31940(&uStack_c50,&UNK_10f5a5127);
      pcStack_c38 = FUN_109c41024;
      func_0x000107c31940(auStack_c30,&UNK_10f5a483c);
      pcStack_c18 = FUN_109c3e724;
      func_0x000107c31940(auStack_c10,&UNK_10f5a56ae);
      pcStack_bf8 = FUN_109c3f934;
      func_0x000107c31940(auStack_bf0,&UNK_10f5a49db);
      pcStack_bd8 = FUN_109c3d180;
      func_0x000107c31940(auStack_bd0,&DAT_10f577b9e);
      pcStack_bb8 = FUN_109c3d380;
      func_0x000107c31940(auStack_bb0,&UNK_10f5a4b86);
      pcStack_b98 = FUN_109c3d5b4;
      func_0x000107c31940(auStack_b90,&UNK_10f5a5170);
      pcStack_b78 = FUN_109c41724;
      func_0x000107c31940(auStack_b70,&UNK_10f5a4847);
      pcStack_b58 = FUN_109c3dd48;
      func_0x000107c31940(auStack_b50,&UNK_10f5a523c);
      pcStack_b38 = FUN_109c4216c;
      func_0x000107c31940(auStack_b30,&UNK_10f5a56b5);
      pcStack_b18 = FUN_109c435ac;
      func_0x000107c31940(auStack_b10,&UNK_10f5a56bd);
      pcStack_af8 = FUN_109c40e6c;
      func_0x000107c31940(auStack_af0,&DAT_10f48702d);
      pcStack_ad8 = FUN_109c3fdbc;
      func_0x000107c31940(auStack_ad0,&UNK_10f5a4841);
      pcStack_ab8 = FUN_109c3fe98;
      func_0x000107c31940(auStack_ab0,&UNK_10f5a56c5);
      pcStack_a98 = FUN_109c3d90c;
      func_0x000107c31940(auStack_a90,&UNK_10f596393);
      pcStack_a78 = FUN_109c3fa8c;
      func_0x000107c31940(auStack_a70,&UNK_10f5a48b5);
      pcStack_a58 = FUN_109c3c2ac;
      func_0x000107c31940(auStack_a50,&UNK_10f5a56d0);
      pcStack_a38 = FUN_109c40b10;
      func_0x000107c31940(auStack_a30,&UNK_10f57e830);
      pcStack_a18 = FUN_109c457a8;
      func_0x000107c31940(auStack_a10,&UNK_10f5a3b8e);
      pcStack_9f8 = FUN_109c40cd8;
      func_0x000107c31940(auStack_9f0,&UNK_10f5986df);
      pcStack_9d8 = FUN_109c3d4d4;
      func_0x000107c31940(auStack_9d0,&UNK_10f5a3bb5);
      pcStack_9b8 = FUN_109c42fa0;
      func_0x000107c31940(auStack_9b0,&UNK_10f5a56d4);
      pcStack_998 = FUN_109c4323c;
      func_0x000107c31940(auStack_990,&UNK_10f5a56dc);
      pcStack_978 = FUN_109c458a0;
      func_0x000107c31940(auStack_970,&UNK_10f5a56e3);
      pcStack_958 = FUN_109c45940;
      func_0x000107c31940(auStack_950,&UNK_10f5a56ea);
      pcStack_938 = FUN_109c42ad0;
      func_0x000107c31940(auStack_930,&UNK_10f5a4cb5);
      pcStack_918 = FUN_109c3da24;
      func_0x000107c31940(auStack_910,&UNK_10f5a39fa);
      pcStack_8f8 = FUN_109c43040;
      func_0x000107c31940(auStack_8f0,&UNK_10f5a5316);
      pcStack_8d8 = FUN_109c42b70;
      func_0x000107c31940(auStack_8d0,&UNK_10f5a56f3);
      pcStack_8b8 = FUN_109c43420;
      func_0x000107c31940(auStack_8b0,&UNK_10f491858);
      pcStack_898 = FUN_109c49130;
      func_0x000107c31940(auStack_890,"slice");
      pcStack_878 = FUN_109c42d60;
      func_0x000107c31940(auStack_870,&UNK_10f5a56fb);
      pcStack_858 = FUN_109c42e70;
      func_0x000107c31940(auStack_850,&UNK_10f5a5152);
      pcStack_838 = FUN_109c41490;
      func_0x000107c31940(auStack_830,&DAT_10f3dd8e4);
      pcStack_818 = FUN_109c43718;
      func_0x000107c31940(auStack_810,&DAT_10f48d7c8);
      pcStack_7f8 = FUN_109c439d4;
      func_0x000107c31940(auStack_7f0,&DAT_10f2da2c7);
      pcStack_7d8 = FUN_109c43b38;
      func_0x000107c31940(auStack_7d0,&DAT_10f324ae5);
      pcStack_7b8 = FUN_109c43870;
      func_0x000107c31940(auStack_7b0,"exp");
      pcStack_798 = FUN_109c43c9c;
      func_0x000107c31940(auStack_790,&DAT_10f3dd908);
      pcStack_778 = FUN_109c43df4;
      func_0x000107c31940(auStack_770,&DAT_10f3dd8e9);
      pcStack_758 = FUN_109c43f4c;
      func_0x000107c31940(auStack_750,&DAT_10f49182e);
      pcStack_738 = FUN_109c440a4;
      func_0x000107c31940(auStack_730,&DAT_10f491680);
      pcStack_718 = FUN_109c441fc;
      func_0x000107c31940(auStack_710,&DAT_10f42625c);
      pcStack_6f8 = FUN_109c44354;
      func_0x000107c31940(auStack_6f0,&UNK_10f5a5706);
      pcStack_6d8 = FUN_109c4474c;
      func_0x000107c31940(auStack_6d0,&UNK_10f5a570a);
      pcStack_6b8 = FUN_109c448b0;
      func_0x000107c31940(auStack_6b0,&UNK_10f5a571a);
      pcStack_698 = FUN_109c44a14;
      func_0x000107c31940(auStack_690,&UNK_10f5a5723);
      pcStack_678 = FUN_109c44b6c;
      func_0x000107c31940(auStack_670,&DAT_10f2e8c7d);
      pcStack_658 = FUN_109c42fa0;
      func_0x000107c31940(auStack_650,&UNK_10f5a572c);
      pcStack_638 = FUN_109c44cc4;
      func_0x000107c31940(auStack_630,&UNK_10f5a54c5);
      pcStack_618 = FUN_109c459e0;
      func_0x000107c31940(auStack_610,&UNK_10f5a5732);
      pcStack_5f8 = FUN_109c45cc0;
      func_0x000107c31940(auStack_5f0,&DAT_10f5a554f);
      pcStack_5d8 = FUN_109c460e0;
      func_0x000107c31940(auStack_5d0,&UNK_10f5a5736);
      pcStack_5b8 = FUN_109c46398;
      func_0x000107c31940(auStack_5b0,&UNK_10f5a573a);
      pcStack_598 = FUN_109c467a0;
      func_0x000107c31940(auStack_590,&UNK_10f5a573f);
      pcStack_578 = FUN_109c46bc4;
      func_0x000107c31940(auStack_570,&UNK_10f5a5573);
      pcStack_558 = FUN_109c46c64;
      func_0x000107c31940(auStack_550,&DAT_10f5a5592);
      pcStack_538 = FUN_109c46e70;
      func_0x000107c31940(auStack_530,&DAT_10f5a5597);
      pcStack_518 = FUN_109c46e70;
      func_0x000107c31940(auStack_510,&DAT_10f2dd06f);
      pcStack_4f8 = FUN_109c46fe0;
      func_0x000107c31940(auStack_4f0,&UNK_10f5a574d);
      pcStack_4d8 = FUN_109c47020;
      func_0x000107c31940(auStack_4d0,&UNK_10f5a5757);
      pcStack_4b8 = FUN_109c470b8;
      func_0x000107c31940(auStack_4b0,&UNK_10f5a5762);
      pcStack_498 = FUN_109c47200;
      func_0x000107c31940(auStack_490,&UNK_10f5a3b93);
      pcStack_478 = FUN_109c47254;
      func_0x000107c31940(auStack_470,&UNK_10f5a5773);
      pcStack_458 = FUN_109c47498;
      func_0x000107c31940(auStack_450,&UNK_10f5a5606);
      pcStack_438 = FUN_109c474e0;
      func_0x000107c31940(auStack_430,&UNK_10f5a577e);
      pcStack_418 = FUN_109c47574;
      func_0x000107c31940(auStack_410,&UNK_10f5a5789);
      pcStack_3f8 = FUN_109c476bc;
      func_0x000107c31940(auStack_3f0,&UNK_10f5a5792);
      pcStack_3d8 = FUN_109c478b8;
      func_0x000107c31940(auStack_3d0,&UNK_10f5a579f);
      pcStack_3b8 = FUN_109c47bb0;
      func_0x000107c31940(auStack_3b0,&UNK_10f5a57a7);
      pcStack_398 = FUN_109c47c24;
      func_0x000107c31940(auStack_390,&UNK_10f5a57b7);
      pcStack_378 = FUN_109c47e58;
      func_0x000107c31940(auStack_370,&UNK_10f5a564b);
      pcStack_358 = FUN_109c47ec8;
      func_0x000107c31940(auStack_350,&DAT_10f518d33);
      pcStack_338 = FUN_109c485a4;
      func_0x000107c31940(auStack_330,&UNK_10f5a57bc);
      pcStack_318 = FUN_109c485e4;
      func_0x000107c31940(auStack_310,&UNK_10f5a57c1);
      pcStack_2f8 = FUN_109c44e28;
      func_0x000107c31940(auStack_2f0,"range");
      pcStack_2d8 = FUN_109c484e4;
      func_0x000107c31940(auStack_2d0,&UNK_10f5a57c8);
      pcStack_2b8 = FUN_109c48524;
      func_0x000107c31940(auStack_2b0,&UNK_10f5a57cc);
      pcStack_298 = FUN_109c48564;
      func_0x000107c31940(auStack_290,&DAT_10f595cf3);
      pcStack_278 = FUN_109c48624;
      func_0x000107c31940(auStack_270,"square");
      pcStack_258 = FUN_109c44f80;
      func_0x000107c31940(auStack_250,&UNK_10f5a57d2);
      pcStack_238 = FUN_109c450d8;
      func_0x000107c31940(auStack_230,&UNK_10f49173f);
      pcStack_218 = FUN_109c45230;
      func_0x000107c31940(auStack_210,&UNK_10f466685);
      pcStack_1f8 = FUN_109c45388;
      func_0x000107c31940(auStack_1f0,"select");
      pcStack_1d8 = FUN_109c48728;
      func_0x000107c31940(auStack_1d0,"fill");
      pcStack_1b8 = FUN_109c454ec;
      func_0x000107c31940(auStack_1b0,&UNK_10f5a57d6);
      pcStack_198 = FUN_109c45650;
      func_0x000107c31940(auStack_190,&UNK_10f5a57da);
      pcStack_178 = FUN_109c48768;
      func_0x000107c31940(auStack_170,&UNK_10f5a57e6);
      pcStack_158 = FUN_109c488c8;
      func_0x000107c31940(auStack_150,&UNK_10f491797);
      pcStack_138 = FUN_109c48a2c;
      func_0x000107c31940(auStack_130,&UNK_10f5a57ee);
      pcStack_118 = FUN_109c48b84;
      func_0x000107c31940(auStack_110,&UNK_10f5a57fd);
      pcStack_f8 = FUN_109c48ce8;
      func_0x000107c31940(auStack_f0,&UNK_10f5a5809);
      pcStack_d8 = FUN_109c48e4c;
      func_0x000107c31940(auStack_d0,&UNK_10f5a580e);
      pcStack_b8 = FUN_109c48fd8;
      func_0x000107c31940(auStack_b0,&UNK_10f5a5818);
      pcStack_98 = FUN_109c3c0b0;
      func_0x000107c31940(auStack_90,&UNK_10f5a5823);
      pcStack_78 = FUN_109c3c150;
      FUN_109c49478(&uStack_c50,0x5f);
      lVar12 = 0xbe0;
      do {
        lVar12 = lVar12 + -0x20;
      } while (lVar12 != 0);
      ___cxa_guard_release(0x1137e1b18);
    }
  }
  uVar6 = 0x1137e1b20;
  func_0x000107c31944(0x1137e1b20,&pppuStack_c70);
  uVar11 = uRam00000001137e1b28;
  if (uRam00000001137e1b28 != 0) {
    uVar14 = uRam00000001137e1b28 - 1;
    if ((uRam00000001137e1b28 & uVar14) == 0) {
      uVar15 = uVar14 & uVar6;
    }
    else {
      uVar15 = uVar6;
      if (uRam00000001137e1b28 <= uVar6) {
        uVar15 = 0;
        if (uRam00000001137e1b28 != 0) {
          uVar15 = uVar6 / uRam00000001137e1b28;
        }
        uVar15 = uVar6 - uVar15 * uRam00000001137e1b28;
      }
    }
    plVar9 = *(long **)(lRam00000001137e1b20 + uVar15 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          uVar10 = 0x1137e1b20;
          func_0x000104c4fbc4(0x1137e1b20,plVar9 + 2,&pppuStack_c70);
          if ((uVar10 & 1) != 0) {
            if ((code *)plVar9[5] != (code *)0x0) {
              (*(code *)plVar9[5])(param_1,param_2);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (param_1 + 0x48,&pppuStack_c90);
              ppppuVar5 = (undefined8 ****)(param_1 + 0x68);
              FUN_109c36eec(ppppuVar5,param_2);
              if ((long)uStack_c80 < 0) {
                ppppuVar5 = (undefined8 ****)pppuStack_c90;
                __ZdlPv();
              }
              if (uStack_c60 < 0) {
                ppppuVar5 = (undefined8 ****)pppuStack_c70;
                __ZdlPv();
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
                ___stack_chk_fail();
                lVar12 = -0xbe0;
                pcVar13 = (char *)(uVar6 + 0xbd7);
                do {
                  if (*pcVar13 < '\0') {
                    __ZdlPv(*(undefined8 *)(pcVar13 + -0x17));
                  }
                  lVar12 = lVar12 + 0x20;
                  pcVar13 = pcVar13 + -0x20;
                } while (lVar12 != 0);
                ___cxa_guard_abort(0x1137e1b18);
                if ((long)uStack_c80 < 0) {
                  __ZdlPv(pppuStack_c90);
                }
                if (uStack_c60 < 0) {
                  __ZdlPv(pppuStack_c70);
                }
                ppppuVar7 = ppppuVar5;
                __Unwind_Resume();
                pcStack_cc8 = FUN_109c3c0b0;
                puVar8 = (undefined8 *)((ulong)ppppuVar7[0x20] & 0xfffffffffffffffc);
                lStack_ce0 = lVar12;
                pppuStack_cd8 = ppppuVar5;
                puStack_cd0 = &stack0xfffffffffffffff0;
                if (*(char *)((long)puVar8 + 0x17) < '\0') {
                  func_0x000107c3192c(&uStack_d00,*puVar8,puVar8[1]);
                }
                else {
                  uStack_cf8 = puVar8[1];
                  uStack_d00 = *puVar8;
                  lStack_cf0 = puVar8[2];
                }
                lVar12 = 0x90;
                __Znwm(0x90);
                FUN_109c2cff8();
                if (lStack_cf0 < 0) {
                  __ZdlPv(uStack_d00);
                }
                return lVar12;
              }
              return param_1;
            }
            break;
          }
        }
        else {
          if ((uVar11 & uVar14) == 0) {
            uVar10 = uVar10 & uVar14;
          }
          else if (uVar11 <= uVar10) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar10 / uVar11;
            }
            uVar10 = uVar10 - uVar2 * uVar11;
          }
          if (uVar10 != uVar15) break;
        }
      }
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_cc0,&UNK_10f5a4851,&pppuStack_c70);
  FUN_109259240(auStack_ca8,auStack_cc0,&UNK_10f5a4893);
  uVar11 = uStack_c88;
  ppppuVar5 = (undefined8 ****)pppuStack_c90;
  if (-1 < (long)uStack_c80) {
    uVar11 = uStack_c80 >> 0x38;
    ppppuVar5 = &pppuStack_c90;
  }
  puVar8 = auStack_ca8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppppuVar5,uVar11);
  uStack_c48 = puVar8[1];
  uStack_c50 = *puVar8;
  uStack_c40 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  func_0x000105687ee0(&uStack_c50);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c3b24c);
  (*pcVar3)();
}



/* Entry: 109c3c0b0; end: 109c3c14f;  */

undefined8 FUN_109c3c0b0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar2,puVar2[1]);
  }
  else {
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    lStack_30 = puVar2[2];
  }
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_109c2cff8();
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return uVar1;
}



/* Entry: 109c3c150; end: 109c3c253;  */

undefined8 FUN_109c3c150(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*puVar3,puVar3[1]);
  }
  else {
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    lStack_40 = puVar3[2];
  }
  if ((*(char *)(param_1 + 0x204) != '\x10') && (*(char *)(param_1 + 0x204) != '\b')) {
    func_0x000105688514(&UNK_10f5a5834);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3c210);
    (*pcVar1)();
  }
  uVar2 = 0x98;
  __Znwm(0x98);
  FUN_109c545e4();
  FUN_109c3c254(param_1,uVar2);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return uVar2;
}



/* Entry: 109c3c254; end: 109c3c2ab;  */

long FUN_109c3c254(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(param_1 + 0x200);
  if (*(int *)(param_1 + 0x204) == 0x10) {
    uVar21 = 0xffff8000;
    uVar19 = 0x10;
LAB_109c3c280:
    *(uint *)((long)param_2 + 0x7c) =
         (*(int *)(param_1 + 0x1a0) << (ulong)uVar19) >> uVar19 ^ uVar21;
    return param_1;
  }
  if (*(int *)(param_1 + 0x204) == 8) {
    uVar21 = 0xffffff80;
    uVar19 = 0x18;
    goto LAB_109c3c280;
  }
  puVar16 = &UNK_10f5a5878;
  func_0x000105688514();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = &UNK_10f5a489b;
  iStack_98 = 0x19;
  uStack_94 = 0;
  iStack_90 = (int)puVar16;
  iVar15 = iStack_90;
  uStack_8c = (undefined4)((ulong)puVar16 >> 0x20);
  uVar24 = uStack_8c;
  pcStack_88 = "";
  uStack_80 = 0;
  FUN_109c3ca80(&uStack_a0,&UNK_10f5a48b5,0xc);
  if (puVar16[0x1a4] != '\x01' || *(int *)(puVar16 + 0x194) != 0) {
    uStack_a0 = &UNK_10f5a489b;
    iStack_98 = 0x19;
    uStack_94 = 0;
    pcStack_88 = "";
    uStack_80 = 0;
    iStack_90 = iVar15;
    uStack_8c = uVar24;
    FUN_109c3cb24(&uStack_a0,1);
  }
  iVar15 = *(int *)(puVar16 + 0x118);
  uStack_a0 = &UNK_10f5a489b;
  iStack_98 = 0x19;
  uStack_94 = 0;
  pcStack_88 = "num_output";
  uStack_80 = 10;
  iStack_90 = iVar15;
  FUN_109c14834(&uStack_a0);
  lVar17 = 0x110;
  __Znwm();
  FUN_109c39f14();
  *(int *)(lVar17 + 0xa8) = iVar15;
  if ((puVar16[0x1a4] & 1) == 0) {
    puVar23 = (ulong *)(puVar16 + 0x20);
    puVar3 = puVar23;
    if ((*puVar23 & 1) != 0) {
      puVar3 = (ulong *)(*puVar23 + 7);
    }
    pauVar1 = (undefined1 (*) [12])(*puVar3 + 0x58);
    uVar24 = (undefined4)((ulong)*(undefined8 *)(*puVar3 + 0x60) >> 0x20);
    auVar25._12_4_ = uVar24;
    auVar25._0_12_ = *pauVar1;
    auVar11._12_4_ = uVar24;
    auVar11._0_12_ = *pauVar1;
    auVar25 = NEON_ext(auVar25,auVar11,0xc,1);
    iStack_98 = SUB124(*pauVar1,8);
    uStack_94 = auVar25._8_4_;
    uStack_a0 = (undefined *)CONCAT44(auVar25._0_4_,SUB124(*pauVar1,0));
    iVar14 = 0xf5a489b;
    FUN_109c60fbc(&UNK_10f5a489b,0x19,&uStack_a0,4);
    iStack_b0 = 0;
    if (iVar15 != 0) {
      iStack_b0 = iVar14 / iVar15;
    }
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = CONCAT44(iVar15,2);
    if ((*puVar23 & 1) != 0) {
      puVar23 = (ulong *)(*puVar23 + 7);
    }
    FUN_109c19dfc(&uStack_a0,*param_2,&uStack_b8,*(undefined8 *)(*puVar23 + 0x20),
                  ((long)*(int *)(*puVar23 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&uStack_d0,&uStack_a0);
    FUN_109c180ec(&uStack_a0);
    *(undefined4 *)(uStack_d0 + 0x3c) = 1;
    func_0x000109c1e534(lVar17 + 0xb0,&uStack_d0);
    iVar15 = *(int *)(puVar16 + 0x28);
    *(bool *)(lVar17 + 0xc0) = 1 < iVar15;
    if (1 < iVar15) {
      FUN_109c3cc9c(lVar17,puVar16,1,*(undefined4 *)(lVar17 + 0xa8),param_2);
    }
    plVar12 = (long *)CONCAT44(uStack_c4,uStack_c8);
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 1;
      do {
        lVar20 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
LAB_109c3c940:
    *(undefined4 *)(lVar17 + 0x108) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return lVar17;
    }
    ___stack_chk_fail();
  }
  else {
    iVar14 = *(int *)(puVar16 + 0x194);
    if (iVar14 == 2) {
      puVar23 = (ulong *)(puVar16 + 0x20);
      puVar3 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar3 = (ulong *)(*puVar23 + 7);
      }
      uVar22 = *puVar3;
      if ((*(byte *)(uVar22 + 0x6c) & 1) != 0) {
        puVar16 = &UNK_10f5a48cd;
        goto LAB_109c3c990;
      }
      pauVar1 = (undefined1 (*) [12])(uVar22 + 0x58);
      uVar24 = (undefined4)((ulong)*(undefined8 *)(uVar22 + 0x60) >> 0x20);
      auVar9._12_4_ = uVar24;
      auVar9._0_12_ = *pauVar1;
      auVar10._12_4_ = uVar24;
      auVar10._0_12_ = *pauVar1;
      auVar25 = NEON_ext(auVar9,auVar10,0xc,1);
      iStack_98 = SUB124(*pauVar1,8);
      uStack_94 = auVar25._8_4_;
      uStack_a0 = (undefined *)CONCAT44(auVar25._0_4_,SUB124(*pauVar1,0));
      iVar14 = 0xf5a489b;
      FUN_109c60fbc(&UNK_10f5a489b,0x19,&uStack_a0,4);
      iStack_b0 = 0;
      if (iVar15 != 0) {
        iStack_b0 = iVar14 / iVar15;
      }
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b8 = CONCAT44(iVar15,2);
      puVar3 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar3 = (ulong *)(*puVar23 + 7);
      }
      uStack_a0 = &UNK_10f5a489b;
      iStack_98 = 0x19;
      uStack_94 = 0;
      iStack_90 = (int)*puVar3;
      uStack_8c = (undefined4)(*puVar3 >> 0x20);
      pcStack_88 = "weights blob";
      uStack_80 = 0xc;
      iVar15 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_b8 + 4,2);
      FUN_109c3cec0(&uStack_a0,(long)iVar15);
      puVar3 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar3 = (ulong *)(*puVar23 + 7);
      }
      puVar18 = (undefined8 *)(*(ulong *)(*puVar3 + 0x50) & 0xfffffffffffffffc);
      lVar20 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar20 < 0) {
        lVar20 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      FUN_109591c60(&uStack_d0,puVar18,(long)puVar18 + lVar20,
                    ((long)puVar18 + lVar20) - (long)puVar18);
      FUN_109c19fac(&uStack_a0,*param_2,&uStack_b8,uStack_d0,
                    CONCAT44(uStack_c4,uStack_c8) - uStack_d0);
      FUN_109c18570(&lStack_e0,&uStack_a0);
      FUN_109c180ec(&uStack_a0);
      *(undefined4 *)(lStack_e0 + 0x3c) = 1;
      if ((*puVar23 & 1) != 0) {
        puVar23 = (ulong *)(*puVar23 + 7);
      }
      FUN_109c3d058(*puVar23,lStack_e0,1);
      FUN_109c3c254(puVar16,lVar17);
      func_0x000109c1e534(lVar17 + 0xb0,&lStack_e0);
      iVar15 = *(int *)(puVar16 + 0x28);
      *(bool *)(lVar17 + 0xc0) = 1 < iVar15;
      if (1 < iVar15) {
        FUN_109c3cc9c(lVar17,puVar16,1,*(undefined4 *)(lVar17 + 0xa8),param_2);
      }
      if (plStack_d8 != (long *)0x0) {
        plVar12 = plStack_d8 + 1;
        do {
          lVar20 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
        }
      }
      if (uStack_d0 == 0) goto LAB_109c3c940;
      uStack_c8 = (undefined4)uStack_d0;
      uStack_c4 = (undefined4)((ulong)uStack_d0 >> 0x20);
LAB_109c3c93c:
      __ZdlPv();
      goto LAB_109c3c940;
    }
    if (iVar14 == 1) {
      puVar23 = (ulong *)(puVar16 + 0x20);
      puVar3 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar3 = (ulong *)(*puVar23 + 7);
      }
      pauVar1 = (undefined1 (*) [12])(*puVar3 + 0x58);
      uVar24 = (undefined4)((ulong)*(undefined8 *)(*puVar3 + 0x60) >> 0x20);
      auVar7._12_4_ = uVar24;
      auVar7._0_12_ = *pauVar1;
      auVar8._12_4_ = uVar24;
      auVar8._0_12_ = *pauVar1;
      auVar25 = NEON_ext(auVar7,auVar8,0xc,1);
      iStack_98 = SUB124(*pauVar1,8);
      uStack_94 = auVar25._8_4_;
      uStack_a0 = (undefined *)CONCAT44(auVar25._0_4_,SUB124(*pauVar1,0));
      iVar14 = 0xf5a489b;
      FUN_109c60fbc(&UNK_10f5a489b,0x19,&uStack_a0,4);
      iStack_98 = 0;
      if (iVar15 != 0) {
        iStack_98 = iVar14 / iVar15;
      }
      uStack_94 = 0;
      iStack_90 = 0;
      uStack_8c = 0;
      uStack_a0 = (undefined *)CONCAT44(iVar15,2);
      if ((*puVar23 & 1) != 0) {
        puVar23 = (ulong *)(*puVar23 + 7);
      }
      puVar18 = (undefined8 *)(*(ulong *)(*puVar23 + 0x50) & 0xfffffffffffffffc);
      lVar20 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar20 < 0) {
        lVar20 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_b8 = 0;
      iStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      FUN_109591c60(&uStack_b8,puVar18,(long)puVar18 + lVar20,
                    ((long)puVar18 + lVar20) - (long)puVar18);
      ppuVar4 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(puVar16 + 0x110) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(puVar16 + 0x110);
      }
      FUN_109c49aa8(&uStack_d0,&uStack_a0,ppuVar4[4],
                    (long)*(int *)(ppuVar4 + 3) & 0x3fffffffffffffff,&uStack_b8);
      *(undefined4 *)(uStack_d0 + 0x3c) = 1;
      func_0x000109c1e534(lVar17 + 0xb0,&uStack_d0);
      iVar15 = *(int *)(puVar16 + 0x28);
      *(bool *)(lVar17 + 0xc0) = 1 < iVar15;
      if (1 < iVar15) {
        FUN_109c3cc9c(lVar17,puVar16,1,*(undefined4 *)(lVar17 + 0xa8),param_2);
      }
      plVar12 = (long *)CONCAT44(uStack_c4,uStack_c8);
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 1;
        do {
          lVar20 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
LAB_109c3c82c:
      if (uStack_b8 == 0) goto LAB_109c3c940;
      iStack_b0 = (int)uStack_b8;
      uStack_ac = (undefined4)((ulong)uStack_b8 >> 0x20);
      goto LAB_109c3c93c;
    }
    if (iVar14 == 0) {
      puVar18 = (undefined8 *)(*(ulong *)(puVar16 + 0x108) & 0xfffffffffffffffc);
      lVar20 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar20 < 0) {
        lVar20 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_b8 = 0;
      iStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      FUN_109591c60(&uStack_b8,puVar18,(long)puVar18 + lVar20,
                    ((long)puVar18 + lVar20) - (long)puVar18);
      uVar22 = (ulong)*(char *)((*(ulong *)(puVar16 + 0x108) & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar22 < 0) {
        uVar22 = *(ulong *)((*(ulong *)(puVar16 + 0x108) & 0xfffffffffffffffc) + 8);
      }
      uStack_c8 = 0;
      if ((long)iVar15 != 0) {
        uStack_c8 = (undefined4)(uVar22 / (ulong)(long)iVar15);
      }
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_d0 = CONCAT44(iVar15,2);
      ppuVar4 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(puVar16 + 0x110) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(puVar16 + 0x110);
      }
      FUN_109c1acf8(&uStack_a0,*param_2,&uStack_d0,ppuVar4[4],
                    (long)*(int *)(ppuVar4 + 3) & 0x3fffffffffffffff,&uStack_b8);
      *(undefined4 *)(uStack_a0 + 0x3c) = 1;
      FUN_109c18570(&lStack_e0,&uStack_a0);
      func_0x000109c1e534(lVar17 + 0xb0,&lStack_e0);
      if (plStack_d8 != (long *)0x0) {
        plVar12 = plStack_d8 + 1;
        do {
          lVar20 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
        }
      }
      iVar15 = *(int *)(puVar16 + 0x28);
      *(bool *)(lVar17 + 0xc0) = 0 < iVar15;
      if (0 < iVar15) {
        FUN_109c3cc9c(lVar17,puVar16,0,*(undefined4 *)(lVar17 + 0xa8),param_2);
      }
      FUN_109c180ec(&uStack_a0);
      goto LAB_109c3c82c;
    }
  }
  puVar16 = &UNK_10f5a4941;
LAB_109c3c990:
  func_0x000105688514(puVar16);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109c3c998);
  (*pcVar13)();
}



/* Entry: 109c3c2ac; end: 109c3ca7f;  */

long FUN_109c3c2ac(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = &UNK_10f5a489b;
  iStack_88 = 0x19;
  uStack_84 = 0;
  iStack_80 = (int)param_1;
  iVar15 = iStack_80;
  uStack_7c = (undefined4)((ulong)param_1 >> 0x20);
  uVar23 = uStack_7c;
  pcStack_78 = "";
  uStack_70 = 0;
  FUN_109c3ca80(&uStack_90,&UNK_10f5a48b5,0xc);
  if (*(char *)(param_1 + 0x1a4) != '\x01' || *(int *)(param_1 + 0x194) != 0) {
    uStack_90 = &UNK_10f5a489b;
    iStack_88 = 0x19;
    uStack_84 = 0;
    pcStack_78 = "";
    uStack_70 = 0;
    iStack_80 = iVar15;
    uStack_7c = uVar23;
    FUN_109c3cb24(&uStack_90,1);
  }
  iVar15 = *(int *)(param_1 + 0x118);
  uStack_90 = &UNK_10f5a489b;
  iStack_88 = 0x19;
  uStack_84 = 0;
  pcStack_78 = "num_output";
  uStack_70 = 10;
  iStack_80 = iVar15;
  FUN_109c14834(&uStack_90);
  lVar16 = 0x110;
  __Znwm();
  FUN_109c39f14();
  *(int *)(lVar16 + 0xa8) = iVar15;
  if ((*(byte *)(param_1 + 0x1a4) & 1) == 0) {
    puVar22 = (ulong *)(param_1 + 0x20);
    puVar3 = puVar22;
    if ((*puVar22 & 1) != 0) {
      puVar3 = (ulong *)(*puVar22 + 7);
    }
    pauVar1 = (undefined1 (*) [12])(*puVar3 + 0x58);
    uVar23 = (undefined4)((ulong)*(undefined8 *)(*puVar3 + 0x60) >> 0x20);
    auVar24._12_4_ = uVar23;
    auVar24._0_12_ = *pauVar1;
    auVar11._12_4_ = uVar23;
    auVar11._0_12_ = *pauVar1;
    auVar24 = NEON_ext(auVar24,auVar11,0xc,1);
    iStack_88 = SUB124(*pauVar1,8);
    uStack_84 = auVar24._8_4_;
    uStack_90 = (undefined *)CONCAT44(auVar24._0_4_,SUB124(*pauVar1,0));
    iVar14 = 0xf5a489b;
    FUN_109c60fbc(&UNK_10f5a489b,0x19,&uStack_90,4);
    iStack_a0 = 0;
    if (iVar15 != 0) {
      iStack_a0 = iVar14 / iVar15;
    }
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a8 = CONCAT44(iVar15,2);
    if ((*puVar22 & 1) != 0) {
      puVar22 = (ulong *)(*puVar22 + 7);
    }
    FUN_109c19dfc(&uStack_90,*param_2,&uStack_a8,*(undefined8 *)(*puVar22 + 0x20),
                  ((long)*(int *)(*puVar22 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&uStack_c0,&uStack_90);
    FUN_109c180ec(&uStack_90);
    *(undefined4 *)(uStack_c0 + 0x3c) = 1;
    func_0x000109c1e534(lVar16 + 0xb0,&uStack_c0);
    iVar15 = *(int *)(param_1 + 0x28);
    *(bool *)(lVar16 + 0xc0) = 1 < iVar15;
    if (1 < iVar15) {
      FUN_109c3cc9c(lVar16,param_1,1,*(undefined4 *)(lVar16 + 0xa8),param_2);
    }
    plVar12 = (long *)CONCAT44(uStack_b4,uStack_b8);
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 1;
      do {
        lVar19 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
LAB_109c3c940:
    *(undefined4 *)(lVar16 + 0x108) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return lVar16;
    }
    ___stack_chk_fail();
  }
  else {
    iVar14 = *(int *)(param_1 + 0x194);
    if (iVar14 == 2) {
      puVar22 = (ulong *)(param_1 + 0x20);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 7);
      }
      uVar20 = *puVar3;
      if ((*(byte *)(uVar20 + 0x6c) & 1) != 0) {
        puVar17 = &UNK_10f5a48cd;
        goto LAB_109c3c990;
      }
      pauVar1 = (undefined1 (*) [12])(uVar20 + 0x58);
      uVar23 = (undefined4)((ulong)*(undefined8 *)(uVar20 + 0x60) >> 0x20);
      auVar9._12_4_ = uVar23;
      auVar9._0_12_ = *pauVar1;
      auVar10._12_4_ = uVar23;
      auVar10._0_12_ = *pauVar1;
      auVar24 = NEON_ext(auVar9,auVar10,0xc,1);
      iStack_88 = SUB124(*pauVar1,8);
      uStack_84 = auVar24._8_4_;
      uStack_90 = (undefined *)CONCAT44(auVar24._0_4_,SUB124(*pauVar1,0));
      iVar14 = 0xf5a489b;
      FUN_109c60fbc(&UNK_10f5a489b,0x19,&uStack_90,4);
      iStack_a0 = 0;
      if (iVar15 != 0) {
        iStack_a0 = iVar14 / iVar15;
      }
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a8 = CONCAT44(iVar15,2);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 7);
      }
      uStack_90 = &UNK_10f5a489b;
      iStack_88 = 0x19;
      uStack_84 = 0;
      iStack_80 = (int)*puVar3;
      uStack_7c = (undefined4)(*puVar3 >> 0x20);
      pcStack_78 = "weights blob";
      uStack_70 = 0xc;
      iVar15 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_a8 + 4,2);
      FUN_109c3cec0(&uStack_90,(long)iVar15);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 7);
      }
      puVar18 = (undefined8 *)(*(ulong *)(*puVar3 + 0x50) & 0xfffffffffffffffc);
      lVar19 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar19 < 0) {
        lVar19 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      FUN_109591c60(&uStack_c0,puVar18,(long)puVar18 + lVar19,
                    ((long)puVar18 + lVar19) - (long)puVar18);
      FUN_109c19fac(&uStack_90,*param_2,&uStack_a8,uStack_c0,
                    CONCAT44(uStack_b4,uStack_b8) - uStack_c0);
      FUN_109c18570(&lStack_d0,&uStack_90);
      FUN_109c180ec(&uStack_90);
      *(undefined4 *)(lStack_d0 + 0x3c) = 1;
      if ((*puVar22 & 1) != 0) {
        puVar22 = (ulong *)(*puVar22 + 7);
      }
      FUN_109c3d058(*puVar22,lStack_d0,1);
      FUN_109c3c254(param_1,lVar16);
      func_0x000109c1e534(lVar16 + 0xb0,&lStack_d0);
      iVar15 = *(int *)(param_1 + 0x28);
      *(bool *)(lVar16 + 0xc0) = 1 < iVar15;
      if (1 < iVar15) {
        FUN_109c3cc9c(lVar16,param_1,1,*(undefined4 *)(lVar16 + 0xa8),param_2);
      }
      if (plStack_c8 != (long *)0x0) {
        plVar12 = plStack_c8 + 1;
        do {
          lVar19 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
        }
      }
      if (uStack_c0 == 0) goto LAB_109c3c940;
      uStack_b8 = (undefined4)uStack_c0;
      uStack_b4 = (undefined4)((ulong)uStack_c0 >> 0x20);
LAB_109c3c93c:
      __ZdlPv();
      goto LAB_109c3c940;
    }
    if (iVar14 == 1) {
      puVar22 = (ulong *)(param_1 + 0x20);
      puVar3 = puVar22;
      if ((*puVar22 & 1) != 0) {
        puVar3 = (ulong *)(*puVar22 + 7);
      }
      pauVar1 = (undefined1 (*) [12])(*puVar3 + 0x58);
      uVar23 = (undefined4)((ulong)*(undefined8 *)(*puVar3 + 0x60) >> 0x20);
      auVar7._12_4_ = uVar23;
      auVar7._0_12_ = *pauVar1;
      auVar8._12_4_ = uVar23;
      auVar8._0_12_ = *pauVar1;
      auVar24 = NEON_ext(auVar7,auVar8,0xc,1);
      iStack_88 = SUB124(*pauVar1,8);
      uStack_84 = auVar24._8_4_;
      uStack_90 = (undefined *)CONCAT44(auVar24._0_4_,SUB124(*pauVar1,0));
      iVar14 = 0xf5a489b;
      FUN_109c60fbc(&UNK_10f5a489b,0x19,&uStack_90,4);
      iStack_88 = 0;
      if (iVar15 != 0) {
        iStack_88 = iVar14 / iVar15;
      }
      uStack_84 = 0;
      iStack_80 = 0;
      uStack_7c = 0;
      uStack_90 = (undefined *)CONCAT44(iVar15,2);
      if ((*puVar22 & 1) != 0) {
        puVar22 = (ulong *)(*puVar22 + 7);
      }
      puVar18 = (undefined8 *)(*(ulong *)(*puVar22 + 0x50) & 0xfffffffffffffffc);
      lVar19 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar19 < 0) {
        lVar19 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_a8 = 0;
      iStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      FUN_109591c60(&uStack_a8,puVar18,(long)puVar18 + lVar19,
                    ((long)puVar18 + lVar19) - (long)puVar18);
      ppuVar4 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(param_1 + 0x110);
      }
      FUN_109c49aa8(&uStack_c0,&uStack_90,ppuVar4[4],
                    (long)*(int *)(ppuVar4 + 3) & 0x3fffffffffffffff,&uStack_a8);
      *(undefined4 *)(uStack_c0 + 0x3c) = 1;
      func_0x000109c1e534(lVar16 + 0xb0,&uStack_c0);
      iVar15 = *(int *)(param_1 + 0x28);
      *(bool *)(lVar16 + 0xc0) = 1 < iVar15;
      if (1 < iVar15) {
        FUN_109c3cc9c(lVar16,param_1,1,*(undefined4 *)(lVar16 + 0xa8),param_2);
      }
      plVar12 = (long *)CONCAT44(uStack_b4,uStack_b8);
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 1;
        do {
          lVar19 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
LAB_109c3c82c:
      if (uStack_a8 == 0) goto LAB_109c3c940;
      iStack_a0 = (int)uStack_a8;
      uStack_9c = (undefined4)((ulong)uStack_a8 >> 0x20);
      goto LAB_109c3c93c;
    }
    if (iVar14 == 0) {
      puVar18 = (undefined8 *)(*(ulong *)(param_1 + 0x108) & 0xfffffffffffffffc);
      lVar19 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar19 < 0) {
        lVar19 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_a8 = 0;
      iStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      FUN_109591c60(&uStack_a8,puVar18,(long)puVar18 + lVar19,
                    ((long)puVar18 + lVar19) - (long)puVar18);
      uVar21 = *(ulong *)(param_1 + 0x108) & 0xfffffffffffffffc;
      uVar20 = (ulong)*(char *)(uVar21 + 0x17);
      if ((long)uVar20 < 0) {
        uVar20 = *(ulong *)(uVar21 + 8);
      }
      uStack_b8 = 0;
      if ((long)iVar15 != 0) {
        uStack_b8 = (undefined4)(uVar20 / (ulong)(long)iVar15);
      }
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_c0 = CONCAT44(iVar15,2);
      ppuVar4 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(param_1 + 0x110);
      }
      FUN_109c1acf8(&uStack_90,*param_2,&uStack_c0,ppuVar4[4],
                    (long)*(int *)(ppuVar4 + 3) & 0x3fffffffffffffff,&uStack_a8);
      *(undefined4 *)(uStack_90 + 0x3c) = 1;
      FUN_109c18570(&lStack_d0,&uStack_90);
      func_0x000109c1e534(lVar16 + 0xb0,&lStack_d0);
      if (plStack_c8 != (long *)0x0) {
        plVar12 = plStack_c8 + 1;
        do {
          lVar19 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
        }
      }
      iVar15 = *(int *)(param_1 + 0x28);
      *(bool *)(lVar16 + 0xc0) = 0 < iVar15;
      if (0 < iVar15) {
        FUN_109c3cc9c(lVar16,param_1,0,*(undefined4 *)(lVar16 + 0xa8),param_2);
      }
      FUN_109c180ec(&uStack_90);
      goto LAB_109c3c82c;
    }
  }
  puVar17 = &UNK_10f5a4941;
LAB_109c3c990:
  func_0x000105688514(puVar17);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109c3c998);
  (*pcVar13)();
}



/* Entry: 109c3ca80; end: 109c3cb23;  */

long FUN_109c3ca80(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [24];
  
  puVar4 = (undefined8 *)(*(ulong *)(*(long *)(param_1 + 0x10) + 0x100) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar4 + 0x17);
  puVar3 = puVar4;
  if (lVar2 < 0) {
    lVar2 = puVar4[1];
    puVar3 = (undefined8 *)*puVar4;
  }
  if ((param_3 == lVar2) && (_memcmp(param_2,puVar3,lVar2), (int)param_2 == 0)) {
    return param_1;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f5a5a4f,puVar4);
  FUN_109c49990(param_1,auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3cb08);
  (*pcVar1)();
}



/* Entry: 109c3cb24; end: 109c3cc9b;  */

void FUN_109c3cb24(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 **ppuStack_b0;
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
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x28) < (int)param_2) {
    __ZNSt3__19to_stringEi(auStack_98,param_2);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a5a67,0x12);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    uStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f5a5a7a,0xe);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    uStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__19to_stringEi(&ppuStack_b0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28));
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuStack_b0 = &ppuStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuStack_b0,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c49990(param_1,&uStack_40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3cc20);
    (*pcVar1)();
  }
  return;
}



/* Entry: 109c3cc9c; end: 109c3cebf;  */

void FUN_109c3cc9c(long param_1,long param_2,uint param_3,undefined4 param_4,undefined8 *param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 **ppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong *puStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &UNK_10f5a5a89;
  uStack_88 = 10;
  pcStack_78 = "";
  uStack_70 = 0;
  lStack_80 = param_2;
  FUN_109c3cb24(&puStack_90,param_3 + 1);
  puStack_90 = &UNK_10f5a5a89;
  uStack_88 = 10;
  lStack_80 = CONCAT44(lStack_80._4_4_,param_4);
  pcStack_78 = "count";
  uStack_70 = 5;
  FUN_109c14834(&puStack_90);
  uStack_94 = 0;
  uStack_a8 = 0x100000004;
  uStack_9c = 0x100000001;
  lStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  puVar13 = (ulong *)(param_2 + 0x20);
  puVar1 = puVar13;
  if ((*puVar13 & 1) != 0) {
    puVar1 = (ulong *)(*puVar13 + (ulong)param_3 * 8 + 7);
  }
  uVar9 = *puVar1;
  uStack_a0 = param_4;
  if ((*(byte *)(uVar9 + 0x10) & 1) == 0) {
    FUN_109c19dfc(&puStack_90,*param_5,&uStack_a8,*(undefined8 *)(uVar9 + 0x20),
                  ((long)*(int *)(uVar9 + 0x18) & 0x3fffffffffffffffU) << 1);
    func_0x000109c18360(&lStack_b8,&puStack_90);
    FUN_109c180ec(&puStack_90);
  }
  else {
    puVar10 = (undefined8 *)(*(ulong *)(uVar9 + 0x50) & 0xfffffffffffffffc);
    puVar7 = (undefined8 *)*puVar10;
    uVar9 = puVar10[1];
    if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
      puVar7 = puVar10;
      uVar9 = (ulong)*(byte *)((long)puVar10 + 0x17);
    }
    FUN_109c1a57c(&puStack_90,*param_5,&uStack_a8,puVar7,uVar9,4);
    func_0x000109c18360(&lStack_b8,&puStack_90);
    FUN_109c180ec(&puStack_90);
    puVar1 = puVar13;
    if ((*puVar13 & 1) != 0) {
      puVar1 = (ulong *)(*puVar13 + (ulong)param_3 * 8 + 7);
    }
    uVar9 = *puVar1;
    *(undefined4 *)(lStack_b8 + 0x4c) = *(undefined4 *)(uVar9 + 0x70);
    *(undefined4 *)(lStack_b8 + 0x50) = *(undefined4 *)(uVar9 + 0x68);
  }
  plVar5 = (long *)(param_1 + 200);
  plVar8 = &lStack_b8;
  func_0x000109c1e534();
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar11 = plStack_b0 + 1;
    do {
      lVar12 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(&puStack_90);
    FUN_10959b818(&lStack_b8);
    plVar6 = plVar5;
    __Unwind_Resume();
    pcStack_c8 = FUN_109c3cec0;
    uVar9 = *(ulong *)(plVar6[2] + 0x50) & 0xfffffffffffffffc;
    plVar11 = (long *)(long)*(char *)(uVar9 + 0x17);
    if ((long)plVar11 < 0) {
      plVar11 = *(long **)(uVar9 + 8);
    }
    if (plVar11 < plVar8) {
      puStack_e0 = puVar13;
      plStack_d8 = plVar5;
      puStack_d0 = &stack0xfffffffffffffff0;
      __ZNSt3__19to_stringEm(auStack_158,plVar8);
      puVar7 = auStack_158;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar7,0,&UNK_10f5a5a94,0x1f);
      uStack_138 = puVar7[1];
      uStack_140 = *puVar7;
      uStack_130 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      puVar7 = &uStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,&UNK_10f5a5ab4,5);
      uStack_118 = puVar7[1];
      uStack_120 = *puVar7;
      uStack_110 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      uVar9 = *(ulong *)(plVar6[2] + 0x50) & 0xfffffffffffffffc;
      lVar12 = (long)*(char *)(uVar9 + 0x17);
      if (lVar12 < 0) {
        lVar12 = *(long *)(uVar9 + 8);
      }
      __ZNSt3__19to_stringEm(&ppuStack_170,lVar12);
      if (-1 < (char)bStack_159) {
        uStack_168 = (ulong)bStack_159;
        ppuStack_170 = &ppuStack_170;
      }
      puVar7 = &uStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,ppuStack_170,uStack_168);
      uStack_f8 = puVar7[1];
      uStack_100 = *puVar7;
      uStack_f0 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      FUN_109c49b30(plVar6,&uStack_100);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109c3cfdc);
      (*pcVar4)();
    }
    return;
  }
  return;
}



/* Entry: 109c3cec0; end: 109c3d057;  */

void FUN_109c3cec0(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 **ppuStack_b0;
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
  
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x50) & 0xfffffffffffffffc;
  uVar4 = (ulong)*(char *)(uVar5 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = *(ulong *)(uVar5 + 8);
  }
  if (uVar4 < param_2) {
    __ZNSt3__19to_stringEm(auStack_98,param_2);
    puVar2 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar2,0,&UNK_10f5a5a94,0x1f);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    uStack_70 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,&UNK_10f5a5ab4,5);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    uStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x50) & 0xfffffffffffffffc;
    lVar3 = (long)*(char *)(uVar4 + 0x17);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
    }
    __ZNSt3__19to_stringEm(&ppuStack_b0,lVar3);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuStack_b0 = &ppuStack_b0;
    }
    puVar2 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,ppuStack_b0,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_109c49b30(param_1,&uStack_40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3cfdc);
    (*pcVar1)();
  }
  return;
}



/* Entry: 109c3d058; end: 109c3d17f;  */

long * FUN_109c3d058(long param_1,undefined8 *param_2,int param_3)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long *plStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long lStack_108;
  long *plStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (*(int *)(param_1 + 0x74) == 8) {
    *(undefined4 *)((long)param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
    pcVar5 = (code *)0x109c49984;
    if (param_3 == 0) {
      pcVar5 = FUN_109c49978;
    }
    puVar14 = (undefined1 *)param_2[8];
    bVar2 = *(byte *)(param_2 + 9);
    uVar11 = *(uint *)(param_2 + 1) & ((int)*(uint *)(param_2 + 1) >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar11) {
      uVar11 = 5;
    }
    uStack_58 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)param_2 + 0xc,uVar11);
    if ((ulong)bVar2 < 9) {
      uStack_54 = *(undefined4 *)(&UNK_10e03a928 + (ulong)bVar2 * 4);
    }
    else {
      uStack_54 = 4;
    }
    iVar7 = 0xf57499d;
    FUN_109c60fbc(&UNK_10f57499d,0xc,&uStack_58,2);
    if (iVar7 != 0) {
      lVar15 = (long)iVar7;
      puVar16 = (undefined1 *)param_2[8];
      do {
        uVar6 = *puVar14;
        (*pcVar5)();
        *puVar16 = uVar6;
        lVar15 = lVar15 + -1;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar15 != 0);
    }
    plVar8 = (long *)(ulong)*(byte *)(param_1 + 0x68);
    (*pcVar5)();
    *(int *)(param_2 + 10) = (int)plVar8;
    *(undefined1 *)(param_2 + 9) = 2;
    return plVar8;
  }
  if (*(int *)(param_1 + 0x74) == 0x10) {
    func_0x000105688514(&UNK_10f5a58c2);
  }
  puVar9 = &UNK_10f5a5916;
  func_0x000105688514();
  pcStack_68 = FUN_109c3d180;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = &UNK_10f5a49c2;
  uStack_d8 = 0x18;
  pcStack_c8 = "";
  uStack_c0 = 0;
  puStack_d0 = puVar9;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_109c3ca80(&puStack_e0,&UNK_10f5a49db,5);
  FUN_109c3cb24(&puStack_e0,1);
  plVar8 = (long *)0xa0;
  __Znwm();
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar8[0xe] = 0;
  plVar8[0xd] = 0;
  plVar8[0x10] = 0;
  plVar8[0xf] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[0x11] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[2] = 0;
  plVar8[1] = 0;
  plStack_130 = plVar8 + 0x12;
  *plStack_130 = 0;
  *(undefined1 *)((long)plVar8 + 0x61) = 1;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)(plVar8 + 0xf) = 0x3f800000;
  *plVar8 = (long)&PTR_FUN_110b2c668;
  plVar8[0x13] = 0;
  *(undefined1 *)((long)plVar8 + 0x47) = 5;
  *(undefined1 *)((long)plVar8 + 0x34) = 0x74;
  *(undefined4 *)(plVar8 + 6) = 0x736e6f43;
  uVar12 = *(ulong *)(puVar9 + 0x20);
  puVar1 = (ulong *)(puVar9 + 0x20);
  if ((uVar12 & 1) != 0) {
    puVar1 = (ulong *)(uVar12 + 7);
  }
  uVar12 = *puVar1;
  uStack_f8 = 4;
  uStack_e4 = 0;
  uStack_ec = *(undefined8 *)(uVar12 + 0x60);
  uStack_f4 = *(undefined8 *)(uVar12 + 0x58);
  FUN_109c19c88(&puStack_e0,*param_2,&uStack_f8,*(undefined8 *)(uVar12 + 0x20),
                (long)*(int *)(uVar12 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(&lStack_108,&puStack_e0);
  FUN_109c180ec(&puStack_e0);
  *(undefined4 *)(lStack_108 + 0x3c) = 0;
  func_0x000109c1e534(plStack_130,&lStack_108);
  if (plStack_100 != (long *)0x0) {
    plVar10 = plStack_100 + 1;
    do {
      lVar15 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plStack_130 = plStack_100;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return plVar8;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&puStack_e0);
  (**(code **)(*plVar8 + 8))(plVar8);
  plVar10 = plStack_130;
  __Unwind_Resume();
  pcStack_118 = FUN_109c3d380;
  puVar13 = (undefined8 *)(plVar10[0x20] & 0xfffffffffffffffc);
  plStack_128 = plVar8;
  ppuStack_120 = &puStack_70;
  if (*(char *)((long)puVar13 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_150,*puVar13,puVar13[1]);
  }
  else {
    uStack_148 = puVar13[1];
    uStack_150 = *puVar13;
    lStack_140 = puVar13[2];
  }
  plVar8 = (long *)0x120;
  __Znwm();
  FUN_109c5c3dc();
  uVar11 = *(uint *)(plVar10 + 2);
  lVar15 = plVar10[0x2a];
  plVar8[0x1f] = -1;
  plVar8[0x20] = -1;
  uVar11 = (uint)((uVar11 & 0x40000) == 0);
  uVar12 = CONCAT44((int)lVar15,(int)lVar15);
  plVar8[0x1d] = uVar12 ^ (uVar12 ^ plVar10[0x38]) &
                          CONCAT44(-(uint)((int)(uVar11 << 0x1f) < 0),
                                   -(uint)((int)(uVar11 << 0x1f) < 0));
  if (((*(byte *)(plVar10 + 3) >> 1 & 1) != 0) && (*(uint *)(plVar10 + 0x3f) < 2)) {
    *(uint *)(plVar8 + 0x1e) = *(uint *)(plVar10 + 0x3f);
  }
  cVar3 = *(char *)((long)plVar10 + 0x1a5);
  *(char *)(plVar8 + 0x23) = cVar3;
  if ((cVar3 == '\x01') && ((int)plVar8[0x1e] != 1)) {
    func_0x000105688514(&UNK_10f5a49e1);
LAB_109c3d4a0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109c3d4a4);
    (*pcVar5)();
  }
  if (*(char *)((long)plVar10 + 0x1a4) == '\x01') {
    if (*(int *)((long)plVar10 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
      goto LAB_109c3d4a0;
    }
    FUN_109c3c254(plVar10,plVar8);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  return plVar8;
}



/* Entry: 109c3d180; end: 109c3d37f;  */

long * FUN_109c3d180(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &UNK_10f5a49c2;
  uStack_78 = 0x18;
  pcStack_68 = "";
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_109c3ca80(&puStack_80,&UNK_10f5a49db,5);
  FUN_109c3cb24(&puStack_80,1);
  plVar5 = (long *)0xa0;
  __Znwm();
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[0x11] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[3] = 0;
  plVar5[2] = 0;
  plVar5[1] = 0;
  plStack_d0 = plVar5 + 0x12;
  *plStack_d0 = 0;
  *(undefined1 *)((long)plVar5 + 0x61) = 1;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  *(undefined4 *)(plVar5 + 0xf) = 0x3f800000;
  *plVar5 = (long)&PTR_FUN_110b2c668;
  plVar5[0x13] = 0;
  *(undefined1 *)((long)plVar5 + 0x47) = 5;
  *(undefined1 *)((long)plVar5 + 0x34) = 0x74;
  *(undefined4 *)(plVar5 + 6) = 0x736e6f43;
  uVar8 = *(ulong *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x20);
  if ((uVar8 & 1) != 0) {
    puVar1 = (ulong *)(uVar8 + 7);
  }
  uVar8 = *puVar1;
  uStack_98 = 4;
  uStack_84 = 0;
  uStack_8c = *(undefined8 *)(uVar8 + 0x60);
  uStack_94 = *(undefined8 *)(uVar8 + 0x58);
  FUN_109c19c88(&puStack_80,*param_2,&uStack_98,*(undefined8 *)(uVar8 + 0x20),
                (long)*(int *)(uVar8 + 0x18) & 0x3fffffffffffffff);
  FUN_109c18570(&lStack_a8,&puStack_80);
  FUN_109c180ec(&puStack_80);
  *(undefined4 *)(lStack_a8 + 0x3c) = 0;
  func_0x000109c1e534(plStack_d0,&lStack_a8);
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plStack_d0 = plStack_a0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_109c180ec(&puStack_80);
  (**(code **)(*plVar5 + 8))(plVar5);
  plVar6 = plStack_d0;
  __Unwind_Resume();
  pcStack_b8 = FUN_109c3d380;
  puVar9 = (undefined8 *)(plVar6[0x20] & 0xfffffffffffffffc);
  plStack_c8 = plVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)puVar9 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_f0,*puVar9,puVar9[1]);
  }
  else {
    uStack_e8 = puVar9[1];
    uStack_f0 = *puVar9;
    lStack_e0 = puVar9[2];
  }
  plVar5 = (long *)0x120;
  __Znwm();
  FUN_109c5c3dc();
  uVar7 = *(uint *)(plVar6 + 2);
  lVar10 = plVar6[0x2a];
  plVar5[0x1f] = -1;
  plVar5[0x20] = -1;
  uVar7 = (uint)((uVar7 & 0x40000) == 0);
  uVar8 = CONCAT44((int)lVar10,(int)lVar10);
  plVar5[0x1d] = uVar8 ^ (uVar8 ^ plVar6[0x38]) &
                         CONCAT44(-(uint)((int)(uVar7 << 0x1f) < 0),
                                  -(uint)((int)(uVar7 << 0x1f) < 0));
  if (((*(byte *)(plVar6 + 3) >> 1 & 1) != 0) && (*(uint *)(plVar6 + 0x3f) < 2)) {
    *(uint *)(plVar5 + 0x1e) = *(uint *)(plVar6 + 0x3f);
  }
  cVar2 = *(char *)((long)plVar6 + 0x1a5);
  *(char *)(plVar5 + 0x23) = cVar2;
  if ((cVar2 == '\x01') && ((int)plVar5[0x1e] != 1)) {
    func_0x000105688514(&UNK_10f5a49e1);
LAB_109c3d4a0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109c3d4a4);
    (*pcVar4)();
  }
  if (*(char *)((long)plVar6 + 0x1a4) == '\x01') {
    if (*(int *)((long)plVar6 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
      goto LAB_109c3d4a0;
    }
    FUN_109c3c254(plVar6,plVar5);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  return plVar5;
}



/* Entry: 109c3d380; end: 109c3d4d3;  */

long FUN_109c3d380(long param_1)

{
  char cVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar6,puVar6[1]);
  }
  else {
    uStack_38 = puVar6[1];
    uStack_40 = *puVar6;
    lStack_30 = puVar6[2];
  }
  lVar4 = 0x120;
  __Znwm();
  FUN_109c5c3dc();
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(lVar4 + 0xf8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x100) = 0xffffffffffffffff;
  uVar5 = (uint)((uVar5 & 0x40000) == 0);
  uVar7 = (undefined4)uVar8;
  uVar2 = CONCAT44(uVar7,uVar7);
  *(ulong *)(lVar4 + 0xe8) =
       uVar2 ^ (uVar2 ^ *(ulong *)(param_1 + 0x1c0)) &
               CONCAT44(-(uint)((int)(uVar5 << 0x1f) < 0),-(uint)((int)(uVar5 << 0x1f) < 0));
  if (((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) && (*(uint *)(param_1 + 0x1f8) < 2)) {
    *(uint *)(lVar4 + 0xf0) = *(uint *)(param_1 + 0x1f8);
  }
  cVar1 = *(char *)(param_1 + 0x1a5);
  *(char *)(lVar4 + 0x118) = cVar1;
  if ((cVar1 == '\x01') && (*(int *)(lVar4 + 0xf0) != 1)) {
    func_0x000105688514(&UNK_10f5a49e1);
LAB_109c3d4a0:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109c3d4a4);
    (*pcVar3)();
  }
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
      goto LAB_109c3d4a0;
    }
    FUN_109c3c254(param_1,lVar4);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return lVar4;
}



/* Entry: 109c3d4d4; end: 109c3d5b3;  */

long FUN_109c3d4d4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar4 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar4,puVar4[1]);
  }
  else {
    uStack_38 = puVar4[1];
    uStack_40 = *puVar4;
    lStack_30 = puVar4[2];
  }
  lVar2 = 0x98;
  __Znwm();
  FUN_109c54ad0();
  if (*(uint *)(param_1 + 0x198) < 4) {
    *(uint *)(lVar2 + 0x94) = *(uint *)(param_1 + 0x198);
    if (*(uint *)(param_1 + 0x19c) < 7) {
      *(uint *)(lVar2 + 0x90) = *(uint *)(param_1 + 0x19c);
      if (lStack_30 < 0) {
        __ZdlPv(uStack_40);
      }
      return lVar2;
    }
    puVar3 = &UNK_10f5a4ae7;
  }
  else {
    puVar3 = &UNK_10f5a4a60;
  }
  func_0x000105688514(puVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3d588);
  (*pcVar1)();
}



/* Entry: 109c3d5b4; end: 109c3d90b;  */

undefined8 * FUN_109c3d5b4(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong *puVar14;
  long lStack_b8;
  long *plStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &UNK_10f5a4b6a;
  uStack_88 = 0x1b;
  pcStack_78 = "";
  uStack_70 = 0;
  uStack_80 = param_1;
  FUN_109c3ca80(&puStack_90,&UNK_10f5a4b86,8);
  FUN_109c3cb24(&puStack_90,1);
  puVar8 = (undefined8 *)0xa0;
  __Znwm();
  puVar8[0xc] = 0;
  puVar8[0xb] = 0;
  puVar8[0xe] = 0;
  puVar8[0xd] = 0;
  puVar8[0x10] = 0;
  puVar8[0xf] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[0x11] = 0;
  puVar8[10] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[1] = 0;
  puVar12 = puVar8 + 0x12;
  *puVar12 = 0;
  *(undefined1 *)((long)puVar8 + 0x61) = 1;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  *(undefined4 *)(puVar8 + 0xf) = 0x3f800000;
  *puVar8 = &PTR_FUN_110b2c668;
  puVar8[0x13] = 0;
  *(undefined1 *)((long)puVar8 + 0x47) = 5;
  *(undefined1 *)((long)puVar8 + 0x34) = 0x74;
  *(undefined4 *)(puVar8 + 6) = 0x736e6f43;
  puVar14 = (ulong *)(param_1 + 0x20);
  puVar2 = puVar14;
  if ((*puVar14 & 1) != 0) {
    puVar2 = (ulong *)(*puVar14 + 7);
  }
  uVar9 = *puVar2;
  uStack_a8 = 4;
  uStack_94 = 0;
  uStack_9c = *(undefined8 *)(uVar9 + 0x60);
  uStack_a4 = *(undefined8 *)(uVar9 + 0x58);
  if ((*(byte *)(param_1 + 0x1a4) & 1) == 0) {
    FUN_109c19dfc(&puStack_90,*param_2,&uStack_a8,*(undefined8 *)(uVar9 + 0x20),
                  ((long)*(int *)(uVar9 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&lStack_b8,&puStack_90);
    FUN_109c180ec(&puStack_90);
    *(undefined4 *)(lStack_b8 + 0x3c) = 1;
    FUN_109c11f88();
    func_0x000109c1e534(puVar12,&lStack_b8);
    if (plStack_b0 != (long *)0x0) {
      plVar1 = plStack_b0 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar13 = plStack_b0;
      } while (cVar4 != '\0');
LAB_109c3d850:
      if (lVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x194) != 2) goto LAB_109c3d8a4;
    puStack_90 = &UNK_10f5a4b6a;
    uStack_88 = 0x1b;
    pcStack_78 = "weights blob";
    uStack_70 = 0xc;
    iVar7 = 0xf5749aa;
    uStack_80 = uVar9;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_a4,4);
    FUN_109c3cec0(&puStack_90,(long)iVar7);
    puVar2 = puVar14;
    if ((*puVar14 & 1) != 0) {
      puVar2 = (ulong *)(*puVar14 + 7);
    }
    puVar10 = (undefined8 *)(*(ulong *)(*puVar2 + 0x50) & 0xfffffffffffffffc);
    puVar3 = (undefined8 *)*puVar10;
    uVar9 = puVar10[1];
    if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
      puVar3 = puVar10;
      uVar9 = (ulong)*(byte *)((long)puVar10 + 0x17);
    }
    FUN_109c19fac(&puStack_90,*param_2,&uStack_a8,puVar3,uVar9);
    FUN_109c18570(&lStack_b8,&puStack_90);
    FUN_109c180ec(&puStack_90);
    if ((*puVar14 & 1) != 0) {
      puVar14 = (ulong *)(*puVar14 + 7);
    }
    FUN_109c3d058(*puVar14,lStack_b8,0);
    FUN_109c3c254(param_1,puVar8);
    *(undefined4 *)(lStack_b8 + 0x3c) = 1;
    FUN_109c11f88();
    func_0x000109c1e534(puVar12,&lStack_b8);
    if (plStack_b0 != (long *)0x0) {
      plVar1 = plStack_b0 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar13 = plStack_b0;
      } while (cVar4 != '\0');
      goto LAB_109c3d850;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
LAB_109c3d8a4:
  func_0x000105688514(&UNK_10f5a4b8f);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109c3d8b4);
  (*pcVar6)();
}



/* Entry: 109c3d90c; end: 109c3d9f3;  */

long FUN_109c3d90c(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar5,puVar5[1]);
  }
  else {
    uStack_38 = puVar5[1];
    uStack_40 = *puVar5;
    lStack_30 = puVar5[2];
  }
  lVar3 = 0x98;
  __Znwm();
  FUN_109c36f68();
  puVar4 = &UNK_10f5a4c16;
  if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
    if (*(int *)(param_1 + 0x1f8) == 1) {
      *(undefined4 *)(lVar3 + 0x90) = 1;
      iVar2 = *(int *)(param_1 + 0x10);
      FUN_109c3d9f4(iVar2,*(undefined4 *)(param_1 + 0x154));
      *(int *)(lVar3 + 0x94) = iVar2;
      if (iVar2 == 0) {
        if (lStack_30 < 0) {
          __ZdlPv(uStack_40);
        }
        return lVar3;
      }
      puVar4 = &UNK_10f5a4c5b;
    }
  }
  func_0x000105688514(puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3d9c8);
  (*pcVar1)();
}



/* Entry: 109c3d9f4; end: 109c3da23;  */

long FUN_109c3d9f4(uint param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  ulong auStack_60 [2];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  if ((param_1 >> 0x13 & 1) == 0) {
    return 0;
  }
  if ((uint)param_2 < 4) {
    return param_2;
  }
  puVar3 = &UNK_10f5a59c9;
  func_0x000105688514();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = &UNK_10f5a4c9a;
  puStack_80 = (undefined *)0x1a;
  pcStack_70 = "";
  uStack_68 = 0;
  puStack_78 = puVar3;
  FUN_109c3ca80(&puStack_88,&UNK_10f5a4cb5,7);
  lVar4 = 0xb8;
  __Znwm();
  FUN_109c51010();
  uVar1 = *(uint *)(puVar3 + 0x58);
  if ((int)uVar1 < 1) {
    if (*(int *)(puVar3 + 0x148) == 3) {
      auStack_60[1] = 0x100000003;
      auStack_60[0] = 0x200000000;
      puStack_80 = (undefined *)0x0;
      puStack_78 = (undefined *)0x0;
      puStack_88 = (undefined *)0x0;
      FUN_109522b28(&puStack_88,auStack_60,auStack_50,4);
      auStack_60[0] = auStack_60[0] & 0xffffffff00000000;
      lVar5 = lVar4 + 0x90;
      FUN_109c49c48(lVar5,0,auStack_60);
      if ((undefined **)(lVar5 + 0x18) != &puStack_88) {
        FUN_1093784d8();
      }
      goto LAB_109c3db84;
    }
    if (*(int *)(puVar3 + 0x148) == 2) {
      auStack_60[1] = 0x200000001;
      auStack_60[0] = 0x300000000;
      puStack_80 = (undefined *)0x0;
      puStack_78 = (undefined *)0x0;
      puStack_88 = (undefined *)0x0;
      FUN_109522b28(&puStack_88,auStack_60,auStack_50,4);
      auStack_60[0] = auStack_60[0] & 0xffffffff00000000;
      lVar5 = lVar4 + 0x90;
      FUN_109c49c48(lVar5,0,auStack_60);
      if ((undefined **)(lVar5 + 0x18) != &puStack_88) {
        FUN_1093784d8();
      }
      goto LAB_109c3db84;
    }
  }
  else {
    puStack_80 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    FUN_10945f9cc(&puStack_88,*(long *)(puVar3 + 0x60),*(long *)(puVar3 + 0x60) + (ulong)uVar1 * 4,
                  (ulong)uVar1);
    auStack_60[0] = CONCAT44(auStack_60[0]._4_4_,1);
    lVar5 = lVar4 + 0x90;
    FUN_109c49c48(lVar5,1,auStack_60);
    if ((undefined **)(lVar5 + 0x18) != &puStack_88) {
      FUN_1093784d8();
    }
    if (puStack_88 != (undefined *)0x0) {
      puStack_80 = puStack_88;
      __ZdlPv();
    }
    puStack_88 = &UNK_10f5a4c9a;
    puStack_80 = (undefined *)0x1a;
    puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,uVar1);
    pcStack_70 = "axis_order_nchw_size";
    uStack_68 = 0x14;
    FUN_109c11768(&puStack_88,*(undefined4 *)(puVar3 + 0x68),&UNK_10f5a4cd2,0x14);
    puStack_80 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    FUN_10945f9cc(&puStack_88,*(long *)(puVar3 + 0x70),
                  *(long *)(puVar3 + 0x70) + (long)*(int *)(puVar3 + 0x68) * 4);
    auStack_60[0] = auStack_60[0] & 0xffffffff00000000;
    lVar5 = lVar4 + 0x90;
    FUN_109c49c48(lVar5,0,auStack_60);
    if ((undefined **)(lVar5 + 0x18) != &puStack_88) {
      FUN_1093784d8();
    }
LAB_109c3db84:
    if (puStack_88 != (undefined *)0x0) {
      puStack_80 = puStack_88;
      __ZdlPv();
    }
  }
  if (puVar3[0x1a4] == '\x01') {
    if (*(int *)(puVar3 + 0x194) != 2) goto LAB_109c3dcc8;
    FUN_109c3c254(puVar3,lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  ___stack_chk_fail();
LAB_109c3dcc8:
  func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109c3dcd8);
  (*pcVar2)();
}



/* Entry: 109c3da24; end: 109c3dd47;  */

long FUN_109c3da24(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  ulong auStack_50 [2];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = &UNK_10f5a4c9a;
  puStack_70 = (undefined *)0x1a;
  pcStack_60 = "";
  uStack_58 = 0;
  lStack_68 = param_1;
  FUN_109c3ca80(&puStack_78,&UNK_10f5a4cb5,7);
  lVar3 = 0xb8;
  __Znwm();
  FUN_109c51010();
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((int)uVar1 < 1) {
    if (*(int *)(param_1 + 0x148) == 3) {
      auStack_50[1] = 0x100000003;
      auStack_50[0] = 0x200000000;
      puStack_70 = (undefined *)0x0;
      lStack_68 = 0;
      puStack_78 = (undefined *)0x0;
      FUN_109522b28(&puStack_78,auStack_50,auStack_40,4);
      auStack_50[0] = auStack_50[0] & 0xffffffff00000000;
      lVar4 = lVar3 + 0x90;
      FUN_109c49c48(lVar4,0,auStack_50);
      if ((undefined **)(lVar4 + 0x18) != &puStack_78) {
        FUN_1093784d8();
      }
      goto LAB_109c3db84;
    }
    if (*(int *)(param_1 + 0x148) == 2) {
      auStack_50[1] = 0x200000001;
      auStack_50[0] = 0x300000000;
      puStack_70 = (undefined *)0x0;
      lStack_68 = 0;
      puStack_78 = (undefined *)0x0;
      FUN_109522b28(&puStack_78,auStack_50,auStack_40,4);
      auStack_50[0] = auStack_50[0] & 0xffffffff00000000;
      lVar4 = lVar3 + 0x90;
      FUN_109c49c48(lVar4,0,auStack_50);
      if ((undefined **)(lVar4 + 0x18) != &puStack_78) {
        FUN_1093784d8();
      }
      goto LAB_109c3db84;
    }
  }
  else {
    puStack_70 = (undefined *)0x0;
    lStack_68 = 0;
    puStack_78 = (undefined *)0x0;
    FUN_10945f9cc(&puStack_78,*(long *)(param_1 + 0x60),*(long *)(param_1 + 0x60) + (ulong)uVar1 * 4
                  ,(ulong)uVar1);
    auStack_50[0] = CONCAT44(auStack_50[0]._4_4_,1);
    lVar4 = lVar3 + 0x90;
    FUN_109c49c48(lVar4,1,auStack_50);
    if ((undefined **)(lVar4 + 0x18) != &puStack_78) {
      FUN_1093784d8();
    }
    if (puStack_78 != (undefined *)0x0) {
      puStack_70 = puStack_78;
      __ZdlPv();
    }
    puStack_78 = &UNK_10f5a4c9a;
    puStack_70 = (undefined *)0x1a;
    lStack_68 = CONCAT44(lStack_68._4_4_,uVar1);
    pcStack_60 = "axis_order_nchw_size";
    uStack_58 = 0x14;
    FUN_109c11768(&puStack_78,*(undefined4 *)(param_1 + 0x68),&UNK_10f5a4cd2,0x14);
    puStack_70 = (undefined *)0x0;
    lStack_68 = 0;
    puStack_78 = (undefined *)0x0;
    FUN_10945f9cc(&puStack_78,*(long *)(param_1 + 0x70),
                  *(long *)(param_1 + 0x70) + (long)*(int *)(param_1 + 0x68) * 4);
    auStack_50[0] = auStack_50[0] & 0xffffffff00000000;
    lVar4 = lVar3 + 0x90;
    FUN_109c49c48(lVar4,0,auStack_50);
    if ((undefined **)(lVar4 + 0x18) != &puStack_78) {
      FUN_1093784d8();
    }
LAB_109c3db84:
    if (puStack_78 != (undefined *)0x0) {
      puStack_70 = puStack_78;
      __ZdlPv();
    }
  }
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) goto LAB_109c3dcc8;
    FUN_109c3c254(param_1,lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar3;
  }
  ___stack_chk_fail();
LAB_109c3dcc8:
  func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109c3dcd8);
  (*pcVar2)();
}



/* Entry: 109c3dd48; end: 109c3e6df;  */

long FUN_109c3dd48(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  uint *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong *puVar24;
  uint uStack_118;
  undefined8 uStack_114;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = &UNK_10f5a4ce7;
  uStack_b8 = 0x1c;
  pcStack_a8 = "";
  uStack_a0 = 0;
  lStack_b0 = param_1;
  FUN_109c3ca80(&puStack_c0,&UNK_10f5a483c,4);
  FUN_109c3cb24(&puStack_c0,1);
  lVar13 = 0x158;
  __Znwm();
  FUN_109c2b510();
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 >> 4 & 1) == 0) {
    uVar18 = *(ulong *)(param_1 + 0x20);
    puVar2 = (ulong *)(param_1 + 0x20);
    if ((uVar18 & 1) != 0) {
      puVar2 = (ulong *)(uVar18 + 7);
    }
    puVar16 = (undefined4 *)(*puVar2 + 0x58);
  }
  else {
    puVar16 = (undefined4 *)(param_1 + 0x118);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x188);
  uVar4 = *(undefined4 *)(param_1 + 0x184);
  if ((uVar9 & 0x40) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x120);
    uVar4 = *(undefined4 *)(param_1 + 0x120);
  }
  *(undefined4 *)(lVar13 + 0x90) = *puVar16;
  *(undefined4 *)(lVar13 + 0x94) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(lVar13 + 0x98) = uVar5;
  *(undefined4 *)(lVar13 + 0x9c) = uVar4;
  uVar5 = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(lVar13 + 0xa0) = uVar5;
  *(undefined4 *)(lVar13 + 0xa4) = uVar5;
  iVar12 = *(int *)(param_1 + 0x11c);
  iVar10 = *(int *)(param_1 + 0x180);
  iVar11 = *(int *)(param_1 + 0x17c);
  if (iVar12 != 0) {
    iVar10 = iVar12;
    iVar11 = iVar12;
  }
  *(int *)(lVar13 + 0x100) = iVar11;
  *(int *)(lVar13 + 0x104) = iVar10;
  FUN_109c3d9f4(uVar9,*(undefined4 *)(param_1 + 0x154));
  *(uint *)(lVar13 + 0x108) = uVar9;
  uVar18 = (ulong)*(uint *)(param_1 + 0x10);
  FUN_109c3e6e0(uVar18,*(undefined4 *)(param_1 + 0x14c));
  *(char *)(lVar13 + 0x10c) = (char)uVar18;
  puVar24 = (ulong *)(param_1 + 0x20);
  puVar2 = puVar24;
  if ((*puVar24 & 1) != 0) {
    puVar2 = (ulong *)(*puVar24 + 7);
  }
  uVar18 = *puVar2;
  iVar12 = *(int *)(uVar18 + 0x58) * *(int *)(uVar18 + 0x5c);
  uStack_ec = 0;
  uStack_100 = 0x100000004;
  uStack_f4 = NEON_rev64(*(undefined8 *)(lVar13 + 0x94),4);
  uStack_118 = 3;
  uStack_108 = 0;
  uStack_114 = *(undefined8 *)(uVar18 + 0x60);
  iVar10 = 0xf5749aa;
  iStack_10c = iVar12;
  iStack_f8 = iVar12;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_100 | 4,4);
  uVar9 = uStack_118 & ((int)uStack_118 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar9) {
    uVar9 = 5;
  }
  iVar11 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_114,uVar9);
  if (iVar10 == iVar11) {
    iVar10 = *(int *)(param_1 + 0x28);
    *(bool *)(lVar13 + 0xe8) = 1 < iVar10;
    if (1 < iVar10) {
      puStack_c0 = &UNK_10f5a5a89;
      uStack_b8 = 10;
      pcStack_a8 = "";
      uStack_a0 = 0;
      lStack_b0 = param_1;
      FUN_109c3cb24(&puStack_c0,2);
      puStack_c0 = &UNK_10f5a5a89;
      uStack_b8 = 10;
      lStack_b0 = CONCAT44(lStack_b0._4_4_,iVar12);
      pcStack_a8 = "count";
      uStack_a0 = 5;
      FUN_109c14834(&puStack_c0);
      uStack_c4 = 0;
      lStack_d8 = 0x100000004;
      uStack_cc = 1;
      uStack_c8 = 1;
      lStack_e8 = 0;
      plStack_e0 = (long *)0x0;
      puVar2 = puVar24;
      if ((*puVar24 & 1) != 0) {
        puVar2 = (ulong *)(*puVar24 + 0xf);
      }
      uVar18 = *puVar2;
      if ((*(byte *)(uVar18 + 0x10) & 1) == 0) {
        iStack_d0 = iVar12;
        FUN_109c19dfc(&puStack_c0,*param_2,&lStack_d8,*(undefined8 *)(uVar18 + 0x20),
                      ((long)*(int *)(uVar18 + 0x18) & 0x3fffffffffffffffU) << 1);
        func_0x000109c18360(&lStack_e8,&puStack_c0);
        FUN_109c180ec(&puStack_c0);
      }
      else {
        puVar17 = (undefined8 *)(*(ulong *)(uVar18 + 0x50) & 0xfffffffffffffffc);
        puVar15 = (undefined8 *)*puVar17;
        uVar18 = puVar17[1];
        if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
          puVar15 = puVar17;
          uVar18 = (ulong)*(byte *)((long)puVar17 + 0x17);
        }
        iStack_d0 = iVar12;
        FUN_109c1a57c(&puStack_c0,*param_2,&lStack_d8,puVar15,uVar18,4);
        func_0x000109c18360(&lStack_e8,&puStack_c0);
        FUN_109c180ec(&puStack_c0);
        puVar2 = puVar24;
        if ((*puVar24 & 1) != 0) {
          puVar2 = (ulong *)(*puVar24 + 0xf);
        }
        uVar18 = *puVar2;
        *(undefined4 *)(lStack_e8 + 0x4c) = *(undefined4 *)(uVar18 + 0x70);
        *(undefined4 *)(lStack_e8 + 0x50) = *(undefined4 *)(uVar18 + 0x68);
      }
      func_0x000109c1e534(lVar13 + 0xf0,&lStack_e8);
      plVar20 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar1 = plStack_e0 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
    }
    if ((*(byte *)(param_1 + 0x1a4) & 1) == 0) {
      if ((*puVar24 & 1) != 0) {
        puVar24 = (ulong *)(*puVar24 + 7);
      }
      FUN_109c19dfc(&puStack_c0,*param_2,&uStack_100,*(undefined8 *)(*puVar24 + 0x20),
                    ((long)*(int *)(*puVar24 + 0x18) & 0x3fffffffffffffffU) << 1);
      FUN_109c18570(&lStack_d8,&puStack_c0);
      FUN_109c180ec(&puStack_c0);
      *(undefined4 *)(lStack_d8 + 0x3c) = 1;
      FUN_109c11f88();
      lVar19 = lStack_d8;
      puVar21 = (uint *)(lStack_d8 + 8);
      uVar9 = *puVar21 & ((int)*puVar21 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar9) {
        uVar9 = 5;
      }
      iVar10 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,lStack_d8 + 0xc,uVar9);
      uVar9 = uStack_118 & ((int)uStack_118 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar9) {
        uVar9 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_114,uVar9);
      puStack_c0 = &UNK_10f574cf1;
      uStack_b8 = 0xf;
      lStack_b0 = CONCAT71(lStack_b0._1_7_,iVar10 == iVar12);
      pcStack_a8 = "new dimensions";
      uStack_a0 = 0xe;
      FUN_10959b640(&puStack_c0);
      uVar9 = uStack_118;
      if ((puVar21 != &uStack_118) && (iVar10 == iVar12)) {
        if (uStack_118 != 0) {
          _memmove(lVar19 + 0xc,&uStack_114,(long)(int)uStack_118 << 2);
        }
        *puVar21 = uVar9;
      }
      func_0x000109c1e534(lVar13 + 0xa8,&lStack_d8);
      plVar20 = (long *)CONCAT44(uStack_cc,iStack_d0);
      if (plVar20 != (long *)0x0) {
        plVar1 = plVar20 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_109c3e41c:
        if (lVar19 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
LAB_109c3e5b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return lVar13;
      }
      ___stack_chk_fail();
    }
    else {
      if (*(int *)(param_1 + 0x194) == 2) {
        puVar2 = puVar24;
        if ((*puVar24 & 1) != 0) {
          puVar2 = (ulong *)(*puVar24 + 7);
        }
        uVar18 = *puVar2;
        if (*(char *)(uVar18 + 0x6c) == '\x01') {
          uStack_c4 = 0;
          lStack_d8 = 0x100000004;
          uStack_cc = 1;
          uStack_c8 = 1;
          iStack_d0 = iVar12;
          FUN_109c19c88(&puStack_c0,*param_2,&lStack_d8,*(undefined8 *)(uVar18 + 0x20),
                        (long)*(int *)(uVar18 + 0x18) & 0x3fffffffffffffff);
          FUN_109c18570(&lStack_e8,&puStack_c0);
          FUN_109c180ec(&puStack_c0);
          func_0x000109c1e534(lVar13 + 0x110,&lStack_e8);
          plVar20 = plStack_e0;
          *(undefined1 *)(lVar13 + 0x10d) = 1;
          if (plStack_e0 != (long *)0x0) {
            plVar1 = plStack_e0 + 1;
            do {
              lVar19 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
        }
        if (*(char *)(param_1 + 0x204) == '\x10') {
          uVar22 = 7;
          uVar23 = 2;
        }
        else {
          if (*(char *)(param_1 + 0x204) != '\b') {
            func_0x000105688514(&UNK_10f5a5834);
            goto LAB_109c3e61c;
          }
          uVar22 = 6;
          uVar23 = 1;
        }
        puVar2 = puVar24;
        if ((*puVar24 & 1) != 0) {
          puVar2 = (ulong *)(*puVar24 + 7);
        }
        uVar18 = *(ulong *)(*puVar2 + 0x50) & 0xfffffffffffffffc;
        lVar19 = (long)*(char *)(uVar18 + 0x17);
        if (lVar19 < 0) {
          lVar19 = *(long *)(uVar18 + 8);
        }
        uVar9 = (uint)uStack_100 & ((int)(uint)uStack_100 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar9) {
          uVar9 = 5;
        }
        puVar14 = &UNK_10f5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_100 | 4,uVar9);
        FUN_109c61528(&UNK_10f5a4d37,0x39,lVar19,puVar14,uVar23);
        puVar2 = puVar24;
        if ((*puVar24 & 1) != 0) {
          puVar2 = (ulong *)(*puVar24 + 7);
        }
        puVar17 = (undefined8 *)(*(ulong *)(*puVar2 + 0x50) & 0xfffffffffffffffc);
        puVar15 = (undefined8 *)*puVar17;
        uVar18 = puVar17[1];
        if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
          puVar15 = puVar17;
          uVar18 = (ulong)*(byte *)((long)puVar17 + 0x17);
        }
        FUN_109c1a57c(&puStack_c0,*param_2,&uStack_100,puVar15,uVar18,uVar22);
        FUN_109c18570(&lStack_d8,&puStack_c0);
        FUN_109c180ec(&puStack_c0);
        if ((*puVar24 & 1) != 0) {
          puVar24 = (ulong *)(*puVar24 + 7);
        }
        FUN_109c3d058(*puVar24,lStack_d8,1);
        FUN_109c3c254(param_1,lVar13);
        *(undefined4 *)(lStack_d8 + 0x3c) = 1;
        func_0x000109c1e534(lVar13 + 0xa8,&lStack_d8);
        plVar20 = (long *)CONCAT44(uStack_cc,iStack_d0);
        if (plVar20 != (long *)0x0) {
          plVar1 = plVar20 + 1;
          do {
            lVar19 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar19 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto LAB_109c3e41c;
        }
        goto LAB_109c3e5b0;
      }
      if (*(int *)(param_1 + 0x194) == 1) {
        if ((*puVar24 & 1) != 0) {
          puVar24 = (ulong *)(*puVar24 + 7);
        }
        puVar15 = (undefined8 *)(*(ulong *)(*puVar24 + 0x50) & 0xfffffffffffffffc);
        lVar19 = (long)*(char *)((long)puVar15 + 0x17);
        if (lVar19 < 0) {
          lVar19 = puVar15[1];
          puVar15 = (undefined8 *)*puVar15;
        }
        lStack_d8 = 0;
        iStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        FUN_109591c60(&lStack_d8,puVar15,(long)puVar15 + lVar19,
                      ((long)puVar15 + lVar19) - (long)puVar15);
        ppuVar3 = &PTR_PTR_1132ec9b0;
        if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(param_1 + 0x110);
        }
        FUN_109c49aa8(&lStack_e8,&uStack_100,ppuVar3[4],
                      (long)*(int *)(ppuVar3 + 3) & 0x3fffffffffffffff,&lStack_d8);
        lVar19 = lStack_e8;
        *(undefined4 *)(lStack_e8 + 0x3c) = 1;
        FUN_109c11f88(lStack_e8);
        puVar21 = (uint *)(lVar19 + 8);
        uVar9 = *puVar21 & ((int)*puVar21 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar9) {
          uVar9 = 5;
        }
        iVar10 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar19 + 0xc,uVar9);
        uVar9 = uStack_118 & ((int)uStack_118 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar9) {
          uVar9 = 5;
        }
        iVar12 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,&uStack_114,uVar9);
        puStack_c0 = &UNK_10f574cf1;
        uStack_b8 = 0xf;
        lStack_b0 = CONCAT71(lStack_b0._1_7_,iVar10 == iVar12);
        pcStack_a8 = "new dimensions";
        uStack_a0 = 0xe;
        FUN_10959b640(&puStack_c0);
        uVar9 = uStack_118;
        if ((puVar21 != &uStack_118) && (iVar10 == iVar12)) {
          if (uStack_118 != 0) {
            _memmove(lVar19 + 0xc,&uStack_114,(long)(int)uStack_118 << 2);
          }
          *puVar21 = uVar9;
        }
        func_0x000109c1e534(lVar13 + 0xa8,&lStack_e8);
        plVar20 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar1 = plStack_e0 + 1;
          do {
            lVar19 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar19 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
          }
        }
        if (lStack_d8 != 0) {
          iStack_d0 = (int)lStack_d8;
          uStack_cc = (undefined4)((ulong)lStack_d8 >> 0x20);
          __ZdlPv();
        }
        goto LAB_109c3e5b0;
      }
    }
    puVar14 = &UNK_10f5a4d71;
  }
  else {
    puVar14 = &UNK_10f5a4d04;
  }
  func_0x000105688514(puVar14);
LAB_109c3e61c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109c3e620);
  (*pcVar8)();
}



/* Entry: 109c3e6e0; end: 109c3e723;  */

ulong FUN_109c3e6e0(uint param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  undefined8 uVar25;
  uint *puVar26;
  undefined8 uVar27;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined *puStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  long lStack_78;
  
  if ((param_1 >> 0x11 & 1) == 0) {
    uVar19 = 0;
LAB_109c3e708:
    return (ulong)(uVar19 & 0xff);
  }
  if ((uint)param_2 < 5) {
    uVar19 = (uint)(0x202020100 >> ((ulong)((uint)param_2 << 3) & 0x3f));
    goto LAB_109c3e708;
  }
  puVar13 = &UNK_10f5a5a15;
  func_0x000105688514();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_c0 = (long *)&UNK_10f5a4ded;
  plStack_b8 = (long *)0x17;
  pcStack_a8 = "";
  uStack_a0 = 0;
  puStack_b0 = puVar13;
  FUN_109c3ca80(&plStack_c0,&UNK_10f5a483c,4);
  iVar11 = *(int *)(puVar13 + 0x118);
  plStack_c0 = (long *)&UNK_10f5a4ded;
  plStack_b8 = (long *)0x17;
  puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,iVar11);
  pcStack_a8 = "num_output";
  uStack_a0 = 10;
  FUN_109c14834(&plStack_c0);
  if ((puVar13[0x1a4] != '\x01') || (*(int *)(puVar13 + 0x194) != 0)) {
    plStack_c0 = (long *)&UNK_10f5a4ded;
    plStack_b8 = (long *)0x17;
    pcStack_a8 = "";
    uStack_a0 = 0;
    puStack_b0 = puVar13;
    FUN_109c3cb24(&plStack_c0,1);
  }
  uVar14 = 0x180;
  __Znwm();
  FUN_109c27938();
  uVar19 = *(uint *)(puVar13 + 0x10);
  uVar10 = *(undefined4 *)(puVar13 + 0x188);
  uVar4 = *(undefined4 *)(puVar13 + 0x184);
  if ((uVar19 & 0x40) != 0) {
    uVar10 = *(undefined4 *)(puVar13 + 0x120);
    uVar4 = *(undefined4 *)(puVar13 + 0x120);
  }
  *(int *)(uVar14 + 0x90) = iVar11;
  *(undefined4 *)(uVar14 + 0x94) = uVar4;
  uVar4 = *(undefined4 *)(puVar13 + 0x1d4);
  *(undefined4 *)(uVar14 + 0x98) = uVar10;
  *(undefined4 *)(uVar14 + 0x9c) = uVar4;
  uVar10 = *(undefined4 *)(puVar13 + 0x1fc);
  *(undefined4 *)(uVar14 + 0xa0) = uVar10;
  *(undefined4 *)(uVar14 + 0xa4) = uVar10;
  iVar5 = *(int *)(puVar13 + 0x11c);
  iVar12 = *(int *)(puVar13 + 0x180);
  iVar8 = *(int *)(puVar13 + 0x17c);
  if (iVar5 != 0) {
    iVar12 = iVar5;
    iVar8 = iVar5;
  }
  *(int *)(uVar14 + 0x100) = iVar8;
  *(int *)(uVar14 + 0x104) = iVar12;
  FUN_109c3d9f4(uVar19,*(undefined4 *)(puVar13 + 0x154));
  *(uint *)(uVar14 + 0x108) = uVar19;
  uVar15 = (ulong)*(uint *)(puVar13 + 0x10);
  FUN_109c3e6e0(uVar15,*(undefined4 *)(puVar13 + 0x14c));
  *(char *)(uVar14 + 0x10c) = (char)uVar15;
  if ((puVar13[0x1a4] & 1) == 0) {
    puVar24 = (ulong *)(puVar13 + 0x20);
    puVar2 = puVar24;
    if ((*puVar24 & 1) != 0) {
      puVar2 = (ulong *)(*puVar24 + 7);
    }
    uVar15 = *puVar2;
    iStack_e0 = *(int *)(uVar15 + 0x5c);
    iStack_fc = *(int *)(uVar14 + 0x90);
    uStack_d4 = 0;
    uStack_e8 = (long *)CONCAT44(iStack_fc,4);
    uVar27 = NEON_rev64(*(undefined8 *)(uVar14 + 0x94),4);
    uStack_dc = (undefined4)uVar27;
    uStack_d8 = (undefined4)((ulong)uVar27 >> 0x20);
    iStack_f8 = *(int *)(uVar15 + 100) * iStack_e0 * *(int *)(uVar15 + 0x60);
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_100 = 2;
    puStack_b0._0_4_ = *(undefined4 *)(*puVar2 + 0x58);
    plStack_c0 = (long *)&UNK_10f5a4ded;
    plStack_b8 = (long *)0x17;
    pcStack_a8 = "blob num";
    uStack_a0 = 8;
    FUN_109c11768(&plStack_c0,iStack_fc,&UNK_10f5a4e0e,0xc);
    uVar19 = (uint)uStack_e8 & ((int)(uint)uStack_e8 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar19) {
      uVar19 = 5;
    }
    uVar10 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_e8 + 4,uVar19);
    plStack_c0 = (long *)&UNK_10f5a4ded;
    plStack_b8 = (long *)0x17;
    puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,uVar10);
    pcStack_a8 = "kernel element count";
    uStack_a0 = 0x14;
    uVar19 = uStack_100 & ((int)uStack_100 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar19) {
      uVar19 = 5;
    }
    puVar16 = &UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_fc,uVar19);
    FUN_109c11768(&plStack_c0,puVar16,&UNK_10f5a4e30,0x1b);
    if ((*puVar24 & 1) != 0) {
      puVar24 = (ulong *)(*puVar24 + 7);
    }
    FUN_109c19dfc(&plStack_c0,*param_2,&uStack_e8,*(undefined8 *)(*puVar24 + 0x20),
                  ((long)*(int *)(*puVar24 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&uStack_118,&plStack_c0);
    FUN_109c180ec(&plStack_c0);
    *(undefined4 *)((long)uStack_118 + 0x3c) = 1;
    FUN_109c11f88();
    plVar17 = uStack_118;
    puVar26 = (uint *)(uStack_118 + 1);
    uVar19 = *puVar26 & ((int)*puVar26 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar19) {
      uVar19 = 5;
    }
    iVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(undefined *)((long)uStack_118 + 0xc),uVar19);
    uVar19 = uStack_100 & ((int)uStack_100 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar19) {
      uVar19 = 5;
    }
    iVar12 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_fc,uVar19);
    plStack_c0 = (long *)&UNK_10f574cf1;
    plStack_b8 = (long *)0xf;
    puStack_b0 = (undefined *)CONCAT71(puStack_b0._1_7_,iVar11 == iVar12);
    pcStack_a8 = "new dimensions";
    uStack_a0 = 0xe;
    FUN_10959b640(&plStack_c0);
    uVar19 = uStack_100;
    if ((puVar26 != &uStack_100) && (iVar11 == iVar12)) {
      if (uStack_100 != 0) {
        _memmove((undefined *)((long)plVar17 + 0xc),&iStack_fc,(long)(int)uStack_100 << 2);
      }
      *puVar26 = uVar19;
    }
    FUN_109c3f634(&plStack_130,uStack_118);
    plStack_c0 = plStack_130;
    if (plStack_130 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)0x20;
      __Znwm();
      *plVar17 = (long)&PTR_FUN_110b2cfe0;
      plVar17[1] = 0;
      plVar17[2] = 0;
      plVar17[3] = (long)plStack_130;
    }
    plStack_130 = (long *)0x0;
    plStack_b8 = plVar17;
    func_0x000109c1e534(uVar14 + 0xa8,&plStack_c0);
    plVar17 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar20 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
      if (plStack_130 != (long *)0x0) {
        (**(code **)(*plStack_130 + 8))();
      }
    }
    iVar11 = *(int *)(puVar13 + 0x28);
    *(bool *)(uVar14 + 0xe8) = 1 < iVar11;
    if (1 < iVar11) {
      FUN_109c3f710(uVar14,puVar13,1,*(undefined4 *)(uVar14 + 0x90),param_2);
    }
    plVar17 = (long *)CONCAT44(uStack_10c,iStack_110);
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 1;
      do {
        lVar20 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_109c3f128:
      if (lVar20 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
LAB_109c3f4a8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return uVar14;
    }
    ___stack_chk_fail();
  }
  else {
    iVar12 = *(int *)(puVar13 + 0x194);
    if (iVar12 == 2) {
      puVar24 = (ulong *)(puVar13 + 0x20);
      uVar23 = *puVar24;
      uVar15 = uVar23 & 1;
      puVar2 = puVar24;
      if (uVar15 != 0) {
        puVar2 = (ulong *)(uVar23 + 7);
      }
      uVar22 = *puVar2;
      if (*(char *)(uVar22 + 0x6c) == '\x01') {
        iStack_e0 = *(undefined4 *)(uVar14 + 0x90);
        uStack_d4 = 0;
        uStack_e8 = (long *)0x100000004;
        uStack_dc = 1;
        uStack_d8 = 1;
        FUN_109c19c88(&plStack_c0,*param_2,&uStack_e8,*(undefined8 *)(uVar22 + 0x20),
                      (long)*(int *)(uVar22 + 0x18) & 0x3fffffffffffffff);
        FUN_109c18570(&uStack_100,&plStack_c0);
        FUN_109c180ec(&plStack_c0);
        func_0x000109c1e534(uVar14 + 0x110,&uStack_100);
        *(undefined1 *)(uVar14 + 0x10d) = 1;
        plVar17 = (long *)CONCAT44(uStack_f4,iStack_f8);
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 1;
          do {
            lVar20 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        uVar23 = *puVar24;
        uVar15 = uVar23 & 1;
      }
      puVar2 = puVar24;
      if (uVar15 != 0) {
        puVar2 = (ulong *)(uVar23 + 7);
      }
      uVar15 = *puVar2;
      iStack_e0 = *(int *)(uVar15 + 0x5c);
      iStack_fc = *(int *)(uVar14 + 0x90);
      uStack_d4 = 0;
      uStack_e8 = (long *)CONCAT44(iStack_fc,4);
      uVar27 = NEON_rev64(*(undefined8 *)(uVar14 + 0x94),4);
      uStack_dc = (undefined4)uVar27;
      uStack_d8 = (undefined4)((ulong)uVar27 >> 0x20);
      iStack_f8 = *(int *)(uVar15 + 100) * iStack_e0 * *(int *)(uVar15 + 0x60);
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_100 = 2;
      plStack_c0 = (long *)&UNK_10f5a4ded;
      plStack_b8 = (long *)0x17;
      pcStack_a8 = "blob num";
      uStack_a0 = 8;
      puStack_b0._0_4_ = *(undefined4 *)(*puVar2 + 0x58);
      FUN_109c11768(&plStack_c0,iStack_fc,&UNK_10f5a4e0e,0xc);
      uVar19 = (uint)uStack_e8 & ((int)(uint)uStack_e8 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      uVar10 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_e8 + 4,uVar19);
      plStack_c0 = (long *)&UNK_10f5a4ded;
      plStack_b8 = (long *)0x17;
      puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,uVar10);
      pcStack_a8 = "kernel element count";
      uStack_a0 = 0x14;
      uVar19 = uStack_100 & ((int)uStack_100 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      puVar16 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_fc,uVar19);
      FUN_109c11768(&plStack_c0,puVar16,&UNK_10f5a4e30,0x1b);
      if (puVar13[0x204] == '\x10') {
        uVar27 = 7;
        uVar25 = 2;
      }
      else {
        if (puVar13[0x204] != '\b') {
          func_0x000105688514(&UNK_10f5a5834);
          goto LAB_109c3f504;
        }
        uVar27 = 6;
        uVar25 = 1;
      }
      puVar2 = puVar24;
      if ((*puVar24 & 1) != 0) {
        puVar2 = (ulong *)(*puVar24 + 7);
      }
      uVar15 = *(ulong *)(*puVar2 + 0x50) & 0xfffffffffffffffc;
      lVar20 = (long)*(char *)(uVar15 + 0x17);
      if (lVar20 < 0) {
        lVar20 = *(long *)(uVar15 + 8);
      }
      uVar19 = (uint)uStack_e8 & ((int)(uint)uStack_e8 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      puVar16 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_e8 + 4,uVar19);
      FUN_109c61528(&UNK_10f5a4e4c,0x34,lVar20,puVar16,uVar25);
      puVar2 = puVar24;
      if ((*puVar24 & 1) != 0) {
        puVar2 = (ulong *)(*puVar24 + 7);
      }
      puVar21 = (undefined8 *)(*(ulong *)(*puVar2 + 0x50) & 0xfffffffffffffffc);
      puVar18 = (undefined8 *)*puVar21;
      uVar15 = puVar21[1];
      if (-1 < (char)*(byte *)((long)puVar21 + 0x17)) {
        puVar18 = puVar21;
        uVar15 = (ulong)*(byte *)((long)puVar21 + 0x17);
      }
      FUN_109c1a57c(&plStack_c0,*param_2,&uStack_e8,puVar18,uVar15,uVar27);
      FUN_109c18570(&uStack_118,&plStack_c0);
      FUN_109c180ec(&plStack_c0);
      *(undefined4 *)((long)uStack_118 + 0x3c) = 1;
      FUN_109c11f88();
      plVar17 = uStack_118;
      puVar26 = (uint *)(uStack_118 + 1);
      uVar19 = *puVar26 & ((int)*puVar26 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(undefined *)((long)uStack_118 + 0xc),uVar19);
      uVar19 = uStack_100 & ((int)uStack_100 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_fc,uVar19);
      plStack_c0 = (long *)&UNK_10f574cf1;
      plStack_b8 = (long *)0xf;
      puStack_b0 = (undefined *)CONCAT71(puStack_b0._1_7_,iVar11 == iVar12);
      pcStack_a8 = "new dimensions";
      uStack_a0 = 0xe;
      FUN_10959b640(&plStack_c0);
      uVar19 = uStack_100;
      if ((puVar26 != &uStack_100) && (iVar11 == iVar12)) {
        if (uStack_100 != 0) {
          _memmove((undefined *)((long)plVar17 + 0xc),&iStack_fc,(long)(int)uStack_100 << 2);
        }
        *puVar26 = uVar19;
      }
      if ((*puVar24 & 1) != 0) {
        puVar24 = (ulong *)(*puVar24 + 7);
      }
      FUN_109c3d058(*puVar24,uStack_118,1);
      FUN_109c3c254(puVar13,uVar14);
      func_0x000109c1e534(uVar14 + 0xa8,&uStack_118);
      iVar11 = *(int *)(puVar13 + 0x28);
      *(bool *)(uVar14 + 0xe8) = 1 < iVar11;
      if (1 < iVar11) {
        FUN_109c3f710(uVar14,puVar13,1,*(undefined4 *)(uVar14 + 0x90),param_2);
      }
      plVar17 = (long *)CONCAT44(uStack_10c,iStack_110);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar20 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_109c3f128;
      }
      goto LAB_109c3f4a8;
    }
    if (iVar12 == 1) {
      puVar24 = (ulong *)(puVar13 + 0x20);
      puVar2 = puVar24;
      if ((*puVar24 & 1) != 0) {
        puVar2 = (ulong *)(*puVar24 + 7);
      }
      uVar15 = *puVar2;
      iStack_f8 = *(int *)(uVar15 + 0x5c);
      iStack_fc = *(int *)(uVar14 + 0x90);
      uStack_ec = 0;
      uStack_100 = 4;
      uVar27 = NEON_rev64(*(undefined8 *)(uVar14 + 0x94),4);
      uStack_f4 = (undefined4)uVar27;
      uStack_f0 = (undefined4)((ulong)uVar27 >> 0x20);
      iStack_110 = *(int *)(uVar15 + 100) * iStack_f8 * *(int *)(uVar15 + 0x60);
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_118 = (long *)CONCAT44(iStack_fc,2);
      puStack_b0._0_4_ = *(undefined4 *)(*puVar2 + 0x58);
      plStack_c0 = (long *)&UNK_10f5a4ded;
      plStack_b8 = (long *)0x17;
      pcStack_a8 = "blob num";
      uStack_a0 = 8;
      FUN_109c11768(&plStack_c0,iStack_fc,&UNK_10f5a4e0e,0xc);
      uVar19 = uStack_100 & ((int)uStack_100 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      uVar10 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_fc,uVar19);
      plStack_c0 = (long *)&UNK_10f5a4ded;
      plStack_b8 = (long *)0x17;
      puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,uVar10);
      pcStack_a8 = "kernel element count";
      uStack_a0 = 0x14;
      uVar19 = (uint)uStack_118 & ((int)(uint)uStack_118 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      puVar16 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_118 + 4,uVar19);
      FUN_109c11768(&plStack_c0,puVar16,&UNK_10f5a4e30,0x1b);
      if ((*puVar24 & 1) != 0) {
        puVar24 = (ulong *)(*puVar24 + 7);
      }
      puVar18 = (undefined8 *)(*(ulong *)(*puVar24 + 0x50) & 0xfffffffffffffffc);
      lVar20 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar20 < 0) {
        lVar20 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      uStack_120 = 0;
      FUN_109591c60(&plStack_130,puVar18,(long)puVar18 + lVar20,
                    ((long)puVar18 + lVar20) - (long)puVar18);
      ppuVar3 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(puVar13 + 0x110) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(puVar13 + 0x110);
      }
      FUN_109c1acf8(&plStack_c0,*param_2,&uStack_100,ppuVar3[4],
                    (long)*(int *)(ppuVar3 + 3) & 0x3fffffffffffffff,&plStack_130);
      *(undefined4 *)((long)plStack_c0 + 0x3c) = 1;
      FUN_109c11f88();
      plVar17 = plStack_c0;
      puVar26 = (uint *)(plStack_c0 + 1);
      uVar19 = *puVar26 & ((int)*puVar26 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      iVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(undefined *)((long)plStack_c0 + 0xc),uVar19);
      uVar19 = (uint)uStack_118 & ((int)(uint)uStack_118 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar19) {
        uVar19 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_118 + 4,uVar19);
      uStack_e8 = (long *)&UNK_10f574cf1;
      iStack_e0 = 0xf;
      uStack_dc = 0;
      uStack_d8 = CONCAT31(uStack_d8._1_3_,iVar11 == iVar12);
      puStack_d0 = &UNK_10f574d01;
      uStack_c8 = 0xe;
      FUN_10959b640(&uStack_e8);
      if ((puVar26 != (uint *)&uStack_118) && (iVar11 == iVar12)) {
        uVar19 = (uint)uStack_118;
        if ((uint)uStack_118 != 0) {
          _memmove((undefined *)((long)plVar17 + 0xc),(long)&uStack_118 + 4,
                   (long)(int)(uint)uStack_118 << 2);
        }
        *puVar26 = uVar19;
      }
      FUN_109c3f634(&plStack_138,plStack_c0);
      uStack_e8 = plStack_138;
      if (plStack_138 == (long *)0x0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        puVar18 = (undefined8 *)0x20;
        __Znwm();
        *puVar18 = &PTR_FUN_110b2cfe0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = plStack_138;
      }
      iStack_e0 = (int)puVar18;
      uStack_dc = (undefined4)((ulong)puVar18 >> 0x20);
      plStack_138 = (long *)0x0;
      func_0x000109c1e534(uVar14 + 0xa8,&uStack_e8);
      plVar17 = (long *)CONCAT44(uStack_dc,iStack_e0);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar20 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
        if (plStack_138 != (long *)0x0) {
          (**(code **)(*plStack_138 + 8))();
        }
      }
      iVar11 = *(int *)(puVar13 + 0x28);
      *(bool *)(uVar14 + 0xe8) = 1 < iVar11;
      if (1 < iVar11) {
        FUN_109c3f710(uVar14,puVar13,1,*(undefined4 *)(uVar14 + 0x90),param_2);
      }
      FUN_109c180ec(&plStack_c0);
      if (plStack_130 != (long *)0x0) {
        plStack_128 = plStack_130;
LAB_109c3f4a4:
        __ZdlPv();
      }
      goto LAB_109c3f4a8;
    }
    if (iVar12 == 0) {
      puVar18 = (undefined8 *)(*(ulong *)(puVar13 + 0x108) & 0xfffffffffffffffc);
      lVar20 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar20 < 0) {
        lVar20 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_e8 = (long *)0x0;
      iStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      FUN_109591c60(&uStack_e8,puVar18,(long)puVar18 + lVar20,
                    ((long)puVar18 + lVar20) - (long)puVar18);
      iStack_f8 = 0;
      if ((long)iVar11 != 0) {
        iStack_f8 = (int)((ulong)(CONCAT44(uStack_dc,iStack_e0) - (long)uStack_e8) /
                         (ulong)(long)iVar11);
      }
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_100 = 2;
      ppuVar3 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(puVar13 + 0x110) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(puVar13 + 0x110);
      }
      iStack_fc = iVar11;
      FUN_109c1acf8(&plStack_c0,*param_2,&uStack_100,ppuVar3[4],
                    (long)*(int *)(ppuVar3 + 3) & 0x3fffffffffffffff,&uStack_e8);
      *(undefined4 *)((long)plStack_c0 + 0x3c) = 0;
      FUN_109c3f634(&plStack_130);
      uStack_118 = plStack_130;
      if (plStack_130 == (long *)0x0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        puVar18 = (undefined8 *)0x20;
        __Znwm();
        *puVar18 = &PTR_FUN_110b2cfe0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = plStack_130;
      }
      iStack_110 = (int)puVar18;
      uStack_10c = (undefined4)((ulong)puVar18 >> 0x20);
      plStack_130 = (long *)0x0;
      func_0x000109c1e534(uVar14 + 0xa8,&uStack_118);
      plVar17 = (long *)CONCAT44(uStack_10c,iStack_110);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar20 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
        if (plStack_130 != (long *)0x0) {
          (**(code **)(*plStack_130 + 8))();
        }
      }
      iVar11 = *(int *)(puVar13 + 0x28);
      *(bool *)(uVar14 + 0xe8) = 0 < iVar11;
      if (0 < iVar11) {
        FUN_109c3f710(uVar14,puVar13,0,*(undefined4 *)(uVar14 + 0x90),param_2);
      }
      FUN_109c180ec(&plStack_c0);
      if (uStack_e8 != (long *)0x0) {
        iStack_e0 = (int)uStack_e8;
        uStack_dc = (undefined4)((ulong)uStack_e8 >> 0x20);
        goto LAB_109c3f4a4;
      }
      goto LAB_109c3f4a8;
    }
  }
  func_0x000105688514(&UNK_10f5a4e81);
LAB_109c3f504:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109c3f508);
  (*pcVar9)();
}



/* Entry: 109c3e724; end: 109c3f633;  */

long FUN_109c3e724(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 uVar24;
  uint *puVar25;
  undefined8 uVar26;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_b0 = (long *)&UNK_10f5a4ded;
  plStack_a8 = (long *)0x17;
  pcStack_98 = "";
  uStack_90 = 0;
  lStack_a0 = param_1;
  FUN_109c3ca80(&plStack_b0,&UNK_10f5a483c,4);
  iVar12 = *(int *)(param_1 + 0x118);
  plStack_b0 = (long *)&UNK_10f5a4ded;
  plStack_a8 = (long *)0x17;
  lStack_a0 = CONCAT44(lStack_a0._4_4_,iVar12);
  pcStack_98 = "num_output";
  uStack_90 = 10;
  FUN_109c14834(&plStack_b0);
  if ((*(char *)(param_1 + 0x1a4) != '\x01') || (*(int *)(param_1 + 0x194) != 0)) {
    plStack_b0 = (long *)&UNK_10f5a4ded;
    plStack_a8 = (long *)0x17;
    pcStack_98 = "";
    uStack_90 = 0;
    lStack_a0 = param_1;
    FUN_109c3cb24(&plStack_b0,1);
  }
  lVar14 = 0x180;
  __Znwm();
  FUN_109c27938();
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar11 = *(undefined4 *)(param_1 + 0x188);
  uVar4 = *(undefined4 *)(param_1 + 0x184);
  if ((uVar10 & 0x40) != 0) {
    uVar11 = *(undefined4 *)(param_1 + 0x120);
    uVar4 = *(undefined4 *)(param_1 + 0x120);
  }
  *(int *)(lVar14 + 0x90) = iVar12;
  *(undefined4 *)(lVar14 + 0x94) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(lVar14 + 0x98) = uVar11;
  *(undefined4 *)(lVar14 + 0x9c) = uVar4;
  uVar11 = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(lVar14 + 0xa0) = uVar11;
  *(undefined4 *)(lVar14 + 0xa4) = uVar11;
  iVar5 = *(int *)(param_1 + 0x11c);
  iVar13 = *(int *)(param_1 + 0x180);
  iVar8 = *(int *)(param_1 + 0x17c);
  if (iVar5 != 0) {
    iVar13 = iVar5;
    iVar8 = iVar5;
  }
  *(int *)(lVar14 + 0x100) = iVar8;
  *(int *)(lVar14 + 0x104) = iVar13;
  FUN_109c3d9f4(uVar10,*(undefined4 *)(param_1 + 0x154));
  *(uint *)(lVar14 + 0x108) = uVar10;
  uVar15 = (ulong)*(uint *)(param_1 + 0x10);
  FUN_109c3e6e0(uVar15,*(undefined4 *)(param_1 + 0x14c));
  *(char *)(lVar14 + 0x10c) = (char)uVar15;
  if ((*(byte *)(param_1 + 0x1a4) & 1) == 0) {
    puVar23 = (ulong *)(param_1 + 0x20);
    puVar2 = puVar23;
    if ((*puVar23 & 1) != 0) {
      puVar2 = (ulong *)(*puVar23 + 7);
    }
    uVar15 = *puVar2;
    iStack_d0 = *(int *)(uVar15 + 0x5c);
    iStack_ec = *(int *)(lVar14 + 0x90);
    uStack_c4 = 0;
    uStack_d8 = (long *)CONCAT44(iStack_ec,4);
    uVar26 = NEON_rev64(*(undefined8 *)(lVar14 + 0x94),4);
    uStack_cc = (undefined4)uVar26;
    uStack_c8 = (undefined4)((ulong)uVar26 >> 0x20);
    iStack_e8 = *(int *)(uVar15 + 100) * iStack_d0 * *(int *)(uVar15 + 0x60);
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_f0 = 2;
    lStack_a0._0_4_ = *(undefined4 *)(*puVar2 + 0x58);
    plStack_b0 = (long *)&UNK_10f5a4ded;
    plStack_a8 = (long *)0x17;
    pcStack_98 = "blob num";
    uStack_90 = 8;
    FUN_109c11768(&plStack_b0,iStack_ec,&UNK_10f5a4e0e,0xc);
    uVar10 = (uint)uStack_d8 & ((int)(uint)uStack_d8 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar10) {
      uVar10 = 5;
    }
    uVar11 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_d8 + 4,uVar10);
    plStack_b0 = (long *)&UNK_10f5a4ded;
    plStack_a8 = (long *)0x17;
    lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar11);
    pcStack_98 = "kernel element count";
    uStack_90 = 0x14;
    uVar10 = uStack_f0 & ((int)uStack_f0 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar10) {
      uVar10 = 5;
    }
    puVar16 = &UNK_10f5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_ec,uVar10);
    FUN_109c11768(&plStack_b0,puVar16,&UNK_10f5a4e30,0x1b);
    if ((*puVar23 & 1) != 0) {
      puVar23 = (ulong *)(*puVar23 + 7);
    }
    FUN_109c19dfc(&plStack_b0,*param_2,&uStack_d8,*(undefined8 *)(*puVar23 + 0x20),
                  ((long)*(int *)(*puVar23 + 0x18) & 0x3fffffffffffffffU) << 1);
    FUN_109c18570(&uStack_108,&plStack_b0);
    FUN_109c180ec(&plStack_b0);
    *(undefined4 *)((long)uStack_108 + 0x3c) = 1;
    FUN_109c11f88();
    plVar17 = uStack_108;
    puVar25 = (uint *)(uStack_108 + 1);
    uVar10 = *puVar25 & ((int)*puVar25 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar10) {
      uVar10 = 5;
    }
    iVar12 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,(undefined *)((long)uStack_108 + 0xc),uVar10);
    uVar10 = uStack_f0 & ((int)uStack_f0 >> 0x1f ^ 0xffffffffU);
    if (4 < (int)uVar10) {
      uVar10 = 5;
    }
    iVar13 = 0xf5749aa;
    FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_ec,uVar10);
    plStack_b0 = (long *)&UNK_10f574cf1;
    plStack_a8 = (long *)0xf;
    lStack_a0 = CONCAT71(lStack_a0._1_7_,iVar12 == iVar13);
    pcStack_98 = "new dimensions";
    uStack_90 = 0xe;
    FUN_10959b640(&plStack_b0);
    uVar10 = uStack_f0;
    if ((puVar25 != &uStack_f0) && (iVar12 == iVar13)) {
      if (uStack_f0 != 0) {
        _memmove((undefined *)((long)plVar17 + 0xc),&iStack_ec,(long)(int)uStack_f0 << 2);
      }
      *puVar25 = uVar10;
    }
    FUN_109c3f634(&plStack_120,uStack_108);
    plStack_b0 = plStack_120;
    if (plStack_120 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)0x20;
      __Znwm();
      *plVar17 = (long)&PTR_FUN_110b2cfe0;
      plVar17[1] = 0;
      plVar17[2] = 0;
      plVar17[3] = (long)plStack_120;
    }
    plStack_120 = (long *)0x0;
    plStack_a8 = plVar17;
    func_0x000109c1e534(lVar14 + 0xa8,&plStack_b0);
    plVar17 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar19 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
      if (plStack_120 != (long *)0x0) {
        (**(code **)(*plStack_120 + 8))();
      }
    }
    iVar12 = *(int *)(param_1 + 0x28);
    *(bool *)(lVar14 + 0xe8) = 1 < iVar12;
    if (1 < iVar12) {
      FUN_109c3f710(lVar14,param_1,1,*(undefined4 *)(lVar14 + 0x90),param_2);
    }
    plVar17 = (long *)CONCAT44(uStack_fc,iStack_100);
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 1;
      do {
        lVar19 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_109c3f128:
      if (lVar19 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
LAB_109c3f4a8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return lVar14;
    }
    ___stack_chk_fail();
  }
  else {
    iVar13 = *(int *)(param_1 + 0x194);
    if (iVar13 == 2) {
      puVar23 = (ulong *)(param_1 + 0x20);
      uVar22 = *puVar23;
      uVar15 = uVar22 & 1;
      puVar2 = puVar23;
      if (uVar15 != 0) {
        puVar2 = (ulong *)(uVar22 + 7);
      }
      uVar21 = *puVar2;
      if (*(char *)(uVar21 + 0x6c) == '\x01') {
        iStack_d0 = *(undefined4 *)(lVar14 + 0x90);
        uStack_c4 = 0;
        uStack_d8 = (long *)0x100000004;
        uStack_cc = 1;
        uStack_c8 = 1;
        FUN_109c19c88(&plStack_b0,*param_2,&uStack_d8,*(undefined8 *)(uVar21 + 0x20),
                      (long)*(int *)(uVar21 + 0x18) & 0x3fffffffffffffff);
        FUN_109c18570(&uStack_f0,&plStack_b0);
        FUN_109c180ec(&plStack_b0);
        func_0x000109c1e534(lVar14 + 0x110,&uStack_f0);
        *(undefined1 *)(lVar14 + 0x10d) = 1;
        plVar17 = (long *)CONCAT44(uStack_e4,iStack_e8);
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 1;
          do {
            lVar19 = *plVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar19 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        uVar22 = *puVar23;
        uVar15 = uVar22 & 1;
      }
      puVar2 = puVar23;
      if (uVar15 != 0) {
        puVar2 = (ulong *)(uVar22 + 7);
      }
      uVar15 = *puVar2;
      iStack_d0 = *(int *)(uVar15 + 0x5c);
      iStack_ec = *(int *)(lVar14 + 0x90);
      uStack_c4 = 0;
      uStack_d8 = (long *)CONCAT44(iStack_ec,4);
      uVar26 = NEON_rev64(*(undefined8 *)(lVar14 + 0x94),4);
      uStack_cc = (undefined4)uVar26;
      uStack_c8 = (undefined4)((ulong)uVar26 >> 0x20);
      iStack_e8 = *(int *)(uVar15 + 100) * iStack_d0 * *(int *)(uVar15 + 0x60);
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_f0 = 2;
      plStack_b0 = (long *)&UNK_10f5a4ded;
      plStack_a8 = (long *)0x17;
      pcStack_98 = "blob num";
      uStack_90 = 8;
      lStack_a0._0_4_ = *(undefined4 *)(*puVar2 + 0x58);
      FUN_109c11768(&plStack_b0,iStack_ec,&UNK_10f5a4e0e,0xc);
      uVar10 = (uint)uStack_d8 & ((int)(uint)uStack_d8 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      uVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_d8 + 4,uVar10);
      plStack_b0 = (long *)&UNK_10f5a4ded;
      plStack_a8 = (long *)0x17;
      lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar11);
      pcStack_98 = "kernel element count";
      uStack_90 = 0x14;
      uVar10 = uStack_f0 & ((int)uStack_f0 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      puVar16 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_ec,uVar10);
      FUN_109c11768(&plStack_b0,puVar16,&UNK_10f5a4e30,0x1b);
      if (*(char *)(param_1 + 0x204) == '\x10') {
        uVar26 = 7;
        uVar24 = 2;
      }
      else {
        if (*(char *)(param_1 + 0x204) != '\b') {
          func_0x000105688514(&UNK_10f5a5834);
          goto LAB_109c3f504;
        }
        uVar26 = 6;
        uVar24 = 1;
      }
      puVar2 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar2 = (ulong *)(*puVar23 + 7);
      }
      uVar15 = *(ulong *)(*puVar2 + 0x50) & 0xfffffffffffffffc;
      lVar19 = (long)*(char *)(uVar15 + 0x17);
      if (lVar19 < 0) {
        lVar19 = *(long *)(uVar15 + 8);
      }
      uVar10 = (uint)uStack_d8 & ((int)(uint)uStack_d8 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      puVar16 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_d8 + 4,uVar10);
      FUN_109c61528(&UNK_10f5a4e4c,0x34,lVar19,puVar16,uVar24);
      puVar2 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar2 = (ulong *)(*puVar23 + 7);
      }
      puVar20 = (undefined8 *)(*(ulong *)(*puVar2 + 0x50) & 0xfffffffffffffffc);
      puVar18 = (undefined8 *)*puVar20;
      uVar15 = puVar20[1];
      if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) {
        puVar18 = puVar20;
        uVar15 = (ulong)*(byte *)((long)puVar20 + 0x17);
      }
      FUN_109c1a57c(&plStack_b0,*param_2,&uStack_d8,puVar18,uVar15,uVar26);
      FUN_109c18570(&uStack_108,&plStack_b0);
      FUN_109c180ec(&plStack_b0);
      *(undefined4 *)((long)uStack_108 + 0x3c) = 1;
      FUN_109c11f88();
      plVar17 = uStack_108;
      puVar25 = (uint *)(uStack_108 + 1);
      uVar10 = *puVar25 & ((int)*puVar25 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(undefined *)((long)uStack_108 + 0xc),uVar10);
      uVar10 = uStack_f0 & ((int)uStack_f0 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      iVar13 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_ec,uVar10);
      plStack_b0 = (long *)&UNK_10f574cf1;
      plStack_a8 = (long *)0xf;
      lStack_a0 = CONCAT71(lStack_a0._1_7_,iVar12 == iVar13);
      pcStack_98 = "new dimensions";
      uStack_90 = 0xe;
      FUN_10959b640(&plStack_b0);
      uVar10 = uStack_f0;
      if ((puVar25 != &uStack_f0) && (iVar12 == iVar13)) {
        if (uStack_f0 != 0) {
          _memmove((undefined *)((long)plVar17 + 0xc),&iStack_ec,(long)(int)uStack_f0 << 2);
        }
        *puVar25 = uVar10;
      }
      if ((*puVar23 & 1) != 0) {
        puVar23 = (ulong *)(*puVar23 + 7);
      }
      FUN_109c3d058(*puVar23,uStack_108,1);
      FUN_109c3c254(param_1,lVar14);
      func_0x000109c1e534(lVar14 + 0xa8,&uStack_108);
      iVar12 = *(int *)(param_1 + 0x28);
      *(bool *)(lVar14 + 0xe8) = 1 < iVar12;
      if (1 < iVar12) {
        FUN_109c3f710(lVar14,param_1,1,*(undefined4 *)(lVar14 + 0x90),param_2);
      }
      plVar17 = (long *)CONCAT44(uStack_fc,iStack_100);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_109c3f128;
      }
      goto LAB_109c3f4a8;
    }
    if (iVar13 == 1) {
      puVar23 = (ulong *)(param_1 + 0x20);
      puVar2 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar2 = (ulong *)(*puVar23 + 7);
      }
      uVar15 = *puVar2;
      iStack_e8 = *(int *)(uVar15 + 0x5c);
      iStack_ec = *(int *)(lVar14 + 0x90);
      uStack_dc = 0;
      uStack_f0 = 4;
      uVar26 = NEON_rev64(*(undefined8 *)(lVar14 + 0x94),4);
      uStack_e4 = (undefined4)uVar26;
      uStack_e0 = (undefined4)((ulong)uVar26 >> 0x20);
      iStack_100 = *(int *)(uVar15 + 100) * iStack_e8 * *(int *)(uVar15 + 0x60);
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_108 = (long *)CONCAT44(iStack_ec,2);
      lStack_a0._0_4_ = *(undefined4 *)(*puVar2 + 0x58);
      plStack_b0 = (long *)&UNK_10f5a4ded;
      plStack_a8 = (long *)0x17;
      pcStack_98 = "blob num";
      uStack_90 = 8;
      FUN_109c11768(&plStack_b0,iStack_ec,&UNK_10f5a4e0e,0xc);
      uVar10 = uStack_f0 & ((int)uStack_f0 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      uVar11 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,&iStack_ec,uVar10);
      plStack_b0 = (long *)&UNK_10f5a4ded;
      plStack_a8 = (long *)0x17;
      lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar11);
      pcStack_98 = "kernel element count";
      uStack_90 = 0x14;
      uVar10 = (uint)uStack_108 & ((int)(uint)uStack_108 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      puVar16 = &UNK_10f5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_108 + 4,uVar10);
      FUN_109c11768(&plStack_b0,puVar16,&UNK_10f5a4e30,0x1b);
      if ((*puVar23 & 1) != 0) {
        puVar23 = (ulong *)(*puVar23 + 7);
      }
      puVar18 = (undefined8 *)(*(ulong *)(*puVar23 + 0x50) & 0xfffffffffffffffc);
      lVar19 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar19 < 0) {
        lVar19 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      plStack_120 = (long *)0x0;
      plStack_118 = (long *)0x0;
      uStack_110 = 0;
      FUN_109591c60(&plStack_120,puVar18,(long)puVar18 + lVar19,
                    ((long)puVar18 + lVar19) - (long)puVar18);
      ppuVar3 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(param_1 + 0x110);
      }
      FUN_109c1acf8(&plStack_b0,*param_2,&uStack_f0,ppuVar3[4],
                    (long)*(int *)(ppuVar3 + 3) & 0x3fffffffffffffff,&plStack_120);
      *(undefined4 *)((long)plStack_b0 + 0x3c) = 1;
      FUN_109c11f88();
      plVar17 = plStack_b0;
      puVar25 = (uint *)(plStack_b0 + 1);
      uVar10 = *puVar25 & ((int)*puVar25 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      iVar12 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(undefined *)((long)plStack_b0 + 0xc),uVar10);
      uVar10 = (uint)uStack_108 & ((int)(uint)uStack_108 >> 0x1f ^ 0xffffffffU);
      if (4 < (int)uVar10) {
        uVar10 = 5;
      }
      iVar13 = 0xf5749aa;
      FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_108 + 4,uVar10);
      uStack_d8 = (long *)&UNK_10f574cf1;
      iStack_d0 = 0xf;
      uStack_cc = 0;
      uStack_c8 = CONCAT31(uStack_c8._1_3_,iVar12 == iVar13);
      puStack_c0 = &UNK_10f574d01;
      uStack_b8 = 0xe;
      FUN_10959b640(&uStack_d8);
      if ((puVar25 != (uint *)&uStack_108) && (iVar12 == iVar13)) {
        uVar10 = (uint)uStack_108;
        if ((uint)uStack_108 != 0) {
          _memmove((undefined *)((long)plVar17 + 0xc),(long)&uStack_108 + 4,
                   (long)(int)(uint)uStack_108 << 2);
        }
        *puVar25 = uVar10;
      }
      FUN_109c3f634(&plStack_128,plStack_b0);
      uStack_d8 = plStack_128;
      if (plStack_128 == (long *)0x0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        puVar18 = (undefined8 *)0x20;
        __Znwm();
        *puVar18 = &PTR_FUN_110b2cfe0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = plStack_128;
      }
      iStack_d0 = (int)puVar18;
      uStack_cc = (undefined4)((ulong)puVar18 >> 0x20);
      plStack_128 = (long *)0x0;
      func_0x000109c1e534(lVar14 + 0xa8,&uStack_d8);
      plVar17 = (long *)CONCAT44(uStack_cc,iStack_d0);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
        if (plStack_128 != (long *)0x0) {
          (**(code **)(*plStack_128 + 8))();
        }
      }
      iVar12 = *(int *)(param_1 + 0x28);
      *(bool *)(lVar14 + 0xe8) = 1 < iVar12;
      if (1 < iVar12) {
        FUN_109c3f710(lVar14,param_1,1,*(undefined4 *)(lVar14 + 0x90),param_2);
      }
      FUN_109c180ec(&plStack_b0);
      if (plStack_120 != (long *)0x0) {
        plStack_118 = plStack_120;
LAB_109c3f4a4:
        __ZdlPv();
      }
      goto LAB_109c3f4a8;
    }
    if (iVar13 == 0) {
      puVar18 = (undefined8 *)(*(ulong *)(param_1 + 0x108) & 0xfffffffffffffffc);
      lVar19 = (long)*(char *)((long)puVar18 + 0x17);
      if (lVar19 < 0) {
        lVar19 = puVar18[1];
        puVar18 = (undefined8 *)*puVar18;
      }
      uStack_d8 = (long *)0x0;
      iStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      FUN_109591c60(&uStack_d8,puVar18,(long)puVar18 + lVar19,
                    ((long)puVar18 + lVar19) - (long)puVar18);
      iStack_e8 = 0;
      if ((long)iVar12 != 0) {
        iStack_e8 = (int)((ulong)(CONCAT44(uStack_cc,iStack_d0) - (long)uStack_d8) /
                         (ulong)(long)iVar12);
      }
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_f0 = 2;
      ppuVar3 = &PTR_PTR_1132ec9b0;
      if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(param_1 + 0x110);
      }
      iStack_ec = iVar12;
      FUN_109c1acf8(&plStack_b0,*param_2,&uStack_f0,ppuVar3[4],
                    (long)*(int *)(ppuVar3 + 3) & 0x3fffffffffffffff,&uStack_d8);
      *(undefined4 *)((long)plStack_b0 + 0x3c) = 0;
      FUN_109c3f634(&plStack_120);
      uStack_108 = plStack_120;
      if (plStack_120 == (long *)0x0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        puVar18 = (undefined8 *)0x20;
        __Znwm();
        *puVar18 = &PTR_FUN_110b2cfe0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = plStack_120;
      }
      iStack_100 = (int)puVar18;
      uStack_fc = (undefined4)((ulong)puVar18 >> 0x20);
      plStack_120 = (long *)0x0;
      func_0x000109c1e534(lVar14 + 0xa8,&uStack_108);
      plVar17 = (long *)CONCAT44(uStack_fc,iStack_100);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar19 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
        if (plStack_120 != (long *)0x0) {
          (**(code **)(*plStack_120 + 8))();
        }
      }
      iVar12 = *(int *)(param_1 + 0x28);
      *(bool *)(lVar14 + 0xe8) = 0 < iVar12;
      if (0 < iVar12) {
        FUN_109c3f710(lVar14,param_1,0,*(undefined4 *)(lVar14 + 0x90),param_2);
      }
      FUN_109c180ec(&plStack_b0);
      if (uStack_d8 != (long *)0x0) {
        iStack_d0 = (int)uStack_d8;
        uStack_cc = (undefined4)((ulong)uStack_d8 >> 0x20);
        goto LAB_109c3f4a4;
      }
      goto LAB_109c3f4a8;
    }
  }
  func_0x000105688514(&UNK_10f5a4e81);
LAB_109c3f504:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109c3f508);
  (*pcVar9)();
}



/* Entry: 109c3f634; end: 109c3f70f;  */

void FUN_109c3f634(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 8) < 2) {
    iVar2 = -1;
    iVar3 = -1;
    if (*(int *)(param_2 + 8) != 1) goto LAB_109c3f67c;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x10);
  }
  iVar3 = *(int *)(param_2 + 0xc);
LAB_109c3f67c:
  lVar1 = 0x58;
  __Znwm();
  FUN_109c1106c();
  *param_1 = lVar1;
  _vDSP_mtrans(*(undefined8 *)(param_2 + 0x40),1,*(undefined8 *)(lVar1 + 0x40),1,(long)iVar2,
               (long)iVar3);
  return;
}



/* Entry: 109c3f710; end: 109c3f933;  */

long * FUN_109c3f710(long param_1,long param_2,uint param_3,undefined4 param_4,undefined8 *param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong *puStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &UNK_10f5a5a89;
  uStack_88 = 10;
  pcStack_78 = "";
  uStack_70 = 0;
  lStack_80 = param_2;
  FUN_109c3cb24(&puStack_90,param_3 + 1);
  puStack_90 = &UNK_10f5a5a89;
  uStack_88 = 10;
  lStack_80 = CONCAT44(lStack_80._4_4_,param_4);
  pcStack_78 = "count";
  uStack_70 = 5;
  FUN_109c14834(&puStack_90);
  uStack_94 = 0;
  uStack_a8 = 0x100000004;
  uStack_9c = 0x100000001;
  lStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  puVar12 = (ulong *)(param_2 + 0x20);
  puVar2 = puVar12;
  if ((*puVar12 & 1) != 0) {
    puVar2 = (ulong *)(*puVar12 + (ulong)param_3 * 8 + 7);
  }
  uVar8 = *puVar2;
  uStack_a0 = param_4;
  if ((*(byte *)(uVar8 + 0x10) & 1) == 0) {
    FUN_109c19dfc(&puStack_90,*param_5,&uStack_a8,*(undefined8 *)(uVar8 + 0x20),
                  ((long)*(int *)(uVar8 + 0x18) & 0x3fffffffffffffffU) << 1);
    func_0x000109c18360(&lStack_b8,&puStack_90);
    FUN_109c180ec(&puStack_90);
  }
  else {
    puVar9 = (undefined8 *)(*(ulong *)(uVar8 + 0x50) & 0xfffffffffffffffc);
    puVar10 = (undefined8 *)*puVar9;
    uVar8 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      puVar10 = puVar9;
      uVar8 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    FUN_109c1a57c(&puStack_90,*param_5,&uStack_a8,puVar10,uVar8,4);
    func_0x000109c18360(&lStack_b8,&puStack_90);
    FUN_109c180ec(&puStack_90);
    puVar2 = puVar12;
    if ((*puVar12 & 1) != 0) {
      puVar2 = (ulong *)(*puVar12 + (ulong)param_3 * 8 + 7);
    }
    uVar8 = *puVar2;
    *(undefined4 *)(lStack_b8 + 0x4c) = *(undefined4 *)(uVar8 + 0x70);
    *(undefined4 *)(lStack_b8 + 0x50) = *(undefined4 *)(uVar8 + 0x68);
  }
  plVar7 = (long *)(param_1 + 0xf0);
  func_0x000109c1e534(plVar7,&lStack_b8);
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar1 = plStack_b0 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(&puStack_90);
    FUN_10959b818(&lStack_b8);
    plVar6 = plVar7;
    __Unwind_Resume();
    pcStack_c8 = FUN_109c3f934;
    puVar10 = (undefined8 *)(plVar6[0x20] & 0xfffffffffffffffc);
    puStack_e0 = puVar12;
    plStack_d8 = plVar7;
    puStack_d0 = &stack0xfffffffffffffff0;
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_100,*puVar10,puVar10[1]);
    }
    else {
      uStack_f8 = puVar10[1];
      uStack_100 = *puVar10;
      lStack_f0 = puVar10[2];
    }
    plVar7 = (long *)0x98;
    __Znwm();
    plVar7[0xc] = 0;
    plVar7[0xb] = 0;
    plVar7[0xe] = 0;
    plVar7[0xd] = 0;
    plVar7[0x10] = 0;
    plVar7[0xf] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[0x11] = 0;
    plVar7[10] = 0;
    plVar7[9] = 0;
    plVar7[4] = 0;
    plVar7[3] = 0;
    plVar7[2] = 0;
    plVar7[1] = 0;
    *(undefined1 *)((long)plVar7 + 0x61) = 1;
    plVar7[0xd] = 0;
    plVar7[0xe] = 0;
    *(undefined4 *)(plVar7 + 0xf) = 0x3f800000;
    *plVar7 = (long)&PTR_FUN_110b2c5e8;
    plVar7[0x12] = -0xfffffffd;
    *(undefined1 *)((long)plVar7 + 0x47) = 6;
    *(undefined4 *)(plVar7 + 6) = 0x636e6f43;
    *(undefined2 *)((long)plVar7 + 0x34) = 0x7461;
    if (*(char *)((long)plVar6 + 0x1a4) == '\x01') {
      if (*(int *)((long)plVar6 + 0x194) != 2) {
        func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109c3fa6c);
        (*pcVar5)();
      }
      FUN_109c3c254(plVar6,plVar7);
    }
    if ((*(byte *)((long)plVar6 + 0x16) >> 4 & 1) == 0) {
      *(int *)(plVar7 + 0x12) = (int)plVar6[0x3e];
    }
    else {
      *(int *)((long)plVar7 + 0x94) = (int)plVar6[0x39];
    }
    if (lStack_f0 < 0) {
      __ZdlPv(uStack_100);
    }
    return plVar7;
  }
  return plVar7;
}



/* Entry: 109c3f934; end: 109c3fa8b;  */

undefined8 * FUN_109c3f934(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar2,puVar2[1]);
  }
  else {
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    lStack_30 = puVar2[2];
  }
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[0x11] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *(undefined1 *)((long)puVar2 + 0x61) = 1;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0x3f800000;
  *puVar2 = &PTR_FUN_110b2c5e8;
  puVar2[0x12] = 0xffffffff00000003;
  *(undefined1 *)((long)puVar2 + 0x47) = 6;
  *(undefined4 *)(puVar2 + 6) = 0x636e6f43;
  *(undefined2 *)((long)puVar2 + 0x34) = 0x7461;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3fa6c);
      (*pcVar1)();
    }
    FUN_109c3c254(param_1,puVar2);
  }
  if ((*(byte *)(param_1 + 0x16) >> 4 & 1) == 0) {
    *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)(param_1 + 0x1f0);
  }
  else {
    *(undefined4 *)((long)puVar2 + 0x94) = *(undefined4 *)(param_1 + 0x1c8);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return puVar2;
}



/* Entry: 109c3fa8c; end: 109c3fd57;  */

long FUN_109c3fa8c(long param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  uint uStack_70;
  undefined1 auStack_6c [20];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0xf5a4efe;
  uStack_9c = 1;
  uStack_98 = 0x1a;
  uStack_94 = 0;
  uStack_90 = (uint)param_1;
  uStack_8c = (undefined4)((ulong)param_1 >> 0x20);
  pcStack_88 = "";
  uStack_80 = 0;
  FUN_109c3ca80(&uStack_a0,&UNK_10f596393,7);
  lVar4 = 0xb8;
  __Znwm();
  FUN_109c5bcc8();
  uStack_90 = *(uint *)(param_1 + 0x38);
  uStack_a0 = 0xf5a4efe;
  uStack_9c = 1;
  uStack_98 = 0x1a;
  uStack_94 = 0;
  pcStack_88 = "dims_size";
  uStack_80 = 9;
  FUN_109c18138(&uStack_a0,5);
  uVar2 = *(uint *)(param_1 + 0x78);
  uVar8 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    if (*(int *)(param_1 + 0x38) == 4) {
      uStack_a0 = 4;
      uStack_8c = 0;
      uVar9 = (*(undefined8 **)(param_1 + 0x40))[1];
      uVar7 = **(undefined8 **)(param_1 + 0x40);
      uStack_94 = (undefined4)uVar9;
      uStack_90 = (uint)((ulong)uVar9 >> 0x20);
      uStack_9c = (undefined4)uVar7;
      uStack_98 = (undefined4)((ulong)uVar7 >> 0x20);
      FUN_109c3fd58(lVar4,&uStack_a0);
    }
    else {
      if (*(int *)(param_1 + 0x38) != 3) {
        func_0x000105688514(&UNK_10f5a4f5d);
        goto LAB_109c3fd04;
      }
      uStack_90 = *(uint *)(*(undefined8 **)(param_1 + 0x40) + 1);
      uStack_8c = 0;
      uStack_a0 = 4;
      uStack_9c = 1;
      uVar7 = **(undefined8 **)(param_1 + 0x40);
      uStack_98 = (undefined4)uVar7;
      uStack_94 = (undefined4)((ulong)uVar7 >> 0x20);
      FUN_109c3fd58(lVar4,&uStack_a0);
    }
  }
  else {
    uStack_a0 = 0xf5a4efe;
    uStack_9c = 1;
    uStack_98 = 0x1a;
    uStack_94 = 0;
    pcStack_88 = "reshape_dimensions_nchw_size";
    uStack_80 = 0x1c;
    uStack_90 = uVar2;
    FUN_109c18138(&uStack_a0,5);
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    lVar6 = uVar8 * 4;
    lVar1 = 0;
    if (uVar2 < 5) {
      lVar1 = uVar8 * -4 + 0x14;
    }
    _bzero(auStack_6c + uVar8 * 4 + -4,lVar1);
    _memcpy(&uStack_70,uVar7,lVar6);
    uStack_74 = 1;
    lVar5 = lVar4 + 0x90;
    FUN_109c4a0a8(lVar5,1,&uStack_74);
    _memcpy(lVar5 + 0x18,&uStack_70,lVar6);
    *(uint *)(lVar5 + 0x14) = uVar2;
    FUN_109c11768(&uStack_a0,*(undefined4 *)(param_1 + 0x88),&UNK_10f5a4f40,0x1c);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = uVar2;
    _bzero(auStack_6c + lVar6,lVar1);
    _memcpy(auStack_6c,uVar7,lVar6);
    FUN_109c3fd58(lVar4,&uStack_70);
  }
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) == 2) {
      FUN_109c3c254(param_1,lVar4);
      goto LAB_109c3fcac;
    }
  }
  else {
LAB_109c3fcac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return lVar4;
    }
    ___stack_chk_fail();
  }
  func_0x000105688514(&UNK_10f5a5962);
LAB_109c3fd04:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109c3fd08);
  (*pcVar3)();
}



/* Entry: 109c3fd58; end: 109c3fdbb;  */

void FUN_109c3fd58(long param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  param_1 = param_1 + 0x90;
  FUN_109c4a0a8(param_1,0,&uStack_24);
  if ((int *)(param_1 + 0x14) != param_2) {
    iVar1 = 0;
    if (*param_2 != 0) {
      _memmove(param_1 + 0x18,param_2 + 1,(long)*param_2 << 2);
      iVar1 = *param_2;
    }
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return;
}



/* Entry: 109c3fdbc; end: 109c3fe97;  */

undefined8 FUN_109c3fdbc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar3,puVar3[1]);
  }
  else {
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    lStack_30 = puVar3[2];
  }
  uVar2 = 0x90;
  __Znwm(0x90);
  FUN_109c36050();
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109c3fe68);
      (*pcVar1)();
    }
    FUN_109c3c254(param_1,uVar2);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return uVar2;
}



/* Entry: 109c3fe98; end: 109c40b0f;  */

/* WARNING: Removing unreachable block (ram,0x000109c40350) */

long FUN_109c3fe98(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  dword dVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  dword dVar7;
  dword dVar8;
  dword dVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  undefined8 *****pppppuVar16;
  uint uVar17;
  dword dVar18;
  undefined4 uVar19;
  code *pcVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  dword *pdVar26;
  dword *pdVar27;
  dword **ppdVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong *puVar31;
  long lVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  ulong uVar36;
  uint *puVar37;
  dword **ppdVar38;
  long *plVar39;
  ulong *puVar40;
  undefined1 uStack_1a9;
  ulong uStack_1a8;
  dword *pdStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  dword *pdStack_180;
  dword *pdStack_178;
  undefined1 uStack_161;
  undefined8 ****ppppuStack_160;
  long *plStack_158;
  byte bStack_149;
  undefined4 uStack_148;
  uint uStack_144;
  int iStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  dword *pdStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  dword *pdStack_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  dword **ppdStack_b8;
  dword **ppdStack_b0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdStack_d0 = (dword *)&UNK_10f5a4f99;
  uStack_c8 = 0x18;
  uStack_c4 = 0;
  uStack_c0 = (uint)param_1;
  uVar15 = uStack_c0;
  uStack_bc = (undefined4)((ulong)param_1 >> 0x20);
  uVar19 = uStack_bc;
  ppdStack_b8 = (dword **)0x10ef12930;
  ppdStack_b0 = (dword **)0x0;
  FUN_109c3cb24(&pdStack_d0,1);
  uStack_c0 = *(uint *)(param_1 + 0x1d0);
  pdStack_d0 = (dword *)&UNK_10f5a4f99;
  uStack_c8 = 0x18;
  uStack_c4 = 0;
  ppdStack_b8 = (dword **)0x10f281bcc;
  ppdStack_b0 = (dword **)0x5;
  if (uStack_c0 == 0) {
    func_0x000107c31940(&pdStack_f0,&UNK_10f5a5aba);
    FUN_109c4a468(&pdStack_d0,&pdStack_f0);
    goto LAB_109c40928;
  }
  uVar5 = *(uint *)(param_1 + 0x118);
  pdStack_d0 = (dword *)&UNK_10f5a4f99;
  uStack_c8 = 0x18;
  uStack_c4 = 0;
  ppdStack_b8 = (dword **)&UNK_10f5a48c2;
  ppdStack_b0 = (dword **)0xa;
  if (uVar5 < uStack_c0) {
    uStack_c0 = uVar5;
    __ZNSt3__19to_stringEj(&uStack_148);
    plVar39 = (long *)&uStack_148;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar39,0,&UNK_10f5a360c,0xf);
    uStack_130 = *plVar39;
    uStack_120 = (undefined4)plVar39[2];
    uStack_11c = (undefined4)((ulong)plVar39[2] >> 0x20);
    uStack_128 = (uint)plVar39[1];
    uStack_124 = (undefined4)((ulong)plVar39[1] >> 0x20);
    plVar39[1] = 0;
    plVar39[2] = 0;
    *plVar39 = 0;
    puVar30 = &uStack_130;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar30,&UNK_10f5a361c,7);
    uStack_108 = puVar30[1];
    uStack_110 = *puVar30;
    uStack_100 = puVar30[2];
    puVar30[1] = 0;
    puVar30[2] = 0;
    *puVar30 = 0;
    __ZNSt3__19to_stringEj(&ppppuStack_160,uVar5);
    plVar39 = plStack_158;
    pppppuVar16 = (undefined8 *****)ppppuStack_160;
    if (-1 < (char)bStack_149) {
      plVar39 = (long *)(ulong)bStack_149;
      pppppuVar16 = &ppppuStack_160;
    }
    puVar30 = &uStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar30,pppppuVar16,plVar39);
    pdStack_f0 = (dword *)*puVar30;
    uStack_e0._0_4_ = (undefined4)puVar30[2];
    uStack_e0._4_4_ = (undefined4)((ulong)puVar30[2] >> 0x20);
    uStack_e8._0_4_ = (uint)puVar30[1];
    uStack_e8._4_4_ = (undefined4)((ulong)puVar30[1] >> 0x20);
    puVar30[1] = 0;
    puVar30[2] = 0;
    *puVar30 = 0;
    FUN_109c4a468(&pdStack_d0,&pdStack_f0);
    goto LAB_109c40928;
  }
  lVar25 = 0xc0;
  uStack_c0 = uVar5;
  __Znwm();
  FUN_109c369f8();
  uVar6 = *(uint *)(param_1 + 0x118);
  *(undefined4 *)(lVar25 + 0x90) = *(undefined4 *)(param_1 + 0x1d0);
  *(uint *)(lVar25 + 0x94) = uVar6;
  uVar21 = *(uint *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x184);
  uVar17 = *(uint *)(param_1 + 0x188);
  if ((uVar21 & 0x40) != 0) {
    uVar5 = *(uint *)(param_1 + 0x120);
    uVar17 = *(uint *)(param_1 + 0x120);
  }
  dVar7 = *(dword *)(param_1 + 0x1fc);
  dVar8 = *(dword *)(param_1 + 0x1d4);
  dVar9 = *(dword *)(param_1 + 0x11c);
  dVar3 = *(dword *)(param_1 + 0x17c);
  dVar18 = *(dword *)(param_1 + 0x180);
  if (dVar9 != 0) {
    dVar3 = dVar9;
    dVar18 = dVar9;
  }
  FUN_109c3d9f4(uVar21,*(undefined4 *)(param_1 + 0x154));
  uVar22 = *(undefined4 *)(param_1 + 0x10);
  FUN_109c3e6e0(uVar22,*(undefined4 *)(param_1 + 0x14c));
  uVar10 = *(uint *)(lVar25 + 0x90);
  puVar40 = (ulong *)(param_1 + 0x20);
  puVar31 = puVar40;
  if ((*puVar40 & 1) != 0) {
    puVar31 = (ulong *)(*puVar40 + 7);
  }
  iVar11 = *(int *)(*puVar31 + 0x5c);
  uStack_110 = CONCAT44(uVar6,4);
  uStack_108 = CONCAT44(uVar17,iVar11);
  uStack_100 = (ulong)uVar5;
  ppppuStack_160 = (undefined8 *****)0x0;
  plStack_158 = (long *)0x0;
  if ((*(byte *)(param_1 + 0x1a4) & 1) == 0) {
    FUN_109c19dfc(&pdStack_d0,*param_2,&uStack_110,*(undefined8 *)(*puVar31 + 0x20),
                  ((long)*(int *)(*puVar31 + 0x18) & 0x3fffffffffffffffU) << 1);
    func_0x000109c18360(&ppppuStack_160,&pdStack_d0);
    FUN_109c180ec(&pdStack_d0);
LAB_109c400e8:
    iVar12 = *(int *)(param_1 + 0x28);
    if (1 < iVar12) {
      pdStack_d0 = (dword *)&UNK_10f5a5a89;
      uStack_c8 = 10;
      uStack_c4 = 0;
      ppdStack_b8 = (dword **)0x10ef12930;
      ppdStack_b0 = (dword **)0x0;
      uStack_c0 = uVar15;
      uStack_bc = uVar19;
      FUN_109c3cb24(&pdStack_d0,2);
      pdStack_d0 = (dword *)&UNK_10f5a5a89;
      uStack_c8 = 10;
      uStack_c4 = 0;
      ppdStack_b8 = (dword **)&DAT_10f637eac;
      ppdStack_b0 = (dword **)0x5;
      uStack_c0 = uVar6;
      FUN_109c14834();
      uStack_e0._4_4_ = 0;
      pdStack_f0 = (dword *)0x100000004;
      uStack_e8._4_4_ = 1;
      uStack_e0._0_4_ = 1;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      puVar31 = puVar40;
      if ((*puVar40 & 1) != 0) {
        puVar31 = (ulong *)(*puVar40 + 0xf);
      }
      uVar33 = *puVar31;
      uStack_e8._0_4_ = uVar6;
      if ((*(byte *)(uVar33 + 0x10) & 1) == 0) {
        FUN_109c19dfc(&pdStack_d0,*param_2,&pdStack_f0,*(undefined8 *)(uVar33 + 0x20),
                      ((long)*(int *)(uVar33 + 0x18) & 0x3fffffffffffffffU) << 1);
        func_0x000109c18360(&uStack_130,&pdStack_d0);
        FUN_109c180ec(&pdStack_d0);
      }
      else {
        puVar34 = (undefined8 *)(*(ulong *)(uVar33 + 0x50) & 0xfffffffffffffffc);
        puVar30 = (undefined8 *)*puVar34;
        uVar33 = puVar34[1];
        if (-1 < (char)*(byte *)((long)puVar34 + 0x17)) {
          puVar30 = puVar34;
          uVar33 = (ulong)*(byte *)((long)puVar34 + 0x17);
        }
        FUN_109c1a57c(&pdStack_d0,*param_2,&pdStack_f0,puVar30,uVar33,4);
        func_0x000109c18360(&uStack_130,&pdStack_d0);
        FUN_109c180ec(&pdStack_d0);
        if ((*puVar40 & 1) != 0) {
          puVar40 = (ulong *)(*puVar40 + 0xf);
        }
        uVar33 = *puVar40;
        *(undefined4 *)(uStack_130 + 0x4c) = *(undefined4 *)(uVar33 + 0x70);
        *(undefined4 *)(uStack_130 + 0x50) = *(undefined4 *)(uVar33 + 0x68);
      }
      func_0x000109c1e534(lVar25 + 0x98,&uStack_130);
      plVar39 = (long *)CONCAT44(uStack_124,uStack_128);
      if (plVar39 != (long *)0x0) {
        plVar1 = plVar39 + 1;
        do {
          lVar32 = *plVar1;
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar32 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plVar39 + 0x10))(plVar39);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
        }
      }
    }
    pdStack_f0 = (dword *)0x0;
    uStack_e8._0_4_ = 0;
    uStack_e8._4_4_ = 0;
    ppdVar38 = (dword **)0x0;
    uStack_e0 = (dword **)0x0;
    if (0 < *(int *)(lVar25 + 0x90)) {
      lVar32 = 0;
      uVar15 = 0;
      if (uVar10 != 0) {
        uVar15 = uVar6 / uVar10;
      }
      uVar6 = uVar17 * uVar5 * uVar15 * iVar11;
      uVar10 = 0;
      if (uVar15 != 0) {
        uVar10 = uVar6 / uVar15;
      }
      do {
        pdVar26 = (dword *)0x180;
        uStack_e0 = ppdVar38;
        __Znwm();
        FUN_109c27938();
        pdVar27 = (dword *)0x20;
        pdStack_180 = pdVar26;
        __Znwm();
        *(undefined ***)pdVar27 = &PTR_FUN_110b2d030;
        pdVar27[2] = 0;
        pdVar27[3] = 0;
        pdVar27[4] = 0;
        pdVar27[5] = 0;
        *(dword **)(pdVar27 + 6) = pdVar26;
        pdStack_178 = pdVar27;
        ___dynamic_cast(pdVar26,&PTR_DAT_110b2c3c0,&PTR_DAT_110b2c850,0);
        puVar31 = (ulong *)(*(ulong *)(param_1 + 0xf8) & 0xfffffffffffffffc);
        if (*(char *)((long)puVar31 + 0x17) < '\0') {
          puVar31 = (ulong *)*puVar31;
        }
        func_0x000107c31940(&pdStack_d0,puVar31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (pdVar26 + 0x12,&pdStack_d0);
        pdVar26[0x24] = uVar15;
        pdVar26[0x25] = uVar5;
        pdVar26[0x26] = uVar17;
        pdVar26[0x27] = dVar8;
        pdVar26[0x28] = dVar7;
        pdVar26[0x29] = dVar7;
        pdVar26[0x40] = dVar3;
        pdVar26[0x41] = dVar18;
        pdVar26[0x42] = uVar21;
        *(char *)(pdVar26 + 0x43) = (char)uVar22;
        *(bool *)(pdVar26 + 0x3a) = 1 < iVar12;
        uStack_124 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_130 = CONCAT44(uVar15,2);
        uStack_148 = 4;
        uStack_134 = 0;
        pdStack_d0 = (dword *)((long)ppppuStack_160[8] + lVar32 * (int)uVar6 * 4);
        uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
        uStack_144 = uVar15;
        iStack_140 = iVar11;
        uStack_13c = uVar17;
        uStack_138 = uVar5;
        uStack_128 = uVar10;
        FUN_109c2aa5c(&lStack_190,&pdStack_1a0,&uStack_148,&pdStack_d0,&uStack_1a8);
        *(undefined4 *)(lStack_190 + 0x3c) = 1;
        FUN_109c11f88();
        lVar35 = lStack_190;
        puVar37 = (uint *)(lStack_190 + 8);
        uVar2 = *puVar37 & ((int)*puVar37 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar2) {
          uVar2 = 5;
        }
        iVar23 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,lStack_190 + 0xc,uVar2);
        uVar2 = (uint)uStack_130 & ((int)(uint)uStack_130 >> 0x1f ^ 0xffffffffU);
        if (4 < (int)uVar2) {
          uVar2 = 5;
        }
        iVar24 = 0xf5749aa;
        FUN_109c60fbc(&UNK_10f5749aa,0x1a,(long)&uStack_130 + 4,uVar2);
        pdStack_d0 = (dword *)&UNK_10f574cf1;
        uStack_c8 = 0xf;
        uStack_c4 = 0;
        uStack_c0 = CONCAT31(uStack_c0._1_3_,iVar23 == iVar24);
        ppdStack_b8 = (dword **)&UNK_10f574d01;
        ppdStack_b0 = (dword **)0xe;
        FUN_10959b640(&pdStack_d0);
        if ((puVar37 != (uint *)&uStack_130) && (iVar23 == iVar24)) {
          uVar2 = (uint)uStack_130;
          if ((uint)uStack_130 != 0) {
            _memmove(lVar35 + 0xc,(long)&uStack_130 + 4,(long)(int)(uint)uStack_130 << 2);
          }
          *puVar37 = uVar2;
        }
        FUN_109c3f634(&pdStack_1a0,lStack_190);
        pdVar27 = pdStack_1a0;
        pdStack_d0 = pdStack_1a0;
        if (pdStack_1a0 == (dword *)0x0) {
          puVar30 = (undefined8 *)0x0;
        }
        else {
          puVar30 = (undefined8 *)0x20;
          __Znwm();
          *puVar30 = &PTR_FUN_110b2cfe0;
          puVar30[1] = 0;
          puVar30[2] = 0;
          puVar30[3] = pdVar27;
        }
        uStack_c8 = (uint)puVar30;
        uStack_c4 = (undefined4)((ulong)puVar30 >> 0x20);
        pdStack_1a0 = (dword *)0x0;
        func_0x000109c1e534(pdVar26 + 0x2a,&pdStack_d0);
        plVar39 = (long *)CONCAT44(uStack_c4,uStack_c8);
        if (plVar39 != (long *)0x0) {
          plVar1 = plVar39 + 1;
          do {
            lVar35 = *plVar1;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *plVar1 = lVar35 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (lVar35 == 0) {
            (**(code **)(*plVar39 + 0x10))(plVar39);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
          }
          if (pdStack_1a0 != (dword *)0x0) {
            (**(code **)(*(long *)pdStack_1a0 + 8))();
          }
        }
        if (1 < iVar12) {
          uStack_bc = 0;
          pdStack_d0 = &MACH_HEADER.cputype;
          uStack_c4 = 1;
          uStack_c0 = 1;
          uStack_1a8 = *(long *)(*(long *)(lVar25 + 0x98) + 0x40) +
                       (ulong)(uVar15 * (int)lVar32) * 4;
          uStack_1a9 = 0;
          uStack_c8 = uVar15;
          FUN_109c2aa5c(&pdStack_1a0,&uStack_161,&pdStack_d0,&uStack_1a8,&uStack_1a9);
          func_0x000109c1e534(pdVar26 + 0x3c,&pdStack_1a0);
          plVar39 = plStack_198;
          if (plStack_198 != (long *)0x0) {
            plVar1 = plStack_198 + 1;
            do {
              lVar35 = *plVar1;
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar14) {
                *plVar1 = lVar35 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (lVar35 == 0) {
              (**(code **)(*plStack_198 + 0x10))(plStack_198);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
            }
          }
        }
        ppdVar38 = (dword **)CONCAT44(uStack_e8._4_4_,(uint)uStack_e8);
        if (ppdVar38 < uStack_e0) {
          ppdVar38[1] = pdStack_178;
          *ppdVar38 = pdStack_180;
          if (pdStack_178 != (dword *)0x0) {
            pdVar27 = pdStack_178 + 2;
            do {
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pdVar27,0x10);
              if (bVar14) {
                *(long *)pdVar27 = *(long *)pdVar27 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
          ppdVar38 = ppdVar38 + 2;
        }
        else {
          lVar35 = (long)ppdVar38 - (long)pdStack_f0;
          uVar33 = (lVar35 >> 4) + 1;
          if (uVar33 >> 0x3c != 0) {
            func_0x000109c2099c();
            goto LAB_109c40928;
          }
          uVar36 = (long)uStack_e0 - (long)pdStack_f0 >> 3;
          if (uVar36 <= uVar33) {
            uVar36 = uVar33;
          }
          if (0x7fffffffffffffef < (ulong)((long)uStack_e0 - (long)pdStack_f0)) {
            uVar36 = 0xfffffffffffffff;
          }
          ppdStack_b0 = &pdStack_f0;
          ppdVar28 = &pdStack_f0;
          FUN_109c209b0();
          puVar30 = (undefined8 *)((long)ppdVar28 + lVar35);
          puVar30[1] = pdStack_178;
          *puVar30 = pdStack_180;
          if (pdStack_178 != (dword *)0x0) {
            pdVar27 = pdStack_178 + 2;
            do {
              cVar13 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pdVar27,0x10);
              if (bVar14) {
                *(long *)pdVar27 = *(long *)pdVar27 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
          }
          ppdVar38 = (dword **)(puVar30 + 2);
          pdVar27 = (dword *)((long)puVar30 -
                             (CONCAT44(uStack_e8._4_4_,(uint)uStack_e8) - (long)pdStack_f0));
          _memcpy(pdVar27);
          ppdStack_b8 = uStack_e0;
          uStack_c0 = (uint)pdStack_f0;
          uStack_bc = (undefined4)((ulong)pdStack_f0 >> 0x20);
          pdStack_d0 = pdStack_f0;
          pdStack_f0 = pdVar27;
          uStack_c8 = uStack_c0;
          uStack_c4 = uStack_bc;
          uStack_e8 = ppdVar38;
          uStack_e0 = ppdVar28 + uVar36 * 2;
          func_0x000109c209e4(&pdStack_d0);
        }
        plVar39 = plStack_188;
        uStack_e8._0_4_ = (uint)ppdVar38;
        uStack_e8._4_4_ = (undefined4)((ulong)ppdVar38 >> 0x20);
        if (plStack_188 != (long *)0x0) {
          plVar1 = plStack_188 + 1;
          do {
            lVar35 = *plVar1;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *plVar1 = lVar35 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (lVar35 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
          }
        }
        pdVar27 = pdStack_178;
        if (pdStack_178 != (dword *)0x0) {
          pdVar26 = pdStack_178 + 2;
          do {
            lVar35 = *(long *)pdVar26;
            cVar13 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(pdVar26,0x10);
            if (bVar14) {
              *(long *)pdVar26 = lVar35 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (lVar35 == 0) {
            (**(code **)(*(long *)pdStack_178 + 0x10))(pdStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pdVar27);
          }
        }
        lVar32 = lVar32 + 1;
        ppdVar38 = uStack_e0;
      } while (lVar32 < *(int *)(lVar25 + 0x90));
    }
    plVar39 = (long *)(lVar25 + 0xa8);
    lVar32 = *plVar39;
    if (lVar32 != 0) {
      lVar29 = *(long *)(lVar25 + 0xb0);
      lVar35 = lVar32;
      if (lVar29 != lVar32) {
        do {
          lVar29 = lVar29 + -0x10;
          func_0x000109c20d5c();
        } while (lVar29 != lVar32);
        lVar35 = *plVar39;
      }
      *(long *)(lVar25 + 0xb0) = lVar32;
      __ZdlPv(lVar35);
      *plVar39 = 0;
      *(undefined8 *)(lVar25 + 0xb0) = 0;
      *(undefined8 *)(lVar25 + 0xb8) = 0;
    }
    *(ulong *)(lVar25 + 0xb0) = CONCAT44(uStack_e8._4_4_,(uint)uStack_e8);
    *(dword **)(lVar25 + 0xa8) = pdStack_f0;
    *(dword ***)(lVar25 + 0xb8) = uStack_e0;
    uStack_e8._0_4_ = 0;
    uStack_e8._4_4_ = 0;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0;
    pdStack_f0 = (dword *)0x0;
    pdStack_d0 = (dword *)&pdStack_f0;
    func_0x000109c205a8(&pdStack_d0);
    plVar39 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar1 = plStack_158 + 1;
      do {
        lVar32 = *plVar1;
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar32 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar39);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return lVar25;
    }
    ___stack_chk_fail();
  }
  else if (*(int *)(param_1 + 0x194) == 1) {
    puVar30 = (undefined8 *)(*(ulong *)(*puVar31 + 0x50) & 0xfffffffffffffffc);
    lVar32 = (long)*(char *)((long)puVar30 + 0x17);
    if (lVar32 < 0) {
      lVar32 = puVar30[1];
      puVar30 = (undefined8 *)*puVar30;
    }
    pdStack_f0 = (dword *)0x0;
    uStack_e8._0_4_ = 0;
    uStack_e8._4_4_ = 0;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0;
    FUN_109591c60(&pdStack_f0,puVar30,(long)puVar30 + lVar32,
                  ((long)puVar30 + lVar32) - (long)puVar30);
    ppuVar4 = &PTR_PTR_1132ec9b0;
    if (*(undefined ***)(param_1 + 0x110) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_1 + 0x110);
    }
    FUN_109c1acf8(&pdStack_d0,*param_2,&uStack_110,ppuVar4[4],
                  (long)*(int *)(ppuVar4 + 3) & 0x3fffffffffffffff,&pdStack_f0);
    func_0x000109c18360(&ppppuStack_160,&pdStack_d0);
    FUN_109c180ec(&pdStack_d0);
    if (pdStack_f0 != (dword *)0x0) {
      uStack_e8._0_4_ = (uint)pdStack_f0;
      uStack_e8._4_4_ = (undefined4)((ulong)pdStack_f0 >> 0x20);
      __ZdlPv();
    }
    goto LAB_109c400e8;
  }
  func_0x000105688514(&UNK_10f5a4fb2);
LAB_109c40928:
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x109c4092c);
  (*pcVar20)();
}



/* Entry: 109c40b10; end: 109c40cd7;  */

long * FUN_109c40b10(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)plVar12 + 0x17) < '\0') {
    func_0x000107c3192c(&plStack_a0,*plVar12,plVar12[1]);
  }
  else {
    lStack_98 = plVar12[1];
    plStack_a0 = (long *)*plVar12;
    lStack_90 = plVar12[2];
  }
  plVar9 = (long *)0xb0;
  __Znwm();
  plVar12 = plVar9;
  FUN_109c4ffec();
  *(undefined4 *)(plVar9 + 0x12) = *(undefined4 *)(param_1 + 0x1dc);
  plVar9[0x13] = *(long *)(param_1 + 0x1e0);
  *(undefined4 *)((long)plVar9 + 0x94) = *(undefined4 *)(param_1 + 0x1e8);
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    puVar2 = (ulong *)(param_1 + 0x20);
    if ((uVar13 & 1) != 0) {
      puVar2 = (ulong *)(uVar13 + 7);
    }
    iVar4 = *(int *)(*puVar2 + 0x18);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 1;
    iStack_b4 = iVar4;
    FUN_109c19c88(auStack_80,*param_2,&uStack_b8,*(undefined8 *)(*puVar2 + 0x20),
                  (long)iVar4 & 0x3fffffffffffffff);
    FUN_109c18570(auStack_c8,auStack_80);
    FUN_109c180ec(auStack_80);
    plVar12 = plVar9 + 0x14;
    func_0x000109c1e534(plVar12,auStack_c8);
    *(int *)(plVar9 + 0x12) = iVar4 << 1;
    *(undefined4 *)((long)plVar9 + 0x94) = 0;
    *(undefined4 *)((long)plVar9 + 0x9c) = 0x3f000000;
    *(float *)(plVar9 + 0x13) = (float)(iVar4 << 1);
    if (plStack_c0 != (long *)0x0) {
      plVar10 = plStack_c0 + 1;
      do {
        lVar15 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar12 = plStack_c0;
      }
    }
  }
  if (lStack_90 < 0) {
    plVar12 = plStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar9;
  }
  ___stack_chk_fail();
  plVar10 = plVar12;
  __Unwind_Resume();
  pcStack_d8 = FUN_109c40cd8;
  puVar14 = (undefined8 *)(plVar10[0x20] & 0xfffffffffffffffc);
  plStack_f0 = plVar12;
  plStack_e8 = plVar9;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)puVar14 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_110,*puVar14,puVar14[1]);
  }
  else {
    uStack_108 = puVar14[1];
    uStack_110 = *puVar14;
    lStack_100 = puVar14[2];
  }
  plVar12 = (long *)0xe0;
  __Znwm();
  FUN_109c526b4();
  *(undefined2 *)((long)plVar12 + 0xb4) = 0;
  uVar11 = *(uint *)(plVar10 + 2);
  uVar13 = (ulong)uVar11;
  uVar3 = *(uint *)((long)plVar10 + 0x14);
  uVar1 = *(undefined4 *)((long)plVar10 + 0x184);
  uVar7 = (int)plVar10[0x31];
  if (-1 < (int)uVar11) {
    uVar1 = (int)plVar10[0x24];
    uVar7 = (int)plVar10[0x24];
  }
  *(undefined4 *)(plVar12 + 0x12) = uVar1;
  *(undefined4 *)((long)plVar12 + 0x94) = uVar7;
  uVar1 = *(undefined4 *)((long)plVar10 + 0x1d4);
  uVar7 = *(undefined4 *)((long)plVar10 + 0x1d4);
  if ((uVar3 & 2) != 0) {
    uVar1 = *(undefined4 *)((long)plVar10 + 0x18c);
    uVar7 = (int)plVar10[0x32];
  }
  *(undefined4 *)(plVar12 + 0x13) = uVar1;
  *(undefined4 *)((long)plVar12 + 0x9c) = uVar7;
  if ((uVar11 >> 9 & 1) == 0) {
    *(undefined1 *)(plVar12 + 0x14) = 1;
    *(undefined4 *)((long)plVar12 + 0xa4) = 0;
    FUN_109c3e6e0(uVar13,*(undefined4 *)((long)plVar10 + 0x14c));
    *(char *)((long)plVar12 + 0xbd) = (char)uVar13;
    if ((*(byte *)(plVar10 + 2) >> 5 & 1) != 0) {
      *(undefined4 *)((long)plVar12 + 0xa4) = *(undefined4 *)((long)plVar10 + 0x11c);
    }
  }
  else {
    *(undefined1 *)(plVar12 + 0x14) = 0;
    lVar15 = plVar10[0x26];
    *(undefined4 *)(plVar12 + 0x15) = *(undefined4 *)((long)plVar10 + 300);
    *(int *)((long)plVar12 + 0xac) = (int)lVar15;
    *(int *)(plVar12 + 0x16) = (int)lVar15;
  }
  uVar11 = *(uint *)((long)plVar10 + 0x124);
  if (1 < uVar11) {
    if (uVar11 != 3) {
      func_0x000105688514(&UNK_10f5a502b);
      goto LAB_109c40e38;
    }
    uVar11 = 2;
  }
  *(uint *)(plVar12 + 0x17) = uVar11;
  if (*(char *)((long)plVar10 + 0x1a4) == '\x01') {
    if (*(int *)((long)plVar10 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
LAB_109c40e38:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109c40e3c);
      (*pcVar8)();
    }
    FUN_109c3c254(plVar10,plVar12);
  }
  *(undefined1 *)((long)plVar12 + 0xbc) = *(undefined1 *)((long)plVar10 + 0x1ed);
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  return plVar12;
}



/* Entry: 109c40cd8; end: 109c40e6b;  */

long FUN_109c40cd8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x100) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar8 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*puVar8,puVar8[1]);
  }
  else {
    uStack_38 = puVar8[1];
    uStack_40 = *puVar8;
    lStack_30 = puVar8[2];
  }
  lVar5 = 0xe0;
  __Znwm();
  FUN_109c526b4();
  *(undefined2 *)(lVar5 + 0xb4) = 0;
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar6 = (ulong)uVar7;
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x184);
  uVar3 = *(undefined4 *)(param_1 + 0x188);
  if (-1 < (int)uVar7) {
    uVar2 = *(undefined4 *)(param_1 + 0x120);
    uVar3 = *(undefined4 *)(param_1 + 0x120);
  }
  *(undefined4 *)(lVar5 + 0x90) = uVar2;
  *(undefined4 *)(lVar5 + 0x94) = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x1d4);
  uVar3 = *(undefined4 *)(param_1 + 0x1d4);
  if ((uVar1 & 2) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x18c);
    uVar3 = *(undefined4 *)(param_1 + 400);
  }
  *(undefined4 *)(lVar5 + 0x98) = uVar2;
  *(undefined4 *)(lVar5 + 0x9c) = uVar3;
  if ((uVar7 >> 9 & 1) == 0) {
    *(undefined1 *)(lVar5 + 0xa0) = 1;
    *(undefined4 *)(lVar5 + 0xa4) = 0;
    FUN_109c3e6e0(uVar6,*(undefined4 *)(param_1 + 0x14c));
    *(char *)(lVar5 + 0xbd) = (char)uVar6;
    if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
      *(undefined4 *)(lVar5 + 0xa4) = *(undefined4 *)(param_1 + 0x11c);
    }
  }
  else {
    *(undefined1 *)(lVar5 + 0xa0) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(lVar5 + 0xa8) = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(lVar5 + 0xac) = uVar2;
    *(undefined4 *)(lVar5 + 0xb0) = uVar2;
  }
  uVar7 = *(uint *)(param_1 + 0x124);
  if (1 < uVar7) {
    if (uVar7 != 3) {
      func_0x000105688514(&UNK_10f5a502b);
      goto LAB_109c40e38;
    }
    uVar7 = 2;
  }
  *(uint *)(lVar5 + 0xb8) = uVar7;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 2) {
      func_0x000105688514(&UNK_10f5a5962);
LAB_109c40e38:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109c40e3c);
      (*pcVar4)();
    }
    FUN_109c3c254(param_1,lVar5);
  }
  *(undefined1 *)(lVar5 + 0xbc) = *(undefined1 *)(param_1 + 0x1ed);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return lVar5;
}


