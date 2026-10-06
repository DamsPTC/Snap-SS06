/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027a25f0; end: 1027a2617;  */

undefined1  [16] FUN_1027a25f0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uStack_60 = uVar1;
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0(uVar1);
    func_0x000107c602fc(0x20);
    func_0x000107c5fb78(0xd00000000000001e,0x800000010f0bbef0);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_60,&uStack_50,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar4 = 0;
  }
  else {
    if (*(char *)(unaff_x20 + 0x18) != '\x01') {
      uStack_48 = 0x800000010f0bbed0;
      uStack_50 = 0xd00000000000001b;
      goto LAB_1027a2800;
    }
    uVar4 = 0xd000000000000013;
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0(lVar2);
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(uStack_48);
    uStack_50 = 0xd00000000000001c;
    uStack_48 = 0x800000010f0bbe90;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    if (lVar2 == 0) {
      uVar5 = 0x800000010f0bbeb0;
    }
    else {
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      uVar4 = 0x112d393f0;
      lStack_68 = lVar2;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(&lStack_68,&uStack_60,uVar4,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar4 = uStack_60;
      uVar5 = uStack_58;
    }
    func_0x000107c5fb78(uVar4,uVar5);
    func_0x000107c6142c(uVar5);
    uVar4 = 1;
  }
  FUN_1027a23e0(uVar1,lVar2,uVar4);
LAB_1027a2800:
  auVar6._8_8_ = uStack_48;
  auVar6._0_8_ = uStack_50;
  return auVar6;
}



/* Entry: 1027a2618; end: 1027a2817;  */

undefined1  [16] FUN_1027a2618(undefined8 param_1,long param_2,char param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = param_1;
  if (param_3 == '\0') {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0(param_1);
    func_0x000107c602fc(0x20);
    func_0x000107c5fb78(0xd00000000000001e,0x800000010f0bbef0);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_60,&uStack_50,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar2 = 0;
  }
  else {
    if (param_3 != '\x01') {
      uStack_48 = 0x800000010f0bbed0;
      uStack_50 = 0xd00000000000001b;
      goto LAB_1027a2800;
    }
    uVar2 = 0xd000000000000013;
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0(param_2);
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(uStack_48);
    uStack_50 = 0xd00000000000001c;
    uStack_48 = 0x800000010f0bbe90;
    puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar1);
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    if (param_2 == 0) {
      uVar3 = 0x800000010f0bbeb0;
    }
    else {
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      uVar2 = 0x112d393f0;
      lStack_68 = param_2;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(&lStack_68,&uStack_60,uVar2,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar2 = uStack_60;
      uVar3 = uStack_58;
    }
    func_0x000107c5fb78(uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    uVar2 = 1;
  }
  FUN_1027a23e0(param_1,param_2,uVar2);
LAB_1027a2800:
  auVar4._8_8_ = uStack_48;
  auVar4._0_8_ = uStack_50;
  return auVar4;
}



/* Entry: 1027a2818; end: 1027a2827;  */

void FUN_1027a2818(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if ((*(char *)(param_1 + 2) != '\0') && (puVar1 = param_1 + 1, *(char *)(param_1 + 2) != '\x01'))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*puVar1);
  return;
}



/* Entry: 1027a2828; end: 1027a28c3;  */

undefined8 * FUN_1027a2828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1027a2398(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1027a28c4; end: 1027a2907;  */

undefined8 * FUN_1027a28c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1027a23e0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1027a2908; end: 1027a29df;  */

int FUN_1027a2908(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1027a29e0; end: 1027a2a3f;  */

/* WARNING: Possible PIC construction at 0x0001027a2a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a2a2c) */

void FUN_1027a29e0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_1027a3844();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11054b270;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027a2a40; end: 1027a2a47;  */

/* WARNING: Possible PIC construction at 0x0001027a2a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a2a2c) */

void FUN_1027a2a40(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_1027a3844();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11054b270;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1027a2a48; end: 1027a2a83;  */

void FUN_1027a2a48(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1027a2a84; end: 1027a2aa3;  */

void FUN_1027a2a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a2aa4,0,0);
  return;
}



/* Entry: 1027a2aa4; end: 1027a2c13;  */

void FUN_1027a2aa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x48);
  lVar7 = *(long *)(unaff_x22 + 0x48);
  lVar3 = lVar7;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x80) = lVar7;
  func_0x000107c61170(lVar3);
  if (lVar7 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar4 = PTR_PTR_1126b25b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c46814();
    *(undefined **)(unaff_x22 + 0x88) = puVar4;
    func_0x000107c61170(uVar5);
    *(long *)(unaff_x22 + 0x20) = lVar7;
    *(undefined **)(unaff_x22 + 0x28) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
    lVar7 = 0;
    func_0x000100f99cd0();
    lVar3 = 0x1027a3648;
    func_0x00010488bc98(0x1027a3648,unaff_x22 + 0x10,lVar7);
    *(long *)(unaff_x22 + 0x90) = lVar3;
    plVar6 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1027a2c14;
    plVar6[7] = lVar3;
    plVar6[8] = lVar7;
    plVar6[6] = unaff_x22 + 0x38;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027a2c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 1027a2c14; end: 1027a2c5b;  */

void FUN_1027a2c14(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a2c5c,0,0);
  return;
}



/* Entry: 1027a2c5c; end: 1027a2d3b;  */

void FUN_1027a2c5c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(long *)(unaff_x22 + 0x50) = lVar4;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x50,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x80));
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uVar3);
    func_0x0001027a3654(lVar4,1);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x80));
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uVar3);
    if (lVar4 == 0) {
      uVar3 = 0;
      goto LAB_1027a2d1c;
    }
  }
  uVar3 = 1;
LAB_1027a2d1c:
                    /* WARNING: Could not recover jumptable at 0x0001027a2d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1027a2d3c; end: 1027a2def;  */

