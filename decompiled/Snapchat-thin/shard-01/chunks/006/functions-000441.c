/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013256d0; end: 1013256fb;  */

void FUN_1013256d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 1013256fc; end: 101325777;  */

void FUN_1013256fc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar1 = *param_1;
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_101325d58(uVar1,param_3,param_2);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101325778; end: 1013257cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101325778(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112d72f68;
  lVar1 = param_1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1013257d0; end: 10132594f;  */

void FUN_1013257d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar6,param_1,param_2);
  puVar2 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar6);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,puVar6,lVar1);
    puVar3 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
    func_0x000107c610f8(PTR__OBJC_CLASS___SFSafariViewController_1126d6d00);
    puVar4 = puVar3;
    func_0x000107c5ed90();
    func_0x000107c48fbc(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c5677c(puVar3);
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000107c3e2c0();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    (**(code **)(lVar7 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 101325950; end: 101325a7f;  */

undefined * FUN_101325950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c5edb4(puVar4,param_3);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar1);
  func_0x000107c5fadc(param_1,param_2);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    puVar5 = puVar2;
  }
  puVar3 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 101325a80; end: 101325ab7;  */

void FUN_101325a80(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101325ab8; end: 101325b13; -[_TtC28IncentiveCampaignDetailsFlow38IncentiveCampaignDetailsViewController initWithNibName:bundle:] */

void FUN_101325ab8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncentiveCampaignDetailsFlow.IncentiveCampaignDetailsViewController",0x43,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101325ae4);
  (*pcVar1)();
}



/* Entry: 101325b14; end: 101325b7b; -[_TtC28IncentiveCampaignDetailsFlow38IncentiveCampaignDetailsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101325b14(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72f48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72f50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72f58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72f60));
  param_1 = param_1 + _DAT_112d72f68;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101325b7c; end: 101325b9b;  */

void FUN_101325b7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8200);
  return;
}



/* Entry: 101325b9c; end: 101325ba3; -[_TtC28IncentiveCampaignDetailsFlow38IncentiveCampaignDetailsViewController handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_101325b9c(void)

{
  return 0;
}



/* Entry: 101325ba4; end: 101325c27; -[_TtC28IncentiveCampaignDetailsFlow38IncentiveCampaignDetailsViewController shareSheetDismissedWithShareDestination:] */

/* WARNING: Possible PIC construction at 0x000101325be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101325bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101325be4) */
/* WARNING: Removing unreachable block (ram,0x000101325c00) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101325ba4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101325c28; end: 101325c2f;  */

void FUN_101325c28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar3 = *param_1;
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_101325d58(uVar3,uVar1,lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101325c30; end: 101325d57;  */

undefined8
FUN_101325c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1103a2f30;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1103a2f58;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  pcStack_e0 = FUN_100c75f50;
  puStack_d8 = &UNK_1103a2f80;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c48660();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 101325d58; end: 101326193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101325d58(undefined *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x000107c3ceb0();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  puVar2 = puVar1;
  func_0x000107c5faec();
  func_0x000107c61170(puVar1);
  puStack_90 = puVar2;
  lStack_88 = param_2;
  func_0x000107c61434(param_2);
  ppuVar10 = (undefined **)0xe100000000000000;
  func_0x000107c5fb78(10,0xe100000000000000);
  func_0x000107c6142c(param_2);
  puStack_60 = puStack_90;
  lStack_58 = lStack_88;
  lVar13 = *(long *)(param_3 + _DAT_112d72f60);
  lVar3 = lVar13;
  func_0x000107c4213c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
LAB_101325e50:
    func_0x000107c5db24();
    func_0x000107c61180();
    lVar4 = lVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar13 = lVar4;
      if (lVar3 != 0) {
        puStack_90 = (undefined *)0x0;
        lStack_88 = 0;
        ppuVar10 = &puStack_90;
        func_0x000107c5fae8(lVar3,ppuVar10);
        func_0x000107c61170(lVar3);
        lVar13 = lVar3;
        if (lStack_88 != 0) goto LAB_101325ec0;
      }
    }
    func_0x0001013263a0();
  }
  else {
    lVar3 = lVar4;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 == 0) goto LAB_101325e50;
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
    ppuVar10 = &puStack_90;
    func_0x000107c5fae8(lVar3,ppuVar10);
    func_0x000107c61170(lVar3);
    if (lStack_88 == 0) goto LAB_101325e50;
