/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10834f870; end: 10834f89b;  */

long * FUN_10834f870(long *param_1)

{
  FUN_10834f89c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10834f89c; end: 10834f8bf;  */

void FUN_10834f89c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10834f8c0; end: 10834f8ef;  */

long FUN_10834f8c0(long param_1)

{
  FUN_10834f8f0();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x000108350028();
  }
  return param_1;
}



/* Entry: 10834f8f0; end: 10834f927;  */

void FUN_10834f8f0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      __ZNSt3__16threadD1Ev();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10834f928; end: 10834f9eb;  */

undefined8 ** FUN_10834f928(undefined8 **param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 extraout_x8;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 **ppuVar25;
  undefined8 *puVar26;
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010834ff3c();
  uStack_38 = extraout_x8;
  for (iVar9 = 0; iVar13 = *(int *)(param_1 + 2), iVar9 < iVar13; iVar9 = iVar9 + 1) {
    uStack_40 = 0;
    param_2 = auStack_58;
    FUN_10834f304(param_1);
    func_0x00010834ff6c();
  }
  lVar17 = 0;
  for (lVar18 = 0; uVar5 = lVar18 == iVar13, lVar18 < iVar13; lVar18 = lVar18 + 1) {
    __ZNSt3__16thread4joinEv((long)param_1[1] + lVar17);
    iVar13 = *(int *)(param_1 + 2);
    lVar17 = lVar17 + 8;
  }
  FUN_108410074(param_1 + 0xb);
  FUN_108410074(param_1 + 9);
  FUN_10834f714(param_1 + 3);
  ppuVar6 = param_1 + 1;
  FUN_10834f8c0();
  func_0x00010834ff18(uStack_38);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar9 = (int)param_2;
  while (iVar9 != 0) {
    func_0x000104bd46a0();
    iVar9 = (int)param_2;
  }
  __Unwind_Resume();
  if (ppuVar6[4] < (undefined8 *)0x80) {
    plVar23 = ppuVar6[1];
    plVar2 = ppuVar6[2];
    plVar20 = *ppuVar6;
    uVar24 = (long)plVar2 - (long)plVar23;
    ppuVar16 = ppuVar6 + 3;
    plVar19 = *ppuVar16;
    if (uVar24 < (ulong)((long)plVar19 - (long)plVar20)) {
      ppuVar7 = (undefined8 **)0x1000;
      __Znwm();
      if (plVar19 == plVar2) {
        if (plVar23 == plVar20) {
          lVar18 = (long)plVar19 - (long)plVar23 >> 2;
          if (plVar2 == plVar23) {
            lVar18 = 1;
          }
          ppuStack_d0 = ppuVar16;
          FUN_10834fe28();
          func_0x00010834fff8(lVar18 * 2 + 6);
          FUN_10834fe00(&puStack_f0,ppuVar6[1],ppuVar6[2]);
          puVar26 = ppuVar6[1];
          puVar15 = *ppuVar6;
          puVar22 = ppuVar6[3];
          puVar12 = ppuVar6[2];
          ppuVar6[1] = puStack_e8;
          *ppuVar6 = puStack_f0;
          ppuVar6[3] = puStack_d8;
          ppuVar6[2] = puStack_e0;
          puStack_f0 = puVar15;
          puStack_e8 = puVar26;
          puStack_e0 = puVar12;
          puStack_d8 = puVar22;
          func_0x000108350050();
          plVar23 = ppuVar6[1];
        }
        plVar23[-1] = (long)ppuVar7;
        ppuVar6[1] = plVar23;
        FUN_10834fd10(ppuVar6,ppuVar7);
      }
      else {
        *plVar2 = (long)ppuVar7;
        ppuVar6[2] = plVar2 + 1;
        ppuVar6 = ppuVar7;
      }
    }
    else {
      puVar15 = (undefined8 *)((long)plVar19 - (long)plVar20 >> 2);
      if (plVar19 == plVar20) {
        puVar15 = (undefined8 *)0x1;
      }
      ppuStack_f8 = ppuVar16;
      FUN_10834fe28();
      puVar26 = (undefined8 *)((long)puVar15 + uVar24);
      puVar12 = puVar15 + (long)param_2;
      uVar10 = 0x1000;
      puVar11 = param_2;
      puStack_118 = puVar15;
      puStack_110 = puVar26;
      puStack_108 = puVar26;
      puStack_100 = puVar12;
      __Znwm();
      ppuStack_128 = ppuVar6 + 5;
      uStack_120 = 0x80;
      puVar22 = puVar26;
      if (uVar24 == (long)param_2 * 8) {
        if (plVar2 == plVar23) {
          puVar22 = (undefined8 *)0x1;
          uStack_130 = uVar10;
          ppuStack_d0 = ppuVar16;
          FUN_10834fe28();
          puStack_d8 = puVar22 + (long)puVar11;
          puStack_f0 = puVar22;
          puStack_e8 = puVar22;
          puStack_e0 = puVar22;
          FUN_10834fe00(&puStack_f0,puVar26,puVar26);
          puVar1 = puStack_d8;
          puVar22 = puStack_e0;
          puVar14 = puStack_e8;
          puVar21 = puStack_f0;
          puStack_118 = puStack_f0;
          puStack_110 = puStack_e8;
          puStack_108 = puStack_e0;
          puStack_100 = puStack_d8;
          puStack_f0 = puVar15;
          puStack_e8 = puVar26;
          puStack_e0 = puVar26;
          puStack_d8 = puVar12;
          func_0x000108350050();
          puVar15 = puVar21;
          puVar26 = puVar14;
          puVar12 = puVar1;
        }
        else {
          puVar26 = puVar26 + (((long)puVar26 - (long)puVar15 >> 3) + 1) / -2;
          puVar22 = puVar26;
          puStack_110 = puVar26;
        }
      }
      puVar21 = puVar22 + 1;
      *puVar22 = uVar10;
      uStack_130 = 0;
      puVar22 = ppuVar6[2];
      puStack_108 = puVar21;
      while (puVar14 = ppuVar6[1], puVar22 != puVar14) {
        puVar14 = puVar26;
        if (puVar26 == puVar15) {
          if (puVar21 < puVar12) {
            lVar18 = (long)puVar21 - (long)puVar15;
            puVar1 = puVar21 + (((long)puVar12 - (long)puVar21 >> 3) + 1) / 2;
            puVar14 = (undefined8 *)((long)puVar1 - ((long)puVar21 - (long)puVar15));
            puVar21 = puVar1;
            if (lVar18 != 0) {
              _memmove(puVar14,puVar26,lVar18);
            }
          }
          else {
            lVar18 = (long)puVar12 - (long)puVar15 >> 2;
            if ((long)puVar12 - (long)puVar15 == 0) {
              lVar18 = 1;
            }
            ppuStack_d0 = ppuVar16;
            FUN_10834fe28(lVar18);
            func_0x00010834fff8(lVar18 * 2 + 6);
            FUN_10834fe00(&puStack_f0,puVar26,puVar21);
            puVar4 = puStack_d8;
            puVar3 = puStack_e0;
            puVar14 = puStack_e8;
            puVar1 = puStack_f0;
            puStack_f0 = puVar15;
            puStack_e8 = puVar26;
            puStack_e0 = puVar21;
            puStack_d8 = puVar12;
            func_0x000108350050();
            puVar15 = puVar1;
            puVar21 = puVar3;
            puVar12 = puVar4;
          }
        }
        puVar22 = puVar22 + -1;
        puVar26 = puVar14 + -1;
        *puVar26 = *puVar22;
      }
      puStack_118 = *ppuVar6;
      *ppuVar6 = puVar15;
      ppuVar6[1] = puVar26;
      puStack_100 = ppuVar6[3];
      puStack_108 = ppuVar6[2];
      ppuVar6[2] = puVar21;
      ppuVar6[3] = puVar12;
      puStack_110 = puVar14;
      func_0x00010834fe5c(&uStack_130);
      ppuVar6 = &puStack_118;
      func_0x00010834fe80(ppuVar6);
    }
    return ppuVar6;
  }
  ppuVar6[4] = ppuVar6[4] + -0x10;
  uVar10 = *ppuVar6[1];
  ppuVar6[1] = ppuVar6[1] + 1;
  pppuVar8 = &ppuStack_d0;
  puVar15 = ppuVar6[2];
  ppuVar16 = ppuVar6;
  if (puVar15 == ppuVar6[3]) {
    puVar26 = *ppuVar6;
    puVar12 = ppuVar6[1];
    if (puVar12 < puVar26 || (long)puVar12 - (long)puVar26 == 0) {
      ppuVar16 = (undefined8 **)((long)puVar15 - (long)puVar26 >> 2);
      if ((long)puVar15 - (long)puVar26 == 0) {
        ppuVar16 = (undefined8 **)0x1;
      }
      ppuVar7 = ppuVar16;
      FUN_10834fe28();
      ppuStack_d0 = ppuVar7;
      ppuStack_c8 = ppuVar7 + ((ulong)ppuVar16 >> 2);
      FUN_10834fe00(&ppuStack_d0,ppuVar6[1],ppuVar6[2]);
      puVar15 = ppuVar6[1];
      ppuVar25 = (undefined8 **)*ppuVar6;
      ppuVar6[1] = ppuStack_c8;
      *ppuVar6 = ppuStack_d0;
      ppuVar6[3] = ppuVar7 + (long)puVar12;
      ppuVar6[2] = ppuVar7 + ((ulong)ppuVar16 >> 2);
      ppuStack_d0 = ppuVar25;
      ppuStack_c8 = (undefined8 **)puVar15;
      func_0x00010834fe80(&ppuStack_d0);
      puVar15 = ppuVar6[2];
      ppuVar16 = pppuVar8;
    }
    else {
      lVar18 = (((long)puVar12 - (long)puVar26 >> 3) + 1) / -2;
      ppuVar7 = (undefined8 **)(puVar12 + lVar18);
      lVar17 = (long)puVar15 - (long)puVar12;
      if (lVar17 != 0) {
        ppuVar16 = ppuVar7;
        _memmove(ppuVar7,puVar12,lVar17);
        puVar12 = ppuVar6[1];
      }
      puVar15 = (undefined8 *)((long)ppuVar7 + lVar17);
      ppuVar6[1] = puVar12 + lVar18;
    }
  }
  *puVar15 = uVar10;
  ppuVar6[2] = puVar15 + 1;
  return ppuVar16;
}



/* Entry: 10834f9ec; end: 10834fd0f;  */

void FUN_10834f9ec(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (param_1[4] < 0x80) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    puVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*puVar13;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0x1000;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          puStack_70 = puVar13;
          FUN_10834fe28();
          func_0x00010834fff8(lVar11 * 2 + 6);
          FUN_10834fe00(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (ulong)puStack_88;
          *param_1 = (ulong)puStack_90;
          param_1[3] = (ulong)puStack_78;
          param_1[2] = (ulong)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x000108350050();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        param_1[1] = (ulong)puVar12;
        FUN_10834fd10(param_1,uVar7);
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = (ulong)(puVar16 + 1);
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      puStack_98 = puVar13;
      FUN_10834fe28();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0x1000;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a8 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puStack_c8 = param_1 + 5;
      uStack_c0 = 0x80;
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          uStack_d0 = uVar7;
          puStack_70 = puVar13;
          FUN_10834fe28();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_10834fe00(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x000108350050();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      uStack_d0 = 0;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            puStack_70 = puVar13;
            FUN_10834fe28(lVar11);
            func_0x00010834fff8(lVar11 * 2 + 6);
            FUN_10834fe00(&puStack_90,puVar14,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x000108350050();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (ulong)puVar9;
      param_1[1] = (ulong)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (ulong)puVar12;
      param_1[3] = (ulong)puVar15;
      puStack_b0 = puVar10;
      func_0x00010834fe5c(&uStack_d0);
      func_0x00010834fe80(&puStack_b8);
    }
    return;
  }
  param_1[4] = param_1[4] - 0x80;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    uVar17 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      puVar13 = (ulong *)((long)((long)puVar12 - uVar17) >> 2);
      if ((long)puVar12 - uVar17 == 0) {
        puVar13 = (ulong *)0x1;
      }
      puVar6 = puVar13;
      FUN_10834fe28();
      puStack_70 = puVar6;
      puStack_68 = puVar6 + ((ulong)puVar13 >> 2);
      FUN_10834fe00(&puStack_70,param_1[1],param_1[2]);
      uVar17 = param_1[1];
      puVar18 = (ulong *)*param_1;
      param_1[1] = (ulong)puStack_68;
      *param_1 = (ulong)puStack_70;
      param_1[3] = (ulong)(puVar6 + uVar8);
      param_1[2] = (ulong)(puVar6 + ((ulong)puVar13 >> 2));
      puStack_70 = puVar18;
      puStack_68 = (ulong *)uVar17;
      func_0x00010834fe80(&puStack_70);
      puVar12 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = param_1[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      param_1[1] = uVar8 + lVar2 * 8;
    }
  }
  *puVar12 = uVar7;
  param_1[2] = (ulong)(puVar12 + 1);
  return;
}



/* Entry: 10834fd10; end: 10834fdff;  */

void FUN_10834fd10(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10834fe28();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10834fe00(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010834fe80(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10834fe00; end: 10834fe27;  */

void FUN_10834fe00(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10834fe28; end: 10834fee3;  */

void FUN_10834fe28(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010834ffe8();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10834fee4; end: 10834fefb;  */

void FUN_10834fee4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10834f928(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10834fefc; end: 10834ff17;  */

void FUN_10834fefc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10834f928(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10834ff18; end: 108350063;  */

void FUN_10834ff18(void)

{
  return;
}



/* Entry: 108350064; end: 10835012f;  */

void FUN_108350064(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined **ppuStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_3 != (undefined8 *)0x0) {
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_38 = param_3[3];
    uStack_40 = param_3[2];
    uStack_28 = param_3[5];
    uStack_30 = param_3[4];
  }
  uStack_c0 = uStack_48;
  uStack_c8 = uStack_50;
  uStack_b0 = uStack_38;
  uStack_b8 = uStack_40;
  uStack_a0 = uStack_28;
  uStack_a8 = uStack_30;
  ppuStack_d0 = &PTR_FUN_110a408d8;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  FUN_1083aa050(&ppuStack_d0,param_2);
  FUN_1083464d4(param_1,uStack_78);
  _memcpy(*(undefined8 *)(*param_1 + 0x18),uStack_88,uStack_78);
  FUN_1083a99f0(&ppuStack_d0);
  return;
}



/* Entry: 108350130; end: 1083501b3;  */

void FUN_108350130(float param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long extraout_x8;
  undefined8 uStack_28;
  
  func_0x000108350c90();
  *param_4 = extraout_x8;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_4 + 1) = param_1;
  *(undefined4 *)((long)param_4 + 0xc) = param_2;
  *(undefined4 *)(param_4 + 2) = param_3;
  *(undefined2 *)((long)param_4 + 0x14) = 0x120;
  *(undefined1 *)((long)param_4 + 0x16) = 2;
  if (extraout_x8 == 0) {
    FUN_1083a85a4(&uStack_28);
    uStack_28 = 0;
    FUN_108162698();
    func_0x000108350c7c();
  }
  return;
}



/* Entry: 1083501b4; end: 1083501db;  */

void FUN_1083501b4(void)

{
  func_0x000108350c90();
  FUN_108162698();
  return;
}



/* Entry: 1083501dc; end: 10835021f;  */

void FUN_1083501dc(undefined8 param_1)

{
  func_0x000108350c90();
  FUN_108350130(param_1,0x3f800000,0);
  func_0x000108350c7c();
  return;
}



/* Entry: 108350220; end: 10835025f;  */

undefined8 FUN_108350220(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_1083501dc(0x41400000,param_1,&uStack_28);
  func_0x000108350c7c();
  return param_1;
}



/* Entry: 108350260; end: 1083502db;  */

bool FUN_108350260(long *param_1,long *param_2)

{
  if ((((*param_1 == *param_2) && (*(float *)(param_1 + 1) == *(float *)(param_2 + 1))) &&
      (*(float *)((long)param_1 + 0xc) == *(float *)((long)param_2 + 0xc))) &&
     (((*(float *)(param_1 + 2) == *(float *)(param_2 + 2) &&
       (*(char *)((long)param_1 + 0x14) == *(char *)((long)param_2 + 0x14))) &&
      (*(char *)((long)param_1 + 0x15) == *(char *)((long)param_2 + 0x15))))) {
    return *(char *)((long)param_1 + 0x16) == *(char *)((long)param_2 + 0x16);
  }
  return false;
}



/* Entry: 1083502dc; end: 108350333;  */

void FUN_1083502dc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1083501b4();
  if (*param_1 == 0) {
    FUN_1083a85a4(&uStack_28);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_108162698(param_1,uVar1);
    func_0x000108350c7c();
  }
  return;
}



/* Entry: 108350334; end: 1083503cf;  */

float FUN_108350334(long param_1,long param_2)

{
  float fVar1;
  undefined8 uStack_28;
  
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf8 | 4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (*(char *)(param_1 + 0x15) == '\x02') {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffff3f;
    uStack_28 = 0;
    FUN_1082b15a4(param_2,0);
    func_0x000108115b70(&uStack_28);
  }
  fVar1 = *(float *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0x42800000;
  return fVar1 * 0.015625;
}



/* Entry: 1083503d0; end: 1083503df;  */

undefined2 FUN_1083503d0(undefined8 *param_1,undefined4 param_2)

{
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  uStack_16 = 0;
  uStack_14 = param_2;
  (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1,&uStack_14,1,&uStack_16);
  return uStack_16;
}



/* Entry: 1083503e0; end: 10835060b;  */

float FUN_1083503e0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,long param_6,ulong param_7,int param_8,undefined8 *param_9,
                   undefined8 param_10)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  long *plVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  float fVar14;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  long alStack_238 [24];
  undefined1 auStack_178 [160];
  float fStack_d8;
  long alStack_d0 [10];
  undefined4 uStack_80;
  long lStack_78;
  uint uStack_70;
  undefined8 uStack_68;
  
  uVar13 = (undefined2)((ulong)param_4 >> 0x10);
  uVar12 = (undefined2)param_4;
  uVar11 = (undefined2)((ulong)param_3 >> 0x10);
  uVar10 = (undefined2)param_3;
  uVar3 = param_5;
  uVar6 = param_7;
  func_0x000108350c64();
  uStack_70 = (uint)uVar3;
  alStack_d0[0] = 0;
  uStack_80 = 0;
  uStack_68 = extraout_x8;
  if ((uVar6 == 0) || (in_ZR = param_8 == 3, (bool)in_ZR)) {
    uVar1 = (uint)(param_7 >> 1);
  }
  else {
    func_0x000108350ca0();
    FUN_1081fdea0();
    uStack_70 = uStack_70 & ((int)uStack_70 >> 0x1f ^ 0xffffffffU);
    FUN_108350bbc(alStack_d0);
    func_0x000108350ca0();
    func_0x0001083503d8();
    uVar1 = uStack_70;
    param_6 = alStack_d0[0];
  }
  lStack_78 = param_6;
  uStack_70 = uVar1;
  if (uVar1 == 0) {
    fVar14 = 0.0;
    if (param_9 != (undefined8 *)0x0) {
      *param_9 = 0;
      param_9[1] = 0;
    }
  }
  else {
    FUN_1083a27f8(auStack_178,param_5,param_10);
    FUN_1083a2c80(alStack_238,auStack_178);
    plVar4 = alStack_238;
    FUN_1083a2cd4(plVar4,param_6,(long)(int)uVar1);
    if (param_9 == (undefined8 *)0x0) {
      fVar14 = 0.0;
      for (param_6 = param_6 << 3; param_6 != 0; param_6 = param_6 + -8) {
        fVar14 = fVar14 + *(float *)(*plVar4 + 0x20);
        plVar4 = plVar4 + 1;
      }
    }
    else {
      if (param_6 == 0) {
LAB_1083505c8:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1083505cc);
        (*pcVar2)();
      }
      FUN_10835060c(*plVar4);
      *(int *)param_9 = (int)param_1;
      *(int *)((long)param_9 + 4) = (int)param_2;
      *(uint *)(param_9 + 1) = CONCAT22(uVar11,uVar10);
      *(uint *)((long)param_9 + 0xc) = CONCAT22(uVar13,uVar12);
      fVar14 = *(float *)(*plVar4 + 0x20);
      lVar7 = 1;
      while( true ) {
        fVar9 = (float)param_2;
        fVar8 = (float)param_1;
        if ((int)uVar1 <= lVar7) break;
        if (param_6 == lVar7) goto LAB_1083505c8;
        FUN_10835060c(plVar4[lVar7]);
        fStack_248 = fVar14 + fVar8;
        fStack_244 = fVar9 + 0.0;
        fStack_240 = fVar14 + (float)CONCAT22(uVar11,uVar10);
        fStack_23c = (float)CONCAT22(uVar13,uVar12) + 0.0;
        param_2 = (ulong)(uint)fStack_23c;
        func_0x00010838ed50(param_9,&fStack_248);
        param_1 = (ulong)(uint)*(float *)(plVar4[lVar7] + 0x20);
        fVar14 = fVar14 + *(float *)(plVar4[lVar7] + 0x20);
        lVar7 = lVar7 + 1;
      }
    }
    in_ZR = fStack_d8 == 1.0;
    if ((!(bool)in_ZR) && (fVar14 = fVar14 * fStack_d8, param_9 != (undefined8 *)0x0)) {
      param_9[1] = CONCAT44((float)((ulong)param_9[1] >> 0x20) * fStack_d8,
                            (float)param_9[1] * fStack_d8);
      *param_9 = CONCAT44((float)((ulong)*param_9 >> 0x20) * fStack_d8,(float)*param_9 * fStack_d8);
    }
    FUN_1083a2cb4(alStack_238);
    func_0x0001083a261c(auStack_178);
  }
  FUN_108350c24(alStack_d0);
  func_0x000108350c50(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1083a2cb4(alStack_238);
    func_0x0001083a261c(auStack_178);
    puVar5 = (ushort *)alStack_d0;
    FUN_108350c24();
    func_0x000108350c74();
    NEON_ucvtf((uint)*puVar5);
    NEON_ucvtf((uint)puVar5[1]);
    return (float)(int)(short)puVar5[3];
  }
  return fVar14;
}



/* Entry: 10835060c; end: 108350637;  */

void FUN_10835060c(ushort *param_1)

{
  NEON_ucvtf((uint)*param_1);
  NEON_ucvtf((uint)param_1[1]);
  return;
}



/* Entry: 108350638; end: 10835077b;  */

ulong FUN_108350638(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 *param_6,int param_7,float *param_8,
                   undefined8 *param_9)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long lStack_538;
  undefined8 auStack_530 [8];
  undefined1 auStack_4f0 [160];
  float fStack_450;
  undefined8 uStack_448;
  undefined8 auStack_3e8 [5];
  long lStack_3c0;
  float fStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  byte bStack_3ac;
  char cStack_3ab;
  undefined1 uStack_3aa;
  long alStack_3a8 [24];
  undefined1 auStack_2e8 [160];
  undefined8 uStack_248;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [40];
  long alStack_1c0 [24];
  long alStack_100 [20];
  float fStack_60;
  undefined8 uStack_58;
  
  pfVar12 = param_8;
  puVar13 = param_9;
  func_0x000108350c64();
  uStack_58 = extraout_x8;
  FUN_1083a27f8(alStack_100);
  FUN_1083a2c80(alStack_1c0,alStack_100);
  lVar10 = (long)param_7;
  plVar7 = alStack_1c0;
  FUN_1083a2cd4(plVar7,param_6,lVar10);
  iVar9 = (int)lVar10;
  lVar10 = (long)param_6 << 3;
  if (param_9 != (undefined8 *)0x0) {
    param_1 = (ulong)(uint)fStack_60;
    uVar17 = param_1;
    func_0x00010815f6c0(auStack_1e8);
    plVar5 = plVar7;
    for (lVar15 = lVar10; lVar15 != 0; lVar15 = lVar15 + -8) {
      FUN_10835060c(*plVar5);
      puVar1 = param_9 + 2;
      uStack_1f8 = (undefined4)param_1;
      uStack_1f4 = (undefined4)uVar17;
      uStack_1f0 = (undefined4)param_3;
      uStack_1ec = (undefined4)param_4;
      puVar11 = &uStack_1f8;
      FUN_108364ec0(auStack_1e8,param_9,puVar11);
      iVar9 = (int)puVar11;
      plVar5 = plVar5 + 1;
      param_6 = param_9;
      param_9 = puVar1;
    }
  }
  if (param_8 != (float *)0x0) {
    param_1 = (ulong)(uint)fStack_60;
    for (; lVar10 != 0; lVar10 = lVar10 + -8) {
      *param_8 = fStack_60 * *(float *)(*plVar7 + 0x20);
      plVar7 = plVar7 + 1;
      param_8 = param_8 + 1;
    }
  }
  FUN_1083a2cb4(alStack_1c0);
  func_0x0001083a261c();
  func_0x000108350c50(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1083a2cb4(alStack_1c0);
  plVar7 = alStack_100;
  func_0x0001083a261c();
  func_0x000108350c74();
  func_0x000108350c64();
  lStack_3c0 = *plVar7;
  if (lStack_3c0 != 0) {
    piVar2 = (int *)(lStack_3c0 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar14 = *(undefined8 *)((long)plVar7 + 0xf);
  uStack_3b0 = (undefined4)((ulong)uVar14 >> 8);
  bStack_3ac = (byte)((ulong)uVar14 >> 0x28);
  cStack_3ab = (char)((ulong)uVar14 >> 0x30);
  fStack_3b8 = (float)plVar7[1];
  fVar16 = fStack_3b8;
  uStack_3b4 = (undefined4)((ulong)plVar7[1] >> 0x20);
  bStack_3ac = bStack_3ac & 0xf8 | 4;
  uStack_3aa = 0;
  uVar6 = cStack_3ab == '\x02';
  if ((bool)uVar6) {
    cStack_3ab = '\x01';
  }
  fStack_3b8 = 64.0;
  uVar17 = (ulong)(uint)(fVar16 * 0.015625);
  uStack_248 = extraout_x8_00;
  func_0x00010815f6c0(auStack_3e8,uVar17,uVar17);
  FUN_1083a2a5c(auStack_2e8,&lStack_3c0,0);
  FUN_1083a2d64(alStack_3a8,auStack_2e8);
  plVar7 = alStack_3a8;
  FUN_1083a2db8(plVar7,param_6,(long)iVar9);
  for (lVar10 = (long)param_6 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
    lVar15 = *(long *)(*plVar7 + 0x10) + 8;
    uVar6 = *(char *)(*(long *)(*plVar7 + 0x10) + 0x18) == '\0';
    if ((bool)uVar6) {
      lVar15 = 0;
    }
    param_6 = auStack_3e8;
    (*(code *)pfVar12)(lVar15,param_6,puVar13);
    plVar7 = plVar7 + 1;
  }
  FUN_1083a2d98(alStack_3a8);
  func_0x0001083a261c(auStack_2e8);
  func_0x0001081298a0();
  func_0x000108350c50(uStack_248);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    FUN_1083a2d98(alStack_3a8);
    func_0x0001083a261c(auStack_2e8);
    func_0x0001081298a0(&lStack_3c0);
    func_0x000108350c74();
    func_0x000108350c64();
    uStack_448 = extraout_x8_01;
    FUN_1083a27f8(auStack_4f0);
    puVar13 = auStack_530;
    if (param_6 != (undefined8 *)0x0) {
      puVar13 = param_6;
    }
    FUN_1083a2c54(&lStack_538,auStack_4f0);
    uVar18 = *(undefined8 *)(lStack_538 + 0x24);
    uVar14 = *(undefined8 *)(lStack_538 + 0x1c);
    uVar19 = *(undefined8 *)(lStack_538 + 0x2c);
    uVar21 = *(undefined8 *)(lStack_538 + 0x44);
    uVar20 = *(undefined8 *)(lStack_538 + 0x3c);
    uVar23 = *(undefined8 *)(lStack_538 + 0x14);
    uVar22 = *(undefined8 *)(lStack_538 + 0xc);
    puVar13[5] = *(undefined8 *)(lStack_538 + 0x34);
    puVar13[4] = uVar19;
    puVar13[7] = uVar21;
    puVar13[6] = uVar20;
    puVar13[1] = uVar23;
    *puVar13 = uVar22;
    puVar13[3] = uVar18;
    puVar13[2] = uVar14;
    fVar16 = fStack_450;
    if (fStack_450 != 1.0) {
      FUN_1083509f0(puVar13);
    }
    uVar6 = param_6 == (undefined8 *)0x0;
    puVar13 = auStack_530;
    if (!(bool)uVar6) {
      puVar13 = param_6;
    }
    fVar25 = *(float *)(puVar13 + 1);
    fVar24 = *(float *)((long)puVar13 + 0xc);
    fVar26 = *(float *)((long)puVar13 + 0x14);
    FUN_1083145d8(&lStack_538);
    func_0x0001083a261c(auStack_4f0);
    func_0x000108350c50(uStack_448);
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      puVar8 = auStack_4f0;
      func_0x0001083a261c();
      func_0x000108350c74();
      *(ulong *)(puVar8 + 0xc) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0xc) >> 0x20) * fVar16,
                    (float)*(undefined8 *)(puVar8 + 0xc) * fVar16);
      *(ulong *)(puVar8 + 4) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 4) >> 0x20) * fVar16,
                    (float)*(undefined8 *)(puVar8 + 4) * fVar16);
      *(ulong *)(puVar8 + 0x1c) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x1c) >> 0x20) * fVar16,
                    (float)*(undefined8 *)(puVar8 + 0x1c) * fVar16);
      *(ulong *)(puVar8 + 0x14) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x14) >> 0x20) * fVar16,
                    (float)*(undefined8 *)(puVar8 + 0x14) * fVar16);
      *(ulong *)(puVar8 + 0x2c) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x2c) >> 0x20) * fVar16,
                    (float)*(undefined8 *)(puVar8 + 0x2c) * fVar16);
      *(ulong *)(puVar8 + 0x24) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x24) >> 0x20) * fVar16,
                    (float)*(undefined8 *)(puVar8 + 0x24) * fVar16);
      *(ulong *)(puVar8 + 0x34) =
           CONCAT44(fVar16 * (float)((ulong)*(undefined8 *)(puVar8 + 0x34) >> 0x20),
                    fVar16 * (float)*(undefined8 *)(puVar8 + 0x34));
      fVar24 = *(float *)(puVar8 + 0x3c);
      *(float *)(puVar8 + 0x3c) = fVar16 * fVar24;
      return (ulong)(uint)(fVar16 * fVar24);
    }
    return (ulong)(uint)((fVar24 - fVar25) + fVar26);
  }
  return uVar17;
}



