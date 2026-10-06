/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcc8778; end: 10bcc877b;  */

void FUN_10bcc8778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99c58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc877c; end: 10bcc878f;  */

void FUN_10bcc877c(void)

{
  FUN_10bcc87ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc8790; end: 10bcc87d7;  */

long FUN_10bcc8790(long param_1)

{
  long lStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  (*(code *)**(undefined8 **)(param_1 + 0x48))((undefined8 *)(param_1 + 0x48));
  lStack_28 = param_1 + 0x20;
  func_0x00010007e5dc(&lStack_28);
  return param_1 + 0x20;
}



/* Entry: 10bcc87d8; end: 10bcc87db;  */

void FUN_10bcc87d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc87dc; end: 10bcc87eb;  */

void FUN_10bcc87dc(void)

{
  undefined8 *in_x3;
  
  func_0x000105277f8c();
  *in_x3 = &PTR_FUN_110d99c58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc87ec; end: 10bcc880f;  */

void FUN_10bcc87ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99c58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc8810; end: 10bcc8823;  */

void FUN_10bcc8810(void)

{
  FUN_10bcc8824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc8824; end: 10bcc88c3;  */

void FUN_10bcc8824(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99ca8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcc88c4; end: 10bcc88e7;  */

void FUN_10bcc88c4(void)

{
  func_0x000107c3a49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_double_11034cff0)();
  return;
}



/* Entry: 10bcc88e8; end: 10bcc88f3;  */

void FUN_10bcc88e8(void)

{
  return;
}



/* Entry: 10bcc88f4; end: 10bcc89cf;  */

void FUN_10bcc88f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c3a4dc();
  uStack_28 = extraout_x8;
  __ZNSt3__19to_stringEi(auStack_88,param_2);
  func_0x000107c27f54(auStack_70,&UNK_10f82f93e,auStack_88);
  uVar1 = cStack_59 == '\0';
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  puStack_58 = &UNK_105277f7c;
  ppuStack_50 = &PTR_DAT_110873830;
  func_0x00010bcc8e18();
  func_0x00010bcc8e2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bcc8e24();
  func_0x000107c3a4c0(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bcc8e2c();
    puVar2 = auStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bcc8e24();
    func_0x00010bcc8e44();
    *puVar2 = &PTR_DAT_110d99b08;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10bcc89d0; end: 10bcc89d3;  */

void FUN_10bcc89d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99b08;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10bcc89d4; end: 10bcc8c8f;  */

long * FUN_10bcc89d4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 extraout_x8;
  long *plVar13;
  undefined8 extraout_x8_00;
  long *plVar14;
  undefined1 *extraout_x10;
  long *plVar15;
  undefined8 extraout_x11;
  long *plVar16;
  uint uVar17;
  long *unaff_x23;
  undefined1 auStack_148 [24];
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  undefined1 uStack_d8;
  long *plStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  undefined1 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long alStack_a0 [2];
  long lStack_90;
  undefined8 uStack_48;
  
  plVar7 = param_1;
  plVar9 = param_2;
  plVar11 = param_3;
  func_0x000107c3a4dc();
  plVar13 = plVar9 + 5;
  plVar14 = plVar13;
  while (plVar8 = plVar14, plVar13 = (long *)*plVar13, plVar14 = plVar8, uStack_48 = extraout_x8,
        plVar13 != (long *)0x0) {
    iVar12 = (int)param_4;
    plVar14 = plVar13;
    if ((int)plVar13[4] <= iVar12) {
      plVar16 = plVar13;
      if (iVar12 <= (int)plVar13[4]) goto LAB_10bcc8a8c;
      plVar13 = plVar13 + 1;
      plVar14 = plVar8;
    }
  }
LAB_10bcc8a38:
  do {
    cVar4 = SBORROW8((long)plVar8,(long)plVar14);
    cVar5 = (long)plVar8 - (long)plVar14 < 0;
    if (plVar8 == plVar14) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar6 = 1;
LAB_10bcc8c08:
      func_0x000107c3a4c0(uStack_48);
      if ((bool)uVar6) {
        return plVar7;
      }
      ___stack_chk_fail();
      param_1[1] = (long)unaff_x23;
      plVar13 = param_1;
      func_0x00010527508c();
      func_0x00010bcc8e3c();
      pcStack_e8 = FUN_10bcc8c90;
      uStack_130 = (ulong)plVar9 & 0xffffffff;
      uStack_128 = 0;
      uStack_120 = (ulong)plVar11 & 0xffffffff;
      uStack_118 = 0;
      plStack_110 = param_2;
      plStack_108 = param_3;
      plStack_100 = plVar7;
      plStack_f8 = param_1;
      puStack_f0 = &stack0xfffffffffffffff0;
      func_0x000107c2793c(&UNK_10f82f955);
      func_0x000107c3173c(auStack_148);
      func_0x00010bcc8dbc();
      uVar1 = extraout_x11;
      puVar3 = extraout_x10;
      if (cVar5 == cVar4) {
        uVar1 = extraout_x8_00;
        puVar3 = auStack_148;
      }
      FUN_10bcc6e7c(plVar13,1,puVar3,uVar1,param_4);
      func_0x00010bcc8e24();
      *plVar13 = (long)&PTR_FUN_110d99d10;
      return plVar13;
    }
    uVar2 = *(uint *)(plVar8 + 5);
    param_4 = (long *)(ulong)uVar2;
    uVar17 = (uint)param_3;
    cVar4 = SBORROW4(uVar2,uVar17);
    cVar5 = (int)(uVar2 - uVar17) < 0;
    uVar6 = uVar2 == uVar17;
    if ((bool)uVar6) {
      func_0x000107c31374(alStack_a0,plVar8 + 5);
      *param_1 = 0;
      param_1[1] = 0;
      plVar7 = param_1 + 2;
      *plVar7 = 0;
      uStack_d8 = 0;
      lVar10 = 1;
      plVar13 = plVar7;
      plStack_e0 = param_1;
      func_0x000107c27e44();
      *param_1 = (long)plVar13;
      param_1[1] = (long)plVar13;
      param_1[2] = (long)(plVar13 + lVar10 * 0xb);
      pplStack_c8 = &plStack_b0;
      pplStack_c0 = &plStack_a8;
      uStack_b8 = 0;
      plVar9 = alStack_a0;
      plStack_d0 = plVar7;
      plStack_b0 = plVar13;
      plStack_a8 = plVar13;
      func_0x000107c31374();
      plVar13 = plStack_a8 + 0xb;
      param_3 = (long *)0x1;
      uStack_b8 = 1;
      plStack_a8 = plVar13;
      func_0x000107c27e48(&plStack_d0);
      param_1[1] = (long)plVar13;
      uStack_d8 = 1;
      FUN_10bcc8d40(&plStack_e0);
      plVar7 = alStack_a0;
      func_0x000107c27e50();
      goto LAB_10bcc8c08;
    }
    plVar9 = param_2;
    plVar11 = param_3;
    FUN_10bcc89d4(param_1);
    unaff_x23 = (long *)param_1[1];
    if ((long *)*param_1 != unaff_x23) {
      param_3 = param_1 + 2;
      plVar13 = (long *)*param_3;
      cVar4 = SBORROW8((long)unaff_x23,(long)plVar13);
      cVar5 = (long)unaff_x23 - (long)plVar13 < 0;
      uVar6 = unaff_x23 == plVar13;
      if (unaff_x23 < plVar13) {
        plVar9 = plVar8 + 5;
        plVar7 = unaff_x23;
        func_0x000107c31374();
        plVar13 = unaff_x23 + 0xb;
      }
      else {
        plVar13 = param_1;
        func_0x000107c27e38(param_1,((long)unaff_x23 - *param_1) / 0x58 + 1);
        plVar11 = (long *)((param_1[1] - *param_1) / 0x58);
        param_4 = param_3;
        func_0x000107c27e40(alStack_a0,plVar13,plVar11,param_3);
        func_0x000107c31374(lStack_90,plVar8 + 5);
        lStack_90 = lStack_90 + 0x58;
        plVar9 = alStack_a0;
        func_0x000107c27e3c(param_1);
        plVar13 = (long *)param_1[1];
        plVar7 = alStack_a0;
        func_0x000107c27e4c();
      }
      param_1[1] = (long)plVar13;
      goto LAB_10bcc8c08;
    }
    func_0x00010527508c(param_1);
    func_0x000107c27be0();
    plVar7 = plVar8;
  } while( true );
LAB_10bcc8a8c:
  while (plVar15 = (long *)*plVar14, plVar15 != (long *)0x0) {
    lVar10 = 8;
    if (iVar12 <= (int)plVar15[4]) {
      lVar10 = 0;
    }
    plVar14 = (long *)((long)plVar15 + lVar10);
    if (iVar12 <= (int)plVar15[4]) {
      plVar16 = plVar15;
    }
  }
  plVar13 = plVar13 + 1;
  while (plVar14 = plVar8, plVar15 = (long *)*plVar13, plVar8 = plVar16, plVar15 != (long *)0x0) {
    lVar10 = 0;
    if ((int)plVar15[4] <= iVar12) {
      lVar10 = 8;
    }
    plVar13 = (long *)((long)plVar15 + lVar10);
    plVar8 = plVar15;
    if ((int)plVar15[4] <= iVar12) {
      plVar8 = plVar14;
    }
  }
  goto LAB_10bcc8a38;
}



/* Entry: 10bcc8c90; end: 10bcc8d2b;  */

undefined8 * FUN_10bcc8c90(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_2 & 0xffffffff;
  uStack_48 = 0;
  uStack_40 = param_3 & 0xffffffff;
  uStack_38 = 0;
  func_0x000107c2793c(&UNK_10f82f955);
  func_0x000107c3173c(auStack_68);
  func_0x00010bcc8dbc();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar2 = auStack_68;
  }
  FUN_10bcc6e7c(param_1,1,puVar2,uVar1,param_4);
  func_0x00010bcc8e24();
  *param_1 = &PTR_FUN_110d99d10;
  return param_1;
}



/* Entry: 10bcc8d2c; end: 10bcc8d3f;  */

void FUN_10bcc8d2c(void)

{
  func_0x00010563ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcc8d40; end: 10bcc8d6f;  */

long FUN_10bcc8d40(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000107c27e54(param_1);
  }
  return param_1;
}



/* Entry: 10bcc8d70; end: 10bcc8e87;  */

void FUN_10bcc8d70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 10bcc8e88; end: 10bcc9253;  */

undefined *** FUN_10bcc8e88(undefined ***param_1,undefined ***param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  long extraout_x8_01;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  long extraout_x9;
  undefined **ppuVar13;
  ulong uVar14;
  int unaff_w19;
  undefined ***pppuVar15;
  undefined4 *puVar16;
  undefined ***unaff_x20;
  long lVar17;
  undefined4 *unaff_x21;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  long unaff_x22;
  undefined4 *unaff_x24;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_788 [64];
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **ppuStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined1 uStack_710;
  undefined1 auStack_708 [64];
  long alStack_6c8 [7];
  byte bStack_690;
  long lStack_688;
  undefined **ppuStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  byte bStack_650;
  undefined ***pppuStack_648;
  undefined1 uStack_640;
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [32];
  undefined ***pppuStack_598;
  undefined1 uStack_590;
  undefined **appuStack_588 [17];
  undefined *puStack_500;
  undefined8 uStack_4f8;
  undefined4 *puStack_4f0;
  long lStack_4e0;
  undefined4 *puStack_4d8;
  undefined ***pppuStack_4d0;
  undefined ***pppuStack_4c8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined ***pppuStack_498;
  undefined ***pppuStack_490;
  long lStack_480;
  long lStack_478;
  undefined4 *puStack_438;
  undefined4 *puStack_430;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined **appuStack_200 [53];
  undefined8 uStack_58;
  
  func_0x00010bccaea8();
  uVar5 = *(int *)param_1 == *(int *)param_2;
  uStack_58 = extraout_x8;
  if ((bool)uVar5) {
    pppuVar15 = (undefined ***)0x1;
    goto LAB_10bcc9174;
  }
  if (*(int *)param_2 < *(int *)param_1) {
    pppuVar15 = (undefined ***)0x0;
    goto LAB_10bcc9174;
  }
  func_0x00010bccae6c();
  func_0x000107c278b8(&uStack_420,"");
  unaff_x21 = &uStack_420;
  uStack_4a8 = 0;
  uStack_4b0 = 0x1010001;
  uStack_3a8._0_4_ = 0x1010001;
  uStack_3a8._4_4_ = 0;
  uStack_3a0 = 0x200000000;
  uStack_398 = 0x101000100000000;
  uStack_390 = 0x100;
  uStack_388 = 0x1010100000000;
  func_0x000107c31344(appuStack_200,&uStack_420,&uStack_3a8,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_420);
  param_2 = appuStack_200;
  pppuVar15 = unaff_x20;
  func_0x000107c313e8();
  uVar5 = (int)pppuVar15 == -1;
  if ((bool)uVar5) {
LAB_10bcc9074:
    pppuVar15 = (undefined ***)0x0;
  }
  else {
    param_2 = appuStack_200;
    iVar6 = unaff_w19;
    func_0x000107c313e8();
    uVar5 = true;
    if (iVar6 == -1) goto LAB_10bcc9074;
    func_0x000107c278b8(&lStack_480,"");
    uStack_420 = (undefined4)uStack_4b0;
    uStack_41c = 0;
    puStack_418 = (undefined4 *)0x200000000;
    uStack_410 = 0x101000100000000;
    uStack_408 = 0x100;
    uStack_400 = 0x1010100000000;
    func_0x000107c31344(&uStack_3a8,&lStack_480,&uStack_420,0);
    func_0x00010bccaea0();
    param_2 = (undefined ***)&uStack_3a8;
    func_0x000107c313e8();
    uVar5 = unaff_w19 == -1;
    if ((bool)uVar5) {
      pppuVar15 = (undefined ***)0x0;
    }
    else {
      FUN_10bcca974(&uStack_420,appuStack_200);
      func_0x00010bccaf2c();
      FUN_10bcc942c(&puStack_438,&lStack_480);
      func_0x00010bccae98();
      func_0x00010bccae64();
      FUN_10bcc991c(puStack_438,puStack_430);
      FUN_10bcca974(&uStack_420,&uStack_3a8);
      func_0x00010bccaf2c();
      FUN_10bcc942c(&pppuStack_498,&lStack_480);
      func_0x00010bccae98();
      func_0x00010bccae64();
      pppuVar11 = pppuStack_498;
      param_2 = pppuStack_490;
      FUN_10bcc991c();
      pppuVar15 = pppuStack_490;
      lVar17 = 0x30;
      puVar16 = puStack_438;
      for (unaff_x20 = pppuStack_498; uVar5 = unaff_x20 == pppuVar15 || puVar16 == puStack_430,
          puVar18 = puStack_430, unaff_x20 != pppuVar15 && puVar16 != puStack_430;
          unaff_x20 = (undefined ***)((long)unaff_x20 + lVar8)) {
        func_0x00010bccad38();
        if (((ulong)pppuVar11 & 1) != 0) goto LAB_10bcc9150;
        func_0x00010bccae04();
        lVar8 = 0;
        if ((int)pppuVar11 == 0) {
          lVar8 = 0x30;
        }
        puVar16 = puVar16 + 0xc;
      }
      uVar5 = 0;
      if (unaff_x20 == pppuVar15) {
        unaff_x20 = (undefined ***)&DAT_10f30fc41;
        unaff_x21 = puStack_430;
        unaff_x22 = lVar17;
        for (pppuVar15 = pppuStack_498; pppuVar15 != pppuStack_490; pppuVar15 = pppuVar15 + 6) {
          pppuVar11 = pppuVar15;
          param_2 = unaff_x20;
          func_0x000107c27cf4();
          if ((int)pppuVar11 != 0) {
            FUN_10bcc9780(&uStack_420,appuStack_200,pppuVar15 + 3);
            plVar7 = &lStack_480;
            param_2 = (undefined ***)&uStack_3a8;
            FUN_10bcc9780(plVar7,param_2,pppuVar15 + 3);
            unaff_x24 = puStack_418;
            unaff_x21 = (undefined4 *)CONCAT44(uStack_41c,uStack_420);
            uVar5 = (long)puStack_418 - (long)unaff_x21 == lStack_478 - lStack_480;
            puVar18 = unaff_x21;
            unaff_x22 = lStack_480;
            lVar17 = lStack_480;
            if (!(bool)uVar5) {
LAB_10bcc9144:
              func_0x00010bcca8a4(&lStack_480);
              func_0x00010bccaf0c();
              goto LAB_10bcc9150;
            }
            for (; uVar5 = unaff_x21 == unaff_x24, !(bool)uVar5; unaff_x21 = unaff_x21 + 0x12) {
              func_0x00010bccadc0();
              func_0x000107c278d0();
              puVar18 = unaff_x21;
              lVar17 = unaff_x22;
              if ((int)plVar7 == 0) goto LAB_10bcc9144;
              puVar18 = unaff_x21 + 6;
              lVar17 = unaff_x22 + 0x18;
              func_0x00010bccadc0();
              func_0x000107c278d0();
              if ((int)plVar7 == 0) goto LAB_10bcc9144;
              puVar18 = unaff_x21 + 0xc;
              lVar17 = unaff_x22 + 0x30;
              func_0x00010bccadc0();
              func_0x000107c278d0();
              if ((int)plVar7 == 0) goto LAB_10bcc9144;
              unaff_x22 = unaff_x22 + 0x48;
            }
            func_0x00010bcca8a4(&lStack_480);
            func_0x00010bccaf0c();
          }
        }
        pppuVar15 = (undefined ***)0x1;
        uVar5 = 1;
      }
      else {
LAB_10bcc9150:
        pppuVar15 = (undefined ***)0x0;
        unaff_x21 = puVar18;
        unaff_x22 = lVar17;
      }
      func_0x00010bcca8ec(&pppuStack_498);
      func_0x00010bcca8ec(&puStack_438);
    }
    FUN_10bcc55d8(&uStack_3a8);
  }
  param_1 = appuStack_200;
  FUN_10bcc55d8();
LAB_10bcc9174:
  func_0x00010bccade4(uStack_58);
  if ((bool)uVar5) {
    return pppuVar15;
  }
  ___stack_chk_fail();
  func_0x00010bccaf0c();
  func_0x00010bcca8ec(&pppuStack_498);
  func_0x00010bcca8ec(&puStack_438);
  FUN_10bcc55d8(&uStack_3a8);
  FUN_10bcc55d8(appuStack_200);
  func_0x00010bccae3c();
  pcStack_4b8 = FUN_10bcc9254;
  puStack_4f0 = unaff_x24;
  lStack_4e0 = unaff_x22;
  puStack_4d8 = unaff_x21;
  pppuStack_4d0 = unaff_x20;
  pppuStack_4c8 = param_1;
  puStack_4c0 = &stack0xfffffffffffffff0;
  func_0x00010bccaec4();
  func_0x00010bccaea8();
  uStack_590 = 1;
  pppuStack_598 = param_2;
  uStack_4f8 = extraout_x8_00;
  __ZNSt3__15mutex4lockEv(param_2);
  pppuVar15 = unaff_x20 + 0xc;
  pppuVar11 = unaff_x20 + 0xd;
  do {
    pppuVar9 = (undefined ***)*pppuVar11;
    uVar5 = pppuVar9 == pppuVar15;
    if ((bool)uVar5) {
      func_0x000107c280c4(&pppuStack_598);
      ppuVar13 = (undefined **)(long)*(char *)((long)unaff_x20 + 0x5f);
      if ((long)ppuVar13 < 0) {
        pppuVar11 = (undefined ***)unaff_x20[9];
        ppuVar13 = unaff_x20[10];
      }
      else {
        pppuVar11 = unaff_x20 + 9;
      }
      func_0x000107c313f4(appuStack_588,unaff_x20[8],pppuVar11,ppuVar13);
      appuStack_588[0] = &PTR_FUN_110d99d50;
      puStack_500 = (undefined *)0x0;
      func_0x000107c28204(&pppuStack_598);
      ppuVar13 = (undefined **)0xa0;
      __Znwm();
      param_2 = appuStack_588;
      func_0x000107c313fc(ppuVar13 + 2);
      ppuVar13[1] = (undefined *)pppuVar15;
      ppuVar13[2] = (undefined *)&PTR_FUN_110d99d50;
      ppuVar13[0x13] = puStack_500;
      ppuVar20 = unaff_x20[0xc];
      *ppuVar13 = (undefined *)ppuVar20;
      ppuVar20[1] = (undefined *)ppuVar13;
      unaff_x20[0xc] = ppuVar13;
      unaff_x20[0xe] = (undefined **)((long)unaff_x20[0xe] + 1);
      func_0x000107c31400(appuStack_588);
      goto LAB_10bcc9364;
    }
    pppuVar11 = pppuVar9 + 1;
  } while (pppuVar9[0x13] != (undefined **)0x0);
  pppuVar11 = (undefined ***)*pppuVar11;
  uVar5 = pppuVar15 == pppuVar11;
  if (!(bool)uVar5) {
    ppuVar13 = *pppuVar9;
    ppuVar13[1] = (undefined *)pppuVar11;
    *pppuVar11 = ppuVar13;
    ppuVar13 = *pppuVar15;
    ppuVar13[1] = (undefined *)pppuVar9;
    *pppuVar9 = ppuVar13;
    *pppuVar15 = (undefined **)pppuVar9;
    pppuVar9[1] = (undefined **)pppuVar15;
  }
LAB_10bcc9364:
  ppuVar13 = unaff_x20[0xc] + 2;
  unaff_x20[0xc][0x13] = (undefined *)unaff_x20;
  func_0x000107c2798c(&pppuStack_598);
  *param_1 = ppuVar13;
  pppuVar15 = param_1 + 1;
  *pppuVar15 = ppuVar13;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_10bccaa34();
  func_0x00010bccade4(uStack_4f8);
  if ((bool)uVar5) {
    return pppuVar15;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(&pppuStack_598);
  func_0x00010bccae3c();
  func_0x00010bccaec4();
  ppuStack_740 = (undefined **)((ulong)ppuStack_740 & 0xffffffffffffff00);
  uStack_710 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    ppuStack_738 = param_1[5];
    ppuStack_740 = param_1[4];
    ppuStack_730 = param_1[6];
    param_1[4] = (undefined **)0x0;
    param_1[5] = (undefined **)0x0;
    ppuStack_720 = param_1[8];
    ppuStack_728 = param_1[7];
    param_1[6] = (undefined **)0x0;
    param_1[7] = (undefined **)0x0;
    ppuStack_718 = param_1[9];
    param_1[8] = (undefined **)0x0;
    param_1[9] = (undefined **)0x0;
    uStack_710 = 1;
    FUN_10bccab18(param_1 + 4);
  }
  ppuStack_748 = param_1[3];
  param_1[3] = (undefined **)0x0;
  FUN_10bccabc8(auStack_708,&ppuStack_748);
  uStack_7a8 = 0;
  uStack_7b0 = 0;
  uStack_798 = 0;
  uStack_7a0 = 0;
  uStack_7c8 = 0;
  uStack_7d0 = 0;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  FUN_10bccabc8(auStack_788,&uStack_7d0);
  *pppuVar15 = (undefined **)0x0;
  pppuVar15[1] = (undefined **)0x0;
  pppuVar15[2] = (undefined **)0x0;
  FUN_10bccaca8(&lStack_688,auStack_708);
  FUN_10bccaca8(alStack_6c8,auStack_788);
  uStack_640 = 0;
  pppuStack_648 = pppuVar15;
  do {
    if ((((bStack_650 & 1) == 0) && ((bStack_690 & 1) == 0)) || (lStack_688 == alStack_6c8[0])) {
      uStack_640 = 1;
      FUN_10bccac7c(&pppuStack_648);
      func_0x00010bccad44(alStack_6c8);
      pppuVar15 = &ppuStack_680;
      func_0x00010bccab3c(pppuVar15);
      func_0x00010bccad44(auStack_788);
      func_0x00010bccaf14();
      func_0x00010bccad44(auStack_708);
      func_0x00010bccad44(&ppuStack_748);
      return pppuVar15;
    }
    if ((bStack_650 & 1) == 0) {
      uVar19 = *(undefined8 *)(lStack_688 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_638,lStack_688 + 0x58);
      func_0x000107c27f54(auStack_620,&UNK_10f2e0451,auStack_638);
      FUN_10bcc7444(uVar19,0x65,auStack_620);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_620);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_638);
    }
    ppuVar13 = pppuVar15[1];
    if (ppuVar13 < pppuVar15[2]) {
      ppuVar13[2] = puStack_670;
      ppuVar13[1] = puStack_678;
      *ppuVar13 = (undefined *)ppuStack_680;
      puStack_678 = (undefined *)0x0;
      puStack_670 = (undefined *)0x0;
      ppuStack_680 = (undefined **)0x0;
      ppuVar13[4] = puStack_660;
      ppuVar13[3] = puStack_668;
      ppuVar13[5] = puStack_658;
      puStack_660 = (undefined *)0x0;
      puStack_658 = (undefined *)0x0;
      puStack_668 = (undefined *)0x0;
      ppuVar13 = ppuVar13 + 6;
    }
    else {
      ppuVar20 = *pppuVar15;
      lVar17 = (long)ppuVar13 - (long)ppuVar20;
      uVar1 = lVar17 / 0x30 + 1;
      if (0x555555555555555 < uVar1) {
        func_0x00010bccac70();
LAB_10bcc970c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10bcc9710);
        (*pcVar4)();
      }
      uVar3 = ((long)pppuVar15[2] - (long)ppuVar20) / 0x30;
      uVar14 = uVar3 * 2;
      if (uVar14 < uVar1 || uVar14 - uVar1 == 0) {
        uVar14 = uVar1;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar3) {
        uVar14 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar14) {
        func_0x000104bd35f4();
        goto LAB_10bcc970c;
      }
      lVar8 = uVar14 * 0x30;
      __Znwm();
      puVar2 = (undefined8 *)(lVar8 + lVar17);
      puVar2[1] = puStack_678;
      *puVar2 = ppuStack_680;
      puVar2[2] = puStack_670;
      ppuStack_680 = (undefined **)0x0;
      puStack_678 = (undefined *)0x0;
      puVar2[4] = puStack_660;
      puVar2[3] = puStack_668;
      puVar2[5] = puStack_658;
      puStack_670 = (undefined *)0x0;
      puStack_668 = (undefined *)0x0;
      puStack_660 = (undefined *)0x0;
      puStack_658 = (undefined *)0x0;
      ppuVar10 = (undefined **)(puVar2 + (lVar17 / -0x30) * 6);
      ppuVar12 = ppuVar20;
      while (ppuVar12 != ppuVar13) {
        func_0x00010bccad8c(ppuVar10);
        ppuVar10 = (undefined **)(extraout_x8_01 + 0x30);
        ppuVar12 = (undefined **)(extraout_x9 + 0x30);
      }
      for (; ppuVar20 != ppuVar13; ppuVar20 = ppuVar20 + 6) {
        func_0x00010bcca3a8(ppuVar20);
      }
      ppuVar13 = (undefined **)(puVar2 + 6);
      ppuVar20 = *pppuVar15;
      *pppuVar15 = (undefined **)(puVar2 + (lVar17 / -0x30) * 6);
      pppuVar15[1] = ppuVar13;
      pppuVar15[2] = (undefined **)(lVar8 + uVar14 * 0x30);
      if (ppuVar20 != (undefined **)0x0) {
        __ZdlPv();
      }
    }
    pppuVar15[1] = ppuVar13;
    FUN_10bccaa34(&lStack_688);
  } while( true );
}



