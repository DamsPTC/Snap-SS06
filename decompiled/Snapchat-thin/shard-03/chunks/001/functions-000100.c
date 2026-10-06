/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10250b014; end: 10250b397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10250b014(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long *plVar14;
  code *pcVar15;
  long unaff_x20;
  code *pcVar16;
  undefined1 auVar17 [16];
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    lVar3 = lStack_68;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112ea3438);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c615e8(lStack_68);
        func_0x000107c61170(lVar3);
        goto LAB_10250b370;
      }
      uVar5 = *(ulong *)(unaff_x20 + _DAT_112ea3440);
      func_0x000107c4c3ac();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 != 0) {
        uVar5 = uVar6;
        func_0x000107c448d0();
        if ((uVar5 & 1) == 0) {
          func_0x000107c4fd74(0,uVar6);
        }
        func_0x0001000285a8(0x112ea3480,&UNK_10dac6130);
        uVar5 = uVar6;
        func_0x000107c4b93c(uVar6);
        func_0x000107c61180();
        uVar7 = uVar5;
        func_0x0001000b637c();
        func_0x000107c61170(uVar5);
        lVar8 = lStack_68;
        func_0x000107c615f0(lStack_68);
        func_0x000100471e0c();
        func_0x000107c61574(uVar7);
        func_0x000107c615e8(lStack_68);
        uVar9 = 1;
        func_0x00010061b458();
        func_0x000107c61574(lVar8);
        func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
        lVar8 = lVar4;
        func_0x000107c4e120(lVar4);
        func_0x000107c61180();
        lVar10 = lVar8;
        func_0x0001000b637c();
        func_0x000107c61170(lVar8);
        uVar13 = 0x112e17d68;
        func_0x0001000285a8(0x112e17d68,&UNK_10daf6410);
        pcVar11 = FUN_10250b998;
        func_0x0001000bfde0(FUN_10250b998,0,uVar13);
        func_0x000107c61574(lVar10);
        pcVar15 = FUN_10250ba04;
        func_0x0001000bfde0(FUN_10250ba04,0,uVar13);
        func_0x000107c61574(pcVar11);
        func_0x0001021f9564();
        func_0x0001000c2068();
        func_0x000107c61574(pcVar15);
        uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea3430);
        uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ea3430))[1];
        func_0x000107c61434(uVar2);
        func_0x000107c6157c(pcVar11);
        pcVar15 = FUN_10250c454;
        func_0x00010068b194(FUN_10250c454,pcVar11,uVar13);
        func_0x000107c61574(pcVar11);
        puVar12 = &UNK_11051aea0;
        func_0x000107c613fc(&UNK_11051aea0,0x28,7);
        *(ulong *)(puVar12 + 0x10) = uVar6;
        *(undefined8 *)(puVar12 + 0x18) = uVar1;
        *(undefined8 *)(puVar12 + 0x20) = uVar2;
        uVar13 = 0;
        func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c615f0(uVar6);
        plVar14 = (long *)0x10250c45c;
        func_0x0001000bfde0(0x10250c45c,puVar12,uVar13);
        func_0x000107c61574(pcVar15);
        func_0x000107c61574(puVar12);
        pcVar16 = *(code **)(*plVar14 + 0x60);
        func_0x000107c6157c(param_1);
        pcVar15 = FUN_10250c468;
        uVar13 = param_1;
        (*pcVar16)(FUN_10250c468,param_1);
        func_0x000107c615e8(lStack_68);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(uVar6);
        func_0x000107c61574(uVar9);
        func_0x000107c61574(pcVar11);
        func_0x000107c61574(plVar14);
        func_0x000107c61574(param_1);
        goto LAB_10250b378;
      }
      func_0x000107c615e8(lStack_68);
      func_0x000107c61170(lVar3);
      lStack_68 = lVar4;
    }
    func_0x000107c615e8(lStack_68);
  }
LAB_10250b370:
  pcVar15 = (code *)0x0;
  uVar13 = 0;
LAB_10250b378:
  auVar17._8_8_ = uVar13;
  auVar17._0_8_ = pcVar15;
  return auVar17;
}



/* Entry: 10250b398; end: 10250b3bf; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin resumeUpdates] */

void FUN_10250b398(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10250af4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10250b3c0; end: 10250b457; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin pauseUpdates] */

/* WARNING: Possible PIC construction at 0x00010250b420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250b424) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250b3c0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  plVar1 = (long *)(param_1 + _DAT_112ea3418);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x000107c61170(param_1);
  }
  else {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10250b458; end: 10250b45f; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin shortcutType] */

undefined8 FUN_10250b458(void)

{
  return 0x11;
}



/* Entry: 10250b460; end: 10250b4d7; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin friendsFeedItemsObservable] */

void FUN_10250b460(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c4a8a4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10250b4d8; end: 10250b4db; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin selectShortcut] */

void FUN_10250b4d8(void)

{
  return;
}



/* Entry: 10250b4dc; end: 10250b4df; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin deselectShortcut] */

void FUN_10250b4dc(void)

{
  return;
}



/* Entry: 10250b4e0; end: 10250b4e3; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin incrementImpressionCount] */

void FUN_10250b4e0(void)

{
  return;
}



/* Entry: 10250b4e4; end: 10250b703;  */

/* WARNING: Removing unreachable block (ram,0x00010250b700) */

undefined * FUN_10250b4e4(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e20eb8;
    func_0x000107c61174();
    puVar5 = PTR_PTR_1126b1508;
    func_0x000107c61168(PTR_PTR_1126b1508);
    uVar2 = 0;
    uVar7 = 0xe000000000000000;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c42530(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x00010250db9c();
    puVar6 = PTR_PTR_1126b1490;
    func_0x000107c61168(PTR_PTR_1126b1490);
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5c388(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126b1498;
    func_0x000107c610f8(PTR_PTR_1126b1498);
    func_0x000107c5fadc(uVar2,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c48694(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar1);
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 10250b704; end: 10250b80f;  */

void FUN_10250b704(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (0 < *param_2) {
    puVar1 = (undefined *)0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    puVar2 = PTR_PTR_1126b14a0;
    func_0x000107c61168();
    uVar3 = 0x454d5f5241454e;
    func_0x000107c5fadc(0x454d5f5241454e,0xe700000000000000);
    func_0x000107c44554();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x00010250c414(0,0x112d61f60,&PTR_PTR_1126b14a0);
    *(undefined8 *)(puVar1 + 0x38) = uVar3;
    *(undefined **)(puVar1 + 0x20) = puVar2;
  }
  uVar3 = 0;
  func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c600f0(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10250b810; end: 10250b997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250b810(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + _DAT_112ea3448);
    if (lVar5 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar6 = *(ulong *)(param_2 + _DAT_112ea3440);
      func_0x000107c6157c(lVar5);
      func_0x000107c4c3ac();
      func_0x000107c61180();
      uVar1 = uVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      if (uVar1 == 0) {
        func_0x000107c61170(param_2);
      }
      else {
        uVar6 = uVar1;
        func_0x000107c3db8c();
        func_0x000107c61180();
        uVar2 = 0;
        func_0x00010250c414(0,0x112d5ecd8,&PTR_PTR_1126bf130);
        uVar3 = 0x112d60390;
        func_0x00010250c3d4(0x112d60390,0x112d5ecd8,&PTR_PTR_1126bf130,
                            PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
        uVar4 = uVar6;
        func_0x000107c5fe10(uVar6,uVar2,uVar3);
        func_0x000107c61170(uVar6);
        if ((uVar4 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar4 + 0x10);
        }
        else {
          uVar6 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar6 = uVar4;
          }
          func_0x000107c6029c();
        }
        func_0x000107c6142c(uVar4);
        uStack_70 = uVar6;
        func_0x0001007d6d78(&uStack_70);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(uVar1);
      }
      func_0x000107c61574(lVar5);
    }
  }
  return;
}



/* Entry: 10250b998; end: 10250ba03;  */

void FUN_10250b998(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_28;
  
  uVar3 = *param_2;
  puStack_28 = (undefined *)0x0;
  uVar2 = 0;
  func_0x00010250c414(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc50(uVar3,&puStack_28,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 10250ba04; end: 10250bb6b;  */

void FUN_10250ba04(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = *param_2;
  uVar10 = uVar7 & 0xffffffffffffff8;
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar10 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar10;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10250bb2c);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar9;
          func_0x00010103193c(uVar9,uVar7);
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10250bb28);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000100bf119c();
        if ((uVar5 & 1) != 0) break;
        func_0x000107c61170(uVar4);
        uVar9 = uVar9 + 1;
        if (uVar1 == uVar8) goto LAB_10250bb48;
      }
      puVar6 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x0001010673e4(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar9 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar9) {
        func_0x0001010673e4(1 < *(ulong *)(puVar2 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar9 + 1;
      *(ulong *)(puVar2 + uVar9 * 8 + 0x20) = uVar4;
      uVar9 = uVar1;
    } while (uVar1 != uVar8);
  }
LAB_10250bb48:
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 10250bb6c; end: 10250c0bb;  */

void FUN_10250bb6c(undefined8 *param_1,double param_2,undefined8 param_3,ulong *param_4,
                  undefined *param_5,ulong param_6,ulong param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  double dVar22;
  undefined *puStack_a8;
  undefined *puStack_88;
  
  uVar18 = *param_4;
  uVar19 = param_6;
  uVar17 = param_7;
  func_0x000107c5fadc(param_6);
  puVar3 = param_5;
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *param_1 = puVar3;
  }
  else {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 >> 0x3e == 0) {
      uVar19 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar19 = uVar18 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar18) {
        uVar19 = uVar18;
      }
      func_0x000107c60480();
    }
    if (uVar19 != 0) {
      if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10250c0bc);
        (*pcVar2)();
      }
      uVar21 = 0;
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar18 & 0xc000000000000001) == 0) {
          uVar4 = *(ulong *)(uVar18 + uVar21 * 8 + 0x20);
          func_0x000107c61174();
          uVar15 = uVar17;
        }
        else {
          uVar4 = uVar21;
          uVar15 = uVar18;
          func_0x00010103193c();
        }
        uVar5 = uVar4;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar17 = uVar15;
        if (uVar5 == 0) {
LAB_10250bd3c:
          func_0x000107c61170(uVar4);
        }
        else {
          uVar6 = uVar5;
          func_0x000107c5faec();
          uVar17 = uVar15;
          if ((uVar6 != param_6) || (uVar15 != param_7)) {
            func_0x000107c605b8();
            func_0x000107c6142c(uVar15);
            if ((uVar6 & 1) == 0) {
              puVar16 = param_5;
              func_0x000107c4e680();
              func_0x000107c61180();
              func_0x000107c61170(uVar5);
              if (puVar16 != (undefined *)0x0) {
                func_0x000107c4077c(puVar16);
                dVar22 = param_2;
                uVar14 = param_3;
                func_0x000107c4077c(puVar3);
                func_0x000108d312a8(param_2,param_3,dVar22,uVar14);
                if (param_2 <= 4828.03) {
                  func_0x000107c61174();
                  func_0x000107c61174();
                  puVar7 = puStack_a8;
                  func_0x000107c61558();
                  if (((ulong)puVar7 & 1) == 0) {
                    uVar17 = *(long *)(puStack_a8 + 0x10) + 1;
                    puStack_a8 = (undefined *)0x0;
                    FUN_10250c0e8(0,uVar17,1);
                  }
                  uVar5 = *(ulong *)(puStack_a8 + 0x10);
                  uVar15 = uVar5 + 1;
                  if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar5) {
                    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a8 + 0x18));
                    uVar17 = uVar15;
                    FUN_10250c0e8(puVar7,uVar15,1,puStack_a8);
                    puStack_a8 = puVar7;
                  }
                  *(ulong *)(puStack_a8 + 0x10) = uVar15;
                  *(ulong *)(puStack_a8 + uVar5 * 0x10 + 0x20) = uVar4;
                  *(undefined **)(puStack_a8 + uVar5 * 0x10 + 0x28) = puVar16;
                  func_0x000107c61170(puVar16);
                  func_0x000107c61170(uVar4);
                  puStack_88 = puStack_a8;
                  goto LAB_10250bc48;
                }
                func_0x000107c61170(puVar16);
              }
            }
            else {
              func_0x000107c61170(uVar4);
              uVar4 = uVar5;
            }
            goto LAB_10250bd3c;
          }
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar15);
        }
