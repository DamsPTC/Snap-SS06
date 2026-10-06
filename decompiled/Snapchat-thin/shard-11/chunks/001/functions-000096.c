/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081842a8; end: 1081842d3;  */

void FUN_1081842a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081842cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081842d4; end: 108184437;  */

long FUN_1081842d4(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x000108185818();
  }
  return param_1;
}



/* Entry: 108184438; end: 10818478b;  */

long *** FUN_108184438(long ***param_1,long ***param_2,long ***param_3,long **param_4,long param_5,
                      undefined4 param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  long ***ppplVar11;
  long **pplVar12;
  long ***ppplVar13;
  long **pplVar14;
  long ***ppplVar15;
  int iVar16;
  ulong ***pppuVar17;
  long ***ppplVar18;
  long ***ppplVar19;
  long lVar20;
  int iVar21;
  undefined8 extraout_x8;
  long **extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar22;
  long **pplVar23;
  long *plVar24;
  undefined8 extraout_x8_02;
  undefined8 uVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  long **pplVar29;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long **unaff_x21;
  long *plVar30;
  long **pplVar31;
  long lVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  long **pplStack_260;
  long **pplStack_258;
  long **pplStack_250;
  long *plStack_248;
  long **pplStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined5 uStack_1f8;
  undefined3 uStack_1f3;
  undefined5 uStack_1f0;
  long *plStack_1e8;
  long *aplStack_1e0 [2];
  ulong **ppuStack_1d0;
  long **pplStack_1c8;
  ulong **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  long ***ppplStack_1b0;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  long **pplStack_198;
  long lStack_190;
  long ***ppplStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long **pplStack_170;
  undefined4 uStack_164;
  ulong **ppuStack_160;
  long **pplStack_158;
  long **pplStack_150;
  long **pplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  byte bStack_e4;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  long *plStack_a8;
  ulong **ppuStack_a0;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  
  ppplVar11 = param_1;
  ppplVar15 = param_2;
  ppplVar19 = param_3;
  lVar20 = param_5;
  pplStack_170 = param_4;
  uStack_164 = param_6;
  func_0x0001081857bc();
  uVar33 = 0;
  uStack_80 = extraout_x8;
  if ((*(byte *)(ppplVar11[1] + 7) >> 1 & 1) != 0) {
    FUN_108350900(param_2,&pplStack_158);
    uVar33 = pplStack_150._0_4_;
    FUN_108184b60(param_1 + 0xe0,*(uint *)(param_2 + 3));
    ppplVar19 = (long ***)(ulong)*(uint *)(param_2 + 3);
    param_4 = param_1[0xe0];
    ppplVar11 = param_1 + 4;
    ppplVar15 = param_3;
    func_0x00010812f174();
  }
  ppuStack_160 = (ulong **)&pplStack_148;
  for (pplVar31 = (long **)0x0; bVar10 = pplVar31 == param_2[3], pplVar31 < param_2[3];
      pplVar31 = (long **)((long)pplVar31 + 1)) {
    uVar34 = 0;
    if ((*(byte *)(param_1[1] + 7) >> 1 & 1) != 0) {
      if (((int)pplVar31 < 0) || (*(int *)(param_1 + 0xe1) <= (int)pplVar31)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x108184720);
        (*pcVar9)();
      }
      uVar34 = *(undefined4 *)((long)param_1[0xe0] + ((ulong)pplVar31 & 0x7fffffff) * 4);
    }
    pplVar23 = (long **)0x0;
    if (*param_2 != (long **)0x0) {
      do {
        func_0x00010818573c();
        pplVar23 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    uStack_b8 = SUB87(param_2[1],0);
    uStack_b1 = (undefined1)*(undefined8 *)((long)param_2 + 0xf);
    uStack_b0 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0xf) >> 8);
    plStack_a8 = (long *)0x1;
    pplStack_150 = (long **)0x0;
    pplStack_148 = (long **)0x0;
    pplStack_158 = (long **)0x0;
    uStack_d8 = 0;
    pplVar12 = (long **)0x1;
    uStack_e0 = &pplStack_158;
    pplStack_c0 = pplVar23;
    FUN_108184f64();
    pplStack_148 = pplVar12 + (long)ppplVar15 * 4;
    ppuStack_98 = (ulong **)&pplStack_d0;
    ppuStack_a0 = ppuStack_160;
    ppuStack_90 = (ulong **)&pplStack_c8;
    plVar24 = (long *)0x0;
    pplStack_158 = pplVar12;
    pplStack_150 = pplVar12;
    pplStack_d0 = pplVar12;
    if (pplStack_c0 != (long **)0x0) {
      do {
        func_0x00010818573c();
        plVar24 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    *pplVar12 = plVar24;
    *(ulong *)((long)pplVar12 + 0xf) = CONCAT71(uStack_b0,uStack_b1);
    pplVar12[1] = (long *)CONCAT17(uStack_b1,uStack_b8);
    pplVar12[3] = plStack_a8;
    unaff_x21 = pplVar12 + 4;
    uStack_88 = 1;
    pplStack_c8 = unaff_x21;
    func_0x000108184f94(&ppuStack_a0);
    uStack_d8 = 1;
    pplStack_150 = unaff_x21;
    func_0x000108184fd8(&uStack_e0);
    uStack_e0 = (long ***)CONCAT62(uStack_e0._2_6_,*(short *)((long)param_3 + (long)pplVar31 * 2));
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    param_4 = (long **)0x1;
    func_0x000100b56a68(&uStack_140,&uStack_e0,(long)&uStack_e0 + 2);
    puStack_128 = (undefined8 *)0x0;
    puStack_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    ppuStack_98 = (ulong **)((ulong)ppuStack_98 & 0xffffffffffffff00);
    ppuStack_a0 = &puStack_128;
    func_0x000108185000(&puStack_128,1);
    *puStack_120 = 0;
    ppuStack_98 = (ulong **)CONCAT71(ppuStack_98._1_7_,1);
    puStack_120 = puStack_120 + 1;
    FUN_108185080(&ppuStack_a0);
    bVar10 = (*(uint *)(param_1[1] + 7) >> 2 & 1) != 0;
    if (bVar10) {
      ppuStack_a0 = (ulong **)((long)param_1[0xe8] + (ulong)*(uint *)(param_5 + (long)pplVar31 * 4))
      ;
      pppuVar17 = &ppuStack_a0;
    }
    else {
      pppuVar17 = (ulong ***)0x0;
    }
    ppplVar19 = (long ***)(ulong)bVar10;
    func_0x0001057f910c(auStack_110,pppuVar17);
    uStack_f8 = CONCAT44((float)((ulong)*param_1[2] >> 0x20) +
                         (float)((ulong)pplStack_170[(long)pplVar31] >> 0x20),
                         SUB84(*param_1[2],0) + SUB84(pplStack_170[(long)pplVar31],0));
    uStack_e8 = uStack_164;
    uVar22 = (ulong)*(byte *)((long)param_1[0xe7] + (ulong)*(uint *)(param_5 + (long)pplVar31 * 4));
    bStack_e4 = uVar22 < 0x21 & (byte)(0x100002600 >> (uVar22 & 0x3f));
    ppplVar15 = &pplStack_158;
    uStack_f0 = uVar34;
    uStack_ec = uVar33;
    FUN_108184d0c(param_1 + 0xe9);
    func_0x000108180b50(&pplStack_158);
    ppplVar11 = &pplStack_c0;
    func_0x0001081298a0();
    pplVar23 = param_1[0xec];
    if (*(short *)((long)param_3 + (long)pplVar31 * 2) == 0) {
      pplVar23 = (long **)((long)pplVar23 + 1);
    }
    param_1[0xec] = pplVar23;
  }
  func_0x0001081857a8(uStack_80);
  if (bVar10) {
    return ppplVar11;
  }
  ___stack_chk_fail();
  ppplVar13 = ppplVar11;
  func_0x000108185774();
  pcStack_178 = FUN_10818478c;
  pplVar23 = ppplVar13[0xea];
  ppplVar18 = ppplVar15;
  ppuStack_1d0 = (ulong **)&pplStack_c0;
  pplStack_1c8 = pplVar31;
  ppuStack_1c0 = (ulong **)&pplStack_158;
  ppuStack_1b8 = &puStack_128;
  ppplStack_1b0 = param_1;
  ppplStack_1a8 = param_2;
  ppplStack_1a0 = param_3;
  pplStack_198 = unaff_x21;
  lStack_190 = param_5;
  ppplStack_188 = ppplVar11;
  puStack_180 = &stack0xfffffffffffffff0;
  if (ppplVar13[0xe9] == pplVar23) {
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    pplStack_240 = (long **)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    pplStack_258 = (long **)0x0;
    pplStack_260 = (long **)0x0;
    plStack_248 = (long *)0x0;
    pplStack_250 = (long **)0x0;
    plStack_200 = *ppplVar13[2];
    uStack_1f8 = 0;
    uStack_1f3 = 0;
    uStack_1f0 = 0;
    ppplVar18 = &pplStack_260;
    FUN_108184d0c(ppplVar13 + 0xe9);
    func_0x000108180b50();
    pplVar23 = ppplVar13[0xea];
  }
  plVar26 = pplVar23[-0xd];
  plVar24 = pplVar23[-0xe];
  if (plVar24 < plVar26) {
    pplVar31 = *ppplVar15;
    if (pplVar31 != (long **)0x0) {
      pplVar12 = pplVar31 + 1;
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pplVar12,0x10);
        if (bVar10) {
          *(int *)pplVar12 = *(int *)pplVar12 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    *plVar24 = (long)pplVar31;
    pplVar31 = ppplVar15[1];
    *(undefined8 *)((long)plVar24 + 0xf) = *(undefined8 *)((long)ppplVar15 + 0xf);
    plVar24[1] = (long)pplVar31;
    plVar24[3] = (long)ppplVar15[3];
    plVar24 = plVar24 + 4;
  }
  else {
    lVar32 = (long)plVar24 - (long)pplVar23[-0xf];
    uVar22 = (lVar32 >> 5) + 1;
    if (uVar22 >> 0x3b != 0) {
      FUN_108184f58();
      ppplVar15 = &pplStack_260;
      func_0x000108180b50();
      func_0x000108185774();
      iVar21 = *(int *)(ppplVar15 + 1);
      iVar16 = (int)ppplVar18;
      if (iVar21 < iVar16) {
        if (iVar21 == 0) {
          func_0x000108184bc8(0x3ff0000000000000,ppplVar15,ppplVar18);
          iVar21 = *(int *)(ppplVar15 + 1);
        }
        func_0x000108184bc8(0x3ff8000000000000);
        iVar6 = *(int *)(ppplVar15 + 1);
        *(int *)(ppplVar15 + 1) = iVar6 + (iVar16 - iVar21);
        return (long ***)((long)*ppplVar15 + (long)iVar6 * 4);
      }
      if (iVar21 - iVar16 != 0 && iVar16 <= iVar21) {
        uVar5 = *(uint *)(ppplVar15 + 1);
        uVar8 = uVar5 - (iVar21 - iVar16);
        uVar3 = uVar5;
        if ((int)uVar8 <= (int)uVar5) {
          uVar3 = uVar8;
        }
        if (uVar5 - uVar3 <= (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU))) {
          *(uint *)(ppplVar15 + 1) = uVar8;
          return ppplVar15;
        }
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x108184c40);
        (*pcVar9)();
      }
      return ppplVar15;
    }
    uVar27 = (long)plVar26 - (long)pplVar23[-0xf];
    uVar28 = (long)uVar27 >> 4;
    if (uVar28 <= uVar22) {
      uVar28 = uVar22;
    }
    if (0x7fffffffffffffdf < uVar27) {
      uVar28 = 0x7ffffffffffffff;
    }
    if (uVar28 == 0) {
      ppplVar18 = (long ***)0x0;
    }
    else {
      FUN_108184f64();
    }
    puVar2 = (undefined8 *)(uVar28 + lVar32);
    uVar25 = 0;
    if (*ppplVar15 != (long **)0x0) {
      do {
        func_0x00010818573c();
        uVar25 = extraout_x8_02;
      } while (extraout_w11_01 != 0);
    }
    *puVar2 = uVar25;
    pplVar31 = ppplVar15[1];
    *(undefined8 *)((long)puVar2 + 0xf) = *(undefined8 *)((long)ppplVar15 + 0xf);
    puVar2[1] = pplVar31;
    puVar2[3] = ppplVar15[3];
    plVar26 = pplVar23[-0xf];
    plVar30 = pplVar23[-0xe];
    plVar4 = (long *)((long)puVar2 + ((long)plVar26 - (long)plVar30));
    pplStack_258 = &plStack_1e8;
    pplStack_250 = aplStack_1e0;
    aplStack_1e0[0] = plVar4;
    for (plVar24 = plVar26; plVar24 != plVar30; plVar24 = plVar24 + 4) {
      lVar32 = *plVar24;
      if (lVar32 != 0) {
        piVar1 = (int *)(lVar32 + 8);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      *aplStack_1e0[0] = lVar32;
      lVar32 = plVar24[1];
      *(undefined8 *)((long)aplStack_1e0[0] + 0xf) = *(undefined8 *)((long)plVar24 + 0xf);
      aplStack_1e0[0][1] = lVar32;
      aplStack_1e0[0][3] = plVar24[3];
      aplStack_1e0[0] = aplStack_1e0[0] + 4;
    }
    plStack_248 = (long *)CONCAT71(plStack_248._1_7_,1);
    pplStack_260 = pplVar23 + -0xd;
    plStack_1e8 = plVar4;
    for (; plVar26 != plVar30; plVar26 = plVar26 + 4) {
      func_0x0001081298a0();
    }
    plVar24 = puVar2 + 4;
    func_0x000108184f94(&pplStack_260);
    plVar26 = pplVar23[-0xf];
    pplVar23[-0xf] = plVar4;
    pplVar23[-0xe] = plVar24;
    pplVar23[-0xd] = (long *)(uVar28 + (long)ppplVar18 * 0x20);
    if (plVar26 != (long *)0x0) {
      __ZdlPv();
    }
  }
  pplVar23[-0xe] = plVar24;
  ppplVar11 = (long ***)(pplVar23 + -0xc);
  func_0x00010730bb54(ppplVar11,pplVar23[-0xb],ppplVar19,
                      (short *)((long)ppplVar19 + (long)ppplVar15[3] * 2));
  pplVar31 = ppplVar15[3];
  if (0 < (long)pplVar31) {
    pplVar29 = pplVar23 + -9;
    plVar24 = pplVar23[-8];
    lVar32 = (long)pplVar31 * 8;
    pplVar12 = pplVar23 + -7;
    if (lVar32 - ((long)*pplVar12 - (long)plVar24) == 0 || lVar32 < (long)*pplVar12 - (long)plVar24)
    {
      for (; lVar32 != 0; lVar32 = lVar32 + -8) {
        *plVar24 = (long)*param_4;
        param_4 = param_4 + 1;
        plVar24 = plVar24 + 1;
      }
      pplVar23[-8] = plVar24;
    }
    else {
      pplVar14 = pplVar29;
      FUN_1081850a8(pplVar29,(long)pplVar31 + ((long)plVar24 - (long)*pplVar29 >> 3));
      plVar26 = *pplVar29;
      pplVar29 = (long **)0x0;
      pplStack_240 = pplVar12;
      if (pplVar14 != (long **)0x0) {
        FUN_108185044();
        pplVar29 = pplVar12;
      }
      plVar26 = (long *)((long)pplVar29 + ((long)plVar24 - (long)plVar26));
      plVar4 = plVar26;
      for (; lVar32 != 0; lVar32 = lVar32 + -8) {
        *plVar4 = (long)*param_4;
        plVar4 = plVar4 + 1;
        param_4 = param_4 + 1;
      }
      _memcpy(plVar26 + (long)pplVar31,plVar24,(long)pplVar23[-8] - (long)plVar24);
      plVar4 = pplVar23[-8];
      pplVar23[-8] = plVar24;
      plVar30 = (long *)((long)plVar26 - ((long)plVar24 - (long)pplVar23[-9]));
      _memcpy(plVar30);
      pplStack_260 = (long **)pplVar23[-9];
      pplVar23[-9] = plVar30;
      pplVar23[-8] = (long *)((long)(plVar26 + (long)pplVar31) + ((long)plVar4 - (long)plVar24));
      plStack_248 = pplVar23[-7];
      pplVar23[-7] = (long *)(pplVar29 + (long)pplVar14);
      ppplVar11 = &pplStack_260;
      pplStack_258 = pplStack_260;
      pplStack_250 = pplStack_260;
      FUN_1081850e8(ppplVar11);
    }
  }
  pplVar12 = ppplVar15[3];
  for (pplVar31 = pplVar12; pplVar31 != (long **)0x0; pplVar31 = (long **)((long)pplVar31 + -1)) {
    pplVar29 = ppplVar13[0xec];
    if (*(short *)ppplVar19 == 0) {
      pplVar29 = (long **)((long)pplVar29 + 1);
    }
    ppplVar13[0xec] = pplVar29;
    ppplVar19 = (long ***)((long)ppplVar19 + 2);
  }
  if ((*(byte *)(ppplVar13[1] + 7) >> 2 & 1) != 0) {
    ppplVar19 = (long ***)(pplVar23 + -6);
    ppplVar11 = ppplVar19;
    func_0x0001073bf8d4(ppplVar19,(long)pplVar12 + ((long)pplVar23[-5] - (long)*ppplVar19 >> 3));
    for (pplVar31 = (long **)0x0; pplVar31 < ppplVar15[3]; pplVar31 = (long **)((long)pplVar31 + 1))
    {
      pplStack_260 = (long **)((long)ppplVar13[0xe8] + (ulong)*(uint *)(lVar20 + (long)pplVar31 * 4)
                              );
      ppplVar11 = ppplVar19;
      func_0x0001057f9264(ppplVar19,&pplStack_260);
    }
  }
  return ppplVar11;
}



/* Entry: 10818478c; end: 108184b5f;  */

long *** FUN_10818478c(long param_1,long ***param_2,short *param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long ***ppplVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  undefined8 extraout_x8;
  undefined8 uVar18;
  long lVar19;
  long **pplVar20;
  long *plVar21;
  long **pplVar22;
  ulong uVar23;
  ulong uVar24;
  int extraout_w11;
  long lVar25;
  long ***ppplVar26;
  undefined8 *puVar27;
  long lVar28;
  long **pplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  long *plStack_78;
  long *aplStack_70 [2];
  
  lVar25 = *(long *)(param_1 + 0x750);
  ppplVar13 = param_2;
  if (*(long *)(param_1 + 0x748) == lVar25) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    plStack_d0 = (long *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    pplStack_e8 = (long **)0x0;
    pplStack_f0 = (long **)0x0;
    uStack_d8 = 0;
    pplStack_e0 = (long **)0x0;
    uStack_90 = **(undefined8 **)(param_1 + 0x10);
    uStack_88 = 0;
    uStack_83 = 0;
    uStack_80 = 0;
    ppplVar13 = &pplStack_f0;
    FUN_108184d0c(param_1 + 0x748);
    func_0x000108180b50();
    lVar25 = *(long *)(param_1 + 0x750);
  }
  plVar21 = *(long **)(lVar25 + -0x68);
  plVar17 = *(long **)(lVar25 + -0x70);
  if (plVar17 < plVar21) {
    pplVar22 = *param_2;
    if (pplVar22 != (long **)0x0) {
      pplVar20 = pplVar22 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pplVar20,0x10);
        if (bVar9) {
          *(int *)pplVar20 = *(int *)pplVar20 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    *plVar17 = (long)pplVar22;
    pplVar22 = param_2[1];
    *(undefined8 *)((long)plVar17 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    plVar17[1] = (long)pplVar22;
    plVar17[3] = (long)param_2[3];
    plVar17 = plVar17 + 4;
  }
  else {
    lVar28 = (long)plVar17 - *(long *)(lVar25 + -0x78);
    uVar1 = (lVar28 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_108184f58();
      ppplVar26 = &pplStack_f0;
      func_0x000108180b50();
      func_0x000108185774();
      iVar16 = *(int *)(ppplVar26 + 1);
      iVar15 = (int)ppplVar13;
      if (iVar16 < iVar15) {
        if (iVar16 == 0) {
          func_0x000108184bc8(0x3ff0000000000000,ppplVar26,ppplVar13);
          iVar16 = *(int *)(ppplVar26 + 1);
        }
        func_0x000108184bc8(0x3ff8000000000000);
        iVar7 = *(int *)(ppplVar26 + 1);
        *(int *)(ppplVar26 + 1) = iVar7 + (iVar15 - iVar16);
        return (long ***)((long)*ppplVar26 + (long)iVar7 * 4);
      }
      if (iVar16 - iVar15 != 0 && iVar15 <= iVar16) {
        uVar6 = *(uint *)(ppplVar26 + 1);
        uVar10 = uVar6 - (iVar16 - iVar15);
        uVar4 = uVar6;
        if ((int)uVar10 <= (int)uVar6) {
          uVar4 = uVar10;
        }
        if (uVar6 - uVar4 <= (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU))) {
          *(uint *)(ppplVar26 + 1) = uVar10;
          return ppplVar26;
        }
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x108184c40);
        (*pcVar12)();
      }
      return ppplVar26;
    }
    uVar23 = (long)plVar21 - *(long *)(lVar25 + -0x78);
    uVar24 = (long)uVar23 >> 4;
    if (uVar24 <= uVar1) {
      uVar24 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar23) {
      uVar24 = 0x7ffffffffffffff;
    }
    if (uVar24 == 0) {
      ppplVar13 = (long ***)0x0;
    }
    else {
      FUN_108184f64();
    }
    puVar27 = (undefined8 *)(uVar24 + lVar28);
    uVar18 = 0;
    if (*param_2 != (long **)0x0) {
      do {
        func_0x00010818573c();
        uVar18 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *puVar27 = uVar18;
    pplVar22 = param_2[1];
    *(undefined8 *)((long)puVar27 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    puVar27[1] = pplVar22;
    puVar27[3] = param_2[3];
    plVar21 = *(long **)(lVar25 + -0x78);
    plVar5 = *(long **)(lVar25 + -0x70);
    plVar14 = (long *)((long)puVar27 + ((long)plVar21 - (long)plVar5));
    pplStack_e8 = &plStack_78;
    pplStack_e0 = aplStack_70;
    aplStack_70[0] = plVar14;
    for (plVar17 = plVar21; plVar17 != plVar5; plVar17 = plVar17 + 4) {
      lVar28 = *plVar17;
      if (lVar28 != 0) {
        piVar2 = (int *)(lVar28 + 8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      *aplStack_70[0] = lVar28;
      lVar28 = plVar17[1];
      *(undefined8 *)((long)aplStack_70[0] + 0xf) = *(undefined8 *)((long)plVar17 + 0xf);
      aplStack_70[0][1] = lVar28;
      aplStack_70[0][3] = plVar17[3];
      aplStack_70[0] = aplStack_70[0] + 4;
    }
    uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
    pplStack_f0 = (long **)(lVar25 + -0x68);
    plStack_78 = plVar14;
    for (; plVar21 != plVar5; plVar21 = plVar21 + 4) {
      func_0x0001081298a0();
    }
    plVar17 = puVar27 + 4;
    func_0x000108184f94(&pplStack_f0);
    lVar28 = *(long *)(lVar25 + -0x78);
    *(long **)(lVar25 + -0x78) = plVar14;
    *(long **)(lVar25 + -0x70) = plVar17;
    *(ulong *)(lVar25 + -0x68) = uVar24 + (long)ppplVar13 * 0x20;
    if (lVar28 != 0) {
      __ZdlPv();
    }
  }
  *(long **)(lVar25 + -0x70) = plVar17;
  ppplVar13 = (long ***)(lVar25 + -0x60);
  func_0x00010730bb54(ppplVar13,*(undefined8 *)(lVar25 + -0x58),param_3,param_3 + (long)param_2[3]);
  pplVar22 = param_2[3];
  if (0 < (long)pplVar22) {
    plVar21 = (long *)(lVar25 + -0x48);
    puVar27 = *(undefined8 **)(lVar25 + -0x40);
    lVar28 = (long)pplVar22 * 8;
    plVar17 = (long *)(lVar25 + -0x38);
    if (lVar28 - (*plVar17 - (long)puVar27) == 0 || lVar28 < *plVar17 - (long)puVar27) {
      for (; lVar28 != 0; lVar28 = lVar28 + -8) {
        *puVar27 = *param_4;
        param_4 = param_4 + 1;
        puVar27 = puVar27 + 1;
      }
      *(undefined8 **)(lVar25 + -0x40) = puVar27;
    }
    else {
      plVar14 = plVar21;
      FUN_1081850a8(plVar21,(long)pplVar22 + ((long)puVar27 - *plVar21 >> 3));
      lVar19 = *plVar21;
      plVar21 = (long *)0x0;
      plStack_d0 = plVar17;
      if (plVar14 != (long *)0x0) {
        FUN_108185044();
        plVar21 = plVar17;
      }
      puVar3 = (undefined8 *)((long)plVar21 + ((long)puVar27 - lVar19));
      puVar11 = puVar3;
      for (; lVar28 != 0; lVar28 = lVar28 + -8) {
        *puVar11 = *param_4;
        puVar11 = puVar11 + 1;
        param_4 = param_4 + 1;
      }
      _memcpy(puVar3 + (long)pplVar22,puVar27,*(long *)(lVar25 + -0x40) - (long)puVar27);
      lVar28 = *(long *)(lVar25 + -0x40);
      *(undefined8 **)(lVar25 + -0x40) = puVar27;
      lVar19 = (long)puVar3 - ((long)puVar27 - *(long *)(lVar25 + -0x48));
      _memcpy(lVar19);
      pplStack_f0 = *(long ***)(lVar25 + -0x48);
      *(long *)(lVar25 + -0x48) = lVar19;
      *(long *)(lVar25 + -0x40) = (long)(puVar3 + (long)pplVar22) + (lVar28 - (long)puVar27);
      uStack_d8 = *(undefined8 *)(lVar25 + -0x38);
      *(long **)(lVar25 + -0x38) = plVar21 + (long)plVar14;
      ppplVar13 = &pplStack_f0;
      pplStack_e8 = pplStack_f0;
      pplStack_e0 = pplStack_f0;
      FUN_1081850e8(ppplVar13);
    }
  }
  pplVar20 = param_2[3];
  for (pplVar22 = pplVar20; pplVar22 != (long **)0x0; pplVar22 = (long **)((long)pplVar22 + -1)) {
    lVar28 = *(long *)(param_1 + 0x760);
    if (*param_3 == 0) {
      lVar28 = lVar28 + 1;
    }
    *(long *)(param_1 + 0x760) = lVar28;
    param_3 = param_3 + 1;
  }
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x38) >> 2 & 1) != 0) {
    ppplVar26 = (long ***)(lVar25 + -0x30);
    ppplVar13 = ppplVar26;
    func_0x0001073bf8d4(ppplVar26,
                        (long)pplVar20 + (*(long *)(lVar25 + -0x28) - (long)*ppplVar26 >> 3));
    for (pplVar22 = (long **)0x0; pplVar22 < param_2[3]; pplVar22 = (long **)((long)pplVar22 + 1)) {
      pplStack_f0 = (long **)(*(long *)(param_1 + 0x740) +
                             (ulong)*(uint *)(param_5 + (long)pplVar22 * 4));
      ppplVar13 = ppplVar26;
      func_0x0001057f9264(ppplVar26,&pplStack_f0);
    }
  }
  return ppplVar13;
}



/* Entry: 108184b60; end: 108184c13;  */

long * FUN_108184b60(long *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  iVar6 = (int)param_2;
  if (iVar7 < iVar6) {
    if (iVar7 == 0) {
      func_0x000108184bc8(0x3ff0000000000000,param_1,param_2);
      iVar7 = (int)param_1[1];
    }
    func_0x000108184bc8(0x3ff8000000000000);
    lVar4 = param_1[1];
    *(int *)(param_1 + 1) = (int)lVar4 + (iVar6 - iVar7);
    return (long *)(*param_1 + (long)(int)lVar4 * 4);
  }
  if (iVar7 - iVar6 != 0 && iVar6 <= iVar7) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar3 = uVar2 - (iVar7 - iVar6);
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
      *(uint *)(param_1 + 1) = uVar3;
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x108184c40);
    (*pcVar5)();
  }
  return param_1;
}



/* Entry: 108184c14; end: 108184c3f;  */

void FUN_108184c14(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = uVar2 - param_2;
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
    *(uint *)(param_1 + 8) = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108184c40);
  (*pcVar4)();
}



