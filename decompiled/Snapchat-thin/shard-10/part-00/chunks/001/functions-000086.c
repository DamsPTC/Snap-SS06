/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107452080; end: 10745251f;  */

/* WARNING: Possible PIC construction at 0x00010730ba1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010730ba34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010730ba20) */
/* WARNING: Removing unreachable block (ram,0x00010730ba38) */
/* WARNING: Removing unreachable block (ram,0x0001074524a0) */
/* WARNING: Removing unreachable block (ram,0x0001074524a8) */
/* WARNING: Removing unreachable block (ram,0x000107452488) */
/* WARNING: Removing unreachable block (ram,0x000107452490) */
/* WARNING: Removing unreachable block (ram,0x000107452470) */
/* WARNING: Removing unreachable block (ram,0x000107452478) */
/* WARNING: Removing unreachable block (ram,0x0001074524b8) */

ulong * FUN_107452080(ulong *param_1,ulong *param_2)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  undefined1 ***pppuVar7;
  bool bVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  ushort *puVar21;
  ulong uVar22;
  ushort *puVar23;
  undefined1 ***pppuVar24;
  undefined *puVar25;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined8 auStack_f8 [3];
  ushort *puStack_e0;
  long *plStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  
  puVar9 = param_1;
  puVar11 = param_2;
  if ((param_1[0x67] & 1) == 0) {
    puVar11 = (ulong *)0x8;
    FUN_1075012f4(&uStack_90,8,8);
    if ((char)param_1[0x67] == '\x01') {
      FUN_10737d268(param_1 + 100);
      puVar9 = puStack_80;
      uVar14 = uStack_90;
      uVar22 = uStack_88;
    }
    else {
      param_1[100] = 0;
      param_1[0x65] = 0;
      param_1[0x66] = 0;
      *(undefined1 *)(param_1 + 0x67) = 1;
      puVar9 = puStack_80;
      uVar14 = uStack_90;
      uVar22 = uStack_88;
    }
    puStack_80 = (ulong *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    param_1[0x65] = uVar22;
    param_1[100] = uVar14;
    param_1[0x66] = (ulong)puVar9;
    puVar9 = &uStack_90;
    func_0x000104c336c8();
  }
  if ((param_1[0x6c] & 1) == 0) {
    FUN_107501174(&uStack_90,8);
    if ((char)param_1[0x6c] == '\x01') {
      puVar11 = &uStack_88;
      func_0x000100171ed0(param_1 + 0x69,puVar11);
    }
    else {
      param_1[0x68] = (ulong)&PTR_DAT_11099ed40;
      param_1[0x6a] = (ulong)puStack_80;
      param_1[0x69] = uStack_88;
      param_1[0x6b] = uStack_78;
      uStack_88 = 0;
      puStack_80 = (ulong *)0x0;
      uStack_78 = 0;
      *(undefined1 *)(param_1 + 0x6c) = 1;
    }
    puVar9 = &uStack_88;
    func_0x00010730b05c();
  }
  puVar21 = (ushort *)param_1[0x65];
  uVar22 = param_1[100];
  uVar3 = (ushort)*param_2;
  uVar4 = *(ushort *)((long)param_2 + 2);
  uVar5 = *(ushort *)((long)param_2 + 6);
  uVar14 = param_2[1];
  bVar2 = *(byte *)((long)param_2 + 0xc);
  lVar19 = 0x80;
  if (bVar2 == 0) {
    lVar19 = 0x68;
  }
  plVar20 = (long *)((long)param_1 + lVar19);
  puVar17 = (ulong *)plVar20[1];
  if (puVar17 < (ulong *)plVar20[2]) {
    uVar15 = *param_2;
    *(int *)(puVar17 + 1) = (int)param_2[1];
    *puVar17 = uVar15;
    lVar19 = (long)puVar17 + 0xc;
  }
  else {
    uVar13 = ((long)puVar17 - *plVar20) / 0xc;
    uVar15 = uVar13 + 1;
    if (0x1555555555555555 < uVar15) {
SUB_10730b9d0:
      FUN_10745267c();
      puVar10 = &uStack_90;
      FUN_107452724();
      func_0x000107452964();
      pcStack_b8 = FUN_107452520;
      puStack_e0 = puVar21;
      plStack_d8 = plVar20;
      puStack_d0 = param_2;
      puStack_c8 = puVar9;
      puStack_c0 = &stack0xfffffffffffffff0;
      FUN_107452578(puVar10 + 0xd,(ulong)puVar11 & 0xffffffff);
      FUN_107452578(puVar10 + 0x10,(ulong)puVar11 & 0xffffffff);
      FUN_107452884(puVar10 + 0x13,uVar13 & 0xffffffff);
      puVar17 = puStack_c8;
      puVar9 = puStack_d0;
      plVar20 = plStack_d8;
      puVar21 = puStack_e0;
      puVar11 = puVar10 + 0x29;
      puVar12 = (undefined8 *)(uVar13 + 1 & 0xfffffffffffffffe);
      pppuVar7 = (undefined1 ***)auStack_100;
      if (puVar12 <= (undefined8 *)((long)(puVar10[0x2b] - *puVar11) >> 1)) {
        return puVar11;
      }
      if ((long)(uVar13 + 1) < 0) {
        pppuVar7 = &ppuStack_110;
        pppuVar24 = &ppuStack_110;
        puStack_108 = &UNK_10730ba38;
        puVar25 = &SUB_10730ba50;
        ppuStack_110 = &puStack_c0;
        func_0x00010730cba8();
      }
      else {
        func_0x00010730babc(auStack_f8,puVar12,(long)(puVar10[0x2a] - *puVar11) >> 1);
        puVar12 = auStack_f8;
        puVar25 = &UNK_10730ba20;
        puVar17 = puVar11;
        pppuVar24 = (undefined1 ***)&puStack_c0;
      }
      *(ushort **)((long)pppuVar7 + -0x30) = puVar21;
      *(long **)((long)pppuVar7 + -0x28) = plVar20;
      *(ulong **)((long)pppuVar7 + -0x20) = puVar9;
      *(ulong **)((long)pppuVar7 + -0x18) = puVar17;
      *(undefined1 ****)((long)pppuVar7 + -0x10) = pppuVar24;
      *(undefined **)((long)pppuVar7 + -8) = puVar25;
      puVar9 = puVar11;
      func_0x00010730ca84(puVar12[1]);
      puVar12[1] = plVar20;
      uVar14 = *puVar11;
      puVar11[1] = uVar14;
      *puVar11 = puVar12[1];
      puVar12[1] = uVar14;
      uVar14 = puVar11[1];
      puVar11[1] = puVar12[2];
      puVar12[2] = uVar14;
      uVar14 = puVar11[2];
      puVar11[2] = puVar12[3];
      puVar12[3] = uVar14;
      *puVar12 = puVar12[1];
      return puVar9;
    }
    uVar18 = (plVar20[2] - *plVar20) / 0xc;
    uVar13 = uVar18 * 2;
    if (uVar13 < uVar15 || uVar13 - uVar15 == 0) {
      uVar13 = uVar15;
    }
    if (0xaaaaaaaaaaaaaa9 < uVar18) {
      uVar13 = 0x1555555555555555;
    }
    FUN_107452688(&uStack_90,uVar13);
    uVar15 = *param_2;
    *(int *)(puStack_80 + 1) = (int)param_2[1];
    *puStack_80 = uVar15;
    puStack_80 = (ulong *)((long)puStack_80 + 0xc);
    puVar11 = &uStack_90;
    FUN_107452644(plVar20,puVar11);
    lVar19 = plVar20[1];
    FUN_107452724(&uStack_90);
  }
  plVar20[1] = lVar19;
  bVar8 = (uVar4 & 0xe000) == 0;
  param_2 = (ulong *)(ulong)(bVar8 && uVar3 < 0x2000);
  if (!bVar8 || uVar3 >= 0x2000) {
    return param_2;
  }
  uStack_a0 = (long)puVar21 - uVar22;
  puVar9 = param_1 + 0x1a;
  uVar22 = uStack_a0 >> 2;
  if ((*puVar9 == param_1[0x1b]) || (0xffff < *(long *)(param_1[0x1b] - 0x18) + (uVar22 & 0xffff)))
  {
    uStack_90 = (long)(param_1[0x14] - param_1[0x13]) >> 4;
    lStack_98 = (long)(param_1[0x18] - param_1[0x17]) >> 1;
    func_0x0001074529c8();
    uStack_90 = (long)(param_1[0x14] - param_1[0x13]) >> 4;
    lStack_98 = (long)(param_1[0x2a] - param_1[0x29]) >> 1;
    puVar9 = param_1 + 0x2c;
    func_0x0001074529c8();
  }
  puVar23 = (ushort *)param_1[100];
  puVar21 = (ushort *)param_1[0x65];
  uStack_a8 = uVar22;
  do {
    if (puVar23 == puVar21) {
      uVar14 = 0;
      uVar22 = param_1[0x1b];
      sVar6 = *(short *)(uVar22 - 0x18);
      while( true ) {
        uVar13 = uStack_90;
        uVar15 = (long)(param_1[0x6a] - param_1[0x69]) >> 1;
        if (uVar15 <= uVar14) break;
        psVar1 = (short *)(param_1[0x69] + uVar14 * 2);
        uStack_90._6_2_ = SUB82(uVar13,6);
        uStack_90._0_6_ = CONCAT24(psVar1[2] + sVar6,CONCAT22(psVar1[1] + sVar6,*psVar1 + sVar6));
        func_0x000107309760(param_1 + 0x16,&uStack_90,3);
        uVar14 = uVar14 + 3;
      }
      lVar19 = *(long *)(uVar22 - 0x10);
      *(ulong *)(uVar22 - 0x18) = *(long *)(uVar22 - 0x18) + (uStack_a8 & 0xffff);
      *(ulong *)(uVar22 - 0x10) = lVar19 + uVar15;
      do {
        func_0x0001074528f0();
        func_0x0001074529ec();
      } while( true );
    }
    uVar22 = (ulong)uVar4 << 0x10 | (ulong)bVar2 << 0x20 | (ulong)uVar3 |
             (ulong)(*puVar23 - 4) << 0x30;
    plVar20 = (long *)((ulong)uVar5 << 0x10 | (ulong)(uint)uVar14 << 0x20 |
                      (ulong)(puVar23[1] - 4) & 0xffff);
    puVar17 = (ulong *)param_1[0x14];
    if (puVar17 < (ulong *)param_1[0x15]) {
      *puVar17 = uVar22;
      puVar17[1] = (ulong)plVar20;
      puVar17 = puVar17 + 2;
    }
    else {
      uVar13 = (long)((long)puVar17 - param_1[0x13]) >> 4;
      uVar15 = uVar13 + 1;
      if (uVar15 >> 0x3c != 0) {
        FUN_1074527a0();
        goto SUB_10730b9d0;
      }
      uVar16 = (long)param_1[0x15] - param_1[0x13];
      uVar18 = (long)uVar16 >> 3;
      if (uVar18 <= uVar15) {
        uVar18 = uVar15;
      }
      if (0x7fffffffffffffef < uVar16) {
        uVar18 = 0xfffffffffffffff;
      }
      FUN_1074527ac(&uStack_90,uVar18,uVar13,param_1 + 0x15);
      *puStack_80 = uVar22;
      puStack_80[1] = (ulong)plVar20;
      puStack_80 = puStack_80 + 2;
      puVar11 = &uStack_90;
      FUN_107452774(param_1 + 0x13);
      puVar17 = (ulong *)param_1[0x14];
      puVar9 = &uStack_90;
      FUN_107452834();
    }
    param_1[0x14] = (ulong)puVar17;
    puVar23 = puVar23 + 2;
  } while( true );
}



/* Entry: 107452520; end: 107452577;  */

/* WARNING: Possible PIC construction at 0x00010730ba1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010730ba34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010730ba20) */
/* WARNING: Removing unreachable block (ram,0x00010730ba38) */

void FUN_107452520(long param_1,undefined4 param_2,ulong param_3)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [3];
  
  FUN_107452578(param_1 + 0x68,param_2);
  FUN_107452578(param_1 + 0x80,param_2);
  FUN_107452884(param_1 + 0x98,param_3 & 0xffffffff);
  plVar2 = (long *)(param_1 + 0x148);
  puVar3 = (undefined8 *)(param_3 + 1 & 0xfffffffffffffffe);
  ppuVar1 = (undefined1 **)auStack_50;
  if ((undefined8 *)(*(long *)(param_1 + 0x158) - *plVar2 >> 1) < puVar3) {
    if ((long)(param_3 + 1) < 0) {
      ppuVar1 = &puStack_60;
      ppuVar5 = &puStack_60;
      puStack_58 = &UNK_10730ba38;
      puVar6 = &SUB_10730ba50;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x00010730cba8();
    }
    else {
      func_0x00010730babc(auStack_48,puVar3,*(long *)(param_1 + 0x150) - *plVar2 >> 1);
      puVar3 = auStack_48;
      puVar6 = &UNK_10730ba20;
      unaff_x19 = plVar2;
      ppuVar5 = (undefined1 **)&stack0xfffffffffffffff0;
    }
    *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
    *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
    *(long **)((long)ppuVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar5;
    *(undefined **)((long)ppuVar1 + -8) = puVar6;
    func_0x00010730ca84(puVar3[1]);
    puVar3[1] = unaff_x21;
    lVar4 = *plVar2;
    plVar2[1] = lVar4;
    *plVar2 = puVar3[1];
    puVar3[1] = lVar4;
    lVar4 = plVar2[1];
    plVar2[1] = puVar3[2];
    puVar3[2] = lVar4;
    lVar4 = plVar2[2];
    plVar2[2] = puVar3[3];
    puVar3[3] = lVar4;
    *puVar3 = puVar3[1];
    return;
  }
  return;
}



/* Entry: 107452578; end: 1074525fb;  */

/* WARNING: Possible PIC construction at 0x00010730ba1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010730ba34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010730ba20) */
/* WARNING: Removing unreachable block (ram,0x00010730ba38) */

void FUN_107452578(long *param_1,ulong param_2)

{
  undefined1 ***pppuVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 ***pppuVar6;
  undefined *puVar7;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 auStack_98 [5];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [40];
  
  func_0x0001074529f8();
  if ((ulong)(extraout_x9 / 0xc) < param_2) {
    if (0x1555555555555555 < param_2) {
      FUN_10745267c();
      puVar3 = auStack_48;
      FUN_107452724();
      func_0x000107452964();
      plVar2 = (long *)(puVar3 + 8);
      puVar4 = (undefined8 *)(param_2 + 1 & 0xfffffffffffffffe);
      pppuVar1 = (undefined1 ***)auStack_a0;
      pcStack_58 = FUN_1074525fc;
      if (puVar4 <= (undefined8 *)(*(long *)(puVar3 + 0x18) - *plVar2 >> 1)) {
        return;
      }
      puStack_60 = &stack0xfffffffffffffff0;
      if ((long)(param_2 + 1) < 0) {
        pppuVar1 = &ppuStack_b0;
        pppuVar6 = &ppuStack_b0;
        puStack_a8 = &UNK_10730ba38;
        puVar7 = &SUB_10730ba50;
        ppuStack_b0 = &puStack_60;
        func_0x00010730cba8();
      }
      else {
        func_0x00010730babc(auStack_98,puVar4,*(long *)(puVar3 + 0x10) - *plVar2 >> 1);
        puVar4 = auStack_98;
        puVar7 = &UNK_10730ba20;
        param_1 = plVar2;
        pppuVar6 = (undefined1 ***)&puStack_60;
      }
      *(undefined8 *)((long)pppuVar1 + -0x30) = unaff_x22;
      *(undefined8 *)((long)pppuVar1 + -0x28) = unaff_x21;
      *(undefined8 *)((long)pppuVar1 + -0x20) = unaff_x20;
      *(long **)((long)pppuVar1 + -0x18) = param_1;
      *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar6;
      *(undefined **)((long)pppuVar1 + -8) = puVar7;
      func_0x00010730ca84(puVar4[1]);
      puVar4[1] = unaff_x21;
      lVar5 = *plVar2;
      plVar2[1] = lVar5;
      *plVar2 = puVar4[1];
      puVar4[1] = lVar5;
      lVar5 = plVar2[1];
      plVar2[1] = puVar4[2];
      puVar4[2] = lVar5;
      lVar5 = plVar2[2];
      plVar2[2] = puVar4[3];
      puVar4[3] = lVar5;
      *puVar4 = puVar4[1];
      return;
    }
    FUN_107452688(auStack_48);
    FUN_107452644(param_1,auStack_48);
    FUN_107452724(auStack_48);
  }
  return;
}