LAB_10250bc48:
        uVar21 = uVar21 + 1;
      } while (uVar19 != uVar21);
    }
    func_0x000107c61174(puVar3);
    puVar16 = puVar3;
    FUN_10250d3e4(&puStack_88,puVar3);
    func_0x000107c61170(puVar3);
    puVar7 = puStack_88;
    uVar17 = *(ulong *)(puStack_88 + 0x10);
    if (uVar17 < 2) {
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    else {
      if (6 < uVar17) {
        uVar17 = 7;
      }
      func_0x000107c61434(puStack_88);
      uVar19 = 0;
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        uVar18 = uVar19;
        if (uVar19 <= uVar17) {
          uVar18 = uVar17;
        }
        puVar20 = (undefined8 *)(puVar7 + uVar19 * 0x10 + 0x28);
        uVar19 = uVar19 + 1;
        puVar12 = puVar16;
        while( true ) {
          if (uVar19 - uVar18 == 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10250c0b8);
            (*pcVar2)();
          }
          lVar8 = puVar20[-1];
          uVar14 = *puVar20;
          func_0x000107c61174();
          func_0x000107c61174(uVar14);
          lVar9 = lVar8;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar9 != 0) break;
          func_0x000107c61170(uVar14);
          func_0x000107c61170(lVar8);
          uVar19 = uVar19 + 1;
          puVar20 = puVar20 + 2;
          if (uVar19 - uVar17 == 1) goto LAB_10250c03c;
        }
        lVar10 = lVar9;
        func_0x000107c5faec();
        func_0x000107c61170(lVar9);
        puVar11 = PTR_PTR_1126b14a0;
        func_0x000107c61168();
        func_0x000107c61434(puVar12);
        func_0x000107c5fadc(lVar10,puVar12);
        func_0x000107c5b498();
        func_0x000107c61180();
        func_0x000107c61170(uVar14);
        func_0x000107c61170(lVar8);
        puVar16 = (undefined *)0x2;
        func_0x000107c61430(puVar12);
        func_0x000107c61170(lVar10);
        puVar12 = puVar13;
        func_0x000107c61550();
        if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) ||
           (puVar12 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar13 >> 0x3e == 0) {
            puVar16 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar16 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar13) {
              puVar16 = puVar13;
            }
            func_0x000107c60480();
          }
          puVar16 = puVar16 + 1;
          puVar12 = (undefined *)0x0;
          func_0x00010117ee1c(0,puVar16,1,puVar13);
        }
        uVar21 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar18 = *(ulong *)(uVar21 + 0x10);
        puVar1 = (undefined *)(uVar18 + 1);
        puVar13 = puVar12;
        if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar18) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar21 + 0x18));
          puVar16 = puVar1;
          func_0x00010117ee1c(puVar13,puVar1,1,puVar12);
          uVar21 = (ulong)puVar13 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar21 + 0x10) = puVar1;
        *(undefined **)(uVar21 + uVar18 * 8 + 0x20) = puVar11;
      } while (uVar19 != uVar17);
LAB_10250c03c:
      func_0x000107c6142c(puVar7);
      uVar14 = 0;
      func_0x00010250c414(0,0x112d61f60,&PTR_PTR_1126b14a0);
      puVar16 = puVar13;
      func_0x000107c5fc48(puVar13,uVar14);
      func_0x000107c6142c(puVar7);
      puVar7 = puVar13;
    }
    func_0x000107c6142c(puVar7);
    func_0x000107c61170(puVar3);
    *param_1 = puVar16;
  }
  return;
}



/* Entry: 10250c0bc; end: 10250c0e7; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin init] */

void FUN_10250c0bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NearMeShortcutsDataPlugin.NearMeShortcutsDataPlugin",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10250c0e8);
  (*pcVar1)();
}



/* Entry: 10250c0e8; end: 10250c217;  */

