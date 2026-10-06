/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c28f20; end: 104c28f77;  */

void FUN_104c28f20(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000104c1e798(param_1,(param_2 + 7U & 0xfffffffffffffff8) + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[-5] = *puVar1;
    puVar1[-4] = param_1;
    puVar1[-3] = 1;
    puVar1[-2] = FUN_104c28f78;
    puVar1[-1] = puVar1;
  }
  return;
}



/* Entry: 104c28f78; end: 104c28f7b;  */

void FUN_104c28f78(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long unaff_x19;
  
  func_0x000104c1e878();
  iVar1 = *(int *)(unaff_x19 + 0x48) + -1;
  *(int *)(unaff_x19 + 0x48) = iVar1;
  if (*(int *)(unaff_x19 + 0x4c) == 0) {
    param_2[1] = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 **)(unaff_x19 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)();
    return;
  }
  func_0x000104c1e858();
  _free(*param_2);
  if (iVar1 != 0) {
    return;
  }
  _pthread_mutex_destroy();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 104c28f7c; end: 104c28fdb;  */

void FUN_104c28f7c(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    *param_1 = 0;
    piVar1 = (int *)(lVar5 + 0x10);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + -1 == 0) &&
       (iVar2 = *(int *)(lVar5 + 0x14),
       (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x20)),
       iVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 104c28fdc; end: 104c29d13;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_104c28fdc(long *param_1,long *param_2,uint *param_3,uint *param_4,uint *param_5,
                    uint *param_6,undefined4 param_7,uint param_8,uint param_9)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  bool bVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  long lVar20;
  long extraout_x9;
  long extraout_x9_00;
  long *plVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  short *psVar25;
  long *plVar26;
  undefined8 in_x17;
  undefined8 extraout_x17;
  undefined8 extraout_x17_00;
  undefined8 extraout_x17_01;
  undefined8 extraout_x17_02;
  undefined8 extraout_x17_03;
  undefined8 extraout_x17_04;
  undefined8 extraout_x17_05;
  undefined8 extraout_x17_06;
  undefined8 extraout_x17_07;
  undefined8 extraout_x17_08;
  undefined8 extraout_x17_09;
  undefined8 extraout_x17_10;
  long *plVar27;
  uint *puVar28;
  long unaff_x20;
  long lVar29;
  long *plVar30;
  long lVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uStack_1f4;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  int *piStack_1d8;
  int *piStack_1d0;
  long lStack_1c8;
  uint uStack_1bc;
  ulong uStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  uint *puStack_1a8;
  long lStack_1a0;
  uint *puStack_198;
  uint *puStack_190;
  ulong uStack_188;
  uint uStack_180;
  uint uStack_17c;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint *puStack_158;
  ulong uStack_150;
  uint *puStack_148;
  uint uStack_13c;
  uint *puStack_138;
  long *plStack_130;
  uint uStack_128;
  uint uStack_124;
  long lStack_120;
  ulong uStack_118;
  uint uStack_10c;
  long *plStack_108;
  uint uStack_fc;
  uint *puStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint *puStack_e8;
  uint *puStack_e0;
  long *plStack_d8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  int aiStack_98 [7];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  
  plStack_d8 = (long *)CONCAT44(plStack_d8._4_4_,param_7);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar30 = (long *)*param_1;
  lVar20 = ((ulong)param_6 & 0xffffffff) * 4;
  uVar24 = *(int *)((long)param_1 + 0x13c) - param_9;
  bVar2 = (&UNK_10dd74d48)[lVar20];
  bVar3 = (&UNK_10dd74d49)[lVar20];
  puVar37 = (uint *)(ulong)bVar3;
  uStack_124 = (uint)bVar2;
  if (0xf < bVar2) {
    uStack_124 = 0x10;
  }
  if ((int)uVar24 <= (int)uStack_124) {
    uStack_124 = uVar24;
  }
  uStack_128 = (uint)bVar3;
  if (0xf < uStack_128) {
    uStack_128 = 0x10;
  }
  uVar24 = *(int *)((long)param_1 + 0x144) - param_8;
  if ((int)uVar24 <= (int)uStack_128) {
    uStack_128 = uVar24;
  }
  *param_3 = 0;
  uStack_188 = (ulong)param_5 & 0xf;
  uStack_fc = (uint)bVar2;
  puStack_1a8 = param_4;
  plStack_130 = param_1;
  puStack_e0 = param_5;
  if ((int)uStack_188 == 0) {
    uStack_78 = 0x80008000;
    plVar21 = (long *)0x0;
  }
  else {
    param_6 = (uint *)*plVar30;
    func_0x000104c2af40(0x24);
    param_5 = puVar37;
    FUN_104c29d14();
    uStack_78 = (uint)param_1;
    in_x17 = extraout_x17;
    plVar21 = param_1;
    if (*(uint *)(unaff_x20 + 0x380) < 2) {
      uStack_78 = 0x80008000;
    }
  }
  uVar24 = uStack_fc;
  iStack_1b0 = ((int)puStack_e0 << 0x10) >> 0x18;
  iVar34 = (int)plVar21;
  aiStack_98[6] = iVar34;
  puVar28 = (uint *)(ulong)uStack_fc;
  if (0 < ((int)puStack_e0 << 0x10) >> 0x18) {
    param_6 = (uint *)*plVar30;
    func_0x000104c2af40(0x24);
    param_5 = puVar37;
    FUN_104c29d14();
    uStack_74 = SUB84(param_1,0);
    uStack_7c = uStack_74;
    in_x17 = extraout_x17_00;
    if (*(uint *)(unaff_x20 + 0x380) < 2) {
      uStack_74 = 0x80008000;
    }
  }
  plVar21 = plStack_130;
  uStack_170 = (ulong)uVar24;
  uStack_168 = 0;
  aiStack_98[0] = 0;
  aiStack_98[1] = 0;
  iStack_9c = 0;
  iVar12 = param_8 - (int)plStack_130[0x28];
  if (iVar12 == 0 || (int)param_8 < (int)plStack_130[0x28]) {
    uStack_ec = 0;
    uStack_180 = 0xffffffff;
  }
  else {
    uStack_ec = iVar12 + 1U >> 1;
    uVar16 = 2;
    if (1 < bVar3) {
      uVar16 = 3;
    }
    if (uVar16 <= uStack_ec) {
      uStack_ec = uVar16;
    }
    param_5 = (uint *)(plStack_130[(ulong)((param_8 & 0x1f) + 4) + 1] + (long)(int)param_9 * 0xc);
    uStack_1e0 = 4;
    if (uVar24 < 0x10) {
      uStack_1e0 = 1;
    }
    piStack_1d0 = &iStack_9c;
    piStack_1d8 = aiStack_98 + 1;
    func_0x000104c2af14();
    puStack_148 = param_5;
    FUN_104c29e18();
    uStack_180 = (uint)param_1;
    param_6 = puVar28;
    in_x17 = extraout_x17_01;
  }
  iVar12 = param_9 - (int)plVar21[0x27];
  if (iVar12 == 0 || (int)param_9 < (int)plVar21[0x27]) {
    uStack_f0 = 0;
    uStack_13c = 0xffffffff;
  }
  else {
    uStack_1e0 = iVar12 + 1U >> 1;
    uVar16 = 2;
    if (1 < uVar24) {
      uVar16 = 3;
    }
    if (uVar16 <= uStack_1e0) {
      uStack_1e0 = uVar16;
    }
    param_5 = (uint *)(plVar21 + (ulong)((param_8 & 0x1f) + 5) + 1);
    uStack_1dc = 4;
    if (bVar3 < 0x10) {
      uStack_1dc = 1;
    }
    piStack_1d0 = aiStack_98;
    piStack_1d8 = aiStack_98 + 1;
    uStack_f0 = uStack_1e0;
    func_0x000104c2af14();
    puStack_158 = param_5;
    func_0x000104c29f00();
    uStack_13c = (uint)param_1;
    param_6 = puVar37;
    in_x17 = extraout_x17_02;
  }
  uVar35 = (uint)bVar3;
  uStack_170 = (ulong)CONCAT14(bVar3,(int)uStack_170);
  uVar16 = uVar24;
  if (uVar24 <= uVar35) {
    uVar16 = uVar35;
  }
  if (((((ulong)plStack_d8 & 1) != 0) && (uStack_180 != 0xffffffff && uVar16 < 0x11)) &&
     ((int)(param_9 + uVar24) < *(int *)((long)plVar21 + 0x13c))) {
    param_5 = (uint *)((ulong)puStack_e0 & 0xff0f);
    param_6 = &uStack_78;
    param_1 = param_2;
    FUN_104c29fe4(param_2,param_3,4,puStack_148 + (ulong)uVar24 * 3,param_5,param_6,aiStack_98 + 1,
                  &iStack_9c);
    in_x17 = extraout_x17_03;
  }
  puStack_138 = (uint *)CONCAT44(puStack_138._4_4_,aiStack_98[0]);
  uStack_150 = CONCAT44(uStack_150._4_4_,iStack_9c);
  uVar24 = *param_3;
  puStack_190 = (uint *)(ulong)uVar24;
  puStack_198 = (uint *)(long)(int)uVar24;
  lVar20 = 8;
  for (uVar15 = (ulong)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU)); uVar15 != 0;
      uVar15 = uVar15 - 1) {
    *(int *)((long)param_2 + lVar20) = *(int *)((long)param_2 + lVar20) + 0x280;
    lVar20 = lVar20 + 0x10;
  }
  uStack_a0 = (uint)*(byte *)(*plVar30 + 0x1b5);
  iStack_1ac = iVar34;
  uStack_17c = param_8;
  uStack_178 = (ulong)param_9;
  uStack_10c = uVar35;
  plStack_d8 = param_2;
  if (*(int *)((long)plVar30 + 0x1c) != 0) {
    iVar34 = 0;
    lStack_1a0 = plVar30[0x17];
    uStack_1bc = (int)param_8 >> 1;
    param_9 = (int)param_9 >> 1;
    uStack_1b8 = (ulong)param_9;
    lVar20 = plStack_130[0x26] +
             (-(ulong)(param_9 >> 0x1f) & 0xfffffffc00000000 | uStack_1b8 << 2) + (long)(int)param_9
             + lStack_1a0 * (ulong)(uStack_1bc & 0xf) * 5;
    uVar17 = 1;
    if (0xf < uVar35) {
      uVar17 = 2;
    }
    uStack_118 = CONCAT44(uStack_118._4_4_,uVar17);
    iVar12 = (int)(uStack_124 + 1) >> 1;
    if (7 < iVar12) {
      iVar12 = 8;
    }
    iVar10 = (int)(uStack_128 + 1) >> 1;
    if (7 < iVar10) {
      iVar10 = 8;
    }
    plStack_108 = (long *)CONCAT44(plStack_108._4_4_,iVar10);
    lVar31 = 1;
    if (0xf < uStack_fc) {
      lVar31 = 2;
    }
    lStack_120 = (lStack_1a0 << (0xf < uVar35)) * 5;
    lStack_1c8 = lVar20;
    for (; param_8 = uStack_17c, iVar34 < (int)plStack_108; iVar34 = iVar34 + (int)uStack_118) {
      puStack_e8 = (uint *)lVar20;
      for (lVar29 = 0; lVar29 < iVar12; lVar29 = lVar29 + lVar31) {
        param_6 = &uStack_a0;
        if (iVar34 != 0 || (int)lVar29 != 0) {
          param_6 = (uint *)0x0;
        }
        param_5 = (uint *)((ulong)puStack_e0 & 0xff0f);
        param_1 = plVar30;
        FUN_104c2a148(plVar30,plStack_d8,param_3,lVar20,param_5,param_6,aiStack_98 + 6);
        lVar20 = lVar20 + lVar31 * 5;
        in_x17 = extraout_x17_04;
      }
      lVar20 = (long)puStack_e8 + lStack_120;
    }
    uVar24 = uStack_fc;
    if ((int)uStack_10c <= (int)uStack_fc) {
      uVar24 = uStack_10c;
    }
    uVar16 = uStack_fc;
    if ((int)uStack_fc <= (int)uStack_10c) {
      uVar16 = uStack_10c;
    }
    if (1 < uVar24 && uVar16 < 0x10) {
      uVar24 = uStack_fc >> 1;
      iVar12 = uStack_1bc + (uStack_10c >> 1);
      iVar10 = *(int *)((long)plStack_130 + 0x144) >> 1;
      iVar34 = (uStack_1bc & 0xfffffff8) + 8;
      if (iVar34 <= iVar10) {
        iVar10 = iVar34;
      }
      uVar35 = (uint)uStack_1b8;
      uVar16 = uVar35;
      if (iVar12 < iVar10) {
        uVar36 = (int)plStack_130[0x27] >> 1;
        if ((int)uVar36 <= (int)(uVar35 & 0xfffffff8)) {
          uVar36 = uVar35 & 0xfffffff8;
        }
        if ((int)uVar36 < (int)uVar35) {
          func_0x000104c2ae58();
          in_x17 = extraout_x17_05;
          uVar16 = (uint)uStack_1b8;
        }
      }
      iVar23 = *(int *)((long)plStack_130 + 0x13c) >> 1;
      iVar19 = (uVar35 & 0xfffffff8) + 8;
      if (iVar19 <= iVar23) {
        iVar23 = iVar19;
      }
      if ((int)(uVar24 + uVar16) < iVar23) {
        if (iVar12 < iVar10) {
          func_0x000104c2ae58();
          in_x17 = extraout_x17_06;
        }
        iVar10 = *(int *)((long)plStack_130 + 0x144) >> 1;
        if (iVar34 <= iVar10) {
          iVar10 = iVar34;
        }
        if (iVar12 <= iVar10) {
          func_0x000104c2ae58();
          in_x17 = extraout_x17_07;
        }
      }
    }
  }
  plVar21 = plStack_d8;
  uVar24 = uStack_180;
  lStack_1a0 = CONCAT44(lStack_1a0._4_4_,(int)uStack_150 + (int)puStack_138);
  puStack_f8 = param_3;
  if ((uStack_13c | uStack_180) == 0xffffffff) {
    puStack_e8 = (uint *)((ulong)puStack_e0 & 0xff0f);
  }
  else {
    param_5 = (uint *)((ulong)puStack_e0 & 0xff0f);
    param_6 = &uStack_78;
    param_1 = plStack_d8;
    puStack_e8 = param_5;
    FUN_104c29fe4(plStack_d8,param_3,4,puStack_148 + -3,param_5,param_6,&iStack_a4,&iStack_9c);
    in_x17 = extraout_x17_08;
  }
  plStack_108 = plStack_130 + 1;
  uStack_150 = (ulong)(int)uStack_178;
  uStack_118 = uStack_150 | 1;
  uVar16 = 2;
  uVar18 = 4;
  uVar17 = uVar18;
  if (uStack_fc < 0x10) {
    uVar17 = 2;
  }
  lStack_120 = CONCAT44(lStack_120._4_4_,uVar17);
  if (uStack_10c < 0x10) {
    uVar18 = 2;
  }
  plStack_130 = (long *)CONCAT44(plStack_130._4_4_,uVar18);
  uVar36 = (int)uStack_178 - 3;
  uVar6 = (param_8 & 0x1f) - 3;
  puStack_138 = (uint *)(plStack_108 + ((param_8 & 0x1e) + 6));
  uVar32 = uStack_f0;
  uVar5 = uStack_ec;
  uVar35 = uStack_13c;
  while( true ) {
    uVar8 = uStack_10c;
    iVar34 = (int)param_5;
    uVar5 = uVar5 - 1;
    uVar13 = (uint)in_x17;
    uVar32 = uVar32 - 1;
    if (uVar16 == 4) break;
    if (uVar16 <= uStack_ec && uVar24 < uVar16) {
      param_5 = (uint *)(*(long *)((long)plStack_108 +
                                  (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3
                                  | 8) + 0x28) + (long)(int)uStack_118 * 0xc);
      piStack_1d0 = &iStack_9c;
      piStack_1d8 = &iStack_a4;
      uStack_1e0 = (uint)lStack_120;
      param_6 = (uint *)(ulong)uStack_fc;
      param_1 = plVar21;
      FUN_104c29e18(plVar21,puStack_f8,puStack_e8,&uStack_78,param_5,param_6,uStack_124,uVar5);
      uVar24 = (int)param_1 + uVar24;
      in_x17 = extraout_x17_09;
    }
    if (uVar16 <= uStack_f0 && uVar35 < uVar16) {
      piStack_1d0 = aiStack_98;
      piStack_1d8 = &iStack_a4;
      uStack_1dc = plStack_130._0_4_;
      param_6 = (uint *)(ulong)uStack_10c;
      param_1 = plVar21;
      param_5 = puStack_138;
      uStack_1e0 = uVar32;
      func_0x000104c29f00(plVar21,puStack_f8,puStack_e8,&uStack_78,puStack_138,param_6,uStack_128,
                          uVar36 | 1);
      uVar35 = (int)param_1 + uVar35;
      in_x17 = extraout_x17_10;
    }
    uVar16 = uVar16 + 1;
    uVar36 = uVar36 - 2;
    uVar6 = uVar6 - 2;
  }
  uVar16 = iStack_9c + aiStack_98[0];
  puVar37 = puStack_190;
  if ((int)lStack_1a0 == 0) {
    uVar36 = uVar16;
    if (1 < (int)uVar16) {
      uVar36 = 2;
    }
    param_1 = (long *)(ulong)uVar36;
    uVar13 = (uint)(0 < (int)uVar16);
  }
  else if ((int)lStack_1a0 == 1) {
    uVar16 = uVar16 * 3;
    if (3 < (int)uVar16) {
      uVar16 = 4;
    }
    param_1 = (long *)(ulong)uVar16;
    uVar13 = 3 - aiStack_98[1];
  }
  else if ((int)lStack_1a0 == 2) {
    param_1 = (long *)0x5;
    uVar13 = 5 - aiStack_98[1];
  }
  while (iVar12 = (int)puVar37, iVar12 != 0) {
    puVar37 = (uint *)0x0;
    plVar26 = plVar21;
    for (puVar28 = (uint *)0x1; plVar27 = plVar26 + 2, (long)puVar28 < (long)iVar12;
        puVar28 = (uint *)((long)puVar28 + 1)) {
      if ((int)plVar26[1] < (int)plVar26[3]) {
        lVar20 = *plVar26;
        lVar31 = plVar26[1];
        plVar26[1] = plVar26[3];
        *plVar26 = *plVar27;
        *(int *)(plVar26 + 3) = (int)lVar31;
        *(int *)((long)plVar26 + 0x1c) = *(int *)((long)plVar26 + 0xc);
        *plVar27 = lVar20;
        puVar37 = puVar28;
      }
      plVar26 = plVar27;
    }
  }
  puVar37 = (uint *)(ulong)*puStack_f8;
LAB_104c29818:
  iVar12 = (int)puVar37;
  if ((int)puStack_190 < iVar12) {
    puVar37 = puStack_190;
    puVar28 = puStack_198;
    do {
      plVar26 = plVar21 + (long)puVar28 * 2;
      do {
        plVar27 = plVar26;
        puVar28 = (uint *)((long)puVar28 + 1);
        plVar26 = plVar27 + 2;
        if ((long)iVar12 <= (long)puVar28) goto LAB_104c29818;
      } while ((int)plVar27[3] <= (int)plVar27[1]);
      lVar20 = *plVar27;
      lVar31 = plVar27[1];
      plVar27[1] = plVar27[3];
      *plVar27 = *plVar26;
      *(int *)(plVar27 + 3) = (int)lVar31;
      *(int *)((long)plVar27 + 0x1c) = *(int *)((long)plVar27 + 0xc);
      *plVar26 = lVar20;
      puVar37 = puVar28;
    } while( true );
  }
  uVar16 = *puStack_f8;
  uStack_13c = uVar35;
  if (((int)puStack_e0 << 0x10) >> 0x18 < 1) {
    puVar37 = puStack_198;
    puVar28 = puStack_f8;
    if (((int)uStack_188 != 0) && (puVar37 = puStack_198, (int)uVar16 < 2)) {
      puStack_e0 = (uint *)CONCAT44(puStack_e0._4_4_,(int)param_1);
      uVar35 = uStack_124;
      if ((int)uStack_128 <= (int)uStack_124) {
        uVar35 = uStack_128;
      }
      puVar37 = puStack_198;
      if (uVar24 != 0xffffffff) {
        lVar20 = 0;
        while (((int)lVar20 < (int)uVar35 && (puVar37 = param_3, (int)*param_3 < 2))) {
          puVar28 = puStack_148 + lVar20 * 3;
          func_0x000104c2af34(plStack_d8,param_3,puVar28);
          func_0x000104c2af04(*(undefined1 *)((long)puVar28 + 10));
          lVar20 = lVar20 + (ulong)*(byte *)(extraout_x9_00 + extraout_x8_00);
        }
      }
      iVar34 = (int)param_5;
      puVar28 = param_3;
      if (uStack_13c != 0xffffffff) {
        for (lVar20 = 0; iVar34 = (int)param_5, (int)lVar20 < (int)uVar35;
            lVar20 = lVar20 + (ulong)*(byte *)(extraout_x8_02 + 1)) {
          uVar16 = *param_3;
          if (1 < (int)uVar16) {
            param_1 = (long *)((ulong)puStack_e0 & 0xffffffff);
            plVar21 = plStack_d8;
            goto LAB_104c29c20;
          }
          lVar31 = *(long *)(puStack_158 + lVar20 * 2) + (long)(int)uStack_150 * 0xc;
          puVar37 = param_3;
          func_0x000104c2af34(plStack_d8,param_3,lVar31 + -0xc);
          func_0x000104c2ae98(*(undefined1 *)(lVar31 + -2));
        }
      }
      uVar16 = *param_3;
      param_1 = (long *)((ulong)puStack_e0 & 0xffffffff);
      plVar21 = plStack_d8;
    }
    param_3 = puVar37;
    iVar12 = (int)param_3;
    if (uVar16 == 0) {
      lVar20 = 0;
    }
    else {
LAB_104c29c20:
      iVar12 = (int)param_3;
      lVar20 = 0;
      iVar23 = ((int)uStack_178 + uStack_fc) * -0x20 + -0x80;
      iVar10 = ((int)plVar30[1] - (int)uStack_178) * 0x20 + 0x80;
      iVar14 = (uStack_17c + uVar8) * -0x20 + -0x80;
      iVar19 = (*(int *)((long)plVar30 + 0xc) - uStack_17c) * 0x20 + 0x80;
      psVar25 = (short *)((long)plVar21 + 2);
      do {
        sVar11 = *psVar25;
        iVar22 = (int)sVar11;
        if (iVar10 <= sVar11) {
          iVar22 = iVar10;
        }
        iVar1 = iVar23;
        if (iVar23 <= sVar11) {
          iVar1 = iVar22;
        }
        *psVar25 = (short)iVar1;
        sVar11 = psVar25[-1];
        iVar22 = (int)sVar11;
        if (iVar19 <= sVar11) {
          iVar22 = iVar19;
        }
        iVar1 = iVar14;
        if (iVar14 <= sVar11) {
          iVar1 = iVar22;
        }
        psVar25[-1] = (short)iVar1;
        lVar20 = lVar20 + 1;
        psVar25 = psVar25 + 8;
      } while (lVar20 < (int)uVar16);
      lVar20 = (long)(int)*puVar28;
    }
    iVar10 = (int)puVar28;
    plVar30 = plVar21 + lVar20 * 2;
    for (; lVar20 < 2; lVar20 = lVar20 + 1) {
      *(int *)plVar30 = iStack_1ac;
      plVar30 = plVar30 + 2;
    }
    uVar13 = (int)param_1 << 4 | uStack_a0 << 3 | uVar13;
  }
  else {
    puVar37 = puStack_198;
    puVar28 = puStack_f8;
    if ((int)uVar16 < 2) {
      puStack_e0 = (uint *)CONCAT44(puStack_e0._4_4_,(int)param_1);
      uVar35 = uStack_124;
      if ((int)uStack_128 <= (int)uStack_124) {
        uVar35 = uStack_128;
      }
      plVar21 = plVar21 + (long)(int)uVar16 * 2;
      aiStack_98[2] = 0;
      aiStack_98[3] = 0;
      aiStack_98[4] = 0;
      aiStack_98[5] = 0;
      uStack_ec = uVar13;
      if (uVar24 != 0xffffffff) {
        for (lVar20 = 0; (int)lVar20 < (int)uVar35;
            lVar20 = lVar20 + (ulong)*(byte *)(extraout_x9 + extraout_x8)) {
          puVar33 = puStack_148 + lVar20 * 3;
          puVar37 = (uint *)(aiStack_98 + 2);
          func_0x000104c2aedc(plVar21,puVar37,puVar33);
          func_0x000104c2af04(*(undefined1 *)((long)puVar33 + 10));
        }
      }
      iVar34 = (int)param_5;
      if (uStack_13c != 0xffffffff) {
        for (lVar20 = 0; iVar34 = (int)param_5, (int)lVar20 < (int)uVar35;
            lVar20 = lVar20 + (ulong)*(byte *)(extraout_x8_01 + 1)) {
          lVar31 = *(long *)(puStack_158 + lVar20 * 2) + (long)(int)uStack_150 * 0xc;
          puVar37 = (uint *)(aiStack_98 + 2);
          func_0x000104c2aedc(plVar21,puVar37,lVar31 + -0xc);
          func_0x000104c2ae98(*(undefined1 *)(lVar31 + -2));
        }
      }
      plVar26 = plVar21;
      for (lVar20 = 0; lVar20 != 2; lVar20 = lVar20 + 1) {
        iVar12 = aiStack_98[lVar20 + 2];
        if (iVar12 < 2) {
          iVar10 = aiStack_98[lVar20 + 4];
          if (iVar10 == 0) {
LAB_104c29a48:
            iVar10 = aiStack_98[lVar20 + 6];
            lVar31 = (long)iVar12 + -1;
            plVar27 = plVar26 + (long)iVar12 * 2;
            do {
              *(int *)plVar27 = iVar10;
              lVar31 = lVar31 + 1;
              plVar27 = plVar27 + 2;
            } while (lVar31 < 1);
          }
          else {
            uVar24 = *(uint *)((long)plVar21 + lVar20 * 4 + 0x20);
            puVar37 = (uint *)(ulong)uVar24;
            *(uint *)((long)plVar21 + lVar20 * 4 + (long)iVar12 * 0x10) = uVar24;
            iVar12 = iVar12 + 1;
            if (iVar12 != 2) {
              if (iVar10 != 2) goto LAB_104c29a48;
              *(undefined4 *)((long)plVar21 + lVar20 * 4 + 0x10) =
                   *(undefined4 *)((long)plVar21 + lVar20 * 4 + 0x30);
            }
          }
        }
        plVar26 = (long *)((long)plVar26 + 4);
      }
      uVar24 = *param_3;
      if ((uVar24 == 1) && (*plStack_d8 == *plVar21)) {
        plStack_d8[2] = plStack_d8[4];
      }
      lVar20 = (long)(int)uVar24 + -1;
      plVar21 = plStack_d8 + (long)(int)uVar24 * 2 + 1;
      do {
        *(int *)plVar21 = 2;
        lVar20 = lVar20 + 1;
        plVar21 = plVar21 + 2;
      } while (lVar20 < 1);
      uVar16 = 2;
      *param_3 = 2;
      param_1 = (long *)((ulong)puStack_e0 & 0xffffffff);
      plVar21 = plStack_d8;
      uVar13 = uStack_ec;
    }
    iVar10 = (int)puVar28;
    iVar12 = (int)puVar37;
    auVar38._0_8_ =
         CONCAT44((uStack_17c + uStack_170._4_4_) * -0x20 + -0x80,
                  ((int)uStack_178 + (int)uStack_170) * -0x20 + -0x80);
    auVar38._8_8_ = auVar38._0_8_;
    auVar38 = NEON_rev64(auVar38,4);
    auVar39._0_8_ =
         CONCAT44(((int)((ulong)plVar30[1] >> 0x20) - uStack_17c) * 0x20 + 0x80,
                  ((int)plVar30[1] - (int)uStack_178) * 0x20 + 0x80);
    auVar39._8_8_ = auVar39._0_8_;
    auVar39 = NEON_rev64(auVar39,4);
    uVar15 = (ulong)uVar16;
    do {
      lVar20 = *plVar21;
      auVar40._0_4_ = (int)(short)lVar20;
      auVar40._4_4_ = (int)(short)((ulong)lVar20 >> 0x10);
      auVar40._8_4_ = (int)(short)((ulong)lVar20 >> 0x20);
      auVar40._12_4_ = (int)(short)((ulong)lVar20 >> 0x30);
      auVar41 = NEON_smin(auVar40,auVar39,4);
      auVar7._4_4_ = -(uint)(auVar40._4_4_ < auVar38._4_4_);
      auVar7._0_4_ = -(uint)(auVar40._0_4_ < auVar38._0_4_);
      auVar7._8_4_ = -(uint)(auVar40._8_4_ < auVar38._8_4_);
      auVar7._12_4_ = -(uint)(auVar40._12_4_ < auVar38._12_4_);
      auVar41 = auVar41 ^ (auVar41 ^ auVar38) & auVar7;
      *plVar21 = CONCAT26(auVar41._12_2_,
                          CONCAT24(auVar41._8_2_,CONCAT22(auVar41._4_2_,auVar41._0_2_)));
      uVar15 = uVar15 - 1;
      plVar21 = plVar21 + 2;
    } while (uVar15 != 0);
    iVar19 = (int)param_1 >> 1;
    if (iVar19 == 2) {
      if ((int)uVar13 < 2) {
        uVar13 = 1;
      }
      if (3 < (int)uVar13) {
        uVar13 = 4;
      }
      uVar13 = uVar13 + 3;
    }
    else if (iVar19 == 1) {
      if (2 < (int)uVar13) {
        uVar13 = 3;
      }
      uVar13 = uVar13 + 1;
    }
    else {
      if (iVar19 != 0) goto LAB_104c29cd8;
      if (0 < (int)uVar13) {
        uVar13 = 1;
      }
    }
  }
  *puStack_1a8 = uVar13;
LAB_104c29cd8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    uVar24 = uStack_17c;
    ___stack_chk_fail();
    pcStack_1e8 = FUN_104c29d14;
    iVar19 = (int)*param_1;
    if (iVar19 == 0) {
      uStack_1f4 = 0;
    }
    else {
      if (iVar19 == 1) {
        uStack_1f4._0_2_ = (short)(*(uint *)((long)param_1 + 4) >> 0xd);
        sVar11 = (short)(*(uint *)(param_1 + 1) >> 0xd);
      }
      else {
        if (iVar19 == 2) {
          iVar19 = *(int *)((long)param_1 + 0x14);
          iVar14 = (int)param_1[3];
          iVar22 = (int)param_1[2];
          iVar23 = iVar14;
        }
        else {
          iVar23 = *(int *)((long)param_1 + 0xc);
          iVar22 = (int)param_1[2];
          iVar19 = *(int *)((long)param_1 + 0x14);
          iVar14 = (int)param_1[3];
        }
        iVar10 = iVar12 * 4 + iVar10 * 2 + -1;
        iVar34 = uVar24 * 4 + iVar34 * 2 + -1;
        iVar12 = *(int *)((long)param_1 + 4) + iVar22 * iVar34 + (iVar23 + -0x10000) * iVar10;
        iVar34 = iVar19 * iVar10 + (iVar14 + -0x10000) * iVar34 + (int)param_1[1];
        bVar9 = (char)param_6[0x6b] == '\0';
        uVar24 = 0xd;
        if (bVar9) {
          uVar24 = 0xe;
        }
        iVar10 = -iVar34;
        if (-1 < iVar34) {
          iVar10 = iVar34;
        }
        sVar11 = (short)((iVar10 + ((uint)(1 << (ulong)uVar24) >> 1) >> (ulong)uVar24) << bVar9);
        uStack_1f4._0_2_ = -sVar11;
        if (-1 < iVar34) {
          uStack_1f4._0_2_ = sVar11;
        }
        iVar34 = -iVar12;
        if (-1 < iVar12) {
          iVar34 = iVar12;
        }
        sVar4 = (short)((iVar34 + ((uint)(1 << (ulong)uVar24) >> 1) >> (ulong)uVar24) <<
                       (ulong)bVar9);
        sVar11 = -sVar4;
        if (-1 < iVar12) {
          sVar11 = sVar4;
        }
      }
      uStack_1f4 = CONCAT22(sVar11,(short)uStack_1f4);
      if (*(char *)((long)param_6 + 0x10d) != '\0') {
        puStack_1f0 = &stack0xfffffffffffffff0;
        func_0x000104c2ad90(&uStack_1f4);
      }
    }
    return (long *)(ulong)uStack_1f4;
  }
  return param_1;
}



/* Entry: 104c29d14; end: 104c29e17;  */

undefined4 FUN_104c29d14(int *param_1,int param_2,int param_3,int param_4,int param_5,long param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_14;
  
  iVar7 = *param_1;
  if (iVar7 == 0) {
    uStack_14 = 0;
  }
  else {
    if (iVar7 == 1) {
      uStack_14._0_2_ = (short)((uint)param_1[1] >> 0xd);
      sVar5 = (short)((uint)param_1[2] >> 0xd);
    }
    else {
      if (iVar7 == 2) {
        iVar7 = param_1[5];
        iVar6 = param_1[6];
        iVar8 = param_1[4];
        iVar9 = iVar6;
      }
      else {
        iVar9 = param_1[3];
        iVar8 = param_1[4];
        iVar7 = param_1[5];
        iVar6 = param_1[6];
      }
      iVar2 = param_2 * 4 + param_4 * 2 + -1;
      iVar3 = param_3 * 4 + param_5 * 2 + -1;
      iVar9 = param_1[1] + iVar8 * iVar3 + (iVar9 + -0x10000) * iVar2;
      iVar7 = iVar7 * iVar2 + (iVar6 + -0x10000) * iVar3 + param_1[2];
      bVar4 = *(char *)(param_6 + 0x1ac) == '\0';
      uVar10 = 0xd;
      if (bVar4) {
        uVar10 = 0xe;
      }
      iVar6 = -iVar7;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      sVar5 = (short)((iVar6 + ((uint)(1 << (ulong)uVar10) >> 1) >> (ulong)uVar10) << bVar4);
      uStack_14._0_2_ = -sVar5;
      if (-1 < iVar7) {
        uStack_14._0_2_ = sVar5;
      }
      iVar7 = -iVar9;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      sVar1 = (short)((iVar7 + ((uint)(1 << (ulong)uVar10) >> 1) >> (ulong)uVar10) << (ulong)bVar4);
      sVar5 = -sVar1;
      if (-1 < iVar9) {
        sVar5 = sVar1;
      }
    }
    uStack_14 = CONCAT22(sVar5,(short)uStack_14);
    if (*(char *)(param_6 + 0x10d) != '\0') {
      FUN_104c2ad90(&uStack_14);
    }
  }
  return uStack_14;
}



/* Entry: 104c29e18; end: 104c29fe3;  */