/* Entry: 10bcc9254; end: 10bcc942b;  */

void FUN_10bcc9254(undefined8 param_1,undefined ***param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  long *plVar9;
  undefined8 *puVar10;
  long extraout_x8_00;
  long *plVar11;
  undefined8 *puVar12;
  long extraout_x9;
  long lVar13;
  ulong uVar14;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2d8 [64];
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 uStack_260;
  undefined1 auStack_258 [64];
  long alStack_218 [7];
  byte bStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  ulong *puStack_198;
  undefined1 uStack_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [32];
  undefined ***pppuStack_e8;
  undefined1 uStack_e0;
  undefined **appuStack_d8 [17];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010bccaec4();
  func_0x00010bccaea8();
  uStack_e0 = 1;
  pppuStack_e8 = param_2;
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv(param_2);
  plVar1 = (long *)(unaff_x20 + 0x60);
  plVar11 = (long *)(unaff_x20 + 0x68);
  do {
    plVar9 = (long *)*plVar11;
    uVar5 = plVar9 == plVar1;
    if ((bool)uVar5) {
      func_0x000107c280c4(&pppuStack_e8);
      lVar13 = (long)*(char *)(unaff_x20 + 0x5f);
      if (lVar13 < 0) {
        lVar7 = *(long *)(unaff_x20 + 0x48);
        lVar13 = *(long *)(unaff_x20 + 0x50);
      }
      else {
        lVar7 = unaff_x20 + 0x48;
      }
      func_0x000107c313f4(appuStack_d8,*(undefined8 *)(unaff_x20 + 0x40),lVar7,lVar13);
      appuStack_d8[0] = &PTR_FUN_110d99d50;
      lStack_50 = 0;
      func_0x000107c28204(&pppuStack_e8);
      plVar11 = (long *)0xa0;
      __Znwm();
      param_2 = appuStack_d8;
      func_0x000107c313fc(plVar11 + 2);
      plVar11[1] = (long)plVar1;
      plVar11[2] = (long)&PTR_FUN_110d99d50;
      plVar11[0x13] = lStack_50;
      lVar13 = *(long *)(unaff_x20 + 0x60);
      *plVar11 = lVar13;
      *(long **)(lVar13 + 8) = plVar11;
      *(long **)(unaff_x20 + 0x60) = plVar11;
      *(long *)(unaff_x20 + 0x70) = *(long *)(unaff_x20 + 0x70) + 1;
      func_0x000107c31400(appuStack_d8);
      goto LAB_10bcc9364;
    }
    plVar11 = plVar9 + 1;
  } while (plVar9[0x13] != 0);
  plVar11 = (long *)*plVar11;
  uVar5 = plVar1 == plVar11;
  if (!(bool)uVar5) {
    lVar13 = *plVar9;
    *(long **)(lVar13 + 8) = plVar11;
    *plVar11 = lVar13;
    lVar13 = *plVar1;
    *(long **)(lVar13 + 8) = plVar9;
    *plVar9 = lVar13;
    *plVar1 = (long)plVar9;
    plVar9[1] = (long)plVar1;
  }
LAB_10bcc9364:
  uVar8 = *(long *)(unaff_x20 + 0x60) + 0x10;
  *(long *)(*(long *)(unaff_x20 + 0x60) + 0x98) = unaff_x20;
  func_0x000107c2798c(&pppuStack_e8);
  *unaff_x19 = uVar8;
  puVar6 = unaff_x19 + 1;
  *puVar6 = uVar8;
  *(undefined1 *)(unaff_x19 + 2) = 0;
  *(undefined1 *)(unaff_x19 + 8) = 0;
  FUN_10bccaa34();
  func_0x00010bccade4(uStack_48);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(&pppuStack_e8);
  func_0x00010bccae3c();
  func_0x00010bccaec4();
  uStack_290 = uStack_290 & 0xffffffffffffff00;
  uStack_260 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    uStack_288 = unaff_x19[5];
    uStack_290 = unaff_x19[4];
    uStack_280 = unaff_x19[6];
    unaff_x19[4] = 0;
    unaff_x19[5] = 0;
    uStack_270 = unaff_x19[8];
    uStack_278 = unaff_x19[7];
    unaff_x19[6] = 0;
    unaff_x19[7] = 0;
    uStack_268 = unaff_x19[9];
    unaff_x19[8] = 0;
    unaff_x19[9] = 0;
    uStack_260 = 1;
    FUN_10bccab18(unaff_x19 + 4);
  }
  uStack_298 = unaff_x19[3];
  unaff_x19[3] = 0;
  FUN_10bccabc8(auStack_258,&uStack_298);
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  FUN_10bccabc8(auStack_2d8,&uStack_320);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  FUN_10bccaca8(&lStack_1d8,auStack_258);
  FUN_10bccaca8(alStack_218,auStack_2d8);
  uStack_190 = 0;
  puStack_198 = puVar6;
  do {
    if ((((bStack_1a0 & 1) == 0) && ((bStack_1e0 & 1) == 0)) || (lStack_1d8 == alStack_218[0])) {
      uStack_190 = 1;
      FUN_10bccac7c(&puStack_198);
      func_0x00010bccad44(alStack_218);
      func_0x00010bccab3c(&uStack_1d0);
      func_0x00010bccad44(auStack_2d8);
      func_0x00010bccaf14();
      func_0x00010bccad44(auStack_258);
      func_0x00010bccad44(&uStack_298);
      return;
    }
    if ((bStack_1a0 & 1) == 0) {
      uVar15 = *(undefined8 *)(lStack_1d8 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_188,lStack_1d8 + 0x58);
      func_0x000107c27f54(auStack_170,&UNK_10f2e0451,auStack_188);
      FUN_10bcc7444(uVar15,0x65,auStack_170);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
    }
    puVar17 = (undefined8 *)puVar6[1];
    if (puVar17 < (undefined8 *)puVar6[2]) {
      puVar17[2] = uStack_1c0;
      puVar17[1] = uStack_1c8;
      *puVar17 = uStack_1d0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d0 = 0;
      puVar17[4] = uStack_1b0;
      puVar17[3] = uStack_1b8;
      puVar17[5] = uStack_1a8;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1b8 = 0;
      puVar17 = puVar17 + 6;
    }
    else {
      puVar16 = (undefined8 *)*puVar6;
      lVar13 = (long)puVar17 - (long)puVar16;
      uVar8 = lVar13 / 0x30 + 1;
      if (0x555555555555555 < uVar8) {
        func_0x00010bccac70();
LAB_10bcc970c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10bcc9710);
        (*pcVar4)();
      }
      uVar3 = ((long)puVar6[2] - (long)puVar16) / 0x30;
      uVar14 = uVar3 * 2;
      if (uVar14 < uVar8 || uVar14 - uVar8 == 0) {
        uVar14 = uVar8;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar3) {
        uVar14 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar14) {
        func_0x000104bd35f4();
        goto LAB_10bcc970c;
      }
      lVar7 = uVar14 * 0x30;
      __Znwm();
      puVar2 = (undefined8 *)(lVar7 + lVar13);
      puVar2[1] = uStack_1c8;
      *puVar2 = uStack_1d0;
      puVar2[2] = uStack_1c0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      puVar2[4] = uStack_1b0;
      puVar2[3] = uStack_1b8;
      puVar2[5] = uStack_1a8;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      puVar10 = puVar2 + (lVar13 / -0x30) * 6;
      puVar12 = puVar16;
      while (puVar12 != puVar17) {
        func_0x00010bccad8c(puVar10);
        puVar10 = (undefined8 *)(extraout_x8_00 + 0x30);
        puVar12 = (undefined8 *)(extraout_x9 + 0x30);
      }
      for (; puVar16 != puVar17; puVar16 = puVar16 + 6) {
        func_0x00010bcca3a8(puVar16);
      }
      puVar17 = puVar2 + 6;
      uVar8 = *puVar6;
      *puVar6 = (ulong)(puVar2 + (lVar13 / -0x30) * 6);
      puVar6[1] = (ulong)puVar17;
      puVar6[2] = lVar7 + uVar14 * 0x30;
      if (uVar8 != 0) {
        __ZdlPv();
      }
    }
    puVar6[1] = (ulong)puVar17;
    FUN_10bccaa34(&lStack_1d8);
  } while( true );
}