undefined * FUN_10250c0e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10250c218);
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
    puVar3 = (undefined *)0x112ea3488;
    func_0x0001000285a8(0x112ea3488,&UNK_10dab58b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ea3490;
    func_0x0001000285a8(0x112ea3490,&UNK_10dab58b8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10250c218; end: 10250c22b;  */

/* WARNING: Removing unreachable block (ram,0x00010250c108) */
/* WARNING: Removing unreachable block (ram,0x00010250c118) */
/* WARNING: Removing unreachable block (ram,0x00010250c214) */
/* WARNING: Removing unreachable block (ram,0x00010250c124) */
/* WARNING: Removing unreachable block (ram,0x00010250c12c) */
/* WARNING: Removing unreachable block (ram,0x00010250c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010250c1ac) */
/* WARNING: Removing unreachable block (ram,0x00010250c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010250c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010250c1c4) */

undefined * FUN_10250c218(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112ea3488;
    func_0x0001000285a8(0x112ea3488,&UNK_10dab58b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  uVar5 = 0x112ea3490;
  func_0x0001000285a8(0x112ea3490,&UNK_10dab58b8);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 10250c22c; end: 10250c387;  */

/* WARNING: Removing unreachable block (ram,0x00010250c384) */

undefined ** FUN_10250c22c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x000107c61168(PTR_PTR_1126b1490);
  puVar2 = puVar1;
  FUN_10250da00();
  uVar5 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5c388(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e20eb8;
  func_0x000107c61174();
  ppuVar4 = ppuVar3;
  func_0x00010250dad0();
  puVar2 = PTR_PTR_1126b1498;
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  func_0x000107c5fadc(ppuVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c48694();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar4);
  func_0x0001000285a8(0x112e642b0,&UNK_10dab58c0);
  ppuVar4 = &puStack_48;
  puStack_48 = puVar2;
  func_0x000100854cb0(ppuVar4);
  ppuVar3 = ppuVar4;
  func_0x000104877210();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(ppuVar4);
  return ppuVar3;
}



/* Entry: 10250c388; end: 10250c3ab;  */

/* WARNING: Removing unreachable block (ram,0x00010250b700) */

undefined * FUN_10250c388(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e20eb8;
    func_0x000107c61174();
    puVar6 = PTR_PTR_1126b1508;
    func_0x000107c61168(PTR_PTR_1126b1508);
    uVar3 = 0;
    uVar8 = 0xe000000000000000;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c42530(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x00010250db9c();
    puVar7 = PTR_PTR_1126b1490;
    func_0x000107c61168(PTR_PTR_1126b1490);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5c388(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126b1498;
    func_0x000107c610f8(PTR_PTR_1126b1498);
    func_0x000107c5fadc(uVar3,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c48694(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(uVar3);
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 10250c3ac; end: 10250c3cb;  */

void FUN_10250c3ac(void)

{
  func_0x000107c61168(&PTR_PTR_11284b150);
  return;
}



/* Entry: 10250c3cc; end: 10250c3d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250c3cc(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + _DAT_112ea3448);
    if (lVar6 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar7 = *(ulong *)(lVar1 + _DAT_112ea3440);
      func_0x000107c6157c(lVar6);
      func_0x000107c4c3ac();
      func_0x000107c61180();
      uVar2 = uVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (uVar2 == 0) {
        func_0x000107c61170(lVar1);
      }
      else {
        uVar7 = uVar2;
        func_0x000107c3db8c();
        func_0x000107c61180();
        uVar3 = 0;
        func_0x00010250c414(0,0x112d5ecd8,&PTR_PTR_1126bf130);
        uVar4 = 0x112d60390;
        func_0x00010250c3d4(0x112d60390,0x112d5ecd8,&PTR_PTR_1126bf130,
                            PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
        uVar5 = uVar7;
        func_0x000107c5fe10(uVar7,uVar3,uVar4);
        func_0x000107c61170(uVar7);
        if ((uVar5 & 0xc000000000000001) == 0) {
          uVar7 = *(ulong *)(uVar5 + 0x10);
        }
        else {
          uVar7 = uVar5 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar5) {
            uVar7 = uVar5;
          }
          func_0x000107c6029c();
        }
        func_0x000107c6142c(uVar5);
        uStack_70 = uVar7;
        func_0x0001007d6d78(&uStack_70);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(uVar2);
      }
      func_0x000107c61574(lVar6);
    }
  }
  return;
}



/* Entry: 10250c3d4; end: 10250c453;  */

void FUN_10250c3d4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x00010250c414(0xff);
    func_0x000107c61520(param_4,uVar1);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10250c454; end: 10250c467;  */

void FUN_10250c454(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10250c468; end: 10250c48f;  */

void FUN_10250c468(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  func_0x0001007d6d78(&uStack_18);
  return;
}



/* Entry: 10250c490; end: 10250c60f;  */

void FUN_10250c490(double param_1,double param_2,long param_3,long param_4,long param_5,
                  long *param_6,undefined8 param_7)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (param_5 != param_4) {
    lVar4 = *param_6;
    pdVar5 = (double *)(lVar4 + param_5 * 0x10 + -0x10);
    param_3 = param_3 - param_5;
    do {
      pdVar6 = (double *)(lVar4 + param_5 * 0x10);
      dVar11 = *pdVar6;
      dVar8 = pdVar6[1];
      pdVar6 = pdVar5;
      lVar7 = param_3;
      do {
        dVar13 = *pdVar6;
        dVar3 = pdVar6[1];
        func_0x000107c61174(dVar11);
        func_0x000107c61174(dVar8);
        func_0x000107c61174(dVar13);
        func_0x000107c61174(dVar3);
        func_0x000107c4077c(dVar8);
        dVar9 = param_1;
        dVar10 = param_2;
        func_0x000107c4077c(param_7);
        func_0x000108d312a8(param_1,param_2,dVar9,dVar10);
        dVar9 = param_1;
        func_0x000107c4077c(dVar3);
        dVar10 = dVar9;
        dVar12 = param_2;
        func_0x000107c4077c(param_7);
        func_0x000108d312a8(dVar9,param_2,dVar10,dVar12);
        dVar10 = dVar9;
        func_0x000107c61170(dVar8);
        func_0x000107c61170(dVar11);
        func_0x000107c61170(dVar3);
        func_0x000107c61170(dVar13);
        dVar11 = dVar10;
        if (dVar9 <= param_1) break;
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10250c610);
          (*pcVar1)();
        }
        dVar8 = pdVar6[3];
        dVar13 = pdVar6[1];
        param_2 = *pdVar6;
        dVar11 = pdVar6[2];
        pdVar6[1] = pdVar6[3];
        *pdVar6 = dVar11;
        pdVar6[3] = dVar13;
        pdVar6[2] = param_2;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        pdVar6 = pdVar6 + -2;
        param_1 = dVar11;
      } while (bVar2);
      param_5 = param_5 + 1;
      pdVar5 = pdVar5 + 2;
      param_3 = param_3 + -1;
      param_1 = dVar11;
    } while (param_5 != param_4);
  }
  return;
}



/* Entry: 10250c610; end: 10250ca17;  */

undefined8
FUN_10250c610(double param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,undefined8 param_7)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  double *pdVar8;
  ulong uVar9;
  long lVar10;
  double *pdVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  
  lVar12 = (long)param_4 - (long)param_3;
  lVar7 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar7 = lVar12;
  }
  lVar7 = lVar7 >> 4;
  lVar13 = (long)param_5 - (long)param_4;
  lVar10 = lVar13 + 0xf;
  if (-1 < lVar13) {
    lVar10 = lVar13;
  }
  lVar10 = lVar10 >> 4;
  if (lVar7 < lVar10) {
    if (((param_6 < param_3) || (param_3 + lVar7 * 2 <= param_6)) || (param_6 != param_3)) {
      func_0x000107c610b8(param_6,param_3,lVar7 << 4);
    }
    pdVar11 = param_6 + lVar7 * 2;
    pdVar16 = param_3;
    if (0xf < lVar12) {
      do {
        if (param_5 <= param_4) break;
        dVar2 = *param_4;
        dVar5 = param_4[1];
        dVar3 = *param_6;
        dVar4 = param_6[1];
        func_0x000107c61174(dVar2);
        func_0x000107c61174(dVar5);
        func_0x000107c61174(dVar3);
        func_0x000107c61174(dVar4);
        func_0x000107c4077c(dVar5);
        dVar6 = param_1;
        uVar19 = param_2;
        func_0x000107c4077c(param_7);
        func_0x000108d312a8(param_1,param_2,dVar6,uVar19);
        dVar6 = param_1;
        func_0x000107c4077c(dVar4);
        dVar17 = dVar6;
        uVar19 = param_2;
        func_0x000107c4077c(param_7);
        func_0x000108d312a8(dVar6,param_2,dVar17,uVar19);
        dVar17 = dVar6;
        func_0x000107c61170(dVar5);
        func_0x000107c61170(dVar2);
        func_0x000107c61170(dVar4);
        func_0x000107c61170(dVar3);
        if (dVar6 <= param_1) {
          pdVar8 = param_6 + 2;
          pdVar15 = param_6;
        }
        else {
          pdVar8 = param_6;
          pdVar15 = param_4;
          param_4 = param_4 + 2;
        }
        param_6 = pdVar8;
        if (pdVar16 != pdVar15) {
          dVar17 = *pdVar15;
          pdVar16[1] = pdVar15[1];
          *pdVar16 = dVar17;
        }
        pdVar16 = pdVar16 + 2;
        param_1 = dVar17;
      } while (param_6 < pdVar11);
    }
  }
  else {
    if (((param_6 < param_4) || (param_4 + lVar10 * 2 <= param_6)) || (param_6 != param_4)) {
      func_0x000107c610b8(param_6,param_4,lVar10 << 4);
    }
    pdVar11 = param_6 + lVar10 * 2;
    pdVar16 = param_4;
    if ((param_3 < param_4) && (0xf < lVar13)) {
      do {
        pdVar8 = param_4 + -2;
        dVar2 = param_1;
        pdVar15 = param_5;
        while( true ) {
          param_5 = pdVar15 + -2;
          pdVar14 = pdVar11 + -2;
          dVar3 = *pdVar14;
          dVar4 = pdVar11[-1];
          dVar5 = param_4[-2];
          dVar6 = param_4[-1];
          func_0x000107c61174();
          func_0x000107c61174(dVar4);
          func_0x000107c61174(dVar5);
          func_0x000107c61174(dVar6);
          func_0x000107c4077c(dVar4);
          dVar17 = dVar2;
          uVar19 = param_2;
          func_0x000107c4077c(param_7);
          func_0x000108d312a8(dVar2,param_2,dVar17,uVar19);
          dVar17 = dVar2;
          func_0x000107c4077c(dVar6);
          dVar18 = dVar17;
          uVar19 = param_2;
          func_0x000107c4077c(param_7);
          func_0x000108d312a8(dVar17,param_2,dVar18,uVar19);
          param_1 = dVar17;
          func_0x000107c61170(dVar4);
          func_0x000107c61170(dVar3);
          func_0x000107c61170(dVar6);
          func_0x000107c61170(dVar5);
          if (dVar2 < dVar17) break;
          if (pdVar15 != pdVar11) {
            param_1 = *pdVar14;
            pdVar15[-1] = pdVar11[-1];
            *param_5 = param_1;
          }
          pdVar11 = pdVar14;
          pdVar16 = param_4;
          dVar2 = param_1;
          pdVar15 = param_5;
          if (pdVar14 <= param_6) goto LAB_10250c9a4;
        }
        if (pdVar15 != param_4) {
          param_1 = *pdVar8;
          pdVar15[-1] = param_4[-1];
          *param_5 = param_1;
        }
        pdVar16 = pdVar8;
      } while ((param_3 < pdVar8) && (param_4 = pdVar8, param_6 < pdVar11));
    }
  }
LAB_10250c9a4:
  uVar9 = (long)pdVar11 - (long)param_6;
  uVar1 = uVar9 + 0xf;
  if (-1 < (long)uVar9) {
    uVar1 = uVar9;
  }
  if ((pdVar16 != param_6) || ((double *)((long)param_6 + (uVar1 & 0xfffffffffffffff0)) <= pdVar16))
  {
    func_0x000107c610b8(pdVar16,param_6,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 10250ca18; end: 10250ccff;  */

undefined8 FUN_10250ca18(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x21;
  ulong uVar15;
  ulong uVar16;
  
  uVar15 = *param_1;
  if (1 < *(ulong *)(uVar15 + 0x10)) {
    func_0x000107c61174();
    uVar14 = uVar15;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar15;
    lVar1 = uVar15 + 0x20;
    uVar14 = *(ulong *)(uVar15 + 0x10);
    do {
      uVar11 = uVar14 - 1;
      uVar8 = param_4;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar15 + 0x28),*(long *)(uVar15 + 0x20));
          lVar9 = *(long *)(uVar15 + 0x28) - *(long *)(uVar15 + 0x20);
          goto LAB_10250cb00;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccd4);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar15 + uVar14 * 0x10);
        lVar9 = *plVar2;
        lVar10 = plVar2[1];
        bVar7 = SBORROW8(lVar10,lVar9);
        lVar10 = lVar10 - lVar9;
LAB_10250cb60:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccc4);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar11 * 0x10);
        lVar9 = *plVar2;
        lVar4 = plVar2[1];
        if (SBORROW8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10250cccc);
          (*pcVar6)();
        }
        uVar12 = uVar11;
        if (lVar4 - lVar9 < lVar10) break;
      }
      else {
        lVar10 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar10 + -0x38),*(long *)(lVar10 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccac);
          (*pcVar6)();
        }
        lVar9 = *(long *)(lVar10 + -0x28) - *(long *)(lVar10 + -0x30);
        if (SBORROW8(*(long *)(lVar10 + -0x28),*(long *)(lVar10 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccb0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar15 + uVar14 * 0x10);
        lVar4 = *plVar2;
        lVar13 = plVar2[1];
        lVar5 = lVar13 - lVar4;
        if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccb8);
          (*pcVar6)();
        }
        if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccc0);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar9 + lVar5 < *(long *)(lVar10 + -0x38) - *(long *)(lVar10 + -0x40)) {
LAB_10250cb00:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccb4);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar15 + uVar14 * 0x10);
          lVar4 = *plVar2;
          lVar13 = plVar2[1];
          lVar10 = lVar13 - lVar4;
          if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccbc);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar11 * 0x10);
          lVar4 = *plVar2;
          lVar13 = plVar2[1];
          lVar5 = lVar13 - lVar4;
          if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccc8);
            (*pcVar6)();
          }
          if (SCARRY8(lVar10,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccd0);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar10 + lVar5 < lVar9) goto LAB_10250cb60;
          uVar12 = uVar14 - 2;
          if (lVar5 <= lVar9) {
            uVar12 = uVar11;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar11 * 0x10);
          lVar10 = *plVar2;
          lVar4 = plVar2[1];
          if (SBORROW8(lVar4,lVar10)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10250ccd8);
            (*pcVar6)();
          }
          uVar12 = uVar14 - 2;
          if (lVar4 - lVar10 <= lVar9) {
            uVar12 = uVar11;
          }
        }
      }
      uVar11 = uVar12 - 1;
      if (uVar14 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10250cc9c);
        (*pcVar6)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
        func_0x000107c61170(param_4);
        *param_1 = uVar15;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10250cd00);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar11 * 0x10);
      lVar13 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar12 * 0x10);
      lVar10 = *plVar3;
      lVar4 = plVar3[1];
      func_0x000107c61174(param_4);
      FUN_10250c610(lVar9 + lVar13 * 0x10,lVar9 + lVar10 * 0x10,lVar9 + lVar4 * 0x10,param_2,uVar8);
      func_0x000107c61170(uVar8);
      if (unaff_x21 != 0) {
        *param_1 = uVar15;
        func_0x000107c61170(uVar8);
        return 1;
      }
      if (lVar4 < lVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10250cca0);
        (*pcVar6)();
      }
      uVar16 = *(ulong *)(uVar15 + 0x10);
      if (uVar16 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10250cca4);
        (*pcVar6)();
      }
      *plVar2 = lVar13;
      plVar2[1] = lVar4;
      if (uVar16 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10250cca8);
        (*pcVar6)();
      }
      uVar14 = uVar16 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar12) * 0x10);
      *(ulong *)(uVar15 + 0x10) = uVar14;
    } while (2 < uVar16);
    func_0x000107c61170(uVar8);
    *param_1 = uVar15;
  }
  return 1;
}



