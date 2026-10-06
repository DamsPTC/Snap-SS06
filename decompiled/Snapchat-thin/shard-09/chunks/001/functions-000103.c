/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069e4d40; end: 1069e4d93; -[SCMediaDrawerGalleryTabController animateDeselectAll] */

void FUN_1069e4d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069e4d94;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bdca7e0(param_1,param_2,&puStack_38,0);
  return;
}



/* Entry: 1069e4d94; end: 1069e4ecf;  */

void FUN_1069e4d94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  iVar4 = (int)&uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c1fae20(*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar1;
      iVar4 = (int)&uStack_110;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = 0x4042000000000000;
  func_0x00010c173660();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf4cdc0(*(undefined8 *)(lVar3 + 0x10));
  if (iVar4 != 0) {
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
  func_0x00010c1822e0(*(undefined8 *)(lVar3 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c217530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,lVar3,PTR_s_setTopMargin__112663770);
  return;
}



/* Entry: 1069e4ed0; end: 1069e4f9b; -[SCMediaDrawerGalleryTabController updateScrollViewWithTopMargin:deltaContentOffset:animated:] */

void FUN_1069e4ed0(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + 0x10));
  if (param_4 != 0) {
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
  func_0x00010c1822e0(*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c217530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setTopMargin__112663770);
  return;
}



/* Entry: 1069e4f9c; end: 1069e4fcf;  */

void FUN_1069e4f9c(long param_1)

{
  func_0x00010c1822e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c217530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setTopMargin__112663770);
  return;
}



/* Entry: 1069e4fd0; end: 1069e500f; -[SCMediaDrawerGalleryTabController scrollToTopWithTopMargin:] */

void FUN_1069e4fd0(double param_1,long param_2)

{
  func_0x00010c1822e0(0,-param_1,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c217530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setTopMargin__112663770);
  return;
}



/* Entry: 1069e5010; end: 1069e5083; -[SCMediaDrawerGalleryTabController scrollToDrawerItem:] */

void FUN_1069e5010(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfecde0();
  if (lVar1 == 0x7fffffffffffffff) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069e5084; end: 1069e50ff; -[SCMediaDrawerGalleryTabController scrollToPercent:] */

void FUN_1069e5084(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + 0x10));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x10));
  func_0x00010c2746e0(param_5);
  dVar2 = dVar1 + (param_2 - param_4);
  func_0x00010bf20340(param_5);
  dVar2 = dVar1 + dVar2;
  func_0x00010c2746e0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,(double)(float)(int)(param_1 * dVar2) - dVar1,*(undefined8 *)(param_5 + 0x10),
             PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 1069e5100; end: 1069e5103; -[SCMediaDrawerGalleryTabController tabCellWillDisplay] */

void FUN_1069e5100(void)

{
  return;
}



/* Entry: 1069e5104; end: 1069e5107; -[SCMediaDrawerGalleryTabController didFocusOnTab] */

void FUN_1069e5104(void)

{
  return;
}



/* Entry: 1069e5108; end: 1069e5237; -[SCMediaDrawerGalleryTabController dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_1069e5108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1069e5238;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1069e5238; end: 1069e5333;  */