/* Entry: 108184c40; end: 108184caf;  */

void FUN_108184c40(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 2);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x000108185818();
  }
  param_3 = param_3 >> 2;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108184cb0; end: 108184cd3;  */

undefined1 ** FUN_108184cb0(long *param_1,int param_2)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    ppuVar2 = &puStack_20;
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x4;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + param_2);
    return ppuVar2;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_108184cd4;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000108184bc8(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return (undefined1 **)(undefined1 *)(*param_1 + (long)(int)lVar1 * 4);
}



/* Entry: 108184cd4; end: 108184d0b;  */

long FUN_108184cd4(long *param_1,int param_2)

{
  long lVar1;
  
  func_0x000108184bc8(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 4;
}



/* Entry: 108184d0c; end: 108184e8f;  */

void FUN_108184d0c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar7 = (ulong *)(param_1 + 2);
  uVar4 = param_1[1];
  if (uVar4 < *puVar7) {
    FUN_108184e90(uVar4,param_2);
    lVar8 = uVar4 + 0x78;
  }
  else {
    lVar8 = uVar4 - *param_1;
    uVar1 = lVar8 / 0x78 + 1;
    if (0x222222222222222 < uVar1) {
      FUN_108184ebc();
      func_0x000108181108();
      uVar12 = *(undefined8 *)(param_2 + 0x68);
      uVar11 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(uVar4 + 0x6d) = *(undefined8 *)(param_2 + 0x6d);
      *(undefined8 *)(uVar4 + 0x68) = uVar12;
      *(undefined8 *)(uVar4 + 0x60) = uVar11;
      return;
    }
    uVar3 = (long)(*puVar7 - *param_1) / 0x78;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x111111111111110 < uVar3) {
      uVar4 = 0x222222222222222;
    }
    if (uVar4 == 0) {
      puVar7 = (ulong *)0x0;
      uVar4 = 0;
    }
    else {
      FUN_108184ec8();
    }
    lVar8 = (long)puVar7 + lVar8;
    FUN_108184e90(lVar8,param_2);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    lVar10 = lVar8 + ((lVar2 - lVar9) / -0x78) * 0x78;
    lVar5 = lVar10;
    for (lVar6 = lVar9; lVar6 != lVar2; lVar6 = lVar6 + 0x78) {
      FUN_108184e90(lVar5,lVar6);
      lVar5 = lVar5 + 0x78;
    }
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x78) {
      func_0x000108180b50(lVar9);
    }
    lVar8 = lVar8 + 0x78;
    func_0x000108185808();
    lVar6 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar8;
    param_1[2] = (long)(puVar7 + uVar4 * 0xf);
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar8;
  return;
}



