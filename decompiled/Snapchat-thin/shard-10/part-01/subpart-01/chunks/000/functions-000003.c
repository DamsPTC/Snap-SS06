/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107754eb0; end: 107754ef7;  */

undefined8 * FUN_107754eb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4988;
  func_0x0001072c9b9c(param_1 + 0x12);
  func_0x000104c2f714(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107755060; end: 107755097;  */

void FUN_107755060(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auStack_90 [16];
  
  func_0x00010775532c();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  func_0x0001074d4cd4();
  func_0x0001074d3e80();
  lVar6 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      func_0x00010726cac8(auStack_90,uVar1 + uVar9 * 0xa8);
      if (iVar4 != 0) {
        lVar6 = *unaff_x19 + uVar9;
        bVar10 = 0xa8;
        goto code_r0x0001074d2844;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  lVar6 = 0;
code_r0x0001074d2844:
  func_0x0001074d47a8(bVar10,lVar6);
  return;
}



/* Entry: 107755680; end: 107755c6b;  */

/* WARNING: Possible PIC construction at 0x000107755dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107755dcc) */
/* WARNING: Removing unreachable block (ram,0x000107755dec) */
/* WARNING: Removing unreachable block (ram,0x000107755e00) */
/* WARNING: Removing unreachable block (ram,0x000107755de0) */
/* WARNING: Removing unreachable block (ram,0x0001077563c8) */

long * FUN_107755680(long *param_1,long *param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar10;
  undefined8 uVar11;
  long *plStack_428;
  long *plStack_420;
  undefined1 *puStack_418;
  long *plStack_410;
  long *plStack_408;
  undefined8 **ppuStack_400;
  undefined *puStack_3f8;
  undefined1 auStack_3f0 [64];
  long *plStack_3b0;
  long *plStack_3a8;
  undefined1 **ppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long alStack_380 [3];
  undefined1 auStack_368 [64];
  undefined8 uStack_328;
  long lStack_320;
  long *plStack_318;
  undefined1 *puStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long alStack_2f0 [2];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [16];
  undefined1 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [16];
  undefined1 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  byte bStack_220;
  long alStack_218 [3];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [144];
  char cStack_128;
  undefined1 auStack_120 [56];
  byte bStack_e8;
  uint5 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_98;
  uint uStack_94;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  func_0x0001077562f4();
  plVar10 = param_2 + 1;
  plVar6 = plVar10;
  uStack_58 = extraout_x8;
  (**(code **)(*param_2 + 0x20))();
  uVar5 = (long)plVar6 - 5U == 0xfffffffffffffffd;
  if ((long)plVar6 - 5U < 0xfffffffffffffffe) {
    func_0x000107878fec(auStack_1b8,(long)plVar6 + -1);
    func_0x0001004c3cd0(alStack_218,&UNK_10f425834,auStack_1b8);
    func_0x00010756a668(param_3,alStack_218);
    plVar6 = alStack_218;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010775634c();
    func_0x0001077563e0();
    goto LAB_107755ab0;
  }
  func_0x0001077563d4();
  (*extraout_x9)(auStack_1b8,plVar10,1);
  auStack_248[0] = 0;
  uStack_238 = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  uStack_94 = uStack_94 & 0xffffff00;
  func_0x00010777067c(&lStack_230,param_3,auStack_1b8,1,param_4,auStack_248,&uStack_98);
  func_0x0001072c9854(auStack_248);
  func_0x0001072f5f6c(auStack_1b8);
  if ((bStack_220 & 1) == 0) {
LAB_107755814:
    func_0x0001077563e0();
  }
  else {
    uVar5 = (*(uint *)(lStack_230 + 0x18) & 0xfffffffe) == 6;
    if (!(bool)uVar5) {
      func_0x00010002b838(auStack_260,&UNK_10f42589a);
      func_0x00010756a668(param_3,auStack_260);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
      goto LAB_107755814;
    }
    auStack_120[0] = 0;
    bStack_e8 = 0;
    uVar5 = plVar6 == (long *)0x4;
    if ((bool)uVar5) {
      func_0x0001077563d4();
      func_0x000107756390(&uStack_98);
      (**(code **)(CONCAT44(uStack_94,uStack_98) + 0x68))(auStack_1b8,auStack_90);
      func_0x0001072e948c(auStack_120,auStack_1b8);
      func_0x00010724b3d8(auStack_1b8);
      func_0x0001077563a4();
      if ((bStack_e8 & 1) != 0) {
        func_0x00010724ef84(&uStack_98,auStack_120);
        uVar11 = 3;
        goto LAB_107755830;
      }
      func_0x0001077563d4();
      func_0x000107756390(&uStack_e0);
      func_0x00010754c3ec(&uStack_98,&uStack_e0);
      func_0x0001004c3cd0(auStack_1b8,&UNK_10f4258b8,&uStack_98);
      func_0x00010048a6c8(auStack_278,auStack_1b8,&UNK_10f417b93);
      func_0x00010756a69c(param_3,auStack_278,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
      func_0x00010775634c();
      func_0x00010775633c();
      func_0x0001072f5f6c(&uStack_e0);
      func_0x0001077563e0();
    }
    else {
      func_0x00010002b838(&uStack_98,&DAT_10f2f5ad9);
      uVar11 = 2;
LAB_107755830:
      func_0x0001000e3098(auStack_290,&uStack_98,1);
      FUN_107754984(auStack_1b8,param_4,auStack_290);
      func_0x0001000e30f4(auStack_290);
      func_0x00010775633c();
      func_0x0001077563d4();
      (*extraout_x9_00)(&uStack_98,plVar10,uVar11);
      uVar5 = cStack_128 == '\0';
      puVar1 = auStack_1b8;
      if ((bool)uVar5) {
        puVar1 = param_4;
      }
      auStack_2c8[0] = 0;
      uStack_2b8 = 0;
      uVar3 = (ulong)_uStack_e0 >> 0x28;
      uVar2 = (uint)_uStack_e0;
      uStack_e0 = (uint5)(uVar2 & 0xffffff00);
      _uStack_e0 = CONCAT35((int3)uVar3,uStack_e0);
      func_0x00010777067c(&lStack_2b0,param_3,&uStack_98,uVar11,puVar1,auStack_2c8,&uStack_e0);
      func_0x0001072c9854(auStack_2c8);
      func_0x0001077563a4();
      if ((bStack_2a0 & 1) == 0) {
        func_0x00010002b838(auStack_2e0,&UNK_10f4258f4);
        func_0x00010756a69c(param_3,auStack_2e0,uVar11);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e0);
        func_0x0001077563e0();
      }
      else {
        uVar5 = *(char *)(param_3 + 0x51) == '\x01';
        if ((bool)uVar5) {
          __Znwm(0xc0);
          func_0x000107756354();
          uVar11 = uStack_228;
          lVar4 = lStack_230;
          lStack_1f0 = lStack_230;
          uStack_1e8 = uStack_228;
          lStack_230 = 0;
          uStack_228 = 0;
          func_0x000107263b58(&uStack_e0,auStack_120);
          plVar10 = (long *)(param_3 + 0x18);
          uStack_2f8 = uStack_2a8;
          lStack_300 = lStack_2b0;
          lStack_2b0 = 0;
          uStack_2a8 = 0;
          lStack_1d0 = lVar4;
          uStack_1c8 = uVar11;
          lStack_1f0 = 0;
          uStack_1e8 = 0;
          func_0x0001072649c8(&uStack_98,&uStack_e0);
          uStack_1d8 = uStack_2f8;
          lStack_1e0 = lStack_300;
          uStack_200 = 0;
          uStack_1f8 = 0;
          func_0x000107755fa0(plVar10,&lStack_1d0,&uStack_98,&lStack_1e0);
          func_0x0001072c9b9c(&lStack_1e0);
          func_0x000107756344();
          func_0x000107756324();
          func_0x0001002a8234(param_3 + 0x40,param_4 + 0x40);
          func_0x0001072c9b9c(&uStack_200);
          func_0x00010724b3d8(&uStack_e0);
          func_0x0001072c9b9c(&lStack_1f0);
          *param_1 = (long)plVar10;
          param_1[1] = param_3;
          alStack_2f0[0] = 0;
          alStack_2f0[1] = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          plVar6 = alStack_2f0;
        }
        else {
          __Znwm(0xc0);
          func_0x000107756354();
          uStack_d8 = uStack_228;
          _uStack_e0 = lStack_230;
          lStack_230 = 0;
          uStack_228 = 0;
          func_0x000107263b58(&uStack_98,auStack_120);
          param_4 = (undefined1 *)(param_3 + 0x18);
          uStack_1c8 = uStack_2a8;
          lStack_1d0 = lStack_2b0;
          lStack_2b0 = 0;
          uStack_2a8 = 0;
          func_0x000107755fa0(param_4,&uStack_e0,&uStack_98,&lStack_1d0);
          func_0x000107756324();
          func_0x000107756344();
          func_0x0001072c9b9c(&uStack_e0);
          *param_1 = (long)param_4;
          param_1[1] = param_3;
          lStack_1e0 = 0;
          uStack_1d8 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          plVar6 = &lStack_1e0;
        }
        func_0x0001077560c8(plVar6);
      }
      func_0x0001072c95d0(&lStack_2b0);
      func_0x00010752b5b8(auStack_1b8);
    }
    func_0x00010724b3d8(auStack_120);
  }
  plVar6 = &lStack_230;
  func_0x0001072c95d0();
LAB_107755ab0:
  func_0x0001077562e0(uStack_58);
  if ((bool)uVar5) {
    return plVar6;
  }
  ___stack_chk_fail();
  FUN_107755f0c(plVar10);
  func_0x0001072c9b9c(&uStack_200);
  func_0x00010724b3d8(&uStack_e0);
  func_0x0001072c9b9c(&lStack_1f0);
  __ZNSt3__119__shared_weak_countD2Ev(param_3);
  __ZdlPv();
  func_0x0001072c95d0(&lStack_2b0);
  func_0x00010752b5b8(auStack_1b8);
  func_0x00010724b3d8(auStack_120);
  plVar7 = &lStack_230;
  func_0x0001072c95d0();
  func_0x000107756310();
  puStack_308 = &DAT_107755c6c;
  lStack_320 = param_3;
  plStack_318 = plVar6;
  puStack_310 = &stack0xfffffffffffffff0;
  func_0x0001077562f4();
  alStack_380[0] = 0;
  alStack_380[1] = 0;
  alStack_380[2] = 0;
  uStack_328 = extraout_x8_01;
  func_0x0001077563ac();
  func_0x0001074d2254(alStack_380,auStack_368);
  func_0x000104c2f714(auStack_368);
  func_0x0001077563ac();
  func_0x000107756378();
  func_0x00010775639c();
  uVar5 = (char)plVar7[0x12] == '\x01';
  if ((bool)uVar5) {
    plVar6 = plVar7 + 0xb;
    func_0x00010725ffc4(plVar6);
    func_0x0001077560f4(alStack_380,plVar6);
  }
  func_0x0001077563ac();
  func_0x000107756378();
  func_0x00010775639c();
  func_0x000107327958(&uStack_390,alStack_380);
  *extraout_x8_00 = 0;
  *(undefined8 *)(extraout_x8_00 + 4) = uStack_388;
  *(undefined8 *)(extraout_x8_00 + 2) = uStack_390;
  uStack_390 = 0;
  uStack_388 = 0;
  func_0x000104c33108(&uStack_390);
  plVar6 = alStack_380;
  func_0x000107269124();
  func_0x0001077562e0(uStack_328);
  if ((bool)uVar5) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010775639c();
  plVar8 = alStack_380;
  func_0x000107269124();
  func_0x000107756310();
  puStack_398 = &DAT_107755d8c;
  plVar9 = plVar8;
  plStack_3b0 = plVar7;
  plStack_3a8 = plVar6;
  ppuStack_3a0 = &puStack_310;
  func_0x0001077562f4();
  (**(code **)(*plVar9 + 0x40))(auStack_3f0);
  puStack_3f8 = &UNK_107755dcc;
  plStack_428 = (long *)0x0;
  plStack_420 = plVar10;
  puStack_418 = param_4;
  plStack_410 = plVar7;
  plStack_408 = plVar8;
  ppuStack_400 = &ppuStack_3a0;
  func_0x0001073f26dc(&plStack_428,auStack_3f0);
  func_0x00010756af98(&plStack_428,plVar8 + 9);
  func_0x000107756258(&plStack_428,plVar8 + 0xb);
  func_0x00010756af98(&plStack_428,plVar8 + 0x13);
  return plStack_428;
}



/* Entry: 107755f0c; end: 107755f53;  */

undefined8 * FUN_107755f0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4a60;
  func_0x0001072c9b9c(param_1 + 0x13);
  func_0x00010724b3d8(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10775616c; end: 107756207;  */

long FUN_10775616c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar1 = param_1;
  func_0x000107289660(param_1,(param_1[1] - *param_1 >> 6) + 1);
  func_0x000107289720(auStack_48,plVar1,param_1[1] - *param_1 >> 6,param_1 + 2);
  func_0x000107756208(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x40;
  func_0x0001072896a0(param_1,auStack_48);
  lVar2 = param_1[1];
  func_0x000107289820(auStack_48);
  return lVar2;
}



/* Entry: 107756cd0; end: 107756def;  */

long * FUN_107756cd0(undefined4 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long alStack_f0 [7];
  undefined8 uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [3];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x0001077570b8();
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  uStack_28 = extraout_x8;
  func_0x000107757164();
  func_0x0001074d2254(alStack_80,auStack_68);
  func_0x000104c2f714(auStack_68);
  func_0x000107757164();
  func_0x00010775713c();
  func_0x000107757154();
  uVar1 = *(char *)(param_2 + 0x90) == '\x01';
  if ((bool)uVar1) {
    lVar2 = param_2 + 0x58;
    func_0x00010725ffc4(lVar2);
    func_0x0001077560f4(alStack_80,lVar2);
  }
  func_0x000107757164();
  func_0x00010775713c();
  func_0x000107757154();
  func_0x000107327958(&uStack_90,alStack_80);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_88;
  *(undefined8 *)(param_1 + 2) = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000104c33108(&uStack_90);
  plVar3 = alStack_80;
  func_0x000107269124();
  func_0x000107757098(uStack_28);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107757154();
  plVar4 = alStack_80;
  func_0x000107269124();
  func_0x0001077570d4();
  plVar6 = alStack_f0;
  puStack_98 = &DAT_107756df0;
  plVar5 = plVar4;
  lStack_b0 = param_2;
  plStack_a8 = plVar3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001077570b8();
  uStack_b8 = extraout_x8_00;
  (**(code **)(*plVar5 + 0x40))(alStack_f0);
  func_0x000107755e04(alStack_f0,plVar4 + 9,plVar4 + 0xb,plVar4 + 0x13);
  func_0x00010775716c();
  func_0x000107757098(uStack_b8);
  if ((bool)uVar1) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010775716c();
  func_0x0001077570d4();
  *plVar6 = (long)&PTR_DAT_1109d4b38;
  func_0x0001072c9b9c(plVar6 + 0x13);
  func_0x00010724b3d8(plVar6 + 0xb);
  func_0x0001072c9b9c(plVar6 + 9);
  *plVar6 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar6 + 5);
  func_0x0001072c9884(plVar6 + 2);
  return plVar6;
}



/* Entry: 107756f50; end: 107756f63;  */

void FUN_107756f50(void)

{
  func_0x00010775705c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077572e0; end: 1077572e7;  */

void FUN_1077572e0(void)

{
  return;
}



/* Entry: 107757668; end: 1077576c3;  */

undefined8 * FUN_107757668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010756c464();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  return param_1;
}



/* Entry: 107757a08; end: 107757aa3;  */

/* WARNING: Possible PIC construction at 0x000107757a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107757f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107757a68) */
/* WARNING: Removing unreachable block (ram,0x000107757a90) */
/* WARNING: Removing unreachable block (ram,0x000107757a7c) */
/* WARNING: Removing unreachable block (ram,0x000107757f88) */

long * FUN_107757a08(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  code *extraout_x9;
  uint uVar13;
  undefined1 uStack_469;
  undefined1 auStack_468 [24];
  long alStack_450 [15];
  int iStack_3d8;
  long *aplStack_3d0 [15];
  int iStack_358;
  long *plStack_350;
  long *aplStack_348 [13];
  undefined1 auStack_2e0 [64];
  long lStack_2a0;
  undefined1 auStack_298 [104];
  long lStack_230;
  long *aplStack_228 [13];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [104];
  undefined1 auStack_150 [8];
  double adStack_148 [12];
  undefined4 uStack_e8;
  int iStack_d8;
  undefined8 uStack_d0;
  long alStack_58 [3];
  undefined8 *puStack_40;
  
  func_0x00010775931c();
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  *puVar5 = &PTR_DAT_1109d4d78;
  puVar5[1] = param_2;
  puVar5[2] = param_3;
  puVar5[3] = param_4;
  plVar4 = alStack_58;
  lVar12 = param_2;
  plVar9 = param_3;
  uVar11 = param_4;
  puStack_40 = puVar5;
  func_0x00010775931c();
  plVar6 = *(long **)(lVar12 + 0x58);
  uStack_d0 = extraout_x8;
  func_0x000107753050(aplStack_3d0,plVar6,plVar9,uVar11);
  uVar3 = iStack_358 == 1;
  if (!(bool)uVar3) {
    func_0x00010775943c(aplStack_3d0);
    goto code_r0x000107757be4;
  }
  plVar6 = *(long **)(param_2 + 0x48);
  plVar9 = param_3;
  func_0x000107753050(alStack_450,plVar6,param_3,param_4);
  uVar3 = iStack_3d8 == 1;
  if ((bool)uVar3) {
    plVar6 = param_3 + 0x21;
    plVar9 = (long *)(param_2 + 0x68);
    func_0x000107754e20();
    if ((int)plVar6 == 0) {
      plVar7 = param_3 + 0x21;
      plVar9 = (long *)(param_2 + 0xa0);
      func_0x000107754e20();
      plVar6 = plVar7;
      if ((int)plVar7 != 0) goto code_r0x000107757bd0;
      func_0x000107759400();
      if ((bool)uVar3) {
        func_0x0001077593a4();
        plVar6 = param_3 + 0x21;
        func_0x000107754e20();
        plVar9 = plVar7;
        if ((int)plVar6 != 0) goto code_r0x000107757bd0;
      }
      plVar6 = alStack_450;
      func_0x0001073405dc();
      iVar2 = (int)plVar6[0xd];
      if (iVar2 == 0) goto code_r0x000107757bd0;
      if (iVar2 != 1) {
        uVar3 = iVar2 == 2;
        if ((((!(bool)uVar3) && (uVar3 = iVar2 == 3, !(bool)uVar3)) &&
            (uVar3 = iVar2 == 4, !(bool)uVar3)) &&
           ((uVar3 = iVar2 == 5, !(bool)uVar3 && (uVar3 = iVar2 == 6, !(bool)uVar3)))) {
          if (iVar2 == 8) {
            lVar12 = *(long *)plVar6[1];
            lVar1 = ((long *)plVar6[1])[1];
            pplVar8 = aplStack_3d0;
            func_0x0001073405dc(pplVar8);
            func_0x0001077594c0();
            uVar13 = 0;
            for (; uVar3 = lVar12 == lVar1, !(bool)uVar3; lVar12 = lVar12 + 0x70) {
              plVar6 = param_3 + 0x21;
              func_0x0001072ba99c(plVar6);
              plVar9 = plVar6;
              func_0x0001072baf4c();
              func_0x0001072955a4(plVar9 + 1,lVar12 + 8);
              plVar9 = plVar6;
              func_0x0001072baf4c(plVar6,param_2 + 0x68);
              func_0x000107759498();
              func_0x000107759400();
              if ((bool)uVar3) {
                adStack_148[0] = (double)uVar13;
                uStack_e8 = 2;
                func_0x0001077593a4();
                func_0x0001072baf4c(plVar6,plVar9);
                func_0x00010726cda0(plVar6 + 1,adStack_148);
                func_0x00010726af18(adStack_148);
              }
              func_0x00010775946c();
              if (iStack_d8 == 1) {
                puVar10 = auStack_150;
                func_0x0001073405dc(puVar10);
                func_0x0001072786d8(aplStack_228,puVar10 + 8);
              }
              else {
                func_0x0001077594d8(*(undefined8 *)(param_2 + 0x118));
                (*extraout_x9)(auStack_2e0);
                func_0x0001077765a4(auStack_1c0,auStack_2e0,&uStack_469);
                func_0x000107776500(auStack_468,auStack_1c0);
                func_0x000107759418();
                func_0x000104c3323c(auStack_2e0);
                func_0x0001072786d8(aplStack_228,aplStack_348);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_468);
              }
              uVar13 = uVar13 + 1;
              func_0x00010775939c(auStack_150);
              func_0x00010775940c();
              pplVar8 = aplStack_228;
              func_0x00010726af18();
            }
            func_0x0001077593d8(&lStack_2a0);
            func_0x0001077594b8();
            func_0x000107759484();
            func_0x000107759478();
            func_0x000107759400();
            if ((bool)uVar3) {
              func_0x0001077593a4();
              func_0x0001077551c8(param_3 + 0x21,pplVar8);
            }
            plVar9 = &lStack_2a0;
          }
          else {
            uVar3 = iVar2 == 7;
            if ((bool)uVar3) goto code_r0x000107757bd0;
            plVar6 = plVar6 + 1;
            func_0x000107348ee8();
            pplVar8 = aplStack_3d0;
            func_0x0001073405dc(pplVar8);
            func_0x0001077594c0();
            plStack_350 = plVar6;
            while (aplStack_348[0] = plVar9, plStack_350 != (long *)0x0) {
              plVar6 = param_3 + 0x21;
              func_0x0001072ba99c(plVar6);
              plVar7 = plVar6;
              func_0x0001072baf4c();
              func_0x0001072955a4(plVar7 + 1,plVar9 + 8);
              func_0x0001072baf4c(plVar6,param_2 + 0x68);
              func_0x000107759498();
              func_0x000107759400();
              if ((bool)uVar3) {
                puVar10 = auStack_150;
                func_0x0001072ddd58(puVar10,plVar9);
                func_0x0001077593a4();
                func_0x0001072baf4c(plVar6,puVar10);
                func_0x00010726cda0(plVar6 + 1,adStack_148);
                func_0x00010726af18(adStack_148);
              }
              func_0x00010775946c();
              uVar3 = iStack_d8 == 1;
              puVar10 = auStack_298;
              if ((bool)uVar3) {
                puVar10 = auStack_150;
                func_0x0001073405dc(puVar10,auStack_298);
                puVar10 = puVar10 + 8;
              }
              func_0x0001072786d8(auStack_1b8,puVar10);
              func_0x00010727f7f8(adStack_148);
              func_0x00010775940c();
              func_0x00010726af18(auStack_1b8);
              pplVar8 = &plStack_350;
              func_0x0001072963cc(pplVar8);
              plVar9 = aplStack_348[0];
            }
            func_0x0001077593d8(&lStack_230);
            func_0x0001077594b8();
            func_0x000107759484();
            func_0x000107759478();
            func_0x000107759400();
            if ((bool)uVar3) {
              func_0x0001077593a4();
              func_0x0001077551c8(param_3 + 0x21,pplVar8);
            }
            plVar9 = &lStack_230;
          }
          func_0x0001074b0ce4(param_1);
          func_0x00010726af18();
          plVar6 = plVar4;
          goto code_r0x000107757bdc;
        }
        goto code_r0x000107757bd0;
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      uVar3 = 1;
    }
    else {
code_r0x000107757bd0:
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  else {
    func_0x00010775943c(alStack_450);
  }
code_r0x000107757bdc:
  func_0x00010775939c(alStack_450);
code_r0x000107757be4:
  func_0x00010775939c(aplStack_3d0);
  func_0x000107759308(uStack_d0);
  if ((bool)uVar3) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x0001077594b8();
  func_0x00010775939c(alStack_450);
  func_0x00010775939c(aplStack_3d0);
  func_0x000107759334();
  plVar4 = (long *)plVar9[3];
  if (plVar4 == (long *)0x0) {
    func_0x000104bfeb48(0,plVar6[9]);
    plVar6 = (long *)plVar4[3];
    if (plVar6 == plVar4) {
      lVar12 = 0x20;
    }
    else {
      if (plVar6 == (long *)0x0) {
        return plVar4;
      }
      lVar12 = 0x28;
    }
    (**(code **)(*plVar6 + lVar12))();
    return plVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))();
  return plVar4;
}



/* Entry: 107758d58; end: 107758d5b;  */

undefined8 * FUN_107758d58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4cf0;
  func_0x0001072c9b9c(param_1 + 0x23);
  func_0x00010724b3d8(param_1 + 0x1b);
  func_0x000104c2f714(param_1 + 0x14);
  func_0x000104c2f714(param_1 + 0xd);
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107758f04; end: 107758f3b;  */

long FUN_107758f04(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d4de8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107759108; end: 10775912f;  */

long FUN_107759108(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107759308; end: 107759543;  */

void FUN_107759308(void)

{
  return;
}



/* Entry: 10775afa8; end: 10775afb7;  */

long FUN_10775afa8(long param_1)

{
  func_0x000100060934(param_1,"format");
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 10775bfa8; end: 10775bfc3;  */

void FUN_10775bfa8(long param_1)

{
  func_0x0001072f6ad4();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10775c4a8; end: 10775c5b7;  */

undefined1 FUN_10775c4a8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_2[1] - *param_2 == param_1[1] - *param_1) {
    uVar4 = 0;
    do {
      if ((ulong)((param_1[1] - *param_1) / 0x120) <= uVar4) {
        return 1;
      }
      plVar1 = param_1;
      func_0x00010775c5b8(param_1,uVar4);
      plVar2 = param_2;
      func_0x00010775c5b8(param_2,uVar4);
      plVar3 = plVar1;
      func_0x000107262f24(plVar1,plVar2);
      if (((ulong)plVar3 & 1) != 0) {
        return 0;
      }
      plVar3 = plVar1 + 7;
      func_0x00010775c5e8(plVar3,plVar2 + 7);
      if (((ulong)plVar3 & 1) != 0) {
        return 0;
      }
      plVar3 = plVar1 + 0x14;
      func_0x00010775c620(plVar3,plVar2 + 0x14);
      if (((ulong)plVar3 & 1) != 0) {
        return 0;
      }
      plVar3 = plVar1 + 0x16;
      func_0x00010775c650(plVar3,plVar2 + 0x16);
      if (((ulong)plVar3 & 1) != 0) {
        return 0;
      }
      plVar3 = plVar1 + 0x19;
      func_0x00010775c66c(plVar3,plVar2 + 0x19);
      if (((ulong)plVar3 & 1) != 0) {
        return 0;
      }
      plVar3 = plVar1 + 0x1f;
      func_0x00010775c66c(plVar3,plVar2 + 0x1f);
      if (((ulong)plVar3 & 1) != 0) {
        return 0;
      }
      plVar1 = plVar1 + 0x22;
      func_0x00010775c620(plVar1,plVar2 + 0x22);
      uVar4 = uVar4 + 1;
    } while ((int)plVar1 == 0);
  }
  return 0;
}



/* Entry: 10775dcec; end: 10775de6b;  */

undefined8 FUN_10775dcec(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  lVar1 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x120) {
    func_0x0001073f26dc(&uStack_48,lVar4);
    if (*(char *)(lVar4 + 0x98) == '\x01') {
      func_0x00010775e058(&uStack_48,lVar4 + 0x38);
    }
    if (*(char *)(lVar4 + 0xa8) == '\x01') {
      func_0x00010727ac44(lVar4 + 0xa0);
      func_0x00010775e4bc();
    }
    if (*(char *)(lVar4 + 0xc0) == '\x01') {
      lVar2 = (*(long **)(lVar4 + 0xb0))[1];
      for (lVar5 = **(long **)(lVar4 + 0xb0); lVar5 != lVar2; lVar5 = lVar5 + 0x38) {
        func_0x0001073f26dc(&uStack_48,lVar5);
      }
    }
    if (*(char *)(lVar4 + 0xd8) == '\x01') {
      func_0x000107506760(lVar4 + 200);
      func_0x00010775e5cc();
    }
    if (*(char *)(lVar4 + 0xe8) == '\x01') {
      func_0x00010727ac44(lVar4 + 0xe0);
      func_0x00010775e4bc();
    }
    if (*(char *)(lVar4 + 0xf1) == '\x01') {
      func_0x00010775e36c(*(undefined1 *)(lVar4 + 0xf0));
    }
    if (*(char *)(lVar4 + 0xf3) == '\x01') {
      func_0x00010775e36c(*(undefined1 *)(lVar4 + 0xf2));
    }
    if (*(char *)(lVar4 + 0xf5) == '\x01') {
      func_0x00010775e36c(*(undefined1 *)(lVar4 + 0xf4));
    }
    if (*(char *)(lVar4 + 0xf7) == '\x01') {
      puVar3 = (undefined1 *)(lVar4 + 0xf6);
      func_0x00010775e0a8();
      func_0x00010775e36c(*puVar3);
    }
    if (*(char *)(lVar4 + 0x108) == '\x01') {
      func_0x000107506760(lVar4 + 0xf8);
      func_0x00010775e5cc();
    }
    if (*(char *)(lVar4 + 0x118) == '\x01') {
      func_0x00010727ac44(lVar4 + 0x110);
      func_0x00010775e4bc();
    }
  }
  return uStack_48;
}



/* Entry: 10775e0c0; end: 10775e187;  */

void FUN_10775e0c0(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x00010775e57c();
  func_0x00010775e358();
  func_0x00010775e2f8();
  while( true ) {
    func_0x00010775e3ac();
    while (unaff_x28 != 0) {
      func_0x00010775e388();
      func_0x00010731e83c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010775e63c();
    }
    func_0x00010775e49c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010775e630();
  }
  func_0x00010775e3ec();
  func_0x00010775e660();
  return;
}



/* Entry: 10775e75c; end: 10775e8d3;  */

/* WARNING: Possible PIC construction at 0x00010775e8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775e8f4) */

long * FUN_10775e75c(long param_1,undefined1 *param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  long *plVar6;
  undefined1 auStack_148 [8];
  long alStack_140 [15];
  undefined1 auStack_c8 [8];
  long alStack_c0 [14];
  int iStack_50;
  undefined8 uStack_48;
  
  puVar3 = param_2;
  plVar6 = param_3;
  func_0x00010775ef30();
  plVar4 = *(long **)(puVar3 + 0x48);
  uStack_48 = extraout_x8;
  func_0x000107753050(auStack_c8);
  if (iStack_50 == 0) goto LAB_10775e810;
  puVar3 = auStack_c8;
  func_0x0001073405dc();
  iVar2 = *(int *)(puVar3 + 0x68);
  in_ZR = iVar2 == 7;
  switch(iVar2) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
    break;
  case 2:
    in_ZR = *(double *)(puVar3 + 8) == 0.0;
    if (!(bool)in_ZR) goto LAB_10775e87c;
    break;
  case 3:
    puVar3 = puVar3 + 8;
    func_0x000104c2d614();
    goto code_r0x00010775e844;
  case 7:
    puVar3 = puVar3 + 8;
    func_0x000104c2d614();
code_r0x00010775e844:
    if (((ulong)puVar3 & 1) != 0) break;
    goto LAB_10775e87c;
  default:
    plVar6 = *(long **)(puVar3 + 8);
    in_ZR = iVar2 == 8;
    if ((bool)in_ZR) {
      in_ZR = *plVar6 == plVar6[1];
      if ((bool)in_ZR) break;
    }
    else if (plVar6[3] == 0) break;
    goto LAB_10775e87c;
  }
  puVar1 = (undefined8 *)(param_2 + 0x58);
  param_2 = auStack_148;
  func_0x000107753050(auStack_148,*puVar1,param_3,param_4);
  plVar6 = alStack_140;
  func_0x000107570284(alStack_c0);
  plVar4 = alStack_140;
  func_0x00010727f7f8();
  if (iStack_50 == 0) {
LAB_10775e810:
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  else {
LAB_10775e87c:
    plVar6 = alStack_c0;
    plVar4 = (long *)(param_1 + 8);
    func_0x00010756c040();
  }
  func_0x00010775ef40();
  func_0x00010775ef04(uStack_48);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  param_2 = param_2 + 8;
  func_0x00010727f7f8();
  func_0x00010775ef40();
  func_0x00010775ef18();
  plVar6 = (long *)plVar6[3];
  if (plVar6 == (long *)0x0) {
    func_0x000104bfeb48(0,*(undefined8 *)(param_2 + 0x48));
    plVar4 = (long *)plVar6[3];
    if (plVar4 == plVar6) {
      lVar5 = 0x20;
    }
    else {
      if (plVar4 == (long *)0x0) {
        return plVar6;
      }
      lVar5 = 0x28;
    }
    (**(code **)(*plVar4 + lVar5))();
    return plVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x30))();
  return plVar6;
}



/* Entry: 10775ed88; end: 10775edc7;  */

undefined8 * FUN_10775ed88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4fb0;
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10775ef4c; end: 10775efa3;  */

long FUN_10775ef4c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc();
  *(undefined1 *)(lVar1 + 0x38) = param_3;
  func_0x00010028af84(lVar1 + 0x40,param_4);
  return param_1;
}



/* Entry: 10775f5b0; end: 10775f647;  */

void FUN_10775f5b0(void)

{
  return;
}



/* Entry: 10775fc1c; end: 10775fc2b;  */

long FUN_10775fc1c(long param_1)

{
  func_0x000100060934(param_1,"image");
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107760210; end: 10776022f;  */

void FUN_107760210(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5110;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776063c; end: 107760763;  */

undefined1 * FUN_10776063c(undefined1 *param_1,char *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_288 [240];
  ulong uStack_198;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_88 [96];
  undefined8 uStack_28;
  
  puVar3 = param_1;
  func_0x000107760a0c();
  uVar1 = *(int *)(param_2 + 0x68) == 3;
  if ((bool)uVar1) {
    func_0x00010732393c();
    uVar2 = 0;
    func_0x000104c2fe00();
    func_0x000107760b5c();
    if ((uVar2 & 1) == 0) {
      func_0x000107760b68();
      func_0x000107760b20();
      func_0x000107760a9c();
      func_0x000107760b00();
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    puVar3 = auStack_88;
    func_0x000104c2f714(puVar3);
  }
  else {
    uVar1 = *(int *)(param_2 + 0x68) == 7;
    if ((bool)uVar1) {
      FUN_1075b94a8(param_2);
      func_0x000107278acc(auStack_88,param_2);
      param_2 = "";
      puVar3 = auStack_88;
      func_0x000107278484();
      if (((int)puVar3 == 0) && (func_0x000107760b5c(), ((ulong)puVar3 & 1) == 0)) {
        func_0x000107760b68();
        func_0x000107760b20();
        func_0x000107760a9c();
        func_0x000107760b00();
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
      puVar3 = auStack_88;
      func_0x00010726b164(puVar3);
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  func_0x0001077609c8(uStack_28);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107760ae4();
  puVar3 = auStack_88;
  func_0x00010726b164(puVar3);
  func_0x000107760a74();
  puStack_d8 = &UNK_107760764;
  uStack_f0 = param_3;
  puStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000107760a0c();
  uVar1 = param_2[400] == '\x01';
  if ((bool)uVar1) {
    func_0x00010756ec34(param_2);
    func_0x000107751334(auStack_288,param_2);
    if ((uStack_198 == 0) || (func_0x0001073e0a58(uStack_198,puVar3), (uStack_198 & 1) == 0)) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = (undefined1 *)0x1;
    }
    func_0x000107267da8(auStack_288);
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  func_0x0001077609c8(uStack_f8);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = auStack_288;
  func_0x000107267da8(puVar3);
  func_0x000107760a74();
  return puVar3;
}



/* Entry: 10776092c; end: 107760953;  */

void FUN_10776092c(void)

{
  func_0x000107760ac4();
  func_0x000107760a54(&PTR_DAT_1109d5290);
  return;
}



/* Entry: 107761204; end: 107761237;  */

/* WARNING: Possible PIC construction at 0x000107761220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107761224) */

long * FUN_107761204(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x48));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 1077618b8; end: 1077618df;  */

undefined1  [16]
FUN_1077618b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [16];
  
  func_0x00010732f3ac(auStack_28,param_1,param_4);
  return auStack_28;
}



/* Entry: 107761c64; end: 10776229f;  */

void FUN_107761c64(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  undefined8 *unaff_x19;
  long *plVar13;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  long lStack_200;
  undefined8 uStack_1f8;
  byte bStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [8];
  undefined4 uStack_1c0;
  undefined1 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [16];
  undefined1 uStack_170;
  undefined1 auStack_168 [24];
  ulong uStack_150;
  undefined8 uStack_148;
  byte bStack_140;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  char cStack_f8;
  byte bStack_d0;
  undefined1 auStack_c8 [4];
  undefined1 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined1 auStack_88 [56];
  
  plVar7 = param_1;
  func_0x0001077623b4();
  plVar13 = plVar7 + 1;
  plVar8 = plVar13;
  (**(code **)(*plVar7 + 0x20))();
  uVar5 = (long)plVar8 - 5U == 0xfffffffffffffffd;
  if ((long)plVar8 - 5U < 0xfffffffffffffffe) {
    func_0x00010002b838(auStack_168,&UNK_10f426169);
    func_0x000107762394();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 2) = 0;
  }
  else {
    auStack_180[0] = 0;
    uStack_170 = 0;
    func_0x0001077623dc(auStack_108);
    uVar5 = cStack_f8 == '\x01';
    if ((bool)uVar5) {
      iVar6 = (int)&uStack_90;
      func_0x0001077623dc();
      uStack_c0 = 6;
      func_0x0001074d1ed0();
      func_0x0001072c9884(auStack_c8);
      func_0x0001072c9854(&uStack_90);
      func_0x0001072c9854(auStack_108);
      if (iVar6 != 0) {
        func_0x0001077623dc();
        func_0x00010756bb10(auStack_180,auStack_108);
        goto LAB_107761d48;
      }
    }
    else {
LAB_107761d48:
      func_0x0001072c9854();
    }
    (**(code **)(*param_1 + 0x28))(&uStack_90,plVar13,1);
    (**(code **)(CONCAT26(uStack_8a,CONCAT24(uStack_8c,uStack_90)) + 0x68))(auStack_108,auStack_88);
    func_0x0001077623d4();
    if ((bStack_d0 & 1) == 0) {
      func_0x00010002b838(auStack_198,&UNK_10f426191);
      func_0x000107762394();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
      *(undefined1 *)unaff_x19 = 0;
      *(undefined1 *)(unaff_x19 + 2) = 0;
    }
    else {
      uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
      bStack_1a0 = 0;
      uVar5 = plVar8 == (long *)0x4;
      if ((bool)uVar5) {
        (**(code **)(*param_1 + 0x28))(auStack_c8,plVar13,2);
        uStack_1c0 = 2;
        uStack_1b8 = 1;
        uVar2 = uStack_150 >> 0x28;
        uVar1 = (uint)uStack_150;
        uStack_150._0_5_ = (uint5)(uVar1 & 0xffffff00);
        uStack_150 = CONCAT35((int3)uVar2,(uint5)uStack_150);
        func_0x00010777067c(&uStack_90,param_2,auStack_c8,2,param_3,auStack_1c8,&uStack_150);
        func_0x0001075530c4(&uStack_1b0,&uStack_90);
        func_0x0001072c95d0(&uStack_90);
        func_0x0001072c9854(auStack_1c8);
        func_0x0001072f5f6c(auStack_c8);
        if ((bStack_1a0 & 1) != 0) goto LAB_107761e14;
        func_0x00010002b838(auStack_1e0,&UNK_10f4261bb);
        func_0x000107762394();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
        *(undefined1 *)unaff_x19 = 0;
        *(undefined1 *)(unaff_x19 + 2) = 0;
      }
      else {
LAB_107761e14:
        (**(code **)(*param_1 + 0x28))(&uStack_90,plVar13,(long)plVar8 + -1);
        func_0x00010756f360(auStack_218,auStack_180);
        auStack_c8[0] = 0;
        uStack_c4 = 0;
        func_0x00010777067c(&lStack_200,param_2,&uStack_90,(long)plVar8 + -1,param_3,auStack_218,
                            auStack_c8);
        puVar9 = auStack_218;
        func_0x0001072c9854();
        func_0x0001077623d4();
        if ((bStack_1f0 & 1) == 0) {
          func_0x00010002b838(auStack_230,&UNK_10f4261fd);
          func_0x000107762394();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
          uVar12 = 0;
          *(undefined1 *)unaff_x19 = 0;
        }
        else {
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          if ((bStack_d0 & 1) == 0) goto LAB_107762108;
          puVar10 = (undefined8 *)0x190;
          __Znwm();
          lVar3 = lStack_200;
          uStack_128 = uStack_1f8;
          lStack_130 = lStack_200;
          lStack_200 = 0;
          uStack_1f8 = 0;
          uStack_150 = uStack_150 & 0xffffffffffffff00;
          bStack_140 = 0;
          if (bStack_1a0 == 1) {
            uStack_148 = uStack_1a8;
            uStack_150 = uStack_1b0;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            bStack_140 = bStack_1a0;
          }
          func_0x0001072c9ff4(auStack_118,lVar3 + 0x10);
          uStack_90 = *(undefined4 *)(lVar3 + 0x20);
          uStack_8c = *(undefined2 *)(lVar3 + 0x24);
          func_0x0001072c9f9c(puVar10,0x19,auStack_118,&uStack_90);
          func_0x0001072c9884(auStack_118);
          *puVar10 = &PTR_DAT_1109d53e8;
          puVar10[10] = uStack_128;
          puVar10[9] = lStack_130;
          lStack_130 = 0;
          uStack_128 = 0;
          *(undefined1 *)(puVar10 + 0xb) = 0;
          *(undefined1 *)(puVar10 + 0xd) = 0;
          uVar5 = bStack_140 == 1;
          if ((bool)uVar5) {
            puVar10[0xc] = uStack_148;
            puVar10[0xb] = uStack_150;
            uStack_150 = 0;
            uStack_148 = 0;
            *(undefined1 *)(puVar10 + 0xd) = 1;
          }
          func_0x0001077623cc(puVar10 + 0xe);
          *(undefined4 *)(puVar10 + 0x16) = 0x83;
          puVar10[0x15] = puVar9 + 8;
          *(undefined4 *)(puVar10 + 0x19) = 0;
          puVar10[0x1c] = 0;
          puVar10[0x1d] = 0;
          puVar10[0x1a] = &PTR_DAT_110996720;
          puVar10[0x1b] = 0;
          *(undefined4 *)(puVar10 + 0x1e) = 0x83;
          *(undefined4 *)(puVar10 + 0x1f) = 0;
          *(undefined1 *)((long)puVar10 + 0xfc) = 1;
          puVar10[0x21] = 0;
          puVar10[0x22] = 0;
          puVar10[0x20] = 0;
          *(undefined4 *)(puVar10 + 0x24) = 0x84;
          *(undefined4 *)(puVar10 + 0x27) = 0;
          puVar10[0x2a] = 0;
          puVar10[0x2b] = 0;
          puVar10[0x28] = &PTR_DAT_110996720;
          puVar10[0x29] = 0;
          *(undefined4 *)(puVar10 + 0x2c) = 0x84;
          *(undefined4 *)(puVar10 + 0x2d) = 0;
          *(undefined1 *)((long)puVar10 + 0x16c) = 1;
          puVar10[0x2e] = 0;
          puVar10[0x2f] = 0;
          puVar10[0x30] = 0;
          func_0x0001077623cc(&uStack_90);
          func_0x000107371bc4(puVar10 + 0x16,&DAT_10f68f148,&uStack_90);
          func_0x000104c2f714(&uStack_90);
          func_0x0001077623cc(auStack_c8);
          func_0x000107371bc4(puVar10 + 0x24,&DAT_10f68f148,auStack_c8);
          func_0x000104c2f714(auStack_c8);
          func_0x0001072c95d0(&uStack_150);
          func_0x0001072c9b9c(&lStack_130);
          *unaff_x19 = puVar10;
          puVar11 = (undefined8 *)0x20;
          __Znwm();
          *puVar11 = &PTR_DAT_1109d5470;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = puVar10;
          unaff_x19[1] = puVar11;
          uVar12 = 1;
        }
        *(undefined1 *)(unaff_x19 + 2) = uVar12;
        func_0x0001072c95d0(&lStack_200);
      }
      func_0x0001072c95d0(&uStack_1b0);
    }
    func_0x00010724b3d8(auStack_108);
    func_0x0001072c9854(auStack_180);
  }
  func_0x00010776239c();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_107762108:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x107762110);
  (*pcVar4)();
}



/* Entry: 10776233c; end: 107762393;  */

undefined8 * FUN_10776233c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d53e8;
  func_0x000107262330(param_1 + 0x24);
  func_0x000107262330(param_1 + 0x16);
  func_0x000104c2f714(param_1 + 0xe);
  func_0x0001072c95d0(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107763b2c; end: 107763bdf;  */

void FUN_107763b2c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = *(long **)(param_2 + 0x90);
  while (plVar2 != (long *)(param_2 + 0x98)) {
    (**(code **)(*(long *)plVar2[5] + 0x20))(&lStack_58);
    lVar1 = lStack_50;
    for (lVar3 = lStack_58; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
      func_0x00010756c12c(param_1,lVar3);
    }
    plVar2 = &lStack_58;
    func_0x00010756c400();
    func_0x000107765ec0();
  }
  return;
}



/* Entry: 1077642f8; end: 1077643a3;  */

bool FUN_1077642f8(undefined8 param_1,double *param_2,double *param_3)

{
  return *param_2 == *param_3;
}



/* Entry: 107764890; end: 1077648bf;  */

void FUN_107764890(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &uStack_18;
  uStack_28 = param_3;
  uStack_18 = param_1;
  func_0x000107764928(param_2 + 0x48,&uStack_28);
  return;
}



/* Entry: 107764a30; end: 107764a77;  */

void FUN_107764a30(undefined8 param_1,long param_2)

{
  if (param_2 < 0) {
    for (; param_2 != 0; param_2 = param_2 + 1) {
      func_0x000107764900(param_1);
    }
  }
  else {
    while (0 < param_2) {
      func_0x0001077643a4(param_1);
      param_2 = param_2 + -1;
    }
  }
  return;
}



/* Entry: 107764b3c; end: 107764b6b;  */

void FUN_107764b3c(int param_1)

{
  undefined1 extraout_w8;
  undefined1 uVar1;
  undefined1 *unaff_x19;
  
  func_0x000107765c34();
  if (param_1 == 0) {
    uVar1 = 0;
    *unaff_x19 = 0;
  }
  else {
    func_0x000107765ed8();
    uVar1 = extraout_w8;
  }
  unaff_x19[0x38] = uVar1;
  return;
}



/* Entry: 107765084; end: 10776508f;  */

void FUN_107765084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107765d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077657ac; end: 1077657bf;  */

void FUN_1077657ac(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107765870; end: 1077658ab;  */

long FUN_107765870(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001077658ac();
    lVar2 = uVar1 + 0x40;
  }
  else {
    lVar2 = param_1;
    func_0x0001077658e0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x40;
}



/* Entry: 107766098; end: 1077661c3;  */

long * FUN_107766098(long *param_1,long *param_2)

{
  int iVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar8;
  long alStack_1f0 [2];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  long lStack_198;
  long alStack_190 [14];
  int iStack_120;
  undefined1 auStack_118 [56];
  long alStack_e0 [7];
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  long lStack_78;
  undefined1 auStack_70 [8];
  long alStack_68 [7];
  byte bStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_1 + 1;
  plVar3 = plVar8;
  (**(code **)(*param_1 + 0x18))();
  if ((int)plVar3 == 0) {
LAB_107766140:
    plVar8 = (long *)0x0;
  }
  else {
    plVar4 = plVar8;
    (**(code **)(*param_1 + 0x20))();
    plVar3 = (long *)0x0;
    if (plVar4 == (long *)0x0) goto LAB_107766140;
    lVar7 = *param_1;
    param_1 = &lStack_78;
    param_2 = (long *)0x0;
    (**(code **)(lVar7 + 0x28))(&lStack_78,plVar8);
    (**(code **)(lStack_78 + 0x68))(alStack_68,auStack_70);
    func_0x0001072f5f6c(&lStack_78);
    if ((bStack_30 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      uVar5 = 0;
      func_0x000107264c5c();
      func_0x000107770fc8();
      if ((uVar5 & 1) == 0) {
        plVar8 = alStack_68;
        func_0x000107264c5c(plVar8);
        func_0x00010772d1f4();
      }
      else {
        plVar8 = (long *)0x1;
      }
    }
    plVar3 = alStack_68;
    func_0x00010724b3d8();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(alStack_68);
  plVar4 = plVar3;
  __Unwind_Resume();
  plVar8 = alStack_1f0;
  plVar6 = alStack_1f0;
  puStack_88 = &DAT_1077661c4;
  plStack_a0 = param_1;
  plStack_98 = plVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107766888();
  uStack_a8 = extraout_x8_00;
  func_0x000107753050(&lStack_198,plVar4[9]);
  uVar2 = iStack_120 == 1;
  if (!(bool)uVar2) {
    plVar8 = (long *)(extraout_x8 + 8);
    param_2 = alStack_190;
    func_0x00010756c040();
    goto code_r0x0001077662bc;
  }
  plVar3 = &lStack_198;
  func_0x00010727f7dc();
  iVar1 = (int)plVar3[0xd];
  if (iVar1 == 0) {
    func_0x00010776686c();
    func_0x000107766864();
    func_0x000107766858();
    func_0x00010776684c();
    func_0x000107766838();
    func_0x000107766824();
  }
  else {
    uVar2 = iVar1 == 1;
    if ((bool)uVar2) {
      func_0x00010776686c();
      func_0x000107766864();
      func_0x000107766858();
      func_0x00010776684c();
      func_0x000107766838();
      func_0x000107766824();
    }
    else {
      uVar2 = iVar1 == 2;
      if ((bool)uVar2) {
        func_0x00010776686c();
        func_0x000107766864();
        func_0x000107766858();
        func_0x00010776684c();
        func_0x000107766838();
        func_0x000107766824();
      }
      else {
        uVar2 = iVar1 == 3;
        if ((bool)uVar2) {
          plVar4 = plVar3 + 1;
          func_0x000104c2d634();
          plVar8 = plVar4;
code_r0x0001077662f0:
          func_0x000107766898((double)plVar4);
          goto code_r0x0001077662bc;
        }
        uVar2 = iVar1 == 4;
        if ((bool)uVar2) {
          func_0x00010776686c();
          func_0x000107766864();
          func_0x000107766858();
          func_0x00010776684c();
          func_0x000107766838();
          func_0x000107766824();
        }
        else {
          uVar2 = iVar1 == 5;
          if ((bool)uVar2) {
            func_0x00010776686c();
            func_0x000107766864();
            func_0x000107766858();
            func_0x00010776684c();
            func_0x000107766838();
            func_0x000107766824();
          }
          else {
            uVar2 = iVar1 == 6;
            if ((bool)uVar2) {
              func_0x00010775c688(alStack_e0,plVar3 + 1);
              plVar8 = alStack_e0;
              func_0x000104c2d634();
              func_0x000107766898((double)plVar8);
              func_0x0001077668c0();
              goto code_r0x0001077662bc;
            }
            uVar2 = iVar1 == 7;
            if ((bool)uVar2) {
              func_0x00010776686c();
              func_0x000107766864();
              func_0x000107766858();
              func_0x00010776684c();
              func_0x000107766838();
              func_0x000107766824();
            }
            else {
              uVar2 = iVar1 == 8;
              if ((bool)uVar2) {
                plVar4 = (long *)((((long *)plVar3[1])[1] - *(long *)plVar3[1]) / 0x70);
                plVar8 = plVar3;
                goto code_r0x0001077662f0;
              }
              func_0x00010776686c();
              func_0x000107766864();
              func_0x000107766858();
              func_0x00010776684c();
              func_0x000107766838();
              func_0x000107766824();
            }
          }
        }
      }
    }
  }
  func_0x0001072625b4(alStack_e0,auStack_1b0);
  param_2 = alStack_e0;
  func_0x00010756c0ec(extraout_x8);
  func_0x0001077668c0();
  func_0x0001077668b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
  func_0x000104c2f714(auStack_118);
  func_0x0001072c9884();
code_r0x0001077662bc:
  func_0x0001077668c8();
  func_0x000107766874(uStack_a8);
  if ((bool)uVar2) {
    return plVar8;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
  func_0x000104c2f714(auStack_118);
  func_0x0001072c9884();
  func_0x0001077668c8();
  func_0x0001077668b8();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    func_0x000104bfeb48(0,*(undefined8 *)((long)plVar6 + 0x48));
    plVar8 = (long *)plVar3[3];
    if (plVar8 == plVar3) {
      lVar7 = 0x20;
    }
    else {
      if (plVar8 == (long *)0x0) {
        return plVar3;
      }
      lVar7 = 0x28;
    }
    (**(code **)(*plVar8 + lVar7))();
    return plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))();
  return plVar3;
}



/* Entry: 1077667bc; end: 1077667eb;  */

undefined8 * FUN_1077667bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d58b0;
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107766b34; end: 10776713b;  */

void FUN_107766b34(byte *param_1,long *param_2,long ****param_3,long ****param_4,long ****param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long *plVar5;
  long ***ppplVar6;
  long lVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x9;
  code *extraout_x9_00;
  long ****unaff_x22;
  long ****pppplVar15;
  long *plVar16;
  long ****pppplVar17;
  uint uVar18;
  long ****pppplStack_358;
  long ***ppplStack_350;
  long ****pppplStack_340;
  undefined8 uStack_338;
  long ****pppplStack_330;
  long ****pppplStack_328;
  long ****pppplStack_320;
  ulong uStack_318;
  undefined1 ***pppuStack_310;
  undefined *puStack_308;
  ulong uStack_2f8;
  long ***ppplStack_2f0;
  long ****pppplStack_2e8;
  undefined8 uStack_2b8;
  long ***ppplStack_2b0;
  long ***ppplStack_2a8;
  undefined1 **ppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  long ***ppplStack_280;
  long ****pppplStack_278;
  long ***ppplStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long ***appplStack_258 [8];
  undefined8 uStack_218;
  long ****pppplStack_210;
  long ****pppplStack_208;
  long ***ppplStack_200;
  byte *pbStack_1f8;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  uint uStack_1d4;
  long ***ppplStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [16];
  undefined1 uStack_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  long **pplStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long ***ppplStack_110;
  undefined8 uStack_108;
  byte bStack_100;
  long **applStack_f0 [7];
  byte bStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long ***ppplStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  pppplVar17 = param_3;
  pppplVar12 = param_4;
  func_0x00010776884c();
  plVar16 = param_2 + 1;
  plVar5 = plVar16;
  uStack_78 = extraout_x8;
  (**(code **)(*param_2 + 0x20))();
  uVar4 = plVar5 == (long *)0x3;
  if (plVar5 < (long *)0x4) {
    func_0x000107878fec(&lStack_b0,(long)plVar5 - 1);
    func_0x0001004c3cd0(applStack_f0,&UNK_10f426516,&lStack_b0);
    func_0x00010048a6c8(auStack_138,applStack_f0,&UNK_10f417b93);
    func_0x0001077689f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    ppplVar6 = applStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001077688a0();
    func_0x0001077688fc();
  }
  else {
    pplStack_158 = (long **)&UNK_10e52b660;
    lStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    pppplVar15 = (long ****)((long)plVar5 - 1);
    uStack_1d4 = (uint)*param_1;
    ppplStack_1d0 = (long ***)CONCAT44(ppplStack_1d0._4_4_,(uint)param_1[0x10]);
    for (unaff_x22 = (long ****)0x1; uVar4 = unaff_x22 == pppplVar15, unaff_x22 < pppplVar15;
        unaff_x22 = (long ****)((long)unaff_x22 + 2)) {
      func_0x000107768a64();
      func_0x000107768a14(&lStack_b0);
      (**(code **)(lStack_b0 + 0x68))(applStack_f0,&uStack_a8);
      func_0x0001072f5f6c(&lStack_b0);
      if ((bStack_b8 & 1) == 0) {
        func_0x00010776885c();
        func_0x000107768a64();
        func_0x000107768a14(&ppplStack_90);
        func_0x00010754c3ec(&ppplStack_110,&ppplStack_90);
        func_0x0001004c3cd0(&lStack_b0,&UNK_10f426546,&ppplStack_110);
        func_0x00010048a6c8(auStack_170,&lStack_b0,&UNK_10f417b93);
        pppplVar12 = unaff_x22;
        func_0x00010756a69c(param_3,auStack_170);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
        func_0x0001077688a0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_110);
        func_0x0001072f5f6c(&ppplStack_90);
LAB_107766d48:
        func_0x0001077688fc();
        func_0x0001077689c8();
        goto LAB_107766d50;
      }
      ppplVar6 = applStack_f0;
      func_0x000107264c5c();
      while (pppplVar17 != (long ****)0x0) {
        bVar1 = *(byte *)ppplVar6;
        uVar18 = (uint)bVar1;
        func_0x00010015bb50();
        pppplVar17 = (long ****)((long)pppplVar17 + -1);
        uVar4 = bVar1 != 0x5f && uVar18 == 0;
        ppplVar6 = (long ***)((long)ppplVar6 + 1);
        if (bVar1 != 0x5f && uVar18 == 0) {
          func_0x00010776885c();
          func_0x00010002b838(auStack_188,&UNK_10f426568);
          func_0x000107768a00();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
          goto LAB_107766d48;
        }
      }
      func_0x000107768a64();
      (*extraout_x9)(&ppplStack_110,plVar16,(long)unaff_x22 + 1);
      auStack_1a0[0] = 0;
      uStack_190 = 0;
      uVar11 = (ulong)ppplStack_90 >> 0x28;
      uVar18 = (uint)ppplStack_90;
      ppplStack_90._0_5_ = (uint5)(uVar18 & 0xffffff00);
      ppplStack_90 = (long ***)CONCAT35((int3)uVar11,(uint5)ppplStack_90);
      pppplVar17 = &ppplStack_110;
      pppplVar12 = (long ****)((long)unaff_x22 + 1);
      param_5 = param_4;
      func_0x00010777067c(&lStack_b0,param_3);
      func_0x0001072c9854(auStack_1a0);
      func_0x0001072f5f6c(&ppplStack_110);
      cVar2 = (char)puStack_a0;
      if (((ulong)puStack_a0 & 1) == 0) {
        uStack_1d4 = 0;
        ppplStack_1d0 = (long ***)((ulong)ppplStack_1d0 & 0xffffffff00000000);
      }
      else {
        ppplVar6 = &pplStack_158;
        pppplVar17 = (long ****)applStack_f0;
        func_0x000107324c18();
        if (((ulong)pppplVar17 & 1) != 0) {
          lVar7 = lStack_150 + (long)ppplVar6 * 0x48;
          pppplVar17 = (long ****)applStack_f0;
          func_0x000104c2fe00();
          *(undefined8 *)(lVar7 + 0x40) = uStack_a8;
          *(long *)(lVar7 + 0x38) = lStack_b0;
          lStack_b0 = 0;
          uStack_a8 = 0;
        }
      }
      func_0x0001072c95d0(&lStack_b0);
      func_0x0001077689c8();
      if (cVar2 == '\0') {
        func_0x00010776885c();
        goto LAB_107766d50;
      }
    }
    func_0x00010776885c();
    func_0x000107768a64();
    (*extraout_x9_00)(applStack_f0,plVar16,pppplVar15);
    func_0x00010756f360(auStack_1b8,param_3 + 3);
    param_5 = param_4;
    func_0x000107770e10(&ppplStack_110,param_3,applStack_f0,pppplVar15,param_4,auStack_1b8,
                        &pplStack_158);
    func_0x0001072c9854(auStack_1b8);
    func_0x0001072f5f6c(applStack_f0);
    if ((bStack_100 & 1) == 0) {
      func_0x0001077688fc();
      pppplVar12 = pppplVar15;
    }
    else {
      uVar4 = *(char *)((long)param_3 + 0x51) == '\x01';
      if ((bool)uVar4) {
        unaff_x22 = (long ****)0x78;
        __Znwm();
        func_0x000107324e48(&lStack_b0,&pplStack_158);
        uStack_1c8 = uStack_108;
        ppplStack_1d0 = ppplStack_110;
        ppplStack_110 = (long ***)0x0;
        uStack_108 = 0;
        func_0x000107324e48(applStack_f0,&lStack_b0);
        uStack_88 = uStack_1c8;
        ppplStack_90 = ppplStack_1d0;
        uStack_120 = 0;
        uStack_118 = 0;
        pppplVar12 = &ppplStack_90;
        func_0x000107768318(unaff_x22,applStack_f0);
        func_0x000107768950();
        func_0x000107768918();
        func_0x0001002a8234(unaff_x22 + 5,param_4 + 8);
        func_0x0001072c9b9c(&uStack_120);
        plVar5 = &lStack_b0;
        func_0x0001072c9500();
        *(long *****)param_1 = unaff_x22;
        func_0x0001077688f4();
        *plVar5 = (long)&PTR_DAT_1109d5a98;
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar5[3] = (long)unaff_x22;
        *(long **)(param_1 + 8) = plVar5;
        func_0x000107768a38();
      }
      else {
        func_0x000107768430(&lStack_b0,1);
        puVar3 = puStack_a0;
        puStack_a0[2] = 0;
        *puStack_a0 = &PTR_FUN_1109d5b78;
        puStack_a0[1] = 0;
        func_0x000107324e48(applStack_f0,&pplStack_158);
        uStack_88 = uStack_108;
        ppplStack_90 = ppplStack_110;
        ppplStack_110 = (long ***)0x0;
        uStack_108 = 0;
        pppplVar12 = &ppplStack_90;
        func_0x000107768318(puVar3 + 3,applStack_f0);
        func_0x000107768950();
        func_0x000107768918();
        puVar3 = puStack_a0;
        puStack_a0 = (undefined8 *)0x0;
        param_4 = (long ****)(puVar3 + 3);
        func_0x0001077684bc(&lStack_b0);
        *(long *****)param_1 = param_4;
        *(undefined8 **)(param_1 + 8) = puVar3;
        uStack_120 = 0;
        uStack_118 = 0;
        func_0x000107768a38();
        func_0x0001077684cc(&uStack_120);
      }
    }
    func_0x0001072c95d0(&ppplStack_110);
LAB_107766d50:
    ppplVar6 = &pplStack_158;
    func_0x0001072c9500();
  }
  func_0x000107768838(uStack_78);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)(*unaff_x22)[1])(unaff_x22);
  func_0x0001072c95d0(&ppplStack_110);
  func_0x0001072c9500(&pplStack_158);
  ppplVar8 = ppplVar6;
  __Unwind_Resume();
  puStack_1e8 = &DAT_10776713c;
  pppplStack_210 = unaff_x22;
  pppplStack_208 = param_4;
  ppplStack_200 = ppplVar6;
  pbStack_1f8 = param_1;
  puStack_1f0 = &stack0xfffffffffffffff0;
  func_0x00010776884c();
  uStack_218 = extraout_x8_00;
  ppplStack_270 = (long ***)0x0;
  uStack_268 = 0;
  uStack_260 = 0;
  func_0x0001077689f0();
  pppplVar17 = appplStack_258;
  func_0x0001074d2254(&ppplStack_270);
  func_0x000104c2f714(appplStack_258);
  ppplVar6 = ppplVar8 + 9;
  func_0x000107375ad0();
  ppplStack_280 = ppplVar6;
  while (pppplVar15 = pppplVar17, pppplStack_278 = pppplVar15, ppplStack_280 != (long ***)0x0) {
    func_0x0001077560f4(&ppplStack_270,pppplVar15);
    func_0x0001077689f0();
    func_0x000107768a20();
    func_0x0001077689dc();
    func_0x000107375b30(&ppplStack_280);
    pppplVar17 = pppplStack_278;
    param_4 = pppplVar15;
  }
  func_0x0001077689f0();
  func_0x000107768a20();
  func_0x0001077689dc();
  pppplVar17 = &ppplStack_270;
  func_0x000107327958(auStack_290);
  func_0x000107768888();
  pppplVar15 = &ppplStack_270;
  func_0x000107269124();
  func_0x000107768838(uStack_218);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077689dc();
  pppplVar9 = &ppplStack_270;
  func_0x000107269124();
  func_0x00010776886c();
  puStack_298 = &DAT_107767268;
  pppplVar10 = pppplVar9;
  ppplStack_2b0 = ppplVar8;
  ppplStack_2a8 = (long ***)pppplVar15;
  ppuStack_2a0 = &puStack_1f0;
  func_0x00010776884c();
  uStack_2b8 = extraout_x8_01;
  (*(code *)(*pppplVar10)[8])(&ppplStack_2f0);
  pppplVar15 = &ppplStack_2f0;
  func_0x0001074d25b4();
  func_0x000104c2f714(&ppplStack_2f0);
  uStack_2f8 = (long)pppplVar9[0xc] +
               (long)pppplVar15 * 0x1000 + ((ulong)pppplVar15 >> 4) + -0x61c8864680b583eb ^
               (ulong)pppplVar15;
  pppplVar10 = pppplVar9 + 9;
  func_0x000107375ad0();
  ppplStack_2f0 = (long ***)pppplVar10;
  while (pppplStack_2e8 = pppplVar17, (long ****)ppplStack_2f0 != (long ****)0x0) {
    func_0x0001073f26dc(&uStack_2f8,pppplVar17);
    func_0x00010756af98(&uStack_2f8,pppplVar17 + 7);
    func_0x000107375b30(&ppplStack_2f0);
    pppplVar15 = pppplVar17;
    pppplVar17 = pppplStack_2e8;
  }
  pppplVar9 = pppplVar9 + 0xd;
  func_0x00010756af98(&uStack_2f8);
  uVar11 = uStack_2f8;
  func_0x000107768838(uStack_2b8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  pppplVar17 = &ppplStack_2f0;
  func_0x000104c2f714();
  func_0x00010776886c();
  puStack_308 = &DAT_107767358;
  pppplVar10 = pppplVar17;
  pppplVar13 = pppplVar9;
  pppplVar14 = pppplVar12;
  pppplStack_330 = unaff_x22;
  pppplStack_328 = param_4;
  pppplStack_320 = pppplVar15;
  uStack_318 = uVar11;
  pppuStack_310 = &ppuStack_2a0;
  func_0x00010776884c();
  uVar4 = *(char *)(pppplVar14 + 0x32) == '\x01';
  uStack_338 = extraout_x8_02;
  if ((bool)uVar4) {
    func_0x0001077688f4();
    *pppplVar10 = (long ***)&PTR_DAT_1109d5bc8;
    pppplVar10[1] = (long ***)pppplVar17;
    pppplVar10[2] = (long ***)pppplVar9;
    pppplVar10[3] = (long ***)param_5;
    pppplStack_340 = pppplVar10;
    func_0x00010776696c(pppplVar12,pppplVar17 + 9,&pppplStack_358);
    func_0x000107768958();
    pppplVar17 = pppplVar12;
  }
  else {
    pppplVar15 = pppplVar17 + 9;
    func_0x000107375ad0();
    pppplStack_358 = pppplVar15;
    ppplStack_350 = (long ***)pppplVar13;
    while (pppplStack_358 != (long ****)0x0) {
      (*(code *)(*ppplStack_350[7])[9])(ppplStack_350[7],pppplVar9,pppplVar12,param_5);
      func_0x000107375b30(&pppplStack_358);
    }
    func_0x0001077533f4(pppplVar17,pppplVar9,pppplVar12,param_5);
  }
  func_0x000107768838(uStack_338);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000107768958();
    func_0x00010776886c();
                    /* WARNING: Could not recover jumptable at 0x00010776744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*pppplVar17[0xd])[10])();
    return;
  }
  return;
}



/* Entry: 1077676ec; end: 107767d07;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1077676ec(long *param_1,ulong *param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  uint5 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  ulong *puVar10;
  code *extraout_x9;
  int extraout_w10;
  long *plVar11;
  uint5 auStack_2f8 [2];
  undefined1 auStack_2e8 [24];
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 auStack_258 [24];
  undefined1 uStack_240;
  undefined8 auStack_1f0 [9];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [56];
  byte bStack_138;
  undefined1 auStack_130 [16];
  char cStack_120;
  uint5 uStack_e8;
  undefined8 auStack_e0 [6];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_78;
  
  puVar10 = param_2;
  func_0x00010776884c();
  puVar6 = puVar10 + 1;
  uStack_78 = extraout_x8;
  (**(code **)(*puVar10 + 0x20))();
  uVar4 = (long)puVar6 + -1 == 0;
  if (puVar6 == (ulong *)0x0 || (bool)uVar4) {
    func_0x00010002b838(auStack_298,&UNK_10f4265a9);
    func_0x0001077689f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_298);
    func_0x0001077688fc();
  }
  else {
    func_0x000107768a58();
    (*extraout_x9)(&uStack_260,puVar10 + 1,1);
    (**(code **)(CONCAT71(uStack_25f,uStack_260) + 0x68))(auStack_170,auStack_258);
    func_0x000107768a0c();
    if ((bStack_138 & 1) == 0) {
      func_0x00010002b838(auStack_2b0,&UNK_10f4265e9);
      func_0x0001077689f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b0);
      func_0x0001077688fc();
    }
    else {
      func_0x000104c2fe00(auStack_1a8,auStack_170);
      plVar11 = *(long **)(param_3 + 0x30);
      if (plVar11 != (long *)0x0) {
LAB_1077677b8:
        lVar7 = *plVar11;
        puVar9 = auStack_1a8;
        func_0x00010757e728();
        if (lVar7 == 0) goto code_r0x0001077677c8;
        uStack_2c8 = *(undefined8 *)(puVar9 + 0x40);
        uStack_2d0 = *(ulong *)(puVar9 + 0x38);
        if (*(long *)(puVar9 + 0x40) != 0) {
          do {
            func_0x0001077688e4();
          } while (extraout_w10 != 0);
        }
        uStack_2c0 = 1;
        auStack_1f0[0] = 0;
        func_0x000107539a30(auStack_1f0,(long)puVar6 + -1);
        for (puVar10 = (ulong *)0x2; uVar4 = puVar6 == puVar10, puVar10 < puVar6;
            puVar10 = (ulong *)(ulong)((int)puVar10 + 1)) {
          func_0x000107768a58();
          func_0x0001077688d8(&uStack_260);
          iVar5 = (int)&uStack_260;
          FUN_107766098();
          func_0x000107768a0c();
          if (iVar5 == 0) {
            func_0x000107768a58();
            func_0x0001077688d8(&uStack_e8);
            (**(code **)(_uStack_e8 + 0x70))(auStack_130,auStack_e0);
            func_0x0001077765a4(&uStack_260,auStack_130,&uStack_270);
            FUN_10774f3fc(&uStack_b0,&uStack_260);
            func_0x0001072c995c(auStack_1f0,&uStack_b0);
            func_0x000107768908();
            func_0x00010726af18(auStack_258);
            func_0x000107267ed0(auStack_130);
            func_0x0001072f5f6c(&uStack_e8);
          }
          else {
            func_0x000107768a58();
            func_0x0001077688d8(&uStack_b0);
            uVar2 = (ulong)_uStack_e8 >> 0x28;
            uVar1 = (uint)_uStack_e8;
            uStack_e8 = (uint5)(uVar1 & 0xffffff00);
            _uStack_e8 = CONCAT35((int3)uVar2,uStack_e8);
            uStack_260 = 0;
            uStack_240 = 0;
            func_0x000107771274(auStack_130,param_3,&uStack_b0,param_4,&uStack_e8,&uStack_260);
            func_0x0001072c94e0(&uStack_260);
            func_0x0001072f5f6c(&uStack_b0);
            if (cStack_120 == '\x01') {
              func_0x0001072c995c(auStack_1f0,auStack_130);
            }
            func_0x0001072c95d0(auStack_130);
          }
        }
        if ((*(byte *)(param_3 + 0x51) & 1) == 0) {
          lVar7 = 0xf0;
          __Znwm();
          param_2 = &uStack_270;
          func_0x0001077689b0();
          func_0x000104c2fe00(auStack_130,auStack_1a8);
          uStack_a8 = uStack_2c8;
          uStack_b0 = uStack_2d0;
          uStack_2d0 = 0;
          uStack_2c8 = 0;
          func_0x0001072c9bc0(&uStack_260,auStack_1f0);
          func_0x000107768758(lVar7 + 0x18,auStack_130,&uStack_b0,&uStack_260);
          func_0x000107768960();
          func_0x000107768908();
          func_0x000104c2f714(auStack_130);
          *param_1 = lVar7 + 0x18;
          param_1[1] = param_3;
          _uStack_e8 = 0;
          auStack_e0[0] = 0;
          func_0x000107768a38();
          puVar8 = &uStack_e8;
        }
        else {
          lVar7 = 0xf0;
          __Znwm();
          func_0x0001077689b0();
          param_2 = (ulong *)(lVar7 + 0x18);
          func_0x000104c2fe00(&uStack_e8,auStack_1a8);
          uVar3 = uStack_2c8;
          uVar2 = uStack_2d0;
          uStack_2d0 = 0;
          uStack_2c8 = 0;
          func_0x0001072c9bc0(auStack_130,auStack_1f0);
          func_0x000104c318bc(&uStack_b0,&uStack_e8);
          uStack_268 = uVar3;
          uStack_270 = uVar2;
          uStack_280 = 0;
          uStack_278 = 0;
          func_0x0001072c9bc0(&uStack_260,auStack_130);
          func_0x000107768758(param_2,&uStack_b0,&uStack_270,&uStack_260);
          func_0x000107768960();
          func_0x0001072c9b9c(&uStack_270);
          func_0x000104c2f714(&uStack_b0);
          func_0x0001002a8234(param_3 + 0x40,param_4 + 0x40);
          func_0x0001072c9c34(auStack_130);
          func_0x0001072c9b9c(&uStack_280);
          func_0x000104c2f714(&uStack_e8);
          *param_1 = (long)param_2;
          param_1[1] = param_3;
          auStack_2f8[0]._0_8_ = 0;
          auStack_2f8[1]._0_8_ = 0;
          func_0x000107768a38();
          puVar8 = auStack_2f8;
        }
        func_0x000107768810(puVar8);
        func_0x0001072c9c34(auStack_1f0);
        goto LAB_107767b20;
      }
LAB_1077677d0:
      uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
      uStack_2c0 = 0;
      func_0x00010724ef84(&uStack_b0,auStack_1a8);
      func_0x0001004c3cd0(auStack_1f0,&UNK_10f42661d,&uStack_b0);
      func_0x00010048a6c8(auStack_130,auStack_1f0,&UNK_10f426630);
      func_0x00010724ef84(&uStack_e8,auStack_1a8);
      func_0x00010533a9c0(&uStack_260,auStack_130,&uStack_e8);
      func_0x00010048a6c8(auStack_2e8,&uStack_260,&UNK_10f42663f);
      func_0x000107768a00();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_260);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
      func_0x0001077688a0();
      func_0x0001077688fc();
LAB_107767b20:
      func_0x0001072c95d0(&uStack_2d0);
      func_0x000104c2f714(auStack_1a8);
    }
    func_0x00010724b3d8(auStack_170);
  }
  func_0x000107768838(uStack_78);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001077681d0(param_2);
    func_0x0001072c9c34(auStack_130);
    func_0x0001072c9b9c(&uStack_280);
    func_0x000104c2f714(&uStack_e8);
    __ZNSt3__119__shared_weak_countD2Ev(param_3);
    __ZdlPv();
    func_0x0001072c9c34(auStack_1f0);
    func_0x0001072c95d0(&uStack_2d0);
    do {
      func_0x000104c2f714(auStack_1a8);
      func_0x00010724b3d8(auStack_170);
      func_0x00010776886c();
    } while( true );
  }
  return;
code_r0x0001077677c8:
  plVar11 = (long *)plVar11[1];
  if (plVar11 == (long *)0x0) goto LAB_1077677d0;
  goto LAB_1077677b8;
}



/* Entry: 107768124; end: 107768137;  */

long FUN_107768124(long param_1)

{
  func_0x000100060934(param_1,&UNK_10f426682);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107768250; end: 10776826b;  */

void FUN_107768250(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5af8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107768488; end: 10776848b;  */

void FUN_107768488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077685cc; end: 1077685f3;  */

void FUN_1077685cc(undefined8 param_1)

{
  func_0x000107768a70();
  func_0x000107768970(param_1,&PTR_DAT_1109d5c28);
  func_0x000107768988();
  return;
}



/* Entry: 107768750; end: 107768757;  */

void FUN_107768750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077689ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10776939c; end: 10776942b;  */

undefined8 * FUN_10776939c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *puStack_68;
  undefined8 auStack_60 [7];
  undefined8 uStack_28;
  
  plVar1 = param_1;
  func_0x0001077698dc();
  uStack_28 = extraout_x8;
  (**(code **)(*plVar1 + 0x40))(auStack_60);
  puStack_68 = (undefined8 *)0x0;
  func_0x0001073f26dc(&puStack_68,auStack_60);
  func_0x00010772db3c(&puStack_68,param_1 + 9);
  puVar2 = puStack_68;
  func_0x000104c2f714();
  func_0x0001077698c8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_60;
  func_0x000104c2f714();
  func_0x0001077698ec();
  *puVar2 = &PTR_DAT_1109d5d18;
  func_0x00010726af18(puVar2 + 10);
  *puVar2 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107769584; end: 10776973f;  */

undefined1 * FUN_107769584(undefined1 *param_1,undefined1 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  undefined1 in_ZR;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  uint6 uVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined8 uVar16;
  byte bVar22;
  undefined1 auStack_108 [8];
  long alStack_100 [13];
  char cStack_98;
  undefined8 uStack_90;
  
  func_0x0001077698dc();
  uStack_90 = extraout_x8;
  if ((**(byte **)(param_2 + 8) & 1) == 0) {
    plVar1 = (long *)*param_3;
    lVar2 = param_3[1];
    func_0x000107768a7c(auStack_108,param_4,*(undefined8 *)(param_2 + 0x10));
    in_ZR = cStack_98 == '\x01';
    if ((bool)in_ZR) {
      puVar9 = *(ulong **)(param_2 + 0x18);
      Hint_Prefetch(*puVar9,0,2,0);
      plVar4 = plVar1;
      func_0x0001001030f4(*puVar9,plVar1,(long)plVar1 + lVar2);
      lVar13 = 0;
      uVar11 = *puVar9;
      uVar12 = puVar9[2];
      uVar8 = uVar11 >> 0xc ^ (ulong)plVar4 >> 7;
      bVar3 = (byte)plVar4;
      uVar15 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar8 = uVar8 & uVar12;
        uVar16 = *(undefined8 *)(uVar11 + uVar8);
        cVar17 = (char)((ulong)uVar16 >> 8);
        cVar18 = (char)((ulong)uVar16 >> 0x10);
        cVar19 = (char)((ulong)uVar16 >> 0x18);
        cVar20 = (char)((ulong)uVar16 >> 0x20);
        cVar21 = (char)((ulong)uVar16 >> 0x28);
        bVar14 = (byte)((ulong)uVar16 >> 0x30);
        bVar22 = (byte)((ulong)uVar16 >> 0x38);
        for (uVar10 = CONCAT17(-(bVar22 == (bVar3 & 0x7f)),
                               CONCAT16(-(bVar14 == (bVar3 & 0x7f)),
                                        CONCAT15(-(cVar21 == (char)(uVar15 >> 0x28)),
                                                 CONCAT14(-(cVar20 == (char)(uVar15 >> 0x20)),
                                                          CONCAT13(-(cVar19 ==
                                                                    (char)(uVar15 >> 0x18)),
                                                                   CONCAT12(-(cVar18 ==
                                                                             (char)(uVar15 >> 0x10))
                                                                            ,CONCAT11(-(cVar17 ==
                                                                                       (char)(uVar15
                                                                                             >> 8)),
                                                                                      -((char)uVar16
                                                                                       == (char)
                                                  uVar15)))))))) & 0x8080808080808080; uVar10 != 0;
            uVar10 = uVar10 - 1 & uVar10) {
          uVar5 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = puVar9[1] +
                  (uVar8 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar12) * 0xa8;
          param_4 = plVar1;
          func_0x000107278530(uVar5,plVar1,lVar2);
          if ((uVar5 & 1) != 0) goto LAB_1077696a4;
        }
        bVar14 = NEON_umaxv(CONCAT17(-(bVar22 == 0x80),
                                     CONCAT16(-(bVar14 == 0x80),
                                              CONCAT15(-(cVar21 == -0x80),
                                                       CONCAT14(-(cVar20 == -0x80),
                                                                CONCAT13(-(cVar19 == -0x80),
                                                                         CONCAT12(-(cVar18 == -0x80)
                                                                                  ,CONCAT11(-(cVar17
                                                                                             == 
                                                  -0x80),-((char)uVar16 == -0x80)))))))),1);
        if ((bVar14 & 1) != 0) break;
        lVar13 = lVar13 + 8;
        uVar8 = lVar13 + uVar8;
      }
      puVar6 = puVar9;
      func_0x00010726ca78(puVar9,plVar4);
      lVar13 = puVar9[1] + (long)puVar6 * 0xa8;
      func_0x000104c302a4(lVar13,plVar1,lVar2);
      param_4 = alStack_100;
      func_0x00010726cc04(lVar13 + 0x40);
    }
    else {
      **(undefined1 **)(param_2 + 8) = 1;
    }
LAB_1077696a4:
    param_2 = auStack_108;
    func_0x000107296ad0();
    param_3 = param_4;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x0001077698c8(uStack_90);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar7 = auStack_108;
    func_0x000107296ad0(puVar7);
    func_0x0001077698ec();
    func_0x0001004a5364(param_3,&PTR_DAT_1109d5e00);
    puVar7 = puVar7 + 8;
    if ((int)param_3 == 0) {
      puVar7 = (undefined1 *)0x0;
    }
    return puVar7;
  }
  return param_2;
}



/* Entry: 10776a388; end: 10776a3d3;  */

undefined8 * FUN_10776a388(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x0001072bb3b4();
  uVar2 = uVar1;
  func_0x0001072bb3b4();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10776a9d8; end: 10776ab3f;  */

/* WARNING: Possible PIC construction at 0x00010776acb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776aee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776af34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776aee4) */
/* WARNING: Removing unreachable block (ram,0x00010776aefc) */
/* WARNING: Removing unreachable block (ram,0x00010776aef4) */
/* WARNING: Removing unreachable block (ram,0x00010776dee0) */
/* WARNING: Removing unreachable block (ram,0x00010776acbc) */
/* WARNING: Removing unreachable block (ram,0x00010776af38) */
/* WARNING: Removing unreachable block (ram,0x00010776af24) */
/* WARNING: Removing unreachable block (ram,0x00010776af3c) */
/* WARNING: Removing unreachable block (ram,0x00010776df7c) */
/* WARNING: Removing unreachable block (ram,0x00010776af2c) */
/* WARNING: Removing unreachable block (ram,0x00010745df58) */
/* WARNING: Removing unreachable block (ram,0x00010745df6c) */
/* WARNING: Removing unreachable block (ram,0x00010745dfa0) */
/* WARNING: Removing unreachable block (ram,0x00010745df94) */
/* WARNING: Removing unreachable block (ram,0x00010745df98) */
/* WARNING: Removing unreachable block (ram,0x00010745dfa4) */
/* WARNING: Removing unreachable block (ram,0x00010745dfb0) */
/* WARNING: Removing unreachable block (ram,0x00010745e5cc) */
/* WARNING: Removing unreachable block (ram,0x00010745df60) */

undefined1 **
FUN_10776a9d8(undefined1 **param_1,undefined8 param_2,undefined1 **param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *puVar14;
  undefined8 extraout_x8_02;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong unaff_x23;
  long lVar20;
  undefined8 *puVar21;
  undefined1 ***pppuVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  undefined1 auStack_210 [24];
  undefined1 **ppuStack_1f8;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 **ppuStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 **ppuStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  puVar15 = (undefined8 *)param_1[1];
  if (puVar15 < param_1[2]) {
    *puVar15 = param_2;
    puVar24 = *param_3;
    puVar15[2] = param_3[1];
    puVar15[1] = puVar24;
    *param_3 = (undefined1 *)0x0;
    param_3[1] = (undefined1 *)0x0;
    puVar15 = puVar15 + 3;
    ppuVar6 = param_1;
  }
  else {
    lVar20 = (long)puVar15 - (long)*param_1;
    uVar1 = lVar20 / 0x18 + 1;
    ppuVar6 = param_1;
    ppuVar8 = param_3;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      func_0x00010776caec();
LAB_10776ab3c:
      func_0x000104bd35f4();
      puStack_58 = &DAT_10776ab40;
      lStack_90 = lVar20;
      uStack_88 = unaff_x23;
      uStack_80 = param_2;
      ppuStack_78 = param_3;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x00010776d97c();
      uStack_98 = extraout_x8;
      (**(code **)(*ppuVar6 + 0x40))(&puStack_d0);
      func_0x00010776df2c();
      func_0x00010776dd94();
      func_0x00010776d0d4(&puStack_d0,param_1[0xd]);
      ppuStack_d8 = (undefined1 **)
                    ((long)ppuVar6 * 0x1000 + -0x61c8864680b583eb + ((ulong)ppuVar6 >> 4) +
                     lStack_c0 ^ (ulong)ppuVar6);
      while (uVar5 = puStack_d0 == auStack_c8, !(bool)uVar5) {
        ppuStack_d8 = (undefined1 **)
                      (*(long *)(puStack_d0 + 0x20) + -0x61c8864680b583eb +
                       (long)ppuStack_d8 * 0x1000 + ((ulong)ppuStack_d8 >> 4) ^ (ulong)ppuStack_d8);
        func_0x00010756af98(&ppuStack_d8,puStack_d0 + 0x28);
        func_0x00010002c7d4();
      }
      param_1 = param_1 + 0x10;
      func_0x00010756af98(&ppuStack_d8);
      ppuVar7 = ppuStack_d8;
      ppuVar6 = &puStack_d0;
      func_0x00010754718c();
      func_0x00010776d950(uStack_98);
      if ((bool)uVar5) {
        return ppuVar7;
      }
      ___stack_chk_fail();
      ppuVar7 = ppuVar6;
      func_0x00010776dd94();
      func_0x00010776da9c();
      uStack_110 = 0x9e3779b97f4a7c15;
      puStack_e8 = &DAT_10776ac54;
      pppuVar22 = &ppuStack_f0;
      ppuVar9 = param_1;
      ppuVar11 = ppuVar8;
      lStack_120 = lVar20;
      ppuStack_118 = &puStack_d0;
      puStack_108 = auStack_c8;
      ppuStack_f8 = ppuVar6;
      ppuStack_f0 = &puStack_60;
      func_0x00010776d97c();
      uVar5 = *(char *)(ppuVar11 + 0x32) == '\x01';
      if ((bool)uVar5) {
        func_0x00010776db3c();
        ppuVar7 = ppuVar8;
        func_0x00010756ec34();
        func_0x00010776e034();
        func_0x00010776db08();
        *ppuVar7 = (undefined1 *)&PTR_DAT_1109d5e50;
        ppuVar7[1] = (undefined1 *)param_1;
        ppuVar7[2] = (undefined1 *)ppuVar8;
        ppuVar7[3] = param_4;
        ppuStack_1f8 = ppuVar7;
        func_0x00010776dd48();
        puVar23 = &UNK_10776acbc;
        puVar24 = auStack_210;
        ppuVar7 = ppuVar6;
      }
      else {
        uStack_128 = extraout_x8_00;
        func_0x00010776db08();
        func_0x00010776de8c(&PTR_DAT_1109d5ee0);
        func_0x00010776df20();
        func_0x00010776dd64();
        func_0x00010776d950(uStack_128);
        if ((bool)uVar5) {
          return ppuVar7;
        }
        ___stack_chk_fail();
        func_0x00010776dcc8();
        func_0x00010776dd7c();
        puVar23 = &UNK_10776ad24;
        func_0x00010776da9c();
        puVar24 = auStack_210;
      }
      do {
        puVar12 = param_5;
        ppuVar6 = ppuVar9;
        *(undefined1 ***)(puVar24 + -0x30) = param_1;
        *(undefined1 ***)(puVar24 + -0x28) = ppuVar8;
        *(undefined1 **)(puVar24 + -0x20) = param_4;
        *(undefined1 ***)(puVar24 + -0x18) = ppuVar7;
        *(undefined1 ****)(puVar24 + -0x10) = pppuVar22;
        *(undefined **)(puVar24 + -8) = puVar23;
        ppuVar8 = ppuVar6;
        func_0x00010776d97c();
        *(undefined8 *)(puVar24 + -0x38) = extraout_x8_01;
        ppuVar8 = (undefined1 **)ppuVar8[9];
        func_0x00010776dd20();
        uVar5 = *(int *)(puVar24 + -0x40) == 1;
        if ((bool)uVar5) {
          func_0x00010776dd10();
          uVar5 = *(int *)(ppuVar8 + 0xd) == 2;
          if ((bool)uVar5) {
            func_0x00010776dd10();
            func_0x0001072cb4bc();
            puVar26 = *ppuVar8;
            uVar5 = (double)puVar26 == (double)(long)(double)(long)(double)puVar26;
            if ((((bool)uVar5) && (puVar14 = ppuVar6[0xc], puVar14 != (undefined1 *)0x0)) &&
               (ppuVar6[0xe] != (undefined1 *)0x0)) {
              puVar26 = (undefined1 *)(long)(double)puVar26;
              puVar16 = puVar14 + -1;
              if (((ulong)puVar14 & (ulong)puVar16) == 0) {
                puVar17 = (undefined1 *)((ulong)puVar16 & (ulong)puVar26);
                uVar5 = true;
              }
              else {
                uVar5 = puVar14 == puVar26;
                puVar17 = puVar26;
                if (puVar14 <= puVar26) {
                  uVar1 = 0;
                  if (puVar14 != (undefined1 *)0x0) {
                    uVar1 = (ulong)puVar26 / (ulong)puVar14;
                  }
                  puVar17 = puVar26 + -(uVar1 * (long)puVar14);
                }
              }
              plVar18 = *(long **)(ppuVar6[0xb] + (long)puVar17 * 8);
              if (plVar18 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar18 = (long *)*plVar18;
                    if (plVar18 == (long *)0x0) goto code_r0x00010776ae48;
                    puVar19 = (undefined1 *)plVar18[1];
                    if (puVar19 != puVar26) break;
                    uVar5 = (undefined1 *)plVar18[2] == puVar26;
                    if ((bool)uVar5) {
                      ppuVar11 = (undefined1 **)plVar18[3];
                      ppuVar10 = *(undefined1 ***)(puVar12 + 0x18);
                      func_0x00010776dc58();
                      ppuVar7 = ppuVar8;
                      goto code_r0x00010776ae54;
                    }
                  }
                  if (((ulong)puVar14 & (ulong)puVar16) == 0) {
                    puVar19 = (undefined1 *)((ulong)puVar19 & (ulong)puVar16);
                  }
                  else if (puVar14 <= puVar19) {
                    uVar1 = 0;
                    if (puVar14 != (undefined1 *)0x0) {
                      uVar1 = (ulong)puVar19 / (ulong)puVar14;
                    }
                    puVar19 = puVar19 + -(uVar1 * (long)puVar14);
                  }
                  uVar5 = puVar19 == puVar17;
                } while ((bool)uVar5);
              }
            }
code_r0x00010776ae48:
            ppuVar11 = (undefined1 **)ppuVar6[0x10];
            ppuVar10 = *(undefined1 ***)(puVar12 + 0x18);
            func_0x00010776dc58();
            ppuVar7 = ppuVar8;
          }
          else {
            ppuVar11 = (undefined1 **)ppuVar6[0x10];
            ppuVar10 = *(undefined1 ***)(puVar12 + 0x18);
            func_0x00010776dc58();
            ppuVar7 = ppuVar8;
          }
        }
        else {
          ppuVar10 = (undefined1 **)(puVar24 + -0xb8);
          func_0x00010756dd74(ppuVar10);
          func_0x00010756dd30(ppuVar7,ppuVar10);
        }
code_r0x00010776ae54:
        func_0x00010776da60();
        func_0x00010776d950(*(undefined8 *)(puVar24 + -0x38));
        if ((bool)uVar5) {
          return ppuVar7;
        }
        ___stack_chk_fail();
        ppuVar9 = ppuVar7;
        func_0x00010776da60();
        func_0x00010776da9c();
        *(undefined1 **)(puVar24 + -0xe0) = puVar12;
        *(undefined1 ***)(puVar24 + -0xd8) = ppuVar7;
        *(undefined1 **)(puVar24 + -0xd0) = puVar24 + -0x10;
        *(undefined **)(puVar24 + -200) = &DAT_10776aeac;
        pppuVar22 = (undefined1 ***)(puVar24 + -0xd0);
        func_0x00010776d99c(extraout_x8_02,ppuVar9,ppuVar10,ppuVar11);
        func_0x00010776e068();
        param_5 = puVar24 + -0x108;
        puVar23 = &UNK_10776aee4;
        puVar24 = puVar24 + -0x110;
        ppuVar11 = ppuVar10;
        param_4 = puVar12;
        ppuVar8 = ppuVar6;
      } while( true );
    }
    uVar4 = ((long)param_1[2] - (long)*param_1) / 0x18;
    unaff_x23 = uVar4 * 2;
    if (unaff_x23 < uVar1 || unaff_x23 - uVar1 == 0) {
      unaff_x23 = uVar1;
    }
    if (0x555555555555554 < uVar4) {
      unaff_x23 = 0xaaaaaaaaaaaaaaa;
    }
    if (unaff_x23 == 0) {
      ppuVar8 = (undefined1 **)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < unaff_x23) goto LAB_10776ab3c;
      ppuVar8 = param_1;
      func_0x00010776df18(unaff_x23 * 3);
    }
    puVar2 = (undefined8 *)((long)ppuVar8 + lVar20);
    *puVar2 = param_2;
    puVar24 = *param_3;
    puVar2[2] = param_3[1];
    puVar2[1] = puVar24;
    *param_3 = (undefined1 *)0x0;
    param_3[1] = (undefined1 *)0x0;
    puVar21 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    lVar20 = (long)puVar3 - (long)puVar21;
    puVar13 = puVar2 + (lVar20 / -0x18) * 3;
    for (puVar15 = puVar21; puVar15 != puVar3; puVar15 = puVar15 + 3) {
      uVar25 = *puVar15;
      puVar13[1] = puVar15[1];
      *puVar13 = uVar25;
      puVar13[2] = puVar15[2];
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar13 = puVar13 + 3;
    }
    for (; puVar21 != puVar3; puVar21 = puVar21 + 3) {
      func_0x000104c33108(puVar21 + 1);
    }
    puVar15 = puVar2 + 3;
    ppuVar6 = (undefined1 **)*param_1;
    *param_1 = (undefined1 *)(puVar2 + (lVar20 / -0x18) * 3);
    param_1[1] = (undefined1 *)puVar15;
    param_1[2] = (undefined1 *)(ppuVar8 + unaff_x23 * 3);
    if (ppuVar6 != (undefined1 **)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (undefined1 *)puVar15;
  return ppuVar6;
}



/* Entry: 10776b2f4; end: 10776b3eb;  */

/* WARNING: Possible PIC construction at 0x00010776b450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776b67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776b454) */
/* WARNING: Removing unreachable block (ram,0x00010776b680) */
/* WARNING: Removing unreachable block (ram,0x00010776b698) */
/* WARNING: Removing unreachable block (ram,0x00010776b744) */
/* WARNING: Removing unreachable block (ram,0x00010776b70c) */
/* WARNING: Removing unreachable block (ram,0x00010776b814) */
/* WARNING: Removing unreachable block (ram,0x00010776b71c) */
/* WARNING: Removing unreachable block (ram,0x00010776b878) */
/* WARNING: Removing unreachable block (ram,0x00010776b868) */
/* WARNING: Removing unreachable block (ram,0x00010776b764) */
/* WARNING: Removing unreachable block (ram,0x00010776b88c) */
/* WARNING: Removing unreachable block (ram,0x00010776b770) */
/* WARNING: Removing unreachable block (ram,0x00010776b7d8) */
/* WARNING: Removing unreachable block (ram,0x00010776b7e0) */
/* WARNING: Removing unreachable block (ram,0x00010776b8bc) */
/* WARNING: Removing unreachable block (ram,0x00010776b7ec) */
/* WARNING: Removing unreachable block (ram,0x00010776b798) */
/* WARNING: Removing unreachable block (ram,0x00010776b8a4) */
/* WARNING: Removing unreachable block (ram,0x00010776b8d0) */
/* WARNING: Removing unreachable block (ram,0x00010776b7ac) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b0) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b4) */
/* WARNING: Removing unreachable block (ram,0x00010776b9a4) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b8) */
/* WARNING: Removing unreachable block (ram,0x00010776b824) */
/* WARNING: Removing unreachable block (ram,0x00010776b85c) */
/* WARNING: Removing unreachable block (ram,0x00010776b734) */
/* WARNING: Removing unreachable block (ram,0x00010776b884) */
/* WARNING: Removing unreachable block (ram,0x00010776b8e4) */
/* WARNING: Removing unreachable block (ram,0x00010776b8e8) */
/* WARNING: Removing unreachable block (ram,0x00010776b8f0) */
/* WARNING: Removing unreachable block (ram,0x00010776b940) */
/* WARNING: Removing unreachable block (ram,0x00010776b8f8) */
/* WARNING: Removing unreachable block (ram,0x00010776b950) */
/* WARNING: Removing unreachable block (ram,0x00010776b954) */
/* WARNING: Removing unreachable block (ram,0x00010776b914) */
/* WARNING: Removing unreachable block (ram,0x00010776b960) */
/* WARNING: Removing unreachable block (ram,0x00010776b9d0) */
/* WARNING: Removing unreachable block (ram,0x00010776ba44) */
/* WARNING: Removing unreachable block (ram,0x00010776baa8) */
/* WARNING: Removing unreachable block (ram,0x00010776bab8) */
/* WARNING: Removing unreachable block (ram,0x00010776bb78) */
/* WARNING: Removing unreachable block (ram,0x00010776bba8) */
/* WARNING: Removing unreachable block (ram,0x00010776bbcc) */
/* WARNING: Removing unreachable block (ram,0x00010776bc08) */
/* WARNING: Removing unreachable block (ram,0x00010776bc1c) */
/* WARNING: Removing unreachable block (ram,0x00010776bc20) */
/* WARNING: Removing unreachable block (ram,0x00010776bc3c) */
/* WARNING: Removing unreachable block (ram,0x00010776bc90) */
/* WARNING: Removing unreachable block (ram,0x00010776bf2c) */
/* WARNING: Removing unreachable block (ram,0x00010776c070) */
/* WARNING: Removing unreachable block (ram,0x00010776bf94) */
/* WARNING: Removing unreachable block (ram,0x00010776c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010776bff4) */
/* WARNING: Removing unreachable block (ram,0x00010776c01c) */
/* WARNING: Removing unreachable block (ram,0x00010776c100) */
/* WARNING: Removing unreachable block (ram,0x00010776c104) */
/* WARNING: Removing unreachable block (ram,0x00010776c3cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c10c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c3dc) */
/* WARNING: Removing unreachable block (ram,0x00010776c6f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c3e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c41c) */
/* WARNING: Removing unreachable block (ram,0x00010776c7a0) */
/* WARNING: Removing unreachable block (ram,0x00010776c7f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c424) */
/* WARNING: Removing unreachable block (ram,0x00010776c438) */
/* WARNING: Removing unreachable block (ram,0x00010776c43c) */
/* WARNING: Removing unreachable block (ram,0x00010776c444) */
/* WARNING: Removing unreachable block (ram,0x00010776c448) */
/* WARNING: Removing unreachable block (ram,0x00010776c694) */
/* WARNING: Removing unreachable block (ram,0x00010776c450) */
/* WARNING: Removing unreachable block (ram,0x00010776c824) */
/* WARNING: Removing unreachable block (ram,0x00010776c45c) */
/* WARNING: Removing unreachable block (ram,0x00010776c464) */
/* WARNING: Removing unreachable block (ram,0x00010776c46c) */
/* WARNING: Removing unreachable block (ram,0x00010776c498) */
/* WARNING: Removing unreachable block (ram,0x00010776c480) */
/* WARNING: Removing unreachable block (ram,0x00010776c48c) */
/* WARNING: Removing unreachable block (ram,0x00010776c49c) */
/* WARNING: Removing unreachable block (ram,0x00010776c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c4d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c4d8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4e8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4f0) */
/* WARNING: Removing unreachable block (ram,0x00010776c500) */
/* WARNING: Removing unreachable block (ram,0x00010776c524) */
/* WARNING: Removing unreachable block (ram,0x00010776c50c) */
/* WARNING: Removing unreachable block (ram,0x00010776c518) */
/* WARNING: Removing unreachable block (ram,0x00010776c528) */
/* WARNING: Removing unreachable block (ram,0x00010776c534) */
/* WARNING: Removing unreachable block (ram,0x00010776c53c) */
/* WARNING: Removing unreachable block (ram,0x00010776c554) */
/* WARNING: Removing unreachable block (ram,0x00010776c570) */
/* WARNING: Removing unreachable block (ram,0x00010776c55c) */
/* WARNING: Removing unreachable block (ram,0x00010776c564) */
/* WARNING: Removing unreachable block (ram,0x00010776c574) */
/* WARNING: Removing unreachable block (ram,0x00010776c57c) */
/* WARNING: Removing unreachable block (ram,0x00010776c5b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c5b4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c5c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c5d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c5d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010776c610) */
/* WARNING: Removing unreachable block (ram,0x00010776c600) */
/* WARNING: Removing unreachable block (ram,0x00010776c618) */
/* WARNING: Removing unreachable block (ram,0x00010776c608) */
/* WARNING: Removing unreachable block (ram,0x00010776c620) */
/* WARNING: Removing unreachable block (ram,0x00010776c640) */
/* WARNING: Removing unreachable block (ram,0x00010776c658) */
/* WARNING: Removing unreachable block (ram,0x00010776c67c) */
/* WARNING: Removing unreachable block (ram,0x00010776c668) */
/* WARNING: Removing unreachable block (ram,0x00010776c670) */
/* WARNING: Removing unreachable block (ram,0x00010776c680) */
/* WARNING: Removing unreachable block (ram,0x00010776c630) */
/* WARNING: Removing unreachable block (ram,0x00010776c684) */
/* WARNING: Removing unreachable block (ram,0x00010776c548) */
/* WARNING: Removing unreachable block (ram,0x00010776c550) */
/* WARNING: Removing unreachable block (ram,0x00010776c68c) */
/* WARNING: Removing unreachable block (ram,0x00010776c4bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c4c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c714) */
/* WARNING: Removing unreachable block (ram,0x00010776c738) */
/* WARNING: Removing unreachable block (ram,0x00010776c118) */
/* WARNING: Removing unreachable block (ram,0x00010776c154) */
/* WARNING: Removing unreachable block (ram,0x00010776c744) */
/* WARNING: Removing unreachable block (ram,0x00010776c798) */
/* WARNING: Removing unreachable block (ram,0x00010776c15c) */
/* WARNING: Removing unreachable block (ram,0x00010776c16c) */
/* WARNING: Removing unreachable block (ram,0x00010776c170) */
/* WARNING: Removing unreachable block (ram,0x00010776c178) */
/* WARNING: Removing unreachable block (ram,0x00010776c17c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3b8) */
/* WARNING: Removing unreachable block (ram,0x00010776c184) */
/* WARNING: Removing unreachable block (ram,0x00010776c81c) */
/* WARNING: Removing unreachable block (ram,0x00010776c18c) */
/* WARNING: Removing unreachable block (ram,0x00010776c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c198) */
/* WARNING: Removing unreachable block (ram,0x00010776c19c) */
/* WARNING: Removing unreachable block (ram,0x00010776c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c1d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c1e0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1e8) */
/* WARNING: Removing unreachable block (ram,0x00010776c204) */
/* WARNING: Removing unreachable block (ram,0x00010776c220) */
/* WARNING: Removing unreachable block (ram,0x00010776c20c) */
/* WARNING: Removing unreachable block (ram,0x00010776c214) */
/* WARNING: Removing unreachable block (ram,0x00010776c224) */
/* WARNING: Removing unreachable block (ram,0x00010776c22c) */
/* WARNING: Removing unreachable block (ram,0x00010776c24c) */
/* WARNING: Removing unreachable block (ram,0x00010776c238) */
/* WARNING: Removing unreachable block (ram,0x00010776c244) */
/* WARNING: Removing unreachable block (ram,0x00010776c250) */
/* WARNING: Removing unreachable block (ram,0x00010776c264) */
/* WARNING: Removing unreachable block (ram,0x00010776c26c) */
/* WARNING: Removing unreachable block (ram,0x00010776c288) */
/* WARNING: Removing unreachable block (ram,0x00010776c2a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c290) */
/* WARNING: Removing unreachable block (ram,0x00010776c298) */
/* WARNING: Removing unreachable block (ram,0x00010776c2a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c2d8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2dc) */
/* WARNING: Removing unreachable block (ram,0x00010776c2e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c2ec) */
/* WARNING: Removing unreachable block (ram,0x00010776c2f4) */
/* WARNING: Removing unreachable block (ram,0x00010776c2f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2fc) */
/* WARNING: Removing unreachable block (ram,0x00010776c304) */
/* WARNING: Removing unreachable block (ram,0x00010776c334) */
/* WARNING: Removing unreachable block (ram,0x00010776c324) */
/* WARNING: Removing unreachable block (ram,0x00010776c33c) */
/* WARNING: Removing unreachable block (ram,0x00010776c32c) */
/* WARNING: Removing unreachable block (ram,0x00010776c344) */
/* WARNING: Removing unreachable block (ram,0x00010776c364) */
/* WARNING: Removing unreachable block (ram,0x00010776c37c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a0) */
/* WARNING: Removing unreachable block (ram,0x00010776c38c) */
/* WARNING: Removing unreachable block (ram,0x00010776c394) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c354) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c278) */
/* WARNING: Removing unreachable block (ram,0x00010776c284) */
/* WARNING: Removing unreachable block (ram,0x00010776c3b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010776c200) */
/* WARNING: Removing unreachable block (ram,0x00010776c6a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c6cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c6d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c03c) */
/* WARNING: Removing unreachable block (ram,0x00010776c700) */
/* WARNING: Removing unreachable block (ram,0x00010776c708) */
/* WARNING: Removing unreachable block (ram,0x00010776bc9c) */
/* WARNING: Removing unreachable block (ram,0x00010776bdb0) */
/* WARNING: Removing unreachable block (ram,0x00010776bdcc) */
/* WARNING: Removing unreachable block (ram,0x00010776bdc4) */
/* WARNING: Removing unreachable block (ram,0x00010776bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010776bccc) */
/* WARNING: Removing unreachable block (ram,0x00010776c078) */
/* WARNING: Removing unreachable block (ram,0x00010776bce4) */
/* WARNING: Removing unreachable block (ram,0x00010776bcf4) */
/* WARNING: Removing unreachable block (ram,0x00010776bd00) */
/* WARNING: Removing unreachable block (ram,0x00010776c80c) */
/* WARNING: Removing unreachable block (ram,0x00010776bd18) */
/* WARNING: Removing unreachable block (ram,0x00010776bd24) */
/* WARNING: Removing unreachable block (ram,0x00010776bd50) */
/* WARNING: Removing unreachable block (ram,0x00010776bd54) */
/* WARNING: Removing unreachable block (ram,0x00010776bddc) */
/* WARNING: Removing unreachable block (ram,0x00010776be70) */
/* WARNING: Removing unreachable block (ram,0x00010776be38) */
/* WARNING: Removing unreachable block (ram,0x00010776be40) */
/* WARNING: Removing unreachable block (ram,0x00010776be50) */
/* WARNING: Removing unreachable block (ram,0x00010776be78) */
/* WARNING: Removing unreachable block (ram,0x00010776be80) */
/* WARNING: Removing unreachable block (ram,0x00010776c814) */
/* WARNING: Removing unreachable block (ram,0x00010776be98) */
/* WARNING: Removing unreachable block (ram,0x00010776bea0) */
/* WARNING: Removing unreachable block (ram,0x00010776beac) */
/* WARNING: Removing unreachable block (ram,0x00010776bebc) */
/* WARNING: Removing unreachable block (ram,0x00010776be60) */
/* WARNING: Removing unreachable block (ram,0x00010776bf08) */
/* WARNING: Removing unreachable block (ram,0x00010776bf0c) */
/* WARNING: Removing unreachable block (ram,0x00010776bf24) */
/* WARNING: Removing unreachable block (ram,0x00010776bd5c) */
/* WARNING: Removing unreachable block (ram,0x00010776bd98) */
/* WARNING: Removing unreachable block (ram,0x00010776bd90) */
/* WARNING: Removing unreachable block (ram,0x00010776bd9c) */
/* WARNING: Removing unreachable block (ram,0x00010776bdac) */
/* WARNING: Removing unreachable block (ram,0x00010776c0a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010776bb7c) */
/* WARNING: Removing unreachable block (ram,0x00010776bb24) */
/* WARNING: Removing unreachable block (ram,0x00010776bb9c) */
/* WARNING: Removing unreachable block (ram,0x00010776c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c800) */
/* WARNING: Removing unreachable block (ram,0x00010776c804) */
/* WARNING: Removing unreachable block (ram,0x00010776c828) */
/* WARNING: Removing unreachable block (ram,0x00010776c0d8) */
/* WARNING: Removing unreachable block (ram,0x00010776b984) */
/* WARNING: Removing unreachable block (ram,0x00010776b690) */
/* WARNING: Removing unreachable block (ram,0x00010776dee0) */
/* WARNING: Recovered jumptable eliminated as dead code */

long *****
FUN_10776b2f4(long *param_1,undefined8 param_2,long *****param_3,long ****param_4,long ****param_5)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *****pppppuVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ***ppplVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *****ppppplVar13;
  long *****ppppplVar14;
  undefined8 extraout_x8_02;
  long unaff_x19;
  undefined8 *****pppppuVar15;
  long *****unaff_x23;
  long *****unaff_x24;
  ulong unaff_x25;
  long *****unaff_x26;
  long ***unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar16;
  undefined *puVar17;
  undefined1 auStack_1b0 [24];
  undefined8 ****ppppuStack_198;
  undefined8 uStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_78;
  long ****pppplStack_70;
  long ***ppplStack_68;
  long lStack_60;
  undefined8 uStack_38;
  
  func_0x00010776d97c();
  uStack_38 = extraout_x8;
  (**(code **)(*param_1 + 0x40))(&pppplStack_70);
  func_0x00010776df2c();
  func_0x00010776dd94();
  func_0x00010776d54c(&pppplStack_70,*(undefined8 *)(unaff_x19 + 0x68));
  ppppuStack_78 =
       (undefined8 ****)
       ((long)param_1 * 0x1000 + ((ulong)param_1 >> 4) + lStack_60 + -0x61c8864680b583eb ^
       (ulong)param_1);
  pppppuVar15 = (undefined8 *****)pppplStack_70;
  while( true ) {
    uVar4 = pppppuVar15 == (undefined8 *****)&ppplStack_68;
    if ((bool)uVar4) break;
    func_0x0001073f26dc(&ppppuStack_78,pppppuVar15 + 4);
    pppppuVar5 = &ppppuStack_78;
    func_0x00010756af98(pppppuVar5,pppppuVar15 + 0xb);
    func_0x00010776df10();
    pppppuVar15 = pppppuVar5;
  }
  ppppplVar13 = (long *****)(unaff_x19 + 0x80);
  func_0x00010756af98(&ppppuStack_78);
  ppppuVar2 = ppppuStack_78;
  ppppplVar7 = &pppplStack_70;
  func_0x000107547870();
  func_0x00010776d950(uStack_38);
  if ((bool)uVar4) {
    return (long *****)ppppuVar2;
  }
  ___stack_chk_fail();
  ppppplVar6 = ppppplVar7;
  func_0x00010776dd94();
  func_0x00010776da9c();
  puStack_88 = &DAT_10776b3ec;
  ppuVar16 = &puStack_90;
  ppppplVar8 = ppppplVar13;
  ppppplVar10 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010776d97c();
  uVar4 = *(char *)(ppppplVar10 + 0x32) == '\x01';
  if ((bool)uVar4) {
    func_0x00010776db3c();
    ppppplVar6 = param_3;
    func_0x00010756ec34();
    func_0x00010776e034();
    func_0x00010776db08();
    *ppppplVar6 = (long ****)&PTR_DAT_1109d5fe0;
    ppppplVar6[1] = (long ****)ppppplVar13;
    ppppplVar6[2] = (long ****)param_3;
    ppppplVar6[3] = param_4;
    ppppuStack_198 = ppppplVar6;
    func_0x00010776dd48();
    puVar17 = &UNK_10776b454;
    puVar3 = auStack_1b0;
    ppppplVar6 = ppppplVar7;
  }
  else {
    uStack_c8 = extraout_x8_00;
    func_0x00010776db08();
    func_0x00010776de8c(&PTR_DAT_1109d6060);
    func_0x00010776df20();
    func_0x00010776dd64();
    func_0x00010776d950(uStack_c8);
    if ((bool)uVar4) {
      return ppppplVar6;
    }
    ___stack_chk_fail();
    func_0x00010776dcc8();
    func_0x00010776dd7c();
    puVar17 = &UNK_10776b4bc;
    func_0x00010776da9c();
    puVar3 = auStack_1b0;
  }
  do {
    pppplVar12 = param_5;
    ppppplVar10 = ppppplVar8;
    *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
    *(long ****)(puVar3 + -0x58) = unaff_x27;
    *(long ******)(puVar3 + -0x50) = unaff_x26;
    *(ulong *)(puVar3 + -0x48) = unaff_x25;
    *(long ******)(puVar3 + -0x40) = unaff_x24;
    *(long ******)(puVar3 + -0x38) = unaff_x23;
    *(long ******)(puVar3 + -0x30) = ppppplVar13;
    *(long ******)(puVar3 + -0x28) = param_3;
    *(long *****)(puVar3 + -0x20) = param_4;
    *(long ******)(puVar3 + -0x18) = ppppplVar6;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar16;
    *(undefined **)(puVar3 + -8) = puVar17;
    ppppplVar7 = ppppplVar10;
    func_0x00010776d97c();
    *(undefined8 *)(puVar3 + -0x68) = extraout_x8_01;
    ppppplVar7 = (long *****)ppppplVar7[9];
    func_0x00010776dd20();
    uVar4 = *(int *)(puVar3 + -0x70) == 1;
    ppppplVar6 = ppppplVar7;
    if ((bool)uVar4) {
      func_0x00010776dd10();
      uVar4 = *(int *)(ppppplVar7 + 0xd) == 3;
      ppppplVar6 = ppppplVar7;
      if (!(bool)uVar4) goto code_r0x00010776b560;
      func_0x00010776dd10();
      func_0x00010732393c();
      unaff_x24 = (long *****)ppppplVar10[0xc];
      ppppplVar6 = ppppplVar7;
      ppplVar9 = unaff_x27;
      if ((unaff_x24 == (long *****)0x0) ||
         (ppppplVar8 = ppppplVar10 + 0xe, ppppplVar6 = ppppplVar8, ppppplVar13 = ppppplVar7,
         *ppppplVar8 == (long ****)0x0)) {
code_r0x00010776b5e8:
        unaff_x27 = ppplVar9;
        ppppplVar14 = ppppplVar10 + 0x10;
        ppppplVar7 = ppppplVar13;
        ppppplVar8 = unaff_x23;
      }
      else {
        func_0x00010726364c(ppppplVar8,ppppplVar7);
        unaff_x25 = (long)unaff_x24 - 1;
        if (((ulong)unaff_x24 & unaff_x25) == 0) {
          unaff_x26 = (long *****)((ulong)ppppplVar8 & unaff_x25);
          uVar4 = true;
        }
        else {
          uVar4 = ppppplVar8 == unaff_x24;
          unaff_x26 = ppppplVar8;
          if (unaff_x24 <= ppppplVar8) {
            uVar1 = 0;
            if (unaff_x24 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar8 / (ulong)unaff_x24;
            }
            unaff_x26 = (long *****)((long)ppppplVar8 - uVar1 * (long)unaff_x24);
          }
        }
        unaff_x27 = ppppplVar10[0xb][(long)unaff_x26];
        ppppplVar6 = ppppplVar8;
        unaff_x23 = ppppplVar8;
        ppplVar9 = (long ***)0x0;
        if (unaff_x27 == (long ***)0x0) goto code_r0x00010776b5e8;
        do {
          while( true ) {
            unaff_x27 = (long ***)*unaff_x27;
            if (unaff_x27 == (long ***)0x0) goto code_r0x00010776b5d4;
            ppppplVar13 = (long *****)unaff_x27[1];
            if (ppppplVar8 != ppppplVar13) break;
            ppppplVar6 = (long *****)(unaff_x27 + 2);
            func_0x000104c32db4(ppppplVar6,ppppplVar7);
            if (((ulong)ppppplVar6 & 1) != 0) goto code_r0x00010776b5d4;
          }
          if (((ulong)unaff_x24 & unaff_x25) == 0) {
            ppppplVar13 = (long *****)((ulong)ppppplVar13 & unaff_x25);
          }
          else if (unaff_x24 <= ppppplVar13) {
            uVar1 = 0;
            if (unaff_x24 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar13 / (ulong)unaff_x24;
            }
            ppppplVar13 = (long *****)((long)ppppplVar13 - uVar1 * (long)unaff_x24);
          }
        } while (ppppplVar13 == unaff_x26);
        unaff_x27 = (long ***)0x0;
code_r0x00010776b5d4:
        uVar4 = unaff_x27 == (long ***)0x0;
        ppppplVar14 = ppppplVar10 + 0x10;
        if (!(bool)uVar4) {
          ppppplVar14 = (long *****)(unaff_x27 + 9);
        }
      }
      pppplVar11 = *ppppplVar14;
      ppplVar9 = pppplVar12[3];
      func_0x00010776dc58();
      ppppplVar13 = ppppplVar7;
      unaff_x23 = ppppplVar8;
    }
    else {
code_r0x00010776b560:
      pppplVar11 = ppppplVar10[0x10];
      ppplVar9 = pppplVar12[3];
      func_0x00010776dc58();
    }
    func_0x00010776da60();
    func_0x00010776d950(*(undefined8 *)(puVar3 + -0x68));
    if ((bool)uVar4) {
      return ppppplVar6;
    }
    ___stack_chk_fail();
    ppppplVar8 = ppppplVar6;
    func_0x00010776da60();
    func_0x00010776da9c();
    *(long *****)(puVar3 + -0x110) = pppplVar12;
    *(long ******)(puVar3 + -0x108) = ppppplVar6;
    *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0xf8) = &DAT_10776b648;
    ppuVar16 = (undefined1 **)(puVar3 + -0x100);
    func_0x00010776d99c(extraout_x8_02,ppppplVar8,ppplVar9,pppplVar11);
    func_0x00010776e068();
    param_5 = (long ****)(puVar3 + -0x138);
    puVar17 = &UNK_10776b680;
    puVar3 = puVar3 + -0x140;
    param_4 = pppplVar12;
    param_3 = ppppplVar10;
  } while( true );
}



/* Entry: 10776cb44; end: 10776cba7;  */

undefined1 * FUN_10776cb44(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    func_0x00010776cb7c(param_1);
  }
  return param_1;
}



/* Entry: 10776cd5c; end: 10776cd67;  */

void FUN_10776cd5c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010776db90();
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_2[1] + ((lVar1 - lVar3) / -0x48) * 0x48;
  lVar2 = lVar4 + 8;
  for (lVar5 = lVar3; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
    func_0x00010776cba8(lVar2,lVar5 + 8);
    lVar2 = lVar2 + 0x48;
  }
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    func_0x00010776cbf4(lVar3 + 8);
  }
  param_2[1] = lVar4;
  lVar2 = *param_1;
  *param_1 = lVar4;
  param_1[1] = lVar2;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10776d06c; end: 10776d0ab;  */

long * FUN_10776d06c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x28;
      func_0x00010776cd34();
    }
    func_0x00010776db84();
  }
  return param_1;
}



