/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029065a4; end: 1029065bb;  */

void FUN_1029065a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e609b8;
  func_0x0001000285a8(0x112e609b8,&UNK_10da68a80);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029065bc; end: 1029066f7;  */

/* WARNING: Possible PIC construction at 0x000102906688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102906698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029066a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029066b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029066c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029066bc) */
/* WARNING: Removing unreachable block (ram,0x0001029066ac) */
/* WARNING: Removing unreachable block (ram,0x00010290669c) */
/* WARNING: Removing unreachable block (ram,0x00010290668c) */
/* WARNING: Removing unreachable block (ram,0x0001029066cc) */

void FUN_1029065bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar10 = &UNK_11056ab68;
  func_0x000107c613fc(&UNK_11056ab68,0x68,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar5;
  *(undefined8 *)(puVar10 + 0x20) = uVar11;
  *(undefined8 *)(puVar10 + 0x28) = uVar6;
  *(undefined8 *)(puVar10 + 0x30) = uVar2;
  *(undefined8 *)(puVar10 + 0x38) = uVar7;
  *(undefined8 *)(puVar10 + 0x40) = uVar3;
  *(undefined8 *)(puVar10 + 0x48) = uVar8;
  *(undefined8 *)(puVar10 + 0x50) = uVar4;
  *(undefined8 *)(puVar10 + 0x58) = uVar9;
  *(undefined8 *)(puVar10 + 0x60) = uVar13;
  uVar11 = 0x112ecca98;
  func_0x0001000285a8(0x112ecca98,&UNK_10daf1370);
  func_0x000107c613fc();
  pcVar12 = FUN_10290677c;
  func_0x0001000841fc(FUN_10290677c,puVar10,uVar11);
  func_0x000100084214(&UNK_10daf1340,0x2d,2);
  *param_1 = pcVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029066f8; end: 102906707;  */

undefined1  [16] FUN_1029066f8(void)

{
  return ZEXT816(0x11056ab48);
}



/* Entry: 102906708; end: 10290677b;  */

void FUN_102906708(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10290677c; end: 102906887;  */

void FUN_10290677c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112eccaa0,&UNK_10daf1378);
  puVar10 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  FUN_102907578();
  func_0x000100082720("MerlinBioPageScopedPlusSubscribeScopeExposerServiceProvider",0x3b,2);
  puVar12 = puVar10;
  FUN_102906ab4(puVar10,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar11,uVar14);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar10);
  func_0x000100082720("PlusMerlinBioPageEntryPointProvider",0x23,2);
  *param_1 = (long)puVar12;
  return;
}



/* Entry: 102906888; end: 102906933;  */

/* WARNING: Possible PIC construction at 0x0001029068d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029068ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029068d4) */
/* WARNING: Removing unreachable block (ram,0x0001029068f8) */
/* WARNING: Removing unreachable block (ram,0x0001029068d8) */
/* WARNING: Removing unreachable block (ram,0x0001029068f0) */

void FUN_102906888(code *param_1,undefined8 param_2,long param_3)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c5fadc();
    func_0x000107c6142c(0xe000000000000000);
    (*param_1)(param_3);
  }
  else {
    func_0x000107c4cd80();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102906934; end: 10290698b;  */

void FUN_102906934(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_4 != 0) {
    func_0x000107c56624();
    func_0x000107c61170(param_4);
  }
  (*param_2)();
  return;
}



/* Entry: 10290698c; end: 1029069cf; -[_TtC33SCPlusMerlinBioPageImplementation31PlusMerlinBioPageViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290698c(long param_1)

{
  param_1 = param_1 + _DAT_112eccab0;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4cd84();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1029069d0; end: 1029069d7; -[_TtC33SCPlusMerlinBioPageImplementation31PlusMerlinBioPageViewController pageViewName] */

undefined8 FUN_1029069d0(void)

{
  return 200;
}



/* Entry: 1029069d8; end: 102906a37; -[_TtC33SCPlusMerlinBioPageImplementation31PlusMerlinBioPageViewController initWithValdiView:presentationType:] */

void FUN_1029069d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusMerlinBioPageImplementation.PlusMerlinBioPageViewController",0x41,
                      "init(valdiView:presentationType:)",0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102906a04);
  (*pcVar1)();
}



/* Entry: 102906a38; end: 102906a6f; -[_TtC33SCPlusMerlinBioPageImplementation31PlusMerlinBioPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102906a38(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eccaa8));
  param_1 = param_1 + _DAT_112eccab0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102906a70; end: 102906a8f;  */

void FUN_102906a70(void)

{
  func_0x000107c61168(&PTR_PTR_11286fba0);
  return;
}



/* Entry: 102906a90; end: 102906ab3;  */

undefined8 FUN_102906a90(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102906ab4; end: 102906be7;  */

void FUN_102906ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056ac10;
  func_0x000107c613fc(&UNK_11056ac10,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_1029073e0,puVar1);
  return;
}



/* Entry: 102906be8; end: 1029073df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102906be8(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  long lVar25;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000100083b20(&puStack_100);
  puVar2 = puStack_100;
  func_0x000100083b20(&puStack_100);
  puVar5 = puStack_100;
  puVar4 = puStack_100;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(puVar5);
    if (puVar4 != (undefined *)0x0) {
      func_0x000100083b20(&puStack_100);
      puVar5 = puStack_100;
      func_0x000107c5da38();
      func_0x000107c61180();
      func_0x000107c61170(puStack_100);
      puVar6 = puVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      lVar7 = _DAT_112f15328;
      if (puVar6 != (undefined *)0x0) {
        func_0x000107c61428(puVar2 + _DAT_112f15328,auStack_90,0,0);
        puVar5 = puVar2 + lVar7;
        func_0x000107c61618();
        func_0x000100083b20(&lStack_98);
        func_0x000100083b20(&lStack_a0);
        lVar7 = lStack_a0;
        func_0x000107c42eac();
        func_0x000107c61180();
        func_0x000107c61170(lStack_a0);
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029073e0);
          (*pcVar3)();
        }
        func_0x000100083b20(&uStack_a8);
        func_0x000100083b20(&uStack_b0);
        func_0x000100083b20(&uStack_b8);
        func_0x000100083b20(&lStack_c0);
        func_0x000100083b20(&uStack_c8);
        func_0x000100083b20(&uStack_d0);
        uVar24 = *(undefined8 *)(puVar2 + _DAT_112f15320);
        lVar8 = 0;
        FUN_102906a70();
        lVar9 = lVar8;
        func_0x000107c610f8();
        lVar1 = _DAT_112eccab0;
        func_0x000107c61614(lVar9 + _DAT_112eccab0,0);
        puVar10 = PTR_PTR_1126ab8e0;
        func_0x000107c610f8();
        func_0x000107c615f0(puVar4);
        func_0x000107c615f0(puVar6);
        func_0x000107c453e4();
        puVar11 = PTR_PTR_1126b33f0;
        func_0x000107c610f8();
        func_0x000107c4842c();
        puVar12 = &UNK_11056ac58;
        func_0x000107c613fc(&UNK_11056ac58,0x18,7);
        *(long *)(puVar12 + 0x10) = lVar7;
        puVar13 = &UNK_11056ac80;
        func_0x000107c613fc(&UNK_11056ac80,0x18,7);
        *(long *)(puVar13 + 0x10) = lVar7;
        puVar14 = PTR_PTR_1126b3690;
        func_0x000107c610f8();
        puVar18 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0x10290742c;
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0x42000000;
        pcStack_f0 = FUN_10290743c;
        puStack_e8 = &UNK_11056ac98;
        ppuVar15 = &puStack_100;
        puStack_d8 = puVar12;
        func_0x000107c60bc4(ppuVar15);
        uStack_110 = 0x102907434;
        puStack_130 = puVar18;
        uStack_128 = 0x42000000;
        pcStack_120 = FUN_1029074c8;
        puStack_118 = &UNK_11056acc0;
        ppuVar16 = &puStack_130;
        puStack_108 = puVar13;
        func_0x000107c60bc4(ppuVar16);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c46b54();
        func_0x000107c60bd0(ppuVar16);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c61574(puStack_108);
        func_0x000107c61574(puStack_d8);
        puVar12 = PTR_PTR_1126a6630;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x00010439c014(0);
        func_0x000107c610f8();
        uVar17 = 0xaa;
        func_0x00010439b9d8(0xaa,0,0,0xffffffffffffffff,0,0,0xe,0);
        puVar13 = PTR_PTR_1126ab8e8;
        func_0x000107c610f8(PTR_PTR_1126ab8e8);
        func_0x000107c47a24();
        puVar18 = PTR_PTR_1126b35c8;
        func_0x000107c610f8(PTR_PTR_1126b35c8);
        func_0x000107c48f74();
        func_0x000107c59a6c(puVar13);
        func_0x000107c61170(puVar18);
        puVar18 = PTR_PTR_1126b34d8;
        func_0x000107c610f8(PTR_PTR_1126b34d8);
        func_0x000107c47f90();
        func_0x000107c59a7c(puVar13);
        func_0x000107c61170(puVar18);
        lVar25 = lStack_98;
        func_0x000107c3dae4();
        func_0x000107c61180();
        lVar19 = lVar25;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar25);
        if (lVar19 == 0) {
          lVar25 = 0;
        }
        else {
          lVar25 = lVar19;
          func_0x000107c4c1e0(lVar19);
          func_0x000107c61180();
          func_0x000107c615e8(lVar19);
        }
        func_0x000107c52604(puVar13);
        func_0x000107c615e8(lVar25);
        func_0x000106c7424c(uVar24);
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c57734(puVar13);
        func_0x000107c61170(puVar18);
        uVar20 = *(undefined8 *)(lStack_c0 + _DAT_113083898);
        func_0x000107c5c734(uVar20);
        func_0x000107c61180();
        func_0x000107c52d78(puVar13);
        func_0x000107c615e8(uVar20);
        puVar18 = PTR_PTR_1126b34f8;
        func_0x000107c610f8(PTR_PTR_1126b34f8);
        func_0x000107c45974();
        func_0x000107c52c64(puVar13);
        func_0x000107c61170(puVar18);
        puVar21 = PTR_PTR_1126ab8f0;
        func_0x000107c610f8(PTR_PTR_1126ab8f0);
        func_0x000107c49520();
        *(undefined **)(lVar9 + _DAT_112eccaa8) = puVar11;
        func_0x000107c61604(lVar9 + lVar1,puVar5);
        puVar18 = PTR_s_initWithValdiView_presentationTy_1125272a0;
        lStack_140 = lVar9;
        lStack_138 = lVar8;
        func_0x000107c61174(puVar11);
        plVar22 = &lStack_140;
        func_0x000107c61154(plVar22,puVar18,puVar21,uVar24);
        func_0x000107c61180();
        func_0x000107c561c0(puVar11);
        func_0x000107c61174(plVar22);
        plVar23 = plVar22;
        func_0x000106c733b0();
        func_0x000107c61180();
        func_0x000107c5a10c(puVar12);
        func_0x000107c61170(plVar22);
        func_0x000107c615e8(puVar5);
        func_0x000107c615e8(puVar4);
        func_0x000107c615e8(puVar6);
        func_0x000107c61170(lStack_98);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uStack_a8);
        func_0x000107c61170(uStack_b0);
        func_0x000107c61170(uStack_b8);
        func_0x000107c61170(lStack_c0);
        func_0x000107c61170(uStack_c8);
        func_0x000107c61170(uStack_d0);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar21);
        func_0x000107c615e8(plVar23);
        func_0x000100083b20(&puStack_100);
        puVar5 = puStack_100;
        uVar17 = *(undefined8 *)(puStack_100 + _DAT_113097748);
        func_0x000107c615f0(uVar17);
        func_0x000107c61170(puVar5);
        puVar5 = PTR_PTR_1126b3400;
        func_0x000107c610f8();
        func_0x000107c483fc();
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar6);
        func_0x000107c615e8(puVar4);
        func_0x000107c61170(plVar22);
        func_0x000107c61170(plVar22);
        func_0x000107c615e8(uVar17);
        goto LAB_1029073b4;
      }
      func_0x000107c615e8(puVar4);
    }
  }
  puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(puVar2);
LAB_1029073b4:
  *param_1 = puVar5;
  return;
}



/* Entry: 1029073e0; end: 10290741b;  */

