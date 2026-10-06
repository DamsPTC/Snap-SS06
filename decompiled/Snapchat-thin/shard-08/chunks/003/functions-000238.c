/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060201cc; end: 1060202b7; -[SCAddFriendsQuickAddCarouselSectionDataProvider .cxx_destruct] */

void FUN_1060201cc(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060202b8; end: 106020523; -[SCAddFriendsQuickAddCarouselSectionRegistrator initWithSnapchatter:friendingConfigsServices:snapchatterServices:storiesPreferencesServices:networkImageServices:circumstanceEngineServices:composerServices:composerPeopleBridgeFriendServices:composerCoreUIServices:composerNetworkingBridgeServices:seeAllEnabled:friendProfileScopeLauncher:] */

undefined8 *
FUN_1060202b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126ef1c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xd) = param_13;
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106020524; end: 10602059b; -[SCAddFriendsQuickAddCarouselSectionRegistrator configureImpressionLoggingWithUserBlizzardServices:surfaceSessionId:] */

void FUN_106020524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10602059c; end: 106020747; -[SCAddFriendsQuickAddCarouselSectionRegistrator makeSectionProvider] */

void FUN_10602059c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000100bf119c();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106020748;
    puStack_68 = &UNK_11085a8b8;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afda8;
    _objc_alloc(PTR_PTR_1126afda8);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e38df8;
    FUN_106639650(&PTR____CFConstantStringClassReference_110e38df8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032280(puVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106020748; end: 1060207c7;  */

void FUN_106020748(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060207c8; end: 106020be3; -[SCAddFriendsQuickAddCarouselSectionRegistrator _section] */

void FUN_1060207c8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x68] == '\x01') {
    puVar16 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar3 = PTR_PTR_1126b0c00;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010b0aea8c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    FUN_1060247cc();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x000108f72c64(puVar4,puVar1,puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010be9d180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161980(puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126b1100;
    _objc_alloc();
    puVar16 = puVar3;
    func_0x00010b0aea8c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040();
  }
  _objc_release(puVar4);
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126c7250;
  _objc_alloc();
  func_0x00010c04f820();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar16);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c25aae0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c25aac0();
  uVar17 = (ulong)(lVar7 == 0);
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x000108f48890();
  uVar15 = uVar8;
  func_0x000108fab1fc(uVar8);
  puVar1 = PTR_PTR_1126c7240;
  _objc_alloc(PTR_PTR_1126c7240);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c244ac0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c244b40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1060246ec(uVar17,uVar13,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf46520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049ac0(puVar1);
  _objc_release(uVar13);
  _objc_release(uVar17);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13660(puVar1);
  _objc_release(uVar13);
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar2 = PTR_PTR_1126b4a50;
    _objc_alloc();
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f0c0();
    _objc_release(uVar13);
    func_0x00010bf47340(puVar1);
    _objc_release(puVar2);
  }
  func_0x00010c1f9240(puVar16);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    puVar16 = *(undefined **)(puVar3 + 0x78);
    if (puVar16 == (undefined *)0x0) {
      puVar16 = PTR_PTR_1126c7258;
      _objc_alloc();
      uVar13 = *(undefined8 *)(puVar3 + 8);
      func_0x00010c2923e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03b340();
      uVar15 = *(undefined8 *)(puVar3 + 0x78);
      *(undefined **)(puVar3 + 0x78) = puVar16;
      _objc_release(uVar15);
      _objc_release(uVar13);
      puVar16 = *(undefined **)(puVar3 + 0x78);
    }
    _objc_retain(puVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106020be4; end: 106020c73; -[SCAddFriendsQuickAddCarouselSectionRegistrator _seeAllActionHandler] */

void FUN_106020be4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7258;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b340(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70));
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x78);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106020c74; end: 106020d33; -[SCAddFriendsQuickAddCarouselSectionRegistrator .cxx_destruct] */

void FUN_106020c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106020d34; end: 106020d87; -[SCAddFriendsQuickAddSeeAllViewController initWithValdiView:] */

undefined1 * FUN_106020d34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef1c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106020d88; end: 106020d8f; -[SCAddFriendsQuickAddSeeAllViewController presentationMode] */

undefined8 FUN_106020d88(void)

{
  return 3;
}



/* Entry: 106020d90; end: 106020d97; -[SCAddFriendsQuickAddSeeAllViewController exitMode] */

undefined8 FUN_106020d90(void)

{
  return 1;
}



/* Entry: 106020d98; end: 106020eef; -[SCAddFriendsQuickAddSeeAllActionHandler initWithProfileUserId:composerServices:composerPeopleBridgeFriendServices:composerCoreUIServices:composerNetworkingBridgeServices:friendProfileScopeLauncher:] */

undefined1 *
FUN_106020d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef1d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106020ef0; end: 106021033; -[SCAddFriendsQuickAddSeeAllActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_106020ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = auStack_48;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106021034; end: 10602105f;  */

void FUN_106021034(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106021060; end: 1060215d7; -[SCAddFriendsQuickAddSeeAllActionHandler _presentSeeAllPageOnMainQueue] */

void FUN_106021060(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar1 = *(long *)(param_2 + 0x40);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x40);
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  _objc_release(uVar2);
  lVar1 = param_2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126b3530;
      _objc_alloc();
      func_0x00010c038f40();
      _objc_initWeak(auStack_78,param_2);
      puVar7 = PTR_PTR_1126c7260;
      _objc_alloc_init(PTR_PTR_1126c7260);
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c1b83e0(param_1 * 1000.0,puVar7);
      _objc_release(puVar8);
      lVar9 = *(long *)(param_2 + 0x18);
      func_0x00010c261ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b1538;
      _objc_alloc(PTR_PTR_1126b1538);
      func_0x00010c033420();
      lVar4 = lVar9;
      (**(code **)(lVar9 + 0x10))(lVar9,puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20f980(puVar7);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(puVar8);
      _objc_release(lVar9);
      lVar9 = *(long *)(param_2 + 0x18);
      func_0x00010bfb8b80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b0c98;
      _objc_alloc(PTR_PTR_1126b0c98);
      func_0x00010c0368e0();
      lVar4 = lVar9;
      (**(code **)(lVar9 + 0x10))(lVar9,puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a0100(puVar7);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(puVar8);
      _objc_release(lVar9);
      lVar9 = *(long *)(param_2 + 0x18);
      func_0x00010bfb7ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b0c98;
      _objc_alloc(PTR_PTR_1126b0c98);
      func_0x00010c0368e0();
      lVar4 = lVar9;
      (**(code **)(lVar9 + 0x10))(lVar9,puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f980(puVar7);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(puVar8);
      _objc_release(lVar9);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bfcfa80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a4d00(puVar7);
      _objc_release(uVar2);
      _objc_release(uVar10);
      func_0x00010c1d8620(puVar7);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1060215d8;
      puStack_88 = &UNK_110843540;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c1d2fa0(puVar7);
      _objc_copyWeak(auStack_a8,auStack_78);
      func_0x00010c1d2040(puVar7);
      puVar8 = PTR_PTR_1126c7268;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      *(undefined **)(param_2 + 0x40) = puVar8;
      _objc_release(uVar2);
      puVar8 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar11 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010beff660(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar2;
      func_0x00010c0b7600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166b20(puVar7);
      _objc_release(uVar10);
      _objc_release(uVar2);
      _objc_release(uVar11);
      puVar12 = PTR_PTR_1126c7270;
      _objc_alloc(PTR_PTR_1126c7270);
      func_0x00010c010fc0();
      puVar13 = PTR_PTR_1126c7278;
      _objc_alloc(PTR_PTR_1126c7278);
      func_0x00010c061d40();
      _objc_retain(puVar6);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined **)(param_2 + 0x38) = puVar6;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      _objc_retain(uVar2);
      func_0x00010c0601e0();
      uVar10 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = uVar2;
      _objc_release(uVar10);
      func_0x00010bf0c980(*(undefined8 *)(param_2 + 0x38));
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar6);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1060215d8; end: 10602164b;  */

void FUN_1060215d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f3e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602164c; end: 10602170b; -[SCAddFriendsQuickAddSeeAllActionHandler _dismissSeeAllPage] */

void FUN_10602164c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10602170c; end: 106021763;  */

void FUN_10602170c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x38),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106021764; end: 106021857; -[SCAddFriendsQuickAddSeeAllActionHandler _presentUserProfileWithUserId:] */

void FUN_106021764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106021858; end: 10602193b;  */

void FUN_106021858(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30),param_2,puVar2,param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10602193c; end: 10602194b; -[SCAddFriendsQuickAddSeeAllActionHandler friendProfileDidDismiss:] */

void FUN_10602193c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
    return;
  }
  return;
}



/* Entry: 10602194c; end: 106021963; -[SCAddFriendsQuickAddSeeAllActionHandler presentingViewController] */

void FUN_10602194c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106021964; end: 10602196f; -[SCAddFriendsQuickAddSeeAllActionHandler setPresentingViewController:] */

void FUN_106021964(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106021970; end: 1060219ef; -[SCAddFriendsQuickAddSeeAllActionHandler .cxx_destruct] */

void FUN_106021970(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060219f0; end: 1060219fb; +[SCAddFriendsRecentlyActiveSummarySectionDataProvider announcerIdentifier] */

undefined ** FUN_1060219f0(void)

{
  return &PTR____CFConstantStringClassReference_110e38e78;
}



/* Entry: 1060219fc; end: 106021a03; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider addListener:] */

void FUN_1060219fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106021a04; end: 106021a0b; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider removeListener:] */

void FUN_106021a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106021a0c; end: 106021a7f; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider initWithUserPreferences:] */

undefined1 * FUN_106021a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef1d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106021a80; end: 106021ab7; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider setUpdateQueuePerformer:] */

void FUN_106021a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beaf530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupRecentlyActiveSummaryTextS_1125896f0);
  return;
}



