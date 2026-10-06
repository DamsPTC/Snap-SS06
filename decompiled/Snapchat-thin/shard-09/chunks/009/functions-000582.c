/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072a4d2c; end: 1072a4d3f;  */

void FUN_1072a4d2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001072a4d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1068) + 0x20))(*(long **)(param_1 + 0x1068),param_2,1);
  return;
}



/* Entry: 1072a4d40; end: 1072a4d9b;  */

void FUN_1072a4d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_1 + 0x1068);
  FUN_1072a4d9c(auStack_30,param_3);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,auStack_30,1);
  FUN_1072a9f04(auStack_30);
  return;
}



/* Entry: 1072a4d9c; end: 1072a4f8b;  */

void FUN_1072a4d9c(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  undefined **unaff_x20;
  undefined **ppuVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  uint6 uVar14;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  undefined8 uVar15;
  byte bVar21;
  undefined *puStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  
  func_0x0001072af7b0();
  puStack_e0 = &UNK_10e52b660;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uVar7 = *(ulong *)(param_2 + 0x10);
  puVar9 = (ulong *)(param_2 + 0x10);
  if ((uVar7 & 1) != 0) {
    puVar9 = (ulong *)(uVar7 + 7);
  }
  puVar1 = puVar9 + *(int *)(param_2 + 0x18);
  uStack_88 = extraout_x8;
  do {
    uVar5 = puVar9 == puVar1;
    if ((bool)uVar5) {
      FUN_1072a9bb0(param_1,&puStack_e0);
      FUN_1072a9e8c(&puStack_e0);
      func_0x0001072af6ec(uStack_88);
      if (!(bool)uVar5) {
        ___stack_chk_fail();
        func_0x000104c2f714(unaff_x20);
        func_0x000104c2f714(auStack_c0);
        ppuVar8 = &puStack_e0;
        FUN_1072a9e8c();
        func_0x0001072afaac();
                    /* WARNING: Could not recover jumptable at 0x0001072a4f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)ppuVar8[0x20d] + 0x40))();
        return;
      }
      return;
    }
    uVar7 = *puVar9;
    func_0x0001072b0458(*(undefined8 *)(uVar7 + 0x18),auStack_c0);
    uVar11 = *(ulong *)(uVar7 + 0x10);
    Hint_Prefetch(puStack_e0,0,2,0);
    unaff_x20 = &puStack_e0;
    FUN_1072a02f8(puStack_e0,unaff_x20,uVar11 & 0xfffffffffffffffc);
    uVar4 = uStack_d0;
    puVar3 = puStack_e0;
    lVar12 = 0;
    uVar7 = (ulong)puStack_e0 >> 0xc ^ (ulong)unaff_x20 >> 7;
    bVar2 = (byte)unaff_x20;
    uVar14 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar7 = uVar7 & uVar4;
      uVar15 = *(undefined8 *)(puVar3 + uVar7);
      cVar16 = (char)((ulong)uVar15 >> 8);
      cVar17 = (char)((ulong)uVar15 >> 0x10);
      cVar18 = (char)((ulong)uVar15 >> 0x18);
      cVar19 = (char)((ulong)uVar15 >> 0x20);
      cVar20 = (char)((ulong)uVar15 >> 0x28);
      bVar13 = (byte)((ulong)uVar15 >> 0x30);
      bVar21 = (byte)((ulong)uVar15 >> 0x38);
      for (uVar10 = CONCAT17(-(bVar21 == (bVar2 & 0x7f)),
                             CONCAT16(-(bVar13 == (bVar2 & 0x7f)),
                                      CONCAT15(-(cVar20 == (char)(uVar14 >> 0x28)),
                                               CONCAT14(-(cVar19 == (char)(uVar14 >> 0x20)),
                                                        CONCAT13(-(cVar18 == (char)(uVar14 >> 0x18))
                                                                 ,CONCAT12(-(cVar17 ==
                                                                            (char)(uVar14 >> 0x10)),
                                                                           CONCAT11(-(cVar16 ==
                                                                                     (char)(uVar14 
                                                  >> 8)),-((char)uVar15 == (char)uVar14)))))))) &
                    0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar6 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        ppuVar8 = (undefined **)
                  (uVar7 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar4);
        uVar6 = lStack_d8 + (long)ppuVar8 * 0x70;
        FUN_107283140(uVar6,uVar11 & 0xfffffffffffffffc);
        if ((uVar6 & 1) != 0) goto LAB_1072a4ee4;
      }
      bVar13 = NEON_umaxv(CONCAT17(-(bVar21 == 0x80),
                                   CONCAT16(-(bVar13 == 0x80),
                                            CONCAT15(-(cVar20 == -0x80),
                                                     CONCAT14(-(cVar19 == -0x80),
                                                              CONCAT13(-(cVar18 == -0x80),
                                                                       CONCAT12(-(cVar17 == -0x80),
                                                                                CONCAT11(-(cVar16 ==
                                                                                          -0x80),-((
                                                  char)uVar15 == -0x80)))))))),1);
      if ((bVar13 & 1) != 0) break;
      lVar12 = lVar12 + 8;
      uVar7 = lVar12 + uVar7;
    }
    ppuVar8 = &puStack_e0;
    func_0x0001072a9900(ppuVar8,unaff_x20);
    unaff_x20 = (undefined **)(lStack_d8 + (long)ppuVar8 * 0x70);
    FUN_107262e9c(unaff_x20,uVar11 & 0xfffffffffffffffc);
    func_0x000104c2f64c(unaff_x20 + 7);
LAB_1072a4ee4:
    func_0x000104c2f1f0(lStack_d8 + (long)ppuVar8 * 0x70 + 0x38,auStack_c0);
    func_0x000104c2f714(auStack_c0);
    puVar9 = puVar9 + 1;
  } while( true );
}



/* Entry: 1072a4f8c; end: 1072a4f9f;  */

void FUN_1072a4f8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001072a4f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1068) + 0x40))(*(long **)(param_1 + 0x1068),param_2,1);
  return;
}



/* Entry: 1072a4fa0; end: 1072a4fd7;  */

