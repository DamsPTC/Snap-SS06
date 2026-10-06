/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101291d30; end: 101291e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101291d30(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  func_0x000107c61614(auStack_48,param_3);
  if (param_2 != 0) {
    func_0x000107c5de64(param_2);
    func_0x000107c61180();
    func_0x000107c61428(auStack_48,auStack_60,0,0);
    puVar2 = auStack_48;
    func_0x000107c61618();
    lVar1 = _DAT_112d6df68;
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c61428(puVar2 + _DAT_112d6df68,auStack_78,0,0);
      puVar3 = puVar2 + lVar1;
      func_0x000107c61618();
      func_0x000107c61170(puVar2);
      puVar2 = auStack_48;
      if (puVar3 == (undefined1 *)0x0) {
        func_0x000107c61610();
        func_0x000107c61170(param_2);
        return;
      }
      func_0x000107c61618();
      if (puVar2 != (undefined1 *)0x0) {
        uVar4 = *(undefined8 *)(puVar2 + _DAT_112d6df98);
        func_0x000107c61174(uVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c4dd0c(uVar4);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(param_2);
  }
  func_0x000107c61610(auStack_48);
  return;
}



/* Entry: 101291e5c; end: 101291e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101291e5c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  func_0x000107c61614(auStack_48,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 != 0) {
    func_0x000107c5de64(param_2);
    func_0x000107c61180();
    func_0x000107c61428(auStack_48,auStack_60,0,0);
    puVar2 = auStack_48;
    func_0x000107c61618();
    lVar1 = _DAT_112d6df68;
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c61428(puVar2 + _DAT_112d6df68,auStack_78,0,0);
      puVar3 = puVar2 + lVar1;
      func_0x000107c61618();
      func_0x000107c61170(puVar2);
      puVar2 = auStack_48;
      if (puVar3 == (undefined1 *)0x0) {
        func_0x000107c61610();
        func_0x000107c61170(param_2);
        return;
      }
      func_0x000107c61618();
      if (puVar2 != (undefined1 *)0x0) {
        uVar4 = *(undefined8 *)(puVar2 + _DAT_112d6df98);
        func_0x000107c61174(uVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c4dd0c(uVar4);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(param_2);
  }
  func_0x000107c61610(auStack_48);
  return;
}



/* Entry: 101291e64; end: 101291efb;  */

void FUN_101291e64(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  
  func_0x000107c61614(auStack_28);
  func_0x000107c61428(auStack_28,auStack_40,0,0);
  puVar1 = auStack_28;
  func_0x000107c61618();
  if (puVar1 != (undefined1 *)0x0) {
    if (param_1 == 0) {
      func_0x000107c61610(auStack_28);
      func_0x000107c61170(puVar1);
      return;
    }
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    FUN_1012942f8();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61610(auStack_28);
  return;
}



/* Entry: 101291efc; end: 101291f03;  */

void FUN_101291efc(long param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  
  func_0x000107c61614(auStack_28,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61428(auStack_28,auStack_40,0,0);
  puVar1 = auStack_28;
  func_0x000107c61618();
  if (puVar1 != (undefined1 *)0x0) {
    if (param_1 == 0) {
      func_0x000107c61610(auStack_28);
      func_0x000107c61170(puVar1);
      return;
    }
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    FUN_1012942f8();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61610(auStack_28);
  return;
}



/* Entry: 101291f04; end: 101292017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101291f04(long param_1)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ff20c0);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c41864(uVar4);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x78))();
    func_0x000107c61170(puVar3);
    if (param_1 != 0) {
      func_0x000107c4f720(param_1);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 101292018; end: 10129203f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101292018(void)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ff20c0);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c41864(uVar4);
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar3 = *(ulong **)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x78))();
    func_0x000107c61170(puVar3);
    if (lVar1 != 0) {
      func_0x000107c4f720(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101292040; end: 1012920c7;  */

void FUN_101292040(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x80) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1012920c8;
    plVar1[7] = *(long *)(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1012923d0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001012920c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012920c8; end: 101292133;  */

void FUN_1012920c8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_101292134;
  }
  else {
    pcVar1 = (code *)0x101292384;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101292134; end: 10129219b;  */

void FUN_101292134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10129219c,uVar1,uVar2);
  return;
}



/* Entry: 10129219c; end: 101292343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129219c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  long *plVar13;
  code *pcVar14;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  puVar5 = *(ulong **)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  puVar8 = &UNK_11039b590;
  func_0x000107c613fc(&UNK_11039b590,0x30,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar2;
  *(undefined8 *)(puVar8 + 0x18) = uVar12;
  *(undefined8 *)(puVar8 + 0x20) = uVar4;
  *(undefined8 *)(puVar8 + 0x28) = uVar9;
  pcVar14 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x78);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar12);
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(uVar9);
  (*pcVar14)();
  lVar10 = 0;
  FUN_1012939cc();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar7 = _DAT_112d6de88;
  func_0x000107c61614(lVar11 + _DAT_112d6de88,0);
  puVar1 = (undefined8 *)(lVar11 + _DAT_112d6de80);
  *puVar1 = FUN_101293704;
  puVar1[1] = puVar8;
  func_0x000107c61604(lVar11 + lVar7,uVar9);
  plVar13 = (long *)(unaff_x22 + 0x40);
  *plVar13 = lVar11;
  *(long *)(unaff_x22 + 0x48) = lVar10;
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c6157c(puVar8);
  func_0x000107c61154(plVar13,puVar6,0,0);
  func_0x000107c615e8(uVar9);
  func_0x000107c61574(puVar8);
  lVar7 = _DAT_112d6df68;
  func_0x000107c61428(lVar3 + _DAT_112d6df68,unaff_x22 + 0x28,1,0);
  func_0x000107c61604(lVar3 + lVar7,plVar13);
  func_0x000107c5677c(plVar13);
  func_0x000107c3e2c0(*(undefined8 *)((long)puVar5 + _DAT_112ff20c0));
  func_0x000107c61170(plVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101292344,0,0);
  return;
}



/* Entry: 101292344; end: 1012923b7;  */

void FUN_101292344(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101292380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012923b8; end: 1012923cf;  */

void FUN_1012923b8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012923d0,0,0);
  return;
}



/* Entry: 1012923d0; end: 10129247f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012923d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(*(long *)(lVar5 + 0x68) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  lVar6 = lVar5;
  FUN_101293324();
  *(long *)(unaff_x22 + 0x50) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  FUN_101293270();
  *(long *)(unaff_x22 + 0x60) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101292480;
  lVar6 = *(long *)(unaff_x22 + 0x38);
  plVar3[5] = unaff_x22 + 0x10;
  plVar3[6] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012927c0,0,0);
  return;
}



/* Entry: 101292480; end: 1012924df;  */

void FUN_101292480(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar1 + 0x28);
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012924e0,0,0);
  return;
}



/* Entry: 1012924e0; end: 101292667;  */

void FUN_1012924e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
               **(ulong **)(*(long *)(unaff_x22 + 0x38) + 0x10)) + 0x90))();
  puVar7 = PTR_PTR_1126a6868;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar8,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fadc(uVar12,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fadc(uVar9,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fadc(uVar10,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fadc(uVar11,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c491cc(puVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101292664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar7);
  return;
}



/* Entry: 101292668; end: 1012927a7;  */

undefined * FUN_101292668(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 in_x3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a6860;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
  }
  else {
    puVar3 = &UNK_11039b5b8;
    func_0x000107c613fc(&UNK_11039b5b8,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = in_x3;
    uStack_50 = 0x101293710;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x100f11710;
    puStack_58 = &UNK_11039b5d0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(in_x3);
    func_0x000107c61574(puVar3);
    func_0x00010129373c(0,0x112d6ca40,&PTR_PTR_1126b3e88);
    func_0x000107c614e8();
    func_0x000107c4fcd8(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar2);
  }
  return puVar1;
}



/* Entry: 1012927a8; end: 1012927bf;  */

void FUN_1012927a8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012927c0,0,0);
  return;
}



/* Entry: 1012927c0; end: 101292bab;  */

void FUN_1012927c0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x48);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  func_0x000107c3e9c0();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = param_2;
  if (lVar5 == 0) {
LAB_101292870:
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0xc0);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x40) = lVar5;
    if (lVar5 != 0) {
      lVar4 = 0;
      func_0x000101294020();
      func_0x000107c61534();
      *(long *)(unaff_x22 + 0x48) = lVar4;
      *(long *)(lVar4 + 0x10) = lVar5;
      plVar9 = (long *)0xa0;
      func_0x000107c615f0(lVar5);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_101292bac;
      plVar9[0x10] = lVar4;
      pcVar12 = FUN_101293a58;
      goto LAB_107c615e0;
    }
    param_2 = 0xe000000000000000;
    lVar4 = 0;
  }
  else {
    lVar4 = lVar5;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar7 = param_2;
    if (lVar4 == 0) goto LAB_101292870;
    lVar5 = lVar4;
    func_0x000107c518ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar7 = param_2;
    if (lVar5 == 0) goto LAB_101292870;
    lVar4 = lVar5;
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c61170(lVar5);
  }
  *(long *)(unaff_x22 + 0x68) = lVar4;
  *(ulong *)(unaff_x22 + 0x70) = param_2;
  uVar6 = *(ulong *)(unaff_x22 + 0x38);
  func_0x000107c3e9c0();
  func_0x000107c61180();
  uVar14 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (uVar14 == 0) {
LAB_1012929dc:
    plVar9 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar9;
    pcVar12 = FUN_101292f84;
  }
  else {
    uVar6 = uVar14;
    func_0x000107c41050();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x78) = uVar6;
    func_0x000107c61170(uVar14);
    if (uVar6 == 0) goto LAB_1012929dc;
    uVar14 = uVar6;
    func_0x000107c5d80c();
    uVar13 = uVar7;
    if (uVar14 == 1) {
      uVar14 = uVar6;
      func_0x000107c3e5dc();
      func_0x000107c61180();
      uVar13 = uVar7;
      if (uVar14 == 0) goto LAB_101292a18;
      uVar15 = uVar14;
      func_0x000107c5faec();
      uVar13 = uVar7;
      func_0x000107c61170(uVar14);
      func_0x000107c6142c(uVar7);
      uVar14 = uVar15 & 0xffffffffffff;
      if ((uVar7 & 0x2000000000000000) != 0) {
        uVar14 = uVar7 >> 0x38 & 0xf;
      }
      if (uVar14 == 0) goto LAB_101292a18;
      uVar7 = *(ulong *)(*(long *)(unaff_x22 + 0x30) + 200);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar7 == 0) goto LAB_101292a18;
      uVar14 = uVar7;
      func_0x000107c4a724();
      func_0x000107c615e8(uVar7);
    }
    else {
LAB_101292a18:
      uVar14 = 0;
    }
    uVar7 = uVar6;
    func_0x000107c3e5b4();
    func_0x000107c61180();
    if (uVar7 == 0) {
      uVar15 = uVar13;
      if ((uVar14 & 1) != 0) goto LAB_101292a9c;
    }
    else {
      uVar8 = uVar7;
      func_0x000107c5faec();
      uVar15 = uVar13;
      func_0x000107c61170(uVar7);
      func_0x000107c6142c(uVar13);
      if ((int)uVar14 != 0) {
LAB_101292a9c:
        uVar7 = uVar6;
        func_0x000107c3e5dc();
        func_0x000107c61180();
        if (uVar7 == 0) {
          uVar14 = 0;
          uVar15 = 0xe000000000000000;
        }
        else {
          uVar14 = uVar7;
          func_0x000107c5faec();
          func_0x000107c61170(uVar7);
        }
        puVar10 = PTR_PTR_1126b3c90;
        func_0x000107c610f8();
        uVar7 = uVar15;
        func_0x000107c5fadc(uVar14);
        func_0x000107c6142c(uVar15);
LAB_101292b5c:
        func_0x000107c48f04();
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar6);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
        puVar2 = *(undefined8 **)(unaff_x22 + 0x28);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
        FUN_101293028();
        *puVar2 = uVar11;
        puVar2[1] = uVar7;
        puVar2[2] = uVar1;
        puVar2[3] = uVar3;
        puVar2[4] = puVar10;
                    /* WARNING: Could not recover jumptable at 0x000101292ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      uVar7 = uVar8 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar7 = uVar13 >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        uVar7 = uVar6;
        func_0x000107c3e5b4();
        func_0x000107c61180();
        if (uVar7 == 0) {
          uVar14 = 0;
          uVar15 = 0xe000000000000000;
        }
        else {
          uVar14 = uVar7;
          func_0x000107c5faec();
          func_0x000107c61170(uVar7);
        }
        puVar10 = PTR_PTR_1126b3c90;
        func_0x000107c610f8();
        uVar7 = uVar15;
        func_0x000107c5fadc(uVar14);
        func_0x000107c6142c(uVar15);
        goto LAB_101292b5c;
      }
    }
    plVar9 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar9;
    pcVar12 = FUN_101292ed8;
  }
  *plVar9 = unaff_x22;
  plVar9[1] = (long)pcVar12;
  plVar9[5] = *(long *)(unaff_x22 + 0x30);
  pcVar12 = FUN_1012930f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar12,0,0);
  return;
}



/* Entry: 101292bac; end: 101292bfb;  */

void FUN_101292bac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  *(undefined8 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101292bfc,0,0);
  return;
}