/* Entry: 108184e90; end: 108184ebb;  */

void FUN_108184e90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108181108();
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x6d) = *(undefined8 *)(param_2 + 0x6d);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



/* Entry: 108184ebc; end: 108184ec7;  */

void FUN_108184ebc(void)

{
  func_0x000108185784();
  FUN_108184ee8();
  return;
}



/* Entry: 108184ec8; end: 108184ee7;  */

void FUN_108184ec8(void)

{
  FUN_108184ee8();
  return;
}



/* Entry: 108184ee8; end: 108184f13;  */

long FUN_108184ee8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 < 0x222222222222223) {
    lVar1 = param_2 * 0x78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x78;
      func_0x000108180b50();
    }
  }
  return param_1;
}



/* Entry: 108184f14; end: 108184f57;  */

long FUN_108184f14(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x78;
      func_0x000108180b50();
    }
  }
  return param_1;
}



/* Entry: 108184f58; end: 108184f63;  */

undefined1  [16] FUN_108184f58(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000108185784();
  if (param_1 >> 0x3b == 0) {
    lVar1 = param_1 << 5;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x0001081298a0();
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108184f64; end: 108185037;  */

undefined1  [16] FUN_108184f64(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 >> 0x3b == 0) {
    lVar1 = param_1 << 5;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x0001081298a0();
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108185038; end: 108185043;  */

void FUN_108185038(void)

{
  func_0x000108185784();
  FUN_108185064();
  return;
}



/* Entry: 108185044; end: 108185063;  */

void FUN_108185044(void)

{
  FUN_108185064();
  return;
}



/* Entry: 108185064; end: 10818507f;  */

void FUN_108185064(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000108185840();
  if ((extraout_x8 & 1) == 0) {
    FUN_108180bac();
  }
  return;
}



/* Entry: 108185080; end: 1081850a7;  */

void FUN_108185080(void)

{
  uint extraout_w8;
  
  func_0x000108185840();
  if ((extraout_w8 & 1) == 0) {
    FUN_108180bac();
  }
  return;
}



/* Entry: 1081850a8; end: 1081850e7;  */

long * FUN_1081850a8(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_108185038();
  FUN_108185114();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081850e8; end: 108185113;  */

long * FUN_1081850e8(long *param_1)

{
  FUN_108185114();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108185114; end: 108185137;  */

void FUN_108185114(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108185138; end: 108185173;  */

undefined8 * FUN_108185138(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *(bool *)(param_1 + 2) = param_3 == 0;
  *param_1 = &PTR_FUN_110a2b228;
  param_1[1] = param_3;
  FUN_1083a3348(param_1 + 3);
  return param_1;
}



/* Entry: 108185174; end: 108185177;  */

undefined8 * FUN_108185174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2b228;
  FUN_1083a3c7c(param_1 + 3);
  return param_1;
}



/* Entry: 108185178; end: 10818518b;  */

void FUN_108185178(void)

{
  FUN_1081851b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818518c; end: 1081851b3;  */

void FUN_10818518c(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1081851b4; end: 1081851e3;  */

undefined8 * FUN_1081851b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2b228;
  FUN_1083a3c7c(param_1 + 3);
  return param_1;
}



/* Entry: 1081851e4; end: 10818525f;  */

void FUN_1081851e4(void)

{
  return;
}



/* Entry: 108185260; end: 10818533b;  */

ulong FUN_108185260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   long param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  ulong auStack_50 [2];
  
  lVar1 = *(long *)(param_5 + 0x748);
  lVar2 = *(long *)(param_5 + 0x750);
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x78) {
    FUN_1081834c8(lVar1,1);
    uVar3 = *(undefined4 *)(lVar1 + 0x60);
    uVar4 = *(undefined4 *)(lVar1 + 100);
    uStack_70 = param_1;
    uStack_6c = param_2;
    uStack_68 = param_3;
    uStack_64 = param_4;
    func_0x0001081836ec(&uStack_70);
    func_0x0001081857cc();
    func_0x00010838ed50(auStack_50,auStack_60);
    param_1 = uVar3;
    param_2 = uVar4;
  }
  return auStack_50[0] & 0xffffffff;
}



/* Entry: 10818533c; end: 108185353;  */

void FUN_10818533c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x000108185380();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108185354; end: 1081853bb;  */

void FUN_108185354(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000108185380();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1081853bc; end: 10818541b;  */

void FUN_1081853bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000100b56a58();
    FUN_10818541c();
    func_0x000100b56b38();
    FUN_108185464();
  }
  uStack_38 = 1;
  FUN_1081856cc(&uStack_40);
  return;
}



/* Entry: 10818541c; end: 108185463;  */

void FUN_10818541c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x222222222222223) {
    plVar1 = param_1 + 2;
    FUN_108184ec8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xf);
  }
  else {
    FUN_108184ebc();
    plVar1 = param_1 + 2;
    FUN_108185498();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 108185464; end: 108185497;  */

void FUN_108185464(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_108185498();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108185498; end: 1081854ab;  */

void FUN_108185498(void)

{
  FUN_1081854ac();
  return;
}



/* Entry: 1081854ac; end: 1081856cb;  */

ulong * FUN_1081854ac(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long lVar6;
  int extraout_w11;
  ulong *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puStack_a8;
  ulong *puStack_a0;
  undefined1 uStack_98;
  ulong *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  func_0x000100b56a58();
  puStack_a8 = param_4;
  do {
    if (unaff_x21 == unaff_x20) {
      func_0x000108185808();
      return unaff_x19;
    }
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    plVar7 = (long *)*unaff_x21;
    plVar1 = (long *)unaff_x21[1];
    uStack_98 = 0;
    lVar6 = (long)plVar1 - (long)plVar7;
    puStack_a0 = unaff_x19;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 >> 5);
      if ((ulong)puVar4 >> 0x3b != 0) {
        FUN_108184f58();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108185678);
        (*pcVar3)();
      }
      FUN_108184f64();
      puStack_90 = unaff_x19 + 2;
      *puStack_90 = (ulong)(puVar4 + (long)param_2 * 4);
      *unaff_x19 = (ulong)puVar4;
      unaff_x19[1] = (ulong)puVar4;
      ppuStack_88 = &puStack_70;
      ppuStack_80 = &puStack_68;
      puStack_70 = puVar4;
      for (; puStack_68 = puVar4, plVar7 != plVar1; plVar7 = plVar7 + 4) {
        uVar5 = 0;
        if (*plVar7 != 0) {
          do {
            func_0x00010818573c();
            uVar5 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        *puVar4 = uVar5;
        lVar6 = plVar7[1];
        *(undefined8 *)((long)puVar4 + 0xf) = *(undefined8 *)((long)plVar7 + 0xf);
        puVar4[1] = lVar6;
        puVar4[3] = plVar7[3];
        puVar4 = puVar4 + 4;
      }
      uStack_78 = 1;
      func_0x000108184f94(&puStack_90);
      unaff_x19[1] = (ulong)puVar4;
    }
    uStack_98 = 1;
    func_0x000108184fd8(&puStack_a0);
    func_0x000107428d48(unaff_x19 + 3,unaff_x21 + 3);
    puStack_90 = unaff_x19 + 6;
    *puStack_90 = 0;
    unaff_x19[7] = 0;
    unaff_x19[8] = 0;
    lVar6 = unaff_x21[6];
    ppuStack_88 = (undefined8 **)((ulong)ppuStack_88 & 0xffffffffffffff00);
    lVar2 = unaff_x21[7] - lVar6;
    if (lVar2 != 0) {
      func_0x000108185000(puStack_90,lVar2 >> 3);
      uVar8 = unaff_x19[7];
      _memmove(uVar8,lVar6,lVar2);
      unaff_x19[7] = uVar8 + lVar2;
    }
    ppuStack_88 = (undefined8 **)CONCAT71(ppuStack_88._1_7_,1);
    FUN_108185080(&puStack_90);
    param_2 = unaff_x21 + 9;
    func_0x0001073bc2c0(unaff_x19 + 9);
    uVar9 = unaff_x21[0xd];
    uVar8 = unaff_x21[0xc];
    *(undefined8 *)((long)unaff_x19 + 0x6d) = *(undefined8 *)((long)unaff_x21 + 0x6d);
    unaff_x19[0xd] = uVar9;
    unaff_x19[0xc] = uVar8;
    unaff_x21 = unaff_x21 + 0xf;
    unaff_x19 = puStack_a8 + 0xf;
    puStack_a8 = unaff_x19;
  } while( true );
}



/* Entry: 1081856cc; end: 1081856f3;  */

void FUN_1081856cc(void)

{
  uint extraout_w8;
  
  func_0x000108185840();
  if ((extraout_w8 & 1) == 0) {
    func_0x000108180ae4();
  }
  return;
}



/* Entry: 1081856f4; end: 10818571b;  */

undefined8 FUN_1081856f4(undefined8 param_1)

{
  FUN_108183664(param_1,0);
  return param_1;
}



/* Entry: 10818571c; end: 1081858bf;  */

void FUN_10818571c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108185724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1081858c0; end: 108185947;  */

void FUN_1081858c0(undefined8 param_1,undefined8 param_2)

{
  long lStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_40 = &PTR_FUN_110a403f8;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_108185948(param_2,&ppuStack_40);
  FUN_1083a05b4(&lStack_48,&ppuStack_40);
  FUN_1083a3394(param_1,*(undefined8 *)(lStack_48 + 0x18),*(undefined8 *)(lStack_48 + 0x20));
  func_0x0001078bddf8(&lStack_48);
  FUN_1083a02a4(&ppuStack_40);
  return;
}



/* Entry: 108185948; end: 108185daf;  */

void FUN_108185948(undefined8 ***param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined8 **ppuVar10;
  bool bVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuVar15;
  long *plVar16;
  float fVar17;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  
  lVar12 = param_2;
  if ((bRam0000000113729fe8 & 1) == 0) {
    iVar5 = 0x13729fe8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000108186fb0(1,0x113729fe0);
    }
  }
  if ((bRam0000000113729ff8 & 1) == 0) {
    iVar5 = 0x13729ff8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000108186fb0(1,0x113729ff0);
    }
  }
  if ((bRam000000011372a008 & 1) == 0) {
    iVar5 = 0x1372a008;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000108186fb0(1,0x11372a000);
    }
  }
  if ((bRam000000011372a018 & 1) == 0) {
    iVar5 = 0x1372a018;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000108186fb0(1,0x11372a010);
    }
  }
  pppuStack_a0 = (undefined8 ***)0x0;
  pppuStack_98 = (undefined8 ***)0x0;
  pppuStack_88 = &pppuStack_a0;
  pppuStack_90 = (undefined8 ***)0x0;
  pppuStack_80 = (undefined8 ***)((ulong)pppuStack_80 & 0xffffffffffffff00);
  ppppuVar6 = (undefined8 ****)0x1;
  FUN_108186674();
  pppuStack_90 = ppppuVar6 + lVar12;
  pppuStack_98 = ppppuVar6 + 1;
  *ppppuVar6 = param_1;
  pppuStack_80 = (undefined8 ***)CONCAT71(pppuStack_80._1_7_,1);
  pppuStack_a0 = ppppuVar6;
  func_0x0001081866a0(&pppuStack_88);
  do {
    pppuStack_98 = pppuStack_98 + -1;
    pppuVar15 = (undefined8 ***)*pppuStack_98;
    if (pppuVar15 == (undefined8 ***)0x113729fe0) {
      pcVar8 = "]";
      goto LAB_108185abc;
    }
    if (pppuVar15 == (undefined8 ***)0x113729ff0) {
      pcVar8 = "}";
      goto LAB_108185abc;
    }
    if (pppuVar15 == (undefined8 ***)0x11372a000) {
      pcVar8 = ",";
      goto LAB_108185abc;
    }
    if (pppuVar15 == (undefined8 ***)0x11372a010) {
      pcVar8 = ":";
      goto LAB_108185abc;
    }
    pppuVar7 = pppuVar15;
    FUN_108155444();
    pcVar8 = "null";
    switch((ulong)pppuVar7 & 0xffffffff) {
    case 0:
      goto LAB_108185abc;
    case 1:
      pcVar8 = "true";
      if (*(byte *)((long)pppuVar15 + 1) == 0) {
        pcVar8 = "false";
      }
      goto LAB_108185abc;
    case 2:
      if (((ulong)*pppuVar15 & 7) == 3) {
        fVar17 = (float)*(int *)((long)pppuVar15 + 4);
      }
      else {
        fVar17 = *(float *)((long)pppuVar15 + 4);
      }
      func_0x00010839fef4(fVar17,param_2,"null");
      break;
    case 3:
      func_0x00010818662c(param_2,&DAT_10f3b3c06);
      if (((ulong)*pppuVar15 & 7) == 0) {
        pbVar9 = (byte *)((long)pppuVar15 + 1);
      }
      else {
        pbVar9 = (byte *)(((ulong)*pppuVar15 & 0xfffffffffffffff8) + 8);
      }
      func_0x00010818662c(param_2,pbVar9);
      pcVar8 = "\"";
LAB_108185abc:
      func_0x00010818662c(param_2,pcVar8);
      break;
    case 4:
      func_0x00010818662c(param_2,&DAT_10f62a9e8);
      FUN_1081866e4(&pppuStack_a0,0x113729fe0);
      ppuVar10 = *pppuVar15;
      lVar12 = *(long *)((ulong)ppuVar10 & 0xfffffffffffffff8);
      if (lVar12 != 0) {
        pppuVar7 = (undefined8 ***)((long *)((ulong)ppuVar10 & 0xfffffffffffffff8) + lVar12);
        bVar11 = true;
        while ((undefined8 ***)(((ulong)ppuVar10 & 0xfffffffffffffff8) + 8) <= pppuVar7) {
          if (!bVar11) {
            func_0x000108187034();
          }
          if (pppuStack_98 < pppuStack_90) {
            ppppuVar13 = (undefined8 ****)(pppuStack_98 + 1);
            *pppuStack_98 = pppuVar7;
          }
          else {
            ppppuVar6 = &pppuStack_a0;
            lVar12 = ((long)pppuStack_98 - (long)pppuStack_a0 >> 3) + 1;
            FUN_10818674c();
            pppuVar4 = pppuStack_98;
            pppuVar2 = pppuStack_a0;
            pppuStack_68 = &pppuStack_90;
            if (ppppuVar6 == (undefined8 ****)0x0) {
              lVar12 = 0;
            }
            else {
              FUN_108186674();
            }
            pppuVar3 = pppuStack_a0;
            puVar1 = (undefined8 *)((long)ppppuVar6 + ((long)pppuVar4 - (long)pppuVar2));
            ppppuVar14 = (undefined8 ****)((long)puVar1 - ((long)pppuStack_98 - (long)pppuStack_a0))
            ;
            ppppuVar13 = (undefined8 ****)(puVar1 + 1);
            *puVar1 = pppuVar7;
            _memcpy(ppppuVar14,pppuVar3);
            pppuStack_88 = pppuStack_a0;
            pppuStack_78 = pppuStack_a0;
            pppuStack_70 = pppuStack_90;
            pppuStack_80 = pppuStack_a0;
            pppuStack_a0 = ppppuVar14;
            pppuStack_98 = ppppuVar13;
            pppuStack_90 = ppppuVar6 + lVar12;
            FUN_108186794(&pppuStack_88);
          }
          bVar11 = false;
          pppuVar7 = pppuVar7 + -1;
          pppuStack_98 = ppppuVar13;
          ppuVar10 = *pppuVar15;
        }
      }
      break;
    case 5:
      func_0x00010818662c(param_2,&DAT_10f2da0fd);
      FUN_1081866e4(&pppuStack_a0,0x113729ff0);
      ppuVar10 = *pppuVar15;
      lVar12 = *(long *)((ulong)ppuVar10 & 0xfffffffffffffff8);
      if (lVar12 != 0) {
        plVar16 = (long *)((ulong)ppuVar10 & 0xfffffffffffffff8) + lVar12 * 2;
        bVar11 = true;
        while ((long *)(((ulong)ppuVar10 & 0xfffffffffffffff8) + 8) <= plVar16 + -1) {
          if (!bVar11) {
            func_0x000108187034();
          }
          FUN_1081866e4(&pppuStack_a0,plVar16);
          FUN_1081866e4(&pppuStack_a0,0x11372a010);
          FUN_1081866e4(&pppuStack_a0,plVar16 + -1);
          bVar11 = false;
          plVar16 = plVar16 + -2;
          ppuVar10 = *pppuVar15;
        }
      }
    }
    if (pppuStack_a0 == pppuStack_98) {
      FUN_1081866cc(&pppuStack_a0);
      return;
    }
  } while( true );
}



