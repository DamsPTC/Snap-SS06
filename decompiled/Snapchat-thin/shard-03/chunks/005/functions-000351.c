/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029a62dc; end: 1029a6387; -[SCMyEnforcementsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029a62dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029a61bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029a6388; end: 1029a63e7; -[SCMyEnforcementsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a6388(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed2ca8,0);
  *(undefined8 *)(param_1 + _DAT_112ed2cb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a63e8; end: 1029a641b;  */

void FUN_1029a63e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029a641c; end: 1029a6453; -[SCMyEnforcementsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a641c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed2ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2cb0));
  return;
}



/* Entry: 1029a6454; end: 1029a6473;  */

void FUN_1029a6454(void)

{
  func_0x000107c61168(&PTR_PTR_112877a58);
  return;
}



/* Entry: 1029a6474; end: 1029a6797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029a6474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c4141c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_8;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  puVar2 = PTR_PTR_1126b0320;
  func_0x000107c61168(PTR_PTR_1126b0320);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c4d044(puVar2);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5e734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112ed2e40);
  uVar1 = uVar4;
  func_0x000107c615f0();
  func_0x000107c4d048();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  return unaff_x20;
}



/* Entry: 1029a6798; end: 1029a68d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a6798(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  plVar5 = &lStack_80;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar1 = &UNK_1105798f0;
  func_0x000107c613fc(&UNK_1105798f0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_50 = FUN_1029a697c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1029a6984;
  puStack_58 = &UNK_110579908;
  ppuVar2 = &puStack_70;
  puStack_48 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  func_0x000107c61574(puStack_48);
  func_0x000107c4dbd0(uVar7);
  func_0x000107c60bd0(ppuVar2);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_1029a7480();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ed2db8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ed2dc0) = uVar8;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  func_0x000107c61174(uVar8);
  func_0x000107c61154(&lStack_80,puVar1,0,0);
  puVar6 = (undefined1 *)plVar5;
  FUN_1029a69e8();
  if (puVar6 != (undefined1 *)0x0) {
    uVar8 = *(undefined8 *)((long)plVar5 + _DAT_112ed2db8);
    *(undefined1 **)((long)plVar5 + _DAT_112ed2db8) = puVar6;
    func_0x000107c61170(uVar8);
    func_0x000107c4f010(uVar7);
  }
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 1029a68d8; end: 1029a697b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a68d8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_112ed2e48;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x000107c61428(lVar2 + _DAT_112ed2e48,auStack_60,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000107c4d350();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1029a697c; end: 1029a6983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a697c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_112ed2e48;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x000107c61428(lVar3 + _DAT_112ed2e48,auStack_60,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      func_0x000107c4d350();
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1029a6984; end: 1029a69cb;  */

void FUN_1029a6984(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1029a69cc; end: 1029a69e7;  */

void FUN_1029a69cc(long param_1,long param_2)

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



/* Entry: 1029a69e8; end: 1029a6f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a69e8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 auStack_f0 [7];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_b0 + -extraout_x8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar14 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar13 - extraout_x12_00;
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c4d814();
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lStack_98 = lVar8;
    func_0x000107c4c1dc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar16 = *(long *)(unaff_x20 + 0x20);
    lVar2 = lVar16;
    func_0x000107c41414();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar4;
      lStack_a0 = lVar3;
      func_0x000107c409cc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar3 = lStack_a0;
      if (lVar2 != 0) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c615f0(lVar2);
        func_0x000107c5dbd4(uVar9);
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c40978();
        func_0x000107c61180();
        lStack_a8 = lVar3;
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(uVar9);
        lVar3 = 0;
        func_0x000107c5ede0();
        pcVar10 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
        (*pcVar10)(lVar15,1,1,lVar3);
        (*pcVar10)(lVar14,1,1,lVar3);
        lVar3 = 0;
        func_0x0001046305a8();
        (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar11,1,1,lVar3);
        *(undefined1 *)(lVar8 + -8) = 0;
        *(undefined8 *)(lVar8 + -0x10) = 0;
        *(undefined8 *)(lVar8 + -0x18) = 0;
        *(undefined8 *)(lVar8 + -0x20) = 0;
        *(undefined8 *)(lVar8 + -0x28) = 0;
        *(undefined8 *)(lVar8 + -0x30) = 0;
        *(undefined8 *)(lVar8 + -0x38) = 0;
        *(undefined1 **)(lVar8 + -0x40) = puVar11;
        lVar8 = lStack_98;
        func_0x000104638e24(lStack_98,0x10,lVar15,0,lVar14,0,0,0,0);
        func_0x000103bda44c(0);
        puVar12 = *(ulong **)(unaff_x20 + 0x30);
        func_0x000100e39298(lVar8,lVar13);
        func_0x000104652fec(0);
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000104651d90(lVar13);
        func_0x000103bda584(puVar12,0,lVar13);
        func_0x000107c3ff98(lVar16);
        func_0x000107c61180();
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar12) + 0x98))();
        lVar13 = *(long *)(*(long *)(unaff_x20 + 0x38) + _DAT_113083898);
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar3 = lStack_a8;
        if (lVar13 == 0) {
          func_0x000100e392dc(lVar8);
          func_0x000107c615e8(lStack_a8);
          func_0x000107c61170(puVar12);
          lVar14 = lStack_a0;
        }
        else {
          lVar14 = *(long *)(unaff_x20 + 0x40);
          func_0x000107c5d9b0();
          func_0x000107c61180();
          lVar15 = lVar14;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar14);
          lVar14 = lStack_a0;
          if (lVar15 != 0) {
            puVar5 = &UNK_1105798f0;
            func_0x000107c613fc(&UNK_1105798f0,0x18,7);
            func_0x000107c61644(puVar5 + 0x10);
            puVar6 = PTR_PTR_1126abbf8;
            func_0x000107c610f8(PTR_PTR_1126abbf8);
            pcStack_70 = FUN_1029a7238;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            puStack_80 = &UNK_1000f6b44;
            puStack_78 = &UNK_110579980;
            ppuVar7 = &puStack_90;
            puStack_68 = puVar5;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c6157c(puVar5);
            func_0x000107c47c04(puVar6);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c615e8(lVar14);
            func_0x000107c61170(puVar12);
            func_0x000107c615e8(lVar13);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar15);
            puVar1 = puStack_68;
            func_0x000107c615e8(lVar2);
            func_0x000107c61574(puVar1);
            func_0x000100e392dc(lVar8);
            func_0x000107c61574(puVar5);
            return puVar6;
          }
          func_0x000100e392dc(lVar8);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar13);
          func_0x000107c61170(puVar12);
        }
        func_0x000107c615e8(lVar14);
        lVar3 = lVar2;
      }
    }
    func_0x000107c615e8(lVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 1029a6f04; end: 1029a7153;  */

void FUN_1029a6f04(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    pcVar1 = "dismissMyEnforcements()";
    func_0x0001000c10c0("dismissMyEnforcements()");
    func_0x000107c61180();
    puVar2 = &UNK_1105798f0;
    func_0x000107c613fc(&UNK_1105798f0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_1);
    uStack_58 = 0x1029a7258;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105799a8;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e590(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1029a7154; end: 1029a715b;  */

void FUN_1029a7154(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = uVar3;
    func_0x000107c615f0(uVar3);
    func_0x000107c420a4();
    func_0x000107c61180();
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1029a715c; end: 1029a71cf;  */

void FUN_1029a715c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1029a71d0; end: 1029a71ef;  */

void FUN_1029a71d0(void)

{
  FUN_1029a6798();
  return;
}



/* Entry: 1029a71f0; end: 1029a71f7;  */

undefined8 FUN_1029a71f0(void)

{
  return 0;
}



/* Entry: 1029a71f8; end: 1029a7217;  */

void FUN_1029a71f8(void)

{
  func_0x0001029a7000();
  return;
}



/* Entry: 1029a7218; end: 1029a7237;  */

void FUN_1029a7218(void)

{
  func_0x000107c61168(&PTR_PTR_112ed2d20);
  return;
}



/* Entry: 1029a7238; end: 1029a725b;  */

void FUN_1029a7238(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    pcVar2 = "dismissMyEnforcements()";
    func_0x0001000c10c0("dismissMyEnforcements()");
    func_0x000107c61180();
    puVar3 = &UNK_1105798f0;
    func_0x000107c613fc(&UNK_1105798f0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,lVar1);
    uStack_58 = 0x1029a7258;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105799a8;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e590(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1029a725c; end: 1029a72bf; -[_TtC21MyEnforcementsFeature28MyEnforcementsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a725c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ed2db8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MyEnforcementsFeature/MyEnforcementsViewController.swift",0x38,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a72c0);
  (*pcVar1)();
}



/* Entry: 1029a72c0; end: 1029a73bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a72c0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_loadView_112604be0);
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112ed2db8);
  if (puVar1 != (undefined *)0x0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112ed2dc0);
    func_0x000107c61174();
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar3 = puVar1;
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar4 != 0) {
        puVar3 = PTR_PTR_1126abc00;
        func_0x000107c610f8(PTR_PTR_1126abc00);
        func_0x000107c49520();
        func_0x000107c5a568();
        func_0x000107c61170(puVar1);
        func_0x000107c615e8(lVar4);
      }
    }
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1029a73c0; end: 1029a73e7; -[_TtC21MyEnforcementsFeature28MyEnforcementsViewController loadView] */

void FUN_1029a73c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029a72c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029a73e8; end: 1029a7447; -[_TtC21MyEnforcementsFeature28MyEnforcementsViewController initWithNibName:bundle:] */

void FUN_1029a73e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyEnforcementsFeature.MyEnforcementsViewController",0x32,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a7414);
  (*pcVar1)();
}



/* Entry: 1029a7448; end: 1029a747f; -[_TtC21MyEnforcementsFeature28MyEnforcementsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029a7464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a7468) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2db8));
  return;
}



/* Entry: 1029a7480; end: 1029a749f;  */

void FUN_1029a7480(void)

{
  func_0x000107c61168(&PTR_PTR_112877b18);
  return;
}



/* Entry: 1029a74a0; end: 1029a74c3; -[_TtC21MyEnforcementsFeature28MyEnforcementsViewController defaultProjectNameV2] */

void FUN_1029a74a0(void)

{
  func_0x000107c5fadc(0x797465666153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a74c4; end: 1029a74f7; -[_TtC21MyEnforcementsFeature28MyEnforcementsViewController defaultSubProjectName] */

void FUN_1029a74c4(void)

{
  func_0x000107c5fadc(0x726f666e4520794d,0xef73746e656d6563);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a74f8; end: 1029a74ff; -[_TtC21MyEnforcementsFeature28MyEnforcementsViewController pageViewName] */

undefined8 FUN_1029a74f8(void)

{
  return 0x10c;
}



/* Entry: 1029a7500; end: 1029a761b;  */

void FUN_1029a7500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1105799e8;
  func_0x000107c613fc(&UNK_1105799e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029a761c,puVar1);
  return;
}



/* Entry: 1029a761c; end: 1029a7623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a761c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1029a7c50();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112ed2df0) = 0;
  *(undefined8 *)(lVar5 + _DAT_112ed2df8) = 0;
  *(long *)(lVar5 + _DAT_112ed2e00) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ed2e08) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1029a7624; end: 1029a769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7624(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2df0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2df8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2e00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2e08) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a76a0; end: 1029a7777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a76a0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112ed2df0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ed2df0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(0x112ed2e38,&UNK_10dafad48);
    func_0x000107c610f8();
    uVar4 = uStack_48;
    func_0x00010017da58(uStack_48);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1029a7778; end: 1029a7923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a7778(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_112ed2df8;
  ppuVar6 = &puStack_80;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ed2df8);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x000107c61168(PTR_PTR_1126aeae0);
    func_0x000107c3cf30();
    func_0x000107c61180();
    puVar4 = puVar3;
    FUN_1029a7c94();
    puVar5 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8(PTR_PTR_1126aeaf0);
    func_0x000107c5fadc(puVar4,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48dac(puVar5);
    func_0x000107c61170(puVar4);
    puVar2 = &UNK_110579a30;
    func_0x000107c613fc(&UNK_110579a30,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar4 = PTR_PTR_1126aeae8;
    func_0x000107c610f8();
    pcStack_60 = FUN_1029a7c70;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ea3124;
    puStack_68 = &UNK_110579a48;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c6157c(puVar2);
    func_0x000107c48560();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c60bd0(ppuVar6);
    puVar3 = puStack_58;
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar7);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 1029a7924; end: 1029a7a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7924(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      func_0x000100083b20(&uStack_60);
      lVar1 = param_1;
      func_0x000107c41408(param_1);
      func_0x000107c61180();
      uVar2 = uStack_60;
      func_0x000107c3ed50(uStack_60);
      func_0x000107c61180();
      func_0x000107c61170(uStack_60);
      func_0x000107c615e8(lVar1);
      FUN_1029a76a0();
      func_0x000107c42c1c();
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029a7a1c; end: 1029a7a47; -[_TtC21MyEnforcementsFeature39MyEnforcementsSettingsRowProviderPlugin sectionRow] */

void FUN_1029a7a1c(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c3cf30();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029a7a48; end: 1029a7a9b; -[_TtC21MyEnforcementsFeature39MyEnforcementsSettingsRowProviderPlugin rowViewModel] */

void FUN_1029a7a48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029a7778();
  uVar2 = uVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029a7a9c; end: 1029a7afb; -[_TtC21MyEnforcementsFeature39MyEnforcementsSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001029a7adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a7ae0) */

void FUN_1029a7a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029a7778();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029a7afc; end: 1029a7b87; -[_TtC21MyEnforcementsFeature39MyEnforcementsSettingsRowProviderPlugin myEnforcementsDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001029a7b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a7b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a7b34) */
/* WARNING: Removing unreachable block (ram,0x0001029a7b38) */
/* WARNING: Removing unreachable block (ram,0x0001029a7b6c) */
/* WARNING: Removing unreachable block (ram,0x0001029a7b74) */

void FUN_1029a7afc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029a76a0();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029a7b88; end: 1029a7be7; -[_TtC21MyEnforcementsFeature39MyEnforcementsSettingsRowProviderPlugin init] */

void FUN_1029a7b88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyEnforcementsFeature.MyEnforcementsSettingsRowProviderPlugin",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a7bb4);
  (*pcVar1)();
}



/* Entry: 1029a7be8; end: 1029a7bf7;  */

undefined1  [16] FUN_1029a7be8(void)

{
  return ZEXT816(0x110579a10);
}



/* Entry: 1029a7bf8; end: 1029a7c4f; -[_TtC21MyEnforcementsFeature39MyEnforcementsSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029a7c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a7c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7bf8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed2e00));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed2e08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2df0));
  return;
}



/* Entry: 1029a7c50; end: 1029a7c6f;  */

void FUN_1029a7c50(void)

{
  func_0x000107c61168(&PTR_PTR_112877be0);
  return;
}



/* Entry: 1029a7c70; end: 1029a7c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7c70(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      func_0x000100083b20(&uStack_60);
      lVar2 = param_1;
      func_0x000107c41408(param_1);
      func_0x000107c61180();
      uVar3 = uStack_60;
      func_0x000107c3ed50(uStack_60);
      func_0x000107c61180();
      func_0x000107c61170(uStack_60);
      func_0x000107c615e8(lVar2);
      FUN_1029a76a0();
      func_0x000107c42c1c();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029a7c94; end: 1029a7d63;  */

undefined1  [16] FUN_1029a7c94(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x73676e6974746573;
  func_0x000107c5fadc(0x73676e6974746573,0xee00656c7469745f);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0d3620);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a7d64);
  (*pcVar1)();
}



/* Entry: 1029a7d64; end: 1029a7e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029a7d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ed2e48;
  func_0x000107c61614(unaff_x20 + _DAT_112ed2e48,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed2e40) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1029a7e20; end: 1029a7ec3; -[_TtC19MyEnforcementsScope19MyEnforcementsScope initWithDeckContainerFactory:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112ed2e48;
  func_0x000107c61614(param_1 + _DAT_112ed2e48,0);
  *(undefined8 *)(param_1 + _DAT_112ed2e40) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1029a7ec4; end: 1029a7f1f; -[_TtC19MyEnforcementsScope19MyEnforcementsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029a7ec4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed2e40));
  param_1 = param_1 + _DAT_112ed2e48;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029a7f20; end: 1029a7f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7f20(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033e3e0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed2e58) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029a7f88; end: 1029a7fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a7f88(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2e58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a7fd4; end: 1029a80bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029a7fd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x0001003341f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ed2e48;
  func_0x000107c61614(lVar4 + _DAT_112ed2e48,0);
  *(long *)(lVar4 + _DAT_112ed2e40) = param_1;
  func_0x000107c61428(lVar4 + lVar2,auStack_58,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar5;
}



/* Entry: 1029a80bc; end: 1029a812f; -[_TtC19MyEnforcementsScope27MyEnforcementsScopeServices buildWithDeckContainerFactory:delegate:] */

void FUN_1029a80bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1029a7fd4(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029a8130; end: 1029a8133;  */

void FUN_1029a8130(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029a8134; end: 1029a8167;  */

void FUN_1029a8134(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029a8168; end: 1029a819b; -[_TtC19MyEnforcementsScope27MyEnforcementsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a8168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed2e58));
  return;
}



/* Entry: 1029a819c; end: 1029a834b;  */

void FUN_1029a819c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_110579be0;
  func_0x000107c613fc(&UNK_110579be0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1029a8240,puVar1);
  return;
}



/* Entry: 1029a834c; end: 1029a835b;  */

undefined1  [16] FUN_1029a834c(void)

{
  return ZEXT816(0x110579c08);
}



/* Entry: 1029a835c; end: 1029a83c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a835c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029a8750();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed2ed8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029a83c8; end: 1029a8433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a83c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2ed8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029a8434; end: 1029a8493; -[_TtC37MyReportsScopedFactoryServiceProvider23MyReportsScopedServices init] */

void FUN_1029a8434(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsScopedFactoryServiceProvider.MyReportsScopedServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a8460);
  (*pcVar1)();
}



/* Entry: 1029a8494; end: 1029a84a3; -[_TtC37MyReportsScopedFactoryServiceProvider23MyReportsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a8494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed2ed8));
  return;
}



/* Entry: 1029a84a4; end: 1029a850f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a84a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110579de0;
  func_0x000107c613fc(&UNK_110579de0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029a87e8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029a8510; end: 1029a85ab;  */

void FUN_1029a8510(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110579cf0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110579cf0;
  return;
}



/* Entry: 1029a85ac; end: 1029a85e3;  */

void FUN_1029a85ac(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1029a85e4; end: 1029a85eb;  */

undefined8 FUN_1029a85e4(void)

{
  return 0x1b;
}



/* Entry: 1029a85ec; end: 1029a871f;  */

void FUN_1029a85ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110579e08;
  func_0x000107c613fc(&UNK_110579e08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029a87c0;
  func_0x00010058fa64(FUN_1029a87c0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029a8720; end: 1029a874f;  */

undefined ** FUN_1029a8720(void)

{
  return &PTR_DAT_112ed3408;
}



/* Entry: 1029a8750; end: 1029a876f;  */

void FUN_1029a8750(void)

{
  func_0x000107c61168(&PTR_PTR_112877e40);
  return;
}



/* Entry: 1029a8770; end: 1029a87bf;  */

undefined1  [16] FUN_1029a8770(void)

{
  return ZEXT816(0x110579d40);
}



/* Entry: 1029a87c0; end: 1029a87e7;  */

void FUN_1029a87c0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029a87e8; end: 1029a87eb;  */

void FUN_1029a87e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029a87ec; end: 1029a88db;  */

/* WARNING: Possible PIC construction at 0x0001029a889c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a88ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a88bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a88b0) */
/* WARNING: Removing unreachable block (ram,0x0001029a88a0) */
/* WARNING: Removing unreachable block (ram,0x0001029a88c0) */

void FUN_1029a87ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110579e90;
  func_0x000107c613fc(&UNK_110579e90,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112ed2f48;
  func_0x0001000285a8(0x112ed2f48,&UNK_10dafb088);
  func_0x000107c613fc();
  pcVar3 = FUN_1029a8d04;
  func_0x0001000841fc(FUN_1029a8d04,puVar1,uVar2);
  func_0x000100084214(&UNK_10dafb060,0x25,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029a88dc; end: 1029a88fb;  */

/* WARNING: Possible PIC construction at 0x0001029a889c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a88ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029a88bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a88b0) */
/* WARNING: Removing unreachable block (ram,0x0001029a88a0) */
/* WARNING: Removing unreachable block (ram,0x0001029a88c0) */

void FUN_1029a88dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_110579e90;
  func_0x000107c613fc(&UNK_110579e90,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112ed2f48;
  func_0x0001000285a8(0x112ed2f48,&UNK_10dafb088);
  func_0x000107c613fc();
  pcVar8 = FUN_1029a8d04;
  func_0x0001000841fc(FUN_1029a8d04,puVar6,uVar7);
  func_0x000100084214(&UNK_10dafb060,0x25,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029a88fc; end: 1029a8cb7;  */

void FUN_1029a88fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed2f50,&UNK_10dafb090);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029a9de4();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_1029a9e70();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029a85ac;
  func_0x0001000823a8(FUN_1029a85ac,0);
  func_0x000100082720("MyReportsScopedServicesCleanupRelayServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ed2f58,&UNK_10dafb0a0);
  puVar5 = &UNK_110579eb8;
  func_0x000107c613fc(&UNK_110579eb8,0x50,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 **)(puVar5 + 0x48) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1029a8d14;
  func_0x0001000823a8(0x1029a8d14,puVar5);
  func_0x000100082720("MyReportsEntryPointWrapperServiceProvider",0x29,2);
  puVar6 = puVar2;
  FUN_1029a9c98();
  func_0x000100082720("MyReportsScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ed2f60,&UNK_10dafb0a8);
  puVar5 = &UNK_110579ee0;
  func_0x000107c613fc(&UNK_110579ee0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1029a8d28;
  func_0x0001000823a8(0x1029a8d28,puVar5);
  func_0x000100082720("MyReportsScopeInitializationPluginRegistryServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed2ee0,&UNK_10dafae60);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1029a8d34;
  func_0x0001000823a8(0x1029a8d34,uVar7);
  func_0x000100082720("MyReportsScopeInitializationServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ed2ed0,&UNK_10dafae50);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029a8d3c;
  func_0x0001000823a8(0x1029a8d3c,uVar8);
  func_0x000100082720("MyReportsScopedServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110579f08;
  func_0x000107c613fc(&UNK_110579f08,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1029a8d44;
  func_0x0001000823a8(0x1029a8d44,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("MyReportsScopeEntryPointProvider",0x20,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1029a8cb8; end: 1029a8d03;  */

void FUN_1029a8cb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029a8d04; end: 1029a8d4b;  */

void FUN_1029a8d04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112ed2f50,&UNK_10dafb090);
  puVar3 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_1029a9de4();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar5 = puVar4;
  FUN_1029a9e70();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1029a85ac;
  func_0x0001000823a8(FUN_1029a85ac,0);
  func_0x000100082720("MyReportsScopedServicesCleanupRelayServiceProvider",0x32,2);
  func_0x0001000285a8(0x112ed2f58,&UNK_10dafb0a0);
  puVar7 = &UNK_110579eb8;
  func_0x000107c613fc(&UNK_110579eb8,0x50,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 *)(puVar7 + 0x38) = uVar11;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 **)(puVar7 + 0x48) = puVar5;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x1029a8d14;
  func_0x0001000823a8(0x1029a8d14,puVar7);
  func_0x000100082720("MyReportsEntryPointWrapperServiceProvider",0x29,2);
  puVar9 = puVar4;
  FUN_1029a9c98();
  func_0x000100082720("MyReportsScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ed2f60,&UNK_10dafb0a8);
  puVar7 = &UNK_110579ee0;
  func_0x000107c613fc(&UNK_110579ee0,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar3;
  *(undefined8 **)(puVar7 + 0x20) = puVar9;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1029a8d28;
  func_0x0001000823a8(0x1029a8d28,puVar7);
  func_0x000100082720("MyReportsScopeInitializationPluginRegistryServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed2ee0,&UNK_10dafae60);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1029a8d34;
  func_0x0001000823a8(0x1029a8d34,uVar10);
  func_0x000100082720("MyReportsScopeInitializationServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ed2ed0,&UNK_10dafae50);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x1029a8d3c;
  func_0x0001000823a8(0x1029a8d3c,uVar11);
  func_0x000100082720("MyReportsScopedServicesServiceProvider",0x26,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_110579f08;
  func_0x000107c613fc(&UNK_110579f08,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x1029a8d44;
  func_0x0001000823a8(0x1029a8d44,puVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("MyReportsScopeEntryPointProvider",0x20,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 1029a8d4c; end: 1029a91fb;  */

void FUN_1029a8d4c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1029a932c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  FUN_1029ab5c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x0001029aaff0();
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  func_0x000107c6157c();
  func_0x0001029ab0a4();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61574(uVar9);
  *param_1 = param_2;
  return;
}



/* Entry: 1029a91fc; end: 1029a926f;  */

void FUN_1029a91fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1029a9270; end: 1029a9277;  */

undefined8 FUN_1029a9270(void)

{
  return 0x1b;
}



/* Entry: 1029a9278; end: 1029a92fb;  */

void FUN_1029a9278(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029a936c,param_2,FUN_1029a9370,param_2,0x1029a9398,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029a92fc; end: 1029a932b;  */

undefined ** FUN_1029a92fc(void)

{
  return &PTR_DAT_112ed3408;
}



/* Entry: 1029a932c; end: 1029a934b;  */

void FUN_1029a932c(void)

{
  func_0x000107c61168(&PTR_PTR_112ed2fd0);
  return;
}



/* Entry: 1029a934c; end: 1029a936f;  */

undefined1  [16] FUN_1029a934c(void)

{
  return ZEXT816(0x110579f60);
}



/* Entry: 1029a9370; end: 1029a93c3;  */

void FUN_1029a9370(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029a93c4; end: 1029a93ff;  */

void FUN_1029a93c4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029a9400();
  func_0x0001000a7f38("MyReportsScopeInitializationPluginRegistryServiceProvider",0x39,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029a9400; end: 1029a95eb;  */

void FUN_1029a9400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11057a600;
  ppuVar4 = &PTR_DAT_112ed3408;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed3068;
  func_0x0001000285a8(0x112ed3068,&UNK_10dafb1f0);
  func_0x0001000a6ee8(&UNK_110579f60,"MyReportsEntryPointWrapperScopeInitializationPluginKey",0x36,2
                      ,FUN_1029a9660,param_1,uVar2,&UNK_110579f60,&PTR_DAT_112ed2f68);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110579fb0;
  func_0x000107c613fc(&UNK_110579fb0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11057a1a8,"MyReportsScopeGraphBridgeScopeInitializationPluginKey",0x35,2,
                      FUN_1029a9668,puVar3,uVar2,&UNK_11057a1a8,&PTR_DAT_112ed3100);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110579fd8;
  func_0x000107c613fc(&UNK_110579fd8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110579d80,"MyReportsScopedServicesScopeInitializationPluginKey",0x33,2,
                      FUN_1029a9750,puVar3,uVar2,&UNK_110579d80,&PTR_DAT_112ed2ee8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed3070;
  func_0x0001000285a8(0x112ed3070,&UNK_10dafb1f8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029a95ec; end: 1029a965f;  */

void FUN_1029a95ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029a978c;
  func_0x0001000823a8(0x1029a978c,param_3);
  func_0x000100082720("MyReportsEntryPointWrapperScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029a9660; end: 1029a9667;  */

void FUN_1029a9660(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029a978c;
  func_0x0001000823a8();
  func_0x000100082720("MyReportsEntryPointWrapperScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029a9668; end: 1029a96a7;  */

void FUN_1029a9668(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029a9f18(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MyReportsScopeGraphBridgeScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029a96a8; end: 1029a974f;  */

void FUN_1029a96a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057a000;
  func_0x000107c613fc(&UNK_11057a000,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029a9784;
  func_0x0001000823a8(FUN_1029a9784,puVar1);
  func_0x000100082720("MyReportsScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029a9750; end: 1029a9757;  */

void FUN_1029a9750(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11057a000;
  func_0x000107c613fc(&UNK_11057a000,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029a9784;
  func_0x0001000823a8(FUN_1029a9784,puVar3);
  func_0x000100082720("MyReportsScopedServicesScopeInitializationPluginProvider",0x38,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029a9758; end: 1029a9783;  */

void FUN_1029a9758(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029a9784; end: 1029a9793;  */

void FUN_1029a9784(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110579e08;
  func_0x000107c613fc(&UNK_110579e08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029a87c0;
  func_0x00010058fa64(FUN_1029a87c0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029a9794; end: 1029a986f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029a9794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029a9ba8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed3078) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed3080) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a9870);
  (*pcVar1)();
}



/* Entry: 1029a9870; end: 1029a98cf; -[_TtC25MyReportsScopeGraphBridge40MyReportsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029a9870(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsScopeGraphBridge.MyReportsScopeGraphBridgeSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029a989c);
  (*pcVar1)();
}



/* Entry: 1029a98d0; end: 1029a9907; -[_TtC25MyReportsScopeGraphBridge40MyReportsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029a98ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029a98f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a98d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3078));
  return;
}



/* Entry: 1029a9908; end: 1029a992f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029a9908(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed3080),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed3078));
  return;
}



/* Entry: 1029a9930; end: 1029a994f;  */

void FUN_1029a9930(void)

{
  func_0x000107c61168(&PTR_PTR_112877f00);
  return;
}



/* Entry: 1029a9950; end: 1029a99d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029a9950(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed30b0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed30b8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029a99d8);
  (*pcVar2)();
}



/* Entry: 1029a99d8; end: 1029a9abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029a99d8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed30b0);
  *(undefined **)(unaff_x20 + _DAT_112ed30b0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed30b8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed30b8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11057a0c8;
  func_0x000107c613fc(&UNK_11057a0c8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029a9ac4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}