/* Entry: 101292bfc; end: 101292ed7;  */

void FUN_101292bfc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  long unaff_x22;
  
  uVar10 = 2;
  func_0x000107c615ec(*(undefined8 *)(unaff_x22 + 0x40));
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(ulong *)(unaff_x22 + 0x38);
  func_0x000107c3e9c0();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar5 != 0) {
    uVar4 = uVar5;
    func_0x000107c41050();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x78) = uVar4;
    func_0x000107c61170(uVar5);
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5d80c();
      uVar11 = uVar10;
      if (uVar5 == 1) {
        uVar5 = uVar4;
        func_0x000107c3e5dc();
        func_0x000107c61180();
        uVar11 = uVar10;
        if (uVar5 == 0) goto LAB_101292d44;
        uVar13 = uVar5;
        func_0x000107c5faec();
        uVar11 = uVar10;
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar10);
        uVar5 = uVar13 & 0xffffffffffff;
        if ((uVar10 & 0x2000000000000000) != 0) {
          uVar5 = uVar10 >> 0x38 & 0xf;
        }
        if (uVar5 == 0) goto LAB_101292d44;
        uVar5 = *(ulong *)(*(long *)(unaff_x22 + 0x30) + 200);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (uVar5 == 0) goto LAB_101292d44;
        uVar10 = uVar5;
        func_0x000107c4a724();
        func_0x000107c615e8(uVar5);
      }
      else {
LAB_101292d44:
        uVar10 = 0;
      }
      uVar5 = uVar4;
      func_0x000107c3e5b4();
      func_0x000107c61180();
      if (uVar5 == 0) {
        uVar13 = uVar11;
        if ((uVar10 & 1) != 0) goto LAB_101292dc8;
      }
      else {
        uVar6 = uVar5;
        func_0x000107c5faec();
        uVar13 = uVar11;
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar11);
        if ((int)uVar10 != 0) {
LAB_101292dc8:
          uVar5 = uVar4;
          func_0x000107c3e5dc();
          func_0x000107c61180();
          if (uVar5 == 0) {
            uVar10 = 0;
            uVar13 = 0xe000000000000000;
          }
          else {
            uVar10 = uVar5;
            func_0x000107c5faec();
            func_0x000107c61170(uVar5);
          }
          puVar8 = PTR_PTR_1126b3c90;
          func_0x000107c610f8();
          uVar5 = uVar13;
          func_0x000107c5fadc(uVar10);
          func_0x000107c6142c(uVar13);
LAB_101292e88:
          func_0x000107c48f04();
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar4);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
          uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
          puVar2 = *(undefined8 **)(unaff_x22 + 0x28);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
          FUN_101293028();
          *puVar2 = uVar9;
          puVar2[1] = uVar5;
          puVar2[2] = uVar1;
          puVar2[3] = uVar3;
          puVar2[4] = puVar8;
                    /* WARNING: Could not recover jumptable at 0x000101292ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        uVar5 = uVar6 & 0xffffffffffff;
        if ((uVar11 & 0x2000000000000000) != 0) {
          uVar5 = uVar11 >> 0x38 & 0xf;
        }
        if (uVar5 != 0) {
          uVar5 = uVar4;
          func_0x000107c3e5b4();
          func_0x000107c61180();
          if (uVar5 == 0) {
            uVar10 = 0;
            uVar13 = 0xe000000000000000;
          }
          else {
            uVar10 = uVar5;
            func_0x000107c5faec();
            func_0x000107c61170(uVar5);
          }
          puVar8 = PTR_PTR_1126b3c90;
          func_0x000107c610f8();
          uVar5 = uVar13;
          func_0x000107c5fadc(uVar10);
          func_0x000107c6142c(uVar13);
          goto LAB_101292e88;
        }
      }
      plVar7 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x80) = plVar7;
      pcVar12 = FUN_101292ed8;
      goto LAB_101292d20;
    }
  }
  plVar7 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  pcVar12 = FUN_101292f84;
LAB_101292d20:
  *plVar7 = unaff_x22;
  plVar7[1] = (long)pcVar12;
  plVar7[5] = *(long *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012930f4,0,0);
  return;
}



/* Entry: 101292ed8; end: 101292f27;  */