LAB_101325ec0:
    lVar13 = lStack_88;
    puVar1 = puStack_90;
    FUN_1013262d4();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    lVar5 = lVar4;
    func_0x00010075bbf0();
    *(long *)(lVar4 + 0x40) = lVar5;
    *(undefined **)(lVar4 + 0x20) = puVar1;
    *(long *)(lVar4 + 0x28) = lVar13;
    lVar13 = lVar3;
  }
  ppuVar7 = ppuVar10;
  func_0x000107c5fb00();
  func_0x000107c6142c(ppuVar10);
  func_0x000107c5fb78(lVar13,ppuVar7);
  func_0x000107c6142c(ppuVar7);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  lVar3 = lStack_58;
  puVar2 = puStack_60;
  puVar1 = &UNK_1103a2ef0;
  uVar11 = 0x28;
  func_0x000107c613fc(&UNK_1103a2ef0,0x28,7);
  *(undefined **)(puVar1 + 0x10) = puVar2;
  *(long *)(puVar1 + 0x18) = lVar3;
  *(undefined **)(puVar1 + 0x20) = param_1;
  pcStack_70 = FUN_101326194;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_88 = 0x42000000;
  pcStack_80 = FUN_101325a80;
  puStack_78 = &UNK_1103a2f08;
  ppuVar10 = &puStack_90;
  puStack_68 = puVar1;
  func_0x000107c60bc4();
  puVar1 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61434(lVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x00010011df08();
  func_0x000107c61180();
  ppuVar7 = ppuVar10;
  ppuVar8 = ppuVar10;
  if (ppuVar10 == (undefined **)0x0) {
    func_0x000107c5faec();
    uVar12 = uVar11;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar11);
    ppuVar8 = (undefined **)0x0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar12);
  }
  puVar1 = PTR_PTR_1126b2498;
  func_0x000107c610f8(PTR_PTR_1126b2498);
  func_0x000107c61174(ppuVar10);
  func_0x000107c47fc8(puVar1);
  func_0x000107c61170(ppuVar8);
  puVar2 = PTR_PTR_1126b24a0;
  func_0x000107c610f8(PTR_PTR_1126b24a0);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar1);
  func_0x000107c48f98(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(ppuVar7);
  lVar13 = *(long *)(param_3 + _DAT_112d72f50);
  lVar4 = lVar13;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c42c1c(lVar13);
    func_0x000107c6142c(lVar3);
    puVar9 = puVar6;
  }
  else {
    func_0x000107c6142c(lVar3);
    func_0x000107c61170(lVar4);
    puVar9 = puVar2;
    puVar2 = puVar6;
  }
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101326194; end: 1013261bb;  */

undefined * FUN_101326194(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c5edb4(puVar7,uVar6);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (**(code **)(lVar9 + 0x38))(puVar7,0,1,lVar2);
  func_0x000107c5fadc(uVar3,uVar1);
  puVar4 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,lVar2);
  puVar8 = (undefined1 *)0x0;
  if ((int)puVar4 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar9 + 8))(puVar7,lVar2);
    puVar8 = puVar4;
  }
  puVar5 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar8);
  return puVar5;
}



/* Entry: 1013261bc; end: 10132620b;  */

void FUN_1013261bc(void)

{
  FUN_1013251e8();
  return;
}



/* Entry: 10132620c; end: 101326213;  */