/* Entry: 10776d368; end: 10776d38b;  */

void FUN_10776d368(void)

{
  func_0x00010776da54();
  func_0x00010776d9d4(&PTR_DAT_1109d5e50);
  return;
}



/* Entry: 10776d490; end: 10776d4b7;  */

void FUN_10776d490(undefined8 param_1)

{
  func_0x00010776dcbc();
  func_0x00010776dc00(param_1,&PTR_DAT_1109d5f40);
  func_0x00010776da2c();
  return;
}



/* Entry: 10776d664; end: 10776d687;  */

void FUN_10776d664(void)

{
  func_0x00010776da54();
  func_0x00010776d9d4(&PTR_DAT_1109d5fe0);
  return;
}



/* Entry: 10776d784; end: 10776d7af;  */

void FUN_10776d784(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010776dec8();
  *param_1 = &PTR_DAT_1109d60e0;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10776e0c4; end: 10776e0c7;  */

undefined8 * FUN_10776e0c4(undefined8 *param_1)

{
  func_0x0001072c9b9c(param_1 + 0x11);
  func_0x0001072c9b9c(param_1 + 0xf);
  func_0x0001072c9b9c(param_1 + 0xd);
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10776f2cc; end: 10776f377;  */

undefined1 * FUN_10776f2cc(long param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *puStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010776f478();
  uStack_28 = extraout_x8;
  func_0x000100060964(auStack_60,&UNK_10f426b4a);
  puStack_68 = (undefined1 *)0x0;
  func_0x0001073f26dc(&puStack_68,auStack_60);
  func_0x00010756af98(&puStack_68,param_1 + 0x48);
  func_0x00010756af98(&puStack_68,param_1 + 0x58);
  func_0x00010756af98(&puStack_68,param_1 + 0x68);
  func_0x00010756af98(&puStack_68,param_1 + 0x78);
  func_0x00010756af98(&puStack_68,param_1 + 0x88);
  puVar1 = puStack_68;
  puVar2 = auStack_60;
  func_0x000104c2f714(puVar2);
  func_0x00010776f430(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar2;
}



/* Entry: 10776f420; end: 10776f51f;  */

void FUN_10776f420(void)

{
  undefined8 in_x4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [81];
  undefined1 uStack_57;
  
  func_0x000100456794(auStack_f0);
  func_0x000107878fec(auStack_108,1);
  func_0x00010533a9c0(auStack_d8,auStack_f0,auStack_108);
  func_0x00010048a6c8(auStack_c0,auStack_d8,&UNK_10f426c9a);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_138,in_x4);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107771c28(auStack_a8,auStack_c0,&uStack_120,auStack_138,&uStack_150);
  func_0x0001072c9830(&uStack_150);
  func_0x000107771c44();
  func_0x000107771c14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  uStack_57 = 0;
  func_0x000107771b68(auStack_a8);
  func_0x000107771bbc();
  return;
}



/* Entry: 10776fd80; end: 10776fdab;  */

void FUN_10776fd80(undefined8 param_1,undefined8 param_2)

{
  func_0x000107770148(param_2,param_1,&PTR_DAT_1109d63b8);
  func_0x0001077700c8();
  return;
}



/* Entry: 10776ff64; end: 10776ff6f;  */

undefined ** FUN_10776ff64(void)

{
  return &PTR_DAT_1109d62b8;
}



/* Entry: 107770280; end: 10777042b;  */

/* WARNING: Possible PIC construction at 0x0001077703a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077703ac) */
/* WARNING: Removing unreachable block (ram,0x0001077703c4) */
/* WARNING: Removing unreachable block (ram,0x0001077703ec) */
/* WARNING: Removing unreachable block (ram,0x0001077703fc) */
/* WARNING: Removing unreachable block (ram,0x00010777040c) */
/* WARNING: Removing unreachable block (ram,0x000107770424) */
/* WARNING: Removing unreachable block (ram,0x0001077703b0) */

void FUN_107770280(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 auStack_310 [2];
  byte bStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [88];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [112];
  int iStack_1d0;
  undefined1 auStack_1c8 [264];
  undefined1 auStack_c0 [136];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001072ca12c(auStack_2f8);
  func_0x0001072f6b34(auStack_2e8,auStack_2f8,1);
  func_0x0001072c9884(auStack_2f8);
  func_0x00010776f520(auStack_310,param_2,auStack_2e8,param_4);
  if ((bStack_300 & 1) == 0) {
    *param_1 = 0;
    param_1[0x70] = 0;
  }
  else {
    FUN_107751284(auStack_1c8);
    if (*(char *)(param_4 + 0x38) == '\x01') {
      param_4 = param_4 + 0x28;
      func_0x000107326bd0(param_4);
      func_0x000107295f10(auStack_c0,param_4);
    }
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    func_0x000107753050(auStack_248,auStack_310[0],auStack_1c8,&uStack_290);
    func_0x00010724b3d8(&uStack_290);
    if (iStack_1d0 == 1) {
      puVar1 = auStack_248;
      func_0x0001073405dc(puVar1);
      func_0x000107338e84(param_1,puVar1);
    }
    else {
      *param_1 = 0;
      param_1[0x70] = 0;
    }
    func_0x00010727f7f8(auStack_240);
    func_0x000107267da8(auStack_1c8);
  }
  func_0x0001072c95d0(auStack_310);
  func_0x0001072ca718(auStack_2e8);
  return;
}



/* Entry: 10777109c; end: 107771273;  */

void FUN_10777109c(long *param_1,undefined8 *****param_2,undefined8 *****param_3,
                  undefined8 ****param_4,undefined8 *****param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined **ppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  uint uVar15;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x21;
  undefined8 ****ppppuVar16;
  undefined1 auStack_610 [16];
  undefined1 uStack_600;
  undefined1 auStack_5f8 [16];
  undefined1 auStack_5e8 [24];
  undefined8 **ppuStack_5d0;
  undefined8 **ppuStack_5c8;
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [4];
  undefined1 uStack_584;
  undefined1 auStack_570 [24];
  undefined1 auStack_558 [81];
  undefined1 uStack_507;
  undefined8 **ppuStack_4a8;
  undefined8 uStack_4a0;
  undefined8 ***apppuStack_498 [3];
  undefined1 auStack_480 [24];
  char cStack_468;
  undefined8 ***apppuStack_460 [3];
  undefined8 ***apppuStack_448 [3];
  undefined8 ***pppuStack_430;
  undefined8 uStack_428;
  byte bStack_420;
  undefined8 ***pppuStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 ****ppppuStack_3c0;
  undefined *apuStack_3b8 [14];
  int iStack_348;
  undefined8 ****ppppuStack_340;
  undefined *puStack_338;
  undefined1 uStack_330;
  byte bStack_308;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [24];
  undefined8 **ppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [40];
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 uStack_198;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ***apppuStack_120 [2];
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 ***apppuStack_90 [9];
  undefined8 uStack_48;
  
  pppppuVar12 = param_3;
  func_0x000107771b50();
  iVar13 = (int)param_4;
  uStack_48 = extraout_x8_01;
  if (iVar13 == 0) {
    pppuStack_108 = param_2[1];
    pppuStack_110 = *param_2;
    *param_2 = (undefined8 ****)0x0;
    param_2[1] = (undefined8 ****)0x0;
    param_4 = (undefined8 ****)&uStack_131;
    func_0x0001072bed5c(&lStack_100,&pppuStack_110,1);
    func_0x00010757282c(&pppuStack_b0,1);
    puVar3 = puStack_a0;
    puStack_a0[2] = 0;
    *puStack_a0 = &PTR_DAT_1109be540;
    puStack_a0[1] = 0;
    func_0x0001072c9ff4(apppuStack_120,param_3);
    func_0x0001072c9bc0(apppuStack_90,&lStack_100);
    param_2 = (undefined8 *****)apppuStack_120;
    pppppuVar12 = (undefined8 *****)apppuStack_90;
    func_0x000107570fb0(puVar3 + 3);
    func_0x000107771ba4();
    func_0x0001072c9884(apppuStack_120);
    puVar3 = puStack_a0;
    puStack_a0 = (undefined8 *)0x0;
    unaff_x21 = puVar3 + 3;
    func_0x0001075728c0(&pppuStack_b0);
    *param_1 = (long)unaff_x21;
    param_1[1] = (long)puVar3;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x0001075728d0(&uStack_130);
    func_0x0001072c9c34(&lStack_100);
LAB_1077711e4:
    func_0x0001072c9b9c();
  }
  else {
    in_ZR = iVar13 == 2;
    if ((!(bool)in_ZR) && (in_ZR = iVar13 == 1, (bool)in_ZR)) {
      pppuStack_a8 = param_2[1];
      pppuStack_b0 = *param_2;
      *param_2 = (undefined8 ****)0x0;
      param_2[1] = (undefined8 ****)0x0;
      param_4 = apppuStack_120;
      pppppuVar12 = (undefined8 *****)0x1;
      func_0x0001072bed5c(apppuStack_90,&pppuStack_b0);
      param_2 = (undefined8 *****)apppuStack_90;
      func_0x00010774f52c(&lStack_100,param_3);
      param_1[1] = lStack_f8;
      *param_1 = lStack_100;
      lStack_100 = 0;
      lStack_f8 = 0;
      func_0x00010756d0f8(&lStack_100);
      func_0x000107771ba4();
      goto LAB_1077711e4;
    }
    ppppuVar16 = *param_2;
    param_1[1] = (long)param_2[1];
    *param_1 = (long)ppppuVar16;
    *param_2 = (undefined8 ****)0x0;
    param_2[1] = (undefined8 ****)0x0;
  }
  func_0x000107771b24(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107771ba4();
  func_0x0001072c9884(apppuStack_120);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x21);
  func_0x0001075728c0(&pppuStack_b0);
  func_0x0001072c9c34(&lStack_100);
  ppppuVar16 = &pppuStack_110;
  func_0x0001072c9b9c();
  func_0x000107771b48();
  uVar4 = *(char *)(param_5 + 4) != '\x01' || param_5[3] == (undefined8 ****)0x0;
  if (*(char *)(param_5 + 4) == '\x01' && param_5[3] != (undefined8 ****)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1f0,ppppuVar16)
    ;
    ppuStack_1f8 = ppppuVar16[9];
    ppuStack_200 = ppppuVar16[8];
    if (ppppuVar16[9] != (undefined8 ***)0x0) {
      do {
        func_0x000107771b38();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010756f360(auStack_218,ppppuVar16 + 3);
    func_0x00010777193c(auStack_228,param_5,ppppuVar16 + 6);
    func_0x000107771c28(auStack_1d8,auStack_1f0,&ppuStack_200,auStack_218,auStack_228);
    func_0x0001072c9830(auStack_228);
    func_0x000107771c44();
    func_0x000107771c14();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
    func_0x000107771b68(auStack_1d8);
    func_0x0001072ca718(auStack_1d8);
    return;
  }
  pppppuVar7 = param_2;
  pppppuVar11 = pppppuVar12;
  ppppuVar14 = param_4;
  func_0x000107771b50();
  pppuStack_430 = (undefined8 ***)((ulong)pppuStack_430 & 0xffffffffffffff00);
  bStack_420 = 0;
  pppppuVar6 = pppppuVar7 + 1;
  pppppuVar5 = pppppuVar6;
  uStack_198 = extraout_x8;
  (*(code *)(*pppppuVar7)[3])();
  if ((int)pppppuVar5 == 0) {
    func_0x000107771be8(&ppppuStack_340);
    func_0x000107768e6c();
    func_0x000107771c00();
    func_0x0001072c95d0(&ppppuStack_340);
code_r0x0001077709e8:
    pppuVar2 = pppuStack_430;
    if ((bStack_420 & 1) != 0) {
      if (*(char *)(ppppuVar16 + 5) == '\x01') {
        uVar1 = *(uint *)(ppppuVar16 + 4);
        if (uVar1 < 0xc) {
          uVar15 = 1 << (ulong)(uVar1 & 0x1f);
          if ((uVar15 & 0xae) == 0) {
            if ((uVar15 & 0xa10) == 0) goto code_r0x000107770a54;
code_r0x000107770a64:
            uVar15 = *(uint *)(pppuStack_430 + 3);
            if (uVar15 != 3 && uVar15 != 6) goto code_r0x000107770bac;
code_r0x000107770a74:
            uVar1 = *(uint *)param_4;
            if (*(char *)((long)param_4 + 4) == '\0') {
              uVar1 = 0;
            }
            ppppuVar14 = (undefined8 ****)(ulong)uVar1;
            func_0x000107771bac();
          }
          else {
            uVar15 = *(uint *)(pppuStack_430 + 3);
            if (uVar15 != 6) {
              if (uVar1 == 4) goto code_r0x000107770a64;
              goto code_r0x000107770bac;
            }
            uVar1 = *(uint *)param_4;
            if (*(char *)((long)param_4 + 4) == '\0') {
              uVar1 = 1;
            }
            ppppuVar14 = (undefined8 ****)(ulong)uVar1;
            func_0x000107771bac();
          }
          puStack_338 = apuStack_3b8[0];
          ppppuStack_340 = ppppuStack_3c0;
          ppppuStack_3c0 = (undefined8 *****)0x0;
          apuStack_3b8[0] = (undefined *)0x0;
          uStack_330 = 1;
          func_0x000107771c00();
          func_0x0001072c95d0(&ppppuStack_340);
          func_0x0001072c9b9c(&ppppuStack_3c0);
        }
        else {
code_r0x000107770a54:
          uVar15 = *(uint *)(pppuStack_430 + 3);
code_r0x000107770bac:
          if (uVar1 == 7 && uVar15 == 7) {
            ppppuVar9 = (undefined8 ****)(pppuStack_430 + 2);
            func_0x00010756aea8();
            if (*(uint *)(ppppuVar9 + 1) == 3) {
              ppppuVar9 = ppppuVar16 + 3;
              func_0x00010756aea8();
              if (*(uint *)(ppppuVar9 + 1) != 3) goto code_r0x000107770a74;
            }
          }
          pppppuVar7 = (undefined8 *****)(pppuVar2 + 2);
          func_0x00010756f724(auStack_480,ppppuVar16 + 3,pppppuVar7);
          if (cStack_468 == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppppuStack_340,auStack_480);
            pppppuVar7 = &ppppuStack_340;
            func_0x000107771b60();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_340);
          }
          func_0x0001001148fc(auStack_480);
          uVar4 = *ppppuVar16[8] == ppppuVar16[8][1];
          if (!(bool)uVar4) goto code_r0x000107770c30;
        }
      }
      param_4 = (undefined8 ****)pppuStack_430;
      if (((*(uint *)(pppuStack_430 + 1) == 2) || (*(uint *)(pppuStack_430 + 3) == 0xb)) ||
         (ppppuVar16 = (undefined8 ****)pppuStack_430, func_0x000107770440(), (int)ppppuVar16 == 0))
      {
        func_0x000107771b98();
        uVar4 = bStack_420 == 1;
        if ((bool)uVar4) {
          extraout_x8_02[1] = uStack_428;
          *extraout_x8_02 = pppuStack_430;
          pppuStack_430 = (undefined8 ****)0x0;
          uStack_428 = 0;
          *(undefined1 *)(extraout_x8_02 + 2) = 1;
        }
      }
      else {
        FUN_107751284(&ppppuStack_340);
        uStack_3d0 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        uStack_408 = 0;
        pppuStack_410 = (undefined8 ****)0x0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        pppppuVar11 = (undefined8 *****)&pppuStack_410;
        func_0x000107753050(&ppppuStack_3c0,param_4,&ppppuStack_340,pppppuVar11);
        func_0x00010724b3d8(&pppuStack_410);
        uVar4 = iStack_348 == 1;
        if ((bool)uVar4) {
          uVar4 = *(uint *)(param_4 + 3) == 7;
          if ((bool)uVar4) {
            pppppuVar12 = (undefined8 *****)(param_4 + 2);
            func_0x00010756aea8();
            pppppuVar11 = &ppppuStack_3c0;
            func_0x0001073405dc();
            func_0x000107325cc8();
            func_0x000107771c60();
            func_0x000107771bc4();
            pppuStack_1a8 = pppppuVar11[1];
            pppuStack_1b0 = *pppppuVar11;
            *pppppuVar11 = (undefined8 ****)0x0;
            pppppuVar11[1] = (undefined8 ****)0x0;
            pppppuVar11 = (undefined8 *****)&pppuStack_1b0;
            pppppuVar7 = pppppuVar12;
            func_0x000107769788(param_4 + 3,pppppuVar12,pppppuVar11);
            func_0x00010726b188(&pppuStack_1b0);
            func_0x000107771b7c();
            *extraout_x8_02 = param_4;
            extraout_x8_02[1] = pppppuVar12;
            ppuStack_4a8 = (undefined8 ***)0x0;
            uStack_4a0 = 0;
            *(undefined1 *)(extraout_x8_02 + 2) = 1;
            ppppuVar16 = (undefined8 ****)&ppuStack_4a8;
          }
          else {
            pppppuVar12 = &ppppuStack_3c0;
            func_0x0001073405dc();
            func_0x000107771c60();
            func_0x000107771bc4();
            pppppuVar7 = pppppuVar12;
            func_0x000107539b24(param_4 + 3,pppppuVar12);
            func_0x000107771b7c();
            *extraout_x8_02 = param_4;
            extraout_x8_02[1] = pppppuVar12;
            pppuStack_1b0 = (undefined8 ****)0x0;
            pppuStack_1a8 = (undefined8 ****)0x0;
            *(undefined1 *)(extraout_x8_02 + 2) = 1;
            ppppuVar16 = &pppuStack_1b0;
          }
          func_0x0001075795dc(ppppuVar16);
        }
        else {
          func_0x00010756dd74(&ppppuStack_3c0);
          func_0x00010724ef84(apppuStack_498);
          pppppuVar7 = (undefined8 *****)apppuStack_498;
          func_0x000107771b60();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_498);
          func_0x000107771b98();
        }
        func_0x000107771c38();
        func_0x000107267da8(&ppppuStack_340);
      }
      goto code_r0x000107770c34;
    }
  }
  else {
    (*(code *)(*param_2)[4])();
    if (pppppuVar6 != (undefined8 *****)0x0) {
      func_0x000107771c54(&ppppuStack_3c0);
      (*(code *)ppppuStack_3c0[0xd])(&ppppuStack_340,apuStack_3b8);
      func_0x0001072f5f6c(&ppppuStack_3c0);
      if ((bStack_308 & 1) == 0) {
        func_0x000107771c54(&pppuStack_1b0);
        func_0x00010754c3ec(&pppuStack_410,&pppuStack_1b0);
        func_0x0001004c3cd0(&ppppuStack_3c0,&UNK_10f426cfd,&pppuStack_410);
        func_0x00010048a6c8(apppuStack_460,&ppppuStack_3c0,&UNK_10f426d2a);
        pppppuVar7 = (undefined8 *****)apppuStack_460;
        pppppuVar11 = (undefined8 *****)0x0;
        func_0x00010756a69c(ppppuVar16,pppppuVar7,0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_460);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_3c0);
        func_0x000107771be0();
        func_0x0001072f5f6c(&pppuStack_1b0);
        func_0x000107771b98();
      }
      else {
        puVar10 = &UNK_10f426f08;
        pppppuVar7 = &ppppuStack_340;
        pppppuVar11 = (undefined8 *****)0x5;
        func_0x000107278530(pppppuVar7,&UNK_10f426f08,5);
        if ((int)pppppuVar7 == 0) {
          pppppuVar7 = &ppppuStack_340;
          func_0x000107264c5c();
          ppuVar8 = &PTR_DAT_1109d63c8;
          ppppuStack_3c0 = pppppuVar7;
          apuStack_3b8[0] = puVar10;
          func_0x000107771040(&PTR_DAT_1109d63c8,&ppppuStack_3c0);
          uVar4 = ppuVar8 == (undefined **)&UNK_1109d67e8;
          if ((bool)uVar4) {
            func_0x000107264c5c(&ppppuStack_340);
            ppppuVar14 = ppppuVar16;
            func_0x00010772b91c(&ppppuStack_3c0);
            pppppuVar11 = param_2;
            param_5 = pppppuVar12;
          }
          else {
            func_0x000107771be8(&ppppuStack_3c0);
            (*extraout_x9)();
          }
        }
        else {
          func_0x000107771be8(&ppppuStack_3c0);
          func_0x00010776994c();
        }
        pppppuVar7 = &ppppuStack_3c0;
        func_0x0001075530c4(&pppuStack_430,pppppuVar7);
        func_0x0001072c95d0(&ppppuStack_3c0);
      }
      func_0x00010724b3d8(&ppppuStack_340);
      if ((bStack_308 & 1) == 0) goto code_r0x000107770c34;
      goto code_r0x0001077709e8;
    }
    func_0x00010002b838(apppuStack_448,&UNK_10f426c9c);
    pppppuVar7 = (undefined8 *****)apppuStack_448;
    func_0x000107771b60();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_448);
  }