void FUN_101292ed8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101292f28,0,0);
  return;
}



/* Entry: 101292f28; end: 101292f83;  */

void FUN_101292f28(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x78));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_101293028();
  *puVar1 = uVar2;
  puVar1[1] = param_2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[4] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000101292f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101292f84; end: 101292fd3;  */

void FUN_101292f84(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101292fd4,0,0);
  return;
}



/* Entry: 101292fd4; end: 101293027;  */

void FUN_101292fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_101293028();
  *puVar1 = uVar2;
  puVar1[1] = param_2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[4] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000101293024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101293028; end: 1012930db;  */

undefined1  [16] FUN_101293028(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x000107c3e980();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 == 0) {
      uVar3 = 0;
      lVar2 = -0x2000000000000000;
    }
    else {
      uStack_30 = 0;
      lStack_28 = 0;
      func_0x000107c5fae8(lVar1,&uStack_30);
      func_0x000107c61170(lVar1);
      uVar3 = 0;
      if (lStack_28 != 0) {
        uVar3 = uStack_30;
      }
      lVar2 = -0x2000000000000000;
      if (lStack_28 != 0) {
        lVar2 = lStack_28;
      }
    }
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 1012930dc; end: 1012930f3;  */

void FUN_1012930dc(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012930f4,0,0);
  return;
}



