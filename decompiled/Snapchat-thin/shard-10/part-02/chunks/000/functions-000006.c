/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079be040; end: 1079be1a3; -[SCPremiumContentListViewCollectionViewCell gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1079be040(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 != *(long *)(param_1 + _DAT_112766fd4)) {
    return 1;
  }
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  _objc_release(param_3);
  _objc_release(lVar2);
  uVar1 = (uint)*(undefined8 *)(param_1 + _DAT_112766fec);
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  puVar3 = PTR_PTR_1126d5aa8;
  if (uVar1 != 0) {
    uVar6 = *(ulong *)(param_1 + _DAT_11276700c);
    _objc_retain(uVar6);
    _objc_opt_class(puVar3);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar5 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar4 = uVar5;
    func_0x00010c1171a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c117180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar5 != 0) {
      func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_112767010));
    }
    _objc_release(uVar5);
  }
  return uVar1 ^ 1;
}



/* Entry: 1079be1a4; end: 1079be1d7; -[SCPremiumContentListViewCollectionViewCell _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be1a4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112767018) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112767010),
               PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
               *(long *)(param_1 + _DAT_112767018),*(undefined8 *)(param_1 + _DAT_112766fe4));
    return;
  }
  return;
}



/* Entry: 1079be1d8; end: 1079be283; -[SCPremiumContentListViewCollectionViewCell _handleLongPressAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be1d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if ((lVar1 == 2) || (lVar1 = param_3, func_0x00010c252440(), lVar1 == 1)) {
    func_0x00010c14c8a0(param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112767010);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276701c);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079be284; end: 1079be3e3; -[SCPremiumContentListViewCollectionViewCell didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_112766fd0));
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1079be3e4;
    puStack_60 = &UNK_110850cf8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079be3e4; end: 1079be41b;  */