/* Entry: 1074525fc; end: 107452617;  */

/* WARNING: Possible PIC construction at 0x00010730ba1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010730ba34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010730ba20) */
/* WARNING: Removing unreachable block (ram,0x00010730ba38) */

void FUN_1074525fc(long param_1,long param_2)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [5];
  
  plVar2 = (long *)(param_1 + 8);
  puVar3 = (undefined8 *)(param_2 + 1U & 0xfffffffffffffffe);
  ppuVar1 = (undefined1 **)auStack_50;
  if ((undefined8 *)(*(long *)(param_1 + 0x18) - *plVar2 >> 1) < puVar3) {
    if ((long)(param_2 + 1U) < 0) {
      ppuVar1 = &puStack_60;
      ppuVar5 = &puStack_60;
      puStack_58 = &UNK_10730ba38;
      puVar6 = &SUB_10730ba50;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x00010730cba8();
    }
    else {
      func_0x00010730babc(auStack_48,puVar3,*(long *)(param_1 + 0x10) - *plVar2 >> 1);
      puVar3 = auStack_48;
      puVar6 = &UNK_10730ba20;
      unaff_x19 = plVar2;
      ppuVar5 = (undefined1 **)&stack0xfffffffffffffff0;
    }
    *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
    *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
    *(long **)((long)ppuVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar5;
    *(undefined **)((long)ppuVar1 + -8) = puVar6;
    func_0x00010730ca84(puVar3[1]);
    puVar3[1] = unaff_x21;
    lVar4 = *plVar2;
    plVar2[1] = lVar4;
    *plVar2 = puVar3[1];
    puVar3[1] = lVar4;
    lVar4 = plVar2[1];
    plVar2[1] = puVar3[2];
    puVar3[2] = lVar4;
    lVar4 = plVar2[2];
    plVar2[2] = puVar3[3];
    puVar3[3] = lVar4;
    *puVar3 = puVar3[1];
    return;
  }
  return;
}



/* Entry: 107452618; end: 10745262b;  */

void FUN_107452618(void)

{
  FUN_1073eaf08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10745262c; end: 107452643;  */

undefined8 FUN_10745262c(void)

{
  return 0;
}



/* Entry: 107452644; end: 10745267b;  */

void FUN_107452644(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107452984();
  _memcpy(extraout_x8 + (param_3 / -0xc) * 0xc);
  func_0x000107452914();
  return;
}



/* Entry: 10745267c; end: 107452687;  */

long * FUN_10745267c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001074529d4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074526d4();
  }
  lVar1 = param_4 + param_3 * 0xc;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xc;
  return param_1;
}



/* Entry: 107452688; end: 1074526f7;  */

long * FUN_107452688(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074526d4();
  }
  lVar1 = param_4 + param_3 * 0xc;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xc;
  return param_1;
}



/* Entry: 1074526f8; end: 107452723;  */

