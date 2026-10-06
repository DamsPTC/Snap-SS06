/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10117bc60; end: 10117bd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10117bc60(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_48 = puVar8;
  func_0x0001000285a8(0x112d61fb0,&UNK_10d927f60);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010042e6a0();
  ppuVar4 = ppuVar3;
  FUN_10117c8cc();
  if (ppuVar4 == (undefined **)0x0) {
    uVar7 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = &UNK_11038a460;
    func_0x000107c613fc(&UNK_11038a460,0x18,7);
    func_0x000107c61644(puVar8 + 0x10,ppuVar3);
    puVar5 = &UNK_11038a960;
    func_0x000107c613fc(&UNK_11038a960,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar8;
    *(long *)(puVar5 + 0x18) = lVar2;
    uVar7 = 0x10117fba8;
    puVar8 = puVar5;
    (**(code **)(*ppuVar4 + 0x60))();
    func_0x000107c61574(ppuVar4);
    func_0x000107c61574(puVar5);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d61f18);
  uVar6 = *puVar1;
  *puVar1 = uVar7;
  puVar1[1] = puVar8;
  func_0x000107c615e8(uVar6);
  return ppuVar3;
}



/* Entry: 10117bd8c; end: 10117bd9f; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin shortcutForSource:] */

void FUN_10117bd8c(void)

{
  FUN_10117f098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117bda0; end: 10117bea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10117bda0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 in_stack_ffffffffffffffd8;
  
  if ((param_1 != 1) || (func_0x00010117be44(), (param_1 & 1) == 0)) {
    lVar14 = *(long *)(unaff_x20 + _DAT_112d61f10);
    if (lVar14 != 0) {
      func_0x000107c6157c(lVar14);
      func_0x0001000d224c(&stack0xffffffffffffffd8);
      func_0x000107c61574(lVar14);
      uVar5 = 0x10117fb24;
      func_0x00010487de38(0x10117fb24,0);
      func_0x000107c61574(in_stack_ffffffffffffffd8);
      func_0x0001004575f0();
      func_0x000107c61574(uVar5);
      return in_stack_ffffffffffffffd8;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10117be44);
    (*pcVar4)();
  }
  func_0x000107c614f0();
  lVar14 = unaff_x20;
  FUN_10117c8cc();
  if (lVar14 != 0) {
    func_0x0001000d224c(&puStack_a0);
    puVar2 = puStack_a0;
    if (puStack_a0 == (undefined *)0x0) {
      func_0x000107c61574(lVar14);
    }
    else {
      func_0x0001000d224c(&puStack_a0);
      puVar3 = puStack_a0;
      if (puStack_a0 != (undefined *)0x0) {
        pcVar4 = FUN_10117ccd4;
        func_0x0001000bfde0(FUN_10117ccd4,0,PTR___syXlN_11034f1a0 + 8);
        pcVar6 = pcVar4;
        func_0x0001004575f0();
        func_0x000107c61574(pcVar4);
        puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
        func_0x000107c453e4();
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = FUN_10117ce64;
        puStack_78 = (undefined *)0x0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_10117cf7c;
        puStack_88 = &UNK_11038a680;
        ppuVar8 = &puStack_a0;
        func_0x000107c60bc4(ppuVar8);
        pcVar9 = pcVar6;
        func_0x000107c51898();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(pcVar6);
        func_0x000107c61170(puVar7);
        puVar7 = puVar2;
        func_0x000107c43aa8();
        func_0x000107c61180();
        puVar10 = puVar7;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar11 = puVar10;
        func_0x000107c421ac();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        puVar7 = &UNK_11038a6b8;
        func_0x000107c613fc(&UNK_11038a6b8,0x18,7);
        *(long *)(puVar7 + 0x10) = unaff_x20;
        puVar10 = &UNK_11038a6e0;
        func_0x000107c613fc(&UNK_11038a6e0,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_10117faa4;
        *(undefined **)(puVar10 + 0x18) = puVar7;
        pcStack_80 = FUN_10117faac;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        pcStack_90 = (code *)0x10117fbb4;
        puStack_88 = &UNK_11038a6f8;
        ppuVar8 = &puStack_a0;
        puStack_78 = puVar10;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_78);
        puVar10 = puVar11;
        func_0x000107c3fe00(puVar11);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        func_0x0001000285a8(0x112d61f78,&UNK_10d927f20);
        puVar7 = puVar10;
        func_0x0001000b637c(puVar10);
        uVar12 = 0;
        func_0x00010117fa64(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
        pcVar4 = FUN_10117d6ac;
        func_0x0001000d5158(FUN_10117d6ac,0,uVar12);
        func_0x000107c61574(puVar7);
        puVar7 = &UNK_11038a730;
        func_0x000107c613fc(&UNK_11038a730,0x18,7);
        *(long *)(puVar7 + 0x10) = unaff_x20;
        pcVar6 = FUN_10117faf4;
        func_0x0001000bfde0(FUN_10117faf4,puVar7,uVar12);
        func_0x000107c61574(puVar7);
        puVar7 = &UNK_11038a758;
        func_0x000107c613fc(&UNK_11038a758,0x20,7);
        *(code **)(puVar7 + 0x10) = pcVar4;
        *(code **)(puVar7 + 0x18) = pcVar6;
        func_0x000107c6157c(pcVar4);
        func_0x000107c6157c(pcVar6);
        uVar13 = 0x10117fafc;
        func_0x000100775358(0x10117fafc,puVar7,uVar12);
        func_0x000107c61574(puVar7);
        func_0x000107c6157c(uVar13);
        uVar5 = 0x10117fb18;
        func_0x000100775358(0x10117fb18,uVar13,uVar12);
        func_0x000107c61574(uVar13);
        uVar12 = 0x10117fb20;
        func_0x00010487de38(0x10117fb20,0);
        func_0x000107c61574(uVar5);
        func_0x0001004575f0();
        func_0x000107c61574(lVar14);
        func_0x000107c615e8(puVar2);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(pcVar9);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61574(pcVar4);
        func_0x000107c61574(pcVar6);
        func_0x000107c61574(uVar13);
        goto LAB_10117c2b8;
      }
      func_0x000107c61574(lVar14);
      func_0x000107c615e8(puVar2);
    }
  }
  uVar12 = 0x112d5a8a0;
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  func_0x000104886440();
  uVar5 = uVar12;
  func_0x0001004575f0();
LAB_10117c2b8:
  func_0x000107c61574(uVar12);
  return uVar5;
}



/* Entry: 10117bea8; end: 10117c2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10117bea8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  lVar4 = unaff_x20;
  FUN_10117c8cc();
  if (lVar4 != 0) {
    func_0x0001000d224c(&puStack_a0);
    puVar2 = puStack_a0;
    if (puStack_a0 == (undefined *)0x0) {
      func_0x000107c61574(lVar4);
    }
    else {
      func_0x0001000d224c(&puStack_a0);
      puVar3 = puStack_a0;
      if (puStack_a0 != (undefined *)0x0) {
        pcVar5 = FUN_10117ccd4;
        func_0x0001000bfde0(FUN_10117ccd4,0,PTR___syXlN_11034f1a0 + 8);
        pcVar6 = pcVar5;
        func_0x0001004575f0();
        func_0x000107c61574(pcVar5);
        puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
        func_0x000107c453e4();
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = FUN_10117ce64;
        puStack_78 = (undefined *)0x0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_10117cf7c;
        puStack_88 = &UNK_11038a680;
        ppuVar8 = &puStack_a0;
        func_0x000107c60bc4(ppuVar8);
        pcVar9 = pcVar6;
        func_0x000107c51898();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(pcVar6);
        func_0x000107c61170(puVar7);
        puVar7 = puVar2;
        func_0x000107c43aa8();
        func_0x000107c61180();
        puVar10 = puVar7;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar11 = puVar10;
        func_0x000107c421ac();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        puVar7 = &UNK_11038a6b8;
        func_0x000107c613fc(&UNK_11038a6b8,0x18,7);
        *(long *)(puVar7 + 0x10) = unaff_x20;
        puVar10 = &UNK_11038a6e0;
        func_0x000107c613fc(&UNK_11038a6e0,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_10117faa4;
        *(undefined **)(puVar10 + 0x18) = puVar7;
        pcStack_80 = FUN_10117faac;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        pcStack_90 = (code *)0x10117fbb4;
        puStack_88 = &UNK_11038a6f8;
        ppuVar8 = &puStack_a0;
        puStack_78 = puVar10;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_78);
        puVar10 = puVar11;
        func_0x000107c3fe00(puVar11);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        func_0x0001000285a8(0x112d61f78,&UNK_10d927f20);
        puVar7 = puVar10;
        func_0x0001000b637c(puVar10);
        uVar12 = 0;
        func_0x00010117fa64(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
        pcVar5 = FUN_10117d6ac;
        func_0x0001000d5158(FUN_10117d6ac,0,uVar12);
        func_0x000107c61574(puVar7);
        puVar7 = &UNK_11038a730;
        func_0x000107c613fc(&UNK_11038a730,0x18,7);
        *(long *)(puVar7 + 0x10) = unaff_x20;
        pcVar6 = FUN_10117faf4;
        func_0x0001000bfde0(FUN_10117faf4,puVar7,uVar12);
        func_0x000107c61574(puVar7);
        puVar7 = &UNK_11038a758;
        func_0x000107c613fc(&UNK_11038a758,0x20,7);
        *(code **)(puVar7 + 0x10) = pcVar5;
        *(code **)(puVar7 + 0x18) = pcVar6;
        func_0x000107c6157c(pcVar5);
        func_0x000107c6157c(pcVar6);
        uVar13 = 0x10117fafc;
        func_0x000100775358(0x10117fafc,puVar7,uVar12);
        func_0x000107c61574(puVar7);
        func_0x000107c6157c(uVar13);
        uVar14 = 0x10117fb18;
        func_0x000100775358(0x10117fb18,uVar13,uVar12);
        func_0x000107c61574(uVar13);
        uVar12 = 0x10117fb20;
        func_0x00010487de38(0x10117fb20,0);
        func_0x000107c61574(uVar14);
        func_0x0001004575f0();
        func_0x000107c61574(lVar4);
        func_0x000107c615e8(puVar2);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(pcVar9);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61574(pcVar5);
        func_0x000107c61574(pcVar6);
        func_0x000107c61574(uVar13);
        goto LAB_10117c2b8;
      }
      func_0x000107c61574(lVar4);
      func_0x000107c615e8(puVar2);
    }
  }
  uVar12 = 0x112d5a8a0;
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  func_0x000104886440();
  uVar14 = uVar12;
  func_0x0001004575f0();
LAB_10117c2b8:
  func_0x000107c61574(uVar12);
  return uVar14;
}



/* Entry: 10117c2e8; end: 10117c323; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin recipientsForSource:] */

void FUN_10117c2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10117bda0(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10117c324; end: 10117c33b; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin shortcutId] */

/* WARNING: Removing unreachable block (ram,0x00010117c338) */

void FUN_10117c324(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10117c33c; end: 10117c3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117c33c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 uStack_41;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d61f18);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar3);
    lVar3 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar3);
  uStack_41 = 0;
  func_0x0001007d6d78(&uStack_41);
  return;
}



