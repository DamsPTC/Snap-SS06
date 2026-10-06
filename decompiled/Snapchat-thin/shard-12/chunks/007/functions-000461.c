/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10958949c; end: 109589513;  */

void FUN_10958949c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -8;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 109589514; end: 109589523;  */

void FUN_109589514(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  float fVar17;
  undefined4 *puStack_178;
  undefined4 *puStack_170;
  undefined4 *puStack_168;
  ulong uStack_160;
  long lStack_158;
  uint uStack_150;
  undefined4 auStack_148 [2];
  undefined1 auStack_140 [40];
  undefined4 uStack_118;
  undefined1 auStack_110 [28];
  float fStack_f4;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [28];
  float fStack_c4;
  undefined4 auStack_b8 [2];
  undefined1 auStack_b0 [28];
  float fStack_94;
  undefined4 *puVar16;
  
  lVar11 = param_4;
  func_0x000105277f8c();
  iVar4 = *(int *)(lVar11 + 0x10);
  puVar13 = (undefined4 *)(long)iVar4;
  puStack_178 = (undefined4 *)0x0;
  puStack_170 = (undefined4 *)0x0;
  puStack_168 = (undefined4 *)0x0;
  if (iVar4 != 0) {
    if (iVar4 < 0) {
      FUN_109589ac0();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109589a54);
      (*pcVar6)();
    }
    lVar11 = param_2;
    FUN_109589ad4();
    puStack_168 = puVar13 + lVar11 * 0xc;
    puStack_170 = puVar13 + (long)iVar4 * 0xc;
    puVar7 = puVar13;
    do {
      *puVar7 = 0;
      *(undefined ***)(puVar7 + 2) = &PTR_FUN_110af0d50;
      *(undefined8 *)(puVar7 + 4) = 0;
      puVar7[10] = 0;
      *(undefined **)(puVar7 + 6) = &DAT_11383d918;
      *(undefined8 *)(puVar7 + 8) = 0;
      puVar7 = puVar7 + 0xc;
      puStack_178 = puVar13;
    } while (puVar7 != puStack_170);
  }
  puVar14 = puStack_170;
  puVar7 = puStack_178;
  uStack_150 = *(uint *)(param_4 + 0xc);
  puVar13 = puStack_178;
  lStack_158 = param_4;
  if (uStack_150 == *(uint *)(param_4 + 4)) {
    uStack_160 = 0;
    uStack_150 = 0;
    puVar16 = puStack_178;
    if (puStack_178 == puStack_170) goto LAB_1095899c0;
  }
  else {
    uStack_160 = *(ulong *)(*(long *)(param_4 + 0x10) + (ulong)uStack_150 * 8);
    if ((uStack_160 & 1) != 0) {
      uStack_160 = *(ulong *)(**(long **)(uStack_160 - 1) + 0x20);
    }
    puVar12 = puStack_178;
    if (puStack_178 == puStack_170) goto LAB_1095899c0;
    do {
      puVar10 = puVar13 + 2;
      *puVar13 = *(undefined4 *)(uStack_160 + 8);
      puVar16 = (undefined4 *)(uStack_160 + 0x10);
      if (puVar10 != puVar16) {
        func_0x000109349ec8(puVar10);
        FUN_10934a194(puVar10,puVar16);
      }
      func_0x000107c27d54(&uStack_160);
      puVar13 = puVar13 + 0xc;
      puVar16 = puVar12 + 0xc;
      puVar12 = puVar12 + 0xc;
    } while (uStack_160 != 0 && puVar13 != puVar14);
  }
  uVar15 = (long)puVar16 - (long)puVar7;
  lVar11 = ((long)uVar15 >> 4) * -0x5555555555555555;
  if (0x30 < (long)uVar15) {
    uVar8 = lVar11 - 2U >> 1;
    lVar9 = uVar8 + 1;
    puVar14 = puVar7 + uVar8 * 0xc;
    do {
      FUN_109589b84(puVar7,lVar11,puVar14);
      puVar14 = puVar14 + -0xc;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (uStack_160 != 0) {
    puVar14 = puVar7 + 2;
    do {
      uVar8 = uStack_160;
      auStack_b8[0] = *puVar7;
      FUN_109349df0(auStack_b0,0,puVar14);
      fVar5 = fStack_94;
      fVar17 = *(float *)(uVar8 + 0x2c);
      FUN_109349e70(auStack_b0);
      if (fVar5 < fVar17) {
        *puVar7 = *(undefined4 *)(uStack_160 + 8);
        puVar12 = (undefined4 *)(uStack_160 + 0x10);
        if (puVar12 != puVar14) {
          func_0x000109349ec8(puVar14);
          FUN_10934a194(puVar14,puVar12);
        }
        FUN_109589b84(puVar7,lVar11,puVar7);
      }
      func_0x000107c27d54(&uStack_160);
    } while (uStack_160 != 0);
  }
  if (0x30 < (long)uVar15) {
    uVar15 = (uVar15 >> 4) * -0x5555555555555555;
    do {
      if (1 < (long)uVar15) {
        auStack_148[0] = *puVar7;
        FUN_109547650(auStack_140,0,puVar7 + 2);
        uVar8 = 0;
        puVar14 = puVar7;
        do {
          uVar3 = uVar8 << 1 | 1;
          uVar2 = uVar8 * 2 + 2;
          puVar12 = puVar14 + uVar8 * 0xc + 0xc;
          if ((long)uVar2 < (long)uVar15) {
            auStack_b8[0] = puVar14[uVar8 * 0xc + 0xc];
            FUN_109349df0(auStack_b0,0,puVar14 + uVar8 * 0xc + 0xe);
            uStack_e8 = puVar14[uVar8 * 0xc + 0x18];
            FUN_109349df0(auStack_e0,0,puVar14 + uVar8 * 0xc + 0x1a);
            fVar17 = fStack_94;
            fVar5 = fStack_c4;
            FUN_109349e70(auStack_e0);
            FUN_109349e70(auStack_b0);
            if (fVar5 < fVar17) {
              puVar12 = puVar14 + uVar8 * 0xc + 0x18;
              uVar3 = uVar2;
            }
          }
          uVar8 = uVar3;
          FUN_109589e54(puVar14,puVar12);
          puVar14 = puVar12;
        } while ((long)uVar8 <= (long)(uVar15 - 2 >> 1));
        puVar14 = puVar13 + -0xc;
        if (puVar14 == puVar12) {
          FUN_109589e54(puVar12,auStack_148);
        }
        else {
          FUN_109589e54(puVar12,puVar14);
          FUN_109589e54(puVar14,auStack_148);
          uVar8 = (long)puVar12 + (0x30 - (long)puVar7);
          if (0x30 < (long)uVar8) {
            uVar8 = (uVar8 >> 4) * -0x5555555555555555 - 2 >> 1;
            puVar14 = puVar7 + uVar8 * 0xc;
            auStack_b8[0] = *puVar14;
            FUN_109349df0(auStack_b0,0,puVar14 + 2);
            uStack_e8 = *puVar12;
            FUN_109349df0(auStack_e0,0,puVar12 + 2);
            fVar17 = fStack_94;
            fVar5 = fStack_c4;
            FUN_109349e70(auStack_e0);
            FUN_109349e70(auStack_b0);
            if (fVar5 < fVar17) {
              auStack_b8[0] = *puVar12;
              FUN_109547650(auStack_b0,0,puVar12 + 2);
              do {
                puVar16 = puVar14;
                FUN_109589e54(puVar12,puVar16);
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                puVar14 = puVar7 + uVar8 * 0xc;
                uStack_e8 = *puVar14;
                FUN_109349df0(auStack_e0,0,puVar14 + 2);
                uStack_118 = auStack_b8[0];
                FUN_109349df0(auStack_110,0,auStack_b0);
                fVar17 = fStack_c4;
                fVar5 = fStack_f4;
                FUN_109349e70(auStack_110);
                FUN_109349e70(auStack_e0);
                puVar12 = puVar16;
              } while (fVar5 < fVar17);
              FUN_109589e54(puVar16,auStack_b8);
              FUN_109349e70(auStack_b0);
            }
          }
        }
        FUN_109349e70(auStack_140);
      }
      puVar13 = puVar13 + -0xc;
      bVar1 = 2 < uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar1);
  }
LAB_1095899c0:
  puVar7 = puStack_178;
  puVar13 = puStack_170;
  if (*(int *)(param_2 + 4) != 1) {
    func_0x000107c30320(param_2,0x10400380010,0);
    puVar7 = puStack_178;
    puVar13 = puStack_170;
  }
  for (; puVar7 != puVar13; puVar7 = puVar7 + 0xc) {
    FUN_109589f28(auStack_b8,param_2,puVar7,puVar7 + 2);
  }
  FUN_109589b18(&puStack_178);
  return;
}



/* Entry: 109589524; end: 109589abf;  */

void FUN_109589524(long param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  float fVar17;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  ulong uStack_150;
  long lStack_148;
  uint uStack_140;
  undefined4 auStack_138 [2];
  undefined1 auStack_130 [40];
  undefined4 uStack_108;
  undefined1 auStack_100 [28];
  float fStack_e4;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [28];
  float fStack_b4;
  undefined4 auStack_a8 [2];
  undefined1 auStack_a0 [28];
  float fStack_84;
  undefined4 *puVar16;
  
  iVar4 = *(int *)(param_4 + 0x10);
  puVar13 = (undefined4 *)(long)iVar4;
  puStack_168 = (undefined4 *)0x0;
  puStack_160 = (undefined4 *)0x0;
  puStack_158 = (undefined4 *)0x0;
  if (iVar4 != 0) {
    if (iVar4 < 0) {
      FUN_109589ac0();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109589a54);
      (*pcVar6)();
    }
    lVar11 = param_2;
    FUN_109589ad4();
    puStack_158 = puVar13 + lVar11 * 0xc;
    puStack_160 = puVar13 + (long)iVar4 * 0xc;
    puVar7 = puVar13;
    do {
      *puVar7 = 0;
      *(undefined ***)(puVar7 + 2) = &PTR_FUN_110af0d50;
      *(undefined8 *)(puVar7 + 4) = 0;
      puVar7[10] = 0;
      *(undefined **)(puVar7 + 6) = &DAT_11383d918;
      *(undefined8 *)(puVar7 + 8) = 0;
      puVar7 = puVar7 + 0xc;
      puStack_168 = puVar13;
    } while (puVar7 != puStack_160);
  }
  puVar14 = puStack_160;
  puVar7 = puStack_168;
  uStack_140 = *(uint *)(param_1 + 0xc);
  puVar13 = puStack_168;
  lStack_148 = param_1;
  if (uStack_140 == *(uint *)(param_1 + 4)) {
    uStack_150 = 0;
    uStack_140 = 0;
    puVar16 = puStack_168;
    if (puStack_168 == puStack_160) goto LAB_1095899c0;
  }
  else {
    uStack_150 = *(ulong *)(*(long *)(param_1 + 0x10) + (ulong)uStack_140 * 8);
    if ((uStack_150 & 1) != 0) {
      uStack_150 = *(ulong *)(**(long **)(uStack_150 - 1) + 0x20);
    }
    puVar12 = puStack_168;
    if (puStack_168 == puStack_160) goto LAB_1095899c0;
    do {
      puVar10 = puVar13 + 2;
      *puVar13 = *(undefined4 *)(uStack_150 + 8);
      puVar16 = (undefined4 *)(uStack_150 + 0x10);
      if (puVar10 != puVar16) {
        func_0x000109349ec8(puVar10);
        FUN_10934a194(puVar10,puVar16);
      }
      func_0x000107c27d54(&uStack_150);
      puVar13 = puVar13 + 0xc;
      puVar16 = puVar12 + 0xc;
      puVar12 = puVar12 + 0xc;
    } while (uStack_150 != 0 && puVar13 != puVar14);
  }
  uVar15 = (long)puVar16 - (long)puVar7;
  lVar11 = ((long)uVar15 >> 4) * -0x5555555555555555;
  if (0x30 < (long)uVar15) {
    uVar8 = lVar11 - 2U >> 1;
    lVar9 = uVar8 + 1;
    puVar14 = puVar7 + uVar8 * 0xc;
    do {
      FUN_109589b84(puVar7,lVar11,puVar14);
      puVar14 = puVar14 + -0xc;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (uStack_150 != 0) {
    puVar14 = puVar7 + 2;
    do {
      uVar8 = uStack_150;
      auStack_a8[0] = *puVar7;
      FUN_109349df0(auStack_a0,0,puVar14);
      fVar5 = fStack_84;
      fVar17 = *(float *)(uVar8 + 0x2c);
      FUN_109349e70(auStack_a0);
      if (fVar5 < fVar17) {
        *puVar7 = *(undefined4 *)(uStack_150 + 8);
        puVar12 = (undefined4 *)(uStack_150 + 0x10);
        if (puVar12 != puVar14) {
          func_0x000109349ec8(puVar14);
          FUN_10934a194(puVar14,puVar12);
        }
        FUN_109589b84(puVar7,lVar11,puVar7);
      }
      func_0x000107c27d54(&uStack_150);
    } while (uStack_150 != 0);
  }
  if (0x30 < (long)uVar15) {
    uVar15 = (uVar15 >> 4) * -0x5555555555555555;
    do {
      if (1 < (long)uVar15) {
        auStack_138[0] = *puVar7;
        FUN_109547650(auStack_130,0,puVar7 + 2);
        uVar8 = 0;
        puVar14 = puVar7;
        do {
          uVar3 = uVar8 << 1 | 1;
          uVar2 = uVar8 * 2 + 2;
          puVar12 = puVar14 + uVar8 * 0xc + 0xc;
          if ((long)uVar2 < (long)uVar15) {
            auStack_a8[0] = puVar14[uVar8 * 0xc + 0xc];
            FUN_109349df0(auStack_a0,0,puVar14 + uVar8 * 0xc + 0xe);
            uStack_d8 = puVar14[uVar8 * 0xc + 0x18];
            FUN_109349df0(auStack_d0,0,puVar14 + uVar8 * 0xc + 0x1a);
            fVar17 = fStack_84;
            fVar5 = fStack_b4;
            FUN_109349e70(auStack_d0);
            FUN_109349e70(auStack_a0);
            if (fVar5 < fVar17) {
              puVar12 = puVar14 + uVar8 * 0xc + 0x18;
              uVar3 = uVar2;
            }
          }
          uVar8 = uVar3;
          FUN_109589e54(puVar14,puVar12);
          puVar14 = puVar12;
        } while ((long)uVar8 <= (long)(uVar15 - 2 >> 1));
        puVar14 = puVar13 + -0xc;
        if (puVar14 == puVar12) {
          FUN_109589e54(puVar12,auStack_138);
        }
        else {
          FUN_109589e54(puVar12,puVar14);
          FUN_109589e54(puVar14,auStack_138);
          uVar8 = (long)puVar12 + (0x30 - (long)puVar7);
          if (0x30 < (long)uVar8) {
            uVar8 = (uVar8 >> 4) * -0x5555555555555555 - 2 >> 1;
            puVar14 = puVar7 + uVar8 * 0xc;
            auStack_a8[0] = *puVar14;
            FUN_109349df0(auStack_a0,0,puVar14 + 2);
            uStack_d8 = *puVar12;
            FUN_109349df0(auStack_d0,0,puVar12 + 2);
            fVar17 = fStack_84;
            fVar5 = fStack_b4;
            FUN_109349e70(auStack_d0);
            FUN_109349e70(auStack_a0);
            if (fVar5 < fVar17) {
              auStack_a8[0] = *puVar12;
              FUN_109547650(auStack_a0,0,puVar12 + 2);
              do {
                puVar16 = puVar14;
                FUN_109589e54(puVar12,puVar16);
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                puVar14 = puVar7 + uVar8 * 0xc;
                uStack_d8 = *puVar14;
                FUN_109349df0(auStack_d0,0,puVar14 + 2);
                uStack_108 = auStack_a8[0];
                FUN_109349df0(auStack_100,0,auStack_a0);
                fVar17 = fStack_b4;
                fVar5 = fStack_e4;
                FUN_109349e70(auStack_100);
                FUN_109349e70(auStack_d0);
                puVar12 = puVar16;
              } while (fVar5 < fVar17);
              FUN_109589e54(puVar16,auStack_a8);
              FUN_109349e70(auStack_a0);
            }
          }
        }
        FUN_109349e70(auStack_130);
      }
      puVar13 = puVar13 + -0xc;
      bVar1 = 2 < uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar1);
  }
LAB_1095899c0:
  puVar7 = puStack_168;
  puVar13 = puStack_160;
  if (*(int *)(param_2 + 4) != 1) {
    func_0x000107c30320(param_2,0x10400380010,0);
    puVar7 = puStack_168;
    puVar13 = puStack_160;
  }
  for (; puVar7 != puVar13; puVar7 = puVar7 + 0xc) {
    FUN_109589f28(auStack_a8,param_2,puVar7,puVar7 + 2);
  }
  FUN_109589b18(&puStack_168);
  return;
}



/* Entry: 109589ac0; end: 109589ad3;  */

void FUN_109589ac0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (plVar1 < (long *)0x555555555555556) {
    __Znwm((long)plVar1 * 0x30);
    return;
  }
  func_0x000104c4f740();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar2 = plVar1[1];
    if (plVar1[1] != lVar3) {
      do {
        lVar4 = lVar2 + -0x30;
        FUN_109349e70(lVar2 + -0x28);
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



/* Entry: 109589ad4; end: 109589b17;  */

void FUN_109589ad4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 < (long *)0x555555555555556) {
    __Znwm((long)param_1 * 0x30);
    return;
  }
  func_0x000104c4f740();
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x30;
        FUN_109349e70(lVar1 + -0x28);
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



/* Entry: 109589b18; end: 109589b83;  */

void FUN_109589b18(long *param_1)

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
        lVar3 = lVar1 + -0x30;
        FUN_109349e70(lVar1 + -0x28);
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



/* Entry: 109589b84; end: 109589e53;  */

void FUN_109589b84(long param_1,long param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined1 auStack_100 [28];
  float fStack_e4;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [28];
  float fStack_b4;
  undefined4 auStack_a8 [2];
  undefined1 auStack_a0 [28];
  float fStack_84;
  
  if (1 < param_2) {
    lVar5 = (long)param_3 - param_1 >> 4;
    uVar6 = param_2 - 2U >> 1;
    if (lVar5 * -0x5555555555555555 <= (long)uVar6) {
      uVar9 = lVar5 * 0x5555555555555556 | 1;
      puVar7 = (undefined4 *)(param_1 + uVar9 * 0x30);
      uVar1 = lVar5 * 0x5555555555555556 + 2;
      if ((long)uVar1 < param_2) {
        auStack_a8[0] = *puVar7;
        FUN_109349df0(auStack_a0,0,puVar7 + 2);
        uStack_d8 = puVar7[0xc];
        FUN_109349df0(auStack_d0,0,puVar7 + 0xe);
        fVar4 = fStack_84;
        fVar3 = fStack_b4;
        FUN_109349e70(auStack_d0);
        FUN_109349e70(auStack_a0);
        if (fVar3 < fVar4) {
          puVar7 = puVar7 + 0xc;
          uVar9 = uVar1;
        }
      }
      auStack_a8[0] = *puVar7;
      FUN_109349df0(auStack_a0,0,puVar7 + 2);
      uStack_d8 = *param_3;
      FUN_109349df0(auStack_d0,0,param_3 + 2);
      fVar3 = fStack_b4;
      FUN_109349e70(auStack_d0);
      FUN_109349e70(auStack_a0);
      if (fStack_84 <= fVar3) {
        auStack_a8[0] = *param_3;
        FUN_109547650(auStack_a0,0,param_3 + 2);
        do {
          puVar8 = puVar7;
          FUN_109589e54(param_3,puVar8);
          if ((long)uVar6 < (long)uVar9) break;
          uVar2 = uVar9 << 1 | 1;
          puVar7 = (undefined4 *)(param_1 + uVar2 * 0x30);
          uVar1 = uVar9 * 2 + 2;
          uVar9 = uVar2;
          if ((long)uVar1 < param_2) {
            uStack_d8 = *puVar7;
            FUN_109349df0(auStack_d0,0,puVar7 + 2);
            FUN_109349df0(auStack_100,0,uVar2 * 0x30 + param_1 + 0x38);
            fVar4 = fStack_b4;
            fVar3 = fStack_e4;
            FUN_109349e70(auStack_100);
            FUN_109349e70(auStack_d0);
            if (fVar3 < fVar4) {
              puVar7 = puVar7 + 0xc;
              uVar9 = uVar1;
            }
          }
          uStack_d8 = *puVar7;
          FUN_109349df0(auStack_d0,0,puVar7 + 2);
          FUN_109349df0(auStack_100,0,auStack_a0);
          fVar4 = fStack_b4;
          fVar3 = fStack_e4;
          FUN_109349e70(auStack_100);
          FUN_109349e70(auStack_d0);
          param_3 = puVar8;
        } while (fVar4 <= fVar3);
        FUN_109589e54(puVar8,auStack_a8);
        FUN_109349e70(auStack_a0);
      }
    }
  }
  return;
}



/* Entry: 109589e54; end: 109589f27;  */

undefined4 * FUN_109589e54(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    uVar2 = *(ulong *)(param_1 + 4);
    uVar3 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar3 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar5 = *(ulong *)(param_2 + 4);
    uVar6 = uVar5;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar6) {
      lVar4 = 0;
      uVar7 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
      *(ulong *)(param_1 + 4) = uVar5;
      *(ulong *)(param_2 + 4) = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar7;
      do {
        uVar1 = *(undefined1 *)((long)param_1 + lVar4 + 0x20);
        *(undefined1 *)((long)param_1 + lVar4 + 0x20) =
             *(undefined1 *)((long)param_2 + lVar4 + 0x20);
        *(undefined1 *)((long)param_2 + lVar4 + 0x20) = uVar1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 8);
    }
    else {
      func_0x000109349ec8(param_1 + 2);
      FUN_10934a194(param_1 + 2,param_2 + 2);
    }
  }
  return param_1;
}



/* Entry: 109589f28; end: 10958a043;  */

void FUN_109589f28(undefined8 *param_1,int *param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  
  uVar2 = (ulong)*param_3;
  piVar1 = param_2;
  func_0x000105689068(param_2,uVar2,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = param_2;
    func_0x000105689120(param_2,*param_2 + 1);
    if ((int)piVar1 != 0) {
      uVar2 = (ulong)*param_3;
      func_0x000105689068(param_2,uVar2,0);
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x38);
    piVar1[2] = *param_3;
    piVar5 = piVar1 + 4;
    *(undefined ***)piVar5 = &PTR_FUN_110af0d50;
    *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined **)(piVar1 + 8) = &DAT_11383d918;
    piVar1[0xc] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    func_0x0001056891b0(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    *param_1 = piVar1;
    param_1[1] = param_2;
    *(int *)(param_1 + 2) = (int)uVar2;
    *(undefined1 *)(param_1 + 3) = 1;
    if (param_4 != piVar5) {
      func_0x000109349ec8(piVar5);
      uVar2 = *(ulong *)(param_4 + 4) & 0xfffffffffffffffc;
      lVar4 = (long)*(char *)(uVar2 + 0x17);
      if (lVar4 < 0) {
        lVar4 = *(long *)(uVar2 + 8);
      }
      if (lVar4 != 0) {
        uVar3 = *(ulong *)(piVar1 + 6);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(piVar1 + 8,uVar2,uVar3);
      }
      if (param_4[6] != 0) {
        piVar1[10] = param_4[6];
      }
      if (param_4[7] != 0) {
        piVar1[0xb] = param_4[7];
      }
      if ((*(ulong *)(param_4 + 2) & 1) != 0) {
        if ((*(ulong *)(piVar1 + 6) & 1) == 0) {
          func_0x00010b4c3590();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298
        )();
        return;
      }
      return;
    }
  }
  else {
    *param_1 = piVar1;
    param_1[1] = param_2;
    *(int *)(param_1 + 2) = (int)uVar2;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 10958a044; end: 10958a05f;  */

void FUN_10958a044(void)

{
  return;
}



/* Entry: 10958a060; end: 10958a44b;  */

void FUN_10958a060(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong *puVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 **ppuStack_78;
  
  puVar8 = *(ulong **)(param_4 + 0x10);
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  puVar19 = puVar8;
  if ((*puVar8 & 1) != 0) {
    puVar19 = (ulong *)(*puVar8 + 7);
  }
  if ((int)puVar8[1] != 0) {
    puVar8 = puVar19 + (int)puVar8[1];
    do {
      lVar18 = param_1;
      func_0x000105689068(param_1,*(undefined4 *)(*puVar19 + 0x24),0);
      puVar7 = puStack_a8;
      if (lVar18 != 0) {
        uVar13 = *puVar19;
        if (puStack_a8 < puStack_a0) {
          FUN_10934b708(puStack_a8,0,uVar13);
          puStack_a8 = puVar7 + 6;
        }
        else {
          lVar18 = (long)puStack_a8 - (long)puStack_b0;
          uVar10 = (lVar18 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar10) {
            FUN_10958a44c();
LAB_10958a400:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10958a404);
            (*pcVar6)();
          }
          lVar9 = (long)puStack_a0 - (long)puStack_b0 >> 4;
          uVar11 = lVar9 * 0x5555555555555556;
          if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
            uVar11 = uVar10;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
            uVar11 = 0x555555555555555;
          }
          ppuStack_78 = &puStack_b0;
          if (uVar11 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            if (0x555555555555555 < uVar11) {
              func_0x000104c4f740();
              goto LAB_10958a400;
            }
            puVar7 = (undefined8 *)(uVar11 * 0x30);
            __Znwm();
          }
          lVar18 = (long)puVar7 + lVar18;
          puStack_98 = puVar7;
          puStack_90 = (undefined8 *)lVar18;
          uStack_88 = (undefined8 *)lVar18;
          puStack_80 = puVar7 + uVar11 * 6;
          FUN_10934b708(lVar18,0,uVar13);
          puVar5 = puStack_a8;
          puVar14 = puStack_b0;
          uStack_88 = (undefined8 *)(lVar18 + 0x30);
          puVar1 = (undefined8 *)(lVar18 + ((long)puStack_b0 - (long)puStack_a8));
          puVar16 = uStack_88;
          puVar15 = puStack_b0;
          puVar7 = puVar7 + uVar11 * 6;
          puVar17 = puVar1;
          if ((long)puStack_b0 - (long)puStack_a8 != 0) {
            do {
              *puVar17 = &PTR_FUN_110af1030;
              puVar17[1] = 0;
              puVar17[3] = 0;
              puVar17[4] = 0;
              puVar17[2] = 0;
              *(undefined4 *)(puVar17 + 5) = 0;
              if (puVar17 != puVar15) {
                uVar10 = puVar15[1];
                uVar13 = uVar10;
                if ((uVar10 & 1) != 0) {
                  uVar13 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
                }
                if (uVar13 == 0) {
                  puVar17[1] = uVar10;
                  puVar15[1] = 0;
                  lVar18 = 0;
                  do {
                    uVar4 = *(undefined1 *)((long)puVar17 + lVar18 + 0x10);
                    *(undefined1 *)((long)puVar17 + lVar18 + 0x10) =
                         *(undefined1 *)((long)puVar15 + lVar18 + 0x10);
                    *(undefined1 *)((long)puVar15 + lVar18 + 0x10) = uVar4;
                    lVar18 = lVar18 + 1;
                  } while (lVar18 != 0x10);
                  uVar2 = *(undefined4 *)((long)puVar17 + 0x24);
                  *(undefined4 *)((long)puVar17 + 0x24) = *(undefined4 *)((long)puVar15 + 0x24);
                  *(undefined4 *)((long)puVar15 + 0x24) = uVar2;
                }
                else {
                  func_0x00010934b7e8(puVar17);
                  FUN_10934bbac(puVar17,puVar15);
                }
              }
              puVar15 = puVar15 + 6;
              puVar17 = puVar17 + 6;
            } while (puVar15 != puVar5);
            do {
              FUN_10934b77c(puVar14);
              puVar14 = puVar14 + 6;
              puVar16 = uStack_88;
              puVar7 = puStack_80;
            } while (puVar14 != puVar5);
          }
          puStack_80 = puStack_a0;
          puStack_98 = puStack_b0;
          puStack_b0 = puVar1;
          puStack_a8 = puVar16;
          puStack_a0 = puVar7;
          puStack_90 = puStack_98;
          uStack_88 = puStack_98;
          func_0x00010958a460(&puStack_98);
          puStack_a8 = puVar16;
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar8);
  }
  if (*(int *)(param_2 + 4) != 1) {
    func_0x000107c30320(param_2,0x10400380010,0);
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar3 == *(uint *)(param_1 + 4)) {
    uStack_88 = (undefined8 *)((ulong)uStack_88._4_4_ << 0x20);
    puStack_98 = (undefined8 *)0x0;
  }
  else {
    uStack_88 = (undefined8 *)CONCAT44(uStack_88._4_4_,uVar3);
    puStack_98 = *(undefined8 **)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 8);
    if (((ulong)puStack_98 & 1) != 0) {
      puStack_98 = *(undefined8 **)(**(long **)((long)puStack_98 - 1) + 0x20);
    }
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_90 = (undefined8 *)param_1;
  func_0x000105688ebc(param_2,&puStack_98,&uStack_c8);
  puVar15 = puStack_a8;
  for (puVar7 = puStack_b0; puVar7 != puVar15; puVar7 = puVar7 + 6) {
    if (*(int *)(puVar7 + 2) != 0) {
      puVar12 = (undefined4 *)puVar7[3];
      lVar18 = (long)*(int *)(puVar7 + 2) << 2;
      do {
        lVar9 = param_2;
        func_0x000105689068(param_2,*puVar12,0);
        if (lVar9 != 0) {
          func_0x000105688f88(&puStack_98,param_2,puVar12);
          puVar14 = puStack_98;
          func_0x000105688f88(&puStack_98,param_2,puVar12);
          fVar21 = *(float *)((long)puStack_98 + 0x2c);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,*(undefined4 *)((long)puVar7 + 0x24));
          func_0x000105688f88(&puStack_98,param_2,&uStack_c8);
          fVar20 = *(float *)((long)puStack_98 + 0x2c);
          if (*(float *)((long)puStack_98 + 0x2c) <= fVar21) {
            fVar20 = fVar21;
          }
          *(float *)((long)puVar14 + 0x2c) = fVar20;
        }
        puVar12 = puVar12 + 1;
        lVar18 = lVar18 + -4;
      } while (lVar18 != 0);
    }
  }
  func_0x00010958a4ac(&puStack_b0);
  return;
}



/* Entry: 10958a44c; end: 10958a45f;  */

long * FUN_10958a44c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x30;
    FUN_10934b77c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10958a460; end: 10958a507;  */

long * FUN_10958a460(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_10934b77c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10958a508; end: 10958a527;  */

void FUN_10958a508(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10934c908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10958a528; end: 10958a53f;  */

void FUN_10958a528(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10958a540; end: 10958a7db;  */

int * FUN_10958a540(int *param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uStack_48;
  long lStack_40;
  uint uStack_38;
  
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[0] = 0;
  param_1[1] = 1;
  *(undefined **)(param_1 + 4) = &DAT_10e5b4a18;
  param_1[6] = 0;
  param_1[7] = 0;
  uStack_38 = *(uint *)(param_2 + 0xc);
  if (uStack_38 != *(uint *)(param_2 + 4)) {
    uStack_48 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uStack_38 * 8);
    lStack_40 = param_2;
    if ((uStack_48 & 1) != 0) {
      uStack_48 = *(ulong *)(**(long **)(uStack_48 - 1) + 0x20);
    }
    do {
      uVar1 = uStack_48;
      uVar3 = (ulong)*(uint *)(uStack_48 + 8);
      piVar2 = param_1;
      func_0x000105689068(param_1,uVar3,0);
      if (piVar2 == (int *)0x0) {
        piVar2 = param_1;
        func_0x000105689120(param_1,*param_1 + 1);
        if ((int)piVar2 != 0) {
          uVar3 = (ulong)*(uint *)(uVar1 + 8);
          func_0x000105689068(param_1,uVar3,0);
        }
        piVar2 = param_1;
        func_0x000107c27d64(param_1,0x10);
        piVar2[2] = *(int *)(uVar1 + 8);
        piVar2[3] = *(int *)(uVar1 + 0xc);
        func_0x0001056891b0(param_1,uVar3,piVar2);
        *param_1 = *param_1 + 1;
      }
      func_0x000107c27d54(&uStack_48);
    } while (uStack_48 != 0);
  }
  return param_1;
}



/* Entry: 10958a7dc; end: 10958a97b;  */

void FUN_10958a7dc(int *param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  
  uStack_38 = 0;
  uStack_30 = 0xffffffff;
  piVar1 = param_1;
  uStack_24 = param_2;
  func_0x00010958a8ac(param_1,&uStack_24,param_3,&uStack_38);
  if ((int)piVar1 == 0) {
    func_0x00010b4cf510(param_1,uStack_24,uStack_38,CONCAT44(uStack_2c,uStack_30));
  }
  else {
    func_0x00010958a940(param_3,*(undefined8 *)(*(long *)(param_1 + 4) + (ulong)uStack_24 * 8));
    *(undefined8 *)(*(long *)(param_1 + 4) + (ulong)uStack_24 * 8) = param_3;
  }
  *param_1 = *param_1 + -1;
  if ((uStack_24 == param_1[3]) && (uStack_24 < (uint)param_1[1])) {
    lVar3 = (ulong)(uint)param_1[1] - (ulong)uStack_24;
    plVar2 = (long *)(*(long *)(param_1 + 4) + (ulong)uStack_24 * 8);
    do {
      uStack_24 = uStack_24 + 1;
      if (*plVar2 != 0) {
        return;
      }
      param_1[3] = uStack_24;
      lVar3 = lVar3 + -1;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10958a97c; end: 10958a99b;  */

void FUN_10958a97c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10934c93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10958a99c; end: 10958a9b3;  */

void FUN_10958a99c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10958a9b4; end: 10958a9c7;  */

long * FUN_10958a9b4(undefined8 param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_68,param_3 + (long)*(int *)(param_4 + (long)param_2 * 4) * 0x50);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[5] = 0;
  func_0x0001095707b8(puVar4,auStack_68);
  plVar6 = alStack_58;
  func_0x000105687250(puVar4 + 2);
  if (plStack_40 == alStack_58) {
    lVar7 = 0x20;
  }
  else {
    plVar5 = plStack_40;
    if (plStack_40 == (long *)0x0) goto LAB_10958aa50;
    lVar7 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar7))();
  plVar5 = plStack_40;
LAB_10958aa50:
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
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
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      plVar5 = plStack_60;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_10958ab28(plStack_60);
  func_0x000105681f78(auStack_68);
  __Unwind_Resume();
  if (plVar5 != plVar6) {
    if (plVar5[3] == plVar6[3]) {
      FUN_10958ac28(plVar5);
    }
    else {
      func_0x00010958ab74(plVar5);
    }
  }
  return plVar5;
}



/* Entry: 10958a9c8; end: 10958aad7;  */

long * FUN_10958a9c8(undefined8 *param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_58,param_3 + (long)*(int *)(param_4 + (long)param_2 * 4) * 0x50);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  func_0x0001095707b8(param_1,auStack_58);
  plVar5 = alStack_48;
  func_0x000105687250(param_1 + 2);
  if (plStack_30 == alStack_48) {
    lVar6 = 0x20;
  }
  else {
    plVar4 = plStack_30;
    if (plStack_30 == (long *)0x0) goto LAB_10958aa50;
    lVar6 = 0x28;
  }
  (**(code **)(*plStack_30 + lVar6))();
  plVar4 = plStack_30;
LAB_10958aa50:
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      plVar4 = plStack_50;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_10958ab28(plStack_50);
  func_0x000105681f78(auStack_58);
  __Unwind_Resume();
  if (plVar4 != plVar5) {
    if (plVar4[3] == plVar5[3]) {
      FUN_10958ac28(plVar4);
    }
    else {
      func_0x00010958ab74(plVar4);
    }
  }
  return plVar4;
}



/* Entry: 10958aad8; end: 10958ab27;  */

long FUN_10958aad8(long param_1,long param_2)

{
  if (param_1 != param_2) {
    if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
      FUN_10958ac28(param_1);
    }
    else {
      func_0x00010958ab74(param_1);
    }
  }
  return param_1;
}



/* Entry: 10958ab28; end: 10958ac27;  */

long FUN_10958ab28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10958ac28; end: 10958acbb;  */

void FUN_10958ac28(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  if (*(long *)(param_1 + 6) != *(long *)(param_2 + 6)) {
    func_0x000105688e20(auStack_40,0,param_1);
    func_0x00010958ab74(param_1,param_2);
    func_0x00010958ab74(param_2,auStack_40);
    func_0x0001056893c8(auStack_40);
    return;
  }
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = uVar2;
  return;
}



/* Entry: 10958acbc; end: 10958ae07;  */

undefined *** FUN_10958acbc(undefined8 param_1)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uStack_90;
  undefined ***pppuStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined ***pppuStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10958ae08(auStack_80);
  FUN_10958ae60(&uStack_60,auStack_80);
  func_0x0001056893c8(auStack_80);
  uStack_40 = uStack_60;
  pppuStack_88 = pppuStack_58;
  uStack_90 = uStack_60;
  uStack_60 = 0;
  pppuStack_58 = (undefined ***)0x0;
  ppuStack_48 = &PTR_FUN_110afcd88;
  pppuVar6 = &ppuStack_48;
  pppuStack_30 = &ppuStack_48;
  FUN_109567d5c(param_1,&uStack_90);
  pppuVar4 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar7 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_10958ad58;
    lVar7 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar7))();
LAB_10958ad58:
  pppuVar5 = pppuStack_88;
  if (pppuStack_88 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_88 + 1;
    do {
      ppuVar8 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar8 == (undefined **)0x0) {
      (*(code *)(*pppuStack_88)[2])(pppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuVar5;
    }
  }
  pppuVar5 = pppuStack_58;
  if (pppuStack_58 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_58 + 1;
    do {
      ppuVar8 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar8 == (undefined **)0x0) {
      (*(code *)(*pppuStack_58)[2])(pppuStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x0001056893c8(auStack_80);
  __Unwind_Resume();
  pppuVar4[1] = (undefined **)0x100000000;
  *pppuVar4 = (undefined **)0x100000000;
  pppuVar4[2] = (undefined **)&DAT_10e5b4a18;
  pppuVar4[3] = (undefined **)0x0;
  if (pppuVar6[3] == (undefined **)0x0) {
    FUN_10958ac28(pppuVar4);
  }
  else {
    func_0x00010958ab74(pppuVar4);
  }
  return pppuVar4;
}



/* Entry: 10958ae08; end: 10958ae5f;  */

undefined8 * FUN_10958ae08(undefined8 *param_1,long param_2)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = 0;
  if (*(long *)(param_2 + 0x18) == 0) {
    FUN_10958ac28(param_1);
  }
  else {
    func_0x00010958ab74(param_1);
  }
  return param_1;
}



/* Entry: 10958ae60; end: 10958aeeb;  */

void FUN_10958ae60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1108a6378;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  uVar2 = 0x20;
  __Znwm();
  FUN_10958ae08();
  puVar1[3] = FUN_10958aeec;
  puVar1[4] = uVar2;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10958aeec; end: 10958afe3;  */

undefined **
FUN_10958aeec(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = 0x20;
      __Znwm();
      func_0x000105688e20();
      *param_3 = FUN_10958aeec;
      param_3[1] = uVar2;
      return (undefined **)0x0;
    }
    func_0x0001056893c8(param_2[1]);
    __ZdlPv();
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_1108a6340;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb8950);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_1108a6340);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    *param_3 = FUN_10958aeec;
    param_3[1] = uVar2;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 10958afe4; end: 10958afeb;  */

void FUN_10958afe4(void)

{
  return;
}



/* Entry: 10958afec; end: 10958b01f;  */

void FUN_10958afec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afcd88;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10958b020; end: 10958b03b;  */

void FUN_10958b020(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afcd88;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10958b03c; end: 10958b04f;  */

undefined * FUN_10958b03c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afcde8);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 10958b050; end: 10958b08b;  */

long FUN_10958b050(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afcde8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10958b08c; end: 10958b097;  */

undefined ** FUN_10958b08c(void)

{
  return &PTR_DAT_110afcde8;
}



/* Entry: 10958b098; end: 10958b113;  */

undefined8 * FUN_10958b098(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = 0;
  if (param_2[2] == 0) {
    do {
      uVar1 = *(undefined1 *)((long)param_1 + lVar2);
      *(undefined1 *)((long)param_1 + lVar2) = *(undefined1 *)((long)param_2 + lVar2);
      *(undefined1 *)((long)param_2 + lVar2) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
  }
  else if ((param_2 != param_1) && (*(int *)(param_2 + 1) != 0)) {
    func_0x000107c303c4(param_1);
  }
  return param_1;
}



/* Entry: 10958b114; end: 10958b1eb;  */

undefined **
FUN_10958b114(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      if (*(int *)(param_2 + 2) != 0) {
        func_0x000107c303c4(param_3 + 1,param_2 + 1);
      }
      *param_3 = FUN_10958b114;
      return (undefined **)0x0;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_110afc728;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10dfd395c);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110afc728);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)(param_2 + 1);
      }
      return (undefined **)0x0;
    }
    FUN_10958b098(param_3 + 1,param_2 + 1);
    *param_3 = FUN_10958b114;
  }
  FUN_1093502c4(param_2 + 1);
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 10958b1ec; end: 10958b1f3;  */