/* Entry: 1012930f4; end: 1012931e7;  */

void FUN_1012930f4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x28) + 0xc0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  if (lVar1 != 0) {
    lVar2 = 0;
    func_0x000101294020();
    func_0x000107c61534();
    *(long *)(unaff_x22 + 0x38) = lVar2;
    *(long *)(lVar2 + 0x10) = lVar1;
    plVar5 = (long *)0xa0;
    func_0x000107c615f0(lVar1);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1012931e8;
    plVar5[0x10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101293d04,0,0);
    return;
  }
  puVar3 = PTR_PTR_1126b3c90;
  func_0x000107c610f8(PTR_PTR_1126b3c90);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c48f04(puVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001012931e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 1012931e8; end: 10129326f;  */

void FUN_1012931e8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101293238,0,0);
  return;
}



/* Entry: 101293270; end: 101293323;  */

undefined1  [16] FUN_101293270(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 == 0) {
      uVar3 = 0;
      lVar2 = -0x2000000000000000;
    }
    else {
      uStack_30 = 0;
      lStack_28 = 0;
      func_0x000107c5fae8(lVar1,&uStack_30);
      func_0x000107c61170(lVar1);
      uVar3 = 0;
      if (lStack_28 != 0) {
        uVar3 = uStack_30;
      }
      lVar2 = -0x2000000000000000;
      if (lStack_28 != 0) {
        lVar2 = lStack_28;
      }
    }
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 101293324; end: 1012933db;  */