void FUN_1029073e0(void)

{
  long unaff_x20;
  
  FUN_102906be8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10290741c; end: 10290743b;  */

undefined1  [16] FUN_10290741c(void)

{
  return ZEXT816(0x11056ac38);
}



/* Entry: 10290743c; end: 1029074ab;  */

/* WARNING: Possible PIC construction at 0x000102907494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102907498) */

void FUN_10290743c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_11056ad20;
  func_0x000107c613fc(&UNK_11056ad20,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x102907560,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1029074ac; end: 1029074c7;  */

void FUN_1029074ac(long param_1,long param_2)

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



/* Entry: 1029074c8; end: 102907553;  */

/* WARNING: Possible PIC construction at 0x000102907530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102907534) */

void FUN_1029074c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_11056acf8;
  func_0x000107c613fc(&UNK_11056acf8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102907554; end: 102907577;  */

void FUN_102907554(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010290755c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102907578; end: 1029075c3;  */

void FUN_102907578(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102907650,param_1);
  return;
}



/* Entry: 1029075c4; end: 10290764f;  */

void FUN_1029075c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102907650; end: 10290767f;  */

void FUN_102907650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102907680; end: 10290778b;  */

void FUN_102907680(void)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  long *plVar4;
  long unaff_x22;
  
  plVar4 = *(long **)(unaff_x22 + 0x1f0);
  func_0x00010448a8f4(unaff_x22 + 400);
  func_0x00010448aa5c(unaff_x22 + 0x130);
  func_0x000100e19000(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x41) = *(undefined8 *)(unaff_x22 + 0x161);
  *(undefined8 *)(unaff_x22 + 0x39) = *(undefined8 *)(unaff_x22 + 0x159);
  *(undefined8 *)(unaff_x22 + 0x51) = *(undefined8 *)(unaff_x22 + 0x171);
  *(undefined8 *)(unaff_x22 + 0x49) = *(undefined8 *)(unaff_x22 + 0x169);
  *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)(unaff_x22 + 0x181);
  *(undefined8 *)(unaff_x22 + 0x59) = *(undefined8 *)(unaff_x22 + 0x179);
  *(undefined8 *)(unaff_x22 + 0x21) = *(undefined8 *)(unaff_x22 + 0x141);
  *(undefined8 *)(unaff_x22 + 0x19) = *(undefined8 *)(unaff_x22 + 0x139);
  *(undefined8 *)(unaff_x22 + 0x10) = 10000;
  *(undefined1 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(unaff_x22 + 0x151);
  *(undefined8 *)(unaff_x22 + 0x29) = *(undefined8 *)(unaff_x22 + 0x149);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x00010448a92c(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c6142c(puVar2);
  func_0x000100e19000((undefined8 *)(unaff_x22 + 0x10));
  piVar3 = *(int **)(*plVar4 + 0x80);
  iVar1 = *piVar3;
  plVar4 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1f8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10290778c;
                    /* WARNING: Could not recover jumptable at 0x000102907788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,0xc000000000000000,unaff_x22 + 0x70);
  return;
}



/* Entry: 10290778c; end: 10290782b;  */

void FUN_10290778c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 != 0) {
    func_0x000100e19000(lVar2 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10290782c,0,0);
    return;
  }
  func_0x000100e19000(lVar2 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x000102907828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3);
  return;
}



/* Entry: 10290782c; end: 102907867;  */

void FUN_10290782c(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x000102907864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0);
  return;
}



/* Entry: 102907868; end: 102907887;  */

void FUN_102907868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x260) = param_3;
  *(undefined8 *)(unaff_x22 + 600) = param_2;
  *(undefined8 *)(unaff_x22 + 0x250) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102907888,0,0);
  return;
}



/* Entry: 102907888; end: 102907997;  */

void FUN_102907888(void)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  long *plVar4;
  long unaff_x22;
  
  plVar4 = *(long **)(unaff_x22 + 0x260);
  func_0x00010448a8f4(unaff_x22 + 0x1f0);
  func_0x00010448aa5c(unaff_x22 + 400);
  func_0x000100e19000(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x41) = *(undefined8 *)(unaff_x22 + 0x1c1);
  *(undefined8 *)(unaff_x22 + 0x39) = *(undefined8 *)(unaff_x22 + 0x1b9);
  *(undefined8 *)(unaff_x22 + 0x51) = *(undefined8 *)(unaff_x22 + 0x1d1);
  *(undefined8 *)(unaff_x22 + 0x49) = *(undefined8 *)(unaff_x22 + 0x1c9);
  *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)(unaff_x22 + 0x1e1);
  *(undefined8 *)(unaff_x22 + 0x59) = *(undefined8 *)(unaff_x22 + 0x1d9);
  *(undefined8 *)(unaff_x22 + 0x21) = *(undefined8 *)(unaff_x22 + 0x1a1);
  *(undefined8 *)(unaff_x22 + 0x19) = *(undefined8 *)(unaff_x22 + 0x199);
  *(undefined8 *)(unaff_x22 + 0x10) = 60000;
  *(undefined1 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(unaff_x22 + 0x1b1);
  *(undefined8 *)(unaff_x22 + 0x29) = *(undefined8 *)(unaff_x22 + 0x1a9);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x00010448a92c(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c6142c(puVar2);
  func_0x000100e19000((undefined8 *)(unaff_x22 + 0x10));
  piVar3 = *(int **)(*plVar4 + 0x78);
  iVar1 = *piVar3;
  plVar4 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x268) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102907998;
                    /* WARNING: Could not recover jumptable at 0x000102907994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar4,unaff_x22 + 0xd0,*(undefined8 *)(unaff_x22 + 600),unaff_x22 + 0x70);
  return;
}



/* Entry: 102907998; end: 102907a5f;  */

void FUN_102907998(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x270) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x268));
  if (unaff_x20 != 0) {
    func_0x000100e19000(lVar2 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102907a60,0,0);
    return;
  }
  uVar11 = *(undefined8 *)(lVar2 + 0xd8);
  uVar8 = *(undefined8 *)(lVar2 + 0xd0);
  uVar6 = *(undefined8 *)(lVar2 + 0xe8);
  uVar4 = *(undefined8 *)(lVar2 + 0xe0);
  uVar12 = *(undefined8 *)(lVar2 + 0xf8);
  uVar9 = *(undefined8 *)(lVar2 + 0xf0);
  uVar15 = *(undefined8 *)(lVar2 + 0x108);
  uVar14 = *(undefined8 *)(lVar2 + 0x100);
  uVar13 = *(undefined8 *)(lVar2 + 0x118);
  uVar10 = *(undefined8 *)(lVar2 + 0x110);
  uVar7 = *(undefined8 *)(lVar2 + 0x128);
  uVar5 = *(undefined8 *)(lVar2 + 0x120);
  func_0x000100e19000(lVar2 + 0x130);
  puVar1 = *(undefined8 **)(lVar2 + 0x250);
  puVar1[1] = uVar11;
  *puVar1 = uVar8;
  puVar1[3] = uVar6;
  puVar1[2] = uVar4;
  puVar1[5] = uVar12;
  puVar1[4] = uVar9;
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[9] = uVar13;
  puVar1[8] = uVar10;
  puVar1[0xb] = uVar7;
  puVar1[10] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000102907a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 102907a60; end: 102907aa3;  */

void FUN_102907a60(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x270));
  puVar1 = *(undefined8 **)(unaff_x22 + 0x250);
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000102907aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102907aa4; end: 102907b7b;  */