void FUN_1072a4fa0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  
  if (*(long *)(param_2 + 0x1088) != 0) {
    func_0x00010734c4dc(*(long *)(param_2 + 0x1088),&stack0xffffffffffffffef);
    return;
  }
  pcVar1 = "";
  func_0x00010002b82c(param_1,"");
  func_0x000107c613d0(pcVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1072a4fd8; end: 1072a4fe7;  */

void FUN_1072a4fd8(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x1088);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x0001073518a8();
  uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 8);
  auStack_98[0] = 0;
  puVar8 = (undefined8 *)(lVar2 + 0x28);
  uVar3 = *puVar8;
  uStack_48 = extraout_x8;
  func_0x000107351cb4(uVar3);
  uVar4 = *puVar8;
  func_0x000107351cc0(uVar4);
  func_0x00010734c384(auStack_80,auStack_98,uVar7,uVar3,uVar4);
  lStack_b0._0_1_ = 1;
  plVar5 = (long *)*puVar8;
  (**(code **)(*plVar5 + 0x30))();
  plVar6 = &lStack_b0;
  func_0x00010734c384(auStack_98,plVar6,uVar7,plVar5,1);
  func_0x0001073af260();
  (**(code **)(*plVar6 + 0x20))(&lStack_b0);
  plVar5 = *(long **)(lVar1 + 8);
  uStack_188 = CONCAT71(lStack_b0._1_7_,(undefined1)lStack_b0);
  lStack_180 = lStack_a8;
  lStack_190 = lVar1;
  if (lStack_a8 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  uStack_178 = uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_158,auStack_98);
  uStack_138 = param_2[1];
  uStack_140 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107351bd8(&uStack_130);
  puVar8 = &uStack_118;
  func_0x00010734d7d4(puVar8,&lStack_190);
  puStack_50 = (undefined8 *)0x0;
  func_0x000107351bd0();
  puVar8[2] = uStack_128;
  puVar8[1] = uStack_130;
  puVar8[6] = uStack_108;
  puVar8[5] = uStack_110;
  *puVar8 = &PTR_DAT_1109a4518;
  uStack_130 = 0;
  uStack_128 = 0;
  puVar8[4] = uStack_118;
  puVar8[3] = uStack_120;
  puVar8[7] = uStack_100;
  uStack_110 = 0;
  uStack_108 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar8 + 8,auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar8 + 0xb,auStack_e0);
  puVar8[0xf] = lStack_c0;
  puVar8[0xe] = uStack_c8;
  if (lStack_c0 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10_01 != 0);
  }
  puStack_50 = puVar8;
  (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
  func_0x0001006393ec(auStack_68);
  func_0x00010734c48c(&uStack_130);
  func_0x00010734c4ac(&lStack_190);
  func_0x00010725b1d4(&lStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000107351844(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_68);
    func_0x00010734c48c(&uStack_130);
    func_0x00010734c4ac(&lStack_190);
    func_0x00010725b1d4(&lStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      func_0x00010735190c();
    } while( true );
  }
  return;
}



/* Entry: 1072a4fe8; end: 1072a5347;  */

undefined4 * FUN_1072a4fe8(long param_1,long param_2)

{
  ulong *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar7;
  int extraout_w10;
  long *plVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3b8;
  long lStack_3b0;
  undefined1 auStack_3a8 [56];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [64];
  undefined1 auStack_310 [24];
  undefined8 *puStack_2f8;
  undefined4 auStack_2f0 [6];
  undefined4 uStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2a8;
  undefined1 uStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined2 uStack_140;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined1 uStack_b0;
  long alStack_a8 [7];
  undefined8 uStack_70;
  
  lVar2 = param_1;
  func_0x0001072af7b0();
  plVar8 = *(long **)(lVar2 + 0xe18);
  uStack_70 = extraout_x8;
  func_0x00010002b838(auStack_2f0,PTR_DAT_1131ad040);
  (**(code **)(*plVar8 + 0x28))(plVar8,auStack_2f0);
  puVar3 = auStack_2f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (((((uint)plVar8 ^ 0xffffffff) & 0x101) == 0) && (*(long *)(param_1 + 0xf20) != 0)) {
    uVar7 = *(ulong *)(param_2 + 0x10);
    puVar9 = (ulong *)(param_2 + 0x10);
    if ((uVar7 & 1) != 0) {
      puVar9 = (ulong *)(uVar7 + 7);
    }
    puVar1 = puVar9 + *(int *)(param_2 + 0x18);
    for (; in_ZR = puVar9 == puVar1, !(bool)in_ZR; puVar9 = puVar9 + 1) {
      uVar7 = *puVar9;
      func_0x0001072b0458(*(undefined8 *)(uVar7 + 0x10),alStack_a8);
      uStack_f8 = uStack_f8 & 0xffffffffffffff00;
      uStack_b0 = 0;
      uStack_3f0 = uStack_3f0 & 0xffffffffffffff00;
      uStack_3b8 = 0;
      FUN_10724aea8(auStack_2f0,0,alStack_a8,&uStack_f8,3,&uStack_3f0);
      FUN_10724b12c(&uStack_3f0);
      FUN_10724b2ac(&uStack_f8);
      func_0x000104c2f714(alStack_a8);
      uStack_140 = 0x100;
      if (*(int *)(uVar7 + 0x18) == 2) {
        uStack_140 = 0x101;
      }
      plVar8 = *(long **)(param_1 + 0xf20);
      lStack_3b0 = param_1;
      FUN_1072a5348(auStack_3a8,auStack_2f0);
      uVar11 = *(undefined8 *)(param_1 + 0x10d8);
      uVar10 = *(undefined8 *)(param_1 + 0x10d0);
      if (*(long *)(param_1 + 0x10d8) != 0) {
        do {
          func_0x0001072af838();
        } while (extraout_w10 != 0);
      }
      uStack_360 = *(undefined8 *)(param_1 + 0x10e0);
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_370 = uVar10;
      uStack_368 = uVar11;
      func_0x00010725b1d4(&uStack_f8);
      func_0x00010725b1d4(&uStack_3f0);
      puVar4 = &uStack_358;
      FUN_1072a9fa0(puVar4,&lStack_3b0);
      puStack_2f8 = (undefined8 *)0x0;
      func_0x0001072b058c();
      *puVar4 = &PTR_SUB_110999700;
      uVar11 = uStack_358;
      uVar10 = uStack_360;
      puVar4[2] = uStack_368;
      puVar4[1] = uStack_370;
      uStack_370 = 0;
      uStack_368 = 0;
      puVar4[4] = uVar11;
      puVar4[3] = uVar10;
      func_0x000104c318bc(puVar4 + 5,auStack_350);
      puStack_2f8 = puVar4;
      (**(code **)(*plVar8 + 0x10))(alStack_a8,plVar8,auStack_2f0,auStack_310);
      func_0x0001072ad0c8(auStack_310);
      FUN_1072a5368(&uStack_370);
      func_0x000104c2f714(auStack_3a8);
      FUN_1072a5348(&uStack_f8,auStack_2f0);
      uStack_3e8 = CONCAT71(uStack_3e8._1_7_,1);
      uStack_3f0 = param_1 + 0xf30U;
      FUN_107279a5c(param_1 + 0xf30U);
      plVar8 = (long *)(param_1 + 0xfd8);
      FUN_1072ad0fc(plVar8,&uStack_f8);
      lVar2 = alStack_a8[0];
      alStack_a8[0] = 0;
      lVar5 = *plVar8;
      *plVar8 = lVar2;
      if (lVar5 != 0) {
        func_0x0001072afa4c();
      }
      func_0x0001072b015c();
      func_0x000104c2f714(&uStack_f8);
      lVar2 = alStack_a8[0];
      alStack_a8[0] = 0;
      if (lVar2 != 0) {
        func_0x0001072afa4c();
      }
      func_0x00010724b374(auStack_2f0);
    }
    auStack_2f0[0] = 0x111;
    uStack_2d8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    ppuStack_2d0 = &PTR_FUN_110996720;
    uStack_2c8 = 0;
    uStack_2b0 = 0x111;
    uStack_2a8 = 0;
    uStack_2a4 = 1;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a0 = 0;
    uStack_f8 = CONCAT44(uStack_f8._4_4_,*(undefined4 *)(param_2 + 0x18));
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    uStack_3f0 = *(ulong *)(param_1 + 0xc50);
    uStack_3e8 = CONCAT44(uStack_3e8._4_4_,3);
    func_0x0001072b0474((ulong *)(param_1 + 0xc50),auStack_2f0,&uStack_f8,&uStack_3f0);
    puVar3 = auStack_2f0;
    FUN_107262330();
  }
  func_0x0001072af6ec(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar6 = auStack_2f0;
    FUN_107262330();
    func_0x0001072afaac();
    lVar2 = 0x40;
    if (*(char *)(puVar6 + 0x1e) == '\0') {
      lVar2 = 8;
    }
    func_0x0001000d03a8(extraout_x8_00,(long)puVar6 + lVar2);
    func_0x000104c2feb0();
    *(undefined8 *)(puVar3 + 0xc) = 0xffffffffffffffff;
    func_0x000104c2fe38();
    *(long *)(puVar3 + 0xc) = param_1;
    return puVar3;
  }
  return puVar3;
}