void FUN_10132620c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "loadView()";
  func_0x0001000c10c0("loadView()");
  func_0x000107c61180();
  puVar2 = &UNK_1103a2fb8;
  func_0x000107c613fc(&UNK_1103a2fb8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_101326254;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103a2fd0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101326214; end: 101326253;  */

void FUN_101326214(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101326254; end: 101326277;  */

void FUN_101326254(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1013257d0(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101326278; end: 10132629b;  */

undefined8 FUN_101326278(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10132629c; end: 1013262d3;  */

void FUN_10132629c(long param_1,long param_2)

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



/* Entry: 1013262d4; end: 101326467;  */

undefined1  [16] FUN_1013262d4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef36d50);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010d9332f0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013263a0);
  (*pcVar1)();
}



/* Entry: 101326468; end: 101326477;  */

undefined1  [16] FUN_101326468(void)

{
  return ZEXT816(0x1103a30a8);
}



/* Entry: 101326478; end: 101326483; -[SCIncentiveCampaignDetailsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101326478(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72fa0;
  func_0x000107c61428(param_1 + _DAT_112d72fa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101326484; end: 10132648f; -[SCIncentiveCampaignDetailsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101326484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72fa0;
  func_0x000107c61428(param_1 + _DAT_112d72fa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101326490; end: 10132649b; -[SCIncentiveCampaignDetailsEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101326490(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72fa8;
  func_0x000107c61428(param_1 + _DAT_112d72fa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132649c; end: 1013264a7; -[SCIncentiveCampaignDetailsEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132649c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72fa8;
  func_0x000107c61428(param_1 + _DAT_112d72fa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013264a8; end: 1013264b3; -[SCIncentiveCampaignDetailsEntryPoint offPlatformLinkGenerationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013264a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72fb0;
  func_0x000107c61428(param_1 + _DAT_112d72fb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013264b4; end: 1013264bf; -[SCIncentiveCampaignDetailsEntryPoint setOffPlatformLinkGenerationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013264b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72fb0;
  func_0x000107c61428(param_1 + _DAT_112d72fb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013264c0; end: 1013264cb; -[SCIncentiveCampaignDetailsEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013264c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72fb8;
  func_0x000107c61428(param_1 + _DAT_112d72fb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013264cc; end: 10132650f;  */

void FUN_1013264cc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101326510; end: 10132651b; -[SCIncentiveCampaignDetailsEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101326510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72fb8;
  func_0x000107c61428(param_1 + _DAT_112d72fb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132651c; end: 10132656f;  */

void FUN_10132651c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101326570; end: 1013265b7; -[SCIncentiveCampaignDetailsEntryPoint externalContentShareScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101326570(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72fc0;
  func_0x000107c61428(param_1 + _DAT_112d72fc0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013265b8; end: 10132661b; -[SCIncentiveCampaignDetailsEntryPoint setExternalContentShareScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013265b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72fc0;
  func_0x000107c61428(param_1 + _DAT_112d72fc0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10132661c; end: 1013267e3;  */

/* WARNING: Possible PIC construction at 0x00010132671c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132672c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132673c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013267bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132679c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132678c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013267a0) */
/* WARNING: Removing unreachable block (ram,0x0001013267c0) */
/* WARNING: Removing unreachable block (ram,0x000101326740) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101326730) */
/* WARNING: Removing unreachable block (ram,0x000101326720) */
/* WARNING: Removing unreachable block (ram,0x000101326790) */

void FUN_10132661c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c42c84();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4dadc();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5d9b4();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = 0;
          FUN_101324c5c();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          *(long *)(lVar5 + 0x30) = unaff_x20;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c61174(unaff_x20);
          FUN_101324a48();
          lVar1 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1013267e4; end: 10132680b; -[SCIncentiveCampaignDetailsEntryPoint begin] */

void FUN_1013267e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10132661c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10132680c; end: 10132684f; -[SCIncentiveCampaignDetailsEntryPoint end] */

void FUN_10132680c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101326850; end: 101326b2b;  */

void FUN_101326850(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_1013268dc;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000021;
      if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10d2300)) ||
         (func_0x000107c605b8(0xd000000000000021,0x800000010ef2dd00,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56c0c();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10c9290)) &&
               (func_0x000107c605b8(0xd000000000000020,0x800000010ef36d70,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "IncentiveCampaignDetailsFlow/SCIncentiveCampaignDetailsEntryPoint.swift"
                                  ,0x47,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101326b2c);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c547ec();
            goto LAB_1013268dc;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a368();
      }
      goto LAB_1013268dc;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c536e0();
LAB_1013268dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101326b2c; end: 101326bd7; -[SCIncentiveCampaignDetailsEntryPoint setValue:forIvarName:] */

void FUN_101326b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101326850(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101326bd8; end: 101326c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101326bd8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d72fa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72fa8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72fb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72fb8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d72fc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d72fc8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101326c80; end: 101326c9f; -[SCIncentiveCampaignDetailsEntryPoint init] */

void FUN_101326c80(void)

{
  FUN_101326bd8();
  return;
}



/* Entry: 101326ca0; end: 101326cd3;  */

void FUN_101326ca0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101326cd4; end: 101326d4b; -[SCIncentiveCampaignDetailsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101326cd4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d72fa0);
  func_0x000107c61610(param_1 + _DAT_112d72fa8);
  func_0x000107c61610(param_1 + _DAT_112d72fb0);
  func_0x000107c61610(param_1 + _DAT_112d72fb8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72fc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72fc8));
  return;
}



/* Entry: 101326d4c; end: 101326d6b;  */

void FUN_101326d4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8318);
  return;
}



/* Entry: 101326d6c; end: 101326ef3;  */

void FUN_101326d6c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [96];
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [96];
  undefined1 auStack_110 [9];
  long lStack_107;
  undefined8 uStack_ff;
  undefined8 uStack_f7;
  undefined8 uStack_ef;
  undefined8 uStack_e7;
  undefined8 uStack_df;
  undefined8 uStack_d7;
  undefined8 uStack_cf;
  undefined8 uStack_c7;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar6 = *(long *)(unaff_x20 + 0x50);
  lStack_a0 = lVar6;
  uStack_90 = uStack_2c0;
  uStack_88 = uStack_2b8;
  uStack_80 = uStack_2b0;
  uStack_78 = uStack_2a8;
  uStack_70 = uVar5;
  uStack_60 = uStack_2a0;
  uStack_58 = uStack_298;
  if (lVar6 == 0) {
    func_0x00010448a8f4(auStack_170);
    func_0x00010448aa5c(auStack_110);
    FUN_100e19000(auStack_170);
    uStack_230 = 60000;
    uStack_228 = 0;
    uStack_1ff = (undefined7)uStack_df;
    uStack_1f8 = (undefined1)((ulong)uStack_df >> 0x38);
    uStack_207 = (undefined7)uStack_e7;
    uStack_200 = (undefined1)((ulong)uStack_e7 >> 0x38);
    uStack_1ef = (undefined7)uStack_cf;
    uStack_1e8 = (undefined1)((ulong)uStack_cf >> 0x38);
    uStack_1f7 = (undefined7)uStack_d7;
    uStack_1f0 = (undefined1)((ulong)uStack_d7 >> 0x38);
    uStack_1df = uStack_bf;
    uStack_1e7 = (undefined7)uStack_c7;
    uStack_1e0 = (undefined1)((ulong)uStack_c7 >> 0x38);
    uStack_1d8 = uStack_b8;
    uStack_1d7 = uStack_b7;
    uStack_21f = (undefined7)uStack_ff;
    uStack_218 = (undefined1)((ulong)uStack_ff >> 0x38);
    uStack_227 = (undefined7)lStack_107;
    uStack_220 = (undefined1)((ulong)lStack_107 >> 0x38);
    uStack_20f = (undefined7)uStack_ef;
    uStack_208 = (undefined1)((ulong)uStack_ef >> 0x38);
    uStack_217 = (undefined7)uStack_f7;
    uStack_210 = (undefined1)((ulong)uStack_f7 >> 0x38);
    uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_198 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_188 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x90);
    *(ulong *)(unaff_x20 + 0x68) = CONCAT71(uStack_207,uStack_208);
    *(ulong *)(unaff_x20 + 0x60) = CONCAT71(uStack_20f,uStack_210);
    *(ulong *)(unaff_x20 + 0x78) = CONCAT71(uStack_1f7,uStack_1f8);
    *(ulong *)(unaff_x20 + 0x70) = CONCAT71(uStack_1ff,uStack_200);
    *(long *)(unaff_x20 + 0x48) = lStack_107 << 8;
    *(undefined8 *)(unaff_x20 + 0x40) = 60000;
    *(ulong *)(unaff_x20 + 0x58) = CONCAT71(uStack_217,uStack_218);
    *(ulong *)(unaff_x20 + 0x50) = CONCAT71(uStack_21f,uStack_220);
    *(ulong *)(unaff_x20 + 0x88) = CONCAT71(uStack_1e7,uStack_1e8);
    *(ulong *)(unaff_x20 + 0x80) = CONCAT71(uStack_1ef,uStack_1f0);
    *(ulong *)(unaff_x20 + 0x98) = CONCAT71(uStack_b7,uStack_b8);
    *(ulong *)(unaff_x20 + 0x90) = CONCAT71(uStack_bf,uStack_1e0);
    func_0x000100e19034(&uStack_230,auStack_290);
    func_0x000101327450(&uStack_1d0);
    uStack_298 = CONCAT71(uStack_1d7,uStack_1d8);
    uStack_2a0 = CONCAT71(uStack_1df,uStack_1e0);
    uVar5 = CONCAT71(uStack_1ef,uStack_1f0);
    uStack_2b8 = CONCAT71(uStack_207,uStack_208);
    uStack_2c0 = CONCAT71(uStack_20f,uStack_210);
    uStack_2a8 = CONCAT71(uStack_1f7,uStack_1f8);
    uStack_2b0 = CONCAT71(uStack_1ff,uStack_200);
    lVar6 = CONCAT71(uStack_21f,uStack_220);
    uVar4 = uStack_230;
    uVar1 = uStack_1e8;
    uVar2 = uStack_218;
    uVar3 = uStack_228;
  }
  else {
    uVar4 = uStack_b0;
    uVar1 = (undefined1)uStack_68;
    uVar2 = (undefined1)uStack_98;
    uVar3 = (undefined1)uStack_a8;
  }
  func_0x000101327498(&uStack_b0,&uStack_1d0);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar3;
  param_1[2] = lVar6;
  *(undefined1 *)(param_1 + 3) = uVar2;
  param_1[5] = uStack_2b8;
  param_1[4] = uStack_2c0;
  param_1[7] = uStack_2a8;
  param_1[6] = uStack_2b0;
  param_1[8] = uVar5;
  *(undefined1 *)(param_1 + 9) = uVar1;
  param_1[0xb] = uStack_298;
  param_1[10] = uStack_2a0;
  return;
}



/* Entry: 101326ef4; end: 101326f0f;  */

void FUN_101326ef4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_2;
  *(undefined8 *)(unaff_x22 + 0x110) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101326f10,0,0);
  return;
}



/* Entry: 101326f10; end: 101327013;  */

void FUN_101326f10(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000103ee34e0();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar3;
  if ((param_3 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000101326f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x110);
  FUN_101327178(0,0,0,0xf000000000000000);
  plVar6 = *(long **)(lVar5 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xd8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0;
  FUN_101326d6c(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  piVar4 = *(int **)(*plVar6 + 0x78);
  iVar1 = *piVar4;
  plVar6 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101327014;
                    /* WARNING: Could not recover jumptable at 0x000101327010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar6,unaff_x22 + 0xd0,unaff_x22 + 0x10);
  return;
}



/* Entry: 101327014; end: 1013270a7;  */

void FUN_101327014(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x130) = param_1;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x140) = param_4;
    *(undefined8 *)(lVar2 + 0x148) = param_3;
    *(undefined1 *)(lVar2 + 0x150) = param_2;
    FUN_100e19000(lVar2 + 0x70);
    pcVar1 = FUN_1013270a8;
  }
  else {
    FUN_100e19000(lVar2 + 0x70);
    pcVar1 = FUN_101327120;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1013270a8; end: 10132711f;  */

void FUN_1013270a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0x150);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x140));
  if (cVar3 == '\x01') {
    uVar4 = *(undefined1 *)(unaff_x22 + 0x130);
  }
  else {
    uVar4 = 0;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x00010006c090(0,0xc000000000000000);
  FUN_101327178(uVar1,uVar2,0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010132711c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101327120; end: 101327177;  */

void FUN_101327120(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x138));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x00010006c090(0,0xc000000000000000);
  FUN_101327178(uVar1,uVar2,0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x000101327174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101327178; end: 101327193;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101327178(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101327194; end: 1013271eb;  */

void FUN_101327194(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100e19120(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013271ec; end: 101327247;  */

void FUN_1013271ec(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101327248;
  plVar1[0x21] = param_2;
  plVar1[0x22] = unaff_x20;
  plVar1[0x20] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101326f10,0,0);
  return;
}



/* Entry: 101327248; end: 1013272ab;  */

void FUN_101327248(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101327288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1013272ac; end: 1013272f7;  */

long FUN_1013272ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_d0 [40];
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c613fc(param_3,0xa0,7);
  puVar4 = auStack_d0;
  *(undefined8 *)(param_3 + 0x88) = 0;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x98) = 0;
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined8 *)(param_3 + 0x68) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  *(undefined8 *)(param_3 + 0x78) = 0;
  *(undefined8 *)(param_3 + 0x70) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  lVar5 = param_3 + 0x10;
  FUN_10132740c();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1dd8;
  func_0x000107c5faec();
  uStack_98 = 0;
  uStack_90 = 0x201;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  ppuStack_a8 = ppuVar3;
  lStack_a0 = lVar5;
  func_0x0001000a8868(param_1,uVar1);
  (**(code **)(lVar2 + 8))
            (auStack_d0,0xd00000000000001d,0x800000010ef36df0,&ppuStack_a8,param_2,uVar1,lVar2);
  func_0x000100e1b054(&ppuStack_a8);
  func_0x000107c615e8(param_2);
  func_0x000101329b84(0);
  func_0x000107c613fc();
  FUN_1013298d0();
  *(undefined1 **)(param_3 + 0x38) = puVar4;
  func_0x0001000834e4(param_1);
  return param_3;
}



/* Entry: 1013272f8; end: 10132740b;  */

long FUN_1013272f8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_d0 [40];
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puVar4 = auStack_d0;
  *(undefined8 *)(param_3 + 0x88) = 0;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x98) = 0;
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined8 *)(param_3 + 0x68) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  *(undefined8 *)(param_3 + 0x78) = 0;
  *(undefined8 *)(param_3 + 0x70) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  lVar5 = param_3 + 0x10;
  FUN_10132740c();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1dd8;
  func_0x000107c5faec();
  uStack_98 = 0;
  uStack_90 = 0x201;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  ppuStack_a8 = ppuVar3;
  lStack_a0 = lVar5;
  func_0x0001000a8868(param_1,uVar1);
  (**(code **)(lVar2 + 8))
            (auStack_d0,0xd00000000000001d,0x800000010ef36df0,&ppuStack_a8,param_2,uVar1,lVar2);
  func_0x000100e1b054(&ppuStack_a8);
  func_0x000107c615e8(param_2);
  func_0x000101329b84(0);
  func_0x000107c613fc();
  FUN_1013298d0();
  *(undefined1 **)(param_3 + 0x38) = puVar4;
  func_0x0001000834e4(param_1);
  return param_3;
}