uint FUN_104c29e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,uint param_6,int param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  byte *extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  uint uVar3;
  uint in_stack_00000070;
  
  func_0x000104c2af60();
  func_0x000104c2ae98(*(undefined1 *)(param_5 + 10));
  bVar1 = *extraout_x8;
  uVar3 = param_6;
  if (bVar1 <= param_6) {
    uVar3 = (uint)bVar1;
  }
  uVar2 = in_stack_00000070;
  if (in_stack_00000070 <= uVar3) {
    uVar2 = uVar3;
  }
  if (bVar1 < param_6) {
    uVar3 = 0;
    while( true ) {
      func_0x000104c2aef0(param_1,param_2,uVar2 << 1);
      uVar3 = uVar3 + uVar2;
      if (param_7 <= (int)uVar3) break;
      func_0x000104c2af04(*(undefined1 *)(param_5 + (ulong)uVar3 * 0xc + 10));
      uVar2 = in_stack_00000070;
      if ((int)in_stack_00000070 <= (int)(uint)*(byte *)(extraout_x9 + extraout_x8_00)) {
        uVar2 = (uint)*(byte *)(extraout_x9 + extraout_x8_00);
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
    if (param_6 != 1) {
      uVar3 = param_8 << 1;
      if ((uint)extraout_x8[1] <= (uint)(param_8 << 1)) {
        uVar3 = (uint)extraout_x8[1];
      }
      if (uVar3 < 3) {
        uVar3 = 2;
      }
    }
    func_0x000104c2aef0(param_1,param_2,uVar3 * uVar2,param_5);
    uVar3 = uVar3 >> 1;
  }
  return uVar3;
}



/* Entry: 104c29fe4; end: 104c2a147;  */

void FUN_104c29fe4(long param_1,uint *param_2,uint param_3,uint *param_4,ulong param_5,uint *param_6
                  ,uint *param_7,undefined4 *param_8)

{
  uint *puVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  
  uVar4 = *param_4;
  uVar5 = (ulong)uVar4;
  if (uVar4 == 0x80008000) {
    return;
  }
  if (param_5 >> 8 == 0xff) {
    if ((char)param_5 == (char)param_4[2]) {
      lVar7 = 0;
    }
    else {
      if ((char)param_5 != *(char *)((long)param_4 + 9)) {
        return;
      }
      lVar7 = 1;
    }
    bVar3 = *(byte *)((long)param_4 + 0xb);
    if (((bVar3 & 1) == 0) || (uVar4 = *param_6, uVar4 == 0x80008000)) {
      uVar4 = param_4[lVar7];
    }
    *param_8 = 1;
    *param_7 = *param_7 | (uint)(bVar3 >> 1);
    uVar6 = *param_2;
    lVar7 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + 1;
    piVar8 = (int *)(param_1 + -8);
    do {
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        if (7 < (int)uVar6) {
          return;
        }
        puVar1 = (uint *)(param_1 + (long)(int)uVar6 * 0x10);
        *puVar1 = uVar4;
        puVar1[2] = param_3;
        goto LAB_104c2a140;
      }
      piVar9 = piVar8 + 4;
      puVar1 = (uint *)(piVar8 + 2);
      piVar8 = piVar9;
    } while (*puVar1 != uVar4);
    goto LAB_104c2a0fc;
  }
  if ((uint)param_5 != (uint)(ushort)param_4[2]) {
    return;
  }
  bVar3 = *(byte *)((long)param_4 + 0xb);
  if ((bVar3 & 1) == 0) {
LAB_104c2a048:
    uVar6 = param_4[1];
  }
  else {
    uVar6 = param_6[1];
    if (*param_6 != 0x80008000) {
      uVar4 = *param_6;
    }
    uVar5 = (ulong)uVar4;
    if (uVar6 == 0x80008000) goto LAB_104c2a048;
  }
  uVar5 = uVar5 | (ulong)uVar6 << 0x20;
  *param_8 = 1;
  *param_7 = *param_7 | (uint)(bVar3 >> 1);
  uVar6 = *param_2;
  lVar7 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + 1;
  piVar8 = (int *)(param_1 + -8);
  do {
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      if (7 < (int)uVar6) {
        return;
      }
      puVar2 = (ulong *)(param_1 + (long)(int)uVar6 * 0x10);
      *puVar2 = uVar5;
      *(uint *)(puVar2 + 1) = param_3;
LAB_104c2a140:
      *param_2 = uVar6 + 1;
      return;
    }
    piVar9 = piVar8 + 4;
    puVar2 = (ulong *)(piVar8 + 2);
    piVar8 = piVar9;
  } while (*puVar2 != uVar5);
LAB_104c2a0fc:
  *piVar9 = *piVar9 + param_3;
  return;
}



/* Entry: 104c2a148; end: 104c2a2df;  */

void FUN_104c2a148(undefined8 *param_1,long param_2,uint *param_3,int *param_4,int param_5,
                  uint *param_6,short *param_7,undefined8 param_8,int param_9,int param_10,
                  undefined4 param_11,int param_12)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  
  func_0x000104c2af60();
  iVar3 = *param_4;
  if (iVar3 != -0x7fff8000) {
    iVar5 = iVar3;
    func_0x000104c2af2c(iVar3,*(undefined1 *)((long)param_1 + (long)(char)param_5 + 0x2d));
    param_12 = iVar5;
    uVar12 = *param_1;
    func_0x000104c2ae18(uVar12,&param_12);
    uVar4 = *param_3;
    iVar5 = (param_5 << 0x10) >> 0x18;
    if (iVar5 == -1) {
      if (param_6 != (uint *)0x0) {
        uVar6 = (int)param_12._2_2_ - (int)param_7[1];
        uVar2 = -uVar6;
        if (-1 < (int)uVar6) {
          uVar2 = uVar6;
        }
        uVar7 = (int)(short)param_12 - (int)*param_7;
        uVar6 = -uVar7;
        if (-1 < (int)uVar7) {
          uVar6 = uVar7;
        }
        *param_6 = (uint)(0xf < (uVar6 | uVar2));
      }
      lVar8 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + 1;
      piVar10 = (int *)(param_2 + -8);
      do {
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          if (7 < (int)uVar4) {
            return;
          }
          plVar9 = (long *)(param_2 + (long)(int)uVar4 * 0x10);
          *(int *)plVar9 = param_12;
          goto LAB_104c2a2b0;
        }
        piVar11 = piVar10 + 4;
        piVar1 = piVar10 + 2;
        piVar10 = piVar11;
      } while (*piVar1 != param_12);
    }
    else {
      param_9 = param_12;
      func_0x000104c2af2c(iVar3,*(undefined1 *)((long)param_1 + (long)iVar5 + 0x2d));
      param_10 = iVar3;
      func_0x000104c2ae18(uVar12,(ulong)&param_9 | 4);
      lVar8 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + 1;
      piVar10 = (int *)(param_2 + -8);
      do {
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          if (7 < (int)uVar4) {
            return;
          }
          plVar9 = (long *)(param_2 + (long)(int)uVar4 * 0x10);
          *plVar9 = CONCAT44(param_10,param_9);
LAB_104c2a2b0:
          *(undefined4 *)(plVar9 + 1) = 2;
          *param_3 = uVar4 + 1;
          return;
        }
        piVar11 = piVar10 + 4;
        plVar9 = (long *)(piVar10 + 2);
        piVar10 = piVar11;
      } while (*plVar9 != CONCAT44(param_10,param_9));
    }
    *piVar11 = *piVar11 + 2;
  }
  return;
}



/* Entry: 104c2a2e0; end: 104c2a457;  */

void FUN_104c2a2e0(long param_1,int *param_2,long param_3,uint param_4,uint param_5,int param_6,
                  long param_7)

{
  long lVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  char *pcVar11;
  short *psVar12;
  long lVar13;
  int iVar14;
  
  lVar1 = param_1 + 0x20;
  pcVar11 = (char *)(param_3 + 8);
  param_7 = param_7 + -1;
  psVar12 = (short *)(param_3 + 2);
  lVar13 = 2;
  do {
    cVar6 = *pcVar11;
    if (cVar6 < '\x01') {
      return;
    }
    sVar8 = psVar12[-1];
    sVar5 = *psVar12;
    iVar14 = (int)cVar6;
    if ((char)param_6 == iVar14) {
      iVar14 = *param_2;
      if (iVar14 < 2) {
        *param_2 = iVar14 + 1;
        psVar2 = (short *)(param_1 + (long)iVar14 * 0x10);
        *psVar2 = sVar8;
        psVar2[1] = sVar5;
      }
      iVar14 = param_2[3];
      if (iVar14 < 2) {
        bVar10 = param_5 == *(byte *)(param_7 + (int)cVar6);
        sVar4 = -sVar5;
        if (bVar10) {
          sVar4 = sVar5;
        }
        sVar5 = -sVar8;
        if (bVar10) {
          sVar5 = sVar8;
        }
        param_2[3] = iVar14 + 1;
        lVar3 = lVar1 + (long)iVar14 * 0x10;
        *(short *)(lVar3 + 4) = sVar5;
        *(short *)(lVar3 + 6) = sVar4;
      }
    }
    else if ((param_6 << 0x10) >> 0x18 == iVar14) {
      iVar14 = param_2[1];
      if (iVar14 < 2) {
        param_2[1] = iVar14 + 1;
        lVar3 = param_1 + (long)iVar14 * 0x10;
        *(short *)(lVar3 + 4) = sVar8;
        *(short *)(lVar3 + 6) = sVar5;
      }
      iVar14 = param_2[2];
      if (iVar14 < 2) {
        bVar10 = param_4 == *(byte *)(param_7 + (int)cVar6);
        sVar4 = -sVar5;
        if (bVar10) {
          sVar4 = sVar5;
        }
        sVar5 = -sVar8;
        if (bVar10) {
          sVar5 = sVar8;
        }
        param_2[2] = iVar14 + 1;
        psVar2 = (short *)(lVar1 + (long)iVar14 * 0x10);
        *psVar2 = sVar5;
        psVar2[1] = sVar4;
      }
    }
    else {
      iVar7 = param_2[2];
      if (iVar7 < 2) {
        param_2[2] = iVar7 + 1;
        psVar2 = (short *)(lVar1 + (long)iVar7 * 0x10);
        sVar4 = sVar5;
        sVar9 = sVar8;
        if (param_4 != *(byte *)(param_7 + iVar14)) {
          sVar4 = -sVar5;
          sVar9 = -sVar8;
        }
        *psVar2 = sVar9;
        psVar2[1] = sVar4;
      }
      iVar7 = param_2[3];
      if (iVar7 < 2) {
        param_2[3] = iVar7 + 1;
        lVar3 = lVar1 + (long)iVar7 * 0x10;
        if (param_5 == *(byte *)(param_7 + iVar14)) {
          *(short *)(lVar3 + 4) = sVar8;
          *(short *)(lVar3 + 6) = sVar5;
        }
        else {
          *(short *)(lVar3 + 4) = -sVar8;
          *(short *)(lVar3 + 6) = -sVar5;
        }
      }
    }
    pcVar11 = pcVar11 + 1;
    psVar12 = psVar12 + 2;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}



/* Entry: 104c2a458; end: 104c2a63f;  */

void FUN_104c2a458(int *param_1,uint *param_2,long param_3,uint param_4,long param_5)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int *piVar11;
  
  lVar8 = 0;
  do {
    if ((lVar8 == 2) || (cVar6 = *(char *)(param_3 + 8 + lVar8), cVar6 < '\x01')) {
      return;
    }
    uVar9 = 0;
    psVar1 = (short *)(param_3 + lVar8 * 4);
    sVar4 = *psVar1;
    sVar5 = psVar1[1];
    bVar7 = param_4 == *(byte *)(param_5 + (ulong)((int)cVar6 - 1));
    sVar2 = -sVar5;
    if (bVar7) {
      sVar2 = sVar5;
    }
    sVar5 = -sVar4;
    if (bVar7) {
      sVar5 = sVar4;
    }
    uVar3 = *param_2;
    uVar10 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    piVar11 = param_1;
    for (; uVar10 != uVar9; uVar9 = uVar9 + 1) {
      if (CONCAT22(sVar2,sVar5) == *piVar11) {
        uVar10 = (uint)uVar9;
        break;
      }
      piVar11 = piVar11 + 4;
    }
    if (uVar10 == uVar3) {
      piVar11 = param_1 + (ulong)uVar3 * 4;
      *(short *)piVar11 = sVar5;
      *(short *)((long)piVar11 + 2) = sVar2;
      piVar11[2] = 2;
      *param_2 = uVar3 + 1;
    }
    lVar8 = lVar8 + 1;
  } while( true );
}



/* Entry: 104c2a640; end: 104c2aa0b;  */

undefined8
FUN_104c2a640(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             long *param_7,int param_8,int param_9)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar9;
  long lVar10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int iVar11;
  long extraout_x9;
  uint uVar12;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  byte bVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lStack_58;
  
  uVar14 = *(int *)(param_3 + 0xec) + 0x7f >> 3 & 0xfffffff0;
  if (param_8 < 2) {
    uVar12 = 1;
  }
  else {
    uVar12 = (uint)*(byte *)(param_3 + 0x1c1);
  }
  iVar2 = uVar12 * uVar14;
  *(int *)(param_1 + 3) = 0x10 << (ulong)(*(byte *)(param_2 + 0x188) & 0x1f);
  *param_1 = param_3;
  iVar9 = *(int *)(param_3 + 0xec) + 7 >> 3;
  iVar11 = *(int *)(param_3 + 0xf4) + 7 >> 3;
  *(int *)(param_1 + 2) = iVar9;
  *(int *)((long)param_1 + 0x14) = iVar11;
  *(int *)(param_1 + 1) = iVar9 << 1;
  *(int *)((long)param_1 + 0xc) = iVar11 << 1;
  param_1[0x14] = param_5;
  param_1[0x17] = (long)(int)uVar14;
  *(int *)(param_1 + 0x19) = param_8;
  *(int *)((long)param_1 + 0xcc) = param_9;
  if (iVar2 != *(int *)((long)param_1 + 0x9c)) {
    lVar16 = (long)iVar2 * 0x348 << (ulong)(1 < param_9);
    _free(param_1[0x18]);
    plVar8 = &lStack_58;
    _posix_memalign(plVar8,0x40,lVar16 + (long)iVar2 * 0x50);
    if ((int)plVar8 != 0) {
      lStack_58 = 0;
    }
    param_1[0x18] = lStack_58;
    if (lStack_58 == 0) {
      *(undefined4 *)((long)param_1 + 0x9c) = 0;
      return 0xfffffff4;
    }
    param_1[0x16] = lVar16 + lStack_58;
    *(int *)((long)param_1 + 0x9c) = iVar2;
  }
  bVar1 = *(byte *)(param_3 + 0xf8);
  plVar8 = param_1 + 4;
  for (lVar16 = 0; lVar16 != 0x1c; lVar16 = lVar16 + 4) {
    bVar13 = *(byte *)(param_2 + 0x19c);
    uVar14 = (uint)bVar13;
    if (bVar13 != 0) {
      uVar14 = 1 << (ulong)(bVar13 - 1 & 0x1f);
      uVar12 = *(int *)(param_4 + lVar16) - (uint)bVar1;
      uVar14 = (uVar12 & uVar14 - 1) - (uVar12 & uVar14);
    }
    *(bool *)plVar8 = 0 < (int)uVar14;
    *(byte *)((long)plVar8 + 7) = (byte)(uVar14 >> 0x1f);
    bVar13 = *(byte *)(param_2 + 0x19c);
    if (bVar13 != 0) {
      uVar14 = 1 << (ulong)(bVar13 - 1 & 0x1f);
      uVar12 = (uint)bVar1 - *(int *)(param_4 + lVar16);
      iVar9 = (uVar12 & uVar14 - 1) - (uVar12 & uVar14);
      if (iVar9 < -0x1e) {
        iVar9 = -0x1f;
      }
      if (0x1e < iVar9) {
        iVar9 = 0x1f;
      }
      bVar13 = (byte)iVar9;
    }
    *(byte *)((long)plVar8 + 0xe) = bVar13;
    plVar8 = (long *)((long)plVar8 + 1);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = (long)param_7;
  uVar14 = (uint)*(byte *)(param_3 + 0x1b5);
  if ((*(byte *)(param_3 + 0x1b5) == 0) ||
     (uVar14 = (uint)*(byte *)(param_2 + 0x19c), *(byte *)(param_2 + 0x19c) == 0))
  goto LAB_104c2a9e8;
  uVar6 = true;
  cVar4 = false;
  cVar5 = false;
  if (*param_7 == 0) {
LAB_104c2a820:
    iVar9 = 0;
    iVar11 = 2;
  }
  else {
    iVar9 = *(int *)(param_6 + 0x18);
    iVar11 = *(int *)(param_4 + 0xc);
    cVar4 = SBORROW4(iVar9,iVar11);
    cVar5 = iVar9 - iVar11 < 0;
    uVar6 = iVar9 == iVar11;
    if ((bool)uVar6) goto LAB_104c2a820;
    iVar9 = 1;
    *(undefined4 *)(param_1 + 0x13) = 1;
    *(undefined1 *)((long)param_1 + 0x35) = 0;
    iVar11 = 3;
  }
  if (((param_7[4] != 0) && (*(char *)(param_2 + 0x19c) != '\0')) &&
     (func_0x000104c2ae74(), iVar11 = extraout_w9, iVar9 = extraout_w8,
     !(bool)uVar6 && cVar5 == cVar4)) {
    func_0x000104c2af54();
    *(undefined1 *)(extraout_x10 + 0x35) = 4;
    iVar11 = extraout_w9_00;
    iVar9 = extraout_w8_00;
  }
  if (((param_7[5] != 0) && (*(char *)(param_2 + 0x19c) != '\0')) &&
     (func_0x000104c2ae74(), iVar9 = extraout_w8_01, iVar11 = extraout_w9_01,
     !(bool)uVar6 && cVar5 == cVar4)) {
    func_0x000104c2af54();
    *(undefined1 *)(extraout_x10_00 + 0x35) = 5;
    iVar9 = (int)param_1[0x13];
    iVar11 = extraout_w9_02;
  }
  cVar5 = SBORROW4(iVar9,iVar11);
  cVar4 = iVar9 - iVar11 < 0;
  bVar7 = iVar9 == iVar11;
  if (((iVar9 < iVar11) && (param_7[6] != 0)) &&
     ((*(char *)(param_2 + 0x19c) != '\0' &&
      (func_0x000104c2ae74(), iVar9 = extraout_w8_02, iVar11 = extraout_w9_03,
      !bVar7 && cVar4 == cVar5)))) {
    func_0x000104c2af54();
    *(undefined1 *)(extraout_x10_01 + 0x35) = 6;
    iVar9 = (int)param_1[0x13];
    iVar11 = extraout_w9_04;
  }
  if ((iVar9 < iVar11) && (param_7[1] != 0)) {
    func_0x000104c2af54();
    *(undefined1 *)(extraout_x9 + 0x35) = 1;
  }
  lVar16 = (long)param_1 + 0x44;
  for (lVar10 = 0; lVar10 < (int)param_1[0x13]; lVar10 = lVar10 + 1) {
    bVar13 = *(byte *)((long)param_1 + lVar10 + 0x35);
    iVar9 = *(int *)(param_4 + (ulong)bVar13 * 4);
    bVar1 = *(byte *)(param_2 + 0x19c);
    if (bVar1 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1 << (ulong)(bVar1 - 1 & 0x1f);
      uVar12 = iVar9 - (uint)*(byte *)(param_3 + 0xf8);
      uVar14 = (uVar12 & uVar14 - 1) - (uVar12 & uVar14);
    }
    uVar12 = -uVar14;
    if (-1 < (int)uVar14) {
      uVar12 = uVar14;
    }
    if (uVar12 < 0x20) {
      lVar15 = 0;
      uVar12 = -uVar14;
      if (3 < bVar13) {
        uVar12 = uVar14;
      }
      *(uint *)((long)param_1 + lVar10 * 4 + 0x38) = uVar12;
      uVar14 = 1 << (ulong)(bVar1 - 1 & 0x1f);
      for (; lVar15 != 0x1c; lVar15 = lVar15 + 4) {
        if (bVar1 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = iVar9 - *(int *)(param_6 + (ulong)(uint)bVar13 * 0x1c + lVar15);
          uVar3 = (uVar12 & uVar14 - 1) - (uVar12 & uVar14);
          uVar12 = 0;
          if (uVar3 < 0x20) {
            uVar12 = uVar3;
          }
        }
        *(uint *)(lVar16 + lVar15) = uVar12;
      }
    }
    else {
      *(undefined4 *)((long)param_1 + lVar10 * 4 + 0x38) = 0x80000000;
    }
    lVar16 = lVar16 + 0x1c;
  }
  uVar14 = (uint)(0 < (int)param_1[0x13]);
LAB_104c2a9e8:
  *(uint *)((long)param_1 + 0x1c) = uVar14;
  return 0;
}



/* Entry: 104c2aa0c; end: 104c2ad8f;  */

void FUN_104c2aa0c(long param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 200) != 1) {
    iVar5 = param_2;
  }
  iVar9 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) <= param_6) {
    param_6 = *(int *)(param_1 + 0x14);
  }
  lVar10 = *(long *)(param_1 + 0xb8);
  lVar16 = lVar10 * 5;
  lVar22 = *(long *)(param_1 + 0xb0) + lVar10 * iVar5 * 0x50 + lVar16 * (ulong)(param_5 & 0xf);
  for (uVar25 = param_5;
      lVar26 = (-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2) +
               (long)(int)param_3, lVar20 = (long)(int)param_3, (int)uVar25 < param_6;
      uVar25 = uVar25 + 1) {
    for (; lVar20 < param_4; lVar20 = lVar20 + 1) {
      *(undefined4 *)(lVar22 + lVar26) = 0x80008000;
      lVar26 = lVar26 + 5;
    }
    lVar22 = lVar22 + lVar16;
  }
  lVar22 = 0;
  uVar25 = param_3;
  if ((int)param_3 < 9) {
    uVar25 = 8;
  }
  iVar6 = param_4 + 8;
  if (iVar9 <= param_4 + 8) {
    iVar6 = iVar9;
  }
  lVar20 = *(long *)(param_1 + 0xb0);
  do {
    if (*(int *)(param_1 + 0x98) <= lVar22) {
      return;
    }
    iVar9 = *(int *)(param_1 + 0x38 + lVar22 * 4);
    if (iVar9 != -0x80000000) {
      bVar13 = *(byte *)(param_1 + 0x35 + lVar22);
      uVar15 = bVar13 - 4;
      lVar26 = *(long *)(*(long *)(param_1 + 0xa8) + (ulong)bVar13 * 8) +
               lVar10 * (ulong)param_5 * 5;
      for (uVar29 = param_5; (int)uVar29 < param_6; uVar29 = uVar29 + 1) {
        uVar27 = uVar29 & 0x7ffffff8;
        uVar7 = uVar27;
        if ((int)uVar27 <= (int)param_5) {
          uVar7 = param_5;
        }
        uVar18 = uVar25 - 8;
        iVar8 = uVar27 + 8;
        if (param_6 <= (int)(uVar27 + 8)) {
          iVar8 = param_6;
        }
        for (; uVar28 = (ulong)uVar18, (int)uVar18 < iVar6; uVar18 = uVar18 + 1) {
          piVar2 = (int *)(lVar26 + (-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2) +
                                    (long)(int)uVar18);
          cVar14 = (char)piVar2[1];
          if (((long)cVar14 != 0) &&
             (iVar12 = *(int *)(param_1 + lVar22 * 0x1c + (long)cVar14 * 4 + 0x40), iVar12 != 0)) {
            iVar11 = *piVar2;
            iVar17 = iVar11;
            func_0x000104c2af2c(iVar11,iVar9);
            uVar19 = (uint)(short)iVar17;
            uVar27 = -uVar19;
            if (-1 < (int)uVar19) {
              uVar27 = uVar19;
            }
            uVar4 = -(uVar27 >> 6);
            if (-1 < (int)(uVar19 ^ uVar15)) {
              uVar4 = uVar27 >> 6;
            }
            lVar23 = (long)(int)uVar18 * 5;
            if ((int)(uVar4 + uVar29) < (int)uVar7 || iVar8 <= (int)(uVar4 + uVar29)) {
              do {
                uVar27 = (uint)uVar28;
                uVar18 = iVar6 - 1U;
                if ((iVar6 <= (int)(uVar27 + 1)) ||
                   (lVar21 = lVar26 + lVar23, uVar18 = uVar27, *(char *)(lVar21 + 9) != cVar14))
                break;
                lVar23 = lVar23 + 5;
                uVar28 = (ulong)(uVar27 + 1);
              } while (*(int *)(lVar21 + 5) == iVar11);
            }
            else {
              lVar21 = 0;
              uVar27 = iVar17 >> 0x10;
              uVar19 = -uVar27;
              if (-1 < (int)uVar27) {
                uVar19 = uVar27;
              }
              uVar1 = -(uVar19 >> 6);
              if (-1 < (int)(uVar15 ^ uVar27)) {
                uVar1 = uVar19 >> 6;
              }
              uVar1 = uVar1 + uVar18;
              lVar24 = (long)(int)uVar1;
              do {
                uVar19 = (uint)uVar28;
                uVar27 = (uVar19 & 0xfffffff8) - 8;
                if ((int)uVar27 <= (int)param_3) {
                  uVar27 = param_3;
                }
                if ((int)uVar27 <= lVar24) {
                  iVar17 = (uVar19 & 0xfffffff8) + 0x10;
                  if (param_4 <= iVar17) {
                    iVar17 = param_4;
                  }
                  if (lVar24 < iVar17) {
                    piVar2 = (int *)(lVar20 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                              (ulong)uVar1 << 2) + (long)(int)uVar1 +
                                              lVar10 * ((long)iVar5 * 0x50 +
                                                       ((ulong)(uVar29 + uVar4) & 0xf) * 5) + lVar21
                                    );
                    *piVar2 = iVar11;
                    *(char *)(piVar2 + 1) = (char)iVar12;
                  }
                }
                uVar18 = iVar6 - 1U;
                if ((iVar6 <= (int)(uVar19 + 1)) ||
                   (lVar3 = lVar26 + lVar23 + lVar21, uVar18 = uVar19,
                   *(char *)(lVar3 + 9) != cVar14)) break;
                lVar24 = lVar24 + 1;
                lVar21 = lVar21 + 5;
                uVar28 = (ulong)(uVar19 + 1);
              } while (*(int *)(lVar3 + 5) == iVar11);
            }
          }
        }
        lVar26 = lVar26 + lVar16;
      }
    }
    lVar22 = lVar22 + 1;
  } while( true );
}



/* Entry: 104c2ad90; end: 104c2af7b;  */

void FUN_104c2ad90(ushort *param_1)

{
  param_1[1] = (param_1[1] - ((short)param_1[1] >> 0xf)) + 3 & 0xfff8;
  *param_1 = (*param_1 - ((short)*param_1 >> 0xf)) + 3 & 0xfff8;
  return;
}



/* Entry: 104c2af7c; end: 104c2b2d7;  */

undefined8 FUN_104c2af7c(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  int iVar22;
  
  lVar19 = *(long *)(param_1 + 0x1560);
  lVar16 = *(long *)(param_1 + 0x18);
  uVar10 = (uint)*(byte *)(lVar16 + 0x1c1) * (uint)*(byte *)(lVar16 + 0x1bd);
  uVar21 = (ulong)uVar10;
  if ((int)param_2 < 2) {
    iVar8 = uVar10 << (1 < *(uint *)(*(long *)(param_1 + 0xcb8) + 8));
    if (iVar8 <= *(int *)(param_1 + 0x1594)) {
LAB_104c2b00c:
      *(ulong *)(param_1 + 0x1568) = lVar19 + uVar21 * 0x20;
      goto LAB_104c2b014;
    }
    _realloc(lVar19,iVar8 << 5);
    if (lVar19 != 0) {
      _bzero();
      *(long *)(param_1 + 0x1560) = lVar19;
      *(int *)(param_1 + 0x1594) = iVar8;
      lVar16 = *(long *)(param_1 + 0x18);
      goto LAB_104c2b00c;
    }
LAB_104c2b108:
    uVar15 = 0xffffffff;
  }
  else {
LAB_104c2b014:
    if (*(char *)(lVar16 + 0x33e) == '\0') {
      bVar12 = *(char *)(lVar16 + 0x33f) != '\0';
    }
    else {
      bVar12 = true;
    }
    cVar7 = *(char *)(*(long *)(param_1 + 8) + 0x19e);
    iVar8 = *(int *)(lVar16 + 0xec);
    iVar5 = *(int *)(lVar16 + 0xf0);
    iVar6 = *(int *)(param_1 + 0x14d8);
    lVar16 = *(long *)(param_1 + 0x1558);
    iVar22 = *(int *)(param_1 + 0xd88);
    uVar9 = iVar22 << (1 < *(uint *)(*(long *)(param_1 + 0xcb8) + 8));
    if (*(int *)(param_1 + 0x1590) < (int)uVar9) {
      _realloc(lVar16,-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5);
      if (lVar16 == 0) goto LAB_104c2b108;
      func_0x000104c2c9a4();
      *(long *)(param_1 + 0x1558) = lVar16;
      *(uint *)(param_1 + 0x1590) = uVar9;
      iVar22 = *(int *)(param_1 + 0xd88);
    }
    uVar9 = param_2 & 1;
    if (uVar9 == 0) {
      uVar3 = iVar22 + 0x1f >> 5;
      lVar13 = *(long *)(param_1 + 0x10e8);
      if (*(int *)(param_1 + 0x1120) < (int)uVar3) {
        _realloc(lVar13,-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                        (ulong)(uVar3 << 1) << 2);
        if (lVar13 == 0) goto LAB_104c2b108;
        *(long *)(param_1 + 0x10e8) = lVar13;
        *(long *)(param_1 + 0x10f0) = lVar13 + (long)(int)uVar3 * 4;
      }
      *(uint *)(param_1 + 0x1120) = uVar3;
      func_0x000104c2c9a4((long)(int)uVar3);
      func_0x000104c2c9a4(*(undefined8 *)(param_1 + 0x10f0));
      lVar13 = 0x10e4;
    }
    else {
      lVar13 = 0x10e0;
    }
    puVar1 = (undefined4 *)(lVar19 + (ulong)(uVar10 * uVar9) * 0x20);
    puVar2 = (undefined4 *)(lVar16 + (long)(int)(iVar22 * uVar9) * 0x20);
    *(undefined4 *)(param_1 + lVar13) = 0;
    *(undefined4 *)(param_1 + (ulong)uVar9 * 4 + 0x10d8) = 0;
    *(undefined8 *)(puVar2 + 2) = 0x100000000;
    puVar2[4] = 0;
    uVar17 = 3;
    if (param_2 != 1) {
      uVar17 = 5;
    }
    uVar18 = 10;
    if (iVar8 != iVar5) {
      uVar18 = 8;
    }
    uVar4 = 6;
    if (cVar7 == '\0' && iVar6 == 0) {
      uVar4 = uVar18;
    }
    if (param_2 != 1 && !bVar12) {
      uVar17 = uVar4;
    }
    uVar18 = (undefined4)((param_1 - **(long **)(param_1 + 0xcb8)) / 0x1640);
    *puVar2 = uVar18;
    puVar2[1] = uVar17;
    uVar17 = 2;
    if (param_2 != 1) {
      uVar17 = 4;
    }
    lVar19 = 0x3530;
    puVar20 = (undefined4 *)0x0;
    puVar11 = puVar1;
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      iVar8 = *(int *)(*(long *)(param_1 + 0xcc0) + lVar19) >> (*(uint *)(param_1 + 0xd8c) & 0x1f);
      puVar11[2] = iVar8;
      puVar14 = puVar2;
      if ((puVar2 != (undefined4 *)0x0) && (iVar8 != 0)) {
        *(undefined4 **)(puVar20 + 6) = puVar2;
        puVar14 = (undefined4 *)0x0;
        puVar20 = puVar2;
      }
      *(undefined8 *)(puVar11 + 4) = 0;
      puVar11[3] = 0;
      *puVar11 = uVar18;
      puVar11[1] = uVar17;
      if (puVar20 != (undefined4 *)0x0) {
        *(undefined4 **)(puVar20 + 6) = puVar11;
      }
      lVar19 = lVar19 + 0x3820;
      puVar20 = puVar11;
      puVar11 = puVar11 + 8;
      puVar2 = puVar14;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 **)(puVar20 + 6) = puVar2;
      puVar20 = puVar2;
    }
    *(undefined8 *)(puVar20 + 6) = 0;
    *(undefined4 *)(param_1 + (ulong)uVar9 * 4 + 0x159c) = 0;
    _pthread_mutex_lock(param_1 + 0x15d8);
    if (*(long *)(param_1 + 0x1618) == 0) {
      *(undefined4 **)(param_1 + 0x1618) = puVar1;
    }
    else {
      *(undefined4 **)(*(long *)(param_1 + 0x1620) + 0x18) = puVar1;
    }
    *(undefined4 **)(param_1 + 0x1620) = puVar20;
    *(undefined4 *)(param_1 + 0x15d0) = 1;
    *(undefined4 *)(param_1 + 0x1598) = 1;
    _pthread_mutex_unlock(param_1 + 0x15d8);
    uVar15 = 0;
  }
  return uVar15;
}



/* Entry: 104c2b2d8; end: 104c2b3c7;  */

void FUN_104c2b2d8(long param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  *(undefined4 *)(param_1 + 0x1598) = 0;
  *(int *)(param_1 + 0x1570) = (int)((param_1 - **(long **)(param_1 + 0xcb8)) / 0x1640);
  *(undefined8 *)(param_1 + 0x157c) = 0;
  *(undefined8 *)(param_1 + 0x1574) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1570);
  plVar9 = (long *)(param_1 + 0x15b8);
  lVar7 = 0;
  while (lVar8 = *plVar9, lVar8 != 0) {
    uVar3 = *(uint *)(lVar8 + 4);
    uVar4 = *(uint *)(param_1 + 0x1574);
    if (uVar3 == 2) {
      if (uVar4 < 3) {
        if (*(int *)(param_1 + 0x1578) <= *(int *)(lVar8 + 8)) {
          if (*(int *)(param_1 + 0x1578) < *(int *)(lVar8 + 8)) break;
LAB_104c2b394:
          lVar10 = *(long *)(param_1 + 0x1560 + (ulong)(uVar3 == 2) * 8);
          if ((int)((ulong)((long)puVar2 - lVar10) >> 5) <= (int)((ulong)(lVar8 - lVar10) >> 5))
          break;
        }
      }
    }
    else {
      if (uVar4 == 2) break;
      if (*(int *)(param_1 + 0x1578) <= *(int *)(lVar8 + 8)) {
        if (*(int *)(param_1 + 0x1578) < *(int *)(lVar8 + 8)) break;
        if (uVar4 <= uVar3) {
          if (uVar3 <= uVar4) goto LAB_104c2b394;
          break;
        }
      }
    }
    lVar7 = lVar8;
    plVar9 = (long *)(lVar8 + 0x18);
  }
  lVar10 = *(long *)(param_1 + 0x1550);
  if (**(int **)(*(long *)(param_1 + 0xcb8) + 0x340) == 0) {
    if (lVar7 == 0) {
      *(undefined4 **)(param_1 + 0x15b8) = puVar2;
    }
    else {
      *(undefined4 **)(lVar7 + 0x18) = puVar2;
    }
    if (lVar8 == 0) {
      *(undefined4 **)(param_1 + 0x15c0) = puVar2;
    }
    *(long *)(param_1 + 0x1588) = lVar8;
    func_0x000104c2c5f8(*(undefined8 *)(param_1 + 0xcb8),lVar10,*puVar2);
    puVar1 = (uint *)(lVar10 + 0x7c);
    do {
      uVar3 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar3 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__pthread_cond_signal_11034c850)(lVar10 + 0x40);
      return;
    }
  }
  return;
}