/* Entry: 10250cd00; end: 10250d3e3;  */

void FUN_10250cd00(double param_1,double param_2,long *param_3,undefined8 param_4,long *param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  double *pdVar17;
  long lVar18;
  long lVar19;
  double *pdVar20;
  double *pdVar21;
  long lVar22;
  long unaff_x21;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  ulong *puVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined *puStack_88;
  
  lVar19 = param_5[1];
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  if (0 < lVar19) {
    lVar15 = 0;
    do {
      lVar22 = lVar15 + 1;
      dVar29 = param_1;
      if (lVar22 < lVar19) {
        puVar13 = (undefined8 *)(*param_5 + lVar22 * 0x10);
        uVar6 = *puVar13;
        uVar25 = puVar13[1];
        puVar13 = (undefined8 *)(*param_5 + lVar15 * 0x10);
        uVar7 = *puVar13;
        uVar26 = puVar13[1];
        func_0x000107c61174(uVar6);
        func_0x000107c61174(uVar25);
        func_0x000107c61174(uVar7);
        func_0x000107c61174(uVar26);
        func_0x000107c4077c(uVar25);
        dVar29 = param_1;
        dVar32 = param_2;
        func_0x000107c4077c(param_7);
        func_0x000108d312a8(param_1,param_2,dVar29,dVar32);
        dVar32 = param_1;
        func_0x000107c4077c(uVar26);
        dVar29 = dVar32;
        dVar27 = param_2;
        func_0x000107c4077c(param_7);
        func_0x000108d312a8(dVar32,param_2,dVar29,dVar27);
        dVar27 = dVar32;
        func_0x000107c61170(uVar25);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar26);
        func_0x000107c61170(uVar7);
        puVar13 = puVar13 + 3;
        lVar18 = lVar15 + 2;
        do {
          lVar14 = lVar18;
          lVar22 = lVar19;
          dVar29 = dVar27;
          if (lVar19 == lVar14) break;
          uVar6 = *puVar13;
          uVar7 = puVar13[1];
          uVar25 = puVar13[2];
          uVar26 = puVar13[-1];
          func_0x000107c61174(uVar7);
          func_0x000107c61174(uVar25);
          func_0x000107c61174(uVar26);
          func_0x000107c61174(uVar6);
          func_0x000107c4077c(uVar25);
          dVar29 = dVar27;
          dVar8 = param_2;
          func_0x000107c4077c(param_7);
          func_0x000108d312a8(dVar27,param_2,dVar29,dVar8);
          dVar8 = dVar27;
          func_0x000107c4077c(uVar6);
          dVar29 = dVar8;
          dVar9 = param_2;
          func_0x000107c4077c(param_7);
          func_0x000108d312a8(dVar8,param_2,dVar29,dVar9);
          dVar29 = dVar8;
          func_0x000107c61170(uVar25);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar26);
          bVar5 = dVar8 <= dVar27;
          puVar13 = puVar13 + 2;
          lVar18 = lVar14 + 1;
          lVar22 = lVar14;
          dVar27 = dVar29;
        } while (param_1 < dVar32 != bVar5);
        if (param_1 < dVar32) {
          if (lVar22 < lVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d368);
            (*pcVar4)();
          }
          if (lVar15 < lVar22) {
            lVar14 = *param_5;
            pdVar20 = (double *)(lVar14 + lVar15 * 0x10);
            lVar18 = lVar22;
            lVar19 = lVar15;
            pdVar21 = (double *)(lVar14 + lVar22 * 0x10);
            do {
              pdVar17 = pdVar21 + -2;
              lVar18 = lVar18 + -1;
              if (lVar19 != lVar18) {
                if (lVar14 == 0) {
                  func_0x000107c61170(param_7);
                  func_0x000107c61170(param_7);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d3a8);
                  (*pcVar4)();
                }
                dVar32 = pdVar20[1];
                dVar29 = *pdVar20;
                param_2 = *pdVar17;
                pdVar20[1] = pdVar21[-1];
                *pdVar20 = param_2;
                pdVar21[-1] = dVar32;
                *pdVar17 = dVar29;
              }
              lVar19 = lVar19 + 1;
              pdVar20 = pdVar20 + 2;
              pdVar21 = pdVar17;
            } while (lVar19 < lVar18);
          }
        }
      }
      lVar19 = param_5[1];
      lVar18 = lVar22;
      if (lVar22 < lVar19) {
        if (SBORROW8(lVar22,lVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d364);
          (*pcVar4)();
        }
        if (lVar22 - lVar15 < param_6) {
          if (SCARRY8(lVar15,param_6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d36c);
            (*pcVar4)();
          }
          lVar14 = lVar15 + param_6;
          if (lVar19 <= lVar15 + param_6) {
            lVar14 = lVar19;
          }
          if (lVar14 < lVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d370);
            (*pcVar4)();
          }
          if (lVar22 != lVar14) {
            lVar19 = *param_5;
            pdVar20 = (double *)(lVar19 + lVar22 * 0x10 + -0x10);
            lVar24 = lVar15 - lVar22;
            dVar32 = dVar29;
            do {
              pdVar21 = (double *)(lVar19 + lVar22 * 0x10);
              dVar29 = *pdVar21;
              dVar27 = pdVar21[1];
              pdVar21 = pdVar20;
              lVar18 = lVar24;
              do {
                dVar8 = *pdVar21;
                dVar9 = pdVar21[1];
                func_0x000107c61174(dVar29);
                func_0x000107c61174(dVar27);
                func_0x000107c61174(dVar8);
                func_0x000107c61174(dVar9);
                func_0x000107c4077c(dVar27);
                dVar30 = dVar32;
                dVar31 = param_2;
                func_0x000107c4077c(param_7);
                func_0x000108d312a8(dVar32,param_2,dVar30,dVar31);
                dVar30 = dVar32;
                func_0x000107c4077c(dVar9);
                dVar31 = dVar30;
                dVar33 = param_2;
                func_0x000107c4077c(param_7);
                func_0x000108d312a8(dVar30,param_2,dVar31,dVar33);
                dVar31 = dVar30;
                func_0x000107c61170(dVar27);
                func_0x000107c61170(dVar29);
                func_0x000107c61170(dVar9);
                func_0x000107c61170(dVar8);
                dVar29 = dVar31;
                if (dVar30 <= dVar32) break;
                if (lVar19 == 0) {
                  func_0x000107c61170(param_7);
                  func_0x000107c61170(param_7);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d384);
                  (*pcVar4)();
                }
                dVar27 = pdVar21[3];
                dVar32 = pdVar21[1];
                param_2 = *pdVar21;
                dVar29 = pdVar21[2];
                pdVar21[1] = pdVar21[3];
                *pdVar21 = dVar29;
                pdVar21[3] = dVar32;
                pdVar21[2] = param_2;
                bVar5 = lVar18 != -1;
                lVar18 = lVar18 + 1;
                pdVar21 = pdVar21 + -2;
                dVar32 = dVar29;
              } while (bVar5);
              lVar22 = lVar22 + 1;
              pdVar20 = pdVar20 + 2;
              lVar24 = lVar24 + -1;
              lVar18 = lVar14;
              dVar32 = dVar29;
            } while (lVar22 != lVar14);
          }
        }
      }
      puVar12 = puStack_88;
      if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d354);
        (*pcVar4)();
      }
      puVar10 = puStack_88;
      func_0x000107c61558();
      puVar11 = puVar12;
      param_1 = dVar29;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
        param_1 = dVar29;
      }
      uVar23 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar23) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x0001000a91e0(puVar12,uVar23 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar23 + 1;
      *(long *)(puVar12 + uVar23 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar12 + uVar23 * 0x10 + 0x28) = lVar18;
      lVar19 = *param_3;
      puStack_88 = puVar12;
      if (lVar19 == 0) {
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_7);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d3bc);
        (*pcVar4)();
      }
      uVar6 = param_7;
      func_0x000107c61174(param_7);
      FUN_10250ca18(&puStack_88,lVar19,param_5,uVar6);
      if (unaff_x21 != 0) {
        func_0x000107c61170(uVar6);
        puVar12 = puStack_88;
        goto LAB_10250d308;
      }
      func_0x000107c61170(uVar6);
      lVar19 = param_5[1];
      lVar15 = lVar18;
    } while (lVar18 < lVar19);
  }
  puVar12 = puStack_88;
  lVar19 = *param_3;
  if (lVar19 == 0) {
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_7);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d3e4);
    (*pcVar4)();
  }
  puVar10 = puStack_88;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar28 = (ulong *)(puVar12 + 0x10);
  uVar23 = *puVar28;
  do {
    if (uVar23 < 2) {
LAB_10250d308:
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_7);
      func_0x000107c6142c(puVar12);
      return;
    }
    lVar15 = *param_5;
    if (lVar15 == 0) {
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_7);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d3d0);
      (*pcVar4)();
    }
    plVar1 = (long *)(puVar12 + uVar23 * 0x10);
    lVar22 = *plVar1;
    puVar2 = puVar28 + uVar23 * 2;
    uVar16 = *puVar2;
    uVar3 = puVar2[1];
    uVar6 = param_7;
    func_0x000107c61174(param_7);
    FUN_10250c610(lVar15 + lVar22 * 0x10,lVar15 + uVar16 * 0x10,lVar15 + uVar3 * 0x10,lVar19,uVar6);
    if (unaff_x21 != 0) {
      func_0x000107c61170(uVar6);
      goto LAB_10250d308;
    }
    func_0x000107c61170(uVar6);
    if ((long)uVar3 < lVar22) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d358);
      (*pcVar4)();
    }
    uVar16 = *puVar28;
    if (uVar16 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d35c);
      (*pcVar4)();
    }
    *plVar1 = lVar22;
    plVar1[1] = uVar3;
    lVar15 = uVar16 - uVar23;
    if (uVar16 < uVar23) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10250d360);
      (*pcVar4)();
    }
    uVar23 = uVar16 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar15 * 0x10);
    *puVar28 = uVar23;
  } while( true );
}