void FUN_10958b1ec(void)

{
  return;
}



/* Entry: 10958b1f4; end: 10958b227;  */

void FUN_10958b1f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afce08;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10958b228; end: 10958b243;  */

void FUN_10958b228(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afce08;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10958b244; end: 10958b257;  */

undefined * FUN_10958b244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afce68);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 10958b258; end: 10958b293;  */

long FUN_10958b258(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afce68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10958b294; end: 10958b29f;  */

undefined ** FUN_10958b294(void)

{
  return &PTR_DAT_110afce68;
}



/* Entry: 10958b2a0; end: 10958b2ff;  */

undefined8 * FUN_10958b2a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afce88;
  func_0x00010958b894(param_1 + 1);
  return param_1;
}



/* Entry: 10958b300; end: 10958b713;  */

void FUN_10958b300(long *param_1,int *param_2,int *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  int aiStack_158 [8];
  int iStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [15];
  char cStack_121;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  long lStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  int *piStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_1;
  piVar12 = param_2;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    do {
      FUN_10958b8f0(&lStack_a0,param_2);
      plVar8 = &lStack_a0;
      func_0x0001056853dc();
      plVar9 = (long *)*plVar8;
      if (plVar8[1] - (long)plVar9 != 0x38) {
        __ZNSt3__19to_stringEm(&lStack_c8,(plVar8[1] - (long)plVar9 >> 3) * 0x6db6db6db6db6db7);
        FUN_10928a5e0(&iStack_138,&UNK_10f57464e,&lStack_c8);
        func_0x000105687ee0(&iStack_138);
LAB_10958b670:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10958b674);
        (*pcVar7)();
      }
      if ((int)plVar9[4] != 0) {
        func_0x000105688514(&UNK_10f57467e);
        goto LAB_10958b670;
      }
      lVar19 = *plVar9;
      lStack_e0 = 0;
      piStack_d8 = (int *)0x0;
      piStack_d0 = (int *)0x0;
      FUN_10958bb2c(&lStack_e0,param_1[2] - param_1[1] >> 5);
      lVar4 = param_1[2];
      for (lVar14 = param_1[1]; lVar14 != lVar4; lVar14 = lVar14 + 0x20) {
        ppuStack_108 = &PTR_FUN_110af0d50;
        uStack_100 = 0;
        uStack_e8 = 0;
        puStack_f8 = &DAT_11383d918;
        uStack_f0 = 0;
        func_0x000107c30248(&puStack_f8,*(ulong *)(lVar14 + 0x10) & 0xfffffffffffffffc,0);
        iStack_138 = *(int *)(lVar14 + 0x18);
        uStack_f0 = CONCAT44(*(undefined4 *)(lVar19 + (long)iStack_138 * 4),iStack_138);
        lVar11 = 0;
        FUN_109349df0(auStack_130,0,&ppuStack_108);
        if (piStack_d8 < piStack_d0) {
          piVar10 = piStack_d8 + 0xc;
          *piStack_d8 = iStack_138;
          FUN_109547650(piStack_d8 + 2,0,auStack_130);
        }
        else {
          lVar18 = (long)piStack_d8 - lStack_e0;
          uVar13 = (lVar18 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar13) {
            FUN_109589ac0();
            goto LAB_10958b670;
          }
          lVar15 = (long)piStack_d0 - lStack_e0 >> 4;
          uVar16 = lVar15 * 0x5555555555555556;
          if (uVar16 < uVar13 || uVar16 - uVar13 == 0) {
            uVar16 = uVar13;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar16 = 0x555555555555555;
          }
          plStack_a8 = &lStack_e0;
          FUN_109589ad4();
          piVar12 = (int *)(uVar16 + lVar18);
          piVar10 = piVar12 + 0xc;
          *piVar12 = iStack_138;
          FUN_109547650(piVar12 + 2,0,auStack_130);
          lVar18 = (long)piVar12 + (lStack_e0 - (long)piStack_d8);
          FUN_10958bc74(lStack_e0,piStack_d8,lVar18);
          lStack_c8 = lStack_e0;
          lStack_b8 = lStack_e0;
          piStack_b0 = piStack_d0;
          lStack_c0 = lStack_e0;
          lStack_e0 = lVar18;
          piStack_d8 = piVar10;
          piStack_d0 = (int *)(uVar16 + lVar11 * 0x30);
          FUN_10958bce8(&lStack_c8);
        }
        piStack_d8 = piVar10;
        FUN_109349e70(auStack_130);
        FUN_109349e70(&ppuStack_108);
      }
      param_3 = piStack_d8;
      FUN_10958bbe8(aiStack_158,lStack_e0);
      FUN_109589b18(&lStack_e0);
      piVar12 = aiStack_158;
      FUN_10958b9f4(param_2);
      func_0x0001056893c8(aiStack_158);
      plVar9 = plStack_78;
      if (plStack_78 == alStack_90) {
        lVar14 = 0x20;
LAB_10958b57c:
        (**(code **)(*plStack_78 + lVar14))();
      }
      else if (plStack_78 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_10958b57c;
      }
      plVar8 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          lVar14 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar9 = plVar8;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_121 < '\0') {
    __ZdlPv(CONCAT44(uStack_134,iStack_138));
  }
  if (lStack_b8 < 0) {
    __ZdlPv(lStack_c8);
  }
  FUN_1095814b4(&lStack_a0);
  __Unwind_Resume(plVar9);
  piVar10 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)piVar10 >> 0x3b == 0) {
    __Znwm((long)piVar10 << 5);
    return;
  }
  func_0x000104c4f740();
  if (piVar10 != piVar12) {
    lVar14 = 0;
    do {
      puVar2 = (undefined8 *)((long)param_3 + lVar14);
      *puVar2 = &PTR_FUN_110af0de8;
      puVar2[1] = 0;
      puVar2[2] = &DAT_11383d918;
      puVar2[3] = 0;
      if (param_3 != piVar10) {
        puVar3 = (undefined *)((long)piVar10 + lVar14);
        uVar16 = *(ulong *)(puVar3 + 8);
        uVar13 = uVar16;
        if ((uVar16 & 1) != 0) {
          uVar13 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        if (uVar13 == 0) {
          uVar17 = *(undefined8 *)((long)piVar10 + lVar14 + 0x10);
          *(undefined **)((long)piVar10 + lVar14 + 0x10) = &DAT_11383d918;
          puVar2[1] = uVar16;
          *(undefined8 *)(puVar3 + 8) = 0;
          puVar2[2] = uVar17;
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((long)piVar10 + lVar14 + 0x18);
          *(undefined4 *)((long)piVar10 + lVar14 + 0x18) = 0;
        }
        else {
          func_0x00010934a358(puVar2);
          FUN_10934a5c0(puVar2,puVar3);
        }
      }
      lVar14 = lVar14 + 0x20;
    } while ((int *)((long)piVar10 + lVar14) != piVar12);
    do {
      FUN_10934a300(piVar10);
      piVar10 = piVar10 + 8;
    } while (piVar10 != piVar12);
  }
  return;
}