/* Entry: 10117c3e0; end: 10117c407; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin pauseUpdates] */

void FUN_10117c3e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10117c33c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10117c408; end: 10117c587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117c408(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  uStack_51 = 1;
  func_0x0001007d6d78(&uStack_51);
  plVar6 = *(long **)(unaff_x20 + _DAT_112d61f10);
  if (plVar6 != (long *)0x0) {
    func_0x000107c6157c(plVar6);
    func_0x0001000d224c(&uStack_60);
    func_0x000107c61574();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d61f18);
    plVar7 = (long *)*puVar1;
    if (plVar7 != (long *)0x0) {
      lVar9 = puVar1[1];
      plVar6 = plVar7;
      func_0x000107c614f0(plVar7);
      pcVar10 = *(code **)(lVar9 + 8);
      func_0x000107c615f0(plVar7);
      (*pcVar10)(plVar6,lVar9);
      func_0x000107c615e8();
      plVar6 = plVar7;
    }
    FUN_10117c8cc();
    if (plVar6 == (long *)0x0) {
      func_0x000107c61574(uStack_60);
      uVar5 = 0;
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = &UNK_11038a460;
      func_0x000107c613fc(&UNK_11038a460,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,uStack_60);
      puVar3 = &UNK_11038a488;
      func_0x000107c613fc(&UNK_11038a488,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar8;
      *(long *)(puVar3 + 0x18) = lVar2;
      uVar5 = 0x10117e798;
      puVar8 = puVar3;
      (**(code **)(*plVar6 + 0x60))();
      func_0x000107c61574(plVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uStack_60);
    }
    uVar4 = *puVar1;
    *puVar1 = uVar5;
    puVar1[1] = puVar8;
    func_0x000107c615e8(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10117c588);
  (*pcVar10)();
}



/* Entry: 10117c588; end: 10117c5af; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin resumeUpdates] */

void FUN_10117c588(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10117c408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10117c5b0; end: 10117c5b7; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin shortcutDidSelect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117c5b0(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10117c5b8; end: 10117c5bf; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin shortcutDidDeselect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117c5b8(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 0;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10117c5c0; end: 10117c607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117c5c0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10117c608; end: 10117c60f; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin alwaysShow] */

undefined8 FUN_10117c608(void)

{
  return 0;
}



/* Entry: 10117c610; end: 10117c7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10117c610(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_38;
  
  if (*(long *)(unaff_x20 + _DAT_112d61ef8) == 2) {
    func_0x00010117be44();
    if ((param_1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112d61f10);
      if (lVar6 != 0) {
        func_0x000107c6157c(lVar6);
        func_0x0001000d224c(&uStack_38);
        func_0x000107c61574(lVar6);
        pcVar1 = FUN_10117c7f4;
        func_0x0001000bfde0(FUN_10117c7f4,0,PTR___sSuN_11034e220);
        func_0x000107c61574(uStack_38);
        puVar3 = PTR___sSuSQsWP_11034e230;
        func_0x0001000c2068(PTR___sSuSQsWP_11034e230);
        func_0x000107c61574(pcVar1);
        uVar2 = 0x112d38358;
        func_0x0001000285a8(0x112d38358,&UNK_10d902090);
        pcVar1 = FUN_10117c824;
        func_0x0001000bfde0(FUN_10117c824,0,uVar2);
        func_0x000107c61574(puVar3);
        func_0x0001004575f0();
        func_0x000107c61574(pcVar1);
        return puVar3;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10117c7f4);
      (*pcVar1)();
    }
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar4 = PTR_PTR_1126b14f0;
    func_0x000107c61168(PTR_PTR_1126b14f0);
    func_0x000107c4fa48();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4e01c();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c4a8a4(puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar4 = PTR_PTR_1126b14f0;
    func_0x000107c61168(PTR_PTR_1126b14f0);
    func_0x000107c41f38();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4e01c();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c4a8a4(puVar3);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 10117c7f4; end: 10117c823;  */

void FUN_10117c7f4(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x000107c40808();
  if (-1 < lVar2) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10117c824);
  (*pcVar1)();
}



/* Entry: 10117c824; end: 10117c897;  */

void FUN_10117c824(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b14f0;
  func_0x000107c61168(PTR_PTR_1126b14f0);
  func_0x000107c40828();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4e01c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10117c898; end: 10117c8cb; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin badgeObservable] */

void FUN_10117c898(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10117c610();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10117c8cc; end: 10117ccd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10117c8cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  ppuVar13 = &puStack_a0;
  func_0x000107c614f0();
  func_0x0001000d224c(&puStack_a0);
  puVar16 = puStack_a0;
  if (puStack_a0 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_a0);
    puVar2 = puStack_a0;
    if (puStack_a0 != (undefined *)0x0) {
      func_0x0001000d224c(&puStack_a0);
      puVar3 = puStack_a0;
      if (puStack_a0 != (undefined *)0x0) {
        puVar4 = puVar16;
        func_0x000107c4da98(puVar16);
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar6 = puVar5;
        func_0x000107c421ac(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        puVar4 = puVar2;
        func_0x000107c43aa8(puVar2);
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar4 = puVar5;
        func_0x000107c421ac(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = (code *)0x10117fb54;
        puStack_78 = (undefined *)0x0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = (undefined *)0x10117fbac;
        puStack_88 = &UNK_11038a590;
        func_0x000107c60bc4(&puStack_a0);
        puVar8 = puVar4;
        func_0x000107c4c280(puVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(puVar4);
        puVar4 = puVar2;
        func_0x000107c402cc(puVar2);
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar4 = puVar5;
        func_0x000107c421ac(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        pcStack_80 = (code *)0x10117fb58;
        puStack_78 = (undefined *)0x0;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        puStack_90 = (undefined *)0x10117fbb0;
        puStack_88 = &UNK_11038a5b8;
        func_0x000107c60bc4(&puStack_a0);
        puVar10 = puVar4;
        func_0x000107c4c280(puVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(puVar4);
        pcStack_80 = (code *)0x10117e144;
        puStack_78 = (undefined *)0x0;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        puStack_90 = (undefined *)0x10117fbb8;
        puStack_88 = &UNK_11038a5e0;
        func_0x000107c60bc4(&puStack_a0);
        puVar12 = puVar6;
        func_0x000107c3fe00(puVar6);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar11);
        puVar4 = &UNK_11038a618;
        func_0x000107c613fc(&UNK_11038a618,0x18,7);
        *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
        puVar5 = &UNK_11038a640;
        func_0x000107c613fc(&UNK_11038a640,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_10117f05c;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        pcStack_80 = FUN_10117f064;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1008560ac;
        puStack_88 = &UNK_11038a658;
        puStack_78 = puVar5;
        func_0x000107c60bc4(&puStack_a0);
        func_0x000107c61574(puStack_78);
        puVar4 = puVar12;
        func_0x000107c3fe00(puVar12);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar13);
        func_0x0001000285a8(0x112d61f78,&UNK_10d927f20);
        puVar5 = puVar4;
        func_0x0001000b637c(puVar4);
        uVar14 = 0x112d61f80;
        func_0x0001000285a8(0x112d61f80,&UNK_10d9d8130);
        pcVar15 = FUN_10117e594;
        func_0x0001000d5158(FUN_10117e594,0,uVar14);
        func_0x000107c615e8(puVar16);
        func_0x000107c615e8(puVar2);
        func_0x000107c615e8(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar4);
        func_0x000107c61574(puVar5);
        return pcVar15;
      }
      func_0x000107c615e8(puVar16);
      puVar16 = puVar2;
    }
    func_0x000107c615e8(puVar16);
  }
  return (code *)0x0;
}



/* Entry: 10117ccd4; end: 10117ce63;  */

void FUN_10117ccd4(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar9 = *param_2;
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    uVar7 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar7,0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10117ce64);
      (*pcVar1)();
    }
    uVar11 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
        uVar8 = uVar7;
      }
      else {
        uVar2 = uVar11;
        uVar8 = uVar9;
        func_0x00010117ea28();
      }
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c42f24();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      uVar7 = uVar8;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar6 + 0x10);
      uVar2 = uVar3 + 1;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
        uVar7 = uVar2;
        func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar2,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar2;
      *(ulong *)(puVar6 + uVar3 * 0x10 + 0x20) = uVar4;
      *(ulong *)(puVar6 + uVar3 * 0x10 + 0x28) = uVar8;
    } while (uVar10 != uVar11);
  }
  puVar5 = puVar6;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar6);
  puVar6 = puVar5;
  func_0x000107c5fe08(puVar5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 10117ce64; end: 10117cf7b;  */

void FUN_10117ce64(undefined8 *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined *apuStack_60 [4];
  
  func_0x0001000bb420(param_2,apuStack_60);
  uVar4 = 0x112d5d480;
  func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
  ppuVar2 = &puStack_68;
  func_0x000107c6147c(ppuVar2,apuStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = puStack_68;
  if ((int)ppuVar2 == 0) {
    puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  apuStack_60[0] = param_3;
  func_0x000107c615f0(param_3);
  ppuVar2 = &puStack_68;
  func_0x000107c6147c(ppuVar2,apuStack_60,PTR___syXlN_11034f1a0 + 8,uVar4,6);
  if ((int)ppuVar2 == 0) {
    puStack_68 = puVar3;
  }
  apuStack_60[0] = puVar1;
  func_0x00010105ba6c(puStack_68);
  puVar1 = apuStack_60[0];
  puVar3 = apuStack_60[0];
  func_0x000107c5fe08(apuStack_60[0],PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  uVar4 = 0;
  func_0x00010117fa64(0,0x112d61f88,&PTR__OBJC_CLASS___NSSet_1126ae870);
  param_1[3] = uVar4;
  *param_1 = puVar3;
  return;
}



/* Entry: 10117cf7c; end: 10117d02b;  */

void FUN_10117cf7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  puVar4 = auStack_70;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c614f0();
  auStack_50[0] = param_2;
  uStack_38 = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(auStack_70,auStack_50,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_3);
  func_0x0001006732c8(auStack_70,uStack_58);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_70);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10117d02c; end: 10117d6ab;  */

undefined * FUN_10117d02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ******ppppppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 ******ppppppuVar18;
  undefined *puVar19;
  undefined8 ******ppppppuVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined *puStack_e8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_78;
  
  pppppuStack_c0 = (undefined8 ******)0x0;
  uVar6 = 0;
  func_0x00010117fa64(0,0x112d61f70,&PTR_PTR_1126b14e0);
  func_0x000107c5fc50(param_1,&pppppuStack_c0,uVar6);
  ppppppuVar15 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((undefined8 ******)pppppuStack_c0 != (undefined8 ******)0x0) {
    ppppppuVar15 = (undefined8 ******)pppppuStack_c0;
  }
  func_0x0001000bb420(param_2,&pppppuStack_c0);
  uVar6 = 0x112d5d480;
  func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
  ppuVar7 = &puStack_78;
  ppppppuVar18 = &pppppuStack_c0;
  func_0x000107c6147c(ppuVar7,ppppppuVar18,PTR___sypN_11034f1a8 + 8,uVar6,6);
  puVar19 = puStack_78;
  if ((int)ppuVar7 == 0) {
    puVar19 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  if ((ulong)ppppppuVar15 >> 0x3e == 0) {
    ppppppuVar23 = *(undefined8 *******)(((ulong)ppppppuVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppppppuVar23 = (undefined8 ******)((ulong)ppppppuVar15 & 0xffffffffffffff8);
    if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar15) {
      ppppppuVar23 = ppppppuVar15;
    }
    func_0x000107c60480();
  }
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppppuVar23 != (undefined8 ******)0x0) {
    puStack_d0 = (undefined *)((ulong)ppppppuVar15 & 0xffffffffffffff8);
    ppppppuVar24 = (undefined8 ******)0x0;
    do {
      if (((ulong)ppppppuVar15 & 0xc000000000000001) == 0) {
        if (*(undefined8 *******)((long)puStack_d0 + 0x10) <= ppppppuVar24) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d2cc);
          (*pcVar4)();
        }
        ppppppuVar8 = (undefined8 ******)ppppppuVar15[(long)((long)ppppppuVar24 + 4)];
        func_0x000107c61174();
      }
      else {
        ppppppuVar8 = ppppppuVar24;
        ppppppuVar18 = ppppppuVar15;
        func_0x00010117ea28();
      }
      bVar5 = SCARRY8((long)ppppppuVar24,1);
      ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d2c8);
        (*pcVar4)();
      }
      ppppppuVar9 = ppppppuVar8;
      func_0x000107c42f24();
      func_0x000107c61180();
      ppppppuVar10 = ppppppuVar9;
      func_0x000107c5faec();
      ppppppuVar20 = ppppppuVar18;
      func_0x000107c61170(ppppppuVar9);
      if (*(long *)(puVar19 + 0x10) != 0) {
        func_0x000107c6068c(&pppppuStack_c0,*(undefined8 *)(puVar19 + 0x28));
        ppppppuVar9 = &pppppuStack_c0;
        ppppppuVar20 = ppppppuVar10;
        func_0x000107c5fb58(ppppppuVar9,ppppppuVar10,ppppppuVar18);
        func_0x000107c606a8();
        uVar21 = -1L << ((ulong)(byte)puVar19[0x20] & 0x3f);
        uVar22 = (ulong)ppppppuVar9 & (uVar21 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar19 + (uVar22 >> 6) * 8 + 0x38) >> (uVar22 & 0x3f) & 1) != 0) {
          do {
            puVar2 = (ulong *)(*(long *)(puVar19 + 0x30) + uVar22 * 0x10);
            ppppppuVar9 = (undefined8 ******)*puVar2;
            ppppppuVar20 = (undefined8 ******)puVar2[1];
            if ((ppppppuVar9 == ppppppuVar10 && ppppppuVar20 == ppppppuVar18) ||
               (func_0x000107c605b8(ppppppuVar9,ppppppuVar20,ppppppuVar10,ppppppuVar18,0),
               ((ulong)ppppppuVar9 & 1) != 0)) {
              func_0x000107c6142c(ppppppuVar18);
              puVar11 = puStack_c8;
              func_0x000107c61558();
              puStack_78 = puStack_c8;
              if (((ulong)puVar11 & 1) == 0) {
                ppppppuVar20 = (undefined8 ******)(*(long *)(puStack_c8 + 0x10) + 1);
                FUN_10117e7a0(0,ppppppuVar20,1);
              }
              uVar21 = *(ulong *)(puStack_78 + 0x10);
              ppppppuVar18 = (undefined8 ******)(uVar21 + 1);
              if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar21) {
                ppppppuVar20 = ppppppuVar18;
                FUN_10117e7a0(1 < *(ulong *)(puStack_78 + 0x18),ppppppuVar18,1);
              }
              *(undefined8 *******)(puStack_78 + 0x10) = ppppppuVar18;
              *(undefined8 *******)(puStack_78 + uVar21 * 8 + 0x20) = ppppppuVar8;
              ppppppuVar18 = ppppppuVar20;
              puStack_c8 = puStack_78;
              goto joined_r0x00010117d28c;
            }
            uVar22 = uVar22 + 1 & ~uVar21;
          } while ((*(ulong *)(puVar19 + (uVar22 >> 6) * 8 + 0x38) >> (uVar22 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(ppppppuVar18);
      func_0x000107c61170(ppppppuVar8);
      ppppppuVar18 = ppppppuVar20;
joined_r0x00010117d28c:
    } while (ppppppuVar24 != ppppppuVar23);
  }
  func_0x000107c6142c(puVar19);
  func_0x000107c6142c(ppppppuVar15);
  if (((long)puStack_c8 < 0) || (((ulong)puStack_c8 >> 0x3e & 1) != 0)) {
    puStack_d0 = puStack_c8;
    func_0x000107c60480();
  }
  else {
    puStack_d0 = *(undefined **)(puStack_c8 + 0x10);
  }
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar19 = (undefined *)0x0;
  while( true ) {
    if (puStack_d0 == puVar19) {
      func_0x000107c61574(puStack_c8);
      uVar6 = 0;
      func_0x00010117fa64(0,0x112d61f60,&PTR_PTR_1126b14a0);
      puVar19 = puStack_e8;
      func_0x000107c5fc48(puStack_e8,uVar6);
      func_0x000107c6142c(puStack_e8);
      return puVar19;
    }
    if (((ulong)puStack_c8 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puStack_c8 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d694);
        (*pcVar4)();
      }
      puVar11 = *(undefined **)(puStack_c8 + (long)puVar19 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar11 = puVar19;
      func_0x00010117ea28(puVar19,puStack_c8);
    }
    puVar1 = puVar19 + 1;
    if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d690);
      (*pcVar4)();
    }
    puStack_78 = (undefined *)0x0;
    puVar12 = puVar11;
    func_0x000107c42924(puVar11);
    func_0x000107c61180();
    puVar13 = &UNK_11038a870;
    func_0x000107c613fc(&UNK_11038a870,0x18,7);
    *(undefined ***)(puVar13 + 0x10) = &puStack_78;
    puVar14 = &UNK_11038a898;
    func_0x000107c613fc(&UNK_11038a898,0x20,7);
    *(undefined8 *)(puVar14 + 0x10) = 0x10117fb60;
    *(undefined **)(puVar14 + 0x18) = puVar13;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x10117fb94;
    pppppuStack_c0 = (undefined8 *****)PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x10117dba4;
    puStack_a8 = &UNK_11038a8b0;
    ppppppuVar15 = &pppppuStack_c0;
    puStack_98 = puVar14;
    func_0x000107c60bc4(ppppppuVar15);
    puVar16 = puStack_98;
    func_0x000107c6157c(puVar14);
    func_0x000107c61574(puVar16);
    puVar16 = &UNK_11038a8e8;
    func_0x000107c613fc(&UNK_11038a8e8,0x20,7);
    *(undefined ***)(puVar16 + 0x10) = &puStack_78;
    *(undefined **)(puVar16 + 0x18) = puVar11;
    puVar17 = &UNK_11038a910;
    func_0x000107c613fc(&UNK_11038a910,0x20,7);
    *(undefined8 *)(puVar17 + 0x10) = 0x10117fba0;
    *(undefined **)(puVar17 + 0x18) = puVar16;
    uStack_a0 = 0x10117fba4;
    pppppuStack_c0 = (undefined8 *****)puVar3;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x10117dc68;
    puStack_a8 = &UNK_11038a928;
    ppppppuVar18 = &pppppuStack_c0;
    puStack_98 = puVar17;
    func_0x000107c60bc4(ppppppuVar18);
    puVar3 = puStack_98;
    func_0x000107c61174(puVar11);
    func_0x000107c6157c(puVar17);
    func_0x000107c61574(puVar3);
    func_0x000107c4c728(puVar12);
    func_0x000107c60bd0(ppppppuVar18);
    func_0x000107c60bd0(ppppppuVar15);
    func_0x000107c61170(puVar12);
    puVar3 = puStack_78;
    func_0x000107c61574(puVar13);
    puVar13 = puVar14;
    func_0x000107c61544(puVar14,"",0x7f,0xcb,0x2a,1);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar14);
    if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d698);
      (*pcVar4)();
    }
    puVar13 = puVar17;
    func_0x000107c61544(puVar17,"",0x7f,0xcf,0x13,1);
    func_0x000107c61170(puVar11);
    func_0x000107c61574(puVar17);
    if (((ulong)puVar13 & 1) != 0) break;
    puVar19 = puVar19 + 1;
    if (puVar3 != (undefined *)0x0) {
      puVar19 = puStack_e8;
      func_0x000107c61550();
      if ((((int)puVar19 == 0) || ((long)puStack_e8 < 0)) || (((ulong)puStack_e8 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_e8 >> 0x3e == 0) {
          puVar19 = *(undefined **)(((ulong)puStack_e8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar19 = (undefined *)((ulong)puStack_e8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_e8) {
            puVar19 = puStack_e8;
          }
          func_0x000107c60480(puVar19);
        }
        puVar11 = (undefined *)0x0;
        FUN_10117ee1c(0,puVar19 + 1,1,puStack_e8);
        puStack_e8 = puVar11;
      }
      uVar22 = (ulong)puStack_e8 & 0xffffffffffffff8;
      uVar21 = *(ulong *)(uVar22 + 0x10);
      if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar21) {
        puVar19 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
        FUN_10117ee1c(puVar19,uVar21 + 1,1,puStack_e8);
        uVar22 = (ulong)puVar19 & 0xffffffffffffff8;
        puStack_e8 = puVar19;
      }
      *(ulong *)(uVar22 + 0x10) = uVar21 + 1;
      *(undefined **)(uVar22 + uVar21 * 8 + 0x20) = puVar3;
      puVar19 = puVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d69c);
  (*pcVar4)();
}



/* Entry: 10117d6ac; end: 10117d6ff;  */

void FUN_10117d6ac(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  func_0x000107c615f0(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
  lVar2 = lVar3;
  func_0x000107c6148c(lVar3,puVar1);
  if (lVar2 == 0) {
    func_0x000107c615e8(lVar3);
    lVar2 = 0;
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10117d700; end: 10117dae3;  */

void FUN_10117d700(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_d8;
  ulong uStack_c0;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  uVar14 = *param_2;
  if (uVar14 >> 0x3e == 0) {
    uStack_b0 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_b0 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uStack_b0 = uVar14;
    }
    func_0x000107c60480();
  }
  uStack_c0 = uVar14 & 0xffffffffffffff8;
  puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = 0;
  while( true ) {
    if (uStack_b0 == uVar15) {
      uVar13 = 0;
      func_0x00010117fa64(0,0x112d61f60,&PTR_PTR_1126b14a0);
      puVar12 = puStack_d8;
      func_0x000107c5fc48(puStack_d8,uVar13);
      func_0x000107c6142c(puStack_d8);
      *param_1 = puVar12;
      return;
    }
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_c0 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dac0);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar14 + uVar15 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar15;
      func_0x00010117ea28(uVar15,uVar14);
    }
    uVar1 = uVar15 + 1;
    if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dabc);
      (*pcVar4)();
    }
    lStack_78 = 0;
    uVar6 = uVar5;
    func_0x000107c42924(uVar5);
    func_0x000107c61180();
    puVar12 = &UNK_11038a780;
    func_0x000107c613fc(&UNK_11038a780,0x18,7);
    *(long **)(puVar12 + 0x10) = &lStack_78;
    puVar11 = &UNK_11038a7a8;
    func_0x000107c613fc(&UNK_11038a7a8,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = 0x10117fb5c;
    *(undefined **)(puVar11 + 0x18) = puVar12;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x10117fb90;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x10117dba4;
    puStack_90 = &UNK_11038a7c0;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar11;
    func_0x000107c60bc4(ppuVar7);
    puVar8 = puStack_80;
    func_0x000107c6157c(puVar11);
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_11038a7f8;
    func_0x000107c613fc(&UNK_11038a7f8,0x20,7);
    *(long **)(puVar8 + 0x10) = &lStack_78;
    *(ulong *)(puVar8 + 0x18) = uVar5;
    puVar9 = &UNK_11038a820;
    func_0x000107c613fc(&UNK_11038a820,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x10117fb98;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    uStack_88 = 0x10117fb9c;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x10117dc68;
    puStack_90 = &UNK_11038a838;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar2 = puStack_80;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar2);
    func_0x000107c4c728(uVar6);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar6);
    lVar3 = lStack_78;
    func_0x000107c61574(puVar12);
    puVar12 = puVar11;
    func_0x000107c61544(puVar11,"",0x7f,0xcb,0x2a,1);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dac4);
      (*pcVar4)();
    }
    puVar12 = puVar9;
    func_0x000107c61544(puVar9,"",0x7f,0xcf,0x13,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar12 & 1) != 0) break;
    uVar15 = uVar15 + 1;
    if (lVar3 != 0) {
      puVar12 = puStack_d8;
      func_0x000107c61550();
      if ((((int)puVar12 == 0) || ((long)puStack_d8 < 0)) || (((ulong)puStack_d8 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_d8 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puStack_d8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_d8) {
            puVar12 = puStack_d8;
          }
          func_0x000107c60480(puVar12);
        }
        puVar11 = (undefined *)0x0;
        FUN_10117ee1c(0,puVar12 + 1,1,puStack_d8);
        puStack_d8 = puVar11;
      }
      uVar5 = (ulong)puStack_d8 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar15) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_10117ee1c(puVar12,uVar15 + 1,1,puStack_d8);
        uVar5 = (ulong)puVar12 & 0xffffffffffffff8;
        puStack_d8 = puVar12;
      }
      *(ulong *)(uVar5 + 0x10) = uVar15 + 1;
      *(long *)(uVar5 + uVar15 * 8 + 0x20) = lVar3;
      uVar15 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dac8);
  (*pcVar4)();
}