/* Entry: 108185db0; end: 108186567;  */

ulong **** FUN_108185db0(ulong ****param_1,ulong *****param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  ulong **ppuVar4;
  long lVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong ****ppppuVar8;
  long lVar9;
  byte *pbVar10;
  ulong *****pppppuVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *puVar12;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  int iVar13;
  bool bVar14;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong *****pppppuVar18;
  ulong *****pppppuVar19;
  ulong ***pppuVar20;
  ulong ****ppppuVar21;
  ulong ***pppuVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  ulong ***pppuStack_e8;
  ulong ****ppppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong ****ppppuStack_98;
  ulong ****ppppuStack_90;
  ulong ****ppppuStack_88;
  long lStack_80;
  long *plStack_78;
  
  lVar9 = 0x1000;
  ppppuVar21 = param_1;
  FUN_108186568();
  lStack_d8 = 0;
  ppppuStack_e0 = (ulong ****)0x0;
  pppuStack_c8 = (ulong ***)0x0;
  lStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  ppuStack_b0 = (ulong **)0x0;
  uStack_a0 = 0x1138270b0;
  plStack_78 = &lStack_d0;
  lVar5 = 0x100;
  pppuStack_e8 = (ulong ***)ppppuVar21;
  FUN_10818687c();
  ppppuVar21 = (ulong ****)(lVar5 - (lStack_d8 - (long)ppppuStack_e0));
  _memcpy(ppppuVar21);
  ppppuStack_88 = ppppuStack_e0;
  lStack_80 = lStack_d0;
  ppppuStack_98 = ppppuStack_e0;
  ppppuStack_90 = ppppuStack_e0;
  ppppuStack_e0 = ppppuVar21;
  lStack_d8 = lVar5;
  lStack_d0 = lVar5 + lVar9 * 8;
  func_0x0001081868a8(&ppppuStack_98);
  pppppuVar6 = (ulong *****)&pppuStack_c8;
  FUN_1081867d4(pppppuVar6,0x200);
  if (param_3 != 0) {
    pppppuVar11 = (ulong *****)((long)param_2 + param_3);
    do {
      pppppuVar11 = (ulong *****)((long)pppppuVar11 + -1);
      if (pppppuVar11 <= param_2) break;
    } while (((byte)(&UNK_10df06f1e)[*(byte *)pppppuVar11] >> 1 & 1) != 0);
    if (((byte)(&UNK_10df06f1e)[*(byte *)pppppuVar11] >> 5 & 1) != 0) {
      func_0x000108186fa8();
      if (*(byte *)pppppuVar6 == 0x5b) goto LAB_10818606c;
      if (*(byte *)pppppuVar6 == 0x7b) {
LAB_108185eac:
        pppppuVar18 = (ulong *****)((long)pppppuVar6 + 1);
        FUN_108186914();
        pppppuVar6 = pppppuVar18;
        func_0x000108187058();
        pppuVar20 = (ulong ***)(lStack_d8 - (long)ppppuStack_e0 >> 3);
        ppuStack_b0 = (ulong **)pppuVar20;
        if (*(byte *)pppppuVar18 != 0x7d) goto LAB_108185f3c;
        if (-1 < (long)pppuVar20) {
LAB_1081864ac:
          pppuVar22 = (ulong ***)
                      ((ulong)((lStack_d8 - (long)ppppuStack_e0 >> 3) - (long)pppuVar20) >> 1);
          ppppuVar21 = ppppuStack_e0 + (long)pppuVar20;
          ppuStack_b0 = (ulong **)ppppuVar21[-1];
          ppppuVar8 = (ulong ****)pppuStack_e8;
          func_0x000108187018(pppuStack_e8,(long)pppuVar22 << 4 | 8);
          *ppppuVar8 = pppuVar22;
          if (((ulong)pppuVar22 & 0xfffffffffffffff) != 0) {
            _memcpy(ppppuVar8 + 1,ppppuVar21);
          }
          ppppuVar21[-1] = (ulong ***)((ulong)ppppuVar8 | 7);
          pppppuVar6 = &ppppuStack_e0;
          FUN_108186dfc(pppppuVar6,pppuVar20);
          do {
            if ((ulong ***)ppuStack_b0 == (ulong ***)0x0) {
              if (pppppuVar11 != pppppuVar18) break;
              pppuVar20 = *ppppuStack_e0;
              goto LAB_108185f08;
            }
            if (pppppuVar11 == pppppuVar18) break;
LAB_108186414:
            func_0x000108186fa8();
            bVar1 = *(byte *)pppppuVar6;
            if (bVar1 == 0x2c) {
              if ((long)ppuStack_b0 < 1) goto LAB_108185fe4;
LAB_108185f3c:
              func_0x000108186fa8();
              if (*(byte *)pppppuVar6 == 0x22) {
                bVar14 = false;
                ppppuVar21 = (ulong ****)((long)pppppuVar6 + 1);
                pppuVar20 = (ulong ***)0x1;
                pppppuVar18 = pppppuVar6;
                do {
                  pbVar10 = (byte *)((long)pppppuVar18 + ~(ulong)pppppuVar6);
                  pppppuVar19 = (ulong *****)((long)pppppuVar18 + 1);
                  do {
                    pppppuVar18 = pppppuVar19;
                    bVar1 = *(byte *)pppppuVar18;
                    pbVar10 = pbVar10 + 1;
                    pppppuVar19 = (ulong *****)((long)pppppuVar18 + 1);
                  } while (((byte)(&UNK_10df06f1e)[bVar1] >> 2 & 1) == 0);
                  if (bVar1 == 0x5c) {
                    bVar14 = true;
                    pppppuVar18 = (ulong *****)((long)pppppuVar18 + 1);
                  }
                  else {
                    if (bVar1 == 0x22) goto LAB_108185fa8;
                    if (((byte)(&UNK_10df06f1e)[bVar1] >> 5 & 1) == 0) goto LAB_108185f08;
                  }
                  if (pppppuVar11 == pppppuVar18) goto LAB_108185f08;
                } while( true );
              }
              break;
            }
            pppppuVar18 = pppppuVar6;
            if (bVar1 == 0x7d) goto LAB_1081864a4;
            if (bVar1 != 0x5d) break;
LAB_10818643c:
            ppuVar4 = ppuStack_b0;
            if (0 < (long)ppuStack_b0) break;
            pppuVar20 = (ulong ***)((long)ppuStack_b0 + (lStack_d8 - (long)ppppuStack_e0 >> 3));
            ppppuVar8 = ppppuStack_e0 + -(long)ppuStack_b0;
            ppuStack_b0 = (ulong **)ppppuVar8[-1];
            lVar5 = (long)pppuVar20 * 8;
            ppppuVar21 = (ulong ****)pppuStack_e8;
            func_0x000108187018(pppuStack_e8,lVar5 + 8);
            *ppppuVar21 = pppuVar20;
            if (lVar5 != 0) {
              _memcpy(ppppuVar21 + 1,ppppuVar8,lVar5);
            }
            ppppuVar8[-1] = (ulong ***)((ulong)ppppuVar21 | 6);
            pppppuVar6 = &ppppuStack_e0;
            FUN_108186dfc(pppppuVar6,-(long)ppuVar4);
          } while( true );
        }
      }
    }
  }
LAB_108185f04:
  pppuVar20 = (ulong ***)0x1;
LAB_108185f08:
  param_1[4] = pppuVar20;
  FUN_108186578(&pppuStack_e8);
  return param_1;
LAB_108185fa8:
  pppppuVar18 = pppppuVar11;
  if (bVar14) {
    func_0x000108187020();
    if (pppppuVar6 == (ulong *****)0x0) goto LAB_108185f04;
    ppppuVar21 = *pppppuVar6;
    pbVar10 = (byte *)((long)pppppuVar6[1] - (long)ppppuVar21);
    pppppuVar18 = (ulong *****)((long)pppppuVar6[1] + -1);
  }
  pppppuVar6 = (ulong *****)&pppuStack_e8;
  FUN_108186c04(pppppuVar6,ppppuVar21,pbVar10,pppppuVar18);
  func_0x000108186fa8();
  if (*(byte *)pppppuVar6 != 0x3a) goto LAB_108185f04;
LAB_108185fe4:
  func_0x000108186fa8();
  bVar1 = *(byte *)pppppuVar6;
  if (bVar1 == 0x22) goto LAB_108186154;
  if (bVar1 == 0x5b) goto LAB_10818606c;
  if (bVar1 == 0x66) {
    if ((((*(byte *)((long)pppppuVar6 + 1) != 0x61) || (*(byte *)((long)pppppuVar6 + 2) != 0x6c)) ||
        (*(byte *)((long)pppppuVar6 + 3) != 0x73)) || (*(byte *)((long)pppppuVar6 + 4) != 0x65))
    goto LAB_108185f04;
    pppppuVar7 = &ppppuStack_e0;
    FUN_108186930(pppppuVar7,2);
    pppppuVar19 = (ulong *****)((long)pppppuVar6 + 5);
    goto LAB_10818614c;
  }
  if (bVar1 == 0x6e) {
    if (((*(byte *)((long)pppppuVar6 + 1) != 0x75) || (*(byte *)((long)pppppuVar6 + 2) != 0x6c)) ||
       (*(byte *)((long)pppppuVar6 + 3) != 0x6c)) goto LAB_108185f04;
    pppppuVar7 = &ppppuStack_e0;
    FUN_108186930(pppppuVar7,1);
LAB_108186148:
    pppppuVar19 = (ulong *****)((long)pppppuVar6 + 4);
    goto LAB_10818614c;
  }
  if (bVar1 == 0x74) {
    if (((*(byte *)((long)pppppuVar6 + 1) == 0x72) && (*(byte *)((long)pppppuVar6 + 2) == 0x75)) &&
       (*(byte *)((long)pppppuVar6 + 3) == 0x65)) {
      pppppuVar7 = &ppppuStack_e0;
      FUN_108186930(pppppuVar7,0x102);
      goto LAB_108186148;
    }
    goto LAB_108185f04;
  }
  if (bVar1 == 0x7b) goto LAB_108185eac;
  if (bVar1 == 0) goto LAB_108185f04;
  pppppuVar18 = pppppuVar6;
  if (bVar1 == 0x2d) {
    pppppuVar18 = (ulong *****)((long)pppppuVar6 + 1);
  }
  uVar15 = (ulong)*(byte *)pppppuVar18;
  uVar17 = (uint)(byte)(&UNK_10df06f1e)[uVar15];
  if (((byte)(&UNK_10df06f1e)[uVar15] >> 3 & 1) == 0) {
    iVar13 = 0;
    pppppuVar19 = pppppuVar18;
  }
  else {
    iVar13 = (int)(char)*(byte *)pppppuVar18;
    pppppuVar19 = (ulong *****)((long)pppppuVar6 + (ulong)(bVar1 == 0x2d));
    while( true ) {
      iVar13 = iVar13 + -0x30;
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + 1);
      uVar15 = (ulong)*(byte *)pppppuVar19;
      uVar17 = (uint)(byte)(&UNK_10df06f1e)[uVar15];
      if ((((byte)(&UNK_10df06f1e)[uVar15] >> 3 & 1) == 0) || (0xccccccb < iVar13)) break;
      iVar13 = (int)(char)*(byte *)pppppuVar19 + iVar13 * 10;
    }
  }
  pppppuVar7 = pppppuVar6;
  if ((uVar17 >> 4 & 1) != 0) {
    puVar12 = &UNK_10df07020;
    if ((int)uVar15 == 0x2e) {
      uVar16 = 0;
      pppppuVar18 = pppppuVar19;
      while( true ) {
        uVar15 = (ulong)*(byte *)((long)pppppuVar18 + 1);
        bVar1 = (&UNK_10df06f1e)[uVar15];
        if (((bVar1 >> 3 & 1) == 0) || (0xccccccb < iVar13)) break;
        iVar13 = (int)(char)*(byte *)((long)pppppuVar18 + 1) + iVar13 * 10 + -0x30;
        pppppuVar18 = (ulong *****)((long)pppppuVar18 + 2);
        uVar15 = (ulong)*(byte *)pppppuVar18;
        bVar1 = (&UNK_10df06f1e)[uVar15];
        if (((bVar1 >> 3 & 1) == 0) || (0xccccccb < iVar13)) {
          lVar5 = 2 - uVar16;
          uVar16 = (ulong)((int)uVar16 - 1);
          goto LAB_1081862a4;
        }
        iVar13 = (int)(char)*(byte *)pppppuVar18 + iVar13 * 10 + -0x30;
        uVar16 = uVar16 - 2;
      }
      lVar5 = 1 - uVar16;
LAB_1081862a4:
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + lVar5);
      if ((bVar1 >> 4 & 1) == 0) {
        if (lVar5 < 2) goto LAB_1081863d8;
        if ((int)uVar16 < -0x1f) {
          ___exp10f();
          pppppuVar7 = pppppuVar6;
        }
        func_0x000108186fb8();
        goto LAB_10818614c;
      }
      if (iVar13 < 0xccccccc) goto LAB_1081862e8;
    }
    else {
LAB_1081862e8:
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + 1);
      while (bVar1 = (&UNK_10df06f1e)[uVar15], (bVar1 >> 3 & 1) != 0) {
        func_0x000108186f74();
        uVar15 = (ulong)*(byte *)pppppuVar19;
        bVar1 = (&UNK_10df06f1e)[uVar15];
        puVar12 = extraout_x8;
        if ((bVar1 >> 3 & 1) == 0) goto LAB_10818632c;
        func_0x000108186f74();
        uVar15 = (ulong)*(byte *)((long)pppppuVar19 + 1);
        pppppuVar19 = (ulong *****)((long)pppppuVar19 + 2);
        puVar12 = extraout_x8_00;
      }
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + -1);
LAB_10818632c:
      if ((bVar1 >> 4 & 1) == 0) {
        func_0x000108186fb8();
        goto LAB_10818614c;
      }
      if ((int)uVar15 != 0x2e) goto LAB_1081863d8;
      uVar16 = 0;
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + 1);
    }
    pppppuVar19 = (ulong *****)((long)pppppuVar19 + 1);
    do {
      iVar13 = (int)uVar16;
      bVar1 = (&UNK_10df06f1e)[*(byte *)((long)pppppuVar19 + -1)];
      if ((bVar1 >> 3 & 1) == 0) {
        pppppuVar19 = (ulong *****)((long)pppppuVar19 + -1);
LAB_10818639c:
        if (iVar13 < -0x1f) {
          fVar3 = (float)iVar13;
          uVar23 = SUB41(fVar3,0);
          uVar24 = (undefined1)((uint)fVar3 >> 8);
          uVar25 = (undefined1)((uint)fVar3 >> 0x10);
          uVar26 = (undefined1)((uint)fVar3 >> 0x18);
          ___exp10f();
        }
        else {
          uVar2 = *(undefined4 *)(puVar12 + (ulong)(iVar13 + 0x1f) * 4);
          uVar23 = (undefined1)uVar2;
          uVar24 = (undefined1)((uint)uVar2 >> 8);
          uVar25 = (undefined1)((uint)uVar2 >> 0x10);
          uVar26 = (undefined1)((uint)uVar2 >> 0x18);
        }
        if (((bVar1 >> 4 & 1) == 0) &&
           (NAN((float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))) ||
            (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) != 0.0)) {
          func_0x000108186fb8();
        }
        else {
LAB_1081863d8:
          pppppuVar7 = pppppuVar6;
          _strtof(pppppuVar6,&ppppuStack_98);
          pppppuVar19 = (ulong *****)0x0;
          if (pppppuVar6 < ppppuStack_98) {
            func_0x000108186fb8();
            pppppuVar19 = (ulong *****)ppppuStack_98;
          }
        }
        goto LAB_10818614c;
      }
      func_0x000108186f74();
      bVar1 = (&UNK_10df06f1e)[*(byte *)pppppuVar19];
      if ((bVar1 >> 3 & 1) == 0) {
        iVar13 = extraout_w10 + -1;
        puVar12 = extraout_x8_01;
        goto LAB_10818639c;
      }
      func_0x000108186f74();
      uVar16 = (ulong)(extraout_w10_00 - 2);
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + 2);
      puVar12 = extraout_x8_02;
    } while( true );
  }
  if (pppppuVar19 <= pppppuVar18) goto LAB_1081863d8;
  func_0x000108187058();
  pppppuVar7 = pppppuVar6;