/* Entry: 10250d3e4; end: 10250d55b;  */

void FUN_10250d3e4(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined1 auStack_48 [8];
  
  uVar4 = *param_1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_10250c218();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_60 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_58 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0x112ea3490;
      func_0x0001000285a8(0x112ea3490,&UNK_10dab58b8);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_70 = puVar3 + 0x20;
    uVar2 = param_2;
    puStack_68 = puVar6;
    func_0x000107c61174(param_2);
    FUN_10250cd00(&puStack_70,auStack_48,&lStack_60,uVar1,uVar2);
    func_0x000107c61170(uVar2);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    uVar2 = param_2;
    func_0x000107c61174(param_2);
    FUN_10250c490(0,uVar5,1,&lStack_60,uVar2);
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar4;
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10250d55c; end: 10250d563;  */

void FUN_10250d55c(long param_1,long param_2)

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



/* Entry: 10250d564; end: 10250d607;  */

void FUN_10250d564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5aac0,&UNK_10da60520);
  puVar1 = &UNK_11051aec8;
  func_0x000107c613fc(&UNK_11051aec8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10250d9cc,puVar1);
  return;
}



/* Entry: 10250d608; end: 10250d9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250d608(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar5 = uVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000100083b20(&lStack_70);
  lVar6 = lStack_70;
  func_0x000107c5b478();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar6 != 0) {
    func_0x000100083b20(&uStack_78);
    func_0x000100083b20(&lStack_80);
    uVar7 = *(undefined8 *)(lStack_80 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lStack_80);
    lVar8 = 0;
    FUN_10250c3ac();
    lVar9 = lVar8;
    func_0x000107c610f8();
    lVar2 = _DAT_112ea3410;
    puVar10 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar9 + lVar2) = puVar10;
    *(undefined8 *)(lVar9 + _DAT_112ea3448) = 0;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112ea3418);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112ea3430);
    *puVar1 = uVar4;
    puVar1[1] = param_3;
    *(long *)(lVar9 + _DAT_112ea3438) = lVar6;
    *(undefined8 *)(lVar9 + _DAT_112ea3440) = uStack_78;
    puVar10 = &UNK_11051af10;
    func_0x000107c613fc(&UNK_11051af10,0x18,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar7;
    func_0x0001000285a8(0x112d61fe0,&UNK_10d992300);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174(lVar6);
    uVar11 = uStack_78;
    func_0x000107c61174(uStack_78);
    uVar5 = 0x10250d9e8;
    func_0x0001000bdd8c(0x10250d9e8,puVar10);
    *(undefined8 *)(lVar9 + _DAT_112ea3450) = uVar5;
    uVar5 = 0x112ea3498;
    func_0x0001000285a8(0x112ea3498,&UNK_10dab5900);
    func_0x000107c613fc();
    uVar4 = 0x10250a48c;
    func_0x0001000bdd8c(0x10250a48c,0);
    *(undefined8 *)(lVar9 + _DAT_112ea3428) = uVar4;
    uVar4 = 0x112d61fe8;
    func_0x0001000285a8(0x112d61fe8,&UNK_10d927fa0);
    func_0x000107c613fc();
    pcVar3 = FUN_10250a510;
    func_0x0001000bdd8c(FUN_10250a510,0);
    *(code **)(lVar9 + _DAT_112ea3420) = pcVar3;
    plVar12 = &lStack_90;
    lStack_90 = lVar9;
    lStack_88 = lVar8;
    func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
    puVar10 = &UNK_11051af38;
    puVar13 = puVar10;
    func_0x000107c613fc(&UNK_11051af38,0x18,7);
    func_0x000107c61614(puVar13 + 0x10,plVar12);
    func_0x000107c613fc(uVar5,0x18,7);
    plVar14 = plVar12;
    func_0x000107c61174();
    func_0x000107c61174();
    uVar5 = 0x10250d9f0;
    func_0x0001000bdd8c(0x10250d9f0,puVar13);
    uVar15 = *(undefined8 *)((long)plVar14 + _DAT_112ea3428);
    *(undefined8 *)((long)plVar14 + _DAT_112ea3428) = uVar5;
    func_0x000107c61574(uVar15);
    func_0x000107c613fc(&UNK_11051af38,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,plVar14);
    func_0x000107c61170(plVar14);
    func_0x000107c613fc(uVar4,0x18,7);
    uVar5 = 0x10250d9f8;
    func_0x0001000bdd8c(0x10250d9f8,puVar10,uVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar7);
    uVar4 = *(undefined8 *)((long)plVar14 + _DAT_112ea3420);
    *(undefined8 *)((long)plVar14 + _DAT_112ea3420) = uVar5;
    func_0x000107c61170(plVar14);
    func_0x000107c61574(uVar4);
    *param_1 = (long)plVar12;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10250d9cc);
  (*pcVar3)();
}



/* Entry: 10250d9cc; end: 10250d9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250d9cc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar10,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar15 = uVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar15;
  func_0x000107c5faec();
  func_0x000107c61170(uVar15);
  func_0x000100083b20(&lStack_70);
  lVar5 = lStack_70;
  func_0x000107c5b478();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar5 != 0) {
    func_0x000100083b20(&uStack_78);
    func_0x000100083b20(&lStack_80);
    uVar6 = *(undefined8 *)(lStack_80 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lStack_80);
    lVar7 = 0;
    FUN_10250c3ac();
    lVar8 = lVar7;
    func_0x000107c610f8();
    lVar2 = _DAT_112ea3410;
    puVar9 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar8 + lVar2) = puVar9;
    *(undefined8 *)(lVar8 + _DAT_112ea3448) = 0;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112ea3418);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112ea3430);
    *puVar1 = uVar4;
    puVar1[1] = uVar10;
    *(long *)(lVar8 + _DAT_112ea3438) = lVar5;
    *(undefined8 *)(lVar8 + _DAT_112ea3440) = uStack_78;
    puVar9 = &UNK_11051af10;
    func_0x000107c613fc(&UNK_11051af10,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar6;
    func_0x0001000285a8(0x112d61fe0,&UNK_10d992300);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174(lVar5);
    uVar4 = uStack_78;
    func_0x000107c61174(uStack_78);
    uVar10 = 0x10250d9e8;
    func_0x0001000bdd8c(0x10250d9e8,puVar9);
    *(undefined8 *)(lVar8 + _DAT_112ea3450) = uVar10;
    uVar10 = 0x112ea3498;
    func_0x0001000285a8(0x112ea3498,&UNK_10dab5900);
    func_0x000107c613fc();
    uVar15 = 0x10250a48c;
    func_0x0001000bdd8c(0x10250a48c,0);
    *(undefined8 *)(lVar8 + _DAT_112ea3428) = uVar15;
    uVar15 = 0x112d61fe8;
    func_0x0001000285a8(0x112d61fe8,&UNK_10d927fa0);
    func_0x000107c613fc();
    pcVar3 = FUN_10250a510;
    func_0x0001000bdd8c(FUN_10250a510,0);
    *(code **)(lVar8 + _DAT_112ea3420) = pcVar3;
    plVar11 = &lStack_90;
    lStack_90 = lVar8;
    lStack_88 = lVar7;
    func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
    puVar9 = &UNK_11051af38;
    puVar12 = puVar9;
    func_0x000107c613fc(&UNK_11051af38,0x18,7);
    func_0x000107c61614(puVar12 + 0x10,plVar11);
    func_0x000107c613fc(uVar10,0x18,7);
    plVar13 = plVar11;
    func_0x000107c61174();
    func_0x000107c61174();
    uVar10 = 0x10250d9f0;
    func_0x0001000bdd8c(0x10250d9f0,puVar12);
    uVar14 = *(undefined8 *)((long)plVar13 + _DAT_112ea3428);
    *(undefined8 *)((long)plVar13 + _DAT_112ea3428) = uVar10;
    func_0x000107c61574(uVar14);
    func_0x000107c613fc(&UNK_11051af38,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,plVar13);
    func_0x000107c61170(plVar13);
    func_0x000107c613fc(uVar15,0x18,7);
    uVar10 = 0x10250d9f8;
    func_0x0001000bdd8c(0x10250d9f8,puVar9,uVar15);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    uVar15 = *(undefined8 *)((long)plVar13 + _DAT_112ea3420);
    *(undefined8 *)((long)plVar13 + _DAT_112ea3420) = uVar10;
    func_0x000107c61170(plVar13);
    func_0x000107c61574(uVar15);
    *param_1 = (long)plVar11;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10250d9cc);
  (*pcVar3)();
}



/* Entry: 10250da00; end: 10250dc67;  */