/* Entry: 10958b714; end: 10958b727;  */

void FUN_10958b714(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar4 >> 0x3b == 0) {
    __Znwm((long)puVar4 << 5);
    return;
  }
  func_0x000104c4f740();
  if (puVar4 != param_2) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      *puVar1 = &PTR_FUN_110af0de8;
      puVar1[1] = 0;
      puVar1[2] = &DAT_11383d918;
      puVar1[3] = 0;
      if (param_3 != puVar4) {
        puVar2 = puVar4 + lVar7;
        uVar5 = *(ulong *)(puVar2 + 8);
        uVar3 = uVar5;
        if ((uVar5 & 1) != 0) {
          uVar3 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        if (uVar3 == 0) {
          uVar6 = *(undefined8 *)(puVar4 + lVar7 + 0x10);
          *(undefined **)(puVar4 + lVar7 + 0x10) = &DAT_11383d918;
          puVar1[1] = uVar5;
          *(undefined8 *)(puVar2 + 8) = 0;
          puVar1[2] = uVar6;
          *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar4 + lVar7 + 0x18);
          *(undefined4 *)(puVar4 + lVar7 + 0x18) = 0;
        }
        else {
          func_0x00010934a358(puVar1);
          FUN_10934a5c0(puVar1,puVar2);
        }
      }
      lVar7 = lVar7 + 0x20;
    } while (puVar4 + lVar7 != param_2);
    do {
      FUN_10934a300(puVar4);
      puVar4 = puVar4 + 0x20;
    } while (puVar4 != param_2);
  }
  return;
}



/* Entry: 10958b728; end: 10958b75b;  */

void FUN_10958b728(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_1 >> 0x3b == 0) {
    __Znwm(param_1 << 5);
    return;
  }
  func_0x000104c4f740();
  if (param_1 != param_2) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      *puVar1 = &PTR_FUN_110af0de8;
      puVar1[1] = 0;
      puVar1[2] = &DAT_11383d918;
      puVar1[3] = 0;
      if (param_3 != param_1) {
        lVar2 = param_1 + lVar7;
        uVar5 = *(ulong *)(lVar2 + 8);
        uVar4 = uVar5;
        if ((uVar5 & 1) != 0) {
          uVar4 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        if (uVar4 == 0) {
          lVar3 = param_1 + lVar7;
          uVar6 = *(undefined8 *)(lVar3 + 0x10);
          *(undefined **)(lVar3 + 0x10) = &DAT_11383d918;
          puVar1[1] = uVar5;
          *(undefined8 *)(lVar2 + 8) = 0;
          puVar1[2] = uVar6;
          *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
        }
        else {
          func_0x00010934a358(puVar1);
          FUN_10934a5c0(puVar1,lVar2);
        }
      }
      lVar7 = lVar7 + 0x20;
    } while (param_1 + lVar7 != param_2);
    do {
      FUN_10934a300(param_1);
      param_1 = param_1 + 0x20;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10958b75c; end: 10958b847;  */

void FUN_10958b75c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      *puVar1 = &PTR_FUN_110af0de8;
      puVar1[1] = 0;
      puVar1[2] = &DAT_11383d918;
      puVar1[3] = 0;
      if (param_3 != param_1) {
        lVar2 = param_1 + lVar7;
        uVar5 = *(ulong *)(lVar2 + 8);
        uVar4 = uVar5;
        if ((uVar5 & 1) != 0) {
          uVar4 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        if (uVar4 == 0) {
          lVar3 = param_1 + lVar7;
          uVar6 = *(undefined8 *)(lVar3 + 0x10);
          *(undefined **)(lVar3 + 0x10) = &DAT_11383d918;
          puVar1[1] = uVar5;
          *(undefined8 *)(lVar2 + 8) = 0;
          puVar1[2] = uVar6;
          *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
        }
        else {
          func_0x00010934a358(puVar1);
          FUN_10934a5c0(puVar1,lVar2);
        }
      }
      lVar7 = lVar7 + 0x20;
    } while (param_1 + lVar7 != param_2);
    do {
      FUN_10934a300(param_1);
      param_1 = param_1 + 0x20;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10958b848; end: 10958b8ef;  */

long * FUN_10958b848(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10934a300();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10958b8f0; end: 10958b9f3;  */

long * FUN_10958b8f0(undefined8 param_1,int *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 unaff_x22;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  int *piStack_158;
  int *piStack_150;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_100;
  int *piStack_f8;
  int *piStack_f0;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  long alStack_b8 [3];
  long *plStack_a0;
  long lStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_58,
                **(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50);
  FUN_1095818c4(param_1,auStack_58);
  if (plStack_30 == alStack_48) {
    lVar7 = 0x20;
LAB_10958b968:
    (**(code **)(*plStack_30 + lVar7))();
  }
  else if (plStack_30 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_10958b968;
  }
  plVar5 = plStack_30;
  if (plStack_50 != (long *)0x0) {
    plVar8 = plStack_50 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_50;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x000105681f78(auStack_58);
  __Unwind_Resume();
  pcStack_68 = FUN_10958b9f4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10958acbc(auStack_c8);
  plVar8 = (long *)(*(long *)(plVar5[1] + 0x78) + (long)(int)*plVar5 * 0x18);
  piVar10 = (int *)*plVar8;
  piVar2 = (int *)plVar8[1];
  if (piVar10 != piVar2) {
    unaff_x22 = 0x50;
    do {
      if (*piVar10 == 0) {
        param_3 = auStack_c8;
        func_0x000109566260(*(long *)plVar5[1] + (long)piVar10[1] * 0x50 + 0x18);
      }
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar2);
  }
  if (plStack_a0 == alStack_b8) {
    lVar7 = 0x20;
  }
  else {
    if (plStack_a0 == (long *)0x0) goto LAB_10958baa8;
    lVar7 = 0x28;
  }
  (**(code **)(*plStack_a0 + lVar7))();
LAB_10958baa8:
  plVar5 = plStack_a0;
  if (plStack_c0 != (long *)0x0) {
    plVar8 = plStack_c0 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_c0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return plVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_d8 = FUN_10958bb2c;
  pppuStack_140 = &ppuStack_e0;
  lVar7 = *plVar5;
  if ((undefined1 *)((plVar5[2] - lVar7 >> 4) * -0x5555555555555555) < param_3) {
    uStack_100 = unaff_x22;
    piStack_f8 = piVar2;
    piStack_f0 = piVar10;
    ppuStack_e0 = &puStack_70;
    if ((undefined1 *)0x555555555555555 < param_3) {
      FUN_109589ac0();
      pcStack_138 = FUN_10958bbe8;
      plVar5[1] = 0x100000000;
      *plVar5 = 0x100000000;
      plVar5[2] = (long)&DAT_10e5b4a18;
      plVar5[3] = 0;
      piStack_158 = piVar2;
      piStack_150 = piVar10;
      uStack_160 = unaff_x22;
      for (; param_3 != param_4; param_3 = param_3 + 0x30) {
        FUN_109589f28(auStack_180,plVar5,param_3,param_3 + 8);
      }
      return plVar5;
    }
    lVar9 = plVar5[1];
    puVar6 = param_3;
    FUN_109589ad4();
    puVar1 = param_3 + (lVar9 - lVar7);
    lVar7 = *plVar5;
    lVar9 = plVar5[1];
    FUN_10958bc74(lVar7,lVar9,puVar1 + (lVar7 - lVar9));
    lStack_128 = *plVar5;
    *plVar5 = (long)(puVar1 + (lVar7 - lVar9));
    plVar5[1] = (long)puVar1;
    lStack_110 = plVar5[2];
    plVar5[2] = (long)(param_3 + (long)puVar6 * 0x30);
    plVar5 = &lStack_128;
    lStack_120 = lStack_128;
    lStack_118 = lStack_128;
    FUN_10958bce8(plVar5);
  }
  return plVar5;
}



/* Entry: 10958b9f4; end: 10958bb2b;  */

long * FUN_10958b9f4(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 unaff_x22;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  int *piStack_f8;
  int *piStack_f0;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  int *piStack_98;
  int *piStack_90;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10958acbc(auStack_68);
  plVar7 = (long *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar10 = (int *)*plVar7;
  piVar3 = (int *)plVar7[1];
  if (piVar10 != piVar3) {
    unaff_x22 = 0x50;
    do {
      if (*piVar10 == 0) {
        param_2 = auStack_68;
        func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar10[1] * 0x50 + 0x18);
      }
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar3);
  }
  if (plStack_40 == alStack_58) {
    lVar8 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10958baa8;
    lVar8 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar8))();
LAB_10958baa8:
  plVar7 = plStack_40;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plStack_60;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_78 = FUN_10958bb2c;
  ppuStack_e0 = &puStack_80;
  lVar8 = *plVar7;
  if ((undefined1 *)((plVar7[2] - lVar8 >> 4) * -0x5555555555555555) < param_2) {
    uStack_a0 = unaff_x22;
    piStack_98 = piVar3;
    piStack_90 = piVar10;
    puStack_80 = &stack0xfffffffffffffff0;
    if ((undefined1 *)0x555555555555555 < param_2) {
      FUN_109589ac0();
      pcStack_d8 = FUN_10958bbe8;
      plVar7[1] = 0x100000000;
      *plVar7 = 0x100000000;
      plVar7[2] = (long)&DAT_10e5b4a18;
      plVar7[3] = 0;
      piStack_f8 = piVar3;
      piStack_f0 = piVar10;
      uStack_100 = unaff_x22;
      for (; param_2 != param_3; param_2 = param_2 + 0x30) {
        FUN_109589f28(auStack_120,plVar7,param_2,param_2 + 8);
      }
      return plVar7;
    }
    lVar9 = plVar7[1];
    puVar6 = param_2;
    FUN_109589ad4();
    puVar2 = param_2 + (lVar9 - lVar8);
    lVar8 = *plVar7;
    lVar9 = plVar7[1];
    FUN_10958bc74(lVar8,lVar9,puVar2 + (lVar8 - lVar9));
    lStack_c8 = *plVar7;
    *plVar7 = (long)(puVar2 + (lVar8 - lVar9));
    plVar7[1] = (long)puVar2;
    lStack_b0 = plVar7[2];
    plVar7[2] = (long)(param_2 + (long)puVar6 * 0x30);
    plVar7 = &lStack_c8;
    lStack_c0 = lStack_c8;
    lStack_b8 = lStack_c8;
    FUN_10958bce8(plVar7);
  }
  return plVar7;
}



/* Entry: 10958bb2c; end: 10958bbe7;  */

long * FUN_10958bb2c(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_b0 [32];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_109589ac0();
      param_1[1] = 0x100000000;
      *param_1 = 0x100000000;
      param_1[2] = (long)&DAT_10e5b4a18;
      param_1[3] = 0;
      for (; param_2 != param_3; param_2 = param_2 + 0x30) {
        FUN_109589f28(auStack_b0,param_1,param_2,param_2 + 8);
      }
      return param_1;
    }
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_38 = param_1;
    FUN_109589ad4();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar3 = lVar2 + (*param_1 - param_1[1]);
    FUN_10958bc74(*param_1,param_1[1],lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar1 * 0x30;
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10958bce8(param_1);
  }
  return param_1;
}



/* Entry: 10958bbe8; end: 10958bc73;  */

undefined8 * FUN_10958bbe8(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 auStack_50 [32];
  
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_109589f28(auStack_50,param_1,param_2,param_2 + 8);
  }
  return param_1;
}



/* Entry: 10958bc74; end: 10958bce7;  */

void FUN_10958bc74(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    param_3 = param_3 + 8;
    puVar1 = param_1;
    do {
      puVar2 = puVar1 + 0xc;
      *(undefined4 *)(param_3 + -8) = *puVar1;
      FUN_109547650(param_3,0,puVar1 + 2);
      param_3 = param_3 + 0x30;
      puVar1 = puVar2;
    } while (puVar2 != param_2);
    do {
      FUN_109349e70(param_1 + 2);
      param_1 = param_1 + 0xc;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10958bce8; end: 10958bd37;  */

long * FUN_10958bce8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_109349e70(lVar2 + -0x28);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10958bd38; end: 10958bdc7;  */

void FUN_10958bd38(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 unaff_x19;
  ulong *puVar2;
  long lVar3;
  ulong unaff_x23;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  puVar2 = (ulong *)(param_1 + 0x40);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)(uVar1 + 7);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x48) << 3;
    do {
      unaff_x23 = *puVar2;
      uVar1 = unaff_x23 + 0x28;
      func_0x00010b4bee4c(uVar1,&UNK_10f57469f,0x1b);
      if ((uVar1 & 1) != 0) goto LAB_10958bda0;
      lVar3 = lVar3 + -8;
      unaff_x19 = param_2;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  param_2 = unaff_x19;
  func_0x000105688514(&UNK_10f573dd9);
LAB_10958bda0:
  lVar3 = unaff_x23 + 0x28;
  func_0x00010b4bee4c(lVar3,&UNK_10f57469f,0x1b);
  if ((int)lVar3 != 0) {
    func_0x000100063660(param_2,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10958bdc8; end: 10958be2f;  */

undefined8 * FUN_10958bdc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afced8;
  FUN_10958c454(param_1 + 1,0);
  return param_1;
}



/* Entry: 10958be30; end: 10958c453;  */

void FUN_10958be30(long *param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *unaff_x20;
  long *plVar13;
  undefined1 *puVar14;
  long lStack_288;
  undefined1 *puStack_280;
  long *plStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  int *piStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  int iStack_208;
  int iStack_204;
  long lStack_200;
  long lStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d0 [4];
  int iStack_1cc;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  long alStack_180 [2];
  undefined1 auStack_170 [4];
  int iStack_16c;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [4];
  int iStack_10c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_248 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    plStack_258 = alStack_90;
    unaff_x20 = auStack_120;
    plStack_250 = alStack_180;
    piStack_240 = param_2;
    do {
      FUN_10958b8f0(auStack_a0,piStack_240);
      plVar13 = (long *)plStack_248[1];
      puVar14 = auStack_a0;
      func_0x0001056853dc(puVar14);
      FUN_109591e38(&iStack_208,plVar13,puVar14);
      ppuStack_238 = &PTR_FUN_110af37c0;
      uStack_230 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_228 = 0;
      uStack_210 = 0;
      if (0 < (int)((ulong)(lStack_1e0 - lStack_1e8) >> 2)) {
        lVar11 = 0;
        do {
          puVar8 = &uStack_228;
          func_0x000107c303b0(puVar8,0x109361700);
          *(uint *)(puVar8 + 2) = *(uint *)(puVar8 + 2) | 1;
          uVar9 = puVar8[3];
          if (uVar9 == 0) {
            uVar9 = puVar8[1];
            if ((uVar9 & 1) != 0) {
              uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
            }
            FUN_10934a22c();
            puVar8[3] = uVar9;
          }
          *(undefined4 *)(uVar9 + 0x18) = *(undefined4 *)(lStack_200 + lVar11 * 4);
          *(undefined4 *)(uVar9 + 0x1c) = *(undefined4 *)(lStack_1e8 + lVar11 * 4);
          uVar10 = *(ulong *)(uVar9 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(uVar9 + 0x10,*plVar13 + (long)*(int *)(lStack_200 + lVar11 * 4) * 0x18
                              ,uVar10);
          *(uint *)(puVar8 + 2) = *(uint *)(puVar8 + 2) | 2;
          uVar9 = puVar8[4];
          if (uVar9 == 0) {
            uVar9 = puVar8[1];
            if ((uVar9 & 1) != 0) {
              uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
            }
            FUN_1093616ac();
            puVar8[4] = uVar9;
          }
          *(int *)(uVar9 + 0x18) = iStack_208;
          *(int *)(uVar9 + 0x1c) = iStack_204;
          uVar10 = *(ulong *)(uVar9 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x00010b4bf088(uVar9 + 0x10,lStack_1c0 + *plStack_188 * lVar11,
                              (long)(iStack_204 * iStack_208),uVar10);
          lVar1 = lVar11 + 1;
          uStack_a8 = (undefined4)lVar11;
          uStack_a4 = (undefined4)lVar1;
          uStack_b0 = 0x7fffffff80000000;
          FUN_109a84930(auStack_170,auStack_1d0,&uStack_a8,&uStack_b0);
          FUN_109a890bc(auStack_110,auStack_170,0,iStack_204);
          if (lStack_138 != 0) {
            piVar2 = (int *)(lStack_138 + 0x14);
            do {
              iVar4 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(auStack_170);
            }
          }
          lStack_138 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          if (0 < iStack_16c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_130 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_16c);
          }
          if (puStack_128 != unaff_x20 && puStack_128 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_128 + -8));
          }
          FUN_109560520(auStack_170,auStack_110);
          *(uint *)(puVar8 + 2) = *(uint *)(puVar8 + 2) | 4;
          puVar14 = (undefined1 *)puVar8[5];
          if (puVar14 == (undefined1 *)0x0) {
            puVar14 = (undefined1 *)puVar8[1];
            if (((ulong)puVar14 & 1) != 0) {
              puVar14 = *(undefined1 **)((ulong)puVar14 & 0xfffffffffffffffe);
            }
            func_0x0001093492fc();
            puVar8[5] = puVar14;
          }
          if (puVar14 != auStack_170) {
            uVar10 = *(ulong *)(puVar14 + 8);
            uVar9 = uVar10;
            if ((uVar10 & 1) != 0) {
              uVar9 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            uVar12 = uStack_168;
            if ((uStack_168 & 1) != 0) {
              uVar12 = *(ulong *)(uStack_168 & 0xfffffffffffffffe);
            }
            if (uVar9 == uVar12) {
              lVar11 = 0;
              *(ulong *)(puVar14 + 8) = uStack_168;
              do {
                uVar5 = puVar14[lVar11 + 0x10];
                puVar14[lVar11 + 0x10] = *(undefined1 *)((long)&uStack_160 + lVar11);
                *(undefined1 *)((long)&uStack_160 + lVar11) = uVar5;
                lVar11 = lVar11 + 1;
                uStack_168 = uVar10;
              } while (lVar11 != 0x10);
            }
            else {
              func_0x000109348c04(puVar14);
              FUN_109348af4(puVar14,auStack_170);
            }
          }
          if ((uStack_168 & 1) != 0) {
            func_0x0001053936ac(&uStack_168);
          }
          if (lStack_d8 != 0) {
            piVar2 = (int *)(lStack_d8 + 0x14);
            do {
              iVar4 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(auStack_110);
            }
          }
          lStack_d8 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          if (0 < iStack_10c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_d0 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_10c);
          }
          if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_c8 + -8));
          }
          lVar11 = lVar1;
        } while (lVar1 < (int)((ulong)(lStack_1e0 - lStack_1e8) >> 2));
      }
      if (lStack_198 != 0) {
        piVar2 = (int *)(lStack_198 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(auStack_1d0);
        }
      }
      lStack_198 = 0;
      uStack_1b8 = 0;
      lStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      if (0 < iStack_1cc) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_190 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_1cc);
      }
      if (plStack_188 != plStack_250 && plStack_188 != (long *)0x0) {
        _free(plStack_188[-1]);
      }
      if (lStack_1e8 != 0) {
        lStack_1e0 = lStack_1e8;
        __ZdlPv();
      }
      if (lStack_200 != 0) {
        lStack_1f8 = lStack_200;
        __ZdlPv();
      }
      FUN_109583f80(piStack_240,&ppuStack_238);
      FUN_10936134c(&ppuStack_238);
      param_1 = plStack_78;
      if (plStack_78 == plStack_258) {
        lVar11 = 0x20;
LAB_10958c300:
        (**(code **)(*plStack_78 + lVar11))();
      }
      else if (plStack_78 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_10958c300;
      }
      plVar13 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar3 = plStack_98 + 1;
        do {
          lVar11 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar13;
        }
      }
      param_2 = piStack_240;
    } while (*(long *)(**(long **)(piStack_240 + 2) +
                       (long)*(int *)((*(long **)(piStack_240 + 2))[0xc] + (long)*piStack_240 * 4) *
                       0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    FUN_10936134c(&ppuStack_238);
    FUN_10958c494(&iStack_208);
    FUN_1095814b4(auStack_a0);
  }
  plVar13 = param_1;
  __Unwind_Resume();
  pcStack_268 = FUN_10958c454;
  lVar11 = *plVar13;
  *plVar13 = (long)param_2;
  if (lVar11 != 0) {
    lStack_288 = lVar11;
    puStack_280 = unaff_x20;
    plStack_278 = param_1;
    puStack_270 = &stack0xfffffffffffffff0;
    func_0x000104c607c8(&lStack_288);
    __ZdlPv(lVar11);
  }
  return;
}



/* Entry: 10958c454; end: 10958c493;  */

void FUN_10958c454(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    func_0x000104c607c8(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10958c494; end: 10958c553;  */

long FUN_10958c494(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x70) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x78);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x3c));
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != param_1 + 0x88 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10958c554; end: 10958c5bb;  */