/* Entry: 1072a5348; end: 1072a5367;  */

void FUN_1072a5348(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = 0x40;
  if (*(char *)(param_2 + 0x78) == '\0') {
    lVar1 = 8;
  }
  func_0x0001000d03a8(param_1,param_2 + lVar1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1072a5368; end: 1072a538b;  */

long FUN_1072a5368(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001072b0630();
  func_0x000104c2f714();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072a538c; end: 1072a54df;  */

void FUN_1072a538c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001072afc24();
  func_0x0001072af7b0();
  uStack_28 = extraout_x8;
  if (*(int *)(param_1 + 0xe88) == 0) {
    func_0x00010002b838(&uStack_60,&UNK_10f408c29);
    func_0x00010786df04(0x11,&uStack_60,0,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  plVar1 = *(long **)(unaff_x19 + 0xf10);
  if (plVar1 == (long *)0x0) {
    func_0x000107527e54(&lStack_68);
    func_0x0001002a9c04(auStack_80);
    func_0x000100066230(lStack_68 + 0x30,auStack_80);
    func_0x0001072afe40();
    func_0x00010789e8a0();
    func_0x000107525958(&uStack_a0);
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107249e68((long *)(unaff_x19 + 0xf10),&uStack_60);
    func_0x00010724bd74(&uStack_60);
    func_0x0001072b0428();
    func_0x00010724bd50(&uStack_a0);
    func_0x000107527f90(&lStack_68);
    plVar1 = *(long **)(unaff_x19 + 0xf10);
    if (plVar1 == (long *)0x0) goto LAB_1072a548c;
  }
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_110999800;
  (**(code **)(*plVar1 + 0x60))(plVar1,appuStack_48);
  FUN_10724bfc0(appuStack_48);
LAB_1072a548c:
  func_0x0001072af6ec(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar1 = &lStack_68;
    func_0x000107527f90();
    pcVar3 = FUN_1072a54e0;
    func_0x0001072afaac();
    lVar2 = plVar1[0x1c6];
    *extraout_x8_00 = plVar1[0x1c5];
    extraout_x8_00[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x0001072af838(pcVar3);
      } while (extraout_w10 != 0);
    }
    return;
  }
  return;
}



/* Entry: 1072a54e0; end: 1072a5507;  */

void FUN_1072a54e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  
  lVar1 = *(long *)(param_2 + 0xe30);
  *param_1 = *(undefined8 *)(param_2 + 0xe28);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001072af838(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072a5508; end: 1072a5c63;  */

void FUN_1072a5508(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined **ppuStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_280;
  undefined1 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_68;
  
  lVar12 = param_2;
  func_0x0001072af7b0();
  lVar12 = lVar12 + 0xe48;
  uStack_68 = extraout_x8;
  FUN_1072ab574();
  if (*(int *)(param_2 + 0xe88) == 0) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar9 = (undefined8 *)(lVar12 + 8);
    ppuStack_2c8 = (undefined **)CONCAT44(ppuStack_2c8._4_4_,0x107);
    uStack_2b0 = (undefined ***)((ulong)uStack_2b0._4_4_ << 0x20);
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x0001072afe50();
    uStack_2a0 = 0;
    uStack_280 = 0;
    uStack_27c = 1;
    uStack_268 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_300 = CONCAT44(uStack_300._4_4_,1);
    uStack_2f8 = (ulong)uStack_2f8._4_4_ << 0x20;
    puStack_2d8 = (undefined8 *)*puVar9;
    puStack_2d0 = (undefined8 *)CONCAT44(puStack_2d0._4_4_,3);
    func_0x0001072b0474();
    FUN_107262330(&ppuStack_2c8);
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0xe48);
  if ((*(long *)(param_2 + 0xf10) == 0) || (*(long *)(param_2 + 0xf20) == 0)) {
    FUN_1072a5c64(param_2,param_6);
  }
  if (*(char *)(param_2 + 0x1020) == '\x01') {
    lStack_2c0 = param_2 + 0x1010;
    ppuStack_2c8 = &PTR_FUN_110999ff8;
    uStack_2b0 = &ppuStack_2c8;
    FUN_107292e94(*param_7,&ppuStack_2c8);
    func_0x000107283e00(&ppuStack_2c8);
  }
  uStack_308 = *(undefined8 *)(param_2 + 0xf18);
  uStack_310 = *(undefined8 *)(param_2 + 0xf10);
  if (*(long *)(param_2 + 0xf18) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  uStack_318 = *(undefined8 *)(param_2 + 0xf28);
  uStack_320 = *(undefined8 *)(param_2 + 0xf20);
  if (*(long *)(param_2 + 0xf28) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  uStack_328 = param_7[1];
  uStack_330 = *param_7;
  *param_7 = 0;
  param_7[1] = 0;
  uStack_340 = *(undefined8 *)(param_2 + 0xe18);
  lStack_338 = *(long *)(param_2 + 0xe20);
  if (lStack_338 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
  }
  uStack_350 = *(undefined8 *)(param_2 + 0xec8);
  lStack_348 = *(long *)(param_2 + 0xed0);
  if (lStack_348 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_02 != 0);
  }
  FUN_1072a5d24(auStack_360,*(undefined8 *)(param_2 + 0xed8));
  uStack_370 = *(undefined8 *)(param_2 + 0xe38);
  lStack_368 = *(long *)(param_2 + 0xe40);
  if (lStack_368 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_03 != 0);
  }
  uStack_380 = *(undefined8 *)(param_2 + 0xeb8);
  lStack_378 = *(long *)(param_2 + 0xec0);
  if (lStack_378 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_04 != 0);
  }
  uStack_388 = *(undefined8 *)(param_2 + 0x1008);
  uStack_390 = *(undefined8 *)(param_2 + 0x1000);
  if (*(long *)(param_2 + 0x1008) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_05 != 0);
  }
  uStack_398 = *(undefined8 *)(param_2 + 0x58);
  uStack_3a0 = *(undefined8 *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x58) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_06 != 0);
  }
  uStack_3b0 = *(undefined8 *)(param_2 + 0x1038);
  lStack_3a8 = *(long *)(param_2 + 0x1040);
  if (lStack_3a8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_07 != 0);
  }
  uStack_3c0 = *(undefined8 *)(param_2 + 0x1048);
  lStack_3b8 = *(long *)(param_2 + 0x1050);
  if (lStack_3b8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_08 != 0);
  }
  uStack_3d0 = *(undefined8 *)(param_2 + 0x1058);
  lStack_3c8 = *(long *)(param_2 + 0x1060);
  if (lStack_3c8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_09 != 0);
  }
  uStack_3e0 = *(undefined8 *)(param_2 + 0x1088);
  lStack_3d8 = *(long *)(param_2 + 0x1090);
  if (lStack_3d8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_10 != 0);
  }
  uStack_2f0 = *(undefined8 *)(param_2 + 0x10b8);
  uStack_2f8 = *(undefined8 *)(param_2 + 0x10b0);
  uStack_300 = *(undefined8 *)(param_2 + 0x10a8);
  puVar10 = (undefined8 *)(*(ulong *)(param_2 + 0xf00) & 0xfffffffffffffffc);
  lVar12 = (long)*(char *)((long)puVar10 + 0x17);
  puVar9 = puVar10;
  if (lVar12 < 0) {
    puVar9 = (undefined8 *)*puVar10;
    lVar12 = puVar10[1];
  }
  func_0x000107859b70(puVar9,lVar12);
  uStack_3e8 = *(undefined8 *)(param_2 + 0x10c8);
  uStack_3f0 = *(undefined8 *)(param_2 + 0x10c0);
  if (*(long *)(param_2 + 0x10c8) != 0) {
    do {
      func_0x0001072afaec();
    } while (extraout_w11 != 0);
  }
  uStack_400 = *(undefined8 *)(param_2 + 0x1068);
  lStack_3f8 = *(long *)(param_2 + 0x1070);
  if (lStack_3f8 != 0) {
    do {
      func_0x0001072afaec();
    } while (extraout_w11_00 != 0);
  }
  FUN_1072d990c(&ppuStack_2c8,param_3);
  puVar10 = (undefined8 *)0x3d0;
  __Znwm();
  plVar14 = puVar10 + 1;
  *plVar14 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_DAT_110999880;
  func_0x00010793c4d4(&uStack_300,0,param_2 + 0xee8);
  puVar9 = puVar10 + 3;
  puStack_2d8 = *(undefined8 **)(param_2 + 0xe28);
  puStack_2d0 = *(undefined8 **)(param_2 + 0xe30);
  if (puStack_2d0 != (undefined8 *)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_11 != 0);
  }
  FUN_1072b11e8(puVar9,&ppuStack_2c8,param_4,&uStack_300,&puStack_2d8);
  FUN_1072ac7b8(&puStack_2d8);
  func_0x00010793c520(&uStack_300);
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar10;
  if ((puVar10[6] == 0) || (*(long *)(puVar10[6] + 8) == -1)) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      puStack_2d8 = puVar9;
      puStack_2d0 = puVar10;
    } while (cVar5 != '\0');
    do {
      func_0x0001072afaec();
    } while (extraout_w11_01 != 0);
    uStack_300 = puVar10[5];
    puVar10[5] = puVar9;
    puVar10[6] = puVar10;
    uStack_2f8 = extraout_x8_00;
    func_0x0001072ac904(&uStack_300);
    func_0x00010725b704(&puStack_2d8);
  }
  func_0x0001072a9fc0(&ppuStack_2c8);
  func_0x0001072ac8e0(&uStack_400);
  func_0x0001072aca24(&uStack_3f0);
  func_0x0001072aca00(&uStack_3e0);
  func_0x000100450be4(&uStack_3d0);
  func_0x0001072ac9b8(&uStack_3c0);
  func_0x0001072ac994(&uStack_3b0);
  func_0x0001072ac928(&uStack_3a0);
  func_0x0001072ac970(&uStack_390);
  func_0x0001072ac4dc(&uStack_380);
  func_0x0001072ac94c(&uStack_370);
  func_0x0001072b01a0();
  func_0x00010726ee28(&uStack_350);
  func_0x00010726eedc(&uStack_340);
  func_0x00010725b6e0(&uStack_330);
  func_0x00010724bd50(&uStack_320);
  func_0x00010724bd74(&uStack_310);
  plVar14 = (long *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x20);
  for (lVar12 = *plVar14; lVar12 != lVar15; lVar12 = lVar12 + 0x10) {
    lVar16 = lVar12;
    if ((*(long *)(lVar12 + 8) == 0) || (*(long *)(*(long *)(lVar12 + 8) + 8) == -1))
    goto LAB_1072a59fc;
  }