undefined1  [16] FUN_10250da00(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0a7c00);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a7be0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10250dad0);
  (*pcVar1)();
}



/* Entry: 10250dc68; end: 10250dc6f;  */

undefined8 FUN_10250dc68(void)

{
  return 1;
}



/* Entry: 10250dc70; end: 10250dd0f;  */

void FUN_10250dc70(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10250dd10; end: 10250dd1f;  */

void FUN_10250dd10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10250dd20; end: 10250dd37; -[SCFullMapPageLaunchHandler payloadClass] */

void FUN_10250dd20(void)

{
  func_0x000104515b14(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10250dd38; end: 10250dd3b; -[SCFullMapPageLaunchHandler setPayloadClass:] */

void FUN_10250dd38(void)

{
  return;
}



/* Entry: 10250dd3c; end: 10250ddb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250dd3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ea34a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea34a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea34b0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10250ddb8; end: 10250e02b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250ddb8(undefined8 param_1,code *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100672b50(param_1,&puStack_80);
  if (lStack_68 == 0) {
    ppuVar5 = &puStack_80;
    func_0x00010006e7f4(ppuVar5);
  }
  else {
    uVar2 = 0;
    func_0x000104515b14(0);
    ppuVar5 = apuStack_98;
    func_0x000107c6147c(ppuVar5,&puStack_80,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)ppuVar5 & 1) != 0) {
      FUN_10250e06c();
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      func_0x000107c4a8a4();
      func_0x000107c61180();
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      func_0x000107c4a8a4();
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(apuStack_98[0] + _DAT_1130830f8);
      uVar2 = *(undefined8 *)(apuStack_98[0] + _DAT_1130830f0);
      func_0x000107c61174(uVar2);
      func_0x000107c615f0(uVar7);
      lVar4 = unaff_x20;
      func_0x000104517468();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea34b0));
      func_0x000107c61604(unaff_x20 + _DAT_112ea34a0,apuStack_98[0]);
      lVar1 = _DAT_113083100;
      func_0x000107c61428(apuStack_98[0] + _DAT_113083100,apuStack_98,1,0);
      func_0x000107c61604(apuStack_98[0] + lVar1);
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(apuStack_98[0]);
        func_0x000107c61170(lVar4);
        return;
      }
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar2 = 0;
      func_0x000100f15acc();
      puStack_80 = puVar6;
      lStack_68 = uVar2;
      (*param_2)(0,&puStack_80);
      func_0x000107c61170(apuStack_98[0]);
      func_0x000107c61170(lVar4);
      goto LAB_10250dff0;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  FUN_10250e02c();
  puVar6 = &UNK_11051b058;
  func_0x000107c613f8(&UNK_11051b058,ppuVar5,0,0);
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  lStack_68 = 0;
  uStack_70 = 0;
  (*param_2)();
  func_0x000107c614ac(puVar6);
LAB_10250dff0:
  func_0x00010006e7f4(&puStack_80);
  return;
}



/* Entry: 10250e02c; end: 10250e06b;  */

void FUN_10250e02c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea34b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab59d8;
  func_0x000107c61520(&UNK_10dab59d8,&UNK_11051b058);
  puRam0000000112ea34b8 = puVar1;
  return;
}



/* Entry: 10250e06c; end: 10250e163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250e06c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112ea34a0;
  lVar1 = unaff_x20 + _DAT_112ea34a0;
  func_0x000107c61618();
  func_0x000107c61604(unaff_x20 + lVar2,0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea34b0);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c41864(*(undefined8 *)(lVar2 + _DAT_1130831a0));
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar3);
  }
  lVar2 = _DAT_113083108;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_113083108,auStack_48,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c43b88();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10250e164; end: 10250e233; -[SCFullMapPageLaunchHandler launchWithPayload:completion:] */

void FUN_10250e164(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11051b078;
    func_0x000107c613fc(&UNK_11051b078,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_10250e520;
  }
  FUN_10250ddb8(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 10250e234; end: 10250e293; -[SCFullMapPageLaunchHandler init] */

void FUN_10250e234(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FullMapPageLauncher.FullMapPageLaunchHandler",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10250e260);
  (*pcVar1)();
}



/* Entry: 10250e294; end: 10250e2db; -[SCFullMapPageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250e294(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea34a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea34b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ea34a0);
  return;
}



/* Entry: 10250e2dc; end: 10250e3a7; -[SCFullMapPageLaunchHandler mapScopeDidEnd:] */

/* WARNING: Possible PIC construction at 0x00010250e368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250e378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250e38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250e37c) */
/* WARNING: Removing unreachable block (ram,0x00010250e380) */
/* WARNING: Removing unreachable block (ram,0x00010250e36c) */
/* WARNING: Removing unreachable block (ram,0x00010250e390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250e2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ea34b0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000100388c1c(0);
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar1);
    func_0x000107c60118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10250e3a8; end: 10250e3c7;  */

void FUN_10250e3a8(void)

{
  func_0x000107c61168(&PTR_PTR_11284b250);
  return;
}



/* Entry: 10250e3c8; end: 10250e3ef; -[SCFullMapPageLaunchHandler dismissFullMapScope] */

void FUN_10250e3c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10250e06c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10250e3f0; end: 10250e4df;  */

uint FUN_10250e3f0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10250e4e0; end: 10250e51f;  */

void FUN_10250e4e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea34e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab59b0;
  func_0x000107c61520(&UNK_10dab59b0,&UNK_11051b058);
  puRam0000000112ea34e8 = puVar1;
  return;
}



/* Entry: 10250e520; end: 10250e527;  */

void FUN_10250e520(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 10250e528; end: 10250e61f;  */

void FUN_10250e528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_11051b100;
  func_0x000107c613fc(&UNK_11051b100,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10250e620,puVar1);
  return;
}



/* Entry: 10250e620; end: 10250e627;  */

void FUN_10250e620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10250e8cc();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  uVar2 = uStack_38;
  FUN_10250e784(uStack_38,uVar1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10250e628; end: 10250e67f;  */

undefined8 FUN_10250e628(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_10250e784(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 10250e680; end: 10250e70f; -[_TtC19FullMapPageLauncher25FullMapPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250e680(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ea34f0);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10250e710; end: 10250e713; -[_TtC19FullMapPageLauncher25FullMapPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_10250e710(void)

{
  return;
}



/* Entry: 10250e714; end: 10250e773; -[_TtC19FullMapPageLauncher25FullMapPageLauncherPlugin init] */

void FUN_10250e714(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FullMapPageLauncher.FullMapPageLauncherPlugin",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10250e740);
  (*pcVar1)();
}



/* Entry: 10250e774; end: 10250e783; -[_TtC19FullMapPageLauncher25FullMapPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250e774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea34f0));
  return;
}



/* Entry: 10250e784; end: 10250e8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10250e784(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  func_0x000100083b20(&uStack_48);
  uVar2 = 0x112e51e20;
  func_0x0001000285a8(0x112e51e20,&UNK_10da520b0);
  func_0x000107c610f8();
  uVar3 = uStack_48;
  func_0x00010017da58(uStack_48,uVar2);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  lVar5 = 0;
  FUN_10250e3a8();
  lVar6 = lVar5;
  func_0x000107c610f8();
  func_0x000107c61614(lVar6 + _DAT_112ea34a0,0);
  *(undefined8 *)(lVar6 + _DAT_112ea34a8) = param_1;
  *(undefined **)(lVar6 + _DAT_112ea34b0) = puVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar6;
  lStack_50 = lVar5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar4);
  plVar7 = &lStack_58;
  func_0x000107c61154(plVar7,puVar1);
  *(long **)(unaff_x20 + _DAT_112ea34f0) = plVar7;
  puVar8 = &stack0xffffffffffffff98;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(puVar4);
  return puVar8;
}



/* Entry: 10250e8bc; end: 10250e8cb;  */

undefined1  [16] FUN_10250e8bc(void)

{
  return ZEXT816(0x11051b128);
}



/* Entry: 10250e8cc; end: 10250e8eb;  */

void FUN_10250e8cc(void)

{
  func_0x000107c61168(&PTR_PTR_11284b320);
  return;
}



/* Entry: 10250e8ec; end: 10250e993; -[_TtC44MapArrivalNotificationServicesImplementation32ActiveArrivalNotificationTracker observeForUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250e8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000107c5faec();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3520);
  uStack_50 = param_3;
  uStack_48 = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112ea3568;
  func_0x0001000285a8(0x112ea3568,&UNK_10dab5ad8);
  func_0x000100075034(&uStack_38,0x10250ef50,auStack_60,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 10250e994; end: 10250ea9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250e994(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea3528);
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_3;
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(&uStack_90,0x10250ef18,auStack_80,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea3520);
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x000107c6157c(uVar3);
  uVar2 = 0x112ea3568;
  func_0x0001000285a8(0x112ea3568,&UNK_10dab5ad8);
  func_0x000100075034(&uStack_90,0x10250ef38,auStack_80,uVar2);
  func_0x000107c61574(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4d664(CONCAT71(uStack_8f,uStack_90));
  func_0x000107c61170(CONCAT71(uStack_8f,uStack_90));
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10250eaa0; end: 10250ec03;  */

void FUN_10250eaa0(undefined8 param_1,long *param_2,long param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar4 = *param_2;
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar1 = param_3;
    uVar2 = param_4;
    func_0x000100029284();
    puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
    if ((uVar2 & 1) != 0) {
      puVar3 = *(undefined **)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61434(puVar3);
    }
    func_0x000107c6142c(lVar4);
  }
  if ((param_5 & 1) == 0) {
    uStack_68 = param_7;
    func_0x0001010af1e4(param_6,param_7);
  }
  else {
    func_0x000107c61434(param_7);
    func_0x000100403b00(&lStack_70,param_6,param_7);
  }
  func_0x000107c6142c(uStack_68);
  func_0x000107c61434(param_4);
  func_0x000107c61434(puVar3);
  lVar4 = *param_2;
  func_0x000107c61558(lVar4);
  lStack_70 = *param_2;
  func_0x0001010af74c(puVar3,param_3,param_4,lVar4);
  func_0x000107c6142c(param_4);
  *param_2 = lStack_70;
  lVar4 = *(long *)(puVar3 + 0x10);
  func_0x000107c6142c(puVar3);
  *(bool *)param_1 = lVar4 != 0;
  return;
}



/* Entry: 10250ec04; end: 10250ec93; -[_TtC44MapArrivalNotificationServicesImplementation32ActiveArrivalNotificationTracker publishWithAlertId:isActive:userId:] */

/* WARNING: Possible PIC construction at 0x00010250ec78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250ec7c) */

void FUN_10250ec04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_10250e994(param_3,param_2,param_4,param_5,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10250ec94; end: 10250edab;  */

void FUN_10250ec94(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_2;
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    lVar4 = param_3;
    uVar3 = param_4;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      puVar1 = *(undefined **)(*(long *)(lVar5 + 0x38) + lVar4 * 8);
      func_0x000107c61174();
      func_0x000107c6142c(lVar5);
      goto LAB_10250ed8c;
    }
    func_0x000107c6142c(lVar5);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar2);
  func_0x000107c61434(param_4);
  func_0x000107c61174();
  lVar5 = *param_2;
  func_0x000107c61558(lVar5);
  lVar4 = *param_2;
  func_0x000101c4eb50(puVar1,param_3,param_4,lVar5);
  func_0x000107c6142c(param_4);
  *param_2 = lVar4;
LAB_10250ed8c:
  *param_1 = puVar1;
  return;
}



/* Entry: 10250edac; end: 10250ee8b; -[_TtC44MapArrivalNotificationServicesImplementation32ActiveArrivalNotificationTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250edac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ea3520;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101c4bb68();
  puStack_48 = puVar3;
  func_0x0001000285a8(0x112ea3558,&UNK_10dab5ac8);
  func_0x000107c613fc();
  ppuVar4 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(param_1 + lVar1) = ppuVar4;
  lVar1 = _DAT_112ea3528;
  FUN_1024ac5ec();
  puStack_48 = puVar5;
  func_0x0001000285a8(0x112ea3560,&UNK_10dab5ad0);
  func_0x000107c613fc();
  ppuVar4 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(param_1 + lVar1) = ppuVar4;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10250ee8c; end: 10250eebf;  */

void FUN_10250ee8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10250eec0; end: 10250eef7; -[_TtC44MapArrivalNotificationServicesImplementation32ActiveArrivalNotificationTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010250eedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250eee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250eec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea3520));
  return;
}



/* Entry: 10250eef8; end: 10250ef63;  */

void FUN_10250eef8(void)

{
  func_0x000107c61168(&PTR_PTR_11284b3e0);
  return;
}



/* Entry: 10250ef64; end: 10250efab;  */

void FUN_10250ef64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x000100325160(0);
  func_0x000107c610f8();
  func_0x0001038b6054(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 10250efac; end: 10250efb3;  */

void FUN_10250efac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x000100325160(0);
  func_0x000107c610f8();
  func_0x0001038b6054(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10250efb4; end: 10250efe3;  */

void FUN_10250efb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10250eef8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10250efe4; end: 10250f003;  */

undefined1  [16] FUN_10250efe4(void)

{
  return ZEXT816(0x11051b1c8);
}



/* Entry: 10250f004; end: 10250f1cf;  */

/* WARNING: Possible PIC construction at 0x00010250f118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010250f1a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250f19c) */
/* WARNING: Removing unreachable block (ram,0x00010250f18c) */
/* WARNING: Removing unreachable block (ram,0x00010250f17c) */
/* WARNING: Removing unreachable block (ram,0x00010250f16c) */
/* WARNING: Removing unreachable block (ram,0x00010250f15c) */
/* WARNING: Removing unreachable block (ram,0x00010250f14c) */
/* WARNING: Removing unreachable block (ram,0x00010250f13c) */
/* WARNING: Removing unreachable block (ram,0x00010250f12c) */
/* WARNING: Removing unreachable block (ram,0x00010250f11c) */
/* WARNING: Removing unreachable block (ram,0x00010250f1ac) */

void FUN_10250f004(undefined8 *param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  code *pcVar22;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xa8);
  puVar20 = &UNK_11051b2d8;
  func_0x000107c613fc(&UNK_11051b2d8,0xb0,7);
  *(undefined8 *)(puVar20 + 0x10) = uVar1;
  *(undefined8 *)(puVar20 + 0x18) = uVar10;
  *(undefined8 *)(puVar20 + 0x20) = uVar21;
  *(undefined8 *)(puVar20 + 0x28) = uVar11;
  *(undefined8 *)(puVar20 + 0x30) = uVar2;
  *(undefined8 *)(puVar20 + 0x38) = uVar12;
  *(undefined8 *)(puVar20 + 0x40) = uVar3;
  *(undefined8 *)(puVar20 + 0x48) = uVar13;
  *(undefined8 *)(puVar20 + 0x50) = uVar4;
  *(undefined8 *)(puVar20 + 0x58) = uVar14;
  *(undefined8 *)(puVar20 + 0x60) = uVar5;
  *(undefined8 *)(puVar20 + 0x68) = uVar15;
  *(undefined8 *)(puVar20 + 0x70) = uVar6;
  *(undefined8 *)(puVar20 + 0x78) = uVar16;
  *(undefined8 *)(puVar20 + 0x80) = uVar7;
  *(undefined8 *)(puVar20 + 0x88) = uVar17;
  *(undefined8 *)(puVar20 + 0x90) = uVar8;
  *(undefined8 *)(puVar20 + 0x98) = uVar18;
  *(undefined8 *)(puVar20 + 0xa0) = uVar9;
  *(undefined8 *)(puVar20 + 0xa8) = uVar19;
  uVar21 = 0x112ea3588;
  func_0x0001000285a8(0x112ea3588,&UNK_10dab5bb8);
  func_0x000107c613fc();
  pcVar22 = FUN_10250f29c;
  func_0x0001000841fc(FUN_10250f29c,puVar20,uVar21);
  func_0x000100084214(&UNK_10dab5b80,0x33,2);
  *param_1 = pcVar22;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10250f1d0; end: 10250f1df;  */

undefined1  [16] FUN_10250f1d0(void)

{
  return ZEXT816(0x11051b2b8);
}



/* Entry: 10250f1e0; end: 10250f29b;  */

void FUN_10250f1e0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10250f29c; end: 10250f873;  */

void FUN_10250f29c(undefined8 *param_1,undefined1 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar22 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar20 = *param_2;
  uVar8 = *(undefined8 *)(param_2 + 8);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x0001000285a8(0x112ea3590,&UNK_10dab5bc0);
  puVar21 = auStack_80;
  auStack_80[0] = uVar20;
  uStack_78 = uVar8;
  uStack_70 = uVar19;
  func_0x0001000838ec();
  func_0x00010250f42c(uVar22,uVar9,uVar1,uVar10,uVar2,uVar11,uVar3,puVar21,uVar12,uVar4,uVar13);
  func_0x000100082720("MapArrivalNotificationsRouterServiceProvider",0x2c,2);
  func_0x000102514e7c(uVar23,uVar14,uVar5,uVar15,uVar22);
  func_0x000100082720("MapMultiFriendArrivalNotificationsPresenterServiceProvider",0x3a,2);
  FUN_1025119c8(uVar24,uVar16,uVar6,uVar2,uVar17,uVar7,uVar3,uVar23,uVar22,puVar21,uVar4,uVar18);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(puVar21);
  func_0x000100082720("MapArrivalNotificationsWorkflowImplEntryPointProvider",0x35,2);
  *param_1 = uVar24;
  return;
}



/* Entry: 10250f874; end: 10250f8af;  */

void FUN_10250f874(void)

{
  long unaff_x20;
  
  func_0x00010250f554(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10250f8b0; end: 10250fb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250f8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ea35a0,0);
  lVar5 = _DAT_112ea35a8;
  uVar4 = 0x112ea35b0;
  func_0x0001000285a8(0x112ea35b0,&UNK_10db33120);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  lVar3 = _DAT_112ea35b8;
  lVar5 = 0x112ea35c0;
  func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
  lVar6 = lVar5;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(unaff_x20 + lVar3) = lVar6;
  lVar3 = _DAT_112ea35c8;
  func_0x000107c613fc(lVar5,*(undefined4 *)(lVar5 + 0x30),*(undefined2 *)(lVar5 + 0x34));
  func_0x0001000c2754();
  *(long *)(unaff_x20 + lVar3) = lVar5;
  lVar5 = _DAT_112ea35d0;
  uVar4 = 0x112ea35d8;
  func_0x0001000285a8(0x112ea35d8,&UNK_10dab6240);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  lVar5 = _DAT_112ea35e0;
  uVar4 = 0x112ea2f30;
  func_0x0001000285a8(0x112ea2f30,&UNK_10dab5c10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  lVar5 = _DAT_112ea35e8;
  puVar7 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112ea35f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea35f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3608) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3610);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3618) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3620) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3628) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3630) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3638) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3640) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3648) = param_7;
  puVar2 = (undefined1 *)(unaff_x20 + _DAT_112ea3650);
  *puVar2 = param_8;
  *(undefined8 *)(puVar2 + 8) = param_9;
  *(undefined8 *)(puVar2 + 0x10) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3658) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3660) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3668) = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10250fb6c; end: 10250fbcf;  */