void FUN_1027a2d3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  pcStack_50 = FUN_1027a38c0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101aad518;
  puStack_58 = &UNK_11054b320;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4f77c(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1027a2df0; end: 1027a2e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a2df0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *extraout_x8;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x22;
  long lVar17;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x11] = param_5;
  unaff_x22[0x12] = unaff_x20;
  unaff_x22[0xf] = param_3;
  unaff_x22[0x10] = param_4;
  unaff_x22[0xd] = param_1;
  unaff_x22[0xe] = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    UNRECOVERED_JUMPTABLE = FUN_1027a2e5c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = unaff_x22[0xf];
  lVar10 = unaff_x22[0xe];
  puVar2 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar10,lVar8);
  func_0x000107c46814();
  unaff_x22[0x13] = (long)puVar2;
  func_0x000107c61170(lVar10);
  func_0x000100083b20(unaff_x22 + 10);
  lVar8 = unaff_x22[10];
  plVar12 = *(long **)(lVar8 + _DAT_112ff4be0);
  unaff_x22[0x14] = (long)plVar12;
  func_0x000107c6157c(plVar12);
  func_0x000107c61170(lVar8);
  puVar3 = (undefined8 *)0x70;
  func_0x000107c615b8();
  unaff_x22[0x15] = (long)puVar3;
  *puVar3 = unaff_x22;
  puVar3[1] = FUN_1027a2f78;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    puVar3[5] = unaff_x22 + 8;
    puVar3[6] = plVar12;
    lVar10 = *(long *)(*plVar12 + 0x50);
    puVar3[7] = lVar10;
    lVar8 = 0;
    __sSqMa(0,lVar10);
    puVar3[8] = lVar8;
    lVar8 = *(long *)(lVar8 + -8);
    puVar3[9] = lVar8;
    uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar3[10] = uVar7;
    lVar8 = *(long *)(lVar10 + -8);
    puVar3[0xb] = lVar8;
    uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar3[0xc] = uVar7;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa0);
  plVar12 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
  func_0x000107c61574(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    UNRECOVERED_JUMPTABLE = FUN_1027a2ff4;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[0xb] = 0;
  plVar13 = (long *)plVar12[8];
  plVar4 = plVar13;
  func_0x000107c4c568();
  func_0x000107c61180();
  plVar12[0x16] = (long)plVar4;
  lVar8 = plVar12[0xb];
  if (plVar4 == (long *)0x0) {
    lVar15 = plVar12[0x13];
    lVar9 = lVar8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar9);
    func_0x000107c61654();
    func_0x000107c615e8();
    FUN_1027a25b0();
    puVar3 = (undefined8 *)&UNK_11054b148;
    lVar9 = 0;
    lVar17 = 0;
    func_0x000107c613f8();
    *plVar13 = lVar15;
    plVar13[1] = lVar8;
    plVar13[2] = 0;
    *(undefined1 *)(plVar13 + 3) = 0;
    func_0x000107c61654();
LAB_1027a323c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027a326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar12[1])();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c615e8(plVar13);
    func_0x000100083b20(plVar12 + 0xc);
    plVar14 = (long *)plVar12[0xc];
    plVar13 = plVar14;
    func_0x000107c5b1d4();
    func_0x000107c61180();
    func_0x000107c61170(plVar14);
    plVar14 = plVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar12[0x17] = (long)plVar14;
    func_0x000107c61170();
    if (plVar14 == (long *)0x0) {
      lVar8 = plVar12[0x13];
      FUN_1027a25b0();
      puVar3 = (undefined8 *)&UNK_11054b148;
      lVar9 = 0;
      lVar17 = 0;
      func_0x000107c613f8();
      plVar13[1] = 0;
      plVar13[2] = 0;
      *plVar13 = lVar8;
      *(undefined1 *)(plVar13 + 3) = 2;
      func_0x000107c61654();
      func_0x000107c61170(plVar4);
      goto LAB_1027a323c;
    }
    lVar15 = plVar12[0x13];
    lVar17 = plVar12[0x11];
    puVar2 = PTR_PTR_1126b1378;
    func_0x000107c61168();
    lVar8 = lVar15;
    func_0x000107c4c950();
    lVar9 = (long)(int)lVar8;
    func_0x000107c5d904();
    func_0x000107c61180();
    plVar12[0x18] = (long)puVar2;
    plVar12[4] = (long)plVar14;
    plVar12[5] = lVar15;
    plVar12[6] = (long)plVar4;
    plVar12[7] = (long)puVar2;
    puVar3 = (undefined8 *)0xd0;
    func_0x000107c615b8();
    plVar12[0x19] = (long)puVar3;
    lVar8 = 0x112d51600;
    plVar13 = (long *)&UNK_10dadaa70;
    func_0x0001000285a8();
    *puVar3 = plVar12;
    puVar3[1] = FUN_1027a3274;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      puVar3[0x13] = PTR___sytN_11034f1b0 + 8;
      puVar3[0x14] = lVar8;
      puVar3[0x11] = FUN_1027a3640;
      puVar3[0x12] = 0;
      puVar3[0xf] = FUN_1027a3828;
      puVar3[0x10] = plVar12 + 2;
      puVar3[9] = lVar8;
      lVar8 = *(long *)(lVar8 + -8);
      puVar3[0x15] = lVar8;
      uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar3[0x16] = uVar7;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10488bfe8;
      goto _swift_task_switch;
    }
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar12;
  lVar15 = *plVar12;
  *(undefined8 **)(lVar10 + 0xd0) = puVar3;
  func_0x000107c615c0(*(undefined8 *)(lVar10 + 200));
  if (puVar3 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) goto LAB_1027a3310;
    UNRECOVERED_JUMPTABLE = FUN_1027a3314;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
LAB_1027a3310:
      func_0x000107c60e78();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar15 + 0xc0);
      uVar11 = *(undefined8 *)(lVar15 + 0xb0);
      uVar16 = *(undefined8 *)(lVar15 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xb8));
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001027a3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar15 + 8))();
        return;
      }
      func_0x000107c60e78();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar15 + 0xc0);
      uVar11 = *(undefined8 *)(lVar15 + 0xb0);
      uVar16 = *(undefined8 *)(lVar15 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xb8));
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      ppuVar6 = &puStack_1d0;
      puVar2 = &UNK_11054b2b8;
      func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
      *(code **)(puVar2 + 0x10) = UNRECOVERED_JUMPTABLE;
      *(long **)(puVar2 + 0x18) = plVar13;
      puVar5 = &UNK_11054b2e0;
      func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
      *(code **)(puVar5 + 0x10) = FUN_1027a3864;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      *(long *)(puVar5 + 0x20) = lVar17;
      pcStack_1b0 = FUN_1027a3898;
      puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c8 = 0x42000000;
      puStack_1c0 = &UNK_100fac344;
      puStack_1b8 = &UNK_11054b2f8;
      puStack_1a8 = puVar5;
      func_0x000107c60bc4(&puStack_1d0);
      puVar2 = puStack_1a8;
      func_0x000107c6157c(plVar13);
      func_0x000107c61174(lVar17);
      func_0x000107c61574(puVar2);
      func_0x000107c507d4();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      *extraout_x8 = lVar9;
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1027a339c;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 1027a2e5c; end: 1027a2f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a2e5c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  long *extraout_x8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x22;
  long lVar17;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = unaff_x22[0xf];
  lVar9 = unaff_x22[0xe];
  puVar2 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar9,lVar10);
  func_0x000107c46814();
  unaff_x22[0x13] = (long)puVar2;
  func_0x000107c61170(lVar9);
  func_0x000100083b20(unaff_x22 + 10);
  lVar10 = unaff_x22[10];
  plVar12 = *(long **)(lVar10 + _DAT_112ff4be0);
  unaff_x22[0x14] = (long)plVar12;
  func_0x000107c6157c(plVar12);
  func_0x000107c61170(lVar10);
  puVar3 = (undefined8 *)0x70;
  func_0x000107c615b8();
  unaff_x22[0x15] = (long)puVar3;
  *puVar3 = unaff_x22;
  puVar3[1] = FUN_1027a2f78;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    puVar3[5] = unaff_x22 + 8;
    puVar3[6] = plVar12;
    lVar9 = *(long *)(*plVar12 + 0x50);
    puVar3[7] = lVar9;
    lVar10 = 0;
    __sSqMa(0,lVar9);
    puVar3[8] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    puVar3[9] = lVar10;
    uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar3[10] = uVar7;
    lVar10 = *(long *)(lVar9 + -8);
    puVar3[0xb] = lVar10;
    uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar3[0xc] = uVar7;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa0);
  plVar12 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
  func_0x000107c61574(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    UNRECOVERED_JUMPTABLE = FUN_1027a2ff4;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[0xb] = 0;
  plVar13 = (long *)plVar12[8];
  plVar4 = plVar13;
  func_0x000107c4c568();
  func_0x000107c61180();
  plVar12[0x16] = (long)plVar4;
  lVar10 = plVar12[0xb];
  if (plVar4 == (long *)0x0) {
    lVar15 = plVar12[0x13];
    lVar8 = lVar10;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar8);
    func_0x000107c61654();
    func_0x000107c615e8();
    FUN_1027a25b0();
    puVar3 = (undefined8 *)&UNK_11054b148;
    lVar8 = 0;
    lVar17 = 0;
    func_0x000107c613f8();
    *plVar13 = lVar15;
    plVar13[1] = lVar10;
    plVar13[2] = 0;
    *(undefined1 *)(plVar13 + 3) = 0;
    func_0x000107c61654();
LAB_1027a323c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001027a326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar12[1])();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c615e8(plVar13);
    func_0x000100083b20(plVar12 + 0xc);
    plVar14 = (long *)plVar12[0xc];
    plVar13 = plVar14;
    func_0x000107c5b1d4();
    func_0x000107c61180();
    func_0x000107c61170(plVar14);
    plVar14 = plVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar12[0x17] = (long)plVar14;
    func_0x000107c61170();
    if (plVar14 == (long *)0x0) {
      lVar10 = plVar12[0x13];
      FUN_1027a25b0();
      puVar3 = (undefined8 *)&UNK_11054b148;
      lVar8 = 0;
      lVar17 = 0;
      func_0x000107c613f8();
      plVar13[1] = 0;
      plVar13[2] = 0;
      *plVar13 = lVar10;
      *(undefined1 *)(plVar13 + 3) = 2;
      func_0x000107c61654();
      func_0x000107c61170(plVar4);
      goto LAB_1027a323c;
    }
    lVar15 = plVar12[0x13];
    lVar17 = plVar12[0x11];
    puVar2 = PTR_PTR_1126b1378;
    func_0x000107c61168();
    lVar10 = lVar15;
    func_0x000107c4c950();
    lVar8 = (long)(int)lVar10;
    func_0x000107c5d904();
    func_0x000107c61180();
    plVar12[0x18] = (long)puVar2;
    plVar12[4] = (long)plVar14;
    plVar12[5] = lVar15;
    plVar12[6] = (long)plVar4;
    plVar12[7] = (long)puVar2;
    puVar3 = (undefined8 *)0xd0;
    func_0x000107c615b8();
    plVar12[0x19] = (long)puVar3;
    lVar10 = 0x112d51600;
    plVar13 = (long *)&UNK_10dadaa70;
    func_0x0001000285a8();
    *puVar3 = plVar12;
    puVar3[1] = FUN_1027a3274;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      puVar3[0x13] = PTR___sytN_11034f1b0 + 8;
      puVar3[0x14] = lVar10;
      puVar3[0x11] = FUN_1027a3640;
      puVar3[0x12] = 0;
      puVar3[0xf] = FUN_1027a3828;
      puVar3[0x10] = plVar12 + 2;
      puVar3[9] = lVar10;
      lVar10 = *(long *)(lVar10 + -8);
      puVar3[0x15] = lVar10;
      uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar3[0x16] = uVar7;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10488bfe8;
      goto _swift_task_switch;
    }
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *plVar12;
  lVar15 = *plVar12;
  *(undefined8 **)(lVar9 + 0xd0) = puVar3;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 200));
  if (puVar3 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) goto LAB_1027a3310;
    UNRECOVERED_JUMPTABLE = FUN_1027a3314;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