code_r0x000107770c30:
  func_0x000107771b98();
code_r0x000107770c34:
  func_0x0001072c95d0();
  func_0x000107771b24(uStack_198);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b188(&pppuStack_1b0);
  __ZNSt3__119__shared_weak_countD2Ev(param_4);
  func_0x000107579550(&pppuStack_410);
  func_0x000107771c38();
  func_0x000107267da8(&ppppuStack_340);
  ppppuVar16 = &pppuStack_430;
  func_0x0001072c95d0();
  func_0x000107771b48();
  func_0x000100456794(auStack_5a0);
  func_0x000107878fec(auStack_5b8,pppppuVar11);
  func_0x00010533a9c0(auStack_588,auStack_5a0,auStack_5b8);
  func_0x00010048a6c8(auStack_570,auStack_588,&UNK_10f426c9a);
  ppuStack_5c8 = ppppuVar16[9];
  ppuStack_5d0 = ppppuVar16[8];
  if (ppppuVar16[9] != (undefined8 ***)0x0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_5e8,param_5);
  func_0x00010777193c(auStack_5f8,param_6,ppppuVar16 + 6);
  func_0x000107771c28(auStack_558,auStack_570,&ppuStack_5d0,auStack_5e8,auStack_5f8);
  func_0x0001072c9830(auStack_5f8);
  func_0x0001072c9854(auStack_5e8);
  func_0x0001072c97fc(&ppuStack_5d0);
  func_0x000107771be0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_588);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5a0);
  uStack_507 = 0;
  auStack_610[0] = 0;
  uStack_600 = 0;
  auStack_588[0] = 0;
  uStack_584 = 0;
  func_0x00010777067c(extraout_x8_00,auStack_558,pppppuVar7,0,ppppuVar14,auStack_610,auStack_588);
  func_0x0001072c9854(auStack_610);
  func_0x000107771bbc();
  return;
}