void FUN_10250fb6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c48af4();
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 10250fbd0; end: 10250fcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250fbd0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = _DAT_112ea3600;
  if (*(long *)(unaff_x20 + _DAT_112ea3600) == 0) {
    func_0x000100333fcc(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar1 = unaff_x20;
    func_0x0001038b4544();
    func_0x000100083b20(&uStack_48);
    uVar2 = uStack_48;
    lStack_50 = lVar1;
    func_0x00010008a7c8(&uStack_48,&lStack_50);
    func_0x000107c61574(uVar2);
    func_0x000100083b20(&lStack_50);
    func_0x000107c61574(uStack_48);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lStack_50;
    func_0x000107c615e8(uVar2);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c4f000();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10250fcc4; end: 10250fec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250fcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_80;
  undefined8 uStack_78;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3610);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000100b64c10();
  func_0x00010058d43c(uVar8,uVar2);
  uVar8 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  puVar6 = PTR_PTR_1126b1c10;
  func_0x000107c610f8(PTR_PTR_1126b1c10);
  func_0x000107c495dc(uVar8);
  func_0x000100083b20(&lStack_80);
  lVar5 = lStack_80;
  lVar7 = lStack_80;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar7 != 0) {
    func_0x000107c61170(lVar7);
    func_0x000100083b20(&lStack_80);
    lVar5 = lStack_80;
    lVar7 = lStack_80;
    func_0x000107c4ffe8(lStack_80);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c615e8(lVar7);
  }
  func_0x000100083b20(&lStack_80);
  lVar5 = lStack_80;
  puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar3 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  lStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c5fddc(param_1,&lStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c5fddc(param_2,&lStack_80,puVar3,puVar4);
  uVar8 = uStack_78;
  lVar7 = lStack_80;
  func_0x000107c61174(puVar6);
  func_0x00010438ae00(param_1,param_2,lVar7,uVar8,1,puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c6142c(uVar8);
  func_0x000107c61170(puVar6);
  func_0x000100083b20(&lStack_80);
  lVar5 = lStack_80;
  func_0x000107c42c1c(lStack_80);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 10250fec4; end: 10250ffc3;  */

/* WARNING: Removing unreachable block (ram,0x00010007d98c) */
/* WARNING: Removing unreachable block (ram,0x0001000ac76c) */
/* WARNING: Removing unreachable block (ram,0x0001000ac764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10250fec4(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(&UNK_10dab5d40 + (ulong)*(byte *)(unaff_x20 + _DAT_112ea3650) * 8);
  puVar1 = &UNK_11051b420;
  func_0x000107c613fc(&UNK_11051b420,0x28,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  puVar1[0x18] = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar2 = &UNK_11051b448;
  func_0x000107c613fc(&UNK_11051b448,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab5ce0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar3 = uVar4;
  func_0x0001001ca524(uVar4,0,0x3c,4,0,0,&UNK_10dab5ce8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return uVar4;
}



/* Entry: 10250ffc4; end: 102510033;  */

void FUN_10250ffc4(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x31) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102510034,uVar1,uVar2);
  return;
}