LAB_1027a3310:
      func_0x000107c60e78();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar15 + 0xc0);
      uVar11 = *(undefined8 *)(lVar15 + 0xb0);
      uVar16 = *(undefined8 *)(lVar15 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xb8));
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027a3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar15 + 8))();
        return;
      }
      func_0x000107c60e78();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar15 + 0xc0);
      uVar11 = *(undefined8 *)(lVar15 + 0xb0);
      uVar16 = *(undefined8 *)(lVar15 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xb8));
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      ppuVar6 = &puStack_1b0;
      puVar2 = &UNK_11054b2b8;
      func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
      *(code **)(puVar2 + 0x10) = UNRECOVERED_JUMPTABLE;
      *(long **)(puVar2 + 0x18) = plVar13;
      puVar5 = &UNK_11054b2e0;
      func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
      *(code **)(puVar5 + 0x10) = FUN_1027a3864;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      *(long *)(puVar5 + 0x20) = lVar17;
      pcStack_190 = FUN_1027a3898;
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0x42000000;
      puStack_1a0 = &UNK_100fac344;
      puStack_198 = &UNK_11054b2f8;
      puStack_188 = puVar5;
      func_0x000107c60bc4(&puStack_1b0);
      puVar2 = puStack_188;
      func_0x000107c6157c(plVar13);
      func_0x000107c61174(lVar17);
      func_0x000107c61574(puVar2);
      func_0x000107c507d4();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      *extraout_x8 = lVar8;
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1027a339c;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 1027a2f78; end: 1027a2ff3;  */

void FUN_1027a2f78(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *extraout_x8;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x22;
  long *plVar16;
  long lVar17;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa0);
  plVar16 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
  func_0x000107c61574(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    UNRECOVERED_JUMPTABLE = FUN_1027a2ff4;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16[0xb] = 0;
  plVar12 = (long *)plVar16[8];
  plVar2 = plVar12;
  func_0x000107c4c568();
  func_0x000107c61180();
  plVar16[0x16] = (long)plVar2;
  lVar9 = plVar16[0xb];
  if (plVar2 == (long *)0x0) {
    lVar14 = plVar16[0x13];
    lVar8 = lVar9;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar8);
    func_0x000107c61654();
    func_0x000107c615e8();
    FUN_1027a25b0();
    puVar4 = (undefined8 *)&UNK_11054b148;
    lVar8 = 0;
    lVar17 = 0;
    func_0x000107c613f8();
    *plVar12 = lVar14;
    plVar12[1] = lVar9;
    plVar12[2] = 0;
    *(undefined1 *)(plVar12 + 3) = 0;
    func_0x000107c61654();
LAB_1027a323c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027a326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar16[1])();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c615e8(plVar12);
    func_0x000100083b20(plVar16 + 0xc);
    plVar13 = (long *)plVar16[0xc];
    plVar12 = plVar13;
    func_0x000107c5b1d4();
    func_0x000107c61180();
    func_0x000107c61170(plVar13);
    plVar13 = plVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar16[0x17] = (long)plVar13;
    func_0x000107c61170();
    if (plVar13 == (long *)0x0) {
      lVar9 = plVar16[0x13];
      FUN_1027a25b0();
      puVar4 = (undefined8 *)&UNK_11054b148;
      lVar8 = 0;
      lVar17 = 0;
      func_0x000107c613f8();
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = lVar9;
      *(undefined1 *)(plVar12 + 3) = 2;
      func_0x000107c61654();
      func_0x000107c61170(plVar2);
      goto LAB_1027a323c;
    }
    lVar14 = plVar16[0x13];
    lVar17 = plVar16[0x11];
    puVar3 = PTR_PTR_1126b1378;
    func_0x000107c61168();
    lVar9 = lVar14;
    func_0x000107c4c950();
    lVar8 = (long)(int)lVar9;
    func_0x000107c5d904();
    func_0x000107c61180();
    plVar16[0x18] = (long)puVar3;
    plVar16[4] = (long)plVar13;
    plVar16[5] = lVar14;
    plVar16[6] = (long)plVar2;
    plVar16[7] = (long)puVar3;
    puVar4 = (undefined8 *)0xd0;
    func_0x000107c615b8();
    plVar16[0x19] = (long)puVar4;
    lVar9 = 0x112d51600;
    plVar12 = (long *)&UNK_10dadaa70;
    func_0x0001000285a8();
    *puVar4 = plVar16;
    puVar4[1] = FUN_1027a3274;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      puVar4[0x13] = PTR___sytN_11034f1b0 + 8;
      puVar4[0x14] = lVar9;
      puVar4[0x11] = FUN_1027a3640;
      puVar4[0x12] = 0;
      puVar4[0xf] = FUN_1027a3828;
      puVar4[0x10] = plVar16 + 2;
      puVar4[9] = lVar9;
      lVar9 = *(long *)(lVar9 + -8);
      puVar4[0x15] = lVar9;
      uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar4[0x16] = uVar7;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10488bfe8;
      goto _swift_task_switch;
    }
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar16;
  lVar14 = *plVar16;
  *(undefined8 **)(lVar10 + 0xd0) = puVar4;
  func_0x000107c615c0(*(undefined8 *)(lVar10 + 200));
  if (puVar4 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) goto LAB_1027a3310;
    UNRECOVERED_JUMPTABLE = FUN_1027a3314;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