/* WARNING: Removing unreachable block (ram,0x0001012932f4) */
/* WARNING: Removing unreachable block (ram,0x0001012932f8) */

undefined1  [16] FUN_101293324(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x000107c4213c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      uStack_40 = 0;
      lStack_38 = 0;
      func_0x000107c5fae8(lVar1,&uStack_40);
      func_0x000107c61170(lVar1);
      if (lStack_38 != 0) {
        auVar3._8_8_ = lStack_38;
        auVar3._0_8_ = uStack_40;
        return auVar3;
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c5fae8(lVar1,&stack0xffffffffffffffd0);
      func_0x000107c61170(lVar1);
    }
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1012933dc; end: 1012934cf;  */

void FUN_1012933dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 1012934d0; end: 1012934ef;  */

void FUN_1012934d0(void)

{
  FUN_101291564();
  return;
}



/* Entry: 1012934f0; end: 1012934f7;  */

undefined8 FUN_1012934f0(void)

{
  return 0;
}



/* Entry: 1012934f8; end: 10129355f;  */

void FUN_1012934f8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = uVar4;
  func_0x000107c6157c(uVar4);
  (*pcVar1)();
  func_0x000107c61574(uVar4);
  uVar3 = 0;
  func_0x00010129373c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  func_0x000107c5fc48(uVar2,uVar3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 101293560; end: 10129357b;  */

void FUN_101293560(long param_1,long param_2)

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



/* Entry: 10129357c; end: 10129361b;  */

void FUN_10129357c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 10129361c; end: 1012936a7;  */

void FUN_10129361c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1012936a8;
  plVar7[0xe] = lVar3;
  plVar7[0xf] = lVar6;
  plVar7[0xc] = lVar2;
  plVar7[0xd] = lVar5;
  plVar7[10] = lVar1;
  plVar7[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101292040,0,0);
  return;
}



/* Entry: 1012936a8; end: 101293703;  */

void FUN_1012936a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012936e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101293704; end: 10129370f;  */

undefined * FUN_101293704(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar5 = &puStack_70;
  puVar2 = PTR_PTR_1126a6860;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
  }
  else {
    puVar4 = &UNK_11039b5b8;
    func_0x000107c613fc(&UNK_11039b5b8,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar1;
    uStack_50 = 0x101293710;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x100f11710;
    puStack_58 = &UNK_11039b5d0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(uVar1);
    func_0x000107c61574(puVar4);
    func_0x00010129373c(0,0x112d6ca40,&PTR_PTR_1126b3e88);
    func_0x000107c614e8();
    func_0x000107c4fcd8(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(puVar3);
  }
  return puVar2;
}



/* Entry: 101293710; end: 10129377b;  */

void FUN_101293710(void)

{
  func_0x000107c610f8(PTR_PTR_1126b3e88);
                    /* WARNING: Could not recover jumptable at 0x00010c04a0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10129377c; end: 10129379b;  */

void FUN_10129377c(long param_1,long param_2)

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



/* Entry: 10129379c; end: 101293807; -[_TtC10QRCodeCard24QRCodeCardViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129379c(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112d6de88,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QRCodeCard/QRCodeCardViewController.swift",0x29,2,0x17,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101293808);
  (*pcVar1)();
}



/* Entry: 101293808; end: 101293903; -[_TtC10QRCodeCard24QRCodeCardViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101293808(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  lVar2 = param_1;
  FUN_1012939cc();
  puVar1 = PTR_s_loadView_112604be0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  (**(code **)(param_1 + _DAT_112d6de80))();
  func_0x000107c5a568(param_1);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101293904; end: 101293933; -[_TtC10QRCodeCard24QRCodeCardViewController viewDidDisappear:] */

void FUN_101293904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101293888(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101293934; end: 10129398f; -[_TtC10QRCodeCard24QRCodeCardViewController initWithNibName:bundle:] */

void FUN_101293934(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QRCodeCard.QRCodeCardViewController",0x23,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101293960);
  (*pcVar1)();
}



/* Entry: 101293990; end: 1012939cb; -[_TtC10QRCodeCard24QRCodeCardViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101293990(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6de80 + 8));
  param_1 = param_1 + _DAT_112d6de88;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1012939cc; end: 1012939eb;  */

void FUN_1012939cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1138);
  return;
}



/* Entry: 1012939ec; end: 101293a3f;  */

undefined8 FUN_1012939ec(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101293a40; end: 101293a57;  */

void FUN_101293a40(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101293a58,0,0);
  return;
}



/* Entry: 101293a58; end: 101293adb;  */

void FUN_101293a58(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x80) + 0x10);
  func_0x000107c41604();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  lVar3 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101293adc;
  plVar2[7] = lVar1;
  plVar2[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_103968380,0,0);
  return;
}