long * FUN_1074526f8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x1555555555555556) {
    plVar1 = (long *)(param_2 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107452750();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107452724; end: 10745274f;  */

long * FUN_107452724(long *param_1)

{
  FUN_107452750();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107452750; end: 107452773;  */

void FUN_107452750(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0xc;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107452774; end: 10745279f;  */

void FUN_107452774(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107452984();
  _memcpy(extraout_x8 - param_3);
  func_0x000107452914();
  return;
}



/* Entry: 1074527a0; end: 1074527ab;  */

long * FUN_1074527a0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001074529d4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074527f4();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1074527ac; end: 107452817;  */

long * FUN_1074527ac(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074527f4();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 107452818; end: 107452833;  */

long * FUN_107452818(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107452860();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107452834; end: 10745285f;  */

long * FUN_107452834(long *param_1)

{
  FUN_107452860();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107452860; end: 107452883;  */

void FUN_107452860(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107452884; end: 1074528ef;  */

long * FUN_107452884(long *param_1,ulong param_2)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined2 *extraout_x8;
  undefined2 *extraout_x8_00;
  long extraout_x9;
  long lVar8;
  undefined1 auStack_c8 [16];
  undefined2 *puStack_b8;
  long alStack_48 [3];
  undefined2 auStack_30 [2];
  undefined1 auStack_2c [12];
  
  func_0x0001074529f8();
  if ((ulong)(extraout_x9 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_1074527a0();
      FUN_107452834(alStack_48);
      func_0x000107452964();
      plVar6 = (long *)param_1[0x2a];
      plVar5 = param_1 + 0x29;
      lVar7 = (long)auStack_2c - (long)auStack_30 >> 1;
      if (0 < lVar7) {
        lVar8 = param_1[0x2a];
        if (param_1[0x2b] - lVar8 >> 1 < lVar7) {
          plVar4 = plVar5;
          func_0x00010730bcd0(plVar5,lVar7 + (lVar8 - *plVar5 >> 1));
          func_0x00010730babc(auStack_c8,plVar4,(long)plVar6 - *plVar5 >> 1,param_1 + 0x2b);
          puVar2 = auStack_30;
          puVar3 = puStack_b8;
          for (lVar8 = lVar7 << 1; lVar8 != 0; lVar8 = lVar8 + -2) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          puStack_b8 = puStack_b8 + lVar7;
          func_0x00010730bd08(plVar5,auStack_c8,plVar6);
          func_0x00010730cbec();
          plVar6 = plVar5;
        }
        else {
          lVar8 = lVar8 - (long)plVar6;
          lVar1 = lVar8 >> 1;
          if (lVar1 < lVar7) {
            func_0x000100b56b4c(plVar5,(long)auStack_30 + lVar8,auStack_2c,lVar7 - lVar1);
            if (0 < lVar1) {
              func_0x00010730ccd4();
              puVar2 = auStack_30;
              puVar3 = extraout_x8;
              for (; lVar8 != 0; lVar8 = lVar8 + -2) {
                *puVar3 = *puVar2;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
              }
            }
          }
          else {
            func_0x00010730ccd4();
            puVar2 = auStack_30;
            puVar3 = extraout_x8_00;
            for (lVar7 = lVar7 << 1; lVar7 != 0; lVar7 = lVar7 + -2) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
            }
          }
        }
      }
      return plVar6;
    }
    FUN_1074527ac(alStack_48);
    FUN_107452774(param_1,alStack_48);
    param_1 = alStack_48;
    FUN_107452834(param_1);
  }
  return param_1;
}



/* Entry: 1074528f0; end: 107452a17;  */

long * FUN_1074528f0(void)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined2 *extraout_x8;
  undefined2 *extraout_x8_00;
  long unaff_x19;
  long lVar8;
  undefined1 auStack_78 [16];
  undefined2 *puStack_68;
  
  plVar6 = *(long **)(unaff_x19 + 0x150);
  plVar5 = (long *)(unaff_x19 + 0x148);
  lVar7 = (long)&stack0x00000024 - (long)&stack0x00000020 >> 1;
  if (0 < lVar7) {
    lVar8 = *(long *)(unaff_x19 + 0x150);
    if (*(long *)(unaff_x19 + 0x158) - lVar8 >> 1 < lVar7) {
      plVar4 = plVar5;
      func_0x00010730bcd0(plVar5,lVar7 + (lVar8 - *plVar5 >> 1));
      func_0x00010730babc(auStack_78,plVar4,(long)plVar6 - *plVar5 >> 1,(long *)(unaff_x19 + 0x158))
      ;
      puVar2 = (undefined2 *)&stack0x00000020;
      puVar3 = puStack_68;
      for (lVar8 = lVar7 << 1; lVar8 != 0; lVar8 = lVar8 + -2) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puStack_68 = puStack_68 + lVar7;
      func_0x00010730bd08(plVar5,auStack_78,plVar6);
      func_0x00010730cbec();
      plVar6 = plVar5;
    }
    else {
      lVar8 = lVar8 - (long)plVar6;
      lVar1 = lVar8 >> 1;
      if (lVar1 < lVar7) {
        func_0x000100b56b4c(plVar5,(long)&stack0x00000020 + lVar8,&stack0x00000024,lVar7 - lVar1);
        if (0 < lVar1) {
          func_0x00010730ccd4();
          puVar2 = (undefined2 *)&stack0x00000020;
          puVar3 = extraout_x8;
          for (; lVar8 != 0; lVar8 = lVar8 + -2) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
        }
      }
      else {
        func_0x00010730ccd4();
        puVar2 = (undefined2 *)&stack0x00000020;
        puVar3 = extraout_x8_00;
        for (lVar7 = lVar7 << 1; lVar7 != 0; lVar7 = lVar7 + -2) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
    }
  }
  return plVar6;
}



/* Entry: 107452a18; end: 1074531e3;  */

/* WARNING: Possible PIC construction at 0x0001074531d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074531dc) */

undefined8 *
FUN_107452a18(undefined4 param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 in_ZR;
  bool bVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *plVar15;
  undefined8 **ppuVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 *apuStack_148 [4];
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  
  puVar12 = param_2;
  func_0x000107455cc4();
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &PTR_DAT_1109ace68;
  do {
    iVar1 = iRam00000001131ad780 + 1;
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
    if (bVar11) {
      cVar4 = ExclusiveMonitorsStatus();
      iRam00000001131ad780 = iVar1;
    }
  } while (cVar4 != '\0');
  *(int *)(param_2 + 3) = iVar1;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_1109b1dc8;
  *(undefined1 *)(param_2 + 5) = *param_3;
  uStack_80 = extraout_x8;
  FUN_1073e46e0(param_2 + 6,param_3 + 8);
  *(undefined1 *)(param_2 + 0xd) = param_3[0x40];
  *(undefined4 *)((long)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 0x48);
  *(undefined1 *)((long)param_2 + 0x74) = param_3[0x4c];
  FUN_1073dd9b0(param_2 + 0xf,param_3 + 0x50);
  lVar14 = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = &PTR_DAT_11099ed40;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x20] = &UNK_10e52b660;
  param_2[0x1d] = 0;
  param_2[0x1c] = 0;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x2e) = 0;
  plVar13 = param_2 + 0x30;
  *plVar13 = 0;
  param_2[0x31] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  *(undefined1 *)(param_2 + 0x24) = 0;
  param_2[0x2f] = plVar13;
  do {
    *(undefined1 *)((long)param_2 + lVar14 + 400) = 0;
    *(undefined1 *)((long)param_2 + lVar14 + 0x198) = 0;
    func_0x000107455d8c();
    lVar14 = extraout_x8_00;
  } while (!(bool)in_ZR);
  lVar14 = 0;
  do {
    *(undefined1 *)((long)param_2 + lVar14 + 0x1e0) = 0;
    *(undefined1 *)((long)param_2 + lVar14 + 0x1e8) = 0;
    func_0x000107455d8c();
    lVar14 = extraout_x8_01;
  } while (!(bool)in_ZR);
  lVar14 = 0;
  do {
    *(undefined1 *)((long)param_2 + lVar14 + 0x230) = 0;
    *(undefined1 *)((long)param_2 + lVar14 + 0x238) = 0;
    func_0x000107455d8c();
    lVar14 = extraout_x8_02;
  } while (!(bool)in_ZR);
  lVar14 = 0;
  do {
    *(undefined1 *)((long)param_2 + lVar14 + 0x280) = 0;
    *(undefined1 *)((long)param_2 + lVar14 + 0x288) = 0;
    func_0x000107455d8c();
    lVar14 = extraout_x8_03;
  } while (!(bool)in_ZR);
  lVar14 = 0;
  do {
    *(undefined1 *)((long)param_2 + lVar14 + 0x2d0) = 0;
    *(undefined1 *)((long)param_2 + lVar14 + 0x2d8) = 0;
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0xa0);
  plVar2 = param_2 + 0x6f;
  param_2[0x70] = 0;
  *plVar2 = 0;
  plVar3 = param_2 + 0x6e;
  param_2[0x6e] = plVar2;
  param_2[0x72] = 0;
  param_2[0x71] = 0;
  param_2[0x74] = 0;
  param_2[0x73] = 0;
  *(undefined4 *)(param_2 + 0x75) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x79) = param_1;
  *(undefined4 *)((long)param_2 + 0x3cc) = param_5;
  func_0x000104c2fe00(param_2 + 0x7a,param_6);
  uVar20 = *param_7;
  param_2[0x82] = param_7[1];
  param_2[0x81] = uVar20;
  ppuVar16 = (undefined8 **)*param_4;
  do {
    if (ppuVar16 == (undefined8 **)(param_4 + 1)) {
      ppuVar16 = (undefined8 **)*param_4;
      while (bVar11 = ppuVar16 == (undefined8 **)(param_4 + 1), !bVar11) {
        FUN_1073b712c(param_2 + 0x2f,ppuVar16 + 4);
        lVar14 = 0;
        do {
          *(undefined4 *)((long)auStack_128 + lVar14) = 0;
          *(undefined8 *)((long)apuStack_148 + lVar14 + 8) = 0;
          *(undefined8 *)((long)apuStack_148 + lVar14) = 0;
          *(undefined8 *)((long)apuStack_148 + lVar14 + 0x18) = 0;
          *(undefined8 *)((long)apuStack_148 + lVar14 + 0x10) = 0;
          lVar14 = lVar14 + 0x28;
        } while (lVar14 != 200);
        func_0x000107455cec();
        func_0x000107455c04();
        func_0x000107455bfc(apuStack_148);
        func_0x000107455c0c();
        func_0x000107455cec();
        func_0x000107455c04();
        func_0x000107455bfc(auStack_120);
        func_0x000107455c0c();
        func_0x000107455cec();
        func_0x000107455c04();
        func_0x000107455bfc(auStack_f8);
        func_0x000107455c0c();
        func_0x000107455cec();
        func_0x000107455c04();
        func_0x000107455bfc(auStack_d0);
        func_0x000107455c0c();
        func_0x000107455cec();
        func_0x000107455c04();
        func_0x000107455bfc(auStack_a8);
        func_0x000107455c0c();
        plVar13 = plVar3;
        FUN_107455690(plVar3,&lStack_150,ppuVar16 + 4);
        if (*plVar13 == 0) {
          puVar12 = (undefined8 *)0x120;
          __Znwm();
          puStack_1b8 = puVar12;
          plStack_1b0 = plVar2;
          func_0x000107455c9c();
          lVar14 = 0;
          do {
            FUN_10744955c((long)puVar12 + lVar14 + 0x58,(long)apuStack_148 + lVar14);
            lVar14 = lVar14 + 0x28;
          } while (lVar14 != 200);
          uStack_1a8 = 1;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = lStack_150;
          *plVar13 = (long)puVar12;
          if (*(long *)*plVar3 != 0) {
            *plVar3 = *(long *)*plVar3;
          }
          func_0x00010002c5b0(param_2[0x6f],puVar12);
          param_2[0x70] = param_2[0x70] + 1;
          puStack_1b8 = (undefined8 *)0x0;
          FUN_107455708(&puStack_1b8);
        }
        ppuVar16 = apuStack_148;
        FUN_107455238();
        func_0x000107455d48();
      }
      func_0x000107455b94(uStack_80);
      if (bVar11) {
        return param_2;
      }
      ___stack_chk_fail();
      FUN_107455238(apuStack_148);
      func_0x000104c2f714(param_2 + 0x7a);
      func_0x000107455584(param_2 + 0x71);
      func_0x0001074554f4(plVar3);
      func_0x0001074553d4(param_2 + 0x2f);
      func_0x00010730b10c(param_2 + 0x2b);
      func_0x00010730b13c(param_2 + 0x24);
      func_0x000107261dac(param_2 + 0x20);
      FUN_1073eb118(param_2 + 0x1d);
      func_0x00010730b05c(param_2 + 0x1a);
      func_0x00010745526c(param_2 + 0x16);
      func_0x0001073e4b5c(param_2 + 5);
      *param_2 = &PTR_DAT_1109ace68;
      func_0x0001073b4ef8(param_2 + 1);
      return param_2;
    }
    puVar18 = ppuVar16[0xb];
    puVar12 = (undefined8 *)0x190;
    __Znwm();
    puStack_1b8 = puVar12;
    plStack_1b0 = plVar13;
    func_0x000107455c9c();
    uVar21 = *(undefined4 *)(param_2 + 0x79);
    func_0x000107455bc8(&lStack_150,puVar18 + 5);
    FUN_107443910(&lStack_158,uVar21,0,0,0,0x3f800000,puVar18 + 0xc);
    func_0x000107455bbc(&lStack_160,puVar18 + 0x19);
    func_0x000107455bc8(&lStack_168,puVar18 + 0x20);
    func_0x000107445c14(&lStack_170,uVar21,0,0x3f570a3d,puVar18 + 0x29);
    func_0x000107455bc8(&lStack_178,puVar18 + 0x31);
    func_0x000107455bbc(&lStack_180,puVar18 + 0x38);
    FUN_1073e3fb8(apuStack_148);
    FUN_107443894(&uStack_188,uVar21,puVar18 + 0x3f,apuStack_148);
    func_0x000107455bbc(&uStack_190,puVar18 + 0x5b);
    lVar10 = lStack_150;
    lVar9 = lStack_158;
    lVar8 = lStack_160;
    lVar7 = lStack_168;
    lVar6 = lStack_170;
    lVar5 = lStack_178;
    lVar14 = lStack_180;
    uVar20 = uStack_188;
    lStack_158 = 0;
    lStack_150 = 0;
    puVar12[0xb] = lVar10;
    puVar12[0xc] = lVar9;
    lStack_168 = 0;
    lStack_160 = 0;
    puVar12[0xd] = lVar8;
    puVar12[0xe] = lVar7;
    lStack_178 = 0;
    lStack_170 = 0;
    puVar12[0xf] = lVar6;
    puVar12[0x10] = lVar5;
    uStack_188 = 0;
    lStack_180 = 0;
    puVar12[0x11] = lVar14;
    puVar12[0x12] = uVar20;
    puVar12[0x13] = uStack_190;
    func_0x00010726b164(apuStack_148);
    lVar14 = lStack_180;
    lStack_180 = 0;
    if (lVar14 != 0) {
      func_0x000107455a70();
    }
    lVar14 = lStack_178;
    lStack_178 = 0;
    if (lVar14 != 0) {
      func_0x000107455a70();
    }
    lVar14 = lStack_170;
    lStack_170 = 0;
    if (lVar14 != 0) {
      func_0x000107455a70();
    }
    lVar14 = lStack_168;
    lStack_168 = 0;
    if (lVar14 != 0) {
      func_0x000107455a70();
    }
    lVar14 = lStack_160;
    lStack_160 = 0;
    if (lVar14 != 0) {
      func_0x000107455a70();
    }
    lVar14 = lStack_158;
    lStack_158 = 0;
    if (lVar14 != 0) {
      func_0x000107455a70();
    }
    lVar14 = lStack_150;
    lStack_150 = 0;
    if (lVar14 != 0) {
      func_0x000107455a70();
    }
    *(undefined1 *)(puVar12 + 0x29) = 0;
    *(undefined1 *)(puVar12 + 0x2a) = 0;
    *(undefined1 *)(puVar12 + 0x30) = 0;
    puVar12[0x31] = 0;
    _bzero(puVar12 + 0x14,0x91);
    uStack_1a8 = 1;
    plVar15 = (long *)*plVar13;
    plVar17 = plVar13;
    plVar19 = plVar13;
    while (plVar15 != (long *)0x0) {
      while( true ) {
        plVar19 = plVar15;
        puVar18 = puVar12 + 4;
        func_0x000104c2fc44(puVar18,plVar19 + 4);
        if ((int)puVar18 == 0) break;
        plVar15 = (long *)*plVar19;
        plVar17 = plVar19;
        if ((long *)*plVar19 == (long *)0x0) goto LAB_107452e34;
      }
      plVar15 = plVar19 + 4;
      func_0x000104c2fc44(plVar15,puVar12 + 4);
      if ((int)plVar15 == 0) {
        if (*plVar17 != 0) goto LAB_107452e6c;
        break;
      }
      plVar17 = plVar19 + 1;
      plVar15 = (long *)*plVar17;
    }
LAB_107452e34:
    *puStack_1b8 = 0;
    puStack_1b8[1] = 0;
    puStack_1b8[2] = plVar19;
    *plVar17 = (long)puStack_1b8;
    if (*(long *)param_2[0x2f] != 0) {
      param_2[0x2f] = *(long *)param_2[0x2f];
    }
    func_0x00010002c5b0(param_2[0x30]);
    param_2[0x31] = param_2[0x31] + 1;
    puStack_1b8 = (undefined8 *)0x0;
LAB_107452e6c:
    ppuVar16 = &puStack_1b8;
    FUN_10745564c();
    func_0x000107455d48();
  } while( true );
}



/* Entry: 1074531e4; end: 10745325b;  */

undefined8 * FUN_1074531e4(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x7a);
  func_0x000107455584(param_1 + 0x71);
  func_0x0001074554f4(param_1 + 0x6e);
  func_0x0001074553d4(param_1 + 0x2f);
  func_0x00010730b10c(param_1 + 0x2b);
  func_0x00010730b13c(param_1 + 0x24);
  func_0x000107261dac(param_1 + 0x20);
  FUN_1073eb118(param_1 + 0x1d);
  func_0x00010730b05c(param_1 + 0x1a);
  func_0x00010745526c(param_1 + 0x16);
  func_0x0001073e4b5c(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 10745325c; end: 10745325f;  */

undefined8 * FUN_10745325c(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x7a);
  func_0x000107455584(param_1 + 0x71);
  func_0x0001074554f4(param_1 + 0x6e);
  func_0x0001074553d4(param_1 + 0x2f);
  func_0x00010730b10c(param_1 + 0x2b);
  func_0x00010730b13c(param_1 + 0x24);
  func_0x000107261dac(param_1 + 0x20);
  FUN_1073eb118(param_1 + 0x1d);
  func_0x00010730b05c(param_1 + 0x1a);
  func_0x00010745526c(param_1 + 0x16);
  func_0x0001073e4b5c(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 107453260; end: 107453273;  */

void FUN_107453260(void)

{
  FUN_1074531e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107453274; end: 107454307;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107453274(undefined8 param_1,short *param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  float fVar15;
  short sVar16;
  bool bVar17;
  short *psVar18;
  short *psVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  long *plVar23;
  long *plVar24;
  short *psVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *plVar28;
  long *extraout_x8_01;
  long extraout_x8_02;
  ulong uVar29;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *UNRECOVERED_JUMPTABLE;
  int extraout_w9;
  short *extraout_x9;
  long lVar30;
  long extraout_x9_00;
  long *extraout_x10;
  long extraout_x10_00;
  uint *puVar31;
  undefined8 *puVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long *plVar38;
  uint uVar39;
  ulong uVar40;
  float fVar41;
  double dVar42;
  short *psVar43;
  short *psVar44;
  double dVar45;
  float fVar46;
  short *psVar47;
  double dVar48;
  double dVar49;
  short *psVar50;
  short *psVar51;
  short *unaff_d10;
  short *psVar52;
  short *psVar53;
  double dVar54;
  double dStack_618;
  short *psStack_5f0;
  uint uStack_5c0;
  uint uStack_5bc;
  long *plStack_5b8;
  undefined4 uStack_5ac;
  long *plStack_5a8;
  long *plStack_5a0;
  short *psStack_598;
  double dStack_590;
  int iStack_584;
  double dStack_580;
  ulong uStack_578;
  int iStack_570;
  uint uStack_56c;
  long *plStack_568;
  long *plStack_560;
  ulong uStack_558;
  short *psStack_550;
  double dStack_548;
  short *psStack_540;
  short *psStack_538;
  short *psStack_528;
  short *psStack_520;
  undefined8 uStack_518;
  ulong uStack_510;
  short *psStack_508;
  short *psStack_500;
  undefined1 uStack_4f8;
  uint uStack_4f0;
  undefined1 uStack_4ec;
  short *psStack_4e8;
  short *psStack_4e0;
  short *psStack_4d8;
  undefined1 uStack_4d0;
  undefined1 uStack_470;
  undefined8 uStack_460;
  short *psStack_458;
  short *psStack_450;
  undefined8 uStack_448;
  undefined1 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_378;
  undefined8 uStack_368;
  undefined8 auStack_2d0 [7];
  byte bStack_298;
  undefined1 uStack_228;
  uint auStack_140 [2];
  undefined8 uStack_138;
  byte bStack_100;
  uint auStack_f8 [2];
  undefined8 uStack_f0;
  char cStack_b8;
  undefined8 uStack_b0;
  
  lVar35 = param_3;
  puVar32 = param_4;
  func_0x000107455cc4();
  plVar1 = (long *)(lVar35 + 0x3b0);
  plVar38 = *(long **)puVar32[1];
  plVar7 = (long *)((ulong *)puVar32[1])[1];
  uStack_b0 = extraout_x8;
  do {
    if (plVar38 == plVar7) {
      lVar35 = *(long *)(param_3 + 0x178);
      while (uVar21 = lVar35 == param_3 + 0x180, !(bool)uVar21) {
        lVar30 = param_4[3];
        FUN_10744bca8();
        if (param_4[3] + 8 == lVar30) {
          puVar32 = (undefined8 *)*param_4;
          psStack_4d8 = (short *)puVar32[1];
          psStack_4e0 = (short *)*puVar32;
          if (puVar32[1] != 0) {
            plVar1 = (long *)(puVar32[1] + 8);
            do {
              cVar11 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = *plVar1 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          func_0x000107455d6c();
          auStack_2d0[0]._0_1_ = 0;
          uStack_228 = 0;
          func_0x000107455c34();
          func_0x000107455c14();
          FUN_107454308();
        }
        else {
          puVar32 = (undefined8 *)*param_4;
          psStack_4d8 = (short *)puVar32[1];
          psStack_4e0 = (short *)*puVar32;
          if (puVar32[1] != 0) {
            plVar1 = (long *)(puVar32[1] + 8);
            do {
              cVar11 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = *plVar1 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          FUN_107443404(auStack_2d0);
          func_0x000107455c34();
          func_0x000107455c14();
          FUN_107454308();
        }
        func_0x00010726af18(&psStack_458);
        FUN_107408214(auStack_2d0);
        func_0x000107267e44(&psStack_4e0);
        func_0x00010002c7d4();
      }
      (**(code **)(**(long **)*param_4 + 0x30))();
      func_0x00010726236c(auStack_2d0);
      if ((bStack_298 & 1) != 0) {
        FUN_10732f3ac(&uStack_460,param_3 + 0x100);
      }
      func_0x00010724b3d8();
      func_0x000107455b94(uStack_b0);
      if (!(bool)uVar21) {
        ___stack_chk_fail();
        puVar32 = auStack_2d0;
        func_0x00010724b3d8();
        func_0x000107455bf4();
        func_0x000107455b7c(*puVar32);
        (*extraout_x8_06)();
        func_0x000107455b7c(puVar32[1]);
        func_0x000107455cac();
        func_0x000107455b7c(puVar32[2]);
        func_0x000107455cac();
        func_0x000107455b7c(puVar32[3]);
        func_0x000107455cac();
        func_0x000107455b7c(puVar32[4]);
        func_0x000107455cac();
        func_0x000107455b7c(puVar32[5]);
        (*extraout_x8_07)();
        func_0x000107455b7c(puVar32[6]);
        func_0x000107455ba8();
        func_0x000107455d0c();
        func_0x000107455b7c(puVar32[7]);
        func_0x000107455ba8();
        func_0x000107455d0c();
        func_0x000107455b7c(puVar32[8]);
        func_0x000107455ba8();
                    /* WARNING: Could not recover jumptable at 0x000107454548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      return;
    }
    plVar28 = *(long **)*param_4;
    uStack_558 = ((ulong *)*param_4)[1];
    if (uStack_558 != 0) {
      plVar23 = (long *)(uStack_558 + 8);
      do {
        cVar11 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar20) {
          *plVar23 = *plVar23 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    uVar6 = param_4[0x13];
    uVar8 = param_4[0x14];
    plStack_5a0 = plVar38;
    plStack_560 = plVar28;
    func_0x000107455b7c();
    iVar22 = (int)plVar28;
    (*extraout_x8_00)();
    plVar38 = plStack_5a0;
    plVar23 = plStack_5a0;
    iStack_570 = iVar22;
    func_0x000107454554();
    plVar24 = plVar38;
    func_0x000107454598();
    bVar20 = iStack_570 == 3;
    plVar28 = (long *)0x2;
    if (bVar20) {
      plVar28 = (long *)0x3;
    }
    plStack_5a8 = plVar24;
    if (plVar28 <= plVar23) {
      func_0x000100060964(auStack_2d0,&UNK_10f409200);
      func_0x000107455cf8(auStack_f8);
      func_0x000107455c54();
      func_0x000100060964(auStack_2d0,&UNK_10f409212);
      func_0x000107455cf8(auStack_140);
      plVar38 = plStack_5a8;
      func_0x000107455c54();
      iStack_584 = 0;
      dStack_580 = 0.0;
      if ((cStack_b8 == '\x01') && ((bStack_100 & 1) != 0)) {
        plVar28 = (long *)((long)plVar23 - 1);
        psVar25 = (short *)(*plStack_5a0 + (long)plStack_5a8 * 4);
        unaff_d10 = (short *)0x0;
        plVar24 = plVar38;
        while (plVar24 < plVar28) {
          dVar42 = (double)((int)psVar25[2] - (int)*psVar25);
          param_2 = (short *)(double)((int)psVar25[3] - (int)psVar25[1]);
          func_0x000107455ac0();
          unaff_d10 = (short *)((double)unaff_d10 + dVar42);
          plVar28 = extraout_x8_01;
          plVar24 = extraout_x10;
          psVar25 = extraout_x9;
        }
        dVar42 = (double)(ulong)auStack_f8[0];
        func_0x0001074545ec(dVar42,uStack_f0);
        psVar25 = (short *)(ulong)auStack_140[0];
        func_0x0001074545ec(psVar25,uStack_138);
        iStack_584 = 1;
        psStack_598 = psVar25;
        dStack_580 = dVar42;
      }
      func_0x0001077512dc(*(undefined4 *)(param_3 + 0x3c8),&uStack_460);
      psStack_4e0 = (short *)((ulong)psStack_4e0 & 0xffffffffffffff00);
      uStack_470 = 0;
      func_0x000107751444(&uStack_460,&plStack_560);
      uStack_378 = uVar8;
      uStack_368 = uVar6;
      func_0x000107751334(auStack_2d0);
      func_0x000107267e8c(&psStack_4e0);
      func_0x000107267da8(&uStack_460);
      plVar28 = plStack_5a0;
      uStack_460 = (short *)((ulong)uStack_460 & 0xffffffffffffff00);
      uStack_428 = 0;
      uStack_420 = 0;
      if (*(int *)(param_3 + 0x60) == 0) {
        uVar33 = (uint)*(byte *)(param_3 + 0x30);
      }
      else {
        uVar33 = (int)param_3 + 0x30;
        func_0x0001073e47a0();
      }
      func_0x00010724b3d8(&uStack_460);
      dStack_618 = 1.0499999523162842;
      if (uVar33 != 1) {
        dStack_618 = (double)*(float *)(param_3 + 0x6c);
      }
      if (*(uint *)(param_3 + 0x3cc) == 0) {
        plVar24 = plStack_560;
        (**(code **)(*plStack_560 + 0x48))();
        dVar42 = (double)((ulong)plVar24 & 0xffffffff) * 0.001953125;
LAB_10745357c:
        param_2 = (short *)0x402e000000000000;
        psStack_5f0 = (short *)(dVar42 * 15.0);
      }
      else {
        psStack_5f0 = (short *)0x0;
        if (*(uint *)(param_3 + 0x3cc) < 0x11) {
          plVar24 = plStack_560;
          (**(code **)(*plStack_560 + 0x48))();
          dVar42 = (double)NEON_ucvtf((ulong)*(uint *)(param_3 + 0x3cc));
          dVar42 = (double)((ulong)plVar24 & 0xffffffff) / (dVar42 * 512.0);
          goto LAB_10745357c;
        }
      }
      lVar30 = *plVar28;
      uVar10 = *(undefined4 *)(lVar30 + (long)plVar38 * 4);
      psStack_4e8 = (short *)0x0;
      uStack_4f0 = uStack_4f0 & 0xffffff00;
      uStack_4ec = 0;
      psStack_4e0 = (short *)((ulong)psStack_4e0 & 0xffffffffffffff00);
      uStack_4d0 = 0;
      psStack_508 = (short *)((ulong)psStack_508 & 0xffffffffffffff00);
      *plVar1 = -1;
      *(undefined8 *)(lVar35 + 0x3b8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar35 + 0x3c0) = 0xffffffffffffffff;
      uStack_5bc = (uint)*(byte *)(param_3 + 0x28);
      uStack_5c0 = uStack_5bc;
      if (iStack_570 == 3) {
        uStack_5c0 = 1;
        uStack_4f0 = *(uint *)(lVar30 + (long)plVar23 * 4 + -8);
        uStack_4ec = 1;
        psVar25 = psStack_5f0;
        func_0x000107455cd4((int)(short)((short)uVar10 - (short)uStack_4f0));
        func_0x000107455d50();
        psStack_508 = (short *)-(double)param_2;
        uStack_4f8 = 1;
        psStack_500 = psVar25;
      }
      func_0x000107455d6c();
      uStack_578 = extraout_x8_02 >> 3;
      uStack_518 = 0;
      psStack_528 = (short *)0x0;
      psStack_520 = (short *)0x0;
      uStack_510 = uStack_578;
      if ((plStack_5a8 <= plVar23 && (long)plVar23 - (long)plStack_5a8 != 0) &&
         (uVar29 = ((long)plVar23 - (long)plStack_5a8) * 8, uVar29 != 0)) {
        if (999 < uVar29) {
          uVar29 = 1000;
        }
        func_0x0001074552fc(&uStack_460,uVar29);
        func_0x000107455d58(psStack_458);
        psVar25 = (short *)(extraout_x8_03 + extraout_x9_00 * extraout_x10_00);
        _memcpy(psVar25);
        uVar6 = uStack_518;
        uStack_518 = uStack_448;
        psStack_520 = psStack_450;
        psStack_450 = psStack_528;
        uStack_448 = uVar6;
        psStack_458 = psStack_528;
        uStack_460 = psStack_528;
        psStack_528 = psVar25;
        FUN_107455368(&uStack_460);
      }
      uVar36 = 0;
      bVar5 = false;
      uVar27 = 0;
      plStack_568 = (long *)((long)plVar23 - 1);
      psStack_5f0 = (short *)((double)psStack_5f0 + (double)psStack_5f0);
      psVar43 = (short *)((double)psStack_598 - dStack_580);
      uVar29 = ~uStack_578;
      dStack_590 = (double)CONCAT44(dStack_590._4_4_,1);
      uStack_56c = (uint)bVar20;
      psVar25 = psVar43;
      param_2 = psStack_598;
      plStack_5b8 = plVar23;
      uVar39 = uStack_4f0;
      for (; plVar38 < plVar23; plVar38 = (long *)((long)plVar38 + 1)) {
        if (iStack_570 == 3 && plVar38 == plStack_568) {
          lVar30 = *plVar28;
          puVar31 = (uint *)(lVar30 + (long)plStack_5a8 * 4 + 4);
LAB_10745372c:
          uVar9 = *puVar31;
          uVar40 = (ulong)uVar9;
          puVar2 = (ushort *)(lVar30 + (long)plVar38 * 4);
          if ((uint)*puVar2 != (uVar9 & 0xffff) || (uint)puVar2[1] != uVar9 >> 0x10) {
            bVar17 = true;
            goto LAB_10745375c;
          }
        }
        else {
          if ((long *)((long)plVar38 + 1U) < plVar23) {
            lVar30 = *plVar28;
            puVar31 = (uint *)(lVar30 + (long)((long)plVar38 + 1U) * 4);
            goto LAB_10745372c;
          }
          bVar17 = false;
          uVar40 = 0;
LAB_10745375c:
          if ((uStack_56c & 1) != 0) {
            psStack_4d8 = psStack_500;
            psStack_4e0 = psStack_508;
            bVar4 = uVar27 == 0;
            psVar25 = psStack_508;
            uVar27 = 1;
            if (bVar4) {
              uStack_4d0 = 1;
            }
          }
          uVar9 = *(uint *)(*plVar28 + (long)plVar38 * 4);
          if (bVar20) {
            bVar5 = true;
            uVar36 = uVar39;
          }
          else {
            uStack_4ec = 1;
          }
          uStack_5ac = (undefined4)(uVar40 >> 0x10);
          sVar13 = (short)uVar40;
          sVar16 = (short)uVar9;
          psVar50 = psStack_4d8;
          psVar52 = psStack_4e0;
          uVar39 = uVar27;
          uStack_4f0 = uVar9;
          if (bVar17) {
            func_0x000107455cd4((int)(short)(sVar13 - sVar16));
            func_0x000107455d50();
            psVar50 = psVar25;
            psVar52 = (short *)-(double)param_2;
            uVar39 = 1;
          }
          uStack_4f8 = (undefined1)uVar39;
          if (uVar27 == 0) {
            uStack_4d0 = 1;
            psVar25 = psVar52;
            psStack_4e0 = psVar52;
            psStack_4d8 = psVar50;
          }
          psVar19 = psStack_4d8;
          psVar18 = psStack_4e0;
          psVar51 = (short *)((double)psVar52 + (double)psStack_4e0);
          psVar53 = (short *)((double)psVar50 + (double)psStack_4d8);
          psVar44 = psVar25;
          psStack_508 = psVar52;
          psStack_500 = psVar50;
          if (((double)psVar51 != 0.0) ||
             (psVar44 = psVar51, param_2 = psVar53, (double)psVar53 != 0.0)) {
            psStack_540 = psVar51;
            psStack_538 = psVar53;
            FUN_10744fbe8(&psStack_540);
          }
          dVar54 = (double)psVar50 * (double)param_2 + (double)psVar52 * (double)psVar44;
          dVar42 = 1.0 / dVar54;
          psVar47 = (short *)0x7ff0000000000000;
          if (dVar54 == 0.0) {
            dVar42 = INFINITY;
          }
          psVar25 = (short *)0x3fe9632680000000;
          bVar20 = dVar54 < 0.7933533191680908;
          iVar22 = (int)uVar9 >> 0x10;
          uVar27 = uVar33;
          uStack_56c = uVar39;
          psStack_540 = psVar44;
          psStack_538 = param_2;
          if (bVar20) {
            if (bVar5) {
              bVar5 = false;
              if (plStack_5a8 < plVar38) {
                bVar5 = bVar17;
              }
              if (bVar5) {
                sVar14 = (short)uVar36;
                dVar45 = (double)((int)sVar14 - (int)sVar16);
                iVar3 = (int)uVar36 >> 0x10;
                func_0x000107455ac0(dVar45,(double)(iVar3 - iVar22));
                if ((double)psStack_5f0 < dVar45) {
                  func_0x000107455b4c((int)(short)(sVar16 - sVar14));
                  uVar39 = (uint)&uStack_460;
                  func_0x000107454630();
                  iVar12 = (uVar9 >> 0x10) - (uVar39 >> 0x10);
                  uVar36 = uVar9 - uVar39 & 0xffff | iVar12 * 0x10000;
                  psStack_550 = (short *)CONCAT44(psStack_550._4_4_,uVar36);
                  dVar45 = (double)((int)sVar14 - (int)(short)(uVar9 - uVar39));
                  func_0x000107455ac0(dVar45,(double)(iVar3 - (short)iVar12));
                  psStack_4e8 = (short *)(dVar45 + (double)psStack_4e8);
                  func_0x000107455a18();
                  func_0x000107455a38();
                  param_4 = puVar32;
                }
              }
              if (bVar17) goto LAB_10745398c;
              bVar20 = false;
              uVar39 = uStack_5c0;
              goto LAB_107453a4c;
            }
LAB_107453934:
            bVar20 = false;
            bVar5 = false;
            puVar31 = &uStack_5bc;
            if (!bVar17) {
              puVar31 = &uStack_5c0;
            }
            uVar39 = *puVar31;
            if (uVar39 == 0) {
LAB_107453ecc:
              if (((ulong)dStack_590 & 1) == 0) {
                func_0x000107455a18();
                func_0x000107455b3c();
                func_0x000107455a38();
                func_0x000107455a18();
                func_0x000107455b3c();
                psVar25 = (short *)0x3ff0000000000000;
                psVar47 = (short *)0x3ff0000000000000;
                func_0x000107455bd0();
                *plVar1 = -1;
                *(undefined8 *)(lVar35 + 0x3b8) = 0xffffffffffffffff;
              }
              if (bVar17) {
                func_0x000107455a18();
                func_0x000107455b2c();
                psVar25 = (short *)0xbff0000000000000;
                psVar47 = (short *)0xbff0000000000000;
                func_0x000107455bd0();
                func_0x000107455a18();
                func_0x000107455b2c();
                func_0x000107455a38();
              }
            }
            else {
LAB_10745394c:
              if (uVar39 == 2) {
                if (((ulong)dStack_590 & 1) == 0) {
                  func_0x000107455a18();
                  func_0x000107455b3c();
                  psVar25 = (short *)0x3ff0000000000000;
                  psVar47 = (short *)0x3ff0000000000000;
                  func_0x000107455a58();
                  *plVar1 = -1;
                  *(undefined8 *)(lVar35 + 0x3b8) = 0xffffffffffffffff;
                }
                if (bVar17) {
                  func_0x000107455a18();
                  func_0x000107455b2c();
                  psVar25 = (short *)0xbff0000000000000;
                  psVar47 = (short *)0xbff0000000000000;
                  func_0x000107455a58();
                }
              }
              else if (uVar39 == 1) {
                if (((ulong)dStack_590 & 1) == 0) {
                  func_0x000107455a18();
                  func_0x000107455b3c();
                  func_0x000107455a38();
                }
                if (bVar17) {
                  func_0x000107455a18();
                  func_0x000107455b2c();
                  func_0x000107455a38();
                }
              }
            }
          }
          else {
            if (!bVar5) goto LAB_107453934;
            if (bVar17) {
LAB_10745398c:
              uVar39 = uStack_5bc;
              if (uVar33 == 0) {
code_r0x0001074539b8:
                if (dStack_618 < dVar42) {
code_r0x0001074539c4:
                  uVar27 = 4;
                  if (dVar42 <= 2.0) {
                    uVar27 = 1;
                  }
                  if (dStack_618 <= dVar42) goto LAB_107453a4c;
                }
                uVar27 = 0;
              }
              else {
                if (uVar33 == 1) goto code_r0x0001074539c4;
                if (uVar33 == 2) {
                  if (dVar42 < (double)*(float *)(param_3 + 0x70)) goto code_r0x0001074539b8;
                  if (dVar42 <= 2.0) {
                    uVar27 = 3;
                  }
                  else {
                    uVar27 = 2;
                  }
                }
              }
            }
            else {
              bVar20 = false;
              uVar39 = uStack_5c0;
            }
LAB_107453a4c:
            dVar45 = (double)((int)(short)uVar36 - (int)sVar16);
            func_0x000107455ac0(uVar39,dVar45,(double)(((int)uVar36 >> 0x10) - iVar22));
            psVar25 = (short *)((double)psStack_4e8 + dVar45);
            psVar47 = psStack_4e8;
            psStack_4e8 = psVar25;
            if ((extraout_w9 == 0) || (uVar27 != 0)) {
              iVar3 = 0;
              if ((uVar27 & 0xff) == 4) {
                iVar3 = extraout_w9;
              }
              if (iVar3 == 1) {
                psVar25 = (short *)-(double)psVar52;
                if (dVar42 <= 100.0) {
                  dVar54 = -1.0;
                  if ((double)psVar19 * (double)psVar25 + (double)psVar50 * (double)psVar18 <= 0.0)
                  {
                    dVar54 = 1.0;
                  }
                  dVar42 = (SQRT((double)psVar53 * (double)psVar53 +
                                 (double)psVar51 * (double)psVar51) * dVar42) /
                           SQRT(((double)psVar19 - (double)psVar50) *
                                ((double)psVar19 - (double)psVar50) +
                                ((double)psVar18 - (double)psVar52) *
                                ((double)psVar18 - (double)psVar52));
                  psVar25 = (short *)(dVar54 * -((double)psStack_538 * dVar42));
                  psVar47 = (short *)(dVar54 * dVar42 * (double)psStack_540);
                }
                else {
                  psVar47 = (short *)-(double)psVar50;
                }
                psStack_540 = psVar25;
                psStack_538 = psVar47;
                func_0x000107455a18();
                func_0x000107455a38();
                psVar25 = (short *)-(double)psStack_540;
                dStack_548 = -(double)psStack_538;
                psStack_550 = psVar25;
                func_0x000107455a18();
                func_0x000107455a38();
                goto LAB_107453df0;
              }
              if (extraout_w9 != 0) {
                if (uVar27 == 3) {
LAB_107453af0:
                  dVar45 = -((double)psVar52 * (double)psVar19) + (double)psVar50 * (double)psVar18;
                  fVar41 = -(float)SQRT(dVar42 * dVar42 + -1.0);
                  psVar47 = (short *)0x0;
                  fVar15 = fVar41;
                  fVar46 = 0.0;
                  if (dVar45 <= 0.0) {
                    fVar15 = 0.0;
                    fVar46 = fVar41;
                  }
                  psVar25 = (short *)(ulong)(uint)fVar15;
                  if (((ulong)dStack_590 & 1) == 0) {
                    psVar25 = (short *)(double)fVar15;
                    psVar47 = (short *)(double)fVar46;
                    func_0x000107455d78();
                    uStack_448 = CONCAT71(uStack_448._1_7_,(char)iStack_584);
                    psStack_450 = unaff_d10;
                    func_0x000107455b3c();
                    func_0x000107455a58();
                  }
                  if (uVar27 == 3) {
                    dVar42 = SQRT(dVar54 * -2.0 + 2.0);
                    uVar39 = (uint)((((dVar42 + dVar42) * 180.0) / 3.141592653589793) / 20.0);
                    dVar42 = (double)psVar50 * (double)psVar19 + (double)psVar52 * (double)psVar18;
                    dStack_590 = ((dVar42 * -1.43519 + 3.55645) * dVar42 + -3.2452) * dVar42 +
                                 1.0904;
                    dVar54 = -1.0;
                    if (dVar45 <= 0.0) {
                      dVar54 = 1.0;
                    }
                    dVar48 = (double)psStack_4e8 / (double)unaff_d10;
                    if (0x7fefffffffffffff < (ulong)ABS(dVar48)) {
                      dVar48 = 0.0;
                    }
                    psVar25 = (short *)((dStack_580 + (double)psVar43 * dVar48) * 32767.0);
                    if (iStack_584 == 0) {
                      psVar25 = psStack_4e8;
                    }
                    psVar47 = (short *)0x3fe0000000000000;
                    psVar25 = (short *)((double)psVar25 * 0.5);
                    for (uVar27 = 1; uVar27 < uVar39; uVar27 = uVar27 + 1) {
                      dVar48 = (double)uVar27 / (double)uVar39;
                      dVar49 = 0.5;
                      if (dVar48 != 0.5) {
                        dVar49 = dVar48 + -0.5;
                        dVar49 = dVar48 + ((dVar42 * 0.215638 + -1.06021) * dVar42 + 0.848013 +
                                          dVar49 * dStack_590 * dVar49) *
                                          (dVar48 + -1.0) * dVar48 * dVar49;
                      }
                      dVar48 = (double)psVar50 * dVar49;
                      uStack_460 = (short *)((double)psVar52 * dVar49 +
                                            (double)psVar18 * (1.0 - dVar49));
                      psVar25 = (short *)(dVar48 + (double)psVar19 * (1.0 - dVar49));
                      psStack_458 = psVar25;
                      func_0x000107455d50();
                      psVar25 = (short *)(dVar54 * (double)psVar25);
                      psVar47 = (short *)(dVar54 * dVar48);
                      uStack_460 = psVar25;
                      psStack_458 = psVar47;
                      func_0x0001073dae0c(&uStack_4f0,&uStack_460);
                      FUN_10745574c(param_3 + 0xb0);
                      func_0x000107455d6c();
                      lVar30 = uVar29 + (extraout_x8_04 >> 3);
                      *(long *)(param_3 + 0x3c0) = lVar30;
                      if ((-1 < *(long *)(param_3 + 0x3b0)) && (-1 < *(long *)(lVar35 + 0x3b8))) {
                        FUN_1074548a8(&psStack_528);
                        lVar30 = *(long *)(lVar35 + 0x3c0);
                      }
                      plVar28 = plVar1;
                      if (0.0 < dVar45) {
                        plVar28 = (long *)(lVar35 + 0x3b8);
                      }
                      *plVar28 = lVar30;
                    }
                  }
                  if (bVar17) {
                    psVar25 = (short *)(double)-fVar15;
                    fVar46 = -fVar46;
                    func_0x000107455d78();
                    psVar47 = (short *)(double)fVar46;
                    uStack_448 = CONCAT71(uStack_448._1_7_,(char)iStack_584);
                    psStack_450 = unaff_d10;
                    func_0x000107455b2c();
                    func_0x000107455a58();
                    param_4 = puVar32;
                    goto LAB_107453df0;
                  }
                  bVar5 = true;
                  param_4 = puVar32;
                }
                else {
                  bVar5 = true;
                  if (uVar27 == 2) goto LAB_107453ecc;
                  if (uVar27 == 1) goto LAB_107453af0;
                }
                goto LAB_107453df4;
              }
              bVar5 = true;
              uVar39 = extraout_w8;
              if (extraout_w8 != 0) goto LAB_10745394c;
              goto LAB_107453ecc;
            }
            psVar25 = (short *)((double)psStack_540 * dVar42);
            psStack_538 = (short *)((double)psStack_538 * dVar42);
            psStack_540 = psVar25;
            func_0x000107455a18();
            func_0x000107455a38();
LAB_107453df0:
            bVar5 = true;
          }
LAB_107453df4:
          plVar23 = plStack_5b8;
          param_2 = psVar47;
          uVar39 = uVar9;
          if ((plVar38 < plStack_568) && (bVar20)) {
            psVar25 = (short *)(double)((int)sVar13 - (int)sVar16);
            func_0x000107455ac0(psVar25,(double)(((int)uVar40 >> 0x10) - iVar22));
            param_2 = psStack_5f0;
            if ((double)psStack_5f0 < (double)psVar25) {
              func_0x000107455b4c((int)(short)(sVar13 - sVar16));
              puVar26 = &uStack_460;
              func_0x000107454630();
              uVar27 = (int)puVar26 + uVar9;
              iVar3 = ((uint)((ulong)puVar26 >> 0x10) & 0xffff) + (uVar9 >> 0x10);
              uVar39 = uVar27 & 0xffff | iVar3 * 0x10000;
              psStack_550 = (short *)CONCAT44(psStack_550._4_4_,uVar39);
              dVar42 = (double)((int)sVar16 - (int)(short)uVar27);
              func_0x000107455ac0(dVar42,(double)(iVar22 - (short)iVar3));
              psVar25 = (short *)(dVar42 + (double)psStack_4e8);
              param_2 = psStack_4e8;
              psStack_4e8 = psVar25;
              func_0x000107455a18();
              func_0x000107455a38();
              uStack_4f0 = uVar39;
            }
          }
          dStack_590 = (double)((ulong)dStack_590 & 0xffffffff00000000);
          bVar20 = true;
          uVar27 = 1;
          plVar28 = plStack_5a0;
        }
      }
      func_0x000107455d6c();
      lVar34 = (extraout_x8_05 >> 3) - uStack_578;
      lVar30 = *(long *)(param_3 + 0xf0);
      if ((*(long *)(param_3 + 0xe8) == lVar30) ||
         (lVar37 = *(long *)(lVar30 + -0x18), psVar43 = psStack_528, psVar25 = psStack_520,
         0xffff < (ulong)(lVar37 + lVar34))) {
        uStack_460 = (short *)(*(long *)(param_3 + 0xd8) - *(long *)(param_3 + 0xd0) >> 1);
        FUN_1074420f0(param_3 + 0xe8);
        lVar30 = *(long *)(param_3 + 0xf0);
        lVar37 = *(long *)(lVar30 + -0x18);
        psVar43 = psStack_528;
        psVar25 = psStack_520;
      }
      for (; psVar50 = uStack_460, psVar43 != psVar25; psVar43 = psVar43 + 3) {
        sVar16 = (short)lVar37;
        uStack_460._6_2_ = SUB82(psVar50,6);
        uStack_460._0_6_ =
             CONCAT24(psVar43[2] + sVar16,CONCAT22(psVar43[1] + sVar16,*psVar43 + sVar16));
        func_0x000107309760(param_3 + 200);
      }
      *(long *)(lVar30 + -0x18) = *(long *)(lVar30 + -0x18) + lVar34;
      *(long *)(lVar30 + -0x10) =
           *(long *)(lVar30 + -0x10) + ((long)psStack_520 - (long)psStack_528 >> 1);
      func_0x0001074553a8(&psStack_528);
      func_0x000107267da8(auStack_2d0);
      func_0x000107267ed0(auStack_140);
      func_0x000107267ed0(auStack_f8);
      plVar38 = plStack_5a0;
    }
    func_0x000107267e44(&plStack_560);
    plVar38 = plVar38 + 3;
  } while( true );
}



/* Entry: 107454308; end: 10745454b;  */

void FUN_107454308(undefined8 *param_1)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000107455b7c(*param_1);
  (*extraout_x8)();
  func_0x000107455b7c(param_1[1]);
  func_0x000107455cac();
  func_0x000107455b7c(param_1[2]);
  func_0x000107455cac();
  func_0x000107455b7c(param_1[3]);
  func_0x000107455cac();
  func_0x000107455b7c(param_1[4]);
  func_0x000107455cac();
  func_0x000107455b7c(param_1[5]);
  (*extraout_x8_00)();
  func_0x000107455b7c(param_1[6]);
  func_0x000107455ba8();
  func_0x000107455d0c();
  func_0x000107455b7c(param_1[7]);
  func_0x000107455ba8();
  func_0x000107455d0c();
  func_0x000107455b7c(param_1[8]);
  func_0x000107455ba8();
                    /* WARNING: Could not recover jumptable at 0x000107454548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10745454c; end: 107454643;  */

bool FUN_10745454c(long param_1)

{
  param_1 = param_1 + 0x100;
  func_0x0001072a0454(param_1);
  return param_1 != 0;
}



/* Entry: 107454644; end: 10745486b;  */

void FUN_107454644(double param_1,double param_2,long param_3,undefined8 param_4,double *param_5,
                  undefined1 (*param_6) [16],undefined4 param_7,ulong param_8,undefined8 param_9,
                  undefined8 *param_10)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  
  dStack_78 = *(double *)(*param_6 + 8);
  dStack_80 = *(double *)*param_6;
  dVar6 = *param_5;
  if (*(char *)(param_10 + 3) == '\x01') {
    FUN_10745486c(param_10);
  }
  if (param_1 != 0.0) {
    auVar8 = NEON_ext(*param_6,*param_6,8,1);
    dStack_80 = dStack_80 + auVar8._0_8_ * param_1;
    dStack_78 = dStack_78 - auVar8._8_8_ * param_1;
  }
  func_0x0001073dae0c(param_4,&dStack_80,param_7,0,(int)param_1,(int)(dVar6 * 0.5));
  func_0x000107455d30();
  lVar4 = ~param_8 + (*(long *)(param_3 + 0xb8) - *(long *)(param_3 + 0xb0) >> 3);
  plVar1 = (long *)(param_3 + 0x3c0);
  *(long *)(param_3 + 0x3c0) = lVar4;
  plVar2 = (long *)(param_3 + 0x3b0);
  if ((-1 < *(long *)(param_3 + 0x3b0)) && (-1 < *(long *)(param_3 + 0x3b8))) {
    FUN_1074548a8(param_9,plVar2,param_3 + 0x3b8,plVar1);
    lVar4 = *plVar1;
  }
  *(undefined8 *)(param_3 + 0x3b0) = *(undefined8 *)(param_3 + 0x3b8);
  *(long *)(param_3 + 0x3b8) = lVar4;
  dVar7 = *(double *)*param_6;
  dStack_80 = -dVar7;
  dStack_78 = -*(double *)(*param_6 + 8);
  if (param_2 != 0.0) {
    dStack_80 = param_2 * *(double *)(*param_6 + 8) - dVar7;
    dStack_78 = dStack_78 - param_2 * dVar7;
  }
  plVar3 = (long *)(param_3 + 0x3b8);
  func_0x0001073dae0c(param_4,&dStack_80,param_7,1,(int)-param_2,(int)(dVar6 * 0.5));
  func_0x000107455d30();
  lVar4 = ~param_8 + (*(long *)(param_3 + 0xb8) - *(long *)(param_3 + 0xb0) >> 3);
  *(long *)(param_3 + 0x3c0) = lVar4;
  lVar5 = *(long *)(param_3 + 0x3b8);
  if ((-1 < *(long *)(param_3 + 0x3b0)) && (-1 < lVar5)) {
    FUN_1074548a8(param_9,plVar2,plVar3,plVar1);
    lVar5 = *plVar3;
    lVar4 = *plVar1;
  }
  *plVar2 = lVar5;
  *plVar3 = lVar4;
  if ((16384.0 < *param_5) && ((*(byte *)(param_10 + 3) & 1) == 0)) {
    *param_5 = 0.0;
    uStack_98 = param_10[1];
    uStack_a0 = *param_10;
    uStack_90 = param_10[2];
    uStack_88 = param_10[3];
    FUN_107454644(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,&uStack_a0);
  }
  return;
}



/* Entry: 10745486c; end: 1074548a7;  */

double FUN_10745486c(double param_1,double *param_2)

{
  param_1 = param_1 / param_2[2];
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
    param_1 = 0.0;
  }
  return (*param_2 + (param_2[1] - *param_2) * param_1) * 32767.0;
}



/* Entry: 1074548a8; end: 10745499f;  */

void FUN_1074548a8(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar24;
  undefined8 uVar25;
  undefined2 *puVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  uint uVar30;
  long *plVar31;
  uint uVar32;
  uint uVar33;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  long lStack_c8;
  undefined1 auStack_58 [16];
  undefined2 *puStack_48;
  long *plVar23;
  
  puVar26 = (undefined2 *)param_1[1];
  if (puVar26 < (undefined2 *)param_1[2]) {
    uVar25 = *param_3;
    uVar28 = *param_4;
    *puVar26 = (short)*param_2;
    puVar26[1] = (short)uVar25;
    puVar26[2] = (short)uVar28;
    puVar26 = puVar26 + 3;
  }
  else {
    uVar1 = ((long)puVar26 - *param_1) / 6 + 1;
    if (0x2aaaaaaaaaaaaaaa < uVar1) {
      FUN_1074552b8();
      bVar3 = *(byte *)((long)param_1 + 0x1c);
      if ((bVar3 & 1) == 0) {
        FUN_1073da3e8(param_2,0xac,1);
        FUN_1073da3e8(param_2,0xad,param_1[0x17] - param_1[0x16]);
        lVar24 = param_1[0x17] - param_1[0x16];
        (**(code **)(*param_2 + 0x40))(&lStack_f8,param_2,param_1[0x16],lVar24,1);
        uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
        lStack_e0 = 8;
        uStack_d8 = 1;
        lStack_c8 = lStack_f8;
        lStack_f0 = lVar24 >> 3;
        func_0x000107309708(param_1 + 0x24,&lStack_f0);
        lVar24 = lStack_c8;
        lStack_c8 = 0;
        if (lVar24 != 0) {
          func_0x000107455a70();
        }
        FUN_1073da574(&lStack_f0,param_2,param_1 + 0x19,1);
        func_0x000107309778(param_1 + 0x2b,&lStack_f0);
        lVar24 = lStack_e0;
        lStack_e0 = 0;
        if (lVar24 != 0) {
          func_0x000107455a70();
        }
      }
      uVar2 = bVar3 ^ 1;
      plVar31 = (long *)param_1[0x2f];
      while (uVar6 = param_1 + 0x30 <= plVar31, plVar31 != param_1 + 0x30) {
        if ((*(byte *)(plVar31 + 0x29) & 1) == 0) {
          lVar13 = plVar31[0xb];
          func_0x000107455a8c();
          plVar31[0x14] = lVar13;
          lVar14 = plVar31[0xc];
          func_0x000107455a8c();
          plVar31[0x15] = lVar14;
          lVar15 = plVar31[0xd];
          func_0x000107455a8c();
          plVar31[0x16] = lVar15;
          lVar16 = plVar31[0xe];
          func_0x000107455a8c();
          plVar31[0x17] = lVar16;
          lVar17 = plVar31[0xf];
          func_0x000107455a8c();
          plVar31[0x18] = lVar17;
          lVar18 = plVar31[0x10];
          func_0x000107455a8c();
          plVar31[0x19] = lVar18;
          lVar19 = plVar31[0x11];
          func_0x000107455a8c();
          plVar31[0x1a] = lVar19;
          lVar20 = plVar31[0x12];
          func_0x000107455a8c();
          plVar31[0x1b] = lVar20;
          lVar21 = plVar31[0x13];
          func_0x000107455a8c();
          lVar24 = 0;
          plVar31[0x1c] = lVar21;
          plVar31[0x1d] = 0;
          lVar27 = 8;
          plVar22 = plVar31 + 0x1e;
          do {
            lVar24 = plVar22[-10] + lVar24;
            *plVar22 = lVar24;
            lVar27 = lVar27 + -1;
            plVar22 = plVar22 + 1;
          } while (lVar27 != 0);
          lStack_f0 = 0;
          uStack_e8 = 0;
          lStack_e0 = 0;
          func_0x000100651cb4(&lStack_f0,
                              lVar14 + lVar13 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 +
                              lVar20 + lVar21);
          FUN_10744bd40(plVar31 + 0x26,&lStack_f0);
          func_0x000100100fec(&lStack_f0);
        }
        plVar22 = plVar31 + 0x26;
        FUN_10744bd74();
        plVar23 = plVar22;
        func_0x000107455c6c();
        uVar7 = (uint)plVar23;
        func_0x0001074558e0();
        uVar8 = uVar7;
        if ((plVar31[0x15] == 0) || (func_0x000107455cb4(plVar31[0x1e]), (bool)uVar6)) {
          uVar32 = 0;
        }
        else {
          uVar32 = (uint)plVar31[0xc];
          func_0x000107455ad0();
          uVar8 = uVar32;
        }
        func_0x000107455c6c();
        func_0x0001074558e0();
        uVar9 = uVar8;
        func_0x000107455c6c();
        func_0x0001074558e0();
        uVar10 = uVar9;
        if ((plVar31[0x18] == 0) || (func_0x000107455cb4(plVar31[0x21]), (bool)uVar6)) {
          uVar33 = 0;
        }
        else {
          uVar33 = (uint)plVar31[0xf];
          func_0x000107455ad0();
          uVar10 = uVar33;
        }
        func_0x000107455c6c();
        func_0x0001074558e0();
        uVar11 = uVar10;
        func_0x000107455c6c();
        func_0x0001074558e0();
        uVar12 = uVar11;
        if ((plVar31[0x1b] == 0) || (func_0x000107455cb4(plVar31[0x24]), (bool)uVar6)) {
          uVar30 = 0;
        }
        else {
          uVar30 = (uint)plVar31[0x12];
          func_0x000107455ad0();
          uVar12 = uVar30;
        }
        func_0x000107455c6c();
        func_0x0001074558e0();
        lVar24 = *plVar22;
        uVar8 = (uint)(lVar24 != plVar22[1]) &
                (uVar7 | uVar32 | uVar8 | uVar9 | uVar33 | uVar10 | uVar11 | uVar30 | uVar12);
        if (uVar8 == 1) {
          FUN_1073da4dc(&lStack_f0,param_2,lVar24,plVar22[1] - lVar24,1);
          func_0x000107309708(plVar31 + 0x2a,&lStack_f0);
          lVar24 = lStack_c8;
          lStack_c8 = 0;
          if (lVar24 != 0) {
            func_0x000107455a70();
          }
          iVar4 = *(int *)((long)plVar31 + 0x18c);
          *(int *)((long)plVar31 + 0x18c) = iVar4 + 1;
          *(int *)(plVar31 + 0x2e) = iVar4;
        }
        uVar2 = uVar2 | uVar8;
        func_0x00010002c7d4();
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
      }
      *(undefined1 *)((long)param_1 + 0x1c) = 1;
      return;
    }
    uVar5 = (param_1[2] - *param_1) / 6;
    uVar29 = uVar5 * 2;
    if (uVar29 < uVar1 || uVar29 - uVar1 == 0) {
      uVar29 = uVar1;
    }
    if (0x1555555555555554 < uVar5) {
      uVar29 = 0x2aaaaaaaaaaaaaaa;
    }
    func_0x0001074552fc(auStack_58,uVar29);
    uVar25 = *param_3;
    uVar28 = *param_4;
    *puStack_48 = (short)*param_2;
    puStack_48[1] = (short)uVar25;
    puStack_48[2] = (short)uVar28;
    puStack_48 = puStack_48 + 3;
    func_0x0001074552c4(param_1,auStack_58);
    puVar26 = (undefined2 *)param_1[1];
    FUN_107455368(auStack_58);
  }
  param_1[1] = (long)puVar26;
  return;
}



/* Entry: 1074549a0; end: 107454dc7;  */

void FUN_1074549a0(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_68;
  long *plVar21;
  
  bVar2 = *(byte *)(param_1 + 0x1c);
  if ((bVar2 & 1) == 0) {
    FUN_1073da3e8(param_2,0xac,1);
    FUN_1073da3e8(param_2,0xad,*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0));
    lVar22 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0);
    (**(code **)(*param_2 + 0x40))(&lStack_98,param_2,*(long *)(param_1 + 0xb0),lVar22,1);
    uStack_88 = CONCAT71(uStack_88._1_7_,1);
    lStack_80 = 8;
    uStack_78 = 1;
    lStack_68 = lStack_98;
    lStack_90 = lVar22 >> 3;
    func_0x000107309708(param_1 + 0x120,&lStack_90);
    lVar22 = lStack_68;
    lStack_68 = 0;
    if (lVar22 != 0) {
      func_0x000107455a70();
    }
    FUN_1073da574(&lStack_90,param_2,param_1 + 200,1);
    func_0x000107309778(param_1 + 0x158,&lStack_90);
    lVar22 = lStack_80;
    lStack_80 = 0;
    if (lVar22 != 0) {
      func_0x000107455a70();
    }
  }
  uVar1 = bVar2 ^ 1;
  uVar25 = *(ulong *)(param_1 + 0x178);
  while (uVar4 = param_1 + 0x180U <= uVar25, uVar25 != param_1 + 0x180U) {
    if ((*(byte *)(uVar25 + 0x148) & 1) == 0) {
      lVar11 = *(long *)(uVar25 + 0x58);
      func_0x000107455a8c();
      *(long *)(uVar25 + 0xa0) = lVar11;
      lVar12 = *(long *)(uVar25 + 0x60);
      func_0x000107455a8c();
      *(long *)(uVar25 + 0xa8) = lVar12;
      lVar13 = *(long *)(uVar25 + 0x68);
      func_0x000107455a8c();
      *(long *)(uVar25 + 0xb0) = lVar13;
      lVar14 = *(long *)(uVar25 + 0x70);
      func_0x000107455a8c();
      *(long *)(uVar25 + 0xb8) = lVar14;
      lVar15 = *(long *)(uVar25 + 0x78);
      func_0x000107455a8c();
      *(long *)(uVar25 + 0xc0) = lVar15;
      lVar16 = *(long *)(uVar25 + 0x80);
      func_0x000107455a8c();
      *(long *)(uVar25 + 200) = lVar16;
      lVar17 = *(long *)(uVar25 + 0x88);
      func_0x000107455a8c();
      *(long *)(uVar25 + 0xd0) = lVar17;
      lVar18 = *(long *)(uVar25 + 0x90);
      func_0x000107455a8c();
      *(long *)(uVar25 + 0xd8) = lVar18;
      lVar19 = *(long *)(uVar25 + 0x98);
      func_0x000107455a8c();
      lVar22 = 0;
      *(long *)(uVar25 + 0xe0) = lVar19;
      *(undefined8 *)(uVar25 + 0xe8) = 0;
      lVar23 = 8;
      plVar20 = (long *)(uVar25 + 0xf0);
      do {
        lVar22 = plVar20[-10] + lVar22;
        *plVar20 = lVar22;
        lVar23 = lVar23 + -1;
        plVar20 = plVar20 + 1;
      } while (lVar23 != 0);
      lStack_90 = 0;
      uStack_88 = 0;
      lStack_80 = 0;
      func_0x000100651cb4(&lStack_90,
                          lVar12 + lVar11 + lVar13 + lVar14 + lVar15 + lVar16 + lVar17 +
                          lVar18 + lVar19);
      FUN_10744bd40(uVar25 + 0x130,&lStack_90);
      func_0x000100100fec(&lStack_90);
    }
    plVar20 = (long *)(uVar25 + 0x130);
    FUN_10744bd74();
    plVar21 = plVar20;
    func_0x000107455c6c();
    uVar5 = (uint)plVar21;
    func_0x0001074558e0();
    uVar6 = uVar5;
    if ((*(long *)(uVar25 + 0xa8) == 0) ||
       (func_0x000107455cb4(*(undefined8 *)(uVar25 + 0xf0)), (bool)uVar4)) {
      uVar26 = 0;
    }
    else {
      uVar26 = (uint)*(undefined8 *)(uVar25 + 0x60);
      func_0x000107455ad0();
      uVar6 = uVar26;
    }
    func_0x000107455c6c();
    func_0x0001074558e0();
    uVar7 = uVar6;
    func_0x000107455c6c();
    func_0x0001074558e0();
    uVar8 = uVar7;
    if ((*(long *)(uVar25 + 0xc0) == 0) ||
       (func_0x000107455cb4(*(undefined8 *)(uVar25 + 0x108)), (bool)uVar4)) {
      uVar27 = 0;
    }
    else {
      uVar27 = (uint)*(undefined8 *)(uVar25 + 0x78);
      func_0x000107455ad0();
      uVar8 = uVar27;
    }
    func_0x000107455c6c();
    func_0x0001074558e0();
    uVar9 = uVar8;
    func_0x000107455c6c();
    func_0x0001074558e0();
    uVar10 = uVar9;
    if ((*(long *)(uVar25 + 0xd8) == 0) ||
       (func_0x000107455cb4(*(undefined8 *)(uVar25 + 0x120)), (bool)uVar4)) {
      uVar24 = 0;
    }
    else {
      uVar24 = (uint)*(undefined8 *)(uVar25 + 0x90);
      func_0x000107455ad0();
      uVar10 = uVar24;
    }
    func_0x000107455c6c();
    func_0x0001074558e0();
    lVar22 = *plVar20;
    uVar6 = (uint)(lVar22 != plVar20[1]) &
            (uVar5 | uVar26 | uVar6 | uVar7 | uVar27 | uVar8 | uVar9 | uVar24 | uVar10);
    if (uVar6 == 1) {
      FUN_1073da4dc(&lStack_90,param_2,lVar22,plVar20[1] - lVar22,1);
      func_0x000107309708(uVar25 + 0x150,&lStack_90);
      lVar22 = lStack_68;
      lStack_68 = 0;
      if (lVar22 != 0) {
        func_0x000107455a70();
      }
      iVar3 = *(int *)(uVar25 + 0x18c);
      *(int *)(uVar25 + 0x18c) = iVar3 + 1;
      *(int *)(uVar25 + 0x170) = iVar3;
    }
    uVar1 = uVar1 | uVar6;
    func_0x00010002c7d4();
  }
  if ((uVar1 & 1) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}



/* Entry: 107454dc8; end: 107454eb3;  */

long FUN_107454dc8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong auStack_40 [2];
  
  puVar3 = auStack_40;
  (**(code **)(*(long *)*param_2 + 0x38))(auStack_40);
  FUN_107330078();
  lVar6 = 0;
  uVar2 = puVar3[1];
  for (uVar7 = *puVar3; uVar7 != uVar2; uVar7 = uVar7 + 0x18) {
    uVar4 = uVar7;
    func_0x000107454554();
    uVar5 = uVar7;
    func_0x000107454598(uVar7,uVar4);
    uVar1 = 0;
    if (uVar5 <= uVar4) {
      uVar1 = uVar4 - uVar5;
    }
    lVar6 = lVar6 + uVar1 * 4 + (uVar1 & 0x3fffffffffffffff) * 2;
  }
  return lVar6;
}



/* Entry: 107454eb4; end: 107454ecb;  */

/* WARNING: Possible PIC construction at 0x00010730ba1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010730ba34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010730ba20) */
/* WARNING: Removing unreachable block (ram,0x00010730ba38) */

void FUN_107454eb4(long param_1,long param_2)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [5];
  
  puVar3 = (undefined8 *)(((param_2 + 2U) / 3) * 3);
  plVar2 = (long *)(param_1 + 8);
  ppuVar1 = (undefined1 **)auStack_50;
  if (puVar3 <= (undefined8 *)(*(long *)(param_1 + 0x18) - *plVar2 >> 1)) {
    return;
  }
  if ((long)puVar3 < 0) {
    ppuVar1 = &puStack_60;
    ppuVar5 = &puStack_60;
    puStack_58 = &UNK_10730ba38;
    puVar6 = &SUB_10730ba50;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010730cba8();
  }
  else {
    func_0x00010730babc(auStack_48,puVar3,*(long *)(param_1 + 0x10) - *plVar2 >> 1);
    puVar3 = auStack_48;
    puVar6 = &UNK_10730ba20;
    unaff_x19 = plVar2;
    ppuVar5 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
  *(long **)((long)ppuVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar5;
  *(undefined **)((long)ppuVar1 + -8) = puVar6;
  func_0x00010730ca84(puVar3[1]);
  puVar3[1] = unaff_x21;
  lVar4 = *plVar2;
  plVar2[1] = lVar4;
  *plVar2 = puVar3[1];
  puVar3[1] = lVar4;
  lVar4 = plVar2[1];
  plVar2[1] = puVar3[2];
  puVar3[2] = lVar4;
  lVar4 = plVar2[2];
  plVar2[2] = puVar3[3];
  puVar3[3] = lVar4;
  *puVar3 = puVar3[1];
  return;
}



/* Entry: 107454ecc; end: 107454f3f;  */

void FUN_107454ecc(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107455c88();
  (**(code **)(*(long *)*param_1 + 0x70))();
  func_0x000107455a7c(*(undefined8 *)(unaff_x20 + 8));
  func_0x000107455a7c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107455a7c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107455a7c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107455a7c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107455a7c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107455a7c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000107454f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 0x40) + 0x70))();
  return;
}



/* Entry: 107454f40; end: 107454f4f;  */

bool FUN_107454f40(long param_1)

{
  return *(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0);
}



/* Entry: 107454f50; end: 107455067;  */

float FUN_107454f50(float param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = *(long *)(param_3 + 8);
  lVar2 = param_2 + 0x178;
  FUN_107455994(lVar2,*(long *)(param_3 + 0x18) + 8);
  param_2 = param_2 + 0x180;
  bVar1 = param_2 == lVar2;
  if ((bVar1) || ((*(byte *)(*(long *)(lVar2 + 0x80) + 0x10) & 1) == 0)) {
    func_0x000107455aa4(*(undefined4 *)(lVar3 + 0x1b8));
    fVar6 = 0.0;
    if (!bVar1) {
      fVar6 = param_1;
    }
  }
  else {
    fVar6 = *(float *)(*(long *)(lVar2 + 0x80) + 0xc);
  }
  func_0x000107455c5c();
  bVar1 = param_2 == lVar2;
  if ((bVar1) || ((*(byte *)(*(long *)(lVar2 + 0x98) + 0x10) & 1) == 0)) {
    func_0x000107455aa4(*(undefined4 *)(lVar3 + 0x308));
    fVar7 = 1.0;
    if (!bVar1) {
      fVar7 = param_1;
    }
  }
  else {
    fVar7 = *(float *)(*(long *)(lVar2 + 0x98) + 0xc);
  }
  func_0x000107455c5c();
  bVar1 = param_2 == lVar2;
  if ((bVar1) || ((*(byte *)(*(long *)(lVar2 + 0x70) + 0x10) & 1) == 0)) {
    func_0x000107455aa4(*(undefined4 *)(lVar3 + 0x130));
    fVar4 = 0.0;
    if (!bVar1) {
      fVar4 = param_1;
    }
  }
  else {
    fVar4 = *(float *)(*(long *)(lVar2 + 0x70) + 0xc);
  }
  fVar5 = fVar4 + fVar7 * 2.0;
  if (fVar4 == 0.0) {
    fVar5 = fVar7;
  }
  return ABS(fVar6) + fVar5 * 0.5 +
         SQRT(*(float *)(lVar3 + 0x2cc) * *(float *)(lVar3 + 0x2cc) +
              *(float *)(lVar3 + 0x2c8) * *(float *)(lVar3 + 0x2c8));
}



/* Entry: 107455068; end: 107455227;  */

undefined1  [16] FUN_107455068(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_1a8 [4];
  int iStack_1a4;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [32];
  undefined1 uStack_170;
  undefined8 auStack_168 [23];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  puVar5 = param_2;
  puVar6 = param_3;
  func_0x000107455cc4();
  puVar9 = (undefined8 *)puVar6[10];
  puVar1 = puVar5 + 0x30;
  puVar8 = puVar1;
  puVar10 = puVar1;
  uStack_68 = extraout_x8;
  while (puVar11 = (undefined8 *)*puVar8, puVar11 != (undefined8 *)0x0) {
    puVar5 = puVar11 + 4;
    puVar6 = puVar9;
    func_0x000104c2fc44(puVar5,puVar9);
    bVar3 = (int)puVar5 == 0;
    lVar2 = 8;
    if (bVar3) {
      lVar2 = 0;
    }
    puVar8 = (undefined8 *)((long)puVar11 + lVar2);
    if (bVar3) {
      puVar10 = puVar11;
    }
  }
  uVar4 = puVar1 == puVar10;
  if (!(bool)uVar4) {
    puVar6 = puVar10 + 4;
    func_0x000104c2fc44(puVar9,puVar6);
    puVar5 = puVar9;
    if (((ulong)puVar9 & 1) == 0) {
      FUN_1074400f8(auStack_168,param_3);
      auStack_190[0] = 0;
      uStack_170 = 0;
      func_0x000107455b88(puVar10[0xb]);
      func_0x000107455a98(auStack_b0);
      func_0x000107455b88(puVar10[0xc]);
      func_0x000107455a98(auStack_a8);
      func_0x000107455b88(puVar10[0xd]);
      func_0x000107455a98(auStack_a0);
      func_0x000107455b88(puVar10[0xe]);
      func_0x000107455a98(auStack_98);
      func_0x000107455b88(puVar10[0xf]);
      func_0x000107455a98(auStack_90);
      func_0x000107455b88(puVar10[0x10]);
      func_0x000107455a98(auStack_88);
      func_0x000107455b88(puVar10[0x11]);
      func_0x000107455a98(auStack_80);
      func_0x000107455b88(puVar10[0x12]);
      func_0x000107455a98(auStack_78);
      func_0x000107455b88(puVar10[0x13]);
      func_0x000107455a98(auStack_70);
      uStack_198 = 9;
      puStack_1a0 = auStack_b0;
      func_0x00010744be14(auStack_1a8,&puStack_1a0);
      FUN_1074434e4(auStack_190);
      puVar5 = auStack_168;
      func_0x000107443538();
      if (iStack_1a4 == 0) {
        *(undefined1 *)((long)param_2 + 0x1c) = 0;
        uVar7 = 0;
        goto LAB_1074551c8;
      }
    }
  }
  uVar7 = 1;
LAB_1074551c8:
  *(undefined4 *)(param_1 + 4) = uVar7;
  func_0x000107455b94(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000107455bf4();
    return *(undefined1 (*) [16])(puVar5 + 0x81);
  }
  auVar12._8_8_ = puVar6;
  auVar12._0_8_ = puVar5;
  return auVar12;
}



/* Entry: 107455228; end: 107455237;  */

undefined1  [16] FUN_107455228(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x408);
}



/* Entry: 107455238; end: 10745529f;  */

long FUN_107455238(long param_1)

{
  long lVar1;
  
  lVar1 = 0xa0;
  do {
    func_0x0001073bc770(param_1 + lVar1);
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != -0x28);
  return param_1;
}



/* Entry: 1074552a0; end: 1074552b7;  */

void FUN_1074552a0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074552b8; end: 1074552c3;  */

void FUN_1074552b8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  func_0x000107455d18();
  func_0x000107455c88();
  func_0x000107455d58(*(undefined8 *)(param_2 + 8));
  _memcpy(extraout_x8 + extraout_x9 * extraout_x10);
  func_0x000107455ae8();
  return;
}



/* Entry: 1074552c4; end: 107455367;  */

void FUN_1074552c4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  func_0x000107455c88();
  func_0x000107455d58(*(undefined8 *)(param_2 + 8));
  _memcpy(extraout_x8 + extraout_x9 * extraout_x10);
  func_0x000107455ae8();
  return;
}



/* Entry: 107455368; end: 107455633;  */

long * FUN_107455368(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -6;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107455634; end: 10745564b;  */

void FUN_107455634(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10745564c; end: 10745568f;  */

long * FUN_10745564c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010745543c(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 107455690; end: 107455707;  */

long * FUN_107455690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x000107455c88();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000104c2fc44(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000104c2fc44(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_1074556f8;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_1074556f8;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_1074556f8:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 107455708; end: 10745574b;  */

long * FUN_107455708(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010745555c(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10745574c; end: 10745580b;  */

void FUN_10745574c(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = param_1 + 2;
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)*plVar6) {
    plVar6 = plVar4 + 1;
    *plVar4 = param_2;
  }
  else {
    lVar5 = (long)plVar4 - *param_1;
    uVar1 = (lVar5 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_107455844();
      func_0x000107455c94();
      func_0x000107455bf4();
      func_0x000107455c88();
      _memcpy(*(long *)(param_2 + 8) - (plVar6[1] - *plVar6));
      func_0x000107455ae8();
      return;
    }
    uVar2 = *plVar6 - *param_1;
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      FUN_107455850();
    }
    *(long *)((long)plVar6 + lVar5) = param_2;
    func_0x000107455d24();
    plVar6 = (long *)param_1[1];
    func_0x000107455c94();
  }
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10745580c; end: 107455843;  */

void FUN_10745580c(long *param_1,long param_2)

{
  func_0x000107455c88();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x000107455ae8();
  return;
}



/* Entry: 107455844; end: 10745584f;  */

void FUN_107455844(void)

{
  func_0x000107455d18();
  FUN_107455874();
  return;
}



/* Entry: 107455850; end: 107455873;  */

void FUN_107455850(void)

{
  FUN_107455874();
  return;
}



/* Entry: 107455874; end: 10745588f;  */

long * FUN_107455874(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1074558bc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107455890; end: 1074558bb;  */

long * FUN_107455890(long *param_1)

{
  FUN_1074558bc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074558bc; end: 10745591b;  */

void FUN_1074558bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10745591c; end: 107455993;  */

long * FUN_10745591c(long *param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = param_1 + 2;
  if ((ulong)(*plVar3 - *param_1 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_107455844();
      func_0x000107455c94();
      func_0x000107455bf4();
      plVar3 = plVar3 + 1;
      plVar4 = plVar3;
      plVar5 = plVar3;
      while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        plVar4 = plVar6 + 4;
        func_0x000104c2fc44(plVar4,param_2);
        bVar2 = (int)plVar4 == 0;
        lVar1 = 8;
        if (bVar2) {
          lVar1 = 0;
        }
        plVar4 = (long *)((long)plVar6 + lVar1);
        if (bVar2) {
          plVar5 = plVar6;
        }
      }
      if ((plVar3 == plVar5) || (func_0x000104c2fc44(param_2,plVar5 + 4), (int)param_2 != 0)) {
        plVar5 = plVar3;
      }
      return plVar5;
    }
    FUN_107455850();
    func_0x000107455d24();
    func_0x000107455c94();
  }
  return plVar3;
}



/* Entry: 107455994; end: 107455a17;  */

long * FUN_107455994(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    lVar3 = (long)(plVar6 + 4);
    func_0x000104c2fc44(lVar3,param_2);
    bVar2 = (int)lVar3 == 0;
    lVar3 = 8;
    if (bVar2) {
      lVar3 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar3);
    if (bVar2) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (func_0x000104c2fc44(param_2,plVar5 + 4), (int)param_2 != 0)) {
    plVar5 = plVar1;
  }
  return plVar5;
}



/* Entry: 107455a18; end: 107455d97;  */

void FUN_107455a18(void)

{
  return;
}



/* Entry: 107455d98; end: 107455eb3;  */

undefined8 *
FUN_107455d98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109ace68;
  param_1[1] = 0;
  do {
    iVar1 = iRam00000001131ad780 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam00000001131ad780 = iVar1;
    }
  } while (cVar2 != '\0');
  *(int *)(param_1 + 3) = iVar1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1109b1e68;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = &UNK_10e52b660;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  do {
    iVar1 = iRam00000001131ad780 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x1131ad780,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam00000001131ad780 = iVar1;
    }
  } while (cVar2 != '\0');
  *(int *)(param_1 + 0xc) = iVar1;
  func_0x000104c2fe00(param_1 + 0xd);
  func_0x000104c2fe00(param_1 + 0x14,param_3);
  func_0x000104c2fe00(param_1 + 0x1b,param_4);
  lVar4 = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)param_5;
  *(undefined2 *)((long)param_1 + 0x112) = 0;
  uVar5 = *param_5;
  *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)((long)param_1 + 0x114) = uVar5;
  do {
    *(undefined1 *)((long)param_1 + lVar4 + 0x120) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0x128) = 0;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  lVar4 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar4 + 0x150) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0x158) = 0;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  return param_1;
}



/* Entry: 107455eb4; end: 107455efb;  */

undefined8 * FUN_107455eb4(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x1b);
  func_0x000104c2f714(param_1 + 0x14);
  func_0x000104c2f714(param_1 + 0xd);
  func_0x000107261dac(param_1 + 8);
  func_0x0001073f17cc(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 107455efc; end: 107455eff;  */

undefined8 * FUN_107455efc(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 0x1b);
  func_0x000104c2f714(param_1 + 0x14);
  func_0x000104c2f714(param_1 + 0xd);
  func_0x000107261dac(param_1 + 8);
  func_0x0001073f17cc(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 107455f00; end: 107455f13;  */

void FUN_107455f00(void)

{
  FUN_107455eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107455f14; end: 107455f27;  */

bool FUN_107455f14(long param_1)

{
  return *(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30);
}



/* Entry: 107455f28; end: 107455f77;  */

void FUN_107455f28(long param_1,long *param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10745603c(param_1 + 0x28);
  if (*(char *)(*param_2 + 0x50) == '\x01') {
    FUN_107455f78(auStack_38,param_1 + 0x40,*param_2 + 0x18);
  }
  return;
}



/* Entry: 107455f78; end: 107455f9b;  */

void FUN_107455f78(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10745616c(&uStack_18);
  return;
}



/* Entry: 107455f9c; end: 107455fa3;  */

bool FUN_107455f9c(long param_1)

{
  param_1 = param_1 + 0x40;
  func_0x0001072a0454(param_1);
  return param_1 != 0;
}



/* Entry: 107455fa4; end: 10745602f;  */

void FUN_107455fa4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (*(char *)(param_3 + 0x68) == '\x01') {
    plVar1 = *(long **)(param_2 + 0x30);
    for (plVar5 = *(long **)(param_2 + 0x28); plVar5 != plVar1; plVar5 = plVar5 + 2) {
      uVar6 = *(ulong *)(*(long *)(*plVar5 + 0x158) + 0x10);
      puVar2 = (ulong *)(param_3 + 0x60);
      func_0x000107267f8c();
      if (uVar6 < *puVar2) {
        puVar3 = (undefined8 *)(param_3 + 0x60);
        func_0x000107267f8c();
        *(undefined8 *)(*(long *)(*plVar5 + 0x158) + 0x10) = *puVar3;
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  return;
}



/* Entry: 107456030; end: 10745603b;  */

undefined1  [16] FUN_107456030(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x110);
}



/* Entry: 10745603c; end: 10745607b;  */

long FUN_10745603c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10745607c();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_1074560b0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 10745607c; end: 1074560af;  */

void FUN_10745607c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
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
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 1074560b0; end: 10745616b;  */

long FUN_1074560b0(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar3 = param_1;
  FUN_1073f1378(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_1073f13fc(auStack_48,plVar3,param_1[1] - *param_1 >> 4,param_1 + 2);
  lVar4 = param_2[1];
  uVar5 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar5;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_38 = puStack_38 + 2;
  FUN_1073f13b8(param_1,auStack_48);
  lVar4 = param_1[1];
  FUN_1073f1480(auStack_48);
  return lVar4;
}



/* Entry: 10745616c; end: 107456173;  */

void FUN_10745616c(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_2;
  uVar3 = param_3;
  func_0x00010726297c();
  if ((uVar3 & 1) != 0) {
    FUN_1074561dc(*param_2,lVar2,param_3);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107456174; end: 1074561db;  */

void FUN_107456174(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x00010726297c();
  if ((param_3 & 1) != 0) {
    FUN_1074561dc(*param_2,lVar2,param_4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 1074561dc; end: 1074561ff;  */

void FUN_1074561dc(long param_1,long param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(*(long *)(param_1 + 8) + param_2 * 0x38,param_3);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107456200; end: 107456297;  */

undefined8 * FUN_107456200(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined4 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x0001074574f8();
  do {
    func_0x000107457598();
  } while (extraout_w10 != 0);
  func_0x000107457564();
  FUN_107456ccc(unaff_x19 + 5,param_2);
  *(undefined1 *)(unaff_x19 + 7) = 0;
  *(undefined1 *)(unaff_x19 + 0xf) = 0;
  *(undefined1 *)(unaff_x19 + 0x10) = 0;
  *(undefined1 *)(unaff_x19 + 0x13) = 0;
  func_0x00010745754c(unaff_x19 + 0x14);
  func_0x000107457494();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074575d8();
    func_0x00010725b590(unaff_x19 + 7);
    FUN_107456e48(unaff_x19 + 5);
    func_0x0001074575e4();
    __Unwind_Resume();
    func_0x0001074574f8();
    do {
      func_0x000107457598();
    } while (extraout_w10_00 != 0);
    *(undefined4 *)(unaff_x19 + 3) = extraout_w9;
    *(undefined1 *)((long)unaff_x19 + 0x1c) = 0;
    *(undefined4 *)(unaff_x19 + 4) = 0;
    *unaff_x19 = &PTR_FUN_1109b1f08;
    unaff_x19[5] = 0;
    unaff_x19[6] = 0;
    FUN_1073c9e88(unaff_x19 + 7);
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
    *(undefined1 *)(unaff_x19 + 0x13) = 0;
    func_0x00010745754c(unaff_x19 + 0x14);
    func_0x000107457494();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001074575d8();
      func_0x00010725b590(unaff_x19 + 7);
      FUN_107456e48(unaff_x19 + 5);
      func_0x0001074575e4();
      __Unwind_Resume();
      func_0x0001074574f8();
      do {
        func_0x000107457598();
      } while (extraout_w10_01 != 0);
      func_0x000107457564();
      uVar2 = *param_2;
      unaff_x19[6] = param_2[1];
      unaff_x19[5] = uVar2;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(unaff_x19 + 0x10) = 0;
      *(undefined1 *)(unaff_x19 + 7) = 0;
      *(undefined1 *)(unaff_x19 + 0xf) = 0;
      *(undefined1 *)(unaff_x19 + 0x13) = 0;
      puVar1 = unaff_x19 + 0x14;
      func_0x00010745754c();
      func_0x000107457494();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        FUN_107440dd8(unaff_x19 + 0x10);
        func_0x00010725b590(unaff_x19 + 7);
        FUN_107456e48(unaff_x19 + 5);
        func_0x0001074575e4();
        __Unwind_Resume();
        func_0x00010730b10c(puVar1 + 0x2b);
        func_0x00010730b13c(puVar1 + 0x24);
        FUN_1073eb118(puVar1 + 0x21);
        FUN_1073eb118(puVar1 + 0x1e);
        func_0x00010730b05c(puVar1 + 0x1b);
        FUN_107456be8(puVar1 + 0x17);
        FUN_1074571e4(puVar1 + 0x14);
        FUN_107440dd8(puVar1 + 0x10);
        func_0x00010725b590(puVar1 + 7);
        FUN_107456e48(puVar1 + 5);
        *puVar1 = &PTR_DAT_1109ace68;
        func_0x0001073b4ef8(puVar1 + 1);
        return puVar1;
      }
      return unaff_x19;
    }
  }
  return unaff_x19;
}



/* Entry: 107456298; end: 107456337;  */

undefined8 * FUN_107456298(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined4 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x0001074574f8();
  do {
    func_0x000107457598();
  } while (extraout_w10 != 0);
  *(undefined4 *)(unaff_x19 + 3) = extraout_w9;
  *(undefined1 *)((long)unaff_x19 + 0x1c) = 0;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  *unaff_x19 = &PTR_FUN_1109b1f08;
  unaff_x19[5] = 0;
  unaff_x19[6] = 0;
  FUN_1073c9e88(unaff_x19 + 7);
  *(undefined1 *)(unaff_x19 + 0x10) = 0;
  *(undefined1 *)(unaff_x19 + 0x13) = 0;
  func_0x00010745754c(unaff_x19 + 0x14);
  func_0x000107457494();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001074575d8();
  func_0x00010725b590(unaff_x19 + 7);
  FUN_107456e48(unaff_x19 + 5);
  func_0x0001074575e4();
  __Unwind_Resume();
  func_0x0001074574f8();
  do {
    func_0x000107457598();
  } while (extraout_w10_00 != 0);
  func_0x000107457564();
  uVar2 = *param_2;
  unaff_x19[6] = param_2[1];
  unaff_x19[5] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(unaff_x19 + 0x10) = 0;
  *(undefined1 *)(unaff_x19 + 7) = 0;
  *(undefined1 *)(unaff_x19 + 0xf) = 0;
  *(undefined1 *)(unaff_x19 + 0x13) = 0;
  puVar1 = unaff_x19 + 0x14;
  func_0x00010745754c();
  func_0x000107457494();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  FUN_107440dd8(unaff_x19 + 0x10);
  func_0x00010725b590(unaff_x19 + 7);
  FUN_107456e48(unaff_x19 + 5);
  func_0x0001074575e4();
  __Unwind_Resume();
  func_0x00010730b10c(puVar1 + 0x2b);
  func_0x00010730b13c(puVar1 + 0x24);
  FUN_1073eb118(puVar1 + 0x21);
  FUN_1073eb118(puVar1 + 0x1e);
  func_0x00010730b05c(puVar1 + 0x1b);
  FUN_107456be8(puVar1 + 0x17);
  FUN_1074571e4(puVar1 + 0x14);
  FUN_107440dd8(puVar1 + 0x10);
  func_0x00010725b590(puVar1 + 7);
  FUN_107456e48(puVar1 + 5);
  *puVar1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(puVar1 + 1);
  return puVar1;
}



/* Entry: 107456338; end: 1074563e7;  */

undefined8 * FUN_107456338(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x0001074574f8();
  do {
    func_0x000107457598();
  } while (extraout_w10 != 0);
  func_0x000107457564();
  uVar2 = *param_2;
  unaff_x19[6] = param_2[1];
  unaff_x19[5] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(unaff_x19 + 0x10) = 0;
  *(undefined1 *)(unaff_x19 + 7) = 0;
  *(undefined1 *)(unaff_x19 + 0xf) = 0;
  *(undefined1 *)(unaff_x19 + 0x13) = 0;
  puVar1 = unaff_x19 + 0x14;
  func_0x00010745754c();
  func_0x000107457494();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  FUN_107440dd8(unaff_x19 + 0x10);
  func_0x00010725b590(unaff_x19 + 7);
  FUN_107456e48(unaff_x19 + 5);
  func_0x0001074575e4();
  __Unwind_Resume();
  func_0x00010730b10c(puVar1 + 0x2b);
  func_0x00010730b13c(puVar1 + 0x24);
  FUN_1073eb118(puVar1 + 0x21);
  FUN_1073eb118(puVar1 + 0x1e);
  func_0x00010730b05c(puVar1 + 0x1b);
  FUN_107456be8(puVar1 + 0x17);
  FUN_1074571e4(puVar1 + 0x14);
  FUN_107440dd8(puVar1 + 0x10);
  func_0x00010725b590(puVar1 + 7);
  FUN_107456e48(puVar1 + 5);
  *puVar1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(puVar1 + 1);
  return puVar1;
}



/* Entry: 1074563e8; end: 107456457;  */

undefined8 * FUN_1074563e8(undefined8 *param_1)

{
  func_0x00010730b10c(param_1 + 0x2b);
  func_0x00010730b13c(param_1 + 0x24);
  FUN_1073eb118(param_1 + 0x21);
  FUN_1073eb118(param_1 + 0x1e);
  func_0x00010730b05c(param_1 + 0x1b);
  FUN_107456be8(param_1 + 0x17);
  FUN_1074571e4(param_1 + 0x14);
  FUN_107440dd8(param_1 + 0x10);
  func_0x00010725b590(param_1 + 7);
  FUN_107456e48(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 107456458; end: 10745645b;  */

undefined8 * FUN_107456458(undefined8 *param_1)

{
  func_0x00010730b10c(param_1 + 0x2b);
  func_0x00010730b13c(param_1 + 0x24);
  FUN_1073eb118(param_1 + 0x21);
  FUN_1073eb118(param_1 + 0x1e);
  func_0x00010730b05c(param_1 + 0x1b);
  FUN_107456be8(param_1 + 0x17);
  FUN_1074571e4(param_1 + 0x14);
  FUN_107440dd8(param_1 + 0x10);
  func_0x00010725b590(param_1 + 7);
  FUN_107456e48(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 10745645c; end: 10745646f;  */

void FUN_10745645c(void)

{
  FUN_1074563e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107456470; end: 10745663b;  */

void FUN_107456470(long param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_48;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x0001074575f8();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    if ((*(byte *)(unaff_x19 + 0x98) & 1) != 0) goto LAB_107456550;
    if ((*(byte *)(unaff_x19 + 0x78) & 1) == 0) {
      return;
    }
LAB_107456510:
    uStack_34 = 0;
    uStack_38 = 0;
    FUN_1073da708(&uStack_70);
    func_0x0001074575a8();
    func_0x0001074575ec();
    if (unaff_x20 != 0) {
      func_0x000107457540();
    }
    FUN_107456660(unaff_x19 + 0x38);
LAB_107456548:
    bVar1 = true;
  }
  else {
    if ((*(byte *)(unaff_x19 + 0x98) & 1) == 0) {
      FUN_1074344b4();
      if ((int)lVar2 != 0) {
        uStack_34 = 0;
        uStack_38 = 0;
        FUN_107432024(&uStack_70);
        func_0x0001074575a8();
        func_0x0001074575ec();
        if (unaff_x20 != 0) {
          func_0x000107457540();
        }
        uStack_68 = *(undefined8 *)(unaff_x19 + 0x30);
        uStack_70 = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
        *(undefined8 *)(unaff_x19 + 0x30) = 0;
        FUN_107456e48(&uStack_70);
        goto LAB_107456548;
      }
      if (*(char *)(unaff_x19 + 0x78) == '\x01') goto LAB_107456510;
    }
LAB_107456550:
    bVar1 = false;
  }
  if (*(long *)(unaff_x19 + 0xb8) == *(long *)(unaff_x19 + 0xc0)) {
    if (*(long *)(unaff_x19 + 0xd8) != *(long *)(unaff_x19 + 0xe0)) goto LAB_1074565ac;
    if (!bVar1) goto LAB_1074565e4;
  }
  else {
    FUN_107456684(&uStack_70);
    func_0x000107309708(unaff_x19 + 0x120,&uStack_70);
    lVar2 = lStack_48;
    lStack_48 = 0;
    if (lVar2 != 0) {
      func_0x000107457540();
    }
    if (*(long *)(unaff_x19 + 0xd8) != *(long *)(unaff_x19 + 0xe0)) {
LAB_1074565ac:
      FUN_1073da574(&uStack_70);
      lVar2 = unaff_x19 + 0x158;
      func_0x000107309778(lVar2,&uStack_70);
      func_0x0001074575ec();
      if (lVar2 != 0) {
        func_0x000107457540();
      }
    }
  }
  *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
LAB_1074565e4:
  *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  return;
}



/* Entry: 10745663c; end: 10745665f;  */

byte FUN_10745663c(long param_1)

{
  byte bVar1;
  
  if ((*(long *)(param_1 + 0x28) == 0) && ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x78);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 107456660; end: 107456683;  */

void FUN_107456660(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010725b5b0();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 107456684; end: 107456727;  */

void FUN_107456684(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_48;
  
  FUN_1073da3e8(param_2,0xac,1);
  FUN_1073da3e8(param_2,0xad,param_3[1] - *param_3);
  lVar1 = param_3[1] - *param_3;
  (**(code **)(*param_2 + 0x40))(&lStack_48,param_2,*param_3,lVar1,param_4);
  *param_1 = lVar1 >> 3;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 8;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = lStack_48;
  return;
}



/* Entry: 107456728; end: 107456827;  */

void FUN_107456728(long param_1)

{
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  undefined1 uStack_28;
  
  auStack_58[0] = 0;
  uStack_28 = 0;
  FUN_107434a64(param_1 + 0x120,auStack_58);
  func_0x00010730b13c(auStack_58);
  auStack_58[0] = 0;
  uStack_40 = 0;
  FUN_107443478(param_1 + 0x158,auStack_58);
  func_0x00010730b10c(auStack_58);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 107456828; end: 107456b5f;  */

long * FUN_107456828(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  short sVar3;
  long lVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_68;
  
  func_0x0001074575f8();
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)unaff_x20[2];
  plVar5 = (long *)(param_1 + 0xa0);
  FUN_107456b60(plVar5,*param_2);
  if (((ulong)plVar5 & 1) == 0) {
    plVar10 = (long *)(unaff_x19 + 0xa8);
    func_0x000107457208(unaff_x19 + 0xa0,*plVar10);
    *(long *)(unaff_x19 + 0xa0) = *unaff_x20;
    plVar5 = unaff_x20 + 1;
    lVar7 = *plVar5;
    *plVar10 = lVar7;
    lVar8 = unaff_x20[2];
    *(long *)(unaff_x19 + 0xb0) = lVar8;
    if (lVar8 == 0) {
      *(long **)(unaff_x19 + 0xa0) = plVar10;
    }
    else {
      *(long **)(lVar7 + 0x10) = plVar10;
      *unaff_x20 = (long)plVar5;
      *plVar5 = 0;
      unaff_x20[2] = 0;
    }
    FUN_107456728();
    uStack_80 = uStack_80 & 0xffffff00;
    uStack_7c = 0;
    uStack_78 = 0;
    FUN_107456e70(&lStack_a8,&uStack_80,1,&uStack_b0);
    unaff_x20 = (long *)(unaff_x19 + 0xa0);
    puVar6 = puStack_98;
    FUN_107456b60(unaff_x20,lStack_a8);
    plVar5 = &lStack_a8;
    func_0x0001074571e4();
    if (((ulong)unaff_x20 & 1) == 0) {
      puVar2 = *(undefined8 **)(unaff_x19 + 0xf8);
      if (puVar2 < *(undefined8 **)(unaff_x19 + 0x100)) {
        puVar9 = puVar2 + 5;
        *(undefined4 *)(puVar2 + 4) = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
      }
      else {
        lVar7 = unaff_x19 + 0xf0;
        FUN_1074084f8(lVar7,((long)puVar2 - *(long *)(unaff_x19 + 0xf0)) / 0x28 + 1);
        puVar6 = (undefined8 *)((*(long *)(unaff_x19 + 0xf8) - *(long *)(unaff_x19 + 0xf0)) / 0x28);
        FUN_10740857c(&lStack_a8,lVar7,puVar6,unaff_x19 + 0x100);
        *(undefined4 *)(puStack_98 + 4) = 0;
        puStack_98[1] = 0;
        *puStack_98 = 0;
        puStack_98[3] = 0;
        puStack_98[2] = 0;
        puStack_98 = puStack_98 + 5;
        FUN_107408540(unaff_x19 + 0xf0,&lStack_a8);
        puVar9 = *(undefined8 **)(unaff_x19 + 0xf8);
        plVar5 = &lStack_a8;
        FUN_1074085fc();
      }
      *(undefined8 **)(unaff_x19 + 0xf8) = puVar9;
      unaff_x20 = *(long **)(unaff_x19 + 0xa0);
      while (in_ZR = unaff_x20 == plVar10, !(bool)in_ZR) {
        FUN_1075012f4(&uStack_80,0xf,0x2000 >> (ulong)(*(byte *)((long)unaff_x20 + 0x1c) & 0x1f));
        puVar12 = (undefined4 *)CONCAT44(uStack_7c,uStack_80);
        puVar13 = (undefined4 *)CONCAT44(uStack_74,uStack_78);
        lVar7 = (long)puVar13 - (long)puVar12 >> 2;
        if (0xffff < (ulong)(*(long *)(*(long *)(unaff_x19 + 0xf8) + -0x18) + lVar7)) {
          lStack_a8 = *(long *)(unaff_x19 + 0xc0) - *(long *)(unaff_x19 + 0xb8) >> 3;
          uStack_b0 = *(long *)(unaff_x19 + 0xe0) - *(long *)(unaff_x19 + 0xd8) >> 1;
          puVar6 = &uStack_b0;
          FUN_10740864c(unaff_x19 + 0xf0,&lStack_a8);
          puVar12 = (undefined4 *)CONCAT44(uStack_7c,uStack_80);
          puVar13 = (undefined4 *)CONCAT44(uStack_74,uStack_78);
        }
        for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
          lStack_a8 = CONCAT44(*puVar12,*puVar12);
          func_0x000107457248(unaff_x19 + 0xb8,&lStack_a8);
        }
        lVar8 = *(long *)(unaff_x19 + 0xf8);
        sVar3 = *(short *)(lVar8 + -0x18);
        FUN_107501174(&lStack_a8,0xf);
        uVar1 = (long)puStack_98 - lStack_a0 >> 1;
        FUN_107454eb4(unaff_x19 + 0xd0,
                      (*(long *)(unaff_x19 + 0xe0) - *(long *)(unaff_x19 + 0xd8) >> 1) + uVar1);
        for (uVar14 = 2; lVar4 = uStack_b0, uVar14 - 2 < uVar1; uVar14 = uVar14 + 3) {
          uStack_b0._6_2_ = SUB82(lVar4,6);
          uStack_b0._0_6_ =
               CONCAT24(*(short *)(lStack_a0 + (ulong)uVar14 * 2) + sVar3,
                        CONCAT22(*(short *)(lStack_a0 + (ulong)(uVar14 - 1) * 2) + sVar3,
                                 *(short *)(lStack_a0 + (ulong)(uVar14 - 2) * 2) + sVar3));
          puVar6 = (undefined8 *)0x3;
          func_0x000107309760(unaff_x19 + 0xd0,&uStack_b0);
        }
        *(long *)(lVar8 + -0x18) = *(long *)(lVar8 + -0x18) + lVar7;
        *(ulong *)(lVar8 + -0x10) = *(long *)(lVar8 + -0x10) + uVar1;
        func_0x00010730b05c(&lStack_a0);
        func_0x000104c336c8(&uStack_80);
        func_0x00010002c7d4();
        plVar5 = unaff_x20;
      }
    }
  }
  func_0x00010745752c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar10 = &lStack_a8;
    FUN_1074085fc();
    func_0x000107457590();
    if ((undefined8 *)plVar10[2] == puVar6) {
      func_0x0001074575f8();
      plVar11 = (long *)*plVar5;
      while (plVar10 = (long *)(ulong)(plVar11 == plVar5 + 1), plVar11 != plVar5 + 1) {
        lVar7 = (long)plVar11 + 0x1c;
        func_0x00010726b840(lVar7,(long)unaff_x20 + 0x1c);
        if ((int)lVar7 == 0) {
          return plVar10;
        }
        func_0x00010002c7d4();
        func_0x00010002c7d4();
      }
    }
    else {
      plVar10 = (long *)0x0;
    }
    return plVar10;
  }
  return plVar5;
}



/* Entry: 107456b60; end: 107456bd3;  */

bool FUN_107456b60(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x10) == param_3) {
    func_0x0001074575f8();
    puVar3 = (undefined8 *)*unaff_x19;
    while (bVar1 = puVar3 == unaff_x19 + 1, !bVar1) {
      lVar2 = (long)puVar3 + 0x1c;
      func_0x00010726b840(lVar2,unaff_x20 + 0x1c);
      if ((int)lVar2 == 0) {
        return bVar1;
      }
      func_0x00010002c7d4();
      func_0x00010002c7d4();
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 107456bd4; end: 107456be7;  */

undefined8 FUN_107456bd4(void)

{
  return 0;
}



/* Entry: 107456be8; end: 107456c13;  */

undefined8 FUN_107456be8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_107456c14(&uStack_28);
  return param_1;
}



/* Entry: 107456c14; end: 107456c2b;  */

void FUN_107456c14(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107456c2c; end: 107456c4f;  */

undefined8 FUN_107456c2c(undefined8 param_1)

{
  FUN_107456c50();
  return param_1;
}



/* Entry: 107456c50; end: 107456c97;  */

void FUN_107456c50(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      func_0x0001073c8964();
      *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
      *param_1 = extraout_x8;
      FUN_1073c8394(param_1 + 2,param_2 + 2);
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x00010730b0e8(param_1 + 2);
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    uVar2 = *param_2;
    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
    *param_1 = uVar2;
    uVar2 = param_2[2];
    param_2[2] = 0;
    param_1[2] = uVar2;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 107456c98; end: 107456ccb;  */

void FUN_107456c98(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010730b0e8(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 107456ccc; end: 107456cef;  */

void FUN_107456ccc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107456cf0(&uStack_11,param_1);
  return;
}



/* Entry: 107456cf0; end: 107456d77;  */

undefined1 * FUN_107456cf0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_107456d78(auStack_40,1);
  FUN_107456dcc(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000107456e38();
  func_0x00010745752c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107456e38();
  func_0x000107457590();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_107456da0();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 107456d78; end: 107456d9f;  */

long FUN_107456d78(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107456da0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107456da0; end: 107456dcb;  */

undefined8 * FUN_107456da0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b1fa8;
  param_1[1] = 0;
  FUN_10739f390(param_1 + 3);
  return param_1;
}



/* Entry: 107456dcc; end: 107456dff;  */

undefined8 * FUN_107456dcc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b1fa8;
  param_1[1] = 0;
  FUN_10739f390(param_1 + 3);
  return param_1;
}



/* Entry: 107456e00; end: 107456e03;  */

void FUN_107456e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b1fa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107456e04; end: 107456e17;  */

void FUN_107456e04(void)

{
  func_0x000107456e24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107456e18; end: 107456e47;  */

uint * FUN_107456e18(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int *extraout_x8;
  
  puVar1 = (uint *)(param_1 + 0x18);
  if (((ulong)*puVar1 * (ulong)*(uint *)(param_1 + 0x1c) & 0x3fffffffffffffff) != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 =
             lRam0000000113823db0 + (ulong)*(uint *)(param_1 + 0x1c) * (ulong)*puVar1 * -4;
      }
    } while (cVar2 != '\0');
    func_0x00010724e7c8();
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar3) {
        *extraout_x8 = *extraout_x8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010724e5b8(param_1 + 0x20);
  return puVar1;
}