/* Entry: 106021ab8; end: 106021abf; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider dataLoadingStatus] */

undefined8 FUN_106021ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106021ac0; end: 106021acb; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider setSectionDataModel:] */

void FUN_106021ac0(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bea8330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSummaryCardText_112587a70);
  return;
}



/* Entry: 106021acc; end: 106021c37; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider _attributedStringFromSummaryCard:] */

void FUN_106021acc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar5 = puVar4;
    func_0x00010b2d0b5c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar4,param_2,puVar5);
    func_0x00010bf069e0(puVar1,param_2,puVar4);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e38e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar5,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1,param_2,puVar4);
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010bf069e0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010bf069e0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106021c38; end: 106021c8b; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106021c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106021c8c;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106021c8c; end: 106021c97;  */

void FUN_106021c8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerCellViewModelForIndexP_1125576a8,
             param_2);
  return;
}



/* Entry: 106021c98; end: 106021d17; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_106021c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e38e38;
  puVar1 = PTR_PTR_1126c7280;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 106021d18; end: 106021d1f; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_106021d18(void)

{
  return 1;
}



/* Entry: 106021d20; end: 106021d87; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider _containerCellViewModelForIndexPath:] */

void FUN_106021d20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bdd0fe0(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar1,param_2,&PTR____CFConstantStringClassReference_110e38e38,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106021d88; end: 106021e5b; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider _setSummaryCardText] */

