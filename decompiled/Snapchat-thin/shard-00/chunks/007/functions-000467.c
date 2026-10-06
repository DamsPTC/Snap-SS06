/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100960828; end: 100960873;  */

void FUN_100960828(void)

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



/* Entry: 100960874; end: 10096087f;  */

undefined ** FUN_100960874(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100960880; end: 100960923;  */

void FUN_100960880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11045cd88;
  func_0x000107c613fc(&UNK_11045cd88,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100960968,puVar1);
  return;
}



/* Entry: 100960924; end: 100960967;  */

void FUN_100960924(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100960880(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100082720("NotificationCenterBadgeUpdateScopeInitializationPluginPluginProvider",0x44,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100960968; end: 100960973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100960968(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100083b20(&lStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),uVar6,
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100960b90();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar2 = lStack_58;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c4a100();
    func_0x000107c615e8(lVar3);
    if ((int)lVar2 != 0) {
      FUN_100083b20(&lStack_60);
      uVar4 = *(undefined8 *)(lStack_60 + _DAT_112ecb310);
      func_0x000107c61174();
      func_0x000107c61170(lStack_60);
      FUN_100083b20(&lStack_68);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_113091b70);
      func_0x000107c615f0(uVar7);
      func_0x000107c61170(lStack_68);
      func_0x000101c523b8(0);
      func_0x000107c610f8();
      func_0x000107c6157c(uVar6);
      func_0x000101c51728(uVar4,uVar6,uVar7);
      *(undefined8 *)(lVar1 + 0x10) = uVar4;
      puVar5 = &UNK_11045ce38;
      func_0x000107c613fc(&UNK_11045ce38,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar4;
      func_0x000107c61174(uVar4);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar6 = 1;
      func_0x0001001ca524(1,0,0x98,4,0,0,&UNK_10d9e5248,puVar5,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar6);
    }
  }
  func_0x000107c61170(lStack_58);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11045cdd8;
  return;
}



/* Entry: 100960974; end: 100960b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100960974(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  FUN_100960b90();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar1 = lStack_58;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4a100();
    func_0x000107c615e8(lVar2);
    if ((int)lVar1 != 0) {
      FUN_100083b20(&lStack_60);
      uVar3 = *(undefined8 *)(lStack_60 + _DAT_112ecb310);
      func_0x000107c61174();
      func_0x000107c61170(lStack_60);
      FUN_100083b20(&lStack_68);
      uVar5 = *(undefined8 *)(lStack_68 + _DAT_113091b70);
      func_0x000107c615f0(uVar5);
      func_0x000107c61170(lStack_68);
      func_0x000101c523b8(0);
      func_0x000107c610f8();
      func_0x000107c6157c(param_4);
      func_0x000101c51728(uVar3,param_4,uVar5);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      puVar4 = &UNK_11045ce38;
      func_0x000107c613fc(&UNK_11045ce38,0x18,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar3;
      func_0x000107c61174(uVar3);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = 1;
      func_0x0001001ca524(1,0,0x98,4,0,0,&UNK_10d9e5248,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
    }
  }
  func_0x000107c61170(lStack_58);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_11045cdd8;
  return;
}



/* Entry: 100960b5c; end: 100960b7f;  */

void FUN_100960b5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100960b80; end: 100960b8f; -[SCStoriesFriendMergedStoryPlaybackSequence userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100960b80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fc60);
}



/* Entry: 100960b90; end: 100960baf;  */

void FUN_100960b90(void)

{
  func_0x000107c61168(&PTR_PTR_112e0bbd0);
  return;
}



/* Entry: 100960bb0; end: 100960bbf; -[SCStoriesFriendMergedStoryPlaybackSequence storySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100960bb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fc64);
}



/* Entry: 100960bc0; end: 1009612e3;  */

undefined ** FUN_100960bc0(undefined **param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *unaff_x20;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 *puStack_260;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined **ppuStack_238;
  undefined4 uStack_1ec;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [31];
  undefined1 uStack_1b1;
  undefined **appuStack_1b0 [9];
  undefined1 auStack_168 [24];
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar4 = param_3;
  func_0x000107c40808();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000107c61158(PTR_PTR_1126d5360);
    if (param_1 == (undefined **)0x0) {
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
    }
    else {
      func_0x000107c430a4(&uStack_140);
    }
    puVar5 = &uStack_1b1;
    FUN_1009612e4(puVar5);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = param_2;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    FUN_100961348(auStack_1d0,puVar13);
    FUN_1004c2e3c(appuStack_1b0,0xc,puVar5,auStack_1d0);
    puStack_1e8 = (undefined1 *)0x0;
    puStack_1e0 = (undefined1 *)0x0;
    uStack_1d8 = 0;
    uStack_1ec = 0;
    unaff_x20 = &uStack_140;
    FUN_1000e77a0(unaff_x20,appuStack_1b0,&puStack_1e8,&uStack_1ec);
    func_0x000107c61180();
    puStack_260 = unaff_x20;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (puStack_1e8 != (undefined1 *)0x0) {
      puStack_1e0 = puStack_1e8;
      func_0x000107c60e14();
    }
    plVar2 = plStack_148;
    appuStack_1b0[0] = &PTR_DAT_110862700;
    plStack_148 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_150;
    plStack_150 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_1e8 = auStack_168;
    FUN_100105004(&puStack_1e8);
    puStack_1e8 = auStack_1d0;
    FUN_100105004(&puStack_1e8);
    func_0x000107c61170(puVar13);
    FUN_1000e76e0(&uStack_118);
    func_0x000107c61170(uStack_128);
    func_0x000107c61170(uStack_130);
    if (puStack_260 != (undefined8 *)0x0) {
      puVar4 = param_3;
      FUN_100504554(param_3,&PTR___NSConcreteGlobalBlock_110a500f0);
      ppuStack_238 = param_1;
      FUN_100aac27c(param_1,puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puStack_248 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c61160();
      puStack_240 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c61160();
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      func_0x000107c61174(param_3);
      puVar4 = param_3;
      func_0x000107c4080c();
      lVar1 = lRam0000000000000000;
      lVar10 = 0;
      if (puVar4 == (undefined8 *)0x0) {
        uVar23 = 0;
        dVar24 = 0.0;
      }
      else {
        uVar23 = 0;
        dVar24 = 0.0;
        do {
          puVar12 = (undefined8 *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              func_0x000107c61128(param_3);
            }
            uVar14 = *(ulong *)((long)puVar12 * 8);
            uVar6 = uVar14;
            func_0x000107c51fa4();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c44a40();
            func_0x000107c61170(uVar6);
            if ((uVar7 & 1) == 0) {
              uVar6 = uVar14;
              func_0x000107c51fa4();
              func_0x000107c61180();
              uVar7 = uVar6;
              func_0x000107c4adac();
              if (uVar7 == 0) {
                func_0x000107c61170(uVar6);
              }
              else {
                uVar7 = uVar14;
                func_0x000107c51fa4(uVar14);
                func_0x000107c61180();
                ppuVar8 = ppuStack_238;
                func_0x000107c4d9e8();
                func_0x000107c61180();
                func_0x000107c61170();
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar6);
                if (ppuVar8 == (undefined **)0x0) {
                  uVar6 = uVar14;
                  func_0x000107c51fa4(uVar14);
                  func_0x000107c61180();
                  func_0x000107c3d798(puStack_248);
                  func_0x000107c61170(uVar6);
                  func_0x000107c5c9d4(uVar14);
                  func_0x000107c61180();
                  func_0x000107c5ca64();
                  dVar24 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))))));
                  func_0x000107c61170(uVar14);
                  func_0x000107c3d798(puStack_240);
                  lVar10 = lVar10 + 1;
                  goto LAB_100960f6c;
                }
              }
              func_0x000107c5c9d4(uVar14);
              func_0x000107c61180();
              func_0x000107c5ca64();
              uVar23 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                               ));
              func_0x000107c61170(uVar14);
            }