void FUN_102907aa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [40];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1dd8;
  uVar4 = param_2;
  func_0x000107c5faec();
  uStack_88 = 0;
  uStack_80 = 0x201;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  ppuStack_98 = ppuVar3;
  uStack_90 = uVar4;
  func_0x0001000a8868(param_1,uVar1);
  (**(code **)(lVar2 + 8))
            (auStack_c0,0xd000000000000013,0x800000010f0cbb80,&ppuStack_98,param_2,uVar1,lVar2);
  func_0x000100e1b054(&ppuStack_98);
  func_0x000102914a54(0);
  func_0x000107c613fc();
  FUN_102914520(auStack_c0);
  return;
}



/* Entry: 102907b7c; end: 102907ceb;  */

/* WARNING: Possible PIC construction at 0x000102907c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102907ca4: Changing call to branch */

void FUN_102907b7c(void)

{
  long lVar1;
  long unaff_x20;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126e1c40;
    func_0x000107c610f8(PTR_PTR_1126e1c40);
    func_0x000107c453e4();
    func_0x000107c59560();
    func_0x000107c54e24(puVar2);
    func_0x000107c59558(puVar2);
    func_0x000107c57980(puVar2);
    lVar1 = *(long *)(unaff_x20 + 0x30);
    if (lVar1 == 0) {
      lVar1 = *(long *)(unaff_x20 + 0x18);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c4bfb0();
        func_0x000107c615e8(lVar1);
      }
    }
    else {
      puVar3 = *(undefined **)(unaff_x20 + 0x28);
      func_0x000107c61434(lVar1);
      func_0x000107c5fadc(puVar3,lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c53d9c(puVar2);
      puVar2 = puVar3;
    }
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x30);
    if (lVar4 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = *(undefined **)(unaff_x20 + 0x28);
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(puVar2,lVar4);
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c4bc3c(lVar1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102907cec; end: 1029080cb;  */

undefined *
FUN_102907cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 *param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = PTR_PTR_1126c4370;
  func_0x000107c610f8(PTR_PTR_1126c4370);
  func_0x000107c453e4();
  func_0x000107c59560();
  func_0x000107c54e24(puVar3);
  func_0x000107c59558(puVar3);
  func_0x000107c54e2c(puVar3);
  func_0x000107c58dd8(puVar3);
  func_0x000107c55acc(puVar3);
  func_0x000107c57980(puVar3);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c61434(lVar7);
    func_0x000107c5fadc(uVar6,lVar7);
    func_0x000107c6142c(lVar7);
    func_0x000107c53d9c(puVar3);
    func_0x000107c61170(uVar6);
  }
  if (param_5 != 0) {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c54e18(puVar3);
    func_0x000107c61170(param_4);
  }
  if (param_6[1] != 0) {
    lVar7 = param_6[2];
    uVar5 = param_6[3];
    uVar8 = param_6[4];
    uVar6 = *param_6;
    func_0x000107c5fadc(uVar6);
    func_0x000107c5647c(puVar3);
    func_0x000107c61170(uVar6);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 != 0) {
      func_0x00010290e1dc(0,lVar7,0);
      do {
        puVar4 = PTR_PTR_1126e2ba0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c59874();
        func_0x000107c59dcc(puVar4);
        uVar1 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          func_0x00010290e1dc(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
        *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uVar6 = 0;
      func_0x0001013903f0(0);
      puVar4 = puVar2;
      func_0x000107c5fc48(puVar2,uVar6);
      func_0x000107c61574(puVar2);
      func_0x000107c59880(puVar3);
      func_0x000107c61170(puVar4);
    }
    if ((param_1 == 2) && (func_0x000107c54e1c(puVar3), uVar8 != 0)) {
      uVar1 = uVar5 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar1 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000107c5fadc(uVar5,uVar8);
        func_0x000107c54664(puVar3);
        func_0x000107c61170(uVar5);
      }
    }
  }
  return puVar3;
}



/* Entry: 1029080cc; end: 10290815b;  */

void FUN_1029080cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126c4370;
  func_0x000107c610f8(PTR_PTR_1126c4370);
  func_0x000107c453e4();
  func_0x000107c59560();
  func_0x000107c54e24(puVar1,param_2,0);
  func_0x000107c59558(puVar1,param_2,*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c54e2c(puVar1,param_2,3);
  func_0x000107c58dd8(puVar1,param_2,0);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10290815c; end: 1029081c3;  */

void FUN_10290815c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x00010290835c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined2 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029081c4; end: 1029081e3;  */

void FUN_1029081c4(void)

{
  FUN_102907b7c();
  return;
}



/* Entry: 1029081e4; end: 1029081e7;  */

void FUN_1029081e4(void)

{
  return;
}



/* Entry: 1029081e8; end: 10290825f;  */

void FUN_1029081e8(undefined8 param_1)

{
  func_0x000102907fcc(param_1,2);
  return;
}



/* Entry: 102908260; end: 102908263;  */

void FUN_102908260(void)

{
  return;
}



/* Entry: 102908264; end: 102908287;  */

void FUN_102908264(undefined8 param_1)

{
  func_0x000102907fcc(param_1,0);
  return;
}



/* Entry: 102908288; end: 10290828f;  */

void FUN_102908288(void)

{
  return;
}



/* Entry: 102908290; end: 10290830b;  */

void FUN_102908290(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar8;
  uVar7 = *(undefined8 *)((long)param_1 + 0x1a);
  uVar5 = *(undefined2 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x62) = *(undefined8 *)((long)param_1 + 0x22);
  *(undefined8 *)(unaff_x20 + 0x5a) = uVar7;
  FUN_10290830c(param_1,auStack_80);
  func_0x00010290835c(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  return;
}



/* Entry: 10290830c; end: 1029083df;  */

undefined8 FUN_10290830c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112eccba8;
  func_0x0001000285a8(0x112eccba8,&UNK_10daf14f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1029083e0; end: 102908d2f;  */

void FUN_1029083e0(undefined8 param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_c0 [48];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_1;
      func_0x000107c5fadc(param_1,param_2);
    }
    func_0x000107c4bc3c(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar6);
  }
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = (undefined2)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_6e = *(undefined8 *)(unaff_x20 + 0x62);
  uStack_76 = (undefined6)*(undefined8 *)(unaff_x20 + 0x5a);
  uStack_70 = (undefined2)((ulong)*(undefined8 *)(unaff_x20 + 0x5a) >> 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar3 = *(undefined2 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x62) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  FUN_10290830c(&uStack_90,auStack_c0);
  func_0x00010290835c(uVar6,uVar1,uVar5,uVar2,uVar7,uVar3);
  uVar6 = 0;
  if (param_4 != '\x01') {
    uVar6 = param_3;
  }
  uVar5 = 0;
  FUN_102907cec(0,1,uVar6,param_1,param_2,&uStack_90);
  func_0x000102908398(&uStack_90);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 102908d30; end: 102908d63;  */

void FUN_102908d30(void)

{
  long unaff_x20;
  
  func_0x000102908564(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102908d64; end: 10290948f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102908d64(long param_1,long param_2,undefined1 *param_3,long param_4,long param_5,long param_6,
             long param_7,long param_8,undefined8 param_9,long param_10)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined1 auStack_140 [16];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined *apuStack_108 [5];
  undefined1 auStack_e0 [40];
  undefined *apuStack_b8 [3];
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  func_0x000107c610f8();
  lVar5 = _DAT_112eccbb8;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eccbc0) = 0xffffffffffffffff;
  *(undefined1 *)(unaff_x20 + _DAT_112eccbc8) = 0;
  *(long *)(unaff_x20 + _DAT_112eccbd0) = param_2;
  *(undefined1 **)(unaff_x20 + _DAT_112eccbd8) = param_3;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = param_1;
  func_0x000107c42e68();
  func_0x000107c61180();
  *(long *)(unaff_x20 + _DAT_112eccbe0) = lVar5;
  lVar5 = _DAT_113083868;
  *(undefined8 *)(unaff_x20 + _DAT_112eccbe8) = *(undefined8 *)(param_10 + _DAT_113083868);
  func_0x000107c61174();
  lVar4 = param_1;
  func_0x000107c42e68();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_10 + lVar5);
  lVar5 = 0;
  func_0x0001029081a4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x62) = 0;
  *(undefined8 *)(lVar5 + 0x5a) = 0;
  *(long *)(lVar5 + 0x10) = lVar4;
  *(undefined8 *)(lVar5 + 0x18) = uVar15;
  *(long *)(unaff_x20 + _DAT_112eccbf0) = lVar5;
  func_0x000107c61174(uVar15);
  lVar5 = param_1;
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar4 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4fe00();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar6;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar6);
    lVar6 = lVar4;
    func_0x000107c4fe08();
    uVar2 = (undefined1)lVar6;
    if (lVar5 == 1) {
      *(undefined1 *)(unaff_x20 + _DAT_112eccbf8) = uVar2;
      goto LAB_102908f78;
    }
    if (lVar5 == 3) {
      uVar2 = 0;
      *(undefined1 *)(unaff_x20 + _DAT_112eccbf8) = 1;
      goto LAB_102908f78;
    }
  }
  uVar2 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eccbf8) = 0;
