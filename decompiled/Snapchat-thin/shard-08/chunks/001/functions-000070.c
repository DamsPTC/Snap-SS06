/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cf28ac; end: 105cf28b7; -[SCSearchAttachmentsTransitionController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_105cf28ac(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 105cf28b8; end: 105cf28bf; -[SCSearchAttachmentsTransitionController animationControllerForDismissedController:] */

void FUN_105cf28b8(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 105cf28c0; end: 105cf2943; -[SCSearchAttachmentsTransitionController _searchViewControllerForTransitionContext:] */

void FUN_105cf28c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58;
  if (*(char *)(param_1 + 8) == '\0') {
    puVar1 = (undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48;
  }
  func_0x00010c29c220(param_3,param_2,*puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3e08;
  _objc_opt_class(PTR_PTR_1126c3e08);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105cf2944; end: 105cf29bb; -[SCSearchAttachmentsTransitionController _previewViewControllerForTransitionContext:] */

void FUN_105cf2944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48;
  if (*(char *)(param_1 + 8) == '\0') {
    puVar1 = (undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58;
  }
  func_0x00010c29c220(param_3,param_2,*puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010010fab4();
  uVar2 = param_3;
  if ((int)uVar3 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105cf29bc; end: 105cf29c3; -[SCSearchAttachmentsTransitionController interactiveDismissalHandler] */

undefined8 FUN_105cf29bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cf29c4; end: 105cf29cb; -[SCSearchAttachmentsTransitionController setInteractiveDismissalHandler:] */

void FUN_105cf29c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105cf29cc; end: 105cf29d7; -[SCSearchAttachmentsTransitionController .cxx_destruct] */

void FUN_105cf29cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105cf29d8; end: 105cf2b67; -[SCSearchWebViewController initWithUserSession:attachedURL:presentingQuery:launchSource:safeBrowsingAPI:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105cf29d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ecd58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127344b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127344b8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127344bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127344bc) = uVar4;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127344c0) = param_6;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127344c4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127344c4) = puVar2;
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127344c8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127344c8) = uVar4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127344cc) = 0;
    lVar5 = (long)_DAT_1127344d0;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_1127344d4;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf2b68; end: 105cf2b73; +[SCSearchWebViewController announcerIdentifier] */

undefined ** FUN_105cf2b68(void)

{
  return &PTR____CFConstantStringClassReference_110e28138;
}



/* Entry: 105cf2b74; end: 105cf2b83; -[SCSearchWebViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf2b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127344c4),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cf2b84; end: 105cf2b93; -[SCSearchWebViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf2b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127344c4),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cf2b94; end: 105cf2ba3; -[SCSearchWebViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf2b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127344c4),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 105cf2ba4; end: 105cf2c4b; -[SCSearchWebViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf2ba4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c3e80;
  _objc_alloc(PTR_PTR_1126c3e80);
  func_0x00010c00b240();
  puVar2 = PTR_PTR_1126c3e78;
  _objc_alloc();
  func_0x00010c0412a0();
  lVar4 = (long)_DAT_1127344d8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c16af20(*(undefined8 *)(param_1 + lVar4),param_2,
                      (*(byte *)(param_1 + _DAT_1127344cc) ^ 0xff) & 1,0);
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cf2c4c; end: 105cf307f; -[SCSearchWebViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf2c4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puStack_f8 = PTR_PTR_1126ecd58;
  lStack_100 = param_1;
  _objc_msgSendSuper2(&lStack_100,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c3e88;
  _objc_alloc();
  lVar9 = (long)_DAT_1127344d8;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c2a3bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127344d0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062ee0();
  lVar7 = (long)_DAT_1127344dc;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  lVar7 = param_1;
  func_0x00010c153720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c0d68c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c16e160(lVar4);
  func_0x00010c1cb720(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),lVar4);
  func_0x00010bde57e0(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127344e0);
  func_0x00010c0d6280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127344bc;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105cf5aa0;
  uStack_80 = 0x105cf5ab0;
  uStack_78 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105cf5ab8;
  puStack_b0 = &UNK_11084e620;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105cf5af8;
  puStack_d8 = &UNK_110842b58;
  puStack_a8 = puStack_d0;
  puStack_98 = puStack_d0;
  func_0x00010c0c1180(uVar6);
  uVar8 = puStack_98[5];
  _objc_retain(uVar8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar6);
  func_0x00010c2139c0(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_initWeak(&uStack_a0,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_105cf3080;
  puStack_110 = &UNK_1108e5200;
  _objc_copyWeak(auStack_108,&uStack_a0);
  _objc_copyWeak(auStack_130,&uStack_a0);
  func_0x00010c0c1180(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c117a60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c2a3bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  lVar7 = param_1;
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c0d6700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126c3e90;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127344e4;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(&uStack_a0);
  _objc_release(lVar4);
  return;
}



/* Entry: 105cf3080; end: 105cf3113;  */

void FUN_105cf3080(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf3114; end: 105cf31cf; -[SCSearchWebViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3114(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ecd58;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillLayoutSubviews_112526958);
  lVar3 = (long)_DAT_1127344e0;
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c0d6280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08ce20();
  lVar2 = (long)_DAT_1127344d8;
  func_0x00010c1e48c0(*(undefined8 *)(param_3 + lVar2));
  _objc_release(uVar1);
  func_0x00010c08ce20(*(undefined8 *)(param_3 + lVar3));
  func_0x00010c08ce20(*(undefined8 *)(param_3 + lVar3));
  func_0x00010c08ce20(*(undefined8 *)(param_3 + lVar3));
  func_0x00010c1b9b60(param_1,param_2,0,*(undefined8 *)(param_3 + lVar2));
  return;
}



/* Entry: 105cf31d0; end: 105cf3267; -[SCSearchWebViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf31d0(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ecd58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344d8);
  func_0x00010c117a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_1127344e8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1548a0();
  _objc_release(param_1);
  return;
}



/* Entry: 105cf3268; end: 105cf32df; -[SCSearchWebViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3268(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecd58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010be94620(param_1);
  func_0x00010be94640(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344d8);
  func_0x00010c117a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105cff904();
  _objc_release(uVar1);
  return;
}



/* Entry: 105cf32e0; end: 105cf3463; -[SCSearchWebViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf32e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_1126ecd58;
  lStack_78 = param_3;
  _objc_msgSendSuper2(&lStack_78,PTR_s_viewDidDisappear__112684c48);
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c36d0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ed7818;
  ppuVar1 = *(undefined ***)(param_3 + _DAT_1127344d8);
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_50 = ppuVar2;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127344c4);
  ppuVar5 = &PTR____CFConstantStringClassReference_110ed76d8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puStack_b8 = PTR_PTR_1126ecd58;
  puStack_c0 = puVar3;
  _objc_msgSendSuper2(param_1,param_2,&puStack_c0,PTR_s_viewWillTransitionToSize_withTra_112685490,
                      ppuVar5);
  _objc_initWeak(auStack_c8,puVar3);
  _objc_copyWeak(auStack_e0,auStack_c8);
  uStack_d8 = param_1;
  uStack_d0 = param_2;
  func_0x00010bf02c20(ppuVar5);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(ppuVar5);
  return;
}



/* Entry: 105cf3464; end: 105cf355b; -[SCSearchWebViewController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_105cf3464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ecd58;
  uStack_40 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&uStack_40,PTR_s_viewWillTransitionToSize_withTra_112685490,
                      param_5);
  _objc_initWeak(auStack_48,param_3);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x00010bf02c20(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 105cf355c; end: 105cf358f;  */

void FUN_105cf355c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be726c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cf3590; end: 105cf3597; -[SCSearchWebViewController prefersStatusBarHidden] */

undefined8 FUN_105cf3590(void)

{
  return 1;
}



/* Entry: 105cf3598; end: 105cf359f; -[SCSearchWebViewController shouldDisplayStatusBar] */

undefined8 FUN_105cf3598(void)

{
  return 0;
}



/* Entry: 105cf35a0; end: 105cf35cb; -[SCSearchWebViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cf35a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x108;
  if (*(long *)(param_1 + _DAT_1127344c0) != 1) {
    uVar1 = 0xfb;
  }
  uVar2 = 0x107;
  if (*(long *)(param_1 + _DAT_1127344c0) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 105cf35cc; end: 105cf360f; -[SCSearchWebViewController goBackFromSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf35cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344e0);
  func_0x00010c0d6700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf3610; end: 105cf367b; -[SCSearchWebViewController learnMoreFromSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344d0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08e0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bee4340(param_1,param_2,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cf367c; end: 105cf369f; -[SCSearchWebViewController gestureController:didFinishDismissalAnimationForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf367c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != *(long *)(param_1 + _DAT_1127344d8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
  return;
}



/* Entry: 105cf36a0; end: 105cf36ab; -[SCSearchWebViewController gestureControllerDidTriggerDismiss:] */

void FUN_105cf36a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105cf36ac; end: 105cf36eb; -[SCSearchWebViewController searchControllerDidChangeToText:byChangingCharactersInRange:replacementString:] */

void FUN_105cf36ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be939e0(param_1);
  func_0x00010bedea80(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf36ec; end: 105cf3807; -[SCSearchWebViewController searchControllerShouldReturnWithSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cf36ec(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010beddba0(param_1,param_2,param_3);
  ppuStack_50 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_50 = param_3;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f8a678;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127344c4);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar6,param_2,&PTR____CFConstantStringClassReference_110ed76f8,param_1,puVar1)
  ;
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return 1;
  }
  ___stack_chk_fail();
  if (puVar1[_DAT_1127344ec] == '\x01') {
    puVar1[_DAT_1127344ec] = 0;
    lVar7 = (long)_DAT_1127344d8;
    uVar2 = *(undefined8 *)(puVar1 + lVar7);
    func_0x00010c2a3bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar1 + _DAT_1127344e0);
    func_0x00010c0d6280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(puVar1 + lVar7);
    func_0x00010c2a3bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedea80(puVar1,param_2,uVar4);
    _objc_release(uVar4);
  }
  else {
    uVar5 = *(undefined8 *)(puVar1 + _DAT_1127344e0);
    func_0x00010c0d6280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010c26b700(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedea80(puVar1,param_2,uVar5);
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return uVar6;
}



/* Entry: 105cf3808; end: 105cf3997; -[SCSearchWebViewController searchControllerDidBeginEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(char *)(param_1 + _DAT_1127344ec) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_1127344ec) = 0;
    lVar6 = (long)_DAT_1127344d8;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c2a3bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127344e0);
    func_0x00010c0d6280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c2a3bc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedea80(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127344e0);
    func_0x00010c0d6280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c26b700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedea80(param_1,param_2,uVar5);
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105cf3998; end: 105cf3a2b; -[SCSearchWebViewController searchControllerDidEndEditing] */

void FUN_105cf3998(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d68c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1408e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105cfbb44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  func_0x00010c209fe0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e28698,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cf3a2c; end: 105cf3a9f; -[SCSearchWebViewController shouldBeginInteractiveDismissalGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105cf3a2c(undefined8 param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_1127344d8);
  func_0x00010c2a3bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_2 < 2.2250738585072014e-308;
}



/* Entry: 105cf3aa0; end: 105cf3b4f; -[SCSearchWebViewController webViewNavigationTrackerDidUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_1127344ec) = 1;
  if (*(char *)(param_1 + _DAT_1127344cc) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127344d8);
    uVar1 = param_3;
    func_0x00010bfd5780(param_3);
    func_0x00010c16af20(uVar2,param_2,(uint)uVar1 ^ 1,1);
  }
  uVar1 = param_3;
  func_0x00010bf2cac0(param_3);
  func_0x00010c16e1c0(*(undefined8 *)(param_1 + _DAT_1127344d8),param_2,(uint)uVar1 ^ 1);
  func_0x00010bedaf60(param_1);
  func_0x00010bed7180(param_1);
  func_0x00010bed3380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf3b50; end: 105cf3b9b; -[SCSearchWebViewController webViewNavigationTracker:didLoadEstimatedProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3b50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127344d8);
  func_0x00010c117a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105cff94c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf3b9c; end: 105cf3c0f; -[SCSearchWebViewController webViewNavigationTracker:didCheckSafeBrowsingForURL:urlType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127344d8;
  func_0x00010c1f5120(*(undefined8 *)(param_1 + lVar2),param_2,param_5);
  func_0x00010bed3380(param_1);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c117a60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105cff904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cf3c10; end: 105cf407f; -[SCSearchWebViewController webViewNavigationTracker:didNavigateToDeepLink:isInternalDeeplink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf3c10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
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
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e28158;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e28178;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e28198;
  if (param_5 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e281b8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e281d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e281d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105cf4080;
  puStack_98 = &UNK_1108e5260;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  uStack_90 = param_4;
  func_0x00010beef320(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  puVar5 = PTR_PTR_1126af180;
  if ((param_5 & 1) == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc8ff8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8ff8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar8;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x105cf40b4;
    puStack_c0 = &UNK_11084fd58;
    _objc_retain(param_4);
    uStack_b8 = param_4;
    func_0x00010beef320(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(uStack_b8);
  }
  lVar6 = param_1;
  func_0x00010bee62c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127344b8);
  FUN_105cffa7c(uVar7,lVar6);
  puVar5 = PTR_PTR_1126af180;
  if ((int)uVar7 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db1cd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1cd8,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar8;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105cf4100;
    puStack_f0 = &UNK_1108e5260;
    _objc_copyWeak(auStack_e0,auStack_80);
    _objc_retain(param_4);
    uStack_e8 = param_4;
    func_0x00010beef320(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_e0);
  }
  puVar8 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_110,auStack_80);
  func_0x00010beef320(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar8);
  _objc_release(ppuVar4);
  puVar8 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c235c40(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_110);
  _objc_release(lVar6);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105cf4080; end: 105cf4133;  */

void FUN_105cf4080(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf4134; end: 105cf4197;  */

void FUN_105cf4134(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73980();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf4198; end: 105cf419b; -[SCSearchWebViewController attachmentWebViewDidScroll] */

void FUN_105cf4198(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resignSearchBarIfNeeded_112582b28);
  return;
}



/* Entry: 105cf419c; end: 105cf41c7; -[SCSearchWebViewController attachmentWebViewDidTapBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf419c(long param_1)

{
  func_0x00010be94620();
                    /* WARNING: Could not recover jumptable at 0x00010bf13830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127344dc),PTR_s_back_1125a27b0);
  return;
}



/* Entry: 105cf41c8; end: 105cf4243; -[SCSearchWebViewController attachmentsWebView:didTapWithActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf41c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be94620(param_1);
  param_1 = param_1 + _DAT_1127344f0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0140();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf4244; end: 105cf428f; -[SCSearchWebViewController _resetSearchBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344e0);
  func_0x00010c0d68c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f84e0();
  func_0x00010c1f84c0(uVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf4290; end: 105cf435f; -[SCSearchWebViewController _resignSearchBarIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4290(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127344e0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071280();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0d6280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193b00();
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010bedaf60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed7190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayText_112593608);
    return;
  }
  return;
}



/* Entry: 105cf4360; end: 105cf43df; -[SCSearchWebViewController _resignWebViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4360(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127344d8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073040();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c2a3bc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105cf43e0; end: 105cf43ff; -[SCSearchWebViewController _performRotationUpdates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf43e0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,param_2,*(undefined8 *)(param_3 + _DAT_1127344d8),PTR_s_setFrame__112645658
            );
  return;
}



/* Entry: 105cf4400; end: 105cf4507; -[SCSearchWebViewController _updateLockAndFavicon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4400(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_1127344d8);
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf139e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_1 + _DAT_1127344dc);
    func_0x00010bf60880(lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar4);
    lVar5 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x000108fe4e6c();
  lVar2 = lVar5;
  func_0x00010beec820(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7d00(param_1,param_2,lVar1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105cf4508; end: 105cf45eb; -[SCSearchWebViewController _updateFavicon:pageURL:] */

void FUN_105cf4508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105cf45ec;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105cf45ec; end: 105cf461f;  */

void FUN_105cf45ec(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf4620; end: 105cf49b7; -[SCSearchWebViewController _updateFaviconImage:pageURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4620(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint uVar14;
  long lVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar15 = (long)_DAT_1127344d8;
  uVar2 = *(ulong *)(param_1 + lVar15);
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(uVar4);
  uVar6 = param_4;
  uVar5 = uVar4;
  if (param_4 == uVar4) {
LAB_105cf47f8:
    _objc_release(uVar5);
    _objc_release(uVar6);
LAB_105cf4808:
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
LAB_105cf4820:
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfd9ae0();
    if ((int)uVar12 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)*(undefined8 *)(param_1 + _DAT_1127344dc);
      func_0x00010bfd5780();
    }
    _objc_release(uVar11);
    uVar2 = *(ulong *)(param_1 + _DAT_1127344e0);
    func_0x00010c0d68c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == (undefined *)0x0) || (uVar14 == 0)) {
      uVar1 = 0;
      if (param_3 == (undefined *)0x0) {
        uVar1 = uVar14 ^ 1;
      }
      if ((uVar1 & 1) != 0) {
        func_0x00010c1f84e0(uVar2,param_2,0);
        func_0x00010c1f84c0(uVar2,param_2,0);
        goto LAB_105cf4984;
      }
      if (param_3 == (undefined *)0x0) {
        puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e28678);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_3);
        puVar13 = param_3;
      }
      func_0x00010c1f84e0(uVar2,param_2,puVar13);
      func_0x00010c1f84c0(uVar2,param_2,0);
    }
    else {
      func_0x00010c1f84c0(uVar2,param_2,param_3);
      puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110e28678);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f84e0(uVar2,param_2,puVar13);
    }
    _objc_release(puVar13);
  }
  else {
    if (uVar4 != 0) {
      uVar5 = param_4;
      func_0x00010c071ae0(param_4,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(param_4);
      if ((uVar5 & 1) == 0) goto LAB_105cf46e8;
      goto LAB_105cf4808;
    }
    _objc_release();
LAB_105cf46e8:
    uVar6 = *(ulong *)(param_1 + lVar15);
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf139e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(uVar9);
    if (param_4 == uVar9) {
      _objc_release(uVar9);
      _objc_release(param_4);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      goto LAB_105cf47f8;
    }
    if (uVar9 != 0) {
      uVar10 = param_4;
      func_0x00010c071ae0(param_4,param_2,uVar9);
      _objc_release(uVar9);
      _objc_release(param_4);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar10 & 1) == 0) goto LAB_105cf498c;
      goto LAB_105cf4820;
    }
    _objc_release();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
LAB_105cf4984:
  _objc_release(uVar2);
LAB_105cf498c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf49b8; end: 105cf49fb; -[SCSearchWebViewController _dismissSearchViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf49b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344e0);
  func_0x00010c0d6700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf49fc; end: 105cf4a73; -[SCSearchWebViewController _clearSearchViewContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf49fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_1127344ec) = 0;
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf4a74; end: 105cf4c07; -[SCSearchWebViewController _configureRightBarButtonItemActions] */

void FUN_105cf4a74(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d68c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1408e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105cfbb44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar3;
  func_0x00010c29f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010befbd60(uVar1);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c29f800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010befbd60(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cf4c08; end: 105cf4c4b; -[SCSearchWebViewController _didPressCloseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4c08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344e0);
  func_0x00010c0d6700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf4c4c; end: 105cf4d1f; -[SCSearchWebViewController _updateRightBarButtonStateWithSearchText:] */

void FUN_105cf4c4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  func_0x00010c153720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d68c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1408e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_105cfbb44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  lVar5 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  ppuVar1 = &PTR_PTR_1108e5498;
  if (lVar5 != 0) {
    ppuVar1 = &PTR_PTR_1108e54a0;
  }
  func_0x00010c209fe0(uVar4,param_2,*ppuVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105cf4d20; end: 105cf4e8f; -[SCSearchWebViewController _updatePresentingURLForPresentedQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4d20(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344d8);
  func_0x00010c117a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105cff7f4();
  _objc_release(uVar1);
  puVar2 = param_3;
  func_0x00010c082f40();
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c25cda0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e28118);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_105d0000c();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((int)puVar4 != 0) {
      _objc_retain(puVar3);
      puVar2 = puVar3;
      goto LAB_105cf4e4c;
    }
    puVar4 = param_3;
    FUN_105cf7024(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bdc3460(puVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
LAB_105cf4e4c:
  _objc_release(puVar3);
  func_0x00010bee4340(param_1,param_2,puVar2,0);
  func_0x00010bdcc860(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf4e90; end: 105cf4fe3; -[SCSearchWebViewController _updateWebViewModelWithValidURL:shouldShowPerceivedProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4e90(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127344f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344b8);
  FUN_105cffa7c(uVar1,param_3);
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127344d8);
    func_0x00010c117a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_105cff7f4();
    _objc_release(uVar2);
  }
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3e98;
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar4);
    lVar3 = param_3;
    FUN_105cf51f0(param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d680(puVar4);
    _objc_release(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar5);
  _objc_release(param_3);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127344d8));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf4fe4; end: 105cf50a3; -[SCSearchWebViewController _updateDisplayText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf4fe4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + _DAT_1127344ec) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127344dc);
  func_0x00010bf60880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  uVar1 = uVar2;
  FUN_105cffd48(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127344e0);
  func_0x00010c0d6280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cf50a4; end: 105cf51ef; -[SCSearchWebViewController _updateAttachButtonActionModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf50a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127344d8;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2a3bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf139e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar6 = (long)_DAT_1127344dc;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010bf9e220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = uVar5;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf9e220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  lVar2 = param_1;
  func_0x00010bee62c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127344b8);
  FUN_105cffa7c(uVar4,*(undefined8 *)(param_1 + _DAT_1127344f4));
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  lVar6 = lVar2;
  FUN_105cf51f0(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16af60(uVar5);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cf51f0; end: 105cf543f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf51f0(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    if (param_2 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db1cb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1cb8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 0x4044000000000000;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db1cd8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1cd8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = (undefined *)0x0;
      uVar9 = 0x4040000000000000;
    }
    puVar12 = PTR_PTR_1126b1918;
    ppuVar1 = &PTR_PTR_1108e5368;
    if (param_2 == 0) {
      ppuVar1 = &PTR_PTR_1108e5360;
    }
    puVar11 = *ppuVar1;
    _objc_retain(puVar11);
    _objc_alloc();
    uVar3 = 0x88;
    func_0x00010900fd90();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc();
    lVar5 = param_1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460();
    func_0x00010c053140(0,uVar9,0,uVar9);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar11);
    _objc_release(uVar3);
    _objc_release(puVar10);
    _objc_release(ppuVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127344d8);
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar12);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar7);
  func_0x00010c1d0640(puVar12);
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127344c4);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 105cf5440; end: 105cf555f; -[SCSearchWebViewController _announceWebViewOpenFromQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf5440(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar3 = *(undefined ***)(param_1 + _DAT_1127344d8);
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110ed7818);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  func_0x00010c1d0640(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c36e8,
                      &PTR____CFConstantStringClassReference_110daf5b8);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127344c4);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar6,param_2,&PTR____CFConstantStringClassReference_110ed76d8,param_1,puVar2)
  ;
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105cf5560; end: 105cf5607; -[SCSearchWebViewController _urlForAttachmentWithCurrentURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf5560(long param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_1127344d8);
  func_0x00010c06ce40();
  if ((uVar2 & 1) == 0) {
    func_0x00010c112740(*(undefined8 *)(param_1 + _DAT_1127344dc));
    bVar1 = param_2 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    if (!(bool)(*(long *)(param_1 + _DAT_1127344f4) == 0 | bVar1)) {
      lVar3 = *(long *)(param_1 + _DAT_1127344f4);
    }
  }
  _objc_retain(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105cf5608; end: 105cf579f; -[SCSearchWebViewController _attachDeepLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cf5608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127344d8);
  _objc_retain(param_3);
  func_0x00010c16af20(uVar8,param_2,0,1);
  func_0x00010bedaf60(param_1);
  func_0x00010bed7180(param_1);
  func_0x00010bed3380(param_1);
  lVar1 = param_1;
  func_0x00010bee62c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e284f8;
  lVar3 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = lVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e28478,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x00010be94620(param_1);
  param_1 = param_1 + _DAT_1127344f0;
  _objc_loadWeakRetained();
  func_0x00010bfd0140();
  _objc_release(param_1);
  _objc_release(puVar5);
  lVar6 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar6;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_105cf57a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = lVar6;
  puStack_b0 = puVar4;
  lStack_a8 = lVar3;
  puStack_a0 = puVar2;
  puStack_98 = puVar5;
  lStack_90 = lVar1;
  lStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bee62c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e284f8;
  lVar1 = lVar7;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_c0 = lVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_c0,&ppuStack_c8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e28498,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar1);
  func_0x00010be94620(lVar6);
  lVar6 = lVar6 + _DAT_1127344f0;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bfd0140();
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return lVar7;
  }
  ___stack_chk_fail();
  return *(long *)(lVar7 + _DAT_1127344e0);
}



/* Entry: 105cf57a0; end: 105cf58df; -[SCSearchWebViewController _removeAttachedDeepLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cf57a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bee62c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e284f8;
  lVar3 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_50 = lVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e28498,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x00010be94620(param_1);
  param_1 = param_1 + _DAT_1127344f0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0140();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + _DAT_1127344e0);
}



/* Entry: 105cf58e0; end: 105cf58ef; -[SCSearchWebViewController searchContentViewControllerContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cf58e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127344e0);
}



/* Entry: 105cf58f0; end: 105cf592f; -[SCSearchWebViewController setSearchContentViewControllerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf58f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127344e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf5930; end: 105cf594f; -[SCSearchWebViewController actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf5930(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127344f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf5950; end: 105cf5963; -[SCSearchWebViewController setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf5950(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127344f0,param_3);
  return;
}



/* Entry: 105cf5964; end: 105cf5983; -[SCSearchWebViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf5964(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127344e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf5984; end: 105cf5997; -[SCSearchWebViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf5984(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127344e8,param_3);
  return;
}



/* Entry: 105cf5998; end: 105cf59a7; -[SCSearchWebViewController shouldShowAttachButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cf5998(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127344cc);
}



/* Entry: 105cf59a8; end: 105cf59b7; -[SCSearchWebViewController setShouldShowAttachButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf59a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127344cc) = param_3;
  return;
}



/* Entry: 105cf59b8; end: 105cf5a9f; -[SCSearchWebViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf59b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127344e8);
  _objc_destroyWeak(param_1 + _DAT_1127344f0);
  _objc_storeStrong(param_1 + _DAT_1127344e0,0);
  _objc_storeStrong(param_1 + _DAT_1127344d4,0);
  _objc_storeStrong(param_1 + _DAT_1127344d0,0);
  _objc_storeStrong(param_1 + _DAT_1127344f4,0);
  _objc_storeStrong(param_1 + _DAT_1127344e4,0);
  _objc_storeStrong(param_1 + _DAT_1127344c8,0);
  _objc_storeStrong(param_1 + _DAT_1127344dc,0);
  _objc_storeStrong(param_1 + _DAT_1127344d8,0);
  _objc_storeStrong(param_1 + _DAT_1127344c4,0);
  _objc_storeStrong(param_1 + _DAT_1127344bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127344b8,0);
  return;
}



/* Entry: 105cf5aa0; end: 105cf5ab7;  */

void FUN_105cf5aa0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105cf5ab8; end: 105cf5b2f;  */

void FUN_105cf5ab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_105cffd48();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf5b30; end: 105cf5b3b; +[SCSearchAttachmentsActionHandler announcerIdentifier] */

undefined ** FUN_105cf5b30(void)

{
  return &PTR____CFConstantStringClassReference_110e28218;
}



/* Entry: 105cf5b3c; end: 105cf5b43; -[SCSearchAttachmentsActionHandler addListener:] */

void FUN_105cf5b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cf5b44; end: 105cf5b4b; -[SCSearchAttachmentsActionHandler removeListener:] */

void FUN_105cf5b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cf5b4c; end: 105cf5b53; -[SCSearchAttachmentsActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105cf5b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 105cf5b54; end: 105cf5c77; -[SCSearchAttachmentsActionHandler initWithUserSession:launchSource:dataProvider:safeBrowsingAPI:circumstanceEngine:] */

undefined1 *
FUN_105cf5b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ecd60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf5c78; end: 105cf63d3; -[SCSearchAttachmentsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_105cf5c78(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = param_1;
        _objc_opt_class(param_1);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = 1;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(uVar11);
        _objc_release(puVar3);
        _objc_release(uVar4);
        _objc_release(uVar2);
        lVar5 = param_1 + 0x40;
        _objc_loadWeakRetained(lVar5);
        func_0x00010bf83640();
        _objc_release(lVar5);
        goto LAB_105cf637c;
      }
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = param_1;
        _objc_opt_class(param_1);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7dbc0(uVar11);
        _objc_release(puVar3);
        _objc_release(uVar4);
        _objc_release(uVar2);
        lVar5 = param_1 + 0x40;
        _objc_loadWeakRetained(lVar5);
        func_0x00010bf83640();
        _objc_release(lVar5);
        uVar10 = 1;
        goto LAB_105cf637c;
      }
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar4 == 0) {
        uVar10 = 0;
        goto LAB_105cf637c;
      }
      uVar4 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c3ea0;
      _objc_opt_class(PTR_PTR_1126c3ea0);
      uVar10 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar2 = uVar4;
      if ((uVar10 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar4);
      uVar10 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar3);
      uVar4 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar10);
      uVar10 = uVar2;
      func_0x00010c28f9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010c08fa60();
      _objc_release(uVar10);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (uVar6 != 0) {
        uVar10 = uVar2;
        func_0x00010c28f9a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beba9c0(param_1);
        _objc_release(puVar3);
        _objc_release(uVar10);
      }
    }
    else {
      uVar10 = 1;
      if ((*(byte *)(param_1 + 0x30) & 1) != 0) goto LAB_105cf637c;
      *(undefined1 *)(param_1 + 0x30) = 1;
      uVar4 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c3ea0;
      _objc_opt_class(PTR_PTR_1126c3ea0);
      uVar10 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar3);
      uVar2 = uVar4;
      if ((uVar10 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar4);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      uVar4 = uVar2;
      func_0x00010c28f9a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7f600(param_1);
      _objc_release(puVar3);
      _objc_release(uVar4);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar11);
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010bf341e0();
      if (uVar4 != 0) {
        func_0x00010bf341e0();
      }
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c28f9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar4);
      _objc_release(puVar3);
      uVar4 = param_1;
    }
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  else {
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar10 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar2 = uVar4;
    if ((uVar10 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    func_0x00010c2827c0(uVar2);
    _objc_release(uVar2);
    func_0x00010c17d480(*(undefined8 *)(param_1 + 0x18));
  }
  uVar10 = 1;
LAB_105cf637c:
  _objc_release(uVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    return param_4;
  }
  return uVar10;
}



/* Entry: 105cf63d4; end: 105cf63db;  */

void FUN_105cf63d4(void)

{
  return;
}



/* Entry: 105cf63dc; end: 105cf663f; -[SCSearchAttachmentsActionHandler _showRemoveURLAlertViewWithURL:title:] */

void FUN_105cf63dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dac918;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dac918,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be8dc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf6640; end: 105cf66b3;  */

void FUN_105cf6640(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8dc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf66b4; end: 105cf66bb; -[SCSearchAttachmentsActionHandler _removeURL:] */

void FUN_105cf66b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_removeURL__112629588)
  ;
  return;
}