undefined8 * FUN_10958c554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afcf28;
  FUN_10958cbe0(param_1 + 1,0);
  return param_1;
}



/* Entry: 10958c5bc; end: 10958cbdf;  */

void FUN_10958c5bc(long *param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *unaff_x20;
  long *plVar13;
  undefined1 *puVar14;
  long lStack_288;
  undefined1 *puStack_280;
  long *plStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  int *piStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  int iStack_208;
  int iStack_204;
  long lStack_200;
  long lStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d0 [4];
  int iStack_1cc;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  long alStack_180 [2];
  undefined1 auStack_170 [4];
  int iStack_16c;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [4];
  int iStack_10c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_248 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    plStack_258 = alStack_90;
    unaff_x20 = auStack_120;
    plStack_250 = alStack_180;
    piStack_240 = param_2;
    do {
      FUN_10958b8f0(auStack_a0,piStack_240);
      plVar13 = (long *)plStack_248[1];
      puVar14 = auStack_a0;
      func_0x0001056853dc(puVar14);
      FUN_1095937e4(&iStack_208,plVar13,puVar14);
      ppuStack_238 = &PTR_FUN_110af37c0;
      uStack_230 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_228 = 0;
      uStack_210 = 0;
      if (0 < (int)((ulong)(lStack_1e0 - lStack_1e8) >> 2)) {
        lVar11 = 0;
        do {
          puVar8 = &uStack_228;
          func_0x000107c303b0(puVar8,0x109361700);
          *(uint *)(puVar8 + 2) = *(uint *)(puVar8 + 2) | 1;
          uVar9 = puVar8[3];
          if (uVar9 == 0) {
            uVar9 = puVar8[1];
            if ((uVar9 & 1) != 0) {
              uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
            }
            FUN_10934a22c();
            puVar8[3] = uVar9;
          }
          *(undefined4 *)(uVar9 + 0x18) = *(undefined4 *)(lStack_200 + lVar11 * 4);
          *(undefined4 *)(uVar9 + 0x1c) = *(undefined4 *)(lStack_1e8 + lVar11 * 4);
          uVar10 = *(ulong *)(uVar9 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(uVar9 + 0x10,*plVar13 + (long)*(int *)(lStack_200 + lVar11 * 4) * 0x18
                              ,uVar10);
          *(uint *)(puVar8 + 2) = *(uint *)(puVar8 + 2) | 2;
          uVar9 = puVar8[4];
          if (uVar9 == 0) {
            uVar9 = puVar8[1];
            if ((uVar9 & 1) != 0) {
              uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
            }
            FUN_1093616ac();
            puVar8[4] = uVar9;
          }
          *(int *)(uVar9 + 0x18) = iStack_208;
          *(int *)(uVar9 + 0x1c) = iStack_204;
          uVar10 = *(ulong *)(uVar9 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x00010b4bf088(uVar9 + 0x10,lStack_1c0 + *plStack_188 * lVar11,
                              (long)(iStack_204 * iStack_208),uVar10);
          lVar1 = lVar11 + 1;
          uStack_a8 = (undefined4)lVar11;
          uStack_a4 = (undefined4)lVar1;
          uStack_b0 = 0x7fffffff80000000;
          FUN_109a84930(auStack_170,auStack_1d0,&uStack_a8,&uStack_b0);
          FUN_109a890bc(auStack_110,auStack_170,0,iStack_204);
          if (lStack_138 != 0) {
            piVar2 = (int *)(lStack_138 + 0x14);
            do {
              iVar4 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(auStack_170);
            }
          }
          lStack_138 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          if (0 < iStack_16c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_130 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_16c);
          }
          if (puStack_128 != unaff_x20 && puStack_128 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_128 + -8));
          }
          FUN_109560520(auStack_170,auStack_110);
          *(uint *)(puVar8 + 2) = *(uint *)(puVar8 + 2) | 4;
          puVar14 = (undefined1 *)puVar8[5];
          if (puVar14 == (undefined1 *)0x0) {
            puVar14 = (undefined1 *)puVar8[1];
            if (((ulong)puVar14 & 1) != 0) {
              puVar14 = *(undefined1 **)((ulong)puVar14 & 0xfffffffffffffffe);
            }
            func_0x0001093492fc();
            puVar8[5] = puVar14;
          }
          if (puVar14 != auStack_170) {
            uVar10 = *(ulong *)(puVar14 + 8);
            uVar9 = uVar10;
            if ((uVar10 & 1) != 0) {
              uVar9 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            uVar12 = uStack_168;
            if ((uStack_168 & 1) != 0) {
              uVar12 = *(ulong *)(uStack_168 & 0xfffffffffffffffe);
            }
            if (uVar9 == uVar12) {
              lVar11 = 0;
              *(ulong *)(puVar14 + 8) = uStack_168;
              do {
                uVar5 = puVar14[lVar11 + 0x10];
                puVar14[lVar11 + 0x10] = *(undefined1 *)((long)&uStack_160 + lVar11);
                *(undefined1 *)((long)&uStack_160 + lVar11) = uVar5;
                lVar11 = lVar11 + 1;
                uStack_168 = uVar10;
              } while (lVar11 != 0x10);
            }
            else {
              func_0x000109348c04(puVar14);
              FUN_109348af4(puVar14,auStack_170);
            }
          }
          if ((uStack_168 & 1) != 0) {
            func_0x0001053936ac(&uStack_168);
          }
          if (lStack_d8 != 0) {
            piVar2 = (int *)(lStack_d8 + 0x14);
            do {
              iVar4 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(auStack_110);
            }
          }
          lStack_d8 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          if (0 < iStack_10c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_d0 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_10c);
          }
          if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_c8 + -8));
          }
          lVar11 = lVar1;
        } while (lVar1 < (int)((ulong)(lStack_1e0 - lStack_1e8) >> 2));
      }
      if (lStack_198 != 0) {
        piVar2 = (int *)(lStack_198 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(auStack_1d0);
        }
      }
      lStack_198 = 0;
      uStack_1b8 = 0;
      lStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      if (0 < iStack_1cc) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_190 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_1cc);
      }
      if (plStack_188 != plStack_250 && plStack_188 != (long *)0x0) {
        _free(plStack_188[-1]);
      }
      if (lStack_1e8 != 0) {
        lStack_1e0 = lStack_1e8;
        __ZdlPv();
      }
      if (lStack_200 != 0) {
        lStack_1f8 = lStack_200;
        __ZdlPv();
      }
      FUN_109583f80(piStack_240,&ppuStack_238);
      FUN_10936134c(&ppuStack_238);
      param_1 = plStack_78;
      if (plStack_78 == plStack_258) {
        lVar11 = 0x20;
LAB_10958ca8c:
        (**(code **)(*plStack_78 + lVar11))();
      }
      else if (plStack_78 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_10958ca8c;
      }
      plVar13 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar3 = plStack_98 + 1;
        do {
          lVar11 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar13;
        }
      }
      param_2 = piStack_240;
    } while (*(long *)(**(long **)(piStack_240 + 2) +
                       (long)*(int *)((*(long **)(piStack_240 + 2))[0xc] + (long)*piStack_240 * 4) *
                       0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    FUN_10936134c(&ppuStack_238);
    FUN_10958cc20(&iStack_208);
    FUN_1095814b4(auStack_a0);
  }
  plVar13 = param_1;
  __Unwind_Resume();
  pcStack_268 = FUN_10958cbe0;
  lVar11 = *plVar13;
  *plVar13 = (long)param_2;
  if (lVar11 != 0) {
    lStack_288 = lVar11;
    puStack_280 = unaff_x20;
    plStack_278 = param_1;
    puStack_270 = &stack0xfffffffffffffff0;
    func_0x000104c607c8(&lStack_288);
    __ZdlPv(lVar11);
  }
  return;
}



/* Entry: 10958cbe0; end: 10958cc1f;  */

void FUN_10958cbe0(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    func_0x000104c607c8(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10958cc20; end: 10958ccdf;  */

long FUN_10958cc20(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x70) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x78);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x3c));
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != param_1 + 0x88 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10958cce0; end: 10958cce7;  */

void FUN_10958cce0(void)

{
  return;
}



/* Entry: 10958cce8; end: 10958d917;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10958cce8(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  code *pcVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  long *unaff_x20;
  int *unaff_x21;
  undefined **ppuVar23;
  long *plVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  undefined **ppuStack_6d0;
  long lStack_6c8;
  undefined8 uStack_6c0;
  undefined4 uStack_6b8;
  undefined **ppuStack_6b0;
  long lStack_6a8;
  undefined **ppuStack_6a0;
  int iStack_698;
  long *plStack_690;
  long *plStack_688;
  long alStack_680 [2];
  ulong uStack_670;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  uint *puStack_640;
  ulong *puStack_638;
  ulong uStack_630;
  ulong uStack_628;
  undefined4 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_570;
  long *plStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined4 uStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  long lStack_488;
  undefined8 uStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined6 uStack_426;
  undefined2 uStack_420;
  undefined6 uStack_41e;
  undefined2 uStack_418;
  undefined1 uStack_410;
  undefined7 uStack_40f;
  long *plStack_408;
  byte bStack_400;
  int iStack_3f0;
  int iStack_3ec;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  ulong uStack_380;
  long *plStack_378;
  long alStack_370 [3];
  long *plStack_358;
  int aiStack_350 [2];
  long *plStack_348;
  long alStack_340 [3];
  long *plStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  ulong uStack_310;
  long *plStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  uint *puStack_2e0;
  ulong *puStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined4 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_210;
  long *plStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined4 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
  ulong uStack_b0;
  long *plStack_a8;
  undefined1 uStack_a0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar15 = param_2;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    puVar16 = (uint *)((ulong)&uStack_320 | 8);
    unaff_x20 = &lStack_148;
    do {
      FUN_109572f9c(&uStack_380,param_2);
      puVar9 = &uStack_380;
      FUN_109570a30();
      if ((int)puVar9[0x24] != 0) {
        FUN_1092612e0();
LAB_10958d7b0:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10958d7b4);
        (*pcVar8)();
      }
      plStack_318 = (long *)puVar9[1];
      uStack_320 = (undefined **)*puVar9;
      plStack_308 = (long *)puVar9[3];
      uStack_310 = puVar9[2];
      iVar14 = *(int *)((long)puVar9 + 4);
      uStack_2f8 = puVar9[5];
      uStack_300 = puVar9[4];
      uStack_2e8 = puVar9[7];
      uStack_2f0 = puVar9[6];
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      if (puVar9[7] != 0) {
        piVar15 = (int *)(puVar9[7] + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar5) {
            *piVar15 = *piVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        iVar14 = *(int *)((long)puVar9 + 4);
      }
      puStack_2e0 = puVar16;
      puStack_2d8 = &uStack_2d0;
      if (iVar14 < 3) {
        uStack_2d0 = *(ulong *)puVar9[9];
        uStack_2c8 = ((ulong *)puVar9[9])[1];
      }
      else {
        uStack_320 = (undefined **)((ulong)uStack_320 & 0xffffffff);
        func_0x000109a84868(&uStack_320);
      }
      uVar7 = uStack_310;
      if (((((uint)uStack_320 & 0xfff) != 0x18) || (puStack_2d8[1] != 4)) ||
         (uVar25 = *puStack_2d8, (uVar25 & 3) != 0)) {
        func_0x000105688514(&UNK_10f5746bb);
        goto LAB_10958d7b0;
      }
      uVar1 = *puStack_2e0;
      uVar2 = puStack_2e0[1];
      if (uStack_2e8 != 0) {
        piVar15 = (int *)(uStack_2e8 + 0x14);
        do {
          iVar14 = *piVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar5) {
            *piVar15 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(&uStack_320);
        }
      }
      uStack_2e8 = 0;
      plStack_308 = (long *)0x0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      if (0 < uStack_320._4_4_) {
        lVar17 = 0;
        do {
          puStack_2e0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_320._4_4_);
      }
      if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (ulong *)0x0) {
        _free(puStack_2d8[-1]);
      }
      lStack_6a8 = 0;
      ppuStack_6a0 = (undefined **)0x0;
      ppuVar23 = (undefined **)CONCAT44(uVar1,uVar2);
      iStack_698 = 0;
      ppuStack_6b0 = &PTR_FUN_110af4c80;
      uStack_320 = ppuVar23;
      func_0x00010938e870(&ppuStack_6b0,&uStack_320);
      if (ppuVar23 != ppuStack_6a0) {
        uVar13 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000107c31940(&uStack_320,&UNK_10f5746e2);
        FUN_10958d91c(uVar13,&uStack_320);
        ___cxa_throw(uVar13,&PTR_DAT_110afcfd0,FUN_10958d918);
        goto LAB_10958d7b0;
      }
      if (0 < (int)uVar1) {
        uVar18 = 0;
        pbVar20 = (byte *)(uVar7 + 2);
        do {
          if (uVar2 != 0) {
            puVar21 = (undefined1 *)(lStack_6a8 + uVar18 * (long)iStack_698);
            pbVar22 = pbVar20;
            lVar17 = (long)(int)uVar2;
            do {
              dVar26 = (double)NEON_ucvtf((ulong)pbVar22[-2]);
              dVar27 = (double)NEON_ucvtf((ulong)pbVar22[-1]);
              dVar28 = (double)NEON_ucvtf((ulong)*pbVar22);
              *puVar21 = (char)(int)(dVar27 * 0.587005615234375 + dVar26 * 0.2989959716796875 +
                                    dVar28 * 0.1139984130859375);
              pbVar22 = pbVar22 + 4;
              lVar17 = lVar17 + -1;
              puVar21 = puVar21 + 1;
            } while (lVar17 != 0);
          }
          uVar18 = uVar18 + 1;
          pbVar20 = pbVar20 + ((long)(uVar25 << 0x1e) >> 0x1e);
          ppuVar23 = ppuStack_6a0;
        } while (uVar18 != uVar1);
      }
      puVar9 = &uStack_380;
      FUN_109570a30();
      fVar30 = *(float *)((long)puVar9 + 300);
      puVar9 = &uStack_380;
      FUN_109570a30();
      iStack_3f0 = (int)ppuVar23;
      iVar14 = (int)((ulong)ppuVar23 >> 0x20);
      dStack_3e0 = (double)(iStack_3f0 / 2);
      dStack_3d8 = (double)(iVar14 / 2);
      fVar29 = *(float *)(puVar9 + 0x26);
      dStack_3d0 = (double)fVar30;
      dVar26 = ((double)iStack_3f0 / 2.0) / dStack_3d0;
      iStack_3ec = iVar14;
      dStack_3c8 = (double)fVar29;
      _atan();
      dVar27 = ((double)iVar14 / 2.0) / (double)fVar29;
      _atan();
      dStack_3c0 = dVar26 + dVar26;
      dStack_3b8 = dVar27 + dVar27;
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      alStack_680[0] = 0;
      uStack_670 = 0;
      uStack_618 = 0;
      uStack_610 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      uStack_648 = 0;
      uStack_650 = 0;
      puStack_638 = (ulong *)0x0;
      puStack_640 = (uint *)0x0;
      uStack_628 = 0;
      uStack_630 = 0;
      uStack_620 = 0;
      lStack_5f8 = 0;
      lStack_5f0 = 0;
      lStack_600 = 0;
      lStack_5d8 = 0;
      lStack_5d0 = 0;
      lStack_5e0 = 0;
      lStack_5e8 = 0x3ff0000000000000;
      lStack_5c0 = 0x3ff0000000000000;
      lStack_5b8 = 0;
      lStack_5b0 = 0;
      lStack_5a8 = 0;
      lStack_590 = 0;
      lStack_588 = 0;
      lStack_598 = 0;
      lStack_5a0 = 0x3ff0000000000000;
      lStack_580 = 0x3ff0000000000000;
      plStack_568 = (long *)0x0;
      lStack_570 = 0;
      lStack_558 = 0;
      lStack_560 = 0;
      lStack_550 = 0;
      lStack_538 = 0;
      lStack_530 = 0;
      lStack_540 = 0;
      lStack_548 = 0x3ff0000000000000;
      lStack_528 = 0x3ff0000000000000;
      lStack_518 = 0;
      lStack_510 = 0;
      lStack_520 = 0;
      lStack_4f8 = 0;
      lStack_4f0 = 0;
      lStack_4e8 = 0;
      lStack_500 = 0x3ff0000000000000;
      lStack_4e0 = 0x3ff0000000000000;
      lStack_4d0 = 0;
      lStack_4c8 = 0;
      lStack_4d8 = 0;
      lStack_4c0 = 0x3ff0000000000000;
      uStack_4b0 = 0;
      lStack_4a0 = 0;
      lStack_4a8 = 0;
      lStack_490 = 0;
      uStack_498 = 0;
      uStack_480 = 0;
      lStack_488 = 0;
      lStack_470 = 0;
      lStack_478 = 0;
      uStack_468 = 0;
      lStack_438 = 0x403e000000000000;
      lStack_430 = 0x403e000000000000;
      uStack_428 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      bStack_400 = 0;
      FUN_10939d4b8(&ppuStack_6d0,&ppuStack_6b0);
      FUN_109484940(0,alStack_680,&iStack_3f0,&ppuStack_6d0,0);
      ppuStack_6d0 = &PTR_FUN_110af4c80;
      if (lStack_6c8 != 0) {
        __ZdaPv();
      }
      uStack_320 = (undefined **)alStack_680[0];
      uStack_2f8 = uStack_658;
      uStack_300 = uStack_660;
      uStack_2e8 = uStack_648;
      uStack_2f0 = uStack_650;
      puStack_2d8 = puStack_638;
      puStack_2e0 = puStack_640;
      lStack_6c8 = 0;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      uStack_310 = uStack_670;
      uStack_2c8 = uStack_628;
      uStack_2d0 = uStack_630;
      uStack_2c0 = uStack_620;
      FUN_10937da58(&lStack_2b8,&uStack_618);
      lStack_298 = lStack_5f8;
      lStack_2a0 = lStack_600;
      lStack_288 = lStack_5e8;
      lStack_290 = lStack_5f0;
      lStack_278 = lStack_5d8;
      lStack_280 = lStack_5e0;
      lStack_270 = lStack_5d0;
      lStack_238 = lStack_598;
      lStack_240 = lStack_5a0;
      lStack_228 = lStack_588;
      lStack_230 = lStack_590;
      lStack_220 = lStack_580;
      lStack_258 = lStack_5b8;
      lStack_260 = lStack_5c0;
      lStack_248 = lStack_5a8;
      lStack_250 = lStack_5b0;
      plStack_208 = plStack_568;
      lStack_210 = lStack_570;
      if (plStack_568 != (long *)0x0) {
        plVar12 = plStack_568 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_1f8 = lStack_558;
      lStack_200 = lStack_560;
      lStack_1e8 = lStack_548;
      lStack_1f0 = lStack_550;
      lStack_1d8 = lStack_538;
      lStack_1e0 = lStack_540;
      lStack_1c8 = lStack_528;
      lStack_1d0 = lStack_530;
      lStack_1b8 = lStack_518;
      lStack_1c0 = lStack_520;
      lStack_1b0 = lStack_510;
      lStack_160 = lStack_4c0;
      lStack_178 = lStack_4d8;
      lStack_180 = lStack_4e0;
      lStack_168 = lStack_4c8;
      lStack_170 = lStack_4d0;
      lStack_198 = lStack_4f8;
      lStack_1a0 = lStack_500;
      lStack_188 = lStack_4e8;
      lStack_190 = lStack_4f0;
      uStack_150 = uStack_4b0;
      lStack_148 = 0;
      lStack_140 = 0;
      lStack_138 = 0;
      FUN_1094604a4(unaff_x20,lStack_4a8,lStack_4a0,
                    (lStack_4a0 - lStack_4a8 >> 3) * -0x5555555555555555);
      lStack_130 = 0;
      lStack_128 = 0;
      lStack_120 = 0;
      FUN_109285684();
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      FUN_1092cc0dc();
      bVar6 = bStack_400;
      lStack_100 = lStack_460;
      lStack_e8 = lStack_448;
      lStack_f0 = lStack_450;
      lStack_d8 = lStack_438;
      lStack_e0 = lStack_440;
      uStack_c8 = CONCAT11(uStack_427,uStack_428);
      lStack_d0 = lStack_430;
      uStack_be = CONCAT26(uStack_418,uStack_41e);
      uStack_c6 = uStack_426;
      uStack_c0 = uStack_420;
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
      uStack_a0 = 0;
      if (bStack_400 == 1) {
        uStack_b0 = CONCAT71(uStack_40f,uStack_410);
        plStack_a8 = plStack_408;
        if (plStack_408 != (long *)0x0) {
          plVar12 = plStack_408 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_a0 = 1;
      }
      plVar10 = (long *)0x38;
      __Znwm();
      plVar10[1] = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_DAT_1108a6378;
      plVar24 = plVar10 + 3;
      *plVar24 = 0;
      plVar10[4] = 0;
      plVar11 = (long *)0x290;
      __Znwm();
      plVar12 = plStack_208;
      lVar17 = lStack_210;
      *plVar11 = (long)uStack_320;
      plVar11[2] = uStack_310;
      plVar11[5] = uStack_2f8;
      plVar11[4] = uStack_300;
      plVar11[7] = uStack_2e8;
      plVar11[6] = uStack_2f0;
      plVar11[9] = (long)puStack_2d8;
      plVar11[8] = (long)puStack_2e0;
      plVar11[0xb] = uStack_2c8;
      plVar11[10] = uStack_2d0;
      *(undefined4 *)(plVar11 + 0xc) = uStack_2c0;
      plVar11[0xd] = lStack_2b8;
      plVar11[0xe] = lStack_2b0;
      lStack_2b8 = 0;
      lStack_2b0 = 0;
      plVar11[0x11] = lStack_298;
      plVar11[0x10] = lStack_2a0;
      plVar11[0x13] = lStack_288;
      plVar11[0x12] = lStack_290;
      plVar11[0x15] = lStack_278;
      plVar11[0x14] = lStack_280;
      plVar11[0x16] = lStack_270;
      plVar11[0x1d] = lStack_238;
      plVar11[0x1c] = lStack_240;
      plVar11[0x1f] = lStack_228;
      plVar11[0x1e] = lStack_230;
      plVar11[0x20] = lStack_220;
      plVar11[0x19] = lStack_258;
      plVar11[0x18] = lStack_260;
      plVar11[0x1b] = lStack_248;
      plVar11[0x1a] = lStack_250;
      lStack_210 = 0;
      plStack_208 = (long *)0x0;
      plVar11[0x23] = (long)plVar12;
      plVar11[0x22] = lVar17;
      plVar11[0x25] = lStack_1f8;
      plVar11[0x24] = lStack_200;
      plVar11[0x27] = lStack_1e8;
      plVar11[0x26] = lStack_1f0;
      plVar11[0x29] = lStack_1d8;
      plVar11[0x28] = lStack_1e0;
      plVar11[0x2b] = lStack_1c8;
      plVar11[0x2a] = lStack_1d0;
      plVar11[0x2d] = lStack_1b8;
      plVar11[0x2c] = lStack_1c0;
      plVar11[0x2e] = lStack_1b0;
      plVar11[0x38] = lStack_160;
      plVar11[0x35] = lStack_178;
      plVar11[0x34] = lStack_180;
      plVar11[0x37] = lStack_168;
      plVar11[0x36] = lStack_170;
      plVar11[0x31] = lStack_198;
      plVar11[0x30] = lStack_1a0;
      plVar11[0x33] = lStack_188;
      plVar11[0x32] = lStack_190;
      *(undefined4 *)(plVar11 + 0x3a) = uStack_150;
      plVar11[0x3c] = lStack_140;
      plVar11[0x3b] = lStack_148;
      plVar11[0x3d] = lStack_138;
      lStack_148 = 0;
      lStack_140 = 0;
      lStack_138 = 0;
      plVar11[0x3f] = lStack_128;
      plVar11[0x3e] = lStack_130;
      plVar11[0x40] = lStack_120;
      plVar11[0x41] = lStack_118;
      plVar11[0x43] = lStack_108;
      plVar11[0x42] = lStack_110;
      plVar11[0x44] = lStack_100;
      *(undefined8 *)((long)plVar11 + 0x262) = uStack_be;
      *(ulong *)((long)plVar11 + 0x25a) = CONCAT26(uStack_c0,uStack_c6);
      plVar11[0x49] = lStack_d8;
      plVar11[0x48] = lStack_e0;
      plVar11[0x4b] = CONCAT62(uStack_c6,uStack_c8);
      plVar11[0x4a] = lStack_d0;
      plVar11[0x47] = lStack_e8;
      plVar11[0x46] = lStack_f0;
      *(undefined1 *)(plVar11 + 0x4e) = 0;
      *(undefined1 *)(plVar11 + 0x50) = 0;
      if ((bVar6 & 1) != 0) {
        plVar11[0x4f] = (long)plStack_a8;
        plVar11[0x4e] = uStack_b0;
        *(undefined1 *)(plVar11 + 0x50) = 1;
      }
      plVar10[3] = (long)FUN_10958d9d0;
      plVar10[4] = (long)plVar11;
      uStack_320 = &PTR_FUN_110afd058;
      piVar15 = (int *)&uStack_320;
      plStack_690 = plVar24;
      plStack_688 = plVar10;
      plStack_318 = plVar24;
      plStack_308 = &uStack_320;
      FUN_109567d5c(aiStack_350,&plStack_690);
      if (plStack_308 == &uStack_320) {
        lVar17 = 0x20;
LAB_10958d4bc:
        (**(code **)(*plStack_308 + lVar17))();
      }
      else if (plStack_308 != (long *)0x0) {
        lVar17 = 0x28;
        goto LAB_10958d4bc;
      }
      plVar12 = plStack_688;
      if (plStack_688 != (long *)0x0) {
        plVar10 = plStack_688 + 1;
        do {
          lVar17 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_688 + 0x10))(plStack_688);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      puVar19 = (undefined8 *)(*(long *)(*(long *)(param_2 + 2) + 0x78) + (long)*param_2 * 0x18);
      piVar3 = (int *)puVar19[1];
      for (unaff_x21 = (int *)*puVar19; unaff_x21 != piVar3; unaff_x21 = unaff_x21 + 2) {
        if (*unaff_x21 == 0) {
          piVar15 = aiStack_350;
          func_0x000109566260(**(long **)(param_2 + 2) + (long)unaff_x21[1] * 0x50 + 0x18);
        }
      }
      if (plStack_328 == alStack_340) {
        lVar17 = 0x20;
LAB_10958d574:
        (**(code **)(*plStack_328 + lVar17))();
      }
      else if (plStack_328 != (long *)0x0) {
        lVar17 = 0x28;
        goto LAB_10958d574;
      }
      plVar12 = plStack_348;
      if (plStack_348 != (long *)0x0) {
        plVar10 = plStack_348 + 1;
        do {
          lVar17 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_348 + 0x10))(plStack_348);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_408;
      if ((bStack_400 == 1) && (plStack_408 != (long *)0x0)) {
        plVar10 = plStack_408 + 1;
        do {
          lVar17 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_408 + 0x10))(plStack_408);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      if (lStack_478 != 0) {
        lStack_470 = lStack_478;
        __ZdlPv();
      }
      if (lStack_490 != 0) {
        lStack_488 = lStack_490;
        __ZdlPv();
      }
      if (lStack_4a8 != 0) {
        lStack_4a0 = lStack_4a8;
        __ZdlPv();
      }
      plVar12 = plStack_568;
      if (plStack_568 != (long *)0x0) {
        plVar10 = plStack_568 + 1;
        do {
          lVar17 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_568 + 0x10))(plStack_568);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      _free(uStack_618);
      _free(uStack_398);
      ppuStack_6b0 = &PTR_FUN_110af4c80;
      if (lStack_6a8 != 0) {
        __ZdaPv();
      }
      param_1 = plStack_358;
      if (plStack_358 == alStack_370) {
        lVar17 = 0x20;
LAB_10958d6ac:
        (**(code **)(*plStack_358 + lVar17))();
      }
      else if (plStack_358 != (long *)0x0) {
        lVar17 = 0x28;
        goto LAB_10958d6ac;
      }
      plVar12 = plStack_378;
      if (plStack_378 != (long *)0x0) {
        plVar10 = plStack_378 + 1;
        do {
          lVar17 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_378 + 0x10))(plStack_378);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          param_1 = plVar12;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  iVar14 = (int)piVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (iVar14 == 0) goto LAB_10958d910;
  func_0x000104bd46a0(param_1);
  if ((long)uStack_310 < 0) {
    __ZdlPv(uStack_320);
    if (((ulong)unaff_x21 & 1) != 0) {
LAB_10958d7f0:
      ___cxa_free_exception(unaff_x20);
    }
  }
  else if ((int)unaff_x21 != 0) goto LAB_10958d7f0;
  FUN_10957342c(&uStack_380);
LAB_10958d910:
  __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10958d918; end: 10958d91b;  */