/* Entry: 10117dae4; end: 10117db2b;  */

void FUN_10117dae4(char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  func_0x000104886440();
  return;
}



/* Entry: 10117db2c; end: 10117dc9f;  */

/* WARNING: Possible PIC construction at 0x00010117db78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010117db7c) */

void FUN_10117db2c(long param_1)

{
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61168(PTR_PTR_1126b14a0);
    func_0x000107c5b498();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10117dca0; end: 10117e0bf;  */

void FUN_10117dca0(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_f8;
  ulong uStack_e0;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  uVar14 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uStack_d0 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uStack_d0 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uStack_d0 = uVar14;
      }
      func_0x000107c60480();
    }
    uStack_e0 = uVar14 & 0xffffffffffffff8;
    puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar15 = 0;
    while (uStack_d0 != uVar15) {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uStack_e0 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10117e09c);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(uVar14 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar15;
        func_0x00010117ea28(uVar15,uVar14);
      }
      uVar1 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117e098);
        (*pcVar4)();
      }
      lStack_98 = 0;
      uVar6 = uVar5;
      func_0x000107c42924(uVar5);
      func_0x000107c61180();
      puVar12 = &UNK_11038a4b0;
      func_0x000107c613fc(&UNK_11038a4b0,0x18,7);
      *(long **)(puVar12 + 0x10) = &lStack_98;
      puVar11 = &UNK_11038a4d8;
      func_0x000107c613fc(&UNK_11038a4d8,0x20,7);
      *(code **)(puVar11 + 0x10) = FUN_10117ebec;
      *(undefined **)(puVar11 + 0x18) = puVar12;
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a8 = FUN_10117ebf4;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      uStack_b8 = 0x10117dba4;
      puStack_b0 = &UNK_11038a4f0;
      ppuVar7 = &puStack_c8;
      puStack_a0 = puVar11;
      func_0x000107c60bc4(ppuVar7);
      puVar8 = puStack_a0;
      func_0x000107c6157c(puVar11);
      func_0x000107c61574(puVar8);
      puVar8 = &UNK_11038a528;
      func_0x000107c613fc(&UNK_11038a528,0x20,7);
      *(long **)(puVar8 + 0x10) = &lStack_98;
      *(ulong *)(puVar8 + 0x18) = uVar5;
      puVar9 = &UNK_11038a550;
      func_0x000107c613fc(&UNK_11038a550,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = 0x10117ec30;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      pcStack_a8 = FUN_10117ec38;
      puStack_c8 = puVar2;
      uStack_c0 = 0x42000000;
      uStack_b8 = 0x10117dc68;
      puStack_b0 = &UNK_11038a568;
      ppuVar10 = &puStack_c8;
      puStack_a0 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar2 = puStack_a0;
      func_0x000107c61174(uVar5);
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar2);
      func_0x000107c4c728(uVar6);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar6);
      lVar3 = lStack_98;
      func_0x000107c61574(puVar12);
      puVar12 = puVar11;
      func_0x000107c61544(puVar11,"",0x7f,0xcb,0x2a,1);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar11);
      if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117e0a0);
        (*pcVar4)();
      }
      puVar12 = puVar9;
      func_0x000107c61544(puVar9,"",0x7f,0xcf,0x13,1);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(puVar9);
      if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117e0a4);
        (*pcVar4)();
      }
      uVar15 = uVar15 + 1;
      if (lVar3 != 0) {
        puVar12 = puStack_f8;
        func_0x000107c61550();
        if ((((int)puVar12 == 0) || ((long)puStack_f8 < 0)) ||
           (((ulong)puStack_f8 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_f8 >> 0x3e == 0) {
            puVar12 = *(undefined **)(((ulong)puStack_f8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar12 = (undefined *)((ulong)puStack_f8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_f8) {
              puVar12 = puStack_f8;
            }
            func_0x000107c60480(puVar12);
          }
          puVar11 = (undefined *)0x0;
          FUN_10117ee1c(0,puVar12 + 1,1,puStack_f8);
          puStack_f8 = puVar11;
        }
        uVar5 = (ulong)puStack_f8 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar5 + 0x10);
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar15) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_10117ee1c(puVar12,uVar15 + 1,1,puStack_f8);
          uVar5 = (ulong)puVar12 & 0xffffffffffffff8;
          puStack_f8 = puVar12;
        }
        *(ulong *)(uVar5 + 0x10) = uVar15 + 1;
        *(long *)(uVar5 + uVar15 * 8 + 0x20) = lVar3;
        uVar15 = uVar1;
      }
    }
    uVar13 = 0;
    func_0x00010117fa64(0,0x112d61f60,&PTR_PTR_1126b14a0);
    puVar12 = puStack_f8;
    func_0x000107c5fc48(puStack_f8,uVar13);
    func_0x000107c6142c(puStack_f8);
    puStack_c8 = puVar12;
    func_0x0001007d6d78(&puStack_c8);
    func_0x000107c61170(puVar12);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10117e0c0; end: 10117e207;  */