LAB_1072a5a48:
  ppuVar3 = (undefined **)*param_1;
  lVar12 = param_1[1];
  ppuStack_2c8 = ppuVar3;
  lStack_2c0 = lVar12;
  if (lVar12 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_12 != 0);
  }
  plVar17 = *(long **)(param_2 + 0x20);
  plVar4 = *(long **)(param_2 + 0x28);
  uVar8 = plVar17 == plVar4;
  if (plVar17 < plVar4) {
    *plVar17 = (long)ppuVar3;
    plVar17[1] = lVar12;
    plVar17 = plVar17 + 2;
    ppuStack_2c8 = (undefined **)0x0;
    lStack_2c0 = 0;
LAB_1072a5b0c:
    *(long **)(param_2 + 0x20) = plVar17;
    func_0x0001072ac904(&ppuStack_2c8);
    func_0x0001072af6ec(uStack_68);
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar15 = *plVar14;
    lVar16 = (long)plVar17 - lVar15;
    uVar1 = (lVar16 >> 4) + 1;
    if (uVar1 >> 0x3c == 0) {
      uVar13 = (long)plVar4 - lVar15;
      uVar2 = (long)uVar13 >> 3;
      if ((ulong)((long)uVar13 >> 3) <= uVar1) {
        uVar2 = uVar1;
      }
      uVar8 = uVar13 == 0x7ffffffffffffff0;
      if (0x7fffffffffffffef < uVar13) {
        uVar2 = 0xfffffffffffffff;
      }
      if (uVar2 == 0) {
        lVar11 = 0;
      }
      else {
        if (uVar2 >> 0x3c != 0) {
          func_0x000104bd35f4();
          goto LAB_1072a5b40;
        }
        lVar11 = uVar2 << 4;
        __Znwm();
      }
      plVar14 = (long *)(lVar11 + lVar16);
      *plVar14 = (long)ppuVar3;
      plVar14[1] = lVar12;
      ppuStack_2c8 = (undefined **)0x0;
      lStack_2c0 = 0;
      plVar17 = plVar14 + 2;
      _memcpy(plVar14 + (lVar16 >> 4) * -2,lVar15,lVar16);
      *(long **)(param_2 + 0x18) = plVar14 + (lVar16 >> 4) * -2;
      *(long **)(param_2 + 0x20) = plVar17;
      *(ulong *)(param_2 + 0x28) = lVar11 + uVar2 * 0x10;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
      goto LAB_1072a5b0c;
    }
  }
  FUN_1072aa354();