LAB_102908f78:
  apuStack_b8[0] = (undefined *)CONCAT71(apuStack_b8[0]._1_7_,uVar2);
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  ppuVar7 = apuStack_b8;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + _DAT_112eccc00) = ppuVar7;
  lVar6 = param_6;
  func_0x000107c43d30();
  func_0x000107c61180();
  lVar8 = param_7;
  func_0x000107c40430();
  func_0x000107c61180();
  lVar5 = _DAT_11307d3d8;
  func_0x000100083b20(&puStack_130);
  pcVar1 = pcStack_110;
  puVar3 = puStack_118;
  func_0x0001000a8868(&puStack_130,puStack_118);
  (**(code **)(pcVar1 + 8))(auStack_e0,puVar3,pcVar1);
  lVar9 = *(long *)(param_5 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    puStack_a0 = &UNK_11056b360;
    ppuStack_98 = &PTR_DAT_11056b378;
    puVar3 = &UNK_11056ae90;
    func_0x000107c613fc(&UNK_11056ae90,0x30,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10daf1550;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined **)(puVar3 + 0x20) = &UNK_10daf1558;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    puStack_78 = &UNK_11056b020;
    ppuStack_70 = &PTR_DAT_11056b030;
    apuStack_b8[0] = puVar3;
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar8);
  }
  else {
    uVar15 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010f0cbba0);
    lVar10 = lVar9;
    func_0x000107c4e60c(lVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000103e3687c(apuStack_b8);
    lVar11 = lVar10;
    func_0x000107c614f0(lVar10);
    ppuVar7 = apuStack_b8;
    FUN_102907aa4(ppuVar7,lVar10,lVar11);
    func_0x0001000834e4(apuStack_b8);
    FUN_10290a340(param_8 + lVar5,apuStack_b8);
    puVar3 = &UNK_11056af30;
    func_0x000107c613fc(&UNK_11056af30,0x38,7);
    func_0x000100d0ffa8(apuStack_b8,puVar3 + 0x10);
    puStack_78 = &UNK_11056b1a8;
    ppuStack_70 = &PTR_DAT_11056b1c8;
    puVar12 = &UNK_11056af58;
    func_0x000107c613fc(&UNK_11056af58,0x58,7);
    puStack_90 = puVar12;
    FUN_10290a340(auStack_e0,puVar12 + 0x20);
    *(long *)(puVar12 + 0x10) = lVar6;
    *(long *)(puVar12 + 0x18) = lVar8;
    *(undefined **)(puVar12 + 0x48) = &UNK_10daf1580;
    *(undefined ***)(puVar12 + 0x50) = ppuVar7;
    puStack_a0 = &UNK_11056b360;
    ppuStack_98 = &PTR_DAT_11056b378;
    puVar12 = &UNK_11056ae90;
    func_0x000107c613fc(&UNK_11056ae90,0x30,7);
    apuStack_b8[0] = puVar12;
    func_0x000107c6157c(ppuVar7);
    func_0x000107c615e8(lVar9);
    func_0x000107c615e8(lVar10);
    *(undefined **)(puVar12 + 0x10) = &UNK_10daf1568;
    *(undefined ***)(puVar12 + 0x18) = ppuVar7;
    *(undefined **)(puVar12 + 0x20) = &UNK_10daf1578;
    *(undefined **)(puVar12 + 0x28) = puVar3;
  }
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(&puStack_130);
  FUN_10290a178(apuStack_b8,&puStack_130);
  func_0x000100d0ffa8(&puStack_130,unaff_x20 + _DAT_112eccc10);
  func_0x0001000834e4(apuStack_108);
  FUN_10290a178(apuStack_b8,&puStack_130);
  func_0x000100d0ffa8(apuStack_108,unaff_x20 + _DAT_112eccc18);
  func_0x0001000834e4(&puStack_130);
  puVar13 = auStack_140;
  func_0x000107c61154(puVar13,PTR_s_init_1125d9248);
  lVar5 = param_1;
  lVar6 = param_8;
  if (lVar4 != 0) {
    uVar15 = *(undefined8 *)(puVar13 + _DAT_112eccc00);
    puVar14 = puVar13;
    func_0x000107c61174();
    func_0x000107c615f0(lVar4);
    func_0x000107c6157c(uVar15);
    lVar5 = lVar4;
    func_0x000107c4fe00(lVar4);
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar3 = &UNK_11056aeb8;
    func_0x000107c613fc(&UNK_11056aeb8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar4);
    puVar12 = &UNK_11056aee0;
    func_0x000107c613fc(&UNK_11056aee0,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar3;
    *(undefined8 *)(puVar12 + 0x18) = uVar15;
    pcStack_110 = FUN_10290a210;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0x42000000;
    pcStack_120 = FUN_10290377c;
    puStack_118 = &UNK_11056aef8;
    ppuVar7 = &puStack_130;
    apuStack_108[0] = puVar12;
    func_0x000107c60bc4(ppuVar7);
    puVar3 = apuStack_108[0];
    func_0x000107c6157c(uVar15);
    func_0x000107c61574(puVar3);
    lVar8 = lVar6;
    func_0x000107c5c320(lVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c3e924(lVar8);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c615ec(lVar4,2);
    func_0x000107c61574(uVar15);
    lVar5 = param_10;
    lVar6 = param_7;
    param_7 = param_6;
    param_6 = param_5;
    param_5 = param_4;
    param_3 = puVar14;
    param_4 = param_1;
    param_10 = lVar8;
    param_2 = param_8;
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar6);
  func_0x000107c61574(param_9);
  func_0x000107c61170(param_10);
  func_0x00010290a1c8(apuStack_b8);
  return puVar13;
}



/* Entry: 102909490; end: 1029095af;  */

void FUN_102909490(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lVar2;
  
  func_0x000107c5bcc0();
  if (param_1 == 1) {
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar2 = param_2;
      func_0x000107c4fe08();
      uVar1 = (undefined1)lVar2;
      func_0x000107c615e8(param_2);
      goto LAB_1029094f4;
    }
  }
  uVar1 = 0;
LAB_1029094f4:
  pcVar3 = 
  "init(plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:unifiedGRPCServices:taskManagementServices:genAICommonServices:contentDeliveryServices:imageFetchingServices:minervaLoggingServices:userBlizzardServices:)"
  ;
  func_0x0001000c10c0(
                     "init(plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:unifiedGRPCServices:taskManagementServices:genAICommonServices:contentDeliveryServices:imageFetchingServices:minervaLoggingServices:userBlizzardServices:)"
                     );
  func_0x000107c61180();
  puVar4 = &UNK_11056b078;
  func_0x000107c613fc(&UNK_11056b078,0x19,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  puVar4[0x18] = uVar1;
  pcStack_40 = FUN_10290a5b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11056b090;
  ppuVar5 = &puStack_60;
  puStack_38 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1029095b0; end: 102909793;  */

/* WARNING: Removing unreachable block (ram,0x0001029096e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029095b0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar4 = 0xfe;
    }
    else {
      if (param_2 != 1) {
LAB_102909770:
        lStack_48 = param_2;
        func_0x000107c60614(&UNK_1106de960,&lStack_48,&UNK_1106de960,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102909794);
        (*pcVar1)();
      }
      uVar4 = 0xff;
    }
  }
  else if (param_2 == 2) {
    uVar4 = 0xc3;
  }
  else {
    if (param_2 != 3) goto LAB_102909770;
    func_0x0001000e48c0();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    uVar4 = param_1;
    func_0x000107c31268();
    func_0x000107c61170(param_1);
  }
  *(undefined8 *)(unaff_x20 + _DAT_112eccbc0) = uVar4;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eccbf0);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  puVar2 = PTR_PTR_1126e22e8;
  func_0x000107c610f8(PTR_PTR_1126e22e8);
  func_0x000107c453e4();
  func_0x000107c545fc();
  func_0x000107c59560(puVar2);
  func_0x000107c59558(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112eccbe8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar3);
  }
  func_0x000104886d18(&lStack_48);
  if (((byte)lStack_48 & 1) != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eccbe0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = 0x54414843;
      func_0x000107c5fadc(0x54414843,0xe400000000000000);
      func_0x000107c4bf6c(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar4);
    }
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102909794; end: 102909813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909794(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eccbe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bc3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102909814; end: 1029099eb;  */

/* WARNING: Possible PIC construction at 0x000102909994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029099a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029098f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102909998) */
/* WARNING: Removing unreachable block (ram,0x0001029099ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909814(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eccbd0);
  uVar5 = param_2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112eccbc8) = 1;
    *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112eccbf0) + 0x38) = 0;
    if (param_3 < 2) {
      if (param_3 == 0) {
        uVar4 = 0xfe;
      }
      else {
        if (param_3 != 1) {
LAB_1029099c8:
          lStack_48 = param_3;
          func_0x000107c60614(&UNK_1106de960,&lStack_48,&UNK_1106de960,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029099ec);
          (*pcVar1)();
        }
        uVar4 = 0xff;
      }
    }
    else {
      if (param_3 != 2) {
        if (param_3 != 3) goto LAB_1029099c8;
        func_0x0001000e48c0(param_2);
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar5);
        func_0x000107c31268(param_2);
        goto code_r0x000107c61170;
      }
      uVar4 = 0xc3;
    }
    func_0x0001000e48c0(param_2);
    uVar2 = 0;
    func_0x00010439c014(0);
    func_0x000107c610f8();
    func_0x00010439b9d8(uVar2,0x108,0,0,uVar4,param_2,uVar5,0x41,0);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eccbd8);
    func_0x00010439a550(0);
    func_0x0001043998c4(0);
    func_0x000107c3eda8(uVar5);
    func_0x000107c61180();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029099ec; end: 102909a27;  */

void FUN_1029099ec(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001029099fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0);
  return;
}



/* Entry: 102909a28; end: 102909ba3;  */

void FUN_102909a28(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  uVar6 = *(ulong *)(unaff_x22 + 200);
  uVar3 = *(ulong *)(unaff_x22 + 0xd0);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    lVar8 = *(long *)(unaff_x22 + 0xd8);
    puVar5 = PTR_PTR_1126aebd8;
    func_0x000107c61168();
    func_0x000107c5fadc(uVar6,uVar3);
    func_0x000107c51834();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    *(undefined **)(unaff_x22 + 0x50) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x3ff0000000000000;
    *(undefined1 *)(unaff_x22 + 0x60) = 2;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x800000010f0cbc00;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x29;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x3ff0000000000000;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined4 *)(unaff_x22 + 0xb8) = 0;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102909ba4;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,0);
    uVar2 = *(undefined8 *)(lVar8 + 0x18);
    lVar4 = *(long *)(lVar8 + 0x20);
    func_0x0001000a8868(lVar8,uVar2);
    puVar5 = &UNK_11056b050;
    func_0x000107c613fc(&UNK_11056b050,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar7;
    (**(code **)(lVar4 + 0x10))(unaff_x22 + 0x50,FUN_10290a5b0,puVar5,uVar2,lVar4);
    func_0x000107c615e8();
    func_0x000107c61574(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102909ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102909ba4; end: 102909c17;  */

void FUN_102909ba4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102909be4,0,0);
  return;
}