void FUN_10117e0c0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10117e208; end: 10117e2c3;  */

void FUN_10117e208(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  puVar4 = auStack_80;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_3;
  func_0x000107c614f0();
  auStack_60[0] = param_3;
  uStack_48 = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(auStack_80,param_2,auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_80,uStack_68);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_80);
  func_0x000100183ab8(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10117e2c4; end: 10117e593;  */

undefined * FUN_10117e2c4(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  uVar7 = 0;
  iVar2 = (int)&puStack_90;
  iVar3 = (int)&puStack_90;
  func_0x000107c615f0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
  lVar5 = param_1;
  func_0x000107c6148c(param_1,puVar4);
  puVar4 = PTR___sypN_11034f1a8;
  if (lVar5 == 0) {
    func_0x000107c615e8(param_1);
    uStack_68 = 0;
    puStack_70 = (undefined *)0x0;
    lStack_58 = 0;
    uStack_60 = 0;
    lVar6 = 0;
LAB_10117e3ac:
    func_0x00010117fa24(&puStack_70,0x112d387f8,&UNK_10d902650);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10117f1c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    bVar1 = lVar5 == 0;
    lVar5 = lVar6;
    puVar13 = (undefined *)0x0;
    if (bVar1) goto LAB_10117e470;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c43638();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&puStack_90);
      func_0x000107c615e8(lVar6);
    }
    uStack_68 = uStack_88;
    puStack_70 = puStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    lVar6 = lVar5;
    if (lStack_78 == 0) goto LAB_10117e3ac;
    uVar9 = 0x112d61f90;
    func_0x0001000285a8(0x112d61f90,&UNK_10d927f28);
    func_0x000107c6147c(&puStack_90,&puStack_70,puVar4 + 8,uVar9,6);
    puVar8 = puStack_90;
    if ((uVar7 & 1) == 0) {
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10117f1c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
  }
  lVar6 = lVar5;
  func_0x000107c40808();
  if (lVar6 < 2) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c4d9a4(lVar5);
    func_0x000107c61180();
    func_0x000107c60234(&puStack_70);
    func_0x000107c615e8(lVar6);
    uVar9 = 0;
    func_0x00010117fa64(0,0x112d61f88,&PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x000107c6147c(&puStack_90,&puStack_70,puVar4 + 8,uVar9,6);
    puVar13 = puStack_90;
    if (iVar2 == 0) {
      puVar13 = (undefined *)0x0;
    }
  }
LAB_10117e470:
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000bb420(param_2,&puStack_70);
  uVar9 = 0x112d61f80;
  func_0x0001000285a8(0x112d61f80,&UNK_10d9d8130);
  func_0x000107c6147c(&puStack_90,&puStack_70,puVar4 + 8,uVar9,6);
  puVar4 = puStack_90;
  puVar12 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar13 != (undefined *)0x0) {
    puStack_70 = (undefined *)0x0;
    puVar10 = puVar13;
    func_0x000107c61174(puVar13);
    func_0x000107c5fe0c();
    func_0x000107c61170(puVar10);
    if (puStack_70 != (undefined *)0x0) {
      puVar12 = puStack_70;
    }
  }
  if (iVar3 == 0) {
    puVar4 = puVar11;
  }
  puVar11 = puVar8;
  FUN_10117f89c(puVar8,puVar12,puVar4);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar12);
  uVar9 = 0;
  func_0x00010117fa64(0,0x112d61f70,&PTR_PTR_1126b14e0);
  puVar4 = puVar11;
  func_0x000107c5fc48(puVar11,uVar9);
  func_0x000107c6142c(puVar11);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar5);
  return puVar4;
}