void FUN_1079be3e4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079be41c; end: 1079be553; -[SCPremiumContentListViewCollectionViewCell _calculateCellFrameAndDispatchEventIfNecessary:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be41c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf20c00(param_1);
  func_0x00010bf51460(param_1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14c760();
  iVar1 = (int)puVar3;
  _CGRectIntersectsRect();
  if (iVar1 == 0) {
    uVar4 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f19eb8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(puVar2);
    if ((int)uVar5 == 0) goto LAB_1079be520;
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_112766fd0),param_2,param_3,param_4,param_5);
LAB_1079be520:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079be554; end: 1079be5f3; -[SCPremiumContentListViewCollectionViewCell viewToAnimateOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be554(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3,param_2,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112766fec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  if (iVar1 != 0) {
    param_1 = *(long *)(param_1 + lVar2);
  }
  _objc_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079be5f4; end: 1079be603; -[SCPremiumContentListViewCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079be5f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767010);
}



/* Entry: 1079be604; end: 1079be643; -[SCPremiumContentListViewCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112767010;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079be644; end: 1079be653; -[SCPremiumContentListViewCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079be644(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276700c);
}



/* Entry: 1079be654; end: 1079be66b; -[SCPremiumContentListViewCollectionViewCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079be654(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766fcc);
}



/* Entry: 1079be66c; end: 1079be683; -[SCPremiumContentListViewCollectionViewCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112766fcc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1079be684; end: 1079be693; -[SCPremiumContentListViewCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079be684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767000);
}



/* Entry: 1079be694; end: 1079be6a3; -[SCPremiumContentListViewCollectionViewCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079be694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767004);
}



/* Entry: 1079be6a4; end: 1079be803; -[SCPremiumContentListViewCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be6a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767004,0);
  _objc_storeStrong(param_1 + _DAT_112767000,0);
  _objc_storeStrong(param_1 + _DAT_11276700c,0);
  _objc_storeStrong(param_1 + _DAT_112767010,0);
  _objc_storeStrong(param_1 + _DAT_112767008,0);
  _objc_storeStrong(param_1 + _DAT_112766fd4,0);
  _objc_storeStrong(param_1 + _DAT_112766fd0,0);
  _objc_storeStrong(param_1 + _DAT_112767014,0);
  _objc_storeStrong(param_1 + _DAT_11276701c,0);
  _objc_storeStrong(param_1 + _DAT_112767018,0);
  _objc_storeStrong(param_1 + _DAT_112766ffc,0);
  _objc_storeStrong(param_1 + _DAT_112766ff8,0);
  _objc_storeStrong(param_1 + _DAT_112766ff4,0);
  _objc_storeStrong(param_1 + _DAT_112766fe8,0);
  _objc_storeStrong(param_1 + _DAT_112766fec,0);
  _objc_storeStrong(param_1 + _DAT_112766ff0,0);
  _objc_storeStrong(param_1 + _DAT_112766fe4,0);
  _objc_storeStrong(param_1 + _DAT_112766fdc,0);
  _objc_storeStrong(param_1 + _DAT_112766fe0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112766fd8,0);
  return;
}



/* Entry: 1079be804; end: 1079be80f; +[SCDiscoverFeedWhiteSpacePublisherStoryCell announcerIdentifier] */

undefined ** FUN_1079be804(void)

{
  return &PTR____CFConstantStringClassReference_110ea8138;
}



/* Entry: 1079be810; end: 1079be81f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767020),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079be820; end: 1079be82f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767020),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079be830; end: 1079be83f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767020),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 1079be840; end: 1079be93f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be840(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5a50;
  _objc_opt_class(PTR_PTR_1126d5a50);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_112767024;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_1079be920;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee9820(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_1079be920:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079be940; end: 1079bea9f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079be940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar3;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_112767028);
  uVar3 = param_5;
  uVar6 = param_1;
  uVar9 = param_2;
  uVar11 = param_3;
  uVar13 = param_4;
  func_0x00010bfb68e0();
  iVar2 = (int)uVar3;
  uVar8 = *puVar1;
  uVar10 = puVar1[1];
  uVar12 = puVar1[2];
  uVar14 = puVar1[3];
  _CGRectIntersectsRect(uVar8,uVar10,uVar12,uVar14,uVar6,uVar9,uVar11,uVar13);
  uVar3 = param_5;
  func_0x00010bfb68e0();
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar8,uVar10,uVar12,uVar14);
  puVar4 = PTR_PTR_1126d5a50;
  if ((iVar2 != 0) && ((uVar3 & 1) == 0)) {
    uVar6 = *(undefined8 *)(param_5 + (long)_DAT_11276702c);
    uVar7 = *(ulong *)(param_5 + (long)_DAT_112767024);
    _objc_retain(uVar7);
    _objc_opt_class(puVar4);
    uVar5 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar4);
    uVar3 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar7);
    uVar5 = uVar3;
    func_0x00010c152160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(uVar5);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1079beaa0; end: 1079bef0b; -[SCDiscoverFeedWhiteSpacePublisherStoryCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1079beaa0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f90e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767020);
    *(undefined **)((long)puVar1 + (long)_DAT_112767020) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112767030;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release();
    FUN_1079bff40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112767034;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126d5ae8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767038);
    *(undefined **)((long)puVar1 + (long)_DAT_112767038) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126d5af0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276703c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276703c) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126d5ad8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767040);
    *(undefined **)((long)puVar1 + (long)_DAT_112767040) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767044);
    *(undefined **)((long)puVar1 + (long)_DAT_112767044) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767048);
    *(undefined **)((long)puVar1 + (long)_DAT_112767048) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276704c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276704c) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767050);
    *(undefined **)((long)puVar1 + (long)_DAT_112767050) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767054);
    *(undefined **)((long)puVar1 + (long)_DAT_112767054) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767058);
    *(undefined **)((long)puVar1 + (long)_DAT_112767058) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276705c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276705c) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767060);
    *(undefined **)((long)puVar1 + (long)_DAT_112767060) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 1079bef0c; end: 1079bef43;  */

void FUN_1079bef0c(void)

{
  _objc_opt_new(PTR_PTR_1126d5af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079bef44; end: 1079bef53; -[SCDiscoverFeedWhiteSpacePublisherStoryCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bef44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767038),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 1079bef54; end: 1079befbb; -[SCDiscoverFeedWhiteSpacePublisherStoryCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bef54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112767064);
  *(undefined8 *)(param_1 + _DAT_112767064) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1aa2c0(*(undefined8 *)(param_1 + _DAT_112767040),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079befbc; end: 1079bf03f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079befbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_112767058),param_2,param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11276705c),param_2,param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_112767054),param_2,param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_112767060),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276702c);
  *(undefined8 *)(param_1 + _DAT_11276702c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079bf040; end: 1079bf0c3; -[SCDiscoverFeedWhiteSpacePublisherStoryCell setGestureCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bf040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_112767058),param_2,param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_11276705c),param_2,param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_112767054),param_2,param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_112767060),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112767068);
  *(undefined8 *)(param_1 + _DAT_112767068) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079bf0c4; end: 1079bf4c3; -[SCDiscoverFeedWhiteSpacePublisherStoryCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bf0c4(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f90e0;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d5a50;
  uVar5 = *(ulong *)(param_5 + _DAT_112767024);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  func_0x00010bf20c00(param_5);
  uVar4 = *(undefined8 *)(param_5 + _DAT_112767050);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126d5af0;
  uVar3 = uVar1;
  func_0x00010bfe04c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  dVar10 = 1.79769313486232e+308;
  func_0x00010c23d6e0(param_3,0x7fefffffffffffff,puVar2);
  dVar11 = dVar10;
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetMinX();
  dVar9 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetMinY();
  dVar8 = dVar9;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c11b680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  func_0x00010b8162e0(param_3,dVar9,dVar8,dVar11);
  _objc_release(uVar3);
  dVar15 = dVar11 * 0.5;
  func_0x00010c19f0e0(param_3,dVar9,dVar8,dVar15,*(undefined8 *)(param_5 + _DAT_112767044));
  dVar12 = dVar9 + dVar15;
  dVar14 = param_3;
  func_0x00010c19f0e0(param_3,dVar12,dVar8,dVar15,*(undefined8 *)(param_5 + _DAT_112767048));
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c11b680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  lVar6 = (long)_DAT_112767030;
  dVar15 = 0.0;
  dVar13 = 0.0;
  func_0x00010c1739e0(0,0,dVar14,dVar10 + dVar12,*(undefined8 *)(param_5 + lVar6));
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c11b680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  func_0x00010b8165a4(dVar15 * 0.5,(dVar10 + dVar13) * 0.5);
  func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(uVar3);
  func_0x00010c19f0e0(param_3,dVar9,dVar8,dVar11,*(undefined8 *)(param_5 + _DAT_112767034));
  lVar7 = (long)_DAT_112767038;
  func_0x00010c19f0e0(param_3,dVar9,dVar8,dVar11,*(undefined8 *)(param_5 + lVar7));
  uVar4 = *(undefined8 *)(param_5 + _DAT_11276704c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_3,dVar9,dVar8,dVar11);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  dVar9 = param_3;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  _CGRectGetMaxY();
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(param_3,dVar9,*(undefined8 *)(param_5 + _DAT_11276703c));
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  lVar7 = (long)_DAT_112767040;
  dVar8 = 0.0;
  dVar14 = 0.0;
  func_0x00010c1739e0(0,0,param_3,dVar9,*(undefined8 *)(param_5 + lVar7));
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetMinX();
  dVar9 = dVar8;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar9 = dVar9 * 0.5;
  dVar8 = dVar8 + dVar9;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  _CGRectGetMaxY();
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  func_0x00010b8165a4(dVar8,dVar9 + dVar14 * 0.5);
  func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar7));
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 1079bf4c4; end: 1079bf4cb; -[SCDiscoverFeedWhiteSpacePublisherStoryCell shouldShowBackgroundView] */