LAB_100960f6c:
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          } while (puVar4 != puVar12);
          puVar4 = param_3;
          func_0x000107c4080c();
        } while (puVar4 != (undefined8 *)0x0);
      }
      func_0x000107c61170(param_3);
      puVar13 = puStack_240;
      func_0x000107c40808();
      if (puVar13 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR_PTR_1126d5358;
        func_0x000107c610f4();
        puVar9 = puStack_240;
        func_0x000107c4d9a0(puStack_240);
        func_0x000107c61180();
        puVar13 = puVar11;
        func_0x000107c4e388();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar11);
        puVar9 = PTR_PTR_1126d5358;
        func_0x000107c610f4();
        puVar11 = puVar9;
        func_0x000107c4e38c();
        func_0x000107c61170(puVar9);
      }
      unaff_x20 = param_3;
      func_0x000107c4aa28(param_3);
      func_0x000107c61180();
      puVar4 = unaff_x20;
      FUN_100aad290();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar9 = PTR_PTR_1126d9eb0;
      FUN_100aad504(PTR_PTR_1126d9eb0,puStack_260);
      func_0x000107c61180();
      if (puVar9 != (undefined *)0x0) {
        puVar9[0x14] = dVar24 != 0.0;
        *(double *)(puVar9 + 0x50) = dVar24;
        *(undefined8 *)(puVar9 + 0x58) = uVar23;
        *(long *)(puVar9 + 0x68) = lVar10;
        *(undefined **)(puVar9 + 0x78) = puVar13;
        *(undefined **)(puVar9 + 0x80) = puVar11;
        func_0x000107c61198(puVar9);
      }
      func_0x000107c5c28c(param_1);
      func_0x000107c611b0();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puStack_240);
      func_0x000107c61170(puStack_248);
      func_0x000107c61170(ppuStack_238);
    }
    func_0x000107c61170(puStack_260);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  ppuVar8 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar8;
  }
  func_0x000107c60e78();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(puStack_240);
  func_0x000107c61170(puStack_248);
  func_0x000107c61170(ppuStack_238);
  func_0x000107c61170(puStack_260);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8(ppuVar8);
  if ((bRam0000000113827d60 & 1) == 0) {
    iVar3 = 0x13827d60;
    func_0x000107c60e48();
    if (iVar3 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113263cb0,0x100000000);
      func_0x000107c60e4c(0x113827d60);
    }
  }
  return &PTR_PTR_113263cb0;
}