LAB_1027a3310:
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar14 + 0xc0);
      uVar11 = *(undefined8 *)(lVar14 + 0xb0);
      uVar15 = *(undefined8 *)(lVar14 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar14 + 0xb8));
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001027a3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar14 + 8))();
        return;
      }
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar14 + 0xc0);
      uVar11 = *(undefined8 *)(lVar14 + 0xb0);
      uVar15 = *(undefined8 *)(lVar14 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar14 + 0xb8));
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
        func_0x000107c60e78();
        ppuVar6 = &puStack_170;
        puVar3 = &UNK_11054b2b8;
        func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
        *(code **)(puVar3 + 0x10) = UNRECOVERED_JUMPTABLE;
        *(long **)(puVar3 + 0x18) = plVar12;
        puVar5 = &UNK_11054b2e0;
        func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
        *(code **)(puVar5 + 0x10) = FUN_1027a3864;
        *(undefined **)(puVar5 + 0x18) = puVar3;
        *(long *)(puVar5 + 0x20) = lVar17;
        pcStack_150 = FUN_1027a3898;
        puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_168 = 0x42000000;
        puStack_160 = &UNK_100fac344;
        puStack_158 = &UNK_11054b2f8;
        puStack_148 = puVar5;
        func_0x000107c60bc4(&puStack_170);
        puVar3 = puStack_148;
        func_0x000107c6157c(plVar12);
        func_0x000107c61174(lVar17);
        func_0x000107c61574(puVar3);
        func_0x000107c507d4();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        *extraout_x8 = lVar8;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1027a339c;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 1027a2ff4; end: 1027a3273;  */

void FUN_1027a2ff4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *extraout_x8;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x22;
  long lVar16;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = unaff_x22 + 0xb;
  *plVar13 = 0;
  plVar12 = (long *)unaff_x22[8];
  plVar2 = plVar12;
  func_0x000107c4c568(plVar12,param_2,unaff_x22[0xd],plVar13);
  func_0x000107c61180();
  unaff_x22[0x16] = (long)plVar2;
  lVar3 = *plVar13;
  if (plVar2 == (long *)0x0) {
    lVar14 = unaff_x22[0x13];
    lVar9 = lVar3;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar9);
    func_0x000107c61654();
    func_0x000107c615e8();
    FUN_1027a25b0();
    puVar5 = (undefined8 *)&UNK_11054b148;
    lVar9 = 0;
    lVar16 = 0;
    func_0x000107c613f8();
    *plVar12 = lVar14;
    plVar12[1] = lVar3;
    plVar12[2] = 0;
    *(undefined1 *)(plVar12 + 3) = 0;
    func_0x000107c61654();
LAB_1027a323c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027a326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c615e8(plVar12);
    func_0x000100083b20(unaff_x22 + 0xc);
    plVar13 = (long *)unaff_x22[0xc];
    plVar12 = plVar13;
    func_0x000107c5b1d4();
    func_0x000107c61180();
    func_0x000107c61170(plVar13);
    plVar13 = plVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    unaff_x22[0x17] = (long)plVar13;
    func_0x000107c61170();
    if (plVar13 == (long *)0x0) {
      lVar3 = unaff_x22[0x13];
      FUN_1027a25b0();
      puVar5 = (undefined8 *)&UNK_11054b148;
      lVar9 = 0;
      lVar16 = 0;
      func_0x000107c613f8();
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = lVar3;
      *(undefined1 *)(plVar12 + 3) = 2;
      func_0x000107c61654();
      func_0x000107c61170(plVar2);
      goto LAB_1027a323c;
    }
    lVar14 = unaff_x22[0x13];
    lVar16 = unaff_x22[0x11];
    puVar4 = PTR_PTR_1126b1378;
    func_0x000107c61168();
    lVar3 = lVar14;
    func_0x000107c4c950();
    lVar9 = (long)(int)lVar3;
    func_0x000107c5d904();
    func_0x000107c61180();
    unaff_x22[0x18] = (long)puVar4;
    unaff_x22[4] = (long)plVar13;
    unaff_x22[5] = lVar14;
    unaff_x22[6] = (long)plVar2;
    unaff_x22[7] = (long)puVar4;
    puVar5 = (undefined8 *)0xd0;
    func_0x000107c615b8();
    unaff_x22[0x19] = (long)puVar5;
    lVar3 = 0x112d51600;
    plVar12 = (long *)&UNK_10dadaa70;
    func_0x0001000285a8();
    *puVar5 = unaff_x22;
    puVar5[1] = FUN_1027a3274;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      puVar5[0x13] = PTR___sytN_11034f1b0 + 8;
      puVar5[0x14] = lVar3;
      puVar5[0x11] = FUN_1027a3640;
      puVar5[0x12] = 0;
      puVar5[0xf] = FUN_1027a3828;
      puVar5[0x10] = unaff_x22 + 2;
      puVar5[9] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      puVar5[0x15] = lVar3;
      uVar8 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar5[0x16] = uVar8;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10488bfe8;
      goto _swift_task_switch;
    }
  }
  func_0x000107c60e78();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *unaff_x22;
  lVar14 = *unaff_x22;
  *(undefined8 **)(lVar10 + 0xd0) = puVar5;
  func_0x000107c615c0(*(undefined8 *)(lVar10 + 200));
  if (puVar5 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) goto LAB_1027a3310;
    UNRECOVERED_JUMPTABLE = FUN_1027a3314;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
LAB_1027a3310:
      func_0x000107c60e78();
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar14 + 0xc0);
      uVar11 = *(undefined8 *)(lVar14 + 0xb0);
      uVar15 = *(undefined8 *)(lVar14 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar14 + 0xb8));
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001027a3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar14 + 8))();
        return;
      }
      func_0x000107c60e78();
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar14 + 0xc0);
      uVar11 = *(undefined8 *)(lVar14 + 0xb0);
      uVar15 = *(undefined8 *)(lVar14 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar14 + 0xb8));
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
        func_0x000107c60e78();
        ppuVar7 = &puStack_150;
        puVar4 = &UNK_11054b2b8;
        func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
        *(code **)(puVar4 + 0x10) = UNRECOVERED_JUMPTABLE;
        *(long **)(puVar4 + 0x18) = plVar12;
        puVar6 = &UNK_11054b2e0;
        func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
        *(code **)(puVar6 + 0x10) = FUN_1027a3864;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        *(long *)(puVar6 + 0x20) = lVar16;
        pcStack_130 = FUN_1027a3898;
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0x42000000;
        puStack_140 = &UNK_100fac344;
        puStack_138 = &UNK_11054b2f8;
        puStack_128 = puVar6;
        func_0x000107c60bc4(&puStack_150);
        puVar4 = puStack_128;
        func_0x000107c6157c(plVar12);
        func_0x000107c61174(lVar16);
        func_0x000107c61574(puVar4);
        func_0x000107c507d4();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar7);
        *extraout_x8 = lVar9;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1027a339c;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 1027a3274; end: 1027a3313;  */

void FUN_1027a3274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x22;
  long lVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *unaff_x22;
  lVar9 = *unaff_x22;
  *(long *)(lVar6 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 200));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) goto LAB_1027a3310;
    UNRECOVERED_JUMPTABLE = FUN_1027a3314;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