undefined8 FUN_1079bf4c4(void)

{
  return 0;
}



/* Entry: 1079bf4cc; end: 1079bf66b; +[SCDiscoverFeedWhiteSpacePublisherStoryCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1079bf4cc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126d5a50;
  _objc_opt_class(PTR_PTR_1126d5a50);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  puVar3 = PTR_PTR_1126d5af0;
  bVar2 = false;
  if ((*(double *)PTR__CGSizeZero_110347620 == param_1) &&
     (bVar2 = false, !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)) && !NAN(param_2))) {
    bVar2 = *(double *)(PTR__CGSizeZero_110347620 + 8) == param_2;
  }
  if (bVar2) {
    uVar4 = uVar1;
    func_0x00010bfe04c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bfe04c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3660();
    func_0x00010c23d6e0(puVar3);
    dVar7 = param_2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c11b680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106e40();
    uVar5 = uVar1;
    func_0x00010c11b680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106e40();
    param_2 = param_2 + dVar7;
    uVar6 = uVar1;
    func_0x00010c1171a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106e40();
    param_2 = param_2 + dVar7;
    dVar7 = param_2 + 0.0;
    func_0x00010b816218();
    param_1 = (double)(long)(param_1 * param_2) / param_2;
    func_0x00010b816218();
    param_2 = (double)(long)(param_2 * dVar7) / param_2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c106e40(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1079bf66c; end: 1079bf673; -[SCDiscoverFeedWhiteSpacePublisherStoryCell viewToAnimateOnTap:] */

undefined8 FUN_1079bf66c(void)

{
  return 0;
}