/* Entry: 102909c18; end: 102909c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909c18(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  if ((param_3 & 0xff00) == 0x100) {
    **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = 0;
  }
  else {
    **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = *(undefined8 *)(param_1 + _DAT_11307d350);
    func_0x000107c61174();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_4);
  return;
}



/* Entry: 102909c74; end: 102909cd3; -[_TtC24RemixStickerServicesImpl24RemixStickerServicesImpl init] */

void FUN_102909c74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixStickerServicesImpl.RemixStickerServicesImpl",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102909ca0);
  (*pcVar1)();
}



/* Entry: 102909cd4; end: 102909d7b; -[_TtC24RemixStickerServicesImpl24RemixStickerServicesImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102909d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102909d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102909d34) */
/* WARNING: Removing unreachable block (ram,0x000102909d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909cd4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112eccc10);
  func_0x0001000834e4(param_1 + _DAT_112eccc18);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eccbf0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eccc00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eccbd0));
  return;
}



/* Entry: 102909d7c; end: 102909d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102909d7c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_112eccbf8);
}



/* Entry: 102909d9c; end: 102909de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909d9c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10290a340(unaff_x20 + _DAT_112eccc10,param_1);
  return;
}



/* Entry: 102909de4; end: 102909e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909de4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eccbf0);
  uVar1 = 0;
  func_0x0001029081a4();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11056adf8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 102909e28; end: 102909e2f;  */

/* WARNING: Removing unreachable block (ram,0x0001029096e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909e28(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar4 = 0xfe;
    }
    else {
      if (param_2 != 1) {
LAB_102909770:
        lStack_48 = param_2;
        func_0x000107c60614(&UNK_1106de960,&lStack_48,&UNK_1106de960,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102909794);
        (*pcVar1)();
      }
      uVar4 = 0xff;
    }
  }
  else if (param_2 == 2) {
    uVar4 = 0xc3;
  }
  else {
    if (param_2 != 3) goto LAB_102909770;
    func_0x0001000e48c0();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    uVar4 = param_1;
    func_0x000107c31268();
    func_0x000107c61170(param_1);
  }
  *(undefined8 *)(unaff_x20 + _DAT_112eccbc0) = uVar4;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eccbf0);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  puVar2 = PTR_PTR_1126e22e8;
  func_0x000107c610f8(PTR_PTR_1126e22e8);
  func_0x000107c453e4();
  func_0x000107c545fc();
  func_0x000107c59560(puVar2);
  func_0x000107c59558(puVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112eccbe8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar3);
  }
  func_0x000104886d18(&lStack_48);
  if (((byte)lStack_48 & 1) != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eccbe0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = 0x54414843;
      func_0x000107c5fadc(0x54414843,0xe400000000000000);
      func_0x000107c4bf6c(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar4);
    }
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102909e30; end: 102909e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909e30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eccbf0);
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102909e68; end: 102909e6b;  */

/* WARNING: Possible PIC construction at 0x000102909994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029099a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029098f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102909998) */
/* WARNING: Removing unreachable block (ram,0x0001029099ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909e68(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eccbd0);
  uVar5 = param_2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112eccbc8) = 1;
    *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112eccbf0) + 0x38) = 0;
    if (param_3 < 2) {
      if (param_3 == 0) {
        uVar4 = 0xfe;
      }
      else {
        if (param_3 != 1) {
LAB_1029099c8:
          lStack_48 = param_3;
          func_0x000107c60614(&UNK_1106de960,&lStack_48,&UNK_1106de960,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029099ec);
          (*pcVar1)();
        }
        uVar4 = 0xff;
      }
    }
    else {
      if (param_3 != 2) {
        if (param_3 != 3) goto LAB_1029099c8;
        func_0x0001000e48c0(param_2);
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar5);
        func_0x000107c31268(param_2);
        goto code_r0x000107c61170;
      }
      uVar4 = 0xc3;
    }
    func_0x0001000e48c0(param_2);
    uVar2 = 0;
    func_0x00010439c014(0);
    func_0x000107c610f8();
    func_0x00010439b9d8(uVar2,0x108,0,0,uVar4,param_2,uVar5,0x41,0);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eccbd8);
    func_0x00010439a550(0);
    func_0x0001043998c4(0);
    func_0x000107c3eda8(uVar5);
    func_0x000107c61180();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102909e6c; end: 102909f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102909e6c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eccbe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bc3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102909f60; end: 102909faf;  */

void FUN_102909f60(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102909fb0;
  plVar1[2] = unaff_x22 + 0x10;
  lVar2 = 0;
  func_0x000107c5eec8();
  plVar1[3] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[4] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[5] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290a518,0,0);
  return;
}



/* Entry: 102909fb0; end: 10290a003;  */

void FUN_102909fb0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x48);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x38);
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined4 *)((long)puVar1 + 0x2f) = *(undefined4 *)(lVar2 + 0x3f);
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010290a000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 10290a004; end: 10290a0c3;  */

/* WARNING: Removing unreachable block (ram,0x00010290a04c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290a004(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  char cStack_31;
  
  lVar1 = _DAT_112eccbc8;
  if (*(char *)(unaff_x20 + _DAT_112eccbc8) == '\x01') {
    func_0x000104886d18(&cStack_31);
    if (cStack_31 == '\x01') {
      FUN_1029080cc();
    }
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112eccbd0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 10290a0c4; end: 10290a0eb; -[_TtC24RemixStickerServicesImpl24RemixStickerServicesImpl plusSubscribeDidDismiss] */

void FUN_10290a0c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10290a004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10290a0ec; end: 10290a177;  */

void FUN_10290a0ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10290a178; end: 10290a20f;  */

undefined8 FUN_10290a178(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112eccc08;
  func_0x0001000285a8(0x112eccc08,&UNK_10daf1560);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10290a210; end: 10290a233;  */

void FUN_10290a210(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5bcc0();
  if (param_1 == 1) {
    func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c4fe08();
      uVar2 = (undefined1)lVar4;
      func_0x000107c615e8(lVar3);
      goto LAB_1029094f4;
    }
  }
  uVar2 = 0;
LAB_1029094f4:
  pcVar5 = 
  "init(plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:unifiedGRPCServices:taskManagementServices:genAICommonServices:contentDeliveryServices:imageFetchingServices:minervaLoggingServices:userBlizzardServices:)"
  ;
  func_0x0001000c10c0(
                     "init(plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:unifiedGRPCServices:taskManagementServices:genAICommonServices:contentDeliveryServices:imageFetchingServices:minervaLoggingServices:userBlizzardServices:)"
                     );
  func_0x000107c61180();
  puVar6 = &UNK_11056b078;
  func_0x000107c613fc(&UNK_11056b078,0x19,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  puVar6[0x18] = uVar2;
  pcStack_40 = FUN_10290a5b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11056b090;
  ppuVar7 = &puStack_60;
  puStack_38 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_38;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(pcVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 10290a234; end: 10290a27b;  */

void FUN_10290a234(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x210;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10290a73c;
  plVar1[0x3e] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102907680,0,0);
  return;
}



/* Entry: 10290a27c; end: 10290a2db;  */

void FUN_10290a27c(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10290a744;
  plVar1[0x1a] = param_2;
  plVar1[0x1b] = unaff_x20 + 0x10;
  plVar1[0x19] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102909a28,0,0);
  return;
}



/* Entry: 10290a2dc; end: 10290a33f;  */

void FUN_10290a2dc(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x280;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10290a74c;
  plVar1[0x4c] = unaff_x20;
  plVar1[0x4b] = param_2;
  plVar1[0x4a] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102907888,0,0);
  return;
}



/* Entry: 10290a340; end: 10290a383;  */

long FUN_10290a340(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10290a384; end: 10290a3df;  */

void FUN_10290a384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010290a3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3);
  return;
}



/* Entry: 10290a3e0; end: 10290a45f;  */

void FUN_10290a3e0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010290a420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10290a460; end: 10290a477;  */

void FUN_10290a460(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10290a478; end: 10290a497;  */

void FUN_10290a478(void)

{
  func_0x000107c61168(&PTR_PTR_11286fc70);
  return;
}



/* Entry: 10290a498; end: 10290a4b7;  */

undefined1  [16] FUN_10290a498(void)

{
  return ZEXT816(0x11056b000);
}



/* Entry: 10290a4b8; end: 10290a517;  */

void FUN_10290a4b8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290a518,0,0);
  return;
}



/* Entry: 10290a518; end: 10290a5af;  */

void FUN_10290a518(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar2 = *(undefined1 **)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c5eec4(uVar3);
  func_0x000107c5eeac();
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  *puVar2 = 3;
  *(undefined8 *)(puVar2 + 8) = param_1;
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined **)(puVar2 + 0x18) = puVar5;
  *(undefined2 *)(puVar2 + 0x30) = 0x306;
  puVar2[0x32] = 1;
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010290a5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10290a5b0; end: 10290a5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290a5b0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if ((param_3 & 0xff00) == 0x100) {
    **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = 0;
  }
  else {
    **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = *(undefined8 *)(param_1 + _DAT_11307d350);
    func_0x000107c61174();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10290a5b8; end: 10290a5ef;  */

void FUN_10290a5b8(void)

{
  long unaff_x20;
  undefined1 uStack_21;
  
  uStack_21 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x0001007d6d78(*(undefined8 *)(unaff_x20 + 0x10),&uStack_21);
  return;
}



/* Entry: 10290a5f0; end: 10290a663;  */

void FUN_10290a5f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10290a664; end: 10290a6c3;  */

void FUN_10290a664(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10290a748;
  plVar1[0x1a] = param_2;
  plVar1[0x1b] = unaff_x20 + 0x10;
  plVar1[0x19] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102909a28,0,0);
  return;
}