LAB_1027a3310:
      func_0x000107c60e78();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar9 + 0xc0);
      uVar7 = *(undefined8 *)(lVar9 + 0xb0);
      uVar8 = *(undefined8 *)(lVar9 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar9 + 0xb8));
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001027a3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 8))();
        return;
      }
      func_0x000107c60e78();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar9 + 0xc0);
      uVar7 = *(undefined8 *)(lVar9 + 0xb0);
      uVar8 = *(undefined8 *)(lVar9 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar9 + 0xb8));
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar7);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      ppuVar4 = &puStack_100;
      puVar2 = &UNK_11054b2b8;
      func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
      *(code **)(puVar2 + 0x10) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(puVar2 + 0x18) = param_2;
      puVar3 = &UNK_11054b2e0;
      func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
      *(code **)(puVar3 + 0x10) = FUN_1027a3864;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      *(undefined8 *)(puVar3 + 0x20) = param_4;
      pcStack_e0 = FUN_1027a3898;
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0x42000000;
      puStack_f0 = &UNK_100fac344;
      puStack_e8 = &UNK_11054b2f8;
      puStack_d8 = puVar3;
      func_0x000107c60bc4(&puStack_100);
      puVar2 = puStack_d8;
      func_0x000107c6157c(param_2);
      func_0x000107c61174(param_4);
      func_0x000107c61574(puVar2);
      func_0x000107c507d4();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      *extraout_x8 = param_3;
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1027a339c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 1027a3314; end: 1027a339b;  */

void FUN_1027a3314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001027a3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  ppuVar4 = &puStack_e0;
  puVar2 = &UNK_11054b2b8;
  func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
  *(code **)(puVar2 + 0x10) = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = &UNK_11054b2e0;
  func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
  *(code **)(puVar3 + 0x10) = FUN_1027a3864;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  pcStack_c0 = FUN_1027a3898;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  puStack_d0 = &UNK_100fac344;
  puStack_c8 = &UNK_11054b2f8;
  puStack_b8 = puVar3;
  func_0x000107c60bc4(&puStack_e0);
  puVar2 = puStack_b8;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c507d4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *extraout_x8 = param_3;
  return;
}



/* Entry: 1027a339c; end: 1027a3423;  */

void FUN_1027a339c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  ppuVar4 = &puStack_b0;
  puVar2 = &UNK_11054b2b8;
  func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
  *(code **)(puVar2 + 0x10) = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = &UNK_11054b2e0;
  func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
  *(code **)(puVar3 + 0x10) = FUN_1027a3864;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  pcStack_90 = FUN_1027a3898;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100fac344;
  puStack_98 = &UNK_11054b2f8;
  puStack_88 = puVar3;
  func_0x000107c60bc4(&puStack_b0);
  puVar2 = puStack_88;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c507d4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *extraout_x8 = param_3;
  return;
}



/* Entry: 1027a3424; end: 1027a354b;  */

void FUN_1027a3424(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = &UNK_11054b2b8;
  func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &UNK_11054b2e0;
  func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
  *(code **)(puVar2 + 0x10) = FUN_1027a3864;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  pcStack_60 = FUN_1027a3898;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100fac344;
  puStack_68 = &UNK_11054b2f8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c507d4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *param_1 = param_4;
  return;
}



/* Entry: 1027a354c; end: 1027a363f;  */

/* WARNING: Possible PIC construction at 0x0001027a3600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a3604) */

void FUN_1027a354c(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x000107c44314();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c4403c();
    func_0x000107c61180();
    puVar2 = param_1;
    FUN_1027a25b0();
    puVar3 = &UNK_11054b148;
    func_0x000107c613f8(&UNK_11054b148,puVar2,0,0);
    *puVar2 = param_4;
    puVar2[1] = puVar1;
    puVar2[2] = param_1;
    *(undefined1 *)(puVar2 + 3) = 1;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_4);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    (*param_2)(puVar3,1);
    func_0x000107c614ac(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*param_2)();
  return;
}



/* Entry: 1027a3640; end: 1027a3673;  */

void FUN_1027a3640(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_1,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1027a3674; end: 1027a36af;  */

void FUN_1027a3674(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001027a36ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027a36b0; end: 1027a3727;  */

void FUN_1027a36b0(long param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1027a3728;
  plVar1[0xe] = param_4 & 0xffffffffff;
  plVar1[0xf] = lVar2;
  plVar1[0xc] = param_2;
  plVar1[0xd] = param_3;
  plVar1[0xb] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027a2aa4,0,0);
  return;
}



/* Entry: 1027a3728; end: 1027a376b;  */

void FUN_1027a3728(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027a3768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1027a376c; end: 1027a37eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a376c(long param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *extraout_x8;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  
  lVar14 = *unaff_x20;
  plVar7 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1027a37ec;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7[0x11] = param_5;
  plVar7[0x12] = lVar14;
  plVar7[0xf] = param_3;
  plVar7[0x10] = param_4 & 0xffffffffff;
  plVar7[0xd] = param_1;
  plVar7[0xe] = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    UNRECOVERED_JUMPTABLE = FUN_1027a2e5c;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = plVar7[0xf];
  lVar14 = plVar7[0xe];
  puVar2 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar14,lVar9);
  func_0x000107c46814();
  plVar7[0x13] = (long)puVar2;
  func_0x000107c61170(lVar14);
  func_0x000100083b20(plVar7 + 10);
  lVar9 = plVar7[10];
  plVar12 = *(long **)(lVar9 + _DAT_112ff4be0);
  plVar7[0x14] = (long)plVar12;
  func_0x000107c6157c(plVar12);
  func_0x000107c61170(lVar9);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  plVar7[0x15] = (long)plVar3;
  *plVar3 = (long)plVar7;
  plVar3[1] = (long)FUN_1027a2f78;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    plVar3[5] = (long)(plVar7 + 8);
    plVar3[6] = (long)plVar12;
    lVar14 = *(long *)(*plVar12 + 0x50);
    plVar3[7] = lVar14;
    lVar9 = 0;
    __sSqMa(0,lVar14);
    plVar3[8] = lVar9;
    lVar9 = *(long *)(lVar9 + -8);
    plVar3[9] = lVar9;
    uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[10] = uVar8;
    lVar9 = *(long *)(lVar14 + -8);
    plVar3[0xb] = lVar9;
    uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[0xc] = uVar8;
    UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(*plVar7 + 0xa0);
  plVar3 = (long *)*plVar7;
  func_0x000107c615c0(*(undefined8 *)(*plVar7 + 0xa8));
  func_0x000107c61574(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    UNRECOVERED_JUMPTABLE = FUN_1027a2ff4;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3[0xb] = 0;
  plVar7 = (long *)plVar3[8];
  plVar12 = plVar7;
  func_0x000107c4c568();
  func_0x000107c61180();
  plVar3[0x16] = (long)plVar12;
  lVar9 = plVar3[0xb];
  if (plVar12 == (long *)0x0) {
    lVar15 = plVar3[0x13];
    lVar10 = lVar9;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar10);
    func_0x000107c61654();
    func_0x000107c615e8();
    FUN_1027a25b0();
    puVar4 = (undefined8 *)&UNK_11054b148;
    lVar10 = 0;
    lVar17 = 0;
    func_0x000107c613f8();
    *plVar7 = lVar15;
    plVar7[1] = lVar9;
    plVar7[2] = 0;
    *(undefined1 *)(plVar7 + 3) = 0;
    func_0x000107c61654();
LAB_1027a323c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x0001027a326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[1])();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c615e8(plVar7);
    func_0x000100083b20(plVar3 + 0xc);
    plVar13 = (long *)plVar3[0xc];
    plVar7 = plVar13;
    func_0x000107c5b1d4();
    func_0x000107c61180();
    func_0x000107c61170(plVar13);
    plVar13 = plVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar3[0x17] = (long)plVar13;
    func_0x000107c61170();
    if (plVar13 == (long *)0x0) {
      lVar9 = plVar3[0x13];
      FUN_1027a25b0();
      puVar4 = (undefined8 *)&UNK_11054b148;
      lVar10 = 0;
      lVar17 = 0;
      func_0x000107c613f8();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = lVar9;
      *(undefined1 *)(plVar7 + 3) = 2;
      func_0x000107c61654();
      func_0x000107c61170(plVar12);
      goto LAB_1027a323c;
    }
    lVar15 = plVar3[0x13];
    lVar17 = plVar3[0x11];
    puVar2 = PTR_PTR_1126b1378;
    func_0x000107c61168();
    lVar9 = lVar15;
    func_0x000107c4c950();
    lVar10 = (long)(int)lVar9;
    func_0x000107c5d904();
    func_0x000107c61180();
    plVar3[0x18] = (long)puVar2;
    plVar3[4] = (long)plVar13;
    plVar3[5] = lVar15;
    plVar3[6] = (long)plVar12;
    plVar3[7] = (long)puVar2;
    puVar4 = (undefined8 *)0xd0;
    func_0x000107c615b8();
    plVar3[0x19] = (long)puVar4;
    lVar9 = 0x112d51600;
    plVar7 = (long *)&UNK_10dadaa70;
    func_0x0001000285a8();
    *puVar4 = plVar3;
    puVar4[1] = FUN_1027a3274;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      puVar4[0x13] = PTR___sytN_11034f1b0 + 8;
      puVar4[0x14] = lVar9;
      puVar4[0x11] = FUN_1027a3640;
      puVar4[0x12] = 0;
      puVar4[0xf] = FUN_1027a3828;
      puVar4[0x10] = plVar3 + 2;
      puVar4[9] = lVar9;
      lVar9 = *(long *)(lVar9 + -8);
      puVar4[0x15] = lVar9;
      uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar4[0x16] = uVar8;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10488bfe8;
      goto _swift_task_switch;
    }
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *plVar3;
  lVar15 = *plVar3;
  *(undefined8 **)(lVar14 + 0xd0) = puVar4;
  func_0x000107c615c0(*(undefined8 *)(lVar14 + 200));
  if (puVar4 == (undefined8 *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) goto LAB_1027a3310;
    UNRECOVERED_JUMPTABLE = FUN_1027a3314;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
LAB_1027a3310:
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar15 + 0xc0);
      uVar11 = *(undefined8 *)(lVar15 + 0xb0);
      uVar16 = *(undefined8 *)(lVar15 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xb8));
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001027a3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar15 + 8))();
        return;
      }
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar1 = *(undefined8 *)(lVar15 + 0xc0);
      uVar11 = *(undefined8 *)(lVar15 + 0xb0);
      uVar16 = *(undefined8 *)(lVar15 + 0x98);
      func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xb8));
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar11);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001027a341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      ppuVar6 = &puStack_1d0;
      puVar2 = &UNK_11054b2b8;
      func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
      *(code **)(puVar2 + 0x10) = UNRECOVERED_JUMPTABLE;
      *(long **)(puVar2 + 0x18) = plVar7;
      puVar5 = &UNK_11054b2e0;
      func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
      *(code **)(puVar5 + 0x10) = FUN_1027a3864;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      *(long *)(puVar5 + 0x20) = lVar17;
      pcStack_1b0 = FUN_1027a3898;
      puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c8 = 0x42000000;
      puStack_1c0 = &UNK_100fac344;
      puStack_1b8 = &UNK_11054b2f8;
      puStack_1a8 = puVar5;
      func_0x000107c60bc4(&puStack_1d0);
      puVar2 = puStack_1a8;
      func_0x000107c6157c(plVar7);
      func_0x000107c61174(lVar17);
      func_0x000107c61574(puVar2);
      func_0x000107c507d4();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      *extraout_x8 = lVar10;
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_1027a339c;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
}