/* Entry: 101293adc; end: 101293b2b;  */

void FUN_101293adc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101293b2c,0,0);
  return;
}



/* Entry: 101293b2c; end: 101293ca7;  */

void FUN_101293b2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x98);
  if (lVar6 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
    uVar5 = 0xe000000000000000;
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar8 = (undefined8 *)(unaff_x22 + 0x70);
    *puVar8 = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xe000000000000000;
    puVar1 = &UNK_11039b610;
    func_0x000107c613fc(&UNK_11039b610,0x18,7);
    *(undefined8 **)(puVar1 + 0x10) = puVar8;
    puVar2 = &UNK_11039b638;
    func_0x000107c613fc(&UNK_11039b638,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x10129405c;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(code **)(unaff_x22 + 0x30) = FUN_101293ca8;
    *(undefined **)(unaff_x22 + 0x38) = puVar2;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puVar3 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x10103b958;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11039b650;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    puVar7 = (undefined8 *)(unaff_x22 + 0x40);
    *puVar7 = puVar2;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x101293ce4;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x100e27b38;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_11039b678;
    func_0x000107c60bc4(puVar7);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c4c754(lVar6);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c60bd0(puVar7);
    func_0x000107c60bd0(puVar3);
    uVar4 = *puVar8;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61574(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101293ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5);
  return;
}



/* Entry: 101293ca8; end: 101293cc7;  */

void FUN_101293ca8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101293cc8; end: 101293d03;  */

void FUN_101293cc8(long param_1,long param_2)

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



/* Entry: 101293d04; end: 101293d8f;  */

void FUN_101293d04(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x80) + 0x10);
  func_0x000107c41560();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = 0xe000000000000000;
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  lVar3 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101293d90;
  plVar2[7] = lVar1;
  plVar2[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_103968380,0,0);
  return;
}



/* Entry: 101293d90; end: 101293ddf;  */

void FUN_101293d90(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101293de0,0,0);
  return;
}



/* Entry: 101293de0; end: 101293f9f;  */

void FUN_101293de0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0x98);
  if (lVar6 == 0) {
    pcVar4 = (code *)0x0;
    puVar5 = (undefined *)0x0;
    uVar7 = 0xe000000000000000;
    uVar3 = 0;
  }
  else {
    puVar5 = &UNK_11039b6b0;
    func_0x000107c613fc(&UNK_11039b6b0,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x22 + 0x70;
    puVar1 = &UNK_11039b6d8;
    func_0x000107c613fc(&UNK_11039b6d8,0x20,7);
    pcVar4 = FUN_101293fe4;
    *(code **)(puVar1 + 0x10) = FUN_101293fe4;
    *(undefined **)(puVar1 + 0x18) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x101294058;
    *(undefined **)(unaff_x22 + 0x38) = puVar1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puVar2 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x10103b958;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11039b6f0;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    puVar8 = (undefined8 *)(unaff_x22 + 0x40);
    *puVar8 = puVar1;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x101293ce8;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x100e27b38;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_11039b718;
    func_0x000107c60bc4(puVar8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c4c754(lVar6);
    func_0x000107c60bd0(puVar8);
    func_0x000107c60bd0(puVar2);
    func_0x000107c61170(lVar6);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1 = PTR_PTR_1126b3c90;
  func_0x000107c610f8(PTR_PTR_1126b3c90);
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c48f04(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x78));
  FUN_101293fa0(pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x000101293f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar1);
  return;
}



/* Entry: 101293fa0; end: 101293faf;  */

void FUN_101293fa0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101293fb0; end: 101293fe3;  */

void FUN_101293fb0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    plVar1 = param_2;
    func_0x000107c5faec();
    lVar2 = param_2[1];
    *param_2 = param_1;
    param_2[1] = (long)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  return;
}



/* Entry: 101293fe4; end: 10129403f;  */

void FUN_101293fe4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101293fb0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101294040; end: 10129405f;  */

void FUN_101294040(long param_1,long param_2)

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