/* Entry: 10117e594; end: 10117e5ff;  */

void FUN_10117e594(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  func_0x000107c615f0();
  uVar1 = 0x112d61f80;
  func_0x0001000285a8(0x112d61f80,&UNK_10d9d8130);
  puVar2 = param_1;
  func_0x000107c6147c(param_1,&uStack_28,PTR___syXlN_11034f1a0 + 8,uVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    *param_1 = 0;
  }
  return;
}



/* Entry: 10117e600; end: 10117e65f; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin init] */

void FUN_10117e600(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShortcutsDataFriendshipFlashbackPlugin.FriendshipFlashbackShortcutPlugin",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10117e62c);
  (*pcVar1)();
}



/* Entry: 10117e660; end: 10117e6f7; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010117e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117e69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117e6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117e6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010117e6c0) */
/* WARNING: Removing unreachable block (ram,0x00010117e6a0) */
/* WARNING: Removing unreachable block (ram,0x00010117e680) */
/* WARNING: Removing unreachable block (ram,0x00010117e6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117e660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d61ee8));
  return;
}



/* Entry: 10117e6f8; end: 10117e767;  */

void FUN_10117e6f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3100);
  return;
}



/* Entry: 10117e768; end: 10117e79f;  */

bool FUN_10117e768(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10117e7a0; end: 10117e7bb;  */

void FUN_10117e7a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10117e7bc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10117e7bc; end: 10117e90f;  */

undefined * FUN_10117e7bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10117e910);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d61f70;
    FUN_10117e9b0(0x112d61f70,&PTR_PTR_1126b14e0,0x112d61f98,&UNK_10d927f30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x00010117fa64(0,0x112d61f70,&PTR_PTR_1126b14e0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10117e910; end: 10117e9af;  */

undefined * FUN_10117e910(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d61f60;
    FUN_10117e9b0(0x112d61f60,&PTR_PTR_1126b14a0,0x112d61f68,&UNK_10d927f10);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10117e9b0; end: 10117ebeb;  */

void FUN_10117e9b0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x00010117fa64(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10117ebec; end: 10117ebf3;  */

/* WARNING: Possible PIC construction at 0x00010117db78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010117db7c) */

void FUN_10117ebec(long param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c5d984(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61168(PTR_PTR_1126b14a0);
    func_0x000107c5b498();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10117ebf4; end: 10117ec13;  */

void FUN_10117ebf4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10117ec14; end: 10117ec37;  */

void FUN_10117ec14(long param_1,long param_2)

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



/* Entry: 10117ec38; end: 10117ec57;  */

void FUN_10117ec38(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10117ec58; end: 10117ee1b;  */

ulong FUN_10117ec58(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10117ed3c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10117ed40);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bc768;
    func_0x000107c61168(PTR_PTR_1126bc768);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bc768;
    func_0x000107c61168(PTR_PTR_1126bc768);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010117fa64(0,0x112d61fa0,&PTR_PTR_1126bc768);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10117ee1c);
  (*pcVar2)();
}



/* Entry: 10117ee1c; end: 10117f05b;  */

ulong FUN_10117ee1c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10117ef44);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10117e910(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10117ef40);
      (*pcVar1)();
    }
    func_0x00010117ef44(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10117f05c; end: 10117f063;  */

undefined * FUN_10117f05c(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  uVar7 = 0;
  iVar2 = (int)&puStack_90;
  iVar3 = (int)&puStack_90;
  func_0x000107c615f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
  lVar5 = param_1;
  func_0x000107c6148c(param_1,puVar4);
  puVar4 = PTR___sypN_11034f1a8;
  if (lVar5 == 0) {
    func_0x000107c615e8(param_1);
    uStack_68 = 0;
    puStack_70 = (undefined *)0x0;
    lStack_58 = 0;
    uStack_60 = 0;
    lVar6 = 0;
LAB_10117e3ac:
    func_0x00010117fa24(&puStack_70,0x112d387f8,&UNK_10d902650);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10117f1c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    bVar1 = lVar5 == 0;
    lVar5 = lVar6;
    puVar13 = (undefined *)0x0;
    if (bVar1) goto LAB_10117e470;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c43638();
    func_0x000107c61180();
    if (lVar6 == 0) {
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&puStack_90);
      func_0x000107c615e8(lVar6);
    }
    uStack_68 = uStack_88;
    puStack_70 = puStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    lVar6 = lVar5;
    if (lStack_78 == 0) goto LAB_10117e3ac;
    uVar9 = 0x112d61f90;
    func_0x0001000285a8(0x112d61f90,&UNK_10d927f28);
    func_0x000107c6147c(&puStack_90,&puStack_70,puVar4 + 8,uVar9,6);
    puVar8 = puStack_90;
    if ((uVar7 & 1) == 0) {
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10117f1c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
  }
  lVar6 = lVar5;
  func_0x000107c40808();
  if (lVar6 < 2) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c4d9a4(lVar5);
    func_0x000107c61180();
    func_0x000107c60234(&puStack_70);
    func_0x000107c615e8(lVar6);
    uVar9 = 0;
    func_0x00010117fa64(0,0x112d61f88,&PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x000107c6147c(&puStack_90,&puStack_70,puVar4 + 8,uVar9,6);
    puVar13 = puStack_90;
    if (iVar2 == 0) {
      puVar13 = (undefined *)0x0;
    }
  }
LAB_10117e470:
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000bb420(param_2,&puStack_70);
  uVar9 = 0x112d61f80;
  func_0x0001000285a8(0x112d61f80,&UNK_10d9d8130);
  func_0x000107c6147c(&puStack_90,&puStack_70,puVar4 + 8,uVar9,6);
  puVar4 = puStack_90;
  puVar12 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar13 != (undefined *)0x0) {
    puStack_70 = (undefined *)0x0;
    puVar10 = puVar13;
    func_0x000107c61174(puVar13);
    func_0x000107c5fe0c();
    func_0x000107c61170(puVar10);
    if (puStack_70 != (undefined *)0x0) {
      puVar12 = puStack_70;
    }
  }
  if (iVar3 == 0) {
    puVar4 = puVar11;
  }
  puVar11 = puVar8;
  FUN_10117f89c(puVar8,puVar12,puVar4);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar12);
  uVar9 = 0;
  func_0x00010117fa64(0,0x112d61f70,&PTR_PTR_1126b14e0);
  puVar4 = puVar11;
  func_0x000107c5fc48(puVar11,uVar9);
  func_0x000107c6142c(puVar11);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar5);
  return puVar4;
}



/* Entry: 10117f064; end: 10117f097;  */

void FUN_10117f064(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10117f098; end: 10117f1c7;  */

/* WARNING: Removing unreachable block (ram,0x00010117f1c4) */

undefined * FUN_10117f098(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e20ed8;
  func_0x000107c61174();
  ppuVar2 = ppuVar1;
  FUN_101180058();
  puVar3 = PTR_PTR_1126b1490;
  func_0x000107c61168(PTR_PTR_1126b1490);
  func_0x000107c51b98();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b1498;
  func_0x000107c610f8(PTR_PTR_1126b1498);
  func_0x000107c5fadc(ppuVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48694(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(ppuVar2);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar5 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c5b58c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 10117f1c8; end: 10117f2c7;  */

undefined * FUN_10117f1c8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d61fa8,&UNK_10d927f40);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117f2c4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117f2c8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10117f2c8; end: 10117f5b3;  */

bool FUN_10117f2c8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ef64();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ec74();
  lStack_68 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d373d8;
  lStack_70 = lVar8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_01;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar16 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12;
  func_0x0001009f0578(param_1,lVar8);
  lVar4 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar5);
  if ((int)lVar4 == 1) {
    FUN_10117fa24(lVar8,0x112d373d8,&UNK_10d9014c0);
    bVar1 = false;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar15,lVar8,lVar5);
    func_0x000107c5ef54(puVar6);
    lVar4 = 0x112d36588;
    func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
    lVar8 = 0;
    func_0x000107c5ef5c();
    lVar13 = *(long *)(lVar8 + -8);
    uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar11 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    lStack_80 = lVar2;
    lStack_78 = lVar12;
    func_0x000107c613fc(lVar4,uVar11 + *(long *)(lVar13 + 0x48),uVar9 | 7);
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    (**(code **)(lVar13 + 0x68))
              (lVar4 + uVar11,
               *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_110350d78,lVar8);
    lVar2 = lVar4;
    FUN_100ddce0c(lVar4);
    lStack_88 = lVar3;
    func_0x000107c61588(lVar4);
    (**(code **)(lVar13 + 8))(lVar4 + uVar11,lVar8);
    func_0x000107c6145c(lVar4,0x20,7);
    func_0x000107c5eea0(lVar16);
    lVar4 = lStack_70;
    func_0x000107c5ef28(lStack_70,lVar2,lVar15,lVar16);
    func_0x000107c6142c(lVar2);
    pcVar14 = *(code **)(lVar10 + 8);
    (*pcVar14)(lVar16,lVar5);
    lVar2 = lStack_80;
    (**(code **)(lStack_78 + 8))(puVar6);
    uVar7 = (uint)lVar2;
    func_0x000107c5ec44();
    (**(code **)(lStack_68 + 8))(lVar4,lStack_88);
    (*pcVar14)(lVar15,lVar5);
    bVar1 = (uVar7 & 0xff) == 1;
    bVar1 = (!bVar1 && puVar6 != (undefined1 *)0x2) && (bVar1 || 1 < (long)puVar6);
  }
  return bVar1;
}



/* Entry: 10117f5b4; end: 10117f89b;  */

void FUN_10117f5b4(ulong *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined1 *puVar11;
  
  lVar5 = 0x112d373d8;
  puVar9 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar2 = *param_1;
  func_0x000107c3d15c();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return;
  }
  uVar8 = uVar2;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  if (*(long *)(param_2 + 0x10) == 0) {
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar9);
    return;
  }
  func_0x000107c61434(param_2);
  puVar10 = puVar9;
  func_0x000100029284();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(param_2);
    return;
  }
  uVar3 = *(ulong *)(*(long *)(param_2 + 0x38) + uVar3 * 8);
  func_0x000107c61174();
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(param_2);
  uVar8 = uVar2;
  func_0x000107c4cde4();
  func_0x000107c61180();
  if (uVar8 != 0) {
    func_0x000107c61170();
    uVar8 = uVar2;
    func_0x000107c40674();
    func_0x000107c61180();
    uVar4 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
    func_0x0001000f66f0(uVar4,puVar10,param_3);
    func_0x000107c6142c(puVar10);
    if ((uVar4 & 1) == 0) {
      uVar8 = uVar2;
      func_0x000107c42168(uVar2);
      func_0x000107c61180();
      func_0x000107c5ee94(puVar11);
      func_0x000107c61170(uVar8);
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar11,0,1,lVar5);
      puVar6 = puVar11;
      FUN_10117f2c8();
      FUN_10117fa24(puVar11,0x112d373d8,&UNK_10d9014c0);
      if (((ulong)puVar6 & 1) != 0) {
        uVar8 = uVar3;
        func_0x000107c4c9d0();
        func_0x000107c61180();
        uVar7 = 0;
        func_0x00010117fa64(0,0x112d61fa0,&PTR_PTR_1126bc768);
        uVar4 = uVar8;
        func_0x000107c5fc54(uVar8,uVar7);
        func_0x000107c61170(uVar8);
        if (uVar4 >> 0x3e == 0) {
          uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar8 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar8 = uVar4;
          }
          func_0x000107c60480();
        }
        if (uVar8 != 0) {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10117f89c);
              (*pcVar1)();
            }
          }
          else {
            FUN_10117ec58(0,uVar4);
            func_0x000107c615e8();
          }
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(uVar4);
          func_0x000107c61170(uVar2);
          return;
        }
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(uVar4);
        uVar3 = uVar2;
        goto LAB_10117f830;
      }
    }
  }
  func_0x000107c61170(uVar2);