/* Entry: 10132740c; end: 1013274e7;  */

long FUN_10132740c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1013274e8; end: 10132759f;  */

void FUN_1013274e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1013275a0; end: 1013275a7;  */

void FUN_1013275a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1013275a8();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      param_1[1] = (long)&PTR_DAT_1103a3138;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1013275a8; end: 10132768f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013275a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 auStack_58 [40];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    uVar2 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef36e70);
    lVar3 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = 0;
    func_0x00010132728c(0);
    func_0x000103e3687c(auStack_58);
    lVar4 = lVar3;
    func_0x000107c614f0(lVar3);
    puVar5 = auStack_58;
    FUN_1013272ac(puVar5,lVar3,uVar2,lVar4);
    func_0x000107c615e8(lVar1);
  }
  return puVar5;
}



/* Entry: 101327690; end: 1013276ab;  */

/* WARNING: Possible PIC construction at 0x00010132769c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013276a0) */

void FUN_101327690(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1013276ac; end: 1013276f7;  */

void FUN_1013276ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013276f8; end: 101327773;  */

void FUN_1013276f8(undefined8 param_1)

{
  if (lRam0000000112d730d8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62e43c);
  return;
}



/* Entry: 101327774; end: 101327813;  */

void FUN_101327774(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103a3160;
  func_0x000107c613fc(&UNK_1103a3160,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112d730a8,&UNK_10d933430);
  func_0x000107c613fc();
  pcVar2 = FUN_101327814;
  func_0x0001000bdd8c(FUN_101327814,puVar1);
  uVar3 = 0;
  FUN_10132e0f4(0);
  func_0x000107c610f8();
  func_0x00010132e038(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101327814; end: 101327817;  */

void FUN_101327814(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1013275a8();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      param_1[1] = (long)&PTR_DAT_1103a3138;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 101327818; end: 101327823; -[SCIncentiveCampaignGrantRewardServiceProvider taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101327818(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73190;
  func_0x000107c61428(param_1 + _DAT_112d73190,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101327824; end: 10132782f; -[SCIncentiveCampaignGrantRewardServiceProvider setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101327824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73190;
  func_0x000107c61428(param_1 + _DAT_112d73190,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101327830; end: 10132783b; -[SCIncentiveCampaignGrantRewardServiceProvider unifiedGRPCServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101327830(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73198;
  func_0x000107c61428(param_1 + _DAT_112d73198,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132783c; end: 10132787f;  */

void FUN_10132783c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101327880; end: 10132788b; -[SCIncentiveCampaignGrantRewardServiceProvider setUnifiedGRPCServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101327880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73198;
  func_0x000107c61428(param_1 + _DAT_112d73198,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132788c; end: 1013278df;  */

void FUN_10132788c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013278e0; end: 101327a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013278e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c5c78c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d228();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_1013276f8();
      func_0x000107c613fc();
      *(long *)(lVar3 + 0x10) = lVar1;
      *(long *)(lVar3 + 0x18) = lVar2;
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d731a0);
      *(long *)(unaff_x20 + _DAT_112d731a0) = lVar3;
      func_0x000107c61174(lVar1);
      func_0x000107c61174(lVar2);
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar6);
      puVar4 = &UNK_1103a31a0;
      func_0x000107c613fc(&UNK_1103a31a0,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,lVar3);
      uVar6 = 0x112d730a8;
      func_0x0001000285a8(0x112d730a8,&UNK_10d933430);
      func_0x000107c613fc();
      pcVar5 = FUN_101327e90;
      func_0x0001000bdd8c(FUN_101327e90,puVar4,uVar6);
      uVar6 = 0;
      FUN_10132e0f4(0);
      func_0x000107c610f8();
      func_0x00010132e038(pcVar5,uVar6);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 101327a38; end: 101327a3f;  */

void FUN_101327a38(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1013275a8();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      param_1[1] = (long)&PTR_DAT_1103a3138;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 101327a40; end: 101327acb; -[SCIncentiveCampaignGrantRewardServiceProvider provide] */

void FUN_101327a40(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1013278e0();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "IncentiveCampaignGrantRewardServicesImplementation/SCIncentiveCampaignGrantRewardServiceProvider.swift"
                      ,0x66,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101327acc);
  (*pcVar1)();
}



/* Entry: 101327acc; end: 101327aff; -[SCIncentiveCampaignGrantRewardServiceProvider __safeProvide] */

void FUN_101327acc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013278e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101327b00; end: 101327b43; -[SCIncentiveCampaignGrantRewardServiceProvider end] */

void FUN_101327b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101327b44; end: 101327cd3;  */

void FUN_101327b44(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffea && param_3 == -0x7ffffffef10edd20) ||
     (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59c2c();
  }
  else {
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10edd00)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef12300,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "IncentiveCampaignGrantRewardServicesImplementation/SCIncentiveCampaignGrantRewardServiceProvider.swift"
                            ,0x66,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101327cd4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a178();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101327cd4; end: 101327d7f; -[SCIncentiveCampaignGrantRewardServiceProvider setValue:forIvarName:] */

void FUN_101327cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101327b44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101327d80; end: 101327df3; -[SCIncentiveCampaignGrantRewardServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101327d80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d73190,0);
  func_0x000107c61614(param_1 + _DAT_112d73198,0);
  *(undefined8 *)(param_1 + _DAT_112d731a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101327df4; end: 101327e27;  */

void FUN_101327df4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101327e28; end: 101327e6f; -[SCIncentiveCampaignGrantRewardServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101327e28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d73190);
  func_0x000107c61610(param_1 + _DAT_112d73198);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d731a0));
  return;
}



/* Entry: 101327e70; end: 101327e8f;  */

void FUN_101327e70(void)

{
  func_0x000107c61168(&PTR_PTR_112d731e8);
  return;
}



/* Entry: 101327e90; end: 101327ea3;  */

void FUN_101327e90(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1013275a8();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      param_1[1] = (long)&PTR_DAT_1103a3138;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 101327ea4; end: 101327ed3;  */

void FUN_101327ea4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  func_0x000101328b94();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101327ed4; end: 101327edb;  */

undefined8 FUN_101327ed4(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101327edc; end: 101327f4f;  */

void FUN_101327edc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d732c8;
  func_0x0001000285a8(0x112d732c8,&UNK_10d9334b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101327f50; end: 101327f5b;  */

void FUN_101327f50(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101327f5c; end: 101328007;  */

void FUN_101327f5c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101328008; end: 10132801b;  */

bool FUN_101328008(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10132801c; end: 101328063;  */

void FUN_10132801c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d933880,0xaf,2);
  uRam00000001137ff320 = uStack_38;
  uRam00000001137ff318 = uStack_40;
  uRam00000001137ff330 = uStack_28;
  uRam00000001137ff328 = uStack_30;
  uRam00000001137ff340 = uStack_18;
  uRam00000001137ff338 = uStack_20;
  return;
}



/* Entry: 101328064; end: 101328103;  */

/* WARNING: Possible PIC construction at 0x0001013280b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013280c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013280b4) */
/* WARNING: Removing unreachable block (ram,0x0001013280c4) */

void FUN_101328064(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d732d8 != -1) {
    func_0x000107c61568(0x112d732d8,FUN_10132801c);
  }
  uVar5 = uRam00000001137ff340;
  uVar4 = uRam00000001137ff338;
  uVar3 = uRam00000001137ff330;
  uVar2 = uRam00000001137ff328;
  uVar1 = uRam00000001137ff320;
  *param_1 = uRam00000001137ff318;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101328104; end: 10132814b;  */

void FUN_101328104(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d93386a,0xe,2);
  uRam00000001137ff350 = uStack_38;
  uRam00000001137ff348 = uStack_40;
  uRam00000001137ff360 = uStack_28;
  uRam00000001137ff358 = uStack_30;
  uRam00000001137ff370 = uStack_18;
  uRam00000001137ff368 = uStack_20;
  return;
}



/* Entry: 10132814c; end: 1013281ff;  */

/* WARNING: Removing unreachable block (ram,0x0001013281fc) */

void FUN_10132814c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101329848();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110459358,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101328200; end: 10132825b;  */

void FUN_101328200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10132825c();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10132825c; end: 1013282e7;  */

void FUN_10132825c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x28);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101329848();
    (*pcVar1)(&uStack_60,1,&UNK_110459358,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1013282e8; end: 101328327;  */

void FUN_1013282e8(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  return;
}



/* Entry: 101328328; end: 101328357;  */

undefined1  [16] FUN_101328328(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101328358; end: 10132838b;  */

void FUN_101328358(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10132838c; end: 10132839f;  */

undefined8 FUN_10132838c(void)

{
  return 0x10132839c;
}