void FUN_10958d918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10958d91c; end: 10958d9a3;  */

undefined8 * FUN_10958d91c(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f567056);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  *param_1 = &PTR_FUN_110afd020;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110afcff8;
  return param_1;
}



/* Entry: 10958d9a4; end: 10958d9b7;  */

void FUN_10958d9a4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10958d9b8; end: 10958d9bb;  */

void FUN_10958d9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10958d9bc; end: 10958d9cf;  */

void FUN_10958d9bc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10958d9d0; end: 10958dc3b;  */

undefined **
FUN_10958d9d0(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      puVar8 = (undefined8 *)param_2[1];
      puVar5 = (undefined8 *)0x290;
      __Znwm();
      *puVar5 = *puVar8;
      puVar5[2] = puVar8[2];
      uVar6 = puVar8[4];
      puVar5[5] = puVar8[5];
      puVar5[4] = uVar6;
      uVar6 = puVar8[6];
      puVar5[7] = puVar8[7];
      puVar5[6] = uVar6;
      uVar6 = puVar8[8];
      puVar5[9] = puVar8[9];
      puVar5[8] = uVar6;
      uVar6 = puVar8[10];
      puVar5[0xb] = puVar8[0xb];
      puVar5[10] = uVar6;
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar8 + 0xc);
      FUN_10937da58(puVar5 + 0xd,puVar8 + 0xd);
      uVar6 = puVar8[0x10];
      uVar10 = puVar8[0x13];
      uVar9 = puVar8[0x12];
      puVar5[0x11] = puVar8[0x11];
      puVar5[0x10] = uVar6;
      puVar5[0x13] = uVar10;
      puVar5[0x12] = uVar9;
      uVar9 = puVar8[0x15];
      uVar6 = puVar8[0x14];
      puVar5[0x16] = puVar8[0x16];
      puVar5[0x15] = uVar9;
      puVar5[0x14] = uVar6;
      uVar11 = puVar8[0x1d];
      uVar10 = puVar8[0x1c];
      uVar9 = puVar8[0x1f];
      uVar6 = puVar8[0x1e];
      uVar13 = puVar8[0x1b];
      uVar12 = puVar8[0x1a];
      puVar5[0x20] = puVar8[0x20];
      puVar5[0x1d] = uVar11;
      puVar5[0x1c] = uVar10;
      puVar5[0x1f] = uVar9;
      puVar5[0x1e] = uVar6;
      puVar5[0x1b] = uVar13;
      puVar5[0x1a] = uVar12;
      uVar6 = puVar8[0x18];
      puVar5[0x19] = puVar8[0x19];
      puVar5[0x18] = uVar6;
      lVar7 = puVar8[0x23];
      uVar6 = puVar8[0x22];
      puVar5[0x23] = puVar8[0x23];
      puVar5[0x22] = uVar6;
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
      uVar6 = puVar8[0x24];
      uVar10 = puVar8[0x27];
      uVar9 = puVar8[0x26];
      puVar5[0x25] = puVar8[0x25];
      puVar5[0x24] = uVar6;
      puVar5[0x27] = uVar10;
      puVar5[0x26] = uVar9;
      FUN_109460390(puVar5 + 0x28,puVar8 + 0x28);
      uVar9 = puVar8[0x47];
      uVar6 = puVar8[0x46];
      uVar11 = puVar8[0x49];
      uVar10 = puVar8[0x48];
      uVar13 = puVar8[0x4b];
      uVar12 = puVar8[0x4a];
      uVar14 = *(undefined8 *)((long)puVar8 + 0x25a);
      *(undefined8 *)((long)puVar5 + 0x262) = *(undefined8 *)((long)puVar8 + 0x262);
      *(undefined8 *)((long)puVar5 + 0x25a) = uVar14;
      puVar5[0x49] = uVar11;
      puVar5[0x48] = uVar10;
      puVar5[0x4b] = uVar13;
      puVar5[0x4a] = uVar12;
      puVar5[0x47] = uVar9;
      puVar5[0x46] = uVar6;
      *(undefined1 *)(puVar5 + 0x4e) = 0;
      *(undefined1 *)(puVar5 + 0x50) = 0;
      if (*(char *)(puVar8 + 0x50) == '\x01') {
        lVar7 = puVar8[0x4f];
        uVar6 = puVar8[0x4e];
        puVar5[0x4f] = puVar8[0x4f];
        puVar5[0x4e] = uVar6;
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
        *(undefined1 *)(puVar5 + 0x50) = 1;
      }
      *param_3 = FUN_10958d9d0;
      param_3[1] = puVar5;
      return (undefined **)0x0;
    }
    lVar7 = param_2[1];
    if (*(char *)(lVar7 + 0x280) == '\x01') {
      FUN_109454ebc(lVar7 + 0x270);
    }
    if (*(long *)(lVar7 + 0x208) != 0) {
      *(long *)(lVar7 + 0x210) = *(long *)(lVar7 + 0x208);
      __ZdlPv();
    }
    if (*(long *)(lVar7 + 0x1f0) != 0) {
      *(long *)(lVar7 + 0x1f8) = *(long *)(lVar7 + 0x1f0);
      __ZdlPv();
    }
    if (*(long *)(lVar7 + 0x1d8) != 0) {
      *(long *)(lVar7 + 0x1e0) = *(long *)(lVar7 + 0x1d8);
      __ZdlPv();
    }
    func_0x000109454f14(lVar7 + 0x110);
    _free(*(undefined8 *)(lVar7 + 0x68));
    __ZdlPv(lVar7);
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_110afd038;
      }
      if (param_4 == 0) {
        uVar4 = (uint)(param_5 == &UNK_10dfd4384);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110afd038);
        uVar4 = (uint)param_4;
      }
      if (uVar4 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar6 = param_2[1];
    *param_3 = FUN_10958d9d0;
    param_3[1] = uVar6;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 10958dc3c; end: 10958dc43;  */

void FUN_10958dc3c(void)

{
  return;
}



/* Entry: 10958dc44; end: 10958dc77;  */

void FUN_10958dc44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afd058;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10958dc78; end: 10958dc93;  */

void FUN_10958dc78(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afd058;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10958dc94; end: 10958dca7;  */

undefined * FUN_10958dc94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afd0b8);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 10958dca8; end: 10958dce3;  */

long FUN_10958dca8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afd0b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10958dce4; end: 10958dcef;  */

undefined ** FUN_10958dce4(void)

{
  return &PTR_DAT_110afd0b8;
}



/* Entry: 10958dcf0; end: 10958dddf;  */

undefined8 * FUN_10958dcf0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110afd0d8;
  FUN_109590540(param_1 + 0x40,0);
  FUN_109590694(param_1 + 0x39);
  if (param_1[0x36] != 0) {
    param_1[0x37] = param_1[0x36];
    __ZdlPv();
  }
  func_0x0001095906f0(param_1 + 10);
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    func_0x0001095901c0();
  }
  func_0x00010959074c(param_1 + 4);
  FUN_1095907a8(param_1 + 1);
  return param_1;
}



/* Entry: 10958dde0; end: 10958ffdb;  */