/* Entry: 10bcc942c; end: 10bcc977f;  */

void FUN_10bcc942c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long extraout_x9;
  ulong uVar8;
  ulong *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [64];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 auStack_168 [64];
  long alStack_128 [7];
  byte bStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x00010bccaec4();
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  uStack_170 = 0;
  if (*(char *)(param_2 + 0x40) != '\0') {
    uStack_198 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_1a0 = *(ulong *)(unaff_x20 + 0x10);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_188 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    uStack_170 = 1;
    FUN_10bccab18(unaff_x20 + 0x10);
  }
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = 0;
  FUN_10bccabc8(auStack_168,&uStack_1a8);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  FUN_10bccabc8(auStack_1e8,&uStack_230);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  FUN_10bccaca8(&lStack_e8,auStack_168);
  FUN_10bccaca8(alStack_128,auStack_1e8);
  do {
    if ((((bStack_b0 & 1) == 0) && ((bStack_f0 & 1) == 0)) || (lStack_e8 == alStack_128[0])) {
      FUN_10bccac7c(&stack0xffffffffffffff58);
      func_0x00010bccad44(alStack_128);
      func_0x00010bccab3c(&uStack_e0);
      func_0x00010bccad44(auStack_1e8);
      func_0x00010bccaf14();
      func_0x00010bccad44(auStack_168);
      func_0x00010bccad44(&uStack_1a8);
      return;
    }
    if ((bStack_b0 & 1) == 0) {
      uVar10 = *(undefined8 *)(lStack_e8 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_98,lStack_e8 + 0x58);
      func_0x000107c27f54(auStack_80,&UNK_10f2e0451,auStack_98);
      FUN_10bcc7444(uVar10,0x65,auStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    }
    puVar12 = (undefined8 *)unaff_x19[1];
    if (puVar12 < (undefined8 *)unaff_x19[2]) {
      puVar12[2] = uStack_d0;
      puVar12[1] = uStack_d8;
      *puVar12 = uStack_e0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      puVar12[4] = uStack_c0;
      puVar12[3] = uStack_c8;
      puVar12[5] = uStack_b8;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_c8 = 0;
      puVar12 = puVar12 + 6;
    }
    else {
      puVar11 = (undefined8 *)*unaff_x19;
      lVar9 = (long)puVar12 - (long)puVar11;
      uVar5 = lVar9 / 0x30 + 1;
      if (0x555555555555555 < uVar5) {
        func_0x00010bccac70();
LAB_10bcc970c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10bcc9710);
        (*pcVar3)();
      }
      uVar2 = ((long)unaff_x19[2] - (long)puVar11) / 0x30;
      uVar8 = uVar2 * 2;
      if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
        uVar8 = uVar5;
      }
      if (0x2aaaaaaaaaaaaa9 < uVar2) {
        uVar8 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar8) {
        func_0x000104bd35f4();
        goto LAB_10bcc970c;
      }
      lVar4 = uVar8 * 0x30;
      __Znwm();
      puVar1 = (undefined8 *)(lVar4 + lVar9);
      puVar1[1] = uStack_d8;
      *puVar1 = uStack_e0;
      puVar1[2] = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar1[4] = uStack_c0;
      puVar1[3] = uStack_c8;
      puVar1[5] = uStack_b8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puVar6 = puVar1 + (lVar9 / -0x30) * 6;
      puVar7 = puVar11;
      while (puVar7 != puVar12) {
        func_0x00010bccad8c(puVar6);
        puVar6 = (undefined8 *)(extraout_x8 + 0x30);
        puVar7 = (undefined8 *)(extraout_x9 + 0x30);
      }
      for (; puVar11 != puVar12; puVar11 = puVar11 + 6) {
        func_0x00010bcca3a8(puVar11);
      }
      puVar12 = puVar1 + 6;
      uVar5 = *unaff_x19;
      *unaff_x19 = (ulong)(puVar1 + (lVar9 / -0x30) * 6);
      unaff_x19[1] = (ulong)puVar12;
      unaff_x19[2] = lVar4 + uVar8 * 0x30;
      if (uVar5 != 0) {
        __ZdlPv();
      }
    }
    unaff_x19[1] = (ulong)puVar12;
    FUN_10bccaa34(&lStack_e8);
  } while( true );
}



/* Entry: 10bcc9780; end: 10bcc989b;  */

void FUN_10bcc9780(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [23];
  char cStack_69;
  code *pcStack_68;
  undefined **ppuStack_60;
  
  func_0x00010bccaec4();
  func_0x00010bccaea8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c278b8(auStack_b0,&UNK_10f82f9d8);
  func_0x000107c2831c(auStack_98,auStack_b0,param_3);
  func_0x000107c27fac(auStack_80,auStack_98,&DAT_10f684600);
  uVar1 = cStack_69 == '\0';
  pcStack_68 = FUN_10bcca51c;
  ppuStack_60 = &PTR_FUN_110d99d28;
  func_0x000107c31358();
  func_0x00010bccae88();
  func_0x00010bccaea0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bccaee4();
  func_0x00010bccade4(extraout_x8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010bccae88();
    func_0x00010bccaea0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x00010bccaee4();
    FUN_10bcca8a4();
    func_0x00010bccae44();
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      plVar4 = *(long **)(unaff_x19 + 0x68);
      plVar2 = *(long **)(*(long *)(unaff_x19 + 0x60) + 8);
      lVar3 = *plVar4;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      while (plVar4 != (long *)(unaff_x19 + 0x60)) {
        plVar2 = (long *)plVar4[1];
        (**(code **)plVar4[2])();
        __ZdlPv(plVar4);
        plVar4 = plVar2;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19);
    return;
  }
  return;
}



/* Entry: 10bcc989c; end: 10bcc991b;  */

void FUN_10bcc989c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10bcc991c; end: 10bcc9947;  */

/* WARNING: Possible PIC construction at 0x00010bcc9a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcc9aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcc9ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcc9aa4) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9ab8) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9acc) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9ba8) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9bb4) */
/* WARNING: Removing unreachable block (ram,0x00010bcca058) */
/* WARNING: Removing unreachable block (ram,0x00010bcca064) */
/* WARNING: Removing unreachable block (ram,0x00010bcca070) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0e0) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0ec) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0f8) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0cc) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0d8) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0b0) */
/* WARNING: Removing unreachable block (ram,0x00010bcca114) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0c0) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9a10) */
/* WARNING: Removing unreachable block (ram,0x00010bcca004) */
/* WARNING: Removing unreachable block (ram,0x00010bcca00c) */

void FUN_10bcc991c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  bool bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar19;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
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
  
  if (param_1 == param_2) {
    return;
  }
  puVar13 = (undefined8 *)(LZCOUNT(((long)param_2 - (long)param_1) / 0x30) << 1 ^ 0x7e);
  ppuVar5 = &puStack_d0;
  ppuVar6 = &puStack_d0;
  bVar15 = true;
  func_0x00010bccae6c();
LAB_10bcc9978:
  puVar10 = unaff_x19 + -6;
  puStack_c8 = unaff_x19 + -0xc;
  puStack_d0 = unaff_x19 + -0x12;
  puVar8 = unaff_x20;
LAB_10bcc998c:
  unaff_x20 = puVar8;
  uVar14 = (long)unaff_x19 - (long)unaff_x20;
  uVar18 = (long)uVar14 / 0x30;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_10bcc9c18;
  case 2:
    puVar13 = puVar10;
    func_0x00010bcca2d4(puVar10,unaff_x20);
    if ((int)puVar13 != 0) {
      unaff_x23 = unaff_x20;
      func_0x00010bccae10(unaff_x20,puVar10);
      ppuVar6 = &puStack_d0;
      puVar11 = puVar10;
      goto SUB_10bcca318;
    }
    goto LAB_10bcc9c18;
  case 3:
    puVar8 = unaff_x20 + 6;
    unaff_x23 = unaff_x20;
    puVar12 = puVar10;
    func_0x00010bccae10();
    puVar11 = puVar8;
    puVar9 = puVar8;
    puStack_100 = puVar13;
    puStack_f8 = puVar10;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    ppppppuStack_e0 = unaff_x29;
    uStack_d8 = unaff_x30;
    func_0x00010bccad84();
    puVar13 = puVar11;
    func_0x00010bccad38();
    if (((ulong)puVar11 & 1) == 0) {
      if ((int)puVar13 == 0) {
        return;
      }
      func_0x00010bccaf44();
      func_0x00010bccad84();
      if ((int)puVar8 == 0) {
        return;
      }
      func_0x00010bccaeb8();
      ppuVar6 = &puStack_d0;
      unaff_x23 = puVar8;
      puVar11 = puVar9;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
    }
    else {
      puVar11 = puVar12;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
      if ((int)puVar13 == 0) {
        func_0x00010bccaeb8();
        unaff_x30 = 0x10bcca004;
        ppuVar6 = &puStack_100;
        unaff_x23 = puVar13;
        puVar11 = puVar9;
        unaff_x19 = puVar8;
        unaff_x20 = puVar12;
        unaff_x29 = &ppppppuStack_e0;
      }
    }
    goto SUB_10bcca318;
  case 4:
    puVar11 = unaff_x20 + 6;
    puVar12 = puVar10;
    func_0x00010bccae10(unaff_x20,puVar11,unaff_x20 + 0xc);
    break;
  case 5:
    puVar11 = unaff_x20 + 6;
    puVar8 = unaff_x20 + 0xc;
    puVar9 = unaff_x20 + 0x12;
    func_0x00010bccae10(unaff_x20,puVar11,puVar8,puVar9,puVar10);
    ppuVar5 = (undefined8 **)&uStack_110;
    uStack_110 = 0x30;
    unaff_x29 = &ppppppuStack_e0;
    puVar12 = puVar9;
    puStack_108 = unaff_x23;
    puStack_100 = puVar13;
    puStack_f8 = puVar10;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    func_0x00010bccae6c();
    unaff_x30 = 0x10bcca0b0;
    puVar10 = puVar8;
    puVar13 = puVar9;
    break;
  default:
    goto code_r0x00010bcc99a0;
  }
  *(undefined8 **)((long)ppuVar5 + -0x30) = puVar13;
  *(undefined8 **)((long)ppuVar5 + -0x28) = puVar10;
  *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar5 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar5 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
  func_0x00010bccae6c();
  FUN_10bcc9fa4();
  func_0x00010bccad84();
  if ((int)puVar12 == 0) {
    return;
  }
  func_0x00010bccadc0();
  unaff_x30 = 0x10bcca058;
  ppuVar6 = (undefined8 **)((long)ppuVar5 + -0x30);
  unaff_x23 = puVar12;
  unaff_x29 = (undefined8 *******)((long)ppuVar5 + -0x10);