LAB_10818614c:
  pppppuVar6 = pppppuVar7;
  if (pppppuVar19 == (ulong *****)0x0) goto LAB_108185f04;
  goto LAB_108186414;
LAB_108186154:
  bVar14 = false;
  ppppuVar21 = (ulong ****)((long)pppppuVar6 + 1);
  pppuVar20 = (ulong ***)0x1;
  pppppuVar18 = pppppuVar6;
  do {
    pbVar10 = (byte *)((long)pppppuVar18 + ~(ulong)pppppuVar6);
    pppppuVar19 = (ulong *****)((long)pppppuVar18 + 1);
    do {
      pppppuVar18 = pppppuVar19;
      pppppuVar19 = (ulong *****)((long)pppppuVar18 + 1);
      bVar1 = *(byte *)pppppuVar18;
      pbVar10 = pbVar10 + 1;
    } while (((byte)(&UNK_10df06f1e)[bVar1] >> 2 & 1) == 0);
    if (bVar1 == 0x5c) {
      bVar14 = true;
      pppppuVar18 = pppppuVar19;
    }
    else {
      if (bVar1 == 0x22) break;
      if (((byte)(&UNK_10df06f1e)[bVar1] >> 5 & 1) == 0) goto LAB_108185f08;
    }
    if (pppppuVar11 == pppppuVar18) goto LAB_108185f08;
  } while( true );
  pppppuVar18 = pppppuVar11;
  if (bVar14) {
    func_0x000108187020();
    if (pppppuVar6 == (ulong *****)0x0) goto LAB_108185f04;
    ppppuVar21 = *pppppuVar6;
    pbVar10 = (byte *)((long)pppppuVar6[1] - (long)ppppuVar21);
    pppppuVar18 = (ulong *****)((long)pppppuVar6[1] + -1);
  }
  pppppuVar7 = (ulong *****)&pppuStack_e8;
  FUN_108186c04(pppppuVar7,ppppuVar21,pbVar10,pppppuVar18);
  goto LAB_10818614c;