/* WARNING: Removing unreachable block (ram,0x00010958fc9c) */
/* WARNING: Removing unreachable block (ram,0x00010958fcb4) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_10958dde0(long *param_1,int *param_2,undefined ***param_3)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  long ******pppppplVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *******ppppppplVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long *****ppppplVar18;
  long *plVar19;
  long ******pppppplVar20;
  undefined *puVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  long *****ppppplVar24;
  long *******ppppppplVar25;
  int iVar26;
  long ******pppppplVar27;
  long ******pppppplVar28;
  ulong uVar29;
  ulong uVar30;
  long *******ppppppplVar31;
  ulong uVar32;
  ulong uVar33;
  long *******ppppppplVar34;
  long *******ppppppplVar35;
  long *******ppppppplVar36;
  long *plVar37;
  undefined **ppuVar38;
  uint uVar39;
  undefined **ppuVar40;
  long *******ppppppplVar41;
  long *******ppppppplVar42;
  long *plVar43;
  long *******unaff_x23;
  long ******pppppplVar44;
  long *plVar45;
  long *******unaff_x27;
  undefined **ppuVar46;
  float fVar47;
  long *****ppppplVar48;
  undefined **ppuVar49;
  float fVar50;
  double dVar51;
  long *****ppppplVar52;
  double dVar53;
  ulong uStack_bd8;
  ulong uStack_bd0;
  undefined **ppuStack_b48;
  undefined **ppuStack_b40;
  undefined8 uStack_b38;
  long lStack_b30;
  long lStack_b28;
  undefined1 auStack_b18 [4];
  int iStack_b14;
  int iStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  long lStack_ae0;
  long lStack_ad8;
  undefined1 *puStack_ad0;
  undefined1 auStack_ac8 [16];
  undefined1 auStack_ab8 [44];
  undefined4 uStack_a8c;
  undefined **ppuStack_a20;
  undefined **ppuStack_a18;
  undefined *puStack_a10;
  undefined8 uStack_a08;
  undefined4 uStack_a00;
  long *******ppppppplStack_9f8;
  long *******ppppppplStack_9f0;
  ulong uStack_9e8;
  long ****pppplStack_9e0;
  long *****ppppplStack_9d8;
  long *******ppppppplStack_9d0;
  long *******ppppppplStack_9c8;
  long ******pppppplStack_9c0;
  ulong uStack_9b8;
  float fStack_9b0;
  long ******pppppplStack_9a8;
  int iStack_980;
  undefined **ppuStack_6f0;
  long *******ppppppplStack_6e8;
  long ******pppppplStack_6e0;
  long lStack_6d8;
  float fStack_6d0;
  long *******ppppppplStack_6c8;
  long *******ppppppplStack_660;
  long *******ppppppplStack_658;
  byte bStack_640;
  undefined **appuStack_630 [82];
  char cStack_3a0;
  undefined **appuStack_390 [2];
  long alStack_380 [2];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined8 auStack_328 [3];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [152];
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined8 uStack_12e;
  ulong uStack_120;
  long *plStack_118;
  char cStack_110;
  undefined8 *puStack_100;
  long *plStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined ***pppuStack_b8;
  undefined **appuStack_a8 [3];
  undefined ***pppuStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    do {
      __ZNSt3__16chrono12steady_clock3nowEv();
      FUN_1095659c8(&ppppppplStack_9d0,
                    **(long **)(param_2 + 2) +
                    (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50);
      puStack_100 = (undefined8 *)0x0;
      plStack_f8 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      func_0x0001095707b8(&puStack_100,&ppppppplStack_9d0);
      func_0x000105687250(alStack_f0,&pppppplStack_9c0);
      if ((long *******)pppppplStack_9a8 == &pppppplStack_9c0) {
        lVar14 = 0x20;
LAB_10958df10:
        (**(code **)((long)*pppppplStack_9a8 + lVar14))();
      }
      else if (pppppplStack_9a8 != (long ******)0x0) {
        lVar14 = 0x28;
        goto LAB_10958df10;
      }
      ppppppplVar10 = ppppppplStack_9c8;
      if (ppppppplStack_9c8 != (long *******)0x0) {
        ppppppplVar42 = ppppppplStack_9c8 + 1;
        do {
          pppppplVar20 = *ppppppplVar42;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar42,0x10);
          if (bVar7) {
            *ppppppplVar42 = (long ******)((long)pppppplVar20 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppppplVar20 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_9c8)[2])(ppppppplStack_9c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar10);
        }
      }
      if ((puStack_100 == (undefined8 *)0x0) || ((code *)*puStack_100 == (code *)0x0)) {
LAB_10958fb00:
        func_0x000107c31940(appuStack_630,&UNK_10f2e5846);
        puVar9 = puStack_100;
        FUN_10951f6fc();
        FUN_109259240(&ppppppplStack_9d0,appuStack_630,puVar9[1] & 0x7fffffffffffffff);
        func_0x000105687ee0(&ppppppplStack_9d0);
LAB_10958fc24:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10958fc28);
        (*pcVar6)();
      }
      puVar9 = (undefined8 *)0x3;
      (*(code *)*puStack_100)(3,puStack_100,0,&PTR_DAT_110afd038,&UNK_10dfd4384);
      if (puVar9 == (undefined8 *)0x0) goto LAB_10958fb00;
      appuStack_390[0] = (undefined **)*puVar9;
      alStack_380[0] = puVar9[2];
      uStack_368 = puVar9[5];
      uStack_370 = puVar9[4];
      uStack_358 = puVar9[7];
      uStack_360 = puVar9[6];
      uStack_348 = puVar9[9];
      uStack_350 = puVar9[8];
      uStack_338 = puVar9[0xb];
      uStack_340 = puVar9[10];
      uStack_330 = *(undefined4 *)(puVar9 + 0xc);
      FUN_10937da58(auStack_328,puVar9 + 0xd);
      uStack_308 = puVar9[0x11];
      uStack_310 = puVar9[0x10];
      uStack_2f8 = puVar9[0x13];
      uStack_300 = puVar9[0x12];
      uStack_2e8 = puVar9[0x15];
      uStack_2f0 = puVar9[0x14];
      uStack_2e0 = puVar9[0x16];
      uStack_2c8 = puVar9[0x19];
      uStack_2d0 = puVar9[0x18];
      uStack_2a8 = puVar9[0x1d];
      uStack_2b0 = puVar9[0x1c];
      uStack_298 = puVar9[0x1f];
      uStack_2a0 = puVar9[0x1e];
      uStack_290 = puVar9[0x20];
      uStack_2b8 = puVar9[0x1b];
      uStack_2c0 = puVar9[0x1a];
      plStack_278 = (long *)puVar9[0x23];
      uStack_280 = puVar9[0x22];
      if (puVar9[0x23] != 0) {
        plVar37 = (long *)(puVar9[0x23] + 8);
        do {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar7) {
            *plVar37 = *plVar37 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_268 = puVar9[0x25];
      uStack_270 = puVar9[0x24];
      uStack_258 = puVar9[0x27];
      uStack_260 = puVar9[0x26];
      FUN_109460390(auStack_250,puVar9 + 0x28);
      uStack_158 = puVar9[0x47];
      uStack_160 = puVar9[0x46];
      uStack_148 = puVar9[0x49];
      uStack_150 = puVar9[0x48];
      uStack_140 = puVar9[0x4a];
      uStack_12e = *(undefined8 *)((long)puVar9 + 0x262);
      uStack_130 = (undefined2)((ulong)*(undefined8 *)((long)puVar9 + 0x25a) >> 0x30);
      uStack_138 = (undefined2)puVar9[0x4b];
      uStack_136 = (undefined6)((ulong)puVar9[0x4b] >> 0x10);
      uStack_120 = uStack_120 & 0xffffffffffffff00;
      cStack_110 = '\0';
      if (*(char *)(puVar9 + 0x50) == '\x01') {
        plStack_118 = (long *)puVar9[0x4f];
        uStack_120 = puVar9[0x4e];
        if (puVar9[0x4f] != 0) {
          plVar37 = (long *)(puVar9[0x4f] + 8);
          do {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar7) {
              *plVar37 = *plVar37 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        cStack_110 = '\x01';
      }
      FUN_10947e758(appuStack_630,appuStack_390);
      pppuVar12 = appuStack_630;
      if (cStack_3a0 == '\0') {
        pppuVar12 = appuStack_390;
      }
      ppuVar40 = pppuVar12[0x22];
      ppppppplStack_9d0 = (long *******)ppuVar40[2];
      FUN_10947eef0(auStack_ab8,alStack_380,&ppppppplStack_9d0);
      uStack_a8c = *(undefined4 *)((long)param_1 + 0x1ac);
      ppuVar49 = ppuVar40;
      FUN_10940bce4(&lStack_b30,ppuVar40,auStack_ab8);
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((char)param_1[0x3e] == '\x01') {
        if ((lStack_b28 - lStack_b30 >> 2) * 0x6db6db6db6db6db7 - (long)iStack_b10 != 0) {
          __ZNSt3__19to_stringEi(&ppuStack_d0);
          FUN_10928a5e0(appuStack_a8,&UNK_10f574791,&ppuStack_d0);
          FUN_109259240(&ppuStack_a20,appuStack_a8,&UNK_10f5747ab);
          __ZNSt3__19to_stringEl
                    (&ppppppplStack_9f8,(lStack_b28 - lStack_b30 >> 2) * 0x6db6db6db6db6db7);
          ppppppplVar10 = ppppppplStack_9f8;
          if (-1 < (long)uStack_9e8) {
            ppppppplStack_9f0 = (long *******)(uStack_9e8 >> 0x38);
            ppppppplVar10 = (long *******)&ppppppplStack_9f8;
          }
          pppuVar12 = &ppuStack_a20;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppuVar12,ppppppplVar10,ppppppplStack_9f0);
          ppppppplStack_6e8 = (long *******)pppuVar12[1];
          ppuStack_6f0 = *pppuVar12;
          pppppplStack_6e0 = (long ******)pppuVar12[2];
          pppuVar12[1] = (undefined **)0x0;
          pppuVar12[2] = (undefined **)0x0;
          *pppuVar12 = (undefined **)0x0;
          FUN_109259240(&ppppppplStack_9d0,&ppuStack_6f0,&UNK_10f5747d5);
          func_0x000105687ee0(&ppppppplStack_9d0);
          goto LAB_10958fc24;
        }
        FUN_10948fdc8(&ppppppplStack_9f8,param_1[9],auStack_b18);
        ppppppplStack_6e8 = (long *******)0x0;
        ppuStack_6f0 = (undefined **)0x0;
        lStack_6d8 = 0;
        pppppplStack_6e0 = (long ******)0x0;
        fStack_6d0 = 1.0;
        if (ppppppplStack_9f8 != ppppppplStack_9f0) {
          lVar14 = 0;
          ppppppplVar42 = (long *******)0x0;
          ppppppplVar10 = ppppppplStack_9f8;
          do {
            unaff_x27 = (long *******)*ppppppplVar10;
            ppppppplVar25 = (long *******)ppppppplVar10[1];
            if (unaff_x27 != ppppppplVar25) {
              lVar15 = (long)ppppppplVar25 - (long)unaff_x27;
              do {
                ppppppplVar41 = (long *******)*unaff_x27;
                if ((long *******)(param_1[0x37] - param_1[0x36] >> 3) <= ppppppplVar41) {
                  FUN_109590acc();
                  goto LAB_10958fc24;
                }
                ppppplVar52 = (long *****)
                              (*(double *)(param_1[0x36] + (long)ppppppplVar41 * 8) /
                              (double)(ulong)(lVar15 >> 3));
                if (ppppppplVar42 != (long *******)0x0) {
                  uVar16 = (long)ppppppplVar42 - 1;
                  if (((ulong)ppppppplVar42 & uVar16) == 0) {
                    ppppppplVar23 = (long *******)((ulong)ppppppplVar41 & uVar16);
                  }
                  else {
                    ppppppplVar23 = ppppppplVar41;
                    if (ppppppplVar42 <= ppppppplVar41) {
                      uVar29 = 0;
                      if (ppppppplVar42 != (long *******)0x0) {
                        uVar29 = (ulong)ppppppplVar41 / (ulong)ppppppplVar42;
                      }
                      ppppppplVar23 =
                           (long *******)((long)ppppppplVar41 - uVar29 * (long)ppppppplVar42);
                    }
                  }
                  puVar9 = (undefined8 *)ppuStack_6f0[(long)ppppppplVar23];
                  if (puVar9 != (undefined8 *)0x0) {
                    do {
                      while( true ) {
                        puVar9 = (undefined8 *)*puVar9;
                        if (puVar9 == (undefined8 *)0x0) goto LAB_10958e220;
                        ppppppplVar31 = (long *******)puVar9[1];
                        if (ppppppplVar31 != ppppppplVar41) break;
                        if ((long *******)puVar9[2] == ppppppplVar41) {
                          puVar9[3] = (double)ppppplVar52 + (double)puVar9[3];
                          goto LAB_10958e3ac;
                        }
                      }
                      if (((ulong)ppppppplVar42 & uVar16) == 0) {
                        ppppppplVar31 = (long *******)((ulong)ppppppplVar31 & uVar16);
                      }
                      else if (ppppppplVar42 <= ppppppplVar31) {
                        uVar29 = 0;
                        if (ppppppplVar42 != (long *******)0x0) {
                          uVar29 = (ulong)ppppppplVar31 / (ulong)ppppppplVar42;
                        }
                        ppppppplVar31 =
                             (long *******)((long)ppppppplVar31 - uVar29 * (long)ppppppplVar42);
                      }
                    } while (ppppppplVar31 == ppppppplVar23);
                  }
LAB_10958e220:
                  if (((ulong)ppppppplVar42 & uVar16) == 0) {
                    unaff_x23 = (long *******)((ulong)ppppppplVar41 & uVar16);
                  }
                  else {
                    unaff_x23 = ppppppplVar41;
                    if (ppppppplVar42 <= ppppppplVar41) {
                      uVar29 = 0;
                      if (ppppppplVar42 != (long *******)0x0) {
                        uVar29 = (ulong)ppppppplVar41 / (ulong)ppppppplVar42;
                      }
                      unaff_x23 = (long *******)((long)ppppppplVar41 - uVar29 * (long)ppppppplVar42)
                      ;
                    }
                  }
                  puVar9 = (undefined8 *)ppuStack_6f0[(long)unaff_x23];
                  if (puVar9 != (undefined8 *)0x0) {
                    do {
                      while( true ) {
                        puVar9 = (undefined8 *)*puVar9;
                        if (puVar9 == (undefined8 *)0x0) goto LAB_10958e298;
                        ppppppplVar23 = (long *******)puVar9[1];
                        if (ppppppplVar23 != ppppppplVar41) break;
                        if ((long *******)puVar9[2] == ppppppplVar41) goto LAB_10958e3ac;
                      }
                      if (((ulong)ppppppplVar42 & uVar16) == 0) {
                        ppppppplVar23 = (long *******)((ulong)ppppppplVar23 & uVar16);
                      }
                      else if (ppppppplVar42 <= ppppppplVar23) {
                        uVar29 = 0;
                        if (ppppppplVar42 != (long *******)0x0) {
                          uVar29 = (ulong)ppppppplVar23 / (ulong)ppppppplVar42;
                        }
                        ppppppplVar23 =
                             (long *******)((long)ppppppplVar23 - uVar29 * (long)ppppppplVar42);
                      }
                    } while (ppppppplVar23 == unaff_x23);
                  }
                }
LAB_10958e298:
                pppppplVar20 = (long ******)0x20;
                __Znwm();
                *pppppplVar20 = (long *****)0x0;
                pppppplVar20[1] = (long *****)ppppppplVar41;
                pppppplVar20[2] = (long *****)ppppppplVar41;
                pppppplVar20[3] = ppppplVar52;
                if ((ppppppplVar42 == (long *******)0x0) ||
                   (fStack_6d0 * (float)ppppppplVar42 < (float)(lVar14 + 1))) {
                  uVar16 = 1;
                  if ((long *******)0x2 < ppppppplVar42) {
                    uVar16 = (ulong)(((ulong)ppppppplVar42 & (long)ppppppplVar42 - 1U) != 0);
                  }
                  uVar16 = uVar16 | (long)ppppppplVar42 << 1;
                  uVar29 = (ulong)((float)(lVar14 + 1) / fStack_6d0);
                  if (uVar16 <= uVar29) {
                    uVar16 = uVar29;
                  }
                  FUN_1095902e8(&ppuStack_6f0,uVar16);
                  ppppppplVar42 = ppppppplStack_6e8;
                  if (((ulong)ppppppplStack_6e8 & (long)ppppppplStack_6e8 - 1U) == 0) {
                    unaff_x23 = (long *******)((long)ppppppplStack_6e8 - 1U & (ulong)ppppppplVar41);
                  }
                  else {
                    unaff_x23 = ppppppplVar41;
                    if (ppppppplStack_6e8 <= ppppppplVar41) {
                      uVar16 = 0;
                      if (ppppppplStack_6e8 != (long *******)0x0) {
                        uVar16 = (ulong)ppppppplVar41 / (ulong)ppppppplStack_6e8;
                      }
                      unaff_x23 = (long *******)
                                  ((long)ppppppplVar41 - uVar16 * (long)ppppppplStack_6e8);
                    }
                  }
                }
                ppuVar17 = (undefined **)ppuStack_6f0[(long)unaff_x23];
                if (ppuVar17 == (undefined **)0x0) {
                  *pppppplVar20 = (long *****)pppppplStack_6e0;
                  ppuStack_6f0[(long)unaff_x23] = (undefined *)&pppppplStack_6e0;
                  pppppplStack_6e0 = pppppplVar20;
                  if (*pppppplVar20 != (long *****)0x0) {
                    ppppppplVar41 = (long *******)(*pppppplVar20)[1];
                    if (((ulong)ppppppplVar42 & (long)ppppppplVar42 - 1U) == 0) {
                      ppppppplVar41 =
                           (long *******)((ulong)ppppppplVar41 & (long)ppppppplVar42 - 1U);
                    }
                    else if (ppppppplVar42 <= ppppppplVar41) {
                      uVar16 = 0;
                      if (ppppppplVar42 != (long *******)0x0) {
                        uVar16 = (ulong)ppppppplVar41 / (ulong)ppppppplVar42;
                      }
                      ppppppplVar41 =
                           (long *******)((long)ppppppplVar41 - uVar16 * (long)ppppppplVar42);
                    }
                    ppuVar17 = ppuStack_6f0 + (long)ppppppplVar41;
                    goto LAB_10958e39c;
                  }
                }
                else {
                  *pppppplVar20 = (long *****)*ppuVar17;
LAB_10958e39c:
                  *ppuVar17 = (undefined *)pppppplVar20;
                }
                lVar14 = lStack_6d8 + 1;
                lStack_6d8 = lVar14;
LAB_10958e3ac:
                unaff_x27 = unaff_x27 + 1;
              } while (unaff_x27 != ppppppplVar25);
            }
            ppppppplVar10 = ppppppplVar10 + 3;
          } while (ppppppplVar10 != ppppppplStack_9f0);
        }
        FUN_10959057c(&ppuStack_6f0,(int)param_1[0x3f]);
        ppuStack_a18 = (undefined **)0x0;
        ppuStack_a20 = (undefined **)0x0;
        uStack_a08 = 0;
        puStack_a10 = (undefined *)0x0;
        uStack_a00 = 0x3f800000;
        unaff_x23 = (long *******)param_1[0x40];
        iVar26 = *(int *)(unaff_x23 + 3);
        ppuVar17 = &PTR_DAT_110afd288;
        if (iVar26 != 3) {
          ppuVar17 = &PTR_DAT_110afd208;
        }
        ppuVar38 = &PTR_DAT_110afd388;
        if (iVar26 != 1) {
          ppuVar38 = &PTR_DAT_110afd408;
        }
        appuStack_a8[0] = &PTR_FUN_110afd178;
        if (iVar26 != 0) {
          appuStack_a8[0] = ppuVar17;
        }
        pppuStack_90 = appuStack_a8;
        ppuStack_d0 = &PTR_DAT_110afd308;
        if (iVar26 != 0) {
          ppuStack_d0 = ppuVar38;
        }
        pppuStack_b8 = &ppuStack_d0;
        ppppppplStack_9c8 = (long *******)0x0;
        ppppppplStack_9d0 = (long *******)0x0;
        uStack_9b8 = 0;
        pppppplStack_9c0 = (long ******)0x0;
        fStack_9b0 = 1.0;
        pppppplVar20 = pppppplStack_6e0;
        if (pppppplStack_6e0 == (long ******)0x0) {
LAB_10958e9e0:
          plVar45 = (long *)0x0;
          plVar37 = (long *)0x0;
        }
        else {
          do {
            ppppplVar52 = pppppplVar20[2];
            ppppplVar24 = (long *****)
                          (((long)unaff_x23[1] - (long)*unaff_x23 >> 3) * -0x5555555555555555);
            if (ppppplVar24 < ppppplVar52 || (long)ppppplVar24 - (long)ppppplVar52 == 0) {
              FUN_109590ea4();
              goto LAB_10958fc24;
            }
            pppppplVar44 = *unaff_x23 + (long)ppppplVar52 * 3;
            ppppplVar24 = pppppplVar44[1];
            for (ppppplVar52 = *pppppplVar44; ppppplVar52 != ppppplVar24;
                ppppplVar52 = ppppplVar52 + 2) {
              ppppplVar48 = pppppplVar20[3];
              pppplStack_9e0 = ppppplVar52[1];
              ppppplStack_9d8 = ppppplVar48;
              if (pppuStack_90 == (undefined ***)0x0) {
                func_0x000104c501e4();
                goto LAB_10958fc24;
              }
              (*(code *)(*pppuStack_90)[6])(pppuStack_90,&ppppplStack_9d8,&pppplStack_9e0);
              ppppppplVar10 = ppppppplStack_9c8;
              ppppplVar18 = (long *****)*ppppplVar52;
              uVar16 = ((ulong)(uint)((int)ppppplVar18 << 3) + 8 ^ (ulong)ppppplVar18 >> 0x20) *
                       -0x622015f714c7d297;
              uVar16 = ((ulong)ppppplVar18 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
              ppppppplVar42 = (long *******)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
              if (ppppppplStack_9c8 != (long *******)0x0) {
                uVar16 = (long)ppppppplStack_9c8 - 1;
                if (((ulong)ppppppplStack_9c8 & uVar16) == 0) {
                  unaff_x27 = (long *******)((ulong)ppppppplVar42 & uVar16);
                }
                else {
                  unaff_x27 = ppppppplVar42;
                  if (ppppppplStack_9c8 <= ppppppplVar42) {
                    uVar29 = 0;
                    if (ppppppplStack_9c8 != (long *******)0x0) {
                      uVar29 = (ulong)ppppppplVar42 / (ulong)ppppppplStack_9c8;
                    }
                    unaff_x27 = (long *******)
                                ((long)ppppppplVar42 - uVar29 * (long)ppppppplStack_9c8);
                  }
                }
                if (ppppppplStack_9d0[(long)unaff_x27] != (long ******)0x0) {
                  for (pppppplVar44 = (long ******)*ppppppplStack_9d0[(long)unaff_x27];
                      pppppplVar44 != (long ******)0x0; pppppplVar44 = (long ******)*pppppplVar44) {
                    ppppppplVar25 = (long *******)pppppplVar44[1];
                    if (ppppppplVar25 == ppppppplVar42) {
                      if (pppppplVar44[2] == ppppplVar18) goto LAB_10958e824;
                    }
                    else {
                      if (((ulong)ppppppplStack_9c8 & uVar16) == 0) {
                        ppppppplVar25 = (long *******)((ulong)ppppppplVar25 & uVar16);
                      }
                      else if (ppppppplStack_9c8 <= ppppppplVar25) {
                        uVar29 = 0;
                        if (ppppppplStack_9c8 != (long *******)0x0) {
                          uVar29 = (ulong)ppppppplVar25 / (ulong)ppppppplStack_9c8;
                        }
                        ppppppplVar25 =
                             (long *******)((long)ppppppplVar25 - uVar29 * (long)ppppppplStack_9c8);
                      }
                      if (ppppppplVar25 != unaff_x27) break;
                    }
                  }
                }
              }
              pppppplVar44 = (long ******)0x20;
              __Znwm();
              *pppppplVar44 = (long *****)0x0;
              pppppplVar44[1] = (long *****)ppppppplVar42;
              pppppplVar44[2] = (long *****)*ppppplVar52;
              pppppplVar44[3] = (long *****)0x0;
              if ((ppppppplVar10 == (long *******)0x0) ||
                 (fStack_9b0 * (float)ppppppplVar10 < (float)(uStack_9b8 + 1))) {
                uVar16 = 1;
                if ((long *******)0x2 < ppppppplVar10) {
                  uVar16 = (ulong)(((ulong)ppppppplVar10 & (long)ppppppplVar10 - 1U) != 0);
                }
                ppppppplVar25 = (long *******)(uVar16 | (long)ppppppplVar10 << 1);
                ppppppplVar41 = (long *******)(long)((float)(uStack_9b8 + 1) / fStack_9b0);
                if (ppppppplVar25 <= ppppppplVar41) {
                  ppppppplVar25 = ppppppplVar41;
                }
                ppppppplVar41 = ppppppplVar10;
                if ((long)ppppppplVar25 - 1U == 0) {
                  ppppppplVar25 = (long *******)0x2;
                }
                else if (((ulong)ppppppplVar25 & (long)ppppppplVar25 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                  ppppppplVar41 = ppppppplStack_9c8;
                }
                ppppppplVar10 = ppppppplVar25;
                if (ppppppplVar41 < ppppppplVar25) {
LAB_10958e638:
                  if ((ulong)ppppppplVar10 >> 0x3d != 0) {
                    func_0x000104c4f740();
                    goto LAB_10958fc24;
                  }
                  ppppppplVar25 = (long *******)((long)ppppppplVar10 << 3);
                  __Znwm();
                  bVar7 = ppppppplStack_9d0 != (long *******)0x0;
                  ppppppplStack_9d0 = ppppppplVar25;
                  if (bVar7) {
                    __ZdlPv();
                  }
                  ppppppplVar25 = (long *******)0x0;
                  do {
                    ppppppplStack_9d0[(long)ppppppplVar25] = (long ******)0x0;
                    ppppppplVar25 = (long *******)((long)ppppppplVar25 + 1);
                  } while (ppppppplVar10 != ppppppplVar25);
                  ppppppplStack_9c8 = ppppppplVar10;
                  if (pppppplStack_9c0 != (long ******)0x0) {
                    ppppppplVar25 = (long *******)pppppplStack_9c0[1];
                    uVar16 = (long)ppppppplVar10 - 1;
                    if (((ulong)ppppppplVar10 & uVar16) == 0) {
                      ppppppplVar25 = (long *******)((ulong)ppppppplVar25 & uVar16);
                    }
                    else if (ppppppplVar10 <= ppppppplVar25) {
                      uVar29 = 0;
                      if (ppppppplVar10 != (long *******)0x0) {
                        uVar29 = (ulong)ppppppplVar25 / (ulong)ppppppplVar10;
                      }
                      ppppppplVar25 =
                           (long *******)((long)ppppppplVar25 - uVar29 * (long)ppppppplVar10);
                    }
                    ppppppplStack_9d0[(long)ppppppplVar25] = (long ******)&pppppplStack_9c0;
                    pppppplVar27 = (long ******)*pppppplStack_9c0;
                    pppppplVar4 = pppppplStack_9c0;
                    while (pppppplVar27 != (long ******)0x0) {
                      ppppppplVar41 = (long *******)pppppplVar27[1];
                      if (((ulong)ppppppplVar10 & uVar16) == 0) {
                        ppppppplVar41 = (long *******)((ulong)ppppppplVar41 & uVar16);
                      }
                      else if (ppppppplVar10 <= ppppppplVar41) {
                        uVar29 = 0;
                        if (ppppppplVar10 != (long *******)0x0) {
                          uVar29 = (ulong)ppppppplVar41 / (ulong)ppppppplVar10;
                        }
                        ppppppplVar41 =
                             (long *******)((long)ppppppplVar41 - uVar29 * (long)ppppppplVar10);
                      }
                      pppppplVar28 = pppppplVar27;
                      if (ppppppplVar41 != ppppppplVar25) {
                        if (ppppppplStack_9d0[(long)ppppppplVar41] == (long ******)0x0) {
                          ppppppplStack_9d0[(long)ppppppplVar41] = pppppplVar4;
                          ppppppplVar25 = ppppppplVar41;
                        }
                        else {
                          *pppppplVar4 = *pppppplVar27;
                          *pppppplVar27 = *ppppppplStack_9d0[(long)ppppppplVar41];
                          *ppppppplStack_9d0[(long)ppppppplVar41] = (long *****)pppppplVar27;
                          pppppplVar28 = pppppplVar4;
                        }
                      }
                      pppppplVar4 = pppppplVar28;
                      pppppplVar27 = (long ******)*pppppplVar28;
                    }
                  }
                }
                else {
                  ppppppplVar10 = ppppppplVar41;
                  if (ppppppplVar25 < ppppppplVar41) {
                    ppppppplVar10 = (long *******)(long)((float)uStack_9b8 / fStack_9b0);
                    if ((ppppppplVar41 < (long *******)0x3) ||
                       (((ulong)ppppppplVar41 & (long)ppppppplVar41 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((long *******)0x1 < ppppppplVar10) {
                      ppppppplVar10 =
                           (long *******)(1L << (-LZCOUNT((long)ppppppplVar10 + -1) & 0x3fU));
                    }
                    ppppppplVar23 = ppppppplStack_9d0;
                    if (ppppppplVar25 <= ppppppplVar10) {
                      ppppppplVar25 = ppppppplVar10;
                    }
                    ppppppplVar10 = ppppppplStack_9c8;
                    if (ppppppplVar25 < ppppppplVar41) {
                      ppppppplVar10 = ppppppplVar25;
                      if (ppppppplVar25 != (long *******)0x0) goto LAB_10958e638;
                      ppppppplStack_9d0 = (long *******)0x0;
                      if (ppppppplVar23 != (long *******)0x0) {
                        __ZdlPv();
                      }
                      ppppppplStack_9c8 = (long *******)0x0;
                      ppppppplVar10 = (long *******)0x0;
                    }
                  }
                }
                if (((ulong)ppppppplVar10 & (long)ppppppplVar10 - 1U) == 0) {
                  unaff_x27 = (long *******)((long)ppppppplVar10 - 1U & (ulong)ppppppplVar42);
                }
                else {
                  unaff_x27 = ppppppplVar42;
                  if (ppppppplVar10 <= ppppppplVar42) {
                    uVar16 = 0;
                    if (ppppppplVar10 != (long *******)0x0) {
                      uVar16 = (ulong)ppppppplVar42 / (ulong)ppppppplVar10;
                    }
                    unaff_x27 = (long *******)((long)ppppppplVar42 - uVar16 * (long)ppppppplVar10);
                  }
                }
              }
              ppppppplVar42 = (long *******)ppppppplStack_9d0[(long)unaff_x27];
              if (ppppppplVar42 == (long *******)0x0) {
                *pppppplVar44 = (long *****)pppppplStack_9c0;
                ppppppplStack_9d0[(long)unaff_x27] = (long ******)&pppppplStack_9c0;
                pppppplStack_9c0 = pppppplVar44;
                if (*pppppplVar44 != (long *****)0x0) {
                  ppppppplVar42 = (long *******)(*pppppplVar44)[1];
                  if (((ulong)ppppppplVar10 & (long)ppppppplVar10 - 1U) == 0) {
                    ppppppplVar42 = (long *******)((ulong)ppppppplVar42 & (long)ppppppplVar10 - 1U);
                  }
                  else if (ppppppplVar10 <= ppppppplVar42) {
                    uVar16 = 0;
                    if (ppppppplVar10 != (long *******)0x0) {
                      uVar16 = (ulong)ppppppplVar42 / (ulong)ppppppplVar10;
                    }
                    ppppppplVar42 =
                         (long *******)((long)ppppppplVar42 - uVar16 * (long)ppppppplVar10);
                  }
                  ppppppplVar42 = ppppppplStack_9d0 + (long)ppppppplVar42;
                  goto LAB_10958e814;
                }
              }
              else {
                *pppppplVar44 = (long *****)*ppppppplVar42;
LAB_10958e814:
                *ppppppplVar42 = pppppplVar44;
              }
              uStack_9b8 = uStack_9b8 + 1;
LAB_10958e824:
              pppppplVar44[3] = (long *****)((double)ppppplVar48 + (double)pppppplVar44[3]);
            }
            pppppplVar20 = (long ******)*pppppplVar20;
          } while (pppppplVar20 != (long ******)0x0);
          if (pppppplStack_9c0 == (long ******)0x0) goto LAB_10958e9e0;
          plVar37 = (long *)0x0;
          plVar43 = (long *)0x0;
          pppppplVar20 = pppppplStack_9c0;
          plVar19 = (long *)0x0;
          do {
            ppppplVar52 = pppppplVar20[3];
            ppppplStack_9d8 = ppppplVar52;
            if (pppuStack_b8 == (undefined ***)0x0) {
              func_0x000104c501e4();
              goto LAB_10958fc24;
            }
            ppppplVar24 = (long *****)&ppppplStack_9d8;
            (*(code *)(*pppuStack_b8)[6])();
            if (plVar37 < plVar43) {
              *plVar37 = (long)pppppplVar20[2];
              plVar37[1] = (long)ppppplVar52;
              plVar45 = plVar19;
            }
            else {
              lVar14 = (long)plVar37 - (long)plVar19;
              uVar16 = (lVar14 >> 4) + 1;
              if (uVar16 >> 0x3c != 0) {
                FUN_109590604();
                goto LAB_10958fc24;
              }
              uVar29 = (long)plVar43 - (long)plVar19 >> 3;
              if (uVar29 <= uVar16) {
                uVar29 = uVar16;
              }
              if (0x7fffffffffffffef < (ulong)((long)plVar43 - (long)plVar19)) {
                uVar29 = 0xfffffffffffffff;
              }
              FUN_109590618();
              plVar37 = (long *)(uVar29 + lVar14);
              plVar43 = (long *)(uVar29 + (long)ppppplVar24 * 0x10);
              *plVar37 = (long)pppppplVar20[2];
              plVar37[1] = (long)ppppplVar52;
              plVar45 = plVar37 + (lVar14 >> 4) * -2;
              _memcpy(plVar45,plVar19,lVar14);
              if (plVar19 != (long *)0x0) {
                __ZdlPv(plVar19);
              }
            }
            plVar37 = plVar37 + 2;
            pppppplVar20 = (long ******)*pppppplVar20;
            plVar19 = plVar45;
          } while (pppppplVar20 != (long ******)0x0);
        }
        FUN_109590eb8(&ppppppplStack_9d0);
        if (pppuStack_b8 == &ppuStack_d0) {
          lVar14 = 0x20;
LAB_10958ea18:
          (**(code **)((long)*pppuStack_b8 + lVar14))();
        }
        else if (pppuStack_b8 != (undefined ***)0x0) {
          lVar14 = 0x28;
          goto LAB_10958ea18;
        }
        if (pppuStack_90 == appuStack_a8) {
          lVar14 = 0x20;
LAB_10958ea44:
          (**(code **)((long)*pppuStack_90 + lVar14))();
        }
        else if (pppuStack_90 != (undefined ***)0x0) {
          lVar14 = 0x28;
          goto LAB_10958ea44;
        }
        iVar26 = *(int *)((long)unaff_x23 + 0x1c);
        if (iVar26 == 2) {
          plVar19 = plVar45;
          plVar5 = plVar45;
          plVar43 = plVar45;
          if (plVar45 != plVar37) {
            while (plVar19 = plVar5, plVar43 = plVar43 + 2, plVar43 != plVar37) {
              plVar5 = plVar43;
              if ((double)plVar43[1] <= (double)plVar19[1]) {
                plVar5 = plVar19;
              }
            }
          }
          if (plVar45 != plVar37) {
            dVar51 = (double)plVar19[1];
            fVar50 = *(float *)((long)unaff_x23 + 0x2c);
            plVar43 = plVar45;
            do {
              if ((double)plVar43[1] < dVar51 * (double)fVar50) {
                FUN_10943e634(&ppuStack_a20,plVar43,plVar43);
              }
              plVar43 = plVar43 + 2;
            } while (plVar43 != plVar37);
          }
        }
        else {
          plVar43 = plVar45;
          if (iVar26 == 1) {
            for (; plVar43 != plVar37; plVar43 = plVar43 + 2) {
              if ((double)plVar43[1] < (double)*(float *)(unaff_x23 + 5)) {
                FUN_10943e634(&ppuStack_a20,plVar43,plVar43);
              }
            }
          }
          else if ((iVar26 == 0) &&
                  (pppppplVar20 = (long ******)((long)plVar37 - (long)plVar45 >> 4),
                  lVar14 = (long)pppppplVar20 - (long)unaff_x23[4],
                  unaff_x23[4] <= pppppplVar20 && lVar14 != 0)) {
            FUN_10940c35c(&ppppppplStack_9d0);
            if (ppppppplStack_9d0 != ppppppplStack_9c8) {
              pppppplVar20 = (long ******)0x0;
              ppppppplVar10 = ppppppplStack_9d0;
              do {
                ppppppplVar42 = ppppppplVar10 + 1;
                *ppppppplVar10 = pppppplVar20;
                pppppplVar20 = (long ******)((long)pppppplVar20 + 1);
                ppppppplVar10 = ppppppplVar42;
              } while (ppppppplVar42 != ppppppplStack_9c8);
            }
            ppppppplVar42 = ppppppplStack_9d0 + lVar14;
            ppppppplVar41 = ppppppplStack_9c8;
            ppppppplVar10 = ppppppplStack_9d0;
            ppppppplVar25 = ppppppplStack_9d0;
            if (ppppppplVar42 != ppppppplStack_9c8) {
LAB_10958f628:
              uVar16 = (long)ppppppplVar41 - (long)ppppppplVar10 >> 3;
              if (1 < uVar16) {
                if (uVar16 != 3) {
                  if (uVar16 == 2) {
                    pppppplVar20 = *ppppppplVar10;
                    if ((double)plVar45[(long)ppppppplVar41[-1] * 2 + 1] <
                        (double)plVar45[(long)pppppplVar20 * 2 + 1]) {
                      *ppppppplVar10 = ppppppplVar41[-1];
                      ppppppplVar41[-1] = pppppplVar20;
                    }
                  }
                  else if ((long)uVar16 < 8) {
                    for (; ppppppplVar41 + -1 != ppppppplVar10; ppppppplVar10 = ppppppplVar10 + 1) {
                      if ((ppppppplVar41 != ppppppplVar10) && (ppppppplVar10 + 1 != ppppppplVar41))
                      {
                        pppppplVar44 = *ppppppplVar10;
                        ppppppplVar23 = ppppppplVar10;
                        pppppplVar20 = pppppplVar44;
                        ppppppplVar31 = ppppppplVar10 + 1;
                        do {
                          ppppppplVar36 = ppppppplVar31 + 1;
                          ppppppplVar22 = ppppppplVar31;
                          pppppplVar27 = *ppppppplVar31;
                          if ((double)plVar45[(long)pppppplVar20 * 2 + 1] <=
                              (double)plVar45[(long)*ppppppplVar31 * 2 + 1]) {
                            ppppppplVar22 = ppppppplVar23;
                            pppppplVar27 = pppppplVar20;
                          }
                          pppppplVar20 = pppppplVar27;
                          ppppppplVar23 = ppppppplVar22;
                          ppppppplVar31 = ppppppplVar36;
                        } while (ppppppplVar36 != ppppppplVar41);
                        if (ppppppplVar22 != ppppppplVar10) {
                          *ppppppplVar10 = *ppppppplVar22;
                          *ppppppplVar22 = pppppplVar44;
                        }
                      }
                    }
                  }
                  else {
                    ppppppplVar23 =
                         ppppppplVar10 + ((ulong)((long)ppppppplVar41 - (long)ppppppplVar10) >> 4);
                    ppppppplVar31 = ppppppplVar41 + -1;
                    pppppplVar44 = *ppppppplVar31;
                    pppppplVar27 = *ppppppplVar23;
                    dVar53 = (double)plVar45[(long)pppppplVar27 * 2 + 1];
                    pppppplVar20 = *ppppppplVar10;
                    dVar51 = (double)plVar45[(long)pppppplVar20 * 2 + 1];
                    if (dVar51 <= dVar53) {
                      if ((double)plVar45[(long)pppppplVar44 * 2 + 1] < dVar53) {
                        *ppppppplVar23 = pppppplVar44;
                        *ppppppplVar31 = pppppplVar27;
                        pppppplVar20 = *ppppppplVar10;
                        if ((double)plVar45[(long)*ppppppplVar23 * 2 + 1] <
                            (double)plVar45[(long)pppppplVar20 * 2 + 1]) {
                          *ppppppplVar10 = *ppppppplVar23;
                          *ppppppplVar23 = pppppplVar20;
                        }
                        goto LAB_10958f6f8;
                      }
                      iVar26 = 0;
                    }
                    else {
                      if (dVar53 <= (double)plVar45[(long)pppppplVar44 * 2 + 1]) {
                        *ppppppplVar10 = pppppplVar27;
                        *ppppppplVar23 = pppppplVar20;
                        if (dVar51 <= (double)plVar45[(long)*ppppppplVar31 * 2 + 1])
                        goto LAB_10958f6f8;
                        *ppppppplVar23 = *ppppppplVar31;
                      }
                      else {
                        *ppppppplVar10 = pppppplVar44;
                      }
                      *ppppppplVar31 = pppppplVar20;
LAB_10958f6f8:
                      iVar26 = 1;
                    }
                    pppppplVar20 = *ppppppplVar10;
                    dVar51 = (double)plVar45[(long)pppppplVar20 * 2 + 1];
                    ppppppplVar22 = ppppppplVar31;
                    if ((double)plVar45[(long)*ppppppplVar23 * 2 + 1] <= dVar51) {
                      do {
                        ppppppplVar22 = ppppppplVar22 + -1;
                        if (ppppppplVar22 == ppppppplVar10) {
                          ppppppplVar23 = ppppppplVar10 + 1;
                          ppppppplVar22 = ppppppplVar23;
                          if (dVar51 < (double)plVar45[(long)*ppppppplVar31 * 2 + 1])
                          goto LAB_10958f8cc;
                          goto LAB_10958f870;
                        }
                      } while ((double)plVar45[(long)*ppppppplVar23 * 2 + 1] <=
                               (double)plVar45[(long)*ppppppplVar22 * 2 + 1]);
                      *ppppppplVar10 = *ppppppplVar22;
                      *ppppppplVar22 = pppppplVar20;
                      bVar7 = iVar26 != 0;
                      iVar26 = 1;
                      ppppppplVar31 = ppppppplVar22;
                      if (bVar7) {
                        iVar26 = 2;
                      }
                    }
                    ppppppplVar22 = ppppppplVar10 + 1;
                    ppppppplVar36 = ppppppplVar23;
                    ppppppplVar34 = ppppppplVar22;
                    ppppppplVar35 = ppppppplVar22;
                    if (ppppppplVar22 < ppppppplVar31) {
                      while( true ) {
                        ppppppplVar23 = ppppppplVar36;
                        do {
                          ppppppplVar34 = ppppppplVar35;
                          ppppppplVar35 = ppppppplVar34 + 1;
                          pppppplVar20 = *ppppppplVar34;
                        } while ((double)plVar45[(long)pppppplVar20 * 2 + 1] <
                                 (double)plVar45[(long)*ppppppplVar23 * 2 + 1]);
                        do {
                          ppppppplVar31 = ppppppplVar31 + -1;
                        } while ((double)plVar45[(long)*ppppppplVar23 * 2 + 1] <=
                                 (double)plVar45[(long)*ppppppplVar31 * 2 + 1]);
                        if (ppppppplVar31 <= ppppppplVar34) break;
                        *ppppppplVar34 = *ppppppplVar31;
                        *ppppppplVar31 = pppppplVar20;
                        iVar26 = iVar26 + 1;
                        ppppppplVar36 = ppppppplVar31;
                        if (ppppppplVar34 != ppppppplVar23) {
                          ppppppplVar36 = ppppppplVar23;
                        }
                      }
                    }
                    if (ppppppplVar34 != ppppppplVar23) {
                      pppppplVar20 = *ppppppplVar34;
                      if ((double)plVar45[(long)*ppppppplVar23 * 2 + 1] <
                          (double)plVar45[(long)pppppplVar20 * 2 + 1]) {
                        *ppppppplVar34 = *ppppppplVar23;
                        *ppppppplVar23 = pppppplVar20;
                        iVar26 = iVar26 + 1;
                      }
                    }
                    if (ppppppplVar34 != ppppppplVar42) {
                      if (iVar26 == 0) {
                        ppppppplVar23 = ppppppplVar34;
                        if (ppppppplVar42 < ppppppplVar34) {
                          do {
                            if (ppppppplVar22 == ppppppplVar34) goto joined_r0x00010958eabc;
                            ppppppplVar23 = ppppppplVar22 + -1;
                            pppppplVar20 = *ppppppplVar22;
                            ppppppplVar22 = ppppppplVar22 + 1;
                          } while ((double)plVar45[(long)*ppppppplVar23 * 2 + 1] <=
                                   (double)plVar45[(long)pppppplVar20 * 2 + 1]);
                        }
                        else {
                          do {
                            ppppppplVar31 = ppppppplVar23 + 1;
                            if (ppppppplVar31 == ppppppplVar41) goto joined_r0x00010958eabc;
                            pppppplVar20 = *ppppppplVar23;
                            ppppppplVar23 = ppppppplVar31;
                          } while ((double)plVar45[(long)pppppplVar20 * 2 + 1] <=
                                   (double)plVar45[(long)*ppppppplVar31 * 2 + 1]);
                        }
                      }
                      ppppppplVar23 = ppppppplVar34;
                      ppppppplVar22 = ppppppplVar10;
                      if (ppppppplVar34 <= ppppppplVar42) {
                        ppppppplVar23 = ppppppplVar41;
                        ppppppplVar22 = ppppppplVar34 + 1;
                      }
                      goto LAB_10958f92c;
                    }
                  }
                  goto joined_r0x00010958eabc;
                }
                pppppplVar20 = *ppppppplVar10;
                pppppplVar44 = ppppppplVar10[1];
                dVar53 = (double)plVar45[(long)pppppplVar44 * 2 + 1];
                dVar51 = (double)plVar45[(long)pppppplVar20 * 2 + 1];
                pppppplVar27 = ppppppplVar41[-1];
                if (dVar51 <= dVar53) {
                  if ((double)plVar45[(long)pppppplVar27 * 2 + 1] < dVar53) {
                    ppppppplVar10[1] = pppppplVar27;
                    ppppppplVar41[-1] = pppppplVar44;
                    pppppplVar20 = *ppppppplVar10;
                    if ((double)plVar45[(long)ppppppplVar10[1] * 2 + 1] <
                        (double)plVar45[(long)pppppplVar20 * 2 + 1]) {
                      *ppppppplVar10 = ppppppplVar10[1];
                      ppppppplVar10[1] = pppppplVar20;
                    }
                  }
                  goto joined_r0x00010958eabc;
                }
                if (dVar53 <= (double)plVar45[(long)pppppplVar27 * 2 + 1]) {
                  *ppppppplVar10 = pppppplVar44;
                  ppppppplVar10[1] = pppppplVar20;
                  if (dVar51 <= (double)plVar45[(long)ppppppplVar41[-1] * 2 + 1])
                  goto joined_r0x00010958eabc;
                  ppppppplVar10[1] = ppppppplVar41[-1];
                }
                else {
                  *ppppppplVar10 = pppppplVar27;
                }
                ppppppplVar41[-1] = pppppplVar20;
              }
            }
joined_r0x00010958eabc:
            for (; ppppppplVar25 < ppppppplVar42; ppppppplVar25 = ppppppplVar25 + 1) {
              FUN_10943e634(&ppuStack_a20,plVar45 + (long)*ppppppplVar25 * 2,
                            plVar45 + (long)*ppppppplVar25 * 2);
            }
            if (ppppppplStack_9d0 != (long *******)0x0) {
              ppppppplStack_9c8 = ppppppplStack_9d0;
              __ZdlPv(ppppppplStack_9d0);
            }
          }
        }
        if (plVar45 != (long *)0x0) {
          __ZdlPv(plVar45);
        }
        uStack_bd8 = uStack_bd8 & 0xffffffffffffff00;
        uStack_bd0 = uStack_bd0 & 0xffffffffffffff00;
        FUN_10948ffac(&ppppppplStack_9d0,param_1[9],&lStack_b30,auStack_b18,&ppppppplStack_9f8,
                      uStack_bd8,uStack_bd0);
        param_3 = (undefined ***)(param_1 + 0x15);
        FUN_109410fd0(&ppuStack_b48,&uStack_9b8,&ppppppplStack_9d0,param_3,&ppuStack_a20);
        FUN_109482a78(&uStack_9b8);
        if (ppppppplStack_9d0 != (long *******)0x0) {
          ppppppplStack_9c8 = ppppppplStack_9d0;
          __ZdlPv();
        }
        FUN_10948cb8c(&ppuStack_a20);
        func_0x0001095902a0(&ppuStack_6f0);
        ppppppplStack_9d0 = (long *******)&ppppppplStack_9f8;
        unaff_x27 = (long *******)&ppppppplStack_9d0;
        func_0x00010948bbc8();
        ppuVar38 = ppuStack_b40;
        ppuVar17 = ppuStack_b48;
      }
      else {
        FUN_1094805a0(&ppppppplStack_9d0,param_1[9],&lStack_b30,auStack_b18);
        ppppppplStack_6e8 = (long *******)0x0;
        ppuStack_6f0 = (undefined **)0x0;
        lStack_6d8 = 0;
        pppppplStack_6e0 = (long ******)0x0;
        fStack_6d0 = 1.0;
        param_3 = (undefined ***)(param_1 + 0x15);
        FUN_109410fd0(&ppuStack_a20,&uStack_9b8,&ppppppplStack_9d0,param_3,&ppuStack_6f0);
        ppuVar38 = ppuStack_a18;
        ppuVar17 = ppuStack_a20;
        ppuStack_a18 = (undefined **)0x0;
        puStack_a10 = (undefined *)0x0;
        ppuStack_a20 = (undefined **)0x0;
        FUN_10948cb8c(&ppuStack_6f0);
        FUN_109482a78(&uStack_9b8);
        unaff_x27 = ppppppplStack_9d0;
        if (ppppppplStack_9d0 != (long *******)0x0) {
          ppppppplStack_9c8 = ppppppplStack_9d0;
          __ZdlPv();
        }
      }
      ppppppplStack_9f0 = (long *******)0x0;
      uStack_9e8 = 0;
      ppuVar46 = ppuVar17;
      ppppppplStack_9f8 = (long *******)&ppppppplStack_9f0;
      if (ppuVar17 != ppuVar38) {
LAB_10958ec64:
        uVar16 = param_1[0xb];
        if (uVar16 != 0) {
          puVar21 = *ppuVar46;
          uVar29 = ((ulong)(uint)((int)puVar21 << 3) + 8 ^ (ulong)puVar21 >> 0x20) *
                   -0x622015f714c7d297;
          uVar29 = ((ulong)puVar21 >> 0x20 ^ uVar29 >> 0x2f ^ uVar29) * -0x622015f714c7d297;
          uVar29 = (uVar29 ^ uVar29 >> 0x2f) * -0x622015f714c7d297;
          uVar30 = uVar16 - 1;
          if ((uVar16 & uVar30) == 0) {
            uVar32 = uVar29 & uVar30;
          }
          else {
            uVar32 = uVar29;
            if (uVar16 <= uVar29) {
              uVar32 = 0;
              if (uVar16 != 0) {
                uVar32 = uVar29 / uVar16;
              }
              uVar32 = uVar29 - uVar32 * uVar16;
            }
          }
          plVar37 = *(long **)(param_1[10] + uVar32 * 8);
          if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
            do {
              uVar33 = plVar37[1];
              if (uVar33 == uVar29) {
                if ((undefined *)plVar37[2] == puVar21) goto LAB_10958ed24;
              }
              else {
                if ((uVar16 & uVar30) == 0) {
                  uVar33 = uVar33 & uVar30;
                }
                else if (uVar16 <= uVar33) {
                  uVar3 = 0;
                  if (uVar16 != 0) {
                    uVar3 = uVar33 / uVar16;
                  }
                  uVar33 = uVar33 - uVar3 * uVar16;
                }
                if (uVar33 != uVar32) break;
              }
              plVar37 = (long *)*plVar37;
              if (plVar37 == (long *)0x0) break;
            } while( true );
          }
        }
        FUN_109262df8(&UNK_10f639994);
        goto LAB_10958fc24;
      }
LAB_10958edfc:
      __ZNSt3__16chrono12steady_clock3nowEv();
      iVar26 = *(int *)(ppuVar40 + 2);
      if (*(int *)(ppuVar40 + 2) <= *(int *)((long)ppuVar40 + 0x14)) {
        iVar26 = *(int *)((long)ppuVar40 + 0x14);
      }
      fVar47 = *(float *)((long)param_1 + 0x94) * (float)iVar26;
      fVar50 = *(float *)(param_1 + 0x12);
      if (*(float *)(param_1 + 0x12) <= fVar47) {
        fVar50 = fVar47;
      }
      ppuStack_b48 = (undefined **)0x0;
      ppuStack_b40 = (undefined **)0x0;
      uStack_b38 = 0;
      uStack_c8 = 0x100000000;
      ppuStack_d0 = (undefined **)0x100000000;
      puStack_c0 = &DAT_10e5b4a18;
      pppuStack_b8 = (undefined ***)0x0;
      ppppplStack_9d8 = (long *****)((ulong)ppppplStack_9d8 & 0xffffffff00000000);
      iVar26 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
      lVar14 = **(long **)(param_2 + 2);
      if (*(long *)(lVar14 + (long)iVar26 * 0x50 + 0x90) != 0) {
        FUN_1095659c8(&ppppppplStack_9d0,lVar14 + (long)iVar26 * 0x50 + 0x50);
        ppppppplStack_6e8 = (long *******)0x0;
        ppuStack_6f0 = (undefined **)0x0;
        ppppppplStack_6c8 = (long *******)0x0;
        func_0x0001095707b8(&ppuStack_6f0,&ppppppplStack_9d0);
        func_0x000105687250(&pppppplStack_6e0,&pppppplStack_9c0);
        if ((long *******)pppppplStack_9a8 == &pppppplStack_9c0) {
          lVar14 = 0x20;
LAB_10958eecc:
          (**(code **)((long)*pppppplStack_9a8 + lVar14))();
        }
        else if (pppppplStack_9a8 != (long ******)0x0) {
          lVar14 = 0x28;
          goto LAB_10958eecc;
        }
        ppppppplVar10 = ppppppplStack_9c8;
        if (ppppppplStack_9c8 != (long *******)0x0) {
          ppppppplVar42 = ppppppplStack_9c8 + 1;
          do {
            pppppplVar20 = *ppppppplVar42;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar42,0x10);
            if (bVar7) {
              *ppppppplVar42 = (long ******)((long)pppppplVar20 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppppplVar20 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_9c8)[2])(ppppppplStack_9c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar10);
          }
        }
        if ((ppuStack_6f0 != (undefined **)0x0) && ((code *)*ppuStack_6f0 != (code *)0x0)) {
          plVar37 = (long *)0x3;
          param_3 = (undefined ***)0x0;
          (*(code *)*ppuStack_6f0)();
          if (plVar37 != (long *)0x0) {
            lVar14 = *plVar37;
            ppppppplVar10 = ppppppplStack_6c8;
            if (ppppppplStack_6c8 == &pppppplStack_6e0) {
              lVar15 = 0x20;
LAB_10958ef64:
              (**(code **)((long)*ppppppplStack_6c8 + lVar15))();
            }
            else if (ppppppplStack_6c8 != (long *******)0x0) {
              lVar15 = 0x28;
              goto LAB_10958ef64;
            }
            ppppppplVar42 = ppppppplStack_6e8;
            if (ppppppplStack_6e8 != (long *******)0x0) {
              ppppppplVar25 = ppppppplStack_6e8 + 1;
              do {
                pppppplVar20 = *ppppppplVar25;
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar25,0x10);
                if (bVar7) {
                  *ppppppplVar25 = (long ******)((long)pppppplVar20 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (pppppplVar20 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_6e8)[2])(ppppppplStack_6e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar42);
                ppppppplVar10 = ppppppplVar42;
              }
            }
            goto LAB_10958efa8;
          }
        }
        func_0x000107c31940(&ppuStack_a20,&UNK_10f2e5846);
        ppuVar49 = ppuStack_6f0;
        FUN_10951f6fc();
        FUN_109259240(&ppppppplStack_9d0,&ppuStack_a20,(ulong)ppuVar49[1] & 0x7fffffffffffffff);
        func_0x000105687ee0(&ppppppplStack_9d0);
        goto LAB_10958fc24;
      }
      lVar14 = param_1[0x13];
      ppppppplVar10 = unaff_x27;
LAB_10958efa8:
      if ((long ********)ppppppplStack_9f8 == &ppppppplStack_9f0) {
        dVar51 = 0.0;
        dVar53 = 0.0;
      }
      else {
        uVar39 = 0;
        iVar26 = 0;
        ppppppplVar42 = ppppppplStack_9f8;
        do {
          ppppppplVar10 = ppppppplVar42 + 6;
          param_3 = appuStack_390;
          FUN_10940e340(&ppuStack_6f0,fVar50 * fVar50,ppppppplVar10,&lStack_b30,param_3,
                        ppppppplVar42[4] + 0x16,param_1 + 0xf,lVar14);
          uVar39 = uVar39 + 1;
          if ((bStack_640 & 1) != 0) {
            FUN_10949ef00(&ppppppplStack_9d0,ppppppplVar42[4][0x1e],param_1 + 0x18);
            param_3 = &ppuStack_6f0;
            FUN_1094a0010(&ppppppplStack_9d0,appuStack_390);
            FUN_1094a09f0(&ppppppplStack_9d0,appuStack_390);
            if (iStack_980 != 0) {
              ppuStack_a20 = &PTR_FUN_110af0d50;
              ppuStack_a18 = (undefined **)0x0;
              uStack_a00 = 0;
              puStack_a10 = &DAT_11383d918;
              uStack_a08 = 0;
              uVar16 = param_1[5];
              if (uVar16 != 0) {
                pppppplVar20 = ppppppplVar42[4];
                uVar29 = ((ulong)(uint)((int)pppppplVar20 << 3) + 8 ^ (ulong)pppppplVar20 >> 0x20) *
                         -0x622015f714c7d297;
                uVar29 = ((ulong)pppppplVar20 >> 0x20 ^ uVar29 >> 0x2f ^ uVar29) *
                         -0x622015f714c7d297;
                uVar29 = (uVar29 ^ uVar29 >> 0x2f) * -0x622015f714c7d297;
                uVar30 = uVar16 - 1;
                if ((uVar16 & uVar30) == 0) {
                  uVar32 = uVar29 & uVar30;
                }
                else {
                  uVar32 = uVar29;
                  if (uVar16 <= uVar29) {
                    uVar32 = 0;
                    if (uVar16 != 0) {
                      uVar32 = uVar29 / uVar16;
                    }
                    uVar32 = uVar29 - uVar32 * uVar16;
                  }
                }
                plVar37 = *(long **)(param_1[4] + uVar32 * 8);
                if (plVar37 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar37 = (long *)*plVar37;
                      if (plVar37 == (long *)0x0) goto LAB_10958fac0;
                      uVar33 = plVar37[1];
                      if (uVar33 == uVar29) break;
                      if ((uVar16 & uVar30) == 0) {
                        uVar33 = uVar33 & uVar30;
                      }
                      else if (uVar16 <= uVar33) {
                        uVar3 = 0;
                        if (uVar16 != 0) {
                          uVar3 = uVar33 / uVar16;
                        }
                        uVar33 = uVar33 - uVar3 * uVar16;
                      }
                      if (uVar33 != uVar32) goto LAB_10958fac0;
                    }
                  } while ((long ******)plVar37[2] != pppppplVar20);
                  param_3 = (undefined ***)0x0;
                  func_0x000107c30248(&puStack_a10,plVar37 + 4);
                  uStack_a08 = CONCAT44((float)(ulong)(((long)ppppppplStack_658 -
                                                        (long)ppppppplStack_660 >> 2) *
                                                      -0x5555555555555555),(int)ppppplStack_9d8);
                  func_0x000105688f88(appuStack_a8,&ppuStack_d0,&ppppplStack_9d8);
                  pppuVar12 = (undefined ***)(appuStack_a8[0] + 2);
                  if (&ppuStack_a20 != pppuVar12) {
                    func_0x000109349ec8(pppuVar12);
                    FUN_10934a194(pppuVar12,&ppuStack_a20);
                  }
                  ppppplStack_9d8 =
                       (long *****)CONCAT44(ppppplStack_9d8._4_4_,(int)ppppplStack_9d8 + 1);
                  uVar13 = 6;
                  if ((char)param_1[0x34] == '\0') {
                    uVar13 = 0;
                  }
                  unaff_x23 = (long *******)(ulong)uVar13;
                  FUN_109349e70(&ppuStack_a20);
                  goto LAB_10958f1a8;
                }
              }
LAB_10958fac0:
              FUN_109262df8(&UNK_10f639994);
              goto LAB_10958fc24;
            }
            unaff_x23 = (long *******)0x7;
LAB_10958f1a8:
            ppppppplVar10 = (long *******)&ppppppplStack_9d0;
            FUN_109472658(ppppppplVar10);
            if (((bStack_640 & 1) != 0) &&
               (ppppppplVar10 = ppppppplStack_660, ppppppplStack_660 != (long *******)0x0)) {
              ppppppplStack_658 = ppppppplStack_660;
              __ZdlPv();
            }
            iVar26 = iVar26 + 1;
            if (((int)unaff_x23 != 7) && ((int)unaff_x23 != 0)) break;
          }
          ppppppplVar25 = (long *******)ppppppplVar42[1];
          ppppppplVar41 = ppppppplVar42;
          if ((long *******)ppppppplVar42[1] == (long *******)0x0) {
            do {
              ppppppplVar42 = (long *******)ppppppplVar41[2];
              bVar7 = (long *******)*ppppppplVar42 != ppppppplVar41;
              ppppppplVar41 = ppppppplVar42;
            } while (bVar7);
          }
          else {
            do {
              ppppppplVar42 = ppppppplVar25;
              ppppppplVar25 = (long *******)*ppppppplVar42;
            } while ((long *******)*ppppppplVar42 != (long *******)0x0);
          }
        } while ((long ********)ppppppplVar42 != &ppppppplStack_9f0);
        dVar53 = (double)uVar39;
        dVar51 = (double)iVar26;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      FUN_109590850(param_2,&ppuStack_d0);
      lVar14 = *(long *)(param_2 + 2);
      __ZNSt3__15mutex4lockEv(lVar14 + 0x108);
      __ZNSt3__15mutex6unlockEv(lVar14 + 0x108);
      if (*(char *)(lVar14 + 0x160) == '\x01') {
        lVar14 = *(long *)(param_2 + 2);
        func_0x000107c31940(&ppppppplStack_9d0,&UNK_10f574711);
        uVar11 = *(undefined8 *)(param_2 + 2);
        FUN_109565a70(uVar11,*param_2);
        FUN_1095609b0((double)(((long)ppuVar49 - (long)plVar8) / 1000),lVar14 + 0x108,
                      &ppppppplStack_9d0,uVar11);
        if ((long)pppppplStack_9c0 < 0) {
          __ZdlPv(ppppppplStack_9d0);
        }
        lVar14 = *(long *)(param_2 + 2);
        func_0x000107c31940(&ppppppplStack_9d0,&UNK_10f57472d);
        uVar11 = *(undefined8 *)(param_2 + 2);
        FUN_109565a70(uVar11,*param_2);
        FUN_1095609b0((double)(((long)unaff_x27 - (long)ppuVar49) / 1000),lVar14 + 0x108,
                      &ppppppplStack_9d0,uVar11);
        if ((long)pppppplStack_9c0 < 0) {
          __ZdlPv(ppppppplStack_9d0);
        }
        lVar14 = *(long *)(param_2 + 2);
        func_0x000107c31940(&ppppppplStack_9d0,&UNK_10f574747);
        uVar11 = *(undefined8 *)(param_2 + 2);
        FUN_109565a70(uVar11,*param_2);
        FUN_1095609b0((double)(((long)ppppppplVar10 - (long)unaff_x27) / 1000),lVar14 + 0x108,
                      &ppppppplStack_9d0,uVar11);
        if ((long)pppppplStack_9c0 < 0) {
          __ZdlPv(ppppppplStack_9d0);
        }
        lVar14 = *(long *)(param_2 + 2);
        func_0x000107c31940(&ppppppplStack_9d0,&UNK_10f57475c);
        uVar11 = *(undefined8 *)(param_2 + 2);
        FUN_109565a70(uVar11,*param_2);
        FUN_1095609b0(dVar53,lVar14 + 0x108,&ppppppplStack_9d0,uVar11);
        if ((long)pppppplStack_9c0 < 0) {
          __ZdlPv(ppppppplStack_9d0);
        }
        lVar14 = *(long *)(param_2 + 2);
        func_0x000107c31940(&ppppppplStack_9d0,&UNK_10f574771);
        param_3 = *(undefined ****)(param_2 + 2);
        FUN_109565a70(param_3,*param_2);
        FUN_1095609b0(dVar51,lVar14 + 0x108,&ppppppplStack_9d0);
        if ((long)pppppplStack_9c0 < 0) {
          __ZdlPv(ppppppplStack_9d0);
        }
      }
      func_0x0001056893c8(&ppuStack_d0);
      FUN_109590fb4(&ppuStack_b48);
      FUN_109591038(ppppppplStack_9f0);
      if (ppuVar17 != (undefined **)0x0) {
        __ZdlPv(ppuVar17);
      }
      if (lStack_ae0 != 0) {
        piVar1 = (int *)(lStack_ae0 + 0x14);
        do {
          iVar26 = *piVar1;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar26 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(auStack_b18);
        }
      }
      lStack_ae0 = 0;
      uStack_b00 = 0;
      uStack_b08 = 0;
      uStack_af0 = 0;
      uStack_af8 = 0;
      if (0 < iStack_b14) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_ad8 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_b14);
      }
      if (puStack_ad0 != auStack_ac8 && puStack_ad0 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_ad0 + -8));
      }
      if (lStack_b30 != 0) {
        lStack_b28 = lStack_b30;
        __ZdlPv();
      }
      func_0x000109482af4(appuStack_630);
      plVar8 = plStack_118;
      if ((cStack_110 == '\x01') && (plStack_118 != (long *)0x0)) {
        plVar37 = plStack_118 + 1;
        do {
          lVar14 = *plVar37;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar7) {
            *plVar37 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_188 != 0) {
        lStack_180 = lStack_188;
        __ZdlPv();
      }
      if (lStack_1a0 != 0) {
        lStack_198 = lStack_1a0;
        __ZdlPv();
      }
      if (lStack_1b8 != 0) {
        lStack_1b0 = lStack_1b8;
        __ZdlPv();
      }
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar37 = plStack_278 + 1;
        do {
          lVar14 = *plVar37;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar7) {
            *plVar37 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      _free(auStack_328[0]);
      plVar8 = plStack_d8;
      if (plStack_d8 == alStack_f0) {
        lVar14 = 0x20;
LAB_10958f5b8:
        (**(code **)(*plStack_d8 + lVar14))();
      }
      else if (plStack_d8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_10958f5b8;
      }
      plVar37 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar45 = plStack_f8 + 1;
        do {
          lVar14 = *plVar45;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar7) {
            *plVar45 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar8 = plVar37;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    if ((long)pppppplStack_9c0 < 0) {
      __ZdlPv(ppppppplStack_9d0);
    }
    if ((long)pppppplStack_6e0 < 0) {
      __ZdlPv(ppuStack_6f0);
    }
    if ((long)uStack_9e8 < 0) {
      __ZdlPv(ppppppplStack_9f8);
    }
    if ((long)puStack_a10 < 0) {
      __ZdlPv(ppuStack_a20);
    }
    FUN_10940b66c(&lStack_b30);
    func_0x000109482af4(appuStack_630);
    FUN_109458ce0(appuStack_390);
    FUN_109590a80(&puStack_100);
    __Unwind_Resume();
    func_0x000107c31940();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(plVar8 + 3,*param_3,param_3[1]);
    }
    else {
      ppuVar40 = param_3[1];
      ppuVar49 = *param_3;
      plVar8[5] = (long)param_3[2];
      plVar8[4] = (long)ppuVar40;
      plVar8[3] = (long)ppuVar49;
    }
    return plVar8;
  }
  return plVar8;
LAB_10958f870:
  if (ppppppplVar22 == ppppppplVar31) goto joined_r0x00010958eabc;
  pppppplVar20 = *ppppppplVar22;
  if (dVar51 < (double)plVar45[(long)pppppplVar20 * 2 + 1]) goto LAB_10958f8c4;
  ppppppplVar22 = ppppppplVar22 + 1;
  goto LAB_10958f870;
LAB_10958f8c4:
  ppppppplVar23 = ppppppplVar22 + 1;
  *ppppppplVar22 = *ppppppplVar31;
  *ppppppplVar31 = pppppplVar20;
LAB_10958f8cc:
  if (ppppppplVar23 == ppppppplVar31) goto joined_r0x00010958eabc;
  while( true ) {
    do {
      ppppppplVar22 = ppppppplVar23;
      ppppppplVar23 = ppppppplVar22 + 1;
      pppppplVar20 = *ppppppplVar22;
    } while ((double)plVar45[(long)pppppplVar20 * 2 + 1] <=
             (double)plVar45[(long)*ppppppplVar10 * 2 + 1]);
    do {
      ppppppplVar31 = ppppppplVar31 + -1;
    } while ((double)plVar45[(long)*ppppppplVar10 * 2 + 1] <
             (double)plVar45[(long)*ppppppplVar31 * 2 + 1]);
    if (ppppppplVar31 <= ppppppplVar22) break;
    *ppppppplVar22 = *ppppppplVar31;
    *ppppppplVar31 = pppppplVar20;
  }
  ppppppplVar23 = ppppppplVar41;
  if (ppppppplVar42 < ppppppplVar22) goto joined_r0x00010958eabc;
LAB_10958f92c:
  ppppppplVar41 = ppppppplVar23;
  ppppppplVar10 = ppppppplVar22;
  if (ppppppplVar23 == ppppppplVar42) goto joined_r0x00010958eabc;
  goto LAB_10958f628;
LAB_10958ed24:
  ppppppplVar10 = (long *******)&ppppppplStack_9f0;
  unaff_x23 = (long *******)&ppppppplStack_9f0;
  if (ppppppplStack_9f0 != (long *******)0x0) {
    ppppppplVar42 = ppppppplStack_9f0;
    do {
      while (ppppppplVar10 = ppppppplVar42, ppppppplVar10[4] <= (long ******)plVar37[3]) {
        if ((long ******)plVar37[3] <= ppppppplVar10[4]) goto LAB_10958ede4;
        ppppppplVar42 = (long *******)ppppppplVar10[1];
        if ((long *******)ppppppplVar10[1] == (long *******)0x0) {
          unaff_x23 = ppppppplVar10 + 1;
          goto LAB_10958ed6c;
        }
      }
      ppppppplVar42 = (long *******)*ppppppplVar10;
      unaff_x23 = ppppppplVar10;
    } while ((long *******)*ppppppplVar10 != (long *******)0x0);
  }
LAB_10958ed6c:
  ppppppplVar42 = (long *******)0x48;
  __Znwm();
  lVar14 = plVar37[4];
  pppppplVar20 = (long ******)plVar37[3];
  ppppppplVar42[5] = (long ******)plVar37[4];
  ppppppplVar42[4] = pppppplVar20;
  if (lVar14 != 0) {
    plVar37 = (long *)(lVar14 + 8);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *plVar37 = *plVar37 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppppppplVar42[6] = (long ******)0x0;
  ppppppplVar42[7] = (long ******)0x0;
  ppppppplVar42[8] = (long ******)0x0;
  *ppppppplVar42 = (long ******)0x0;
  ppppppplVar42[1] = (long ******)0x0;
  ppppppplVar42[2] = (long ******)ppppppplVar10;
  *unaff_x23 = (long ******)ppppppplVar42;
  ppppppplVar10 = ppppppplVar42;
  if ((long *******)*ppppppplStack_9f8 != (long *******)0x0) {
    ppppppplVar10 = (long *******)*unaff_x23;
    ppppppplStack_9f8 = (long *******)*ppppppplStack_9f8;
  }
  func_0x000107c27d40(ppppppplStack_9f0,ppppppplVar10);
  uStack_9e8 = uStack_9e8 + 1;
  ppppppplVar10 = ppppppplVar42;
LAB_10958ede4:
  unaff_x27 = ppppppplVar10 + 6;
  FUN_1093ff1f4(unaff_x27,ppuVar46);
  ppuVar46 = ppuVar46 + 5;
  if (ppuVar46 == ppuVar38) goto LAB_10958edfc;
  goto LAB_10958ec64;
}



/* Entry: 10958ffdc; end: 109590047;  */