LAB_10117f830:
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10117f89c; end: 10117fa23;  */

undefined * FUN_10117f89c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_70;
  undefined *puStack_68;
  
  if (param_3 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar9 = param_3;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10117f9e0);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_3 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar8;
        func_0x00010117ea28(uVar8,param_3);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10117f9dc);
        (*pcVar3)();
      }
      puVar5 = &uStack_70;
      uStack_70 = uVar4;
      FUN_10117f5b4(puVar5,param_1,param_2);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c61170(uVar4);
      }
      else {
        puVar6 = puVar7;
        func_0x000107c61558();
        puStack_68 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_10117e7a0(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(puStack_68 + 0x10);
        if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
          FUN_10117e7a0(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
        *(ulong *)(puStack_68 + uVar2 * 8 + 0x20) = uVar4;
        puVar7 = puStack_68;
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar9);
  }
  return puVar7;
}



/* Entry: 10117fa24; end: 10117faa3;  */

undefined8 FUN_10117fa24(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10117faa4; end: 10117faab;  */

undefined * FUN_10117faa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ******ppppppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 ******ppppppuVar18;
  undefined *puVar19;
  undefined8 ******ppppppuVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined *puStack_e8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_78;
  
  pppppuStack_c0 = (undefined8 ******)0x0;
  uVar6 = 0;
  func_0x00010117fa64(0,0x112d61f70,&PTR_PTR_1126b14e0);
  func_0x000107c5fc50(param_1,&pppppuStack_c0,uVar6);
  ppppppuVar15 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((undefined8 ******)pppppuStack_c0 != (undefined8 ******)0x0) {
    ppppppuVar15 = (undefined8 ******)pppppuStack_c0;
  }
  func_0x0001000bb420(param_2,&pppppuStack_c0);
  uVar6 = 0x112d5d480;
  func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
  ppuVar7 = &puStack_78;
  ppppppuVar18 = &pppppuStack_c0;
  func_0x000107c6147c(ppuVar7,ppppppuVar18,PTR___sypN_11034f1a8 + 8,uVar6,6);
  puVar19 = puStack_78;
  if ((int)ppuVar7 == 0) {
    puVar19 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  if ((ulong)ppppppuVar15 >> 0x3e == 0) {
    ppppppuVar23 = *(undefined8 *******)(((ulong)ppppppuVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppppppuVar23 = (undefined8 ******)((ulong)ppppppuVar15 & 0xffffffffffffff8);
    if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar15) {
      ppppppuVar23 = ppppppuVar15;
    }
    func_0x000107c60480();
  }
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppppuVar23 != (undefined8 ******)0x0) {
    puStack_d0 = (undefined *)((ulong)ppppppuVar15 & 0xffffffffffffff8);
    ppppppuVar24 = (undefined8 ******)0x0;
    do {
      if (((ulong)ppppppuVar15 & 0xc000000000000001) == 0) {
        if (*(undefined8 *******)((long)puStack_d0 + 0x10) <= ppppppuVar24) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d2cc);
          (*pcVar4)();
        }
        ppppppuVar8 = (undefined8 ******)ppppppuVar15[(long)((long)ppppppuVar24 + 4)];
        func_0x000107c61174();
      }
      else {
        ppppppuVar8 = ppppppuVar24;
        ppppppuVar18 = ppppppuVar15;
        func_0x00010117ea28();
      }
      bVar5 = SCARRY8((long)ppppppuVar24,1);
      ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d2c8);
        (*pcVar4)();
      }
      ppppppuVar9 = ppppppuVar8;
      func_0x000107c42f24();
      func_0x000107c61180();
      ppppppuVar10 = ppppppuVar9;
      func_0x000107c5faec();
      ppppppuVar20 = ppppppuVar18;
      func_0x000107c61170(ppppppuVar9);
      if (*(long *)(puVar19 + 0x10) != 0) {
        func_0x000107c6068c(&pppppuStack_c0,*(undefined8 *)(puVar19 + 0x28));
        ppppppuVar9 = &pppppuStack_c0;
        ppppppuVar20 = ppppppuVar10;
        func_0x000107c5fb58(ppppppuVar9,ppppppuVar10,ppppppuVar18);
        func_0x000107c606a8();
        uVar21 = -1L << ((ulong)(byte)puVar19[0x20] & 0x3f);
        uVar22 = (ulong)ppppppuVar9 & (uVar21 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar19 + (uVar22 >> 6) * 8 + 0x38) >> (uVar22 & 0x3f) & 1) != 0) {
          do {
            puVar2 = (ulong *)(*(long *)(puVar19 + 0x30) + uVar22 * 0x10);
            ppppppuVar9 = (undefined8 ******)*puVar2;
            ppppppuVar20 = (undefined8 ******)puVar2[1];
            if ((ppppppuVar9 == ppppppuVar10 && ppppppuVar20 == ppppppuVar18) ||
               (func_0x000107c605b8(ppppppuVar9,ppppppuVar20,ppppppuVar10,ppppppuVar18,0),
               ((ulong)ppppppuVar9 & 1) != 0)) {
              func_0x000107c6142c(ppppppuVar18);
              puVar11 = puStack_c8;
              func_0x000107c61558();
              puStack_78 = puStack_c8;
              if (((ulong)puVar11 & 1) == 0) {
                ppppppuVar20 = (undefined8 ******)(*(long *)(puStack_c8 + 0x10) + 1);
                FUN_10117e7a0(0,ppppppuVar20,1);
              }
              uVar21 = *(ulong *)(puStack_78 + 0x10);
              ppppppuVar18 = (undefined8 ******)(uVar21 + 1);
              if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar21) {
                ppppppuVar20 = ppppppuVar18;
                FUN_10117e7a0(1 < *(ulong *)(puStack_78 + 0x18),ppppppuVar18,1);
              }
              *(undefined8 *******)(puStack_78 + 0x10) = ppppppuVar18;
              *(undefined8 *******)(puStack_78 + uVar21 * 8 + 0x20) = ppppppuVar8;
              ppppppuVar18 = ppppppuVar20;
              puStack_c8 = puStack_78;
              goto joined_r0x00010117d28c;
            }
            uVar22 = uVar22 + 1 & ~uVar21;
          } while ((*(ulong *)(puVar19 + (uVar22 >> 6) * 8 + 0x38) >> (uVar22 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(ppppppuVar18);
      func_0x000107c61170(ppppppuVar8);
      ppppppuVar18 = ppppppuVar20;
joined_r0x00010117d28c:
    } while (ppppppuVar24 != ppppppuVar23);
  }
  func_0x000107c6142c(puVar19);
  func_0x000107c6142c(ppppppuVar15);
  if (((long)puStack_c8 < 0) || (((ulong)puStack_c8 >> 0x3e & 1) != 0)) {
    puStack_d0 = puStack_c8;
    func_0x000107c60480();
  }
  else {
    puStack_d0 = *(undefined **)(puStack_c8 + 0x10);
  }
  puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar19 = (undefined *)0x0;
  while( true ) {
    if (puStack_d0 == puVar19) {
      func_0x000107c61574(puStack_c8);
      uVar6 = 0;
      func_0x00010117fa64(0,0x112d61f60,&PTR_PTR_1126b14a0);
      puVar19 = puStack_e8;
      func_0x000107c5fc48(puStack_e8,uVar6);
      func_0x000107c6142c(puStack_e8);
      return puVar19;
    }
    if (((ulong)puStack_c8 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puStack_c8 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d694);
        (*pcVar4)();
      }
      puVar11 = *(undefined **)(puStack_c8 + (long)puVar19 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar11 = puVar19;
      func_0x00010117ea28(puVar19,puStack_c8);
    }
    puVar1 = puVar19 + 1;
    if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d690);
      (*pcVar4)();
    }
    puStack_78 = (undefined *)0x0;
    puVar12 = puVar11;
    func_0x000107c42924(puVar11);
    func_0x000107c61180();
    puVar13 = &UNK_11038a870;
    func_0x000107c613fc(&UNK_11038a870,0x18,7);
    *(undefined ***)(puVar13 + 0x10) = &puStack_78;
    puVar14 = &UNK_11038a898;
    func_0x000107c613fc(&UNK_11038a898,0x20,7);
    *(undefined8 *)(puVar14 + 0x10) = 0x10117fb60;
    *(undefined **)(puVar14 + 0x18) = puVar13;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x10117fb94;
    pppppuStack_c0 = (undefined8 *****)PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x10117dba4;
    puStack_a8 = &UNK_11038a8b0;
    ppppppuVar15 = &pppppuStack_c0;
    puStack_98 = puVar14;
    func_0x000107c60bc4(ppppppuVar15);
    puVar16 = puStack_98;
    func_0x000107c6157c(puVar14);
    func_0x000107c61574(puVar16);
    puVar16 = &UNK_11038a8e8;
    func_0x000107c613fc(&UNK_11038a8e8,0x20,7);
    *(undefined ***)(puVar16 + 0x10) = &puStack_78;
    *(undefined **)(puVar16 + 0x18) = puVar11;
    puVar17 = &UNK_11038a910;
    func_0x000107c613fc(&UNK_11038a910,0x20,7);
    *(undefined8 *)(puVar17 + 0x10) = 0x10117fba0;
    *(undefined **)(puVar17 + 0x18) = puVar16;
    uStack_a0 = 0x10117fba4;
    pppppuStack_c0 = (undefined8 *****)puVar3;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x10117dc68;
    puStack_a8 = &UNK_11038a928;
    ppppppuVar18 = &pppppuStack_c0;
    puStack_98 = puVar17;
    func_0x000107c60bc4(ppppppuVar18);
    puVar3 = puStack_98;
    func_0x000107c61174(puVar11);
    func_0x000107c6157c(puVar17);
    func_0x000107c61574(puVar3);
    func_0x000107c4c728(puVar12);
    func_0x000107c60bd0(ppppppuVar18);
    func_0x000107c60bd0(ppppppuVar15);
    func_0x000107c61170(puVar12);
    puVar3 = puStack_78;
    func_0x000107c61574(puVar13);
    puVar13 = puVar14;
    func_0x000107c61544(puVar14,"",0x7f,0xcb,0x2a,1);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar14);
    if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d698);
      (*pcVar4)();
    }
    puVar13 = puVar17;
    func_0x000107c61544(puVar17,"",0x7f,0xcf,0x13,1);
    func_0x000107c61170(puVar11);
    func_0x000107c61574(puVar17);
    if (((ulong)puVar13 & 1) != 0) break;
    puVar19 = puVar19 + 1;
    if (puVar3 != (undefined *)0x0) {
      puVar19 = puStack_e8;
      func_0x000107c61550();
      if ((((int)puVar19 == 0) || ((long)puStack_e8 < 0)) || (((ulong)puStack_e8 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_e8 >> 0x3e == 0) {
          puVar19 = *(undefined **)(((ulong)puStack_e8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar19 = (undefined *)((ulong)puStack_e8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_e8) {
            puVar19 = puStack_e8;
          }
          func_0x000107c60480(puVar19);
        }
        puVar11 = (undefined *)0x0;
        FUN_10117ee1c(0,puVar19 + 1,1,puStack_e8);
        puStack_e8 = puVar11;
      }
      uVar22 = (ulong)puStack_e8 & 0xffffffffffffff8;
      uVar21 = *(ulong *)(uVar22 + 0x10);
      if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar21) {
        puVar19 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
        FUN_10117ee1c(puVar19,uVar21 + 1,1,puStack_e8);
        uVar22 = (ulong)puVar19 & 0xffffffffffffff8;
        puStack_e8 = puVar19;
      }
      *(ulong *)(uVar22 + 0x10) = uVar21 + 1;
      *(undefined **)(uVar22 + uVar21 * 8 + 0x20) = puVar3;
      puVar19 = puVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10117d69c);
  (*pcVar4)();
}



/* Entry: 10117faac; end: 10117faf3;  */

void FUN_10117faac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  func_0x00010117fa64(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10117faf4; end: 10117fbbb;  */

void FUN_10117faf4(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_d8;
  ulong uStack_c0;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  uVar14 = *param_2;
  if (uVar14 >> 0x3e == 0) {
    uStack_b0 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_b0 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uStack_b0 = uVar14;
    }
    func_0x000107c60480(uStack_b0,*(undefined8 *)(unaff_x20 + 0x10));
  }
  uStack_c0 = uVar14 & 0xffffffffffffff8;
  puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = 0;
  while( true ) {
    if (uStack_b0 == uVar15) {
      uVar13 = 0;
      func_0x00010117fa64(0,0x112d61f60,&PTR_PTR_1126b14a0);
      puVar12 = puStack_d8;
      func_0x000107c5fc48(puStack_d8,uVar13);
      func_0x000107c6142c(puStack_d8);
      *param_1 = puVar12;
      return;
    }
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_c0 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dac0);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar14 + uVar15 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar15;
      func_0x00010117ea28(uVar15,uVar14);
    }
    uVar1 = uVar15 + 1;
    if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dabc);
      (*pcVar4)();
    }
    lStack_78 = 0;
    uVar6 = uVar5;
    func_0x000107c42924(uVar5);
    func_0x000107c61180();
    puVar12 = &UNK_11038a780;
    func_0x000107c613fc(&UNK_11038a780,0x18,7);
    *(long **)(puVar12 + 0x10) = &lStack_78;
    puVar11 = &UNK_11038a7a8;
    func_0x000107c613fc(&UNK_11038a7a8,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = 0x10117fb5c;
    *(undefined **)(puVar11 + 0x18) = puVar12;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x10117fb90;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x10117dba4;
    puStack_90 = &UNK_11038a7c0;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar11;
    func_0x000107c60bc4(ppuVar7);
    puVar8 = puStack_80;
    func_0x000107c6157c(puVar11);
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_11038a7f8;
    func_0x000107c613fc(&UNK_11038a7f8,0x20,7);
    *(long **)(puVar8 + 0x10) = &lStack_78;
    *(ulong *)(puVar8 + 0x18) = uVar5;
    puVar9 = &UNK_11038a820;
    func_0x000107c613fc(&UNK_11038a820,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x10117fb98;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    uStack_88 = 0x10117fb9c;
    puStack_a8 = puVar2;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x10117dc68;
    puStack_90 = &UNK_11038a838;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar2 = puStack_80;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar2);
    func_0x000107c4c728(uVar6);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar6);
    lVar3 = lStack_78;
    func_0x000107c61574(puVar12);
    puVar12 = puVar11;
    func_0x000107c61544(puVar11,"",0x7f,0xcb,0x2a,1);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dac4);
      (*pcVar4)();
    }
    puVar12 = puVar9;
    func_0x000107c61544(puVar9,"",0x7f,0xcf,0x13,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(puVar9);
    if (((ulong)puVar12 & 1) != 0) break;
    uVar15 = uVar15 + 1;
    if (lVar3 != 0) {
      puVar12 = puStack_d8;
      func_0x000107c61550();
      if ((((int)puVar12 == 0) || ((long)puStack_d8 < 0)) || (((ulong)puStack_d8 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_d8 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puStack_d8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_d8) {
            puVar12 = puStack_d8;
          }
          func_0x000107c60480(puVar12);
        }
        puVar11 = (undefined *)0x0;
        FUN_10117ee1c(0,puVar12 + 1,1,puStack_d8);
        puStack_d8 = puVar11;
      }
      uVar5 = (ulong)puStack_d8 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar15) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_10117ee1c(puVar12,uVar15 + 1,1,puStack_d8);
        uVar5 = (ulong)puVar12 & 0xffffffffffffff8;
        puStack_d8 = puVar12;
      }
      *(ulong *)(uVar5 + 0x10) = uVar15 + 1;
      *(long *)(uVar5 + uVar15 * 8 + 0x20) = lVar3;
      uVar15 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10117dac8);
  (*pcVar4)();
}