LAB_10818606c:
  pppppuVar18 = (ulong *****)((long)pppppuVar6 + 1);
  FUN_108186914();
  pppppuVar6 = pppppuVar18;
  func_0x000108187058();
  ppuStack_b0 = (ulong **)-(lStack_d8 - (long)ppppuStack_e0 >> 3);
  if (*(byte *)pppppuVar18 == 0x5d) goto LAB_10818643c;
  goto LAB_108185fe4;
LAB_1081864a4:
  pppuVar20 = (ulong ***)ppuStack_b0;
  if ((long)ppuStack_b0 < 0) goto LAB_108185f04;
  goto LAB_1081864ac;
}



/* Entry: 108186568; end: 108186577;  */

/* WARNING: Removing unreachable block (ram,0x00010840f714) */
/* WARNING: Removing unreachable block (ram,0x00010840f71c) */

undefined8 * FUN_108186568(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10840f9ec(param_1 + 3,0,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* Entry: 108186578; end: 108186667;  */

long FUN_108186578(long param_1)

{
  FUN_1083a3c7c(param_1 + 0x48);
  func_0x000107c28338(param_1 + 0x20);
  func_0x0001081868e8(param_1 + 8);
  return param_1;
}



/* Entry: 108186668; end: 108186673;  */

undefined8 * FUN_108186668(undefined8 *param_1)

{
  func_0x000108187000();
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x000108186ff4();
    return param_1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_1081866cc(*param_1);
  }
  return param_1;
}



/* Entry: 108186674; end: 1081866cb;  */

undefined8 * FUN_108186674(undefined8 *param_1)

{
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x000108186ff4();
    return param_1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_1081866cc(*param_1);
  }
  return param_1;
}



/* Entry: 1081866cc; end: 1081866e3;  */

void FUN_1081866cc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1081866e4; end: 10818674b;  */

void FUN_1081866e4(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  
  func_0x000108186fc0();
  if ((bool)in_CY) {
    func_0x000108186fdc();
    FUN_10818674c();
    if (param_1 != 0) {
      FUN_108186674();
    }
    func_0x000108186f84();
    FUN_108186774();
    puVar1 = *(undefined8 **)(unaff_x19 + 8);
    FUN_108186794(auStack_68);
  }
  else {
    puVar1 = unaff_x21 + 1;
    *unaff_x21 = unaff_x20;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  return;
}



/* Entry: 10818674c; end: 108186773;  */

undefined8 FUN_10818674c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x000108187060();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_108186668();
  func_0x000108186f4c();
  func_0x000108186f08();
  return param_1;
}



/* Entry: 108186774; end: 108186793;  */

void FUN_108186774(void)

{
  func_0x000108186f4c();
  func_0x000108186f08();
  return;
}



/* Entry: 108186794; end: 1081867d3;  */