/* Entry: 1027a37ec; end: 1027a3827;  */

void FUN_1027a37ec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027a3824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027a3828; end: 1027a3843;  */

void FUN_1027a3828(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_80;
  puVar2 = &UNK_11054b2b8;
  func_0x000107c613fc(&UNK_11054b2b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar3 = &UNK_11054b2e0;
  func_0x000107c613fc(&UNK_11054b2e0,0x28,7);
  *(code **)(puVar3 + 0x10) = FUN_1027a3864;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  pcStack_60 = FUN_1027a3898;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100fac344;
  puStack_68 = &UNK_11054b2f8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c507d4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *param_1 = uVar5;
  return;
}



/* Entry: 1027a3844; end: 1027a3863;  */

void FUN_1027a3844(void)

{
  func_0x000107c61168(&PTR_PTR_112ebe8e0);
  return;
}



/* Entry: 1027a3864; end: 1027a3897;  */

void FUN_1027a3864(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&uStack_30);
  return;
}



/* Entry: 1027a3898; end: 1027a38bf;  */

/* WARNING: Possible PIC construction at 0x0001027a3600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a3604) */

void FUN_1027a3898(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = param_1;
  func_0x000107c44314(param_1,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c4403c();
    func_0x000107c61180();
    puVar3 = param_1;
    FUN_1027a25b0();
    puVar4 = &UNK_11054b148;
    func_0x000107c613f8(&UNK_11054b148,puVar3,0,0);
    *puVar3 = uVar5;
    puVar3[1] = puVar2;
    puVar3[2] = param_1;
    *(undefined1 *)(puVar3 + 3) = 1;
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar5);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    (*pcVar1)(puVar4,1);
    func_0x000107c614ac(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*pcVar1)();
  return;
}



/* Entry: 1027a38c0; end: 1027a38e7;  */

void FUN_1027a38c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uStack_18 = 0;
  uStack_20 = param_1;
  func_0x00010488e5d4(&uStack_20);
  return;
}



/* Entry: 1027a38e8; end: 1027a3903;  */

void FUN_1027a38e8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1027a3904; end: 1027a39af;  */

void FUN_1027a3904(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1027a39b0; end: 1027a39b3;  */

void FUN_1027a39b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dadab00;
  func_0x000107c61520(&UNK_10dadab00,&UNK_11054b408);
  puRam0000000112ebe948 = puVar1;
  return;
}



/* Entry: 1027a39b4; end: 1027a39f3;  */

void FUN_1027a39b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dadab00;
  func_0x000107c61520(&UNK_10dadab00,&UNK_11054b408);
  puRam0000000112ebe948 = puVar1;
  return;
}



/* Entry: 1027a39f4; end: 1027a3b9b;  */

undefined1  [16] FUN_1027a39f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0x800000010f0bbf10;
  uVar1 = 0xd000000000000011;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000065;
    uVar1 = 0x6c62616c69617641;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1027a3b9c; end: 1027a3beb;  */

void FUN_1027a3b9c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ebe950 != 0) {
    return;
  }
  puVar1 = &UNK_11054b428;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ebe950 = param_1;
  return;
}



/* Entry: 1027a3bec; end: 1027a3c47;  */

bool FUN_1027a3bec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1027a3c48; end: 1027a3cef;  */

/* WARNING: Possible PIC construction at 0x0001027a3c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a3c98) */

ulong FUN_1027a3c48(ulong param_1,long param_2,ulong param_3,ulong param_4,long param_5,
                   undefined8 param_6)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_6 >> 0x20) & 0xff;
  if ((param_3 & 0xff00000000) == 0x100000000) {
    if (uVar1 != 1) {
      return 0;
    }
    if ((param_1 == param_4) && (param_2 == param_5)) {
      return (ulong)((int)param_3 == (int)param_6);
    }
  }
  else {
    if (uVar1 == 1) {
      return 0;
    }
    if ((param_1 == param_4) && (param_2 == param_5)) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_1,param_2,param_4,param_5,0);
  return param_1;
}