SUB_10bcca318:
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar6 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -8) = unaff_x30;
  uVar19 = *unaff_x23;
  *(undefined8 *)((long)ppuVar6 + -0x48) = unaff_x23[1];
  *(undefined8 *)((long)ppuVar6 + -0x50) = uVar19;
  *(undefined8 *)((long)ppuVar6 + -0x40) = unaff_x23[2];
  *unaff_x23 = 0;
  unaff_x23[1] = 0;
  uVar19 = unaff_x23[3];
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  *(undefined8 *)((long)ppuVar6 + -0x30) = unaff_x23[4];
  *(undefined8 *)((long)ppuVar6 + -0x38) = uVar19;
  *(undefined8 *)((long)ppuVar6 + -0x28) = unaff_x23[5];
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  func_0x00010bcca37c();
  func_0x00010bcca37c(puVar11,(undefined1 *)((long)ppuVar6 + -0x50));
  func_0x00010bccae5c();
  return;
code_r0x00010bcc99a0:
  if ((long)uVar14 < 0x480) {
    if (bVar15 == false) {
      if (unaff_x20 != unaff_x19) {
        while (puVar13 = unaff_x20, unaff_x20 = puVar13 + 6, unaff_x20 != unaff_x19) {
          puVar8 = unaff_x20;
          func_0x00010bccad84();
          if ((int)puVar8 != 0) {
            uStack_88 = puVar13[7];
            uStack_90 = *unaff_x20;
            uStack_80 = puVar13[8];
            puVar13[7] = 0;
            puVar13[8] = 0;
            *unaff_x20 = 0;
            uStack_70 = puVar13[10];
            uStack_78 = puVar13[9];
            uStack_68 = puVar13[0xb];
            puVar13[9] = 0;
            puVar13[10] = 0;
            puVar13[0xb] = 0;
            do {
              puVar8 = puVar13;
              func_0x00010bccaedc(puVar8 + 6);
              uVar18 = 0;
              func_0x00010bccad84();
              puVar13 = puVar8 + -6;
            } while ((uVar18 & 1) != 0);
            func_0x00010bcca37c(puVar8,&uStack_90);
            func_0x00010bccae34();
          }
        }
      }
      goto LAB_10bcc9c18;
    }
    if (unaff_x20 == unaff_x19) goto LAB_10bcc9c18;
    lVar17 = 0;
    puVar13 = unaff_x20;
    goto LAB_10bcc9cdc;
  }
  if (puVar13 == (undefined8 *)0x0) {
    if (unaff_x20 == unaff_x19) goto LAB_10bcc9c18;
    uVar14 = uVar18 - 2 >> 1;
    puVar13 = unaff_x20 + uVar14 * 6;
    do {
      puVar8 = unaff_x20;
      FUN_10bcca3d0(unaff_x20,uVar18,puVar13);
      uVar14 = uVar14 - 1;
      puVar13 = puVar13 + -6;
    } while (-1 < (long)uVar14);
    do {
      if ((long)uVar18 < 2) goto LAB_10bcc9c18;
      uVar14 = 0;
      uStack_b8 = unaff_x20[1];
      uStack_c0 = *unaff_x20;
      uStack_b0 = unaff_x20[2];
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      uStack_a0 = unaff_x20[4];
      uStack_a8 = unaff_x20[3];
      uStack_98 = unaff_x20[5];
      unaff_x20[4] = 0;
      unaff_x20[5] = 0;
      unaff_x20[3] = 0;
      puVar13 = unaff_x20;
      do {
        iVar7 = (int)puVar8;
        uVar2 = uVar14 << 1 | 1;
        uVar1 = uVar14 * 2 + 2;
        puVar10 = puVar13 + uVar14 * 6 + 6;
        uVar3 = uVar2;
        if ((long)uVar1 < (long)uVar18) {
          func_0x00010bccaed0();
          puVar10 = puVar13 + uVar14 * 6 + 0xc;
          uVar3 = uVar1;
          if (iVar7 == 0) {
            puVar10 = puVar13 + uVar14 * 6 + 6;
            uVar3 = uVar2;
          }
        }
        uVar14 = uVar3;
        func_0x00010bccaedc();
        puVar8 = puVar13;
        puVar13 = puVar10;
      } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
      unaff_x19 = unaff_x19 + -6;
      if (puVar10 == unaff_x19) {
        func_0x00010bcca37c(puVar10,&uStack_c0);
      }
      else {
        func_0x00010bccaeb8();
        func_0x00010bcca37c();
        func_0x00010bcca37c(unaff_x19,&uStack_c0);
        uVar14 = (long)puVar10 + (0x30 - (long)unaff_x20);
        if (0x30 < (long)uVar14) {
          uVar14 = uVar14 / 0x30 - 2 >> 1;
          puVar13 = unaff_x20 + uVar14 * 6;
          func_0x00010bccad84();
          if ((int)puVar13 != 0) {
            uStack_88 = puVar10[1];
            uStack_90 = *puVar10;
            uStack_80 = puVar10[2];
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            uStack_70 = puVar10[4];
            uStack_78 = puVar10[3];
            uStack_68 = puVar10[5];
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[3] = 0;
            puVar13 = unaff_x20 + uVar14 * 6;
            do {
              puVar8 = puVar13;
              func_0x00010bccadc0();
              func_0x00010bcca37c();
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1 >> 1;
              puVar13 = unaff_x20 + uVar14 * 6;
              puVar10 = puVar13;
              func_0x00010bcca2d4(puVar13,&uStack_90);
            } while (((ulong)puVar10 & 1) != 0);
            func_0x00010bcca37c(puVar8,&uStack_90);
            func_0x00010bccae34();
          }
        }
      }
      puVar8 = &uStack_c0;
      func_0x00010bcca3a8();
      uVar18 = uVar18 - 1;
    } while( true );
  }
  puVar11 = unaff_x20 + (uVar18 >> 1) * 6;
  if (0x1800 < uVar14) {
    FUN_10bcc9fa4(unaff_x20,puVar11,puVar10);
    FUN_10bcc9fa4(unaff_x20 + 6,puVar11 + -6,puStack_c8);
    FUN_10bcc9fa4(unaff_x20 + 0xc,puVar11 + 6,puStack_d0);
    FUN_10bcc9fa4(puVar11 + -6,puVar11,puVar11 + 6);
    unaff_x30 = 0x10bcc9a10;
    ppuVar6 = &puStack_d0;
    unaff_x23 = unaff_x20;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_10bcca318;
  }
  FUN_10bcc9fa4(puVar11,unaff_x20,puVar10);
  puVar13 = (undefined8 *)((long)puVar13 + -1);
  puVar11 = unaff_x19;
  if (!bVar15) {
    puVar8 = unaff_x20 + -6;
    func_0x00010bcca2d4(puVar8,unaff_x20);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x00010bccad4c();
      puVar9 = &uStack_90;
      func_0x00010bccad84();
      puVar8 = unaff_x20;
      if (((ulong)puVar9 & 1) == 0) {
        do {
          puVar8 = puVar8 + 6;
          if (unaff_x19 <= puVar8) break;
          func_0x00010bccadf8();
        } while ((int)puVar9 == 0);
      }
      else {
        do {
          puVar8 = puVar8 + 6;
          func_0x00010bccadf8();
        } while (((ulong)puVar9 & 1) == 0);
      }
      if (puVar8 < unaff_x19) {
        do {
          func_0x00010bccae78();
        } while (((ulong)puVar9 & 1) != 0);
      }
      if (puVar8 < unaff_x19) {
        unaff_x30 = 0x10bcc9ba8;
        ppuVar6 = &puStack_d0;
        unaff_x23 = puVar8;
        unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
        goto SUB_10bcca318;
      }
      param_1 = puVar8 + -6;
      if (unaff_x20 != param_1) {
        func_0x00010bcca37c(unaff_x20,param_1);
      }
      func_0x00010bcca37c(param_1,&uStack_90);
      func_0x00010bccae34();
      bVar15 = false;
      goto LAB_10bcc998c;
    }
  }
  lVar17 = 0;
  func_0x00010bccad4c();
  do {
    lVar17 = lVar17 + 0x30;
    uVar18 = lVar17 + (long)unaff_x20;
    func_0x00010bcca2d4(uVar18,&uStack_90);
  } while ((uVar18 & 1) != 0);
  unaff_x23 = (undefined8 *)((long)unaff_x20 + lVar17);
  if (lVar17 == 0x30) {
    do {
      if (unaff_x19 <= unaff_x23) break;
      func_0x00010bccae4c();
    } while ((uVar18 & 1) == 0);
  }
  else {
    do {
      func_0x00010bccae4c();
    } while ((int)uVar18 == 0);
  }
  if (unaff_x23 < unaff_x19) {
    unaff_x30 = 0x10bcc9aa4;
    ppuVar6 = &puStack_d0;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_10bcca318;
  }
  puVar11 = unaff_x23 + -6;
  if (unaff_x20 != puVar11) {
    func_0x00010bcca37c(unaff_x20,puVar11);
  }
  func_0x00010bcca37c(puVar11,&uStack_90);
  func_0x00010bccae34();
  puVar8 = unaff_x23;
  if (unaff_x23 < unaff_x19) goto LAB_10bcc9b24;
  puVar9 = unaff_x20;
  FUN_10bcca128(unaff_x20,puVar11);
  param_1 = unaff_x23;
  FUN_10bcca128(unaff_x23,unaff_x19);
  if ((int)param_1 == 0) goto code_r0x00010bcc9b20;
  unaff_x19 = puVar11;
  if (((ulong)puVar9 & 1) != 0) goto LAB_10bcc9c18;
  goto LAB_10bcc9978;
LAB_10bcc9cdc:
  puVar8 = puVar13 + 6;
  if (puVar8 == unaff_x19) {
LAB_10bcc9c18:
    func_0x00010bccae10(unaff_x30);
    return;
  }
  func_0x00010bccadc0();
  func_0x00010bcca2d4();
  if ((int)param_1 != 0) {
    uStack_88 = puVar13[7];
    uStack_90 = *puVar8;
    uStack_80 = puVar13[8];
    puVar13[7] = 0;
    puVar13[8] = 0;
    *puVar8 = 0;
    uStack_70 = puVar13[10];
    uStack_78 = puVar13[9];
    uStack_68 = puVar13[0xb];
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    lVar4 = lVar17;
    do {
      lVar16 = lVar4;
      func_0x00010bcca37c((long)unaff_x20 + lVar16 + 0x30);
      param_1 = unaff_x20;
      if (lVar16 == 0) goto LAB_10bcc9d5c;
      puVar13 = &uStack_90;
      func_0x00010bcca2d4(puVar13,lVar16 + -0x30 + (long)unaff_x20);
      lVar4 = lVar16 + -0x30;
    } while (((ulong)puVar13 & 1) != 0);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar16);
LAB_10bcc9d5c:
    func_0x00010bcca37c(param_1,&uStack_90);
    func_0x00010bccae34();
  }
  lVar17 = lVar17 + 0x30;
  puVar13 = puVar8;
  goto LAB_10bcc9cdc;
code_r0x00010bcc9b20:
  if (((ulong)puVar9 & 1) == 0) {
LAB_10bcc9b24:
    FUN_10bcc9948(unaff_x20,puVar11,puVar13,bVar15);
    bVar15 = false;
    param_1 = unaff_x20;
  }
  goto LAB_10bcc998c;
}



/* Entry: 10bcc9948; end: 10bcc9fa3;  */

/* WARNING: Possible PIC construction at 0x00010bcc9a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcc9aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcc9ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcc9aa4) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9ab8) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9acc) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9ba8) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9bb4) */
/* WARNING: Removing unreachable block (ram,0x00010bcca058) */
/* WARNING: Removing unreachable block (ram,0x00010bcca064) */
/* WARNING: Removing unreachable block (ram,0x00010bcca070) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0e0) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0ec) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0f8) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0cc) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0d8) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0b0) */
/* WARNING: Removing unreachable block (ram,0x00010bcca114) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0c0) */
/* WARNING: Removing unreachable block (ram,0x00010bcc9a10) */
/* WARNING: Removing unreachable block (ram,0x00010bcca004) */
/* WARNING: Removing unreachable block (ram,0x00010bcca00c) */

void FUN_10bcc9948(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar17;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
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
  
  ppuVar5 = &puStack_d0;
  ppuVar6 = &puStack_d0;
  func_0x00010bccae6c();
LAB_10bcc9978:
  puVar11 = unaff_x19 + -6;
  puStack_c8 = unaff_x19 + -0xc;
  puStack_d0 = unaff_x19 + -0x12;
  puVar8 = unaff_x20;
LAB_10bcc998c:
  unaff_x20 = puVar8;
  uVar13 = (long)unaff_x19 - (long)unaff_x20;
  uVar16 = (long)uVar13 / 0x30;
  switch(uVar16) {
  case 0:
  case 1:
    goto LAB_10bcc9c18;
  case 2:
    puVar8 = puVar11;
    func_0x00010bcca2d4(puVar11,unaff_x20);
    if ((int)puVar8 != 0) {
      unaff_x23 = unaff_x20;
      func_0x00010bccae10(unaff_x20,puVar11);
      ppuVar6 = &puStack_d0;
      puVar10 = puVar11;
      goto SUB_10bcca318;
    }
    goto LAB_10bcc9c18;
  case 3:
    puVar8 = unaff_x20 + 6;
    unaff_x23 = unaff_x20;
    puVar12 = puVar11;
    func_0x00010bccae10();
    puVar10 = puVar8;
    puVar9 = puVar8;
    puStack_100 = param_3;
    puStack_f8 = puVar11;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    ppppppuStack_e0 = unaff_x29;
    uStack_d8 = unaff_x30;
    func_0x00010bccad84();
    puVar11 = puVar10;
    func_0x00010bccad38();
    if (((ulong)puVar10 & 1) == 0) {
      if ((int)puVar11 == 0) {
        return;
      }
      func_0x00010bccaf44();
      func_0x00010bccad84();
      if ((int)puVar8 == 0) {
        return;
      }
      func_0x00010bccaeb8();
      ppuVar6 = &puStack_d0;
      unaff_x23 = puVar8;
      puVar10 = puVar9;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
    }
    else {
      puVar10 = puVar12;
      unaff_x19 = puStack_e8;
      unaff_x20 = puStack_f0;
      unaff_x29 = (undefined8 *******)ppppppuStack_e0;
      unaff_x30 = uStack_d8;
      if ((int)puVar11 == 0) {
        func_0x00010bccaeb8();
        unaff_x30 = 0x10bcca004;
        ppuVar6 = &puStack_100;
        unaff_x23 = puVar11;
        puVar10 = puVar9;
        unaff_x19 = puVar8;
        unaff_x20 = puVar12;
        unaff_x29 = &ppppppuStack_e0;
      }
    }
    goto SUB_10bcca318;
  case 4:
    puVar10 = unaff_x20 + 6;
    puVar12 = puVar11;
    func_0x00010bccae10(unaff_x20,puVar10,unaff_x20 + 0xc);
    break;
  case 5:
    puVar10 = unaff_x20 + 6;
    puVar8 = unaff_x20 + 0xc;
    puVar9 = unaff_x20 + 0x12;
    func_0x00010bccae10(unaff_x20,puVar10,puVar8,puVar9,puVar11);
    ppuVar5 = (undefined8 **)&uStack_110;
    uStack_110 = 0x30;
    unaff_x29 = &ppppppuStack_e0;
    puVar12 = puVar9;
    puStack_108 = unaff_x23;
    puStack_100 = param_3;
    puStack_f8 = puVar11;
    puStack_f0 = unaff_x20;
    puStack_e8 = unaff_x19;
    func_0x00010bccae6c();
    unaff_x30 = 0x10bcca0b0;
    puVar11 = puVar8;
    param_3 = puVar9;
    break;
  default:
    goto code_r0x00010bcc99a0;
  }
  *(undefined8 **)((long)ppuVar5 + -0x30) = param_3;
  *(undefined8 **)((long)ppuVar5 + -0x28) = puVar11;
  *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar5 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar5 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
  func_0x00010bccae6c();
  FUN_10bcc9fa4();
  func_0x00010bccad84();
  if ((int)puVar12 == 0) {
    return;
  }
  func_0x00010bccadc0();
  unaff_x30 = 0x10bcca058;
  ppuVar6 = (undefined8 **)((long)ppuVar5 + -0x30);
  unaff_x23 = puVar12;
  unaff_x29 = (undefined8 *******)((long)ppuVar5 + -0x10);
SUB_10bcca318:
  *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar6 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)ppuVar6 + -0x10) = unaff_x29;
  *(undefined8 *)((long)ppuVar6 + -8) = unaff_x30;
  uVar17 = *unaff_x23;
  *(undefined8 *)((long)ppuVar6 + -0x48) = unaff_x23[1];
  *(undefined8 *)((long)ppuVar6 + -0x50) = uVar17;
  *(undefined8 *)((long)ppuVar6 + -0x40) = unaff_x23[2];
  *unaff_x23 = 0;
  unaff_x23[1] = 0;
  uVar17 = unaff_x23[3];
  unaff_x23[2] = 0;
  unaff_x23[3] = 0;
  *(undefined8 *)((long)ppuVar6 + -0x30) = unaff_x23[4];
  *(undefined8 *)((long)ppuVar6 + -0x38) = uVar17;
  *(undefined8 *)((long)ppuVar6 + -0x28) = unaff_x23[5];
  unaff_x23[4] = 0;
  unaff_x23[5] = 0;
  func_0x00010bcca37c();
  func_0x00010bcca37c(puVar10,(undefined1 *)((long)ppuVar6 + -0x50));
  func_0x00010bccae5c();
  return;