/* Entry: 104c2b3c8; end: 104c2b42f;  */

void FUN_104c2b3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x438) = param_3;
  *(undefined8 *)(param_1 + 0x440) = param_2;
  *(undefined8 *)(param_1 + 0x448) = 0xb;
  *(undefined4 *)(param_1 + 0x450) = 0;
  _pthread_mutex_lock(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x400) = 1;
  _pthread_cond_signal(param_1 + 0x3c0);
  do {
    _pthread_cond_wait(param_1 + 0x408,param_1 + 0x380);
  } while (*(int *)(param_1 + 0x404) == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x380);
  return;
}



/* Entry: 104c2b430; end: 104c2c32f;  */

uint FUN_104c2b430(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar14;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long *extraout_x14;
  long *plVar22;
  long *extraout_x15;
  long *extraout_x15_00;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined8 *puVar12;
  
  plVar28 = (long *)*param_1;
  lVar23 = param_1[0x7e51];
  _pthread_setname_np("dav1d-worker");
  func_0x000104c2c90c();
  piVar1 = (int *)(lVar23 + 0xcc);
  piVar2 = (int *)(lVar23 + 0xd0);
LAB_104c2b488:
  do {
    if (*(int *)((long)param_1 + 0x3f29c) != 0) {
      func_0x000104c2c938();
      return 0;
    }
    if (*(int *)plVar28[0x68] == 0) {
      plVar21 = plVar28;
      FUN_104c2c330();
      if (*(int *)(lVar23 + 0x80) != 0) {
        lVar15 = *(long *)(lVar23 + 0xc0);
        if (*(int *)(lVar23 + 200) == 0xb) {
          *(undefined4 *)(lVar23 + 0x80) = 0;
          if (*(int *)(lVar23 + 0x7c) != 0) {
            func_0x000104c2c914();
          }
          func_0x000104c2c938();
          if (*(int *)(lVar15 + 0x44) != 8) goto LAB_104c2c32c;
          plVar21 = plVar28 + 0x19d3;
          func_0x000104c2c98c();
          FUN_104c12c94();
          *(undefined4 *)(lVar23 + 200) = 0xc;
          func_0x000104c2c90c();
          *(undefined4 *)(lVar23 + 0x80) = 1;
        }
        else if (*(int *)(lVar23 + 200) != 0xc) {
LAB_104c2c32c:
          _abort();
          lVar23 = 0;
          uVar16 = 0;
          for (uVar25 = 0; uVar25 < *(uint *)(plVar21 + 1); uVar25 = uVar25 + 1) {
            lVar15 = *plVar21 + lVar23;
            FUN_104c2c398(lVar15);
            uVar16 = (uint)lVar15 | uVar16;
            lVar23 = lVar23 + 0x1640;
          }
          return uVar16;
        }
        do {
          iVar14 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        func_0x000104c2c938();
        iVar11 = (*(int *)(lVar15 + 0x3c) + 0x1f) / 0x20;
        while (iVar14 < iVar11) {
          if (iVar14 < iVar11 + -1) {
            func_0x000104c2c914();
          }
          else {
            func_0x000104c2c90c();
            *(undefined4 *)(lVar23 + 0x80) = 0;
            func_0x000104c2c938();
          }
          if (*(int *)(lVar15 + 0x44) != 8) goto LAB_104c2c32c;
          plVar21 = plVar28 + 0x19d3;
          func_0x000104c2c98c();
          FUN_104c12f50();
          do {
            iVar14 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        func_0x000104c2c90c();
        *(undefined4 *)(lVar23 + 0x80) = 0;
        do {
          iVar14 = *piVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (*piVar1 <= iVar14 + 1) {
          *(undefined4 *)(lVar23 + 0x84) = 1;
          _pthread_cond_signal(lVar23 + 0x88);
        }
        goto LAB_104c2b488;
      }
      uVar16 = *(uint *)(plVar28 + 1);
      if (1 < uVar16) {
        for (uVar13 = 0; uVar13 < uVar16; uVar13 = uVar13 + 1) {
          uVar16 = uVar13 + *(int *)(lVar23 + 0x70);
          uVar10 = *(uint *)(plVar28 + 1);
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = uVar16 / uVar10;
          }
          plVar22 = (long *)(*plVar28 + (ulong)(uVar16 - uVar9 * uVar10) * 0x1640);
          if (((int)plVar22[0x2b3] == 0) &&
             (plVar26 = (long *)plVar22[0x2b7], plVar26 != (long *)0x0)) {
            if (*(int *)((long)plVar26 + 4) == 1) {
              if (((int *)plVar22[0x181] == (int *)0x0) || (*(int *)plVar22[0x181] != 0))
              goto LAB_104c2be0c;
            }
            else if (*(int *)((long)plVar26 + 4) == 0) goto LAB_104c2be14;
          }
          uVar16 = *(uint *)(plVar28 + 1);
        }
      }
      uVar13 = *(uint *)(lVar23 + 0x74);
      while (iVar14 = (int)plVar21, uVar13 < uVar16) {
        uVar16 = *(int *)(lVar23 + 0x74) + *(int *)(lVar23 + 0x70);
        uVar13 = *(uint *)(plVar28 + 1);
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = uVar16 / uVar13;
        }
        plVar22 = (long *)(*plVar28 + (ulong)(uVar16 - uVar10 * uVar13) * 0x1640);
        plVar21 = plVar22;
        FUN_104c2c398();
        plVar27 = (long *)plVar22[0x2b9];
        plVar26 = plVar22 + 0x2b7;
        if (plVar27 != (long *)0x0) {
          plVar26 = plVar27 + 3;
        }
        puVar3 = (uint *)((long)plVar22 + 0x15ac);
        plVar24 = (long *)*plVar26;
        if ((long *)*plVar26 != (long *)0x0) {
LAB_104c2b728:
          plVar26 = plVar24;
          iVar14 = *(int *)((long)plVar26 + 4);
          if (iVar14 == 1) goto LAB_104c2b768;
          if (iVar14 == 4 || iVar14 == 2) {
            plVar21 = plVar26;
            FUN_104c2c420(plVar26,plVar22,1 < *(uint *)(plVar28 + 1));
            if ((int)plVar21 != 0) goto LAB_104c2b768;
          }
          else {
            if (*(int *)((long)plVar26 + 0xc) != 0) {
              uVar25 = (ulong)(iVar14 == 3);
              bVar5 = *(byte *)(plVar22[3] + 0x1bd);
              iVar11 = *(int *)((long)plVar22 + uVar25 * 4 + 0x10d8);
              if (iVar14 == 3) {
                if ((int)plVar22[0x21c] < (int)plVar26[1]) goto LAB_104c2b768;
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar8) {
                    *puVar3 = *puVar3 | (uint)((int)plVar22[0x21c] == 0x7ffffffe);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              uVar18 = 0;
              while( true ) {
                if (*(byte *)(plVar22[3] + 0x1bd) <= uVar18) {
                  if ((int)plVar26[1] + 1 < (int)plVar22[0x1b1]) {
                    plVar26[5] = plVar26[1];
                    plVar26[4] = *plVar26;
                    plVar26[7] = plVar26[3];
                    plVar26[6] = plVar26[2];
                    uVar16 = (int)plVar26[5] + 1;
                    *(uint *)(plVar26 + 5) = uVar16;
                    lVar15 = (long)*(int *)((long)plVar22 + uVar25 * 4 + 0x10d8) + 1;
                    if (uVar16 == *(ushort *)(plVar22[3] + lVar15 * 2 + 0x244)) {
                      *(int *)((long)plVar22 + uVar25 * 4 + 0x10d8) = (int)lVar15;
                      uVar16 = *(uint *)(plVar26 + 5);
                    }
                    *(uint *)((long)plVar26 + 0x2c) = uVar16 + 1;
                    func_0x000104c2b318(plVar22,plVar26 + 4,0);
                  }
                  goto LAB_104c2b928;
                }
                iVar14 = *(int *)(plVar22[0x198] +
                                  (uVar18 + (long)iVar11 * (long)(int)(uint)bVar5) * 0x3820 +
                                  uVar25 * 4 + 0x3540);
                if (iVar14 < *(int *)((long)plVar26 + 0xc)) break;
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar8) {
                    *puVar3 = *puVar3 | (uint)(iVar14 == 0x7ffffffe);
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                uVar18 = uVar18 + 1;
              }
              goto LAB_104c2b768;
            }
            if (iVar14 == 7) {
              if ((*(uint *)(plVar22[0x21e] + (long)((int)plVar26[1] + -1 >> 5) * 4) >>
                   (ulong)((int)plVar26[1] - 1U & 0x1f) & 1) == 0) goto LAB_104c2b768;
            }
            else {
              if (*(int *)((long)plVar22 + 0x10e4) < (int)plVar26[2]) goto LAB_104c2b768;
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar8) {
                  *puVar3 = *puVar3 | (uint)(*(int *)((long)plVar22 + 0x10e4) == 0x7ffffffe);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
          }
LAB_104c2b928:
          if (plVar27 == (long *)0x0) goto LAB_104c2be14;
          lVar15 = plVar26[3];
          plVar27[3] = lVar15;
          goto joined_r0x000104c2b938;
        }
LAB_104c2b89c:
        uVar13 = *(int *)(lVar23 + 0x74) + 1;
        *(uint *)(lVar23 + 0x74) = uVar13;
        uVar16 = *(uint *)(plVar28 + 1);
      }
      func_0x000104c2c940();
      if ((iVar14 != 0) || (plVar21 = plVar28, FUN_104c2c330(), (int)plVar21 != 0))
      goto LAB_104c2b488;
    }
    *(undefined4 *)(param_1 + 0x7e53) = 1;
    _pthread_cond_signal(param_1 + 0x7e42);
    *(undefined4 *)(lVar23 + 0x7c) = 0;
    _pthread_cond_wait(lVar23 + 0x40,lVar23);
    *(undefined4 *)(param_1 + 0x7e53) = 0;
    func_0x000104c2c940();
  } while( true );
LAB_104c2be0c:
  do {
    func_0x000104c2c970();
    plVar22 = extraout_x15_00;
  } while (extraout_w11 != 0);
LAB_104c2be14:
  plVar27 = (long *)0x0;
  lVar15 = plVar26[3];
  plVar22[0x2b7] = lVar15;
joined_r0x000104c2b938:
  if (lVar15 == 0) {
    plVar22[0x2b8] = (long)plVar27;
  }
  if ((1 < *(uint *)((long)plVar26 + 4)) && (plVar22[0x2b7] == 0)) {
    *(int *)(lVar23 + 0x74) = *(int *)(lVar23 + 0x74) + 1;
  }
  plVar26[3] = 0;
  func_0x000104c2c980(lVar23 + 0x7c);
  plVar21 = (long *)(lVar23 + 0x40);
  _pthread_cond_signal();
  func_0x000104c2c938();
  puVar3 = (uint *)((long)extraout_x15 + 0x15ac);
code_r0x000104c2b994:
  uVar13 = 0x7ffffffe;
  uVar16 = *(uint *)plVar28[0x68];
  do {
    uVar10 = *puVar3;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar8) {
      *puVar3 = uVar10 | uVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  param_1[1] = extraout_x15;
  uVar9 = *(uint *)((long)plVar26 + 4);
  if (10 < uVar9) goto LAB_104c2c32c;
  uVar20 = *(uint *)(plVar26 + 1);
  plVar21 = (long *)(ulong)uVar20;
  iVar14 = 0x7ffffffe;
  plVar22 = extraout_x15;
  plVar24 = (long *)0x7ffffffe;
  switch(uVar9) {
  case 0:
    plVar21 = extraout_x15;
    FUN_104c08234();
    iVar14 = (int)plVar21;
    if ((int *)extraout_x15[0x181] == (int *)0x0) {
      iVar11 = 1;
      if (iVar14 == 0) goto code_r0x000104c2bb18;
code_r0x000104c2bdc8:
      _pthread_mutex_lock(lVar23);
      if (iVar14 == 0) {
        iVar14 = -0x16;
      }
      FUN_104c2c720(extraout_x15,iVar14);
      func_0x000104c2c900();
      goto LAB_104c2b488;
    }
    iVar11 = *(int *)extraout_x15[0x181];
    if (iVar14 != 0) goto code_r0x000104c2bdc8;
code_r0x000104c2bb18:
    if (iVar11 == 0x7ffffffe) goto code_r0x000104c2bdc8;
    *(undefined4 *)((long)plVar26 + 4) = 1;
    plVar27 = plVar21;
    if (iVar11 == 0) goto code_r0x000104c2bcf4;
    goto code_r0x000104c2b994;
  case 1:
    if (*puVar3 == 0) {
      plVar21 = extraout_x15;
      func_0x000104c08f00();
      iVar11 = (int)plVar21;
    }
    else {
      iVar11 = -0x16;
    }
    if ((*(char *)(extraout_x15[3] + 0x1b6) != '\0') && ((int)extraout_x15[0x2b5] == 0)) {
      if (-1 < iVar11) {
        iVar14 = 1;
      }
      *(int *)extraout_x15[0x184] = iVar14;
    }
    if (iVar11 == 0) {
      plVar21 = extraout_x15 + 0x2b6;
      for (lVar15 = 1; lVar15 != 3; lVar15 = lVar15 + 1) {
        plVar22 = extraout_x15;
        FUN_104c2af7c(extraout_x15,lVar15);
        if ((int)plVar22 != 0) {
          func_0x000104c2c90c();
          func_0x000104c2c980((long)extraout_x15 + (2 - lVar15) * 4 + 0x159c);
          *(undefined4 *)((long)extraout_x15 + 0x15ac) = 0xffffffff;
          bVar5 = *(byte *)(extraout_x15[3] + 0x1bd);
          bVar6 = *(byte *)(extraout_x15[3] + 0x1c1);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *(uint *)plVar21 =
                   (int)*plVar21 - ((int)extraout_x15[0x1b1] + (uint)bVar6 * (uint)bVar5);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *(undefined4 *)(extraout_x15[0x14d] + lVar15 * 4 + -4) = 0xfffffffe;
          if ((lVar15 == 2) && ((int)extraout_x15[0x2b4] != 0)) {
            func_0x000104c0948c(extraout_x15,0xfffffff4);
            *(undefined4 *)((long)extraout_x15 + 0xc34) = 0;
            _pthread_cond_signal(extraout_x15 + 0x2a4);
          }
          else {
            func_0x000104c2c938();
          }
        }
      }
      func_0x000104c2c90c();
    }
    else {
      _pthread_mutex_lock(lVar23);
      FUN_104c2c720(extraout_x15,iVar11);
      func_0x000104c2c900();
      func_0x000104c2c980(extraout_x15 + 0x2b3);
    }
    goto LAB_104c2b488;
  default:
    uVar25 = (ulong)(uVar9 == 2);
    uVar19 = (uint)((ulong)((long)plVar26 - extraout_x15[uVar25 + 0x2ac]) >> 5);
    plVar27 = (long *)(extraout_x15[0x198] + (long)(int)uVar19 * 0x3820);
    param_1[2] = plVar27;
    *(uint *)((long)param_1 + 0x1c) =
         uVar20 << (ulong)(*(uint *)((long)extraout_x15 + 0xd8c) & 0x1f);
    uVar13 = *(uint *)(plVar28 + 1);
    uVar17 = 1;
    if (uVar9 == 4) {
      uVar17 = 2;
    }
    if (uVar13 < 2) {
      uVar17 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x3f204) = uVar17;
    uVar10 = uVar10 | uVar16;
    if (uVar10 == 0) {
      puVar12 = param_1;
      FUN_104c07068();
      uVar10 = (uint)puVar12;
    }
    iVar14 = 0x7ffffffe;
    if (uVar10 == 0) {
      iVar14 = uVar20 + 1;
    }
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar8) {
        *puVar3 = *puVar3 | uVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)(uVar20 + 1 << (ulong)(*(uint *)((long)extraout_x15 + 0xd8c) & 0x1f)) <
        *(int *)((long)plVar27 + 0x3534)) {
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      *(undefined4 *)((long)plVar26 + 0x14) = 0;
      plVar21 = plVar26;
      FUN_104c2c420();
      *(int *)((long)plVar27 + uVar25 * 4 + 0x3540) = iVar14;
      if ((int)plVar21 != 0) {
        FUN_104c2c7a0(extraout_x15,plVar26);
        func_0x000104c2c90c();
        goto LAB_104c2b488;
      }
      func_0x000104c2c92c();
      do {
        func_0x000104c2c91c();
      } while (extraout_w10 != 0);
      if (extraout_w8 == 0) {
        func_0x000104c2c914();
      }
      goto code_r0x000104c2b994;
    }
    _pthread_mutex_lock(lVar23,extraout_x15,1 < uVar13);
    *(int *)((long)plVar27 + uVar25 * 4 + 0x3540) = iVar14;
    func_0x000104c2c900();
    iVar14 = *(int *)((long)extraout_x15 + 0x15ac);
    lVar15 = extraout_x15[3];
    if ((((*(char *)(lVar15 + 0x1b6) != '\0') && (*(int *)((long)param_1 + 0x3f204) < 2)) &&
        ((int)extraout_x15[0x2b5] != 0)) && (*(ushort *)(lVar15 + 0x2c6) == uVar19)) {
      if (iVar14 == 0) {
        FUN_104c064ec(lVar15,extraout_x15[0x183],
                      extraout_x15[0x198] + (ulong)(uint)*(ushort *)(lVar15 + 0x2c6) * 0x3820);
      }
      if (1 < *(uint *)(plVar28 + 1)) {
        uVar17 = 0x7ffffffe;
        if (iVar14 == 0) {
          uVar17 = 1;
        }
        *(undefined4 *)extraout_x15[0x184] = uVar17;
      }
    }
    plVar21 = extraout_x15 + 0x2b6;
    do {
      iVar14 = (int)*plVar21 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *(int *)plVar21 = iVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((iVar14 == 0) && (*(int *)((long)extraout_x15 + 0x159c) != 0)) &&
       ((uVar13 < 2 || ((int)extraout_x15[0x2b4] != 0)))) {
      uVar17 = 0;
      if (*(int *)((long)extraout_x15 + 0x15ac) != 0) {
        uVar17 = 0xfffffff4;
      }
      uVar4 = 0xffffffea;
      if (*(int *)((long)extraout_x15 + 0x15ac) != 1) {
        uVar4 = uVar17;
      }
      func_0x000104c0948c(extraout_x15,uVar4);
      *(undefined4 *)((long)extraout_x15 + 0xc34) = 0;
      _pthread_cond_signal(extraout_x15 + 0x2a4);
    }
    do {
      func_0x000104c2c91c();
    } while (extraout_w10_00 != 0);
    if (extraout_w8_00 == 0) {
      func_0x000104c2c914();
    }
    goto LAB_104c2b488;
  case 3:
  case 10:
    goto code_r0x000104c2be7c;
  case 5:
    goto code_r0x000104c2bcb8;
  case 6:
    goto code_r0x000104c2bd0c;
  case 7:
    goto code_r0x000104c2bd7c;
  case 8:
    goto code_r0x000104c2be34;
  case 9:
    goto code_r0x000104c2be5c;
  }
LAB_104c2b768:
  plVar22[0x2b9] = (long)plVar26;
  plVar24 = (long *)plVar26[3];
  plVar27 = plVar26;
  if ((long *)plVar26[3] == (long *)0x0) goto LAB_104c2b89c;
  goto LAB_104c2b728;
code_r0x000104c2bcb8:
  if (*puVar3 == 0) {
    func_0x000104c2c960(extraout_x15[0x19e]);
    plVar21 = plVar27;
  }
  if (*(int *)((long)extraout_x15 + 0x10e4) < (int)plVar26[1]) {
    *(undefined4 *)((long)plVar26 + 4) = 6;
    *(undefined4 *)((long)plVar26 + 0xc) = 0;
    *(int *)(plVar26 + 2) = (int)plVar26[1];
    goto code_r0x000104c2bcf4;
  }
code_r0x000104c2bd0c:
  if (*puVar3 == 0) {
    func_0x000104c2c960(extraout_x15[0x19f]);
    plVar21 = plVar27;
  }
  if ((*(char *)(extraout_x15[3] + 0x33e) == '\0') && (*(char *)(extraout_x15[3] + 0x33f) == '\0'))
  {
    if ((*(char *)(extraout_x15[1] + 0x19e) == '\0') && ((int)extraout_x15[0x29b] == 0))
    goto code_r0x000104c2bd7c;
    func_0x000104c2c9b8(extraout_x15[0x21e]);
    do {
      func_0x000104c2c970();
    } while (extraout_w11_01 != 0);
    plVar21 = extraout_x14;
    if (((int)extraout_x14 != 0) &&
       (uVar16 = (int)extraout_x14 - 1,
       (*(uint *)(plVar22[0x21e] + (long)((int)uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) == 0
       )) {
      *(undefined4 *)((long)plVar26 + 4) = 7;
      *(undefined4 *)((long)plVar26 + 0xc) = 0;
      *(undefined4 *)(plVar26 + 2) = 0;
code_r0x000104c2bcf4:
      FUN_104c2c7a0(plVar22,plVar26);
      func_0x000104c2c90c();
      goto LAB_104c2b488;
    }
  }
  else {
    if (*(int *)((long)extraout_x15 + 0x15ac) == 0) {
      iVar14 = (int)plVar21 + 1;
    }
    *(int *)((long)extraout_x15 + 0x10e4) = iVar14;
    func_0x000104c2c92c();
    do {
      func_0x000104c2c91c();
    } while (extraout_w10_01 != 0);
    if (extraout_w8_01 == 0) {
      func_0x000104c2c914();
    }
  }
code_r0x000104c2bd7c:
  if (*(char *)(plVar22[1] + 0x19e) != '\0') {
    if (*puVar3 == 0) {
      (*(code *)extraout_x15[0x1a0])(param_1,plVar21);
    }
    func_0x000104c2c92c();
    do {
      func_0x000104c2c91c();
    } while (extraout_w10_02 != 0);
    plVar22 = extraout_x15;
    plVar24 = plVar21;
    if (extraout_w8_02 == 0) {
      func_0x000104c2c914();
    }
  }
code_r0x000104c2be34:
  uVar13 = (uint)plVar24;
  uVar20 = (uint)plVar21;
  if ((*(int *)(plVar22[3] + 0xec) != *(int *)(plVar22[3] + 0xf0)) && (*puVar3 == 0)) {
    func_0x000104c2c950(plVar22[0x1a1]);
    plVar22 = extraout_x15;
    uVar20 = uVar13;
  }
code_r0x000104c2be5c:
  if ((*puVar3 == 0) && ((int)plVar22[0x29b] != 0)) {
    func_0x000104c2c950(plVar22[0x1a2]);
    plVar22 = extraout_x15;
    uVar20 = uVar13;
  }
code_r0x000104c2be7c:
  uVar16 = *(uint *)(plVar22 + 0x1b1);
  iVar14 = (int)plVar22[0x1b2] * 4;
  if (*(int *)((long)plVar26 + 4) == 3) {
    iVar11 = *(int *)((long)plVar22 + 0x15ac);
    uVar20 = uVar20 + 1;
    if (plVar22[299] != 0) {
      iVar14 = iVar14 * uVar20;
      if (uVar20 == uVar16) {
        iVar14 = -1;
      }
      if (iVar11 != 0) {
        iVar14 = -2;
      }
      *(int *)plVar22[0x14d] = iVar14;
    }
    uVar13 = uVar20;
    if (iVar11 != 0) {
      uVar13 = 0x7ffffffe;
    }
    *(uint *)(plVar22 + 0x21c) = uVar13;
    if (uVar20 == uVar16) {
      func_0x000104c2c980(plVar22 + 0x2b4);
    }
    func_0x000104c2c90c();
    plVar21 = extraout_x15 + 0x2b6;
    do {
      iVar14 = (int)*plVar21;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *(int *)plVar21 = iVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)uVar20 < (int)uVar16 && iVar14 != 1) {
code_r0x000104c2c104:
      func_0x000104c2c900();
      goto LAB_104c2b488;
    }
    if ((iVar14 == 1) && (plVar22 = extraout_x15, func_0x000104c2c9ac(0x159c), extraout_w8_03 != 0))
    {
code_r0x000104c2c0b4:
      func_0x000104c2c9ac(0x15a0);
      if (extraout_w8_05 != 0) goto code_r0x000104c2c0c0;
    }
  }
  else {
    uVar13 = *(uint *)(plVar28 + 1);
    func_0x000104c2c9b8(plVar22[0x21d]);
    do {
      func_0x000104c2c970();
    } while (extraout_w11_00 != 0);
    _pthread_mutex_lock(plVar22 + 0x29c);
    if (*(uint *)(plVar28 + 1) < 2) {
      uVar10 = 0;
code_r0x000104c2bfac:
      lVar15 = (long)(int)(uVar10 >> (ulong)(*(int *)((long)plVar22 + 0xd8c) + 7U & 0x1f));
      do {
        uVar10 = *(uint *)(plVar22[0x21d] + lVar15 * 4);
        if (uVar10 != 0xffffffff) {
          uVar10 = ~uVar10;
          uVar10 = (uVar10 & 0xaaaaaaaa) >> 1 | (uVar10 & 0x55555555) << 1;
          uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
          uVar10 = (uint)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
          goto code_r0x000104c2bff4;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)plVar22[0x224]);
      uVar10 = 0;
code_r0x000104c2bff4:
      uVar10 = uVar10 | (int)lVar15 << 5;
    }
    else {
      uVar10 = *(uint *)(plVar22[0x14d] + 4);
      if (uVar10 < 0xfffffffe) goto code_r0x000104c2bfac;
      uVar10 = *(uint *)(plVar22 + 0x1b1);
    }
    iVar14 = uVar10 * iVar14;
    if (uVar10 == uVar16) {
      iVar14 = -1;
    }
    if ((1 < *(uint *)(plVar28 + 1)) && (plVar22[299] != 0)) {
      if (*puVar3 != 0) {
        iVar14 = -2;
      }
      *(int *)(plVar22[0x14d] + 4) = iVar14;
    }
    _pthread_mutex_unlock(plVar22 + 0x29c);
    if (uVar10 == uVar16) {
      func_0x000104c2c980((long)plVar22 + 0x159c);
    }
    func_0x000104c2c90c();
    plVar21 = plVar22 + 0x2b6;
    do {
      iVar14 = (int)*plVar21;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *(int *)plVar21 = iVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)uVar10 < (int)uVar16 && iVar14 != 1) goto code_r0x000104c2c104;
    if ((iVar14 == 1) && (func_0x000104c2c9ac(0x159c), extraout_w8_04 != 0)) {
      if (1 < uVar13) goto code_r0x000104c2c0b4;
code_r0x000104c2c0c0:
      func_0x000104c2c9ac(0x15ac);
      func_0x000104c0948c();
      *(undefined4 *)((long)plVar22 + 0xc34) = 0;
      _pthread_cond_signal(plVar22 + 0x2a4);
    }
  }
  func_0x000104c2c900();
  goto LAB_104c2b488;
}



/* Entry: 104c2c330; end: 104c2c397;  */

uint FUN_104c2c330(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  uVar2 = 0;
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 1); uVar4 = uVar4 + 1) {
    lVar1 = *param_1 + lVar3;
    FUN_104c2c398(lVar1);
    uVar2 = (uint)lVar1 | uVar2;
    lVar3 = lVar3 + 0x1640;
  }
  return uVar2;
}



/* Entry: 104c2c398; end: 104c2c41f;  */

int FUN_104c2c398(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x15d0);
  if (iVar1 != 0) {
    _pthread_mutex_lock(param_1 + 0x15d8);
    lVar2 = *(long *)(param_1 + 0x1618);
    *(undefined8 *)(param_1 + 0x1620) = 0;
    *(undefined8 *)(param_1 + 0x1618) = 0;
    *(undefined4 *)(param_1 + 0x15d0) = 0;
    _pthread_mutex_unlock(param_1 + 0x15d8);
    while (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x18);
      func_0x000104c2b318(param_1,lVar2,0);
      lVar2 = lVar3;
    }
  }
  return iVar1;
}



/* Entry: 104c2c420; end: 104c2c71f;  */

undefined8 FUN_104c2c420(long param_1,long param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  
  iVar5 = *(int *)(param_1 + 4);
  lVar16 = *(long *)(param_2 + 0xcc0) +
           (long)(int)((ulong)(param_1 - *(long *)(param_2 + (ulong)(iVar5 == 2) * 8 + 0x1560)) >> 5
                      ) * 0x3820;
  iVar12 = *(int *)(lVar16 + (ulong)(iVar5 == 2) * 4 + 0x3540);
  if (iVar12 < *(int *)(param_1 + 8)) {
LAB_104c2c464:
    uVar14 = 1;
  }
  else {
    puVar1 = (uint *)(param_2 + 0x15ac);
    do {
      uVar15 = *puVar1 | (uint)(iVar12 == 0x7ffffffe);
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = uVar15;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (((iVar5 != 2) && (param_3 != 0)) && (uVar15 == 0)) {
      iVar12 = *(int *)(lVar16 + 0x3544);
      if (iVar12 <= *(int *)(param_1 + 8)) goto LAB_104c2c464;
      do {
        uVar15 = *puVar1 | (uint)(iVar12 == 0x7ffffffe);
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = uVar15;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    uVar14 = 0;
    if ((param_3 != 0) && (uVar15 == 0)) {
      if ((*(byte *)(*(long *)(param_2 + 0x18) + 0xe8) & 1) != 0) {
        iVar6 = *(int *)(param_2 + 0x988);
        iVar7 = *(int *)(param_1 + 8);
        uVar15 = *(uint *)(param_2 + 0xd8c);
        iVar8 = *(int *)(lVar16 + 0x3530);
        lVar17 = *(long *)(lVar16 + 0x3578);
        iVar12 = *(int *)(param_1 + 0x14);
        for (lVar16 = (long)iVar12; lVar16 < 7; lVar16 = lVar16 + 1) {
          uVar13 = iVar7 + 1 << (ulong)(uVar15 + 2 & 0x1f);
          if (iVar5 == 2) {
LAB_104c2c5b8:
            uVar3 = *(uint *)(*(long *)(param_2 + 0x140 + lVar16 * 0x128) + (ulong)(iVar5 != 2) * 4)
            ;
            if (uVar3 < uVar13) goto LAB_104c2c464;
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar11) {
                *puVar1 = *puVar1 | (uint)(uVar3 == 0xfffffffe);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            iVar12 = *(int *)(param_1 + 0x14);
          }
          else {
            piVar2 = (int *)(lVar17 + (long)(iVar7 - (iVar8 >> (uVar15 & 0x1f))) * 0x38 + lVar16 * 8
                            );
            iVar4 = *piVar2;
            uVar3 = piVar2[1];
            uVar13 = iVar4 + 8;
            if (uVar3 != 0x80000000) {
              uVar3 = (uVar3 << (iVar6 == 1)) + 8;
            }
            if ((int)uVar13 <= (int)uVar3) {
              uVar13 = uVar3;
            }
            if (iVar4 != -0x80000000) {
              uVar3 = uVar13;
            }
            if (uVar3 != 0x80000000) {
              uVar9 = *(uint *)(param_2 + 0x5c + lVar16 * 0x128);
              uVar13 = uVar3;
              if ((int)uVar9 <= (int)uVar3) {
                uVar13 = uVar9;
              }
              if ((int)uVar3 < 1) {
                uVar13 = 1;
              }
              goto LAB_104c2c5b8;
            }
          }
          iVar12 = iVar12 + 1;
          *(int *)(param_1 + 0x14) = iVar12;
        }
      }
      uVar14 = 0;
    }
  }
  return uVar14;
}



/* Entry: 104c2c720; end: 104c2c79f;  */

void FUN_104c2c720(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 == -0x16) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x15ac) = uVar1;
  *(undefined4 *)(param_1 + 0x15b0) = 0;
  *(undefined4 *)(param_1 + 0x159c) = 1;
  *(undefined4 *)(param_1 + 0x15a0) = 1;
  **(undefined4 **)(param_1 + 0xa68) = 0xfffffffe;
  *(undefined4 *)(*(long *)(param_1 + 0xa68) + 4) = 0xfffffffe;
  func_0x000104c0948c();
  *(undefined4 *)(param_1 + 0xc34) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_cond_signal_11034c850)(param_1 + 0x1520);
  return;
}



/* Entry: 104c2c7a0; end: 104c2c807;  */

void FUN_104c2c7a0(long param_1,long param_2)

{
  _pthread_mutex_lock(param_1 + 0x15d8);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (*(long *)(param_1 + 0x1618) == 0) {
    *(long *)(param_1 + 0x1618) = param_2;
  }
  else {
    *(long *)(*(long *)(param_1 + 0x1620) + 0x18) = param_2;
  }
  *(long *)(param_1 + 0x1620) = param_2;
  *(undefined4 *)(param_1 + 0x15d0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0x15d8);
  return;
}



/* Entry: 104c2c808; end: 104c2c873;  */

void FUN_104c2c808(long param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  if (uVar2 <= param_2) {
    param_3 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x78);
  uVar6 = param_3 + param_2;
  do {
    uVar7 = uVar6;
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    uVar6 = uVar7;
  } while ((cVar4 != '\0') || (uVar6 = uVar3, uVar3 < uVar7));
  if ((uVar7 == uVar2) && (*(uint *)(param_1 + 0x70) != uVar2)) {
    do {
      if (*puVar1 != uVar2) {
        ClearExclusiveLocal();
        return;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = 0xffffffff;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return;
}



/* Entry: 104c2c874; end: 104c2c8ff;  */

void FUN_104c2c874(long param_1,undefined4 *param_2,long param_3,long param_4,long param_5,
                  int param_6)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x1550);
  if (**(int **)(*(long *)(param_1 + 0xcb8) + 0x340) == 0) {
    if (param_4 == 0) {
      *(undefined4 **)(param_1 + 0x15b8) = param_2;
    }
    else {
      *(undefined4 **)(param_4 + 0x18) = param_2;
    }
    if (param_5 == 0) {
      *(long *)(param_1 + 0x15c0) = param_3;
    }
    *(long *)(param_3 + 0x18) = param_5;
    func_0x000104c2c5f8(*(undefined8 *)(param_1 + 0xcb8),lVar5,*param_2);
    if (param_6 != 0) {
      puVar1 = (uint *)(lVar5 + 0x7c);
      do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar2 | 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__pthread_cond_signal_11034c850)(lVar5 + 0x40);
        return;
      }
    }
  }
  return;
}



/* Entry: 104c2c900; end: 104c2c9cb;  */