/* Entry: 1079bf674; end: 1079bf6a3; -[SCDiscoverFeedWhiteSpacePublisherStoryCell operaBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bf674(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112767034);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079bf6a4; end: 1079bfcab; -[SCDiscoverFeedWhiteSpacePublisherStoryCell _viewModelDidUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bf6a4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_1126d5a50;
  uVar6 = *(ulong *)(param_1 + _DAT_112767024);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010c11b680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112767038;
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bfe04c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11276703c));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112767040;
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c26e4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_112767058;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c26dfe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_11276705c;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c26d7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_112767054;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c117180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_112767060;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2607e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    lVar9 = (long)_DAT_112767050;
    lVar8 = *(long *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar8 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112767034);
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar7);
      _objc_release(uVar5);
    }
  }
  uVar3 = uVar1;
  func_0x00010c105540();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    lVar9 = (long)_DAT_11276704c;
    lVar8 = *(long *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar8 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112767034);
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar7);
      _objc_release(uVar5);
    }
  }
  uVar3 = uVar1;
  func_0x00010c2607e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112767050;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2607e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c105540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11276704c;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c105540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar1;
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010beecf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf13d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079bfcac; end: 1079bfd6f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell _handleDebugGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bfcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d5a50;
  uVar4 = *(ulong *)(param_1 + _DAT_112767024);
  _objc_retain(uVar4);
  _objc_retain(param_3);
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
  func_0x00010bf65fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11276702c));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1079bfd70; end: 1079bfd7f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell gestureCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079bfd70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767068);
}



/* Entry: 1079bfd80; end: 1079bfd8f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079bfd80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276702c);
}



/* Entry: 1079bfd90; end: 1079bfd9f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079bfd90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767024);
}



/* Entry: 1079bfda0; end: 1079bfdb7; -[SCDiscoverFeedWhiteSpacePublisherStoryCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079bfda0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767028);
}



/* Entry: 1079bfdb8; end: 1079bfdcf; -[SCDiscoverFeedWhiteSpacePublisherStoryCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bfdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112767028);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1079bfdd0; end: 1079bfddf; -[SCDiscoverFeedWhiteSpacePublisherStoryCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079bfdd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276706c);
}



/* Entry: 1079bfde0; end: 1079bfdef; -[SCDiscoverFeedWhiteSpacePublisherStoryCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079bfde0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767064);
}



/* Entry: 1079bfdf0; end: 1079bff3f; -[SCDiscoverFeedWhiteSpacePublisherStoryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079bfdf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767064,0);
  _objc_storeStrong(param_1 + _DAT_11276706c,0);
  _objc_storeStrong(param_1 + _DAT_112767024,0);
  _objc_storeStrong(param_1 + _DAT_11276702c,0);
  _objc_storeStrong(param_1 + _DAT_112767068,0);
  _objc_storeStrong(param_1 + _DAT_112767020,0);
  _objc_storeStrong(param_1 + _DAT_112767060,0);
  _objc_storeStrong(param_1 + _DAT_112767054,0);
  _objc_storeStrong(param_1 + _DAT_11276705c,0);
  _objc_storeStrong(param_1 + _DAT_112767058,0);
  _objc_storeStrong(param_1 + _DAT_112767048,0);
  _objc_storeStrong(param_1 + _DAT_112767044,0);
  _objc_storeStrong(param_1 + _DAT_112767050,0);
  _objc_storeStrong(param_1 + _DAT_11276704c,0);
  _objc_storeStrong(param_1 + _DAT_112767040,0);
  _objc_storeStrong(param_1 + _DAT_11276703c,0);
  _objc_storeStrong(param_1 + _DAT_112767038,0);
  _objc_storeStrong(param_1 + _DAT_112767034,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767030,0);
  return;
}



/* Entry: 1079bff40; end: 1079c003f;  */