code_r0x00010bcc99a0:
  if ((long)uVar13 < 0x480) {
    if ((param_4 & 1) == 0) {
      if (unaff_x20 != unaff_x19) {
        while (puVar8 = unaff_x20, unaff_x20 = puVar8 + 6, unaff_x20 != unaff_x19) {
          puVar11 = unaff_x20;
          func_0x00010bccad84();
          if ((int)puVar11 != 0) {
            uStack_88 = puVar8[7];
            uStack_90 = *unaff_x20;
            uStack_80 = puVar8[8];
            puVar8[7] = 0;
            puVar8[8] = 0;
            *unaff_x20 = 0;
            uStack_70 = puVar8[10];
            uStack_78 = puVar8[9];
            uStack_68 = puVar8[0xb];
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            do {
              puVar11 = puVar8;
              func_0x00010bccaedc(puVar11 + 6);
              uVar16 = 0;
              func_0x00010bccad84();
              puVar8 = puVar11 + -6;
            } while ((uVar16 & 1) != 0);
            func_0x00010bcca37c(puVar11,&uStack_90);
            func_0x00010bccae34();
          }
        }
      }
      goto LAB_10bcc9c18;
    }
    if (unaff_x20 == unaff_x19) goto LAB_10bcc9c18;
    lVar15 = 0;
    puVar8 = unaff_x20;
    goto LAB_10bcc9cdc;
  }
  if (param_3 == (undefined8 *)0x0) {
    if (unaff_x20 == unaff_x19) goto LAB_10bcc9c18;
    uVar13 = uVar16 - 2 >> 1;
    puVar8 = unaff_x20 + uVar13 * 6;
    do {
      puVar11 = unaff_x20;
      FUN_10bcca3d0(unaff_x20,uVar16,puVar8);
      uVar13 = uVar13 - 1;
      puVar8 = puVar8 + -6;
    } while (-1 < (long)uVar13);
    do {
      if ((long)uVar16 < 2) goto LAB_10bcc9c18;
      uVar13 = 0;
      uStack_b8 = unaff_x20[1];
      uStack_c0 = *unaff_x20;
      uStack_b0 = unaff_x20[2];
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *unaff_x20 = 0;
      uStack_a0 = unaff_x20[4];
      uStack_a8 = unaff_x20[3];
      uStack_98 = unaff_x20[5];
      unaff_x20[4] = 0;
      unaff_x20[5] = 0;
      unaff_x20[3] = 0;
      puVar8 = unaff_x20;
      do {
        iVar7 = (int)puVar11;
        uVar2 = uVar13 << 1 | 1;
        uVar1 = uVar13 * 2 + 2;
        puVar10 = puVar8 + uVar13 * 6 + 6;
        uVar3 = uVar2;
        if ((long)uVar1 < (long)uVar16) {
          func_0x00010bccaed0();
          puVar10 = puVar8 + uVar13 * 6 + 0xc;
          uVar3 = uVar1;
          if (iVar7 == 0) {
            puVar10 = puVar8 + uVar13 * 6 + 6;
            uVar3 = uVar2;
          }
        }
        uVar13 = uVar3;
        func_0x00010bccaedc();
        puVar11 = puVar8;
        puVar8 = puVar10;
      } while ((long)uVar13 <= (long)(uVar16 - 2 >> 1));
      unaff_x19 = unaff_x19 + -6;
      if (puVar10 == unaff_x19) {
        func_0x00010bcca37c(puVar10,&uStack_c0);
      }
      else {
        func_0x00010bccaeb8();
        func_0x00010bcca37c();
        func_0x00010bcca37c(unaff_x19,&uStack_c0);
        uVar13 = (long)puVar10 + (0x30 - (long)unaff_x20);
        if (0x30 < (long)uVar13) {
          uVar13 = uVar13 / 0x30 - 2 >> 1;
          puVar8 = unaff_x20 + uVar13 * 6;
          func_0x00010bccad84();
          if ((int)puVar8 != 0) {
            uStack_88 = puVar10[1];
            uStack_90 = *puVar10;
            uStack_80 = puVar10[2];
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            uStack_70 = puVar10[4];
            uStack_78 = puVar10[3];
            uStack_68 = puVar10[5];
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[3] = 0;
            puVar8 = unaff_x20 + uVar13 * 6;
            do {
              puVar11 = puVar8;
              func_0x00010bccadc0();
              func_0x00010bcca37c();
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1 >> 1;
              puVar8 = unaff_x20 + uVar13 * 6;
              puVar10 = puVar8;
              func_0x00010bcca2d4(puVar8,&uStack_90);
            } while (((ulong)puVar10 & 1) != 0);
            func_0x00010bcca37c(puVar11,&uStack_90);
            func_0x00010bccae34();
          }
        }
      }
      puVar11 = &uStack_c0;
      func_0x00010bcca3a8();
      uVar16 = uVar16 - 1;
    } while( true );
  }
  puVar10 = unaff_x20 + (uVar16 >> 1) * 6;
  if (0x1800 < uVar13) {
    FUN_10bcc9fa4(unaff_x20,puVar10,puVar11);
    FUN_10bcc9fa4(unaff_x20 + 6,puVar10 + -6,puStack_c8);
    FUN_10bcc9fa4(unaff_x20 + 0xc,puVar10 + 6,puStack_d0);
    FUN_10bcc9fa4(puVar10 + -6,puVar10,puVar10 + 6);
    unaff_x30 = 0x10bcc9a10;
    ppuVar6 = &puStack_d0;
    unaff_x23 = unaff_x20;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_10bcca318;
  }
  FUN_10bcc9fa4(puVar10,unaff_x20,puVar11);
  param_3 = (undefined8 *)((long)param_3 + -1);
  puVar10 = unaff_x19;
  if ((param_4 & 1) == 0) {
    puVar8 = unaff_x20 + -6;
    func_0x00010bcca2d4(puVar8,unaff_x20);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x00010bccad4c();
      puVar9 = &uStack_90;
      func_0x00010bccad84();
      puVar8 = unaff_x20;
      if (((ulong)puVar9 & 1) == 0) {
        do {
          puVar8 = puVar8 + 6;
          if (unaff_x19 <= puVar8) break;
          func_0x00010bccadf8();
        } while ((int)puVar9 == 0);
      }
      else {
        do {
          puVar8 = puVar8 + 6;
          func_0x00010bccadf8();
        } while (((ulong)puVar9 & 1) == 0);
      }
      if (puVar8 < unaff_x19) {
        do {
          func_0x00010bccae78();
        } while (((ulong)puVar9 & 1) != 0);
      }
      if (puVar8 < unaff_x19) {
        unaff_x30 = 0x10bcc9ba8;
        ppuVar6 = &puStack_d0;
        unaff_x23 = puVar8;
        unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
        goto SUB_10bcca318;
      }
      param_1 = puVar8 + -6;
      if (unaff_x20 != param_1) {
        func_0x00010bcca37c(unaff_x20,param_1);
      }
      func_0x00010bcca37c(param_1,&uStack_90);
      func_0x00010bccae34();
      param_4 = 0;
      goto LAB_10bcc998c;
    }
  }
  lVar15 = 0;
  func_0x00010bccad4c();
  do {
    lVar15 = lVar15 + 0x30;
    uVar16 = lVar15 + (long)unaff_x20;
    func_0x00010bcca2d4(uVar16,&uStack_90);
  } while ((uVar16 & 1) != 0);
  unaff_x23 = (undefined8 *)((long)unaff_x20 + lVar15);
  if (lVar15 == 0x30) {
    do {
      if (unaff_x19 <= unaff_x23) break;
      func_0x00010bccae4c();
    } while ((uVar16 & 1) == 0);
  }
  else {
    do {
      func_0x00010bccae4c();
    } while ((int)uVar16 == 0);
  }
  if (unaff_x23 < unaff_x19) {
    unaff_x30 = 0x10bcc9aa4;
    ppuVar6 = &puStack_d0;
    unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto SUB_10bcca318;
  }
  puVar10 = unaff_x23 + -6;
  if (unaff_x20 != puVar10) {
    func_0x00010bcca37c(unaff_x20,puVar10);
  }
  func_0x00010bcca37c(puVar10,&uStack_90);
  func_0x00010bccae34();
  puVar8 = unaff_x23;
  if (unaff_x23 < unaff_x19) goto LAB_10bcc9b24;
  puVar9 = unaff_x20;
  FUN_10bcca128(unaff_x20,puVar10);
  param_1 = unaff_x23;
  FUN_10bcca128(unaff_x23,unaff_x19);
  if ((int)param_1 == 0) goto code_r0x00010bcc9b20;
  unaff_x19 = puVar10;
  if (((ulong)puVar9 & 1) != 0) goto LAB_10bcc9c18;
  goto LAB_10bcc9978;
LAB_10bcc9cdc:
  puVar11 = puVar8 + 6;
  if (puVar11 == unaff_x19) {
LAB_10bcc9c18:
    func_0x00010bccae10(unaff_x30);
    return;
  }
  func_0x00010bccadc0();
  func_0x00010bcca2d4();
  if ((int)param_1 != 0) {
    uStack_88 = puVar8[7];
    uStack_90 = *puVar11;
    uStack_80 = puVar8[8];
    puVar8[7] = 0;
    puVar8[8] = 0;
    *puVar11 = 0;
    uStack_70 = puVar8[10];
    uStack_78 = puVar8[9];
    uStack_68 = puVar8[0xb];
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    lVar4 = lVar15;
    do {
      lVar14 = lVar4;
      func_0x00010bcca37c((long)unaff_x20 + lVar14 + 0x30);
      param_1 = unaff_x20;
      if (lVar14 == 0) goto LAB_10bcc9d5c;
      puVar8 = &uStack_90;
      func_0x00010bcca2d4(puVar8,lVar14 + -0x30 + (long)unaff_x20);
      lVar4 = lVar14 + -0x30;
    } while (((ulong)puVar8 & 1) != 0);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar14);
LAB_10bcc9d5c:
    func_0x00010bcca37c(param_1,&uStack_90);
    func_0x00010bccae34();
  }
  lVar15 = lVar15 + 0x30;
  puVar8 = puVar11;
  goto LAB_10bcc9cdc;
code_r0x00010bcc9b20:
  if (((ulong)puVar9 & 1) == 0) {
LAB_10bcc9b24:
    FUN_10bcc9948(unaff_x20,puVar10,param_3,param_4 & 1);
    param_4 = 0;
    param_1 = unaff_x20;
  }
  goto LAB_10bcc998c;
}



/* Entry: 10bcc9fa4; end: 10bcca087;  */

/* WARNING: Possible PIC construction at 0x00010bcca000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcca004) */
/* WARNING: Removing unreachable block (ram,0x00010bcca00c) */

void FUN_10bcc9fa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar5;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = param_2;
  puVar4 = param_2;
  func_0x00010bccad84();
  puVar3 = puVar2;
  func_0x00010bccad38();
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = param_3;
    if ((int)puVar3 == 0) {
      func_0x00010bccaeb8();
      unaff_x30 = 0x10bcca004;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      param_1 = puVar3;
      puVar2 = puVar4;
      unaff_x19 = param_2;
      unaff_x20 = param_3;
      unaff_x29 = puVar1;
    }
SUB_10bcca318:
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar5 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0x40) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    uVar5 = param_1[3];
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = param_1[4];
    *(undefined8 *)((long)register0x00000008 + -0x38) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0x28) = param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x00010bcca37c();
    func_0x00010bcca37c(puVar2,(undefined1 *)((long)register0x00000008 + -0x50));
    func_0x00010bccae5c();
    return;
  }
  if ((int)puVar3 != 0) {
    func_0x00010bccaf44();
    func_0x00010bccad84();
    if ((int)param_2 != 0) {
      func_0x00010bccaeb8();
      param_1 = param_2;
      puVar2 = puVar4;
      goto SUB_10bcca318;
    }
  }
  return;
}



/* Entry: 10bcca088; end: 10bcca127;  */

/* WARNING: Possible PIC construction at 0x00010bcca0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcca0dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcca0cc) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0d8) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0e0) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0ec) */
/* WARNING: Removing unreachable block (ram,0x00010bcca0f8) */

void FUN_10bcca088(void)

{
  undefined8 uVar1;
  undefined8 *in_x3;
  undefined8 in_x4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010bccae6c();
  func_0x00010bcca024();
  uVar1 = in_x4;
  FUN_10bcca2d4(in_x4,in_x3);
  if ((int)uVar1 != 0) {
    uStack_88 = in_x3[1];
    uStack_90 = *in_x3;
    uStack_80 = in_x3[2];
    *in_x3 = 0;
    in_x3[1] = 0;
    uStack_70 = in_x3[4];
    uStack_78 = in_x3[3];
    in_x3[2] = 0;
    in_x3[3] = 0;
    uStack_68 = in_x3[5];
    in_x3[4] = 0;
    in_x3[5] = 0;
    func_0x00010bcca37c();
    func_0x00010bcca37c(in_x4,&uStack_90);
    func_0x00010bccae5c();
    return;
  }
  return;
}



/* Entry: 10bcca128; end: 10bcca2d3;  */