LAB_1072a5b40:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1072a5b44);
  (*pcVar7)();
LAB_1072a59fc:
  while (lVar11 = lVar16 + 0x10, lVar11 != lVar15) {
    plVar17 = (long *)(lVar16 + 0x18);
    lVar16 = lVar11;
    if ((*plVar17 != 0) && (*(long *)(*plVar17 + 8) != -1)) {
      func_0x0001072ab550(lVar12,lVar11);
      lVar12 = lVar12 + 0x10;
    }
  }
  if (lVar12 != *(long *)(param_2 + 0x20)) {
    func_0x0001072a98d0(plVar14,lVar12);
  }
  goto LAB_1072a5a48;
}



/* Entry: 1072a5c64; end: 1072a5d23;  */

void FUN_1072a5c64(undefined8 param_1)

{
  long unaff_x19;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001072afc24();
  func_0x00010789e8a0();
  if (1 < *(int *)(unaff_x19 + 0xe88)) {
    func_0x000107525e70(param_1);
    FUN_1072a5e8c();
  }
  func_0x000107525958(&uStack_60,param_1,1);
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107249e68(unaff_x19 + 0xf10,&uStack_40);
  func_0x00010724bd74(&uStack_40);
  func_0x0001072b0428();
  func_0x00010724bd50(&uStack_60);
  func_0x000107525958(&uStack_50,param_1,4);
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107249e44(unaff_x19 + 0xf20,&uStack_40);
  func_0x00010724bd50(&uStack_40);
  func_0x0001072b0428();
  return;
}



/* Entry: 1072a5d24; end: 1072a5e8b;  */

void FUN_1072a5d24(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072b02ac();
  lVar1 = unaff_x19[1];
  uVar2 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 2);
  return;
}



/* Entry: 1072a5e8c; end: 1072a6023;  */

undefined8 ** FUN_1072a5e8c(undefined8 **param_1)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  undefined1 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  ppuVar2 = param_1;
  func_0x0001072af7b0();
  ppuVar6 = ppuVar2 + 0x18a;
  uStack_48 = extraout_x8;
  func_0x00010789e8a0();
  ppuVar8 = param_1 + 0x5c;
  FUN_10724e330();
  uVar1 = (((uint)ppuVar8 ^ 0xffffffff) & 0x101) == 0;
  puVar5 = param_1[0x205];
  puVar7 = param_1[0x206];
  ppuStack_98 = ppuVar6;
  uStack_90 = uVar1;
  puStack_88 = puVar5;
  puStack_80 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  puVar9 = param_1[0x1db];
  puVar11 = param_1[0x1dc];
  puStack_78 = puVar9;
  puStack_70 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001072b0070();
  *(undefined1 *)(ppuVar8 + 2) = uStack_90;
  *ppuVar8 = &PTR_SUB_110999db8;
  ppuVar8[1] = ppuStack_98;
  ppuVar8[3] = puVar5;
  ppuVar8[4] = puVar7;
  puStack_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  ppuVar8[5] = puVar9;
  ppuVar8[6] = puVar11;
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  func_0x0001072b03e8();
  (*extraout_x8_00)();
  func_0x0001072aebc8(auStack_68);
  pppuVar3 = &ppuStack_98;
  FUN_1072a609c();
  ppuVar8 = (undefined8 **)param_1[0x200];
  ppuVar6 = (undefined8 **)param_1[0x201];
  puStack_a8 = ppuVar8;
  puStack_a0 = ppuVar6;
  if (ppuVar6 != (undefined8 **)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
    do {
      func_0x0001072af838();
    } while (extraout_w10_02 != 0);
  }
  ppuVar10 = (undefined8 **)param_1[0x1c3];
  ppuVar4 = (undefined8 **)param_1[0x1c4];
  puStack_c8 = ppuVar8;
  puStack_c0 = ppuVar6;
  puStack_b8 = ppuVar10;
  puStack_b0 = ppuVar4;
  if (ppuVar4 != (undefined8 **)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001072aff20();
  *pppuVar3 = (undefined8 **)&PTR_SUB_110999f28;
  pppuVar3[1] = ppuVar8;
  puStack_c8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  pppuVar3[2] = ppuVar6;
  pppuVar3[3] = ppuVar10;
  pppuVar3[4] = ppuVar4;
  puStack_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  func_0x0001072b03e8();
  (*extraout_x8_01)();
  func_0x0001072aebc8(auStack_68);
  func_0x0001072a60c4(&puStack_c8);
  ppuVar6 = &puStack_a8;
  func_0x0001072aebfc(ppuVar6);
  func_0x0001072af6ec(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001072afbb0();
    func_0x0001072a60c4();
    func_0x0001072aebfc(&puStack_a8);
    func_0x0001072afaac();
    func_0x0001072af85c();
    func_0x0001072aca00();
    return ppuVar2;
  }
  return ppuVar6;
}



/* Entry: 1072a6024; end: 1072a607f;  */

void FUN_1072a6024(void)

{
  func_0x0001072af85c();
  func_0x0001072aca00();
  return;
}



/* Entry: 1072a6080; end: 1072a609b;  */

void FUN_1072a6080(void)

{
  undefined1 uStack_11;
  
  FUN_1072ae190(&uStack_11);
  return;
}



/* Entry: 1072a609c; end: 1072a60e7;  */

void FUN_1072a609c(void)

{
  long unaff_x19;
  
  func_0x0001072b0630();
  FUN_1072ac824();
  FUN_1072ac890(unaff_x19 + 0x10);
  return;
}



/* Entry: 1072a60e8; end: 1072a60eb;  */

void FUN_1072a60e8(void)

{
  return;
}



/* Entry: 1072a60ec; end: 1072a6183;  */

void FUN_1072a60ec(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  undefined1 auStack_48 [40];
  
  func_0x0001072afc24();
  if (param_2 <= (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5)) {
    func_0x0001072afc30();
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar1 = puVar3 + param_2 * 4;
    for (lVar4 = param_2 << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = uVar5;
      puVar3 = puVar3 + 4;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
    return;
  }
  plVar2 = unaff_x19;
  FUN_1072a61b4();
  FUN_1072a6268(auStack_48,plVar2,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 3);
  FUN_1072a61f4(auStack_48);
  func_0x0001072afc08();
  FUN_1072a6228();
  func_0x0001072a6684(auStack_48);
  return;
}



/* Entry: 1072a6184; end: 1072a61b3;  */

void FUN_1072a6184(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2 + param_2 * 4;
  for (param_2 = param_2 << 5; param_2 != 0; param_2 = param_2 + -0x20) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = uVar3;
    puVar2 = puVar2 + 4;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1072a61b4; end: 1072a61f3;  */

long * FUN_1072a61b4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((ulong)param_2 >> 0x3b != 0) {
    FUN_1072a625c();
    puVar2 = (undefined8 *)param_1[2];
    puVar1 = puVar2 + (long)param_2 * 4;
    for (lVar4 = (long)param_2 << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
      uVar5 = *(undefined8 *)param_1[4];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = uVar5;
      puVar2 = puVar2 + 4;
    }
    param_1[2] = (long)puVar1;
    return param_1;
  }
  plVar3 = (long *)(param_1[2] - *param_1 >> 4);
  if (plVar3 <= param_2) {
    plVar3 = param_2;
  }
  if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
    plVar3 = (long *)0x7ffffffffffffff;
  }
  return plVar3;
}



