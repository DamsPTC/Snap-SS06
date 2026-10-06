/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051ab71c; end: 1051ab72b; -[SCCanvasConnectedAppsCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051ab71c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e8f4);
}



/* Entry: 1051ab72c; end: 1051ab76b; -[SCCanvasConnectedAppsCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ab72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e8f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ab76c; end: 1051ab78b; -[SCCanvasConnectedAppsCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ab76c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271e8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ab78c; end: 1051ab79f; -[SCCanvasConnectedAppsCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ab78c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271e8f8,param_3);
  return;
}



/* Entry: 1051ab7a0; end: 1051ab7fb; -[SCCanvasConnectedAppsCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ab7a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e8f8);
  _objc_storeStrong(param_1 + _DAT_11271e8f4,0);
  _objc_storeStrong(param_1 + _DAT_11271e8f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e8ec,0);
  return;
}



/* Entry: 1051ab7fc; end: 1051abaef; -[SCCanvasConnectedAppsHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1051ab7fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126e6b30;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11271e8fc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x0001051b2f38();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11271e900;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x0001051b2f50();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar6);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar4);
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar4);
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1051abaf0; end: 1051abb67; -[SCCanvasConnectedAppsHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051abaf0(double param_1,long param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6b30;
  lStack_30 = param_2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c19f0e0(0x403e000000000000,0,param_1 + -60.0,0x4044000000000000,
                      *(undefined8 *)(param_2 + _DAT_11271e8fc));
  return;
}



/* Entry: 1051abb68; end: 1051abbc7; -[SCCanvasConnectedAppsHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051abb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271e904;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051abbc8; end: 1051abbd3; +[SCCanvasConnectedAppsHeaderView sizeWithViewModel:constrainedToSize:] */

void FUN_1051abbc8(void)

{
  return;
}



/* Entry: 1051abbd4; end: 1051abc5f; -[SCCanvasConnectedAppsHeaderView _didPressActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051abbd4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b02a8;
  uVar4 = *(ulong *)(param_1 + _DAT_11271e904);
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
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271e908));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051abc60; end: 1051abc6f; -[SCCanvasConnectedAppsHeaderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051abc60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e904);
}



/* Entry: 1051abc70; end: 1051abc7f; -[SCCanvasConnectedAppsHeaderView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051abc70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e908);
}



/* Entry: 1051abc80; end: 1051abcbf; -[SCCanvasConnectedAppsHeaderView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051abc80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271e908;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051abcc0; end: 1051abd1f; -[SCCanvasConnectedAppsHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051abcc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e908,0);
  _objc_storeStrong(param_1 + _DAT_11271e904,0);
  _objc_storeStrong(param_1 + _DAT_11271e900,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e8fc,0);
  return;
}



/* Entry: 1051abd20; end: 1051abd27; -[SCCanvasConnectedAppsQueryCoordinator canPerformQuery:] */

undefined8 FUN_1051abd20(void)

{
  return 1;
}



/* Entry: 1051abd28; end: 1051abe8f; -[SCCanvasConnectedAppsQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1051abd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be5bdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be5bdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5bdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  func_0x00010c042a40();
  _objc_release(param_3);
  uVar6 = 0;
  (**(code **)(param_4 + 0x10))(param_4,puVar4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  func_0x00010c0720c0();
  puVar3 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar4 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051abe90; end: 1051abfb3; -[SCCanvasConnectedAppsQueryCoordinator _makeListSectionDescriptorWithIdentifier:] */

void FUN_1051abe90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dca4b8);
  puVar1 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar2,param_2,0,puVar1,puVar3,0,1,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051abfb4; end: 1051abfbb; -[SCCanvasConnectedAppsQueryCoordinator currentQuery] */

undefined8 FUN_1051abfb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051abfbc; end: 1051abfc3; -[SCCanvasConnectedAppsQueryCoordinator setCurrentQuery:] */

void FUN_1051abfbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1051abfc4; end: 1051abfcb; -[SCCanvasConnectedAppsQueryCoordinator isLoading] */

undefined1 FUN_1051abfc4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1051abfcc; end: 1051abfd7; -[SCCanvasConnectedAppsQueryCoordinator .cxx_destruct] */