/* Entry: 10835077c; end: 1083508ff;  */

ulong FUN_10835077c(long *param_1,undefined8 *param_2,int param_3,code *param_4,undefined8 param_5)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long lStack_338;
  undefined8 auStack_330 [8];
  undefined1 auStack_2f0 [160];
  float fStack_250;
  undefined8 uStack_248;
  undefined8 auStack_1e8 [5];
  long lStack_1c0;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  byte bStack_1ac;
  char cStack_1ab;
  undefined1 uStack_1aa;
  long alStack_1a8 [24];
  undefined1 auStack_e8 [160];
  undefined8 uStack_48;
  
  func_0x000108350c64();
  lStack_1c0 = *param_1;
  if (lStack_1c0 != 0) {
    piVar1 = (int *)(lStack_1c0 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = *(undefined8 *)((long)param_1 + 0xf);
  uStack_1b0 = (undefined4)((ulong)uVar9 >> 8);
  bStack_1ac = (byte)((ulong)uVar9 >> 0x28);
  cStack_1ab = (char)((ulong)uVar9 >> 0x30);
  fStack_1b8 = (float)param_1[1];
  fVar11 = fStack_1b8;
  uStack_1b4 = (undefined4)((ulong)param_1[1] >> 0x20);
  bStack_1ac = bStack_1ac & 0xf8 | 4;
  uStack_1aa = 0;
  uVar6 = cStack_1ab == '\x02';
  if ((bool)uVar6) {
    cStack_1ab = '\x01';
  }
  fStack_1b8 = 64.0;
  uVar12 = (ulong)(uint)(fVar11 * 0.015625);
  uStack_48 = extraout_x8;
  func_0x00010815f6c0(auStack_1e8,uVar12,uVar12);
  FUN_1083a2a5c(auStack_e8,&lStack_1c0,0);
  FUN_1083a2d64(alStack_1a8,auStack_e8);
  plVar7 = alStack_1a8;
  FUN_1083a2db8(plVar7,param_2,(long)param_3);
  for (lVar10 = (long)param_2 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
    lVar2 = *(long *)(*plVar7 + 0x10) + 8;
    uVar6 = *(char *)(*(long *)(*plVar7 + 0x10) + 0x18) == '\0';
    if ((bool)uVar6) {
      lVar2 = 0;
    }
    param_2 = auStack_1e8;
    (*param_4)(lVar2,param_2,param_5);
    plVar7 = plVar7 + 1;
  }
  FUN_1083a2d98(alStack_1a8);
  func_0x0001083a261c(auStack_e8);
  func_0x0001081298a0();
  func_0x000108350c50(uStack_48);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    FUN_1083a2d98(alStack_1a8);
    func_0x0001083a261c(auStack_e8);
    func_0x0001081298a0(&lStack_1c0);
    func_0x000108350c74();
    func_0x000108350c64();
    uStack_248 = extraout_x8_00;
    FUN_1083a27f8(auStack_2f0);
    puVar3 = auStack_330;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    FUN_1083a2c54(&lStack_338,auStack_2f0);
    uVar13 = *(undefined8 *)(lStack_338 + 0x24);
    uVar9 = *(undefined8 *)(lStack_338 + 0x1c);
    uVar14 = *(undefined8 *)(lStack_338 + 0x2c);
    uVar16 = *(undefined8 *)(lStack_338 + 0x44);
    uVar15 = *(undefined8 *)(lStack_338 + 0x3c);
    uVar18 = *(undefined8 *)(lStack_338 + 0x14);
    uVar17 = *(undefined8 *)(lStack_338 + 0xc);
    puVar3[5] = *(undefined8 *)(lStack_338 + 0x34);
    puVar3[4] = uVar14;
    puVar3[7] = uVar16;
    puVar3[6] = uVar15;
    puVar3[1] = uVar18;
    *puVar3 = uVar17;
    puVar3[3] = uVar13;
    puVar3[2] = uVar9;
    fVar11 = fStack_250;
    if (fStack_250 != 1.0) {
      FUN_1083509f0(puVar3);
    }
    uVar6 = param_2 == (undefined8 *)0x0;
    puVar3 = auStack_330;
    if (!(bool)uVar6) {
      puVar3 = param_2;
    }
    fVar20 = *(float *)(puVar3 + 1);
    fVar19 = *(float *)((long)puVar3 + 0xc);
    fVar21 = *(float *)((long)puVar3 + 0x14);
    FUN_1083145d8(&lStack_338);
    func_0x0001083a261c(auStack_2f0);
    func_0x000108350c50(uStack_248);
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      puVar8 = auStack_2f0;
      func_0x0001083a261c();
      func_0x000108350c74();
      *(ulong *)(puVar8 + 0xc) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0xc) >> 0x20) * fVar11,
                    (float)*(undefined8 *)(puVar8 + 0xc) * fVar11);
      *(ulong *)(puVar8 + 4) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 4) >> 0x20) * fVar11,
                    (float)*(undefined8 *)(puVar8 + 4) * fVar11);
      *(ulong *)(puVar8 + 0x1c) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x1c) >> 0x20) * fVar11,
                    (float)*(undefined8 *)(puVar8 + 0x1c) * fVar11);
      *(ulong *)(puVar8 + 0x14) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x14) >> 0x20) * fVar11,
                    (float)*(undefined8 *)(puVar8 + 0x14) * fVar11);
      *(ulong *)(puVar8 + 0x2c) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x2c) >> 0x20) * fVar11,
                    (float)*(undefined8 *)(puVar8 + 0x2c) * fVar11);
      *(ulong *)(puVar8 + 0x24) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar8 + 0x24) >> 0x20) * fVar11,
                    (float)*(undefined8 *)(puVar8 + 0x24) * fVar11);
      *(ulong *)(puVar8 + 0x34) =
           CONCAT44(fVar11 * (float)((ulong)*(undefined8 *)(puVar8 + 0x34) >> 0x20),
                    fVar11 * (float)*(undefined8 *)(puVar8 + 0x34));
      fVar19 = *(float *)(puVar8 + 0x3c);
      *(float *)(puVar8 + 0x3c) = fVar11 * fVar19;
      return (ulong)(uint)(fVar11 * fVar19);
    }
    return (ulong)(uint)((fVar19 - fVar20) + fVar21);
  }
  return uVar12;
}



/* Entry: 108350900; end: 1083509ef;  */

float FUN_108350900(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lStack_148;
  undefined8 auStack_140 [8];
  undefined1 auStack_100 [160];
  float fStack_60;
  undefined8 uStack_58;
  
  func_0x000108350c64();
  uStack_58 = extraout_x8;
  FUN_1083a27f8(auStack_100);
  puVar1 = auStack_140;
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = param_2;
  }
  FUN_1083a2c54(&lStack_148,auStack_100);
  uVar6 = *(undefined8 *)(lStack_148 + 0x24);
  uVar5 = *(undefined8 *)(lStack_148 + 0x1c);
  uVar7 = *(undefined8 *)(lStack_148 + 0x2c);
  uVar9 = *(undefined8 *)(lStack_148 + 0x44);
  uVar8 = *(undefined8 *)(lStack_148 + 0x3c);
  uVar11 = *(undefined8 *)(lStack_148 + 0x14);
  uVar10 = *(undefined8 *)(lStack_148 + 0xc);
  puVar1[5] = *(undefined8 *)(lStack_148 + 0x34);
  puVar1[4] = uVar7;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  fVar4 = fStack_60;
  if (fStack_60 != 1.0) {
    FUN_1083509f0(puVar1);
  }
  uVar2 = param_2 == (undefined8 *)0x0;
  puVar1 = auStack_140;
  if (!(bool)uVar2) {
    puVar1 = param_2;
  }
  fVar13 = *(float *)(puVar1 + 1);
  fVar12 = *(float *)((long)puVar1 + 0xc);
  fVar14 = *(float *)((long)puVar1 + 0x14);
  FUN_1083145d8(&lStack_148);
  func_0x0001083a261c(auStack_100);
  func_0x000108350c50(uStack_58);
  if ((bool)uVar2) {
    return (fVar12 - fVar13) + fVar14;
  }
  ___stack_chk_fail();
  puVar3 = auStack_100;
  func_0x0001083a261c();
  func_0x000108350c74();
  *(ulong *)(puVar3 + 0xc) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar3 + 0xc) >> 0x20) * fVar4,
                (float)*(undefined8 *)(puVar3 + 0xc) * fVar4);
  *(ulong *)(puVar3 + 4) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar3 + 4) >> 0x20) * fVar4,
                (float)*(undefined8 *)(puVar3 + 4) * fVar4);
  *(ulong *)(puVar3 + 0x1c) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar3 + 0x1c) >> 0x20) * fVar4,
                (float)*(undefined8 *)(puVar3 + 0x1c) * fVar4);
  *(ulong *)(puVar3 + 0x14) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar3 + 0x14) >> 0x20) * fVar4,
                (float)*(undefined8 *)(puVar3 + 0x14) * fVar4);
  *(ulong *)(puVar3 + 0x2c) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar3 + 0x2c) >> 0x20) * fVar4,
                (float)*(undefined8 *)(puVar3 + 0x2c) * fVar4);
  *(ulong *)(puVar3 + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(puVar3 + 0x24) >> 0x20) * fVar4,
                (float)*(undefined8 *)(puVar3 + 0x24) * fVar4);
  *(ulong *)(puVar3 + 0x34) =
       CONCAT44(fVar4 * (float)((ulong)*(undefined8 *)(puVar3 + 0x34) >> 0x20),
                fVar4 * (float)*(undefined8 *)(puVar3 + 0x34));
  fVar12 = *(float *)(puVar3 + 0x3c);
  *(float *)(puVar3 + 0x3c) = fVar4 * fVar12;
  return fVar4 * fVar12;
}



/* Entry: 1083509f0; end: 108350a33;  */

void FUN_1083509f0(float param_1,long param_2)

{
  *(ulong *)(param_2 + 0xc) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 0xc) * param_1);
  *(ulong *)(param_2 + 4) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 4) * param_1);
  *(ulong *)(param_2 + 0x1c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 0x1c) * param_1);
  *(ulong *)(param_2 + 0x14) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 0x14) * param_1);
  *(ulong *)(param_2 + 0x2c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 0x2c) * param_1);
  *(ulong *)(param_2 + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 0x24) * param_1);
  *(ulong *)(param_2 + 0x34) =
       CONCAT44(param_1 * (float)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20),
                param_1 * (float)*(undefined8 *)(param_2 + 0x34));
  *(float *)(param_2 + 0x3c) = param_1 * *(float *)(param_2 + 0x3c);
  return;
}



/* Entry: 108350a34; end: 108350ae7;  */

ulong FUN_108350a34(undefined8 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_s3;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float afStack_58 [5];
  undefined8 uStack_44;
  undefined8 uStack_3c;
  uint uStack_34;
  ulong auStack_30 [2];
  
  afStack_58[4] = *(float *)(param_1 + 1);
  afStack_58[0] = afStack_58[4] * *(float *)((long)param_1 + 0xc);
  bVar1 = true;
  if ((afStack_58[0] != 0.0) && (bVar1 = false, !NAN(afStack_58[4]))) {
    bVar1 = afStack_58[4] == 0.0;
  }
  uStack_34 = 0;
  if (!bVar1) {
    uStack_34 = 0x10;
  }
  uVar4 = 0x3f800000;
  bVar1 = false;
  if ((afStack_58[0] == 1.0) && (bVar1 = false, !NAN(afStack_58[4]))) {
    bVar1 = afStack_58[4] == 1.0;
  }
  if (!bVar1) {
    uStack_34 = uStack_34 | 2;
  }
  afStack_58[2] = 0.0;
  afStack_58[3] = 0.0;
  afStack_58[1] = 0.0;
  uStack_3c = 0x3f80000000000000;
  uStack_44 = 0;
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar3 = 0;
  FUN_108364214(afStack_58);
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  FUN_1083a891c(*param_1);
  uStack_68 = uVar2;
  uStack_64 = uVar3;
  uStack_60 = uVar4;
  uStack_5c = in_s3;
  FUN_108364f90(afStack_58,auStack_30,&uStack_68,1);
  return auStack_30[0] & 0xffffffff;
}



/* Entry: 108350ae8; end: 108350b77;  */

float FUN_108350ae8(float param_1,long param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  
  uVar3 = param_3;
  FUN_10828e338();
  if ((uVar3 & 1) == 0) {
    fVar4 = *(float *)(param_2 + 8);
    FUN_108365614(param_3);
    fVar4 = fVar4 * param_1;
  }
  else {
    FUN_108365a88(param_3,param_4);
    fVar4 = ABS(param_1);
    bVar1 = false;
    bVar2 = false;
    if (!NAN(param_1 - param_1)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 == 0.00024414062;
        bVar2 = 0.00024414062 <= fVar4;
      }
    }
    if (bVar2 && !bVar1) {
      fVar4 = SQRT(param_1) * *(float *)(param_2 + 8);
    }
    else {
      fVar4 = -*(float *)(param_2 + 8);
    }
  }
  return fVar4;
}



/* Entry: 108350b78; end: 108350bbb;  */

ulong FUN_108350b78(ushort *param_1,ulong param_2,undefined4 param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  
  switch(param_3) {
  case 0:
    break;
  case 1:
    uVar5 = 0xffffffff;
    if ((param_1 != (ushort *)0x0) && ((((uint)param_2 | (uint)param_1) & 1) == 0)) {
      uVar5 = 0;
      puVar6 = (ushort *)((long)param_1 + (param_2 & 0xfffffffffffffffe));
      while (param_1 < puVar6) {
        uVar2 = *param_1;
        if ((uVar2 & 0xfc00) == 0xd800) {
          if (puVar6 <= param_1 + 1) {
            return 0xffffffff;
          }
          if ((param_1[1] & 0xfc00) != 0xdc00) {
            return 0xffffffff;
          }
          param_1 = param_1 + 2;
        }
        else {
          param_1 = param_1 + 1;
          if ((uVar2 & 0xfc00) == 0xdc00) {
            return 0xffffffff;
          }
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      }
    }
    return uVar5;
  case 2:
    return param_2 >> 2;
  case 3:
    return param_2 >> 1;
  default:
    return 0;
  }
  if ((param_1 == (ushort *)0x0) && (param_2 != 0)) {
LAB_1084103c4:
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    puVar6 = param_1;
    while (puVar6 < (ushort *)((long)param_1 + param_2)) {
      uVar3 = (ulong)(byte)*puVar6;
      FUN_10841043c();
      if ((int)uVar3 < 1 ||
          (ushort *)((long)param_1 + param_2) < (ushort *)((long)puVar6 + (long)(int)uVar3))
      goto LAB_1084103c4;
      puVar1 = (ushort *)((long)puVar6 + (uVar3 & 0xffffffff));
      while( true ) {
        puVar6 = (ushort *)((long)puVar6 + 1);
        if ((int)uVar3 < 2) break;
        uVar3 = (ulong)((int)uVar3 - 1);
        uVar4 = (ulong)*(byte *)puVar6;
        FUN_108410480();
        if ((uVar4 & 1) == 0) goto LAB_1084103c4;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      puVar6 = puVar1;
    }
  }
  return uVar5;
}



/* Entry: 108350bbc; end: 108350c23;  */

void FUN_108350bbc(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  
  if ((uint)param_1[10] != param_2) {
    if (0x24 < (int)(uint)param_1[10]) {
      _free(*param_1);
    }
    if (param_2 < 0x25) {
      puVar1 = (ulong *)0x0;
      if (param_2 != 0) {
        puVar1 = param_1 + 1;
      }
    }
    else {
      puVar1 = (ulong *)(ulong)param_2;
      FUN_10840ffdc(puVar1,2);
    }
    *param_1 = (ulong)puVar1;
    *(uint *)(param_1 + 10) = param_2;
  }
  return;
}



/* Entry: 108350c24; end: 108350c4f;  */

undefined8 FUN_108350c24(undefined8 param_1)

{
  FUN_108350bbc(param_1,0);
  return param_1;
}



/* Entry: 108350c50; end: 108350cb3;  */

void FUN_108350c50(void)

{
  return;
}



/* Entry: 108350cb4; end: 108350cef;  */

void FUN_108350cb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a3e7d8;
  *param_1 = puVar1;
  return;
}



/* Entry: 108350cf0; end: 108350d4b;  */

void FUN_108350cf0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_108350cb4(&uStack_28);
    uVar1 = uStack_28;
    uStack_28 = 0;
    func_0x000108350f54(param_2,uVar1);
    func_0x000108350ff0();
    lVar2 = *param_2;
  }
  *param_2 = 0;
  *param_1 = lVar2;
  return;
}