/* Entry: 1009612e4; end: 100961347;  */

undefined ** FUN_1009612e4(void)

{
  int iVar1;
  
  if ((bRam0000000113827d60 & 1) == 0) {
    iVar1 = 0x13827d60;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113263cb0,0x100000000);
      func_0x000107c60e4c(0x113827d60);
    }
  }
  return &PTR_PTR_113263cb0;
}



/* Entry: 100961348; end: 1009614ab;  */

void FUN_100961348(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar2 = param_2;
  func_0x000107c40808();
  iVar3 = (int)lVar2;
  FUN_1004c2bb4(param_1);
  func_0x000107c61174(param_2);
  lVar2 = param_2;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_2);
      }
      uVar4 = *(undefined8 *)(lVar5 * 8);
      func_0x000107c61174(uVar4);
      iVar3 = (int)auStack_e0;
      auStack_e0[0] = uVar4;
      FUN_1004c2d3c(param_1);
      func_0x000107c61170(auStack_e0[0]);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_2;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  if (iVar3 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  func_0x000107c61574(param_1[2]);
  func_0x000107c61574(param_1[3]);
  func_0x000107c61574(param_1[4]);
  func_0x000107c61574(param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(param_1,0x30,7);
  return;
}



/* Entry: 1009614ac; end: 1009614e7;  */

void FUN_1009614ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009614e8; end: 10096150f;  */

undefined ** FUN_1009614e8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100961510; end: 10096154f;  */

void FUN_100961510(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009614f4();
  FUN_100082720("NotificationPayloadDecryptionServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x54,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100961550; end: 100961557;  */

void FUN_100961550(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101eb1ec4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100961558; end: 1009615db;  */

void FUN_100961558(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101eb1ec4,param_2,&UNK_101eb1ec8,param_2,&UNK_101eb1ef0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009615dc; end: 1009615e7;  */

undefined ** FUN_1009615dc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009615e8; end: 100961673;  */

void FUN_1009615e8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100961674,param_1);
  return;
}



/* Entry: 100961674; end: 10096167b;  */

void FUN_100961674(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb2120);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096167c; end: 1009616ff;  */

void FUN_10096167c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb2120,param_2,FUN_100961700,param_2,&UNK_101eb2124,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100961700; end: 100961727;  */

void FUN_100961700(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100961728; end: 10096173b;  */

void FUN_100961728(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_1002af2a4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  func_0x000100962700(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  FUN_100962720(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uStack_a0);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 10096173c; end: 1009618db;  */

void FUN_10096173c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_1002af2a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  func_0x000100962700(0);
  func_0x000107c613fc();
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
  func_0x000107c61174(uStack_a0);
  FUN_100962720(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1009618dc; end: 1009618e3;  */

void FUN_1009618dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009618e4; end: 100961937;  */

void FUN_1009618e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100961938; end: 10096194b;  */

void FUN_100961938(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1000a152c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a7360;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85670);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 10096194c; end: 100961da3;  */

void FUN_10096194c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1000a152c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a7360;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85670);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100961da4; end: 10096234b; -[SCNotificationReportingServicesSystemScopedServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100961da4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105313a60;
  puStack_90 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c61160();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127216e0);
  *(undefined **)(param_1 + _DAT_1127216e0) = puVar2;
  func_0x000107c61170(uVar13);
  puVar2 = PTR_PTR_1126b7500;
  func_0x000107c610f4();
  lVar14 = param_1 + _DAT_112721700;
  func_0x000107c61148(lVar14);
  lVar3 = lVar14;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112721708;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c5e12c();
  func_0x000107c61180();
  func_0x000107c46be4();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127216e4);
  *(undefined **)(param_1 + _DAT_1127216e4) = puVar2;
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar14);
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar7;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_105313b1c;
  puStack_c0 = &UNK_110878d20;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c61174(puVar1);
  puStack_b8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_110 = puVar7;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_105313b64;
  puStack_f8 = &UNK_110878d50;
  func_0x000107c6111c(auStack_e0,auStack_80);
  func_0x000107c61174(puVar2);
  puStack_f0 = puVar2;
  func_0x000107c61174(puVar1);
  puStack_e8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127216e8);
  *(undefined **)(param_1 + _DAT_1127216e8) = puVar6;
  func_0x000107c61170(uVar13);
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127216ec);
  *(undefined **)(param_1 + _DAT_1127216ec) = puVar7;
  func_0x000107c61170(uVar13);
  uVar8 = param_1 + _DAT_1127216fc;
  func_0x000107c61148();
  uVar9 = uVar8;
  func_0x000107c3de48();
  func_0x000107c61180();
  uVar10 = uVar9;
  FUN_1008fe838();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  lVar14 = (long)_DAT_1127216f0;
  if ((uVar10 & 1) == 0) {
    lVar4 = param_1 + lVar14;
    func_0x000107c61148(lVar4);
    lVar3 = lVar4;
    func_0x000107c4d818();
    func_0x000107c61180();
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    puStack_128 = &UNK_105313c54;
    puStack_120 = &UNK_110878d80;
    func_0x000107c6111c(auStack_118,auStack_80);
    lVar5 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    lVar4 = param_1 + _DAT_1127216f4;
    func_0x000107c61148(lVar4);
    lVar3 = lVar4;
    func_0x000107c4d7dc();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar11 = lVar5;
    func_0x000107c4d7d4();
    func_0x000107c61180();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    puStack_150 = &UNK_105313dd0;
    puStack_148 = &UNK_110878de0;
    func_0x000107c6111c(auStack_140,auStack_80);
    lVar12 = lVar11;
    func_0x000107c5c320(lVar11);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61120(auStack_140);
    func_0x000107c61120(auStack_118);
  }
  param_1 = param_1 + lVar14;
  func_0x000107c61148(param_1);
  lVar14 = param_1;
  func_0x000107c4d7ec();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_168,auStack_80);
  lVar4 = lVar14;
  func_0x000107c5c320(lVar14);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(param_1);
  puVar7 = PTR_PTR_1126b7508;
  func_0x000107c610f4(PTR_PTR_1126b7508);
  func_0x000107c47ae0();
  func_0x000107c61120(auStack_168);
  func_0x000107c61170(puStack_e8);
  func_0x000107c61170(puStack_f0);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10096234c; end: 10096235b; -[_TtC13SCSystemScope13SCSystemScope notificationProcessingEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096234c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091bb8));
  return;
}