/* Entry: 101294060; end: 1012942f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101294060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d6df68,0);
  lVar1 = _DAT_112d6df70;
  *(undefined8 *)(unaff_x20 + _DAT_112d6df70) = 0;
  lVar2 = _DAT_112d6df78;
  *(undefined8 *)(unaff_x20 + _DAT_112d6df78) = 0;
  lVar3 = _DAT_112d6df80;
  *(undefined8 *)(unaff_x20 + _DAT_112d6df80) = 0;
  lVar4 = _DAT_112d6df88;
  uVar5 = 0;
  func_0x000103a94470();
  func_0x000107c613fc();
  func_0x000103a942e4();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d6df90) = param_11;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c6142c(uVar5);
  puVar6 = PTR_PTR_1126b3f18;
  func_0x000107c610f8();
  func_0x000107c487d4();
  *(undefined **)(unaff_x20 + _DAT_112d6df98) = puVar6;
  puVar7 = auStack_78;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c615e8(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  return puVar7;
}



/* Entry: 1012942f8; end: 101294507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012942f8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_78 [24];
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450ac(param_1);
  func_0x000107c61180();
  lVar1 = _DAT_112d6df68;
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d6df68,auStack_78,0,0);
    puVar3 = (undefined *)(unaff_x20 + lVar1);
    func_0x000107c61618();
    if (puVar3 != (undefined *)0x0) {
      uVar4 = 0;
      func_0x000103a94328(FUN_101294508,0);
      if ((uVar4 & 1) != 0) {
        puVar7 = *(undefined **)(unaff_x20 + _DAT_112d6df98);
        puVar8 = *(undefined **)(unaff_x20 + _DAT_112d6df80);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar8 != (undefined *)0x0) {
          puVar6 = puVar8;
        }
        uVar5 = 0;
        FUN_101294db8(0,0x112d60fb0,&PTR_PTR_1126b3568);
        func_0x000107c61434(puVar8);
        puVar8 = puVar6;
        func_0x000107c5fc48(puVar6,uVar5);
        func_0x000107c6142c(puVar6);
        func_0x000107c51e34();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6df78);
        *(undefined **)(unaff_x20 + _DAT_112d6df78) = puVar2;
        func_0x000107c61174(puVar2);
        func_0x000107c61170(uVar5);
        puVar6 = puVar7;
        func_0x000107c5d17c();
        func_0x000107c61180();
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6df70);
        *(undefined **)(unaff_x20 + _DAT_112d6df70) = puVar6;
        func_0x000107c615e8(uVar5);
        func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d6df90));
        func_0x000107c61170(puVar2);
        puVar2 = puVar3;
        puVar3 = puVar7;
      }
      func_0x000107c61170(puVar2);
      puVar2 = puVar3;
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101294508; end: 101294523;  */

undefined1  [16] FUN_101294508(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef32980;
  auVar1._0_8_ = 0xd000000000000031;
  return auVar1;
}



/* Entry: 101294524; end: 1012945ab; -[_TtC10QRCodeCard25QRCodeSharePageController legacySendToScopeDidDismiss:selectedItems:] */