/* Entry: 10117fbbc; end: 10117fbbf; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin shouldBadgeForSource:] */

bool FUN_10117fbbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 10117fbc0; end: 10117fbc3; -[_TtC40SCShortcutsDataFriendshipFlashbackPlugin33FriendshipFlashbackShortcutPlugin shouldShowForSource:] */

bool FUN_10117fbc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 10117fbc4; end: 10118000b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10117fbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 unaff_x20;
  undefined8 uVar14;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  func_0x000107c613fc();
  lVar3 = param_5;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c43afc();
    func_0x000107c615e8(lVar4);
    if (lVar3 != 0) {
      func_0x0001000285a8(0x112d61fb8,&UNK_10d927f70);
      uVar6 = param_3;
      func_0x000107c43b00();
      func_0x000107c61180();
      uVar14 = uVar6;
      func_0x0001000bda74();
      func_0x000107c61170(uVar6);
      func_0x0001000285a8(0x112d61fc0,&UNK_10d927f78);
      uVar6 = param_2;
      func_0x000107c43a80();
      func_0x000107c61180();
      uVar5 = uVar6;
      func_0x0001000bda74();
      func_0x000107c61170(uVar6);
      func_0x0001000285a8(0x112d61fc8,&UNK_10d927f80);
      uVar6 = *(undefined8 *)(param_4 + _DAT_113093a98);
      func_0x000107c61174(uVar6);
      uVar7 = uVar6;
      func_0x0001000bda74();
      func_0x000107c61170(uVar6);
      func_0x0001000285a8(0x112d61fd0,&UNK_10d9295a0);
      lVar4 = param_5;
      func_0x000107c4cdb8();
      func_0x000107c61180();
      lVar8 = lVar4;
      func_0x0001000bda74();
      func_0x000107c61170(lVar4);
      lVar9 = 0;
      FUN_10117e6f8();
      lVar10 = lVar9;
      func_0x000107c610f8();
      *(undefined8 *)(lVar10 + _DAT_112d61f10) = 0;
      puVar1 = (undefined8 *)(lVar10 + _DAT_112d61f18);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar2 = _DAT_112d61f20;
      uStack_61 = 1;
      lVar4 = 0x112d61fd8;
      func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
      func_0x000107c613fc();
      puVar11 = &uStack_61;
      func_0x00010042e6a0();
      *(undefined1 **)(lVar10 + lVar2) = puVar11;
      lVar2 = _DAT_112d61f28;
      uStack_61 = 0;
      func_0x000107c613fc(lVar4,*(undefined4 *)(lVar4 + 0x30),*(undefined2 *)(lVar4 + 0x34));
      puVar11 = &uStack_61;
      func_0x00010042e6a0();
      *(undefined1 **)(lVar10 + lVar2) = puVar11;
      *(long *)(lVar10 + _DAT_112d61ef8) = lVar3;
      *(undefined8 *)(lVar10 + _DAT_112d61ee8) = uVar14;
      *(undefined8 *)(lVar10 + _DAT_112d61ef0) = uVar5;
      *(long *)(lVar10 + _DAT_112d61f08) = lVar8;
      func_0x0001000285a8(0x112d61fe0,&UNK_10d992300);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar14);
      func_0x000107c6157c(uVar5);
      func_0x000107c6157c(lVar8);
      func_0x000107c6157c(uVar7);
      uVar6 = 0x101180028;
      func_0x0001000bdd8c(0x101180028,uVar7);
      *(undefined8 *)(lVar10 + _DAT_112d61f00) = uVar6;
      plVar12 = &lStack_78;
      lStack_78 = lVar10;
      lStack_70 = lVar9;
      func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
      puVar13 = &UNK_11038a9b8;
      func_0x000107c613fc(&UNK_11038a9b8,0x18,7);
      func_0x000107c61614(puVar13 + 0x10,plVar12);
      func_0x0001000285a8(0x112d61fe8,&UNK_10d927fa0);
      func_0x000107c613fc();
      func_0x000107c61174();
      uVar6 = 0x101180030;
      func_0x0001000bdd8c(0x101180030,puVar13);
      func_0x000107c61574(uVar14);
      func_0x000107c61574(uVar5);
      func_0x000107c61574(uVar7);
      func_0x000107c61574(lVar8);
      uVar14 = *(undefined8 *)((long)plVar12 + _DAT_112d61f10);
      *(undefined8 *)((long)plVar12 + _DAT_112d61f10) = uVar6;
      func_0x000107c61170(plVar12);
      func_0x000107c61574(uVar14);
      uVar6 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c61174(plVar12);
      func_0x000107c4fba8(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(plVar12);
      func_0x000107c61170(plVar12);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      goto LAB_10117ffdc;
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
LAB_10117ffdc:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  return unaff_x20;
}



/* Entry: 10118000c; end: 101180037;  */

void FUN_10118000c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101180038; end: 101180057;  */

void FUN_101180038(void)

{
  func_0x000107c61168(&PTR_PTR_112d62030);
  return;
}



/* Entry: 101180058; end: 101180123;  */

undefined1  [16] FUN_101180058(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef29500);
  uVar3 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef29520);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101180124);
  (*pcVar1)();
}