bool FUN_10bcca128(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010bccaec4();
  iVar8 = 1;
  switch((param_2 - param_1) / 0x30) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010bccad38();
    if (iVar8 != 0) {
      func_0x00010bccaf44();
    }
    break;
  case 3:
    FUN_10bcc9fa4();
    break;
  case 4:
    func_0x00010bcca024();
    break;
  case 5:
    FUN_10bcca088();
    break;
  default:
    FUN_10bcc9fa4();
    lVar7 = 0;
    iVar8 = 0;
    puVar2 = (undefined8 *)(unaff_x19 + 0x90);
    puVar5 = (undefined8 *)(unaff_x19 + 0x60);
    while (puVar4 = puVar2, puVar4 != unaff_x20) {
      puVar2 = puVar4;
      FUN_10bcca2d4(puVar4,puVar5);
      if ((int)puVar2 != 0) {
        uStack_78 = puVar4[1];
        uStack_80 = *puVar4;
        uStack_70 = puVar4[2];
        *puVar4 = 0;
        puVar4[1] = 0;
        uStack_60 = puVar4[4];
        uStack_68 = puVar4[3];
        puVar4[2] = 0;
        puVar4[3] = 0;
        uStack_58 = puVar4[5];
        puVar4[4] = 0;
        puVar4[5] = 0;
        lVar6 = lVar7;
        do {
          lVar1 = unaff_x19 + lVar6;
          func_0x00010bcca37c(lVar1 + 0x90,lVar1 + 0x60);
          if (lVar6 == -0x60) break;
          uVar3 = 0;
          FUN_10bcca2d4(&uStack_80,lVar1 + 0x30);
          lVar6 = lVar6 + -0x30;
        } while ((uVar3 & 1) != 0);
        func_0x00010bcca37c();
        iVar8 = iVar8 + 1;
        func_0x00010bccae5c();
        if (iVar8 == 8) {
          return puVar4 + 6 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 0x30;
      puVar5 = puVar4;
      puVar2 = puVar4 + 6;
    }
  }
  return true;
}



/* Entry: 10bcca2d4; end: 10bcca3cf;  */

bool FUN_10bcca2d4(uint param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bccae6c();
  func_0x000107c27bd4();
  if ((param_1 >> 7 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = unaff_x20 + 0x18;
    func_0x000107c27bd4(lVar2,unaff_x19 + 0x18);
    bVar1 = (char)lVar2 < '\0';
  }
  return bVar1;
}



/* Entry: 10bcca3d0; end: 10bcca51b;  */

void FUN_10bcca3d0(ulong param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (1 < param_2) {
    lVar3 = (long)((long)param_3 - param_1) / 0x30;
    uVar9 = param_2 - 2U >> 1;
    if (lVar3 <= (long)uVar9) {
      uVar2 = lVar3 << 1 | 1;
      puVar6 = (undefined8 *)(param_1 + uVar2 * 0x30);
      uVar1 = lVar3 * 2 + 2;
      uVar5 = param_1;
      puVar8 = puVar6;
      uVar10 = uVar2;
      if ((long)uVar1 < param_2) {
        func_0x00010bccaed0();
        puVar8 = puVar6 + 6;
        uVar10 = uVar1;
        if ((int)uVar5 == 0) {
          puVar8 = puVar6;
          uVar10 = uVar2;
        }
      }
      func_0x00010bccadc0();
      FUN_10bcca2d4();
      if ((uVar5 & 1) == 0) {
        uStack_88 = param_3[1];
        uStack_90 = *param_3;
        uStack_80 = param_3[2];
        *param_3 = 0;
        param_3[1] = 0;
        uStack_70 = param_3[4];
        uStack_78 = param_3[3];
        param_3[2] = 0;
        param_3[3] = 0;
        uStack_68 = param_3[5];
        param_3[4] = 0;
        param_3[5] = 0;
        do {
          puVar6 = puVar8;
          iVar4 = (int)param_3;
          func_0x00010bccaedc();
          if ((long)uVar9 < (long)uVar10) break;
          uVar2 = uVar10 << 1 | 1;
          puVar7 = (undefined8 *)(param_1 + uVar2 * 0x30);
          uVar1 = uVar10 * 2 + 2;
          puVar8 = puVar7;
          uVar10 = uVar2;
          if ((long)uVar1 < param_2) {
            func_0x00010bccadc0();
            FUN_10bcca2d4();
            puVar8 = puVar7 + 6;
            uVar10 = uVar1;
            if (iVar4 == 0) {
              puVar8 = puVar7;
              uVar10 = uVar2;
            }
          }
          puVar7 = puVar8;
          FUN_10bcca2d4(puVar8,&uStack_90);
          param_3 = puVar6;
        } while ((int)puVar7 == 0);
        func_0x00010bcca37c(puVar6,&uStack_90);
        func_0x00010bccae5c();
      }
    }
  }
  return;
}



/* Entry: 10bcca51c; end: 10bcca7af;  */

void FUN_10bcca51c(uint param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x9;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  for (uVar14 = (ulong)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU)); uVar14 != 0;
      uVar14 = uVar14 - 1) {
    func_0x00010bccadd8();
    iVar4 = 0xf68f148;
    func_0x00010bccaeec(&DAT_10f68f148,4);
    if (iVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_d0,*param_2);
    }
    func_0x00010bccadd8();
    iVar4 = 0xf6389e8;
    func_0x00010bccaeec(&DAT_10f6389e8,4);
    if (iVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_b8,*param_2);
    }
    func_0x00010bccadd8();
    iVar4 = 0xf51a524;
    func_0x00010bccaeec(&UNK_10f51a524,7);
    if (iVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_a0,*param_2);
    }
    param_2 = param_2 + 1;
  }
  plVar12 = *(long **)(param_4 + 0x10);
  uVar14 = plVar12[1];
  puVar7 = (ulong *)(plVar12 + 2);
  if (uVar14 < *puVar7) {
    FUN_10bcca7b0(uVar14,&uStack_d0);
    lVar10 = uVar14 + 0x48;
    plVar12[1] = lVar10;
  }
  else {
    lVar10 = uVar14 - *plVar12;
    uVar14 = lVar10 / 0x48 + 1;
    if (0x38e38e38e38e38e < uVar14) {
      FUN_10bcca808();
LAB_10bcca77c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10bcca780);
      (*pcVar3)();
    }
    uVar2 = (long)(*puVar7 - *plVar12) / 0x48;
    uVar9 = uVar2 * 2;
    if (uVar9 < uVar14 || uVar9 - uVar14 == 0) {
      uVar9 = uVar14;
    }
    if (0x1c71c71c71c71c6 < uVar2) {
      uVar9 = 0x38e38e38e38e38e;
    }
    puStack_68 = puVar7;
    if (uVar9 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x38e38e38e38e38e < uVar9) {
        func_0x000104bd35f4();
        goto LAB_10bcca77c;
      }
      lVar5 = uVar9 * 0x48;
      __Znwm();
    }
    lVar10 = lVar5 + lVar10;
    lVar11 = lVar5 + uVar9 * 0x48;
    lStack_88 = lVar5;
    lStack_80 = lVar10;
    lStack_78 = lVar10;
    lStack_70 = lVar11;
    FUN_10bcca7b0(lVar10,&uStack_d0);
    lVar6 = *plVar12;
    lVar1 = plVar12[1];
    lVar13 = lVar10 + ((lVar1 - lVar6) / -0x48) * 0x48;
    lVar8 = lVar13;
    lVar5 = lVar6;
    while (lVar5 != lVar1) {
      func_0x00010bccad8c(lVar8);
      uVar16 = *(undefined8 *)(extraout_x9 + 0x38);
      uVar15 = *(undefined8 *)(extraout_x9 + 0x30);
      *(undefined8 *)(extraout_x8 + 0x40) = *(undefined8 *)(extraout_x9 + 0x40);
      *(undefined8 *)(extraout_x8 + 0x38) = uVar16;
      *(undefined8 *)(extraout_x8 + 0x30) = uVar15;
      *(undefined8 *)(extraout_x9 + 0x38) = 0;
      *(undefined8 *)(extraout_x9 + 0x40) = 0;
      *(undefined8 *)(extraout_x9 + 0x30) = 0;
      lVar8 = extraout_x8 + 0x48;
      lVar5 = extraout_x9 + 0x48;
    }
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x48) {
      func_0x00010bcca85c();
    }
    lVar10 = lVar10 + 0x48;
    lStack_88 = *plVar12;
    *plVar12 = lVar13;
    plVar12[1] = lVar10;
    lStack_70 = plVar12[2];
    plVar12[2] = lVar11;
    lStack_80 = lStack_88;
    lStack_78 = lStack_88;
    func_0x00010bcca814(&lStack_88);
  }
  plVar12[1] = lVar10;
  func_0x00010bcca85c(&uStack_d0);
  func_0x00010bccae10(0,unaff_x30);
  return;
}



/* Entry: 10bcca7b0; end: 10bcca807;  */

void FUN_10bcca7b0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bccaec4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 10bcca808; end: 10bcca813;  */

long * FUN_10bcca808(long *param_1)

{
  long lVar1;
  
  func_0x00010bccaf20();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x48;
    func_0x00010bcca85c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcca814; end: 10bcca88b;  */

long * FUN_10bcca814(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x48;
    func_0x00010bcca85c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcca88c; end: 10bcca8a3;  */

void FUN_10bcca88c(void)

{
  return;
}



/* Entry: 10bcca8a4; end: 10bcca917;  */

long * FUN_10bcca8a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x00010bcca85c();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10bcca918; end: 10bcca973;  */

void FUN_10bcca918(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x30;
      func_0x00010bcca3a8();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10bcca974; end: 10bcca9eb;  */

undefined8 * FUN_10bcca974(undefined8 *param_1,undefined8 param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f82f984;
  uStack_28 = 0x53;
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  func_0x000107c27958(param_1 + 9,&puStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 10bcca9ec; end: 10bcca9ef;  */

undefined8 * FUN_10bcca9ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10bcca9f0; end: 10bccaa03;  */

void FUN_10bcca9f0(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccaa04; end: 10bccaa33;  */

void FUN_10bccaa04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 10bccaa34; end: 10bccab17;  */

void FUN_10bccaa34(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    lVar1 = *param_1;
    func_0x000107c313f8(lVar1);
    func_0x000107c313dc(&lStack_60);
    func_0x000107c313dc(&lStack_48,lVar1,1);
    if ((char)param_1[7] == '\x01') {
      func_0x00010bcca37c(param_1 + 1,&lStack_60);
    }
    else {
      param_1[2] = lStack_58;
      param_1[1] = lStack_60;
      param_1[3] = lStack_50;
      lStack_58 = 0;
      lStack_50 = 0;
      lStack_60 = 0;
      param_1[5] = lStack_40;
      param_1[4] = lStack_48;
      param_1[6] = lStack_38;
      lStack_48 = 0;
      lStack_40 = 0;
      lStack_38 = 0;
      *(undefined1 *)(param_1 + 7) = 1;
    }
    func_0x00010bccae5c();
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[7] == '\x01') {
    func_0x00010bcca3a8();
    *(undefined1 *)(plVar2 + 6) = 0;
  }
  return;
}



/* Entry: 10bccab18; end: 10bccab5b;  */

void FUN_10bccab18(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bcca3a8();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10bccab5c; end: 10bccabc7;  */

undefined8 * FUN_10bccab5c(undefined8 *param_1)

{
  undefined8 uVar1;
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
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_10bccab18(param_1 + 2);
  }
  func_0x00010bccab3c((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  func_0x00010bccab3c(param_1 + 2);
  return param_1;
}



/* Entry: 10bccabc8; end: 10bccac7b;  */

void FUN_10bccabc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_2 + 7) & 1) == 0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_2[3] = 0;
    param_2[4] = 0;
    uVar2 = param_2[6];
    param_2[5] = 0;
    param_2[6] = 0;
    *param_1 = *param_2;
    param_1[3] = uVar1;
    param_1[2] = uVar4;
    param_1[1] = uVar3;
    param_1[6] = uVar2;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  func_0x00010bccad44();
  return;
}



/* Entry: 10bccac7c; end: 10bccaca7;  */

long FUN_10bccac7c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10bcca918(param_1);
  }
  return param_1;
}



/* Entry: 10bccaca8; end: 10bccad37;  */

undefined8 * FUN_10bccaca8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 1,param_2 + 1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 4,param_2 + 4);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1;
}



/* Entry: 10bccad38; end: 10bccaf4f;  */

bool FUN_10bccad38(void)

{
  bool bVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20;
  func_0x00010bccae6c();
  uVar2 = (uint)lVar3;
  func_0x000107c27bd4();
  if ((uVar2 >> 7 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = unaff_x20 + 0x18;
    func_0x000107c27bd4(lVar3,unaff_x19 + 0x18);
    bVar1 = (char)lVar3 < '\0';
  }
  return bVar1;
}



/* Entry: 10bccaf50; end: 10bccb2cf;  */

undefined8 *
FUN_10bccaf50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar8;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  int aiStack_b0 [6];
  byte bStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined5 uStack_77;
  undefined8 uStack_72;
  undefined2 uStack_6a;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((long)param_4 + 0x16);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_79 = 0;
  if (bVar1 == 1) {
    plVar3 = (long *)*param_2;
    (**(code **)(*plVar3 + 0x38))();
    if ((int)plVar3 != 0) {
      param_5 = 1;
      uStack_78 = 1;
    }
  }
  (**(code **)(*(long *)*param_2 + 0x10))(aiStack_b0,(long *)*param_2,param_5);
  if ((bStack_98 & 1) == 0) {
    if ((aiStack_b0[0] == 1) && ((bVar1 & 1) != 0)) {
      (**(code **)(*(long *)*param_2 + 0x10))(&uStack_d0,(long *)*param_2,1);
      FUN_10bccb678(aiStack_b0,&uStack_d0);
      FUN_10bccb724(&uStack_d0);
      uStack_78 = 1;
      if (bStack_98 == 1) goto LAB_10bccaff0;
    }
    func_0x000107c278b8(&uStack_d0,&UNK_10f82f9eb);
    FUN_10bcc7444(0,1,&uStack_d0);
    func_0x00010bccb820();
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
  }
  else {
LAB_10bccaff0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_90,aiStack_b0);
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_c0 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_90 = 0;
    uStack_b8 = uStack_78;
  }
  uVar2 = uStack_b8;
  FUN_10bccb724(aiStack_b0);
  func_0x00010bccb810();
  param_1[0x36] = uStack_c8;
  param_1[0x35] = uStack_d0;
  param_1[0x37] = uStack_c0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  *(undefined1 *)(param_1 + 0x38) = uVar2;
  func_0x00010bccb820();
  *param_1 = &PTR_FUN_110d99df0;
  param_1[0x39] = &PTR_DAT_110d99e20;
  uStack_88 = param_4[1];
  uStack_90 = *param_4;
  uStack_80 = *(undefined4 *)(param_4 + 2);
  uStack_7c = 0;
  uStack_72 = *(undefined8 *)((long)param_4 + 0x1e);
  uVar8 = *(undefined8 *)((long)param_4 + 0x16);
  uStack_79 = (undefined1)((ulong)uVar8 >> 8);
  uStack_78 = (undefined1)((ulong)uVar8 >> 0x10);
  uStack_77 = (undefined5)((ulong)uVar8 >> 0x18);
  uStack_6a = *(undefined2 *)((long)param_4 + 0x26);
  uStack_7a = 0;
  func_0x000107c31344(param_1,param_1 + 0x35,&uStack_90,param_6);
  *param_1 = &PTR_FUN_110d99df0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = &PTR_DAT_110d99e20;
  lVar7 = param_2[1];
  uVar8 = *param_2;
  param_1[0x3d] = param_2[1];
  param_1[0x3c] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10 != 0);
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_10bccb2d0(&uStack_90,param_1);
  func_0x00010bccb320(param_1 + 0x3e,&uStack_90);
  FUN_10bccb744(&uStack_90);
  if ((*(byte *)((long)param_4 + 1) & 1) == 0) {
    func_0x000107c278b8(&uStack_90,"*");
    func_0x000107c27980(auStack_e8,&uStack_90,1);
    func_0x00010bccb7b8(aiStack_b0);
    func_0x000105277998(param_1 + 0x3a,aiStack_b0);
    func_0x0001052758ec(aiStack_b0);
    func_0x00010bccb7d4();
    func_0x00010bccb810();
  }
  plVar3 = (long *)*param_2;
  uStack_88 = param_1[0x3f];
  uStack_90 = param_1[0x3e];
  if (param_1[0x3f] != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10_00 != 0);
  }
  puVar6 = &uStack_90;
  (**(code **)(*plVar3 + 0x20))();
  puVar4 = &uStack_90;
  func_0x00010b5ef3cc();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x1a1) = 1;
  }
  func_0x00010bccb7dc(uStack_68);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    FUN_10bccb724(aiStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    __Unwind_Resume();
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110d99ee0;
    puVar5[4] = puVar6;
    puVar4[1] = puVar5;
    puVar5 = puVar5 + 3;
    *puVar5 = &PTR_DAT_110d99e48;
    *puVar4 = puVar5;
    return puVar5;
  }
  return param_1;
}