long * FUN_108186794(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081867d4; end: 10818684f;  */

void FUN_1081867d4(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  plVar1 = param_1 + 2;
  lVar2 = *param_1;
  if ((ulong)(*plVar1 - lVar2) < param_2) {
    if ((long)param_2 < 0) {
      func_0x000106889720();
      func_0x00010688972c(&plStack_48);
      func_0x00010818702c();
      func_0x000108187000();
      func_0x000108186f4c();
      func_0x000108186f08();
      return;
    }
    lVar3 = param_1[1];
    plStack_28 = plVar1;
    func_0x000107c278bc();
    lStack_40 = (long)plVar1 + (lVar3 - lVar2);
    lStack_30 = (long)plVar1 + param_2;
    plStack_48 = plVar1;
    lStack_38 = lStack_40;
    func_0x0001068896e4(param_1,&plStack_48);
    func_0x00010688972c(&plStack_48);
  }
  return;
}



/* Entry: 108186850; end: 10818685b;  */

void FUN_108186850(void)

{
  func_0x000108187000();
  func_0x000108186f4c();
  func_0x000108186f08();
  return;
}



/* Entry: 10818685c; end: 10818687b;  */

void FUN_10818685c(void)

{
  func_0x000108186f4c();
  func_0x000108186f08();
  return;
}



/* Entry: 10818687c; end: 108186913;  */

long * FUN_10818687c(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x000108186ff4();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108186914; end: 10818692f;  */

void FUN_108186914(long param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + -1);
  do {
    pbVar1 = pbVar1 + 1;
  } while (((byte)(&UNK_10df06f1e)[*pbVar1] >> 1 & 1) != 0);
  return;
}



/* Entry: 108186930; end: 108186997;  */

void FUN_108186930(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  
  func_0x000108186fc0();
  if ((bool)in_CY) {
    func_0x000108186fdc();
    FUN_108186998();
    if (param_1 != 0) {
      FUN_10818687c();
    }
    func_0x000108186f84();
    FUN_10818685c();
    puVar1 = *(undefined8 **)(unaff_x19 + 8);
    func_0x0001081868a8(auStack_68);
  }
  else {
    puVar1 = unaff_x21 + 1;
    *unaff_x21 = unaff_x20;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  return;
}



/* Entry: 108186998; end: 1081869bf;  */

long * FUN_108186998(long param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_CY;
  char *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  char cVar8;
  long *extraout_x8;
  long *extraout_x9;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  uint uStack_9c;
  long *plStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    func_0x000108187060();
    plVar1 = extraout_x9;
    if ((bool)in_CY) {
      plVar1 = extraout_x8;
    }
    return plVar1;
  }
  FUN_108186850();
  plVar9 = (long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x28) = *plVar9;
  plVar1 = (long *)(param_1 + 0x30);
  while (plVar7 = plVar9, param_2 != param_3) {
    if (*param_2 != '\\') {
      func_0x00010688977c(plVar9,param_2);
      pcVar11 = param_2;
      goto LAB_108186bac;
    }
    pcVar11 = param_2 + 1;
    if (pcVar11 == param_3) {
      return (long *)0x0;
    }
    cVar8 = *pcVar11;
    plVar7 = (long *)0x0;
    switch(cVar8) {
    case 'n':
      cVar8 = '\n';
      goto LAB_108186b98;
    case 'o':
    case 'p':
    case 'q':
    case 's':
      goto LAB_108186be4;
    case 'r':
      cVar8 = '\r';
LAB_108186b98:
      plStack_98 = (long *)CONCAT71(plStack_98._1_7_,cVar8);
      break;
    case 't':
      plStack_98 = (long *)CONCAT71(plStack_98._1_7_,9);
      break;
    case 'u':
      pcVar11 = param_2 + 5;
      if (param_3 <= pcVar11) {
        return (long *)0x0;
      }
      uStack_a4 = *(undefined4 *)(param_2 + 2);
      uStack_a0 = 0;
      pcVar4 = (char *)&uStack_a4;
      FUN_108406700(pcVar4,&uStack_9c);
      if (pcVar4 == (char *)0x0) {
        return (long *)0x0;
      }
      if (*pcVar4 != '\0') {
        return (long *)0x0;
      }
      uVar5 = (ulong)uStack_9c;
      FUN_108410674(uVar5,auStack_a8);
      if (0 < (long)uVar5) {
        lVar10 = *(long *)(param_1 + 0x28);
        if (*plVar1 - lVar10 < (long)uVar5) {
          plVar6 = plVar9;
          func_0x0001068896a8(plVar9,(uVar5 - *(long *)(param_1 + 0x20)) + lVar10);
          lVar12 = *plVar9;
          plStack_78 = plVar1;
          plVar7 = (long *)0x0;
          if (plVar6 != (long *)0x0) {
            plVar7 = plVar1;
            func_0x000107c278bc();
          }
          puStack_90 = (undefined1 *)((long)plVar7 + (lVar10 - lVar12));
          plStack_98 = plVar7;
          lStack_80 = (long)plVar7 + (long)plVar6;
          puStack_88 = puStack_90 + uVar5;
          puVar2 = puStack_90;
          puVar3 = auStack_a8;
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar2 = *puVar3;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          FUN_108186d30(plVar9,&plStack_98,lVar10);
          func_0x00010688972c(&plStack_98);
        }
        else {
          _memcpy(lVar10,auStack_a8,uVar5);
          *(ulong *)(param_1 + 0x28) = lVar10 + uVar5;
        }
      }
      goto LAB_108186bac;
    default:
      if (cVar8 == 'f') {
        plStack_98 = (long *)CONCAT71(plStack_98._1_7_,0xc);
      }
      else {
        if (cVar8 != '/') {
          if (cVar8 != '\\') {
            if (cVar8 == 'b') {
              cVar8 = '\b';
            }
            else if (cVar8 != '\"') {
              return (long *)0x0;
            }
          }
          goto LAB_108186b98;
        }
        plStack_98 = (long *)CONCAT71(plStack_98._1_7_,0x2f);
      }
    }
    func_0x000106889610(plVar9,&plStack_98);
LAB_108186bac:
    param_2 = pcVar11 + 1;
  }
LAB_108186be4:
  return plVar7;
}



/* Entry: 1081869c0; end: 108186c03;  */

long * FUN_1081869c0(long param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  char cVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined1 uStack_90;
  uint uStack_8c;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar9 = (long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x28) = *plVar9;
  plVar1 = (long *)(param_1 + 0x30);
  while (plVar7 = plVar9, param_2 != param_3) {
    if (*param_2 != '\\') {
      func_0x00010688977c(plVar9,param_2);
      pcVar11 = param_2;
      goto LAB_108186bac;
    }
    pcVar11 = param_2 + 1;
    if (pcVar11 == param_3) {
      return (long *)0x0;
    }
    cVar8 = *pcVar11;
    plVar7 = (long *)0x0;
    switch(cVar8) {
    case 'n':
      cVar8 = '\n';
      goto LAB_108186b98;
    case 'o':
    case 'p':
    case 'q':
    case 's':
      goto LAB_108186be4;
    case 'r':
      cVar8 = '\r';
LAB_108186b98:
      plStack_88 = (long *)CONCAT71(plStack_88._1_7_,cVar8);
      break;
    case 't':
      plStack_88 = (long *)CONCAT71(plStack_88._1_7_,9);
      break;
    case 'u':
      pcVar11 = param_2 + 5;
      if (param_3 <= pcVar11) {
        return (long *)0x0;
      }
      uStack_94 = *(undefined4 *)(param_2 + 2);
      uStack_90 = 0;
      pcVar4 = (char *)&uStack_94;
      FUN_108406700(pcVar4,&uStack_8c);
      if (pcVar4 == (char *)0x0) {
        return (long *)0x0;
      }
      if (*pcVar4 != '\0') {
        return (long *)0x0;
      }
      uVar5 = (ulong)uStack_8c;
      FUN_108410674(uVar5,auStack_98);
      if (0 < (long)uVar5) {
        lVar10 = *(long *)(param_1 + 0x28);
        if (*plVar1 - lVar10 < (long)uVar5) {
          plVar6 = plVar9;
          func_0x0001068896a8(plVar9,(uVar5 - *(long *)(param_1 + 0x20)) + lVar10);
          lVar12 = *plVar9;
          plStack_68 = plVar1;
          plVar7 = (long *)0x0;
          if (plVar6 != (long *)0x0) {
            plVar7 = plVar1;
            func_0x000107c278bc();
          }
          puStack_80 = (undefined1 *)((long)plVar7 + (lVar10 - lVar12));
          plStack_88 = plVar7;
          lStack_70 = (long)plVar7 + (long)plVar6;
          puStack_78 = puStack_80 + uVar5;
          puVar2 = puStack_80;
          puVar3 = auStack_98;
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar2 = *puVar3;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          FUN_108186d30(plVar9,&plStack_88,lVar10);
          func_0x00010688972c(&plStack_88);
        }
        else {
          _memcpy(lVar10,auStack_98,uVar5);
          *(ulong *)(param_1 + 0x28) = lVar10 + uVar5;
        }
      }
      goto LAB_108186bac;
    default:
      if (cVar8 == 'f') {
        plStack_88 = (long *)CONCAT71(plStack_88._1_7_,0xc);
      }
      else {
        if (cVar8 != '/') {
          if (cVar8 != '\\') {
            if (cVar8 == 'b') {
              cVar8 = '\b';
            }
            else if (cVar8 != '\"') {
              return (long *)0x0;
            }
          }
          goto LAB_108186b98;
        }
        plStack_88 = (long *)CONCAT71(plStack_88._1_7_,0x2f);
      }
    }
    func_0x000106889610(plVar9,&plStack_88);
LAB_108186bac:
    param_2 = pcVar11 + 1;
  }
LAB_108186be4:
  return plVar7;
}



/* Entry: 108186c04; end: 108186cef;  */

void FUN_108186c04(ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  undefined1 auStack_68 [32];
  
  uVar1 = 6 < param_3;
  if ((bool)uVar1) {
    puVar2 = (ulong *)*param_1;
    func_0x000108187018(puVar2,param_3 + 9);
    *puVar2 = param_3;
    func_0x000108187040(puVar2 + 1);
    uVar4 = (ulong)puVar2 >> 8;
    *(undefined1 *)(((ulong)puVar2 & 0xfffffffffffffff8) + param_3 + 8) = 0;
    uVar3 = (ulong)puVar2 & 0xfe | 5;
  }
  else if ((param_2 == 0) || (uVar1 = param_4 <= param_2 + 6U, param_4 < param_2 + 6U)) {
    if (param_3 == 0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      func_0x000108187040(&stack0xffffffffffffffc8);
      uVar3 = 0;
      uVar4 = 0;
    }
  }
  else {
    uVar3 = 0;
    uVar4 = (*(ulong *)(param_2 + -1) & 0xffffffffffff00U >> (param_3 * -8 + 0x30 & 0x3f)) >> 8;
  }
  param_1 = param_1 + 1;
  func_0x000108186fc0(param_1,uVar3 | uVar4 << 8);
  if ((bool)uVar1) {
    func_0x000108186fdc();
    FUN_108186998();
    if (param_1 != (ulong *)0x0) {
      FUN_10818687c();
    }
    func_0x000108186f84();
    FUN_10818685c();
    puVar5 = *(undefined8 **)(unaff_x19 + 8);
    func_0x0001081868a8(auStack_68);
  }
  else {
    puVar5 = unaff_x21 + 1;
    *unaff_x21 = unaff_x20;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar5;
  return;
}



/* Entry: 108186cf0; end: 108186d2f;  */

void FUN_108186cf0(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined1 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 108186d30; end: 108186de7;  */

undefined8 FUN_108186d30(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  _memcpy(param_2[2],param_3,param_1[1] - param_3);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 + (lVar2 - param_3);
  _memcpy(lVar3,lVar2,param_3 - lVar2);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 108186de8; end: 108186dfb;  */

void FUN_108186de8(uint param_1,long param_2)

{
  undefined1 in_CY;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  undefined1 auStack_68 [32];
  
  param_2 = param_2 + 8;
  func_0x000108186fc0(param_2,(ulong)param_1 << 0x20 | 4);
  if ((bool)in_CY) {
    func_0x000108186fdc();
    FUN_108186998();
    if (param_2 != 0) {
      FUN_10818687c();
    }
    func_0x000108186f84();
    FUN_10818685c();
    puVar1 = *(undefined8 **)(unaff_x19 + 8);
    func_0x0001081868a8(auStack_68);
  }
  else {
    puVar1 = unaff_x21 + 1;
    *unaff_x21 = unaff_x20;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  return;
}



/* Entry: 108186dfc; end: 108186ef3;  */

void FUN_108186dfc(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  puVar1 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar1 - *param_1 >> 3;
  if (uVar7 < param_2) {
    uVar8 = param_2 - uVar7;
    plVar9 = param_1 + 2;
    if ((ulong)(*plVar9 - (long)puVar1 >> 3) < uVar8) {
      plVar4 = param_1;
      uVar5 = param_2;
      FUN_108186998();
      lVar6 = *param_1;
      lVar2 = param_1[1];
      plStack_48 = plVar9;
      if (plVar4 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        FUN_10818687c();
      }
      puStack_60 = (undefined8 *)((long)plVar4 + (lVar2 - lVar6));
      plStack_50 = plVar4 + uVar5;
      puStack_58 = puStack_60 + uVar8;
      puVar1 = puStack_60;
      for (lVar6 = param_2 * 8 + uVar7 * -8; lVar6 != 0; lVar6 = lVar6 + -8) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      FUN_10818685c(param_1,auStack_68);
      func_0x0001081868a8(auStack_68);
    }
    else {
      puVar3 = puVar1;
      for (lVar6 = param_2 * 8 + uVar7 * -8; lVar6 != 0; lVar6 = lVar6 + -8) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = (long)(puVar1 + uVar8);
    }
  }
  else if (param_2 < uVar7) {
    param_1[1] = *param_1 + param_2 * 8;
  }
  return;
}



/* Entry: 108186ef4; end: 108187087;  */

void FUN_108186ef4(void)

{
  return;
}



/* Entry: 108187088; end: 10818716f;  */

undefined8 *
FUN_108187088(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined1 param_4,
             undefined1 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  FUN_1081884a0(param_1,&uStack_38,0);
  FUN_108154cb4(&uStack_38);
  *param_1 = &PTR_FUN_110a2b3d0;
  lStack_40 = *param_3;
  *param_3 = 0;
  param_1[7] = lStack_40;
  *(undefined1 *)(param_1 + 8) = param_4;
  *(undefined1 *)((long)param_1 + 0x41) = param_5;
  *(undefined1 *)((long)param_1 + 0x42) = 0;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a5b8(param_1,&lStack_40);
  FUN_1081687b4(&lStack_40);
  return param_1;
}



/* Entry: 108187170; end: 1081871df;  */

void FUN_108187170(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x38);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_1081687b4(&lStack_28);
  FUN_108159714((long *)(param_1 + 0x38));
  FUN_108188544(param_1);
  return;
}



/* Entry: 1081871e0; end: 1081871e3;  */

void FUN_1081871e0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x38);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_1081687b4(&lStack_28);
  FUN_108159714((long *)(param_1 + 0x38));
  FUN_108188544(param_1);
  return;
}



/* Entry: 1081871e4; end: 1081871f7;  */

void FUN_1081871e4(void)

{
  FUN_108187170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081871f8; end: 10818728b;  */

void FUN_1081871f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  FUN_10815b944(auStack_40,param_2,(*(byte *)(param_1 + 0x42) ^ 0xff) & 1);
  if ((*(byte *)(param_1 + 0x42) & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))
              (*(long **)(param_1 + 0x38),param_2,*(undefined1 *)(param_1 + 0x40));
  }
  FUN_1081885d4(param_1,param_2,param_3);
  FUN_10815b978(auStack_40);
  return;
}



/* Entry: 10818728c; end: 1081872cf;  */

long * FUN_10818728c(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  FUN_108188e5c();
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  iVar1 = (int)plVar2 + 0x18;
  FUN_108188ea8(*param_2,param_2[1]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818c984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 1081872d0; end: 1081873a3;  */

undefined4
FUN_1081872d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 auStack_60 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = SUB81(auStack_60,0);
  puVar2 = *(undefined8 **)(param_5 + 0x38);
  FUN_10818a8b4();
  uStack_38 = puVar2[1];
  uVar5 = *puVar2;
  uStack_40 = uVar5;
  FUN_1081885e4(param_5,param_6,param_7);
  uStack_50 = (undefined4)uVar5;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  if ((*(byte *)(param_5 + 0x41) & 1) == 0) {
    (**(code **)(**(long **)(param_5 + 0x38) + 0x38))(auStack_60);
    FUN_108376da0(auStack_60,&uStack_50);
    *(undefined1 *)(param_5 + 0x42) = uVar1;
    FUN_10837ca5c(auStack_60[0]);
  }
  else {
    *(undefined1 *)(param_5 + 0x42) = 0;
  }
  puVar3 = &uStack_50;
  FUN_10838ed10(puVar3,&uStack_40);
  uVar4 = 0;
  if ((int)puVar3 != 0) {
    uVar4 = uStack_50;
  }
  return uVar4;
}



/* Entry: 1081873a4; end: 1081873e7;  */

void FUN_1081873a4(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108187f54();
  func_0x000108187fe8();
  func_0x000108187f78();
  *unaff_x19 = &PTR_FUN_110a2b428;
  unaff_x19[7] = 0;
  return;
}



/* Entry: 1081873e8; end: 108187473;  */

void FUN_1081873e8(void)

{
  int extraout_w11;
  long unaff_x20;
  undefined1 auStack_150 [144];
  undefined1 auStack_c0 [144];
  
  func_0x000108187fac();
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    do {
      func_0x000108187f44();
    } while (extraout_w11 != 0);
  }
  func_0x000108188000();
  func_0x000108187fdc();
  func_0x000108187f88();
  FUN_10818cd40(auStack_150);
  func_0x000108187fc8();
  FUN_10818cd40(auStack_c0);
  return;
}



/* Entry: 108187474; end: 108187477;  */

long * FUN_108187474(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  iVar1 = (int)plVar2 + 0x18;
  FUN_108188ea8(*param_2,param_2[1]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818c984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 108187478; end: 1081874ef;  */

void FUN_108187478(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  (**(code **)(*param_1 + 0x30))(&uStack_38);
  uVar1 = uStack_38;
  uStack_38 = 0;
  FUN_108164954(param_1 + 7,uVar1);
  func_0x000108187f88();
  FUN_1081885e4(param_1,param_2,param_3);
  return;
}



/* Entry: 1081874f0; end: 108187563;  */

void FUN_1081874f0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = 0x48;
    __Znwm();
    *param_2 = 0;
    FUN_108187564();
    *param_1 = uVar1;
    func_0x000108187f78();
  }
  return;
}



/* Entry: 108187564; end: 1081875ab;  */

void FUN_108187564(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108187f54();
  func_0x000108187fe8();
  func_0x000108187f78();
  *unaff_x19 = &PTR_FUN_110a2b470;
  unaff_x19[7] = 0;
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 1081875ac; end: 1081875d3;  */

void FUN_1081875ac(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  FUN_108115b2c(param_1 + 7);
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 1081875d4; end: 1081875d7;  */

void FUN_1081875d4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  FUN_108115b2c(param_1 + 7);
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 1081875d8; end: 1081875eb;  */

void FUN_1081875d8(void)

{
  FUN_1081875ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081875ec; end: 1081876d3;  */

void FUN_1081875ec(void)

{
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_150 [144];
  undefined1 auStack_c0 [144];
  
  func_0x000108187fac();
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    do {
      func_0x000108187f44();
    } while (extraout_w11 != 0);
  }
  func_0x000108188000();
  func_0x000108187fdc();
  func_0x000108187f88();
  FUN_10818cd40(auStack_150);
  if (*(int *)(unaff_x20 + 0x40) == 1) {
    *(int *)(unaff_x19 + 0xc60) = *(int *)(unaff_x19 + 0xc60) + 1;
    *(int *)(*(long *)(unaff_x19 + 0xc40) + 0x58) =
         *(int *)(*(long *)(unaff_x19 + 0xc40) + 0x58) + 1;
    FUN_10810f48c();
    func_0x00010833b800(auStack_150);
    FUN_10818d01c(auStack_c0,unaff_x20 + 0x18,auStack_150,1);
  }
  func_0x000108187fc8();
  FUN_10818cd40(auStack_c0);
  return;
}



/* Entry: 1081876d4; end: 108187783;  */

void FUN_1081876d4(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = *param_2;
  if ((lVar2 == 0) || (lVar3 = *param_3, lVar3 == 0)) {
    *param_1 = 0;
  }
  else {
    uVar1 = 0x50;
    __Znwm();
    *param_2 = 0;
    *param_3 = 0;
    lStack_60 = lVar3;
    lStack_58 = lVar2;
    FUN_108187784();
    *param_1 = uVar1;
    FUN_108158f04(&lStack_60);
    func_0x000108187f78();
  }
  return;
}



/* Entry: 108187784; end: 10818781f;  */

void FUN_108187784(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x000108187f54();
  FUN_1081873a4();
  func_0x000108187f78();
  *unaff_x19 = &PTR_FUN_110a2b4b0;
  lVar1 = *param_3;
  *param_3 = 0;
  unaff_x19[8] = lVar1;
  *(undefined4 *)(unaff_x19 + 9) = param_4;
  if (lVar1 != 0) {
    do {
      func_0x000108187f44();
    } while (extraout_w11 != 0);
  }
  func_0x000108187fbc();
  func_0x000108187fa4();
  return;
}



/* Entry: 108187820; end: 10818784f;  */

void FUN_108187820(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110a2b428;
  FUN_108115b2c(param_1 + 7);
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108187850; end: 1081878a3;  */

void FUN_108187850(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x000108187f44();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000108187ff4();
  FUN_1081687b4(&uStack_28);
  FUN_108158f04((long *)(param_1 + 0x40));
  func_0x000108187f9c();
  return;
}



/* Entry: 1081878a4; end: 1081878a7;  */

void FUN_1081878a4(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x000108187f44();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000108187ff4();
  FUN_1081687b4(&uStack_28);
  FUN_108158f04((long *)(param_1 + 0x40));
  func_0x000108187f9c();
  return;
}



/* Entry: 1081878a8; end: 1081878bb;  */

void FUN_1081878a8(void)

{
  FUN_108187850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081878bc; end: 1081878ff;  */

void FUN_1081878bc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_10818a8b4(*(undefined8 *)(param_6 + 0x40),0,0x113254e20);
  uVar1 = *(undefined4 *)(param_6 + 0x48);
  FUN_108343500(*(undefined4 *)(*(long *)(param_6 + 0x40) + 0x48));
  uStack_38 = 0;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  uStack_24 = param_5;
  FUN_1083ad49c(param_1,&uStack_30,&uStack_38,uVar1);
  FUN_10810a400(&uStack_38);
  return;
}



/* Entry: 108187900; end: 1081879f3;  */

void FUN_108187900(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long lVar6;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long alStack_68 [3];
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_50 = *param_2;
  *param_2 = 0;
  uStack_48 = *param_3;
  *param_3 = 0;
  uStack_40 = *param_4;
  *param_4 = 0;
  FUN_108166a28(alStack_68,&uStack_48,2);
  plVar5 = alStack_68;
  FUN_1081879f4(param_1,&lStack_50);
  FUN_108166924(alStack_68);
  lVar6 = 8;
  do {
    FUN_108158f04((long)&uStack_48 + lVar6);
    lVar6 = lVar6 + -8;
    uVar2 = lVar6 == -8;
  } while (!(bool)uVar2);
  FUN_108154cb4();
  func_0x00010818800c(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    FUN_108166924(alStack_68);
    lVar6 = 8;
    do {
      FUN_108158f04((long)&uStack_48 + lVar6);
      lVar6 = lVar6 + -8;
    } while (lVar6 != -8);
    plVar3 = &lStack_50;
    FUN_108154cb4();
    func_0x000108187f80();
    lStack_c8 = *plVar3;
    if (lStack_c8 != 0) {
      lVar6 = *plVar5;
      lVar1 = plVar5[1];
      if (8 < (ulong)(lVar1 - lVar6)) {
        uVar4 = 0x60;
        __Znwm();
        *plVar3 = 0;
        lStack_d0 = plVar5[2];
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 0;
        lStack_e0 = lVar6;
        lStack_d8 = lVar1;
        FUN_108187ab8();
        *extraout_x8 = uVar4;
        FUN_108166924(&lStack_e0);
        FUN_108154cb4(&lStack_c8);
        return;
      }
    }
    *extraout_x8 = 0;
    return;
  }
  return;
}



/* Entry: 1081879f4; end: 108187ab7;  */

void FUN_1081879f4(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    if (8 < (ulong)(lVar2 - lVar1)) {
      uVar3 = 0x60;
      __Znwm();
      *param_2 = 0;
      lStack_60 = param_3[2];
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      lStack_70 = lVar1;
      lStack_68 = lVar2;
      lStack_58 = lVar4;
      FUN_108187ab8();
      *param_1 = uVar3;
      FUN_108166924(&lStack_70);
      FUN_108154cb4(&lStack_58);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 108187ab8; end: 108187b7f;  */

void FUN_108187ab8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  func_0x000108187f54();
  FUN_1081873a4();
  func_0x000108187f78();
  *unaff_x19 = &PTR_FUN_110a2b4f8;
  puVar1 = unaff_x19 + 8;
  *puVar1 = 0;
  unaff_x19[9] = 0;
  unaff_x19[10] = 0;
  uVar4 = *param_3;
  unaff_x19[9] = param_3[1];
  *puVar1 = uVar4;
  unaff_x19[10] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(unaff_x19 + 0xb) = 0;
  plVar3 = (long *)unaff_x19[9];
  for (plVar2 = (long *)*puVar1; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      do {
        func_0x000108187f44();
      } while (extraout_w11 != 0);
    }
    func_0x000108187fbc();
    func_0x000108187fa4();
  }
  return;
}



/* Entry: 108187b80; end: 108187beb;  */

void FUN_108187b80(long param_1)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x48);
  for (plVar3 = *(long **)(param_1 + 0x40); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    uVar2 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x000108187f44();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar2;
    func_0x000108187ff4();
    FUN_1081687b4(&uStack_38);
  }
  FUN_108166924((undefined8 *)(param_1 + 0x40));
  func_0x000108187f9c();
  return;
}



/* Entry: 108187bec; end: 108187bef;  */

void FUN_108187bec(long param_1)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x48);
  for (plVar3 = *(long **)(param_1 + 0x40); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    uVar2 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x000108187f44();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar2;
    func_0x000108187ff4();
    FUN_1081687b4(&uStack_38);
  }
  FUN_108166924((undefined8 *)(param_1 + 0x40));
  func_0x000108187f9c();
  return;
}