void FUN_1079bff40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c17d4c0(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079c0040; end: 1079c01bf;  */

undefined ** FUN_1079c0040(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR_PTR_1126b1198;
  _objc_opt_new(PTR_PTR_1126b1198);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar1;
  func_0x00010bfcd9c0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar8 = ppuVar1;
  func_0x00010bfcd9c0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(ppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110ea8198;
}



/* Entry: 1079c01c0; end: 1079c01cb; +[SCDiscoverFeedWhiteSpaceShowCell announcerIdentifier] */

undefined ** FUN_1079c01c0(void)

{
  return &PTR____CFConstantStringClassReference_110ea8198;
}



/* Entry: 1079c01cc; end: 1079c01db; -[SCDiscoverFeedWhiteSpaceShowCell addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c01cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767070),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079c01dc; end: 1079c01eb; -[SCDiscoverFeedWhiteSpaceShowCell removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c01dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767070),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079c01ec; end: 1079c01fb; -[SCDiscoverFeedWhiteSpaceShowCell didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c01ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767070),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 1079c01fc; end: 1079c02fb; -[SCDiscoverFeedWhiteSpaceShowCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c01fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5a68;
  _objc_opt_class(PTR_PTR_1126d5a68);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_112767074;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_1079c02dc;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee9820(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_1079c02dc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079c02fc; end: 1079c045b; -[SCDiscoverFeedWhiteSpaceShowCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c02fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar3;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_112767078);
  uVar3 = param_5;
  uVar6 = param_1;
  uVar9 = param_2;
  uVar11 = param_3;
  uVar13 = param_4;
  func_0x00010bfb68e0();
  iVar2 = (int)uVar3;
  uVar8 = *puVar1;
  uVar10 = puVar1[1];
  uVar12 = puVar1[2];
  uVar14 = puVar1[3];
  _CGRectIntersectsRect(uVar8,uVar10,uVar12,uVar14,uVar6,uVar9,uVar11,uVar13);
  uVar3 = param_5;
  func_0x00010bfb68e0();
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar8,uVar10,uVar12,uVar14);
  puVar4 = PTR_PTR_1126d5a68;
  if ((iVar2 != 0) && ((uVar3 & 1) == 0)) {
    uVar6 = *(undefined8 *)(param_5 + (long)_DAT_11276707c);
    uVar7 = *(ulong *)(param_5 + (long)_DAT_112767074);
    _objc_retain(uVar7);
    _objc_opt_class(puVar4);
    uVar5 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar4);
    uVar3 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar7);
    uVar5 = uVar3;
    func_0x00010c152160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(uVar5);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1079c045c; end: 1079c08c7; -[SCDiscoverFeedWhiteSpaceShowCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1079c045c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f90e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767070);
    *(undefined **)((long)puVar1 + (long)_DAT_112767070) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112767080;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release();
    FUN_1079bff40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112767084;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126d5b10;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767088);
    *(undefined **)((long)puVar1 + (long)_DAT_112767088) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126d5af0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276708c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276708c) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126d5ad8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767090);
    *(undefined **)((long)puVar1 + (long)_DAT_112767090) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767094);
    *(undefined **)((long)puVar1 + (long)_DAT_112767094) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767098);
    *(undefined **)((long)puVar1 + (long)_DAT_112767098) = puVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276709c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276709c) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127670a0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127670a0) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127670a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127670a4) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127670a8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127670a8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127670ac);
    *(undefined **)((long)puVar1 + (long)_DAT_1127670ac) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d5b08;
    _objc_alloc();
    puVar3 = puVar1;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054a60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127670b0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127670b0) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 1079c08c8; end: 1079c08ff;  */

void FUN_1079c08c8(void)

{
  _objc_opt_new(PTR_PTR_1126d5af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079c0900; end: 1079c090f; -[SCDiscoverFeedWhiteSpaceShowCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c0900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767088),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 1079c0910; end: 1079c0977; -[SCDiscoverFeedWhiteSpaceShowCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c0910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127670b4);
  *(undefined8 *)(param_1 + _DAT_1127670b4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1aa2c0(*(undefined8 *)(param_1 + _DAT_112767090),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079c0978; end: 1079c09fb; -[SCDiscoverFeedWhiteSpaceShowCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c0978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_1127670a8),param_2,param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_1127670ac),param_2,param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_1127670a4),param_2,param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_1127670b0),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276707c);
  *(undefined8 *)(param_1 + _DAT_11276707c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079c09fc; end: 1079c0a7f; -[SCDiscoverFeedWhiteSpaceShowCell setGestureCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c09fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_1127670a8),param_2,param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_1127670ac),param_2,param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_1127670a4),param_2,param_3);
  func_0x00010c1a2e80(*(undefined8 *)(param_1 + _DAT_1127670b0),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127670b8);
  *(undefined8 *)(param_1 + _DAT_1127670b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079c0a80; end: 1079c0e83; -[SCDiscoverFeedWhiteSpaceShowCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c0a80(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f90e8;
  lStack_90 = param_4;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d5a68;
  uVar5 = *(ulong *)(param_4 + _DAT_112767074);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126d5af0;
  uVar3 = uVar1;
  func_0x00010bfe04c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_4);
  dVar11 = 1.79769313486232e+308;
  func_0x00010c23d6e0(param_3,0x7fefffffffffffff,puVar2);
  dVar14 = dVar11;
  _objc_release(uVar3);
  func_0x00010bf20c00(param_4);
  _CGRectGetMinX();
  dVar8 = param_3;
  func_0x00010bf20c00(param_4);
  _CGRectGetMinY();
  dVar10 = dVar8;
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c23a780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  func_0x00010b8162e0(param_3,dVar8,dVar10,dVar14);
  _objc_release(uVar3);
  dVar15 = dVar14 * 0.5;
  func_0x00010c19f0e0(param_3,dVar8,dVar10,dVar15,*(undefined8 *)(param_4 + _DAT_112767094));
  dVar12 = dVar8 + dVar15;
  dVar9 = param_3;
  func_0x00010c19f0e0(param_3,dVar12,dVar10,dVar15,*(undefined8 *)(param_4 + _DAT_112767098));
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c23a780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  lVar6 = (long)_DAT_112767080;
  dVar15 = 0.0;
  dVar13 = 0.0;
  func_0x00010c1739e0(0,0,dVar9,dVar11 + dVar12,*(undefined8 *)(param_4 + lVar6));
  _objc_release(uVar3);
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c23a780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  func_0x00010b8165a4(dVar15 * 0.5,(dVar11 + dVar13) * 0.5);
  func_0x00010c17a6a0(*(undefined8 *)(param_4 + lVar6));
  _objc_release(uVar3);
  func_0x00010c19f0e0(param_3,dVar8,dVar10,dVar14,*(undefined8 *)(param_4 + _DAT_112767084));
  lVar7 = (long)_DAT_112767088;
  func_0x00010c19f0e0(param_3,dVar8,dVar10,dVar14,*(undefined8 *)(param_4 + lVar7));
  uVar4 = *(undefined8 *)(param_4 + _DAT_11276709c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_3,dVar8,dVar10,dVar14);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_4);
  dVar8 = param_3;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
  _CGRectGetMaxY();
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(param_3,dVar8,*(undefined8 *)(param_4 + _DAT_11276708c));
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  lVar7 = (long)_DAT_112767090;
  dVar9 = 0.0;
  dVar14 = 0.0;
  func_0x00010c1739e0(0,0,param_3,dVar8,*(undefined8 *)(param_4 + lVar7));
  _objc_release(uVar3);
  func_0x00010bf20c00(param_4);
  _CGRectGetMinX();
  dVar10 = dVar9;
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  dVar10 = dVar10 * 0.5;
  dVar9 = dVar9 + dVar10;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar6));
  _CGRectGetMaxY();
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40();
  dVar10 = dVar10 + dVar14 * 0.5;
  func_0x00010b8165a4(dVar9,dVar10);
  func_0x00010c17a6a0(*(undefined8 *)(param_4 + lVar7));
  _objc_release(uVar3);
  func_0x00010bf20c00(param_4);
  uVar4 = *(undefined8 *)(param_4 + _DAT_1127670a0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c19f0e0(dVar9,dVar10,param_3,dVar8,uVar4);
  _objc_release(uVar4);
  return;
}