/* Entry: 1072a61f4; end: 1072a6227;  */

void FUN_1072a61f4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar2 + param_2 * 4;
  for (param_2 = param_2 << 5; param_2 != 0; param_2 = param_2 + -0x20) {
    uVar3 = **(undefined8 **)(param_1 + 0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = uVar3;
    puVar2 = puVar2 + 4;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 1072a6228; end: 1072a625b;  */

void FUN_1072a6228(long *param_1)

{
  long extraout_x8;
  
  func_0x0001072afadc();
  FUN_1072a6304(param_1 + 3,*param_1,param_1[1],extraout_x8 + (*param_1 - param_1[1]));
  func_0x0001072af688();
  return;
}



/* Entry: 1072a625c; end: 1072a6267;  */

void FUN_1072a625c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af800();
  func_0x0001072afbc4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072a62a8();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 1072a6268; end: 1072a62c7;  */

void FUN_1072a6268(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001072afbc4();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072a62a8();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 1072a62c8; end: 1072a6303;  */

void FUN_1072a62c8(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = param_2 * 0x20;
  plVar1 = (long *)(*param_1 + 0x400000);
  if ((ulong)((long)plVar1 - *plVar1) < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar2);
    return;
  }
  *plVar1 = *plVar1 + uVar2;
  return;
}



/* Entry: 1072a6304; end: 1072a637f;  */

void FUN_1072a6304(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001072af73c();
  uStack_48 = 0;
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x20) {
    FUN_1072a63ac();
    lStack_38 = lStack_38 + 0x20;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  FUN_1072a6380();
  FUN_1072a661c(auStack_60);
  return;
}



/* Entry: 1072a6380; end: 1072a63ab;  */

void FUN_1072a6380(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b02c8();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x20) {
    FUN_1072a65f8();
  }
  return;
}



/* Entry: 1072a63ac; end: 1072a63d3;  */

void FUN_1072a63ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_3;
  uStack_28 = param_1;
  uStack_20 = param_2;
  uStack_18 = param_1;
  FUN_1072a63d4(&uStack_20,&uStack_30);
  return;
}



/* Entry: 1072a63d4; end: 1072a63e7;  */

void FUN_1072a63d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)param_2[1];
  FUN_1072a640c(*param_1,*param_2,&uStack_18);
  return;
}



/* Entry: 1072a63e8; end: 1072a640b;  */

void FUN_1072a63e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_3;
  FUN_1072a640c(param_1,param_2,&uStack_18);
  return;
}



/* Entry: 1072a640c; end: 1072a646f;  */

void FUN_1072a640c(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x0001072b0360();
  lVar1 = *param_3;
  *(long *)(param_1 + 0x18) = lVar1;
  if (param_2[3] == lVar1) {
    uVar2 = *param_2;
    unaff_x19[1] = param_2[1];
    *unaff_x19 = uVar2;
    unaff_x19[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_1072a6470();
  }
  return;
}



/* Entry: 1072a6470; end: 1072a64d3;  */

void FUN_1072a6470(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001002a9e3c();
    FUN_1072a64d4();
    func_0x0001072b0284(param_1);
    FUN_1072a6508();
  }
  func_0x0001072b01dc();
  FUN_1072a6560(&uStack_40);
  return;
}



/* Entry: 1072a64d4; end: 1072a6507;  */

void FUN_1072a64d4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *unaff_x19;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    func_0x0001072b0008();
    FUN_1072a6534();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + (long)param_2 * 8;
    return;
  }
  FUN_1072a6528();
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1072a6508; end: 1072a6527;  */

void FUN_1072a6508(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1072a6528; end: 1072a6533;  */

void FUN_1072a6528(void)

{
  func_0x0001072af800();
  FUN_1072a6554();
  return;
}



/* Entry: 1072a6534; end: 1072a6553;  */

void FUN_1072a6534(void)

{
  FUN_1072a6554();
  return;
}



/* Entry: 1072a6554; end: 1072a655f;  */

void FUN_1072a6554(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = param_2 * 8;
  plVar1 = (long *)(*param_1 + 0x400000);
  if ((ulong)((long)plVar1 - *plVar1) < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar2);
    return;
  }
  *plVar1 = *plVar1 + uVar2;
  return;
}



/* Entry: 1072a6560; end: 1072a6587;  */

void FUN_1072a6560(void)

{
  uint extraout_w8;
  
  func_0x0001072b040c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072a6588();
  }
  return;
}



/* Entry: 1072a6588; end: 1072a65f7;  */

void FUN_1072a6588(undefined8 *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  param_1[1] = puVar2;
  puVar1 = (ulong *)param_1[3] + 0x80000;
  if (puVar2 < (ulong *)param_1[3] || puVar1 < puVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return;
  }
  if (puVar2 + (param_1[2] - (long)puVar2 >> 3) != (ulong *)*puVar1) {
    return;
  }
  *puVar1 = (ulong)puVar2;
  return;
}



/* Entry: 1072a65f8; end: 1072a661b;  */

void FUN_1072a65f8(void)

{
  func_0x0001072af8f4();
  FUN_1072a6588();
  return;
}



/* Entry: 1072a661c; end: 1072a6647;  */

void FUN_1072a661c(void)

{
  uint extraout_w8;
  
  func_0x0001072b012c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072a6648();
  }
  return;
}



/* Entry: 1072a6648; end: 1072a6657;  */

void FUN_1072a6648(long param_1)

{
  long unaff_x19;
  
  func_0x0001072afc8c();
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    FUN_1072a65f8();
  }
  return;
}



/* Entry: 1072a6658; end: 1072a66bb;  */

void FUN_1072a6658(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    FUN_1072a65f8();
  }
  return;
}



/* Entry: 1072a66bc; end: 1072a66c3;  */

void FUN_1072a66bc(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    FUN_1072a65f8();
  }
  return;
}



/* Entry: 1072a66c4; end: 1072a66f3;  */

void FUN_1072a66c4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4();
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    FUN_1072a65f8();
  }
  return;
}



/* Entry: 1072a66f4; end: 1072a66ff;  */

void FUN_1072a66f4(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)*param_1 + 0x80000;
  if (param_2 < (ulong *)*param_1 || puVar1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  if (param_2 + param_3 * 4 != (ulong *)*puVar1) {
    return;
  }
  *puVar1 = (ulong)param_2;
  return;
}



/* Entry: 1072a6700; end: 1072a672f;  */