void FUN_106021d88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c08fa60();
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar1;
  }
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar5);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x10) = 2;
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106021e5c; end: 10602200b; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider _setupRecentlyActiveSummaryTextSubscription] */

void FUN_106021e5c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10602200c;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar1 = uVar3;
  func_0x00010c0e06e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10602200c; end: 106022063;  */

void FUN_10602200c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106022064; end: 10602207b; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider dataProviderDelegate] */

void FUN_106022064(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602207c; end: 106022087; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider setDataProviderDelegate:] */

void FUN_10602207c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106022088; end: 10602208f; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider sectionDataModel] */

undefined8 FUN_106022088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106022090; end: 106022097; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider updateQueuePerformer] */

undefined8 FUN_106022090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106022098; end: 1060220ff; -[SCAddFriendsRecentlyActiveSummarySectionDataProvider .cxx_destruct] */

void FUN_106022098(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106022100; end: 10602210b; +[SCAddFriendsSectionDataProvider announcerIdentifier] */

undefined ** FUN_106022100(void)

{
  return &PTR____CFConstantStringClassReference_110db82d8;
}



/* Entry: 10602210c; end: 106022113; -[SCAddFriendsSectionDataProvider addListener:] */

void FUN_10602210c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106022114; end: 10602211b; -[SCAddFriendsSectionDataProvider removeListener:] */

void FUN_106022114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10602211c; end: 1060223af; -[SCAddFriendsSectionDataProvider initWithSnapchattersDataFetcher:snapchattersDataTracker:recentlyActiveRecordRepository:imageDownloader:displayTimestamp:viewModelGenerator:displayFilter:snapchatterRanker:placement:circumstanceEngine:avatarFactory:] */

undefined8 *
FUN_10602211c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126ef1e0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_6;
    _objc_release(uVar3);
    puVar1[4] = param_1;
    _objc_retain(param_7);
    uVar3 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar3);
    uVar3 = param_8;
    _objc_retainBlock();
    uVar4 = puVar1[8];
    puVar1[8] = uVar3;
    _objc_release(uVar4);
    uVar3 = param_9;
    _objc_retainBlock();
    uVar4 = puVar1[9];
    puVar1[9] = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar3 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = puVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_11;
    uVar3 = puVar1[3];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1060223b0; end: 1060223b3; -[SCAddFriendsSectionDataProvider reloadSections] */