/* Entry: 1079c0e84; end: 1079c0e8b; -[SCDiscoverFeedWhiteSpaceShowCell shouldShowBackgroundView] */

undefined8 FUN_1079c0e84(void)

{
  return 0;
}



/* Entry: 1079c0e8c; end: 1079c102b; +[SCDiscoverFeedWhiteSpaceShowCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_1079c0e8c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126d5a68;
  _objc_opt_class(PTR_PTR_1126d5a68);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  puVar3 = PTR_PTR_1126d5af0;
  bVar2 = false;
  if ((*(double *)PTR__CGSizeZero_110347620 == param_1) &&
     (bVar2 = false, !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)) && !NAN(param_2))) {
    bVar2 = *(double *)(PTR__CGSizeZero_110347620 + 8) == param_2;
  }
  if (bVar2) {
    uVar4 = uVar1;
    func_0x00010bfe04c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bfe04c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3660();
    func_0x00010c23d6e0(puVar3);
    dVar7 = param_2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c23a780(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106e40();
    uVar5 = uVar1;
    func_0x00010c23a780(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106e40();
    param_2 = param_2 + dVar7;
    uVar6 = uVar1;
    func_0x00010c1171a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106e40();
    param_2 = param_2 + dVar7;
    dVar7 = param_2 + 0.0;
    func_0x00010b816218();
    param_1 = (double)(long)(param_1 * param_2) / param_2;
    func_0x00010b816218();
    param_2 = (double)(long)(param_2 * dVar7) / param_2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c106e40(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1079c102c; end: 1079c1033; -[SCDiscoverFeedWhiteSpaceShowCell viewToAnimateOnTap:] */

undefined8 FUN_1079c102c(void)

{
  return 0;
}



/* Entry: 1079c1034; end: 1079c1063; -[SCDiscoverFeedWhiteSpaceShowCell operaBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c1034(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112767084);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079c1064; end: 1079c163f; -[SCDiscoverFeedWhiteSpaceShowCell _viewModelDidUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c1064(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_1126d5a68;
  uVar6 = *(ulong *)(param_1 + _DAT_112767074);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010c23a780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112767088;
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bfe04c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11276708c));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112767090));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c26e4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_1127670a8;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c26dfe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_1127670ac;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c26d7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_1127670a4;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c1171a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c117180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf51e00();
  lVar8 = (long)_DAT_1127670b0;
  func_0x00010c202c20(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0b4d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf51e00();
  func_0x00010c1c0ca0(*(undefined8 *)(param_1 + lVar8));
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2607e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    lVar9 = (long)_DAT_1127670a0;
    lVar8 = *(long *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar8 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112767084);
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar7);
      _objc_release(uVar5);
    }
  }
  uVar3 = uVar1;
  func_0x00010c105540();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    lVar9 = (long)_DAT_11276709c;
    lVar8 = *(long *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar8 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112767084);
      uVar5 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar7);
      _objc_release(uVar5);
    }
  }
  uVar3 = uVar1;
  func_0x00010c2607e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_1127670a0;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2607e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c105540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11276709c;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c105540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar1;
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010beecf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf13d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079c1640; end: 1079c1703; -[SCDiscoverFeedWhiteSpaceShowCell _handleDebugGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c1640(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d5a68;
  uVar4 = *(ulong *)(param_1 + _DAT_112767074);
  _objc_retain(uVar4);
  _objc_retain(param_3);
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
  func_0x00010bf65fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11276707c));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1079c1704; end: 1079c1713; -[SCDiscoverFeedWhiteSpaceShowCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079c1704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276707c);
}



/* Entry: 1079c1714; end: 1079c1723; -[SCDiscoverFeedWhiteSpaceShowCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079c1714(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767074);
}



/* Entry: 1079c1724; end: 1079c173b; -[SCDiscoverFeedWhiteSpaceShowCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079c1724(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767078);
}



/* Entry: 1079c173c; end: 1079c1753; -[SCDiscoverFeedWhiteSpaceShowCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c173c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112767078);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1079c1754; end: 1079c1763; -[SCDiscoverFeedWhiteSpaceShowCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079c1754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127670bc);
}



/* Entry: 1079c1764; end: 1079c1773; -[SCDiscoverFeedWhiteSpaceShowCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079c1764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127670b4);
}



/* Entry: 1079c1774; end: 1079c1783; -[SCDiscoverFeedWhiteSpaceShowCell gestureCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079c1774(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127670b8);
}



/* Entry: 1079c1784; end: 1079c18d3; -[SCDiscoverFeedWhiteSpaceShowCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079c1784(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127670b8,0);
  _objc_storeStrong(param_1 + _DAT_1127670b4,0);
  _objc_storeStrong(param_1 + _DAT_1127670bc,0);
  _objc_storeStrong(param_1 + _DAT_112767074,0);
  _objc_storeStrong(param_1 + _DAT_11276707c,0);
  _objc_storeStrong(param_1 + _DAT_112767070,0);
  _objc_storeStrong(param_1 + _DAT_1127670b0,0);
  _objc_storeStrong(param_1 + _DAT_1127670a4,0);
  _objc_storeStrong(param_1 + _DAT_1127670ac,0);
  _objc_storeStrong(param_1 + _DAT_1127670a8,0);
  _objc_storeStrong(param_1 + _DAT_112767098,0);
  _objc_storeStrong(param_1 + _DAT_112767094,0);
  _objc_storeStrong(param_1 + _DAT_1127670a0,0);
  _objc_storeStrong(param_1 + _DAT_11276709c,0);
  _objc_storeStrong(param_1 + _DAT_112767090,0);
  _objc_storeStrong(param_1 + _DAT_11276708c,0);
  _objc_storeStrong(param_1 + _DAT_112767088,0);
  _objc_storeStrong(param_1 + _DAT_112767084,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767080,0);
  return;
}



/* Entry: 1079c18d4; end: 1079c193f; -[SCDiscoverFeedWhiteSpaceGestureCoordinator initWithCollectionView:] */