undefined8 FUN_104c2c900(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x20;
  long *unaff_x25;
  
  uVar7 = *(uint *)(unaff_x20 + 0x70);
  puVar1 = (uint *)(unaff_x20 + 0x78);
  do {
    uVar9 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0xffffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (uVar9 < uVar7) {
    if (param_3 == 0xffffffff) {
      return 0;
    }
    uVar9 = 0xffffffff;
  }
  uVar10 = *(uint *)(unaff_x20 + 0x74);
  if ((uVar10 != 0) || (*(long *)(*unaff_x25 + (ulong)uVar7 * 0x1640 + 0x15c8) != 0)) {
    if (uVar9 == 0xffffffff) {
      if (param_3 == 0xffffffff) {
        return 0;
      }
    }
    else if (param_3 == 0xffffffff) {
      if (uVar10 + uVar7 < uVar9) {
        return 0;
      }
      uVar8 = *(uint *)(unaff_x25 + 1);
      uVar10 = uVar9 - uVar7;
      goto LAB_104c2c6e4;
    }
    uVar8 = *(uint *)(unaff_x25 + 1);
    uVar2 = uVar8;
    if (uVar7 <= param_3) {
      uVar2 = 0;
    }
    if (uVar2 + param_3 <= uVar9) {
      uVar9 = uVar2 + param_3;
    }
    if (uVar8 <= uVar10 || uVar9 <= uVar10 + uVar7) {
      uVar2 = uVar9 - uVar7;
      uVar3 = uVar8;
      if (uVar8 <= uVar2) {
        uVar3 = uVar2;
      }
      for (; uVar10 = uVar3, uVar2 < uVar8; uVar2 = uVar2 + 1) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        uVar10 = uVar2;
        if (*(long *)(*unaff_x25 + (ulong)(uVar9 - uVar6 * uVar8) * 0x1640 + 0x15b8) != 0) break;
        uVar9 = uVar9 + 1;
      }
LAB_104c2c6e4:
      *(uint *)(unaff_x20 + 0x74) = uVar10;
      uVar7 = uVar10 + uVar7;
      for (; uVar10 < uVar8; uVar10 = uVar10 + 1) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar7 / uVar8;
        }
        *(undefined8 *)(*unaff_x25 + (ulong)(uVar7 - uVar9 * uVar8) * 0x1640 + 0x15c8) = 0;
        uVar7 = uVar7 + 1;
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 104c2c9cc; end: 104c2cb47;  */

bool FUN_104c2c9cc(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  bVar6 = true;
  if (0 < (int)uVar2) {
    sVar7 = (short)uVar2;
    FUN_104c2cb48();
    *(short *)(param_1 + 0x1c) = sVar7;
    iVar3 = *(int *)(param_1 + 0x10);
    sVar14 = (short)iVar3;
    FUN_104c2cb48();
    *(short *)(param_1 + 0x1e) = sVar14;
    uVar11 = (uint)LZCOUNT(uVar2);
    iVar1 = (-1 << (ulong)((uVar11 ^ 0x1f) & 0x1f)) + uVar2;
    iVar5 = iVar1 << (ulong)(uVar11 - 0x17 & 0x1f);
    if (0x1ff < uVar2) {
      iVar5 = iVar1 + (1 << (ulong)(0x16 - uVar11 & 0x1f)) >> (0x17 - uVar11 & 0x1f);
    }
    uVar11 = 0x2d - uVar11;
    uVar4 = *(ushort *)(&UNK_10dd76ea6 + (long)iVar5 * 2);
    iVar5 = *(int *)(param_1 + 0x14);
    lVar12 = (long)iVar5 * (long)(int)(uint)uVar4;
    lVar13 = lVar12 * 0x10000;
    iVar1 = (1 << (ulong)(uVar11 & 0x1f)) >> 1;
    lVar12 = lVar12 * -0x10000;
    if (-1 < lVar13) {
      lVar12 = lVar13;
    }
    sVar9 = (short)(lVar12 + iVar1 >> ((ulong)uVar11 & 0x3f));
    sVar8 = -sVar9;
    if (-1 < lVar13) {
      sVar8 = sVar9;
    }
    FUN_104c2cb48();
    *(short *)(param_1 + 0x20) = sVar8;
    lVar13 = (long)(int)(uint)uVar4 * (long)iVar3 * (long)iVar5;
    lVar12 = -lVar13;
    if (-1 < lVar13) {
      lVar12 = lVar13;
    }
    sVar10 = (short)(lVar12 + iVar1 >> ((ulong)uVar11 & 0x3f));
    sVar9 = -sVar10;
    if (-1 >= lVar13) {
      sVar9 = sVar10;
    }
    sVar9 = (short)*(undefined4 *)(param_1 + 0x18) + sVar9;
    FUN_104c2cb48();
    *(short *)(param_1 + 0x22) = sVar9;
    iVar5 = (int)sVar7;
    iVar1 = -iVar5;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    iVar3 = (int)sVar14;
    iVar5 = -iVar3;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    if ((uint)(iVar5 * 7 + iVar1 * 4) >> 0x10 == 0) {
      iVar5 = (int)sVar8;
      iVar1 = -iVar5;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      iVar3 = (int)sVar9;
      iVar5 = -iVar3;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      bVar6 = (iVar5 + iVar1 & 0x1c000U) != 0;
    }
  }
  return bVar6;
}



/* Entry: 104c2cb48; end: 104c2cbfb;  */

int FUN_104c2cb48(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1;
  if (param_1 < -0x7fff) {
    iVar4 = -0x8000;
  }
  if (0x7ffe < iVar4) {
    iVar4 = 0x7fff;
  }
  iVar1 = -iVar4;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  uVar3 = iVar1 + 0x20U >> 6;
  uVar2 = -uVar3;
  if (-1 < param_1) {
    uVar2 = uVar3;
  }
  return uVar2 << 6;
}



/* Entry: 104c2cbfc; end: 104c2cec7;  */

undefined8
FUN_104c2cbfc(long param_1,uint param_2,int param_3,int param_4,int param_5,long param_6,int param_7
             ,int param_8)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar19 = 0;
  iVar20 = 0;
  iVar17 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar18 = 0;
  iVar21 = 0;
  iVar4 = param_4 * 2 + -1;
  iVar5 = param_3 * 2 + -1;
  piVar1 = (int *)(param_1 + 8);
  for (uVar16 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)); uVar16 != 0;
      uVar16 = uVar16 - 1) {
    iVar15 = *piVar1 - ((param_5 >> 0x10) + iVar5 * 8);
    iVar6 = piVar1[-2] + iVar5 * -8;
    uVar9 = iVar6 - iVar15;
    uVar2 = -uVar9;
    if (-1 < (int)uVar9) {
      uVar2 = uVar9;
    }
    if (uVar2 < 0x100) {
      iVar7 = piVar1[1] - (iVar4 * 8 + (int)(short)param_5);
      iVar8 = piVar1[-1] + iVar4 * -8;
      uVar9 = iVar8 - iVar7;
      uVar2 = -uVar9;
      if (-1 < (int)uVar9) {
        uVar2 = uVar9;
      }
      if (uVar2 < 0x100) {
        iVar21 = iVar21 + iVar6 * 2 + ((uint)(iVar6 * iVar6) >> 2) + 8;
        iVar18 = iVar18 + iVar6 + iVar8 + (iVar8 * iVar6 >> 2) + 4;
        iVar11 = iVar11 + iVar8 * 2 + ((uint)(iVar8 * iVar8) >> 2) + 8;
        iVar10 = iVar10 + iVar15 + iVar6 + (iVar6 * iVar15 >> 2) + 8;
        iVar17 = iVar17 + iVar15 + iVar8 + (iVar8 * iVar15 >> 2) + 4;
        iVar20 = iVar20 + iVar7 + iVar6 + (iVar6 * iVar7 >> 2) + 4;
        iVar19 = iVar19 + iVar7 + iVar8 + (iVar8 * iVar7 >> 2) + 8;
      }
    }
    piVar1 = piVar1 + 4;
  }
  uVar16 = (long)iVar21 * (long)iVar11 - (long)iVar18 * (long)iVar18;
  if (uVar16 == 0) {
    uVar12 = 1;
  }
  else {
    iVar4 = iVar4 + param_8 * 4;
    uVar3 = -uVar16;
    if (-1 < (long)uVar16) {
      uVar3 = uVar16;
    }
    lVar13 = (-1L << ((LZCOUNT(uVar3) ^ 0x3fU) & 0x3f)) + uVar3;
    iVar15 = (int)LZCOUNT(uVar3);
    lVar14 = lVar13 << ((ulong)(iVar15 - 0x37) & 0x3f);
    if (0x1ff < uVar3) {
      lVar14 = lVar13 + (1L << ((ulong)(0x36 - iVar15) & 0x3f)) >> ((ulong)(0x37 - iVar15) & 0x3f);
    }
    iVar5 = iVar5 + param_7 * 4;
    uVar2 = -(uint)*(ushort *)(&UNK_10dd76ea6 + lVar14 * 2);
    if (-1 < (long)uVar16) {
      uVar2 = (uint)*(ushort *)(&UNK_10dd76ea6 + lVar14 * 2);
    }
    uVar9 = iVar15 - 0x3d;
    iVar6 = 0;
    if (3 < uVar3) {
      uVar9 = 0;
      iVar6 = 0x3d - iVar15;
    }
    iVar15 = uVar2 << (ulong)(uVar9 & 0x1f);
    lVar13 = (long)iVar11 * (long)iVar10 - (long)iVar18 * (long)iVar17;
    FUN_104c2cec8(lVar13,iVar15,iVar6);
    *(int *)(param_6 + 0xc) = (int)lVar13;
    iVar10 = iVar21 * iVar17 - iVar18 * iVar10;
    func_0x000104c2cf4c();
    *(int *)(param_6 + 0x10) = iVar10;
    iVar11 = iVar11 * iVar20 - iVar18 * iVar19;
    func_0x000104c2cf4c();
    *(int *)(param_6 + 0x14) = iVar11;
    lVar14 = (long)iVar21 * (long)iVar19 - (long)iVar18 * (long)iVar20;
    FUN_104c2cec8(lVar14,iVar15,iVar6);
    uVar12 = 0;
    *(int *)(param_6 + 0x18) = (int)lVar14;
    iVar21 = ((0x10000 - (int)lVar13) * iVar5 + (param_5 >> 0x10) * 0x2000) - iVar10 * iVar4;
    if (iVar21 < -0x7fffff) {
      iVar21 = -0x800000;
    }
    if (0x7ffffe < iVar21) {
      iVar21 = 0x7fffff;
    }
    iVar18 = ((0x10000 - (int)lVar14) * iVar4 - iVar11 * iVar5) + ((param_5 << 0x10) >> 3);
    if (iVar18 < -0x7fffff) {
      iVar18 = -0x800000;
    }
    if (0x7ffffe < iVar18) {
      iVar18 = 0x7fffff;
    }
    *(int *)(param_6 + 4) = iVar21;
    *(int *)(param_6 + 8) = iVar18;
  }
  return uVar12;
}



/* Entry: 104c2cec8; end: 104c2cf57;  */

int FUN_104c2cec8(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 * param_2;
  lVar1 = -param_1;
  if (-1 < param_1) {
    lVar1 = param_1;
  }
  iVar3 = (int)(lVar1 + ((1L << (param_3 & 0x3f)) >> 1) >> (param_3 & 0x3f));
  iVar2 = -iVar3;
  if (-1 < param_1) {
    iVar2 = iVar3;
  }
  if (iVar2 < 0xe002) {
    iVar2 = 0xe001;
  }
  if (0x11ffe < iVar2) {
    iVar2 = 0x11fff;
  }
  return iVar2;
}



/* Entry: 104c2cf58; end: 104c2cffb;  */

void FUN_104c2cf58(long param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (4 < (int)param_3) {
    _bzero(param_1,param_3 - 4);
  }
  uVar2 = param_3;
  if ((int)param_3 < 5) {
    uVar2 = 4;
  }
  iVar1 = 0x40 - param_3;
  if (7 < iVar1) {
    iVar1 = 8;
  }
  _memcpy(param_1 + (ulong)uVar2 + -4,
          param_2 + (ulong)(4 - param_3 & ((int)(4 - param_3) >> 0x1f ^ 0xffffffffU)),(long)iVar1);
  if ((int)param_3 < 0x3c) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_11034c668)(param_1 + (int)param_3 + 4,0x40,0x3c - param_3);
    return;
  }
  return;
}



/* Entry: 104c2cffc; end: 104c2d0cb;  */

void FUN_104c2cffc(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  for (lVar1 = 0; lVar1 != 0x40; lVar1 = lVar1 + 1) {
    puVar3 = param_1;
    for (lVar2 = 0; lVar2 != 0x40; lVar2 = lVar2 + 1) {
      *puVar3 = *(undefined1 *)(param_2 + lVar2);
      puVar3 = puVar3 + 0x40;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 0x40;
  }
  return;
}



/* Entry: 104c2d0cc; end: 104c2d10f;  */

undefined4 FUN_104c2d0cc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_20 = 4;
  _sysctlbyname(param_1,&uStack_14,&uStack_20,0,0);
  if ((int)param_1 != 0) {
    uStack_14 = 0;
  }
  return uStack_14;
}



/* Entry: 104c2d110; end: 104c2d17f;  */

void FUN_104c2d110(undefined8 param_1,long *param_2)

{
  undefined8 *unaff_x19;
  long unaff_x21;
  
  if (*param_2 != param_2[1]) {
    func_0x000104c2dea4();
    *unaff_x19 = param_1;
    while (unaff_x21 != 0) {
      func_0x000104c2df60();
    }
  }
  return;
}



/* Entry: 104c2d180; end: 104c2d1df;  */

void FUN_104c2d180(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int extraout_w8;
  undefined8 extraout_x9;
  
  if (*param_2 != param_2[1]) {
    func_0x000104c2de74();
    uVar2 = 1;
    uVar1 = extraout_x9;
    if (extraout_w8 != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    __Znam(uVar1);
    func_0x000104c2ded0();
    func_0x000104c2df38();
    while (func_0x000104c2df70(), !(bool)uVar2) {
      func_0x000104c2df80();
      func_0x000104c2d148();
      func_0x000104c2df24();
    }
  }
  return;
}



/* Entry: 104c2d1e0; end: 104c2d217;  */

void FUN_104c2d1e0(undefined8 param_1,long *param_2)

{
  undefined8 *unaff_x19;
  long unaff_x21;
  
  if (*param_2 != param_2[1]) {
    func_0x000104c2dea4();
    *unaff_x19 = param_1;
    while (unaff_x21 != 0) {
      func_0x000104c2df60();
    }
  }
  return;
}



/* Entry: 104c2d218; end: 104c2d2d7;  */

void FUN_104c2d218(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int extraout_w8;
  undefined8 extraout_x9;
  
  if (*param_2 != param_2[1]) {
    func_0x000104c2de74();
    uVar2 = 1;
    uVar1 = extraout_x9;
    if (extraout_w8 != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    __Znam(uVar1);
    func_0x000104c2ded0();
    func_0x000104c2df38();
    while (func_0x000104c2df70(), !(bool)uVar2) {
      func_0x000104c2df80();
      FUN_104c2d110();
      func_0x000104c2df24();
    }
  }
  return;
}



/* Entry: 104c2d2d8; end: 104c2d3bf;  */

/* WARNING: Possible PIC construction at 0x000104c2d264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c2d268) */

void FUN_104c2d2d8(undefined4 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x9;
  undefined4 *extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lVar4;
  
  switch((int)*param_2) {
  case 1:
    func_0x000104c2df90(6);
    FUN_104c2d4d8();
    func_0x000104c2df4c();
    if (*param_2 == param_2[1]) {
      return;
    }
    func_0x000104c2de74();
    uVar3 = 1;
    uVar1 = extraout_x9_01;
    if (extraout_w8_01 != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    __Znam(uVar1);
    func_0x000104c2ded0();
    func_0x000104c2df38();
    while (func_0x000104c2df70(), !(bool)uVar3) {
      func_0x000104c2df80();
      FUN_104c2d180();
      func_0x000104c2df24();
    }
    return;
  case 2:
    func_0x000104c2df90(5);
    FUN_104c2d4a0();
    func_0x000104c2df4c();
    puVar2 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*param_2 == param_2[1]) {
      return;
    }
    func_0x000104c2de74();
    uVar3 = 1;
    param_1 = extraout_x9_00;
    if (extraout_w8_00 != 0) {
      param_1 = (undefined4 *)0xffffffffffffffff;
    }
    __Znam();
    func_0x000104c2ded0();
    func_0x000104c2df38();
    func_0x000104c2df70();
    if ((bool)uVar3) {
      return;
    }
    func_0x000104c2df80();
    unaff_x30 = 0x104c2d268;
    break;
  case 3:
    func_0x000104c2df90(4);
    FUN_104c2d468();
    func_0x000104c2df4c();
    if (*param_2 == param_2[1]) {
      return;
    }
    func_0x000104c2dea4();
    *unaff_x19 = param_1;
    while (unaff_x21 != 0) {
      func_0x000104c2df60();
    }
    return;
  case 4:
    func_0x000104c2df90(3);
    FUN_104c2d430();
    func_0x000104c2df4c();
    if (*param_2 != param_2[1]) {
      func_0x000104c2de74();
      uVar3 = 1;
      uVar1 = extraout_x9;
      if (extraout_w8 != 0) {
        uVar1 = 0xffffffffffffffff;
      }
      __Znam(uVar1);
      func_0x000104c2ded0();
      func_0x000104c2df38();
      while (func_0x000104c2df70(), !(bool)uVar3) {
        func_0x000104c2df80();
        func_0x000104c2d148();
        func_0x000104c2df24();
      }
    }
    return;
  case 5:
    func_0x000104c2df90(2);
    FUN_104c2d3f8();
    func_0x000104c2df4c();
    puVar2 = (undefined1 *)register0x00000008;
    break;
  case 6:
    *param_1 = 1;
    FUN_104c2d3c0();
    lVar4 = *param_2;
    *(long *)(param_1 + 4) = param_2[1];
    *(long *)(param_1 + 2) = lVar4;
  default:
    return;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  if (*param_2 != param_2[1]) {
    func_0x000104c2dea4();
    *unaff_x19 = param_1;
    while (unaff_x21 != 0) {
      func_0x000104c2df60();
    }
  }
  return;
}



/* Entry: 104c2d3c0; end: 104c2d3f7;  */

void FUN_104c2d3c0(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  piVar3 = param_1 + 2;
  if (*param_1 == 6) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 == 5) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar3 = piVar4 + 2;
  if (*piVar4 == 4) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 != 3) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    piVar3 = piVar4 + 2;
    if (*piVar4 == 2) {
      return;
    }
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    puVar5 = (ulong *)(piVar3 + 2);
    if (*piVar3 != 1) {
      func_0x000104c2df10();
      func_0x000104c2de68();
      func_0x000104c2de44();
      func_0x000104c2de5c();
      func_0x000104c2df08();
      uVar6 = (ulong)*(char *)((long)param_2 + 0x17);
      if ((long)uVar6 < 0) {
        uVar6 = param_2[1];
        if (uVar6 == 0) {
          return;
        }
      }
      else if (*(char *)((long)param_2 + 0x17) == '\0') {
        return;
      }
      puVar5[1] = uVar6;
      uVar6 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      __Znam();
      uVar7 = 0;
      *puVar5 = uVar6;
      while( true ) {
        bVar2 = *(byte *)((long)param_2 + 0x17);
        uVar6 = param_2[1];
        if (-1 < (char)bVar2) {
          uVar6 = (ulong)bVar2;
        }
        if (uVar6 <= uVar7) break;
        plVar1 = (long *)*param_2;
        if (-1 < (char)bVar2) {
          plVar1 = param_2;
        }
        *(undefined1 *)(*puVar5 + uVar7) = *(undefined1 *)((long)plVar1 + uVar7);
        uVar7 = uVar7 + 1;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 104c2d3f8; end: 104c2d42f;  */

void FUN_104c2d3f8(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  piVar3 = param_1 + 2;
  if (*param_1 == 5) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 == 4) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar3 = piVar4 + 2;
  if (*piVar4 == 3) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 != 2) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    puVar5 = (ulong *)(piVar4 + 2);
    if (*piVar4 == 1) {
      return;
    }
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    uVar6 = (ulong)*(char *)((long)param_2 + 0x17);
    if ((long)uVar6 < 0) {
      uVar6 = param_2[1];
      if (uVar6 == 0) {
        return;
      }
    }
    else if (*(char *)((long)param_2 + 0x17) == '\0') {
      return;
    }
    puVar5[1] = uVar6;
    uVar6 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    __Znam();
    uVar7 = 0;
    *puVar5 = uVar6;
    while( true ) {
      bVar2 = *(byte *)((long)param_2 + 0x17);
      uVar6 = param_2[1];
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
      }
      if (uVar6 <= uVar7) break;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar2) {
        plVar1 = param_2;
      }
      *(undefined1 *)(*puVar5 + uVar7) = *(undefined1 *)((long)plVar1 + uVar7);
      uVar7 = uVar7 + 1;
    }
    return;
  }
  return;
}



/* Entry: 104c2d430; end: 104c2d467;  */

void FUN_104c2d430(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  piVar3 = param_1 + 2;
  if (*param_1 == 4) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 == 3) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar3 = piVar4 + 2;
  if (*piVar4 == 2) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  puVar5 = (ulong *)(piVar3 + 2);
  if (*piVar3 != 1) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    uVar6 = (ulong)*(char *)((long)param_2 + 0x17);
    if ((long)uVar6 < 0) {
      uVar6 = param_2[1];
      if (uVar6 == 0) {
        return;
      }
    }
    else if (*(char *)((long)param_2 + 0x17) == '\0') {
      return;
    }
    puVar5[1] = uVar6;
    uVar6 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    __Znam();
    uVar7 = 0;
    *puVar5 = uVar6;
    while( true ) {
      bVar2 = *(byte *)((long)param_2 + 0x17);
      uVar6 = param_2[1];
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
      }
      if (uVar6 <= uVar7) break;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar2) {
        plVar1 = param_2;
      }
      *(undefined1 *)(*puVar5 + uVar7) = *(undefined1 *)((long)plVar1 + uVar7);
      uVar7 = uVar7 + 1;
    }
    return;
  }
  return;
}



/* Entry: 104c2d468; end: 104c2d49f;  */

void FUN_104c2d468(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  piVar3 = param_1 + 2;
  if (*param_1 == 3) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 != 2) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    puVar5 = (ulong *)(piVar4 + 2);
    if (*piVar4 == 1) {
      return;
    }
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    uVar6 = (ulong)*(char *)((long)param_2 + 0x17);
    if ((long)uVar6 < 0) {
      uVar6 = param_2[1];
      if (uVar6 == 0) {
        return;
      }
    }
    else if (*(char *)((long)param_2 + 0x17) == '\0') {
      return;
    }
    puVar5[1] = uVar6;
    uVar6 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    __Znam();
    uVar7 = 0;
    *puVar5 = uVar6;
    while( true ) {
      bVar2 = *(byte *)((long)param_2 + 0x17);
      uVar6 = param_2[1];
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
      }
      if (uVar6 <= uVar7) break;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar2) {
        plVar1 = param_2;
      }
      *(undefined1 *)(*puVar5 + uVar7) = *(undefined1 *)((long)plVar1 + uVar7);
      uVar7 = uVar7 + 1;
    }
    return;
  }
  return;
}



/* Entry: 104c2d4a0; end: 104c2d4d7;  */

void FUN_104c2d4a0(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  int *piVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  piVar3 = param_1 + 2;
  if (*param_1 == 2) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  puVar4 = (ulong *)(piVar3 + 2);
  if (*piVar3 != 1) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    uVar5 = (ulong)*(char *)((long)param_2 + 0x17);
    if ((long)uVar5 < 0) {
      uVar5 = param_2[1];
      if (uVar5 == 0) {
        return;
      }
    }
    else if (*(char *)((long)param_2 + 0x17) == '\0') {
      return;
    }
    puVar4[1] = uVar5;
    uVar5 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    __Znam();
    uVar6 = 0;
    *puVar4 = uVar5;
    while( true ) {
      bVar2 = *(byte *)((long)param_2 + 0x17);
      uVar5 = param_2[1];
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      if (uVar5 <= uVar6) break;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar2) {
        plVar1 = param_2;
      }
      *(undefined1 *)(*puVar4 + uVar6) = *(undefined1 *)((long)plVar1 + uVar6);
      uVar6 = uVar6 + 1;
    }
    return;
  }
  return;
}



/* Entry: 104c2d4d8; end: 104c2d50f;  */

void FUN_104c2d4d8(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = (ulong *)(param_1 + 2);
  if (*param_1 == 1) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  uVar4 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = param_2[1];
    if (uVar4 == 0) {
      return;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') {
    return;
  }
  puVar3[1] = uVar4;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  __Znam();
  uVar5 = 0;
  *puVar3 = uVar4;
  while( true ) {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    uVar4 = param_2[1];
    if (-1 < (char)bVar2) {
      uVar4 = (ulong)bVar2;
    }
    if (uVar4 <= uVar5) break;
    plVar1 = (long *)*param_2;
    if (-1 < (char)bVar2) {
      plVar1 = param_2;
    }
    *(undefined1 *)(*puVar3 + uVar5) = *(undefined1 *)((long)plVar1 + uVar5);
    uVar5 = uVar5 + 1;
  }
  return;
}



/* Entry: 104c2d510; end: 104c2d5a7;  */

void FUN_104c2d510(ulong *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar3 < 0) {
    uVar3 = param_2[1];
    if (uVar3 == 0) {
      return;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') {
    return;
  }
  param_1[1] = uVar3;
  uVar3 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  __Znam();
  uVar4 = 0;
  *param_1 = uVar3;
  while( true ) {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    uVar3 = param_2[1];
    if (-1 < (char)bVar2) {
      uVar3 = (ulong)bVar2;
    }
    if (uVar3 <= uVar4) break;
    plVar1 = (long *)*param_2;
    if (-1 < (char)bVar2) {
      plVar1 = param_2;
    }
    *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)((long)plVar1 + uVar4);
    uVar4 = uVar4 + 1;
  }
  return;
}



/* Entry: 104c2d5a8; end: 104c2d613;  */

void FUN_104c2d5a8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  FUN_104c2d614();
  if ((uVar1 & 1) == 0) {
    func_0x000104c2dfe4();
    param_1[1] = uVar1;
    func_0x000104c2dfe4();
    __Znam();
    *param_1 = uVar1;
    for (uVar2 = 0; func_0x000104c2dfe4(), uVar2 < uVar1; uVar2 = uVar2 + 1) {
      uVar1 = param_2;
      func_0x000104c2d654(param_2,uVar2);
      *(char *)(*param_1 + uVar2) = (char)uVar1;
    }
  }
  return;
}



/* Entry: 104c2d614; end: 104c2d693;  */

void FUN_104c2d614(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000104c2db30(param_1,&uStack_11);
  return;
}



/* Entry: 104c2d694; end: 104c2d73b;  */

void FUN_104c2d694(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  switch((int)*param_2) {
  case 0:
    plVar2 = param_2;
    FUN_104c2d7e4();
    func_0x000104c2df4c();
    plVar1 = plVar2;
    FUN_104c2d614();
    if (((ulong)plVar1 & 1) == 0) {
      func_0x000104c2dfe4();
      param_2[1] = (long)plVar1;
      func_0x000104c2dfe4();
      __Znam();
      *param_2 = (long)plVar1;
      for (plVar3 = (long *)0x0; func_0x000104c2dfe4(), plVar3 < plVar1;
          plVar3 = (long *)((long)plVar3 + 1)) {
        plVar1 = plVar2;
        func_0x000104c2d654(plVar2,plVar3);
        *(char *)(*param_2 + (long)plVar3) = (char)plVar1;
      }
    }
    return;
  case 1:
    FUN_104c2d7ac(param_2);
    func_0x000104c2df9c();
    func_0x000104c2dec4();
    break;
  case 2:
    FUN_104c2d774(param_2);
    func_0x000104c2dfb4();
    func_0x000104c2dec4();
    break;
  case 3:
    FUN_104c2d73c(param_2);
    func_0x000104c2dfa8();
    func_0x000104c2dec4();
    break;
  default:
    goto LAB_104c2dfcc;
  }
  func_0x000104c2df58();
LAB_104c2dfcc:
  return;
}



/* Entry: 104c2d73c; end: 104c2d773;  */

void FUN_104c2d73c(int *param_1,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_b8 [8];
  
  piVar3 = param_1 + 2;
  if (*param_1 == 3) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 == 2) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar3 = piVar4 + 2;
  if (*piVar4 == 1) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  if (*piVar3 == 0) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  switch((int)*param_2) {
  case 2:
    plVar5 = param_2;
    FUN_104c2d9dc();
    func_0x000104c2df4c();
    plVar2 = plVar5;
    FUN_104c2d614();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x000104c2dfe4();
      param_2[1] = (long)plVar2;
      func_0x000104c2dfe4();
      __Znam();
      *param_2 = (long)plVar2;
      for (plVar6 = (long *)0x0; func_0x000104c2dfe4(), plVar6 < plVar2;
          plVar6 = (long *)((long)plVar6 + 1)) {
        plVar2 = plVar5;
        func_0x000104c2d654(plVar5,plVar6);
        *(char *)(*param_2 + (long)plVar6) = (char)plVar2;
      }
    }
    return;
  case 3:
    FUN_104c2d9a4(param_2);
    func_0x000104c2df9c();
    func_0x000104c2dec4();
    break;
  case 4:
    FUN_104c2d96c(param_2);
    func_0x000104c2dfb4();
    func_0x000104c2dec4();
    break;
  case 5:
    FUN_104c2d934(param_2);
    func_0x000104c2dfa8();
    func_0x000104c2dec4();
    break;
  case 6:
    FUN_104c2d8fc();
    pcVar1 = "true";
    if ((char)*param_2 == '\0') {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_b8,pcVar1);
    func_0x000104c2dec4();
    break;
  default:
    goto LAB_104c2dfcc;
  }
  func_0x000104c2df58();
LAB_104c2dfcc:
  return;
}



/* Entry: 104c2d774; end: 104c2d7ab;  */

void FUN_104c2d774(int *param_1,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_98 [8];
  
  piVar3 = param_1 + 2;
  if (*param_1 == 2) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  piVar4 = piVar3 + 2;
  if (*piVar3 == 1) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  if (*piVar4 == 0) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  switch((int)*param_2) {
  case 2:
    plVar5 = param_2;
    FUN_104c2d9dc();
    func_0x000104c2df4c();
    plVar2 = plVar5;
    FUN_104c2d614();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x000104c2dfe4();
      param_2[1] = (long)plVar2;
      func_0x000104c2dfe4();
      __Znam();
      *param_2 = (long)plVar2;
      for (plVar6 = (long *)0x0; func_0x000104c2dfe4(), plVar6 < plVar2;
          plVar6 = (long *)((long)plVar6 + 1)) {
        plVar2 = plVar5;
        func_0x000104c2d654(plVar5,plVar6);
        *(char *)(*param_2 + (long)plVar6) = (char)plVar2;
      }
    }
    return;
  case 3:
    FUN_104c2d9a4(param_2);
    func_0x000104c2df9c();
    func_0x000104c2dec4();
    break;
  case 4:
    FUN_104c2d96c(param_2);
    func_0x000104c2dfb4();
    func_0x000104c2dec4();
    break;
  case 5:
    FUN_104c2d934(param_2);
    func_0x000104c2dfa8();
    func_0x000104c2dec4();
    break;
  case 6:
    FUN_104c2d8fc();
    pcVar1 = "true";
    if ((char)*param_2 == '\0') {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_98,pcVar1);
    func_0x000104c2dec4();
    break;
  default:
    goto LAB_104c2dfcc;
  }
  func_0x000104c2df58();
LAB_104c2dfcc:
  return;
}



/* Entry: 104c2d7ac; end: 104c2d7e3;  */

void FUN_104c2d7ac(int *param_1,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_78 [8];
  
  piVar3 = param_1 + 2;
  if (*param_1 == 1) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  if (*piVar3 == 0) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  switch((int)*param_2) {
  case 2:
    plVar4 = param_2;
    FUN_104c2d9dc();
    func_0x000104c2df4c();
    plVar2 = plVar4;
    FUN_104c2d614();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x000104c2dfe4();
      param_2[1] = (long)plVar2;
      func_0x000104c2dfe4();
      __Znam();
      *param_2 = (long)plVar2;
      for (plVar5 = (long *)0x0; func_0x000104c2dfe4(), plVar5 < plVar2;
          plVar5 = (long *)((long)plVar5 + 1)) {
        plVar2 = plVar4;
        func_0x000104c2d654(plVar4,plVar5);
        *(char *)(*param_2 + (long)plVar5) = (char)plVar2;
      }
    }
    return;
  case 3:
    FUN_104c2d9a4(param_2);
    func_0x000104c2df9c();
    func_0x000104c2dec4();
    break;
  case 4:
    FUN_104c2d96c(param_2);
    func_0x000104c2dfb4();
    func_0x000104c2dec4();
    break;
  case 5:
    FUN_104c2d934(param_2);
    func_0x000104c2dfa8();
    func_0x000104c2dec4();
    break;
  case 6:
    FUN_104c2d8fc();
    pcVar1 = "true";
    if ((char)*param_2 == '\0') {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    func_0x000104c2dec4();
    break;
  default:
    goto LAB_104c2dfcc;
  }
  func_0x000104c2df58();
LAB_104c2dfcc:
  return;
}



/* Entry: 104c2d7e4; end: 104c2d817;  */

void FUN_104c2d7e4(int *param_1,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_58 [8];
  
  if (*param_1 == 0) {
    return;
  }
  func_0x000104c2df10();
  func_0x000104c2de68();
  func_0x000104c2de44();
  func_0x000104c2de5c();
  func_0x000104c2df08();
  switch((int)*param_2) {
  case 2:
    plVar3 = param_2;
    FUN_104c2d9dc();
    func_0x000104c2df4c();
    plVar2 = plVar3;
    FUN_104c2d614();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x000104c2dfe4();
      param_2[1] = (long)plVar2;
      func_0x000104c2dfe4();
      __Znam();
      *param_2 = (long)plVar2;
      for (plVar4 = (long *)0x0; func_0x000104c2dfe4(), plVar4 < plVar2;
          plVar4 = (long *)((long)plVar4 + 1)) {
        plVar2 = plVar3;
        func_0x000104c2d654(plVar3,plVar4);
        *(char *)(*param_2 + (long)plVar4) = (char)plVar2;
      }
    }
    return;
  case 3:
    FUN_104c2d9a4(param_2);
    func_0x000104c2df9c();
    func_0x000104c2dec4();
    break;
  case 4:
    FUN_104c2d96c(param_2);
    func_0x000104c2dfb4();
    func_0x000104c2dec4();
    break;
  case 5:
    FUN_104c2d934(param_2);
    func_0x000104c2dfa8();
    func_0x000104c2dec4();
    break;
  case 6:
    FUN_104c2d8fc();
    pcVar1 = "true";
    if ((char)*param_2 == '\0') {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_58,pcVar1);
    func_0x000104c2dec4();
    break;
  default:
    goto LAB_104c2dfcc;
  }
  func_0x000104c2df58();
LAB_104c2dfcc:
  return;
}



/* Entry: 104c2d818; end: 104c2d8fb;  */