/* Entry: 1027a3cf0; end: 1027a3d13;  */

void FUN_1027a3cf0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1027a3d14; end: 1027a3ddb;  */

undefined8 * FUN_1027a3d14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined1 *)((long)param_2 + 0x14);
  FUN_1027a3cf0(uVar1,uVar2,uVar3,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x14) = uVar4;
  return param_1;
}



/* Entry: 1027a3ddc; end: 1027a3e2b;  */

undefined8 * FUN_1027a3ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x14);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 2) = uVar1;
  uVar4 = *(undefined1 *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x14) = uVar3;
  func_0x0001027a3d0c(uVar5,uVar6,uVar2,uVar4);
  return param_1;
}



/* Entry: 1027a3e2c; end: 1027a3ee7;  */

int FUN_1027a3e2c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x15) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 5) ^ 0xff;
  if (*(byte *)(param_1 + 5) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1027a3ee8; end: 1027a4027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a3ee8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1027a449c();
  lVar6 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ebe960) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112ebe968) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112ebe970) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112ebe978) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar6;
  lStack_48 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar7;
  return;
}



/* Entry: 1027a4028; end: 1027a42b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027a4028(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_68;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebea68);
  puVar2 = (undefined *)*puVar1;
  uVar6 = puVar1[1];
  if (*(char *)(puVar1 + 2) == '\0') {
    puVar3 = puVar2;
    func_0x000107c6157c(puVar2);
    func_0x0001003a5b88();
    uVar8 = 0;
  }
  else {
    if (*(char *)(puVar1 + 2) == '\x01') {
      func_0x000107c61174(puVar2);
      puVar3 = puVar2;
      goto LAB_1027a4140;
    }
    puVar3 = &UNK_11054b650;
    func_0x000107c613fc(&UNK_11054b650,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    FUN_1027a4370(puVar2,uVar6,2);
    func_0x0001027a4398(puVar2,uVar6);
    uVar8 = 0x112ebe980;
    func_0x0001000285a8(0x112ebe980,&UNK_10dadacd8);
    pcVar4 = FUN_1027a4314;
    func_0x00010072927c(FUN_1027a4314,puVar3,uVar8);
    func_0x000107c61574(puVar3);
    func_0x0001000ad7c4();
    func_0x000107c61574(pcVar4);
    uVar8 = 2;
  }
  func_0x0001027a43b8(puVar2,uVar6,uVar8);
LAB_1027a4140:
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c4e6e8(lStack_68);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_1130806d8);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(lVar7);
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  puVar2 = PTR_PTR_1126c6638;
  func_0x000107c610f8(PTR_PTR_1126c6638);
  func_0x000107c47e88();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar7);
  return puVar2;
}



/* Entry: 1027a42b8; end: 1027a4313; -[_TtC40MemoriesCameraRollPaginationServicesImpl34MemoriesCameraRollPaginatorBuilder buildWithConfig:] */