/* Entry: 10096235c; end: 100962363; -[SCNotificationDisplayServices notificationEmitter] */

undefined8 FUN_10096235c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100962364; end: 1009624ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100962364(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126b74d8;
    func_0x000107c610f4(PTR_PTR_1126b74d8);
    lVar1 = param_1 + _DAT_112721694;
    func_0x000107c61148();
    lVar2 = lVar1;
    func_0x000107c4d81c();
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_112721698;
    func_0x000107c61148();
    lVar4 = lVar3;
    func_0x000107c408d0();
    func_0x000107c61180();
    lVar10 = (long)_DAT_11272169c;
    lVar5 = param_1 + lVar10;
    func_0x000107c61148(lVar5);
    lVar6 = lVar5;
    func_0x000107c4d820();
    func_0x000107c61180();
    lVar7 = param_1 + _DAT_1127216a0;
    func_0x000107c61148(lVar7);
    lVar8 = lVar7;
    func_0x000107c4d7f4();
    func_0x000107c61180();
    lVar10 = param_1 + lVar10;
    func_0x000107c61148(lVar10);
    lVar9 = lVar10;
    func_0x000107c3df5c();
    func_0x000107c61180();
    func_0x000107c47b10(puVar11,param_2,lVar2,lVar4,lVar6,lVar8,lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1009624f0; end: 10096262f; -[SCNotificationUIEmitter initWithNotificationProcessingManager:crashLogger:notificationProcessingStepEventEmitter:notificationOSSettingsRetriever:application:] */

undefined1 *
FUN_1009624f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e7860;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100962630; end: 100962637; -[SCNotificationUIEmitter notificationDisplayEventObservable] */

undefined8 FUN_100962630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100962638; end: 1009626ab; -[SCNotificationReportingServices initWithNotificationAcknowledger:] */

undefined1 * FUN_100962638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702d90;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009626ac; end: 10096271f;  */

void FUN_1009626ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100962720; end: 100962ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100962720(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *(long *)(unaff_x20 + 0x18) = param_2;
  puVar1 = &UNK_1104960f8;
  func_0x000107c613fc(&UNK_1104960f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  FUN_1000285a8(0x112dd07d0,&UNK_10d991cb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = &UNK_101ebbcb8;
  FUN_1000bdd8c(&UNK_101ebbcb8,puVar1);
  uVar15 = *(undefined8 *)(param_2 + _DAT_113091b78);
  uVar13 = *(undefined8 *)(param_2 + _DAT_113091bb8);
  func_0x000107c615f0(uVar15);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c4d81c();
  func_0x000107c61180();
  lVar4 = param_4;
  func_0x000107c4d484();
  func_0x000107c61180();
  lVar5 = param_4;
  func_0x000107c4d480();
  func_0x000107c61180();
  uVar6 = param_5;
  func_0x000107c3e5d8();
  func_0x000107c61180();
  uVar7 = param_6;
  func_0x000107c4d794();
  func_0x000107c61180();
  lVar8 = 0;
  FUN_100962b9c();
  uVar12 = 0x68;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar15;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar15);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x18) = puVar1;
  *(undefined8 *)(lVar8 + 0x20) = uVar3;
  *(long *)(lVar8 + 0x28) = lVar4;
  *(undefined8 *)(lVar8 + 0x30) = uVar6;
  uVar14 = *(undefined8 *)(param_1 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(lVar4);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar9 = uVar14;
  func_0x000107c5faec();
  func_0x000107c61170(uVar14);
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  *(undefined8 *)(lVar8 + 0x40) = uVar12;
  *(undefined8 *)(lVar8 + 0x48) = uVar7;
  puVar1 = &UNK_110496120;
  func_0x000107c613fc(&UNK_110496120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  uVar9 = 0x112d382e8;
  FUN_1000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar10 = &UNK_101ebbcbc;
  FUN_1000bdd8c(&UNK_101ebbcbc,puVar1);
  *(undefined **)(lVar8 + 0x50) = puVar10;
  puVar1 = &UNK_110496148;
  func_0x000107c613fc(&UNK_110496148,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  func_0x000107c613fc(uVar9,0x18,7);
  func_0x000107c61174(param_8);
  puVar10 = &UNK_101ebbcc0;
  FUN_1000bdd8c(&UNK_101ebbcc0,puVar1);
  *(undefined **)(lVar8 + 0x58) = puVar10;
  *(undefined **)(lVar8 + 0x60) = puVar2;
  func_0x000107c6157c(puVar2);
  if (lVar5 != 0) {
    lVar11 = lVar5;
    func_0x000107c61174(lVar5);
    FUN_100962bbc();
    func_0x000107c61170(lVar11);
  }
  FUN_100962e10(uVar13);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(puVar2);
  *(long *)(unaff_x20 + 0x10) = lVar8;
  return;
}



/* Entry: 100962ad4; end: 100962af7;  */

void FUN_100962ad4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100962af8; end: 100962b03;  */

void FUN_100962af8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100962b04; end: 100962b8b;  */

void FUN_100962b04(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100962b8c; end: 100962b93; -[SCNativeNotificationHandlingServices nativeNotifHandlerObservable] */

undefined8 FUN_100962b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100962b94; end: 100962b9b; -[SCNotificationReportingServices notificationAcknowledger] */

undefined8 FUN_100962b94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100962b9c; end: 100962bbb;  */

void FUN_100962b9c(void)

{
  func_0x000107c61168(&PTR_PTR_112e38808);
  return;
}



/* Entry: 100962bbc; end: 100962cef;  */

void FUN_100962bbc(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_70;
  ppuVar4 = &puStack_70;
  puStack_50 = &UNK_101eba744;
  puStack_48 = (undefined *)0x0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101ebb738;
  puStack_58 = &UNK_110495e68;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c43494(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = &UNK_110495ea0;
  func_0x000107c613fc(&UNK_110495ea0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puStack_50 = &UNK_101ebb26c;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101ebb740;
  puStack_58 = &UNK_110495eb8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar5 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 100962cf0; end: 100962d13;  */

void FUN_100962cf0(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100962d14; end: 100962d2b;  */

void FUN_100962d14(long param_1,long param_2)

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



/* Entry: 100962d2c; end: 100962d8b; -[SCStoriesSummaryInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100962d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100962d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100962d54) */
/* WARNING: Removing unreachable block (ram,0x000100962d74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100962d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fd64,0);
  return;
}



/* Entry: 100962d8c; end: 100962e0f; -[SCStoriesThumbnailMedia .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100962da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100962dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100962dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100962dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100962dd8) */
/* WARNING: Removing unreachable block (ram,0x000100962dc0) */
/* WARNING: Removing unreachable block (ram,0x000100962da8) */
/* WARNING: Removing unreachable block (ram,0x000100962df0) */

void FUN_100962d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 100962e10; end: 100962f77;  */

void FUN_100962e10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar4 = &UNK_110495ea0;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_110495ea0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_60 = &UNK_101ebb6c0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101ebb73c;
  puStack_68 = &UNK_110495f80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c43494(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c613fc(&UNK_110495ea0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puStack_60 = &UNK_101ebb6c8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101ebb744;
  puStack_68 = &UNK_110495fa8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  uVar6 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_1);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 100962f78; end: 100962f7f;  */

void FUN_100962f78(long param_1,long param_2)

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



/* Entry: 100962f80; end: 100962fdb;  */

void FUN_100962f80(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100962fdc; end: 100962fff;  */

undefined ** FUN_100962fdc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100963000; end: 100963097;  */

void FUN_100963000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11043f180;
  func_0x000107c613fc(&UNK_11043f180,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100963098,puVar1);
  return;
}



/* Entry: 100963098; end: 1009630a3;  */

void FUN_100963098(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_1009630a4();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  uVar3 = uVar1;
  FUN_10096315c(uVar1,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = uVar3;
  param_1[1] = &PTR_DAT_11043f1a8;
  return;
}



/* Entry: 1009630a4; end: 1009630c3;  */

void FUN_1009630a4(void)

{
  func_0x000107c61168(&PTR_PTR_112df9628);
  return;
}



/* Entry: 1009630c4; end: 10096315b;  */

void FUN_1009630c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_1009630a4();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar1 = param_2;
  FUN_10096315c(param_2,param_4);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11043f1a8;
  return;
}



/* Entry: 10096315c; end: 10096326b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096315c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  FUN_100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_113091b58);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  puVar1 = &UNK_11043f208;
  func_0x000107c613fc(&UNK_11043f208,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar3 = &UNK_11043f230;
  func_0x000107c613fc(&UNK_11043f230,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  uVar2 = 8;
  func_0x0001001ca524(8,0,0x58,3,0,0,&UNK_10d9ca740,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10096326c; end: 1009632ef;  */

void FUN_10096326c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009632f0; end: 1009632fb;  */

undefined ** FUN_1009632f0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009632fc; end: 100963387;  */

void FUN_1009632fc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100963388,param_1);
  return;
}



/* Entry: 100963388; end: 10096338f;  */

void FUN_100963388(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb22ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100963390; end: 100963413;  */

void FUN_100963390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101eb22ac,param_2,FUN_100963414,param_2,&UNK_101eb22b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100963414; end: 10096343b;  */

void FUN_100963414(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10096343c; end: 10096344b;  */

void FUN_10096343c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_1002cca90();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  FUN_1009635c8(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  FUN_1009635e8(uStack_58,uVar2,uVar3,uVar4,uStack_78);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 10096344c; end: 10096356b;  */

void FUN_10096344c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_1002cca90();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_1009635c8(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  FUN_1009635e8(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 10096356c; end: 100963573;  */

void FUN_10096356c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x160);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100963574; end: 1009635c7;  */

void FUN_100963574(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x160);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009635c8; end: 1009635e7;  */

void FUN_1009635c8(void)

{
  func_0x000107c61168(&PTR_PTR_112e38998);
  return;
}



/* Entry: 1009635e8; end: 1009638cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009635e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x50) = puVar2;
  plVar1 = (long *)(param_2 + _DAT_113091bd0);
  lVar8 = *plVar1;
  puVar2 = PTR_PTR_1126a9780;
  func_0x000107c61168(PTR_PTR_1126a9780);
  lVar3 = lVar8;
  func_0x000107c6148c(lVar8,puVar2);
  if (lVar3 != 0) {
    func_0x000107c61174(lVar8);
  }
  *(long *)(unaff_x20 + 0x58) = lVar3;
  lVar9 = *(long *)(param_2 + _DAT_113091b90);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar8 = lVar9;
  func_0x000107c6148c(lVar9,puVar2);
  if (lVar8 != 0) {
    func_0x000107c61174(lVar9);
  }
  lVar10 = *(long *)(param_2 + _DAT_113091bb8);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar9 = lVar10;
  func_0x000107c6148c(lVar10,puVar2);
  if (lVar9 != 0) {
    func_0x000107c61174(lVar10);
  }
  lVar10 = _DAT_113091b58;
  uVar11 = *(undefined8 *)(param_2 + _DAT_113091b58);
  lVar4 = lVar9;
  func_0x000107c61174(lVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = lVar8;
  func_0x000107c61174();
  uVar12 = param_4;
  func_0x000107c444a4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar11;
  *(long *)(unaff_x20 + 0x18) = lVar8;
  *(long *)(unaff_x20 + 0x20) = lVar9;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar12;
  uVar12 = *(undefined8 *)(param_2 + lVar10);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar12;
  *(long *)(unaff_x20 + 0x40) = lVar8;
  *(long *)(unaff_x20 + 0x48) = lVar9;
  iVar7 = (int)*(undefined8 *)(param_3 + _DAT_113092298);
  func_0x000107c61174();
  func_0x000107c61174(lVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(uVar12);
  FUN_1008fb738();
  if (iVar7 == 0) {
    plVar1 = (long *)(param_2 + _DAT_113091bc0);
  }
  lVar9 = *plVar1;
  puVar2 = &UNK_1104962b8;
  func_0x000107c613fc(&UNK_1104962b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puStack_70 = &UNK_101ebc678;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101225480;
  puStack_78 = &UNK_1104962f8;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_68;
  func_0x000107c61174(lVar9);
  func_0x000107c61574(puVar2);
  lVar8 = lVar9;
  func_0x000107c5c320(lVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c3e924(lVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 1009638d0; end: 1009638f3;  */

void FUN_1009638d0(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009638f4; end: 10096390b;  */

void FUN_1009638f4(long param_1,long param_2)

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



/* Entry: 10096390c; end: 10096394f;  */

void FUN_10096390c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100963950; end: 100963973;  */

undefined ** FUN_100963950(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100963974; end: 1009639f3;  */

void FUN_100963974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110444d88;
  func_0x000107c613fc(&UNK_110444d88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100963a14,puVar1);
  return;
}



/* Entry: 1009639f4; end: 100963a13;  */

void FUN_1009639f4(void)

{
  func_0x000107c61168(&PTR_PTR_112e01218);
  return;
}



/* Entry: 100963a14; end: 100963ae3;  */

void FUN_100963a14(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1009639f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = 0;
  puVar2 = &UNK_110444e38;
  func_0x000107c613fc(&UNK_110444e38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  uVar3 = 7;
  func_0x0001009548b0(7,1,0,1,0,0,&UNK_10d9d2140,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110444dd8;
  return;
}



/* Entry: 100963ae4; end: 100963aeb;  */

void FUN_100963ae4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100963aec; end: 100963b17;  */

void FUN_100963aec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100963b18; end: 100963b3b;  */

undefined ** FUN_100963b18(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100963b3c; end: 100963bbb;  */

void FUN_100963b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106c6c20;
  func_0x000107c613fc(&UNK_1106c6c20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100963bbc,puVar1);
  return;
}



/* Entry: 100963bbc; end: 100963bc3;  */

void FUN_100963bbc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdc238,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdc238,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c6cb8;
  func_0x000107c613fc(&UNK_1106c6cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a84b58;
  FUN_10058fa64(&UNK_103a84b58,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100963bc4; end: 100963cbb;  */

void FUN_100963bc4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fdc238,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fdc238,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106c6cb8;
  func_0x000107c613fc(&UNK_1106c6cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103a84b58;
  FUN_10058fa64(&UNK_103a84b58,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100963cbc; end: 100963cdf;  */

void FUN_100963cbc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100963ce0; end: 100963ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100963ce0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_1002c43bc();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112fdc248) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112fdc250) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112fdc258) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112fdc260) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 100963cec; end: 100963da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100963cec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1002c43bc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fdc248) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fdc250) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fdc258) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fdc260) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100963da8; end: 100963e0f;  */

void FUN_100963da8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100963e10; end: 100963e37;  */

undefined ** FUN_100963e10(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100963e38; end: 100963e77;  */

void FUN_100963e38(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100963e1c();
  FUN_100082720("PasskeyStoreServicesEntryPointWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100963e78; end: 100963e7f;  */

void FUN_100963e78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101c6c128);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100963e80; end: 100963f03;  */

void FUN_100963e80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101c6c128,param_2,FUN_100963f04,param_2,&UNK_101c6c12c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100963f04; end: 100963f2b;  */

void FUN_100963f04(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100963f2c; end: 100963f3f;  */

void FUN_100963f2c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100292438();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  FUN_100964194();
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = uVar10;
  FUN_1009641b4();
  *(undefined8 *)(lVar2 + 0x10) = uVar11;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(undefined **)(lVar2 + 0x50) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100964194);
  (*pcVar1)();
}



/* Entry: 100963f40; end: 100964193;  */

void FUN_100963f40(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100292438();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_100964194();
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = uVar9;
  FUN_1009641b4();
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined **)(param_2 + 0x50) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100964194);
  (*pcVar1)();
}



/* Entry: 100964194; end: 1009641b3;  */

void FUN_100964194(void)

{
  func_0x000107c61168(&PTR_PTR_112e0e500);
  return;
}



/* Entry: 1009641b4; end: 10096475b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1009641b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long extraout_x8;
  undefined8 uVar11;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lVar2 = param_5;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
  }
  else {
    lVar2 = lVar3;
    lStack_e8 = param_8;
    lStack_e0 = param_4;
    uStack_d8 = param_2;
    uStack_d0 = param_7;
    func_0x000107c4f800();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126a5e38;
    func_0x000107c610f8();
    func_0x000107c49084();
    puVar5 = puVar4;
    func_0x000107c40ab8();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uStack_d8);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lStack_e0);
      func_0x000107c61170(param_5);
      func_0x000107c61170(uStack_d0);
      param_8 = lStack_e8;
    }
    else {
      lVar6 = 0;
      lStack_110 = lVar3;
      puStack_108 = puVar4;
      uStack_100 = param_1;
      uStack_f8 = param_3;
      lStack_f0 = param_5;
      FUN_100964894();
      lVar3 = lVar6;
      func_0x000107c613fc();
      *(undefined **)(lVar3 + 0x10) = puVar5;
      uVar13 = *(undefined8 *)(param_6 + _DAT_113083770);
      lStack_120 = param_6;
      func_0x000107c6157c();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      uVar7 = uStack_d0;
      puStack_118 = puVar5;
      func_0x000107c44fe4();
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126a8d48;
      func_0x000107c610f8();
      func_0x000107c453e4();
      ppuStack_70 = &PTR_DAT_110460d48;
      lVar8 = 0;
      alStack_90[0] = lVar3;
      lStack_78 = lVar6;
      FUN_100964a48();
      lVar9 = lVar8;
      func_0x000107c613fc();
      FUN_1000c6518(alStack_90,lVar6);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      puVar12 = (undefined8 *)((long)&puStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar12);
      uVar11 = *puVar12;
      *(long *)(lVar9 + 0x28) = lVar6;
      *(undefined ***)(lVar9 + 0x30) = &PTR_DAT_110460d48;
      *(long *)(lVar9 + 0x38) = lVar2;
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
      *(undefined1 *)(lVar9 + 0x58) = 0;
      *(undefined8 *)(lVar9 + 0x40) = uVar13;
      *(undefined8 *)(lVar9 + 0x48) = uVar7;
      *(undefined **)(lVar9 + 0x50) = puVar4;
      lStack_128 = lVar2;
      func_0x0001000834e4(alStack_90);
      func_0x000107c61574(lVar3);
      lVar2 = lStack_e0;
      func_0x000107c6157c(lVar9);
      uVar7 = uStack_d8;
      func_0x000107c4ec80();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10096475c);
        (*pcVar1)();
      }
      puVar5 = PTR_PTR_1126aeea8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      ppuStack_70 = &PTR_DAT_110460c98;
      lVar6 = 0;
      alStack_90[0] = lVar9;
      lStack_78 = lVar8;
      func_0x000100964a68();
      func_0x000107c613fc();
      FUN_1000c6518(alStack_90,lVar8);
      puStack_130 = (undefined1 *)&puStack_130;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      puVar12 = (undefined8 *)((long)&puStack_130 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_00 + 0x10))(puVar12);
      auStack_b8[0] = *puVar12;
      ppuStack_98 = &PTR_DAT_110460c98;
      puVar4 = PTR_PTR_1126ae820;
      lStack_a0 = lVar8;
      func_0x000107c610f8();
      param_8 = lStack_128;
      func_0x000107c61174();
      func_0x000107c453e4();
      *(undefined **)(lVar6 + 0x58) = puVar4;
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1000285a8(0x112e0e4b8,&UNK_10d9e8f40);
      func_0x000107c613fc();
      ppuVar10 = &puStack_c0;
      FUN_10006c248();
      *(undefined ***)(lVar6 + 0x60) = ppuVar10;
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      FUN_100964a88(auStack_b8,lVar6 + 0x18);
      *(long *)(lVar6 + 0x40) = param_8;
      *(undefined **)(lVar6 + 0x48) = puVar5;
      *(long *)(lVar6 + 0x50) = lVar3;
      puVar4 = &UNK_110460e58;
      func_0x000107c613fc(&UNK_110460e58,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,lVar6);
      uVar13 = 0;
      FUN_100964acc(0);
      func_0x000107c61174(param_8);
      func_0x000107c61174(uVar7);
      func_0x000107c61174(puVar5);
      func_0x000107c615f0(lVar3);
      func_0x000107c6157c(puVar4);
      FUN_10090569c(FUN_100969558,puVar4,uVar13);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lVar3);
      func_0x000107c61574(puVar4);
      func_0x0001000834e4(auStack_b8);
      func_0x000107c61574(puVar4);
      func_0x0001000834e4(alStack_90);
      puVar4 = PTR_PTR_1126a8d50;
      func_0x000107c610f8(PTR_PTR_1126a8d50);
      func_0x000107c47dc0();
      lVar3 = lStack_e8;
      func_0x000107c42c20(lStack_e8);
      func_0x000107c61574(lVar9);
      func_0x000107c61574(lVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(lStack_110);
      func_0x000107c61170(lStack_120);
      func_0x000107c61170(uStack_100);
      func_0x000107c61170(uStack_d8);
      func_0x000107c61170(uStack_f8);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lStack_f0);
      func_0x000107c61170(uStack_d0);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puStack_118);
      func_0x000107c61170(puStack_108);
    }
  }
  func_0x000107c61170(param_8);
  return unaff_x20;
}



/* Entry: 10096475c; end: 1009647cf; -[SCPasskeyManagementGRPCServiceFactory initWithUnifiedGRPCServices:] */

undefined1 * FUN_10096475c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4ff8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009647d0; end: 100964893; -[SCPasskeyManagementGRPCServiceFactory createPasskeyGRPCService:] */

void FUN_1009647d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c44580(uVar1);
    func_0x000107c61180();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_106b23610;
    puStack_40 = &UNK_110961e90;
    func_0x000107c61174(param_3);
    uVar2 = uVar1;
    lStack_38 = param_3;
    func_0x000107c4c280(uVar1,param_2,&puStack_58);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100964894; end: 1009648b3;  */

void FUN_100964894(void)

{
  func_0x000107c61168(&PTR_PTR_112e0e370);
  return;
}



/* Entry: 1009648b4; end: 1009648bb; -[SCDeviceInfoServices identifierProvider] */

undefined8 FUN_1009648b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