/* Entry: 108187bf0; end: 108187c03;  */

void FUN_108187bf0(void)

{
  FUN_108187b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108187c04; end: 108187f3b;  */

void FUN_108187c04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  ulong uVar23;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [80];
  undefined1 auStack_378 [256];
  undefined1 auStack_278 [256];
  undefined8 uStack_178;
  float fStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  undefined8 uStack_164;
  float fStack_15c;
  undefined4 uStack_158;
  float fStack_154;
  undefined8 uStack_150;
  float fStack_148;
  undefined4 uStack_144;
  float fStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined8 **)(param_5 + 0x48);
  puVar13 = *(undefined8 **)(param_5 + 0x40);
  while( true ) {
    fVar22 = (float)param_4;
    fVar18 = (float)param_3;
    if (puVar13 == puVar2) break;
    FUN_10818a8b4(*puVar13,0,0x113254e20);
    puVar13 = puVar13 + 1;
  }
  fVar14 = *(float *)(param_5 + 0x58);
  uVar7 = fVar14 == 0.0;
  if (fVar14 <= 0.0) {
    *param_1 = 0;
  }
  else {
    plVar1 = *(long **)(param_5 + 0x40);
    uVar8 = *(long *)(param_5 + 0x48) - (long)plVar1 >> 3;
    uVar7 = uVar8 == 3;
    if (2 < uVar8) {
      uVar11 = 0;
      uVar9 = 0;
      do {
        plVar5 = plVar1 + uVar11;
        do {
          plVar12 = plVar5;
          uVar11 = uVar11 + 1;
          uVar7 = uVar8 == uVar11;
          if ((bool)uVar7) {
            _memcpy(auStack_3c8,&UNK_10df071a8,0x50);
            FUN_1083ae930(&uStack_3d0,0,&uStack_178,auStack_278,auStack_378);
            FUN_1083ae048(auStack_3d8,auStack_3c8,1);
            FUN_1083ade28(&uStack_3e0,uStack_3d0,auStack_3d8);
            FUN_108115b2c(auStack_3d8);
            FUN_108115b2c(&uStack_3d0);
            goto LAB_108187e94;
          }
          uVar10 = (ulong)(((float)uVar11 * 255.0) / (float)(uVar8 - 1));
          plVar5 = plVar12 + 1;
        } while (uVar10 < uVar9);
        uVar3 = *(uint *)(*plVar12 + 0x48);
        uVar4 = *(uint *)(*plVar5 + 0x48);
        fVar18 = (float)(uVar3 & 0xff);
        fVar22 = (float)(uVar10 - uVar9);
        uVar19 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffff8fffffff0,4);
        uVar19 = uVar19 & 0xff000000ff;
        uVar20 = NEON_ucvtf(uVar19,4);
        uVar23 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff8fffffff0,4);
        uVar21 = NEON_scvtf(CONCAT44((int)((uVar23 & 0xff000000ff) >> 0x20) - (int)(uVar19 >> 0x20),
                                     (int)(uVar23 & 0xff000000ff) - (int)uVar19),4);
        for (; uVar9 <= uVar10; uVar9 = uVar9 + 1) {
          *(char *)((long)&uStack_178 + uVar9) = (char)(int)(float)uVar20;
          fVar14 = (float)((ulong)uVar20 >> 0x20);
          auStack_278[uVar9] = (char)(int)fVar14;
          auStack_378[uVar9] = (char)(int)fVar18;
          uVar20 = CONCAT44((float)((ulong)uVar21 >> 0x20) / fVar22 + fVar14,
                            (float)uVar21 / fVar22 + (float)uVar20);
          fVar18 = (float)(int)((uVar4 & 0xff) - (uVar3 & 0xff)) / fVar22 + fVar18;
        }
        uVar9 = uVar10 + 1;
      } while( true );
    }
    FUN_108343500(*(undefined4 *)(*plVar1 + 0x48));
    fVar15 = fVar14;
    fVar17 = fVar18;
    fVar16 = fVar22;
    FUN_108343500(*(undefined4 *)(plVar1[1] + 0x48));
    fVar15 = fVar15 - fVar14;
    fVar17 = fVar17 - fVar18;
    uStack_178 = CONCAT44(fVar15 * 0.7152,fVar15 * 0.2126);
    fStack_170 = fVar15 * 0.0722;
    uStack_16c = 0;
    fVar16 = fVar16 - fVar22;
    uStack_164 = CONCAT44(fVar17 * 0.7152,fVar17 * 0.2126);
    fStack_15c = fVar17 * 0.0722;
    uStack_158 = 0;
    uStack_150 = CONCAT44(fVar16 * 0.7152,fVar16 * 0.2126);
    fStack_148 = fVar16 * 0.0722;
    uStack_144 = 0;
    uStack_134 = 0x3f80000000000000;
    uStack_13c = 0;
    uStack_12c = 0;
    fStack_168 = fVar14;
    fStack_154 = fVar18;
    fStack_140 = fVar22;
    FUN_1083ae048(&uStack_3e0,&uStack_178,1);
LAB_108187e94:
    uStack_3f0 = uStack_3e0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    FUN_1083ae58c(param_1,*(undefined4 *)(param_5 + 0x58),&uStack_3e8,&uStack_3f0);
    FUN_108115b2c(&uStack_3f0);
    func_0x000108187f88();
    FUN_108115b2c(&uStack_3e0);
  }
  func_0x00010818800c(uStack_78);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  FUN_108115b2c(auStack_3d8);
  FUN_108115b2c(&uStack_3d0);
  func_0x000108187f80();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x108187f40);
  (*pcVar6)();
}



/* Entry: 108187f3c; end: 10818801f;  */

void FUN_108187f3c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108187f40);
  (*pcVar1)();
}



/* Entry: 108188020; end: 1081880e7;  */

undefined8 * FUN_108188020(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int extraout_w11;
  int extraout_w11_00;
  
  puVar1 = param_1;
  FUN_10818c894(param_1,0);
  *puVar1 = &PTR_FUN_110a2b5a0;
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1[6] = lVar2;
  lVar3 = *param_3;
  *param_3 = 0;
  puVar1[7] = lVar3;
  if (lVar2 != 0) {
    do {
      FUN_108188458();
    } while (extraout_w11 != 0);
  }
  func_0x000108188488();
  func_0x000108188468();
  if (puVar1[7] != 0) {
    do {
      FUN_108188458();
    } while (extraout_w11_00 != 0);
  }
  func_0x000108188488();
  func_0x000108188468();
  return param_1;
}