long FUN_10958ffdc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c31940();
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x18,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x28) = param_3[2];
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return param_1;
}



/* Entry: 109590048; end: 109590057;  */

void FUN_109590048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afd128;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109590058; end: 109590077;  */

void FUN_109590058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afd128;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109590078; end: 109590083;  */

undefined8 * FUN_109590078(long param_1)

{
  func_0x000104c4f944(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110af47c8;
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 109590084; end: 109590097;  */

void FUN_109590084(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    if ((char)plVar1[2] == '\x01') {
      func_0x0001095900e0(lVar2 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109590098; end: 1095902e7;  */

void FUN_109590098(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001095900e0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095902e8; end: 1095904b7;  */

void FUN_1095902e8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 > param_2 || param_2 == uVar10) {
    if (uVar10 <= param_2) {
      return;
    }
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (uVar10 <= param_2) {
      return;
    }
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar10 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar10 = plVar7[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar10 = uVar10 & uVar5;
      }
      else if (param_2 <= uVar10) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar9 = plVar8[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar6 = plVar8;
        if (uVar9 != uVar10) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar7;
            uVar10 = uVar9;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar8;
            plVar6 = plVar7;
          }
        }
        plVar7 = plVar6;
        plVar8 = (long *)*plVar6;
      }
    }
    return;
  }
  func_0x000104c4f740();
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar7 = (long *)*puVar4;
  if (plVar7 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)puVar4[1];
  plVar8 = plVar7;
  if (plVar6 != plVar7) {
    do {
      plVar8 = plVar6 + -3;
      if (*plVar8 != 0) {
        plVar6[-2] = *plVar8;
        __ZdlPv();
      }
      plVar6 = plVar8;
    } while (plVar8 != plVar7);
    plVar8 = (long *)*puVar4;
  }
  puVar4[1] = plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar8);
  return;
}