void FUN_101294524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101294db8(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101294b90(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1012945ac; end: 1012946bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012945ac(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6df90);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039b750;
    func_0x000107c613fc(&UNK_11039b750,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_11039b7c8;
    func_0x000107c613fc(&UNK_11039b7c8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    uStack_50 = 0x101294d98;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_11039b7e0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c5e2a4(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
  }
  func_0x000103a94398();
  return;
}



/* Entry: 1012946c0; end: 101294793; -[_TtC10QRCodeCard25QRCodeSharePageController legacySendToScopeWillSend:sendToSelection:] */

/* WARNING: Possible PIC construction at 0x000101294708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129470c) */

void FUN_1012946c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000101294c1c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101294794; end: 101294aa7;  */

/* WARNING: Possible PIC construction at 0x00010129496c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101294988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012949b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012949cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101294a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012949d0) */
/* WARNING: Removing unreachable block (ram,0x000101294a38) */
/* WARNING: Removing unreachable block (ram,0x000101294a50) */
/* WARNING: Removing unreachable block (ram,0x0001012949b8) */
/* WARNING: Removing unreachable block (ram,0x00010129498c) */
/* WARNING: Removing unreachable block (ram,0x000101294970) */
/* WARNING: Removing unreachable block (ram,0x000101294a74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294794(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = param_1;
  func_0x000107c4fa70();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0x112d6dfc8;
    func_0x0001000285a8(0x112d6dfc8,&UNK_10d9301c0);
    puVar3 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  puVar1 = param_1;
  func_0x000107c5bf40();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x000107c3ee40();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c5fc54();
      func_0x000107c61170(puVar1);
    }
    puVar1 = param_1;
    func_0x000107c4455c();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      uVar2 = 0x112d6dfd0;
      func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
      func_0x000107c5fc54(puVar1,uVar2);
      func_0x000107c61170(puVar1);
    }
    func_0x000107c3d99c();
    func_0x000107c61180();
    if (param_1 != (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_112d6df78);
    if (lVar4 == 0) {
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
      lVar4 = 0;
    }
    func_0x000107c61174(lVar4);
    uVar2 = 0x112d6dfc8;
    func_0x0001000285a8(0x112d6dfc8,&UNK_10d9301c0);
    func_0x000107c5fc48(puVar3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
  return;
}



/* Entry: 101294aa8; end: 101294b07; -[_TtC10QRCodeCard25QRCodeSharePageController init] */

void FUN_101294aa8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QRCodeCard.QRCodeSharePageController",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101294ad4);
  (*pcVar1)();
}



/* Entry: 101294b08; end: 101294b8f; -[_TtC10QRCodeCard25QRCodeSharePageController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294b08(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6df68);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6df90));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6df70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6df78));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6df80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6df98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6df88));
  return;
}



/* Entry: 101294b90; end: 101294d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294b90(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d6df90));
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000103a94398();
  lVar1 = _DAT_112d6df80;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6df80);
  *(undefined8 *)(unaff_x20 + _DAT_112d6df80) = 0;
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6df70);
  *(undefined8 *)(unaff_x20 + _DAT_112d6df70) = 0;
  func_0x000107c615e8(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_1);
  return;
}



/* Entry: 101294d10; end: 101294d4f;  */

void FUN_101294d10(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1218);
  return;
}



/* Entry: 101294d50; end: 101294d6b;  */

void FUN_101294d50(long param_1,long param_2)

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



/* Entry: 101294d6c; end: 101294db7;  */

void FUN_101294d6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101294db8; end: 101294df7;  */

void FUN_101294db8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101294df8; end: 101294dff;  */

void FUN_101294df8(long param_1,long param_2)

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



/* Entry: 101294e00; end: 101294e0b; -[SCQRCodeCardEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6dfd8;
  func_0x000107c61428(param_1 + _DAT_112d6dfd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294e0c; end: 101294e17; -[SCQRCodeCardEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6dfd8;
  func_0x000107c61428(param_1 + _DAT_112d6dfd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294e18; end: 101294e23; -[SCQRCodeCardEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6dfe0;
  func_0x000107c61428(param_1 + _DAT_112d6dfe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294e24; end: 101294e2f; -[SCQRCodeCardEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6dfe0;
  func_0x000107c61428(param_1 + _DAT_112d6dfe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294e30; end: 101294e3b; -[SCQRCodeCardEntryPoint snapSavingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6dfe8;
  func_0x000107c61428(param_1 + _DAT_112d6dfe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294e3c; end: 101294e47; -[SCQRCodeCardEntryPoint setSnapSavingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6dfe8;
  func_0x000107c61428(param_1 + _DAT_112d6dfe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294e48; end: 101294e53; -[SCQRCodeCardEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6dff0;
  func_0x000107c61428(param_1 + _DAT_112d6dff0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294e54; end: 101294e5f; -[SCQRCodeCardEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6dff0;
  func_0x000107c61428(param_1 + _DAT_112d6dff0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294e60; end: 101294e6b; -[SCQRCodeCardEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6dff8;
  func_0x000107c61428(param_1 + _DAT_112d6dff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294e6c; end: 101294e77; -[SCQRCodeCardEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6dff8;
  func_0x000107c61428(param_1 + _DAT_112d6dff8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294e78; end: 101294e83; -[SCQRCodeCardEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e000;
  func_0x000107c61428(param_1 + _DAT_112d6e000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294e84; end: 101294e8f; -[SCQRCodeCardEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e000;
  func_0x000107c61428(param_1 + _DAT_112d6e000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294e90; end: 101294e9b; -[SCQRCodeCardEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e008;
  func_0x000107c61428(param_1 + _DAT_112d6e008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294e9c; end: 101294ea7; -[SCQRCodeCardEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e008;
  func_0x000107c61428(param_1 + _DAT_112d6e008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294ea8; end: 101294eb3; -[SCQRCodeCardEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294ea8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e010;
  func_0x000107c61428(param_1 + _DAT_112d6e010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294eb4; end: 101294ebf; -[SCQRCodeCardEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e010;
  func_0x000107c61428(param_1 + _DAT_112d6e010,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294ec0; end: 101294ecb; -[SCQRCodeCardEntryPoint offPlatformLinkGenerationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294ec0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e018;
  func_0x000107c61428(param_1 + _DAT_112d6e018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294ecc; end: 101294ed7; -[SCQRCodeCardEntryPoint setOffPlatformLinkGenerationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e018;
  func_0x000107c61428(param_1 + _DAT_112d6e018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294ed8; end: 101294ee3; -[SCQRCodeCardEntryPoint watermarkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294ed8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e020;
  func_0x000107c61428(param_1 + _DAT_112d6e020,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294ee4; end: 101294eef; -[SCQRCodeCardEntryPoint setWatermarkingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e020;
  func_0x000107c61428(param_1 + _DAT_112d6e020,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294ef0; end: 101294efb; -[SCQRCodeCardEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294ef0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e028;
  func_0x000107c61428(param_1 + _DAT_112d6e028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294efc; end: 101294f07; -[SCQRCodeCardEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e028;
  func_0x000107c61428(param_1 + _DAT_112d6e028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101294f08; end: 101294f13; -[SCQRCodeCardEntryPoint temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294f08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e030;
  func_0x000107c61428(param_1 + _DAT_112d6e030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101294f14; end: 101294f1f; -[SCQRCodeCardEntryPoint setTemporaryFileWriterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101294f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e030;
  func_0x000107c61428(param_1 + _DAT_112d6e030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