void FUN_1060223b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 1060223b4; end: 1060223e3; -[SCAddFriendsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1060223b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060223e4; end: 1060223eb; -[SCAddFriendsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_1060223e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060223ec; end: 1060229af; -[SCAddFriendsSectionDataProvider setSectionDataModel:] */

void FUN_1060223ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b16e8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  *(ulong *)(param_1 + 0xa8) = uVar3;
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x60) = uVar3;
  _objc_release(uVar6);
  *(undefined8 *)(param_1 + 0x30) = 1;
  _objc_initWeak(auStack_58,param_1);
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if (((uVar4 & 1) == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 == 0)) {
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = uVar3;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) {
            uVar4 = uVar3;
            func_0x00010c0720c0();
            if ((int)uVar4 == 0) {
              uVar4 = uVar3;
              func_0x00010bf4bb00();
              if ((int)uVar4 == 0) goto LAB_106022704;
              uVar6 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = *(undefined8 *)(param_1 + 0xb0);
              func_0x00010c11de00(uVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = auStack_178;
              _objc_copyWeak(puVar7,auStack_58);
              func_0x00010c0d42a0(uVar6);
            }
            else {
              uVar6 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = *(undefined8 *)(param_1 + 0xb0);
              func_0x00010c11de00(uVar5);
              _objc_retainAutoreleasedReturnValue();
              puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_168 = 0xc2000000;
              uStack_160 = 0x106022b60;
              puStack_158 = &UNK_1108434e0;
              puVar7 = auStack_150;
              _objc_copyWeak(puVar7,auStack_58);
              func_0x00010c11f720(uVar6);
            }
          }
          else {
            uVar6 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_1 + 0xb0);
            func_0x00010c11de00(uVar5);
            _objc_retainAutoreleasedReturnValue();
            puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_140 = 0xc2000000;
            uStack_138 = 0x106022b18;
            puStack_130 = &UNK_1108434e0;
            puVar7 = auStack_128;
            _objc_copyWeak(puVar7,auStack_58);
            func_0x00010bf9f2c0(uVar6);
          }
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0xb0);
          func_0x00010c11de00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_118 = 0xc2000000;
          uStack_110 = 0x106022ad0;
          puStack_108 = &UNK_1108434e0;
          puVar7 = auStack_100;
          _objc_copyWeak(puVar7,auStack_58);
          func_0x00010bfcd4e0(uVar6);
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        uStack_e8 = 0x106022a88;
        puStack_e0 = &UNK_1108434e0;
        puVar7 = auStack_d8;
        _objc_copyWeak(puVar7,auStack_58);
        func_0x00010bf4a460(uVar6);
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x58) == 0xe) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        uStack_98 = 0x1060229f8;
        puStack_90 = &UNK_1108434e0;
        puVar7 = auStack_88;
        _objc_copyWeak(puVar7,auStack_58);
        func_0x00010c2622c0(uVar6);
      }
      else {
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        uStack_c0 = 0x106022a40;
        puStack_b8 = &UNK_1108434e0;
        puVar7 = auStack_b0;
        _objc_copyWeak(puVar7,auStack_58);
        func_0x00010c2622c0(uVar6);
      }
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1060229b0;
    puStack_68 = &UNK_1108434e0;
    puVar7 = auStack_60;
    _objc_copyWeak(puVar7,auStack_58);
    func_0x00010bf00220(uVar6);
  }
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_destroyWeak(puVar7);
LAB_106022704:
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1060229b0; end: 106022bef;  */