void FUN_1072a6700(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    FUN_1072a65f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a6730; end: 1072a673b;  */

void FUN_1072a6730(undefined8 *param_1)

{
  func_0x0001072af800();
  func_0x0001072afadc();
  func_0x0001072b0394(param_1 + 3,*param_1,param_1[1]);
  FUN_1072a67dc();
  func_0x0001072af688();
  return;
}



/* Entry: 1072a673c; end: 1072a6777;  */

void FUN_1072a673c(undefined8 *param_1)

{
  func_0x0001072afadc();
  func_0x0001072b0394(param_1 + 3,*param_1,param_1[1]);
  FUN_1072a67dc();
  func_0x0001072af688();
  return;
}



/* Entry: 1072a6778; end: 1072a67cb;  */

void FUN_1072a6778(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072afbc4();
  if (param_2 != 0) {
    func_0x0001072a67ac(param_4);
  }
  func_0x0001072af888(0x140);
  return;
}



/* Entry: 1072a67cc; end: 1072a67db;  */

void FUN_1072a67cc(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = param_2 * 0x140;
  plVar1 = (long *)(*param_1 + 0x400000);
  if ((ulong)((long)plVar1 - *plVar1) < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar2);
    return;
  }
  *plVar1 = *plVar1 + uVar2;
  return;
}



/* Entry: 1072a67dc; end: 1072a6843;  */

void FUN_1072a67dc(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x140) {
    func_0x0001072b03a0();
    func_0x0001072a6870();
    lStack_38 = lStack_38 + 0x140;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  func_0x0001072a6844();
  FUN_1072a6b80(auStack_60);
  return;
}



/* Entry: 1072a6844; end: 1072a693f;  */

void FUN_1072a6844(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b02c8();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x140) {
    FUN_1072a6ae4();
  }
  return;
}



/* Entry: 1072a6940; end: 1072a6967;  */

void FUN_1072a6940(long param_1)

{
  func_0x0001072b0648();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1072a6968();
  return;
}



/* Entry: 1072a6968; end: 1072a69bb;  */

void FUN_1072a6968(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 1072a69bc; end: 1072a69e7;  */

void FUN_1072a69bc(long param_1)

{
  func_0x0001072b0648();
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1072a69e8();
  return;
}



/* Entry: 1072a69e8; end: 1072a6a37;  */

void FUN_1072a69e8(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afc24();
  FUN_1072a6a38();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_110999088)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1072a6a38; end: 1072a6a7f;  */

void FUN_1072a6a38(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x0001072afe0c((&PTR_FUN_110999070)[*(uint *)(param_1 + 0x18)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1072a6a80; end: 1072a6ae3;  */

void FUN_1072a6a80(void)

{
  return;
}



/* Entry: 1072a6ae4; end: 1072a6b5f;  */

long FUN_1072a6ae4(long param_1)

{
  FUN_1072a6a38(param_1 + 0x120);
  FUN_107279298(param_1 + 0x108);
  FUN_1072a6b60(param_1 + 0xe8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa8);
  FUN_107283194(param_1 + 0x90);
  FUN_107283194(param_1 + 0x80);
  func_0x000104c2f714(param_1 + 0x40);
  func_0x000104c2f714(param_1 + 8);
  return param_1;
}



/* Entry: 1072a6b60; end: 1072a6b7f;  */

void FUN_1072a6b60(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10726b09c();
  }
  return;
}



/* Entry: 1072a6b80; end: 1072a6bab;  */

void FUN_1072a6b80(void)

{
  uint extraout_w8;
  
  func_0x0001072b012c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072a6bac();
  }
  return;
}



/* Entry: 1072a6bac; end: 1072a6bbb;  */

void FUN_1072a6bac(long param_1)

{
  long unaff_x19;
  
  func_0x0001072afc8c();
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x140;
    FUN_1072a6ae4();
  }
  return;
}



/* Entry: 1072a6bbc; end: 1072a6c23;  */

void FUN_1072a6bbc(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x140;
    FUN_1072a6ae4();
  }
  return;
}



/* Entry: 1072a6c24; end: 1072a6c2b;  */

void FUN_1072a6c24(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x140;
    FUN_1072a6ae4();
  }
  return;
}



/* Entry: 1072a6c2c; end: 1072a6c5b;  */

void FUN_1072a6c2c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4();
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x140;
    FUN_1072a6ae4();
  }
  return;
}



/* Entry: 1072a6c5c; end: 1072a6c6b;  */

void FUN_1072a6c5c(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)*param_1 + 0x80000;
  if (param_2 < (ulong *)*param_1 || puVar1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  if (param_2 + param_3 * 0x28 != (ulong *)*puVar1) {
    return;
  }
  *puVar1 = (ulong)param_2;
  return;
}



/* Entry: 1072a6c6c; end: 1072a6c93;  */

void FUN_1072a6c6c(long param_1)

{
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  return;
}



/* Entry: 1072a6c94; end: 1072a6cc7;  */

void FUN_1072a6c94(long param_1,ulong param_2,undefined8 *param_3)

{
  FUN_1072a6cc8(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x28) = *param_3;
  }
  return;
}



/* Entry: 1072a6cc8; end: 1072a6e73;  */

undefined1  [16]
FUN_1072a6cc8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_NG;
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x26;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x0001072b0014();
  func_0x0001002a9c14();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x26 = uVar7 & param_3;
      uVar1 = true;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar6) < 0;
      uVar1 = param_3 == uVar6;
      unaff_x26 = param_3;
      if (uVar6 <= param_3) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_3 / uVar6;
        }
        unaff_x26 = param_3 - uVar4 * uVar6;
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x26 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_1072a6d7c;
          func_0x0001002ab824();
          plVar5 = unaff_x21;
          if (!(bool)uVar1) break;
          plVar2 = unaff_x21 + 2;
          func_0x0001000e107c(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1072a6e5c;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar4 = extraout_x8 & uVar7;
        }
        else {
          uVar4 = extraout_x8;
          if (uVar6 <= extraout_x8) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = extraout_x8 / uVar6;
            }
            uVar4 = extraout_x8 - uVar4 * uVar6;
          }
        }
        in_NG = (long)(uVar4 - unaff_x26) < 0;
        uVar1 = 1;
      } while (uVar4 == unaff_x26);
    }
  }
LAB_1072a6d7c:
  func_0x0001002a9e2c();
  FUN_1072a6e74();
  func_0x0001002a9edc();
  if ((uVar6 == 0) || (func_0x0001002ab830(param_1,param_2,(float)uVar6), (bool)in_NG)) {
    func_0x0001002a9ef0(uVar6 << 1);
    FUN_1072a6f00();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x26 = uVar6 - 1 & param_3;
    }
    else {
      unaff_x26 = param_3;
      if (uVar6 <= param_3) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = param_3 / uVar6;
        }
        unaff_x26 = param_3 - uVar7 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x26 * 8) == 0) {
    func_0x0001002aa044();
    *(undefined8 *)(extraout_x8_00 + unaff_x26 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar7 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar4 * uVar6;
      }
      *(long **)(extraout_x8_00 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001002ab83c();
  }
  func_0x0001002aa05c();
  FUN_1072a7058();
  uVar3 = 1;
LAB_1072a6e5c:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 1072a6e74; end: 1072a6edb;  */

void FUN_1072a6e74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x0001072afe48();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  func_0x0001072b0284(param_2 + 2);
  FUN_1072a6edc();
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1072a6edc; end: 1072a6eff;  */

void FUN_1072a6edc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *param_3;
  return;
}