/* Entry: 10290a6c4; end: 10290a727;  */

void FUN_10290a6c4(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x280;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10290a750;
  plVar1[0x4c] = unaff_x20;
  plVar1[0x4b] = param_2;
  plVar1[0x4a] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102907888,0,0);
  return;
}



/* Entry: 10290a728; end: 10290a753;  */

void FUN_10290a728(long param_1,long param_2)

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



/* Entry: 10290a754; end: 10290a7b7;  */

long FUN_10290a754(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10290a7b8; end: 10290a833;  */

undefined8 * FUN_10290a7b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  (*pcVar2)(param_1 + 2,param_2 + 2,lVar3);
  uVar1 = param_2[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 10290a834; end: 10290a8b7;  */

undefined8 * FUN_10290a834(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  func_0x000100083374(param_1 + 2,param_2 + 2);
  uVar2 = param_1[8];
  uVar1 = param_2[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 10290a8b8; end: 10290a923;  */

undefined8 * FUN_10290a8b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(param_1 + 2);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  uVar1 = param_1[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10290a924; end: 10290a9cb;  */

int FUN_10290a924(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10290a9cc; end: 10290aa93;  */

void FUN_10290a9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x328) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 800) = param_4;
  *(undefined8 *)(unaff_x22 + 0x318) = param_3;
  *(undefined8 *)(unaff_x22 + 0x310) = param_2;
  *(undefined8 *)(unaff_x22 + 0x308) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x330) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x338) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x340) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x348) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x350) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x358) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x360) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x368) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x370) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x378) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290aa94,0,0);
  return;
}



/* Entry: 10290aa94; end: 10290b0a7;  */

void FUN_10290aa94(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  double dVar20;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x378);
  lVar10 = *(long *)(unaff_x22 + 0x370);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x360);
  lVar14 = *(long *)(unaff_x22 + 0x338);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
  func_0x000107c5eec4(uVar5);
  func_0x000107c5eeac();
  *(undefined8 *)(unaff_x22 + 0x380) = param_2;
  *(undefined8 *)(unaff_x22 + 0x388) = param_3;
  (**(code **)(lVar10 + 8))(uVar5,uVar4);
  func_0x000107c5eea0(uVar6);
  func_0x000107c5ee8c();
  pcVar18 = *(code **)(lVar14 + 8);
  *(code **)(unaff_x22 + 0x390) = pcVar18;
  (*pcVar18)(uVar6,uVar8);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b03c);
    (*pcVar18)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b040);
    (*pcVar18)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b044);
    (*pcVar18)();
  }
  uVar2 = 0;
  lVar14 = 1;
  FUN_10290d8c0(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar1 = *(ulong *)(uVar2 + 0x10);
  lVar10 = uVar1 + 1;
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    lVar14 = lVar10;
    FUN_10290d8c0(uVar3,lVar10,1,uVar2);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x358);
  lVar7 = *(long *)(unaff_x22 + 0x310);
  *(long *)(uVar3 + 0x10) = lVar10;
  lVar10 = uVar3 + uVar1 * 0x10;
  *(undefined1 *)(lVar10 + 0x20) = 0;
  *(long *)(lVar10 + 0x28) = (long)param_1;
  func_0x000107c5eea0(uVar4);
  dVar20 = 1.0;
  func_0x000107c60bb4();
  func_0x000107c61180();
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar14 = *(long *)(unaff_x22 + 0x328);
    uVar4 = *(undefined8 *)(lVar14 + 0x28);
    lVar10 = *(long *)(lVar14 + 0x30);
    func_0x0001000a8868(lVar14 + 0x10,uVar4);
    (**(code **)(lVar10 + 8))
              (0x4552554c494146,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,0,uVar4,
               lVar10);
    uVar4 = *(undefined8 *)(lVar14 + 0x28);
    lVar10 = *(long *)(lVar14 + 0x30);
    func_0x0001000a8868(lVar14 + 0x10,uVar4);
    func_0x000107c61434(uVar3);
    func_0x000107c5eea0(uVar8);
    func_0x000107c5ee68(uVar6);
    (*pcVar18)(uVar8,uVar5);
    dVar20 = dVar20 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b094);
      (*pcVar18)();
    }
    if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b098);
      (*pcVar18)();
    }
    if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b09c);
      (*pcVar18)();
    }
    (**(code **)(lVar10 + 0x20))(0,0x54535f58494d4552,0xed000052454b4349,(long)dVar20,uVar4,lVar10);
    uVar17 = 0;
  }
  else {
    plVar11 = *(long **)(unaff_x22 + 0x328);
    lVar10 = lVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar7);
    *(long *)(unaff_x22 + 0x398) = lVar10;
    *(long *)(unaff_x22 + 0x3a0) = lVar14;
    lVar7 = *plVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x3a8) = lVar7;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x360);
    if (lVar7 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x330);
      func_0x000107c5eea0(uVar4);
      func_0x000107c5ee8c();
      (*pcVar18)(uVar4,uVar5);
      dVar20 = dVar20 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b068);
        (*pcVar18)();
      }
      if (-9.223372036854778e+18 < dVar20) {
        if (dVar20 < 9.223372036854776e+18) {
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar2 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_10290d8c0(uVar2,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(unaff_x22 + 0x3b0) = uVar2;
          uVar4 = *(undefined8 *)(unaff_x22 + 0x350);
          *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
          lVar12 = uVar2 + uVar1 * 0x10;
          *(undefined1 *)(lVar12 + 0x20) = 1;
          *(long *)(lVar12 + 0x28) = (long)dVar20;
          func_0x000107c5eea0(uVar4);
          plVar11 = (long *)0xb0;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x3b8) = plVar11;
          *plVar11 = unaff_x22;
          plVar11[1] = (long)FUN_10290b0a8;
          plVar11[0x10] = lVar14;
          plVar11[0x11] = lVar7;
          plVar11[0xf] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_10290d9dc,0,0);
          return;
        }
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b070);
        (*pcVar18)();
      }
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b06c);
      (*pcVar18)();
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar12 = *(long *)(unaff_x22 + 0x328);
    uVar5 = *(undefined8 *)(lVar12 + 0x28);
    lVar7 = *(long *)(lVar12 + 0x30);
    func_0x0001000a8868(lVar12 + 0x10,uVar5);
    (**(code **)(lVar7 + 8))
              (0x4552554c494146,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,0,uVar5,
               lVar7);
    func_0x00010006c090(lVar10,lVar14);
    uVar5 = *(undefined8 *)(lVar12 + 0x28);
    lVar10 = *(long *)(lVar12 + 0x30);
    func_0x0001000a8868(lVar12 + 0x10,uVar5);
    func_0x000107c61434(uVar3);
    func_0x000107c5eea0(uVar4);
    func_0x000107c5ee68(uVar8);
    (*pcVar18)(uVar4,uVar6);
    dVar20 = dVar20 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b0a0);
      (*pcVar18)();
    }
    if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b0a4);
      (*pcVar18)();
    }
    if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10290b0a8);
      (*pcVar18)();
    }
    (**(code **)(lVar10 + 0x20))(0,0x54535f58494d4552,0xed000052454b4349,(long)dVar20,uVar5,lVar10);
    uVar17 = 1;
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x340);
  puVar15 = *(undefined8 **)(unaff_x22 + 0x308);
  (**(code **)(unaff_x22 + 0x390))(uVar9,*(undefined8 *)(unaff_x22 + 0x330));
  func_0x000107c6142c(uVar3);
  *puVar15 = 3;
  puVar15[1] = uVar16;
  puVar15[2] = uVar19;
  puVar15[3] = uVar3;
  puVar15[4] = 0;
  puVar15[5] = 0;
  *(undefined1 *)(puVar15 + 6) = uVar17;
  *(undefined2 *)((long)puVar15 + 0x31) = 0x103;
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010290b034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10290b0a8; end: 10290b0f7;  */

void FUN_10290b0a8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x3c0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x3b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290b0f8,0,0);
  return;
}



/* Entry: 10290b0f8; end: 10290b7c7;  */