/* Entry: 10bccb2d0; end: 10bccb35b;  */

void FUN_10bccb2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110d99ee0;
  puVar1[4] = param_2;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_DAT_110d99e48;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10bccb35c; end: 10bccb53f;  */

undefined8 *
FUN_10bccb35c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  ulong uStack_4a;
  undefined8 uStack_42;
  undefined2 uStack_3a;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  puVar3 = param_5;
  func_0x00010bccb7dc(param_3);
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined1 *)(puVar1 + 0x38) = 0;
  puVar1[0x37] = 0;
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = *(undefined4 *)(puVar3 + 2);
  uStack_4c = 0;
  uStack_42 = *(undefined8 *)((long)puVar3 + 0x1e);
  uStack_3a = *(undefined2 *)((long)puVar3 + 0x26);
  uStack_4a = *(ulong *)((long)puVar3 + 0x16) & 0xffffffffffffff00;
  uStack_38 = extraout_x9;
  func_0x000107c31344();
  *param_1 = &PTR_FUN_110d99df0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = &PTR_DAT_110d99e20;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[0x3d] = param_2[1];
  param_1[0x3c] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10 != 0);
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_10bccb2d0(&uStack_60,param_1);
  func_0x00010bccb320(param_1 + 0x3e,&uStack_60);
  FUN_10bccb744(&uStack_60);
  if ((*(byte *)((long)param_5 + 1) & 1) == 0) {
    func_0x000107c278b8(&uStack_60,"*");
    func_0x000107c27980(auStack_88,&uStack_60,1);
    func_0x00010bccb7b8(auStack_70);
    func_0x000105277998(param_1 + 0x3a,auStack_70);
    func_0x0001052758ec(auStack_70);
    func_0x00010bccb7d4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  plVar2 = (long *)*param_2;
  uStack_58 = param_1[0x3f];
  uStack_60 = param_1[0x3e];
  if (param_1[0x3f] != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar2 + 0x20))();
  puVar1 = &uStack_60;
  func_0x00010b5ef3cc();
  func_0x00010bccb7dc(uStack_38);
  if (extraout_x9_00 != extraout_x8) {
    ___stack_chk_fail();
    func_0x00010bccb7d4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
    func_0x00010bccb828();
    func_0x00010bccb808();
    func_0x00010bccb800();
    func_0x00010bccb818();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x35);
    __Unwind_Resume();
    *puVar1 = &PTR_FUN_110d99df0;
    puVar1[0x39] = &PTR_DAT_110d99e20;
    FUN_10bcc7964(puVar1 + 0x3a);
    plVar2 = (long *)puVar1[0x3c];
    if (puVar1[0x3f] != 0) {
      do {
        func_0x00010bccb7a8();
      } while (extraout_w10_01 != 0);
    }
    (**(code **)(*plVar2 + 0x28))();
    func_0x00010bccb7f8();
    func_0x00010bccb828();
    func_0x00010bccb808();
    func_0x00010bccb800();
    func_0x00010bccb818();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 0x35);
    return puVar1;
  }
  return param_1;
}



/* Entry: 10bccb540; end: 10bccb5cb;  */

undefined8 * FUN_10bccb540(undefined8 *param_1)

{
  long *plVar1;
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110d99df0;
  param_1[0x39] = &PTR_DAT_110d99e20;
  FUN_10bcc7964(param_1 + 0x3a);
  plVar1 = (long *)param_1[0x3c];
  if (param_1[0x3f] != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x28))();
  func_0x00010bccb7f8();
  func_0x00010bccb828();
  func_0x00010bccb808();
  func_0x00010bccb800();
  func_0x00010bccb818();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x35);
  return param_1;
}



/* Entry: 10bccb5cc; end: 10bccb5d7;  */

undefined8 * FUN_10bccb5cc(undefined8 *param_1)

{
  long *plVar1;
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110d99df0;
  param_1[0x39] = &PTR_DAT_110d99e20;
  FUN_10bcc7964(param_1 + 0x3a);
  plVar1 = (long *)param_1[0x3c];
  if (param_1[0x3f] != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x28))();
  func_0x00010bccb7f8();
  func_0x00010bccb828();
  func_0x00010bccb808();
  func_0x00010bccb800();
  func_0x00010bccb818();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x35);
  return param_1;
}



/* Entry: 10bccb5d8; end: 10bccb5eb;  */

void FUN_10bccb5d8(void)

{
  FUN_10bccb540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccb5ec; end: 10bccb5f3;  */

void FUN_10bccb5ec(long param_1)

{
  FUN_10bccb540(param_1 + -0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccb5f4; end: 10bccb65f;  */

void FUN_10bccb5f4(long param_1)

{
  long *plVar1;
  int extraout_w10;
  
  plVar1 = *(long **)(param_1 + 0x1e0);
  if (*(long *)(param_1 + 0x1f8) != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x18))();
  func_0x00010bccb7f8();
  return;
}



/* Entry: 10bccb660; end: 10bccb677;  */

void FUN_10bccb660(long param_1)

{
  long *plVar1;
  int extraout_w10;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x00010bccb7a8();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x18))();
  func_0x00010bccb7f8();
  return;
}



/* Entry: 10bccb678; end: 10bccb6c3;  */

void FUN_10bccb678(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 3) & 1) == 0) && ((*(byte *)(param_2 + 3) & 1) != 0)) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    FUN_10bccb6c4();
  }
  return;
}



/* Entry: 10bccb6c4; end: 10bccb723;  */

void FUN_10bccb6c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(byte *)(param_2 + 3) != 0) {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c60e14(*param_1);
      }
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
      return;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else if ((*(byte *)(param_2 + 3) & 1) == 0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
  }
  return;
}



/* Entry: 10bccb724; end: 10bccb743;  */

void FUN_10bccb724(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10bccb744; end: 10bccb76f;  */

long FUN_10bccb744(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bccb770; end: 10bccb773;  */

void FUN_10bccb770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99ee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bccb774; end: 10bccb787;  */

void FUN_10bccb774(void)

{
  func_0x00010bccb798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccb788; end: 10bccb833;  */

void FUN_10bccb788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bccb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bccb834; end: 10bccb847;  */

void FUN_10bccb834(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccb848; end: 10bccb8cb;  */

void FUN_10bccb848(undefined8 param_1,int param_2)

{
  func_0x000107c3a510();
  _sqlite3_bind_double(param_1);
  if (param_2 != 0) {
    func_0x00010bccb950();
    func_0x00010bccb98c();
    func_0x00010bccb9b8();
    func_0x000107c2793c(&UNK_10f82fa42);
    func_0x00010bccb96c();
    func_0x00010bccb934();
    func_0x00010bccb964();
    func_0x00010bccb97c();
  }
  return;
}



/* Entry: 10bccb8cc; end: 10bccb933;  */

void FUN_10bccb8cc(int param_1)

{
  func_0x000107c3a510();
  _sqlite3_bind_null();
  if (param_1 != 0) {
    func_0x00010bccb950();
    func_0x00010bccb98c();
    func_0x00010bccb9b8();
    func_0x000107c2793c(&UNK_10f82fab5);
    func_0x00010bccb96c();
    func_0x00010bccb934();
    func_0x00010bccb964();
    func_0x00010bccb97c();
  }
  return;
}



/* Entry: 10bccb934; end: 10bccb9db;  */

void FUN_10bccb934(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  int unaff_w19;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_10bcc6e7c(auStack_78);
  if (unaff_w19 != 0xd) {
    FUN_10bcc7374();
  }
  puVar2 = (undefined8 *)0x58;
  ___cxa_allocate_exception();
  *puVar2 = &PTR_DAT_110d99b08;
  *(undefined4 *)(puVar2 + 1) = uStack_70;
  puVar2[3] = uStack_60;
  puVar2[2] = uStack_68;
  puVar2[4] = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  puVar2[6] = uStack_48;
  puVar2[5] = uStack_50;
  puVar2[7] = uStack_40;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *(undefined1 *)(puVar2 + 10) = uStack_28;
  puVar2[9] = uStack_30;
  puVar2[8] = uStack_38;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bcc7504);
  (*pcVar1)();
}



/* Entry: 10bccb9dc; end: 10bccba93;  */

undefined8 *
FUN_10bccb9dc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  puVar2 = param_3;
  func_0x00010bccc904();
  *puVar1 = &PTR_FUN_110d99f68;
  puVar1[1] = param_2;
  puVar1[2] = puVar2;
  *(undefined1 *)(puVar1 + 3) = 1;
  puVar1[4] = param_4;
  puVar1[5] = param_5;
  func_0x000107c3142c(puVar1 + 6,1);
  func_0x000107c313cc(*param_3);
  param_3 = (undefined8 *)*param_3;
  func_0x00010bccc9c0(&UNK_105277f7c);
  func_0x000107c31358();
  func_0x00010bccc8f4();
  func_0x00010bccc8e0(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bccc8f4();
  func_0x00010bccc914();
  *param_3 = &PTR_FUN_110d99f68;
  FUN_10bccbac0();
  return param_3;
}



/* Entry: 10bccba94; end: 10bccbabf;  */

undefined8 * FUN_10bccba94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99f68;
  FUN_10bccbac0();
  return param_1;
}



/* Entry: 10bccbac0; end: 10bccbb4b;  */

undefined8 * FUN_10bccbac0(undefined8 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  
  func_0x00010bccc904();
  uVar1 = *(char *)(param_1 + 3) == '\x01';
  if ((bool)uVar1) {
    *(undefined1 *)(param_1 + 3) = 0;
    func_0x00010bccc93c();
    func_0x00010bccc9c0();
    param_2 = 0xf82fb87;
    func_0x000107c31358();
    func_0x00010bccc8f4();
    param_1 = *(undefined8 **)param_1[2];
    FUN_10bcc8020();
  }
  func_0x00010bccc8e0(extraout_x8);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = &PTR_FUN_110d99f68;
  FUN_10bccbac0();
  return param_1;
}



/* Entry: 10bccbb4c; end: 10bccbb4f;  */

undefined8 * FUN_10bccbb4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99f68;
  FUN_10bccbac0();
  return param_1;
}



/* Entry: 10bccbb50; end: 10bccbb63;  */

void FUN_10bccbb50(void)

{
  FUN_10bccba94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccbb64; end: 10bccbc97;  */

long * FUN_10bccbb64(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  char *pcVar6;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined **ppuStack_90;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  func_0x00010bccc904();
  uStack_68 = extraout_x8;
  func_0x00010bccc93c();
  ppuStack_90 = &PTR_DAT_110873830;
  pcVar6 = "COMMIT TRANSACTION;";
  ppuVar4 = (undefined1 **)0x13;
  uVar5 = 1;
  uStack_78 = param_1;
  func_0x000107c31358();
  func_0x00010bccc924();
  plVar3 = (long *)**(long **)(param_2 + 0x10);
  func_0x000107c313d0();
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    func_0x000107c313b8();
    pcVar6 = (char *)(ulong)*(uint *)(**(long **)(param_2 + 0x10) + 0x98);
    func_0x00010bccc9ac();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    param_2 = param_2 + 0x30;
    func_0x000107c3135c(param_2);
    in_ZR = bStack_99 == 0;
    uVar5 = uStack_a8;
    ppuVar4 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uVar5 = (ulong)bStack_99;
      ppuVar4 = &puStack_b0;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,pcVar6,ppuVar4,uVar5,uVar1,uVar2,param_3 ^ 1,param_2);
    func_0x00010bccc9b8();
  }
  func_0x00010bccc8e0(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bccc924();
    func_0x00010bccc914();
    FUN_10bccbcfc(plVar3,pcVar6);
    FUN_10bccb9dc(plVar3 + 1,pcVar6,*plVar3,ppuVar4,uVar5);
    return plVar3;
  }
  return plVar3;
}



/* Entry: 10bccbc98; end: 10bccbcfb;  */

undefined8 *
FUN_10bccbc98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10bccbcfc(param_1,param_2);
  FUN_10bccb9dc(param_1 + 1,param_2,*param_1,param_3,param_4);
  return param_1;
}



/* Entry: 10bccbcfc; end: 10bccbdb3;  */

void FUN_10bccbcfc(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  
  plStack_30 = param_2 + 0x19;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  *param_1 = 0;
  if (param_2[0x21] == param_2[0x22]) {
    func_0x000107c280c4(&plStack_30);
    (**(code **)(*param_2 + 0x18))(&uStack_38,param_2,0);
    uVar1 = uStack_38;
    uStack_38 = 0;
    func_0x00010563b608(param_1,uVar1);
    func_0x00010bccc984();
  }
  else {
    FUN_10bccc358(param_1,param_2[0x22] + -8);
    FUN_10bccc384(param_2 + 0x21);
  }
  func_0x000107c2798c(&plStack_30);
  return;
}



/* Entry: 10bccbdb4; end: 10bccbe03;  */

void FUN_10bccbdb4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_10bccbac0(param_1 + 1);
  uStack_28 = *param_1;
  *param_1 = 0;
  FUN_10bccbe04(param_1[2],&uStack_28);
  func_0x00010bccc984();
  FUN_10bccba94(param_1 + 1);
  func_0x00010bccc970();
  return;
}



/* Entry: 10bccbe04; end: 10bccbe4b;  */

void FUN_10bccbe04(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 200);
  func_0x00010bccc6e0(param_1 + 0x108,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 200);
  return;
}



/* Entry: 10bccbe4c; end: 10bccbe57;  */

long * FUN_10bccbe4c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  char *pcVar6;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined **ppuStack_90;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  func_0x00010bccc904();
  uStack_68 = extraout_x8;
  func_0x00010bccc93c();
  ppuStack_90 = &PTR_DAT_110873830;
  pcVar6 = "COMMIT TRANSACTION;";
  ppuVar4 = (undefined1 **)0x13;
  uVar5 = 1;
  uStack_78 = param_1;
  func_0x000107c31358();
  func_0x00010bccc924();
  plVar3 = (long *)**(long **)(param_2 + 0x18);
  func_0x000107c313d0();
  *(undefined1 *)(param_2 + 0x20) = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    func_0x000107c313b8();
    pcVar6 = (char *)(ulong)*(uint *)(**(long **)(param_2 + 0x18) + 0x98);
    func_0x00010bccc9ac();
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_2 = param_2 + 0x38;
    func_0x000107c3135c(param_2);
    in_ZR = bStack_99 == 0;
    uVar5 = uStack_a8;
    ppuVar4 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uVar5 = (ulong)bStack_99;
      ppuVar4 = &puStack_b0;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,pcVar6,ppuVar4,uVar5,uVar1,uVar2,0,param_2);
    func_0x00010bccc9b8();
  }
  func_0x00010bccc8e0(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bccc924();
    func_0x00010bccc914();
    FUN_10bccbcfc(plVar3,pcVar6);
    FUN_10bccb9dc(plVar3 + 1,pcVar6,*plVar3,ppuVar4,uVar5);
    return plVar3;
  }
  return plVar3;
}