void FUN_1051abfcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1051abfd8; end: 1051ac093; -[SCCanvasConnectedAppsSectionCreator initWithConnectionsObservable:imageDownloader:actionHandler:] */

undefined1 *
FUN_1051abfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6b38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051ac094; end: 1051ac1bf; -[SCCanvasConnectedAppsSectionCreator sectionForDescriptor:] */

void FUN_1051ac094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  _objc_retain(param_3);
  iVar2 = 0x10dca498;
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dca498,param_2,uVar1);
  _objc_release(uVar1);
  if (iVar2 == 0) {
    iVar2 = 0x10dca4b8;
    uVar1 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dca4b8,param_2,uVar1);
    _objc_release(uVar1);
    if (iVar2 == 0) {
      iVar2 = 0x10dca4d8;
      uVar1 = param_3;
      func_0x00010c27dd80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dca4d8,param_2,uVar1);
      _objc_release(uVar1);
      if (iVar2 == 0) {
        param_1 = 0;
      }
      else {
        func_0x00010be5bca0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010be5be80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010be5bae0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051ac1c0; end: 1051ac24f; -[SCCanvasConnectedAppsSectionCreator _makeHeaderSection] */

void FUN_1051ac1c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5a80;
  _objc_opt_new(PTR_PTR_1126b5a80);
  puVar2 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c161980(puVar2,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c1f9240(puVar2,param_2,puVar1);
  func_0x00010c222a60(puVar2,param_2,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051ac250; end: 1051ac2fb; -[SCCanvasConnectedAppsSectionCreator _makeKitAppsSection] */

void FUN_1051ac250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5a88;
  _objc_alloc(PTR_PTR_1126b5a88);
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c002240(puVar1,param_2,uVar3,lVar2,&PTR___NSConcreteGlobalBlock_11086e510);
  _objc_release(lVar2);
  func_0x0001051b2f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5bde0(param_1,param_2,puVar1,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051ac2fc; end: 1051ac31b;  */

bool FUN_1051ac2fc(undefined8 param_1,long param_2)

{
  func_0x00010bf04ea0(param_2);
  return param_2 == 0;
}



/* Entry: 1051ac31c; end: 1051ac3df; -[SCCanvasConnectedAppsSectionCreator _makeMinisAndGamesAppsSection] */

void FUN_1051ac31c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5a88;
  _objc_alloc(PTR_PTR_1126b5a88);
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c002240(puVar1,param_2,uVar4,lVar2,&PTR___NSConcreteGlobalBlock_11086e530);
  _objc_release(lVar2);
  func_0x0001051b3118();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5a90;
  _objc_alloc_init(PTR_PTR_1126b5a90);
  func_0x00010be5bde0(param_1,param_2,puVar1,lVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051ac3e0; end: 1051ac437;  */

bool FUN_1051ac3e0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf04ea0();
  if (lVar2 == 1) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf04ea0(param_2);
    bVar1 = lVar2 == 2;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1051ac438; end: 1051ac547; -[SCCanvasConnectedAppsSectionCreator _makeListSectionWithSectionDataProvider:titleText:viewMoreProvider:] */

void FUN_1051ac438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b55e0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c019300();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  puVar3 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c161980(puVar3,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c1f9240(puVar3,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c222a60(puVar3,param_2,param_5);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051ac548; end: 1051ac57b; -[SCCanvasConnectedAppsSectionCreator .cxx_destruct] */

void FUN_1051ac548(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051ac57c; end: 1051ac67b; -[SCCanvasConnectedAppsSectionDataProvider initWithConnectionsObservable:imageDownloader:connectionFilterBlock:] */

undefined1 *
FUN_1051ac57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6b40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051ac67c; end: 1051ac687; +[SCCanvasConnectedAppsSectionDataProvider announcerIdentifier] */

undefined ** FUN_1051ac67c(void)

{
  return &PTR____CFConstantStringClassReference_110dc9e78;
}



/* Entry: 1051ac688; end: 1051ac68f; -[SCCanvasConnectedAppsSectionDataProvider addListener:] */

void FUN_1051ac688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1051ac690; end: 1051ac697; -[SCCanvasConnectedAppsSectionDataProvider removeListener:] */

void FUN_1051ac690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1051ac698; end: 1051ac777; -[SCCanvasConnectedAppsSectionDataProvider setUp] */

void FUN_1051ac698(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_1 + 0x30) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  _dispatch_time(0,100000000);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051ac778;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010058c530(uVar1,uVar2,&puStack_60);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051ac778; end: 1051ac7a3;  */

void FUN_1051ac778(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec88a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ac7a4; end: 1051ac7ab; -[SCCanvasConnectedAppsSectionDataProvider tearDown] */

void FUN_1051ac7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1051ac7ac; end: 1051ac7b3; -[SCCanvasConnectedAppsSectionDataProvider numberOfItemsInSection:] */

void FUN_1051ac7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1051ac7b4; end: 1051ac807; -[SCCanvasConnectedAppsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1051ac7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1051ac808;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ac808; end: 1051ac837;  */

void FUN_1051ac808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 1051ac838; end: 1051ac8b7; -[SCCanvasConnectedAppsSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_1051ac838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc9e58;
  puVar1 = PTR_PTR_1126b5a98;
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
  return *(undefined **)(puVar2 + 0x30);
}



/* Entry: 1051ac8b8; end: 1051ac8bf; -[SCCanvasConnectedAppsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_1051ac8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1051ac8c0; end: 1051ac9eb; -[SCCanvasConnectedAppsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1051ac8c0(undefined8 param_1)

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
  pcStack_68 = FUN_1051ac9ec;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc9e58;
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
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1051ac9ec; end: 1051aca33;  */

void FUN_1051ac9ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051aca34; end: 1051acb23; -[SCCanvasConnectedAppsSectionDataProvider _subscribeUpdates] */

void FUN_1051aca34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051acb24; end: 1051acb6b;  */

void FUN_1051acb24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a7c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051acb6c; end: 1051accc7; -[SCCanvasConnectedAppsSectionDataProvider _reloadConnections:] */

void FUN_1051acb6c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051accc8;
  puStack_50 = &UNK_11086e550;
  lStack_48 = param_1;
  func_0x0001006372a4(param_3,&puStack_68);
  lVar5 = *(long *)(param_1 + 0x40);
  _objc_retain();
  _objc_retain(lVar5);
  if (param_3 != 0 || lVar5 != 0) {
    if ((param_3 == 0) || (lVar5 == 0)) {
      _objc_release(lVar5);
      _objc_release(param_3);
    }
    else {
      uVar2 = param_3;
      func_0x00010c071b60();
      _objc_release(lVar5);
      _objc_release(param_3);
      if ((uVar2 & 1) != 0) goto LAB_1051acca8;
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = param_3;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf529e0();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puStack_90 = puVar1;
    uStack_88 = 0xc0000000;
    pcStack_80 = FUN_1051accd8;
    puStack_78 = &UNK_11086e580;
    uStack_70 = uVar3;
    func_0x00010bd86420(uVar4,&puStack_90);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    _objc_release(uVar3);
    *(undefined8 *)(param_1 + 0x30) = 2;
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
LAB_1051acca8:
  _objc_release(param_3);
  return;
}



/* Entry: 1051accc8; end: 1051accd7;  */

void FUN_1051accc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051accd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x18) + 0x10))();
  return;
}



/* Entry: 1051accd8; end: 1051acdcb;  */

void FUN_1051accd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126b5a78;
  _objc_alloc(PTR_PTR_1126b5a78);
  func_0x00010bf04ea0(param_2);
  func_0x00010c0469a0(puVar2);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051acdcc; end: 1051ace67; -[SCCanvasConnectedAppsSectionDataProvider _configureCell:] */

void FUN_1051acdcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5a98;
  _objc_opt_class(PTR_PTR_1126b5a98);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051ace68; end: 1051ace7f; -[SCCanvasConnectedAppsSectionDataProvider dataProviderDelegate] */

void FUN_1051ace68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ace80; end: 1051ace8b; -[SCCanvasConnectedAppsSectionDataProvider setDataProviderDelegate:] */

void FUN_1051ace80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1051ace8c; end: 1051ace93; -[SCCanvasConnectedAppsSectionDataProvider sectionDataModel] */

undefined8 FUN_1051ace8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1051ace94; end: 1051ace9b; -[SCCanvasConnectedAppsSectionDataProvider setSectionDataModel:] */

void FUN_1051ace94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1051ace9c; end: 1051acea3; -[SCCanvasConnectedAppsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1051ace9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1051acea4; end: 1051aced3; -[SCCanvasConnectedAppsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1051acea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051aced4; end: 1051acf5b; -[SCCanvasConnectedAppsSectionDataProvider .cxx_destruct] */

void FUN_1051aced4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051acf5c; end: 1051acf67; +[SCCanvasConnectedAppsViewMoreCell containerStyle] */

undefined1  [16] FUN_1051acf5c(void)

{
  return ZEXT816(0);
}



/* Entry: 1051acf68; end: 1051acfcb; -[SCCanvasConnectedAppsViewMoreCell setViewModel:] */

void FUN_1051acf68(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6b48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setViewModel__1126663d8);
  func_0x00010bf4b000(PTR_PTR_1126b5aa0);
  func_0x00010c20eaa0(param_1);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 1051acfcc; end: 1051ad013; +[SCCanvasConnectedAppsViewMoreCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_1051acfcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bf4b000(PTR_PTR_1126b5aa0);
  func_0x00010bfe0740(PTR_PTR_1126b2780);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1051ad014; end: 1051ad067; -[SCCanvasConnectedAppsViewMoreProvider init] */

void FUN_1051ad014(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b5aa0;
  func_0x00010bf4b000(PTR_PTR_1126b5aa0);
  puStack_28 = PTR_PTR_1126e6b50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithIsCondensed_groupStyle__1125e5558,0,puVar1);
  return;
}



/* Entry: 1051ad068; end: 1051ad0cf; -[SCCanvasConnectedAppsViewMoreProvider viewModelForNumberOfItemsCollapsed:numberOfItemsTotal:] */

void FUN_1051ad068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b5aa8;
  _objc_alloc(PTR_PTR_1126b5aa8);
  puVar2 = puVar1;
  func_0x0001051b3130();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5aa0;
  func_0x00010bf4b000(PTR_PTR_1126b5aa0);
  func_0x00010c053c20(puVar1,param_2,puVar2,0,puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051ad0d0; end: 1051ad0db; +[SCCanvasConnectedAppsViewMoreProvider viewMoreCellClass] */

void FUN_1051ad0d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b5aa0);
  return;
}



/* Entry: 1051ad0dc; end: 1051ad0f7; +[SCCanvasConnectedAppsViewMoreProvider viewMoreCellReuseIdentifier] */

void FUN_1051ad0dc(void)

{
  _objc_opt_class(PTR_PTR_1126b5aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1051ad0f8; end: 1051ad15b; -[SCCanvasConnectedHeaderSectionDataProvider init] */

undefined1 * FUN_1051ad0f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6b58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1051ad15c; end: 1051ad167; +[SCCanvasConnectedHeaderSectionDataProvider announcerIdentifier] */

undefined ** FUN_1051ad15c(void)

{
  return &PTR____CFConstantStringClassReference_110dc9eb8;
}



/* Entry: 1051ad168; end: 1051ad16f; -[SCCanvasConnectedHeaderSectionDataProvider addListener:] */

void FUN_1051ad168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1051ad170; end: 1051ad177; -[SCCanvasConnectedHeaderSectionDataProvider removeListener:] */

void FUN_1051ad170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1051ad178; end: 1051ad257; -[SCCanvasConnectedHeaderSectionDataProvider setUp] */

void FUN_1051ad178(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_1 + 0x10) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  _dispatch_time(0,100000000);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051ad258;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010058c530(uVar1,uVar2,&puStack_60);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051ad258; end: 1051ad283;  */

void FUN_1051ad258(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ad284; end: 1051ad28b; -[SCCanvasConnectedHeaderSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_1051ad284(void)

{
  return 1;
}



/* Entry: 1051ad28c; end: 1051ad35b; -[SCCanvasConnectedHeaderSectionDataProvider containerCellViewModelsForIndexPaths:] */

undefined * FUN_1051ad28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_1051ad35c;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110dc9e98;
    puVar1 = PTR_PTR_1126b5ab0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      return *(undefined **)(puVar3 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar3;
}



/* Entry: 1051ad35c; end: 1051ad3db; -[SCCanvasConnectedHeaderSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_1051ad35c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc9e98;
  puVar1 = PTR_PTR_1126b5ab0;
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
  return *(undefined **)(puVar2 + 0x10);
}



/* Entry: 1051ad3dc; end: 1051ad3e3; -[SCCanvasConnectedHeaderSectionDataProvider dataLoadingStatus] */

undefined8 FUN_1051ad3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051ad3e4; end: 1051ad41f; -[SCCanvasConnectedHeaderSectionDataProvider _handleLoadingFinished] */

void FUN_1051ad3e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 2;
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ad420; end: 1051ad437; -[SCCanvasConnectedHeaderSectionDataProvider dataProviderDelegate] */

void FUN_1051ad420(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051ad438; end: 1051ad443; -[SCCanvasConnectedHeaderSectionDataProvider setDataProviderDelegate:] */

void FUN_1051ad438(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1051ad444; end: 1051ad44b; -[SCCanvasConnectedHeaderSectionDataProvider sectionDataModel] */

undefined8 FUN_1051ad444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1051ad44c; end: 1051ad453; -[SCCanvasConnectedHeaderSectionDataProvider setSectionDataModel:] */

void FUN_1051ad44c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1051ad454; end: 1051ad45b; -[SCCanvasConnectedHeaderSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1051ad454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051ad45c; end: 1051ad48b; -[SCCanvasConnectedHeaderSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1051ad45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051ad48c; end: 1051ad4cf; -[SCCanvasConnectedHeaderSectionDataProvider .cxx_destruct] */

void FUN_1051ad48c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051ad4d0; end: 1051adb8f; -[SCCanvasUserDataDeletionCheckbox initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1051ad4d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126e6b60;
  puVar1 = &uStack_d0;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = (long)_DAT_11271e960;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar2;
    _objc_release(uVar23);
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar23;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar23);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    puVar11 = puVar2;
    func_0x0001051b3238();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(puVar11);
    func_0x00010c21ad00(puVar2);
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar11);
    func_0x00010c1cfce0(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010befbb60(puVar1);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    puStack_a0 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    puStack_98 = puVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf493c0(0xc018000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar11);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar23);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar6);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0();
    func_0x00010c219b60(puVar12);
    puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar12);
    _objc_release(puVar11);
    func_0x00010c1aab40(puVar12);
    func_0x00010befbd60(puVar12);
    func_0x00010befbb60(puVar1);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar13 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    puStack_c0 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar12;
    puStack_b8 = puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf493c0(0xc018000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar12;
    puStack_b0 = puVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar11);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar9);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf258a0();
  func_0x00010c1749e0(puVar2);
  puVar1 = (undefined8 *)(puVar2 + _DAT_11271e964);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf258a0(puVar2);
  func_0x00010bf7da00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 1051adb90; end: 1051adbe7; -[SCCanvasUserDataDeletionCheckbox _checkboxTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051adb90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf258a0();
  func_0x00010c1749e0(param_1,param_2,(uint)lVar1 ^ 1);
  lVar1 = param_1 + _DAT_11271e964;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf258a0(param_1);
  func_0x00010bf7da00(lVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051adbe8; end: 1051adc5b; -[SCCanvasUserDataDeletionCheckbox setButtonSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051adbe8(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(char *)(param_1 + _DAT_11271e968) = (char)param_3;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e960);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9ed8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc9ef8;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051adc5c; end: 1051adc8f; -[SCCanvasUserDataDeletionCheckbox _infoButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051adc5c(long param_1)

{
  param_1 = param_1 + _DAT_11271e964;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051adc90; end: 1051adcaf; -[SCCanvasUserDataDeletionCheckbox delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051adc90(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271e964);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051adcb0; end: 1051adcc3; -[SCCanvasUserDataDeletionCheckbox setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051adcb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271e964,param_3);
  return;
}



/* Entry: 1051adcc4; end: 1051adcd3; -[SCCanvasUserDataDeletionCheckbox buttonSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1051adcc4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271e968);
}



/* Entry: 1051adcd4; end: 1051add0f; -[SCCanvasUserDataDeletionCheckbox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051adcd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e964);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e960,0);
  return;
}



/* Entry: 1051add10; end: 1051adecf; -[SCCanvasConnectedAppsViewController initWithConnectionManager:imageDownloader:preferences:delegate:userTrackedLogger:webBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051add10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e6b68;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c20eaa0(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e96c),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e970),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e974),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e978),param_5);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e97c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e97c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e980);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e980) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271e984;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271e988;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051aded0; end: 1051ae2d7; -[SCCanvasConnectedAppsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051aded0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126e6b68;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  lStack_90 = (long)_DAT_11271e984;
  uVar1 = *(undefined8 *)(param_1 + lStack_90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070adbc8();
  _objc_release(uVar1);
  FUN_1051b2f08();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar12 = (long)_DAT_11271e980;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126b5ab8;
  _objc_alloc();
  lVar8 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = (undefined *)(long)_DAT_11271e974;
  lVar2 = param_1 + (long)puStack_98;
  _objc_loadWeakRetained(lVar2);
  lVar9 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11271e970;
  lVar4 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar4);
  lVar12 = param_1 + _DAT_11271e978;
  _objc_loadWeakRetained(lVar12);
  uStack_a0 = *(undefined8 *)(param_1 + _DAT_11271e988);
  func_0x00010c039280();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e98c);
  *(undefined **)(param_1 + _DAT_11271e98c) = puVar7;
  _objc_release(uVar1);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
  puVar7 = PTR_PTR_1126b5ac0;
  _objc_alloc_init();
  puVar10 = PTR_PTR_1126b5ac8;
  _objc_alloc(PTR_PTR_1126b5ac8);
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar4 = lVar13;
  func_0x00010bf48e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + (long)puStack_98;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c002220(puVar10);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar13);
  puVar11 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e994);
  *(undefined **)(param_1 + _DAT_11271e994) = puVar11;
  _objc_release(uVar1);
  func_0x00010be0f8c0(param_1);
  _objc_release(puVar10);
  puVar10 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_1051ae2d8;
  puStack_c8 = PTR_PTR_1126e6b68;
  puStack_d0 = puVar10;
  puStack_c0 = puVar7;
  lStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_viewWillAppear__1126853f0);
  puVar7 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  func_0x00010c1e6360(*(undefined8 *)(puVar10 + _DAT_11271e994));
  _objc_release(puVar7);
  return;
}



/* Entry: 1051ae2d8; end: 1051ae35b; -[SCCanvasConnectedAppsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae2d8(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6b68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  func_0x00010c1e6360(*(undefined8 *)(param_1 + _DAT_11271e994));
  _objc_release(puVar1);
  return;
}



/* Entry: 1051ae35c; end: 1051ae3bb; -[SCCanvasConnectedAppsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae35c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6b68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  param_1 = param_1 + _DAT_11271e96c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf48640();
  _objc_release(param_1);
  return;
}



/* Entry: 1051ae3bc; end: 1051ae41b; -[SCCanvasConnectedAppsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae3bc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6b68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  param_1 = param_1 + _DAT_11271e96c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf48660();
  _objc_release(param_1);
  return;
}



/* Entry: 1051ae41c; end: 1051ae4db; -[SCCanvasConnectedAppsViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae41c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11271e990;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar4),param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051ae4dc; end: 1051ae5cf; -[SCCanvasConnectedAppsViewController _fetchAppConnections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae4dc(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010beb9a60(param_1,param_2,1);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_11271e970;
  _objc_loadWeakRetained(param_1);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c09a000(param_1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051ae5d0; end: 1051ae637;  */

void FUN_1051ae5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28500();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ae638; end: 1051ae7df; -[SCCanvasConnectedAppsViewController _handleDidFetchAppConnectionsWithError:connections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051ae638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beb9a60(param_1);
  func_0x00010be88500(param_1);
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + _DAT_11271e970;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf48e40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e0e60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051ae7e0; end: 1051ae82b;  */

void FUN_1051ae7e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