void FUN_10290b0f8(double param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  
  lVar10 = *(long *)(unaff_x22 + 0x3c0);
  if (lVar10 == 0) {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x398);
    pcVar11 = *(code **)(unaff_x22 + 0x390);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar12 = *(long *)(unaff_x22 + 0x328);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    lVar10 = *(long *)(lVar12 + 0x30);
    func_0x0001000a8868(lVar12 + 0x10,uVar7);
    (**(code **)(lVar10 + 8))
              (0x4552554c494146,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,0,uVar7,
               lVar10);
    func_0x000107c615e8(uVar20);
    func_0x00010006c090(uVar18,uVar9);
    (*pcVar11)(uVar14,uVar15);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    lVar10 = *(long *)(lVar12 + 0x30);
    func_0x0001000a8868(lVar12 + 0x10,uVar7);
    func_0x000107c61434(uVar19);
    func_0x000107c5eea0(uVar13);
    func_0x000107c5ee68(uVar17);
    (*pcVar11)(uVar13,uVar15);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b7b4);
      (*pcVar11)();
    }
    if (-9.223372036854778e+18 < param_1) {
      if (param_1 < 9.223372036854776e+18) {
        (**(code **)(lVar10 + 0x20))
                  (0,0x54535f58494d4552,0xed000052454b4349,(long)param_1,uVar7,lVar10);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x3b0);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x388);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x380);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x378);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x360);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x358);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x350);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x348);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x340);
        puVar16 = *(undefined8 **)(unaff_x22 + 0x308);
        (**(code **)(unaff_x22 + 0x390))(uVar13,*(undefined8 *)(unaff_x22 + 0x330));
        func_0x000107c6142c(uVar17);
        *puVar16 = 3;
        puVar16[1] = uVar18;
        puVar16[2] = uVar15;
        puVar16[3] = uVar17;
        puVar16[4] = 0;
        puVar16[5] = 0;
        *(undefined2 *)(puVar16 + 6) = 0x302;
        *(undefined1 *)((long)puVar16 + 0x32) = 1;
        func_0x000107c615c0(uVar9);
        func_0x000107c615c0(uVar19);
        func_0x000107c615c0(uVar13);
        func_0x000107c615c0(uVar20);
        func_0x000107c615c0(uVar14);
        func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010290b748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b7bc);
      (*pcVar11)();
    }
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b7b8);
    (*pcVar11)();
  }
  pcVar11 = *(code **)(unaff_x22 + 0x390);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x330);
  func_0x000107c5eea0(uVar9);
  func_0x000107c5ee8c();
  (*pcVar11)(uVar9,uVar7);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b750);
    (*pcVar11)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b754);
    (*pcVar11)();
  }
  dVar21 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b758);
    (*pcVar11)();
  }
  uVar8 = *(ulong *)(unaff_x22 + 0x3b0);
  uVar5 = *(ulong *)(uVar8 + 0x10);
  uVar4 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_10290d8c0(uVar4,uVar5 + 1,1,uVar8);
  }
  pcVar11 = *(code **)(unaff_x22 + 0x390);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x330);
  lVar6 = *(long *)(unaff_x22 + 0x328);
  *(ulong *)(uVar4 + 0x10) = uVar5 + 1;
  lVar12 = uVar4 + uVar5 * 0x10;
  *(undefined1 *)(lVar12 + 0x20) = 2;
  *(long *)(lVar12 + 0x28) = (long)param_1;
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  lVar12 = *(long *)(lVar6 + 0x30);
  func_0x0001000a8868(lVar6 + 0x10,uVar7);
  func_0x000107c5eea0(uVar9);
  func_0x000107c5ee68(uVar17);
  (*pcVar11)(uVar9,uVar19);
  dVar21 = dVar21 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b77c);
    (*pcVar11)();
  }
  if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b780);
    (*pcVar11)();
  }
  if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b784);
    (*pcVar11)();
  }
  uVar5 = 0xe700000000000000;
  (**(code **)(lVar12 + 8))
            (0x53534543435553,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,(long)dVar21,
             uVar7,lVar12);
  dVar21 = 0.0;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  lVar12 = lVar10;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b7c0);
    (*pcVar11)();
  }
  lVar6 = lVar12;
  func_0x000107c5faec();
  uVar8 = uVar5;
  func_0x000107c61170(lVar12);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  *(ulong *)(unaff_x22 + 0xd8) = uVar5;
  lVar12 = lVar10;
  func_0x000107c4271c();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b7c4);
    (*pcVar11)();
  }
  lVar6 = lVar12;
  func_0x000107c5faec();
  func_0x000107c61170(lVar12);
  uVar5 = uVar8;
  func_0x000107c5ee08(lVar6,uVar8,0);
  func_0x000107c6142c(uVar8);
  lVar12 = 0;
  if (uVar5 >> 0x3c < 0xf) {
    lVar12 = lVar6;
  }
  uVar8 = 0xc000000000000000;
  if (uVar5 >> 0x3c < 0xf) {
    uVar8 = uVar5;
  }
  uVar5 = 0xc000000000000000;
  func_0x00010006c090(0);
  *(long *)(unaff_x22 + 0xe0) = lVar12;
  *(ulong *)(unaff_x22 + 0xe8) = uVar8;
  func_0x000107c42718();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b7c8);
    (*pcVar11)();
  }
  pcVar11 = *(code **)(unaff_x22 + 0x390);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar13 = *(undefined8 *)(unaff_x22 + 800);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x318);
  lVar12 = lVar10;
  func_0x000107c5faec();
  func_0x000107c61170(lVar10);
  uVar8 = uVar5;
  func_0x000107c5ee08(lVar12,uVar5,0);
  func_0x000107c6142c(uVar5);
  lVar10 = 0;
  if (uVar8 >> 0x3c < 0xf) {
    lVar10 = lVar12;
  }
  uVar5 = 0xc000000000000000;
  if (uVar8 >> 0x3c < 0xf) {
    uVar5 = uVar8;
  }
  func_0x00010006c090(0,0xc000000000000000);
  *(long *)(unaff_x22 + 0xf0) = lVar10;
  *(ulong *)(unaff_x22 + 0xf8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar19;
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar19);
  func_0x000107c5eea0(uVar9);
  func_0x000107c5ee8c();
  (*pcVar11)(uVar9,uVar7);
  dVar21 = dVar21 * 1000.0;
  if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
    if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b78c);
      (*pcVar11)();
    }
    if (dVar21 < 9.223372036854776e+18) {
      uVar5 = *(ulong *)(uVar4 + 0x10);
      uVar8 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_10290d8c0(uVar8,uVar5 + 1,1,uVar4);
      }
      *(ulong *)(unaff_x22 + 0x3c8) = uVar8;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x348);
      lVar12 = *(long *)(unaff_x22 + 0x328);
      *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
      lVar10 = uVar8 + uVar5 * 0x10;
      *(undefined1 *)(lVar10 + 0x20) = 3;
      *(long *)(lVar10 + 0x28) = (long)dVar21;
      func_0x000107c5eea0(uVar7);
      piVar2 = *(int **)(lVar12 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xf8);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xf0);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x108);
      *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x100);
      *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x110);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x128);
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x120);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xd8);
      *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xd0);
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xe8);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xe0);
      iVar1 = *piVar2;
      plVar3 = (long *)(ulong)(uint)piVar2[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x3d0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10290b7c8;
                    /* WARNING: Could not recover jumptable at 0x00010290b514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar2))(plVar3,unaff_x22 + 0x70,unaff_x22 + 0x10);
      return;
    }
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b790);
    (*pcVar11)();
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10290b788);
  (*pcVar11)();
}



/* Entry: 10290b7c8; end: 10290b80f;  */

void FUN_10290b7c8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x3d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290b810,0,0);
  return;
}



/* Entry: 10290b810; end: 10290c31f;  */