/* Entry: 107771788; end: 1077717df;  */

bool FUN_107771788(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((ulong)param_1[2] < (ulong)param_2[1]) {
    return true;
  }
  if ((ulong)param_2[1] < (ulong)param_1[2]) {
    return false;
  }
  pcVar3 = (char *)*param_1;
  pcVar4 = (char *)*param_2;
  do {
    cVar1 = *pcVar3;
    cVar2 = *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0' && cVar1 == cVar2);
  return cVar1 < cVar2;
}



/* Entry: 107771964; end: 1077719fb;  */

/* WARNING: Possible PIC construction at 0x000107771994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107771998) */
/* WARNING: Removing unreachable block (ram,0x0001077719e0) */
/* WARNING: Removing unreachable block (ram,0x0001077719f8) */
/* WARNING: Removing unreachable block (ram,0x0001077719cc) */

undefined1 * FUN_107771964(void)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107771b50();
  uStack_48 = 1;
  func_0x000107771a24();
  return auStack_50;
}



/* Entry: 107771b04; end: 107771c6b;  */

void FUN_107771b04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107772960; end: 107772a57;  */

void FUN_107772960(long *param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_78;
  ulong auStack_70 [7];
  undefined8 uStack_38;
  
  plVar3 = param_1;
  func_0x000107772bc8();
  uStack_38 = extraout_x8;
  (**(code **)(*plVar3 + 0x40))(auStack_70);
  lVar5 = param_1[0xd];
  uStack_78 = 0;
  func_0x0001073f26dc(&uStack_78,auStack_70);
  func_0x00010756af98(&uStack_78,param_1 + 9);
  uVar6 = lVar5 + uStack_78 * 0x1000 + (uStack_78 >> 4) + 0x9e3779b97f4a7c15 ^ uStack_78;
  func_0x000104c2f714(auStack_70);
  puVar7 = (ulong *)param_1[0xb];
  auStack_70[0] = uVar6;
  while (bVar1 = puVar7 == (ulong *)(param_1 + 0xc), !bVar1) {
    if (((double)puVar7[4] != -INFINITY) && (!NAN((double)puVar7[4]))) {
      func_0x000107451500(auStack_70);
    }
    puVar4 = auStack_70;
    func_0x00010756af98(puVar4,puVar7 + 5);
    func_0x000107772c20();
    puVar7 = puVar4;
  }
  uVar6 = auStack_70[0];
  func_0x000107772b94(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  iVar2 = (int)*(undefined8 *)(uVar6 + 0x48);
  func_0x000107772aa0();
  if (iVar2 == 0) {
    *(undefined1 *)extraout_x8_00 = 0;
  }
  else {
    *extraout_x8_00 = uVar6;
    *(undefined4 *)(extraout_x8_00 + 6) = 1;
  }
  *(bool *)(extraout_x8_00 + 7) = iVar2 != 0;
  return;
}



/* Entry: 107772c4c; end: 107772ce7;  */

/* WARNING: Possible PIC construction at 0x000107772ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107773260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107772cac) */
/* WARNING: Removing unreachable block (ram,0x000107772cd4) */
/* WARNING: Removing unreachable block (ram,0x000107772cc0) */
/* WARNING: Removing unreachable block (ram,0x000107773264) */

undefined ** FUN_107772c4c(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x8;
  uint uVar10;
  undefined **ppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined **ppuStack_3b8;
  long lStack_3b0;
  undefined *puStack_3a8;
  undefined *apuStack_3a0 [14];
  int iStack_330;
  undefined1 auStack_328 [160];
  undefined4 uStack_288;
  undefined8 uStack_280;
  double dStack_278;
  undefined4 uStack_218;
  int iStack_208;
  undefined1 auStack_1d0 [64];
  undefined8 uStack_190;
  undefined8 auStack_188 [12];
  undefined4 uStack_128;
  int iStack_118;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  
  func_0x0001077740c4();
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  *puVar6 = &PTR_DAT_1109d69d8;
  puVar6[1] = param_2;
  puVar6[2] = param_3;
  puVar6[3] = param_4;
  plVar8 = param_2;
  lVar9 = param_3;
  puStack_40 = puVar6;
  func_0x0001077740c4();
  uStack_d0 = extraout_x8;
  func_0x000107753050(&puStack_3a8,plVar8[9],lVar9,param_4);
  uVar3 = iStack_330 == 1;
  if (!(bool)uVar3) {
    ppuVar5 = (undefined **)(param_1 + 8);
    ppuVar4 = apuStack_3a0;
    func_0x00010756c040();
    goto code_r0x000107772dd4;
  }
  ppuVar5 = (undefined **)(param_3 + 0x108);
  ppuVar4 = (undefined **)(param_2 + 0xb);
  func_0x000107754e20();
  if ((int)ppuVar5 == 0) {
    ppuVar5 = (undefined **)(param_3 + 0x108);
    ppuVar4 = (undefined **)(param_2 + 0x12);
    func_0x000107754e20();
    if ((int)ppuVar5 != 0) goto code_r0x000107772dc8;
    ppuVar5 = &puStack_3a8;
    func_0x0001073405dc();
    iVar2 = *(int *)(ppuVar5 + 0xd);
    if (iVar2 == 0) goto code_r0x000107772dc8;
    if (iVar2 != 1) {
      uVar3 = iVar2 == 2;
      if ((((!(bool)uVar3) && (uVar3 = iVar2 == 3, !(bool)uVar3)) &&
          (uVar3 = iVar2 == 4, !(bool)uVar3)) &&
         (((uVar3 = iVar2 == 5, !(bool)uVar3 && (uVar3 = iVar2 == 6, !(bool)uVar3)) &&
          (uVar3 = iVar2 == 7, !(bool)uVar3)))) {
        uVar3 = iVar2 == 8;
        if ((bool)uVar3) {
          puStack_3d8 = (undefined *)0x0;
          uStack_3d0 = 0;
          uStack_3c8 = 0;
          lVar9 = *(long *)ppuVar5[1];
          lVar1 = *(long *)((long)ppuVar5[1] + 8);
          uVar3 = lVar9 == lVar1;
          if (!(bool)uVar3) {
            func_0x0001074b01dc(&puStack_3d8,(lVar1 - lVar9) / 0x70);
            func_0x0001072ba99c(param_3 + 0x108);
            uVar10 = 0;
            lVar1 = *(long *)((long)ppuVar5[1] + 8);
            for (lVar9 = *(long *)ppuVar5[1]; uVar3 = lVar9 == lVar1, !(bool)uVar3;
                lVar9 = lVar9 + 0x70) {
              dStack_278 = (double)uVar10;
              uStack_218 = 2;
              func_0x00010777411c(auStack_328);
              func_0x000107774130();
              func_0x0001077741a8();
              puVar7 = auStack_328;
              func_0x000104c2f714(puVar7);
              func_0x000107774190();
              func_0x0001077740f8();
              func_0x000107774130();
              func_0x0001072955a4(puVar7 + 8,lVar9 + 8);
              func_0x0001077740f0();
              func_0x0001077592e8(&uStack_280,auStack_58);
              if (iStack_208 == 1) {
                puVar6 = &uStack_280;
                func_0x0001073405dc(puVar6);
                func_0x00010726cc04(auStack_188,puVar6 + 1);
              }
              else {
                (**(code **)(*param_2 + 0x28))(auStack_1d0,param_2);
                func_0x0001077765a4(auStack_328,auStack_1d0,&ppuStack_3f0);
                func_0x000107776500(auStack_108,auStack_328);
                func_0x000107774158();
                func_0x000104c3323c(auStack_1d0);
                uStack_128 = 0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
              }
              func_0x000107774114();
              func_0x000107277668(&puStack_3d8,&uStack_190);
              func_0x00010726af18(auStack_188);
              uVar10 = uVar10 + 1;
            }
          }
          func_0x00010777411c(&uStack_280);
          func_0x0001077740d4();
          func_0x0001077740f0();
          func_0x0001077740f8();
          func_0x0001077740d4();
          func_0x0001077740f0();
          ppuVar4 = &puStack_3d8;
          func_0x000107277aa4(&uStack_280);
          *(double *)(param_1 + 0x18) = dStack_278;
          *(undefined8 *)(param_1 + 0x10) = uStack_280;
          uStack_280 = 0;
          dStack_278 = 0.0;
          func_0x0001077741d8(8);
          func_0x00010726b188();
          ppuVar5 = &puStack_3d8;
          func_0x000107277d70();
        }
        else {
          ppuVar5 = ppuVar5 + 1;
          puStack_3d8 = &UNK_10e52b660;
          uStack_3d0 = 0;
          uStack_3c8 = 0;
          uStack_3c0 = 0;
          lVar9 = *(long *)(*ppuVar5 + 0x18);
          if (lVar9 != 0) {
            func_0x0001072962ac(&puStack_3d8);
            func_0x0001072ba99c(param_3 + 0x108);
            func_0x000107348ee8();
            ppuStack_3f0 = &puStack_3d8;
            uStack_3e8 = 0;
            ppuStack_3b8 = ppuVar5;
            while (lStack_3b0 = lVar9, ppuStack_3b8 != (undefined **)0x0) {
              func_0x000107774144();
              func_0x000107277488(&uStack_190,auStack_1d0);
              func_0x00010777411c(auStack_108);
              func_0x000107774130();
              func_0x0001077741a8();
              func_0x000104c2f714(auStack_108);
              func_0x000107774190();
              func_0x000104c2f714(auStack_1d0);
              puVar6 = &uStack_190;
              func_0x000104c2fe00(puVar6,param_2 + 0x12);
              func_0x000107774130();
              func_0x0001072955a4(puVar6 + 1,lVar9 + 0x40);
              func_0x000104c2f714(&uStack_190);
              func_0x0001077592e8(&uStack_190,auStack_58);
              uVar3 = iStack_118 == 1;
              if ((bool)uVar3) {
                puVar6 = &uStack_190;
                func_0x0001073405dc(puVar6);
                func_0x0001077527e4(auStack_328,lVar9,puVar6);
              }
              else {
                func_0x000107774144();
                func_0x000104c318bc(auStack_328,auStack_1d0);
                uStack_288 = 0;
                func_0x000104c2f714(auStack_1d0);
              }
              func_0x000107774114();
              func_0x0001077527b8(&uStack_280,auStack_328);
              func_0x000107296400(&uStack_190,ppuStack_3f0,&uStack_280);
              uStack_3e0 = auStack_188[0];
              uStack_3e8 = uStack_190;
              func_0x0001072963cc(&uStack_3e8);
              func_0x00010729651c(&uStack_280);
              func_0x00010726aef4(auStack_328);
              func_0x0001072963cc(&ppuStack_3b8);
              lVar9 = lStack_3b0;
            }
          }
          func_0x00010777411c(&uStack_280);
          func_0x0001077740d4();
          func_0x0001077740f0();
          func_0x0001077740f8();
          func_0x0001077740d4();
          func_0x0001077740f0();
          ppuVar4 = &puStack_3d8;
          func_0x000107278fec(&uStack_280);
          *(double *)(param_1 + 0x18) = dStack_278;
          *(undefined8 *)(param_1 + 0x10) = uStack_280;
          uStack_280 = 0;
          dStack_278 = 0.0;
          func_0x0001077741d8(9);
          func_0x00010726b264();
          ppuVar5 = &puStack_3d8;
          func_0x00010726ae88();
        }
        goto code_r0x000107772dd4;
      }
      goto code_r0x000107772dc8;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar3 = 1;
  }
  else {
code_r0x000107772dc8:
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 1;
code_r0x000107772dd4:
  func_0x0001077741c0();
  func_0x0001077740b0(uStack_d0);
  if ((bool)uVar3) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_3d8;
  func_0x000107277d70();
  func_0x0001077741c0();
  func_0x0001077740e0();
  ppuVar4 = (undefined **)ppuVar4[3];
  if (ppuVar4 == (undefined **)0x0) {
    func_0x000104bfeb48(0,ppuVar5[9]);
    ppuVar5 = (undefined **)ppuVar4[3];
    if (ppuVar5 == ppuVar4) {
      lVar9 = 0x20;
    }
    else {
      if (ppuVar5 == (undefined **)0x0) {
        return ppuVar4;
      }
      lVar9 = 0x28;
    }
    (**(code **)(*ppuVar5 + lVar9))();
    return ppuVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar4 + 0x30))();
  return ppuVar4;
}



/* Entry: 107773d10; end: 107773d13;  */

undefined8 * FUN_107773d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d6950;
  func_0x0001072c9b9c(param_1 + 0x19);
  func_0x000104c2f714(param_1 + 0x12);
  func_0x000104c2f714(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107773e94; end: 107773ecb;  */

long FUN_107773e94(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d6a38);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107774090; end: 1077741eb;  */

void FUN_107774090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107774098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077749a4; end: 1077749c7;  */

void FUN_1077749a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *param_2;
  uStack_18 = param_2[1];
  func_0x000100062cf8(&uStack_20);
  return;
}



/* Entry: 107775108; end: 10777512b;  */

void FUN_107775108(void)

{
  func_0x00010777dca4();
  func_0x00010777512c();
  func_0x00010777d3c8();
  return;
}



/* Entry: 107775330; end: 107775367;  */

void FUN_107775330(void)

{
  func_0x00010777d738();
  func_0x00010777534c();
  return;
}



/* Entry: 1077755e0; end: 107775617;  */

void FUN_1077755e0(void)

{
  func_0x00010777d428();
  func_0x0001077755fc();
  return;
}



/* Entry: 1077758d8; end: 10777590b;  */

void FUN_1077758d8(void)

{
  func_0x00010777d5d0();
  func_0x00010777d520();
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107775f1c; end: 1077760fb;  */

void FUN_107775f1c(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  byte bStack_38;
  
  switch(*(undefined4 *)(param_2 + 0x68)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  case 1:
    uVar3 = 2;
    break;
  case 2:
    uVar3 = 1;
    break;
  case 3:
    uVar3 = 3;
    break;
  case 4:
    uVar3 = 4;
    break;
  default:
    switch(*(undefined4 *)(param_2 + 0x68)) {
    case 5:
      uVar3 = 8;
      break;
    case 6:
      uVar3 = 9;
      break;
    case 7:
      uVar3 = 0xb;
      break;
    case 8:
      auStack_48[0] = 0;
      bStack_38 = 0;
      lVar4 = **(long **)(param_2 + 8);
      lVar1 = (*(long **)(param_2 + 8))[1];
      do {
        if (lVar4 == lVar1) {
code_r0x000107776060:
          if (bStack_38 == 1) {
            func_0x0001072c9ff4(auStack_58,auStack_48);
          }
          else {
            uStack_50 = 6;
          }
          func_0x000107777824(auStack_78,auStack_58,
                              ((*(long **)(param_2 + 8))[1] - **(long **)(param_2 + 8)) / 0x70);
          func_0x00010777d70c();
          func_0x0001072c9884(auStack_78);
          func_0x00010777dbd8();
          func_0x0001072c9854(auStack_48);
          return;
        }
        FUN_107775f1c(auStack_58,lVar4);
        if ((bStack_38 & 1) == 0) {
          func_0x00010776a36c(auStack_78,auStack_58);
          func_0x00010777dd04();
          func_0x0001072c9854(auStack_78);
        }
        else {
          puVar2 = auStack_48;
          func_0x00010745de74(puVar2,auStack_58);
          if (((ulong)puVar2 & 1) == 0) {
            uStack_70 = 6;
            uStack_68 = 1;
            func_0x00010777dd04();
            func_0x0001072c9854(auStack_78);
            func_0x00010777dbd8();
            goto code_r0x000107776060;
          }
        }
        func_0x00010777dbd8();
        lVar4 = lVar4 + 0x70;
      } while( true );
    default:
      uVar3 = 5;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}



/* Entry: 107776fc4; end: 107776ff7;  */

ulong FUN_107776fc4(double *param_1)

{
  if (*(int *)(param_1 + 0xd) == 2) {
    func_0x0001072cb4bc();
    return (ulong)(uint)(float)*param_1 | 0x100000000;
  }
  return 0;
}



/* Entry: 10777765c; end: 1077776af;  */

void FUN_10777765c(void)

{
  undefined1 auStack_50 [48];
  
  func_0x00010777d5b8();
  func_0x00010777da50();
  func_0x00010777da64();
  func_0x00010777d71c();
  func_0x00010777daac();
  func_0x00010777d8b4(auStack_50);
  func_0x00010777d70c();
  func_0x00010777da64();
  func_0x00010777d6f8();
  func_0x00010777da5c();
  return;
}



/* Entry: 107777a8c; end: 107777a93;  */

void FUN_107777a8c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *param_1;
  lVar4 = param_2;
  func_0x00010734936c();
  func_0x000104c2db28();
  lStack_30 = param_2;
  lVar1 = lVar4;
  while (lStack_28 = lVar1, lStack_30 != 0) {
    lVar3 = lVar1;
    func_0x000107264c5c(lVar1);
    func_0x000107349430(uVar2,lVar3,lVar4,0);
    lVar4 = lVar1 + 0x38;
    func_0x00010777dd7c();
    func_0x000104c2de10(&lStack_30);
    lVar1 = lStack_28;
  }
  func_0x00010777dd84();
  return;
}



/* Entry: 107777d1c; end: 107777d9f;  */

undefined1  [16] FUN_107777d1c(ulong param_1)

{
  undefined8 uVar1;
  ulong unaff_x22;
  ulong unaff_x28;
  byte bVar2;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined1 auVar3 [16];
  
  func_0x00010777db18();
  func_0x00010777d9e0();
  do {
    func_0x00010777dc8c();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x00010777d98c();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_107777d84;
      }
    }
    bVar2 = NEON_umaxv(CONCAT17(-((char)((ulong)unaff_d10 >> 0x38) ==
                                 (char)((ulong)unaff_d9 >> 0x38)),
                                CONCAT16(-((char)((ulong)unaff_d10 >> 0x30) ==
                                          (char)((ulong)unaff_d9 >> 0x30)),
                                         CONCAT15(-((char)((ulong)unaff_d10 >> 0x28) ==
                                                   (char)((ulong)unaff_d9 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)unaff_d10 >> 0x20) ==
                                                            (char)((ulong)unaff_d9 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)unaff_d10 >>
                                                                            0x18) ==
                                                                     (char)((ulong)unaff_d9 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  unaff_d10 >> 0x10) ==
                                                  (char)((ulong)unaff_d9 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)unaff_d10 >> 8) ==
                                                            (char)((ulong)unaff_d9 >> 8)),
                                                           -((char)unaff_d10 == (char)unaff_d9))))))
                                        )),1);
  } while ((bVar2 & 1) == 0);
  func_0x00010777dd70();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_107777d84:
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = unaff_x22;
  return auVar3;
}