void FUN_104c2d818(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_38 [8];
  
  switch((int)*param_2) {
  case 2:
    plVar3 = param_2;
    FUN_104c2d9dc();
    func_0x000104c2df4c();
    plVar2 = plVar3;
    FUN_104c2d614();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x000104c2dfe4();
      param_2[1] = (long)plVar2;
      func_0x000104c2dfe4();
      __Znam();
      *param_2 = (long)plVar2;
      for (plVar4 = (long *)0x0; func_0x000104c2dfe4(), plVar4 < plVar2;
          plVar4 = (long *)((long)plVar4 + 1)) {
        plVar2 = plVar3;
        func_0x000104c2d654(plVar3,plVar4);
        *(char *)(*param_2 + (long)plVar4) = (char)plVar2;
      }
    }
    return;
  case 3:
    FUN_104c2d9a4(param_2);
    func_0x000104c2df9c();
    func_0x000104c2dec4();
    break;
  case 4:
    FUN_104c2d96c(param_2);
    func_0x000104c2dfb4();
    func_0x000104c2dec4();
    break;
  case 5:
    FUN_104c2d934(param_2);
    func_0x000104c2dfa8();
    func_0x000104c2dec4();
    break;
  case 6:
    FUN_104c2d8fc();
    pcVar1 = "true";
    if ((char)*param_2 == '\0') {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_38,pcVar1);
    func_0x000104c2dec4();
    break;
  default:
    goto LAB_104c2dfcc;
  }
  func_0x000104c2df58();
LAB_104c2dfcc:
  return;
}



/* Entry: 104c2d8fc; end: 104c2d933;  */