/* Entry: 1095904b8; end: 1095904cb;  */

void FUN_1095904b8(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        __ZdlPv();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1095904cc; end: 10959053f;  */

void FUN_1095904cc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 109590540; end: 10959057b;  */

void FUN_109590540(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095904cc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10959057c; end: 109590603;  */

void FUN_10959057c(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  double dVar3;
  
  if (param_2 == 1) {
    plVar1 = *(long **)(param_1 + 0x10);
    if (plVar1 == (long *)0x0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = 0.0;
      plVar2 = plVar1;
      do {
        dVar3 = dVar3 + (double)plVar2[3] * (double)plVar2[3];
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    dVar3 = SQRT(dVar3);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x10);
    if (plVar1 == (long *)0x0) {
      return;
    }
    dVar3 = 0.0;
    plVar2 = plVar1;
    do {
      dVar3 = dVar3 + ABS((double)plVar2[3]);
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  if ((plVar1 != (long *)0x0) && (0.0 < dVar3)) {
    do {
      plVar1[3] = (long)((double)plVar1[3] / dVar3);
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}



/* Entry: 109590604; end: 109590617;  */

undefined1  [16] FUN_109590604(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c != 0) {
    func_0x000104c4f740();
    plVar3 = (long *)plVar1[2];
    while (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      __ZdlPv();
    }
    lVar2 = *plVar1;
    *plVar1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  lVar2 = (long)plVar1 << 4;
  __Znwm(lVar2);
  auVar4._8_8_ = plVar1;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 109590618; end: 109590693;  */

undefined1  [16] FUN_109590618(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c != 0) {
    func_0x000104c4f740();
    plVar2 = (long *)param_1[2];
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      __ZdlPv();
    }
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar1 = (long)param_1 << 4;
  __Znwm(lVar1);
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 109590694; end: 1095907a7;  */

long * FUN_109590694(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x0001095902a0(plVar1 + 3);
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



/* Entry: 1095907a8; end: 10959084f;  */

void FUN_1095907a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x000109590110();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109590850; end: 109590a7f;  */

long * FUN_109590850(int *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined1 auStack_88 [8];
  long *plStack_80;
  long alStack_78 [3];
  long *plStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105688e20(&ppuStack_58,0,param_2);
  FUN_10958ae60(&uStack_a0,&ppuStack_58);
  func_0x0001056893c8(&ppuStack_58);
  uStack_50 = uStack_a0;
  plStack_a8 = plStack_98;
  uStack_b0 = uStack_a0;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  ppuStack_58 = &PTR_FUN_110afd488;
  pppuStack_40 = &ppuStack_58;
  FUN_109567d5c(auStack_88,&uStack_b0,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar8 = 0x20;
LAB_1095908ec:
    (**(code **)((long)*pppuStack_40 + lVar8))();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_1095908ec;
  }
  plVar6 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar7 = plStack_a8 + 1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar7 = plStack_98 + 1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar9 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar3 = (int *)puVar9[1];
  for (piVar2 = (int *)*puVar9; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_88);
    }
  }
  if (plStack_60 == alStack_78) {
    lVar8 = 0x20;
LAB_1095909e0:
    (**(code **)(*plStack_60 + lVar8))();
  }
  else if (plStack_60 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_1095909e0;
  }
  plVar6 = plStack_60;
  if (plStack_80 != (long *)0x0) {
    plVar7 = plStack_80 + 1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x0001056893c8(&ppuStack_58);
  __Unwind_Resume();
  plVar7 = (long *)plVar6[5];
  if (plVar7 == plVar6 + 2) {
    lVar8 = 0x20;
  }
  else {
    if (plVar7 == (long *)0x0) goto SUB_10951ea70;
    lVar8 = 0x28;
  }
  (**(code **)(*plVar7 + lVar8))();
SUB_10951ea70:
  plVar7 = (long *)plVar6[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return plVar6;
}



/* Entry: 109590a80; end: 109590acb;  */

long FUN_109590a80(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109590acc; end: 109590adf;  */

void FUN_109590acc(void)

{
  FUN_109262df8(&DAT_10f62a4d8);
  return;
}



/* Entry: 109590ae0; end: 109590ae7;  */

void FUN_109590ae0(void)

{
  return;
}



/* Entry: 109590ae8; end: 109590b0b;  */

void FUN_109590ae8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110afd178;
  return;
}



/* Entry: 109590b0c; end: 109590b43;  */

void FUN_109590b0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110afd178;
  return;
}