/* Entry: 107778130; end: 107778133;  */

void FUN_107778130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d6b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10777832c; end: 10777834f;  */

void FUN_10777832c(long *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w10;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  long lVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar11;
  byte abStack_380 [736];
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_38;
  
  uVar3 = (int)param_1[0xd] == 2;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    param_1 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    unaff_x20 = &lStack_a0;
    lStack_98 = *param_1;
    uStack_38 = 2;
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((abStack_380[0x2c8] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &LAB_1077783d8;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_380 + 0x2b0);
  }
  uVar3 = (int)param_1[0xd] == 3;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar4,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    param_1 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001072ddd58();
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -200) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
    }
    func_0x00010777d8a4();
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &UNK_107778484;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x20 = plVar4;
  }
  uVar3 = (int)param_1[0xd] == 4;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    param_1 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    unaff_x20 = (long *)((long)register0x00000008 + -0xa0);
    lVar7 = *param_1;
    *(long *)((long)register0x00000008 + -0x90) = param_1[1];
    *(long *)((long)register0x00000008 + -0x98) = lVar7;
    *(undefined4 *)((long)register0x00000008 + -0x38) = 4;
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xb8) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &UNK_107778530;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar4 = param_2;
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar3) {
    lVar7 = param_1[2];
    lVar11 = param_1[1];
    *(long *)((long)register0x00000008 + -0xd0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xd8) = lVar11;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
    func_0x00010777d818();
    func_0x00010777d550();
code_r0x000107778790:
    func_0x00010777d2ec();
    func_0x0001072dbd40((undefined1 *)((long)register0x00000008 + -0xf8));
code_r0x0001077787a4:
    func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0x110));
  }
  else {
    uVar3 = extraout_w8 == 6;
    if ((bool)uVar3) {
      func_0x000107348eb0((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
code_r0x0001077787a0:
      func_0x00010777d724();
      goto code_r0x0001077787a4;
    }
    uVar3 = extraout_w8 == 7;
    if ((bool)uVar3) {
      func_0x000107348ecc((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    uVar3 = extraout_w8 == 8;
    if (!(bool)uVar3) {
      func_0x0001074fd134((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    lVar7 = *(long *)param_1[1];
    lVar11 = ((long *)param_1[1])[1];
    if (lVar11 - lVar7 != 0) {
      uVar5 = (lVar11 - lVar7) / 0x70;
      if (uVar5 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      func_0x000107778178();
      *(ulong *)((long)register0x00000008 + -0xe0) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd8) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd0) = uVar5;
      *(ulong *)((long)register0x00000008 + -200) = uVar5 + (long)plVar4 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar7 = *(long *)param_1[1];
      lVar11 = ((long *)param_1[1])[1];
    }
    do {
      uVar3 = lVar7 == lVar11;
      if ((bool)uVar3) {
        func_0x000107778054((undefined1 *)((long)register0x00000008 + -0xe0),
                            (undefined1 *)((long)register0x00000008 + -0x110));
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158((undefined1 *)((long)register0x00000008 + -0xe0));
        goto code_r0x0001077787f0;
      }
      lVar6 = *param_2;
      func_0x0001077754c8((undefined1 *)((long)register0x00000008 + -0xf8),lVar7);
      bVar1 = *(byte *)((long)register0x00000008 + -0xe8);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)((long)register0x00000008 + -0x108);
        uVar8 = *(ulong *)((long)register0x00000008 + -0x100);
        uVar3 = uVar5 == uVar8;
        if (uVar5 < uVar8) {
          func_0x0001072f64f4(uVar5,(undefined1 *)((long)register0x00000008 + -0xf8));
          lVar6 = uVar5 + 0x10;
        }
        else {
          lVar10 = uVar5 - *(long *)((long)register0x00000008 + -0x110);
          uVar5 = (lVar10 >> 4) + 1;
          if (uVar5 >> 0x3c != 0) goto code_r0x000107778800;
          uVar8 = uVar8 - *(long *)((long)register0x00000008 + -0x110);
          uVar9 = (long)uVar8 >> 3;
          if ((ulong)((long)uVar8 >> 3) <= uVar5) {
            uVar9 = uVar5;
          }
          uVar3 = uVar8 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar8) {
            uVar9 = 0xfffffffffffffff;
          }
          *(undefined1 **)((long)register0x00000008 + -0xc0) =
               (undefined1 *)((long)register0x00000008 + -0x100);
          if (uVar9 == 0) {
            uVar9 = 0;
            lVar6 = 0;
          }
          else {
            func_0x000107778178();
          }
          lVar10 = uVar9 + lVar10;
          *(ulong *)((long)register0x00000008 + -0xe0) = uVar9;
          *(long *)((long)register0x00000008 + -0xd8) = lVar10;
          *(long *)((long)register0x00000008 + -0xd0) = lVar10;
          *(ulong *)((long)register0x00000008 + -200) = uVar9 + lVar6 * 0x10;
          func_0x0001072f64f4(lVar10,(undefined1 *)((long)register0x00000008 + -0xf8));
          *(long *)((long)register0x00000008 + -0xd0) = lVar10 + 0x10;
          func_0x00010777dd9c();
          lVar6 = *(long *)((long)register0x00000008 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)((long)register0x00000008 + -0x108) = lVar6;
      }
      func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0xf8));
      lVar7 = lVar7 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278((undefined1 *)((long)register0x00000008 + -0x110));
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x70));
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  func_0x000107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 107778998; end: 1077789df;  */

long * FUN_107778998(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x10;
    func_0x0001072dbd40();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107778e6c; end: 107778f0b;  */

void FUN_107778e6c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int extraout_w8;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  iVar2 = (int)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x00010777da78();
  if (((((bool)in_ZR) || (extraout_w8 == 6)) || (extraout_w8 == 7)) ||
     ((extraout_w8 != 8 || (func_0x00010777dbe0(), extraout_x8 != 0x3f0)))) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x24) = 0;
  }
  else {
    puVar4 = &uStack_54;
    for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x70) {
      func_0x00010777ddc4();
      if (iVar2 == 0) {
        *(undefined1 *)param_1 = 0;
        uVar3 = 0;
        goto LAB_107778f04;
      }
      *(undefined4 *)puVar4 = uVar1;
      puVar4 = (undefined8 *)((long)puVar4 + 4);
    }
    param_1[1] = uStack_4c;
    *param_1 = uStack_54;
    param_1[3] = uStack_3c;
    param_1[2] = uStack_44;
    *(undefined4 *)(param_1 + 4) = uStack_34;
    uVar3 = 1;
LAB_107778f04:
    *(undefined1 *)((long)param_1 + 0x24) = uVar3;
  }
  return;
}