void FUN_104c2d8fc(int *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lStack_e0;
  long lStack_d8;
  
  piVar6 = param_1 + 2;
  if (*param_1 != 6) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    piVar1 = piVar6 + 2;
    if (*piVar6 != 5) {
      func_0x000104c2df10();
      func_0x000104c2de68();
      func_0x000104c2de44();
      func_0x000104c2de5c();
      func_0x000104c2df08();
      piVar6 = piVar1 + 2;
      if (*piVar1 != 4) {
        func_0x000104c2df10();
        func_0x000104c2de68();
        func_0x000104c2de44();
        func_0x000104c2de5c();
        func_0x000104c2df08();
        piVar1 = piVar6 + 2;
        if (*piVar6 != 3) {
          func_0x000104c2df10();
          func_0x000104c2de68();
          func_0x000104c2de44();
          func_0x000104c2de5c();
          func_0x000104c2df08();
          plVar2 = (long *)(piVar1 + 2);
          if (*piVar1 != 2) {
            func_0x000104c2df10();
            func_0x000104c2de68();
            func_0x000104c2de44();
            func_0x000104c2de5c();
            func_0x000104c2df08();
            lVar10 = param_2;
            lVar4 = param_2;
            FUN_104c2db28();
            uVar9 = 0;
            lStack_e0 = lVar10;
            lStack_d8 = lVar4;
            while (uVar7 = (uint)uVar9, lStack_e0 != 0) {
              if (*(int *)(lStack_d8 + 0x38) - 2U < 5) {
                uVar7 = uVar7 + 1;
              }
              uVar9 = (ulong)uVar7;
              FUN_104c2de10(&lStack_e0);
            }
            if (uVar7 != 0) {
              plVar2[1] = uVar9;
              lVar10 = uVar9 * 0x28;
              puVar3 = (undefined8 *)(lVar10 + 0x10);
              __Znam();
              *puVar3 = 0x28;
              puVar3[1] = uVar9;
              puVar5 = puVar3 + 3;
              do {
                puVar5[1] = 0;
                *puVar5 = 0;
                puVar5[3] = 0;
                puVar5[2] = 0;
                puVar5 = puVar5 + 5;
                lVar10 = lVar10 + -0x28;
              } while (lVar10 != 0);
              *plVar2 = (long)(puVar3 + 2);
              FUN_104c2db28();
              iVar8 = 0;
              lStack_e0 = param_2;
              lStack_d8 = lVar4;
              while (lStack_e0 != 0) {
                piVar6 = (int *)(lStack_d8 + 0x38);
                if (*piVar6 - 2U < 5) {
                  FUN_104c2d5a8(*plVar2 + (long)iVar8 * 0x28 + 8);
                  FUN_104c2d818(*plVar2 + (long)iVar8 * 0x28 + 0x18,piVar6);
                  iVar8 = iVar8 + 1;
                }
                FUN_104c2de10(&lStack_e0);
              }
            }
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 104c2d934; end: 104c2d96b;  */

void FUN_104c2d934(int *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lStack_c0;
  long lStack_b8;
  
  piVar6 = param_1 + 2;
  if (*param_1 != 5) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    piVar1 = piVar6 + 2;
    if (*piVar6 != 4) {
      func_0x000104c2df10();
      func_0x000104c2de68();
      func_0x000104c2de44();
      func_0x000104c2de5c();
      func_0x000104c2df08();
      piVar6 = piVar1 + 2;
      if (*piVar1 != 3) {
        func_0x000104c2df10();
        func_0x000104c2de68();
        func_0x000104c2de44();
        func_0x000104c2de5c();
        func_0x000104c2df08();
        plVar2 = (long *)(piVar6 + 2);
        if (*piVar6 != 2) {
          func_0x000104c2df10();
          func_0x000104c2de68();
          func_0x000104c2de44();
          func_0x000104c2de5c();
          func_0x000104c2df08();
          lVar10 = param_2;
          lVar4 = param_2;
          FUN_104c2db28();
          uVar9 = 0;
          lStack_c0 = lVar10;
          lStack_b8 = lVar4;
          while (uVar7 = (uint)uVar9, lStack_c0 != 0) {
            if (*(int *)(lStack_b8 + 0x38) - 2U < 5) {
              uVar7 = uVar7 + 1;
            }
            uVar9 = (ulong)uVar7;
            FUN_104c2de10(&lStack_c0);
          }
          if (uVar7 != 0) {
            plVar2[1] = uVar9;
            lVar10 = uVar9 * 0x28;
            puVar3 = (undefined8 *)(lVar10 + 0x10);
            __Znam();
            *puVar3 = 0x28;
            puVar3[1] = uVar9;
            puVar5 = puVar3 + 3;
            do {
              puVar5[1] = 0;
              *puVar5 = 0;
              puVar5[3] = 0;
              puVar5[2] = 0;
              puVar5 = puVar5 + 5;
              lVar10 = lVar10 + -0x28;
            } while (lVar10 != 0);
            *plVar2 = (long)(puVar3 + 2);
            FUN_104c2db28();
            iVar8 = 0;
            lStack_c0 = param_2;
            lStack_b8 = lVar4;
            while (lStack_c0 != 0) {
              piVar6 = (int *)(lStack_b8 + 0x38);
              if (*piVar6 - 2U < 5) {
                FUN_104c2d5a8(*plVar2 + (long)iVar8 * 0x28 + 8);
                FUN_104c2d818(*plVar2 + (long)iVar8 * 0x28 + 0x18,piVar6);
                iVar8 = iVar8 + 1;
              }
              FUN_104c2de10(&lStack_c0);
            }
          }
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 104c2d96c; end: 104c2d9a3;  */

void FUN_104c2d96c(int *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lStack_a0;
  long lStack_98;
  
  piVar6 = param_1 + 2;
  if (*param_1 != 4) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    piVar1 = piVar6 + 2;
    if (*piVar6 != 3) {
      func_0x000104c2df10();
      func_0x000104c2de68();
      func_0x000104c2de44();
      func_0x000104c2de5c();
      func_0x000104c2df08();
      plVar2 = (long *)(piVar1 + 2);
      if (*piVar1 != 2) {
        func_0x000104c2df10();
        func_0x000104c2de68();
        func_0x000104c2de44();
        func_0x000104c2de5c();
        func_0x000104c2df08();
        lVar10 = param_2;
        lVar4 = param_2;
        FUN_104c2db28();
        uVar9 = 0;
        lStack_a0 = lVar10;
        lStack_98 = lVar4;
        while (uVar7 = (uint)uVar9, lStack_a0 != 0) {
          if (*(int *)(lStack_98 + 0x38) - 2U < 5) {
            uVar7 = uVar7 + 1;
          }
          uVar9 = (ulong)uVar7;
          FUN_104c2de10(&lStack_a0);
        }
        if (uVar7 != 0) {
          plVar2[1] = uVar9;
          lVar10 = uVar9 * 0x28;
          puVar3 = (undefined8 *)(lVar10 + 0x10);
          __Znam();
          *puVar3 = 0x28;
          puVar3[1] = uVar9;
          puVar5 = puVar3 + 3;
          do {
            puVar5[1] = 0;
            *puVar5 = 0;
            puVar5[3] = 0;
            puVar5[2] = 0;
            puVar5 = puVar5 + 5;
            lVar10 = lVar10 + -0x28;
          } while (lVar10 != 0);
          *plVar2 = (long)(puVar3 + 2);
          FUN_104c2db28();
          iVar8 = 0;
          lStack_a0 = param_2;
          lStack_98 = lVar4;
          while (lStack_a0 != 0) {
            piVar6 = (int *)(lStack_98 + 0x38);
            if (*piVar6 - 2U < 5) {
              FUN_104c2d5a8(*plVar2 + (long)iVar8 * 0x28 + 8);
              FUN_104c2d818(*plVar2 + (long)iVar8 * 0x28 + 0x18,piVar6);
              iVar8 = iVar8 + 1;
            }
            FUN_104c2de10(&lStack_a0);
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 104c2d9a4; end: 104c2d9db;  */

void FUN_104c2d9a4(int *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lStack_80;
  long lStack_78;
  
  piVar5 = param_1 + 2;
  if (*param_1 != 3) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    plVar1 = (long *)(piVar5 + 2);
    if (*piVar5 != 2) {
      func_0x000104c2df10();
      func_0x000104c2de68();
      func_0x000104c2de44();
      func_0x000104c2de5c();
      func_0x000104c2df08();
      lVar9 = param_2;
      lVar3 = param_2;
      FUN_104c2db28();
      uVar8 = 0;
      lStack_80 = lVar9;
      lStack_78 = lVar3;
      while (uVar6 = (uint)uVar8, lStack_80 != 0) {
        if (*(int *)(lStack_78 + 0x38) - 2U < 5) {
          uVar6 = uVar6 + 1;
        }
        uVar8 = (ulong)uVar6;
        FUN_104c2de10(&lStack_80);
      }
      if (uVar6 != 0) {
        plVar1[1] = uVar8;
        lVar9 = uVar8 * 0x28;
        puVar2 = (undefined8 *)(lVar9 + 0x10);
        __Znam();
        *puVar2 = 0x28;
        puVar2[1] = uVar8;
        puVar4 = puVar2 + 3;
        do {
          puVar4[1] = 0;
          *puVar4 = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4 = puVar4 + 5;
          lVar9 = lVar9 + -0x28;
        } while (lVar9 != 0);
        *plVar1 = (long)(puVar2 + 2);
        FUN_104c2db28();
        iVar7 = 0;
        lStack_80 = param_2;
        lStack_78 = lVar3;
        while (lStack_80 != 0) {
          piVar5 = (int *)(lStack_78 + 0x38);
          if (*piVar5 - 2U < 5) {
            FUN_104c2d5a8(*plVar1 + (long)iVar7 * 0x28 + 8);
            FUN_104c2d818(*plVar1 + (long)iVar7 * 0x28 + 0x18,piVar5);
            iVar7 = iVar7 + 1;
          }
          FUN_104c2de10(&lStack_80);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 104c2d9dc; end: 104c2da13;  */

void FUN_104c2d9dc(int *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lStack_60;
  long lStack_58;
  
  plVar1 = (long *)(param_1 + 2);
  if (*param_1 != 2) {
    func_0x000104c2df10();
    func_0x000104c2de68();
    func_0x000104c2de44();
    func_0x000104c2de5c();
    func_0x000104c2df08();
    lVar9 = param_2;
    lVar3 = param_2;
    FUN_104c2db28();
    uVar8 = 0;
    lStack_60 = lVar9;
    lStack_58 = lVar3;
    while (uVar6 = (uint)uVar8, lStack_60 != 0) {
      if (*(int *)(lStack_58 + 0x38) - 2U < 5) {
        uVar6 = uVar6 + 1;
      }
      uVar8 = (ulong)uVar6;
      FUN_104c2de10(&lStack_60);
    }
    if (uVar6 != 0) {
      plVar1[1] = uVar8;
      lVar9 = uVar8 * 0x28;
      puVar2 = (undefined8 *)(lVar9 + 0x10);
      __Znam();
      *puVar2 = 0x28;
      puVar2[1] = uVar8;
      puVar4 = puVar2 + 3;
      do {
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4 = puVar4 + 5;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
      *plVar1 = (long)(puVar2 + 2);
      FUN_104c2db28();
      iVar7 = 0;
      lStack_60 = param_2;
      lStack_58 = lVar3;
      while (lStack_60 != 0) {
        piVar5 = (int *)(lStack_58 + 0x38);
        if (*piVar5 - 2U < 5) {
          FUN_104c2d5a8(*plVar1 + (long)iVar7 * 0x28 + 8);
          FUN_104c2d818(*plVar1 + (long)iVar7 * 0x28 + 0x18,piVar5);
          iVar7 = iVar7 + 1;
        }
        FUN_104c2de10(&lStack_60);
      }
    }
    return;
  }
  return;
}



/* Entry: 104c2da14; end: 104c2db27;  */

void FUN_104c2da14(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lStack_40;
  long lStack_38;
  
  lVar8 = param_2;
  lVar2 = param_2;
  FUN_104c2db28();
  uVar7 = 0;
  lStack_40 = lVar8;
  lStack_38 = lVar2;
  while (uVar5 = (uint)uVar7, lStack_40 != 0) {
    if (*(int *)(lStack_38 + 0x38) - 2U < 5) {
      uVar5 = uVar5 + 1;
    }
    uVar7 = (ulong)uVar5;
    FUN_104c2de10(&lStack_40);
  }
  if (uVar5 != 0) {
    param_1[1] = uVar7;
    lVar8 = uVar7 * 0x28;
    puVar1 = (undefined8 *)(lVar8 + 0x10);
    __Znam();
    *puVar1 = 0x28;
    puVar1[1] = uVar7;
    puVar3 = puVar1 + 3;
    do {
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
    *param_1 = (long)(puVar1 + 2);
    FUN_104c2db28();
    iVar6 = 0;
    lStack_40 = param_2;
    lStack_38 = lVar2;
    while (lStack_40 != 0) {
      piVar4 = (int *)(lStack_38 + 0x38);
      if (*piVar4 - 2U < 5) {
        FUN_104c2d5a8(*param_1 + (long)iVar6 * 0x28 + 8);
        FUN_104c2d818(*param_1 + (long)iVar6 * 0x28 + 0x18,piVar4);
        iVar6 = iVar6 + 1;
      }
      FUN_104c2de10(&lStack_40);
    }
  }
  return;
}



/* Entry: 104c2db28; end: 104c2dc43;  */

undefined1  [16] FUN_104c2db28(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = ((undefined8 *)*param_1)[1];
  uStack_20 = *(undefined8 *)*param_1;
  FUN_104c2ddb8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 104c2dc44; end: 104c2dc83;  */

void FUN_104c2dc44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *param_2;
  uStack_30 = *param_3;
  uStack_28 = *param_4;
  uStack_20 = *param_5;
  uStack_18 = *param_6;
  FUN_104c2dc84(param_1,&uStack_38);
  return;
}



/* Entry: 104c2dc84; end: 104c2dd53;  */

long FUN_104c2dc84(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((int)param_1[5] == 0) {
    plVar1 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    return (long)*(char *)((long)plVar1 + *(long *)*param_2);
  }
  if ((int)param_1[5] == 1) {
    return (long)*(char *)((long)param_1 + *(long *)param_2[1] + 2);
  }
  if ((int)param_1[5] == 2) {
    return (long)*(char *)(*param_1 + *(long *)param_2[2] + 2);
  }
  if ((int)param_1[5] == 3) {
    puVar2 = (undefined8 *)*param_1;
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*puVar2;
    }
    return (long)*(char *)((long)puVar2 + *(long *)param_2[3]);
  }
  return (long)*(char *)(*param_1 + *(long *)param_2[4]);
}



/* Entry: 104c2dd54; end: 104c2ddb7;  */

void FUN_104c2dd54(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_DAT_1107eaef0;
  return;
}



/* Entry: 104c2ddb8; end: 104c2de0f;  */

void FUN_104c2ddb8(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x78;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 104c2de10; end: 104c2de43;  */

long * FUN_104c2de10(long *param_1)

{
  param_1[1] = param_1[1] + 0x78;
  *param_1 = *param_1 + 1;
  FUN_104c2ddb8();
  return param_1;
}



/* Entry: 104c2de44; end: 104c2dfeb;  */

void FUN_104c2de44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 104c2dfec; end: 104c2e1f7;  */

undefined1  [16] FUN_104c2dfec(long param_1,code *param_2,long *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  char cVar2;
  char cVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  undefined1 *extraout_x10;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *apuStack_e0 [2];
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 auStack_b8 [2];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  uVar8 = 0;
  func_0x000100060994();
  uStack_48 = extraout_x8;
  if (*(long *)param_2 == 0) {
LAB_104c2e0a8:
    uVar8 = 0;
    uVar11 = uVar8;
    goto LAB_104c2e0f0;
  }
  uVar11 = 0;
  if (*(long *)(param_2 + 8) == 0) goto LAB_104c2e0f0;
  uVar8 = 0;
  if (*param_3 == 0) goto LAB_104c2e0a8;
  uVar11 = 0;
  if (param_3[1] == 0) goto LAB_104c2e0f0;
  lStack_90 = *(long *)param_2;
  lStack_88 = *(long *)(param_2 + 8);
  FUN_104c2f01c(auStack_a8,&lStack_90);
  lVar1 = *param_3;
  param_3 = (long *)param_3[1];
  func_0x000104c302a4(auStack_80,lVar1);
  param_2 = (code *)auStack_a8;
  FUN_104c308c0(auStack_c0);
  puVar7 = auStack_b8;
  puVar9 = auStack_b8;
  while (puVar12 = (undefined8 *)*puVar7, puVar12 != (undefined8 *)0x0) {
    iVar10 = (int)puVar12 + 0x20;
    param_2 = (code *)auStack_80;
    FUN_104c2fc44();
    lVar1 = 8;
    if (iVar10 == 0) {
      lVar1 = 0;
    }
    puVar7 = (undefined8 *)((long)puVar12 + lVar1);
    if (iVar10 == 0) {
      puVar9 = puVar12;
    }
  }
  in_ZR = auStack_b8 == puVar9;
  if ((bool)in_ZR) {
LAB_104c2e0c8:
    uVar8 = 0;
    uVar11 = 0;
  }
  else {
    uVar4 = 0;
    param_2 = (code *)(puVar9 + 4);
    FUN_104c2fc44();
    if ((uVar4 & 1) != 0) goto LAB_104c2e0c8;
    uVar11 = puVar9[0xb];
    uVar8 = puVar9[0xc];
  }
  func_0x000104c30c1c(auStack_c0);
  FUN_104c2f714(auStack_80);
  func_0x000104c30c1c(auStack_a8);
  unaff_x19 = param_1;
LAB_104c2e0f0:
  while( true ) {
    func_0x000100060b40(uStack_48);
    if ((bool)in_ZR) {
      auVar13._8_8_ = uVar8;
      auVar13._0_8_ = uVar11;
      return auVar13;
    }
    ___stack_chk_fail();
    func_0x000104c34344();
    func_0x000104c30c1c(auStack_c0);
    FUN_104c2f714(auStack_80);
    puVar5 = auStack_a8;
    func_0x000104c30c1c();
    iVar10 = (int)uVar11;
    cVar2 = SBORROW4(iVar10,1);
    cVar3 = iVar10 + -1 < 0;
    in_ZR = iVar10 == 1;
    if (!(bool)in_ZR) break;
    func_0x000104c344f8();
    puVar5 = auStack_80;
    func_0x00010002b838(puVar5,"MapsClient: could not getLayer, exception message: ");
    func_0x000104c34258();
    func_0x000100456794(auStack_a8,auStack_80,puVar5);
    param_2 = *(code **)(unaff_x19 + 8);
    param_3 = (long *)(ulong)*(byte *)(unaff_x19 + 0x10);
    FUN_104c2e1f8(auStack_a8);
    func_0x000104c344a4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    ___cxa_end_catch();
    uVar8 = 0;
    uVar11 = 0;
  }
  func_0x000104c34390();
  func_0x000104c345a8();
  ppuVar6 = (undefined1 **)puVar5;
  if (((ulong)param_3 & 1) != 0) {
    ppuVar6 = apuStack_e0;
    pcStack_c8 = FUN_104c2e1f8;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x000100456780();
    apuStack_e0[0] = extraout_x10;
    if (cVar3 == cVar2) {
      apuStack_e0[0] = puVar5;
    }
    (*param_2)(apuStack_e0);
  }
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = ppuVar6;
  return auVar14;
}



/* Entry: 104c2e1f8; end: 104c2e22b;  */

void FUN_104c2e1f8(undefined8 param_1,code *param_2,uint param_3)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x10;
  undefined8 auStack_20 [2];
  
  if ((param_3 & 1) != 0) {
    func_0x000100456780();
    auStack_20[0] = extraout_x10;
    if (in_NG == in_OV) {
      auStack_20[0] = param_1;
    }
    (*param_2)(auStack_20);
  }
  return;
}



/* Entry: 104c2e22c; end: 104c2e323;  */

/* WARNING: Removing unreachable block (ram,0x000104c2ebe8) */

undefined **
FUN_104c2e22c(ulong *****param_1,ulong *****param_2,undefined1 *param_3,long *param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  ulong **ppuVar11;
  ulong ****ppppuVar12;
  undefined **ppuVar13;
  ulong *****pppppuVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar17;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong ***pppuVar18;
  ulong *****pppppuVar19;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined **ppuVar20;
  ulong ****ppppuVar21;
  int iVar22;
  ulong ***unaff_x21;
  ulong ***pppuVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong *****pppppuVar27;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  ulong uStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  ulong ***pppuStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined4 auStack_568 [16];
  undefined1 auStack_528 [56];
  ulong *puStack_4f0;
  ulong ****ppppuStack_4e8;
  undefined8 uStack_4b0;
  undefined1 *puStack_428;
  ulong ***pppuStack_418;
  ulong ***pppuStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  ulong ****ppppuStack_3f0;
  ulong ****ppppuStack_3e8;
  undefined2 auStack_3e0 [4];
  ulong ****ppppuStack_3d8;
  ulong ***pppuStack_3c0;
  long lStack_3b8;
  ulong ***apppuStack_3a0 [3];
  undefined1 auStack_388 [64];
  byte bStack_348;
  ulong ***pppuStack_320;
  long lStack_318;
  ulong ***pppuStack_310;
  long lStack_308;
  long alStack_300 [17];
  undefined1 auStack_278 [24];
  ulong ****ppppuStack_260;
  ulong ****ppppuStack_258;
  ulong ****ppppuStack_250;
  long lStack_248;
  undefined8 uStack_238;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1a8 [136];
  long lStack_120;
  long lStack_118;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_c8 [60];
  uint uStack_8c;
  undefined8 uStack_28;
  
  ppuVar20 = (undefined **)0x0;
  func_0x000100060994();
  plVar6 = (long *)param_3;
  uStack_28 = extraout_x8;
  if ((*param_4 != 0) && (param_4[1] != 0)) {
    lStack_e0 = *param_4;
    lStack_d8 = param_4[1];
    func_0x000104c34790();
    ppuVar20 = (undefined **)(ulong)uStack_8c;
    plVar6 = (long *)auStack_c8;
    func_0x000104c31594();
    unaff_x19 = param_3;
  }
  while( true ) {
    func_0x000100060b40(uStack_28);
    if ((bool)in_ZR) {
      return ppuVar20;
    }
    ___stack_chk_fail();
    in_ZR = (int)param_4 == 1;
    if (!(bool)in_ZR) break;
    func_0x000104c344f8();
    func_0x00010002b838(auStack_c8,"MapsClient: could not get extent, exception message: ");
    func_0x000104c34258();
    func_0x000104c34720();
    param_4 = *(long **)(unaff_x19 + 8);
    param_5 = (ulong)(byte)unaff_x19[0x10];
    plVar6 = &lStack_e0;
    FUN_104c2e1f8();
    func_0x000104c345d0();
    func_0x000104c344a4();
    ___cxa_end_catch();
    ppuVar20 = (undefined **)0x0;
  }
  puVar15 = (undefined1 *)plVar6;
  func_0x000104c34390();
  func_0x000104c345a8();
  pcStack_e8 = FUN_104c2e324;
  ppuVar20 = (undefined **)0x0;
  puStack_100 = (undefined1 *)plVar6;
  puStack_f8 = unaff_x19;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000100060994();
  plVar6 = (long *)puVar15;
  uStack_108 = extraout_x8_00;
  if ((*param_4 != 0) && (param_4[1] != 0)) {
    lStack_1c0 = *param_4;
    lStack_1b8 = param_4[1];
    func_0x000104c34790();
    ppuVar20 = (undefined **)(lStack_118 - lStack_120 >> 4);
    plVar6 = (long *)auStack_1a8;
    func_0x000104c31594();
    unaff_x19 = puVar15;
  }
  while( true ) {
    func_0x000100060b40(uStack_108);
    if ((bool)in_ZR) {
      return ppuVar20;
    }
    ___stack_chk_fail();
    in_ZR = (int)param_4 == 1;
    if (!(bool)in_ZR) break;
    func_0x000104c344f8();
    func_0x00010002b838(auStack_1a8,"MapsClient: could not get featureCount, exception message: ");
    func_0x000104c34258();
    func_0x000104c34720();
    param_4 = *(long **)(unaff_x19 + 8);
    param_5 = (ulong)(byte)unaff_x19[0x10];
    plVar6 = &lStack_1c0;
    FUN_104c2e1f8();
    func_0x000104c345d0();
    func_0x000104c344a4();
    ___cxa_end_catch();
    ppuVar20 = (undefined **)0x0;
  }
  func_0x000104c34390();
  func_0x000104c345a8();
  ppuVar20 = (undefined **)0x0;
  func_0x000100060994();
  uStack_238 = extraout_x8_01;
  if ((*param_4 == 0) || (param_4[1] == 0)) goto LAB_104c2ea20;
  lStack_400 = *param_4;
  lStack_3f8 = param_4[1];
  FUN_104c30c7c(alStack_300,&lStack_400);
  puVar15 = auStack_278;
  FUN_104c315d4(puVar15,param_5);
  ppppuStack_260 = (ulong ****)0x0;
  ppppuStack_258 = (ulong ****)0x0;
  FUN_104c31604(apppuStack_3a0,puVar15,alStack_300,&ppppuStack_260);
  FUN_104c33970(&ppppuStack_260);
  pppuStack_418 = (ulong ***)0x0;
  pppuStack_410 = (ulong ***)0x0;
  lStack_408 = 0;
  pppppuVar14 = (ulong *****)apppuStack_3a0;
  FUN_104c33994();
  FUN_104c33a78(&pppuStack_418);
  pppppuVar19 = (ulong *****)&pppuStack_418;
  func_0x000104c33c64(pppppuVar19);
  bVar3 = bStack_348;
  pppppuVar27 = (ulong *****)0x0;
  pppuVar23 = (ulong ***)0x0;
  lVar24 = 0;
  uVar26 = 0;
  pppuStack_3c0 = pppuStack_320;
  lStack_3b8 = lStack_318;
  lVar25 = 2;
  if (bStack_348 != 3) {
    lVar25 = 0;
  }
  if (bStack_348 == 2) {
    lVar25 = 1;
  }
  bVar2 = true;
  unaff_x21 = (ulong ***)0x1;
  while (pppuStack_3c0 != pppuStack_310 || lStack_3b8 != lStack_308) {
    if (uVar26 == 0) {
      pppppuVar19 = (ulong *****)&pppuStack_3c0;
      func_0x000104c343e0();
      ppppuStack_260 = (ulong ****)pppppuVar19;
      ppppuStack_258 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      unaff_x21 = (ulong ***)(ulong)((uint)pppppuVar19 & 7);
      uVar26 = (uint)pppppuVar19 >> 3;
      uVar16 = uVar26;
      if (0xffff < uVar26) {
        uVar16 = 0x10000;
      }
      pppppuVar27 = (ulong *****)(ulong)uVar16;
    }
    iVar22 = (int)unaff_x21;
    if (iVar22 - 1U < 2) {
      if (bVar3 == 1) {
        if (iVar22 != 1 || !bVar2) goto LAB_104c2e5cc;
        pppppuVar14 = pppppuVar27;
        FUN_104c33a78(&pppuStack_418);
        bVar2 = false;
LAB_104c2e5d4:
        pppuVar18 = (ulong ***)pppuStack_410[-3];
        if (pppuVar18 != (ulong ***)pppuStack_410[-2]) {
          if ((ulong)((long)pppuStack_410[-2] - (long)pppuVar18) <=
              (ulong)((long)pppuStack_410[-1] - (long)pppuVar18 >> 2)) {
            FUN_104c33e74();
          }
          func_0x000104c33c64(&pppuStack_418);
          bVar2 = (bool)(bVar3 != 1 | bVar2);
        }
      }
      else if (iVar22 != 2 || (bool)(bVar2 ^ 1)) {
LAB_104c2e5cc:
        if (iVar22 == 1) goto LAB_104c2e5d4;
      }
      else {
        pppppuVar14 = (ulong *****)(lVar25 + (long)pppppuVar27);
        FUN_104c33d24(pppuStack_410 + -3);
        bVar2 = false;
      }
      ppppuVar12 = &pppuStack_3c0;
      func_0x000104c343e0();
      ppppuStack_260 = ppppuVar12;
      ppppuStack_258 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      pppppuVar19 = (ulong *****)&pppuStack_3c0;
      func_0x000104c343e0();
      ppppuStack_260 = (ulong ****)pppppuVar19;
      ppppuStack_258 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      lVar24 = lVar24 + (int)(-((uint)ppppuVar12 & 1) ^ (uint)ppppuVar12 >> 1);
      if ((lVar24 != (short)lVar24) ||
         (pppuVar23 = (ulong ***)
                      ((long)pppuVar23 +
                      (long)(int)(-((uint)pppppuVar19 & 1) ^ (uint)pppppuVar19 >> 1)),
         pppuVar23 + -0x1000 < (ulong ***)0xffffffffffff0000)) {
        func_0x000104c3444c();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000104c3420c();
        ___cxa_throw(pppppuVar19);
LAB_104c2ea8c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104c2ea90);
        (*pcVar4)();
      }
      pppppuVar19 = (ulong *****)(pppuStack_410 + -3);
      ppppuStack_260 = (ulong ****)CONCAT62(ppppuStack_260._2_6_,(short)lVar24);
      auStack_3e0[0] = SUB82(pppuVar23,0);
      pppppuVar14 = &ppppuStack_260;
      FUN_104c33f04(pppppuVar19,pppppuVar14,auStack_3e0);
      uVar26 = uVar26 - 1;
    }
    else {
      if (iVar22 != 7) {
        func_0x000104c3444c();
        func_0x000104c3472c();
        func_0x000104c3420c();
        ___cxa_throw(pppppuVar19);
        goto LAB_104c2ea8c;
      }
      pppppuVar19 = (ulong *****)(pppuStack_410 + -3);
      pppppuVar14 = (ulong *****)*pppppuVar19;
      if (pppppuVar14 != (ulong *****)pppuStack_410[-2]) {
        FUN_104c33ff8();
      }
      uVar26 = 0;
    }
  }
  lVar24 = ((long)pppuStack_410 - (long)pppuStack_418) / 0x18;
  if ((ulong)((long)pppuStack_410 - (long)pppuStack_418) < (ulong)(lStack_408 - (long)pppuStack_418)
      && (ulong)(lVar24 << 2) <= (ulong)((lStack_408 - (long)pppuStack_418) / 0x18)) {
    func_0x000104c33bb0(&ppppuStack_260,lVar24,lVar24,&lStack_408);
    if ((ulong)(lStack_248 - (long)ppppuStack_260) < (ulong)(lStack_408 - (long)pppuStack_418)) {
      func_0x000104c33af4(&pppuStack_418,&ppppuStack_260);
    }
    func_0x000104c33c1c(&ppppuStack_260);
  }
  pppuVar18 = pppuStack_410;
  ppppuVar12 = (ulong ****)pppuStack_418;
  in_ZR = true;
  if (pppuStack_418 == pppuStack_410) {
LAB_104c2e778:
                    /* WARNING: This code block may not be properly labeled as switch case */
    ppuVar20 = (undefined **)0x0;
    goto LAB_104c2ea08;
  }
  pppuStack_3c0 = (ulong ***)CONCAT44(pppuStack_3c0._4_4_,7);
  in_ZR = bStack_348 == 3;
  if (3 < bStack_348) goto LAB_104c2e9a0;
  pppppuVar19 = (ulong *****)((long)pppuStack_410 - (long)pppuStack_418);
  pppppuVar14 = (ulong *****)((long)pppppuVar19 / 0x18);
  ppppuVar21 = (ulong ****)pppuStack_410;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_348) {
  case 0:
  case 4:
  case 0xb:
  case 0x11:
  case 0x12:
  case 0x17:
  case 0x25:
  case 0x29:
  case 0x4e:
  case 0x70:
  case 0x94:
  case 0xab:
  case 0xd9:
  case 0x2d:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00010002b838(&ppppuStack_260);
    goto code_r0x000104c2e760;
  case 1:
    if (pppppuVar14 < (ulong *****)0x2) goto code_r0x000104c2e900;
    func_0x000104c34480();
    while( true ) {
      in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e858:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if ((bool)in_ZR) break;
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
code_r0x000104c2e860:
                    /* WARNING: This code block may not be properly labeled as switch case */
      for (; unaff_x21 != pppuVar23; unaff_x21 = (ulong ***)((long)unaff_x21 + 4)) {
        func_0x000104c3446c();
        ppppuStack_260 = (ulong ****)param_1;
        ppppuStack_258 = (ulong ****)param_2;
code_r0x000104c2e870:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c34778();
      }
      ppppuVar12 = ppppuVar12 + 3;
code_r0x000104c2e880:
                    /* WARNING: This code block may not be properly labeled as switch case */
    }
    uVar17 = 3;
    in_ZR = true;
    break;
  case 2:
  case 0x10:
  case 0x2c:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (pppppuVar14 < (ulong *****)0x2) goto code_r0x000104c2e884;
    func_0x000104c34480();
  case 0x2a:
    while( true ) {
                    /* WARNING: This code block may not be properly labeled as switch case */
      in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e790:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if ((bool)in_ZR) break;
code_r0x000104c2e794:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppppuStack_260 = (ulong ****)0x0;
      ppppuStack_258 = (ulong ****)0x0;
      ppppuStack_250 = (ulong ****)0x0;
code_r0x000104c2e79c:
                    /* WARNING: This code block may not be properly labeled as switch case */
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
      while( true ) {
        in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e7a4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e7a8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c3446c();
        ppppuStack_3f0 = (ulong ****)param_1;
        ppppuStack_3e8 = (ulong ****)param_2;
code_r0x000104c2e7b0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_104c31a04(&ppppuStack_260,&ppppuStack_3f0);
        unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
code_r0x000104c2e7c0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      }
code_r0x000104c2e7c4:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e7c8:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_104c31f7c();
      FUN_104c31c5c(&ppppuStack_260);
      ppppuVar12 = ppppuVar12 + 3;
    }
    func_0x000104c34110(2);
    func_0x000104c344dc();
    FUN_104c31d58(auStack_3e0);
    goto LAB_104c2e9a0;
  case 3:
  case 9:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if ((ulong *****)0x1 < pppppuVar14) {
      func_0x000104c34480();
      while( true ) {
        in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e7f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e7f4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        ppppuStack_260 = (ulong ****)0x0;
        ppppuStack_258 = (ulong ****)0x0;
        ppppuStack_250 = (ulong ****)0x0;
        FUN_104c3221c(&ppppuStack_260);
code_r0x000104c2e804:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x21 = *ppppuVar12;
        pppuVar23 = ppppuVar12[1];
        while( true ) {
          in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e80c:
                    /* WARNING: This code block may not be properly labeled as switch case */
          if ((bool)in_ZR) break;
code_r0x000104c2e810:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pppppuVar14 = (ulong *****)ppppuStack_258;
code_r0x000104c2e814:
                    /* WARNING: This code block may not be properly labeled as switch case */
          func_0x000104c3468c(pppppuVar14);
code_r0x000104c2e818:
                    /* WARNING: This code block may not be properly labeled as switch case */
          ppppuStack_3f0 = (ulong ****)param_1;
          ppppuStack_3e8 = (ulong ****)param_2;
code_r0x000104c2e81c:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e820:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_104c31a04();
          unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
        }
code_r0x000104c2e830:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c324d4();
        FUN_104c31ca8(&ppppuStack_260);
        ppppuVar12 = ppppuVar12 + 3;
      }
      func_0x000104c34110(1);
      func_0x000104c344dc();
      FUN_104c31df0(auStack_3e0);
      goto LAB_104c2e9a0;
    }
    func_0x000104c34480();
    FUN_104c3221c(auStack_3e0);
    ppppuVar12 = (ulong ****)pppuStack_418;
    ppppuVar21 = (ulong ****)pppuStack_410;
  case 0x3a:
  case 0x5b:
  case 0x85:
  case 0x89:
  case 0xc0:
  case 0xc4:
  case 0xc9:
  case 0xce:
  case 0xed:
  case 0xf1:
  case 0xf6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    while (in_ZR = ppppuVar12 == ppppuVar21, !(bool)in_ZR) {
code_r0x000104c2e8d0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
code_r0x000104c2e8d4:
      while( true ) {
                    /* WARNING: This code block may not be properly labeled as switch case */
        in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e8d8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e8dc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pppppuVar14 = (ulong *****)ppppuStack_3d8;
code_r0x000104c2e8e0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c3468c(pppppuVar14);
code_r0x000104c2e8e4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        ppppuStack_260 = (ulong ****)param_1;
        ppppuStack_258 = (ulong ****)param_2;
code_r0x000104c2e8e8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_104c31a04();
code_r0x000104c2e8f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
      }
code_r0x000104c2e8f8:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppppuVar12 = ppppuVar12 + 3;
code_r0x000104c2e8fc:
                    /* WARNING: This code block may not be properly labeled as switch case */
    }
    func_0x000104c34110(4);
    func_0x000104c344dc();
    FUN_104c31ca8(auStack_3e0);
    goto LAB_104c2e9a0;
  case 5:
    goto code_r0x000104c2e7c8;
  case 6:
    goto code_r0x000104c2e7a4;
  case 7:
    goto code_r0x000104c2e7b0;
  case 8:
  case 0xe:
  case 0xf:
    goto code_r0x000104c2e794;
  case 10:
    goto code_r0x000104c2e7f4;
  case 0xc:
  case 0x15:
    goto code_r0x000104c2e774;
  case 0xd:
    goto code_r0x000104c2e760;
  case 0x13:
    goto code_r0x000104c2e79c;
  case 0x14:
    goto code_r0x000104c2e7c4;
  case 0x16:
    goto code_r0x000104c2e7c0;
  case 0x18:
    goto code_r0x000104c2e770;
  case 0x19:
    goto code_r0x000104c2e7a8;
  case 0x1a:
    goto code_r0x000104c2e804;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x2b:
    goto code_r0x000104c2e764;
  case 0x24:
    goto code_r0x000104c2e7f0;
  case 0x26:
    goto code_r0x000104c2e790;
  case 0x27:
    goto code_r0x000104c2e768;
  case 0x28:
    goto LAB_104c2e778;
  case 0x2e:
  case 0x4f:
  case 0x71:
  case 0x95:
  case 0xac:
  case 0xda:
code_r0x000104c2e884:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x000104c34480();
    for (; in_ZR = ppppuVar12 == (ulong ****)pppuVar18, !(bool)in_ZR; ppppuVar12 = ppppuVar12 + 3) {
      pppuVar23 = ppppuVar12[1];
      for (unaff_x21 = *ppppuVar12; unaff_x21 != pppuVar23;
          unaff_x21 = (ulong ***)((long)unaff_x21 + 4)) {
        func_0x000104c3446c();
        ppppuStack_260 = (ulong ****)param_1;
        ppppuStack_258 = (ulong ****)param_2;
        func_0x000104c34778();
      }
    }
    uVar17 = 5;
    break;
  case 0x2f:
  case 0x50:
    goto code_r0x000104c2e81c;
  case 0x30:
  case 0x39:
  case 0x46:
  case 0x51:
  case 0x5a:
  case 0x68:
    goto code_r0x000104c2e918;
  case 0x31:
  case 0x3f:
  case 0x4b:
  case 0x52:
  case 0x60:
  case 0x6d:
  case 0x7f:
  case 0x92:
  case 0xa9:
  case 0xba:
  case 0xbc:
  case 0xbf:
  case 0xd7:
  case 0xeb:
  case 0xf4:
  case 0xff:
    goto code_r0x000104c2e904;
  case 0x32:
  case 0x37:
  case 0x44:
  case 0x53:
  case 0x58:
  case 0x66:
  case 0x81:
  case 0x87:
  case 0xe8:
    goto code_r0x000104c2e8d0;
  case 0x33:
  case 0x38:
  case 0x45:
  case 0x54:
  case 0x59:
  case 0x67:
  case 0x73:
  case 0x8e:
  case 0x97:
  case 0xa5:
  case 0xae:
  case 0xc1:
  case 0xcc:
  case 0xd3:
  case 0xdc:
  case 0xfb:
    goto code_r0x000104c2e90c;
  case 0x34:
  case 0x35:
  case 0x41:
  case 0x55:
  case 0x56:
  case 0x62:
  case 99:
  case 0x7d:
  case 0xb8:
    goto code_r0x000104c2e810;
  case 0x36:
  case 0x57:
code_r0x000104c2e900:
                    /* WARNING: This code block may not be properly labeled as switch case */
    pppppuVar14 = (ulong *****)*pppuStack_418;
    pppppuVar19 = (ulong *****)pppuStack_418[1];
    goto code_r0x000104c2e904;
  case 0x3b:
  case 0x5c:
  case 0x8c:
  case 0xa3:
  case 0xd1:
  case 0xf9:
    goto code_r0x000104c2e8d8;
  case 0x3c:
  case 0x48:
  case 0x5d:
  case 0x6a:
  case 0x82:
  case 0xf2:
    goto code_r0x000104c2e8fc;
  case 0x3d:
  case 0x49:
  case 0x5e:
  case 0x6b:
  case 0x7e:
  case 0x83:
  case 0x90:
  case 0xa7:
  case 0xc6:
  case 0xd5:
  case 0xea:
  case 0xfd:
    goto code_r0x000104c2e8f0;
  case 0x3e:
  case 0x4a:
  case 0x5f:
  case 0x6c:
  case 0x79:
  case 0x8a:
  case 0x8d:
  case 0x9d:
  case 0xa1:
  case 0xa4:
  case 0xb4:
  case 200:
  case 0xcd:
  case 0xcf:
  case 0xd2:
  case 0xe2:
  case 0xf7:
  case 0xfa:
    goto code_r0x000104c2e8e0;
  case 0x40:
  case 0x4c:
  case 0x61:
  case 0x6e:
  case 0x76:
  case 0x86:
  case 0x8f:
  case 0x9a:
  case 0xa6:
  case 0xb1:
  case 0xca:
  case 0xd4:
  case 0xdf:
  case 0xec:
  case 0xee:
  case 0xfc:
    goto code_r0x000104c2e91c;
  case 0x42:
    goto code_r0x000104c2e80c;
  case 0x43:
  case 0x65:
    goto code_r0x000104c2e880;
  case 0x47:
  case 0x69:
    goto code_r0x000104c2e858;
  case 0x4d:
  case 0x6f:
  case 0x93:
  case 0xaa:
  case 0xd8:
    goto code_r0x000104c2e860;
  case 100:
    goto code_r0x000104c2e870;
  case 0x72:
  case 0x96:
  case 0xa0:
  case 0xad:
  case 0xdb:
    goto code_r0x000104c2e830;
  case 0x74:
  case 0x7a:
  case 0x98:
  case 0x9e:
  case 0xaf:
  case 0xb5:
  case 199:
  case 0xdd:
  case 0xe3:
  case 0xe9:
    goto code_r0x000104c2e914;
  default:
    goto code_r0x000104c2e908;
  case 0x78:
  case 0x9c:
  case 0xb3:
  case 0xe1:
    goto code_r0x000104c2e934;
  case 0x7c:
  case 0xe5:
    goto code_r0x000104c2e814;
  case 0x80:
  case 0xe7:
    goto code_r0x000104c2e924;
  case 0x84:
    goto code_r0x000104c2e8dc;
  case 0x88:
  case 0xf5:
    goto code_r0x000104c2e8e8;
  case 0x8b:
  case 0xa2:
  case 0xd0:
  case 0xf8:
    goto code_r0x000104c2e92c;
  case 0xb7:
    goto code_r0x000104c2e818;
  case 0xb9:
    goto code_r0x000104c2e920;
  case 0xbb:
    goto code_r0x000104c2e8f8;
  case 0xbe:
  case 0xc5:
    goto code_r0x000104c2e928;
  case 0xc2:
    goto code_r0x000104c2e8d4;
  case 0xc3:
    goto code_r0x000104c2e8e4;
  case 0xcb:
    goto code_r0x000104c2e930;
  case 0xe6:
    goto code_r0x000104c2e820;
  }
  func_0x000104c34110(uVar17);
  func_0x000104c344dc();
  FUN_104c31c5c(auStack_3e0);
  goto LAB_104c2e9a0;
code_r0x000104c2e904:
                    /* WARNING: This code block may not be properly labeled as switch case */
  in_ZR = pppppuVar14 == pppppuVar19;
code_r0x000104c2e908:
                    /* WARNING: This code block may not be properly labeled as switch case */
  if (!(bool)in_ZR) {
code_r0x000104c2e90c:
                    /* WARNING: This code block may not be properly labeled as switch case */
    param_1 = (ulong *****)(double)(int)*(short *)pppppuVar14;
    goto code_r0x000104c2e914;
  }
  goto LAB_104c2e9a0;
code_r0x000104c2e914:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pppppuVar14 = (ulong *****)(long)*(short *)((long)pppppuVar14 + 2);
code_r0x000104c2e918:
                    /* WARNING: This code block may not be properly labeled as switch case */
  param_2 = (ulong *****)(double)(int)pppppuVar14;
code_r0x000104c2e91c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pppppuVar14 = (ulong *****)0x6;
code_r0x000104c2e920:
                    /* WARNING: This code block may not be properly labeled as switch case */
  ppppuStack_260 = (ulong ****)CONCAT44(ppppuStack_260._4_4_,(int)pppppuVar14);
code_r0x000104c2e924:
                    /* WARNING: This code block may not be properly labeled as switch case */
  ppppuStack_258 = (ulong ****)param_1;
  ppppuStack_250 = (ulong ****)param_2;
code_r0x000104c2e928:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e92c:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e930:
                    /* WARNING: This code block may not be properly labeled as switch case */
  FUN_104c31bac();
code_r0x000104c2e934:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000104c344dc();
  goto LAB_104c2e9a0;
code_r0x000104c2e760:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e764:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e768:
                    /* WARNING: This code block may not be properly labeled as switch case */
  FUN_104c2e1f8();
code_r0x000104c2e770:
                    /* WARNING: This code block may not be properly labeled as switch case */
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  goto code_r0x000104c2e774;
LAB_104c2ee54:
  FUN_104c2f2fc(&pppuStack_580);
  goto LAB_104c2edb8;
code_r0x000104c2e774:
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_104c2e9a0:
  ppuVar20 = (undefined **)0x38;
  __Znwm();
  ppuVar20[6] = (undefined *)0x0;
  param_1 = (ulong *****)0x0;
  ppuVar20[3] = (undefined *)0x0;
  ppuVar20[2] = (undefined *)0x0;
  ppuVar20[5] = (undefined *)0x0;
  ppuVar20[4] = (undefined *)0x0;
  ppuVar20[1] = (undefined *)0x0;
  *ppuVar20 = (undefined *)0x0;
  FUN_104c2d2d8();
  FUN_104c2d694(ppuVar20 + 5,auStack_388);
  FUN_104c2ec98(&ppppuStack_260,apppuStack_3a0);
  FUN_104c2da14(ppuVar20 + 3,&ppppuStack_260);
  FUN_104c335c0(&ppppuStack_260);
  FUN_104c3365c(&pppuStack_3c0);
LAB_104c2ea08:
  FUN_104c33680(&pppuStack_418);
  FUN_104c33700(apppuStack_3a0);
  func_0x000104c31594(alStack_300);
  puStack_428 = (undefined1 *)plVar6;
LAB_104c2ea20:
  while( true ) {
    func_0x000100060b40(uStack_238);
    if ((bool)in_ZR) {
      return ppuVar20;
    }
    ___stack_chk_fail();
    func_0x000104c34344();
    FUN_104c31ca8(auStack_3e0);
    FUN_104c3365c(&pppuStack_3c0);
    FUN_104c33680(&pppuStack_418);
    FUN_104c33700(apppuStack_3a0);
    plVar6 = alStack_300;
    func_0x000104c31594();
    in_ZR = (int)unaff_x21 == 1;
    if (!(bool)in_ZR) break;
    func_0x000104c344f8();
    plVar6 = alStack_300;
    func_0x00010002b838(plVar6,"MapsClient: could not get feature, exception message:");
    func_0x000104c34258();
    func_0x000100456794(apppuStack_3a0,alStack_300,plVar6);
    FUN_104c2e1f8(apppuStack_3a0,*(undefined8 *)(puStack_428 + 8),puStack_428[0x10]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_3a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_300);
    ___cxa_end_catch();
    ppuVar20 = (undefined **)0x0;
  }
  func_0x000104c34390();
  func_0x000104c345a8();
  plVar7 = plVar6;
  func_0x000100060994();
  uVar8 = plVar7[0xc];
  lStack_598 = plVar6[0xd];
  uVar1 = plVar6[0xe];
  lVar24 = plVar6[0xf];
  puStack_5c0 = &UNK_10e52b660;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  uStack_5a0 = uVar8;
  uStack_4b0 = extraout_x8_03;
  FUN_104c32864(uVar8,lStack_598,uVar1,lVar24);
  uVar5 = uVar8 == 1;
  if (0 < (long)uVar8) {
    pppppuVar14 = (ulong *****)(uVar8 >> 1);
    FUN_104c32780(&puStack_5c0);
    while (uVar5 = true, uStack_5a0 != uVar1 || lStack_598 != lVar24) {
      puVar9 = &uStack_5a0;
      func_0x000104c343e0();
      ppuVar10 = &puStack_4f0;
      puStack_4f0 = puVar9;
      ppppuStack_4e8 = (ulong ****)pppppuVar14;
      FUN_104c327f8(ppuVar10);
      if (uStack_5a0 == uVar1 && lStack_598 == lVar24) {
        func_0x000104c3444c();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000104c3420c();
        ___cxa_throw(ppuVar10);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104c2ef74);
        (*pcVar4)();
      }
      puVar9 = &uStack_5a0;
      func_0x000104c343e0();
      ppuVar11 = &puStack_4f0;
      puStack_4f0 = puVar9;
      ppppuStack_4e8 = (ulong ****)pppppuVar14;
      FUN_104c327f8(ppuVar11);
      plVar7 = (long *)(plVar6[2] + 0x58);
      func_0x000104c32820(plVar7,(ulong)ppuVar10 & 0xffffffff);
      pppppuVar14 = (ulong *****)*plVar7;
      puVar15 = (undefined1 *)((ulong)ppuVar11 & 0xffffffff);
      plVar7 = (long *)(plVar6[2] + 0x70);
      FUN_104c315d4(plVar7,puVar15);
      auStack_568[0] = 7;
      pppuStack_580 = (ulong ***)*plVar7;
      lStack_578 = (long)pppuStack_580 + plVar7[1];
      uStack_570 = 99;
LAB_104c2edb8:
      iVar22 = (int)&pppuStack_580;
      FUN_104c2f230();
      if (iVar22 != 0) {
        switch(uStack_570._4_4_) {
        case 1:
          ppppuVar12 = &pppuStack_580;
          func_0x000104c2f1c8(ppppuVar12);
          lVar25 = *plVar6;
          if (lVar25 == 0) {
            func_0x000104c302a4(auStack_528,ppppuVar12,puVar15);
          }
          else {
            lStack_588 = plVar6[1];
            lStack_590 = lVar25;
            if (lStack_588 != 0) {
              do {
                func_0x000104c346d0();
              } while (extraout_w10 != 0);
            }
            FUN_104c32ecc(auStack_528,ppppuVar12,puVar15,&lStack_590);
          }
          puVar15 = auStack_528;
          FUN_104c33004(&puStack_4f0);
          func_0x000104c347a8();
          FUN_104c3323c(&puStack_4f0);
          FUN_104c2f714(auStack_528);
          if (lVar25 != 0) {
            FUN_104c33970(&lStack_590);
          }
          goto LAB_104c2edb8;
        case 2:
          func_0x000104c331c8(&pppuStack_580);
          param_1 = (ulong *****)(double)SUB84(param_1,0);
          goto code_r0x000104c2ee6c;
        case 3:
          func_0x000104c331f0(&pppuStack_580);
code_r0x000104c2ee6c:
          puStack_4f0 = (ulong *)CONCAT44(puStack_4f0._4_4_,3);
          ppppuStack_4e8 = (ulong ****)param_1;
          break;
        case 4:
          pppppuVar19 = (ulong *****)&pppuStack_580;
          FUN_104c33218();
          goto code_r0x000104c2ee80;
        case 5:
          pppppuVar19 = (ulong *****)&pppuStack_580;
          FUN_104c317e4();
          puStack_4f0 = (ulong *)CONCAT44(puStack_4f0._4_4_,5);
          ppppuStack_4e8 = (ulong ****)pppppuVar19;
          break;
        case 6:
          pppppuVar19 = (ulong *****)&pppuStack_580;
          FUN_104c33220();
code_r0x000104c2ee80:
          puStack_4f0 = (ulong *)CONCAT44(puStack_4f0._4_4_,4);
          ppppuStack_4e8 = (ulong ****)pppppuVar19;
          break;
        case 7:
          uVar5 = SUB81(&pppuStack_580,0);
          FUN_104c32f6c();
          puStack_4f0 = (ulong *)CONCAT44(puStack_4f0._4_4_,6);
          ppppuStack_4e8 = (ulong ****)CONCAT71(ppppuStack_4e8._1_7_,uVar5);
          break;
        default:
          goto LAB_104c2ee54;
        }
        func_0x000104c347a8();
        FUN_104c3323c(&puStack_4f0);
        goto LAB_104c2edb8;
      }
      func_0x000104c32844(&puStack_4f0,&puStack_5c0,pppppuVar14,auStack_568);
      FUN_104c3323c(auStack_568);
    }
  }
  ppuVar20 = &puStack_5c0;
  FUN_104c33260(extraout_x8_02);
  ppuVar13 = &puStack_5c0;
  FUN_104c33548(ppuVar13);
  func_0x000100060b40(uStack_4b0);
  if ((bool)uVar5) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_5c0;
  FUN_104c33548();
  func_0x000104c342c8();
  ppuVar13[1] = (undefined *)ppuVar20;
  *(undefined1 *)(ppuVar13 + 2) = 1;
  return ppuVar13;
}



/* Entry: 104c2e324; end: 104c2e423;  */

/* WARNING: Removing unreachable block (ram,0x000104c2ebe8) */

undefined **
FUN_104c2e324(ulong *****param_1,ulong *****param_2,undefined1 *param_3,long *param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  ulong **ppuVar11;
  ulong ****ppppuVar12;
  undefined **ppuVar13;
  ulong *****pppppuVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar17;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong ***pppuVar18;
  ulong *****pppppuVar19;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined **ppuVar20;
  ulong ****ppppuVar21;
  int iVar22;
  ulong ***unaff_x21;
  ulong ***pppuVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong *****pppppuVar27;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  ulong ***pppuStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined4 auStack_488 [16];
  undefined1 auStack_448 [56];
  ulong *puStack_410;
  ulong ****ppppuStack_408;
  undefined8 uStack_3d0;
  undefined1 *puStack_348;
  ulong ***pppuStack_338;
  ulong ***pppuStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  ulong ****ppppuStack_310;
  ulong ****ppppuStack_308;
  undefined2 auStack_300 [4];
  ulong ****ppppuStack_2f8;
  ulong ***pppuStack_2e0;
  long lStack_2d8;
  ulong ***apppuStack_2c0 [3];
  undefined1 auStack_2a8 [64];
  byte bStack_268;
  ulong ***pppuStack_240;
  long lStack_238;
  ulong ***pppuStack_230;
  long lStack_228;
  long alStack_220 [17];
  undefined1 auStack_198 [24];
  ulong ****ppppuStack_180;
  ulong ****ppppuStack_178;
  ulong ****ppppuStack_170;
  long lStack_168;
  undefined8 uStack_158;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_c8 [136];
  long lStack_40;
  long lStack_38;
  undefined8 uStack_28;
  
  ppuVar20 = (undefined **)0x0;
  func_0x000100060994();
  plVar6 = (long *)param_3;
  uStack_28 = extraout_x8;
  if ((*param_4 != 0) && (param_4[1] != 0)) {
    lStack_e0 = *param_4;
    lStack_d8 = param_4[1];
    func_0x000104c34790();
    ppuVar20 = (undefined **)(lStack_38 - lStack_40 >> 4);
    plVar6 = (long *)auStack_c8;
    func_0x000104c31594();
    unaff_x19 = param_3;
  }
  while( true ) {
    func_0x000100060b40(uStack_28);
    if ((bool)in_ZR) {
      return ppuVar20;
    }
    ___stack_chk_fail();
    in_ZR = (int)param_4 == 1;
    if (!(bool)in_ZR) break;
    func_0x000104c344f8();
    func_0x00010002b838(auStack_c8,"MapsClient: could not get featureCount, exception message: ");
    func_0x000104c34258();
    func_0x000104c34720();
    param_4 = *(long **)(unaff_x19 + 8);
    param_5 = (ulong)(byte)unaff_x19[0x10];
    plVar6 = &lStack_e0;
    FUN_104c2e1f8();
    func_0x000104c345d0();
    func_0x000104c344a4();
    ___cxa_end_catch();
    ppuVar20 = (undefined **)0x0;
  }
  func_0x000104c34390();
  func_0x000104c345a8();
  ppuVar20 = (undefined **)0x0;
  func_0x000100060994();
  uStack_158 = extraout_x8_00;
  if ((*param_4 == 0) || (param_4[1] == 0)) goto LAB_104c2ea20;
  lStack_320 = *param_4;
  lStack_318 = param_4[1];
  FUN_104c30c7c(alStack_220,&lStack_320);
  puVar15 = auStack_198;
  FUN_104c315d4(puVar15,param_5);
  ppppuStack_180 = (ulong ****)0x0;
  ppppuStack_178 = (ulong ****)0x0;
  FUN_104c31604(apppuStack_2c0,puVar15,alStack_220,&ppppuStack_180);
  FUN_104c33970(&ppppuStack_180);
  pppuStack_338 = (ulong ***)0x0;
  pppuStack_330 = (ulong ***)0x0;
  lStack_328 = 0;
  pppppuVar14 = (ulong *****)apppuStack_2c0;
  FUN_104c33994();
  FUN_104c33a78(&pppuStack_338);
  pppppuVar19 = (ulong *****)&pppuStack_338;
  func_0x000104c33c64(pppppuVar19);
  bVar3 = bStack_268;
  pppppuVar27 = (ulong *****)0x0;
  pppuVar23 = (ulong ***)0x0;
  lVar24 = 0;
  uVar26 = 0;
  pppuStack_2e0 = pppuStack_240;
  lStack_2d8 = lStack_238;
  lVar25 = 2;
  if (bStack_268 != 3) {
    lVar25 = 0;
  }
  if (bStack_268 == 2) {
    lVar25 = 1;
  }
  bVar2 = true;
  unaff_x21 = (ulong ***)0x1;
  while (pppuStack_2e0 != pppuStack_230 || lStack_2d8 != lStack_228) {
    if (uVar26 == 0) {
      pppppuVar19 = (ulong *****)&pppuStack_2e0;
      func_0x000104c343e0();
      ppppuStack_180 = (ulong ****)pppppuVar19;
      ppppuStack_178 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      unaff_x21 = (ulong ***)(ulong)((uint)pppppuVar19 & 7);
      uVar26 = (uint)pppppuVar19 >> 3;
      uVar16 = uVar26;
      if (0xffff < uVar26) {
        uVar16 = 0x10000;
      }
      pppppuVar27 = (ulong *****)(ulong)uVar16;
    }
    iVar22 = (int)unaff_x21;
    if (iVar22 - 1U < 2) {
      if (bVar3 == 1) {
        if (iVar22 != 1 || !bVar2) goto LAB_104c2e5cc;
        pppppuVar14 = pppppuVar27;
        FUN_104c33a78(&pppuStack_338);
        bVar2 = false;
LAB_104c2e5d4:
        pppuVar18 = (ulong ***)pppuStack_330[-3];
        if (pppuVar18 != (ulong ***)pppuStack_330[-2]) {
          if ((ulong)((long)pppuStack_330[-2] - (long)pppuVar18) <=
              (ulong)((long)pppuStack_330[-1] - (long)pppuVar18 >> 2)) {
            FUN_104c33e74();
          }
          func_0x000104c33c64(&pppuStack_338);
          bVar2 = (bool)(bVar3 != 1 | bVar2);
        }
      }
      else if (iVar22 != 2 || (bool)(bVar2 ^ 1)) {
LAB_104c2e5cc:
        if (iVar22 == 1) goto LAB_104c2e5d4;
      }
      else {
        pppppuVar14 = (ulong *****)(lVar25 + (long)pppppuVar27);
        FUN_104c33d24(pppuStack_330 + -3);
        bVar2 = false;
      }
      ppppuVar12 = &pppuStack_2e0;
      func_0x000104c343e0();
      ppppuStack_180 = ppppuVar12;
      ppppuStack_178 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      pppppuVar19 = (ulong *****)&pppuStack_2e0;
      func_0x000104c343e0();
      ppppuStack_180 = (ulong ****)pppppuVar19;
      ppppuStack_178 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      lVar24 = lVar24 + (int)(-((uint)ppppuVar12 & 1) ^ (uint)ppppuVar12 >> 1);
      if ((lVar24 != (short)lVar24) ||
         (pppuVar23 = (ulong ***)
                      ((long)pppuVar23 +
                      (long)(int)(-((uint)pppppuVar19 & 1) ^ (uint)pppppuVar19 >> 1)),
         pppuVar23 + -0x1000 < (ulong ***)0xffffffffffff0000)) {
        func_0x000104c3444c();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000104c3420c();
        ___cxa_throw(pppppuVar19);
LAB_104c2ea8c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104c2ea90);
        (*pcVar4)();
      }
      pppppuVar19 = (ulong *****)(pppuStack_330 + -3);
      ppppuStack_180 = (ulong ****)CONCAT62(ppppuStack_180._2_6_,(short)lVar24);
      auStack_300[0] = SUB82(pppuVar23,0);
      pppppuVar14 = &ppppuStack_180;
      FUN_104c33f04(pppppuVar19,pppppuVar14,auStack_300);
      uVar26 = uVar26 - 1;
    }
    else {
      if (iVar22 != 7) {
        func_0x000104c3444c();
        func_0x000104c3472c();
        func_0x000104c3420c();
        ___cxa_throw(pppppuVar19);
        goto LAB_104c2ea8c;
      }
      pppppuVar19 = (ulong *****)(pppuStack_330 + -3);
      pppppuVar14 = (ulong *****)*pppppuVar19;
      if (pppppuVar14 != (ulong *****)pppuStack_330[-2]) {
        FUN_104c33ff8();
      }
      uVar26 = 0;
    }
  }
  lVar24 = ((long)pppuStack_330 - (long)pppuStack_338) / 0x18;
  if ((ulong)((long)pppuStack_330 - (long)pppuStack_338) < (ulong)(lStack_328 - (long)pppuStack_338)
      && (ulong)(lVar24 << 2) <= (ulong)((lStack_328 - (long)pppuStack_338) / 0x18)) {
    func_0x000104c33bb0(&ppppuStack_180,lVar24,lVar24,&lStack_328);
    if ((ulong)(lStack_168 - (long)ppppuStack_180) < (ulong)(lStack_328 - (long)pppuStack_338)) {
      func_0x000104c33af4(&pppuStack_338,&ppppuStack_180);
    }
    func_0x000104c33c1c(&ppppuStack_180);
  }
  pppuVar18 = pppuStack_330;
  ppppuVar12 = (ulong ****)pppuStack_338;
  in_ZR = true;
  if (pppuStack_338 == pppuStack_330) {
LAB_104c2e778:
                    /* WARNING: This code block may not be properly labeled as switch case */
    ppuVar20 = (undefined **)0x0;
    goto LAB_104c2ea08;
  }
  pppuStack_2e0 = (ulong ***)CONCAT44(pppuStack_2e0._4_4_,7);
  in_ZR = bStack_268 == 3;
  if (3 < bStack_268) goto LAB_104c2e9a0;
  pppppuVar19 = (ulong *****)((long)pppuStack_330 - (long)pppuStack_338);
  pppppuVar14 = (ulong *****)((long)pppppuVar19 / 0x18);
  ppppuVar21 = (ulong ****)pppuStack_330;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_268) {
  case 0:
  case 4:
  case 0xb:
  case 0x11:
  case 0x12:
  case 0x17:
  case 0x25:
  case 0x29:
  case 0x4e:
  case 0x70:
  case 0x94:
  case 0xab:
  case 0xd9:
  case 0x2d:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00010002b838(&ppppuStack_180);
    goto code_r0x000104c2e760;
  case 1:
    if (pppppuVar14 < (ulong *****)0x2) goto code_r0x000104c2e900;
    func_0x000104c34480();
    while( true ) {
      in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e858:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if ((bool)in_ZR) break;
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
code_r0x000104c2e860:
                    /* WARNING: This code block may not be properly labeled as switch case */
      for (; unaff_x21 != pppuVar23; unaff_x21 = (ulong ***)((long)unaff_x21 + 4)) {
        func_0x000104c3446c();
        ppppuStack_180 = (ulong ****)param_1;
        ppppuStack_178 = (ulong ****)param_2;
code_r0x000104c2e870:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c34778();
      }
      ppppuVar12 = ppppuVar12 + 3;
code_r0x000104c2e880:
                    /* WARNING: This code block may not be properly labeled as switch case */
    }
    uVar17 = 3;
    in_ZR = true;
    break;
  case 2:
  case 0x10:
  case 0x2c:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (pppppuVar14 < (ulong *****)0x2) goto code_r0x000104c2e884;
    func_0x000104c34480();
  case 0x2a:
    while( true ) {
                    /* WARNING: This code block may not be properly labeled as switch case */
      in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e790:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if ((bool)in_ZR) break;
code_r0x000104c2e794:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppppuStack_180 = (ulong ****)0x0;
      ppppuStack_178 = (ulong ****)0x0;
      ppppuStack_170 = (ulong ****)0x0;
code_r0x000104c2e79c:
                    /* WARNING: This code block may not be properly labeled as switch case */
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
      while( true ) {
        in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e7a4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e7a8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c3446c();
        ppppuStack_310 = (ulong ****)param_1;
        ppppuStack_308 = (ulong ****)param_2;
code_r0x000104c2e7b0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_104c31a04(&ppppuStack_180,&ppppuStack_310);
        unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
code_r0x000104c2e7c0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      }
code_r0x000104c2e7c4:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e7c8:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_104c31f7c();
      FUN_104c31c5c(&ppppuStack_180);
      ppppuVar12 = ppppuVar12 + 3;
    }
    func_0x000104c34110(2);
    func_0x000104c344dc();
    FUN_104c31d58(auStack_300);
    goto LAB_104c2e9a0;
  case 3:
  case 9:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if ((ulong *****)0x1 < pppppuVar14) {
      func_0x000104c34480();
      while( true ) {
        in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e7f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e7f4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        ppppuStack_180 = (ulong ****)0x0;
        ppppuStack_178 = (ulong ****)0x0;
        ppppuStack_170 = (ulong ****)0x0;
        FUN_104c3221c(&ppppuStack_180);
code_r0x000104c2e804:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x21 = *ppppuVar12;
        pppuVar23 = ppppuVar12[1];
        while( true ) {
          in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e80c:
                    /* WARNING: This code block may not be properly labeled as switch case */
          if ((bool)in_ZR) break;
code_r0x000104c2e810:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pppppuVar14 = (ulong *****)ppppuStack_178;
code_r0x000104c2e814:
                    /* WARNING: This code block may not be properly labeled as switch case */
          func_0x000104c3468c(pppppuVar14);
code_r0x000104c2e818:
                    /* WARNING: This code block may not be properly labeled as switch case */
          ppppuStack_310 = (ulong ****)param_1;
          ppppuStack_308 = (ulong ****)param_2;
code_r0x000104c2e81c:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e820:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_104c31a04();
          unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
        }
code_r0x000104c2e830:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c324d4();
        FUN_104c31ca8(&ppppuStack_180);
        ppppuVar12 = ppppuVar12 + 3;
      }
      func_0x000104c34110(1);
      func_0x000104c344dc();
      FUN_104c31df0(auStack_300);
      goto LAB_104c2e9a0;
    }
    func_0x000104c34480();
    FUN_104c3221c(auStack_300);
    ppppuVar12 = (ulong ****)pppuStack_338;
    ppppuVar21 = (ulong ****)pppuStack_330;
  case 0x3a:
  case 0x5b:
  case 0x85:
  case 0x89:
  case 0xc0:
  case 0xc4:
  case 0xc9:
  case 0xce:
  case 0xed:
  case 0xf1:
  case 0xf6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    while (in_ZR = ppppuVar12 == ppppuVar21, !(bool)in_ZR) {
code_r0x000104c2e8d0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
code_r0x000104c2e8d4:
      while( true ) {
                    /* WARNING: This code block may not be properly labeled as switch case */
        in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e8d8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e8dc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pppppuVar14 = (ulong *****)ppppuStack_2f8;
code_r0x000104c2e8e0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c3468c(pppppuVar14);
code_r0x000104c2e8e4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        ppppuStack_180 = (ulong ****)param_1;
        ppppuStack_178 = (ulong ****)param_2;
code_r0x000104c2e8e8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_104c31a04();
code_r0x000104c2e8f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
      }
code_r0x000104c2e8f8:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppppuVar12 = ppppuVar12 + 3;
code_r0x000104c2e8fc:
                    /* WARNING: This code block may not be properly labeled as switch case */
    }
    func_0x000104c34110(4);
    func_0x000104c344dc();
    FUN_104c31ca8(auStack_300);
    goto LAB_104c2e9a0;
  case 5:
    goto code_r0x000104c2e7c8;
  case 6:
    goto code_r0x000104c2e7a4;
  case 7:
    goto code_r0x000104c2e7b0;
  case 8:
  case 0xe:
  case 0xf:
    goto code_r0x000104c2e794;
  case 10:
    goto code_r0x000104c2e7f4;
  case 0xc:
  case 0x15:
    goto code_r0x000104c2e774;
  case 0xd:
    goto code_r0x000104c2e760;
  case 0x13:
    goto code_r0x000104c2e79c;
  case 0x14:
    goto code_r0x000104c2e7c4;
  case 0x16:
    goto code_r0x000104c2e7c0;
  case 0x18:
    goto code_r0x000104c2e770;
  case 0x19:
    goto code_r0x000104c2e7a8;
  case 0x1a:
    goto code_r0x000104c2e804;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x2b:
    goto code_r0x000104c2e764;
  case 0x24:
    goto code_r0x000104c2e7f0;
  case 0x26:
    goto code_r0x000104c2e790;
  case 0x27:
    goto code_r0x000104c2e768;
  case 0x28:
    goto LAB_104c2e778;
  case 0x2e:
  case 0x4f:
  case 0x71:
  case 0x95:
  case 0xac:
  case 0xda:
code_r0x000104c2e884:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x000104c34480();
    for (; in_ZR = ppppuVar12 == (ulong ****)pppuVar18, !(bool)in_ZR; ppppuVar12 = ppppuVar12 + 3) {
      pppuVar23 = ppppuVar12[1];
      for (unaff_x21 = *ppppuVar12; unaff_x21 != pppuVar23;
          unaff_x21 = (ulong ***)((long)unaff_x21 + 4)) {
        func_0x000104c3446c();
        ppppuStack_180 = (ulong ****)param_1;
        ppppuStack_178 = (ulong ****)param_2;
        func_0x000104c34778();
      }
    }
    uVar17 = 5;
    break;
  case 0x2f:
  case 0x50:
    goto code_r0x000104c2e81c;
  case 0x30:
  case 0x39:
  case 0x46:
  case 0x51:
  case 0x5a:
  case 0x68:
    goto code_r0x000104c2e918;
  case 0x31:
  case 0x3f:
  case 0x4b:
  case 0x52:
  case 0x60:
  case 0x6d:
  case 0x7f:
  case 0x92:
  case 0xa9:
  case 0xba:
  case 0xbc:
  case 0xbf:
  case 0xd7:
  case 0xeb:
  case 0xf4:
  case 0xff:
    goto code_r0x000104c2e904;
  case 0x32:
  case 0x37:
  case 0x44:
  case 0x53:
  case 0x58:
  case 0x66:
  case 0x81:
  case 0x87:
  case 0xe8:
    goto code_r0x000104c2e8d0;
  case 0x33:
  case 0x38:
  case 0x45:
  case 0x54:
  case 0x59:
  case 0x67:
  case 0x73:
  case 0x8e:
  case 0x97:
  case 0xa5:
  case 0xae:
  case 0xc1:
  case 0xcc:
  case 0xd3:
  case 0xdc:
  case 0xfb:
    goto code_r0x000104c2e90c;
  case 0x34:
  case 0x35:
  case 0x41:
  case 0x55:
  case 0x56:
  case 0x62:
  case 99:
  case 0x7d:
  case 0xb8:
    goto code_r0x000104c2e810;
  case 0x36:
  case 0x57:
code_r0x000104c2e900:
                    /* WARNING: This code block may not be properly labeled as switch case */
    pppppuVar14 = (ulong *****)*pppuStack_338;
    pppppuVar19 = (ulong *****)pppuStack_338[1];
    goto code_r0x000104c2e904;
  case 0x3b:
  case 0x5c:
  case 0x8c:
  case 0xa3:
  case 0xd1:
  case 0xf9:
    goto code_r0x000104c2e8d8;
  case 0x3c:
  case 0x48:
  case 0x5d:
  case 0x6a:
  case 0x82:
  case 0xf2:
    goto code_r0x000104c2e8fc;
  case 0x3d:
  case 0x49:
  case 0x5e:
  case 0x6b:
  case 0x7e:
  case 0x83:
  case 0x90:
  case 0xa7:
  case 0xc6:
  case 0xd5:
  case 0xea:
  case 0xfd:
    goto code_r0x000104c2e8f0;
  case 0x3e:
  case 0x4a:
  case 0x5f:
  case 0x6c:
  case 0x79:
  case 0x8a:
  case 0x8d:
  case 0x9d:
  case 0xa1:
  case 0xa4:
  case 0xb4:
  case 200:
  case 0xcd:
  case 0xcf:
  case 0xd2:
  case 0xe2:
  case 0xf7:
  case 0xfa:
    goto code_r0x000104c2e8e0;
  case 0x40:
  case 0x4c:
  case 0x61:
  case 0x6e:
  case 0x76:
  case 0x86:
  case 0x8f:
  case 0x9a:
  case 0xa6:
  case 0xb1:
  case 0xca:
  case 0xd4:
  case 0xdf:
  case 0xec:
  case 0xee:
  case 0xfc:
    goto code_r0x000104c2e91c;
  case 0x42:
    goto code_r0x000104c2e80c;
  case 0x43:
  case 0x65:
    goto code_r0x000104c2e880;
  case 0x47:
  case 0x69:
    goto code_r0x000104c2e858;
  case 0x4d:
  case 0x6f:
  case 0x93:
  case 0xaa:
  case 0xd8:
    goto code_r0x000104c2e860;
  case 100:
    goto code_r0x000104c2e870;
  case 0x72:
  case 0x96:
  case 0xa0:
  case 0xad:
  case 0xdb:
    goto code_r0x000104c2e830;
  case 0x74:
  case 0x7a:
  case 0x98:
  case 0x9e:
  case 0xaf:
  case 0xb5:
  case 199:
  case 0xdd:
  case 0xe3:
  case 0xe9:
    goto code_r0x000104c2e914;
  default:
    goto code_r0x000104c2e908;
  case 0x78:
  case 0x9c:
  case 0xb3:
  case 0xe1:
    goto code_r0x000104c2e934;
  case 0x7c:
  case 0xe5:
    goto code_r0x000104c2e814;
  case 0x80:
  case 0xe7:
    goto code_r0x000104c2e924;
  case 0x84:
    goto code_r0x000104c2e8dc;
  case 0x88:
  case 0xf5:
    goto code_r0x000104c2e8e8;
  case 0x8b:
  case 0xa2:
  case 0xd0:
  case 0xf8:
    goto code_r0x000104c2e92c;
  case 0xb7:
    goto code_r0x000104c2e818;
  case 0xb9:
    goto code_r0x000104c2e920;
  case 0xbb:
    goto code_r0x000104c2e8f8;
  case 0xbe:
  case 0xc5:
    goto code_r0x000104c2e928;
  case 0xc2:
    goto code_r0x000104c2e8d4;
  case 0xc3:
    goto code_r0x000104c2e8e4;
  case 0xcb:
    goto code_r0x000104c2e930;
  case 0xe6:
    goto code_r0x000104c2e820;
  }
  func_0x000104c34110(uVar17);
  func_0x000104c344dc();
  FUN_104c31c5c(auStack_300);
  goto LAB_104c2e9a0;
code_r0x000104c2e904:
                    /* WARNING: This code block may not be properly labeled as switch case */
  in_ZR = pppppuVar14 == pppppuVar19;
code_r0x000104c2e908:
                    /* WARNING: This code block may not be properly labeled as switch case */
  if (!(bool)in_ZR) {
code_r0x000104c2e90c:
                    /* WARNING: This code block may not be properly labeled as switch case */
    param_1 = (ulong *****)(double)(int)*(short *)pppppuVar14;
    goto code_r0x000104c2e914;
  }
  goto LAB_104c2e9a0;
code_r0x000104c2e914:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pppppuVar14 = (ulong *****)(long)*(short *)((long)pppppuVar14 + 2);
code_r0x000104c2e918:
                    /* WARNING: This code block may not be properly labeled as switch case */
  param_2 = (ulong *****)(double)(int)pppppuVar14;
code_r0x000104c2e91c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pppppuVar14 = (ulong *****)0x6;
code_r0x000104c2e920:
                    /* WARNING: This code block may not be properly labeled as switch case */
  ppppuStack_180 = (ulong ****)CONCAT44(ppppuStack_180._4_4_,(int)pppppuVar14);
code_r0x000104c2e924:
                    /* WARNING: This code block may not be properly labeled as switch case */
  ppppuStack_178 = (ulong ****)param_1;
  ppppuStack_170 = (ulong ****)param_2;
code_r0x000104c2e928:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e92c:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e930:
                    /* WARNING: This code block may not be properly labeled as switch case */
  FUN_104c31bac();
code_r0x000104c2e934:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000104c344dc();
  goto LAB_104c2e9a0;
code_r0x000104c2e760:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e764:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e768:
                    /* WARNING: This code block may not be properly labeled as switch case */
  FUN_104c2e1f8();
code_r0x000104c2e770:
                    /* WARNING: This code block may not be properly labeled as switch case */
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  goto code_r0x000104c2e774;
LAB_104c2ee54:
  FUN_104c2f2fc(&pppuStack_4a0);
  goto LAB_104c2edb8;
code_r0x000104c2e774:
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_104c2e9a0:
  ppuVar20 = (undefined **)0x38;
  __Znwm();
  ppuVar20[6] = (undefined *)0x0;
  param_1 = (ulong *****)0x0;
  ppuVar20[3] = (undefined *)0x0;
  ppuVar20[2] = (undefined *)0x0;
  ppuVar20[5] = (undefined *)0x0;
  ppuVar20[4] = (undefined *)0x0;
  ppuVar20[1] = (undefined *)0x0;
  *ppuVar20 = (undefined *)0x0;
  FUN_104c2d2d8();
  FUN_104c2d694(ppuVar20 + 5,auStack_2a8);
  FUN_104c2ec98(&ppppuStack_180,apppuStack_2c0);
  FUN_104c2da14(ppuVar20 + 3,&ppppuStack_180);
  FUN_104c335c0(&ppppuStack_180);
  FUN_104c3365c(&pppuStack_2e0);
LAB_104c2ea08:
  FUN_104c33680(&pppuStack_338);
  FUN_104c33700(apppuStack_2c0);
  func_0x000104c31594(alStack_220);
  puStack_348 = (undefined1 *)plVar6;
LAB_104c2ea20:
  while( true ) {
    func_0x000100060b40(uStack_158);
    if ((bool)in_ZR) {
      return ppuVar20;
    }
    ___stack_chk_fail();
    func_0x000104c34344();
    FUN_104c31ca8(auStack_300);
    FUN_104c3365c(&pppuStack_2e0);
    FUN_104c33680(&pppuStack_338);
    FUN_104c33700(apppuStack_2c0);
    plVar6 = alStack_220;
    func_0x000104c31594();
    in_ZR = (int)unaff_x21 == 1;
    if (!(bool)in_ZR) break;
    func_0x000104c344f8();
    plVar6 = alStack_220;
    func_0x00010002b838(plVar6,"MapsClient: could not get feature, exception message:");
    func_0x000104c34258();
    func_0x000100456794(apppuStack_2c0,alStack_220,plVar6);
    FUN_104c2e1f8(apppuStack_2c0,*(undefined8 *)(puStack_348 + 8),puStack_348[0x10]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_2c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_220);
    ___cxa_end_catch();
    ppuVar20 = (undefined **)0x0;
  }
  func_0x000104c34390();
  func_0x000104c345a8();
  plVar7 = plVar6;
  func_0x000100060994();
  uVar8 = plVar7[0xc];
  lStack_4b8 = plVar6[0xd];
  uVar1 = plVar6[0xe];
  lVar24 = plVar6[0xf];
  puStack_4e0 = &UNK_10e52b660;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = uVar8;
  uStack_3d0 = extraout_x8_02;
  FUN_104c32864(uVar8,lStack_4b8,uVar1,lVar24);
  uVar5 = uVar8 == 1;
  if (0 < (long)uVar8) {
    pppppuVar14 = (ulong *****)(uVar8 >> 1);
    FUN_104c32780(&puStack_4e0);
    while (uVar5 = true, uStack_4c0 != uVar1 || lStack_4b8 != lVar24) {
      puVar9 = &uStack_4c0;
      func_0x000104c343e0();
      ppuVar10 = &puStack_410;
      puStack_410 = puVar9;
      ppppuStack_408 = (ulong ****)pppppuVar14;
      FUN_104c327f8(ppuVar10);
      if (uStack_4c0 == uVar1 && lStack_4b8 == lVar24) {
        func_0x000104c3444c();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000104c3420c();
        ___cxa_throw(ppuVar10);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104c2ef74);
        (*pcVar4)();
      }
      puVar9 = &uStack_4c0;
      func_0x000104c343e0();
      ppuVar11 = &puStack_410;
      puStack_410 = puVar9;
      ppppuStack_408 = (ulong ****)pppppuVar14;
      FUN_104c327f8(ppuVar11);
      plVar7 = (long *)(plVar6[2] + 0x58);
      func_0x000104c32820(plVar7,(ulong)ppuVar10 & 0xffffffff);
      pppppuVar14 = (ulong *****)*plVar7;
      puVar15 = (undefined1 *)((ulong)ppuVar11 & 0xffffffff);
      plVar7 = (long *)(plVar6[2] + 0x70);
      FUN_104c315d4(plVar7,puVar15);
      auStack_488[0] = 7;
      pppuStack_4a0 = (ulong ***)*plVar7;
      lStack_498 = (long)pppuStack_4a0 + plVar7[1];
      uStack_490 = 99;
LAB_104c2edb8:
      iVar22 = (int)&pppuStack_4a0;
      FUN_104c2f230();
      if (iVar22 != 0) {
        switch(uStack_490._4_4_) {
        case 1:
          ppppuVar12 = &pppuStack_4a0;
          func_0x000104c2f1c8(ppppuVar12);
          lVar25 = *plVar6;
          if (lVar25 == 0) {
            func_0x000104c302a4(auStack_448,ppppuVar12,puVar15);
          }
          else {
            lStack_4a8 = plVar6[1];
            lStack_4b0 = lVar25;
            if (lStack_4a8 != 0) {
              do {
                func_0x000104c346d0();
              } while (extraout_w10 != 0);
            }
            FUN_104c32ecc(auStack_448,ppppuVar12,puVar15,&lStack_4b0);
          }
          puVar15 = auStack_448;
          FUN_104c33004(&puStack_410);
          func_0x000104c347a8();
          FUN_104c3323c(&puStack_410);
          FUN_104c2f714(auStack_448);
          if (lVar25 != 0) {
            FUN_104c33970(&lStack_4b0);
          }
          goto LAB_104c2edb8;
        case 2:
          func_0x000104c331c8(&pppuStack_4a0);
          param_1 = (ulong *****)(double)SUB84(param_1,0);
          goto code_r0x000104c2ee6c;
        case 3:
          func_0x000104c331f0(&pppuStack_4a0);
code_r0x000104c2ee6c:
          puStack_410 = (ulong *)CONCAT44(puStack_410._4_4_,3);
          ppppuStack_408 = (ulong ****)param_1;
          break;
        case 4:
          pppppuVar19 = (ulong *****)&pppuStack_4a0;
          FUN_104c33218();
          goto code_r0x000104c2ee80;
        case 5:
          pppppuVar19 = (ulong *****)&pppuStack_4a0;
          FUN_104c317e4();
          puStack_410 = (ulong *)CONCAT44(puStack_410._4_4_,5);
          ppppuStack_408 = (ulong ****)pppppuVar19;
          break;
        case 6:
          pppppuVar19 = (ulong *****)&pppuStack_4a0;
          FUN_104c33220();
code_r0x000104c2ee80:
          puStack_410 = (ulong *)CONCAT44(puStack_410._4_4_,4);
          ppppuStack_408 = (ulong ****)pppppuVar19;
          break;
        case 7:
          uVar5 = SUB81(&pppuStack_4a0,0);
          FUN_104c32f6c();
          puStack_410 = (ulong *)CONCAT44(puStack_410._4_4_,6);
          ppppuStack_408 = (ulong ****)CONCAT71(ppppuStack_408._1_7_,uVar5);
          break;
        default:
          goto LAB_104c2ee54;
        }
        func_0x000104c347a8();
        FUN_104c3323c(&puStack_410);
        goto LAB_104c2edb8;
      }
      func_0x000104c32844(&puStack_410,&puStack_4e0,pppppuVar14,auStack_488);
      FUN_104c3323c(auStack_488);
    }
  }
  ppuVar20 = &puStack_4e0;
  FUN_104c33260(extraout_x8_01);
  ppuVar13 = &puStack_4e0;
  FUN_104c33548(ppuVar13);
  func_0x000100060b40(uStack_3d0);
  if ((bool)uVar5) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_4e0;
  FUN_104c33548();
  func_0x000104c342c8();
  ppuVar13[1] = (undefined *)ppuVar20;
  *(undefined1 *)(ppuVar13 + 2) = 1;
  return ppuVar13;
}



/* Entry: 104c2e424; end: 104c2ec97;  */

/* WARNING: Removing unreachable block (ram,0x000104c2ebe8) */

undefined **
FUN_104c2e424(ulong *****param_1,ulong *****param_2,long param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  ulong **ppuVar11;
  ulong ****ppppuVar12;
  undefined **ppuVar13;
  ulong *****pppppuVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined8 extraout_x8;
  undefined8 uVar17;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong ***pppuVar18;
  ulong *****pppppuVar19;
  int extraout_w10;
  ulong ****ppppuVar20;
  int iVar21;
  ulong ***unaff_x21;
  undefined **ppuVar22;
  ulong ***pppuVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong *****pppppuVar27;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  ulong ***pppuStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined4 auStack_3a8 [16];
  undefined1 auStack_368 [56];
  ulong *puStack_330;
  ulong ****ppppuStack_328;
  undefined8 uStack_2f0;
  long lStack_268;
  ulong ***pppuStack_258;
  ulong ***pppuStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  ulong ****ppppuStack_230;
  ulong ****ppppuStack_228;
  undefined2 auStack_220 [4];
  ulong ****ppppuStack_218;
  ulong ***pppuStack_200;
  long lStack_1f8;
  ulong ***apppuStack_1e0 [3];
  undefined1 auStack_1c8 [64];
  byte bStack_188;
  ulong ***pppuStack_160;
  long lStack_158;
  ulong ***pppuStack_150;
  long lStack_148;
  long alStack_140 [17];
  undefined1 auStack_b8 [24];
  ulong ****ppppuStack_a0;
  ulong ****ppppuStack_98;
  ulong ****ppppuStack_90;
  long lStack_88;
  undefined8 uStack_78;
  
  ppuVar22 = (undefined **)0x0;
  func_0x000100060994();
  uStack_78 = extraout_x8;
  if ((*param_4 == 0) || (param_4[1] == 0)) goto LAB_104c2ea20;
  lStack_240 = *param_4;
  lStack_238 = param_4[1];
  FUN_104c30c7c(alStack_140,&lStack_240);
  puVar15 = auStack_b8;
  FUN_104c315d4(puVar15,param_5);
  ppppuStack_a0 = (ulong ****)0x0;
  ppppuStack_98 = (ulong ****)0x0;
  FUN_104c31604(apppuStack_1e0,puVar15,alStack_140,&ppppuStack_a0);
  FUN_104c33970(&ppppuStack_a0);
  pppuStack_258 = (ulong ***)0x0;
  pppuStack_250 = (ulong ***)0x0;
  lStack_248 = 0;
  pppppuVar14 = (ulong *****)apppuStack_1e0;
  FUN_104c33994();
  FUN_104c33a78(&pppuStack_258);
  pppppuVar19 = (ulong *****)&pppuStack_258;
  func_0x000104c33c64(pppppuVar19);
  bVar3 = bStack_188;
  pppppuVar27 = (ulong *****)0x0;
  pppuVar23 = (ulong ***)0x0;
  lVar24 = 0;
  uVar26 = 0;
  pppuStack_200 = pppuStack_160;
  lStack_1f8 = lStack_158;
  lVar25 = 2;
  if (bStack_188 != 3) {
    lVar25 = 0;
  }
  if (bStack_188 == 2) {
    lVar25 = 1;
  }
  bVar2 = true;
  unaff_x21 = (ulong ***)0x1;
  while (pppuStack_200 != pppuStack_150 || lStack_1f8 != lStack_148) {
    if (uVar26 == 0) {
      pppppuVar19 = (ulong *****)&pppuStack_200;
      func_0x000104c343e0();
      ppppuStack_a0 = (ulong ****)pppppuVar19;
      ppppuStack_98 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      unaff_x21 = (ulong ***)(ulong)((uint)pppppuVar19 & 7);
      uVar26 = (uint)pppppuVar19 >> 3;
      uVar16 = uVar26;
      if (0xffff < uVar26) {
        uVar16 = 0x10000;
      }
      pppppuVar27 = (ulong *****)(ulong)uVar16;
    }
    iVar21 = (int)unaff_x21;
    if (iVar21 - 1U < 2) {
      if (bVar3 == 1) {
        if (iVar21 != 1 || !bVar2) goto LAB_104c2e5cc;
        pppppuVar14 = pppppuVar27;
        FUN_104c33a78(&pppuStack_258);
        bVar2 = false;
LAB_104c2e5d4:
        pppuVar18 = (ulong ***)pppuStack_250[-3];
        if (pppuVar18 != (ulong ***)pppuStack_250[-2]) {
          if ((ulong)((long)pppuStack_250[-2] - (long)pppuVar18) <=
              (ulong)((long)pppuStack_250[-1] - (long)pppuVar18 >> 2)) {
            FUN_104c33e74();
          }
          func_0x000104c33c64(&pppuStack_258);
          bVar2 = (bool)(bVar3 != 1 | bVar2);
        }
      }
      else if (iVar21 != 2 || (bool)(bVar2 ^ 1)) {
LAB_104c2e5cc:
        if (iVar21 == 1) goto LAB_104c2e5d4;
      }
      else {
        pppppuVar14 = (ulong *****)(lVar25 + (long)pppppuVar27);
        FUN_104c33d24(pppuStack_250 + -3);
        bVar2 = false;
      }
      ppppuVar12 = &pppuStack_200;
      func_0x000104c343e0();
      ppppuStack_a0 = ppppuVar12;
      ppppuStack_98 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      pppppuVar19 = (ulong *****)&pppuStack_200;
      func_0x000104c343e0();
      ppppuStack_a0 = (ulong ****)pppppuVar19;
      ppppuStack_98 = (ulong ****)pppppuVar14;
      func_0x000104c34704();
      lVar24 = lVar24 + (int)(-((uint)ppppuVar12 & 1) ^ (uint)ppppuVar12 >> 1);
      if ((lVar24 != (short)lVar24) ||
         (pppuVar23 = (ulong ***)
                      ((long)pppuVar23 +
                      (long)(int)(-((uint)pppppuVar19 & 1) ^ (uint)pppppuVar19 >> 1)),
         pppuVar23 + -0x1000 < (ulong ***)0xffffffffffff0000)) {
        func_0x000104c3444c();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000104c3420c();
        ___cxa_throw(pppppuVar19);
LAB_104c2ea8c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104c2ea90);
        (*pcVar4)();
      }
      pppppuVar19 = (ulong *****)(pppuStack_250 + -3);
      ppppuStack_a0 = (ulong ****)CONCAT62(ppppuStack_a0._2_6_,(short)lVar24);
      auStack_220[0] = SUB82(pppuVar23,0);
      pppppuVar14 = &ppppuStack_a0;
      FUN_104c33f04(pppppuVar19,pppppuVar14,auStack_220);
      uVar26 = uVar26 - 1;
    }
    else {
      if (iVar21 != 7) {
        func_0x000104c3444c();
        func_0x000104c3472c();
        func_0x000104c3420c();
        ___cxa_throw(pppppuVar19);
        goto LAB_104c2ea8c;
      }
      pppppuVar19 = (ulong *****)(pppuStack_250 + -3);
      pppppuVar14 = (ulong *****)*pppppuVar19;
      if (pppppuVar14 != (ulong *****)pppuStack_250[-2]) {
        FUN_104c33ff8();
      }
      uVar26 = 0;
    }
  }
  lVar24 = ((long)pppuStack_250 - (long)pppuStack_258) / 0x18;
  if ((ulong)((long)pppuStack_250 - (long)pppuStack_258) < (ulong)(lStack_248 - (long)pppuStack_258)
      && (ulong)(lVar24 << 2) <= (ulong)((lStack_248 - (long)pppuStack_258) / 0x18)) {
    func_0x000104c33bb0(&ppppuStack_a0,lVar24,lVar24,&lStack_248);
    if ((ulong)(lStack_88 - (long)ppppuStack_a0) < (ulong)(lStack_248 - (long)pppuStack_258)) {
      func_0x000104c33af4(&pppuStack_258,&ppppuStack_a0);
    }
    func_0x000104c33c1c(&ppppuStack_a0);
  }
  pppuVar18 = pppuStack_250;
  ppppuVar12 = (ulong ****)pppuStack_258;
  in_ZR = true;
  if (pppuStack_258 == pppuStack_250) {
LAB_104c2e778:
                    /* WARNING: This code block may not be properly labeled as switch case */
    ppuVar22 = (undefined **)0x0;
    goto LAB_104c2ea08;
  }
  pppuStack_200 = (ulong ***)CONCAT44(pppuStack_200._4_4_,7);
  in_ZR = bStack_188 == 3;
  if (3 < bStack_188) goto LAB_104c2e9a0;
  pppppuVar19 = (ulong *****)((long)pppuStack_250 - (long)pppuStack_258);
  pppppuVar14 = (ulong *****)((long)pppppuVar19 / 0x18);
  ppppuVar20 = (ulong ****)pppuStack_250;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bStack_188) {
  case 0:
  case 4:
  case 0xb:
  case 0x11:
  case 0x12:
  case 0x17:
  case 0x25:
  case 0x29:
  case 0x4e:
  case 0x70:
  case 0x94:
  case 0xab:
  case 0xd9:
  case 0x2d:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00010002b838(&ppppuStack_a0);
    goto code_r0x000104c2e760;
  case 1:
    if (pppppuVar14 < (ulong *****)0x2) goto code_r0x000104c2e900;
    func_0x000104c34480();
    while( true ) {
      in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e858:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if ((bool)in_ZR) break;
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
code_r0x000104c2e860:
                    /* WARNING: This code block may not be properly labeled as switch case */
      for (; unaff_x21 != pppuVar23; unaff_x21 = (ulong ***)((long)unaff_x21 + 4)) {
        func_0x000104c3446c();
        ppppuStack_a0 = (ulong ****)param_1;
        ppppuStack_98 = (ulong ****)param_2;
code_r0x000104c2e870:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c34778();
      }
      ppppuVar12 = ppppuVar12 + 3;
code_r0x000104c2e880:
                    /* WARNING: This code block may not be properly labeled as switch case */
    }
    uVar17 = 3;
    in_ZR = true;
    break;
  case 2:
  case 0x10:
  case 0x2c:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (pppppuVar14 < (ulong *****)0x2) goto code_r0x000104c2e884;
    func_0x000104c34480();
  case 0x2a:
    while( true ) {
                    /* WARNING: This code block may not be properly labeled as switch case */
      in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e790:
                    /* WARNING: This code block may not be properly labeled as switch case */
      if ((bool)in_ZR) break;
code_r0x000104c2e794:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppppuStack_a0 = (ulong ****)0x0;
      ppppuStack_98 = (ulong ****)0x0;
      ppppuStack_90 = (ulong ****)0x0;
code_r0x000104c2e79c:
                    /* WARNING: This code block may not be properly labeled as switch case */
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
      while( true ) {
        in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e7a4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e7a8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c3446c();
        ppppuStack_230 = (ulong ****)param_1;
        ppppuStack_228 = (ulong ****)param_2;
code_r0x000104c2e7b0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_104c31a04(&ppppuStack_a0,&ppppuStack_230);
        unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
code_r0x000104c2e7c0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      }
code_r0x000104c2e7c4:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e7c8:
                    /* WARNING: This code block may not be properly labeled as switch case */
      FUN_104c31f7c();
      FUN_104c31c5c(&ppppuStack_a0);
      ppppuVar12 = ppppuVar12 + 3;
    }
    func_0x000104c34110(2);
    func_0x000104c344dc();
    FUN_104c31d58(auStack_220);
    goto LAB_104c2e9a0;
  case 3:
  case 9:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if ((ulong *****)0x1 < pppppuVar14) {
      func_0x000104c34480();
      while( true ) {
        in_ZR = ppppuVar12 == (ulong ****)pppuVar18;
code_r0x000104c2e7f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e7f4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        ppppuStack_a0 = (ulong ****)0x0;
        ppppuStack_98 = (ulong ****)0x0;
        ppppuStack_90 = (ulong ****)0x0;
        FUN_104c3221c(&ppppuStack_a0);
code_r0x000104c2e804:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x21 = *ppppuVar12;
        pppuVar23 = ppppuVar12[1];
        while( true ) {
          in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e80c:
                    /* WARNING: This code block may not be properly labeled as switch case */
          if ((bool)in_ZR) break;
code_r0x000104c2e810:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pppppuVar14 = (ulong *****)ppppuStack_98;
code_r0x000104c2e814:
                    /* WARNING: This code block may not be properly labeled as switch case */
          func_0x000104c3468c(pppppuVar14);
code_r0x000104c2e818:
                    /* WARNING: This code block may not be properly labeled as switch case */
          ppppuStack_230 = (ulong ****)param_1;
          ppppuStack_228 = (ulong ****)param_2;
code_r0x000104c2e81c:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e820:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_104c31a04();
          unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
        }
code_r0x000104c2e830:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c324d4();
        FUN_104c31ca8(&ppppuStack_a0);
        ppppuVar12 = ppppuVar12 + 3;
      }
      func_0x000104c34110(1);
      func_0x000104c344dc();
      FUN_104c31df0(auStack_220);
      goto LAB_104c2e9a0;
    }
    func_0x000104c34480();
    FUN_104c3221c(auStack_220);
    ppppuVar12 = (ulong ****)pppuStack_258;
    ppppuVar20 = (ulong ****)pppuStack_250;
  case 0x3a:
  case 0x5b:
  case 0x85:
  case 0x89:
  case 0xc0:
  case 0xc4:
  case 0xc9:
  case 0xce:
  case 0xed:
  case 0xf1:
  case 0xf6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    while (in_ZR = ppppuVar12 == ppppuVar20, !(bool)in_ZR) {
code_r0x000104c2e8d0:
                    /* WARNING: This code block may not be properly labeled as switch case */
      unaff_x21 = *ppppuVar12;
      pppuVar23 = ppppuVar12[1];
code_r0x000104c2e8d4:
      while( true ) {
                    /* WARNING: This code block may not be properly labeled as switch case */
        in_ZR = unaff_x21 == pppuVar23;
code_r0x000104c2e8d8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((bool)in_ZR) break;
code_r0x000104c2e8dc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pppppuVar14 = (ulong *****)ppppuStack_218;
code_r0x000104c2e8e0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000104c3468c(pppppuVar14);
code_r0x000104c2e8e4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        ppppuStack_a0 = (ulong ****)param_1;
        ppppuStack_98 = (ulong ****)param_2;
code_r0x000104c2e8e8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_104c31a04();
code_r0x000104c2e8f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x21 = (ulong ***)((long)unaff_x21 + 4);
      }
code_r0x000104c2e8f8:
                    /* WARNING: This code block may not be properly labeled as switch case */
      ppppuVar12 = ppppuVar12 + 3;
code_r0x000104c2e8fc:
                    /* WARNING: This code block may not be properly labeled as switch case */
    }
    func_0x000104c34110(4);
    func_0x000104c344dc();
    FUN_104c31ca8(auStack_220);
    goto LAB_104c2e9a0;
  case 5:
    goto code_r0x000104c2e7c8;
  case 6:
    goto code_r0x000104c2e7a4;
  case 7:
    goto code_r0x000104c2e7b0;
  case 8:
  case 0xe:
  case 0xf:
    goto code_r0x000104c2e794;
  case 10:
    goto code_r0x000104c2e7f4;
  case 0xc:
  case 0x15:
    goto code_r0x000104c2e774;
  case 0xd:
    goto code_r0x000104c2e760;
  case 0x13:
    goto code_r0x000104c2e79c;
  case 0x14:
    goto code_r0x000104c2e7c4;
  case 0x16:
    goto code_r0x000104c2e7c0;
  case 0x18:
    goto code_r0x000104c2e770;
  case 0x19:
    goto code_r0x000104c2e7a8;
  case 0x1a:
    goto code_r0x000104c2e804;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x2b:
    goto code_r0x000104c2e764;
  case 0x24:
    goto code_r0x000104c2e7f0;
  case 0x26:
    goto code_r0x000104c2e790;
  case 0x27:
    goto code_r0x000104c2e768;
  case 0x28:
    goto LAB_104c2e778;
  case 0x2e:
  case 0x4f:
  case 0x71:
  case 0x95:
  case 0xac:
  case 0xda:
code_r0x000104c2e884:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x000104c34480();
    for (; in_ZR = ppppuVar12 == (ulong ****)pppuVar18, !(bool)in_ZR; ppppuVar12 = ppppuVar12 + 3) {
      pppuVar23 = ppppuVar12[1];
      for (unaff_x21 = *ppppuVar12; unaff_x21 != pppuVar23;
          unaff_x21 = (ulong ***)((long)unaff_x21 + 4)) {
        func_0x000104c3446c();
        ppppuStack_a0 = (ulong ****)param_1;
        ppppuStack_98 = (ulong ****)param_2;
        func_0x000104c34778();
      }
    }
    uVar17 = 5;
    break;
  case 0x2f:
  case 0x50:
    goto code_r0x000104c2e81c;
  case 0x30:
  case 0x39:
  case 0x46:
  case 0x51:
  case 0x5a:
  case 0x68:
    goto code_r0x000104c2e918;
  case 0x31:
  case 0x3f:
  case 0x4b:
  case 0x52:
  case 0x60:
  case 0x6d:
  case 0x7f:
  case 0x92:
  case 0xa9:
  case 0xba:
  case 0xbc:
  case 0xbf:
  case 0xd7:
  case 0xeb:
  case 0xf4:
  case 0xff:
    goto code_r0x000104c2e904;
  case 0x32:
  case 0x37:
  case 0x44:
  case 0x53:
  case 0x58:
  case 0x66:
  case 0x81:
  case 0x87:
  case 0xe8:
    goto code_r0x000104c2e8d0;
  case 0x33:
  case 0x38:
  case 0x45:
  case 0x54:
  case 0x59:
  case 0x67:
  case 0x73:
  case 0x8e:
  case 0x97:
  case 0xa5:
  case 0xae:
  case 0xc1:
  case 0xcc:
  case 0xd3:
  case 0xdc:
  case 0xfb:
    goto code_r0x000104c2e90c;
  case 0x34:
  case 0x35:
  case 0x41:
  case 0x55:
  case 0x56:
  case 0x62:
  case 99:
  case 0x7d:
  case 0xb8:
    goto code_r0x000104c2e810;
  case 0x36:
  case 0x57:
code_r0x000104c2e900:
                    /* WARNING: This code block may not be properly labeled as switch case */
    pppppuVar14 = (ulong *****)*pppuStack_258;
    pppppuVar19 = (ulong *****)pppuStack_258[1];
    goto code_r0x000104c2e904;
  case 0x3b:
  case 0x5c:
  case 0x8c:
  case 0xa3:
  case 0xd1:
  case 0xf9:
    goto code_r0x000104c2e8d8;
  case 0x3c:
  case 0x48:
  case 0x5d:
  case 0x6a:
  case 0x82:
  case 0xf2:
    goto code_r0x000104c2e8fc;
  case 0x3d:
  case 0x49:
  case 0x5e:
  case 0x6b:
  case 0x7e:
  case 0x83:
  case 0x90:
  case 0xa7:
  case 0xc6:
  case 0xd5:
  case 0xea:
  case 0xfd:
    goto code_r0x000104c2e8f0;
  case 0x3e:
  case 0x4a:
  case 0x5f:
  case 0x6c:
  case 0x79:
  case 0x8a:
  case 0x8d:
  case 0x9d:
  case 0xa1:
  case 0xa4:
  case 0xb4:
  case 200:
  case 0xcd:
  case 0xcf:
  case 0xd2:
  case 0xe2:
  case 0xf7:
  case 0xfa:
    goto code_r0x000104c2e8e0;
  case 0x40:
  case 0x4c:
  case 0x61:
  case 0x6e:
  case 0x76:
  case 0x86:
  case 0x8f:
  case 0x9a:
  case 0xa6:
  case 0xb1:
  case 0xca:
  case 0xd4:
  case 0xdf:
  case 0xec:
  case 0xee:
  case 0xfc:
    goto code_r0x000104c2e91c;
  case 0x42:
    goto code_r0x000104c2e80c;
  case 0x43:
  case 0x65:
    goto code_r0x000104c2e880;
  case 0x47:
  case 0x69:
    goto code_r0x000104c2e858;
  case 0x4d:
  case 0x6f:
  case 0x93:
  case 0xaa:
  case 0xd8:
    goto code_r0x000104c2e860;
  case 100:
    goto code_r0x000104c2e870;
  case 0x72:
  case 0x96:
  case 0xa0:
  case 0xad:
  case 0xdb:
    goto code_r0x000104c2e830;
  case 0x74:
  case 0x7a:
  case 0x98:
  case 0x9e:
  case 0xaf:
  case 0xb5:
  case 199:
  case 0xdd:
  case 0xe3:
  case 0xe9:
    goto code_r0x000104c2e914;
  default:
    goto code_r0x000104c2e908;
  case 0x78:
  case 0x9c:
  case 0xb3:
  case 0xe1:
    goto code_r0x000104c2e934;
  case 0x7c:
  case 0xe5:
    goto code_r0x000104c2e814;
  case 0x80:
  case 0xe7:
    goto code_r0x000104c2e924;
  case 0x84:
    goto code_r0x000104c2e8dc;
  case 0x88:
  case 0xf5:
    goto code_r0x000104c2e8e8;
  case 0x8b:
  case 0xa2:
  case 0xd0:
  case 0xf8:
    goto code_r0x000104c2e92c;
  case 0xb7:
    goto code_r0x000104c2e818;
  case 0xb9:
    goto code_r0x000104c2e920;
  case 0xbb:
    goto code_r0x000104c2e8f8;
  case 0xbe:
  case 0xc5:
    goto code_r0x000104c2e928;
  case 0xc2:
    goto code_r0x000104c2e8d4;
  case 0xc3:
    goto code_r0x000104c2e8e4;
  case 0xcb:
    goto code_r0x000104c2e930;
  case 0xe6:
    goto code_r0x000104c2e820;
  }
  func_0x000104c34110(uVar17);
  func_0x000104c344dc();
  FUN_104c31c5c(auStack_220);
  goto LAB_104c2e9a0;
code_r0x000104c2e904:
                    /* WARNING: This code block may not be properly labeled as switch case */
  in_ZR = pppppuVar14 == pppppuVar19;
code_r0x000104c2e908:
                    /* WARNING: This code block may not be properly labeled as switch case */
  if (!(bool)in_ZR) {
code_r0x000104c2e90c:
                    /* WARNING: This code block may not be properly labeled as switch case */
    param_1 = (ulong *****)(double)(int)*(short *)pppppuVar14;
    goto code_r0x000104c2e914;
  }
  goto LAB_104c2e9a0;
code_r0x000104c2e914:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pppppuVar14 = (ulong *****)(long)*(short *)((long)pppppuVar14 + 2);
code_r0x000104c2e918:
                    /* WARNING: This code block may not be properly labeled as switch case */
  param_2 = (ulong *****)(double)(int)pppppuVar14;
code_r0x000104c2e91c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pppppuVar14 = (ulong *****)0x6;
code_r0x000104c2e920:
                    /* WARNING: This code block may not be properly labeled as switch case */
  ppppuStack_a0 = (ulong ****)CONCAT44(ppppuStack_a0._4_4_,(int)pppppuVar14);
code_r0x000104c2e924:
                    /* WARNING: This code block may not be properly labeled as switch case */
  ppppuStack_98 = (ulong ****)param_1;
  ppppuStack_90 = (ulong ****)param_2;
code_r0x000104c2e928:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e92c:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e930:
                    /* WARNING: This code block may not be properly labeled as switch case */
  FUN_104c31bac();
code_r0x000104c2e934:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000104c344dc();
  goto LAB_104c2e9a0;
code_r0x000104c2e760:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e764:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x000104c2e768:
                    /* WARNING: This code block may not be properly labeled as switch case */
  FUN_104c2e1f8();
code_r0x000104c2e770:
                    /* WARNING: This code block may not be properly labeled as switch case */
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  goto code_r0x000104c2e774;
LAB_104c2ee54:
  FUN_104c2f2fc(&pppuStack_3c0);
  goto LAB_104c2edb8;
code_r0x000104c2e774:
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_104c2e9a0:
  ppuVar22 = (undefined **)0x38;
  __Znwm();
  ppuVar22[6] = (undefined *)0x0;
  param_1 = (ulong *****)0x0;
  ppuVar22[3] = (undefined *)0x0;
  ppuVar22[2] = (undefined *)0x0;
  ppuVar22[5] = (undefined *)0x0;
  ppuVar22[4] = (undefined *)0x0;
  ppuVar22[1] = (undefined *)0x0;
  *ppuVar22 = (undefined *)0x0;
  FUN_104c2d2d8();
  FUN_104c2d694(ppuVar22 + 5,auStack_1c8);
  FUN_104c2ec98(&ppppuStack_a0,apppuStack_1e0);
  FUN_104c2da14(ppuVar22 + 3,&ppppuStack_a0);
  FUN_104c335c0(&ppppuStack_a0);
  FUN_104c3365c(&pppuStack_200);
LAB_104c2ea08:
  FUN_104c33680(&pppuStack_258);
  FUN_104c33700(apppuStack_1e0);
  func_0x000104c31594(alStack_140);
  lStack_268 = param_3;
LAB_104c2ea20:
  while( true ) {
    func_0x000100060b40(uStack_78);
    if ((bool)in_ZR) {
      return ppuVar22;
    }
    ___stack_chk_fail();
    func_0x000104c34344();
    FUN_104c31ca8(auStack_220);
    FUN_104c3365c(&pppuStack_200);
    FUN_104c33680(&pppuStack_258);
    FUN_104c33700(apppuStack_1e0);
    plVar6 = alStack_140;
    func_0x000104c31594();
    in_ZR = (int)unaff_x21 == 1;
    if (!(bool)in_ZR) break;
    func_0x000104c344f8();
    plVar6 = alStack_140;
    func_0x00010002b838(plVar6,"MapsClient: could not get feature, exception message:");
    func_0x000104c34258();
    func_0x000100456794(apppuStack_1e0,alStack_140,plVar6);
    FUN_104c2e1f8(apppuStack_1e0,*(undefined8 *)(lStack_268 + 8),*(undefined1 *)(lStack_268 + 0x10))
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_1e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_140);
    ___cxa_end_catch();
    ppuVar22 = (undefined **)0x0;
  }
  func_0x000104c34390();
  func_0x000104c345a8();
  plVar7 = plVar6;
  func_0x000100060994();
  uVar8 = plVar7[0xc];
  lStack_3d8 = plVar6[0xd];
  uVar1 = plVar6[0xe];
  lVar24 = plVar6[0xf];
  puStack_400 = &UNK_10e52b660;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = uVar8;
  uStack_2f0 = extraout_x8_01;
  FUN_104c32864(uVar8,lStack_3d8,uVar1,lVar24);
  uVar5 = uVar8 == 1;
  if (0 < (long)uVar8) {
    pppppuVar14 = (ulong *****)(uVar8 >> 1);
    FUN_104c32780(&puStack_400);
    while (uVar5 = true, uStack_3e0 != uVar1 || lStack_3d8 != lVar24) {
      puVar9 = &uStack_3e0;
      func_0x000104c343e0();
      ppuVar10 = &puStack_330;
      puStack_330 = puVar9;
      ppppuStack_328 = (ulong ****)pppppuVar14;
      FUN_104c327f8(ppuVar10);
      if (uStack_3e0 == uVar1 && lStack_3d8 == lVar24) {
        func_0x000104c3444c();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000104c3420c();
        ___cxa_throw(ppuVar10);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104c2ef74);
        (*pcVar4)();
      }
      puVar9 = &uStack_3e0;
      func_0x000104c343e0();
      ppuVar11 = &puStack_330;
      puStack_330 = puVar9;
      ppppuStack_328 = (ulong ****)pppppuVar14;
      FUN_104c327f8(ppuVar11);
      plVar7 = (long *)(plVar6[2] + 0x58);
      func_0x000104c32820(plVar7,(ulong)ppuVar10 & 0xffffffff);
      pppppuVar14 = (ulong *****)*plVar7;
      puVar15 = (undefined1 *)((ulong)ppuVar11 & 0xffffffff);
      plVar7 = (long *)(plVar6[2] + 0x70);
      FUN_104c315d4(plVar7,puVar15);
      auStack_3a8[0] = 7;
      pppuStack_3c0 = (ulong ***)*plVar7;
      lStack_3b8 = (long)pppuStack_3c0 + plVar7[1];
      uStack_3b0 = 99;
LAB_104c2edb8:
      iVar21 = (int)&pppuStack_3c0;
      FUN_104c2f230();
      if (iVar21 != 0) {
        switch(uStack_3b0._4_4_) {
        case 1:
          ppppuVar12 = &pppuStack_3c0;
          func_0x000104c2f1c8(ppppuVar12);
          lVar25 = *plVar6;
          if (lVar25 == 0) {
            func_0x000104c302a4(auStack_368,ppppuVar12,puVar15);
          }
          else {
            lStack_3c8 = plVar6[1];
            lStack_3d0 = lVar25;
            if (lStack_3c8 != 0) {
              do {
                func_0x000104c346d0();
              } while (extraout_w10 != 0);
            }
            FUN_104c32ecc(auStack_368,ppppuVar12,puVar15,&lStack_3d0);
          }
          puVar15 = auStack_368;
          FUN_104c33004(&puStack_330);
          func_0x000104c347a8();
          FUN_104c3323c(&puStack_330);
          FUN_104c2f714(auStack_368);
          if (lVar25 != 0) {
            FUN_104c33970(&lStack_3d0);
          }
          goto LAB_104c2edb8;
        case 2:
          func_0x000104c331c8(&pppuStack_3c0);
          param_1 = (ulong *****)(double)SUB84(param_1,0);
          goto code_r0x000104c2ee6c;
        case 3:
          func_0x000104c331f0(&pppuStack_3c0);
code_r0x000104c2ee6c:
          puStack_330 = (ulong *)CONCAT44(puStack_330._4_4_,3);
          ppppuStack_328 = (ulong ****)param_1;
          break;
        case 4:
          pppppuVar19 = (ulong *****)&pppuStack_3c0;
          FUN_104c33218();
          goto code_r0x000104c2ee80;
        case 5:
          pppppuVar19 = (ulong *****)&pppuStack_3c0;
          FUN_104c317e4();
          puStack_330 = (ulong *)CONCAT44(puStack_330._4_4_,5);
          ppppuStack_328 = (ulong ****)pppppuVar19;
          break;
        case 6:
          pppppuVar19 = (ulong *****)&pppuStack_3c0;
          FUN_104c33220();
code_r0x000104c2ee80:
          puStack_330 = (ulong *)CONCAT44(puStack_330._4_4_,4);
          ppppuStack_328 = (ulong ****)pppppuVar19;
          break;
        case 7:
          uVar5 = SUB81(&pppuStack_3c0,0);
          FUN_104c32f6c();
          puStack_330 = (ulong *)CONCAT44(puStack_330._4_4_,6);
          ppppuStack_328 = (ulong ****)CONCAT71(ppppuStack_328._1_7_,uVar5);
          break;
        default:
          goto LAB_104c2ee54;
        }
        func_0x000104c347a8();
        FUN_104c3323c(&puStack_330);
        goto LAB_104c2edb8;
      }
      func_0x000104c32844(&puStack_330,&puStack_400,pppppuVar14,auStack_3a8);
      FUN_104c3323c(auStack_3a8);
    }
  }
  ppuVar22 = &puStack_400;
  FUN_104c33260(extraout_x8_00);
  ppuVar13 = &puStack_400;
  FUN_104c33548(ppuVar13);
  func_0x000100060b40(uStack_2f0);
  if ((bool)uVar5) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_400;
  FUN_104c33548();
  func_0x000104c342c8();
  ppuVar13[1] = (undefined *)ppuVar22;
  *(undefined1 *)(ppuVar13 + 2) = 1;
  return ppuVar13;
}



/* Entry: 104c2ec98; end: 104c2efef;  */

void FUN_104c2ec98(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong **ppuVar8;
  long *plVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar14;
  long lVar15;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined4 auStack_138 [16];
  undefined1 auStack_f8 [56];
  ulong *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_80;
  
  plVar11 = param_3;
  func_0x000100060994();
  uVar5 = plVar11[0xc];
  lStack_168 = param_3[0xd];
  uVar1 = param_3[0xe];
  lVar14 = param_3[0xf];
  puStack_190 = &UNK_10e52b660;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = uVar5;
  uStack_80 = extraout_x8;
  FUN_104c32864(uVar5,lStack_168,uVar1,lVar14);
  uVar3 = uVar5 == 1;
  if (0 < (long)uVar5) {
    plVar11 = (long *)(uVar5 >> 1);
    FUN_104c32780(&puStack_190);
    while (uVar3 = true, uStack_170 != uVar1 || lStack_168 != lVar14) {
      puVar6 = &uStack_170;
      func_0x000104c343e0();
      ppuVar7 = &puStack_c0;
      puStack_c0 = puVar6;
      plStack_b8 = plVar11;
      FUN_104c327f8(ppuVar7);
      if (uStack_170 == uVar1 && lStack_168 == lVar14) {
        func_0x000104c3444c();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000104c3420c();
        ___cxa_throw(ppuVar7);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104c2ef74);
        (*pcVar2)();
      }
      puVar6 = &uStack_170;
      func_0x000104c343e0();
      ppuVar8 = &puStack_c0;
      puStack_c0 = puVar6;
      plStack_b8 = plVar11;
      FUN_104c327f8(ppuVar8);
      plVar11 = (long *)(param_3[2] + 0x58);
      func_0x000104c32820(plVar11,(ulong)ppuVar7 & 0xffffffff);
      plVar11 = (long *)*plVar11;
      puVar12 = (undefined1 *)((ulong)ppuVar8 & 0xffffffff);
      plVar9 = (long *)(param_3[2] + 0x70);
      FUN_104c315d4(plVar9,puVar12);
      auStack_138[0] = 7;
      lStack_150 = *plVar9;
      lStack_148 = lStack_150 + plVar9[1];
      uStack_140 = 99;
LAB_104c2edb8:
      iVar4 = (int)&lStack_150;
      FUN_104c2f230();
      if (iVar4 != 0) {
        switch(uStack_140._4_4_) {
        case 1:
          plVar9 = &lStack_150;
          func_0x000104c2f1c8(plVar9);
          lVar15 = *param_3;
          if (lVar15 == 0) {
            func_0x000104c302a4(auStack_f8,plVar9,puVar12);
          }
          else {
            lStack_158 = param_3[1];
            lStack_160 = lVar15;
            if (lStack_158 != 0) {
              do {
                func_0x000104c346d0();
              } while (extraout_w10 != 0);
            }
            FUN_104c32ecc(auStack_f8,plVar9,puVar12,&lStack_160);
          }
          puVar12 = auStack_f8;
          FUN_104c33004(&puStack_c0);
          func_0x000104c347a8();
          FUN_104c3323c(&puStack_c0);
          FUN_104c2f714(auStack_f8);
          if (lVar15 != 0) {
            FUN_104c33970(&lStack_160);
          }
          goto LAB_104c2edb8;
        case 2:
          func_0x000104c331c8(&lStack_150);
          param_2 = (long *)(double)SUB84(param_2,0);
          goto code_r0x000104c2ee6c;
        case 3:
          func_0x000104c331f0(&lStack_150);
code_r0x000104c2ee6c:
          puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,3);
          plStack_b8 = param_2;
          break;
        case 4:
          plVar9 = &lStack_150;
          FUN_104c33218();
          goto code_r0x000104c2ee80;
        case 5:
          plVar9 = &lStack_150;
          FUN_104c317e4();
          puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,5);
          plStack_b8 = plVar9;
          break;
        case 6:
          plVar9 = &lStack_150;
          FUN_104c33220();
code_r0x000104c2ee80:
          puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,4);
          plStack_b8 = plVar9;
          break;
        case 7:
          uVar3 = SUB81(&lStack_150,0);
          FUN_104c32f6c();
          puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,6);
          plStack_b8 = (long *)CONCAT71(plStack_b8._1_7_,uVar3);
          break;
        default:
          goto LAB_104c2ee54;
        }
        func_0x000104c347a8();
        FUN_104c3323c(&puStack_c0);
        goto LAB_104c2edb8;
      }
      func_0x000104c32844(&puStack_c0,&puStack_190,plVar11,auStack_138);
      FUN_104c3323c(auStack_138);
    }
  }
  ppuVar13 = &puStack_190;
  FUN_104c33260(param_1);
  FUN_104c33548(&puStack_190);
  func_0x000100060b40(uStack_80);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    ppuVar10 = &puStack_190;
    FUN_104c33548();
    func_0x000104c342c8();
    ppuVar10[1] = (undefined *)ppuVar13;
    *(undefined1 *)(ppuVar10 + 2) = 1;
    return;
  }
  return;
LAB_104c2ee54:
  FUN_104c2f2fc(&lStack_150);
  goto LAB_104c2edb8;
}



/* Entry: 104c2eff0; end: 104c2f01b;  */

void FUN_104c2eff0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 104c2f01c; end: 104c2f187;  */

long FUN_104c2f01c(long param_1,long *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  long **pplVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_x8;
  bool bVar6;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000100060994();
  uStack_48 = extraout_x8;
  func_0x000104c34804();
  lStack_d0 = *param_2;
  lStack_c8 = lStack_d0 + param_2[1];
  uStack_c0 = 99;
  while( true ) {
    iVar4 = (int)&lStack_d0;
    lVar5 = 3;
    FUN_104c2f188();
    if (iVar4 == 0) {
      func_0x000100060b40(uStack_48);
      iVar4 = (int)lVar5;
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      FUN_104c2f714(auStack_80);
      func_0x000104c30c1c();
      func_0x000104c34390();
      while ((lVar5 = param_1, FUN_104c2f230(), (int)lVar5 != 0 &&
             (*(int *)(param_1 + 0x14) != iVar4))) {
        FUN_104c2f2fc(param_1);
      }
      return lVar5;
    }
    plVar2 = &lStack_d0;
    func_0x000104c2f1c8();
    lStack_f0 = (long)plVar2 + lVar5;
    uStack_e8 = 99;
    plStack_f8 = plVar2;
    plStack_e0 = plVar2;
    lStack_d8 = lVar5;
    func_0x000104c2f64c(auStack_80);
    bVar6 = false;
    while( true ) {
      pplVar3 = &plStack_f8;
      FUN_104c2f188(pplVar3,1);
      if ((int)pplVar3 == 0) break;
      func_0x000104c34500();
      func_0x000104c3476c(auStack_b8);
      func_0x000104c2f1f0(auStack_80,auStack_b8);
      FUN_104c2f714(auStack_b8);
      bVar6 = true;
    }
    if (!bVar6) break;
    FUN_104c2f218(param_1,auStack_80,&plStack_e0);
    FUN_104c2f714(auStack_80);
  }
  func_0x000104c3444c();
  __ZNSt13runtime_errorC1EPKc();
  func_0x000104c3420c();
  ___cxa_throw(pplVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104c2f13c);
  (*pcVar1)();
}



/* Entry: 104c2f188; end: 104c2f217;  */

void FUN_104c2f188(long param_1,int param_2)

{
  long lVar1;
  
  while ((lVar1 = param_1, FUN_104c2f230(), (int)lVar1 != 0 && (*(int *)(param_1 + 0x14) != param_2)
         )) {
    FUN_104c2f2fc(param_1);
  }
  return;
}



/* Entry: 104c2f218; end: 104c2f22f;  */

void FUN_104c2f218(void)

{
  FUN_104c2fa8c();
  return;
}



/* Entry: 104c2f230; end: 104c2f2fb;  */

/* WARNING: Possible PIC construction at 0x000104c2f63c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c2f640) */
/* WARNING: Removing unreachable block (ram,0x000104c34598) */

long * FUN_104c2f230(long *param_1)

{
  undefined1 **ppuVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 **ppuVar8;
  code *pcVar9;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar7 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  if (plVar7 == plVar4) {
LAB_104c2f29c:
    return (long *)(ulong)(plVar7 != plVar4);
  }
  plVar3 = param_1;
  FUN_104c2f380();
  *(uint *)((long)param_1 + 0x14) = (uint)((ulong)plVar3 >> 3) & 0x1fffffff;
  uVar2 = (uint)plVar3;
  if ((uVar2 < 8) || (uVar2 - 0x251c0 >> 6 < 0x7d)) {
    func_0x000104c34438();
    *plVar3 = (long)&PTR_FUN_1107eb050;
    ___cxa_throw();
  }
  else {
    uVar2 = uVar2 & 7;
    *(uint *)(param_1 + 2) = uVar2;
    if ((uVar2 < 6) && ((1 << (ulong)uVar2 & 0x27U) != 0)) goto LAB_104c2f29c;
  }
  func_0x000104c34438();
  *plVar3 = (long)&PTR_DAT_1107eb078;
  ___cxa_throw();
  pcStack_38 = FUN_104c2f2fc;
  puStack_40 = &stack0xfffffffffffffff0;
  switch((int)plVar3[2]) {
  case 0:
    plVar4 = (long *)plVar3[1];
    ppuVar1 = &puStack_40;
    ppuVar8 = &puStack_40;
    pcStack_38 = FUN_104c2f2fc;
    lVar6 = *plVar3;
    for (lVar5 = 0; (long *)(lVar6 + lVar5) != plVar4; lVar5 = lVar5 + 1) {
      if (-1 < (char)*(long *)(lVar6 + lVar5)) {
        if (lVar5 < 10) {
          *plVar3 = lVar6 + lVar5 + 1;
          return plVar3;
        }
        goto LAB_104c2f5dc;
      }
    }
    if (9 < (long)plVar4 - lVar6) {
LAB_104c2f5dc:
      func_0x000104c34438();
      func_0x000104c343bc();
    }
    func_0x000104c34438();
    pcVar9 = (code *)0x104c2f5ec;
    func_0x000104c3419c();
    goto SUB_104c2f5ec;
  case 1:
    plVar4 = (long *)0x8;
    break;
  case 2:
    plVar4 = plVar3;
    FUN_104c2f380();
    break;
  default:
    return plVar3;
  case 5:
    plVar4 = (long *)0x4;
  }
  ppuVar1 = (undefined1 **)&stack0xffffffffffffffd0;
  ppuVar8 = (undefined1 **)puStack_40;
  pcVar9 = pcStack_38;
SUB_104c2f5ec:
  while (plVar3[1] - *plVar3 < (long)((ulong)plVar4 & 0xffffffff)) {
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar8;
    *(code **)((long)ppuVar1 + -8) = pcVar9;
    func_0x000104c34438();
    func_0x000104c3419c();
    *(long **)((long)ppuVar1 + -0x30) = plVar7;
    *(long **)((long)ppuVar1 + -0x28) = param_1;
    *(undefined1 **)((long)ppuVar1 + -0x20) = (undefined1 *)((long)ppuVar1 + -0x10);
    *(code **)((long)ppuVar1 + -0x18) = FUN_104c2f61c;
    ppuVar8 = (undefined1 **)((long)ppuVar1 + -0x20);
    plVar4 = plVar3;
    FUN_104c2f380();
    pcVar9 = (code *)0x104c2f640;
    ppuVar1 = (undefined1 **)((long)ppuVar1 + -0x30);
    param_1 = plVar3;
    plVar7 = plVar4;
  }
  *plVar3 = *plVar3 + ((ulong)plVar4 & 0xffffffff);
  return plVar3;
}



/* Entry: 104c2f2fc; end: 104c2f37f;  */

/* WARNING: Possible PIC construction at 0x000104c2f63c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c2f640) */
/* WARNING: Removing unreachable block (ram,0x000104c34598) */

void FUN_104c2f2fc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  switch((int)param_1[2]) {
  case 0:
    plVar1 = (long *)param_1[1];
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar3 = *param_1;
    for (lVar2 = 0; (long *)(lVar3 + lVar2) != plVar1; lVar2 = lVar2 + 1) {
      if (-1 < (char)*(long *)(lVar3 + lVar2)) {
        if (lVar2 < 10) {
          *param_1 = lVar3 + lVar2 + 1;
          return;
        }
        goto LAB_104c2f5dc;
      }
    }
    if (9 < (long)plVar1 - lVar3) {
LAB_104c2f5dc:
      func_0x000104c34438();
      func_0x000104c343bc();
    }
    func_0x000104c34438();
    unaff_x30 = 0x104c2f5ec;
    func_0x000104c3419c();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    break;
  case 1:
    plVar1 = (long *)0x8;
    break;
  case 2:
    plVar1 = param_1;
    FUN_104c2f380();
    break;
  default:
    return;
  case 5:
    plVar1 = (long *)0x4;
  }
  while (param_1[1] - *param_1 < (long)((ulong)plVar1 & 0xffffffff)) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000104c34438();
    func_0x000104c3419c();
    *(long **)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_104c2f61c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x20);
    plVar1 = param_1;
    FUN_104c2f380();
    unaff_x30 = 0x104c2f640;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = param_1;
    unaff_x20 = plVar1;
  }
  *param_1 = *param_1 + ((ulong)plVar1 & 0xffffffff);
  return;
}