undefined1 * FUN_1079c18d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f90f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c1940; end: 1079c1ac3; -[SCDiscoverFeedWhiteSpaceGestureCoordinator gestureRecognizerShouldBegin:] */

ulong FUN_1079c1940(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar3);
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      lVar2 = lVar3;
      func_0x00010c070ea0();
      uVar6 = (ulong)((uint)lVar2 ^ 1);
LAB_1079c1a7c:
      _objc_release(lVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return uVar6;
      }
      ___stack_chk_fail();
      uVar6 = lVar3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_destroyWeak_11034d218)(uVar6);
      return uVar6;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126c20f8;
      _objc_opt_class(PTR_PTR_1126c20f8);
      uVar6 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      if ((uVar6 & 1) != 0) {
        func_0x00010bf4c080();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c070ea0();
        _objc_release(uVar7);
        if ((uVar6 & 1) != 0) {
          uVar6 = 0;
          goto LAB_1079c1a7c;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1079c1ac4; end: 1079c1acb; -[SCDiscoverFeedWhiteSpaceGestureCoordinator .cxx_destruct] */

void FUN_1079c1ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079c1acc; end: 1079c1ce3; -[SCDiscoverFeedCollectionViewCellTapHandler initWithTouchTargetView:viewToAnimate:sourceView:collectionViewCell:eventAnnouncer:announcerIdentifier:] */

undefined1 *
FUN_1079c1acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f90f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010c18b5e0(puVar3);
    func_0x00010c1c8340(0x3fa999999999999a,puVar3);
    func_0x00010bef9040(param_3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010bef9040(param_3);
    puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c1c8340(0x3fd0000000000000);
    func_0x00010c178280(puVar5);
    func_0x00010bef9040(param_3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079c1ce4; end: 1079c1ceb; -[SCDiscoverFeedCollectionViewCellTapHandler gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1079c1ce4(void)

{
  return 1;
}



/* Entry: 1079c1cec; end: 1079c1d4f; -[SCDiscoverFeedCollectionViewCellTapHandler _didTapWithGestureRecognizer:] */

void FUN_1079c1cec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfc1bc0(uVar1,param_2,param_3);
  if (((int)uVar1 != 0) && (lVar2 = param_3, func_0x00010c252440(), lVar2 == 1)) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    FUN_107c1f420();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079c1d50; end: 1079c1dbf; -[SCDiscoverFeedCollectionViewCellTapHandler _handleSingleTapAction:] */

void FUN_1079c1d50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd0140(uVar2,param_2,lVar1,uVar3,param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1079c1dc0; end: 1079c1e6f; -[SCDiscoverFeedCollectionViewCellTapHandler _handleLongPressAction:] */

void FUN_1079c1dc0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((lVar1 = param_3, func_0x00010c252440(), lVar1 == 2 ||
      (lVar1 = param_3, func_0x00010c252440(), lVar1 == 1)))) {
    func_0x00010c14c8a0(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd0140(uVar2,param_2,lVar1,uVar3,param_1);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079c1e70; end: 1079c1e77; -[SCDiscoverFeedCollectionViewCellTapHandler actionHandler] */

undefined8 FUN_1079c1e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1079c1e78; end: 1079c1ea7; -[SCDiscoverFeedCollectionViewCellTapHandler setActionHandler:] */

void FUN_1079c1e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079c1ea8; end: 1079c1eaf; -[SCDiscoverFeedCollectionViewCellTapHandler singleTapActionModel] */

undefined8 FUN_1079c1ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079c1eb0; end: 1079c1eb7; -[SCDiscoverFeedCollectionViewCellTapHandler setSingleTapActionModel:] */

void FUN_1079c1eb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079c1eb8; end: 1079c1ebf; -[SCDiscoverFeedCollectionViewCellTapHandler longPressActionModel] */

undefined8 FUN_1079c1eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079c1ec0; end: 1079c1ec7; -[SCDiscoverFeedCollectionViewCellTapHandler setLongPressActionModel:] */

void FUN_1079c1ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079c1ec8; end: 1079c1ecf; -[SCDiscoverFeedCollectionViewCellTapHandler gestureCoordinator] */

undefined8 FUN_1079c1ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1079c1ed0; end: 1079c1eff; -[SCDiscoverFeedCollectionViewCellTapHandler setGestureCoordinator:] */

void FUN_1079c1ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079c1f00; end: 1079c1fd3; -[SCDiscoverFeedCollectionViewCellTapHandler .cxx_destruct] */

void FUN_1079c1f00(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079c1fd4; end: 1079c207f;  */

void FUN_1079c1fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126d5b18;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053a60(0x4034000000000000,0x4030000000000000,0,
                      *(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2,param_2,puVar3,puVar4);
  uVar1 = puRam00000001137271e8;
  puRam00000001137271e8 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1079c2080; end: 1079c20d3;  */

void FUN_1079c2080(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137271f0 != -1) {
    func_0x00010002a2fc(0x1137271f0,&PTR___NSConcreteGlobalBlock_1109f3928);
  }
  uVar1 = uRam00000001137271f8;
  _objc_retain(uRam00000001137271f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079c20d4; end: 1079c217f;  */

void FUN_1079c20d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126d5b18;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053a60(0x4032000000000000,0x402a000000000000,0,
                      *(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2,param_2,puVar3,puVar4);
  uVar1 = puRam00000001137271f8;
  puRam00000001137271f8 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1079c2180; end: 1079c21d3;  */

void FUN_1079c2180(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727200 != -1) {
    func_0x00010002a2fc(0x113727200,&PTR___NSConcreteGlobalBlock_1109f3948);
  }
  uVar1 = uRam0000000113727208;
  _objc_retain(uRam0000000113727208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079c21d4; end: 1079c227f;  */

void FUN_1079c21d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126d5b18;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053a60(0x4030000000000000,0x4030000000000000,0,
                      *(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2,param_2,puVar3,puVar4);
  uVar1 = puRam0000000113727208;
  puRam0000000113727208 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1079c2280; end: 1079c22d3;  */

void FUN_1079c2280(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727210 != -1) {
    func_0x00010002a2fc(0x113727210,&PTR___NSConcreteGlobalBlock_1109f3968);
  }
  uVar1 = uRam0000000113727218;
  _objc_retain(uRam0000000113727218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079c22d4; end: 1079c237f;  */

void FUN_1079c22d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126d5b18;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053a60(0x4032000000000000,0x402a000000000000,0,
                      *(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2,param_2,puVar3,puVar4);
  uVar1 = puRam0000000113727218;
  puRam0000000113727218 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1079c2380; end: 1079c23fb;  */

void FUN_1079c2380(long param_1)

{
  if (param_1 < 3) {
    if (param_1 == 1) {
      func_0x0001079c1f80();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 2) {
      FUN_1079c2080();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 == 3) {
    FUN_1079c2180(0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 4) {
    FUN_1079c2280();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079c23fc; end: 1079c2683;  */

undefined1  [16]
FUN_1079c23fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_1;
  uVar4 = param_2;
  _objc_retain();
  lVar3 = param_5;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1079c2684;
    uStack_88 = 0x1079c2694;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_1079c2684;
    uStack_b8 = 0x1079c2694;
    uStack_b0 = 0;
    lVar3 = param_5;
    func_0x00010c25cd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010bf97b20(param_5);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c25cd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_a0[5];
    uVar5 = puStack_d0[5];
    uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uStack_70 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uStack_68 = uVar4;
    _objc_retain(uVar4);
    func_0x00010bf51e00();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_60 = uVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    func_0x00010bf20ba0(param_1,param_2,lVar3);
    _objc_release(puVar2);
    _objc_release(lVar3);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    uVar5 = param_1;
    uVar4 = param_2;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar6._8_8_ = param_4;
    auVar6._0_8_ = param_3;
    return auVar6;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d8,8);
  lVar3 = 8;
  __Block_object_dispose(&uStack_a8);
  __Unwind_Resume();
  *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 1079c2684; end: 1079c269b;  */

void FUN_1079c2684(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079c269c; end: 1079c27a3;  */

void FUN_1079c269c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0d3c80();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar3;
    _objc_release(uVar2);
    _objc_release(lVar1);
    func_0x00010c1bdb00(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079c27a4; end: 1079c27f7;  */

void FUN_1079c27a4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727250 != -1) {
    func_0x00010002a2fc(0x113727250,&PTR___NSConcreteGlobalBlock_1109f39b8);
  }
  uVar1 = uRam0000000113727258;
  _objc_retain(uRam0000000113727258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