/* Entry: 1077790f4; end: 107779163;  */

void FUN_1077790f4(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  undefined1 uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  undefined1 extraout_w8;
  undefined1 uVar21;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar22;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 *unaff_x19;
  undefined4 uVar23;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 *puVar24;
  undefined1 *unaff_x22;
  undefined1 *puVar25;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  code *pcVar28;
  long lVar29;
  undefined8 uVar30;
  byte abStack_1350 [4572];
  undefined4 uStack_174;
  long alStack_170 [16];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  
  pbVar3 = auStack_c0;
  pppppppuVar26 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  func_0x00010777dd10();
  func_0x00010777d958();
  func_0x00010777d478();
  bVar1 = unaff_x20 >> 0x20 != 0;
  if (bVar1) {
    uStack_b4 = (int)unaff_x20;
    func_0x00010777d510();
    func_0x00010777d2c0();
    func_0x0001072dbd40();
  }
  else {
    *unaff_x19 = 0;
  }
  unaff_x19[0x10] = bVar1;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar27 = &UNK_107779164;
  plVar16 = param_1;
  func_0x00010777d638();
  uVar10 = (int)plVar16[0xd] == 4;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    pbVar3 = abStack_1350 + 0x11d0;
    puStack_c8 = &UNK_107779164;
    ppppppuStack_d0 = pppppppuVar26;
    func_0x00010777d1f4();
    unaff_x21 = alStack_170;
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_174 = (int)unaff_x20;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
    *(bool *)(param_1 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar27 = &UNK_1077791fc;
    plVar16 = plVar17;
    func_0x00010777d638();
    param_1 = plVar17;
    pppppppuVar26 = &ppppppuStack_d0;
  }
  puVar9 = pbVar3 + -0xc0;
  *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
  *(long **)(pbVar3 + -0x28) = unaff_x21;
  *(ulong *)(pbVar3 + -0x20) = unaff_x20;
  *(long **)(pbVar3 + -0x18) = param_1;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar26;
  *(undefined **)(pbVar3 + -8) = puVar27;
  puVar24 = pbVar3 + -0x10;
  plVar17 = plVar16;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar23 = SUB84(plVar16,0);
  if ((bool)uVar10) {
    lVar22 = plVar16[2];
    lVar29 = plVar16[1];
    *(long *)(pbVar3 + -0xa0) = plVar16[2];
    *(long *)(pbVar3 + -0xa8) = lVar29;
    if (lVar22 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)plVar16 >> 0x20 != 0) {
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    uVar20 = (undefined1)((ulong)plVar16 >> 0x20);
    *(undefined1 *)param_1 = 0;
code_r0x000107779368:
    *(undefined1 *)(param_1 + 2) = uVar20;
  }
  else {
    uVar10 = extraout_w8_05 == 6;
    if ((bool)uVar10) {
      unaff_x21 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar20 = 1;
      goto code_r0x000107779368;
    }
    uVar10 = extraout_w8_05 == 7;
    if ((bool)uVar10) {
      unaff_x21 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    uVar10 = extraout_w8_05 == 8;
    if (!(bool)uVar10) {
      unaff_x21 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(plVar16[1]);
    puVar4 = pbVar3 + -0xb0;
    func_0x0001073b504c();
    unaff_x21 = (long *)((undefined8 *)plVar16[1])[1];
    for (plVar16 = *(long **)plVar16[1]; uVar10 = plVar16 == unaff_x21, !(bool)uVar10;
        plVar16 = plVar16 + 0xe) {
      func_0x00010777ddc4();
      *(int *)(pbVar3 + -0xc0) = (int)puVar4;
      pbVar3[-0xbc] = (char)((ulong)puVar4 >> 0x20);
      if ((ulong)puVar4 >> 0x20 == 0) {
        func_0x00010777d724();
        goto code_r0x000107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
code_r0x000107779380:
    plVar17 = (long *)(pbVar3 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar28 = (code *)&SUB_1077793bc;
  func_0x00010777d638();
  if ((int)plVar17[0xd] == 0) {
    plVar12 = param_2 + 1;
    puVar9 = pbVar3 + -0x1b0;
    *(long **)(pbVar3 + -0xe0) = plVar16;
    *(long **)(pbVar3 + -0xd8) = param_1;
    *(undefined1 **)(pbVar3 + -0xd0) = puVar24;
    *(undefined **)(pbVar3 + -200) = &SUB_1077793bc;
    puVar24 = pbVar3 + -0xd0;
    func_0x00010777d224(plVar12,plVar17 + 1);
    *(undefined4 *)(pbVar3 + -0x130) = 0;
    param_2 = (long *)*plVar12;
    plVar16 = (long *)(pbVar3 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar3[-0xf0] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar28 = (code *)&UNK_107779450;
    func_0x00010777d638();
  }
  uVar10 = (int)plVar17[0xd] == 1;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    func_0x00010777d224(plVar12,plVar17 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar12;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar28 = FUN_1077794e4;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  uVar10 = (int)plVar17[0xd] == 2;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    func_0x00010777d224(plVar12,plVar17 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar12;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar28 = (code *)&LAB_107779578;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  uVar10 = (int)plVar17[0xd] == 3;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    param_2 = plVar17 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    func_0x00010777d224(plVar12);
    param_1 = (long *)(puVar9 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    plVar17 = param_1;
    func_0x00010777dbd0();
    pcVar28 = (code *)&UNK_1077795e4;
    func_0x00010777d638();
    puVar9 = puVar9 + -0x70;
  }
  uVar10 = (int)plVar17[0xd] == 4;
  if ((bool)uVar10) {
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar17 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar28 = (code *)&UNK_107779678;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  puVar4 = puVar9 + -0x120;
  *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
  *(ulong *)(puVar9 + -0x48) = unaff_x25;
  *(long **)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
  *(long **)(puVar9 + -0x28) = unaff_x21;
  *(long **)(puVar9 + -0x20) = plVar16;
  *(long **)(puVar9 + -0x18) = param_1;
  *(undefined1 **)(puVar9 + -0x10) = puVar24;
  *(code **)(puVar9 + -8) = pcVar28;
  puVar24 = puVar9 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar9 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar10) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar18 = (undefined1 *)plVar16[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar9[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar13 = (undefined8 *)(puVar9 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar10 = extraout_w8_06 == 6;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar10 = extraout_w8_06 == 7;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar10 = extraout_w8_06 == 8;
    if (!(bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(puVar9 + -0x90) = 0;
    *(undefined8 *)(puVar9 + -0x88) = 0;
    *(undefined8 *)(puVar9 + -0x98) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072dd514(puVar9 + -0x98);
    func_0x00010777de3c();
    do {
      uVar10 = unaff_x21 == unaff_x24;
      if ((bool)uVar10) {
        puVar18 = puVar9 + -0x98;
        func_0x0001073fb2d4(puVar9 + -0x110);
        lVar22 = *(long *)(puVar9 + -0x110);
        param_1[1] = *(long *)(puVar9 + -0x108);
        *param_1 = lVar22;
        *(undefined8 *)(puVar9 + -0x110) = 0;
        *(undefined8 *)(puVar9 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar9 + -0x110);
        goto code_r0x000107779838;
      }
      puVar18 = (undefined1 *)*plVar16;
      func_0x000107323900(puVar9 + -0x110,unaff_x21);
      bVar2 = puVar9[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar9 + -0x110;
        func_0x0001072d17f4(puVar9 + -0x98);
      }
      func_0x00010724b3d8(puVar9 + -0x110);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar13 = (undefined8 *)(puVar9 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar9 + -0x58));
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar14 = (undefined8 *)(puVar9 + -0x98);
  func_0x00010724b3d8();
  puVar27 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar14 + 0xd) == 0) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar4 = puVar9 + -0x250;
    *(undefined8 *)(puVar9 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar9 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar9 + -0x140) = puVar13;
    *(long **)(puVar9 + -0x138) = param_1;
    *(undefined1 **)(puVar9 + -0x130) = puVar24;
    *(undefined **)(puVar9 + -0x128) = &UNK_1077798bc;
    puVar24 = puVar9 + -0x130;
    func_0x00010777d1f4(puVar15,puVar14 + 1);
    *(undefined4 *)(puVar9 + -0x1e8) = 0;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar9[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar27 = &UNK_107779964;
    func_0x00010777d638();
    puVar13 = (undefined8 *)(puVar9 + -0x250);
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 1;
  if ((bool)uVar10) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar14 = puVar14 + 1;
    puVar5 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar24;
    *(undefined **)(puVar4 + -8) = puVar27;
    puVar24 = puVar4 + -0x10;
    func_0x00010777d1f4();
    puVar4[-0x128] = *(undefined1 *)puVar14;
    *(undefined4 *)(puVar4 + -200) = 1;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar27 = &UNK_107779a1c;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar5;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 2;
  if ((bool)uVar10) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar14 = puVar14 + 1;
    puVar6 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar24;
    *(undefined **)(puVar4 + -8) = puVar27;
    puVar24 = puVar4 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar4 + -0x128) = *puVar14;
    *(undefined4 *)(puVar4 + -200) = 2;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar27 = &UNK_107779ad4;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar6;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 3;
  if ((bool)uVar10) {
    puVar15 = puVar14 + 1;
    puVar14 = (undefined8 *)(puVar4 + -0x130);
    plVar7 = (long *)(puVar4 + -0x130);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(long **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar24;
    *(undefined **)(puVar4 + -8) = puVar27;
    puVar24 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar18 + 8,puVar15);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar27 = &UNK_107779b94;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = (undefined8 *)(puVar18 + 8);
    unaff_x21 = plVar7;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 4;
  if ((bool)uVar10) {
    puVar14 = puVar14 + 1;
    puVar8 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar24;
    *(undefined **)(puVar4 + -8) = puVar27;
    puVar24 = puVar4 + -0x10;
    func_0x00010777d1f4();
    uVar30 = *puVar14;
    *(undefined8 *)(puVar4 + -0x120) = puVar14[1];
    *(undefined8 *)(puVar4 + -0x128) = uVar30;
    *(undefined4 *)(puVar4 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar27 = &UNK_107779c4c;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar8;
  }
  puVar9 = puVar4 + -0x150;
  puVar25 = puVar4 + -0x150;
  puVar18 = puVar4 + -0x150;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(ulong *)(puVar4 + -0x48) = unaff_x25;
  *(long **)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar4 + -0x20) = puVar13;
  *(long **)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = puVar24;
  *(undefined **)(puVar4 + -8) = puVar27;
  puVar24 = puVar4 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar4 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar10) {
    lVar22 = unaff_x21[2];
    lVar29 = unaff_x21[1];
    *(long *)(puVar4 + -0x140) = unaff_x21[2];
    *(long *)(puVar4 + -0x148) = lVar29;
    if (lVar22 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar4 + -0xe8) = 5;
    puVar19 = (undefined1 *)puVar13[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (long *)(puVar4 + -0x150);
    puVar18 = unaff_x22;
    if ((puVar4[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (long *)(puVar4 + -0x150);
      puVar25 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    plVar16 = (long *)(puVar4 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar18;
  }
  else {
    uVar10 = extraout_w8_07 == 6;
    if ((bool)uVar10) {
      func_0x00010777d6c8();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar18 = puVar4 + -0x150;
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar25 = puVar4 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar18 = puVar25;
      goto code_r0x000107779dfc;
    }
    uVar10 = extraout_w8_07 == 7;
    if ((bool)uVar10) {
      func_0x00010777d6bc();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar18 = puVar4 + -0x150;
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar25 = puVar4 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar10 = extraout_w8_07 == 8;
    if (!(bool)uVar10) {
      func_0x00010777d6d4();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar4 + -0xd8) = 0;
    *(undefined8 *)(puVar4 + -0xd0) = 0;
    *(undefined8 *)(puVar4 + -0xe0) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072ac134(puVar4 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar10 = unaff_x21 == unaff_x24;
      if ((bool)uVar10) {
        puVar19 = puVar4 + -0xe0;
        func_0x000107327958(puVar4 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar4 + -0xa0,unaff_x21,*puVar13);
      puVar19 = puVar4 + -0xa0;
      func_0x00010729d394(puVar4 + -0x150);
      func_0x000104c3323c(puVar4 + -0xa0);
      bVar2 = puVar4[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar19 = puVar4 + -0x150;
        func_0x0001072d7f34(puVar4 + -0xe0);
      }
      func_0x000107267ed0(puVar4 + -0x150);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    plVar16 = (long *)(puVar4 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar4 + -0x58));
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar17 = (long *)(puVar4 + -0xa0);
  func_0x000107267ed0();
  pcVar28 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar11 = (uint)plVar16;
  uVar20 = SUB81(plVar16,0);
  if ((int)plVar17[0xd] == 0) {
    plVar12 = (long *)(puVar19 + 8);
    puVar9 = puVar4 + -0x210;
    *(undefined1 **)(puVar4 + -0x180) = unaff_x22;
    *(long **)(puVar4 + -0x178) = unaff_x21;
    *(long **)(puVar4 + -0x170) = plVar16;
    *(long **)(puVar4 + -0x168) = param_1;
    *(undefined1 **)(puVar4 + -0x160) = puVar24;
    *(undefined **)(puVar4 + -0x158) = &UNK_107779ed8;
    puVar24 = puVar4 + -0x160;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    *(undefined4 *)(puVar4 + -0x198) = 0;
    puVar19 = (undefined1 *)*plVar12;
    unaff_x21 = (long *)(puVar4 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar21 = extraout_w8;
    }
    else {
      puVar4[-0x201] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar21 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar21;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar28 = (code *)&UNK_107779f6c;
    plVar17 = plVar12;
    func_0x00010777d638();
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 1;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = unaff_x21;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    unaff_x21 = (long *)(puVar9 + -0xb0);
    func_0x00010777dae0();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar21 = extraout_w8_00;
    }
    else {
      puVar9[-0xb1] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar21 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar21;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar28 = (code *)&UNK_10777a170;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 2;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = unaff_x21;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    unaff_x21 = (long *)(puVar9 + -0xb0);
    func_0x00010777dacc();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_01;
    }
    else {
      puVar9[-0xb1] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar28 = (code *)&UNK_10777a208;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 3;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = unaff_x21;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    plVar16 = plVar12;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    func_0x00010777dd10();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_02;
    }
    else {
      puVar9[-0xb1] = (char)plVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar28 = FUN_10777a2a0;
    plVar17 = plVar16;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar16;
    plVar16 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 4;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = unaff_x21;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar24;
    *(code **)(puVar9 + -8) = pcVar28;
    puVar24 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    unaff_x21 = (long *)(puVar9 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_03;
    }
    else {
      puVar9[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar28 = (code *)&LAB_10777a338;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar11 = (uint)plVar17;
  *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
  *(long **)(puVar9 + -0x28) = unaff_x21;
  *(long **)(puVar9 + -0x20) = plVar16;
  *(long **)(puVar9 + -0x18) = param_1;
  *(undefined1 **)(puVar9 + -0x10) = puVar24;
  *(code **)(puVar9 + -8) = pcVar28;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar10) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) != 0) {
      puVar9[-0xc0] = (char)plVar16;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar20 = extraout_w8_04;
  }
  else {
    uVar10 = extraout_w8_08 == 6;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar11 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar9[-0xc0] = (char)uVar11;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar10 = extraout_w8_08 == 7;
      if ((bool)uVar10) {
        unaff_x22 = puVar9 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar11 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar9[-0xc0] = (char)uVar11;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar10 = extraout_w8_08 == 8;
        if ((bool)uVar10) {
          func_0x00010777dce0();
          func_0x00010777d398(unaff_x21[1]);
          func_0x0001075356bc(puVar9 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)unaff_x21[1])[1];
          for (puVar24 = *(undefined1 **)unaff_x21[1]; uVar10 = puVar24 == unaff_x22, !(bool)uVar10;
              puVar24 = puVar24 + 0x70) {
            puVar4 = puVar24;
            func_0x000107775a54(puVar24,*plVar16);
            *(short *)(puVar9 + -0xc0) = (short)puVar4;
            if (((uint)puVar4 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar9 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar9 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar11 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar9[-0xc0] = (char)uVar11;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar20 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar20;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar9 + -0xd0) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 1077794e4; end: 107779507;  */

void FUN_1077794e4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 extraout_w8;
  undefined1 uVar14;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar15;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar17;
  undefined1 *unaff_x22;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  byte abStack_f30 [3856];
  
  uVar7 = *(int *)(param_1 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar10 = param_2 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(puVar10,param_1 + 1);
    func_0x00010777d904();
    param_2 = (undefined8 *)*puVar10;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((abStack_f30[0xf00] & 1) == 0) {
      func_0x00010777d724();
      param_1 = puVar10;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      param_1 = puVar10;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = &LAB_107779578;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_f30 + 0xe40);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar10 = param_2 + 1;
    param_2 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(puVar10);
    unaff_x19 = (undefined8 *)((long)register0x00000008 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010777dbd0();
    unaff_x30 = &UNK_1077795e4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar7) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(param_2 + 1,param_1 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x30) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = &UNK_107779678;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar12 = (undefined1 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar7 = extraout_w8_05 == 6;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6c8();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar7 = extraout_w8_05 == 7;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6bc();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar7 = extraout_w8_05 == 8;
    if (!(bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6d4();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514((undefined1 *)((long)register0x00000008 + -0x98));
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x98);
        func_0x0001073fb2d4((undefined1 *)((long)register0x00000008 + -0x110));
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x110);
        unaff_x19[1] = *(undefined8 *)((long)register0x00000008 + -0x108);
        *unaff_x19 = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c((undefined1 *)((long)register0x00000008 + -0x110));
        goto code_r0x000107779838;
      }
      puVar12 = (undefined1 *)*unaff_x20;
      func_0x000107323900((undefined1 *)((long)register0x00000008 + -0x110),unaff_x21);
      bVar1 = *(byte *)((long)register0x00000008 + -0xd8);
      unaff_x25 = (ulong)bVar1;
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x110);
        func_0x0001072d17f4((undefined1 *)((long)register0x00000008 + -0x98));
      }
      func_0x00010724b3d8((undefined1 *)((long)register0x00000008 + -0x110));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar11 = (undefined8 *)((long)register0x00000008 + -0x98);
  func_0x00010724b3d8();
  puVar20 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar9 = (undefined8 *)(puVar12 + 8);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x250);
    *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x140) = puVar10;
    *(undefined8 **)((long)register0x00000008 + -0x138) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x130) = puVar17;
    *(undefined **)((long)register0x00000008 + -0x128) = &UNK_1077798bc;
    puVar17 = (undefined1 *)((long)register0x00000008 + -0x130);
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x1e8) = 0;
    puVar12 = (undefined1 *)*puVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779964;
    func_0x00010777d638();
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x250);
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar12 + 8);
    puVar11 = puVar11 + 1;
    puVar3 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar11;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar12 = (undefined1 *)*puVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar3;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar12 + 8);
    puVar11 = puVar11 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar11;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar12 = (undefined1 *)*puVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar4;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar9 = puVar11 + 1;
    puVar11 = (undefined8 *)(puVar2 + -0x130);
    puVar5 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar12 + 8,puVar9);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = (undefined8 *)(puVar12 + 8);
    unaff_x21 = puVar5;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar11 = puVar11 + 1;
    puVar6 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar22 = *puVar11;
    *(undefined8 *)(puVar2 + -0x120) = puVar11[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar22;
    *(undefined4 *)(puVar2 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar6;
  }
  puVar12 = puVar2 + -0x150;
  puVar18 = puVar2 + -0x150;
  puVar19 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar10;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar17;
  *(undefined **)(puVar2 + -8) = puVar20;
  puVar17 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar7) {
    lVar16 = *(long *)(unaff_x21 + 0x10);
    uVar22 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(puVar2 + -0x148) = uVar22;
    if (lVar16 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar13 = (undefined1 *)puVar10[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = puVar2 + -0x150;
    puVar19 = unaff_x22;
    if ((puVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = puVar2 + -0x150;
      puVar18 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar10 = (undefined8 *)(puVar2 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar19;
  }
  else {
    uVar7 = extraout_w8_06 == 6;
    if ((bool)uVar7) {
      func_0x00010777d6c8();
      puVar13 = (undefined1 *)puVar10[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar19 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = puVar2 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar19 = puVar18;
      goto code_r0x000107779dfc;
    }
    uVar7 = extraout_w8_06 == 7;
    if ((bool)uVar7) {
      func_0x00010777d6bc();
      puVar13 = (undefined1 *)puVar10[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar19 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = puVar2 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar7 = extraout_w8_06 == 8;
    if (!(bool)uVar7) {
      func_0x00010777d6d4();
      puVar13 = (undefined1 *)puVar10[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar2 + -0xd8) = 0;
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(puVar2 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar13 = puVar2 + -0xe0;
        func_0x000107327958(puVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar10);
      puVar13 = puVar2 + -0xa0;
      func_0x00010729d394(puVar2 + -0x150);
      func_0x000104c3323c(puVar2 + -0xa0);
      bVar1 = puVar2[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = puVar2 + -0x150;
        func_0x0001072d7f34(puVar2 + -0xe0);
      }
      func_0x000107267ed0(puVar2 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar10 = (undefined8 *)(puVar2 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar11 = (undefined8 *)(puVar2 + -0xa0);
  func_0x000107267ed0();
  pcVar21 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar8 = (uint)puVar10;
  uVar15 = SUB81(puVar10,0);
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    puVar12 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x178) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x170) = puVar10;
    *(undefined8 **)(puVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x160) = puVar17;
    *(undefined **)(puVar2 + -0x158) = &UNK_107779ed8;
    puVar17 = puVar2 + -0x160;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar13 = (undefined1 *)*puVar9;
    unaff_x21 = puVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8;
    }
    else {
      puVar2[-0x201] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_107779f6c;
    puVar11 = puVar9;
    func_0x00010777d638();
    unaff_x19 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    unaff_x21 = puVar12 + -0xb0;
    func_0x00010777dae0();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_00;
    }
    else {
      puVar12[-0xb1] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a170;
    puVar11 = puVar9;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    unaff_x21 = puVar12 + -0xb0;
    func_0x00010777dacc();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_01;
    }
    else {
      puVar12[-0xb1] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a208;
    puVar11 = puVar9;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    puVar10 = puVar9;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    func_0x00010777dd10();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_02;
    }
    else {
      puVar12[-0xb1] = (char)puVar9;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = FUN_10777a2a0;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar10;
    puVar10 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    unaff_x21 = puVar12 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_03;
    }
    else {
      puVar12[-0xb1] = (char)puVar10;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&LAB_10777a338;
    puVar11 = puVar9;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar8 = (uint)puVar11;
  *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar12 + -0x20) = puVar10;
  *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar12 + -0x10) = puVar17;
  *(code **)(puVar12 + -8) = pcVar21;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) != 0) {
      puVar12[-0xc0] = (char)puVar10;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar15 = extraout_w8_04;
  }
  else {
    uVar7 = extraout_w8_07 == 6;
    if ((bool)uVar7) {
      unaff_x22 = puVar12 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar12[-0xc0] = (char)uVar8;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar7 = extraout_w8_07 == 7;
      if ((bool)uVar7) {
        unaff_x22 = puVar12 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar12[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar7 = extraout_w8_07 == 8;
        if ((bool)uVar7) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar12 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar17 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar7 = puVar17 == unaff_x22, !(bool)uVar7; puVar17 = puVar17 + 0x70) {
            puVar2 = puVar17;
            func_0x000107775a54(puVar17,*puVar10);
            *(short *)(puVar12 + -0xc0) = (short)puVar2;
            if (((uint)puVar2 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar12 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar12 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar12[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar15 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar15;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar12 + -0xd0) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 1077798dc; end: 107779963;  */

void FUN_1077798dc(long *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  undefined1 uVar15;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar16;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined1 *puVar17;
  undefined1 *unaff_x22;
  undefined1 *puVar18;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar19;
  undefined *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  byte abStack_bc0 [2656];
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [104];
  undefined4 uStack_c8;
  byte bStack_40;
  
  pbVar4 = auStack_130;
  pppppppuVar19 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  uStack_c8 = 0;
  lVar13 = *param_1;
  func_0x00010777d4cc();
  func_0x00010777d6b0();
  func_0x00010777d928();
  func_0x00010777d648();
  if ((bStack_40 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d6a4();
    func_0x00010777d2ac();
    func_0x00010777d2d4();
    func_0x00010777d7d0();
  }
  func_0x00010777d8ac();
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6e0();
  func_0x00010777d8ac();
  puVar20 = &UNK_107779964;
  func_0x00010777d638();
  uVar6 = (int)param_1[0xd] == 1;
  if ((bool)uVar6) {
    plVar8 = (long *)(lVar13 + 8);
    param_1 = param_1 + 1;
    pbVar4 = abStack_bc0 + 0x960;
    puStack_138 = &UNK_107779964;
    ppppppuStack_140 = pppppppuVar19;
    func_0x00010777d1f4();
    abStack_bc0[0x968] = (byte)*param_1;
    abStack_bc0[0x9c8] = 1;
    abStack_bc0[0x9c9] = 0;
    abStack_bc0[0x9ca] = 0;
    abStack_bc0[0x9cb] = 0;
    lVar13 = *plVar8;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((abStack_bc0[0xa50] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar8;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar8;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779a1c;
    func_0x00010777d638();
    pppppppuVar19 = &ppppppuStack_140;
  }
  uVar6 = (int)param_1[0xd] == 2;
  if ((bool)uVar6) {
    plVar8 = (long *)(lVar13 + 8);
    param_1 = param_1 + 1;
    *(undefined8 *)((long)pbVar4 + -0x30) = unaff_x28;
    *(undefined8 *)((long)pbVar4 + -0x28) = unaff_x27;
    *(byte **)((long)pbVar4 + -0x20) = pbVar4;
    *(undefined8 **)((long)pbVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)pbVar4 + -0x10) = pppppppuVar19;
    *(undefined **)((long)pbVar4 + -8) = puVar20;
    pppppppuVar19 = (undefined8 *******)((long)pbVar4 + -0x10);
    func_0x00010777d1f4();
    *(long *)((long)pbVar4 + -0x128) = *param_1;
    *(undefined4 *)((long)pbVar4 + -200) = 2;
    lVar13 = *plVar8;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)pbVar4 + -0x40) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar8;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar8;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779ad4;
    func_0x00010777d638();
    pbVar4 = (byte *)((long)pbVar4 + -0x130);
  }
  uVar6 = (int)param_1[0xd] == 3;
  puVar9 = (undefined8 *)pbVar4;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    param_1 = (long *)((long)pbVar4 + -0x130);
    puVar2 = (undefined8 *)((long)pbVar4 + -0x130);
    *(undefined1 **)((long)pbVar4 + -0x30) = unaff_x22;
    *(undefined8 **)((long)pbVar4 + -0x28) = unaff_x21;
    *(byte **)((long)pbVar4 + -0x20) = pbVar4;
    *(undefined8 **)((long)pbVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)pbVar4 + -0x10) = pppppppuVar19;
    *(undefined **)((long)pbVar4 + -8) = puVar20;
    pppppppuVar19 = (undefined8 *******)((long)pbVar4 + -0x10);
    func_0x00010777d1f4((undefined8 *)(lVar13 + 8),plVar8);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((*(byte *)((long)pbVar4 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779b94;
    func_0x00010777d638();
    pbVar4 = (byte *)((long)pbVar4 + -0x130);
    puVar9 = (undefined8 *)(lVar13 + 8);
    unaff_x21 = puVar2;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    param_1 = param_1 + 1;
    puVar3 = (undefined8 *)((long)pbVar4 + -0x130);
    *(undefined8 *)((long)pbVar4 + -0x30) = unaff_x28;
    *(undefined8 *)((long)pbVar4 + -0x28) = unaff_x27;
    *(undefined8 **)((long)pbVar4 + -0x20) = puVar9;
    *(undefined8 **)((long)pbVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)pbVar4 + -0x10) = pppppppuVar19;
    *(undefined **)((long)pbVar4 + -8) = puVar20;
    pppppppuVar19 = (undefined8 *******)((long)pbVar4 + -0x10);
    func_0x00010777d1f4();
    lVar13 = *param_1;
    *(long *)((long)pbVar4 + -0x120) = param_1[1];
    *(long *)((long)pbVar4 + -0x128) = lVar13;
    *(undefined4 *)((long)pbVar4 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)pbVar4 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779c4c;
    func_0x00010777d638();
    pbVar4 = (byte *)((long)pbVar4 + -0x130);
    puVar9 = puVar3;
  }
  puVar5 = pbVar4 + -0x150;
  puVar18 = pbVar4 + -0x150;
  puVar12 = pbVar4 + -0x150;
  *(undefined8 *)(pbVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(pbVar4 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar4 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar4 + -0x30) = unaff_x22;
  *(undefined8 **)(pbVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(pbVar4 + -0x20) = puVar9;
  *(undefined8 **)(pbVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar19;
  *(undefined **)(pbVar4 + -8) = puVar20;
  puVar17 = pbVar4 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar4 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar6) {
    lVar13 = *(long *)((long)unaff_x21 + 0x10);
    uVar22 = *(undefined8 *)((long)unaff_x21 + 8);
    *(undefined8 *)(pbVar4 + -0x140) = *(undefined8 *)((long)unaff_x21 + 0x10);
    *(undefined8 *)(pbVar4 + -0x148) = uVar22;
    if (lVar13 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)(pbVar4 + -0xe8) = 5;
    puVar14 = (undefined1 *)puVar9[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (undefined8 *)(pbVar4 + -0x150);
    puVar12 = unaff_x22;
    if ((pbVar4[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (undefined8 *)(pbVar4 + -0x150);
      puVar18 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar9 = (undefined8 *)(pbVar4 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar12;
  }
  else {
    uVar6 = extraout_w8_05 == 6;
    if ((bool)uVar6) {
      func_0x00010777d6c8();
      puVar14 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar12 = pbVar4 + -0x150;
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = pbVar4 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar18;
      goto code_r0x000107779dfc;
    }
    uVar6 = extraout_w8_05 == 7;
    if ((bool)uVar6) {
      func_0x00010777d6bc();
      puVar14 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar12 = pbVar4 + -0x150;
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = pbVar4 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar6 = extraout_w8_05 == 8;
    if (!(bool)uVar6) {
      func_0x00010777d6d4();
      puVar14 = (undefined1 *)puVar9[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((pbVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(pbVar4 + -0xd8) = 0;
    *(undefined8 *)(pbVar4 + -0xd0) = 0;
    *(undefined8 *)(pbVar4 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
    func_0x0001072ac134(pbVar4 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar6 = unaff_x21 == (undefined8 *)unaff_x24;
      if ((bool)uVar6) {
        puVar14 = pbVar4 + -0xe0;
        func_0x000107327958(pbVar4 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(pbVar4 + -0xa0,unaff_x21,*puVar9);
      puVar14 = pbVar4 + -0xa0;
      func_0x00010729d394(pbVar4 + -0x150);
      func_0x000104c3323c(pbVar4 + -0xa0);
      bVar1 = pbVar4[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = pbVar4 + -0x150;
        func_0x0001072d7f34(pbVar4 + -0xe0);
      }
      func_0x000107267ed0(pbVar4 + -0x150);
      unaff_x21 = (undefined8 *)((long)unaff_x21 + 0x70);
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar9 = (undefined8 *)(pbVar4 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar4 + -0x58));
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar10 = (undefined8 *)(pbVar4 + -0xa0);
  func_0x000107267ed0();
  pcVar21 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar7 = (uint)puVar9;
  uVar16 = SUB81(puVar9,0);
  if (*(int *)(puVar10 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    puVar5 = pbVar4 + -0x210;
    *(undefined1 **)(pbVar4 + -0x180) = unaff_x22;
    *(undefined8 **)(pbVar4 + -0x178) = unaff_x21;
    *(undefined8 **)(pbVar4 + -0x170) = puVar9;
    *(undefined8 **)(pbVar4 + -0x168) = unaff_x19;
    *(undefined1 **)(pbVar4 + -0x160) = puVar17;
    *(undefined **)(pbVar4 + -0x158) = &UNK_107779ed8;
    puVar17 = pbVar4 + -0x160;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    *(undefined4 *)(pbVar4 + -0x198) = 0;
    puVar14 = (undefined1 *)*puVar11;
    unaff_x21 = (undefined8 *)(pbVar4 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8;
    }
    else {
      pbVar4[-0x201] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_107779f6c;
    puVar10 = puVar11;
    func_0x00010777d638();
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 1;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = (undefined8 *)(puVar5 + -0xb0);
    func_0x00010777dae0();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_00;
    }
    else {
      puVar5[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a170;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 2;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = (undefined8 *)(puVar5 + -0xb0);
    func_0x00010777dacc();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_01;
    }
    else {
      puVar5[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a208;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 3;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    puVar9 = puVar11;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    func_0x00010777dd10();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_02;
    }
    else {
      puVar5[-0xb1] = (char)puVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = FUN_10777a2a0;
    puVar10 = puVar9;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar9;
    puVar9 = puVar11;
  }
  uVar6 = *(int *)(puVar10 + 0xd) == 4;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar5 + -0x20) = puVar9;
    *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(code **)(puVar5 + -8) = pcVar21;
    puVar17 = puVar5 + -0x10;
    func_0x00010777d1f4(puVar11,puVar10 + 1);
    unaff_x21 = (undefined8 *)(puVar5 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_03;
    }
    else {
      puVar5[-0xb1] = (char)puVar9;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&LAB_10777a338;
    puVar10 = puVar11;
    func_0x00010777d638();
    puVar5 = puVar5 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar7 = (uint)puVar10;
  *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar5 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar5 + -0x20) = puVar9;
  *(undefined8 **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar17;
  *(code **)(puVar5 + -8) = pcVar21;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar6) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) != 0) {
      puVar5[-0xc0] = (char)puVar9;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar16 = extraout_w8_04;
  }
  else {
    uVar6 = extraout_w8_06 == 6;
    if ((bool)uVar6) {
      unaff_x22 = puVar5 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar7 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar5[-0xc0] = (char)uVar7;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar6 = extraout_w8_06 == 7;
      if ((bool)uVar6) {
        unaff_x22 = puVar5 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar5[-0xc0] = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar6 = extraout_w8_06 == 8;
        if ((bool)uVar6) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
          func_0x0001075356bc(puVar5 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)((long)unaff_x21 + 8))[1];
          for (puVar17 = (undefined1 *)**(undefined8 **)((long)unaff_x21 + 8);
              uVar6 = puVar17 == unaff_x22, !(bool)uVar6; puVar17 = puVar17 + 0x70) {
            puVar12 = puVar17;
            func_0x000107775a54(puVar17,*puVar9);
            *(short *)(puVar5 + -0xc0) = (short)puVar12;
            if (((uint)puVar12 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar5 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar5 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar7 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar5[-0xc0] = (char)uVar7;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar16 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar16;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779bb8; end: 107779c4b;  */

void FUN_107779bb8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar11;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined1 *puVar12;
  undefined1 *unaff_x22;
  undefined1 *unaff_x24;
  undefined8 *******pppppppuVar13;
  code *pcVar14;
  undefined1 auStack_700 [976];
  undefined1 auStack_330 [104];
  undefined4 uStack_2c8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 ******ppppppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  byte bStack_240;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 auStack_1d0 [8];
  byte bStack_190;
  undefined8 uStack_188;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined4 uStack_c8;
  byte bStack_40;
  
  func_0x00010777d1f4();
  lStack_120 = param_2[1];
  puStack_128 = (undefined8 *)*param_2;
  uStack_c8 = 4;
  func_0x00010777d4cc();
  func_0x00010777d6b0();
  func_0x00010777d928();
  func_0x00010777d648();
  if ((bStack_40 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d6a4();
    func_0x00010777d2ac();
    func_0x00010777d2d4();
    func_0x00010777d7d0();
  }
  func_0x00010777d8ac();
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6e0();
  func_0x00010777d8ac();
  func_0x00010777d638();
  puVar2 = &uStack_280;
  puVar6 = &uStack_280;
  puVar7 = &uStack_280;
  puStack_138 = &UNK_107779c4c;
  pppppppuVar13 = (undefined8 *******)&pppppuStack_140;
  pppppuStack_140 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x00010777db88();
  func_0x00010777d250();
  uStack_188 = extraout_x8;
  func_0x00010777da78();
  if ((bool)in_ZR) {
    uStack_270 = *(undefined8 *)((long)unaff_x21 + 0x10);
    uStack_278 = *(undefined8 *)((long)unaff_x21 + 8);
    if (*(long *)((long)unaff_x21 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    uStack_218 = 5;
    puVar10 = puStack_128;
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = &uStack_280;
    puVar7 = (undefined8 *)unaff_x22;
    if ((bStack_190 & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = &uStack_280;
      puVar6 = (undefined8 *)unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar6 = auStack_1d0;
    func_0x000107267ed0();
    unaff_x22 = (undefined1 *)puVar7;
  }
  else {
    in_ZR = extraout_w8_05 == 6;
    if ((bool)in_ZR) {
      func_0x00010777d6c8();
      puVar10 = puStack_128;
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar7 = &uStack_280;
      if ((bStack_190 & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar6 = &uStack_280;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar7 = puVar6;
      goto code_r0x000107779dfc;
    }
    in_ZR = extraout_w8_05 == 7;
    if ((bool)in_ZR) {
      func_0x00010777d6bc();
      puVar10 = puStack_128;
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar7 = &uStack_280;
      if ((bStack_190 & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar6 = &uStack_280;
      goto code_r0x000107779dec;
    }
    in_ZR = extraout_w8_05 == 8;
    if (!(bool)in_ZR) {
      func_0x00010777d6d4();
      puVar10 = puStack_128;
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((bStack_190 & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_210 = 0;
    func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
    func_0x0001072ac134(&uStack_210);
    func_0x00010777de3c();
    do {
      in_ZR = unaff_x21 == (undefined8 *)unaff_x24;
      if ((bool)in_ZR) {
        puVar10 = &uStack_210;
        func_0x000107327958(&uStack_280);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(auStack_1d0,unaff_x21,uStack_130);
      puVar10 = auStack_1d0;
      func_0x00010729d394(&uStack_280);
      func_0x000104c3323c(auStack_1d0);
      bVar1 = bStack_240;
      if ((bStack_240 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar10 = &uStack_280;
        func_0x0001072d7f34(&uStack_210);
      }
      func_0x000107267ed0(&uStack_280);
      unaff_x21 = (undefined8 *)((long)unaff_x21 + 0x70);
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar6 = &uStack_210;
    func_0x000107269124();
  }
  func_0x00010777d23c(uStack_188);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar7 = auStack_1d0;
  func_0x000107267ed0();
  pcVar14 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar5 = (uint)puVar6;
  uVar4 = SUB81(puVar6,0);
  if (*(int *)(puVar7 + 0xd) == 0) {
    puVar8 = puVar10 + 1;
    puVar2 = (undefined8 *)(auStack_700 + 0x3c0);
    puStack_288 = &UNK_107779ed8;
    puStack_2b0 = unaff_x22;
    puStack_2a8 = (undefined1 *)unaff_x21;
    puStack_2a0 = puVar6;
    ppppppuStack_290 = pppppppuVar13;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    uStack_2c8 = 0;
    puVar10 = (undefined8 *)*puVar8;
    unaff_x21 = (undefined8 *)auStack_330;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar3 = extraout_w8;
    }
    else {
      auStack_700[0x3cf] = uVar4;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar3 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar3;
    func_0x00010777d1dc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    pcVar14 = (code *)&UNK_107779f6c;
    puVar7 = puVar8;
    func_0x00010777d638();
    unaff_x19 = puVar8;
    pppppppuVar13 = &ppppppuStack_290;
  }
  uVar3 = *(int *)(puVar7 + 0xd) == 1;
  if ((bool)uVar3) {
    puVar8 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    unaff_x21 = (undefined8 *)((long)puVar2 + -0xb0);
    func_0x00010777dae0();
    puVar10 = (undefined8 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar11 = extraout_w8_00;
    }
    else {
      *(undefined1 *)((long)puVar2 + -0xb1) = uVar4;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar11 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar11;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    pcVar14 = (code *)&UNK_10777a170;
    puVar7 = puVar8;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar8;
  }
  uVar3 = *(int *)(puVar7 + 0xd) == 2;
  if ((bool)uVar3) {
    puVar8 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    unaff_x21 = (undefined8 *)((long)puVar2 + -0xb0);
    func_0x00010777dacc();
    puVar10 = (undefined8 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar4 = extraout_w8_01;
    }
    else {
      *(undefined1 *)((long)puVar2 + -0xb1) = uVar4;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar4 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar4;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    pcVar14 = (code *)&UNK_10777a208;
    puVar7 = puVar8;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 3;
  if ((bool)uVar4) {
    puVar8 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    puVar6 = puVar8;
    func_0x00010777d1f4(puVar8,puVar7 + 1);
    func_0x00010777dd10();
    puVar10 = (undefined8 *)*puVar8;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar3 = extraout_w8_02;
    }
    else {
      *(char *)((long)puVar2 + -0xb1) = (char)puVar8;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar3 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar3;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar14 = FUN_10777a2a0;
    puVar7 = puVar6;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar6;
    puVar6 = puVar8;
  }
  uVar4 = *(int *)(puVar7 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar10 = puVar10 + 1;
    *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
    *(code **)((long)puVar2 + -8) = pcVar14;
    pppppppuVar13 = (undefined8 *******)((long)puVar2 + -0x10);
    func_0x00010777d1f4(puVar10,puVar7 + 1);
    unaff_x21 = (undefined8 *)((long)puVar2 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar3 = extraout_w8_03;
    }
    else {
      *(char *)((long)puVar2 + -0xb1) = (char)puVar6;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar3 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar3;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar14 = (code *)&LAB_10777a338;
    puVar7 = puVar10;
    func_0x00010777d638();
    puVar2 = (undefined8 *)((long)puVar2 + -0xc0);
    unaff_x19 = puVar10;
  }
  uVar5 = (uint)puVar7;
  *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
  *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
  *(code **)((long)puVar2 + -8) = pcVar14;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar4) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar6 >> 8 & 1) != 0) {
      *(char *)((long)puVar2 + -0xc0) = (char)puVar6;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar3 = extraout_w8_04;
  }
  else {
    uVar4 = extraout_w8_06 == 6;
    if ((bool)uVar4) {
      unaff_x22 = (undefined1 *)((long)puVar2 + -0xb0);
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
      *(char *)((long)puVar2 + -0xc0) = (char)uVar5;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar4 = extraout_w8_06 == 7;
      if ((bool)uVar4) {
        unaff_x22 = (undefined1 *)((long)puVar2 + -0xb0);
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)puVar2 + -0xc0) = (char)uVar5;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar4 = extraout_w8_06 == 8;
        if ((bool)uVar4) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)((long)unaff_x21 + 8));
          func_0x0001075356bc((undefined1 *)((long)puVar2 + -0xb0));
          unaff_x22 = (undefined1 *)(*(undefined8 **)((long)unaff_x21 + 8))[1];
          for (puVar12 = (undefined1 *)**(undefined8 **)((long)unaff_x21 + 8);
              uVar4 = puVar12 == unaff_x22, !(bool)uVar4; puVar12 = puVar12 + 0x70) {
            puVar9 = puVar12;
            func_0x000107775a54(puVar12,*puVar6);
            *(short *)((long)puVar2 + -0xc0) = (short)puVar9;
            if (((uint)puVar9 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8((undefined1 *)((long)puVar2 + -0xb0));
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = (undefined1 *)((long)puVar2 + -0xb0);
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)puVar2 + -0xc0) = (char)uVar5;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar3 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar3;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a078; end: 10777a0af;  */

void FUN_10777a078(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  
  if (-1 < (long)param_2) {
    plVar1 = param_1 + 2;
    func_0x000107535748();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)((long)plVar1 + (long)param_2);
    return;
  }
  func_0x000107535714();
  puVar2 = (undefined1 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10777a2a0; end: 10777a2c3;  */

void FUN_10777a2a0(long param_1,long param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 extraout_w8;
  undefined1 uVar4;
  undefined1 extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar5;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_180 [207];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [128];
  
  uVar1 = *(int *)(param_1 + 0x68) == 4;
  if ((bool)uVar1) {
    param_2 = param_2 + 8;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(param_2,param_1 + 8);
    unaff_x21 = auStack_b0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar4 = extraout_w8;
    }
    else {
      uStack_b1 = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar4 = 1;
    }
    *(undefined1 *)(unaff_x19 + 0x10) = uVar4;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_10777a338;
    param_1 = param_2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_180 + 0xc0);
    unaff_x19 = param_2;
  }
  uVar2 = (uint)param_1;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    func_0x00010777dc50();
    if (extraout_x8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) != 0) {
      *(char *)((long)register0x00000008 + -0xc0) = (char)unaff_x20;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar4 = extraout_w8_00;
  }
  else {
    uVar1 = extraout_w8_01 == 6;
    if ((bool)uVar1) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar2 >> 8 & 1) == 0) goto code_r0x00010777a468;
      *(char *)((long)register0x00000008 + -0xc0) = (char)uVar2;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar1 = extraout_w8_01 == 7;
      if ((bool)uVar1) {
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar2 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar2;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar1 = extraout_w8_01 == 8;
        if ((bool)uVar1) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc((undefined1 *)((long)register0x00000008 + -0xb0));
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar5 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8); uVar1 = puVar5 == unaff_x22,
              !(bool)uVar1; puVar5 = puVar5 + 0x70) {
            puVar3 = puVar5;
            func_0x000107775a54(puVar5,*unaff_x20);
            *(short *)((long)register0x00000008 + -0xc0) = (short)puVar3;
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8((undefined1 *)((long)register0x00000008 + -0xb0));
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar2 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar2;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar4 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar4;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a7bc; end: 10777a833;  */

void FUN_10777a7bc(void)

{
  func_0x00010777a7d4();
  return;
}



/* Entry: 10777ab4c; end: 10777aba3;  */

long * FUN_10777ab4c(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 extraout_w8_07;
  undefined1 extraout_w8_08;
  undefined1 extraout_w8_09;
  undefined1 uVar9;
  long lVar10;
  undefined1 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  undefined8 *puVar11;
  long *unaff_x20;
  undefined8 uVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  char acStack_91c [2108];
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [20];
  byte bStack_9c;
  char *pcVar4;
  
  pcVar4 = auStack_b0;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d904();
  plVar7 = (long *)*param_1;
  func_0x00010777d484();
  func_0x00010777d648();
  if ((bStack_9c & 1) == 0) {
    func_0x00010777d748();
    uVar6 = extraout_w8_00;
  }
  else {
    func_0x00010777d410();
    uVar6 = extraout_w8;
  }
  unaff_x19[0x14] = uVar6;
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d380();
  puVar15 = &UNK_10777aba4;
  func_0x00010777d638();
  uVar6 = (int)param_1[0xd] == 3;
  plVar8 = plVar7;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    pcVar4 = acStack_91c + 0x7ac;
    puStack_b8 = &UNK_10777aba4;
    param_1 = plVar7;
    ppppppuStack_c0 = pppppppuVar13;
    func_0x00010777d1f4(plVar7,plVar8);
    func_0x00010777dd3c();
    plVar8 = (long *)*plVar7;
    func_0x00010777d484();
    func_0x00010777d640();
    if ((acStack_91c[0x7c0] & 1U) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      uVar9 = extraout_w8_01;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d38c();
    puVar15 = &UNK_10777ac28;
    func_0x00010777d638();
    unaff_x20 = plVar7;
    pppppppuVar13 = &ppppppuStack_c0;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224(plVar8,param_1 + 1);
    func_0x00010777d8ec();
    plVar7 = (long *)*plVar8;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      param_1 = plVar8;
      plVar8 = plVar7;
      uVar9 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      param_1 = plVar8;
      plVar8 = plVar7;
      uVar9 = extraout_w8_03;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar15 = &UNK_10777aca4;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 5;
  if ((bool)uVar6) {
    param_1 = param_1 + 1;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar10 = param_1[1];
    lVar17 = *param_1;
    *(long *)(pcVar4 + -0x88) = param_1[1];
    *(long *)(pcVar4 + -0x90) = lVar17;
    param_1 = plVar8;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_06;
    }
    else {
      func_0x00010777d410();
      uVar9 = extraout_w8_05;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar15 = &UNK_10777ad3c;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(long **)(pcVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
  *(undefined **)(pcVar4 + -8) = puVar15;
  puVar14 = pcVar4 + -0x10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar6 = iVar2 == 6;
  if ((bool)uVar6) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar7 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar6 = iVar2 == 7;
    if ((bool)uVar6) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar7 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar6 = iVar2 == 8;
      if ((bool)uVar6) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((pcVar4[-0xac] & 1U) == 0) {
    func_0x00010777d748();
    uVar9 = extraout_w8_08;
  }
  else {
    func_0x00010777d410();
    uVar9 = extraout_w8_07;
  }
  unaff_x19[0x14] = uVar9;
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar16 = FUN_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar6 = (int)param_1[0xd] == 1;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    puVar3 = pcVar4 + -0x170;
    *(long **)(pcVar4 + -0xe0) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
    *(undefined1 **)(pcVar4 + -0xd0) = puVar14;
    *(code **)(pcVar4 + -200) = FUN_10777ae10;
    puVar14 = pcVar4 + -0xd0;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0x160] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&LAB_10777aeac;
    func_0x00010777d638();
  }
  uVar6 = (int)param_1[0xd] == 2;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&UNK_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 3;
  plVar8 = plVar7;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    param_1 = plVar7;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&UNK_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar7;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar8;
      plVar8 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar8;
      plVar8 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = FUN_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 5;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar10 = plVar7[1];
    lVar17 = *plVar7;
    *(long *)(puVar3 + -0x88) = plVar7[1];
    *(long *)(puVar3 + -0x90) = lVar17;
    param_1 = plVar8;
    plVar8 = plVar7;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&LAB_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar5 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar14;
  *(code **)(puVar3 + -8) = pcVar16;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar6 = iVar2 == 6;
  if ((bool)uVar6) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar6 = iVar2 == 7;
    if ((bool)uVar6) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar6 = iVar2 == 8;
      if ((bool)uVar6) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = unaff_x20;
  *(undefined1 **)(puVar3 + -0xd8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9;
  if ((int)param_1[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    unaff_x19 = puVar3 + -0x158;
    func_0x00010777dd30();
    plVar7 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar7);
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x168) = &UNK_10777b260;
    FUN_107776fc4();
    bVar1 = (ulong)plVar8 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar8;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar8;
  }
  func_0x00010777d490();
  if (!(bool)uVar6) goto code_r0x00010777b254;
  uVar12 = *(undefined8 *)(puVar3 + -0xe0);
  puVar11 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar12;
  *(undefined8 **)(puVar3 + -0xd8) = puVar11;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar14 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar6 = (int)param_1[0xd] == 1;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)param_1[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar15 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar5 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar6) goto code_r0x00010777b310;
    puVar14 = *(undefined1 **)(puVar3 + -0xd0);
    puVar15 = *(undefined **)(puVar3 + -200);
    uVar12 = *(undefined8 *)(puVar3 + -0xe0);
    puVar11 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar5 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar5 + -0x20) = uVar12;
  *(undefined8 **)(puVar5 + -0x18) = puVar11;
  *(undefined1 **)(puVar5 + -0x10) = puVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar6 = iVar2 == 2;
  if ((bool)uVar6) {
    *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar5 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar6 = iVar2 == 3;
    if ((bool)uVar6) {
      param_1 = (long *)(puVar5 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar6 = iVar2 == 4;
      if ((bool)uVar6) {
        uVar18 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar5 + -0xa0) = uVar18;
        *(undefined4 *)(puVar5 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar10 = *(long *)(extraout_x9_01 + 0x10);
        uVar18 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar5 + -0xa0) = uVar18;
        uVar6 = 1;
        if (lVar10 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar5 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar6 = iVar2 == 6;
        if ((bool)uVar6) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar6 = iVar2 == 7;
          if ((bool)uVar6) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar6 = iVar2 == 8;
            if ((bool)uVar6) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar6 = puVar5[-0xac] == '\x01';
              if ((bool)uVar6) {
                uVar18 = *(undefined8 *)(puVar5 + -0xbc);
                puVar11[1] = *(undefined8 *)(puVar5 + -0xb4);
                *puVar11 = uVar18;
                *(undefined4 *)(puVar11 + 2) = 1;
                uVar9 = 1;
              }
              else {
                func_0x00010777d748();
                uVar9 = extraout_w8_09;
              }
              *(undefined1 *)((long)puVar11 + 0x14) = uVar9;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    puVar15 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar5 + -0xe0) = uVar12;
    *(undefined8 **)(puVar5 + -0xd8) = puVar11;
    *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -200) = puVar15;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar11 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777ae10; end: 10777ae4b;  */

undefined8 * FUN_10777ae10(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 extraout_w8;
  undefined1 uVar7;
  long lVar8;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  code *unaff_x30;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_58c [1388];
  
  if (*(int *)(param_2 + 0xd) == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
    return param_2;
  }
  uVar4 = *(int *)(param_2 + 0xd) == 1;
  if ((bool)uVar4) {
    puVar5 = param_2 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((acStack_58c[0x4ec] & 1U) == 0) {
      func_0x00010777db94();
      param_2 = param_3;
      param_3 = puVar5;
    }
    else {
      func_0x00010777d4d8();
      param_2 = param_3;
      param_3 = puVar5;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = (code *)&LAB_10777aeac;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_58c + 0x4dc);
  }
  uVar4 = *(int *)(param_2 + 0xd) == 2;
  if ((bool)uVar4) {
    puVar5 = param_2 + 1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xa0) & 1) == 0) {
      func_0x00010777db94();
      param_2 = param_3;
      param_3 = puVar5;
    }
    else {
      func_0x00010777d4d8();
      param_2 = param_3;
      param_3 = puVar5;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = (code *)&UNK_10777af30;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar4 = *(int *)(param_2 + 0xd) == 3;
  puVar5 = param_3;
  if ((bool)uVar4) {
    puVar5 = param_2 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_2 = param_3;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = (code *)&UNK_10777afbc;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x20 = param_3;
  }
  uVar4 = *(int *)(param_2 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar6 = param_2 + 1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xa0) & 1) == 0) {
      func_0x00010777db94();
      param_2 = puVar5;
      puVar5 = puVar6;
    }
    else {
      func_0x00010777d4d8();
      param_2 = puVar5;
      puVar5 = puVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = FUN_10777b040;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar4 = *(int *)(param_2 + 0xd) == 5;
  if ((bool)uVar4) {
    puVar6 = param_2 + 1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar8 = puVar6[1];
    uVar11 = *puVar6;
    *(undefined8 *)((long)register0x00000008 + -0x88) = puVar6[1];
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    param_2 = puVar5;
    puVar5 = puVar6;
    if (lVar8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xa0) & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = (code *)&LAB_10777b0e0;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_2 + 0xd);
  uVar4 = iVar2 == 6;
  if ((bool)uVar4) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar4 = iVar2 == 7;
    if ((bool)uVar4) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar4 = iVar2 == 8;
      if ((bool)uVar4) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9;
  if (*(int *)(param_2 + 0xd) == 0) {
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x158);
    func_0x00010777dd30();
    puVar6 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18(puVar6);
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return puVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 **)((long)register0x00000008 + -0x180) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xd0);
    *(undefined **)((long)register0x00000008 + -0x168) = &UNK_10777b260;
    FUN_107776fc4();
    bVar1 = (ulong)puVar5 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)puVar5;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return puVar5;
  }
  func_0x00010777d490();
  if (!(bool)uVar4) goto code_r0x00010777b254;
  uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
  puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
  *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar5;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -200);
  puVar9 = (undefined1 *)((long)register0x00000008 + -0xd0);
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9_00;
  uVar4 = *(int *)(param_2 + 0xd) == 1;
  if ((bool)uVar4) {
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x158);
    *(undefined1 *)((long)register0x00000008 + -0x150) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 1;
    func_0x00010777dd30();
    param_2 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_2;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar10 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x160);
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar4) goto code_r0x00010777b310;
    puVar9 = *(undefined1 **)((long)register0x00000008 + -0xd0);
    puVar10 = *(undefined **)((long)register0x00000008 + -200);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)(puVar3 + -0x20) = uVar11;
  *(undefined8 **)(puVar3 + -0x18) = puVar5;
  *(undefined1 **)(puVar3 + -0x10) = puVar9;
  *(undefined **)(puVar3 + -8) = puVar10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_2 + 0xd);
  uVar4 = iVar2 == 2;
  if ((bool)uVar4) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar4 = iVar2 == 3;
    if ((bool)uVar4) {
      param_2 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_2,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar4 = iVar2 == 4;
      if ((bool)uVar4) {
        uVar12 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar12;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar8 = *(long *)(extraout_x9_01 + 0x10);
        uVar12 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar12;
        uVar4 = 1;
        if (lVar8 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar4 = iVar2 == 6;
        if ((bool)uVar4) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar4 = iVar2 == 7;
          if ((bool)uVar4) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar4 = iVar2 == 8;
            if ((bool)uVar4) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar4 = puVar3[-0xac] == '\x01';
              if ((bool)uVar4) {
                uVar12 = *(undefined8 *)(puVar3 + -0xbc);
                puVar5[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar5 = uVar12;
                *(undefined4 *)(puVar5 + 2) = 1;
                uVar7 = 1;
              }
              else {
                func_0x00010777d748();
                uVar7 = extraout_w8;
              }
              *(undefined1 *)((long)puVar5 + 0x14) = uVar7;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_2 + 0xd) != 0) && (*(int *)(param_2 + 0xd) != 1)) &&
      (*(int *)(param_2 + 0xd) != 2)) && (*(int *)(param_2 + 0xd) == 3)) {
    puVar10 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar11;
    *(undefined8 **)(puVar3 + -0xd8) = puVar5;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar10;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar5 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b040; end: 10777b063;  */

undefined8 * FUN_10777b040(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 extraout_w8;
  undefined1 uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  undefined8 uVar11;
  char acStack_2bc [540];
  byte bStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar4 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar4) {
    puVar5 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    uStack_88 = puVar5[1];
    uStack_90 = *puVar5;
    param_1 = param_2;
    param_2 = puVar5;
    if (puVar5[1] != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((bStack_a0 & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = &LAB_10777b0e0;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_2bc + 0x20c);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 6;
  if ((bool)uVar4) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar4 = iVar2 == 7;
    if ((bool)uVar4) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar4 = iVar2 == 8;
      if ((bool)uVar4) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9;
  if (*(int *)(param_1 + 0xd) == 0) {
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x158);
    func_0x00010777dd30();
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18(puVar5);
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return puVar5;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xd0);
    *(undefined **)((long)register0x00000008 + -0x168) = &UNK_10777b260;
    FUN_107776fc4();
    bVar1 = (ulong)param_2 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)param_2;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return param_2;
  }
  func_0x00010777d490();
  if (!(bool)uVar4) goto code_r0x00010777b254;
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0xe0);
  puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar8;
  *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar5;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -200);
  puVar9 = (undefined1 *)((long)register0x00000008 + -0xd0);
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9_00;
  uVar4 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar4) {
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x158);
    *(undefined1 *)((long)register0x00000008 + -0x150) = *(undefined1 *)(param_1 + 1);
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar10 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x160);
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar4) goto code_r0x00010777b310;
    puVar9 = *(undefined1 **)((long)register0x00000008 + -0xd0);
    puVar10 = *(undefined **)((long)register0x00000008 + -200);
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)(puVar3 + -0x20) = uVar8;
  *(undefined8 **)(puVar3 + -0x18) = puVar5;
  *(undefined1 **)(puVar3 + -0x10) = puVar9;
  *(undefined **)(puVar3 + -8) = puVar10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 2;
  if ((bool)uVar4) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar4 = iVar2 == 3;
    if ((bool)uVar4) {
      param_1 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar4 = iVar2 == 4;
      if ((bool)uVar4) {
        uVar11 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar11;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar7 = *(long *)(extraout_x9_01 + 0x10);
        uVar11 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar11;
        uVar4 = 1;
        if (lVar7 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar4 = iVar2 == 6;
        if ((bool)uVar4) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar4 = iVar2 == 7;
          if ((bool)uVar4) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar4 = iVar2 == 8;
            if ((bool)uVar4) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar4 = puVar3[-0xac] == '\x01';
              if ((bool)uVar4) {
                uVar11 = *(undefined8 *)(puVar3 + -0xbc);
                puVar5[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar5 = uVar11;
                *(undefined4 *)(puVar5 + 2) = 1;
                uVar6 = 1;
              }
              else {
                func_0x00010777d748();
                uVar6 = extraout_w8;
              }
              *(undefined1 *)((long)puVar5 + 0x14) = uVar6;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    puVar10 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar8;
    *(undefined8 **)(puVar3 + -0xd8) = puVar5;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar10;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar5 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b4f4; end: 10777b523;  */

undefined2 FUN_10777b4f4(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2c70();
  func_0x00010777d374();
  return unaff_w19;
}