/* Entry: 102510034; end: 10251023f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510034(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  FUN_102510240(unaff_x22 + 0x10);
  if (*(char *)(unaff_x22 + 0x30) != '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x48) + _DAT_112ea35a0;
    func_0x000107c61618();
    lVar5 = _DAT_112ea35f0;
    if (lVar1 != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x48);
      if (*(long *)(lVar6 + _DAT_112ea35f0) == 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
        lVar2 = lVar1;
        FUN_10283c7d8();
        puVar3 = PTR_PTR_1126aead8;
        func_0x000107c610f8();
        func_0x000107c4807c();
        func_0x00010037ef84(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar7);
        func_0x000107c61174();
        lVar4 = lVar6;
        func_0x000107c61174();
        func_0x0001038b88bc(uVar8,uVar9,uVar10,uVar11);
        func_0x000100083b20(unaff_x22 + 0x40);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
        *(long *)(unaff_x22 + 0x40) = lVar4;
        func_0x00010008a7c8(unaff_x22 + 0x38,unaff_x22 + 0x40);
        func_0x000107c61574(uVar8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
        func_0x000100083b20(unaff_x22 + 0x40);
        func_0x000107c61574(uVar8);
        uVar8 = *(undefined8 *)(lVar6 + lVar5);
        *(undefined8 *)(lVar6 + lVar5) = *(undefined8 *)(unaff_x22 + 0x40);
        func_0x000107c615e8(uVar8);
        lVar5 = *(long *)(lVar6 + lVar5);
        if (lVar5 != 0) {
          func_0x000107c615f0(lVar5);
          func_0x000107c4f028();
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar1);
          func_0x000107c615e8(lVar5);
          goto LAB_1025101f4;
        }
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar4);
      }
      func_0x000107c61170();
    }
  }
LAB_1025101f4:
                    /* WARNING: Could not recover jumptable at 0x00010251021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102510240; end: 102510363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  uVar5 = 0;
  uVar6 = 0;
  if (lVar2 == 0) {
    uVar3 = 1;
    uVar4 = 0;
    param_5 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
      uVar3 = 1;
      uVar4 = 0;
      param_5 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      func_0x000107c4077c();
      func_0x000107c61170(lVar1);
      uVar4 = 0x409f400000000000;
      uVar6 = param_3;
      func_0x000108d31f58();
      func_0x000107c615e8(lVar2);
      uVar3 = 0;
    }
  }
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = param_5;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  return;
}



/* Entry: 102510364; end: 10251039f;  */

void FUN_102510364(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010251039c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1025103a0; end: 1025106bb;  */

/* WARNING: Possible PIC construction at 0x0001025104f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102510500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025104f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025103a0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar4 = unaff_x20 + _DAT_112ea35a0;
  func_0x000107c61618();
  lVar1 = _DAT_112ea3608;
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112ea3608) == 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61434(param_1);
    lVar4 = unaff_x20;
    func_0x000107c61174();
    func_0x000103a28f00(puVar2,lVar4,0x14,param_1,0);
    func_0x000100083b20(&uStack_58);
    uVar3 = uStack_58;
    puStack_60 = puVar2;
    func_0x00010008a7c8(&uStack_58,&puStack_60);
    func_0x000107c61574(uVar3);
    func_0x000100083b20(&puStack_60);
    func_0x000107c61574(uStack_58);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puStack_60;
    func_0x000107c615e8(uVar3);
    lVar4 = *(long *)(unaff_x20 + lVar1);
    if (lVar4 != 0) {
      func_0x000107c615f0(lVar4);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1025106bc; end: 10251088b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025106bc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  lVar2 = lStack_38;
  func_0x000107c4c440();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c443cc(lVar1);
    func_0x000107c615e8(lVar1);
  }
  func_0x000100083b20(&lStack_38);
  func_0x000105efd850(lVar2,lStack_38);
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar1 = unaff_x20 + _DAT_112ea35a0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4f018();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10251088c; end: 1025108f3;  */

void FUN_10251088c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1025108f4;
  plVar2[0x10] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025109c8,0,0);
  return;
}



/* Entry: 1025108f4; end: 10251095f;  */

void FUN_1025108f4(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined1 *)(lVar2 + 0x31) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102510960,uVar3,uVar1);
  return;
}



/* Entry: 102510960; end: 1025109af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510960(void)

{
  undefined1 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x31);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  *(undefined1 *)(unaff_x22 + 0x30) = uVar1;
  func_0x0001002a64a8();
                    /* WARNING: Could not recover jumptable at 0x0001025109ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025109b0; end: 1025109c7;  */

void FUN_1025109b0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025109c8,0,0);
  return;
}



/* Entry: 1025109c8; end: 102510b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025109c8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c44ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x88) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102510b04;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_11051b498;
    func_0x000107c613fc(&UNK_11051b498,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_1025118e8;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1021c011c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051b4b0;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c43314(lVar3);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102510b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102510b04; end: 102510b77;  */

void FUN_102510b04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102510b44,0,0);
  return;
}



/* Entry: 102510b78; end: 102510bc7;  */

void FUN_102510b78(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c44ed0();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61170(param_1);
  }
  *(bool *)*(undefined8 *)(*(long *)(param_3 + 0x40) + 0x28) = param_1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 102510bc8; end: 102510c27; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter init] */

void FUN_102510bc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsImplementation.MapArrivalNotificationsRouter",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102510bf4);
  (*pcVar1)();
}



/* Entry: 102510c28; end: 102510db7; -[_TtC37MapArrivalNotificationsImplementation29MapArrivalNotificationsRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102510c28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea35a0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea35a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea35b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea35c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea35d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea35e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea35e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3628));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3620));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3630));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3668));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3640));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3618));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3658));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3648));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3638));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3660));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea35f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea35f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea3600));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea3608));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112ea3610),
                      ((undefined8 *)(param_1 + _DAT_112ea3610))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112ea3650 + 0x10));
  return;
}