/* Entry: 1072a6f00; end: 1072a6f7b;  */

void FUN_1072a6f00(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x0001072b0120();
  if ((!(bool)in_ZR) && (func_0x0001072b00f0(), !(bool)in_ZR)) {
    func_0x0001072afe04();
  }
  func_0x0001072b0114();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_1072a6f38:
    func_0x0001072afc30();
    if (param_2 == 0) {
      FUN_1072a7028(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001072b01a8();
      FUN_1072a7040();
      func_0x0001072afef8();
      FUN_1072a7028();
      func_0x0001072afbe4();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001072afffc();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072af95c();
        func_0x0001072af948();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x0001072b0210();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x0001072b0250();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x0001072b022c();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x0001072af71c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x0001072af700();
    if (((bool)in_CY) && (func_0x0001072b0108(), extraout_x8 == 0)) {
      func_0x0001072af6cc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001072afafc();
    if (!(bool)in_CY) goto LAB_1072a6f38;
  }
  return;
}



/* Entry: 1072a6f7c; end: 1072a7027;  */

void FUN_1072a6f7c(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_1072a7028(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001072b01a8();
    FUN_1072a7040();
    func_0x0001072afef8();
    FUN_1072a7028();
    func_0x0001072afbe4();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001072afffc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072af95c();
      func_0x0001072af948();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001072b0210();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001072b0250();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x0001072b022c();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x0001072af71c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072a7028; end: 1072a703f;  */

void FUN_1072a7028(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a7040; end: 1072a7057;  */

void FUN_1072a7040(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072afd84();
  FUN_1072a7078();
  return;
}



/* Entry: 1072a7058; end: 1072a7077;  */

void FUN_1072a7058(void)

{
  func_0x0001072afd84();
  FUN_1072a7078();
  return;
}



/* Entry: 1072a7078; end: 1072a708f;  */

void FUN_1072a7078(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001072afcc4(param_1 + 1);
  if ((bool)in_ZR) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a7090; end: 1072a7123;  */

void FUN_1072a7090(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001072afcc4();
  if ((bool)in_ZR) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a7124; end: 1072a712b;  */

void FUN_1072a7124(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    FUN_1072a65f8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a712c; end: 1072a718b;  */

void FUN_1072a712c(void)

{
  func_0x0001072af8f4();
  func_0x0001072a7150();
  return;
}



/* Entry: 1072a718c; end: 1072a7193;  */

void FUN_1072a718c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    FUN_1072a6ae4();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a7194; end: 1072a71c3;  */

void FUN_1072a7194(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x140;
    FUN_1072a6ae4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a71c4; end: 1072a7287;  */

long FUN_1072a71c4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long *extraout_x8;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar8 = param_1 + 3, *plVar8 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar8 & uVar7);
      uVar2 = true;
    }
    else {
      uVar2 = plVar8 == plVar6;
      if (plVar6 <= plVar8) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        func_0x0001002ab824();
        if (!(bool)uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)extraout_x8 & uVar7);
      }
      else {
        plVar4 = extraout_x8;
        if (plVar6 <= extraout_x8) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)extraout_x8 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)extraout_x8 - uVar1 * (long)plVar6);
        }
      }
      uVar2 = 1;
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1072a7288; end: 1072a72b7;  */

undefined8 FUN_1072a7288(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1072a72b8(auStack_38);
  FUN_1072a7058(auStack_38);
  return uVar1;
}



/* Entry: 1072a72b8; end: 1072a73ab;  */

void FUN_1072a72b8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1072a736c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1072a736c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1072a736c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1072a73ac; end: 1072a73df;  */

void FUN_1072a73ac(long *param_1)

{
  long extraout_x8;
  
  func_0x0001072afadc();
  _memcpy(extraout_x8 - (param_1[1] - *param_1));
  func_0x0001072af688();
  return;
}



/* Entry: 1072a73e0; end: 1072a7417;  */

long * FUN_1072a73e0(long *param_1)

{
  long lVar1;
  
  FUN_1072a7418();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x0001072a65b0(param_1[4],lVar1,param_1[3] - lVar1 >> 3);
  }
  return param_1;
}



/* Entry: 1072a7418; end: 1072a743b;  */

void FUN_1072a7418(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1072a743c; end: 1072a747b;  */

undefined8 * FUN_1072a743c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001072afb28();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1072a747c();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 1072a747c; end: 1072a7503;  */

void FUN_1072a747c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001072af920();
  FUN_1072a7504();
  lVar1 = *unaff_x19;
  lVar2 = unaff_x19[1];
  plVar3 = unaff_x19 + 3;
  if (param_1 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    FUN_1072a6534();
  }
  *(undefined8 *)((long)plVar3 + (lVar2 - lVar1)) = *unaff_x20;
  func_0x0001072afc08();
  FUN_1072a73ac();
  func_0x0001072afeec();
  FUN_1072a73e0();
  return;
}



/* Entry: 1072a7504; end: 1072a7543;  */

ulong FUN_1072a7504(long *param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x19;
  ulong unaff_x20;
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x1fffffffffffffff;
    }
    return uVar1;
  }
  FUN_1072a6528();
  func_0x0001072b02bc();
  uVar1 = unaff_x20;
  FUN_1072a75c4();
  *(ulong *)(unaff_x19 + 8) = unaff_x20 + 0x140;
  return uVar1;
}



/* Entry: 1072a7544; end: 1072a756f;  */

void FUN_1072a7544(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072b02bc();
  FUN_1072a75c4();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x140;
  return;
}



/* Entry: 1072a7570; end: 1072a75c3;  */

undefined8 FUN_1072a7570(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001072af8a0();
  func_0x0001072af9c4();
  func_0x0001072b0284(uStack_48);
  FUN_1072a75c4();
  func_0x0001072b02f0();
  func_0x0001072afc08();
  FUN_1072a673c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001072afd68();
  return uVar1;
}



/* Entry: 1072a75c4; end: 1072a75eb;  */

void FUN_1072a75c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x0001072a689c();
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x128) = param_3[1];
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}



/* Entry: 1072a75ec; end: 1072a7633;  */

ulong FUN_1072a75ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  ulong unaff_x20;
  
  if (0xcccccccccccccc < param_2) {
    FUN_1072a6730();
    func_0x0001072b02bc();
    uVar2 = unaff_x20;
    FUN_1072a76b4();
    *(ulong *)(unaff_x19 + 8) = unaff_x20 + 0x140;
    return uVar2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x140;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x66666666666665 < uVar1) {
    uVar2 = 0xcccccccccccccc;
  }
  return uVar2;
}



/* Entry: 1072a7634; end: 1072a765f;  */

void FUN_1072a7634(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072b02bc();
  FUN_1072a76b4();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x140;
  return;
}



/* Entry: 1072a7660; end: 1072a76b3;  */

undefined8 FUN_1072a7660(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001072af8a0();
  func_0x0001072af9c4();
  func_0x0001072b0284(uStack_48);
  FUN_1072a76b4();
  func_0x0001072b02f0();
  func_0x0001072afc08();
  FUN_1072a673c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001072afd68();
  return uVar1;
}