/* Entry: 108350d4c; end: 108350d93;  */

void FUN_108350d4c(undefined8 param_1,long *param_2)

{
  undefined1 auStack_28 [8];
  
  (**(code **)(*param_2 + 0x30))(auStack_28);
  FUN_108350cf0(param_1,auStack_28);
  func_0x000108350ff0();
  return;
}



/* Entry: 108350d94; end: 108350de3;  */

void FUN_108350d94(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long extraout_x9;
  undefined1 auStack_28 [8];
  
  if (*param_3 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x000108350ff8();
    (**(code **)(extraout_x9 + 0x48))();
    func_0x0001078bddf8(auStack_28);
  }
  return;
}



/* Entry: 108350de4; end: 108350e3b;  */

void FUN_108350de4(undefined8 *param_1,long param_2,long *param_3)

{
  long extraout_x9;
  
  if (*param_3 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x000108350ff8();
    (**(code **)(extraout_x9 + 0x50))();
    func_0x000108351008();
    if (param_2 != 0) {
      func_0x000108350fd4();
    }
  }
  return;
}



/* Entry: 108350e3c; end: 108350e93;  */

void FUN_108350e3c(undefined8 *param_1,long param_2,long *param_3)

{
  long extraout_x9;
  
  if (*param_3 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x000108350ff8();
    (**(code **)(extraout_x9 + 0x58))();
    func_0x000108351008();
    if (param_2 != 0) {
      func_0x000108350fd4();
    }
  }
  return;
}



/* Entry: 108350e94; end: 108350f37;  */

void FUN_108350e94(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000113826cb8 & 1) == 0) {
    iVar4 = 0x13826cb8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DAT_110a3e838;
      puRam0000000113826cb0 = puVar5;
      ___cxa_guard_release(0x113826cb8);
    }
  }
  puVar5 = puRam0000000113826cb0;
  if (puRam0000000113826cb0 != (undefined8 *)0x0) {
    piVar1 = (int *)(puRam0000000113826cb0 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 108350f38; end: 108351013;  */

void FUN_108350f38(void)

{
  return;
}



/* Entry: 108351014; end: 10835110f;  */

void FUN_108351014(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 1);
  uVar2 = (uint)*(byte *)((long)param_1 + 0x15) << 2 | (uint)*(byte *)((long)param_1 + 0x14) << 4 |
          (uint)*(byte *)((long)param_1 + 0x16);
  uVar1 = uVar2 | (int)fVar3 << 0x10 | 0x80000000;
  if (fVar3 != (float)(int)fVar3 || 0xff < (uint)(int)fVar3) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x40000000;
  if (*(float *)((long)param_1 + 0xc) == 1.0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x20000000;
  if (*(float *)(param_1 + 2) == 0.0) {
    uVar1 = uVar2;
  }
  if (*param_1 != 0) {
    uVar1 = uVar1 | 0x10000000;
  }
  (**(code **)(*param_2 + 0x38))(param_2,uVar1);
  if (-1 < (int)uVar1) {
    FUN_108351110((int)param_1[1]);
  }
  if ((uVar1 >> 0x1e & 1) != 0) {
    FUN_108351110(*(undefined4 *)((long)param_1 + 0xc));
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_108351110((int)param_1[2]);
  }
  if ((uVar1 >> 0x1c & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010835110c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe0))(param_2,*param_1);
  return;
}



/* Entry: 108351110; end: 10835111f;  */

void FUN_108351110(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010835111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x28))();
  return;
}



/* Entry: 108351120; end: 1083512ff;  */

double * FUN_108351120(double param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  double *pdVar3;
  float *pfVar4;
  double *pdVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double adStack_70 [5];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 * param_1;
  dVar14 = param_1 * param_1 * 0.25;
  iVar6 = 1;
  dVar19 = 1.0;
  dVar16 = 1.0;
  while (1e-06 < dVar16) {
    dVar16 = dVar16 * (dVar14 / (double)(uint)(iVar6 * iVar6));
    dVar19 = dVar19 + dVar16;
    iVar6 = iVar6 + 1;
  }
  dVar20 = param_1 * 0.5;
  dVar16 = dVar20;
  iVar6 = 1;
  while (1e-06 < dVar20) {
    dVar20 = dVar20 * (dVar14 / (double)(uint)((iVar6 + 1) * iVar6));
    dVar16 = dVar16 + dVar20;
    iVar6 = iVar6 + 1;
  }
  pdVar5 = adStack_70;
  adStack_70[2] = 0.0;
  adStack_70[1] = 0.0;
  adStack_70[4] = 0.0;
  adStack_70[3] = 0.0;
  pdVar3 = param_2;
  dVar14 = param_1;
  _exp();
  uVar7 = 0;
  dVar16 = dVar16 / dVar14;
  *param_2 = dVar19 / dVar14;
  param_2[1] = dVar16;
  uVar9 = 2;
  dVar20 = dVar19;
  while (pdVar5 = pdVar5 + 1, 0.01 < dVar16) {
    dVar17 = pdVar5[-1];
    dVar20 = dVar20 + dVar17 * (-(double)uVar9 / param_1);
    *pdVar5 = dVar20;
    dVar16 = dVar20 / dVar14;
    param_2[uVar7 + 2] = dVar16;
    uVar7 = uVar7 + 1;
    uVar9 = uVar9 + 2;
    dVar20 = dVar17;
  }
  dVar16 = 0.0;
  dVar20 = 2.0;
  for (uVar10 = uVar7 & 0xffffffff; 0 < (long)uVar10; uVar10 = uVar10 - 1) {
    dVar16 = dVar16 + param_2[uVar10] * 2.0;
  }
  for (lVar11 = 0; uVar7 + 1 != lVar11; lVar11 = lVar11 + 1) {
    param_2[lVar11] = param_2[lVar11] / (dVar19 / dVar14 + dVar16);
  }
  dVar14 = 0.0;
  uVar10 = uVar7 & 0xffffffff;
  while (0 < (long)uVar10) {
    dVar20 = param_2[uVar10];
    dVar14 = dVar14 + dVar20 * 2.0;
    uVar10 = uVar10 - 1;
  }
  fVar18 = 0.0;
  dVar14 = 1.0 - dVar14;
  *param_2 = dVar14;
  *(int *)(param_2 + 6) = (int)uVar7 + 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (SUB84(dVar14,0) != 0.0) {
      fVar15 = SUB84(dVar14,0) * -4.0 * SUB84(dVar20,0) + fVar18 * fVar18;
      if ((fVar15 < 0.0) || (fVar15 = SQRT(fVar15), NAN(fVar15 - fVar15))) {
        pdVar5 = (double *)0x0;
      }
      else {
        fVar13 = -fVar15;
        if (0.0 <= fVar18) {
          fVar13 = fVar15;
        }
        fVar18 = (fVar18 + fVar13) * -0.5;
        pdVar5 = pdVar3;
        FUN_108351408(fVar18,dVar14);
        pfVar8 = (float *)((long)pdVar3 + ((ulong)pdVar5 & 0xffffffff) * 4);
        pfVar4 = pfVar8;
        FUN_108351408(dVar20,fVar18);
        pfVar8 = pfVar8 + ((ulong)pfVar4 & 0xffffffff);
        if (((ulong)pfVar4 & 0xffffffff) + ((ulong)pdVar5 & 0xffffffff) == 2) {
          fVar18 = *(float *)pdVar3;
          fVar15 = *(float *)((long)pdVar3 + 4);
          if (fVar18 <= fVar15) {
            if (fVar18 == fVar15) {
              pfVar8 = pfVar8 + -1;
            }
          }
          else {
            *(float *)pdVar3 = fVar15;
            *(float *)((long)pdVar3 + 4) = fVar18;
          }
        }
        pdVar5 = (double *)((ulong)((long)pfVar8 - (long)pdVar3) >> 2);
      }
      return pdVar5;
    }
    fVar12 = -SUB84(dVar20,0);
    pdVar5 = (double *)0x0;
    fVar13 = -fVar12;
    fVar15 = -fVar18;
    if (0.0 <= fVar12) {
      fVar13 = fVar12;
      fVar15 = fVar18;
    }
    if (fVar12 != 0.0) {
      bVar1 = false;
      bVar2 = false;
      if (fVar18 != 0.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar13) && !NAN(fVar15)) {
          bVar1 = fVar13 < fVar15;
          bVar2 = false;
        }
      }
      if (bVar1 != bVar2) {
        pdVar5 = (double *)0x0;
        fVar13 = fVar13 / fVar15;
        if ((fVar13 != 0.0) && (!NAN(fVar13))) {
          *(float *)pdVar3 = fVar13;
          pdVar5 = (double *)0x1;
        }
      }
    }
    return pdVar5;
  }
  return param_2;
}



/* Entry: 108351300; end: 108351407;  */