void FUN_10290b810(double param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined8 uVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  double dVar25;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_70;
  ulong uStack_68;
  
  if (*(long *)(unaff_x22 + 0x78) == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3c8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x3c0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x398);
    pcVar12 = *(code **)(unaff_x22 + 0x390);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar16 = *(long *)(unaff_x22 + 0x328);
    uVar7 = *(undefined8 *)(lVar16 + 0x28);
    lVar11 = *(long *)(lVar16 + 0x30);
    func_0x0001000a8868(lVar16 + 0x10,uVar7);
    (**(code **)(lVar11 + 0x10))
              (0x4e574f4e4b4e55,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,0,uVar7,
               lVar11);
    func_0x000107c61170(uVar22);
    func_0x000107c615e8(uVar23);
    func_0x00010006c090(uVar5,uVar17);
    (*pcVar12)(uVar8,uVar21);
    (*pcVar12)(uVar10,uVar21);
    *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xf8);
    *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x100);
    *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x120);
    dVar25 = *(double *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(double *)(unaff_x22 + 0x130) = dVar25;
    *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xe8);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61434(uVar14);
    func_0x00010290dc34(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)(lVar16 + 0x28);
    lVar11 = *(long *)(lVar16 + 0x30);
    func_0x0001000a8868(lVar16 + 0x10,uVar7);
    func_0x000107c5eea0(uVar19);
    func_0x000107c5ee68(uVar9);
    (*pcVar12)(uVar19,uVar21);
    dVar25 = dVar25 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2cc);
      (*pcVar12)();
    }
    if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2d0);
      (*pcVar12)();
    }
    if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2d4);
      (*pcVar12)();
    }
    (**(code **)(lVar11 + 0x20))(0,0x54535f58494d4552,0xed000052454b4349,(long)dVar25,uVar7,lVar11);
    uStack_70 = 0;
    uStack_68 = 0;
    uVar4 = *(ulong *)(unaff_x22 + 0x3c8);
    uVar18 = 3;
    uStack_88 = 3;
    uStack_90 = 3;
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0x80);
    uVar15 = *(ulong *)(unaff_x22 + 0x88);
    uStack_70 = *(ulong *)(unaff_x22 + 0x90);
    uStack_68 = *(ulong *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar24 = *(ulong *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar2 = *(ulong *)(unaff_x22 + 0xb8);
    pcVar12 = *(code **)(unaff_x22 + 0x390);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
    func_0x000107c5eea0(uVar10);
    func_0x000107c5ee8c();
    (*pcVar12)(uVar10,uVar9);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2a0);
      (*pcVar12)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2a4);
      (*pcVar12)();
    }
    dVar25 = 9.223372036854776e+18;
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2a8);
      (*pcVar12)();
    }
    uVar13 = *(ulong *)(unaff_x22 + 0x3c8);
    uVar1 = *(ulong *)(uVar13 + 0x10);
    uVar4 = uVar13;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      FUN_10290d8c0(uVar4,uVar1 + 1,1,uVar13);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    lVar16 = uVar4 + uVar1 * 0x10;
    *(undefined1 *)(lVar16 + 0x20) = 4;
    *(long *)(lVar16 + 0x28) = (long)param_1;
    if (((uVar24 & uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x3c0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x398);
      pcVar12 = *(code **)(unaff_x22 + 0x390);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x360);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x358);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x350);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x348);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x330);
      lVar16 = *(long *)(unaff_x22 + 0x328);
      uVar7 = *(undefined8 *)(lVar16 + 0x28);
      lVar11 = *(long *)(lVar16 + 0x30);
      func_0x0001000a8868(lVar16 + 0x10,uVar7);
      (**(code **)(lVar11 + 0x10))
                (0x4e574f4e4b4e55,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,0,uVar7,
                 lVar11);
      func_0x000107c61170(uVar14);
      func_0x000107c615e8(uVar21);
      func_0x00010006c090(uVar23,uVar10);
      func_0x00010290dc68(unaff_x22 + 0x70);
      (*pcVar12)(uVar9,uVar19);
      (*pcVar12)(uVar5,uVar19);
      *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xf8);
      *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xf0);
      *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x108);
      *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x100);
      *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x110);
      *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x128);
      *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x120);
      dVar25 = *(double *)(unaff_x22 + 0xd0);
      *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xd8);
      *(double *)(unaff_x22 + 400) = dVar25;
      *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xe8);
      *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xe0);
      func_0x000107c61434();
      func_0x00010290dc34(unaff_x22 + 400);
      uVar7 = *(undefined8 *)(lVar16 + 0x28);
      lVar11 = *(long *)(lVar16 + 0x30);
      func_0x0001000a8868(lVar16 + 0x10,uVar7);
      func_0x000107c5eea0(uVar17);
      func_0x000107c5ee68(uVar8);
      (*pcVar12)(uVar17,uVar19);
      dVar25 = dVar25 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2d8);
        (*pcVar12)();
      }
      if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2dc);
        (*pcVar12)();
      }
      if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2e0);
        (*pcVar12)();
      }
      (**(code **)(lVar11 + 0x20))
                (0,0x54535f58494d4552,0xed000052454b4349,(long)dVar25,uVar7,lVar11);
      uStack_70 = 0;
      uStack_68 = 0;
      uVar18 = 3;
      uStack_88 = 4;
      uStack_90 = 3;
    }
    else {
      if ((uVar2 >> 0x3d & 1) == 0) {
        pcVar12 = *(code **)(unaff_x22 + 0x390);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x360);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x348);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
        lVar16 = *(long *)(unaff_x22 + 0x328);
        *(long *)(unaff_x22 + 0x2b0) = lVar11;
        *(ulong *)(unaff_x22 + 0x2b8) = uVar15;
        *(ulong *)(unaff_x22 + 0x2c0) = uStack_70;
        *(ulong *)(unaff_x22 + 0x2c8) = uStack_68;
        *(undefined8 *)(unaff_x22 + 0x2d0) = uVar7;
        *(ulong *)(unaff_x22 + 0x2d8) = uVar24;
        *(undefined8 *)(unaff_x22 + 0x2e0) = uVar5;
        *(ulong *)(unaff_x22 + 0x2e8) = uVar2;
        uVar7 = *(undefined8 *)(lVar16 + 0x28);
        lVar11 = *(long *)(lVar16 + 0x30);
        func_0x0001000a8868(lVar16 + 0x10,uVar7);
        func_0x000107c5eea0(uVar10);
        func_0x000107c5ee68(uVar8);
        (*pcVar12)(uVar10,uVar9);
        dVar25 = dVar25 * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2e4);
          (*pcVar12)();
        }
        if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2ec);
          (*pcVar12)();
        }
        if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2f4);
          (*pcVar12)();
        }
        pcVar12 = *(code **)(unaff_x22 + 0x390);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x360);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x330);
        (**(code **)(lVar11 + 0x10))
                  (0x53534543435553,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,
                   (long)dVar25,uVar7,lVar11);
        func_0x000107c5eea0(uVar5);
        func_0x000107c5ee8c();
        (*pcVar12)(uVar5,uVar9);
        dVar25 = dVar25 * 1000.0;
        if ((ulong)ABS(dVar25) < 0x7ff0000000000000) {
          if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c300);
            (*pcVar12)();
          }
          if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c304);
            (*pcVar12)();
          }
          uVar15 = *(ulong *)(uVar4 + 0x10);
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar15) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_10290d8c0(uVar4,uVar15 + 1,1);
          }
          *(ulong *)(unaff_x22 + 0x3d8) = uVar4;
          uVar7 = *(undefined8 *)(unaff_x22 + 0x340);
          *(ulong *)(uVar4 + 0x10) = uVar15 + 1;
          lVar11 = uVar4 + uVar15 * 0x10;
          *(undefined1 *)(lVar11 + 0x20) = 5;
          *(long *)(lVar11 + 0x28) = (long)dVar25;
          func_0x000107c5eea0(uVar7);
          plVar3 = (long *)0x170;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x3e0) = plVar3;
          *plVar3 = unaff_x22;
          plVar3[1] = (long)FUN_10290c320;
          lVar11 = *(long *)(unaff_x22 + 0x328);
          plVar3[0x1c] = unaff_x22 + 0x2b0;
          plVar3[0x1d] = lVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_10290c9b0,0,0);
          return;
        }
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2fc);
        (*pcVar12)();
      }
      lVar6 = *(long *)(unaff_x22 + 0x328);
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      lVar16 = *(long *)(lVar6 + 0x30);
      func_0x0001000a8868(lVar6 + 0x10,uVar7);
      if ((uVar15 & 0xff) == 1) {
        uVar5 = 0x800000010efc19d0;
        uVar9 = 0xd000000000000011;
        if (lVar11 != 2) {
          uVar5 = 0xeb00000000545345;
          uVar9 = 0x555145525f444142;
        }
        uVar10 = 0x4e574f4e4b4e55;
        if (lVar11 != 0) {
          uVar10 = 0x4c414e5245544e49;
        }
        uVar8 = 0xe700000000000000;
        if (lVar11 != 0) {
          uVar8 = 0xee00524f5252455f;
        }
        if (lVar11 < 2) {
          uVar5 = uVar8;
          uVar9 = uVar10;
        }
        uVar21 = *(undefined8 *)(unaff_x22 + 0x3c0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x3a8);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x3a0);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x398);
        pcVar12 = *(code **)(unaff_x22 + 0x390);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x350);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x348);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x330);
        (**(code **)(lVar16 + 0x10))
                  (uVar9,uVar5,0x54535f58494d4552,0xed000052454b4349,0,uVar7,lVar16);
        func_0x000107c61170(uVar21);
        func_0x000107c615e8(uVar17);
        func_0x00010006c090(uVar10,uVar19);
        func_0x000107c6142c(uVar5);
        (*pcVar12)(uVar14,uVar23);
        (*pcVar12)(uVar8,uVar23);
        uStack_90 = (ulong)(0x1000202 >> (ulong)(((uint)lVar11 & 3) << 3));
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x3c0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x3a8);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x3a0);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x398);
        pcVar12 = *(code **)(unaff_x22 + 0x390);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x350);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x330);
        (**(code **)(lVar16 + 0x10))
                  (0x4e574f4e4b4e55,0xe700000000000000,0x54535f58494d4552,0xed000052454b4349,0,uVar7
                   ,lVar16);
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(uVar14);
        func_0x00010006c090(uVar19,uVar9);
        func_0x000107c6142c(0xe700000000000000);
        (*pcVar12)(uVar5,uVar10);
        (*pcVar12)(uVar17,uVar10);
        uStack_90 = 2;
      }
      uVar18 = (undefined1)uStack_90;
      uVar15 = uStack_70 & 0xffffffffffff;
      if ((uStack_68 & 0x2000000000000000) != 0) {
        uVar15 = uStack_68 >> 0x38 & 0xf;
      }
      func_0x000107c61434(uVar4);
      if (uVar15 == 0) {
        uStack_70 = 0;
        uStack_68 = 0;
      }
      else {
        func_0x000107c61434(uStack_68);
      }
      pcVar12 = *(code **)(unaff_x22 + 0x390);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x360);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x358);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x330);
      lVar16 = *(long *)(unaff_x22 + 0x328);
      func_0x00010290dc68(unaff_x22 + 0x70);
      func_0x00010290dc34(unaff_x22 + 0xd0);
      uVar7 = *(undefined8 *)(lVar16 + 0x28);
      lVar11 = *(long *)(lVar16 + 0x30);
      func_0x0001000a8868(lVar16 + 0x10,uVar7);
      func_0x000107c5eea0(uVar5);
      func_0x000107c5ee68(uVar9);
      (*pcVar12)(uVar5,uVar10);
      dVar25 = dVar25 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2e8);
        (*pcVar12)();
      }
      if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2f0);
        (*pcVar12)();
      }
      if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10290c2f8);
        (*pcVar12)();
      }
      (**(code **)(lVar11 + 0x20))
                (0,0x54535f58494d4552,0xed000052454b4349,(long)dVar25,uVar7,lVar11);
      uStack_90 = uStack_90 & 0xff;
      uStack_88 = 6;
    }
  }
  uVar15 = *(ulong *)(unaff_x22 + 0x388);
  uVar24 = *(ulong *)(unaff_x22 + 0x380);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x340);
  puVar20 = *(ulong **)(unaff_x22 + 0x308);
  (**(code **)(unaff_x22 + 0x390))(uVar8,*(undefined8 *)(unaff_x22 + 0x330));
  func_0x000107c6142c(uVar4);
  *puVar20 = uStack_90;
  puVar20[1] = uVar24;
  puVar20[2] = uVar15;
  puVar20[3] = uVar4;
  puVar20[4] = uStack_70;
  puVar20[5] = uStack_68;
  *(undefined1 *)(puVar20 + 6) = uStack_88;
  *(undefined1 *)((long)puVar20 + 0x31) = uVar18;
  *(undefined1 *)((long)puVar20 + 0x32) = 1;
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010290c298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10290c320; end: 10290c377;  */

void FUN_10290c320(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x300) = param_2;
  *(undefined8 *)(lVar1 + 0x2f8) = param_1;
  *(long **)(lVar1 + 0x2f0) = unaff_x22;
  *(undefined1 *)(lVar1 + 1000) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x3e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10290c378,0,0);
  return;
}