/* Entry: 104c2f380; end: 104c2f393;  */

void FUN_104c2f380(void)

{
  func_0x000104c34718();
  return;
}



/* Entry: 104c2f394; end: 104c2f3c3;  */

void FUN_104c2f394(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 104c2f3c4; end: 104c2f4ff;  */

long * FUN_104c2f3c4(long *param_1,byte *param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  pbVar4 = (byte *)*param_1;
  if (9 < (long)param_2 - (long)pbVar4) {
    pbVar5 = pbVar4 + 1;
    plVar2 = (long *)((ulong)*pbVar4 & 0x7f);
    if ((char)*pbVar4 < '\0') {
      plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[1] & 0x7f) << 7);
      if ((char)pbVar4[1] < '\0') {
        plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[2] & 0x7f) << 0xe);
        if ((char)pbVar4[2] < '\0') {
          plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[3] & 0x7f) << 0x15);
          if ((char)pbVar4[3] < '\0') {
            plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[4] & 0x7f) << 0x1c);
            if ((char)pbVar4[4] < '\0') {
              plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[5] & 0x7f) << 0x23);
              if ((char)pbVar4[5] < '\0') {
                plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[6] & 0x7f) << 0x2a);
                if ((char)pbVar4[6] < '\0') {
                  plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[7] & 0x7f) << 0x31);
                  if ((char)pbVar4[7] < '\0') {
                    pbVar5 = pbVar4 + 9;
                    plVar2 = (long *)((ulong)plVar2 | ((ulong)pbVar4[8] & 0x7f) << 0x38);
                    if ((char)pbVar4[8] < '\0') {
                      if ((long)(char)*pbVar5 < 0) goto LAB_104c2f4f8;
                      plVar2 = (long *)((ulong)plVar2 | (long)(char)*pbVar5 << 0x3f);
                      pbVar5 = pbVar4 + 10;
                    }
                  }
                  else {
                    pbVar5 = pbVar4 + 8;
                  }
                }
                else {
                  pbVar5 = pbVar4 + 7;
                }
              }
              else {
                pbVar5 = pbVar4 + 6;
              }
            }
            else {
              pbVar5 = pbVar4 + 5;
            }
          }
          else {
            pbVar5 = pbVar4 + 4;
          }
        }
        else {
          pbVar5 = pbVar4 + 3;
        }
      }
      else {
        pbVar5 = pbVar4 + 2;
      }
    }