void FUN_1027a42b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1027a4028(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027a4314; end: 1027a436f;  */

void FUN_1027a4314(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  func_0x0001027a5364(uVar4,uVar2,uVar1,uVar3,param_2);
  *param_1 = uVar4;
  return;
}



/* Entry: 1027a4370; end: 1027a43ff;  */

void FUN_1027a4370(long param_1,long param_2,char param_3)

{
  bool bVar1;
  
  if (param_3 == '\x02') {
    if (param_1 == 1) {
      return;
    }
    bVar1 = param_1 == 0;
    param_1 = param_2;
    if (bVar1) {
      return;
    }
  }
  else {
    if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (param_3 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1027a4400; end: 1027a4433;  */

void FUN_1027a4400(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027a4434; end: 1027a4443;  */

undefined1  [16] FUN_1027a4434(void)

{
  return ZEXT816(0x11054b678);
}



/* Entry: 1027a4444; end: 1027a449b; -[_TtC40MemoriesCameraRollPaginationServicesImpl34MemoriesCameraRollPaginatorBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027a4460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027a4480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a4464) */
/* WARNING: Removing unreachable block (ram,0x0001027a4484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebe968));
  return;
}



/* Entry: 1027a449c; end: 1027a44bb;  */

void FUN_1027a449c(void)

{
  func_0x000107c61168(&PTR_PTR_112860e48);
  return;
}



/* Entry: 1027a44bc; end: 1027a45fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a44bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1027a4a50();
  lVar6 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ebe9b8) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112ebe9c0) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112ebe9c8) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112ebe9d0) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar6;
  lStack_48 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar7;
  return;
}



/* Entry: 1027a45fc; end: 1027a489f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027a45fc(code *param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  undefined1 auStack_a0 [40];
  long alStack_78 [5];
  
  pcVar3 = param_1 + _DAT_112ebea68;
  pcVar8 = *(code **)pcVar3;
  if (pcVar3[0x10] == (code)0x0) {
    pcVar8 = param_1;
    func_0x0001003a5b88();
  }
  else if (pcVar3[0x10] == (code)0x1) {
    func_0x000107c61174(pcVar8);
  }
  else {
    uVar6 = *(undefined8 *)(pcVar3 + 8);
    func_0x000100083b20(alStack_78);
    FUN_1027a48fc(alStack_78,auStack_a0);
    puVar2 = &UNK_11054b798;
    func_0x000107c613fc(&UNK_11054b798,0x48,7);
    FUN_1027a48fc(auStack_a0,puVar2 + 0x10);
    *(code **)(puVar2 + 0x38) = pcVar8;
    *(undefined8 *)(puVar2 + 0x40) = uVar6;
    func_0x0001000285a8(0x112ebe9d8,&UNK_10dadad88);
    func_0x000107c613fc();
    func_0x0001027a4398(pcVar8,uVar6);
    pcVar3 = FUN_1027a4914;
    func_0x0001000bdd8c(FUN_1027a4914,puVar2);
    pcVar8 = pcVar3;
    func_0x0001003a5b88();
    func_0x000107c61574(pcVar3);
  }
  pcVar9 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *(ulong *)param_1) + 0x80);
  pcVar3 = pcVar8;
  func_0x000107c61174(pcVar8);
  (*pcVar9)(pcVar8,0,1);
  func_0x000107c61170(pcVar3);
  func_0x000100083b20(alStack_78);
  lVar1 = alStack_78[0];
  lVar4 = alStack_78[0];
  func_0x000107c3ed38(alStack_78[0]);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  func_0x000100083b20(alStack_78);
  lVar1 = alStack_78[0];
  lVar5 = alStack_78[0];
  func_0x000107c4e6e8(alStack_78[0]);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(alStack_78);
  uVar6 = *(undefined8 *)(alStack_78[0] + _DAT_1130806d8);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(alStack_78[0]);
  uVar7 = 0;
  FUN_1027a4970(0);
  func_0x000107c614e8();
  func_0x000107c615f0(lVar4);
  func_0x000107c610f8(uVar7);
  func_0x000107c476e0();
  func_0x000107c61170(pcVar8);
  func_0x000107c615ec(lVar4,2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(pcVar3);
  return uVar7;
}



/* Entry: 1027a48a0; end: 1027a48fb; -[_TtC39MemoriesCameraRollProvidingServicesImpl33MemoriesCameraRollProviderBuilder buildWithConfig:] */

void FUN_1027a48a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1027a45fc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027a48fc; end: 1027a4913;  */

undefined8 * FUN_1027a48fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1027a4914; end: 1027a496f;  */

void FUN_1027a4914(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  func_0x0001027a5364(uVar4,uVar2,uVar1,uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 1027a4970; end: 1027a49e7;  */

void FUN_1027a4970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c66b0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebe9e0 = puVar1;
  return;
}



/* Entry: 1027a49e8; end: 1027a4a3f; -[_TtC39MemoriesCameraRollProvidingServicesImpl33MemoriesCameraRollProviderBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027a4a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027a4a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a4a08) */
/* WARNING: Removing unreachable block (ram,0x0001027a4a28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a49e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebe9b8));
  return;
}



/* Entry: 1027a4a40; end: 1027a4a4f;  */

undefined1  [16] FUN_1027a4a40(void)

{
  return ZEXT816(0x11054b7c0);
}



/* Entry: 1027a4a50; end: 1027a4a6f;  */

void FUN_1027a4a50(void)

{
  func_0x000107c61168(&PTR_PTR_112860f20);
  return;
}



/* Entry: 1027a4a70; end: 1027a4adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4a70(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100326780();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebea18) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027a4adc; end: 1027a4ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4adc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100326780();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebea18) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027a4ae4; end: 1027a4b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4ae4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebea18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a4b30; end: 1027a4b8f; -[_TtC38MemoriesCameraRollProvidingServicesAPI35MemoriesCameraRollProvidingServices init] */

void FUN_1027a4b30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesCameraRollProvidingServicesAPI.MemoriesCameraRollProvidingServices",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a4b5c);
  (*pcVar1)();
}



/* Entry: 1027a4b90; end: 1027a4b9f;  */

undefined1  [16] FUN_1027a4b90(void)

{
  return ZEXT816(0x11054b8b8);
}



/* Entry: 1027a4ba0; end: 1027a4baf; -[_TtC38MemoriesCameraRollProvidingServicesAPI35MemoriesCameraRollProvidingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebea18));
  return;
}



/* Entry: 1027a4bb0; end: 1027a4bff;  */

void FUN_1027a4bb0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ebea48 != 0) {
    return;
  }
  puVar1 = &UNK_11054b9b0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ebea48 = param_1;
  return;
}



/* Entry: 1027a4c00; end: 1027a4cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4c00(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ebea50) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ebea58) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ebea60) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebea68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(puVar1 + 2) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebea70) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a4cb4; end: 1027a4d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4cb4(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112ebea50) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ebea58) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112ebea60) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebea68);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(puVar1 + 2) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebea70) = param_7;
  func_0x0001027a4d28();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a4d48; end: 1027a4e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4d48(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112ebea50);
  uVar3 = *(undefined1 *)(unaff_x20 + _DAT_112ebea58);
  uVar4 = *(undefined1 *)(unaff_x20 + _DAT_112ebea60);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ebea70);
  lVar6 = param_1;
  func_0x0001027a4d28();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar7 + _DAT_112ebea50) = uVar2;
  *(undefined1 *)(lVar7 + _DAT_112ebea58) = uVar3;
  *(undefined1 *)(lVar7 + _DAT_112ebea60) = uVar4;
  plVar1 = (long *)(lVar7 + _DAT_112ebea68);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(char *)(plVar1 + 2) = (char)param_3;
  *(undefined8 *)(lVar7 + _DAT_112ebea70) = uVar8;
  FUN_1027a4370(param_1,param_2,param_3);
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61174(uVar8);
  func_0x000107c61154(&lStack_70,puVar5);
  return;
}



/* Entry: 1027a4e44; end: 1027a4e9f; -[SCMemoriesCameraRollPaginatorConfiguration init] */

void FUN_1027a4e44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesCameraRollPaginationServicesAPI.MemoriesCameraRollPaginatorConfiguration"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a4e70);
  (*pcVar1)();
}



/* Entry: 1027a4ea0; end: 1027a4edf; -[SCMemoriesCameraRollPaginatorConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a4ea0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebea68);
  func_0x0001027a43b8(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebea70));
  return;
}



/* Entry: 1027a4ee0; end: 1027a5087;  */

void FUN_1027a4ee0(long *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *param_1;
  cVar2 = (char)param_1[2];
  if (cVar2 == '\x02') {
    if (lVar3 == 1) {
      return;
    }
    bVar1 = lVar3 == 0;
    lVar3 = param_1[1];
    if (bVar1) {
      return;
    }
  }
  else {
    if (cVar2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    if (cVar2 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 1027a5088; end: 1027a50eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5088(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebeaa0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebeaa8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a50ec; end: 1027a5153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a50ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ebeaa0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebeaa8) = param_2;
  func_0x0001027a5134();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a5154; end: 1027a51b7; -[MemoriesPickerCameraRollPaginatorConfiguration initWithSource:cameraRollConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112ebeaa0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ebeaa8) = param_4;
  lVar2 = param_1;
  func_0x0001027a5134();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1027a51b8; end: 1027a5213; -[MemoriesPickerCameraRollPaginatorConfiguration init] */

void FUN_1027a51b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesCameraRollPaginationServicesAPI.MemoriesPickerCameraRollPaginatorConfiguration"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a51e4);
  (*pcVar1)();
}



/* Entry: 1027a5214; end: 1027a5223; -[MemoriesPickerCameraRollPaginatorConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebeaa8));
  return;
}



/* Entry: 1027a5224; end: 1027a528f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5224(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010033e008();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebeae0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027a5290; end: 1027a5297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5290(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010033e008();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebeae0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027a5298; end: 1027a52e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5298(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebeae0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a52e4; end: 1027a5343; -[_TtC39MemoriesCameraRollPaginationServicesAPI36MemoriesCameraRollPaginationServices init] */

void FUN_1027a52e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesCameraRollPaginationServicesAPI.MemoriesCameraRollPaginationServices"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a5310);
  (*pcVar1)();
}



/* Entry: 1027a5344; end: 1027a5353;  */

undefined1  [16] FUN_1027a5344(void)

{
  return ZEXT816(0x11054ba60);
}



/* Entry: 1027a5354; end: 1027a5383; -[_TtC39MemoriesCameraRollPaginationServicesAPI36MemoriesCameraRollPaginationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebeae0));
  return;
}



/* Entry: 1027a5384; end: 1027a53ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5384(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010021966c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebeb18) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027a53f0; end: 1027a53f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a53f0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010021966c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebeb18) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027a53f8; end: 1027a5443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a53f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebeb18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a5444; end: 1027a54a3; -[_TtC46MemoriesPhotoLibraryFetcherBuildingServicesAPI43MemoriesPhotoLibraryFetcherBuildingServices init] */

void FUN_1027a5444(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPhotoLibraryFetcherBuildingServicesAPI.MemoriesPhotoLibraryFetcherBuildingServices"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a5470);
  (*pcVar1)();
}



/* Entry: 1027a54a4; end: 1027a54b3;  */

undefined1  [16] FUN_1027a54a4(void)

{
  return ZEXT816(0x11054bb28);
}



/* Entry: 1027a54b4; end: 1027a54c3; -[_TtC46MemoriesPhotoLibraryFetcherBuildingServicesAPI43MemoriesPhotoLibraryFetcherBuildingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a54b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebeb18));
  return;
}



/* Entry: 1027a54c4; end: 1027a580f;  */

void FUN_1027a54c4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((uVar2 != 0) && ((int)uVar1 + -1 < 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
    return;
  }
  return;
}



/* Entry: 1027a5810; end: 1027a581b; -[SCMemoriesFeaturedStoryAdapter id2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5810(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebeb48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ebeb48))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a581c; end: 1027a5827; -[SCMemoriesFeaturedStoryAdapter setId2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a581c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebeb48);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a5828; end: 1027a5833; -[SCMemoriesFeaturedStoryAdapter title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5828(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebeb50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ebeb50))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a5834; end: 1027a583f; -[SCMemoriesFeaturedStoryAdapter setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebeb50);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a5840; end: 1027a584b; -[SCMemoriesFeaturedStoryAdapter subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5840(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebeb58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ebeb58))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