ulong FUN_108351300(undefined8 param_1,float param_2,undefined8 param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((float)param_1 != 0.0) {
    fVar9 = (float)param_1 * -4.0 * (float)param_3 + param_2 * param_2;
    if ((fVar9 < 0.0) || (fVar9 = SQRT(fVar9), NAN(fVar9 - fVar9))) {
      uVar5 = 0;
    }
    else {
      fVar8 = -fVar9;
      if (0.0 <= param_2) {
        fVar8 = fVar9;
      }
      fVar9 = (param_2 + fVar8) * -0.5;
      pfVar3 = param_4;
      FUN_108351408(fVar9,param_1);
      pfVar4 = param_4 + ((ulong)pfVar3 & 0xffffffff);
      FUN_108351408(param_3,fVar9);
      pfVar6 = param_4 + ((ulong)pfVar3 & 0xffffffff) + ((ulong)pfVar4 & 0xffffffff);
      if (((ulong)pfVar4 & 0xffffffff) + ((ulong)pfVar3 & 0xffffffff) == 2) {
        fVar9 = *param_4;
        fVar8 = param_4[1];
        if (fVar9 <= fVar8) {
          if (fVar9 == fVar8) {
            pfVar6 = pfVar6 + -1;
          }
        }
        else {
          *param_4 = fVar8;
          param_4[1] = fVar9;
        }
      }
      uVar5 = (ulong)((long)pfVar6 - (long)param_4) >> 2;
    }
    return uVar5;
  }
  fVar7 = -(float)param_3;
  uVar5 = 0;
  fVar8 = -fVar7;
  fVar9 = -param_2;
  if (0.0 <= fVar7) {
    fVar8 = fVar7;
    fVar9 = param_2;
  }
  if (fVar7 != 0.0) {
    bVar1 = false;
    bVar2 = false;
    if (param_2 != 0.0) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8) && !NAN(fVar9)) {
        bVar1 = fVar8 < fVar9;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      uVar5 = 0;
      fVar8 = fVar8 / fVar9;
      if ((fVar8 != 0.0) && (!NAN(fVar8))) {
        *param_4 = fVar8;
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



/* Entry: 108351408; end: 108351453;  */

undefined8 FUN_108351408(float param_1,float param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar4 = 0;
  fVar5 = -param_1;
  fVar1 = -param_2;
  if (0.0 <= param_1) {
    fVar5 = param_1;
    fVar1 = param_2;
  }
  if (param_1 != 0.0) {
    bVar2 = false;
    bVar3 = false;
    if (param_2 != 0.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5) && !NAN(fVar1)) {
        bVar2 = fVar5 < fVar1;
        bVar3 = false;
      }
    }
    if (bVar2 != bVar3) {
      uVar4 = 0;
      fVar5 = fVar5 / fVar1;
      if ((fVar5 != 0.0) && (!NAN(fVar5))) {
        *param_3 = fVar5;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



/* Entry: 108351454; end: 10835149f;  */

void FUN_108351454(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  if (param_4 != (undefined4 *)0x0) {
    func_0x000108353918();
    FUN_1083514a0();
    *param_4 = param_1;
    param_4[1] = param_2;
  }
  if (param_5 != (undefined4 *)0x0) {
    func_0x000108353918();
    func_0x0001083514d0();
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return;
}



/* Entry: 1083514a0; end: 10835161b;  */

undefined1  [12] FUN_1083514a0(float param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [12];
  
  fVar1 = (float)*param_2;
  fVar3 = (float)param_2[1];
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  auVar5._0_4_ = fVar1 + ((fVar3 - fVar1) + (fVar3 - fVar1) +
                         (fVar1 + ((float)param_2[2] - (fVar3 + fVar3))) * param_1) * param_1;
  auVar5._4_4_ = fVar2 + ((fVar4 - fVar2) + (fVar4 - fVar2) +
                         (fVar2 + ((float)((ulong)param_2[2] >> 0x20) - (fVar4 + fVar4))) * param_1)
                         * param_1;
  auVar5._8_4_ = 0;
  return auVar5;
}



/* Entry: 10835161c; end: 108351697;  */

float FUN_10835161c(float *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar6 = fVar4 - *param_1;
  fVar7 = fVar5 - param_1[1];
  fVar8 = param_1[4] - fVar4;
  fVar9 = param_1[5] - fVar5;
  func_0x0001083538d0(fVar4,fVar5,-fVar8,-fVar9);
  fVar4 = (fVar7 * fVar5 + fVar4 * fVar6) / ((fVar7 - fVar9) * fVar5 + fVar4 * (fVar6 - fVar8));
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar4 < 1.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 0.0;
      bVar2 = fVar4 == 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar4 = 0.5;
  }
  return fVar4;
}



/* Entry: 108351698; end: 1083516a7;  */

undefined8 FUN_108351698(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  
  param_1 = param_1 - param_2;
  param_3 = param_3 + (param_1 - param_2);
  uVar4 = 0;
  fVar5 = -param_1;
  fVar1 = -param_3;
  if (0.0 <= param_1) {
    fVar5 = param_1;
    fVar1 = param_3;
  }
  if (param_1 != 0.0) {
    bVar2 = false;
    bVar3 = false;
    if (param_3 != 0.0) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5) && !NAN(fVar1)) {
        bVar2 = fVar5 < fVar1;
        bVar3 = false;
      }
    }
    if (bVar2 != bVar3) {
      uVar4 = 0;
      fVar5 = fVar5 / fVar1;
      if ((fVar5 != 0.0) && (!NAN(fVar5))) {
        *param_4 = fVar5;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



/* Entry: 1083516a8; end: 1083517bf;  */

undefined8 FUN_1083516a8(undefined8 param_1,float param_2,long param_3)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  int iVar1;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float unaff_s11;
  undefined4 uStack_44;
  
  func_0x000108353830();
  uVar4 = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  func_0x000108353904();
  iVar1 = (int)param_3;
  if (!(bool)in_NG) {
    param_2 = unaff_s11;
  }
  if (((bool)in_ZR) || (param_2 < 0.0)) {
    func_0x000108353800();
    if (iVar1 != 0) {
      func_0x0001083537c0(uStack_44);
      func_0x00010835154c();
      unaff_x19[7] = unaff_x19[5];
      unaff_x19[3] = unaff_x19[5];
      return 1;
    }
    func_0x0001083538dc();
  }
  *unaff_x19 = *unaff_x20;
  unaff_x19[1] = uVar4;
  unaff_x19[2] = unaff_x20[2];
  unaff_x19[3] = uVar2;
  unaff_x19[4] = unaff_x20[4];
  unaff_x19[5] = uVar3;
  return 0;
}



/* Entry: 1083517c0; end: 10835181f;  */

float FUN_1083517c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_1[2];
  fVar4 = param_1[3];
  fVar2 = fVar1 - *param_1;
  fVar3 = ((*param_1 - fVar1) - fVar1) + param_1[4];
  fVar5 = ((param_1[1] - fVar4) - fVar4) + param_1[5];
  fVar4 = (fVar4 - param_1[1]) * fVar5;
  fVar1 = 0.0;
  if (fVar4 + fVar3 * fVar2 < 0.0) {
    fVar4 = -(fVar2 * fVar3) - fVar4;
    fVar2 = fVar5 * fVar5 + fVar3 * fVar3;
    fVar1 = 1.0;
    if (fVar4 < fVar2) {
      fVar1 = fVar4 / fVar2;
    }
  }
  return fVar1;
}



/* Entry: 108351820; end: 108351873;  */

undefined8 FUN_108351820(float param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x000108353830();
  FUN_1083517c0();
  bVar1 = false;
  if ((0.0 < param_1) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 < 1.0;
  }
  if (bVar1) {
    func_0x0001083537c0();
    func_0x00010835154c();
    uVar2 = 2;
  }
  else {
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    unaff_x19[2] = unaff_x20[2];
    unaff_x19[1] = uVar3;
    *unaff_x19 = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 108351874; end: 1083518ab;  */

void FUN_108351874(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  *param_2 = uVar4;
  fVar1 = (float)uVar2;
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  fVar6 = (float)((ulong)uVar7 >> 0x20);
  param_2[2] = CONCAT44(fVar6 + (fVar3 - fVar6) * 0.6666667,
                        (float)uVar7 + (fVar1 - (float)uVar7) * 0.6666667);
  param_2[1] = CONCAT44(fVar5 + (fVar3 - fVar5) * 0.6666667,
                        (float)uVar4 + (fVar1 - (float)uVar4) * 0.6666667);
  param_2[3] = uVar7;
  return;
}



/* Entry: 1083518ac; end: 1083519fb;  */

void FUN_1083518ac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong *param_6,ulong *param_7,undefined8 *param_8)

{
  bool bVar1;
  float fVar2;
  float fVar4;
  ulong uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  
  fVar11 = (float)((ulong)param_4 >> 0x20);
  fVar10 = (float)param_4;
  fVar9 = (float)((ulong)param_3 >> 0x20);
  fVar8 = (float)param_3;
  uVar12 = NEON_fmov(0x40400000,4);
  uVar3 = param_1;
  if (param_6 != (ulong *)0x0) {
    func_0x00010835385c();
    fVar5 = (float)param_2;
    fVar6 = (float)((ulong)param_2 >> 0x20);
    fVar2 = (float)param_1;
    fVar4 = (float)(param_1 >> 0x20);
    fVar13 = (float)((ulong)uVar12 >> 0x20);
    fVar7 = (float)uVar3;
    fVar10 = fVar10 * fVar7;
    fVar11 = fVar11 * fVar7;
    fVar8 = ((fVar2 + (fVar8 - (fVar5 + fVar5))) * (float)uVar12 + fVar10) * fVar7;
    fVar9 = ((fVar4 + (fVar9 - (fVar6 + fVar6))) * fVar13 + fVar11) * fVar7;
    fVar5 = ((fVar5 - fVar2) * (float)uVar12 + fVar8) * fVar7;
    fVar7 = ((fVar6 - fVar4) * fVar13 + fVar9) * fVar7;
    param_2 = CONCAT44(fVar7,fVar5);
    param_1 = CONCAT44(fVar4 + fVar7,fVar2 + fVar5);
    *param_6 = param_1;
  }
  fVar2 = (float)uVar3;
  if (param_7 == (ulong *)0x0) goto LAB_1083519b8;
  if (fVar2 == 0.0) {
    param_2 = *param_5;
    fVar8 = *(float *)((long)param_5 + 0xc);
    fVar9 = 0.0;
    fVar10 = (float)((ulong)param_2 >> 0x20);
    fVar11 = 0.0;
    bVar1 = false;
    if (((float)param_2 == *(float *)(param_5 + 1)) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar8)))
    {
      bVar1 = fVar10 == fVar8;
    }
    if (!bVar1) goto LAB_108351938;
    uVar12 = param_5[2];
LAB_10835198c:
    param_1 = CONCAT44((float)((ulong)uVar12 >> 0x20) - (float)((ulong)param_2 >> 0x20),
                       (float)uVar12 - (float)param_2);
LAB_108351990:
    *param_7 = param_1;
    if (((float)param_1 == 0.0) &&
       (fVar4 = (float)(param_1 >> 0x20), param_1 = (ulong)(uint)fVar4, fVar4 == 0.0)) {
      param_2 = *param_5;
      param_1 = CONCAT44((float)((ulong)param_5[3] >> 0x20) - (float)((ulong)param_2 >> 0x20),
                         (float)param_5[3] - (float)param_2);
      *param_7 = param_1;
    }
  }
  else {
LAB_108351938:
    if (fVar2 == 1.0) {
      uVar12 = param_5[2];
      param_2 = param_5[3];
      fVar8 = (float)-(uint)((float)uVar12 == (float)param_2);
      fVar4 = (float)((ulong)param_2 >> 0x20);
      fVar9 = (float)-(uint)((float)((ulong)uVar12 >> 0x20) == fVar4);
      if ((((uint)fVar8 & 1) != 0) && (((uint)fVar9 & 1) != 0)) {
        if (fVar2 == 0.0) {
          param_2 = *param_5;
          goto LAB_10835198c;
        }
        param_1 = CONCAT44(fVar4 - (float)((ulong)param_5[1] >> 0x20),
                           (float)param_2 - (float)param_5[1]);
        goto LAB_108351990;
      }
    }
    FUN_1083519fc(param_5);
    *(int *)param_7 = (int)uVar3;
    *(int *)((long)param_7 + 4) = (int)param_2;
    param_1 = uVar3;
  }
LAB_1083519b8:
  if (param_8 != (undefined8 *)0x0) {
    func_0x00010835385c();
    fVar4 = (float)((ulong)param_2 >> 0x20);
    *param_8 = CONCAT44((float)(param_1 >> 0x20) + (fVar9 - (fVar4 + fVar4)) + fVar11 * fVar2,
                        (float)param_1 + (fVar8 - ((float)param_2 + (float)param_2)) +
                        fVar10 * fVar2);
  }
  return;
}



/* Entry: 1083519fc; end: 108351aff;  */

undefined1  [12] FUN_1083519fc(float param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  
  fVar3 = (float)param_2[1];
  fVar5 = (float)param_2[2];
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  uVar9 = NEON_fmov(0x40400000,4);
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = fVar1 + (fVar5 - (fVar3 + fVar3));
  fVar8 = fVar2 + (fVar7 - (fVar4 + fVar4));
  auVar10._0_4_ =
       (fVar3 - fVar1) +
       (fVar6 + fVar6 + (((float)param_2[3] + (fVar3 - fVar5) * (float)uVar9) - fVar1) * param_1) *
       param_1;
  auVar10._4_4_ =
       (fVar4 - fVar2) +
       (fVar8 + fVar8 +
       (((float)((ulong)param_2[3] >> 0x20) + (fVar4 - fVar7) * (float)((ulong)uVar9 >> 0x20)) -
       fVar2) * param_1) * param_1;
  auVar10._8_4_ = 0;
  return auVar10;
}



/* Entry: 108351b00; end: 108351c9f;  */

void FUN_108351b00(undefined4 param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  
  func_0x000108353830();
  if (param_2 == 1.0) {
    func_0x0001083537c0();
    func_0x000108351a70();
    uVar1 = unaff_x20[3];
    unaff_x19[8] = uVar1;
    unaff_x19[9] = uVar1;
    unaff_x19[7] = uVar1;
  }
  else {
    uVar16 = unaff_x20[1];
    uVar11 = unaff_x20[2];
    uVar1 = uVar16;
    FUN_108351ca0(uVar16,uVar11);
    uVar12 = (undefined4)uVar11;
    uVar3 = (undefined4)uVar1;
    func_0x0001083538a8();
    uVar11 = *unaff_x20;
    uVar1 = uVar11;
    func_0x000108353814();
    uVar2 = uVar17;
    func_0x0001083538a8();
    uVar6 = uVar3;
    func_0x000108353814();
    uVar5 = uVar2;
    func_0x0001083538a8();
    uVar8 = unaff_x20[3];
    func_0x000108353814();
    uVar13 = uVar12;
    uVar9 = param_1;
    func_0x000108353814();
    uVar14 = uVar13;
    uVar4 = uVar5;
    uVar7 = uVar3;
    uVar10 = uVar9;
    func_0x000108353814();
    uVar15 = uVar14;
    FUN_108351ca0();
    *unaff_x19 = uVar11;
    uVar17 = (undefined4)uVar1;
    *(undefined4 *)(unaff_x19 + 1) = uVar17;
    *(int *)((long)unaff_x19 + 0xc) = (int)uVar16;
    *(undefined4 *)(unaff_x19 + 2) = uVar2;
    *(undefined4 *)((long)unaff_x19 + 0x14) = uVar6;
    *(undefined4 *)(unaff_x19 + 3) = uVar4;
    *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar7;
    *(undefined4 *)(unaff_x19 + 4) = uVar5;
    *(undefined4 *)((long)unaff_x19 + 0x24) = uVar3;
    *(float *)(unaff_x19 + 5) = param_2;
    *(undefined4 *)((long)unaff_x19 + 0x2c) = uVar15;
    *(undefined4 *)(unaff_x19 + 6) = uVar10;
    *(undefined4 *)((long)unaff_x19 + 0x34) = uVar14;
    *(undefined4 *)(unaff_x19 + 7) = uVar9;
    *(undefined4 *)((long)unaff_x19 + 0x3c) = uVar13;
    *(undefined4 *)(unaff_x19 + 8) = param_1;
    *(undefined4 *)((long)unaff_x19 + 0x44) = uVar12;
    unaff_x19[9] = uVar8;
  }
  return;
}



/* Entry: 108351ca0; end: 108351cbb;  */

float FUN_108351ca0(float param_1,float param_2,float param_3)

{
  return param_1 + (param_2 - param_1) * param_3;
}



/* Entry: 108351cbc; end: 108351de7;  */

void FUN_108351cbc(undefined8 *param_1,undefined8 *param_2,float *param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  
  if (param_2 != (undefined8 *)0x0) {
    if (param_4 == 0) {
      uVar1 = *param_1;
      uVar8 = param_1[3];
      uVar11 = param_1[2];
      param_2[1] = param_1[1];
      *param_2 = uVar1;
      param_2[3] = uVar8;
      param_2[2] = uVar11;
    }
    else {
      lVar2 = 0;
      uVar16 = NEON_fmov(0x3f800000,4);
      pfVar3 = param_3;
      for (; lVar2 < param_4 + -1; lVar2 = lVar2 + 2) {
        uVar5 = *(ulong *)pfVar3;
        if (lVar2 != 0) {
          fVar6 = param_3[lVar2 + -1];
          fVar4 = ((float)uVar5 - fVar6) / (1.0 - fVar6);
          fVar6 = ((float)(uVar5 >> 0x20) - fVar6) / (1.0 - fVar6);
          uVar5 = CONCAT44(fVar6,fVar4);
          uVar5 = NEON_fmaxnm(uVar5 ^ (uVar5 ^ uVar16) &
                                      CONCAT44(-(uint)((float)(uVar16 >> 0x20) < fVar6),
                                               -(uint)((float)uVar16 < fVar4)),0,4);
        }
        FUN_108351b00(uVar5,uVar5 >> 0x20,param_1,param_2);
        param_1 = param_2 + 6;
        pfVar3 = pfVar3 + 2;
        param_2 = param_1;
      }
      if ((int)lVar2 < param_4) {
        fVar4 = *pfVar3;
        if (lVar2 != 0) {
          fVar6 = (fVar4 - param_3[lVar2 + -1]) / (1.0 - param_3[lVar2 + -1]);
          fVar4 = 1.0;
          if (fVar6 <= 1.0) {
            fVar4 = fVar6;
          }
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
        }
        if (fVar4 == 1.0) {
          uVar1 = *param_1;
          uVar8 = param_1[3];
          uVar11 = param_1[2];
          param_2[1] = param_1[1];
          *param_2 = uVar1;
          param_2[3] = uVar8;
          param_2[2] = uVar11;
          uVar1 = param_1[3];
          param_2[5] = uVar1;
          param_2[6] = uVar1;
          param_2[4] = uVar1;
          return;
        }
        uVar1 = *param_1;
        uVar11 = param_1[3];
        fVar6 = (float)param_1[1];
        fVar9 = (float)param_1[2];
        fVar14 = (float)((ulong)param_1[1] >> 0x20);
        fVar10 = (float)((ulong)param_1[2] >> 0x20);
        fVar12 = fVar6 + (fVar9 - fVar6) * fVar4;
        fVar13 = fVar14 + (fVar10 - fVar14) * fVar4;
        fVar7 = (float)((ulong)uVar1 >> 0x20);
        fVar6 = (float)uVar1 + (fVar6 - (float)uVar1) * fVar4;
        fVar7 = fVar7 + (fVar14 - fVar7) * fVar4;
        fVar14 = fVar6 + (fVar12 - fVar6) * fVar4;
        fVar15 = fVar7 + (fVar13 - fVar7) * fVar4;
        fVar9 = fVar9 + ((float)uVar11 - fVar9) * fVar4;
        fVar10 = fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * fVar4;
        fVar12 = fVar12 + (fVar9 - fVar12) * fVar4;
        fVar13 = fVar13 + (fVar10 - fVar13) * fVar4;
        *param_2 = uVar1;
        param_2[2] = CONCAT44(fVar15,fVar14);
        param_2[1] = CONCAT44(fVar7,fVar6);
        param_2[4] = CONCAT44(fVar13,fVar12);
        param_2[3] = CONCAT44(fVar15 + (fVar13 - fVar15) * fVar4,fVar14 + (fVar12 - fVar14) * fVar4)
        ;
        param_2[5] = CONCAT44(fVar10,fVar9);
        param_2[6] = uVar11;
        return;
      }
    }
  }
  return;
}



/* Entry: 108351de8; end: 108351e4f;  */

/* WARNING: Removing unreachable block (ram,0x000108351a7c) */

void FUN_108351de8(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = *param_1;
  uVar6 = param_1[3];
  fVar1 = (float)param_1[1];
  fVar4 = (float)param_1[2];
  fVar9 = (float)((ulong)param_1[1] >> 0x20);
  fVar5 = (float)((ulong)param_1[2] >> 0x20);
  fVar7 = fVar1 + (fVar4 - fVar1) * 0.5;
  fVar8 = fVar9 + (fVar5 - fVar9) * 0.5;
  fVar2 = (float)((ulong)uVar3 >> 0x20);
  fVar1 = (float)uVar3 + (fVar1 - (float)uVar3) * 0.5;
  fVar2 = fVar2 + (fVar9 - fVar2) * 0.5;
  fVar9 = fVar1 + (fVar7 - fVar1) * 0.5;
  fVar10 = fVar2 + (fVar8 - fVar2) * 0.5;
  fVar4 = fVar4 + ((float)uVar6 - fVar4) * 0.5;
  fVar5 = fVar5 + ((float)((ulong)uVar6 >> 0x20) - fVar5) * 0.5;
  fVar7 = fVar7 + (fVar4 - fVar7) * 0.5;
  fVar8 = fVar8 + (fVar5 - fVar8) * 0.5;
  *param_2 = uVar3;
  param_2[2] = CONCAT44(fVar10,fVar9);
  param_2[1] = CONCAT44(fVar2,fVar1);
  param_2[4] = CONCAT44(fVar8,fVar7);
  param_2[3] = CONCAT44(fVar10 + (fVar8 - fVar10) * 0.5,fVar9 + (fVar7 - fVar9) * 0.5);
  param_2[5] = CONCAT44(fVar5,fVar4);
  param_2[6] = uVar6;
  return;
}



/* Entry: 108351e50; end: 108351f5f;  */

ulong FUN_108351e50(long param_1,float *param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  float *pfVar3;
  ulong uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int iVar9;
  ulong unaff_x20;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float afStack_80 [2];
  undefined8 uStack_78;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  
  puVar5 = auStack_40;
  pfVar7 = param_2;
  func_0x000108353758();
  uStack_38 = extraout_x8;
  func_0x000108351a40(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  func_0x0001083537cc();
  iVar9 = (int)unaff_x20;
  if ((param_2 != (float *)0x0) && (in_ZR = iVar9 == 1, 0 < iVar9)) {
    param_2[9] = param_2[7];
    param_2[5] = param_2[7];
    in_ZR = iVar9 == 2;
    if ((bool)in_ZR) {
      param_2[0xf] = param_2[0xd];
      param_2[0xb] = param_2[0xd];
    }
  }
  func_0x000108353734(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pfVar6 = afStack_80;
    pfVar8 = pfVar7;
    func_0x000108353758();
    uStack_78 = extraout_x8_00;
    func_0x000108351a40(*puVar5,puVar5[2],puVar5[4],puVar5[6]);
    func_0x0001083537cc();
    if ((pfVar7 != (float *)0x0) && (in_ZR = iVar9 == 1, 0 < iVar9)) {
      pfVar7[8] = pfVar7[6];
      pfVar7[4] = pfVar7[6];
      in_ZR = iVar9 == 2;
      if ((bool)in_ZR) {
        pfVar7[0xe] = pfVar7[0xc];
        pfVar7[10] = pfVar7[0xc];
      }
    }
    func_0x000108353734(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      fVar10 = pfVar6[2];
      fVar12 = pfVar6[3];
      fVar14 = *pfVar6;
      fVar16 = pfVar6[1];
      fVar18 = fVar14 + pfVar6[4] + fVar10 * -2.0;
      fVar17 = fVar16 + pfVar6[5] + fVar12 * -2.0;
      fVar15 = (pfVar6[6] + (fVar10 - pfVar6[4]) * 3.0) - fVar14;
      fVar13 = (pfVar6[7] + (fVar12 - pfVar6[5]) * 3.0) - fVar16;
      fVar11 = -(fVar15 * fVar17) + fVar13 * fVar18;
      fVar13 = -(fVar15 * (fVar12 - fVar16)) + fVar13 * (fVar10 - fVar14);
      fVar10 = -(fVar18 * (fVar12 - fVar16)) + fVar17 * (fVar10 - fVar14);
      if (fVar11 != 0.0) {
        fVar12 = fVar11 * -4.0 * fVar10 + fVar13 * fVar13;
        if ((fVar12 < 0.0) || (fVar12 = SQRT(fVar12), NAN(fVar12 - fVar12))) {
          uVar4 = 0;
        }
        else {
          fVar14 = -fVar12;
          if (0.0 <= fVar13) {
            fVar14 = fVar12;
          }
          fVar12 = (fVar13 + fVar14) * -0.5;
          pfVar6 = pfVar8;
          FUN_108351408(fVar12,fVar11);
          pfVar3 = pfVar8 + ((ulong)pfVar6 & 0xffffffff);
          FUN_108351408(fVar10,fVar12);
          pfVar7 = pfVar8 + ((ulong)pfVar6 & 0xffffffff) + ((ulong)pfVar3 & 0xffffffff);
          if (((ulong)pfVar3 & 0xffffffff) + ((ulong)pfVar6 & 0xffffffff) == 2) {
            fVar10 = *pfVar8;
            fVar11 = pfVar8[1];
            if (fVar10 <= fVar11) {
              if (fVar10 == fVar11) {
                pfVar7 = pfVar7 + -1;
              }
            }
            else {
              *pfVar8 = fVar11;
              pfVar8[1] = fVar10;
            }
          }
          uVar4 = (ulong)((long)pfVar7 - (long)pfVar8) >> 2;
        }
        return uVar4;
      }
      fVar10 = -fVar10;
      uVar4 = 0;
      fVar12 = -fVar10;
      fVar11 = -fVar13;
      if (0.0 <= fVar10) {
        fVar12 = fVar10;
        fVar11 = fVar13;
      }
      if (fVar10 != 0.0) {
        bVar1 = false;
        bVar2 = false;
        if (fVar13 != 0.0) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar12) && !NAN(fVar11)) {
            bVar1 = fVar12 < fVar11;
            bVar2 = false;
          }
        }
        if (bVar1 != bVar2) {
          uVar4 = 0;
          fVar12 = fVar12 / fVar11;
          if ((fVar12 != 0.0) && (!NAN(fVar12))) {
            *pfVar8 = fVar12;
            uVar4 = 1;
          }
        }
      }
      return uVar4;
    }
  }
  return unaff_x20;
}



/* Entry: 108351f60; end: 108351fc7;  */