/* Entry: 105cf66bc; end: 105cf66c3; -[SCSearchAttachmentsActionHandler didFinishOpeningWebView] */

void FUN_105cf66bc(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 105cf66c4; end: 105cf66e7; -[SCSearchAttachmentsActionHandler animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_105cf66c4(void)

{
  _objc_alloc(PTR_PTR_1126c3ea8);
  func_0x00010c038ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf66e8; end: 105cf670b; -[SCSearchAttachmentsActionHandler animationControllerForDismissedController:] */

void FUN_105cf66e8(void)

{
  _objc_alloc(PTR_PTR_1126c3ea8);
  func_0x00010c038ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf670c; end: 105cf68e3; -[SCSearchAttachmentsActionHandler _presentWebViewControllerWithURL:] */

void FUN_105cf670c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3e18;
  _objc_alloc(PTR_PTR_1126c3e18);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf0cb40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3e20;
  func_0x00010c28fb40(PTR_PTR_1126c3e20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cf80(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c219b20(puVar1);
  func_0x00010bef9980(puVar1);
  func_0x00010c161980(puVar1);
  func_0x00010c201040(puVar1);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  puVar3 = PTR_PTR_1126c3e10;
  _objc_alloc(PTR_PTR_1126c3e10);
  func_0x00010c061a60();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c10f100(param_1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105cf68e4; end: 105cf690f;  */

void FUN_105cf68e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf76ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf6910; end: 105cf6927; -[SCSearchAttachmentsActionHandler searchNavigationCoordinator] */

void FUN_105cf6910(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf6928; end: 105cf6933; -[SCSearchAttachmentsActionHandler setSearchNavigationCoordinator:] */

void FUN_105cf6928(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105cf6934; end: 105cf693b; -[SCSearchAttachmentsActionHandler navigationStyle] */

undefined8 FUN_105cf6934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105cf693c; end: 105cf6943; -[SCSearchAttachmentsActionHandler setNavigationStyle:] */

void FUN_105cf693c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 105cf6944; end: 105cf699f; -[SCSearchAttachmentsActionHandler .cxx_destruct] */

void FUN_105cf6944(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cf69a0; end: 105cf6a77; -[SCSearchAttachmentsWebViewViewModel initWithDisplayText:contentURL:attachButtonModel:] */

undefined1 *
FUN_105cf69a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ecd68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf6a78; end: 105cf6a9b; -[SCSearchAttachmentsWebViewViewModel copyWithZone:] */

undefined8 FUN_105cf6a78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105cf6a9c; end: 105cf6b73; -[SCSearchAttachmentsWebViewViewModel initWithCoder:] */

undefined1 * FUN_105cf6a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecd68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf6b74; end: 105cf6be7; -[SCSearchAttachmentsWebViewViewModel encodeWithCoder:] */

void FUN_105cf6b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e28238);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e28258);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e28278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf6be8; end: 105cf6bef; -[SCSearchAttachmentsWebViewViewModel preferFasterCoding] */

undefined8 FUN_105cf6be8(void)

{
  return 1;
}