void FUN_1060229b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106022bf0; end: 106022d8f; -[SCAddFriendsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106022bf0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf51e00();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar4 = uVar7;
        func_0x00010c0840e0();
        lVar5 = lVar1;
        func_0x00010bf529e0();
        if (lVar5 - 1U < uVar4) goto LAB_106022d24;
        func_0x00010c0840e0(uVar7);
        lVar5 = lVar1;
        func_0x00010c0dfd40(lVar1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,lVar5);
        _objc_release(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
LAB_106022d24:
  _objc_release(param_3);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar2 = PTR_PTR_1126b16d8;
    _objc_opt_class(PTR_PTR_1126b16d8);
    func_0x00010c1d0640(puVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_110e38eb8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106022d90; end: 106022ddb; -[SCAddFriendsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106022d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR_PTR_1126b16d8;
  _objc_opt_class(PTR_PTR_1126b16d8);
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e38eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106022ddc; end: 106022de3; -[SCAddFriendsSectionDataProvider numberOfItemsInSection:] */

void FUN_106022ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106022de4; end: 106022f0f; -[SCAddFriendsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_106022de4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106022f10;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e38eb8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5680();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106022f10; end: 106022f57;  */

void FUN_106022f10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106022f58; end: 106022faf; -[SCAddFriendsSectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_106022f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106022fb0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bc700(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 106022fb0; end: 106022fb7;  */

void FUN_106022fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 106022fb8; end: 106023097; -[SCAddFriendsSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_106022fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106023098;
  puStack_20 = &UNK_110855640;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1060230a0;
  puStack_48 = &UNK_110866ad0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1060230a8;
  puStack_70 = &UNK_110851800;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10602314c;
  puStack_98 = &UNK_110866b00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106023154;
  puStack_c0 = &UNK_110851800;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc6c0(param_3,param_2,&puStack_38,0,&puStack_60,&puStack_88,&puStack_b0,0,
                      &puStack_d8,0,0);
  return;
}



/* Entry: 106023098; end: 1060230a7;  */

void FUN_106023098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 1060230a8; end: 10602314b;  */

void FUN_1060230a8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b16e8;
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar4 != 0) {
    func_0x00010bedf2a0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10602314c; end: 10602315b;  */

void FUN_10602314c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 10602315c; end: 1060231cf; -[SCAddFriendsSectionDataProvider didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_10602315c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0a6e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf0a760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_1060231bc;
  }
  else {
    _objc_release();
  }
  func_0x00010bedf2a0(param_1);
LAB_1060231bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060231d0; end: 1060232ef; -[SCAddFriendsSectionDataProvider didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_1060231d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b16e8;
  uVar4 = *(ulong *)(param_1 + 0xa8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar4 != 0) {
    func_0x00010c0bdc80(param_3);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060232f0; end: 106023307;  */

void FUN_1060232f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 106023308; end: 10602336f; -[SCAddFriendsSectionDataProvider didEndSnapchattersContactDataRequest:withResult:] */

void FUN_106023308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106023370;
  puStack_20 = &UNK_1108484c8;
  uStack_18 = param_1;
  func_0x00010c0c0860(param_4,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110908a78,
                      &PTR___NSConcreteGlobalBlock_110908a98);
  return;
}



/* Entry: 106023370; end: 106023447;  */

void FUN_106023370(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b16e8;
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xa8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((((uVar4 & 1) != 0) || (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) != 0)) ||
     ((*(long *)(*(long *)(param_1 + 0x20) + 0x58) == 0xe &&
      (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 != 0)))) {
    func_0x00010bedf2a0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106023448; end: 10602344f;  */

void FUN_106023448(void)

{
  return;
}



/* Entry: 106023450; end: 106023453; -[SCAddFriendsSectionDataProvider decorationDidBecomeAvailable] */

void FUN_106023450(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModelWithPerfo_112595650);
  return;
}



/* Entry: 106023454; end: 10602367b; -[SCAddFriendsSectionDataProvider _containerCellViewModelForSnapchatter:index:snapchattersCount:] */

void FUN_106023454(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_3);
  func_0x00010bfed060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b16e8;
  uVar9 = *(ulong *)(param_1 + 0xa8);
  _objc_retain(uVar9);
  _objc_opt_class(puVar3);
  uVar4 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar3);
  uVar1 = uVar9;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  lVar5 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfeb7a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar8);
  _objc_release(lVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf1f3c0();
  _objc_release(uVar10);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar4 = uVar1;
  func_0x00010c156900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 1;
  func_0x00010bc9107c(1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,param_3,puVar2,uVar4,lVar6 != 0,uVar8,param_5,0,(char)uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010bffd260(puVar3);
  _objc_release(lVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10602367c; end: 106023723; -[SCAddFriendsSectionDataProvider _updateSectionDataModelWithPerformer] */

void FUN_10602367c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106023724; end: 10602374f;  */

void FUN_106023724(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106023750; end: 106023787; -[SCAddFriendsSectionDataProvider _updateSectionDataModel] */

void FUN_106023750(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf51e00(uVar1);
  func_0x00010c1f9220(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106023788; end: 10602381f; -[SCAddFriendsSectionDataProvider _configureRecipientCollectionViewCell:] */

void FUN_106023788(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b16d8;
  _objc_opt_class(PTR_PTR_1126b16d8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106023820; end: 106023907; -[SCAddFriendsSectionDataProvider _rankAndSetSnapchatters:] */

void FUN_106023820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x00010bea7bc0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c11f6a0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106023908; end: 10602394f;  */

void FUN_106023908(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7bc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106023950; end: 1060239e7; -[SCAddFriendsSectionDataProvider _promoteUnviewedAndSetSnapchatters:] */

void FUN_106023950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110908ab8);
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_110908ad8);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf09f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7bc0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060239e8; end: 106023a67;  */

undefined8 FUN_1060239e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c262240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c083540();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106023a68; end: 106023a77; -[SCAddFriendsSectionDataProvider _setContactSnapchatters:] */

void FUN_106023a68(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea7bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSnapchatters__112587898);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec8270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToRecentlyActiveRecord_11258fa40);
  return;
}



/* Entry: 106023a78; end: 106023c73; -[SCAddFriendsSectionDataProvider _setSnapchatters:] */

void FUN_106023a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  
  puVar2 = PTR_PTR_1126b16e8;
  uVar8 = *(ulong *)(param_1 + 0xa8);
  _objc_retain(uVar8);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar1 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106023c74;
  puStack_68 = &UNK_1108d5990;
  lStack_60 = param_1;
  _objc_retain(uVar1);
  uVar4 = param_3;
  uStack_58 = uVar1;
  func_0x0001006372a4(param_3,&puStack_80);
  _objc_release(param_3);
  _objc_initWeak(auStack_88,param_1);
  _objc_retain();
  lVar5 = param_1;
  func_0x00010be8e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_b8 = puVar2;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106023cf8;
  puStack_a0 = &UNK_110856648;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(uVar4);
  lVar6 = lVar5;
  uStack_98 = uVar4;
  func_0x00010bd86420(lVar5,&puStack_b8);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar6;
  _objc_release(uVar7);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xb8));
  uVar7 = 1;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar7 = 2;
  }
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  param_1 = param_1 + 0xa0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 106023c74; end: 106023cf7;  */

long FUN_106023c74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  func_0x00010c11da20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(uVar3,lVar2,param_2,uVar1);
  _objc_release(param_2);
  _objc_release(uVar1);
  return lVar2;
}



/* Entry: 106023cf8; end: 106023d73;  */

void FUN_106023cf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar1;
  func_0x00010bde7540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106023d74; end: 106023f0b; -[SCAddFriendsSectionDataProvider _reorderSnapchattersIfNeeded:] */

void FUN_106023d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x60);
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ea9038);
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x88);
      func_0x00010c086f00(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110908af8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf529e0();
      if (uVar1 != 0) {
        uVar1 = 0;
        do {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c0dfd40(uVar2,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3,param_2,puVar4,uVar5);
          _objc_release(uVar5);
          _objc_release(puVar4);
          uVar1 = uVar1 + 1;
          uVar5 = uVar2;
          func_0x00010bf529e0();
        } while (uVar1 < uVar5);
      }
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106023f98;
      puStack_60 = &UNK_1108ed640;
      puStack_58 = puVar3;
      _objc_retain(puVar3);
      func_0x00010c246ca0(param_3,param_2,&puStack_78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_58);
      _objc_release(puVar3);
      _objc_release(uVar2);
      goto LAB_106023ee4;
    }
  }
  _objc_retain(param_3);
LAB_106023ee4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106023f0c; end: 106023f97;  */

long FUN_106023f0c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c067fc0();
  lVar1 = param_3;
  func_0x00010c067fc0();
  if (lVar2 < lVar1) {
    lVar2 = 1;
  }
  else {
    lVar2 = param_2;
    func_0x00010c067fc0(param_2);
    lVar1 = param_3;
    func_0x00010c067fc0(param_3);
    lVar2 = -(ulong)(lVar1 < lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 106023f98; end: 10602408b;  */

ulong FUN_106023f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((uVar4 == 0) || (lVar3 == 0)) {
    uVar2 = (ulong)(lVar3 != 0);
    if (uVar4 != 0) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = uVar4;
    func_0x00010bf433a0(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(uVar4);
  return uVar2;
}



/* Entry: 10602408c; end: 1060241d7; -[SCAddFriendsSectionDataProvider _subscribeToRecentlyActiveRecords] */

void FUN_10602408c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4a440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar3 = auStack_48;
  _objc_initWeak(puVar3,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1060241d8; end: 10602421f;  */

void FUN_1060241d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106024220; end: 1060243eb; -[SCAddFriendsSectionDataProvider _updateRecentlyActiveRecords:] */

void FUN_106024220(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0x88);
  _objc_retain(puVar5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar6 = &uStack_130;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
        uVar4 = uVar7;
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c07be00(uVar7);
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        _objc_release(uVar4);
        if (puVar2 != puVar3) {
          lVar8 = param_1;
          puVar6 = param_3;
          func_0x00010bde93c0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x88);
          *(long *)(param_1 + 0x88) = lVar8;
          _objc_release(uVar4);
          func_0x00010bedf2a0(param_1);
          goto LAB_106024398;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
      } while (puVar1 != puVar6);
      puVar6 = &uStack_130;
      puVar1 = param_3;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
  }
LAB_106024398:
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010050471c(puVar6,&PTR___NSConcreteGlobalBlock_110908b18,
                        &PTR___NSConcreteGlobalBlock_110908b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 1060243ec; end: 106024413; -[SCAddFriendsSectionDataProvider _convertRecentlyActiveRecordsToUserIdToStatusDict:] */

void FUN_1060243ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_110908b18,
                      &PTR___NSConcreteGlobalBlock_110908b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106024414; end: 10602441b;  */

void FUN_106024414(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10602441c; end: 10602444b;  */

void FUN_10602441c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07be00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 10602444c; end: 10602456f; -[SCAddFriendsSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10602444c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if (param_3 != 0) {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c142240(uVar1);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b15e0;
    _objc_alloc(PTR_PTR_1126b15e0);
    func_0x00010c043720();
    puVar5 = PTR_PTR_1126b1560;
    func_0x00010c2a6080(PTR_PTR_1126b1560);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68));
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106024570; end: 106024577; -[SCAddFriendsSectionDataProvider pageEventObservable] */

undefined8 FUN_106024570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106024578; end: 1060245a7; -[SCAddFriendsSectionDataProvider setPageEventObservable:] */

void FUN_106024578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060245a8; end: 1060245bf; -[SCAddFriendsSectionDataProvider dataProviderDelegate] */

void FUN_1060245a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060245c0; end: 1060245cb; -[SCAddFriendsSectionDataProvider setDataProviderDelegate:] */

void FUN_1060245c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 1060245cc; end: 1060245d3; -[SCAddFriendsSectionDataProvider sectionDataModel] */

undefined8 FUN_1060245cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}