/* Entry: 101180124; end: 10118012f; -[SCFriendshipFlashbackShortcutPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62088;
  func_0x000107c61428(param_1 + _DAT_112d62088,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101180130; end: 10118013b; -[SCFriendshipFlashbackShortcutPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62088;
  func_0x000107c61428(param_1 + _DAT_112d62088,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118013c; end: 101180147; -[SCFriendshipFlashbackShortcutPluginEntryPoint friendsFeedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118013c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62090;
  func_0x000107c61428(param_1 + _DAT_112d62090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101180148; end: 101180153; -[SCFriendshipFlashbackShortcutPluginEntryPoint setFriendsFeedServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62090;
  func_0x000107c61428(param_1 + _DAT_112d62090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101180154; end: 10118015f; -[SCFriendshipFlashbackShortcutPluginEntryPoint friendshipFlashbacksServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180154(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d62098;
  func_0x000107c61428(param_1 + _DAT_112d62098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101180160; end: 10118016b; -[SCFriendshipFlashbackShortcutPluginEntryPoint setFriendshipFlashbacksServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d62098;
  func_0x000107c61428(param_1 + _DAT_112d62098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10118016c; end: 101180177; -[SCFriendshipFlashbackShortcutPluginEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10118016c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d620a0;
  func_0x000107c61428(param_1 + _DAT_112d620a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101180178; end: 101180183; -[SCFriendshipFlashbackShortcutPluginEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d620a0;
  func_0x000107c61428(param_1 + _DAT_112d620a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101180184; end: 10118018f; -[SCFriendshipFlashbackShortcutPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180184(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d620a8;
  func_0x000107c61428(param_1 + _DAT_112d620a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101180190; end: 1011801d3;  */

void FUN_101180190(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011801d4; end: 1011801df; -[SCFriendshipFlashbackShortcutPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011801d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d620a8;
  func_0x000107c61428(param_1 + _DAT_112d620a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011801e0; end: 101180233;  */

void FUN_1011801e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101180234; end: 101180773;  */

/* WARNING: Possible PIC construction at 0x000101180310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118036c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011803a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011803e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101180424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101180634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101180670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101180680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101180690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011806a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011806e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011806f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118073c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010118074c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011806d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101180750) */
/* WARNING: Removing unreachable block (ram,0x000101180740) */
/* WARNING: Removing unreachable block (ram,0x0001011806f4) */
/* WARNING: Removing unreachable block (ram,0x0001011806e4) */
/* WARNING: Removing unreachable block (ram,0x0001011806a4) */
/* WARNING: Removing unreachable block (ram,0x000101180700) */
/* WARNING: Removing unreachable block (ram,0x000101180694) */
/* WARNING: Removing unreachable block (ram,0x000101180684) */
/* WARNING: Removing unreachable block (ram,0x000101180674) */
/* WARNING: Removing unreachable block (ram,0x000101180638) */
/* WARNING: Removing unreachable block (ram,0x000101180428) */
/* WARNING: Removing unreachable block (ram,0x0001011803ec) */
/* WARNING: Removing unreachable block (ram,0x0001011803ac) */
/* WARNING: Removing unreachable block (ram,0x000101180370) */
/* WARNING: Removing unreachable block (ram,0x000101180314) */
/* WARNING: Removing unreachable block (ram,0x000101180318) */
/* WARNING: Removing unreachable block (ram,0x0001011806dc) */
/* WARNING: Removing unreachable block (ram,0x000101180330) */
/* WARNING: Removing unreachable block (ram,0x0001011806d4) */

void FUN_101180234(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c43acc();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c43b04();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c5c78c();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c4cdfc();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_101180038(0);
            func_0x000107c613fc();
            func_0x000107c4cdb8(unaff_x20);
            func_0x000107c61180();
            func_0x000107c5c734();
            func_0x000107c61180();
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
  return;
}



/* Entry: 101180774; end: 10118079b; -[SCFriendshipFlashbackShortcutPluginEntryPoint begin] */

void FUN_101180774(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101180234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10118079c; end: 1011807df; -[SCFriendshipFlashbackShortcutPluginEntryPoint end] */

void FUN_10118079c(undefined8 param_1)

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



/* Entry: 1011807e0; end: 101180ab7;  */

void FUN_1011807e0(long param_1,long param_2,long param_3)

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
  }
  else {
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d8100)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef27f00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d6ab0)) ||
           (func_0x000107c605b8(0xd00000000000001c,0x800000010ef29550,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54ca8();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10edd20)) ||
             (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c59c2c();
          }
          else {
            uVar2 = 0xd00000000000001b;
            if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) &&
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCShortcutsDataFriendshipFlashbackPlugin/SCFriendshipFlashbackShortcutPluginEntryPoint.swift"
                                  ,0x5c,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101180ab8);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5666c();
          }
        }
        goto LAB_10118086c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54c8c();
  }
LAB_10118086c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101180ab8; end: 101180b63; -[SCFriendshipFlashbackShortcutPluginEntryPoint setValue:forIvarName:] */

void FUN_101180ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011807e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101180b64; end: 101180c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180b64(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d62088,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62090,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d62098,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d620a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d620a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d620b0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101180c14; end: 101180c33; -[SCFriendshipFlashbackShortcutPluginEntryPoint init] */

void FUN_101180c14(void)

{
  FUN_101180b64();
  return;
}



/* Entry: 101180c34; end: 101180c67;  */

void FUN_101180c34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101180c68; end: 101180cdf; -[SCFriendshipFlashbackShortcutPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101180c68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d62088);
  func_0x000107c61610(param_1 + _DAT_112d62090);
  func_0x000107c61610(param_1 + _DAT_112d62098);
  func_0x000107c61610(param_1 + _DAT_112d620a0);
  func_0x000107c61610(param_1 + _DAT_112d620a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d620b0));
  return;
}



/* Entry: 101180ce0; end: 101180cef;  */

void FUN_101180ce0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0xd000000000000042;
    func_0x000107c5fadc(0xd000000000000042,0x800000010ef294b0);
    lVar2 = lStack_38;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101180cf0; end: 101180d0f;  */

void FUN_101180cf0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3200);
  return;
}



/* Entry: 101180d10; end: 101180d4b; -[_TtC37MemoriesShakeToReportMetaInfoProvider29MemoriesShakeMetaInfoProvider init] */

void FUN_101180d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101180d4c; end: 101180d7f;  */

void FUN_101180d4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101180d80; end: 101180dab; -[_TtC37MemoriesShakeToReportMetaInfoProvider29MemoriesShakeMetaInfoProvider getMetaInfo] */

void FUN_101180d80(void)

{
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef29630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101180dac; end: 101180db3; -[_TtC37MemoriesShakeToReportMetaInfoProvider29MemoriesShakeMetaInfoProvider willDumpLogGivenProject:] */

undefined8 FUN_101180dac(void)

{
  return 1;
}



/* Entry: 101180db4; end: 101180e17;  */

void FUN_101180db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  lVar1 = 0;
  func_0x000107c5fb10();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101180e18,0,0);
  return;
}



/* Entry: 101180e18; end: 101180f77;  */

void FUN_101180e18(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    *(undefined8 *)(unaff_x22 + 0x28) = 0xd00000000000001a;
    lVar1 = *(long *)(unaff_x22 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x30) = 0x800000010ef295f0;
    lVar4 = lVar7;
    func_0x000107c5fb04(uVar3);
    FUN_100e8b654();
    uVar6 = 0;
    uVar5 = uVar3;
    func_0x000107c60214(uVar3,0,PTR___sSSN_11034da80,lVar4);
    (**(code **)(lVar1 + 8))(uVar3,uVar8);
    if (uVar6 >> 0x3c < 0xf) {
      pcVar2 = *(code **)(unaff_x22 + 0x40);
      func_0x00010006c00c(uVar5,uVar6);
      (*pcVar2)(uVar5,uVar6,0xd000000000000012,0x800000010ef29610);
      func_0x0001000b44c0(uVar5,uVar6);
      func_0x0001000b44c0(uVar5,uVar6);
      func_0x000107c61170(lVar7);
      goto LAB_101180f50;
    }
    func_0x000107c61170(lVar7);
  }
  (**(code **)(unaff_x22 + 0x40))(0,0xf000000000000000,0,0);
LAB_101180f50:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101180f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101180f78; end: 101181103; -[_TtC37MemoriesShakeToReportMetaInfoProvider29MemoriesShakeMetaInfoProvider provideLogContentAsync:] */

void FUN_101180f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11038aab8;
  func_0x000107c613fc(&UNK_11038aab8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_11038aae0;
  func_0x000107c613fc(&UNK_11038aae0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_11038ab08;
  func_0x000107c613fc(&UNK_11038ab08,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_101181248;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  uVar4 = 0x80;
  func_0x0001009548b0(0x80,0,0x48,4,0,0,&UNK_10d928078,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101181104; end: 101181137; -[_TtC37MemoriesShakeToReportMetaInfoProvider29MemoriesShakeMetaInfoProvider provideShakeLog] */

void FUN_101181104(void)

{
  FUN_101181138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101181138; end: 101181247;  */

void FUN_101181138(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  lVar7 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_50 = 0xd00000000000001a;
  uStack_48 = 0x800000010ef295f0;
  func_0x000107c5fb04(lVar6);
  FUN_100e8b654();
  uVar5 = 0;
  lVar3 = lVar6;
  func_0x000107c60214(lVar6,0,PTR___sSSN_11034da80,lVar2);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  if (uVar5 >> 0x3c < 0xf) {
    uVar4 = 0;
    func_0x000104071150(0);
    func_0x000107c610f8();
    func_0x000104070e3c(0xd000000000000012,0x800000010ef29610,lVar3,uVar5,uVar4);
  }
  return;
}



/* Entry: 101181248; end: 10118124f;  */

/* WARNING: Possible PIC construction at 0x0001011810ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011810f0) */

void FUN_101181248(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101181250; end: 1011812bb;  */

void FUN_101181250(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1011812bc;
  plVar4[8] = lVar1;
  plVar4[9] = lVar5;
  plVar4[7] = lVar2;
  lVar2 = 0;
  func_0x000107c5fb10();
  plVar4[10] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101180e18,0,0);
  return;
}



/* Entry: 1011812bc; end: 1011812f7;  */

void FUN_1011812bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001011812f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1011812f8; end: 10118142b;  */

long FUN_1011812f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d62108,&UNK_10d928080);
  func_0x000107c613fc();
  pcVar1 = FUN_10118142c;
  func_0x0001000bdd8c(FUN_10118142c,0);
  *(code **)(unaff_x20 + 0x10) = pcVar1;
  puVar2 = &UNK_11038ab30;
  func_0x000107c613fc(&UNK_11038ab30,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(code **)(puVar2 + 0x20) = pcVar1;
  func_0x000107c6157c(pcVar1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  uVar3 = 0x80;
  func_0x0001009548b0(0x80,0,0x48,4,0,0,&UNK_10d928090,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return unaff_x20;
}



/* Entry: 10118142c; end: 10118145b;  */

void FUN_10118142c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000101181118();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}