LAB_104c2f444:
    *param_1 = (long)pbVar5;
    return plVar2;
  }
  uVar3 = 0;
  uVar6 = 0;
  while (pbVar4 != param_2) {
    bVar1 = *pbVar4;
    if (-1 < (char)bVar1) {
      plVar2 = (long *)((ulong)bVar1 << (uVar6 & 0x3f) | uVar3);
      pbVar5 = pbVar4 + 1;
      goto LAB_104c2f444;
    }
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar6 & 0x3f) | uVar3;
    uVar6 = (ulong)((int)uVar6 + 7);
    pbVar4 = pbVar4 + 1;
  }
  func_0x000104c34438();
  func_0x000104c3419c();
LAB_104c2f4f8:
  func_0x000104c34438();
  func_0x000104c343bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return param_1;
}



/* Entry: 104c2f500; end: 104c2f507;  */

void FUN_104c2f500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 104c2f508; end: 104c2f51b;  */

void FUN_104c2f508(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c2f51c; end: 104c2f527;  */

char * FUN_104c2f51c(void)

{
  return "varint too long exception";
}



/* Entry: 104c2f528; end: 104c2f53b;  */

void FUN_104c2f528(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c2f53c; end: 104c2f547;  */

char * FUN_104c2f53c(void)

{
  return "end of buffer exception";
}



/* Entry: 104c2f548; end: 104c2f55b;  */

void FUN_104c2f548(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c2f55c; end: 104c2f567;  */

char * FUN_104c2f55c(void)

{
  return "invalid tag exception";
}



/* Entry: 104c2f568; end: 104c2f57b;  */

void FUN_104c2f568(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c2f57c; end: 104c2f587;  */

char * FUN_104c2f57c(void)

{
  return "unknown pbf field type exception";
}



/* Entry: 104c2f588; end: 104c2f61b;  */

/* WARNING: Possible PIC construction at 0x000104c2f63c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c2f640) */
/* WARNING: Removing unreachable block (ram,0x000104c34598) */

void FUN_104c2f588(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  puVar4 = &stack0xfffffffffffffff0;
  lVar2 = 0;
  lVar3 = *param_1;
  do {
    if ((long *)(lVar3 + lVar2) == param_2) {
      if (9 < (long)param_2 - lVar3) {
LAB_104c2f5dc:
        func_0x000104c34438();
        func_0x000104c343bc();
      }
      func_0x000104c34438();
      uVar5 = 0x104c2f5ec;
      func_0x000104c3419c();
      puVar1 = &stack0xfffffffffffffff0;
      while (param_1[1] - *param_1 < (long)((ulong)param_2 & 0xffffffff)) {
        *(undefined1 **)(puVar1 + -0x10) = puVar4;
        *(undefined8 *)(puVar1 + -8) = uVar5;
        func_0x000104c34438();
        func_0x000104c3419c();
        *(long **)(puVar1 + -0x30) = unaff_x20;
        *(long **)(puVar1 + -0x28) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
        *(code **)(puVar1 + -0x18) = FUN_104c2f61c;
        puVar4 = puVar1 + -0x20;
        param_2 = param_1;
        FUN_104c2f380();
        uVar5 = 0x104c2f640;
        puVar1 = puVar1 + -0x30;
        unaff_x19 = param_1;
        unaff_x20 = param_2;
      }
      *param_1 = *param_1 + ((ulong)param_2 & 0xffffffff);
      return;
    }
    if (-1 < (char)*(long *)(lVar3 + lVar2)) {
      if (lVar2 < 10) {
        *param_1 = lVar3 + lVar2 + 1;
        return;
      }
      goto LAB_104c2f5dc;
    }
    lVar2 = lVar2 + 1;
  } while( true );
}



/* Entry: 104c2f61c; end: 104c2f697;  */

undefined8 FUN_104c2f61c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104c2f380();
  func_0x000104c2f5ec(param_1,uVar1);
  return uVar1;
}



/* Entry: 104c2f698; end: 104c2f6bb;  */

undefined8 FUN_104c2f698(undefined8 param_1)

{
  FUN_104c2f6bc();
  return param_1;
}



/* Entry: 104c2f6bc; end: 104c2f713;  */

void FUN_104c2f6bc(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x28);
  if (*(int *)(param_1 + 0x28) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
        (*(code *)(&PTR_FUN_1107eb090)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_1107eb0b8)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 104c2f714; end: 104c2f75f;  */

void FUN_104c2f714(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107eb090)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 104c2f760; end: 104c2f783;  */

void FUN_104c2f760(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 104c2f784; end: 104c2f7a7;  */

void FUN_104c2f784(long param_1)

{
  func_0x0001000df518();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c2f7a8; end: 104c2f7c3;  */

void FUN_104c2f7a8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_1 + 0x28) != 0) {
    func_0x000104c346a4();
    FUN_104c2f7f4();
    return;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c60e14(*param_2);
  }
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  *(undefined1 *)((long)param_3 + 0x17) = 0;
  *(undefined1 *)param_3 = 0;
  return;
}



/* Entry: 104c2f7c4; end: 104c2f7f3;  */

void FUN_104c2f7c4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x000104c346a4();
    FUN_104c2f7f4();
    return;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c60e14(*param_2);
  }
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  *(undefined1 *)((long)param_3 + 0x17) = 0;
  *(undefined1 *)param_3 = 0;
  return;
}



/* Entry: 104c2f7f4; end: 104c2f7ff;  */

void FUN_104c2f7f4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104c342a8(*param_1,param_1[1]);
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x20 + 5) = 0;
  return;
}



/* Entry: 104c2f800; end: 104c2f837;  */

void FUN_104c2f800(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104c342a8();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x20 + 5) = 0;
  return;
}