void FUN_1069e5238(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001006372a4(uVar2,&PTR___NSConcreteGlobalBlock_110d25e60);
    uVar3 = uVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1069e5394;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    uStack_48 = uVar3;
    _objc_retain(uVar3);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1069e5334; end: 1069e5403;  */

long FUN_1069e5334(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if ((lVar1 == 0) && (lVar1 = param_2, func_0x00010c247f00(), ((uint)lVar1 >> 4 & 1) == 0)) {
    lVar1 = param_2;
    func_0x00010b5fc5e4(param_2);
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 1069e5404; end: 1069e5447; -[SCMediaDrawerGalleryTabController setTopMargin:] */

void FUN_1069e5404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(undefined8 *)(param_4 + 0x88) = param_1;
  func_0x00010bf4c7c0(*(undefined8 *)(param_4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_3,0,*(undefined8 *)(param_4 + 0x10),PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 1069e5448; end: 1069e547f; -[SCMediaDrawerGalleryTabController setBottomMargin:] */

void FUN_1069e5448(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x90) = param_1;
  func_0x00010bf4c7c0(*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x10),PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 1069e5480; end: 1069e5583; -[SCMediaDrawerGalleryTabController _animate:completionBlock:] */

void FUN_1069e5480(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1069e5584;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1069e5590;
    puStack_78 = &UNK_110842508;
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    func_0x00010bf03460(0x3fd3333333333333,0,0x3febd70a3d70a3d7,0x3fe999999999999a,puVar2,param_2,
                        0x82,&puStack_68,&puStack_90);
    _objc_release(uStack_70);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069e5584; end: 1069e55a3;  */

void FUN_1069e5584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001069e558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1069e55a4; end: 1069e5663; -[SCMediaDrawerGalleryTabController _findGalleryEntryIndexByItemId:] */

ulong FUN_1069e55a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar5 = 0;
      do {
        uVar2 = *(ulong *)(param_1 + 8);
        func_0x00010c0dfd40(uVar2,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_1069e5644;
        uVar5 = uVar5 + 1;
        uVar4 = *(ulong *)(param_1 + 8);
        func_0x00010bf529e0();
      } while (uVar5 < uVar4);
    }
  }
  uVar5 = 0x7fffffffffffffff;
LAB_1069e5644:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1069e5664; end: 1069e567b; -[SCMediaDrawerGalleryTabController delegate] */

void FUN_1069e5664(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069e567c; end: 1069e5687; -[SCMediaDrawerGalleryTabController setDelegate:] */

void FUN_1069e567c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 1069e5688; end: 1069e568f; -[SCMediaDrawerGalleryTabController topMargin] */

undefined8 FUN_1069e5688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1069e5690; end: 1069e5697; -[SCMediaDrawerGalleryTabController bottomMargin] */

undefined8 FUN_1069e5690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1069e5698; end: 1069e5723; -[SCMediaDrawerGalleryTabController .cxx_destruct] */

void FUN_1069e5698(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069e5724; end: 1069e5727; -[SCGalleryEntry itemId] */

void FUN_1069e5724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_entryId_1125c3628);
  return;
}



/* Entry: 1069e5728; end: 1069e572f; -[SCGalleryEntry itemType] */

undefined8 FUN_1069e5728(void)

{
  return 1;
}



/* Entry: 1069e5730; end: 1069e5733; -[SCChatMediaDrawerBaseMedia itemId] */

void FUN_1069e5730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaIdentifier_11260eea0);
  return;
}



/* Entry: 1069e5734; end: 1069e573b; -[SCChatMediaDrawerBaseMedia itemType] */

undefined8 FUN_1069e5734(void)

{
  return 0;
}



/* Entry: 1069e573c; end: 1069e57a7; -[SCMediaDrawerSegmentedTabBar initWithFrame:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1069e573c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f42b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112755694) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112755698) = 0;
    func_0x00010c219b60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069e57a8; end: 1069e57ab; -[SCMediaDrawerSegmentedTabBar setStyle:] */

void FUN_1069e57a8(void)

{
  return;
}



/* Entry: 1069e57ac; end: 1069e580b; -[SCMediaDrawerSegmentedTabBar updateTabBarWithGalleryEntryCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e57ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112755694;
  lVar3 = *(long *)(param_1 + lVar2);
  lVar1 = param_1;
  func_0x00010be226a0();
  if (lVar3 == 3) {
    *(long *)(param_1 + _DAT_11275569c) = lVar1;
  }
  else {
    func_0x00010bea83e0(param_1,param_2,lVar1);
    *(long *)(param_1 + lVar2) = lVar1;
  }
  return;
}



/* Entry: 1069e580c; end: 1069e601f; -[SCMediaDrawerSegmentedTabBar _setTabBarWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e580c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puStack_d0;
  undefined *puStack_c8;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  puVar9 = param_3;
  if (param_3 != *(undefined **)(param_1 + _DAT_112755694)) {
    lVar19 = (long)_DAT_1127556a0;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar19));
    lVar18 = (long)_DAT_1127556a4;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar18));
    uVar2 = *(undefined8 *)(param_1 + lVar19);
    *(undefined8 *)(param_1 + lVar19) = 0;
    _objc_release(uVar2);
    puVar3 = *(undefined **)(param_1 + lVar18);
    *(undefined8 *)(param_1 + lVar18) = 0;
    _objc_release();
    if (param_3 == (undefined *)0x3) {
      puVar3 = PTR_PTR_1126aea58;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(param_1 + lVar18);
      *(undefined **)(param_1 + lVar18) = puVar3;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127556a8);
      *(undefined **)(param_1 + _DAT_1127556a8) = PTR____NSArray0__struct_11034ab48;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar18));
      _objc_release(puVar3);
      func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar18));
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
      func_0x00010befbb60(param_1);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar3 = *(undefined **)(param_1 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = *(undefined **)(param_1 + lVar18);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puStack_c8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = *(undefined **)(param_1 + lVar18);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34860(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010beef8c0(puVar1);
    }
    else {
      if (param_3 == (undefined *)0x2) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b09e0;
        ppuVar8 = &PTR____CFConstantStringClassReference_110e67358;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67358,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c267620(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        lVar18 = (long)_DAT_112755698;
        if (*(long *)(param_1 + lVar18) == 0) {
          func_0x00010c1fadc0(puVar9);
        }
        func_0x00010befa120(puVar3);
        _objc_release(puVar9);
        puVar9 = PTR_PTR_1126b09e0;
        ppuVar8 = &PTR____CFConstantStringClassReference_110e67398;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67398,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c267620(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        if (*(long *)(param_1 + lVar18) == 1) {
          func_0x00010c1fadc0(puVar9);
        }
        func_0x00010befa120(puVar3);
        _objc_release(puVar9);
        puVar9 = puVar3;
        func_0x00010bf51e00();
        uVar2 = *(undefined8 *)(param_1 + _DAT_1127556a8);
        *(undefined **)(param_1 + _DAT_1127556a8) = puVar9;
        _objc_release(uVar2);
        puVar9 = PTR_PTR_1126c3ac8;
        _objc_alloc();
        func_0x00010c020480();
        uVar2 = *(undefined8 *)(param_1 + lVar19);
        *(undefined **)(param_1 + lVar19) = puVar9;
        _objc_release(uVar2);
        func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
        func_0x00010befbb60(param_1);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar10 = *(undefined **)(param_1 + lVar19);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = puVar10;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = *(undefined **)(param_1 + lVar19);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010bf1ff80(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puStack_d0;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = *(undefined **)(param_1 + lVar19);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010c08de00(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar11;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = *(undefined **)(param_1 + lVar19);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar14;
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar14);
        _objc_release(puVar13);
      }
      else {
        if (param_3 != (undefined *)0x1) goto LAB_1069e5fe4;
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b09e0;
        ppuVar8 = &PTR____CFConstantStringClassReference_110e67358;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67358,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c267620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        func_0x00010c1fadc0(puVar10);
        func_0x00010befa120(puVar3);
        puVar9 = puVar3;
        func_0x00010bf51e00();
        uVar2 = *(undefined8 *)(param_1 + _DAT_1127556a8);
        *(undefined **)(param_1 + _DAT_1127556a8) = puVar9;
        _objc_release(uVar2);
        puVar9 = PTR_PTR_1126c3ac8;
        _objc_alloc();
        func_0x00010c020480();
        uVar2 = *(undefined8 *)(param_1 + lVar19);
        *(undefined **)(param_1 + lVar19) = puVar9;
        _objc_release(uVar2);
        func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
        func_0x00010befbb60(param_1);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar4 = *(undefined **)(param_1 + lVar19);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = param_1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = puVar4;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = *(undefined **)(param_1 + lVar19);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = param_1;
        func_0x00010bf1ff80(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = *(undefined **)(param_1 + lVar19);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = param_1;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = *(undefined **)(param_1 + lVar19);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar7;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar14;
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(param_1);
        param_1 = puVar7;
      }
      _objc_release(param_1);
      _objc_release(puVar12);
      param_1 = puVar11;
    }
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(puVar15);
    _objc_release(puVar5);
    _objc_release(puStack_d0);
    _objc_release(puStack_c8);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release();
  }
LAB_1069e5fe4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = (long)_DAT_112755694;
  if (puVar9 != (undefined *)0x0) {
    if (*(long *)(puVar3 + lVar17) != 3) {
      func_0x00010bea83e0(puVar3);
      *(undefined8 *)(puVar3 + _DAT_11275569c) = *(undefined8 *)(puVar3 + lVar17);
      *(undefined8 *)(puVar3 + lVar17) = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bee5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__updatedSelectedTabCount__112596ec0,puVar9);
    return;
  }
  if (*(long *)(puVar3 + lVar17) == 3) {
    lVar18 = (long)_DAT_11275569c;
    func_0x00010bea83e0(puVar3);
    *(undefined8 *)(puVar3 + lVar17) = *(undefined8 *)(puVar3 + lVar18);
  }
  return;
}



/* Entry: 1069e6020; end: 1069e60bf; -[SCMediaDrawerSegmentedTabBar updateSelectingStateWithSelectedItemCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e6020(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112755694;
  if (param_3 != 0) {
    if (*(long *)(param_1 + lVar2) != 3) {
      func_0x00010bea83e0(param_1,param_2,3);
      *(undefined8 *)(param_1 + _DAT_11275569c) = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bee5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updatedSelectedTabCount__112596ec0,param_3);
    return;
  }
  if (*(long *)(param_1 + lVar2) == 3) {
    lVar1 = (long)_DAT_11275569c;
    func_0x00010bea83e0(param_1,param_2,*(undefined8 *)(param_1 + lVar1));
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_1 + lVar1);
  }
  return;
}



/* Entry: 1069e60c0; end: 1069e61bb; -[SCMediaDrawerSegmentedTabBar tabScrollViewDidScrollToOffset:withContentWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e60c0(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  
  dVar6 = (double)(long)(param_1 / param_2);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  lVar5 = (long)_DAT_1127556a8;
  lVar1 = *(long *)(param_3 + lVar5);
  func_0x00010bf529e0();
  if ((double)(lVar1 - 1) <= dVar6) {
    dVar6 = (double)(lVar1 - 1);
  }
  uVar4 = (ulong)dVar6;
  lVar1 = (long)_DAT_112755698;
  if (*(ulong *)(param_3 + lVar1) != uVar4) {
    *(ulong *)(param_3 + lVar1) = uVar4;
    uVar2 = *(ulong *)(param_3 + lVar5);
    func_0x00010bf529e0();
    if (uVar4 < uVar2) {
      uVar2 = *(ulong *)(param_3 + lVar5);
      func_0x00010c0dfd40(uVar2,param_4,*(undefined8 *)(param_3 + lVar1));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c159240();
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_3 + lVar5);
        func_0x00010c0dfd40(uVar3,param_4,*(undefined8 *)(param_3 + lVar1));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 1069e61bc; end: 1069e6243; -[SCMediaDrawerSegmentedTabBar _handleTabBarViewItemTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e61bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127556a8);
  func_0x00010bfecde0();
  if ((lVar1 != 0x7fffffffffffffff) && (*(long *)(param_1 + _DAT_112755698) != lVar1)) {
    *(long *)(param_1 + _DAT_112755698) = lVar1;
    param_1 = param_1 + _DAT_1127556ac;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0c4b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069e6244; end: 1069e6247; -[SCMediaDrawerSegmentedTabBar _TabBarNotTappable:] */

void FUN_1069e6244(void)

{
  return;
}



/* Entry: 1069e6248; end: 1069e6257; -[SCMediaDrawerSegmentedTabBar _getSegmentedTabBarTypeForGalleryEntryCount:] */

undefined8 FUN_1069e6248(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1069e6258; end: 1069e62b7; -[SCMediaDrawerSegmentedTabBar _updatedSelectedTabCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e6258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e673d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127556a4),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069e62b8; end: 1069e62c7; -[SCMediaDrawerSegmentedTabBar style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069e62b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755690);
}



/* Entry: 1069e62c8; end: 1069e62e7; -[SCMediaDrawerSegmentedTabBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e62c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127556ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069e62e8; end: 1069e62fb; -[SCMediaDrawerSegmentedTabBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e62e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127556ac,param_3);
  return;
}



/* Entry: 1069e62fc; end: 1069e6357; -[SCMediaDrawerSegmentedTabBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e62fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127556ac);
  _objc_storeStrong(param_1 + _DAT_1127556a4,0);
  _objc_storeStrong(param_1 + _DAT_1127556a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127556a0,0);
  return;
}



/* Entry: 1069e6358; end: 1069e69c7; -[SCMediaDrawerTabBar initWithFrame:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1069e6358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126f42c0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    FUN_1069e69c8(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ee20();
    lVar6 = (long)_DAT_1127556b0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(param_3);
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_1127556b4;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar7);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(uVar7);
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e67358;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67358,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar7);
    _objc_release(ppuVar3);
    func_0x00010c211780(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_1127556b8;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar7);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(uVar7);
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar6));
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e67398;
    ppuVar4 = ppuVar3;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67398,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar7);
    _objc_release(ppuVar4);
    func_0x00010c211780(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar7);
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_1127556bc;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar7);
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    ppuVar4 = &PTR____CFConstantStringClassReference_110e67358;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67358,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(ppuVar4);
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_1127556c0;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar7);
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67398,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(ppuVar3);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c20eaa0(puVar1);
    func_0x00010c20eaa0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 1069e69c8; end: 1069e69ff;  */

void FUN_1069e69c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 != 1) goto LAB_1069e69fc;
    uVar1 = 2;
  }
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_1069e69fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069e6a00; end: 1069e6a67;  */

void FUN_1069e6a00(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069e6a68; end: 1069e6fab;  */

void FUN_1069e6a68(undefined8 param_1,undefined8 param_2,double param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3fc5555555555555);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar5 + 0x10))(-param_3,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069e6fac; end: 1069e7093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e6fac(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069e7094; end: 1069e71b7; -[SCMediaDrawerTabBar setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e7094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127556c4;
  *(undefined8 *)(param_1 + lVar3) = param_3;
  FUN_1069e69c8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_1 + _DAT_1127556b0),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127556b4);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  FUN_1069e71b8(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2,param_2,uVar1,0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  FUN_1069e7238(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_1127556bc),param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127556b8);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  FUN_1069e71b8(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2,param_2,uVar1,0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  FUN_1069e7238(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_1127556c0),param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e71b8; end: 1069e7237;  */

void FUN_1069e71b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *unaff_x19;
  
  if (param_1 == 1) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = puVar1;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else if (param_1 == 0) {
    unaff_x19 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1069e7238; end: 1069e7277;  */

void FUN_1069e7238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x6a;
  }
  else {
    if (param_1 != 1) goto LAB_1069e7274;
    uVar1 = 0xd5;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_1069e7274:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069e7278; end: 1069e72ab; -[SCMediaDrawerTabBar updateTabBarWithGalleryEntryCount:] */

void FUN_1069e7278(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_1109529c0;
  if (param_3 != 0) {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_1109529a0;
  }
  func_0x00010c0bc060(param_1,param_2,ppuVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069e72ac; end: 1069e734f;  */

void FUN_1069e72ac(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c0df720(param_3 + 36.0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069e7350; end: 1069e73af;  */

void FUN_1069e7350(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069e73b0; end: 1069e73b3; -[SCMediaDrawerTabBar updateSelectingStateWithSelectedItemCount:] */

void FUN_1069e73b0(void)

{
  return;
}



/* Entry: 1069e73b4; end: 1069e741b; -[SCMediaDrawerTabBar _handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e73b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127556c8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c268120(param_3);
  _objc_release(param_3);
  func_0x00010c0c4b80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e741c; end: 1069e7423; -[SCMediaDrawerTabBar tabScrollViewDidScrollToOffset:withContentWidth:] */

void FUN_1069e741c(double param_1,double param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 / param_2,param_3,PTR_s__updateSelectionIndicatorPositio_1125957b0);
  return;
}



/* Entry: 1069e7424; end: 1069e747f; -[SCMediaDrawerTabBar _updateSelectionIndicatorPositionWithRatio:] */

/* WARNING: Possible PIC construction at 0x0001069e7460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069e7464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e7424(double param_1,long param_2)

{
  if (param_1 < 0.0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (1.0 - param_1,*(undefined8 *)(param_2 + _DAT_1127556bc),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1069e7480; end: 1069e748f; -[SCMediaDrawerTabBar style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069e7480(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127556c4);
}



/* Entry: 1069e7490; end: 1069e74af; -[SCMediaDrawerTabBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e7490(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127556c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069e74b0; end: 1069e74c3; -[SCMediaDrawerTabBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e74b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127556c8,param_3);
  return;
}



/* Entry: 1069e74c4; end: 1069e753f; -[SCMediaDrawerTabBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e74c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127556c8);
  _objc_storeStrong(param_1 + _DAT_1127556c0,0);
  _objc_storeStrong(param_1 + _DAT_1127556b8,0);
  _objc_storeStrong(param_1 + _DAT_1127556bc,0);
  _objc_storeStrong(param_1 + _DAT_1127556b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127556b0,0);
  return;
}



/* Entry: 1069e7540; end: 1069e75d7; -[SCMediaDrawerTabCollectionViewCell initWithFrame:] */

undefined1 * FUN_1069e7540(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f42c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069e75d8; end: 1069e76ef; -[SCMediaDrawerTabCollectionViewCell setTabView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e75d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127556cc;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 != param_3) {
    if (lVar1 != 0) {
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar1 == lVar2) {
        func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
      }
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1069e76f0;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e76f0; end: 1069e7777;  */

void FUN_1069e76f0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069e7778; end: 1069e7787; -[SCMediaDrawerTabCollectionViewCell tabView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069e7778(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127556cc);
}



/* Entry: 1069e7788; end: 1069e779b; -[SCMediaDrawerTabCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e7788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127556cc,0);
  return;
}



/* Entry: 1069e779c; end: 1069e81ff; -[SCChatInputMediaAccessory initWithDataObjectContext:parameterProvider:cameraRollAlbumPickerScopeExposer:chatLogger:blizzardLogger:snapVideoFilterFactory:videoImporter:imageImporter:previewScopeExposer:previewScopeBuilderServices:previewVideoProviderServices:previewFilterDataProviderFactory:cloudFS:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:photoPermissionCoordinator:mediaTranscodingLogger:snapVideoFilterScopeExposer:memoriesPreviewPresenterBuilder:cloudSync:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:memoriesTranscodingHelper:snapDocDownloadingService:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:userPreferences:downloader:snapDocEditorServices:memoriesSnapDocTranscodingManager:chatMediaPreviewDataManager:textSender:activeConversationInformation:chatMediaPreviewScopeExposer:chatMediaPreviewScopeServices:legacyStoryMediaCache:stickerInjector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1069e779c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  puStack_70 = PTR_PTR_1126f42d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = puVar1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c292b20();
    _objc_release(puVar2);
    if (puVar3 == (undefined8 *)0x2) {
      *(undefined8 *)((long)puVar1 + (long)_DAT_1127556d8) = 1;
      *(undefined8 *)((long)puVar1 + (long)_DAT_1127556dc) = 1;
    }
    lVar9 = (long)_DAT_1127556e0;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_3;
    _objc_release(uVar4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127556e4,param_4);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127556e8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127556e8) = puVar5;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_1127556ec;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_6;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_1127556f0;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_7;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_1127556f4;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_13;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_1127556f8;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_9;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_1127556fc;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_10;
    _objc_release(uVar4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112755700,param_11);
    lVar9 = (long)_DAT_112755704;
    _objc_retain(param_12);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_12;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755708;
    _objc_retain(param_15);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_15;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_11275570c;
    _objc_retain(param_16);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_16;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755710;
    _objc_retain(param_17);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_17;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755714;
    _objc_retain(param_18);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_18;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755718;
    _objc_retain(param_19);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_19;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_11275571c;
    _objc_retain(param_20);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_20;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755720;
    _objc_retain(param_21);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_21;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755724;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_14;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755728;
    _objc_retain(param_22);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_22;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_11275572c;
    _objc_retain(param_23);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_23;
    _objc_release(uVar4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112755730,param_24);
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755734);
    *(undefined **)((long)puVar1 + (long)_DAT_112755734) = puVar5;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755738;
    _objc_retain(param_25);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_25;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_11275573c;
    _objc_retain(param_27);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_27;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755740;
    _objc_retain(param_31);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_31;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755744;
    _objc_retain(param_32);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_32;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755748;
    _objc_retain(param_34);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_34;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_11275574c;
    _objc_retain(param_38);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_38;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755750;
    _objc_retain(param_39);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_39;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755754;
    _objc_retain(param_40);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_40;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755758;
    _objc_retain(param_41);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_41;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_11275575c;
    _objc_retain(param_45);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_45;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755760;
    _objc_retain(param_46);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_46;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755764;
    _objc_retain(param_42);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_42;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_112755768;
    _objc_retain(param_43);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_43;
    _objc_release(uVar4);
    lVar9 = (long)_DAT_11275576c;
    _objc_retain(param_44);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_44;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755770);
    *(undefined **)((long)puVar1 + (long)_DAT_112755770) = puVar5;
    _objc_release(uVar4);
    uVar4 = param_34;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cfa80;
    _objc_alloc();
    uVar8 = param_13;
    func_0x00010c112160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00a460(0);
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755774);
    *(undefined **)((long)puVar1 + (long)_DAT_112755774) = puVar5;
    _objc_release(uVar7);
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126cfa88;
    _objc_alloc();
    func_0x00010c00a500(0);
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755778);
    *(undefined **)((long)puVar1 + (long)_DAT_112755778) = puVar5;
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275577c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275577c) = puVar5;
    _objc_release(uVar8);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755780);
    *(undefined **)((long)puVar1 + (long)_DAT_112755780) = puVar5;
    _objc_release(uVar8);
    lVar9 = (long)_DAT_112755784;
    _objc_retain(param_29);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_29;
    _objc_release(uVar8);
    _objc_release(uVar4);
  }
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 1069e8200; end: 1069e822f;  */

void FUN_1069e8200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 1069e8230; end: 1069e8297; -[SCChatInputMediaAccessory dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e8230(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112755770));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112755780));
  func_0x00010be02780(param_1);
  puStack_28 = PTR_PTR_1126f42d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069e8298; end: 1069e82c7; -[SCChatInputMediaAccessory mediaSendEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e8298(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755734);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069e82c8; end: 1069e831b; -[SCChatInputMediaAccessory traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e82c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f42d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c20eaa0(param_1);
  return;
}



/* Entry: 1069e831c; end: 1069e8387; -[SCChatInputMediaAccessory _updateCollectionViewAnimated:deltaContentOffset:] */

/* WARNING: Possible PIC construction at 0x0001069e835c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069e8360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e831c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010becd560();
                    /* WARNING: Could not recover jumptable at 0x00010c2897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755774),
             PTR_s_updateScrollViewWithTopMargin_de_112680018,param_3);
  return;
}



/* Entry: 1069e8388; end: 1069e839f; -[SCChatInputMediaAccessory setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e8388(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + _DAT_1127556d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c211370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTabBarStyle__112661f00,param_3 != 0);
  return;
}



/* Entry: 1069e83a0; end: 1069e83a7; -[SCChatInputMediaAccessory canPanDrawer] */

undefined8 FUN_1069e83a0(void)

{
  return 1;
}



/* Entry: 1069e83a8; end: 1069e83ab; -[SCChatInputMediaAccessory willBeginPanningFromState:gestureRecognizer:] */

void FUN_1069e83a8(void)

{
  return;
}



/* Entry: 1069e83ac; end: 1069e83af; -[SCChatInputMediaAccessory didPanFromState:gestureRecognizer:] */

void FUN_1069e83ac(void)

{
  return;
}



/* Entry: 1069e83b0; end: 1069e83b3; -[SCChatInputMediaAccessory willEndPanningToState:] */

void FUN_1069e83b0(void)

{
  return;
}



/* Entry: 1069e83b4; end: 1069e83b7; -[SCChatInputMediaAccessory didEndPanningToState:] */

void FUN_1069e83b4(void)

{
  return;
}



/* Entry: 1069e83b8; end: 1069e83c3; -[SCChatInputMediaAccessory sizeDidChange:] */

void FUN_1069e83b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s__updateCollectionViewAnimated_de_112592f30,0);
  return;
}



/* Entry: 1069e83c4; end: 1069e83d3; -[SCChatInputMediaAccessory defaultDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069e83c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127556d0);
}



/* Entry: 1069e83d4; end: 1069e842f; -[SCChatInputMediaAccessory maximumDrawerHeight] */

long FUN_1069e83d4(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetHeight();
  _objc_release(puVar1);
  return (long)((param_1 + param_1) / 3.0);
}



/* Entry: 1069e8430; end: 1069e8437; -[SCChatInputMediaAccessory preferredTargetState] */

undefined8 FUN_1069e8430(void)

{
  return 2;
}



/* Entry: 1069e8438; end: 1069e843f; -[SCChatInputMediaAccessory shouldForceMaximumHeight] */

undefined8 FUN_1069e8438(void)

{
  return 1;
}



/* Entry: 1069e8440; end: 1069e856b; -[SCChatInputMediaAccessory willBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e8440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_1127556d4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_1127556d4) = 1;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar2);
  func_0x00010be5c1e0(param_1);
  func_0x00010be5c480(param_1);
  func_0x00010be5c200(param_1);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e856c; end: 1069e863b; -[SCChatInputMediaAccessory didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e856c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  *(undefined8 *)(param_2 + _DAT_112755788) = 0;
  func_0x00010becd560(param_2);
  func_0x00010c152940(*(undefined8 *)(param_2 + _DAT_112755774));
  lVar2 = (long)_DAT_112755778;
  func_0x00010c152940(param_1,*(undefined8 *)(param_2 + lVar2));
  func_0x00010c2a61a0(*(undefined8 *)(param_2 + lVar2));
  lVar2 = param_2;
  func_0x00010bdf72c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf770e0();
  _objc_release(lVar2);
  func_0x00010bfe2ae0(*(undefined8 *)(param_2 + _DAT_11275578c));
  func_0x00010be35640(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdd1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__autoRestoreSelectionIfNeeded_112551fa8);
  return;
}



/* Entry: 1069e863c; end: 1069e863f; -[SCChatInputMediaAccessory willResignActive] */

void FUN_1069e863c(void)

{
  return;
}



/* Entry: 1069e8640; end: 1069e86bb; -[SCChatInputMediaAccessory didResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e8640(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010be941a0(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010be3ed80();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112755754);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd4f20();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb84d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showChatMediaPreview_11258bad8);
      return;
    }
  }
  return;
}



/* Entry: 1069e86bc; end: 1069e86bf; -[SCChatInputMediaAccessory willResumeActive] */

void FUN_1069e86bc(void)

{
  return;
}



/* Entry: 1069e86c0; end: 1069e86c3; -[SCChatInputMediaAccessory willSuspendActive] */

void FUN_1069e86c0(void)

{
  return;
}



/* Entry: 1069e86c4; end: 1069e86c7; -[SCChatInputMediaAccessory didActivateDrawerWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

void FUN_1069e86c4(void)

{
  return;
}



/* Entry: 1069e86c8; end: 1069e86e3; -[SCChatInputMediaAccessory setTabBarStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e86c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127556dc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755790),PTR_s_setStyle__1126614d0);
  return;
}



/* Entry: 1069e86e4; end: 1069e8947; -[SCChatInputMediaAccessory _makeSectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e86e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  func_0x00010c1c8300(0,puVar1);
  func_0x00010c1c82c0(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar6 = (long)_DAT_112755794;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110e67478);
  func_0x00010c167680(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar6),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010c14cd40(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0f36c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar2 = PTR_PTR_1126cfa90;
  _objc_opt_class(PTR_PTR_1126cfa90);
  func_0x00010c126000(uVar4,param_2,puVar2,&PTR____CFConstantStringClassReference_110e673f8);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069e8948;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cfa98;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x000107e858d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033de0(puVar2,param_2,lVar3,lVar6);
  lVar5 = (long)_DAT_11275578c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069e8948; end: 1069e8a9f;  */

void FUN_1069e8948(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c3420(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df720(puVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069e8aa0; end: 1069e8e13; -[SCChatInputMediaAccessory _makeSendBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e8aa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cfaa0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755748);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014900(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,uVar2);
  lVar9 = (long)_DAT_112755798;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar7);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9),param_2,param_1);
  func_0x00010c1b9b00(*(undefined8 *)(param_1 + lVar9),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar9),param_2,param_1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_98 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar3;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  uStack_a8 = uVar2;
  uStack_88 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_b8 = uVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar3;
  func_0x00010bf493a0(uVar7,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  uStack_d0 = uVar7;
  uStack_80 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_e0 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493c0(0xc04b800000000000,uVar7,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  _objc_release(uStack_98);
  lVar6 = *(long *)(param_1 + lVar9);
  func_0x00010c1a7f60(lVar6,param_2,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1069e8e14;
  puVar1 = PTR_PTR_1126cfaa8;
  lStack_110 = lVar9;
  lStack_108 = lVar3;
  uStack_100 = uVar4;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar8 = (long)_DAT_112755790;
  uVar2 = *(undefined8 *)(lVar6 + lVar8);
  *(undefined **)(lVar6 + lVar8) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(lVar6 + lVar8),param_2,lVar6);
  lVar3 = lVar6;
  func_0x00010c29bf00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1069e8f00;
  puStack_120 = &UNK_1108471b0;
  lStack_118 = lVar6;
  func_0x00010c0bbfc0(*(undefined8 *)(lVar6 + lVar8),param_2,&puStack_138);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bee19e0(lVar6);
  return;
}



/* Entry: 1069e8e14; end: 1069e8eff; -[SCChatInputMediaAccessory _makeTabBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e8e14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126cfaa8;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112755790;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069e8f00;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bee19e0(param_1);
  return;
}



/* Entry: 1069e8f00; end: 1069e9023;  */

void FUN_1069e8f00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069e9024; end: 1069e909f; -[SCChatInputMediaAccessory mediaDrawerTabBarDidTapTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bfe2ae0(*(undefined8 *)(param_1 + _DAT_11275578c));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755794);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(uVar2,param_2,puVar1,8,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069e90a0; end: 1069e90ef; -[SCChatInputMediaAccessory collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069e90a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112755794) != param_3) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127556e8);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_count_1125b2420);
    return uVar1;
  }
  lVar2 = *(long *)(param_1 + _DAT_112755778);
  func_0x00010bfbcd00();
  uVar1 = 1;
  if (lVar2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1069e90f0; end: 1069e929f; -[SCChatInputMediaAccessory collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e90f0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_112755794);
  if (lVar1 == param_3) {
    func_0x00010bf6e0c0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e673f8,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0840e0();
    if (uVar2 == 0) {
      piVar4 = (int *)&DAT_112755774;
    }
    else {
      if (uVar2 != 1) goto LAB_1069e9278;
      piVar4 = (int *)&DAT_112755778;
    }
    uVar5 = *(undefined8 *)(param_1 + *piVar4);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2115e0(lVar1,param_2,uVar5);
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112755798);
    func_0x00010c159ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 != lVar1) {
      lVar1 = 0;
      goto LAB_1069e9278;
    }
    lVar1 = param_3;
    func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e67178,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127556e8;
    uVar3 = *(ulong *)(param_1 + lVar6);
    func_0x00010bf529e0();
    uVar2 = param_4;
    func_0x00010c0840e0();
    if (uVar3 <= uVar2) goto LAB_1069e9278;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40(uVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1918a0(lVar1,param_2,uVar5,*(undefined8 *)(param_1 + _DAT_11275570c),
                        *(undefined8 *)(param_1 + _DAT_11275573c),
                        *(undefined8 *)(param_1 + _DAT_112755784),
                        *(undefined8 *)(param_1 + _DAT_112755720));
  }
  _objc_release(uVar5);
LAB_1069e9278:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069e92a0; end: 1069e9467; -[SCChatInputMediaAccessory collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1069e92a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             ulong param_6)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == *(long *)(param_2 + _DAT_112755794)) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    uVar7 = param_1;
    func_0x00010c0c3420(param_2);
    _objc_release(puVar2);
    goto LAB_1069e9430;
  }
  lVar6 = (long)_DAT_112755798;
  lVar1 = *(long *)(param_2 + lVar6);
  func_0x00010c159ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_4 == lVar1) {
    func_0x00010bfe0860(*(undefined8 *)(param_2 + lVar6));
    lVar1 = param_2;
    func_0x00010bdf72c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c084c40();
    _objc_release(lVar1);
    uVar7 = param_1;
    if (lVar6 != 0) goto LAB_1069e9430;
    lVar1 = (long)_DAT_1127556e8;
    uVar3 = *(ulong *)(param_2 + lVar1);
    func_0x00010bf529e0();
    uVar4 = param_6;
    func_0x00010c0840e0();
    if (uVar4 < uVar3) {
      uVar5 = *(ulong *)(param_2 + lVar1);
      func_0x00010c0840e0(param_6);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126cfa58;
      _objc_opt_class(PTR_PTR_1126cfa58);
      uVar3 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      uVar4 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      func_0x00010c2033c0(param_1,param_1,uVar4);
      _objc_release(uVar4);
      goto LAB_1069e9430;
    }
  }
  param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar7 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
LAB_1069e9430:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1069e9468; end: 1069e9577; -[SCChatInputMediaAccessory collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9468(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf6e840(param_3,param_2,param_4,0);
  if (*(long *)(param_1 + _DAT_112755794) != param_3) {
    lVar1 = *(long *)(param_1 + _DAT_112755798);
    func_0x00010c159ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar1) {
      lVar1 = (long)_DAT_1127556e8;
      uVar2 = *(ulong *)(param_1 + lVar1);
      func_0x00010bf529e0();
      uVar3 = param_4;
      func_0x00010c0840e0();
      if (uVar3 < uVar2) {
        uVar4 = *(undefined8 *)(param_1 + lVar1);
        uVar3 = param_4;
        func_0x00010c0840e0(param_4);
        func_0x00010c0dfd40(uVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdf72c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c152360();
        _objc_release(param_1);
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e9578; end: 1069e95e3; -[SCChatInputMediaAccessory collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e9578(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int *piVar1;
  
  if (param_3 != *(long *)(param_1 + _DAT_112755794)) {
    return;
  }
  func_0x00010c0840e0();
  if (param_5 == 0) {
    piVar1 = (int *)&DAT_112755774;
  }
  else {
    if (param_5 != 1) {
      return;
    }
    piVar1 = (int *)&DAT_112755778;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2676b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + *piVar1),PTR_s_tabCellWillDisplay_1126777d0);
  return;
}