ulong FUN_108351f60(float *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar7 = param_1[2];
  fVar9 = param_1[3];
  fVar11 = *param_1;
  fVar13 = param_1[1];
  fVar15 = fVar11 + param_1[4] + fVar7 * -2.0;
  fVar14 = fVar13 + param_1[5] + fVar9 * -2.0;
  fVar12 = (param_1[6] + (fVar7 - param_1[4]) * 3.0) - fVar11;
  fVar10 = (param_1[7] + (fVar9 - param_1[5]) * 3.0) - fVar13;
  fVar8 = -(fVar12 * fVar14) + fVar10 * fVar15;
  fVar10 = -(fVar12 * (fVar9 - fVar13)) + fVar10 * (fVar7 - fVar11);
  fVar7 = -(fVar15 * (fVar9 - fVar13)) + fVar14 * (fVar7 - fVar11);
  if (fVar8 != 0.0) {
    fVar9 = fVar8 * -4.0 * fVar7 + fVar10 * fVar10;
    if ((fVar9 < 0.0) || (fVar9 = SQRT(fVar9), NAN(fVar9 - fVar9))) {
      uVar5 = 0;
    }
    else {
      fVar11 = -fVar9;
      if (0.0 <= fVar10) {
        fVar11 = fVar9;
      }
      fVar9 = (fVar10 + fVar11) * -0.5;
      pfVar3 = param_2;
      FUN_108351408(fVar9,fVar8);
      pfVar4 = param_2 + ((ulong)pfVar3 & 0xffffffff);
      FUN_108351408(fVar7,fVar9);
      pfVar6 = param_2 + ((ulong)pfVar3 & 0xffffffff) + ((ulong)pfVar4 & 0xffffffff);
      if (((ulong)pfVar4 & 0xffffffff) + ((ulong)pfVar3 & 0xffffffff) == 2) {
        fVar7 = *param_2;
        fVar8 = param_2[1];
        if (fVar7 <= fVar8) {
          if (fVar7 == fVar8) {
            pfVar6 = pfVar6 + -1;
          }
        }
        else {
          *param_2 = fVar8;
          param_2[1] = fVar7;
        }
      }
      uVar5 = (ulong)((long)pfVar6 - (long)param_2) >> 2;
    }
    return uVar5;
  }
  fVar7 = -fVar7;
  uVar5 = 0;
  fVar9 = -fVar7;
  fVar8 = -fVar10;
  if (0.0 <= fVar7) {
    fVar9 = fVar7;
    fVar8 = fVar10;
  }
  if (fVar7 != 0.0) {
    bVar1 = false;
    bVar2 = false;
    if (fVar10 != 0.0) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar9) && !NAN(fVar8)) {
        bVar1 = fVar9 < fVar8;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      uVar5 = 0;
      fVar9 = fVar9 / fVar8;
      if ((fVar9 != 0.0) && (!NAN(fVar9))) {
        *param_2 = fVar9;
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



/* Entry: 108351fc8; end: 10835203b;  */

int FUN_108351fc8(double param_1,double *param_2,double *param_3,undefined1 *param_4,double *param_5
                 )

{
  undefined1 in_ZR;
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  undefined8 extraout_x8;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_40;
  undefined8 uStack_38;
  
  pdVar2 = &dStack_40;
  pdVar3 = &dStack_40;
  pdVar1 = param_2;
  func_0x000108353758();
  uStack_38 = extraout_x8;
  FUN_108351f60();
  iVar4 = (int)pdVar1;
  if (param_3 != (double *)0x0) {
    if (iVar4 == 0) {
      param_1 = *param_2;
      dVar6 = param_2[2];
      dVar7 = param_2[3];
      param_3[1] = param_2[1];
      *param_3 = param_1;
      param_3[3] = dVar7;
      param_3[2] = dVar6;
    }
    else {
      param_5 = pdVar1;
      FUN_108351cbc(param_2);
      pdVar1 = param_2;
      pdVar2 = param_3;
      param_4 = (undefined1 *)pdVar3;
    }
  }
  func_0x000108353734(uStack_38);
  if ((bool)in_ZR) {
    return iVar4 + 1;
  }
  ___stack_chk_fail();
  FUN_108352238();
  dVar6 = param_1;
  FUN_108352238(pdVar1 + 1,pdVar1,pdVar1 + 3);
  dVar7 = dVar6;
  FUN_108352238(pdVar1 + 2,pdVar1 + 1,pdVar1);
  dVar7 = dVar7 * 3.0;
  param_1 = param_1 + ((dVar7 - dVar6) - dVar6);
  dVar8 = ABS(param_1);
  dVar5 = ABS(dVar7 - dVar6);
  if (ABS(dVar7 - dVar6) <= dVar8) {
    dVar5 = dVar8;
  }
  dVar8 = ABS(dVar7);
  if (ABS(dVar7) <= dVar5) {
    dVar8 = dVar5;
  }
  dVar5 = (double)(0x7fefffffffffffffU - (long)dVar8 & 0x7ff0000000000000);
  param_1 = param_1 * dVar5;
  dVar6 = (dVar7 - dVar6) * dVar5;
  dVar7 = dVar7 * dVar5;
  if (param_5 != (double *)0x0) {
    param_5[2] = dVar6;
    param_5[3] = dVar7;
    param_5[1] = param_1;
    *param_5 = 0.0;
  }
  if (param_1 == 0.0) {
    if (dVar6 == 0.0) {
      if (pdVar2 != (double *)0x0 && param_4 != (undefined1 *)0x0) {
        func_0x000108353768(0x3ff0000000000000,0,0x3ff0000000000000,0);
      }
      iVar4 = 4;
      if (dVar7 == 0.0) {
        iVar4 = 5;
      }
    }
    else {
      if (pdVar2 != (double *)0x0 && param_4 != (undefined1 *)0x0) {
        func_0x000108353768(dVar7,dVar6 * 3.0,0x3ff0000000000000,0);
      }
      iVar4 = 3;
    }
  }
  else {
    dVar5 = param_1 * -4.0 * dVar7 + dVar6 * dVar6 * 3.0;
    if (dVar5 <= 0.0) {
      if (0.0 <= dVar5) {
        if (pdVar2 != (double *)0x0 && param_4 != (undefined1 *)0x0) {
          func_0x000108353768(dVar6,param_1 + param_1,dVar6,param_1 + param_1);
        }
        iVar4 = 2;
      }
      else {
        if (pdVar2 != (double *)0x0 && param_4 != (undefined1 *)0x0) {
          dVar5 = dVar6 + (double)((ulong)SQRT(-dVar5) ^
                                  ((ulong)SQRT(-dVar5) ^ (ulong)dVar6) & 0x8007ffffffffffff);
          dVar6 = -(param_1 * dVar7) + dVar6 * dVar6;
          func_0x000108353768(dVar5,param_1 + param_1,dVar6 + dVar6,param_1 * dVar5);
        }
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 0;
      if ((pdVar2 != (double *)0x0) && (param_4 != (undefined1 *)0x0)) {
        dVar6 = (double)((ulong)SQRT(dVar5 * 3.0) ^
                        ((ulong)SQRT(dVar5 * 3.0) ^ (ulong)dVar6) & 0x8007ffffffffffff) +
                dVar6 * 3.0;
        func_0x000108353768(dVar6,param_1 * 6.0,dVar7 + dVar7,dVar6,0);
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}



/* Entry: 10835203c; end: 108352237;  */

undefined4 FUN_10835203c(double param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  FUN_108352238(param_2,param_2 + 0x18,param_2 + 0x10);
  dVar3 = param_1;
  FUN_108352238(param_2 + 8,param_2,param_2 + 0x18);
  dVar4 = dVar3;
  FUN_108352238(param_2 + 0x10,param_2 + 8,param_2);
  dVar4 = dVar4 * 3.0;
  param_1 = param_1 + ((dVar4 - dVar3) - dVar3);
  dVar5 = ABS(param_1);
  dVar2 = ABS(dVar4 - dVar3);
  if (ABS(dVar4 - dVar3) <= dVar5) {
    dVar2 = dVar5;
  }
  dVar5 = ABS(dVar4);
  if (ABS(dVar4) <= dVar2) {
    dVar5 = dVar2;
  }
  dVar2 = (double)(0x7fefffffffffffffU - (long)dVar5 & 0x7ff0000000000000);
  param_1 = param_1 * dVar2;
  dVar3 = (dVar4 - dVar3) * dVar2;
  dVar4 = dVar4 * dVar2;
  if (param_5 != (undefined8 *)0x0) {
    param_5[2] = dVar3;
    param_5[3] = dVar4;
    param_5[1] = param_1;
    *param_5 = 0;
  }
  if (param_1 == 0.0) {
    if (dVar3 == 0.0) {
      if (param_3 != 0 && param_4 != 0) {
        func_0x000108353768(0x3ff0000000000000,0,0x3ff0000000000000,0);
      }
      uVar1 = 4;
      if (dVar4 == 0.0) {
        uVar1 = 5;
      }
    }
    else {
      if (param_3 != 0 && param_4 != 0) {
        func_0x000108353768(dVar4,dVar3 * 3.0,0x3ff0000000000000,0);
      }
      uVar1 = 3;
    }
  }
  else {
    dVar2 = param_1 * -4.0 * dVar4 + dVar3 * dVar3 * 3.0;
    if (dVar2 <= 0.0) {
      if (0.0 <= dVar2) {
        if (param_3 != 0 && param_4 != 0) {
          func_0x000108353768(dVar3,param_1 + param_1,dVar3,param_1 + param_1);
        }
        uVar1 = 2;
      }
      else {
        if (param_3 != 0 && param_4 != 0) {
          dVar2 = dVar3 + (double)((ulong)SQRT(-dVar2) ^
                                  ((ulong)SQRT(-dVar2) ^ (ulong)dVar3) & 0x8007ffffffffffff);
          dVar3 = -(param_1 * dVar4) + dVar3 * dVar3;
          func_0x000108353768(dVar2,param_1 + param_1,dVar3 + dVar3,param_1 * dVar2);
        }
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
      if ((param_3 != 0) && (param_4 != 0)) {
        dVar3 = (double)((ulong)SQRT(dVar2 * 3.0) ^
                        ((ulong)SQRT(dVar2 * 3.0) ^ (ulong)dVar3) & 0x8007ffffffffffff) +
                dVar3 * 3.0;
        func_0x000108353768(dVar3,param_1 * 6.0,dVar4 + dVar4,dVar3,0);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



/* Entry: 108352238; end: 1083522d7;  */

double FUN_108352238(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = NEON_ext(*param_2,*param_3,4,1);
  dVar4 = (double)(float)((ulong)uVar3 >> 0x20);
  uVar1 = NEON_ext(*param_3,*param_2,4,1);
  dVar2 = (double)(float)((ulong)uVar1 >> 0x20);
  return -dVar4 * (double)(float)uVar3 + (double)(float)uVar1 * dVar2 +
         ((double)(float)uVar3 - (double)(float)uVar1) * (double)(float)*param_1 +
         (dVar4 - dVar2) * (double)(float)((ulong)*param_1 >> 0x20);
}



/* Entry: 1083522d8; end: 10835259b;  */

float * FUN_1083522d8(void)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float *unaff_x19;
  long unaff_x20;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_88 [4];
  float afStack_78 [4];
  undefined8 uStack_68;
  
  func_0x000108353830();
  func_0x000108353758();
  uStack_68 = extraout_x8;
  FUN_10835259c();
  pfVar5 = (float *)(unaff_x20 + 4);
  pfVar3 = afStack_88;
  FUN_10835259c();
  uVar6 = 0;
  while( true ) {
    bVar1 = 0xf < uVar6;
    bVar2 = uVar6 == 0x10;
    if (bVar2) break;
    *(float *)((long)afStack_78 + uVar6) =
         *(float *)((long)afStack_88 + uVar6) + *(float *)((long)afStack_78 + uVar6);
    uVar6 = uVar6 + 4;
  }
  func_0x000108353924();
  if (bVar1 && !bVar2) {
    afStack_78[0] = 1.0 / afStack_78[0];
    fVar13 = afStack_78[0] * afStack_78[1];
    fVar15 = (afStack_78[0] * afStack_78[2] * -3.0 + fVar13 * fVar13) / 9.0;
    fVar14 = (-(afStack_78[0] * afStack_78[2] * fVar13 * 9.0) + fVar13 * fVar13 * (fVar13 + fVar13)
             + afStack_78[0] * afStack_78[3] * 27.0) / 54.0;
    fVar10 = fVar15 * fVar15 * fVar15;
    fVar11 = fVar14 * fVar14 - fVar10;
    if (0.0 <= fVar11) {
      fVar11 = ABS(fVar14) + SQRT(fVar11);
      _powf(fVar11,0x3eaaaaaa);
      fVar10 = -fVar11;
      if (fVar14 <= 0.0) {
        fVar10 = fVar11;
      }
      if (fVar11 != 0.0) {
        fVar10 = fVar10 + fVar15 / fVar10;
      }
      fVar10 = fVar10 - fVar13 / 3.0;
      bVar2 = fVar10 == 1.0;
      fVar14 = 1.0;
      if (fVar10 <= 1.0) {
        fVar14 = fVar10;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      *unaff_x19 = fVar14;
      pfVar5 = (float *)0x1;
    }
    else {
      fVar14 = fVar14 / SQRT(fVar10);
      fVar10 = 1.0;
      if (fVar14 <= 1.0) {
        fVar10 = fVar14;
      }
      if (fVar10 <= -1.0) {
        fVar10 = -1.0;
      }
      _acosf();
      fVar10 = fVar10 / 3.0;
      _cosf(fVar10,0xc0000000);
      func_0x000108353898();
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      *unaff_x19 = fVar10;
      fVar10 = 6.2831855;
      func_0x0001083538b8();
      func_0x000108353898();
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      unaff_x19[1] = fVar10;
      fVar10 = -6.2831855;
      func_0x0001083538b8();
      func_0x000108353898();
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      pfVar5 = unaff_x19 + 2;
      *pfVar5 = fVar10;
      uVar7 = 3;
      lVar8 = 2;
      while (1 < uVar7) {
        uVar7 = uVar7 - 1;
        pfVar4 = pfVar5;
        lVar9 = lVar8;
        while (0 < lVar9) {
          fVar10 = pfVar4[-1];
          if (*pfVar4 < fVar10) {
            pfVar4[-1] = *pfVar4;
            *pfVar4 = fVar10;
          }
          pfVar4 = pfVar4 + -1;
          lVar9 = lVar9 + -1;
        }
        lVar8 = lVar8 + -1;
        pfVar5 = pfVar5 + -1;
      }
      lVar8 = 2;
      pfVar5 = (float *)0x3;
      for (uVar6 = 3; bVar2 = uVar6 == 2, 1 < uVar6; uVar6 = uVar6 - 1) {
        pfVar4 = unaff_x19 + 1;
        lVar9 = lVar8;
        if (*unaff_x19 == *pfVar4) {
          for (; lVar9 != 0; lVar9 = lVar9 + -1) {
            pfVar4[-1] = *pfVar4;
            pfVar4 = pfVar4 + 1;
          }
          pfVar5 = (float *)(ulong)((int)pfVar5 - 1);
          pfVar4 = unaff_x19;
        }
        lVar8 = lVar8 + -1;
        unaff_x19 = pfVar4;
      }
    }
    func_0x000108353734(uStack_68);
    if (bVar2) {
      return pfVar5;
    }
  }
  else {
    uVar6 = (ulong)(uint)afStack_78[1];
    uVar12 = (ulong)(uint)afStack_78[3];
    func_0x000108353734(uStack_68);
    if (bVar2) {
      if ((float)uVar6 == 0.0) {
        fVar11 = -(float)uVar12;
        pfVar5 = (float *)0x0;
        fVar14 = -fVar11;
        fVar10 = -afStack_78[2];
        if (0.0 <= fVar11) {
          fVar14 = fVar11;
          fVar10 = afStack_78[2];
        }
        if (fVar11 != 0.0) {
          bVar2 = false;
          bVar1 = false;
          if (afStack_78[2] != 0.0) {
            bVar2 = false;
            bVar1 = true;
            if (!NAN(fVar14) && !NAN(fVar10)) {
              bVar2 = fVar14 < fVar10;
              bVar1 = false;
            }
          }
          if (bVar2 != bVar1) {
            pfVar5 = (float *)0x0;
            fVar14 = fVar14 / fVar10;
            if ((fVar14 != 0.0) && (!NAN(fVar14))) {
              *unaff_x19 = fVar14;
              pfVar5 = (float *)0x1;
            }
          }
        }
        return pfVar5;
      }
      fVar10 = (float)uVar6 * -4.0 * (float)uVar12 + afStack_78[2] * afStack_78[2];
      if ((fVar10 < 0.0) || (fVar10 = SQRT(fVar10), NAN(fVar10 - fVar10))) {
        pfVar5 = (float *)0x0;
      }
      else {
        fVar14 = -fVar10;
        if (0.0 <= afStack_78[2]) {
          fVar14 = fVar10;
        }
        fVar10 = (afStack_78[2] + fVar14) * -0.5;
        pfVar3 = unaff_x19;
        FUN_108351408(fVar10,uVar6);
        pfVar4 = unaff_x19 + ((ulong)pfVar3 & 0xffffffff);
        FUN_108351408(uVar12,fVar10);
        pfVar5 = unaff_x19 + ((ulong)pfVar3 & 0xffffffff) + ((ulong)pfVar4 & 0xffffffff);
        if (((ulong)pfVar4 & 0xffffffff) + ((ulong)pfVar3 & 0xffffffff) == 2) {
          fVar10 = *unaff_x19;
          fVar14 = unaff_x19[1];
          if (fVar10 <= fVar14) {
            if (fVar10 == fVar14) {
              pfVar5 = pfVar5 + -1;
            }
          }
          else {
            *unaff_x19 = fVar14;
            unaff_x19[1] = fVar10;
          }
        }
        pfVar5 = (float *)((ulong)((long)pfVar5 - (long)unaff_x19) >> 2);
      }
      return pfVar5;
    }
  }
  ___stack_chk_fail();
  fVar10 = pfVar5[2];
  fVar11 = *pfVar5;
  fVar13 = fVar11 + pfVar5[4] + fVar10 * -2.0;
  fVar14 = (pfVar5[6] + (fVar10 - pfVar5[4]) * 3.0) - fVar11;
  *pfVar3 = fVar14 * fVar14;
  pfVar3[1] = fVar13 * 3.0 * fVar14;
  pfVar3[2] = (fVar10 - fVar11) * fVar14 + fVar13 * (fVar13 + fVar13);
  pfVar3[3] = (fVar10 - fVar11) * fVar13;
  return pfVar5;
}



/* Entry: 10835259c; end: 1083525f3;  */

void FUN_10835259c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[2];
  fVar3 = *param_1;
  fVar4 = fVar3 + param_1[4] + fVar1 * -2.0;
  fVar2 = (param_1[6] + (fVar1 - param_1[4]) * 3.0) - fVar3;
  *param_2 = fVar2 * fVar2;
  param_2[1] = fVar4 * 3.0 * fVar2;
  param_2[2] = (fVar1 - fVar3) * fVar2 + fVar4 * (fVar4 + fVar4);
  param_2[3] = (fVar1 - fVar3) * fVar4;
  return;
}



/* Entry: 1083525f4; end: 1083526bb;  */

float * FUN_1083525f4(float *param_1,undefined8 param_2,double *param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  float *pfVar6;
  double *pdVar7;
  double *pdVar8;
  float *pfVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  ulong uVar11;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 uVar12;
  undefined8 extraout_x9;
  long lVar13;
  long extraout_x9_00;
  double *pdVar14;
  double *extraout_x9_01;
  float *unaff_x19;
  float *unaff_x20;
  int iVar15;
  double *pdVar16;
  double *pdVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar31;
  float fVar33;
  ulong unaff_d11;
  float fVar34;
  ulong unaff_d12;
  float fVar35;
  float fVar36;
  undefined1 auStack_300 [72];
  undefined8 uStack_2b8;
  double *pdStack_2b0;
  double *pdStack_2a8;
  undefined1 *puStack_2a0;
  double *pdStack_298;
  undefined1 *****pppppuStack_290;
  code *pcStack_288;
  double adStack_280 [4];
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  float *pfStack_230;
  float *pfStack_228;
  undefined1 ****ppppuStack_220;
  code *pcStack_218;
  undefined1 auStack_190 [72];
  undefined8 uStack_148;
  double *pdStack_140;
  double *pdStack_138;
  float *pfStack_130;
  float *pfStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  float afStack_110 [2];
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  float fStack_e8;
  float afStack_e4 [3];
  undefined8 uStack_d8;
  undefined1 *puStack_70;
  code *pcStack_68;
  float afStack_60 [3];
  double dStack_54;
  undefined8 uStack_48;
  ulong uVar30;
  ulong uVar32;
  
  pfVar9 = afStack_60;
  func_0x000108353830();
  func_0x000108353758();
  pdVar17 = &dStack_54;
  if (param_3 != (double *)0x0) {
    pdVar17 = param_3;
  }
  uStack_48 = extraout_x8;
  FUN_1083522d8();
  lVar10 = 0;
  pdVar16 = (double *)0x0;
  while( true ) {
    uVar4 = (ulong)((uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU)) << 2 == lVar10;
    iVar15 = (int)pdVar16;
    if ((bool)uVar4) break;
    fVar22 = *(float *)((long)afStack_60 + lVar10);
    bVar2 = false;
    if ((0.0 < fVar22) && (bVar2 = false, !NAN(fVar22))) {
      bVar2 = fVar22 < 1.0;
    }
    if (bVar2) {
      *(float *)((long)pdVar17 + (long)iVar15 * 4) = fVar22;
      pdVar16 = (double *)(ulong)(iVar15 + 1);
    }
    lVar10 = lVar10 + 4;
  }
  if (unaff_x19 != (float *)0x0) {
    if (iVar15 == 0) {
      uVar12 = *(undefined8 *)unaff_x20;
      uVar28 = *(undefined8 *)(unaff_x20 + 6);
      uVar27 = *(undefined8 *)(unaff_x20 + 4);
      *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x20 + 2);
      *(undefined8 *)unaff_x19 = uVar12;
      *(undefined8 *)(unaff_x19 + 6) = uVar28;
      *(undefined8 *)(unaff_x19 + 4) = uVar27;
    }
    else {
      func_0x0001083537c0();
      param_3 = pdVar17;
      FUN_108351cbc();
    }
  }
  func_0x000108353734(uStack_48);
  if ((bool)uVar4) {
    return (float *)(ulong)(iVar15 + 1);
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1083526bc;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000108353758();
  fVar22 = *param_1;
  fVar35 = param_1[1];
  fVar29 = param_1[2];
  uVar30 = (ulong)(uint)fVar29;
  fVar31 = param_1[3];
  uVar32 = (ulong)(uint)fVar31;
  uVar11 = 0xbf800000;
  uVar4 = false;
  if ((fVar22 == fVar29) && (uVar4 = false, !NAN(fVar35) && !NAN(fVar31))) {
    uVar4 = fVar35 == fVar31;
  }
  pfVar6 = param_1;
  uStack_d8 = extraout_x8_00;
  if (!(bool)uVar4) {
    fVar33 = param_1[4];
    unaff_d11 = (ulong)(uint)fVar33;
    fVar34 = param_1[5];
    unaff_d12 = (ulong)(uint)fVar34;
    fVar36 = param_1[7];
    uVar4 = false;
    if ((fVar33 == param_1[6]) && (uVar4 = false, !NAN(fVar34) && !NAN(fVar36))) {
      uVar4 = fVar34 == fVar36;
    }
    unaff_x19 = param_1;
    if (!(bool)uVar4) {
      pfVar9 = (float *)0x0;
      param_3 = (double *)0x2;
      fStack_e8 = param_1[6];
      FUN_108352824();
      if (((ulong)pfVar6 & 1) == 0) {
        pfVar9 = (float *)0x2;
        param_3 = (double *)0x0;
        pfVar6 = param_1;
        FUN_108352824();
        if (((ulong)pfVar6 & 1) == 0) {
          unaff_x20 = afStack_e4;
          pfVar9 = afStack_e4;
          pfVar6 = param_1;
          FUN_1083522d8();
          fVar22 = fVar29 - fVar22;
          fVar23 = 1e-08;
          fVar22 = ((fVar31 - fVar35) * (fVar31 - fVar35) + fVar22 * fVar22 +
                    (fVar34 - fVar31) * (fVar34 - fVar31) + (fVar33 - fVar29) * (fVar33 - fVar29) +
                   (fVar36 - fVar34) * (fVar36 - fVar34) +
                   (fStack_e8 - fVar33) * (fStack_e8 - fVar33)) * 1e-08;
          uVar30 = (ulong)(uint)fVar22;
          pdVar17 = (double *)
                    ((ulong)((uint)pfVar6 & ((int)(uint)pfVar6 >> 0x1f ^ 0xffffffffU)) << 2);
          uVar32 = 0x3f800000;
          for (pdVar16 = (double *)0x0; uVar4 = pdVar17 == pdVar16, !(bool)uVar4;
              pdVar16 = (double *)((long)pdVar16 + 4)) {
            fVar29 = *(float *)((long)unaff_x20 + (long)pdVar16);
            uVar11 = (ulong)(uint)fVar29;
            bVar2 = false;
            bVar3 = false;
            if (0.0 < fVar29) {
              bVar2 = false;
              bVar3 = true;
              if (!NAN(fVar29)) {
                bVar2 = fVar29 < 1.0;
                bVar3 = false;
              }
            }
            if (bVar2 != bVar3) {
              pfVar6 = param_1;
              uVar18 = uVar11;
              FUN_1083519fc();
              fVar23 = fVar23 * fVar23;
              fVar29 = fVar23 + (float)uVar18 * (float)uVar18;
              uVar4 = fVar29 == fVar22;
              if (fVar29 < fVar22) goto LAB_1083527ec;
            }
          }
          uVar11 = 0xbf800000;
        }
      }
    }
  }
LAB_1083527ec:
  func_0x000108353734(uStack_d8);
  if ((bool)uVar4) {
    return pfVar6;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_108352824;
  ppuStack_100 = &puStack_70;
  func_0x000108353748(0);
  pfVar1 = pfVar6 + ((ulong)param_3 & 0xffffffff) * 2;
  fVar22 = *pfVar1;
  fVar29 = pfVar1[1];
  fVar31 = pfVar1[2] - fVar22;
  uVar18 = (ulong)(uint)fVar31;
  fVar33 = pfVar1[3] - fVar29;
  dVar26 = (double)(ulong)(uint)fVar33;
  pfVar6 = pfVar6 + ((ulong)pfVar9 & 0xffffffff) * 2 + 1;
  uStack_108 = extraout_x9;
  for (lVar10 = extraout_x8_01; lVar10 != 8; lVar10 = lVar10 + 4) {
    *(float *)((long)afStack_110 + lVar10) =
         -((pfVar6[-1] - fVar22) * fVar33) + (*pfVar6 - fVar29) * fVar31;
    pfVar6 = pfVar6 + 2;
  }
  dVar24 = (double)(ulong)(uint)afStack_110[1];
  afStack_110[0] = afStack_110[0] * afStack_110[1];
  dVar19 = (double)(ulong)(uint)afStack_110[0];
  uVar4 = afStack_110[0] == 0.0;
  pfVar6 = (float *)(ulong)(0.0 <= afStack_110[0]);
  func_0x000108353734(uStack_108);
  if ((bool)uVar4) {
    return pfVar6;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1083528b4;
  pdStack_140 = pdVar17;
  pdStack_138 = pdVar16;
  pfStack_130 = unaff_x20;
  pfStack_128 = unaff_x19;
  pppuStack_120 = &ppuStack_100;
  func_0x000108353748(auStack_190);
  func_0x000108353784();
  FUN_10835291c();
  if ((int)pfVar6 != 0) {
    func_0x00010835381c();
    lVar10 = 0;
    while (uVar4 = lVar10 == 7, !(bool)uVar4) {
      func_0x000108353938();
      lVar10 = extraout_x8_02;
    }
  }
  func_0x000108353734(uStack_148);
  if ((bool)uVar4) {
    return pfVar6;
  }
  ___stack_chk_fail();
  pdVar8 = adStack_280;
  pdVar7 = adStack_280;
  pdVar14 = adStack_280;
  pcStack_218 = FUN_10835291c;
  dVar20 = dVar19;
  uStack_260 = (ulong)(uint)fVar35;
  uStack_258 = unaff_d12;
  uStack_250 = unaff_d11;
  uStack_248 = uVar32;
  uStack_240 = uVar30;
  uStack_238 = uVar11;
  pfStack_230 = pfVar6;
  pfStack_228 = pfVar9;
  ppppuStack_220 = &pppuStack_120;
  func_0x000108353758();
  adStack_280[3] = (double)extraout_x8_03;
  func_0x00010840e1d0();
  adStack_280[0] = 0.0;
  adStack_280[1] = 0.0;
  adStack_280[2] = 0.0;
  dVar21 = dVar20;
  dVar25 = dVar24;
  FUN_10840e700();
  uVar5 = (uint)pdVar8;
  if (uVar5 == 0) goto LAB_1083529f0;
  lVar10 = 0;
  lVar13 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) << 3;
  do {
    uVar4 = lVar13 == lVar10;
    if ((bool)uVar4) {
      FUN_10840e86c(dVar20,dVar24,uVar18,dVar26 - dVar19);
      uVar5 = (uint)pdVar7;
      pdVar8 = pdVar7;
      dVar21 = dVar20;
      if (uVar5 == 0) goto LAB_1083529f0;
      uVar11 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
      goto LAB_1083529d0;
    }
    dVar21 = *(double *)((long)adStack_280 + lVar10);
    func_0x0001083538f0();
    lVar10 = extraout_x8_04 + 8;
    uVar4 = dVar25 == 1e-05;
    lVar13 = extraout_x9_00;
  } while (1e-05 <= dVar25);
  goto LAB_1083529e8;
  while( true ) {
    dVar21 = *pdVar14;
    func_0x0001083538f0();
    uVar11 = extraout_x8_05 - 1;
    uVar4 = dVar24 == 1e-05;
    pdVar14 = extraout_x9_01;
    if (dVar24 < 1e-05) break;
LAB_1083529d0:
    if (uVar11 == 0) {
      pdVar8 = (double *)0x0;
      goto LAB_1083529f0;
    }
  }
LAB_1083529e8:
  *param_3 = dVar21;
  pdVar8 = (double *)(float *)0x1;
LAB_1083529f0:
  func_0x000108353734(adStack_280[3]);
  if ((bool)uVar4) {
    return (float *)pdVar8;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_108352a24;
  pdStack_2b0 = pdVar17;
  pdStack_2a8 = pdVar16;
  puStack_2a0 = (undefined1 *)adStack_280;
  pdStack_298 = param_3;
  pppppuStack_290 = &ppppuStack_220;
  func_0x000108353748(auStack_300);
  func_0x000108353784();
  pfVar6 = (float *)0x0;
  FUN_10835291c();
  fVar22 = SUB84(dVar21,0);
  pfVar9 = (float *)pdVar8;
  if ((int)pdVar8 != 0) {
    func_0x00010835381c();
    lVar10 = 0;
    while( true ) {
      fVar22 = SUB84(dVar21,0);
      uVar4 = 1;
      if (lVar10 == 7) break;
      func_0x000108353938();
      lVar10 = extraout_x8_06;
    }
  }
  func_0x000108353734(uStack_2b8);
  if ((bool)uVar4) {
    return (float *)pdVar8;
  }
  ___stack_chk_fail();
  fVar31 = pfVar9[6];
  fVar33 = fVar22 * (fVar31 + -1.0) + 1.0;
  fVar34 = fVar31 + fVar22 * (1.0 - fVar31);
  uVar12 = *(undefined8 *)pfVar9;
  uVar27 = *(undefined8 *)(pfVar9 + 2);
  uVar28 = *(undefined8 *)(pfVar9 + 4);
  *(undefined8 *)pfVar6 = uVar12;
  fVar35 = (float)uVar27 * fVar31;
  fVar31 = fVar31 * (float)((ulong)uVar27 >> 0x20);
  fVar23 = (float)((ulong)uVar12 >> 0x20);
  fVar36 = (float)uVar12 + (fVar35 - (float)uVar12) * fVar22;
  fVar23 = fVar23 + (fVar31 - fVar23) * fVar22;
  fVar35 = fVar35 + ((float)uVar28 - fVar35) * fVar22;
  fVar31 = fVar31 + ((float)((ulong)uVar28 >> 0x20) - fVar31) * fVar22;
  fVar29 = fVar33 + fVar22 * (fVar34 - fVar33);
  pfVar6[2] = fVar36 / fVar33;
  pfVar6[3] = fVar23 / fVar33;
  uVar12 = CONCAT44((fVar23 + (fVar31 - fVar23) * fVar22) / fVar29,
                    (fVar36 + (fVar35 - fVar36) * fVar22) / fVar29);
  *(undefined8 *)(pfVar6 + 4) = uVar12;
  *(undefined8 *)(pfVar6 + 7) = uVar12;
  *(ulong *)(pfVar6 + 9) = CONCAT44(fVar31 / fVar34,fVar35 / fVar34);
  *(undefined8 *)(pfVar6 + 0xb) = *(undefined8 *)(pfVar9 + 4);
  pfVar6[6] = fVar33 / SQRT(fVar29);
  pfVar6[0xd] = fVar34 / SQRT(fVar29);
  fVar22 = *pfVar6 - *pfVar6;
  for (lVar10 = 1; lVar10 < 0xe; lVar10 = lVar10 + 1) {
    fVar22 = fVar22 * pfVar6[lVar10];
  }
  return (float *)(ulong)!NAN(fVar22);
}



/* Entry: 1083526bc; end: 108352823;  */

float * FUN_1083526bc(float *param_1,float *param_2,double *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  double *pdVar6;
  double *pdVar7;
  float *pfVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  ulong uVar10;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 uVar11;
  undefined8 extraout_x9;
  long lVar12;
  long extraout_x9_00;
  double *pdVar13;
  double *extraout_x9_01;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar26;
  float fVar28;
  ulong unaff_d11;
  float fVar29;
  ulong unaff_d12;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_2a0 [72];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  double *pdStack_238;
  undefined1 ****ppppuStack_230;
  code *pcStack_228;
  double adStack_220 [4];
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  float *pfStack_1d0;
  float *pfStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_130 [72];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  float *pfStack_d0;
  float *pfStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  float afStack_b0 [2];
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  float fStack_88;
  float afStack_84 [3];
  undefined8 uStack_78;
  ulong uVar25;
  ulong uVar27;
  
  func_0x000108353758();
  fVar32 = *param_1;
  fVar30 = param_1[1];
  fVar24 = param_1[2];
  uVar25 = (ulong)(uint)fVar24;
  fVar26 = param_1[3];
  uVar27 = (ulong)(uint)fVar26;
  uVar10 = 0xbf800000;
  uVar2 = false;
  if ((fVar32 == fVar24) && (uVar2 = false, !NAN(fVar30) && !NAN(fVar26))) {
    uVar2 = fVar30 == fVar26;
  }
  pfVar5 = param_1;
  uStack_78 = extraout_x8;
  if (!(bool)uVar2) {
    fVar28 = param_1[4];
    unaff_d11 = (ulong)(uint)fVar28;
    fVar29 = param_1[5];
    unaff_d12 = (ulong)(uint)fVar29;
    fVar31 = param_1[7];
    uVar2 = false;
    if ((fVar28 == param_1[6]) && (uVar2 = false, !NAN(fVar29) && !NAN(fVar31))) {
      uVar2 = fVar29 == fVar31;
    }
    unaff_x19 = param_1;
    if (!(bool)uVar2) {
      param_2 = (float *)0x0;
      param_3 = (double *)0x2;
      fStack_88 = param_1[6];
      FUN_108352824();
      if (((ulong)pfVar5 & 1) == 0) {
        param_2 = (float *)0x2;
        param_3 = (double *)0x0;
        pfVar5 = param_1;
        FUN_108352824();
        if (((ulong)pfVar5 & 1) == 0) {
          unaff_x20 = afStack_84;
          param_2 = afStack_84;
          pfVar5 = param_1;
          FUN_1083522d8();
          fVar32 = fVar24 - fVar32;
          fVar18 = 1e-08;
          fVar32 = ((fVar26 - fVar30) * (fVar26 - fVar30) + fVar32 * fVar32 +
                    (fVar29 - fVar26) * (fVar29 - fVar26) + (fVar28 - fVar24) * (fVar28 - fVar24) +
                   (fVar31 - fVar29) * (fVar31 - fVar29) +
                   (fStack_88 - fVar28) * (fStack_88 - fVar28)) * 1e-08;
          uVar25 = (ulong)(uint)fVar32;
          unaff_x22 = (ulong)((uint)pfVar5 & ((int)(uint)pfVar5 >> 0x1f ^ 0xffffffffU)) << 2;
          uVar27 = 0x3f800000;
          for (unaff_x21 = 0; uVar2 = unaff_x22 == unaff_x21, !(bool)uVar2;
              unaff_x21 = unaff_x21 + 4) {
            fVar24 = *(float *)((long)unaff_x20 + unaff_x21);
            uVar10 = (ulong)(uint)fVar24;
            bVar1 = false;
            bVar3 = false;
            if (0.0 < fVar24) {
              bVar1 = false;
              bVar3 = true;
              if (!NAN(fVar24)) {
                bVar1 = fVar24 < 1.0;
                bVar3 = false;
              }
            }
            if (bVar1 != bVar3) {
              pfVar5 = param_1;
              uVar14 = uVar10;
              FUN_1083519fc();
              fVar18 = fVar18 * fVar18;
              fVar24 = fVar18 + (float)uVar14 * (float)uVar14;
              uVar2 = fVar24 == fVar32;
              if (fVar24 < fVar32) goto LAB_1083527ec;
            }
          }
          uVar10 = 0xbf800000;
        }
      }
    }
  }
LAB_1083527ec:
  func_0x000108353734(uStack_78);
  if ((bool)uVar2) {
    return pfVar5;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108352824;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000108353748(0);
  pfVar8 = pfVar5 + ((ulong)param_3 & 0xffffffff) * 2;
  fVar32 = *pfVar8;
  fVar24 = pfVar8[1];
  fVar26 = pfVar8[2] - fVar32;
  uVar14 = (ulong)(uint)fVar26;
  fVar28 = pfVar8[3] - fVar24;
  dVar21 = (double)(ulong)(uint)fVar28;
  pfVar5 = pfVar5 + ((ulong)param_2 & 0xffffffff) * 2 + 1;
  uStack_a8 = extraout_x9;
  for (lVar9 = extraout_x8_00; lVar9 != 8; lVar9 = lVar9 + 4) {
    *(float *)((long)afStack_b0 + lVar9) =
         -((pfVar5[-1] - fVar32) * fVar28) + (*pfVar5 - fVar24) * fVar26;
    pfVar5 = pfVar5 + 2;
  }
  dVar19 = (double)(ulong)(uint)afStack_b0[1];
  afStack_b0[0] = afStack_b0[0] * afStack_b0[1];
  dVar15 = (double)(ulong)(uint)afStack_b0[0];
  uVar2 = afStack_b0[0] == 0.0;
  pfVar5 = (float *)(ulong)(0.0 <= afStack_b0[0]);
  func_0x000108353734(uStack_a8);
  if ((bool)uVar2) {
    return pfVar5;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1083528b4;
  lStack_e0 = unaff_x22;
  lStack_d8 = unaff_x21;
  pfStack_d0 = unaff_x20;
  pfStack_c8 = unaff_x19;
  ppuStack_c0 = &puStack_a0;
  func_0x000108353748(auStack_130);
  func_0x000108353784();
  FUN_10835291c();
  if ((int)pfVar5 != 0) {
    func_0x00010835381c();
    lVar9 = 0;
    while (uVar2 = lVar9 == 7, !(bool)uVar2) {
      func_0x000108353938();
      lVar9 = extraout_x8_01;
    }
  }
  func_0x000108353734(uStack_e8);
  if ((bool)uVar2) {
    return pfVar5;
  }
  ___stack_chk_fail();
  pdVar7 = adStack_220;
  pdVar6 = adStack_220;
  pdVar13 = adStack_220;
  pcStack_1b8 = FUN_10835291c;
  dVar16 = dVar15;
  uStack_200 = (ulong)(uint)fVar30;
  uStack_1f8 = unaff_d12;
  uStack_1f0 = unaff_d11;
  uStack_1e8 = uVar27;
  uStack_1e0 = uVar25;
  uStack_1d8 = uVar10;
  pfStack_1d0 = pfVar5;
  pfStack_1c8 = param_2;
  pppuStack_1c0 = &ppuStack_c0;
  func_0x000108353758();
  adStack_220[3] = (double)extraout_x8_02;
  func_0x00010840e1d0();
  adStack_220[0] = 0.0;
  adStack_220[1] = 0.0;
  adStack_220[2] = 0.0;
  dVar17 = dVar16;
  dVar20 = dVar19;
  FUN_10840e700();
  uVar4 = (uint)pdVar7;
  if (uVar4 == 0) goto LAB_1083529f0;
  lVar9 = 0;
  lVar12 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 3;
  do {
    uVar2 = lVar12 == lVar9;
    if ((bool)uVar2) {
      FUN_10840e86c(dVar16,dVar19,uVar14,dVar21 - dVar15);
      uVar4 = (uint)pdVar6;
      pdVar7 = pdVar6;
      dVar17 = dVar16;
      if (uVar4 == 0) goto LAB_1083529f0;
      uVar10 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
      goto LAB_1083529d0;
    }
    dVar17 = *(double *)((long)adStack_220 + lVar9);
    func_0x0001083538f0();
    lVar9 = extraout_x8_03 + 8;
    uVar2 = dVar20 == 1e-05;
    lVar12 = extraout_x9_00;
  } while (1e-05 <= dVar20);
  goto LAB_1083529e8;
  while( true ) {
    dVar17 = *pdVar13;
    func_0x0001083538f0();
    uVar10 = extraout_x8_04 - 1;
    uVar2 = dVar19 == 1e-05;
    pdVar13 = extraout_x9_01;
    if (dVar19 < 1e-05) break;
LAB_1083529d0:
    if (uVar10 == 0) {
      pdVar7 = (double *)0x0;
      goto LAB_1083529f0;
    }
  }
LAB_1083529e8:
  *param_3 = dVar17;
  pdVar7 = (double *)(float *)0x1;
LAB_1083529f0:
  func_0x000108353734(adStack_220[3]);
  if ((bool)uVar2) {
    return (float *)pdVar7;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_108352a24;
  lStack_250 = unaff_x22;
  lStack_248 = unaff_x21;
  puStack_240 = (undefined1 *)adStack_220;
  pdStack_238 = param_3;
  ppppuStack_230 = &pppuStack_1c0;
  func_0x000108353748(auStack_2a0);
  func_0x000108353784();
  pfVar8 = (float *)0x0;
  FUN_10835291c();
  fVar32 = SUB84(dVar17,0);
  pfVar5 = (float *)pdVar7;
  if ((int)pdVar7 != 0) {
    func_0x00010835381c();
    lVar9 = 0;
    while( true ) {
      fVar32 = SUB84(dVar17,0);
      uVar2 = 1;
      if (lVar9 == 7) break;
      func_0x000108353938();
      lVar9 = extraout_x8_05;
    }
  }
  func_0x000108353734(uStack_258);
  if ((bool)uVar2) {
    return (float *)pdVar7;
  }
  ___stack_chk_fail();
  fVar26 = pfVar5[6];
  fVar28 = fVar32 * (fVar26 + -1.0) + 1.0;
  fVar29 = fVar26 + fVar32 * (1.0 - fVar26);
  uVar11 = *(undefined8 *)pfVar5;
  uVar22 = *(undefined8 *)(pfVar5 + 2);
  uVar23 = *(undefined8 *)(pfVar5 + 4);
  *(undefined8 *)pfVar8 = uVar11;
  fVar30 = (float)uVar22 * fVar26;
  fVar26 = fVar26 * (float)((ulong)uVar22 >> 0x20);
  fVar18 = (float)((ulong)uVar11 >> 0x20);
  fVar31 = (float)uVar11 + (fVar30 - (float)uVar11) * fVar32;
  fVar18 = fVar18 + (fVar26 - fVar18) * fVar32;
  fVar30 = fVar30 + ((float)uVar23 - fVar30) * fVar32;
  fVar26 = fVar26 + ((float)((ulong)uVar23 >> 0x20) - fVar26) * fVar32;
  fVar24 = fVar28 + fVar32 * (fVar29 - fVar28);
  pfVar8[2] = fVar31 / fVar28;
  pfVar8[3] = fVar18 / fVar28;
  uVar11 = CONCAT44((fVar18 + (fVar26 - fVar18) * fVar32) / fVar24,
                    (fVar31 + (fVar30 - fVar31) * fVar32) / fVar24);
  *(undefined8 *)(pfVar8 + 4) = uVar11;
  *(undefined8 *)(pfVar8 + 7) = uVar11;
  *(ulong *)(pfVar8 + 9) = CONCAT44(fVar26 / fVar29,fVar30 / fVar29);
  *(undefined8 *)(pfVar8 + 0xb) = *(undefined8 *)(pfVar5 + 4);
  pfVar8[6] = fVar28 / SQRT(fVar24);
  pfVar8[0xd] = fVar29 / SQRT(fVar24);
  fVar32 = *pfVar8 - *pfVar8;
  for (lVar9 = 1; lVar9 < 0xe; lVar9 = lVar9 + 1) {
    fVar32 = fVar32 * pfVar8[lVar9];
  }
  return (float *)(ulong)!NAN(fVar32);
}



/* Entry: 108352824; end: 1083528b3;  */

undefined8 * FUN_108352824(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 uVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  ulong uVar10;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 uVar11;
  undefined8 extraout_x9;
  long lVar12;
  long extraout_x9_00;
  double *pdVar13;
  double *extraout_x9_01;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_210 [72];
  undefined8 uStack_1c8;
  double adStack_190 [4];
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  float afStack_20 [2];
  undefined8 uStack_18;
  double dVar25;
  
  uVar8 = (undefined4)((ulong)param_3 >> 0x20);
  uVar7 = (uint)param_3;
  func_0x000108353748(0);
  pfVar6 = (float *)(param_1 + (ulong)uVar7 * 8);
  fVar14 = *pfVar6;
  fVar18 = pfVar6[1];
  fVar21 = pfVar6[2] - fVar14;
  uVar10 = (ulong)(uint)fVar21;
  fVar23 = pfVar6[3] - fVar18;
  dVar25 = (double)(ulong)(uint)fVar23;
  pfVar6 = (float *)(param_1 + (param_2 & 0xffffffff) * 8 + 4);
  uStack_18 = extraout_x9;
  for (lVar9 = extraout_x8; lVar9 != 8; lVar9 = lVar9 + 4) {
    *(float *)((long)afStack_20 + lVar9) =
         -((pfVar6[-1] - fVar14) * fVar23) + (*pfVar6 - fVar18) * fVar21;
    pfVar6 = pfVar6 + 2;
  }
  dVar19 = (double)(ulong)(uint)afStack_20[1];
  afStack_20[0] = afStack_20[0] * afStack_20[1];
  dVar15 = (double)(ulong)(uint)afStack_20[0];
  uVar1 = afStack_20[0] == 0.0;
  puVar3 = (undefined8 *)(ulong)(0.0 <= afStack_20[0]);
  func_0x000108353734(uStack_18);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000108353748(auStack_a0);
  func_0x000108353784();
  FUN_10835291c();
  if ((int)puVar3 != 0) {
    func_0x00010835381c();
    lVar9 = 0;
    while (uVar1 = lVar9 == 7, !(bool)uVar1) {
      func_0x000108353938();
      lVar9 = extraout_x8_00;
    }
  }
  func_0x000108353734(uStack_58);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  pdVar5 = adStack_190;
  pdVar4 = adStack_190;
  pdVar13 = adStack_190;
  dVar16 = dVar15;
  func_0x000108353758();
  adStack_190[3] = (double)extraout_x8_01;
  func_0x00010840e1d0();
  adStack_190[0] = 0.0;
  adStack_190[1] = 0.0;
  adStack_190[2] = 0.0;
  dVar17 = dVar16;
  dVar20 = dVar19;
  FUN_10840e700();
  uVar2 = (uint)pdVar5;
  if (uVar2 == 0) goto LAB_1083529f0;
  lVar9 = 0;
  lVar12 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3;
  do {
    uVar1 = lVar12 == lVar9;
    if ((bool)uVar1) {
      FUN_10840e86c(dVar16,dVar19,uVar10,dVar25 - dVar15);
      uVar2 = (uint)pdVar4;
      pdVar5 = pdVar4;
      dVar17 = dVar16;
      if (uVar2 == 0) goto LAB_1083529f0;
      uVar10 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      goto LAB_1083529d0;
    }
    dVar17 = *(double *)((long)adStack_190 + lVar9);
    func_0x0001083538f0();
    lVar9 = extraout_x8_02 + 8;
    uVar1 = dVar20 == 1e-05;
    lVar12 = extraout_x9_00;
  } while (1e-05 <= dVar20);
  goto LAB_1083529e8;
  while( true ) {
    dVar17 = *pdVar13;
    func_0x0001083538f0();
    uVar10 = extraout_x8_03 - 1;
    uVar1 = dVar19 == 1e-05;
    pdVar13 = extraout_x9_01;
    if (dVar19 < 1e-05) break;
LAB_1083529d0:
    if (uVar10 == 0) {
      pdVar5 = (double *)0x0;
      goto LAB_1083529f0;
    }
  }
LAB_1083529e8:
  *(double *)CONCAT44(uVar8,uVar7) = dVar17;
  pdVar5 = (double *)(undefined8 *)0x1;
LAB_1083529f0:
  func_0x000108353734(adStack_190[3]);
  if ((bool)uVar1) {
    return pdVar5;
  }
  ___stack_chk_fail();
  func_0x000108353748(auStack_210);
  func_0x000108353784();
  pfVar6 = (float *)0x0;
  FUN_10835291c();
  fVar14 = SUB84(dVar17,0);
  puVar3 = pdVar5;
  if ((int)pdVar5 != 0) {
    func_0x00010835381c();
    lVar9 = 0;
    while( true ) {
      fVar14 = SUB84(dVar17,0);
      uVar1 = 1;
      if (lVar9 == 7) break;
      func_0x000108353938();
      lVar9 = extraout_x8_04;
    }
  }
  func_0x000108353734(uStack_1c8);
  if ((bool)uVar1) {
    return pdVar5;
  }
  ___stack_chk_fail();
  fVar21 = *(float *)(puVar3 + 3);
  fVar22 = fVar14 * (fVar21 + -1.0) + 1.0;
  fVar24 = fVar21 + fVar14 * (1.0 - fVar21);
  uVar11 = *puVar3;
  uVar26 = puVar3[1];
  uVar27 = puVar3[2];
  *(undefined8 *)pfVar6 = uVar11;
  fVar23 = (float)uVar26 * fVar21;
  fVar21 = fVar21 * (float)((ulong)uVar26 >> 0x20);
  fVar29 = (float)((ulong)uVar11 >> 0x20);
  fVar28 = (float)uVar11 + (fVar23 - (float)uVar11) * fVar14;
  fVar29 = fVar29 + (fVar21 - fVar29) * fVar14;
  fVar23 = fVar23 + ((float)uVar27 - fVar23) * fVar14;
  fVar21 = fVar21 + ((float)((ulong)uVar27 >> 0x20) - fVar21) * fVar14;
  fVar18 = fVar22 + fVar14 * (fVar24 - fVar22);
  pfVar6[2] = fVar28 / fVar22;
  pfVar6[3] = fVar29 / fVar22;
  uVar11 = CONCAT44((fVar29 + (fVar21 - fVar29) * fVar14) / fVar18,
                    (fVar28 + (fVar23 - fVar28) * fVar14) / fVar18);
  *(undefined8 *)(pfVar6 + 4) = uVar11;
  *(undefined8 *)(pfVar6 + 7) = uVar11;
  *(ulong *)(pfVar6 + 9) = CONCAT44(fVar21 / fVar24,fVar23 / fVar24);
  *(undefined8 *)(pfVar6 + 0xb) = puVar3[2];
  pfVar6[6] = fVar22 / SQRT(fVar18);
  pfVar6[0xd] = fVar24 / SQRT(fVar18);
  fVar14 = *pfVar6 - *pfVar6;
  for (lVar9 = 1; lVar9 < 0xe; lVar9 = lVar9 + 1) {
    fVar14 = fVar14 * pfVar6[lVar9];
  }
  return (undefined8 *)(ulong)!NAN(fVar14);
}



/* Entry: 1083528b4; end: 10835291b;  */

undefined8 *
FUN_1083528b4(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 *param_5,
             undefined8 param_6,double *param_7)

{
  undefined1 in_ZR;
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  float *pfVar5;
  long lVar6;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar8;
  long lVar9;
  long extraout_x9;
  double *pdVar10;
  double *extraout_x9_00;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1f0 [72];
  undefined8 uStack_1a8;
  double adStack_170 [4];
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x000108353748(auStack_80);
  func_0x000108353784();
  FUN_10835291c();
  if ((int)param_5 != 0) {
    func_0x00010835381c();
    lVar6 = 0;
    while (in_ZR = lVar6 == 7, !(bool)in_ZR) {
      func_0x000108353938();
      lVar6 = extraout_x8;
    }
  }
  func_0x000108353734(uStack_38);
  if ((bool)in_ZR) {
    return param_5;
  }
  ___stack_chk_fail();
  pdVar3 = adStack_170;
  pdVar2 = adStack_170;
  pdVar10 = adStack_170;
  dVar13 = param_1;
  func_0x000108353758();
  adStack_170[3] = (double)extraout_x8_00;
  func_0x00010840e1d0();
  adStack_170[0] = 0.0;
  adStack_170[1] = 0.0;
  adStack_170[2] = 0.0;
  dVar14 = dVar13;
  dVar17 = param_2;
  FUN_10840e700();
  uVar1 = (uint)pdVar3;
  if (uVar1 == 0) goto LAB_1083529f0;
  lVar6 = 0;
  lVar9 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 3;
  do {
    in_ZR = lVar9 == lVar6;
    if ((bool)in_ZR) {
      FUN_10840e86c(dVar13,param_2,param_3,param_4 - param_1);
      uVar1 = (uint)pdVar2;
      pdVar3 = pdVar2;
      dVar14 = dVar13;
      if (uVar1 == 0) goto LAB_1083529f0;
      uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
      goto LAB_1083529d0;
    }
    dVar14 = *(double *)((long)adStack_170 + lVar6);
    func_0x0001083538f0();
    lVar6 = extraout_x8_01 + 8;
    in_ZR = dVar17 == 1e-05;
    lVar9 = extraout_x9;
  } while (1e-05 <= dVar17);
  goto LAB_1083529e8;
  while( true ) {
    dVar14 = *pdVar10;
    func_0x0001083538f0();
    uVar7 = extraout_x8_02 - 1;
    in_ZR = param_2 == 1e-05;
    pdVar10 = extraout_x9_00;
    if (param_2 < 1e-05) break;
LAB_1083529d0:
    if (uVar7 == 0) {
      pdVar3 = (double *)0x0;
      goto LAB_1083529f0;
    }
  }
LAB_1083529e8:
  *param_7 = dVar14;
  pdVar3 = (double *)(undefined8 *)0x1;
LAB_1083529f0:
  func_0x000108353734(adStack_170[3]);
  if ((bool)in_ZR) {
    return pdVar3;
  }
  ___stack_chk_fail();
  func_0x000108353748(auStack_1f0);
  func_0x000108353784();
  pfVar5 = (float *)0x0;
  FUN_10835291c();
  fVar12 = SUB84(dVar14,0);
  puVar4 = pdVar3;
  if ((int)pdVar3 != 0) {
    func_0x00010835381c();
    lVar6 = 0;
    while( true ) {
      fVar12 = SUB84(dVar14,0);
      in_ZR = 1;
      if (lVar6 == 7) break;
      func_0x000108353938();
      lVar6 = extraout_x8_03;
    }
  }
  func_0x000108353734(uStack_1a8);
  if ((bool)in_ZR) {
    return pdVar3;
  }
  ___stack_chk_fail();
  fVar15 = *(float *)(puVar4 + 3);
  fVar18 = fVar12 * (fVar15 + -1.0) + 1.0;
  fVar19 = fVar15 + fVar12 * (1.0 - fVar15);
  uVar8 = *puVar4;
  uVar20 = puVar4[1];
  uVar21 = puVar4[2];
  *(undefined8 *)pfVar5 = uVar8;
  fVar16 = (float)uVar20 * fVar15;
  fVar15 = fVar15 * (float)((ulong)uVar20 >> 0x20);
  fVar23 = (float)((ulong)uVar8 >> 0x20);
  fVar22 = (float)uVar8 + (fVar16 - (float)uVar8) * fVar12;
  fVar23 = fVar23 + (fVar15 - fVar23) * fVar12;
  fVar16 = fVar16 + ((float)uVar21 - fVar16) * fVar12;
  fVar15 = fVar15 + ((float)((ulong)uVar21 >> 0x20) - fVar15) * fVar12;
  fVar11 = fVar18 + fVar12 * (fVar19 - fVar18);
  pfVar5[2] = fVar22 / fVar18;
  pfVar5[3] = fVar23 / fVar18;
  uVar8 = CONCAT44((fVar23 + (fVar15 - fVar23) * fVar12) / fVar11,
                   (fVar22 + (fVar16 - fVar22) * fVar12) / fVar11);
  *(undefined8 *)(pfVar5 + 4) = uVar8;
  *(undefined8 *)(pfVar5 + 7) = uVar8;
  *(ulong *)(pfVar5 + 9) = CONCAT44(fVar15 / fVar19,fVar16 / fVar19);
  *(undefined8 *)(pfVar5 + 0xb) = puVar4[2];
  pfVar5[6] = fVar18 / SQRT(fVar11);
  pfVar5[0xd] = fVar19 / SQRT(fVar11);
  fVar12 = *pfVar5 - *pfVar5;
  for (lVar6 = 1; lVar6 < 0xe; lVar6 = lVar6 + 1) {
    fVar12 = fVar12 * pfVar5[lVar6];
  }
  return (undefined8 *)(ulong)!NAN(fVar12);
}



/* Entry: 10835291c; end: 108352a23;  */

double * FUN_10835291c(double param_1,double param_2,undefined8 param_3,double param_4,
                      undefined8 param_5,undefined8 param_6,double *param_7)

{
  undefined1 in_ZR;
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 extraout_x8;
  long lVar6;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar8;
  long lVar9;
  long extraout_x9;
  double *pdVar10;
  double *extraout_x9_00;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_f0 [72];
  undefined8 uStack_a8;
  double adStack_70 [4];
  
  pdVar3 = adStack_70;
  pdVar2 = adStack_70;
  pdVar10 = adStack_70;
  dVar13 = param_1;
  func_0x000108353758();
  adStack_70[3] = (double)extraout_x8;
  func_0x00010840e1d0();
  adStack_70[0] = 0.0;
  adStack_70[1] = 0.0;
  adStack_70[2] = 0.0;
  dVar14 = dVar13;
  dVar17 = param_2;
  FUN_10840e700();
  uVar1 = (uint)pdVar3;
  if (uVar1 == 0) goto LAB_1083529f0;
  lVar6 = 0;
  lVar9 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 3;
  do {
    in_ZR = lVar9 == lVar6;
    if ((bool)in_ZR) {
      FUN_10840e86c(dVar13,param_2,param_3,param_4 - param_1);
      uVar1 = (uint)pdVar2;
      pdVar3 = pdVar2;
      dVar14 = dVar13;
      if (uVar1 == 0) goto LAB_1083529f0;
      uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
      goto LAB_1083529d0;
    }
    dVar14 = *(double *)((long)adStack_70 + lVar6);
    func_0x0001083538f0();
    lVar6 = extraout_x8_00 + 8;
    in_ZR = dVar17 == 1e-05;
    lVar9 = extraout_x9;
  } while (1e-05 <= dVar17);
  goto LAB_1083529e8;
  while( true ) {
    dVar14 = *pdVar10;
    func_0x0001083538f0();
    uVar7 = extraout_x8_01 - 1;
    in_ZR = param_2 == 1e-05;
    pdVar10 = extraout_x9_00;
    if (param_2 < 1e-05) break;
LAB_1083529d0:
    if (uVar7 == 0) {
      pdVar3 = (double *)0x0;
      goto LAB_1083529f0;
    }
  }
LAB_1083529e8:
  *param_7 = dVar14;
  pdVar3 = (double *)(undefined8 *)0x1;
LAB_1083529f0:
  func_0x000108353734(adStack_70[3]);
  if ((bool)in_ZR) {
    return pdVar3;
  }
  ___stack_chk_fail();
  func_0x000108353748(auStack_f0);
  func_0x000108353784();
  pfVar5 = (float *)0x0;
  FUN_10835291c();
  fVar12 = SUB84(dVar14,0);
  puVar4 = pdVar3;
  if ((int)pdVar3 != 0) {
    func_0x00010835381c();
    lVar6 = 0;
    while( true ) {
      fVar12 = SUB84(dVar14,0);
      in_ZR = 1;
      if (lVar6 == 7) break;
      func_0x000108353938();
      lVar6 = extraout_x8_02;
    }
  }
  func_0x000108353734(uStack_a8);
  if ((bool)in_ZR) {
    return pdVar3;
  }
  ___stack_chk_fail();
  fVar15 = *(float *)(puVar4 + 3);
  fVar18 = fVar12 * (fVar15 + -1.0) + 1.0;
  fVar19 = fVar15 + fVar12 * (1.0 - fVar15);
  uVar8 = *puVar4;
  uVar20 = puVar4[1];
  uVar21 = puVar4[2];
  *(undefined8 *)pfVar5 = uVar8;
  fVar16 = (float)uVar20 * fVar15;
  fVar15 = fVar15 * (float)((ulong)uVar20 >> 0x20);
  fVar23 = (float)((ulong)uVar8 >> 0x20);
  fVar22 = (float)uVar8 + (fVar16 - (float)uVar8) * fVar12;
  fVar23 = fVar23 + (fVar15 - fVar23) * fVar12;
  fVar16 = fVar16 + ((float)uVar21 - fVar16) * fVar12;
  fVar15 = fVar15 + ((float)((ulong)uVar21 >> 0x20) - fVar15) * fVar12;
  fVar11 = fVar18 + fVar12 * (fVar19 - fVar18);
  pfVar5[2] = fVar22 / fVar18;
  pfVar5[3] = fVar23 / fVar18;
  uVar8 = CONCAT44((fVar23 + (fVar15 - fVar23) * fVar12) / fVar11,
                   (fVar22 + (fVar16 - fVar22) * fVar12) / fVar11);
  *(undefined8 *)(pfVar5 + 4) = uVar8;
  *(undefined8 *)(pfVar5 + 7) = uVar8;
  *(ulong *)(pfVar5 + 9) = CONCAT44(fVar15 / fVar19,fVar16 / fVar19);
  *(undefined8 *)(pfVar5 + 0xb) = puVar4[2];
  pfVar5[6] = fVar18 / SQRT(fVar11);
  pfVar5[0xd] = fVar19 / SQRT(fVar11);
  fVar12 = *pfVar5 - *pfVar5;
  for (lVar6 = 1; lVar6 < 0xe; lVar6 = lVar6 + 1) {
    fVar12 = fVar12 * pfVar5[lVar6];
  }
  return (double *)(ulong)!NAN(fVar12);
}



/* Entry: 108352a24; end: 108352a8b;  */

undefined8 * FUN_108352a24(float param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x000108353748(auStack_80);
  func_0x000108353784();
  pfVar2 = (float *)0x0;
  FUN_10835291c();
  puVar1 = param_2;
  if ((int)param_2 != 0) {
    func_0x00010835381c();
    lVar3 = 0;
    while (in_ZR = lVar3 == 7, !(bool)in_ZR) {
      func_0x000108353938();
      lVar3 = extraout_x8;
    }
  }
  func_0x000108353734(uStack_38);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  fVar6 = *(float *)(puVar1 + 3);
  fVar8 = param_1 * (fVar6 + -1.0) + 1.0;
  fVar9 = fVar6 + param_1 * (1.0 - fVar6);
  uVar4 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  *(undefined8 *)pfVar2 = uVar4;
  fVar7 = (float)uVar10 * fVar6;
  fVar6 = fVar6 * (float)((ulong)uVar10 >> 0x20);
  fVar13 = (float)((ulong)uVar4 >> 0x20);
  fVar12 = (float)uVar4 + (fVar7 - (float)uVar4) * param_1;
  fVar13 = fVar13 + (fVar6 - fVar13) * param_1;
  fVar7 = fVar7 + ((float)uVar11 - fVar7) * param_1;
  fVar6 = fVar6 + ((float)((ulong)uVar11 >> 0x20) - fVar6) * param_1;
  fVar5 = fVar8 + param_1 * (fVar9 - fVar8);
  pfVar2[2] = fVar12 / fVar8;
  pfVar2[3] = fVar13 / fVar8;
  uVar4 = CONCAT44((fVar13 + (fVar6 - fVar13) * param_1) / fVar5,
                   (fVar12 + (fVar7 - fVar12) * param_1) / fVar5);
  *(undefined8 *)(pfVar2 + 4) = uVar4;
  *(undefined8 *)(pfVar2 + 7) = uVar4;
  *(ulong *)(pfVar2 + 9) = CONCAT44(fVar6 / fVar9,fVar7 / fVar9);
  *(undefined8 *)(pfVar2 + 0xb) = puVar1[2];
  pfVar2[6] = fVar8 / SQRT(fVar5);
  pfVar2[0xd] = fVar9 / SQRT(fVar5);
  fVar5 = *pfVar2 - *pfVar2;
  for (lVar3 = 1; lVar3 < 0xe; lVar3 = lVar3 + 1) {
    fVar5 = fVar5 * pfVar2[lVar3];
  }
  return (undefined8 *)(ulong)!NAN(fVar5);
}



/* Entry: 108352a8c; end: 108352b6f;  */

bool FUN_108352a8c(float param_1,undefined8 *param_2,float *param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = *(float *)(param_2 + 3);
  fVar6 = param_1 * (fVar4 + -1.0) + 1.0;
  fVar7 = fVar4 + param_1 * (1.0 - fVar4);
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  *(undefined8 *)param_3 = uVar1;
  fVar5 = (float)uVar8 * fVar4;
  fVar4 = fVar4 * (float)((ulong)uVar8 >> 0x20);
  fVar11 = (float)((ulong)uVar1 >> 0x20);
  fVar10 = (float)uVar1 + (fVar5 - (float)uVar1) * param_1;
  fVar11 = fVar11 + (fVar4 - fVar11) * param_1;
  fVar5 = fVar5 + ((float)uVar9 - fVar5) * param_1;
  fVar4 = fVar4 + ((float)((ulong)uVar9 >> 0x20) - fVar4) * param_1;
  fVar3 = fVar6 + param_1 * (fVar7 - fVar6);
  param_3[2] = fVar10 / fVar6;
  param_3[3] = fVar11 / fVar6;
  uVar1 = CONCAT44((fVar11 + (fVar4 - fVar11) * param_1) / fVar3,
                   (fVar10 + (fVar5 - fVar10) * param_1) / fVar3);
  *(undefined8 *)(param_3 + 4) = uVar1;
  *(undefined8 *)(param_3 + 7) = uVar1;
  *(ulong *)(param_3 + 9) = CONCAT44(fVar4 / fVar7,fVar5 / fVar7);
  *(undefined8 *)(param_3 + 0xb) = param_2[2];
  param_3[6] = fVar6 / SQRT(fVar3);
  param_3[0xd] = fVar7 / SQRT(fVar3);
  fVar3 = *param_3 - *param_3;
  for (lVar2 = 1; lVar2 < 0xe; lVar2 = lVar2 + 1) {
    fVar3 = fVar3 * param_3[lVar2];
  }
  return !NAN(fVar3);
}



/* Entry: 108352b70; end: 108352d0f;  */

void FUN_108352b70(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_64 [5];
  undefined8 uStack_38;
  
  puVar4 = param_3;
  puVar5 = param_4;
  fVar25 = param_1;
  func_0x000108353758();
  bVar2 = true;
  if ((param_1 != 0.0) && (bVar2 = false, !NAN(param_2))) {
    bVar2 = param_2 == 1.0;
  }
  uVar3 = 0;
  uStack_38 = extraout_x8;
  if (bVar2) {
    bVar2 = false;
    if ((fVar25 == 0.0) && (bVar2 = false, !NAN(param_2))) {
      bVar2 = param_2 == 1.0;
    }
    if (bVar2) {
      uVar14 = param_3[1];
      uVar6 = *param_3;
      uVar18 = *(undefined8 *)((long)param_3 + 0xc);
      *(undefined8 *)((long)param_4 + 0x14) = *(undefined8 *)((long)param_3 + 0x14);
      *(undefined8 *)((long)param_4 + 0xc) = uVar18;
      param_4[1] = uVar14;
      *param_4 = uVar6;
      uVar3 = 1;
      goto LAB_108352cec;
    }
    uVar3 = fVar25 == 0.0;
    fVar7 = fVar25;
    if ((bool)uVar3) {
      fVar7 = param_2;
    }
    puVar5 = &uStack_70;
    puVar4 = param_3;
    FUN_108352a8c(fVar7);
    if (((ulong)puVar4 & 1) != 0) {
      uVar3 = fVar25 == 0.0;
      lVar1 = 0x1c;
      if ((bool)uVar3) {
        lVar1 = 0;
      }
      uVar6 = *(undefined8 *)((long)&uStack_70 + lVar1);
      param_4[1] = *(undefined8 *)((long)&stack0xffffffffffffff98 + lVar1);
      *param_4 = uVar6;
      uVar6 = *(undefined8 *)((long)((long)register0x00000008 + -100) + lVar1);
      *(undefined8 *)((long)param_4 + 0x14) =
           *(undefined8 *)((long)((long)register0x00000008 + -100) + lVar1 + 8);
      *(undefined8 *)((long)param_4 + 0xc) = uVar6;
      goto LAB_108352cec;
    }
  }
  puVar4 = &uStack_70;
  FUN_108352d10();
  fVar7 = (float)uStack_70;
  fVar11 = (float)((ulong)uStack_70 >> 0x20);
  fVar16 = (float)uStack_68;
  fVar9 = (float)((ulong)uStack_68 >> 0x20);
  fVar8 = (float)auStack_64._4_8_;
  fVar13 = fVar8 + (fVar7 * fVar25 + fVar16) * fVar25;
  fVar12 = SUB84(auStack_64._4_8_,4);
  fVar15 = fVar12 + (fVar11 * fVar25 + fVar9) * fVar25;
  fVar19 = (float)auStack_64._12_8_;
  fVar20 = SUB84(auStack_64._12_8_,4);
  fVar23 = (float)auStack_64._20_8_;
  fVar24 = SUB84(auStack_64._20_8_,4);
  fVar17 = (float)auStack_64._28_8_;
  fVar21 = fVar17 + (fVar19 * fVar25 + fVar23) * fVar25;
  fVar10 = SUB84(auStack_64._28_8_,4);
  fVar22 = fVar10 + (fVar20 * fVar25 + fVar24) * fVar25;
  fVar25 = (fVar25 + param_2) * 0.5;
  fVar28 = fVar8 + (fVar7 * fVar25 + fVar16) * fVar25;
  fVar29 = fVar12 + (fVar11 * fVar25 + fVar9) * fVar25;
  fVar26 = fVar17 + (fVar19 * fVar25 + fVar23) * fVar25;
  fVar27 = fVar10 + (fVar20 * fVar25 + fVar24) * fVar25;
  fVar8 = fVar8 + (fVar7 * param_2 + fVar16) * param_2;
  fVar12 = fVar12 + (fVar11 * param_2 + fVar9) * param_2;
  fVar17 = fVar17 + (fVar19 * param_2 + fVar23) * param_2;
  fVar10 = fVar10 + (fVar20 * param_2 + fVar24) * param_2;
  fVar25 = (fVar26 + fVar26) - (fVar21 + fVar17) * 0.5;
  param_4[1] = CONCAT44(((fVar29 + fVar29) - (fVar15 + fVar12) * 0.5) /
                        ((fVar27 + fVar27) - (fVar22 + fVar10) * 0.5),
                        ((fVar28 + fVar28) - (fVar13 + fVar8) * 0.5) / fVar25);
  *param_4 = CONCAT44(fVar15 / fVar22,fVar13 / fVar21);
  param_4[2] = CONCAT44(fVar12 / fVar10,fVar8 / fVar17);
  *(float *)(param_4 + 3) = fVar25 / SQRT(fVar21 * fVar17);
  puVar5 = param_3;
LAB_108352cec:
  func_0x000108353734(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  uVar6 = *puVar5;
  uVar14 = puVar5[2];
  fVar16 = *(float *)(puVar5 + 3);
  fVar7 = (float)puVar5[1] * fVar16;
  fVar11 = (float)((ulong)puVar5[1] >> 0x20) * fVar16;
  uVar18 = NEON_fmov(0xbf800000,4);
  fVar17 = fVar16 + (float)uVar18;
  fVar16 = fVar16 + (float)((ulong)uVar18 >> 0x20);
  fVar17 = fVar17 + fVar17;
  fVar16 = fVar16 + fVar16;
  puVar4[2] = uVar6;
  puVar4[3] = CONCAT44(0.0 - fVar16,0.0 - fVar17);
  fVar8 = fVar7 - (float)uVar6;
  fVar25 = (float)((ulong)uVar6 >> 0x20);
  fVar12 = fVar11 - fVar25;
  puVar4[1] = CONCAT44(fVar12 + fVar12,fVar8 + fVar8);
  *puVar4 = CONCAT44(fVar25 + ((float)((ulong)uVar14 >> 0x20) - (fVar11 + fVar11)),
                     (float)uVar6 + ((float)uVar14 - (fVar7 + fVar7)));
  uVar6 = NEON_fmov(0x3f800000,4);
  puVar4[4] = CONCAT44(fVar16,fVar17);
  puVar4[5] = uVar6;
  return;
}



/* Entry: 108352d10; end: 108352d6f;  */

void FUN_108352d10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = *param_2;
  uVar7 = param_2[2];
  fVar8 = *(float *)(param_2 + 3);
  fVar3 = (float)param_2[1] * fVar8;
  fVar5 = (float)((ulong)param_2[1] >> 0x20) * fVar8;
  uVar10 = NEON_fmov(0xbf800000,4);
  fVar9 = fVar8 + (float)uVar10;
  fVar8 = fVar8 + (float)((ulong)uVar10 >> 0x20);
  fVar9 = fVar9 + fVar9;
  fVar8 = fVar8 + fVar8;
  param_1[2] = uVar1;
  param_1[3] = CONCAT44(0.0 - fVar8,0.0 - fVar9);
  fVar4 = fVar3 - (float)uVar1;
  fVar2 = (float)((ulong)uVar1 >> 0x20);
  fVar6 = fVar5 - fVar2;
  param_1[1] = CONCAT44(fVar6 + fVar6,fVar4 + fVar4);
  *param_1 = CONCAT44(fVar2 + ((float)((ulong)uVar7 >> 0x20) - (fVar5 + fVar5)),
                      (float)uVar1 + ((float)uVar7 - (fVar3 + fVar3)));
  uVar1 = NEON_fmov(0x3f800000,4);
  param_1[4] = CONCAT44(fVar8,fVar9);
  param_1[5] = uVar1;
  return;
}



/* Entry: 108352d70; end: 108352dcf;  */

void FUN_108352d70(undefined8 param_1)

{
  undefined1 auStack_40 [48];
  
  FUN_108352d10(auStack_40,param_1);
  return;
}



/* Entry: 108352dd0; end: 108352e83;  */

undefined1  [12] FUN_108352dd0(float param_1,undefined8 *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [12];
  
  if (param_1 == 0.0) {
    uVar7 = *param_2;
    fVar2 = (float)((ulong)uVar7 >> 0x20);
    bVar1 = false;
    if (((float)uVar7 == *(float *)(param_2 + 1)) &&
       (bVar1 = false, !NAN(fVar2) && !NAN(*(float *)((long)param_2 + 0xc)))) {
      bVar1 = fVar2 == *(float *)((long)param_2 + 0xc);
    }
    if (!bVar1) goto LAB_108352df0;
    uVar5 = param_2[2];
LAB_108352e20:
    fVar2 = (float)uVar5 - (float)uVar7;
    fVar3 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
  }
  else {
LAB_108352df0:
    if (param_1 == 1.0) {
      uVar7 = param_2[1];
      uVar5 = param_2[2];
      if (((float)uVar7 == (float)uVar5) &&
         ((float)((ulong)uVar7 >> 0x20) == (float)((ulong)uVar5 >> 0x20))) {
        uVar7 = *param_2;
        goto LAB_108352e20;
      }
    }
    else {
      uVar7 = param_2[1];
      uVar5 = param_2[2];
    }
    fVar8 = *(float *)(param_2 + 3);
    fVar2 = (float)*param_2;
    fVar4 = (float)uVar5 - fVar2;
    fVar3 = (float)((ulong)*param_2 >> 0x20);
    fVar6 = (float)((ulong)uVar5 >> 0x20) - fVar3;
    fVar2 = ((float)uVar7 - fVar2) * fVar8;
    fVar3 = ((float)((ulong)uVar7 >> 0x20) - fVar3) * fVar8;
    fVar2 = fVar2 + ((fVar4 * fVar8 - fVar4) * param_1 + ((fVar4 - fVar2) - fVar2)) * param_1;
    fVar3 = fVar3 + ((fVar6 * fVar8 - fVar6) * param_1 + ((fVar6 - fVar3) - fVar3)) * param_1;
  }
  auVar9._4_4_ = fVar3;
  auVar9._0_4_ = fVar2;
  auVar9._8_4_ = 0;
  return auVar9;
}



/* Entry: 108352e84; end: 108352ecf;  */

void FUN_108352e84(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  if (param_4 != (undefined4 *)0x0) {
    func_0x000108353918();
    FUN_108352d70();
    *param_4 = param_1;
    param_4[1] = param_2;
  }
  if (param_5 != (undefined4 *)0x0) {
    func_0x000108353918();
    FUN_108352dd0();
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return;
}



/* Entry: 108352ed0; end: 108352f4b;  */

void FUN_108352ed0(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_1 + 3);
  fVar2 = 1.0 / (fVar1 + 1.0);
  fVar6 = (float)*param_1 * fVar2;
  fVar7 = (float)((ulong)*param_1 >> 0x20) * fVar2;
  fVar8 = (float)param_1[1] * fVar1 * fVar2;
  fVar9 = (float)((ulong)param_1[1] >> 0x20) * fVar1 * fVar2;
  fVar3 = (float)param_1[2] * fVar2;
  fVar2 = (float)((ulong)param_1[2] >> 0x20) * fVar2;
  fVar4 = fVar6 * 0.5 + fVar8 + fVar3 * 0.5;
  fVar5 = fVar7 * 0.5 + fVar9 + fVar2 * 0.5;
  *param_2 = *param_1;
  param_2[2] = CONCAT44(fVar5,fVar4);
  param_2[1] = CONCAT44(fVar7 + fVar9,fVar6 + fVar8);
  *(ulong *)((long)param_2 + 0x24) = CONCAT44(fVar9 + fVar2,fVar8 + fVar3);
  *(ulong *)((long)param_2 + 0x1c) = CONCAT44(fVar5,fVar4);
  *(undefined8 *)((long)param_2 + 0x2c) = param_1[2];
  fVar1 = SQRT(fVar1 * 0.5 + 0.5);
  *(float *)((long)param_2 + 0x34) = fVar1;
  *(float *)(param_2 + 3) = fVar1;
  return;
}



/* Entry: 108352f4c; end: 10835300b;  */

void FUN_108352f4c(float param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = true;
  if ((0.0 <= param_1) && (bVar2 = true, !NAN(param_1 - param_1))) {
    bVar2 = false;
  }
  if ((!bVar2) && (pfVar4 = param_2, func_0x000108352b3c(param_2,6), (int)pfVar4 != 0)) {
    uVar3 = 0;
    fVar5 = (param_2[6] + -1.0) / ((param_2[6] + -1.0 + 2.0) * 4.0);
    fVar6 = fVar5 * (*param_2 + param_2[2] * -2.0 + param_2[4]);
    fVar5 = fVar5 * (param_2[1] + param_2[3] * -2.0 + param_2[5]);
    fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    while( true ) {
      bVar2 = false;
      bVar1 = false;
      if (uVar3 < 5) {
        bVar2 = false;
        bVar1 = true;
        if (!NAN(fVar5) && !NAN(param_1)) {
          bVar2 = fVar5 == param_1;
          bVar1 = param_1 <= fVar5;
        }
      }
      if (!bVar1 || bVar2) break;
      fVar5 = fVar5 * 0.25;
      uVar3 = uVar3 + 1;
    }
  }
  return;
}



/* Entry: 10835300c; end: 108353013;  */

bool FUN_10835300c(float *param_1,int param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = *param_1 - *param_1;
  for (lVar1 = 1; lVar1 < param_2 << 1; lVar1 = lVar1 + 1) {
    fVar2 = fVar2 * param_1[lVar1];
  }
  return !NAN(fVar2);
}



/* Entry: 108353014; end: 1083530fb;  */

uint FUN_108353014(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 extraout_x8;
  long lVar8;
  long unaff_x22;
  float fVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_44;
  
  puVar3 = param_1;
  puVar5 = param_2;
  uVar6 = param_3;
  func_0x000108353758();
  *puVar5 = *puVar3;
  uVar2 = (int)uVar6 == 5;
  if ((bool)uVar2) {
    func_0x00010835383c();
    lVar8 = unaff_x22 + 8;
    FUN_1083530fc(lVar8,unaff_x22 + 0x10);
    if ((int)lVar8 != 0) {
      uVar4 = unaff_x22 + 0x1c;
      FUN_1083530fc(uVar4,unaff_x22 + 0x24);
      if ((uVar4 & 1) != 0) {
        param_2[1] = uStack_68;
        param_2[2] = uStack_68;
        param_2[3] = uStack_68;
        param_2[4] = uStack_44;
        param_3 = 1;
        goto LAB_108353098;
      }
    }
  }
  FUN_10835313c(param_1,param_2 + 1,param_3);
LAB_108353098:
  uVar7 = 2 << (ulong)((uint)param_3 & 0x1f);
  puVar5 = (undefined8 *)(ulong)(uVar7 | 1);
  puVar3 = param_2;
  FUN_10835300c();
  if (((ulong)puVar3 & 1) == 0) {
    for (lVar8 = 1; uVar2 = lVar8 == (int)uVar7, lVar8 < (int)uVar7; lVar8 = lVar8 + 1) {
      param_2[lVar8] = param_1[1];
    }
  }
  func_0x000108353734(extraout_x8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    fVar9 = (float)*puVar3 - (float)*puVar5;
    fVar10 = (float)((ulong)*puVar3 >> 0x20) - (float)((ulong)*puVar5 >> 0x20);
    if (NAN((fVar9 - fVar9) * fVar10)) {
      uVar7 = 1;
    }
    else {
      bVar1 = false;
      if ((fVar10 == 0.0) && (bVar1 = false, !NAN(fVar9))) {
        bVar1 = fVar9 == 0.0;
      }
      uVar7 = (uint)bVar1;
    }
    return uVar7;
  }
  return 1 << (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 1083530fc; end: 10835313b;  */

bool FUN_1083530fc(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)*param_1 - (float)*param_2;
  fVar3 = (float)((ulong)*param_1 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  if (NAN((fVar2 - fVar2) * fVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((fVar3 == 0.0) && (bVar1 = false, !NAN(fVar2))) {
      bVar1 = fVar2 == 0.0;
    }
  }
  return bVar1;
}



/* Entry: 10835313c; end: 10835324f;  */

ulong FUN_10835313c(long param_1,ulong *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 *puVar4;
  float *pfVar5;
  undefined8 extraout_x8;
  long unaff_x22;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_70 [12];
  float fStack_64;
  float fStack_5c;
  float fStack_50;
  float fStack_48;
  undefined8 uStack_38;
  
  puVar4 = auStack_70;
  func_0x000108353758();
  uStack_38 = extraout_x8;
  if (param_3 == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    param_2[1] = *(ulong *)(param_1 + 0x10);
    *param_2 = uVar7;
    pfVar5 = (float *)(param_2 + 2);
  }
  else {
    func_0x00010835383c();
    fVar8 = *(float *)(param_1 + 4);
    fVar6 = *(float *)(param_1 + 0x14);
    uVar7 = (ulong)(uint)fVar6;
    fVar9 = (fVar8 - *(float *)(param_1 + 0xc)) * (fVar6 - *(float *)(param_1 + 0xc));
    in_ZR = fVar9 == 0.0;
    if (fVar9 <= 0.0) {
      if ((0.0 < (fVar8 - fStack_5c) * (fVar6 - fStack_5c)) &&
         (fVar9 = fStack_5c - fVar8, fVar14 = fStack_5c - fVar6, fStack_5c = fVar8,
         fStack_50 = fVar8, ABS(fVar14) <= ABS(fVar9))) {
        fStack_5c = fVar6;
        fStack_50 = fVar6;
      }
      if (0.0 < (fVar8 - fStack_64) * (fStack_5c - fStack_64)) {
        fStack_64 = fVar8;
      }
      fVar8 = (fStack_50 - fStack_48) * (fVar6 - fStack_48);
      in_ZR = fVar8 == 0.0;
      if (0.0 < fVar8) {
        fStack_48 = fVar6;
      }
    }
    FUN_10835313c(auStack_70,param_2,param_3 + -1);
    pfVar5 = (float *)(unaff_x22 + 0x1c);
    FUN_10835313c(pfVar5,puVar4,param_3 + -1);
  }
  func_0x000108353734(uStack_38);
  if ((bool)in_ZR) {
    return uVar7;
  }
  ___stack_chk_fail();
  fVar12 = *pfVar5;
  fVar13 = pfVar5[1];
  fVar10 = pfVar5[2] - fVar12;
  fVar11 = pfVar5[3] - fVar13;
  fVar9 = pfVar5[4];
  fVar14 = pfVar5[5];
  fVar6 = fVar9 - pfVar5[2];
  fVar8 = fVar14 - pfVar5[3];
  func_0x0001083538d0(fVar6,fVar8,-fVar6);
  fVar9 = fVar9 - fVar12;
  fVar14 = fVar14 - fVar13;
  fVar12 = pfVar5[6];
  fVar13 = fVar8 * fVar14 * (fVar12 + -1.0) + fVar9 * (fVar12 + -1.0) * fVar6;
  fVar9 = fVar8 * (fVar14 - fVar11 * (fVar12 + fVar12)) +
          (fVar9 - fVar10 * (fVar12 + fVar12)) * fVar6;
  fVar8 = fVar8 * fVar11 * fVar12 + fVar10 * fVar12 * fVar6;
  fVar6 = SQRT(fVar13 * -4.0 * fVar8 + fVar9 * fVar9);
  fVar6 = (fVar9 + (float)((uint)fVar6 ^ ((uint)fVar6 ^ (uint)fVar9) & 0x80000000)) * -0.5;
  fVar9 = fVar13 * fVar6 * -0.5;
  if (ABS(fVar9 + fVar8 * fVar13) <= ABS(fVar9 + fVar6 * fVar6)) {
    fVar6 = fVar8 / fVar6;
  }
  else {
    fVar6 = fVar6 / fVar13;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar6 < 1.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < 0.0;
      bVar2 = fVar6 == 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar6 = 0.5;
  }
  return (ulong)(uint)fVar6;
}



/* Entry: 108353250; end: 108353313;  */

float FUN_108353250(float *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar6 = param_1[2] - fVar8;
  fVar7 = param_1[3] - fVar9;
  fVar10 = param_1[4];
  fVar11 = param_1[5];
  fVar4 = fVar10 - param_1[2];
  fVar5 = fVar11 - param_1[3];
  func_0x0001083538d0(fVar4,fVar5,-fVar4);
  fVar10 = fVar10 - fVar8;
  fVar11 = fVar11 - fVar9;
  fVar8 = param_1[6];
  fVar9 = fVar5 * fVar11 * (fVar8 + -1.0) + fVar10 * (fVar8 + -1.0) * fVar4;
  fVar10 = fVar5 * (fVar11 - fVar7 * (fVar8 + fVar8)) + (fVar10 - fVar6 * (fVar8 + fVar8)) * fVar4;
  fVar5 = fVar5 * fVar7 * fVar8 + fVar6 * fVar8 * fVar4;
  fVar4 = SQRT(fVar9 * -4.0 * fVar5 + fVar10 * fVar10);
  fVar4 = (fVar10 + (float)((uint)fVar4 ^ ((uint)fVar4 ^ (uint)fVar10) & 0x80000000)) * -0.5;
  fVar10 = fVar9 * fVar4 * -0.5;
  if (ABS(fVar10 + fVar5 * fVar9) <= ABS(fVar10 + fVar4 * fVar4)) {
    fVar4 = fVar5 / fVar4;
  }
  else {
    fVar4 = fVar4 / fVar9;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar4 < 1.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 0.0;
      bVar2 = fVar4 == 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar4 = 0.5;
  }
  return fVar4;
}



/* Entry: 108353314; end: 10835331b;  */

void FUN_108353314(float *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar6;
  float fVar7;
  undefined1 *puVar2;
  
  fVar6 = param_1[6];
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar5 = param_2;
    iVar1 = (int)(puVar2 + -0x30);
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined4 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    param_2 = puVar5;
    func_0x000108353758(fVar6);
    *(undefined8 *)(puVar2 + -0x28) = extraout_x8;
    fVar7 = param_1[4] - *param_1;
    FUN_108351300(fVar6 * fVar7 - fVar7,fVar7 + fVar6 * (param_1[2] - *param_1) * -2.0);
    if (iVar1 == 1) {
      *puVar5 = *(undefined4 *)(puVar2 + -0x30);
    }
    bVar3 = iVar1 == 1;
    uVar4 = (ulong)bVar3;
    func_0x000108353734(*(undefined8 *)(puVar2 + -0x28));
    if (bVar3) break;
    unaff_x30 = FUN_108353394;
    ___stack_chk_fail();
    fVar6 = *(float *)(uVar4 + 0x18);
    param_1 = (float *)(uVar4 + 4);
    puVar2 = puVar2 + -0x30;
    unaff_x19 = puVar5;
  }
  return;
}



/* Entry: 10835331c; end: 108353393;  */

void FUN_10835331c(float param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar5;
  
  while( true ) {
    puVar4 = param_3;
    iVar1 = (int)(undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined4 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = puVar4;
    func_0x000108353758(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    fVar5 = param_2[4] - *param_2;
    FUN_108351300(param_1 * fVar5 - fVar5,fVar5 + param_1 * (param_2[2] - *param_2) * -2.0);
    if (iVar1 == 1) {
      *puVar4 = *(undefined4 *)((long)register0x00000008 + -0x30);
    }
    bVar2 = iVar1 == 1;
    uVar3 = (ulong)bVar2;
    func_0x000108353734(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (bVar2) break;
    unaff_x30 = FUN_108353394;
    ___stack_chk_fail();
    param_1 = *(float *)(uVar3 + 0x18);
    param_2 = (float *)(uVar3 + 4);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = puVar4;
  }
  return;
}



/* Entry: 108353394; end: 10835339f;  */

void FUN_108353394(ulong param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar5;
  float fVar6;
  
  while( true ) {
    puVar4 = param_2;
    fVar5 = *(float *)(param_1 + 0x18);
    pfVar3 = (float *)(param_1 + 4);
    iVar1 = (int)(undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined4 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_2 = puVar4;
    func_0x000108353758(fVar5);
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    fVar6 = pfVar3[4] - *pfVar3;
    FUN_108351300(fVar5 * fVar6 - fVar6,fVar6 + fVar5 * (pfVar3[2] - *pfVar3) * -2.0);
    if (iVar1 == 1) {
      *puVar4 = *(undefined4 *)((long)register0x00000008 + -0x30);
    }
    bVar2 = iVar1 == 1;
    param_1 = (ulong)bVar2;
    func_0x000108353734(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (bVar2) break;
    unaff_x30 = FUN_108353394;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = puVar4;
  }
  return;
}



/* Entry: 1083533a0; end: 1083534af;  */

void FUN_1083533a0(int param_1)

{
  long unaff_x19;
  undefined4 uVar1;
  undefined4 uStack_24;
  
  func_0x000108353830();
  FUN_108353394();
  if (param_1 != 0) {
    func_0x0001083537c0(uStack_24);
    FUN_108352a8c();
    if (param_1 != 0) {
      uVar1 = *(undefined4 *)(unaff_x19 + 0x14);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
      *(undefined4 *)(unaff_x19 + 0x20) = uVar1;
      *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
    }
  }
  return;
}



/* Entry: 1083534b0; end: 108353733;  */

/* WARNING: Possible PIC construction at 0x000108353538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010835353c) */
/* WARNING: Removing unreachable block (ram,0x000108353730) */
/* WARNING: Removing unreachable block (ram,0x000108353540) */

void FUN_1083534b0(float *param_1,float *param_2,int param_3,long param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 in_CY;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 auStack_c0 [14];
  
  pfVar4 = param_1;
  func_0x000108353758();
  fVar13 = pfVar4[1] * param_2[1] + *param_2 * *pfVar4;
  fVar11 = -(*param_2 * pfVar4[1]) + param_2[1] * *pfVar4;
  func_0x000108353924();
  if ((((bool)in_CY && !(bool)in_ZR) || (fVar13 <= 0.0)) ||
     (((param_3 != 0 || (fVar11 < 0.0)) && ((param_3 != 1 || (0.0 < fVar11)))))) {
    fVar14 = -fVar11;
    if (param_3 != 1) {
      fVar14 = fVar11;
    }
    if (fVar11 == 0.0) {
      uVar10 = 2;
    }
    else if (fVar13 == 0.0) {
      uVar6 = 3;
      if (0.0 < fVar14) {
        uVar6 = 1;
      }
      uVar10 = (ulong)uVar6;
    }
    else {
      uVar6 = 2;
      if (fVar14 >= 0.0) {
        uVar6 = 0;
      }
      uVar10 = (ulong)(uVar6 | fVar13 < 0.0 != fVar14 < 0.0);
    }
    auStack_c0[1] = 0x3f8000003f800000;
    auStack_c0[0] = 0x3f800000;
    auStack_c0[3] = 0x3f800000bf800000;
    auStack_c0[2] = 0x3f80000000000000;
    auStack_c0[5] = 0xbf800000bf800000;
    auStack_c0[4] = 0xbf800000;
    auStack_c0[7] = 0xbf8000003f800000;
    auStack_c0[6] = 0xbf80000000000000;
    puVar9 = param_5;
    for (lVar7 = 0; uVar10 << 4 != lVar7; lVar7 = lVar7 + 0x10) {
      uVar12 = *(undefined8 *)((long)auStack_c0 + lVar7);
      puVar9[1] = *(undefined8 *)((long)auStack_c0 + lVar7 + 8);
      *puVar9 = uVar12;
      puVar9[2] = *(undefined8 *)((long)auStack_c0 + lVar7 + 0x10);
      *(undefined4 *)(puVar9 + 3) = 0x3f3504f3;
      puVar9 = (undefined8 *)((long)puVar9 + 0x1c);
    }
    uVar8 = (ulong)(uint)((int)uVar10 << 1);
    pfVar4 = (float *)(auStack_c0 + uVar8);
    fStack_e4 = *(float *)((long)auStack_c0 + (uVar8 * 2 + 1) * 4);
    fVar11 = fVar14 * fStack_e4 + fVar13 * *pfVar4;
    if (!NAN(fVar11)) {
      if (fVar11 < 1.0) {
        fStack_e8 = fVar13 + *pfVar4;
        fStack_e4 = fVar14 + fStack_e4;
        fVar15 = (fVar11 + 1.0) * 0.5;
        fVar11 = SQRT(fVar15);
        func_0x000108384970(1.0 / fVar11,&fStack_e8);
        pfVar5 = pfVar4;
        FUN_1083530fc(pfVar4,&fStack_e8);
        if (((ulong)pfVar5 & 1) == 0) {
          puVar9 = (undefined8 *)((long)param_5 + uVar10 * 0x1c);
          *puVar9 = *(undefined8 *)pfVar4;
          puVar9[1] = CONCAT44(fStack_e4,fStack_e8);
          *(float *)(puVar9 + 2) = fVar13;
          *(float *)((long)puVar9 + 0x14) = fVar14;
          bVar1 = false;
          bVar2 = true;
          bVar3 = false;
          if (!NAN(fVar11 - fVar11)) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar15)) {
              bVar1 = fVar15 < 0.0;
              bVar2 = fVar15 == 0.0;
              bVar3 = false;
            }
          }
          if (bVar2 || bVar1 != bVar3) {
            fVar11 = 1.0;
          }
          *(float *)(puVar9 + 3) = fVar11;
          uVar10 = (ulong)((int)uVar10 + 1);
        }
      }
      fStack_e8 = *param_1;
      fStack_dc = param_1[1];
      fStack_e4 = -fStack_dc;
      uStack_e0 = 0;
      uStack_cc = 0x3f80000000000000;
      uStack_d4 = 0;
      uStack_c4 = 0xc0;
      fStack_d8 = fStack_e8;
      if (param_3 == 1) {
        func_0x000108363fe4(0x3f800000,0xbf800000,&fStack_e8);
      }
      if (param_4 != 0) {
        FUN_108363f68(&fStack_e8,param_4);
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        func_0x00010827a0cc(&fStack_e8,param_5,3);
        param_5 = (undefined8 *)((long)param_5 + 0x1c);
      }
    }
  }
  return;
}



/* Entry: 108353734; end: 10835394b;  */

void FUN_108353734(void)

{
  return;
}



/* Entry: 10835394c; end: 10835399b;  */

void FUN_10835394c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  func_0x000108354214();
  uVar2 = CONCAT44(uVar4,uVar3);
  uVar5 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010835426c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x28);
  *unaff_x20 = uVar5;
  unaff_x20[1] = uVar2;
  unaff_x20[2] = param_2;
  *(undefined4 *)(unaff_x20 + 3) = uVar3;
  *(undefined1 *)((long)unaff_x20 + 0x1c) = uVar1;
  return;
}



/* Entry: 10835399c; end: 1083539ab;  */

ulong FUN_10835399c(ushort *param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = (ulong)(byte)param_1[0x14];
  if ((byte)param_1[0x14] != 0) {
    FUN_108353a50(uVar2);
    return uVar2 * uVar1;
  }
  return (ulong)(uVar1 + 7 >> 3);
}



/* Entry: 1083539ac; end: 108353a47;  */

void FUN_1083539ac(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = SUB84(&uStack_50,0);
  func_0x000108354214();
  fVar4 = (float)NEON_fminnm((int)param_1,0x4effffff);
  if (fVar4 <= -2.1474835e+09) {
    fVar4 = -2.1474835e+09;
  }
  fVar5 = (float)NEON_fminnm((int)param_2,0x4effffff);
  if (fVar5 <= -2.1474835e+09) {
    fVar5 = -2.1474835e+09;
  }
  uStack_50 = param_3;
  uStack_48 = param_4;
  FUN_10821a06c(&uStack_50,(int)fVar4,(int)fVar5);
  uVar3 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010835426c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x28);
  *unaff_x20 = uVar3;
  unaff_x20[2] = uStack_48;
  unaff_x20[1] = uStack_50;
  *(undefined4 *)(unaff_x20 + 3) = uVar2;
  *(undefined1 *)((long)unaff_x20 + 0x1c) = uVar1;
  return;
}



/* Entry: 108353a48; end: 108353a4f;  */

undefined8 FUN_108353a48(long param_1)

{
  code *pcVar1;
  
  if (*(byte *)(param_1 + 0x28) < 6) {
    return *(undefined8 *)(&UNK_10df1cec8 + (ulong)(uint)*(byte *)(param_1 + 0x28) * 8);
  }
  FUN_10841076c(&UNK_10f48f473);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108353a94);
  (*pcVar1)();
}



/* Entry: 108353a50; end: 108353a93;  */

undefined8 FUN_108353a50(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 6) {
    return *(undefined8 *)(&UNK_10df1cec8 + (ulong)param_1 * 8);
  }
  FUN_10841076c(&UNK_10f48f473);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108353a94);
  (*pcVar1)();
}



/* Entry: 108353a94; end: 108353adb;  */

long FUN_108353a94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_108353adc();
  lVar2 = param_1;
  FUN_108353a48(param_1);
  func_0x0001081865ac(param_2,lVar1,lVar2);
  *(undefined8 *)(param_1 + 8) = param_2;
  return lVar1;
}



/* Entry: 108353adc; end: 108353b37;  */

ulong FUN_108353adc(ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((*param_1 >> 0xd == 0) && (param_1[1] != 0)) {
    func_0x00010835426c(0);
    uVar2 = (uVar1 & 0xffffffff) * (ulong)param_1[1];
    uVar1 = uVar2 * 2 + (uVar1 & 0xffffffff) * (ulong)param_1[1];
    if ((char)param_1[0x14] != '\x02') {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}



/* Entry: 108353b38; end: 108353b87;  */

uint FUN_108353b38(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_108353b88();
  if ((uVar1 & 1) == 0) {
    FUN_108353a94(param_1,param_2);
    func_0x000108354260();
    FUN_1083960e4();
  }
  return (uint)uVar1 ^ 1;
}