/* Entry: 10bccbe58; end: 10bccc223;  */

undefined8 *
FUN_10bccbe58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  byte bStack_78;
  undefined8 uStack_68;
  
  puVar7 = param_1;
  func_0x00010bccc904();
  uStack_68 = extraout_x8;
  func_0x000107c313c0();
  puVar11 = puVar7 + 0x13;
  *puVar7 = &PTR_FUN_110d99f88;
  uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
  func_0x000107c31444();
  func_0x0001055b0224(puVar11,&PTR_DAT_110d99fa8,&uStack_90,puVar7);
  puVar7 = param_1 + 0x14;
  param_1[0x15] = 0;
  *puVar7 = 0;
  puVar12 = param_1 + 0x16;
  param_1[0x17] = 0;
  *puVar12 = 0;
  puStack_c8 = param_1 + 0x19;
  *puStack_c8 = 0x32aaaba7;
  param_1[0x18] = 0;
  param_1[0x24] = 0x32aaaba7;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  uVar14 = param_6[1];
  uVar13 = *param_6;
  uVar16 = param_6[3];
  uVar15 = param_6[2];
  param_1[0x32] = param_6[4];
  param_1[0x2f] = uVar14;
  param_1[0x2e] = uVar13;
  param_1[0x31] = uVar16;
  param_1[0x30] = uVar15;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (param_4 == 0) {
    FUN_10bcc6364(&uStack_90,1);
    puStack_80[2] = 0;
    *puStack_80 = &PTR_FUN_110d99a00;
    puStack_80[1] = 0;
    FUN_10bcc5bd4(puStack_80 + 3,param_2,param_3,param_1 + 0x2e);
    puVar9 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    func_0x00010bcc64a0(&uStack_90);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_88 = param_1[0x15];
    uStack_90 = param_1[0x14];
    param_1[0x14] = puVar9 + 3;
    param_1[0x15] = puVar9;
    func_0x000105276418(&uStack_90);
    FUN_10bcc64b0(&uStack_b0);
  }
  else {
    FUN_10bcc6550(&uStack_90,param_2);
    func_0x00010b5edad4(puVar7,&uStack_90);
    func_0x000105276418(&uStack_90);
  }
  uVar6 = *(char *)((long)param_6 + 0x16) == '\x01';
  if ((bool)uVar6) {
    plVar8 = (long *)*puVar7;
    (**(code **)(*plVar8 + 0x38))();
    if ((int)plVar8 != 0) {
      param_5 = 1;
      *(undefined1 *)(param_1 + 0x33) = 1;
    }
  }
  (**(code **)(*(long *)*puVar7 + 0x10))(&uStack_90,(long *)*puVar7,param_5);
  if ((bStack_78 & 1) == 0) {
    uVar6 = (int)uStack_90 == 1;
    if (((bool)uVar6) && ((*(byte *)((long)param_6 + 0x16) & 1) != 0)) {
      (**(code **)(*(long *)*puVar7 + 0x10))(&uStack_b0,(long *)*puVar7,1);
      FUN_10bccb678(&uStack_90,&uStack_b0);
      FUN_10bccb724(&uStack_b0);
      *(undefined1 *)(param_1 + 0x33) = 1;
      uVar6 = bStack_78 == 1;
      if ((bool)uVar6) goto LAB_10bccc018;
    }
    func_0x000107c278b8(&uStack_b0,&UNK_10f82fb9d);
    FUN_10bcc7444(0,1,&uStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  }
  else {
LAB_10bccc018:
    func_0x000107c27b9c(puVar12,&uStack_90);
  }
  puVar9 = (undefined8 *)0x28;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110d99fe8;
  puVar9[3] = &PTR_DAT_110d9a038;
  puVar9[4] = param_1;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_a8 = param_1[0x35];
  uStack_b0 = param_1[0x34];
  param_1[0x34] = puVar9 + 3;
  param_1[0x35] = puVar9;
  func_0x00010bccc870(&uStack_b0);
  func_0x00010bccc870(&uStack_c0);
  plVar8 = (long *)param_1[0x14];
  uStack_a8 = param_1[0x35];
  uStack_b0 = param_1[0x34];
  if (param_1[0x35] != 0) {
    plVar1 = (long *)(param_1[0x35] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*plVar8 + 0x20))(plVar8,&uStack_b0);
  func_0x00010b5ef3cc(&uStack_b0);
  puVar9 = &uStack_90;
  FUN_10bccb724();
  func_0x00010bccc8e0(uStack_68);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    FUN_10bccb724(&uStack_90);
    func_0x00010bccc870(param_1 + 0x34);
    func_0x00010563b5e4(param_1 + 0x2c);
    __ZNSt3__15mutexD1Ev(param_1 + 0x24);
    FUN_10bccc638(param_1 + 0x21);
    __ZNSt3__15mutexD1Ev(puStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
    func_0x000105276418(puVar7);
    func_0x00010563d08c(puVar11);
    FUN_10bcc7c14(param_1);
    __Unwind_Resume();
    ppuVar10 = &puStack_120;
    pcStack_d8 = FUN_10bccc224;
    puStack_100 = puVar12;
    puStack_f8 = puVar7;
    puStack_f0 = puVar11;
    puStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    *puVar9 = &PTR_FUN_110d99f88;
    plVar8 = (long *)puVar9[0x14];
    uStack_118 = puVar9[0x35];
    puStack_120 = (undefined1 *)puVar9[0x34];
    if (puVar9[0x35] != 0) {
      plVar1 = (long *)(puVar9[0x35] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plVar8 + 0x28))(plVar8,&puStack_120);
    func_0x00010b5ef3cc();
    if (puVar9[0x2c] != 0) {
      func_0x000107c313b8();
      func_0x00010bccc9ac(*(undefined8 *)puVar9[0x2c]);
      uVar2 = uStack_118;
      ppuVar5 = (undefined1 **)puStack_120;
      if (-1 < (char)bStack_109) {
        uVar2 = (ulong)bStack_109;
        ppuVar5 = &puStack_120;
      }
      (**(code **)((long)*ppuVar10 + 0x18))(ppuVar10,0,ppuVar5,uVar2,puVar9[0x2d]);
      func_0x00010bccc9b8();
    }
    func_0x00010bccc870(puVar9 + 0x34);
    func_0x00010563b5e4(puVar9 + 0x2c);
    __ZNSt3__15mutexD1Ev(puVar9 + 0x24);
    FUN_10bccc638(puVar9 + 0x21);
    __ZNSt3__15mutexD1Ev(puVar9 + 0x19);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9 + 0x16);
    func_0x000105276418(puVar9 + 0x14);
    func_0x00010563d08c(puVar9 + 0x13);
    FUN_10bcc7c14(puVar9);
    return puVar9;
  }
  return param_1;
}



/* Entry: 10bccc224; end: 10bccc33f;  */

void FUN_10bccc224(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined1 *puStack_50;
  ulong uStack_48;
  byte bStack_39;
  
  ppuVar7 = &puStack_50;
  *param_1 = &PTR_FUN_110d99f88;
  plVar6 = (long *)param_1[0x14];
  uStack_48 = param_1[0x35];
  puStack_50 = (undefined1 *)param_1[0x34];
  if (param_1[0x35] != 0) {
    plVar1 = (long *)(param_1[0x35] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&puStack_50);
  func_0x00010b5ef3cc();
  if (param_1[0x2c] != 0) {
    func_0x000107c313b8();
    func_0x00010bccc9ac(*(undefined8 *)param_1[0x2c]);
    uVar2 = uStack_48;
    ppuVar5 = (undefined1 **)puStack_50;
    if (-1 < (char)bStack_39) {
      uVar2 = (ulong)bStack_39;
      ppuVar5 = &puStack_50;
    }
    (**(code **)((long)*ppuVar7 + 0x18))(ppuVar7,0,ppuVar5,uVar2,param_1[0x2d]);
    func_0x00010bccc9b8();
  }
  func_0x00010bccc870(param_1 + 0x34);
  func_0x00010563b5e4(param_1 + 0x2c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  FUN_10bccc638(param_1 + 0x21);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x16);
  func_0x000105276418(param_1 + 0x14);
  func_0x00010563d08c(param_1 + 0x13);
  FUN_10bcc7c14(param_1);
  return;
}



/* Entry: 10bccc340; end: 10bccc343;  */

void FUN_10bccc340(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined1 *puStack_50;
  ulong uStack_48;
  byte bStack_39;
  
  ppuVar7 = &puStack_50;
  *param_1 = &PTR_FUN_110d99f88;
  plVar6 = (long *)param_1[0x14];
  uStack_48 = param_1[0x35];
  puStack_50 = (undefined1 *)param_1[0x34];
  if (param_1[0x35] != 0) {
    plVar1 = (long *)(param_1[0x35] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&puStack_50);
  func_0x00010b5ef3cc();
  if (param_1[0x2c] != 0) {
    func_0x000107c313b8();
    func_0x00010bccc9ac(*(undefined8 *)param_1[0x2c]);
    uVar2 = uStack_48;
    ppuVar5 = (undefined1 **)puStack_50;
    if (-1 < (char)bStack_39) {
      uVar2 = (ulong)bStack_39;
      ppuVar5 = &puStack_50;
    }
    (**(code **)((long)*ppuVar7 + 0x18))(ppuVar7,0,ppuVar5,uVar2,param_1[0x2d]);
    func_0x00010bccc9b8();
  }
  func_0x00010bccc870(param_1 + 0x34);
  func_0x00010563b5e4(param_1 + 0x2c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  FUN_10bccc638(param_1 + 0x21);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x16);
  func_0x000105276418(param_1 + 0x14);
  func_0x00010563d08c(param_1 + 0x13);
  FUN_10bcc7c14(param_1);
  return;
}



/* Entry: 10bccc344; end: 10bccc357;  */

void FUN_10bccc344(void)

{
  FUN_10bccc224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccc358; end: 10bccc383;  */

undefined8 FUN_10bccc358(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x00010563b608(param_1,uVar1);
  return param_1;
}



/* Entry: 10bccc384; end: 10bccc38f;  */

void FUN_10bccc384(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + -8;
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x00010563b5e4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10bccc390; end: 10bccc467;  */

void FUN_10bccc390(long param_1,byte param_2)

{
  long lVar1;
  long lStack_60;
  undefined1 uStack_58;
  byte bStack_57;
  undefined8 uStack_56;
  undefined8 uStack_4e;
  ulong uStack_46;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined6 uStack_36;
  
  FUN_10bccc468();
  bStack_57 = param_2 ^ 1;
  uStack_58 = *(undefined1 *)(param_1 + 0x170);
  uStack_4e = *(undefined8 *)(param_1 + 0x17a);
  uStack_56 = *(undefined8 *)(param_1 + 0x172);
  uStack_3e = (undefined6)*(undefined8 *)(param_1 + 0x18a);
  uStack_38 = (undefined2)*(undefined8 *)(param_1 + 400);
  uStack_36 = (undefined6)((ulong)*(undefined8 *)(param_1 + 400) >> 0x10);
  uStack_46 = *(ulong *)(param_1 + 0x182) & 0xffffffffffffff;
  if ((bStack_57 & 1) == 0) {
    lVar1 = param_1 + 0xa0;
    FUN_10bccc494(&lStack_60,lVar1,param_1 + 0xb0,*(undefined8 *)(param_1 + 0x98),&uStack_58);
    func_0x00010bccc958();
    if (lVar1 == 0) goto LAB_10bccc434;
LAB_10bccc420:
    func_0x00010bccc98c();
  }
  else {
    lVar1 = param_1 + 0xb0;
    FUN_10bccc500(&lStack_60,lVar1,&uStack_58);
    func_0x00010bccc958();
    if (lVar1 != 0) goto LAB_10bccc420;
  }
  lVar1 = lStack_60;
  lStack_60 = 0;
  if (lVar1 != 0) {
    func_0x00010bccc98c();
  }
LAB_10bccc434:
  *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 1;
  return;
}



/* Entry: 10bccc468; end: 10bccc493;  */

void FUN_10bccc468(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10bccc494; end: 10bccc4ff;  */

void FUN_10bccc494(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x200;
  __Znwm();
  FUN_10bccb35c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10bccc500; end: 10bccc553;  */

void FUN_10bccc500(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a8;
  __Znwm();
  func_0x000107c31344();
  *param_1 = uVar1;
  return;
}



/* Entry: 10bccc554; end: 10bccc637;  */

void FUN_10bccc554(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 auStack_78 [9];
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x24);
  lVar2 = param_1[0x2c];
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x18))(auStack_78,param_1,1);
    uVar1 = auStack_78[0];
    auStack_78[0] = 0;
    func_0x00010563b608(param_1 + 0x2c,uVar1);
    func_0x00010bccc984();
    lVar2 = param_1[0x2c];
    param_1[0x2d] = param_1[0x2d] + 1;
  }
  FUN_10bccb9dc(auStack_78,param_1,lVar2,param_3,param_4);
  (*(code *)*param_2)(param_1[0x2c],param_2);
  FUN_10bccbb64(auStack_78,0);
  FUN_10bccba94(auStack_78);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x24);
  return;
}



/* Entry: 10bccc638; end: 10bccc69f;  */

undefined8 FUN_10bccc638(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010bccc664(&uStack_28);
  return param_1;
}



/* Entry: 10bccc6a0; end: 10bccc6a7;  */

void FUN_10bccc6a0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x00010563b5e4();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10bccc6a8; end: 10bccc727;  */

void FUN_10bccc6a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x00010563b5e4();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10bccc728; end: 10bccc813;  */

long * FUN_10bccc728(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar8 = *param_1;
  lVar9 = param_1[1] - lVar8;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    lVar10 = *plStack_58;
    uVar6 = lVar10 - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10bccc810;
      lVar3 = uVar7 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar9);
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    _memcpy(puVar2 + -(lVar9 >> 3),lVar8,lVar9);
    *param_1 = (long)(puVar2 + -(lVar9 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar3 + uVar7 * 8;
    lStack_78 = lVar8;
    lStack_70 = lVar8;
    lStack_68 = lVar8;
    lStack_60 = lVar10;
    FUN_10bccc828(&lStack_78);
    return puVar2 + 1;
  }
  FUN_10bccc814();
LAB_10bccc810:
  func_0x000104bd35f4();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar8 = plVar4[1];
  while (lVar8 != plVar4[2]) {
    plVar4[2] = plVar4[2] + -8;
    func_0x00010563b5e4();
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 10bccc814; end: 10bccc827;  */

long * FUN_10bccc814(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -8;
    func_0x00010563b5e4();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10bccc828; end: 10bccc897;  */

long * FUN_10bccc828(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010563b5e4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bccc898; end: 10bccc89b;  */

void FUN_10bccc898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99fe8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bccc89c; end: 10bccc8af;  */

void FUN_10bccc89c(void)

{
  func_0x00010bccc8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bccc8b0; end: 10bccc9df;  */

void FUN_10bccc8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bccc8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bccc9e0; end: 10bccc9fb;  */

void FUN_10bccc9e0(void)

{
  _objc_alloc_init(PTR_PTR_1126e3068);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bccc9fc; end: 10bccca2f; -[SCNCoreVoid init] */

void FUN_10bccc9fc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e6f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}


