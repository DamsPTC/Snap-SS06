/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cda948; end: 107cda977; -[SCFriendUnifiedProfilePromptSectionCreator actionHandler] */

void FUN_107cda948(void)

{
  _objc_alloc(PTR_PTR_1126d7690);
  func_0x00010c0085c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cda978; end: 107cda98f; -[SCFriendUnifiedProfilePromptSectionCreator lifecycleAnnouncer] */

void FUN_107cda978(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cda990; end: 107cda99b; -[SCFriendUnifiedProfilePromptSectionCreator setLifecycleAnnouncer:] */

void FUN_107cda990(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107cda99c; end: 107cda9df; -[SCFriendUnifiedProfilePromptSectionCreator .cxx_destruct] */

void FUN_107cda99c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cda9e0; end: 107cdaa6f; -[SCFriendUnifiedProfilePromptSectionDataCoordinator initWithFeatureSettingsService:] */

undefined1 * FUN_107cda9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa7c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cdaa70; end: 107cdaa87; -[SCFriendUnifiedProfilePromptSectionDataCoordinator setFriendCompassShowing:] */

void FUN_107cdaa70(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x18) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x18) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdcc710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceUpdate_112550b60);
  return;
}



/* Entry: 107cdaa88; end: 107cdaa93; +[SCFriendUnifiedProfilePromptSectionDataCoordinator announcerIdentifier] */

undefined ** FUN_107cdaa88(void)

{
  return &PTR____CFConstantStringClassReference_110eb6e38;
}



/* Entry: 107cdaa94; end: 107cdaa9b; -[SCFriendUnifiedProfilePromptSectionDataCoordinator addUpdateListener:] */

void FUN_107cdaa94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107cdaa9c; end: 107cdaaa3; -[SCFriendUnifiedProfilePromptSectionDataCoordinator removeUpdateListener:] */

void FUN_107cdaa9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107cdaaa4; end: 107cdab27; -[SCFriendUnifiedProfilePromptSectionDataCoordinator contentCellClassesByReuseIdentifier] */

void FUN_107cdaaa4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126d7698;
  _objc_opt_class();
  ppuVar4 = &puStack_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_c0;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar4);
    _objc_initWeak(auStack_90,puVar1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107cdac8c;
    puStack_a8 = &UNK_110a07608;
    puVar6 = auStack_90;
    _objc_copyWeak(auStack_98,puVar6);
    _objc_retain(ppuVar4);
    ppuStack_a0 = ppuVar4;
    _objc_retainBlock();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110eb7098;
    puVar3 = (undefined1 *)ppuVar2;
    _objc_retainBlock();
    puStack_80 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      __Unwind_Resume();
      _objc_retain(puVar6);
      ppuVar2 = ppuVar4 + 5;
      _objc_loadWeakRetained(ppuVar2);
      puVar5 = ppuVar4[4];
      func_0x00010c14fc00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde4de0(ppuVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cdab28; end: 107cdac8b; -[SCFriendUnifiedProfilePromptSectionDataCoordinator configurationBlocksByReuseIdentifier:] */

void FUN_107cdab28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  ppuVar1 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_60,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107cdac8c;
  puStack_78 = &UNK_110a07608;
  puVar6 = auStack_60;
  _objc_copyWeak(auStack_68,puVar6);
  _objc_retain(param_3);
  lStack_70 = param_3;
  _objc_retainBlock();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110eb7098;
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(lStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  _objc_retain(puVar6);
  lVar4 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c14fc00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde4de0(lVar4);
  _objc_release(puVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107cdac8c; end: 107cdacff;  */

void FUN_107cdac8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14fc00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde4de0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cdad00; end: 107cdae23; -[SCFriendUnifiedProfilePromptSectionDataCoordinator _configureCell:onFirstFullContentDraw:] */

void FUN_107cdad00(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d7698;
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
  func_0x00010c1d2520(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1d2040(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cdae24; end: 107cdae6b;  */

void FUN_107cdae24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a5d20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cdae6c; end: 107cdaf13; -[SCFriendUnifiedProfilePromptSectionDataCoordinator setHasDismissedItemWithIdentifier:] */

void FUN_107cdae6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7558);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7578);
    if ((int)uVar1 == 0) goto LAB_107cdaf00;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2011a0();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201180();
  }
  _objc_release(uVar1);
  func_0x00010bdcc700(param_1);
LAB_107cdaf00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cdaf14; end: 107cdaf53; -[SCFriendUnifiedProfilePromptSectionDataCoordinator _announceUpdate] */

void FUN_107cdaf14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e9c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cdaf54; end: 107cdb1b7; -[SCFriendUnifiedProfilePromptSectionDataCoordinator promptItemCellViewModel] */

void FUN_107cdaf54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c2338a0();
  _objc_release(uVar1);
  if ((int)uVar7 != 0) {
    func_0x00010bee9b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107cdb1a0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c2338e0();
    _objc_release(uVar1);
    if ((int)uVar7 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfba6e0();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        func_0x00010c26f320(puVar2);
        puVar6 = *(undefined **)(param_1 + 8);
        func_0x00010c269d40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a0be0();
LAB_107cdb0cc:
        _objc_release(puVar6);
        if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
          lVar3 = *(long *)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bfba700();
          _objc_release(lVar3);
          puVar6 = *(undefined **)(param_1 + 8);
          func_0x00010c269d40(puVar6);
          _objc_retainAutoreleasedReturnValue();
          if (10 < lVar4) {
            func_0x00010c2011a0(puVar6,param_2,0);
            goto LAB_107cdb18c;
          }
          func_0x00010c1a0c00(puVar6,param_2,lVar4 + 1);
          _objc_release(puVar6);
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
        func_0x00010bee9b20(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = puVar2;
        func_0x00010bf64e40(0xc132750000000000,puVar2);
        _objc_retainAutoreleasedReturnValue();
        dVar8 = (double)(lVar4 / 1000);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar6,param_2,puVar5);
        if (dVar8 <= 0.0) {
          _objc_release(puVar5);
          goto LAB_107cdb0cc;
        }
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2011a0();
        _objc_release(uVar7);
        _objc_release(puVar5);
LAB_107cdb18c:
        _objc_release(puVar6);
        param_1 = 0;
      }
      _objc_release(puVar2);
      goto LAB_107cdb1a0;
    }
  }
  param_1 = 0;
LAB_107cdb1a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107cdb1b8; end: 107cdb25b; -[SCFriendUnifiedProfilePromptSectionDataCoordinator _viewModelsForPrivacyExplainer] */

void FUN_107cdb1b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar3 = puVar1;
  FUN_107ce54b8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb7098,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cdb25c; end: 107cdb2ff; -[SCFriendUnifiedProfilePromptSectionDataCoordinator _viewModelsForFriendshipCompassTooltip] */

void FUN_107cdb25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar3 = puVar1;
  FUN_107ce55a8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb7098,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cdb300; end: 107cdb32f; -[SCFriendUnifiedProfilePromptSectionDataCoordinator .cxx_destruct] */

void FUN_107cdb300(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cdb330; end: 107cdb43b; -[SCFriendUnifiedProfilePromptSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdb330(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276d260;
  lVar4 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d76a0;
    _objc_alloc(PTR_PTR_1126d76a0);
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1 + _DAT_11276d268;
      _objc_loadWeakRetained(lVar4);
    }
    func_0x00010c012200(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar4);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107cdb43c; end: 107cdb47f; -[SCFriendUnifiedProfilePromptSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdb43c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276d268);
  _objc_destroyWeak(param_1 + _DAT_11276d260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276d264);
  return;
}



/* Entry: 107cdb480; end: 107cdb55f; -[SCGroupProfileProminentActionsSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdb480(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126d7680;
  _objc_alloc(PTR_PTR_1126d7680);
  lVar7 = (long)_DAT_11276d26c;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcf200();
  lVar6 = param_1;
  func_0x00010beb3fa0(param_1,param_2,lVar5);
  func_0x00010c019000(puVar1,param_2,lVar3,lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cdb560; end: 107cdb56b; -[SCGroupProfileProminentActionsSectionEntryPoint _shouldHideCallActionsWithGroupProfileSubType:] */

bool FUN_107cdb560(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 107cdb56c; end: 107cdb57b; -[SCGroupProfileProminentActionsSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdb56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276d26c);
  return;
}



/* Entry: 107cdb57c; end: 107cdb5ef; -[SCGroupUnifiedProfilePromptSectionActionHandler initWithDataCoordinator:] */

undefined1 * FUN_107cdb57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa7c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cdb5f0; end: 107cdb687; -[SCGroupUnifiedProfilePromptSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_107cdb5f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_4;
    func_0x00010beee2e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5d20(*(undefined8 *)(param_1 + 8),param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107cdb688; end: 107cdb693; -[SCGroupUnifiedProfilePromptSectionActionHandler .cxx_destruct] */

void FUN_107cdb688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cdb694; end: 107cdb723; -[SCGroupUnifiedProfilePromptSectionDataCoordinator initWithFeatureSettingsService:] */

undefined1 * FUN_107cdb694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa7d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cdb724; end: 107cdb72f; +[SCGroupUnifiedProfilePromptSectionDataCoordinator announcerIdentifier] */

undefined ** FUN_107cdb724(void)

{
  return &PTR____CFConstantStringClassReference_110eb6e58;
}



/* Entry: 107cdb730; end: 107cdb737; -[SCGroupUnifiedProfilePromptSectionDataCoordinator addUpdateListener:] */

void FUN_107cdb730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107cdb738; end: 107cdb73f; -[SCGroupUnifiedProfilePromptSectionDataCoordinator removeUpdateListener:] */

void FUN_107cdb738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107cdb740; end: 107cdb7c3; -[SCGroupUnifiedProfilePromptSectionDataCoordinator contentCellClassesByReuseIdentifier] */

void FUN_107cdb740(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126d7698;
  _objc_opt_class();
  ppuVar4 = &puStack_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_c0;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar4);
    _objc_initWeak(auStack_90,puVar1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107cdb928;
    puStack_a8 = &UNK_110a07608;
    puVar6 = auStack_90;
    _objc_copyWeak(auStack_98,puVar6);
    _objc_retain(ppuVar4);
    ppuStack_a0 = ppuVar4;
    _objc_retainBlock();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110eb7098;
    puVar3 = (undefined1 *)ppuVar2;
    _objc_retainBlock();
    puStack_80 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
      __Unwind_Resume();
      _objc_retain(puVar6);
      ppuVar2 = ppuVar4 + 5;
      _objc_loadWeakRetained(ppuVar2);
      puVar5 = ppuVar4[4];
      func_0x00010c14fc00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde5580(ppuVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cdb7c4; end: 107cdb927; -[SCGroupUnifiedProfilePromptSectionDataCoordinator configurationBlocksByReuseIdentifier:] */

void FUN_107cdb7c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  ppuVar1 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_60,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107cdb928;
  puStack_78 = &UNK_110a07608;
  puVar6 = auStack_60;
  _objc_copyWeak(auStack_68,puVar6);
  _objc_retain(param_3);
  lStack_70 = param_3;
  _objc_retainBlock();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110eb7098;
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(lStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  _objc_retain(puVar6);
  lVar4 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c14fc00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde5580(lVar4);
  _objc_release(puVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107cdb928; end: 107cdb99b;  */

void FUN_107cdb928(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14fc00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde5580(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cdb99c; end: 107cdbabf; -[SCGroupUnifiedProfilePromptSectionDataCoordinator _configurePrivacyCell:onFirstFullContentDraw:] */

void FUN_107cdb99c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d7698;
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
  func_0x00010c1d2520(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1d2040(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cdbac0; end: 107cdbb07;  */

void FUN_107cdbac0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a5d20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cdbb08; end: 107cdbb73; -[SCGroupUnifiedProfilePromptSectionDataCoordinator setHasDismissedItemWithIdentifier:] */

void FUN_107cdbb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7518);
  if ((int)param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201180();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcc710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceUpdate_112550b60);
    return;
  }
  return;
}



/* Entry: 107cdbb74; end: 107cdbbb3; -[SCGroupUnifiedProfilePromptSectionDataCoordinator _announceUpdate] */

void FUN_107cdbb74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e9c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cdbbb4; end: 107cdbc17; -[SCGroupUnifiedProfilePromptSectionDataCoordinator promptItemCellViewModel] */

void FUN_107cdbbb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2338a0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bee9b60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cdbc18; end: 107cdbcbb; -[SCGroupUnifiedProfilePromptSectionDataCoordinator _viewModelsForPrivacyExplainer] */

void FUN_107cdbc18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar3 = puVar1;
  FUN_107ce54b8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb7098,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cdbcbc; end: 107cdbceb; -[SCGroupUnifiedProfilePromptSectionDataCoordinator .cxx_destruct] */

void FUN_107cdbcbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cdbcec; end: 107cdbdd3; -[SCAppearAnnouncer initWithAnnouncer:sectionType:] */

undefined1 *
FUN_107cdbcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa7d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x30) = 1;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cdbdd4; end: 107cdbdfb; -[SCAppearAnnouncer initWithAnnouncer:sectionType:sectionOrder:] */

void FUN_107cdbdd4(long param_1)

{
  undefined8 in_x4;
  
  func_0x00010bff3160();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = in_x4;
  }
  return;
}



/* Entry: 107cdbdfc; end: 107cdbe23; -[SCAppearAnnouncer performer] */

void FUN_107cdbdfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cdbe24; end: 107cdbe53; -[SCAppearAnnouncer setSectionType:] */

void FUN_107cdbe24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cdbe54; end: 107cdbe5b; -[SCAppearAnnouncer setSectionOrder:] */

void FUN_107cdbe54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107cdbe5c; end: 107cdbeab; -[SCAppearAnnouncer scheduleBackgroundAnnounce] */

void FUN_107cdbe5c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cdbeac;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cdbeac; end: 107cdbeb3;  */

void FUN_107cdbeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_trigger_11267c938);
  return;
}



/* Entry: 107cdbeb4; end: 107cdbf23; -[SCAppearAnnouncer trigger] */

void FUN_107cdbeb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x20) = lVar1;
  if (lVar1 == *(long *)(param_1 + 0x30)) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107cdbf24;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  }
  return;
}



/* Entry: 107cdbf24; end: 107cdbffb;  */

void FUN_107cdbf24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                      &PTR____CFConstantStringClassReference_110eb4ff8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x18) != -1) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f11f18);
    _objc_release(puVar2);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  uVar4 = *(undefined8 *)(lVar3 + 8);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf7dbc0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f12078,0,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cdbffc; end: 107cdc003; -[SCAppearAnnouncer requiredTriggerCount] */

undefined8 FUN_107cdbffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107cdc004; end: 107cdc00b; -[SCAppearAnnouncer setRequiredTriggerCount:] */

void FUN_107cdc004(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107cdc00c; end: 107cdc047; -[SCAppearAnnouncer .cxx_destruct] */

void FUN_107cdc00c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cdc048; end: 107cdc0bf; -[SCDelayedRunningBlock initWithBlock:] */

undefined1 * FUN_107cdc048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa7e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cdc0c0; end: 107cdc143; -[SCDelayedRunningBlock run] */

void FUN_107cdc0c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__displayLinkDidFire__112538e58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cdc144; end: 107cdc16f; -[SCDelayedRunningBlock _displayLinkDidFire:] */

void FUN_107cdc144(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c069d00(param_3);
                    /* WARNING: Could not recover jumptable at 0x000107cdc16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 107cdc170; end: 107cdc19f; -[SCDelayedRunningBlock .cxx_destruct] */

void FUN_107cdc170(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cdc1a0; end: 107cdc1d7; -[SCPrivateProfileCollectionViewListSection setOnFirstViewMoreDraw:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdc1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276d29c);
  *(undefined8 *)(param_1 + _DAT_11276d29c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cdc1d8; end: 107cdc20f; -[SCPrivateProfileCollectionViewListSection setOnFirstLoadedViewModelsBound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdc1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276d2a0);
  *(undefined8 *)(param_1 + _DAT_11276d2a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cdc210; end: 107cdc2bf; -[SCPrivateProfileCollectionViewListSection cellForItemAtIndexInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdc210(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_40;
  undefined *puStack_38;
  
  plVar2 = &lStack_40;
  puStack_38 = PTR_PTR_1126fa7e8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_cellForItemAtIndexInSection__1125aa878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4678;
  _objc_opt_class(PTR_PTR_1126b4678);
  puVar4 = (undefined1 *)plVar2;
  _objc_opt_isKindOfClass(plVar2,puVar3);
  puVar1 = (undefined1 *)plVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = (long)_DAT_11276d29c;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c1d2520(plVar2);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = 0;
      _objc_release(uVar5);
    }
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 107cdc2c0; end: 107cdc2f7; -[SCPrivateProfileCollectionViewListSection setSectionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdc2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276d2a4);
  *(undefined8 *)(param_1 + _DAT_11276d2a4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cdc2f8; end: 107cdc38f; -[SCPrivateProfileCollectionViewListSection sectionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdc2f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_11276d2a4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c08fa60();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + lVar5);
    ppuStack_38 = &PTR____CFConstantStringClassReference_110eb4ff8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_30,&ppuStack_38,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x00010bf63d80();
  if (puVar3 == (undefined *)0x2) {
    lVar1 = (long)_DAT_11276d2a0;
    if (*(long *)(puVar2 + lVar1) != 0) {
      (**(code **)(*(long *)(puVar2 + lVar1) + 0x10))();
      uVar4 = *(undefined8 *)(puVar2 + lVar1);
      *(undefined8 *)(puVar2 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 107cdc390; end: 107cdc3e3; -[SCPrivateProfileCollectionViewListSection didUpdateSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdc390(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf63d80();
  if (lVar2 == 2) {
    lVar2 = (long)_DAT_11276d2a0;
    if (*(long *)(param_1 + lVar2) != 0) {
      (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 107cdc3e4; end: 107cdc48b; -[SCPrivateProfileCollectionViewListSection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107cdc3e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276d2a4,0);
  _objc_storeStrong(param_1 + _DAT_11276d2a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276d29c,0);
  return;
}



/* Entry: 107cdc48c; end: 107cdc4ef;  */

void FUN_107cdc48c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc130;
  _objc_retain();
  _objc_alloc(puVar1);
  _CACurrentMediaTime();
  func_0x00010c04ac20(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cdc4f0; end: 107cdc557;  */

void FUN_107cdc4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc130;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c04ac20(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cdc558; end: 107cdc78f; -[SCProfileChatMediaContentDownloadingLogger initWithProfileType:sessionId:grapheneServices:userBlizzardServices:] */

undefined1 *
FUN_107cdc558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fa7f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined ***)((long)puVar1 + 0x58) = &PTR__OBJC_CLASS___NSConstantArray_111181a30;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107cdc790; end: 107cdc7b7; -[SCProfileChatMediaContentDownloadingLogger performer] */

void FUN_107cdc790(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cdc7b8; end: 107cdc937; -[SCProfileChatMediaContentDownloadingLogger didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107cdc7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110eb72f8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7238);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7258);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7278);
      if ((int)uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7298);
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb72b8);
          if ((int)uVar1 == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb72d8);
            if ((int)uVar1 == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7378);
              if ((int)uVar1 != 0) {
                func_0x00010bdfcc80(param_1);
              }
            }
            else {
              func_0x00010bdfc620(param_1,param_2,lVar2);
            }
          }
          else {
            func_0x00010bdfdba0(param_1,param_2,lVar2);
          }
        }
        else {
          func_0x00010bdfe860(param_1,param_2,lVar2);
        }
      }
      else {
        func_0x00010bdfe7e0(param_1,param_2,lVar2);
      }
    }
    else {
      func_0x00010bdfe7c0(param_1,param_2,lVar2);
    }
  }
  else {
    func_0x00010beeb3e0(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cdc938; end: 107cdc9fb; -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderInitiated] */

void FUN_107cdc938(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107cdc9fc; end: 107cdca2f;  */

void FUN_107cdc9fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed52c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cdca30; end: 107cdcaf3; -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderWillAppear] */

void FUN_107cdca30(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107cdcaf4; end: 107cdcb27;  */

void FUN_107cdcaf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed5280(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cdcb28; end: 107cdcbcf; -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderScrollStart] */

void FUN_107cdcb28(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107cdcbd0; end: 107cdcbfb;  */

void FUN_107cdcbd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed52a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cdcbfc; end: 107cdccb3; -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderWillDisappear:] */

void FUN_107cdcbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107cdccb4; end: 107cdcce7;  */

void FUN_107cdccb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be518e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cdcce8; end: 107cdce63; -[SCProfileChatMediaContentDownloadingLogger _updateChatMediaFolderInitiatedTime:] */

void FUN_107cdcce8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  *(undefined8 *)(param_2 + 0x60) = param_1;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(undefined **)(param_2 + 0x78) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf529e0(uVar4);
  func_0x00010bf0a0e0(puVar1,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  *(undefined **)(param_2 + 0x80) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf529e0(uVar4);
  func_0x00010bf0a0e0(puVar1,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  *(undefined **)(param_2 + 0x88) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf529e0(uVar4);
  func_0x00010bf0a0e0(puVar1,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  *(undefined **)(param_2 + 0x90) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf529e0(uVar4);
  func_0x00010bf0a0e0(puVar1,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  *(undefined **)(param_2 + 0x98) = puVar1;
  _objc_release(uVar4);
  lVar2 = *(long *)(param_2 + 0x58);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x80),param_3,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cca30,uVar5);
      func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x88),param_3,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cca30,uVar5);
      func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x90),param_3,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cca30,uVar5);
      func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x98),param_3,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cca30,uVar5);
      uVar5 = uVar5 + 1;
      uVar3 = *(ulong *)(param_2 + 0x58);
      func_0x00010bf529e0();
    } while (uVar5 < uVar3);
  }
  return;
}



/* Entry: 107cdce64; end: 107cdce6b; -[SCProfileChatMediaContentDownloadingLogger _updateChatMediaFolderAppearTime:] */

void FUN_107cdce64(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 107cdce6c; end: 107cdce77; -[SCProfileChatMediaContentDownloadingLogger _updateChatMediaFolderHasScrolled] */

void FUN_107cdce6c(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 107cdce78; end: 107cdcfab; -[SCProfileChatMediaContentDownloadingLogger _logChatMediaGalleryOpenLatency:] */

void FUN_107cdce78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d76a8;
  _objc_alloc_init(PTR_PTR_1126d76a8);
  lVar2 = param_1;
  func_0x00010bed1240(param_1);
  func_0x00010c1e4560(puVar1,param_2,lVar2);
  func_0x00010c1e44c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1d4e80(*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60),puVar1);
  func_0x00010c1c7320(puVar1,param_2,1);
  func_0x00010c1a1c80(puVar1,param_2,param_3);
  func_0x00010c16ade0(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010c16ae00(puVar1,param_2,*(undefined8 *)(param_1 + 0x88));
  func_0x00010c2142a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  func_0x00010c214360(puVar1,param_2,*(undefined8 *)(param_1 + 0x98));
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cdcfac; end: 107cdd043; -[SCProfileChatMediaContentDownloadingLogger _willStartToLoadMediaWithId:] */

void FUN_107cdcfac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107cdd044;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cdd044; end: 107cdd0d7;  */

/* WARNING: Possible PIC construction at 0x000107cdd09c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107cdd0a0) */
/* WARNING: Removing unreachable block (ram,0x000107cdd0a8) */
/* WARNING: Removing unreachable block (ram,0x000107cdd0ac) */
/* WARNING: Removing unreachable block (ram,0x000107cdd0b0) */
/* WARNING: Removing unreachable block (ram,0x000107cdd0c4) */
/* WARNING: Removing unreachable block (ram,0x000107cdd0b8) */

void FUN_107cdd044(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107cdd0d8; end: 107cdd233; -[SCProfileChatMediaContentDownloadingLogger _didLoadMediaFromCacheWithId:] */

void FUN_107cdd0d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107cdd170;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cdd234; end: 107cdd35f; -[SCProfileChatMediaContentDownloadingLogger _didLoadMediaThumbnailFromNetworkWithId:] */

void FUN_107cdd234(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107cdd2cc;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cdd360; end: 107cdd48b; -[SCProfileChatMediaContentDownloadingLogger _didLoadRawMediaFromNetworkWithId:] */

void FUN_107cdd360(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107cdd3f8;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cdd48c; end: 107cdd523; -[SCProfileChatMediaContentDownloadingLogger _didFailToLoadMediaWithId:] */

void FUN_107cdd48c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107cdd524;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cdd524; end: 107cdd5bf;  */

void FUN_107cdd524(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x48);
  func_0x00010bf4b900(uVar2,param_3,*(undefined8 *)(param_2 + 0x28));
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40),param_3,
                      *(undefined8 *)(param_2 + 0x28));
  lVar1 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x50);
  func_0x00010c0e00e0(uVar3,param_3,*(undefined8 *)(param_2 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x78);
  func_0x00010bf4b900(uVar4,param_3,*(undefined8 *)(param_2 + 0x28));
  func_0x00010be51920((double)param_1,lVar1,param_3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107cdd5c0; end: 107cdd657; -[SCProfileChatMediaContentDownloadingLogger _didCancelToLoadMediaWithId:] */

void FUN_107cdd5c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107cdd658;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107cdd658; end: 107cdd713;  */

void FUN_107cdd658(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x30);
  func_0x00010bf4b900(uVar2,param_3,*(undefined8 *)(param_2 + 0x28));
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x38);
    func_0x00010bf4b900(uVar2,param_3,*(undefined8 *)(param_2 + 0x28));
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x28);
      func_0x00010bf4b900(uVar2,param_3,*(undefined8 *)(param_2 + 0x28));
      if ((uVar2 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48),param_3,
                            *(undefined8 *)(param_2 + 0x28));
        lVar1 = *(long *)(param_2 + 0x20);
        uVar3 = *(undefined8 *)(lVar1 + 0x50);
        func_0x00010c0e00e0(uVar3,param_3,*(undefined8 *)(param_2 + 0x28));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x78);
        func_0x00010bf4b900(uVar4,param_3,*(undefined8 *)(param_2 + 0x28));
        func_0x00010be51920((double)param_1,lVar1,param_3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 107cdd714; end: 107cdd76b; -[SCProfileChatMediaContentDownloadingLogger _didCloseProfile] */

void FUN_107cdd714(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107cdd76c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 107cdd76c; end: 107cdd823;  */

/* WARNING: Possible PIC construction at 0x000107cdd798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107cdd7b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107cdd7d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107cdd7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107cdd7dc) */
/* WARNING: Removing unreachable block (ram,0x000107cdd7bc) */
/* WARNING: Removing unreachable block (ram,0x000107cdd79c) */
/* WARNING: Removing unreachable block (ram,0x000107cdd7fc) */

void FUN_107cdd76c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010bf529e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be38310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s__incrementChatMediaThumbnailFetc_11256ba60,
             &PTR____CFConstantStringClassReference_110dbfff8,uVar1);
  return;
}



/* Entry: 107cdd824; end: 107cdd84b; -[SCProfileChatMediaContentDownloadingLogger _unifiedProfileTypeToProfileType] */

undefined8 FUN_107cdd824(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 8) - 1;
  if (uVar1 < 3) {
    return *(undefined8 *)(&UNK_10dee5898 + uVar1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107cdd84c; end: 107cdd89f; -[SCProfileChatMediaContentDownloadingLogger _chatMediaFolderBucketIndexForStartTime:] */

void FUN_107cdd84c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_107cdd8a0;
  puStack_20 = &UNK_110a07638;
  uStack_18 = param_1;
  func_0x00010bfece40(*(undefined8 *)(param_2 + 0x58),param_3,&puStack_38);
  return;
}



/* Entry: 107cdd8a0; end: 107cdd8eb;  */

void FUN_107cdd8a0(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x20);
  func_0x00010bfb2c80(param_3);
  *(bool *)param_5 = dVar1 < (double)param_1 / 1000.0;
  return;
}



/* Entry: 107cdd8ec; end: 107cdd953; -[SCProfileChatMediaContentDownloadingLogger _logChatMediaThumbnailFetchNotShownStartTime:isAboveTheFold:] */

void FUN_107cdd8ec(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  
  dVar5 = param_1;
  func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
  lVar1 = param_2;
  func_0x00010bddce80(dVar5 - param_1,param_2);
  if (param_4 != 0) {
    FUN_107cdd954(*(undefined8 *)(param_2 + 0x80),lVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  _objc_retain();
  uVar3 = uVar2;
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107cdd954; end: 107cdd9df;  */

void FUN_107cdd954(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0dfd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cdd9e0; end: 107cddb07; -[SCProfileChatMediaContentDownloadingLogger _logChatMediaThumbnailFetchTimeWithType:isAboveTheFold:startTime:] */

void FUN_107cdd9e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar1 = PTR_PTR_1126b3a48;
  dVar7 = param_1;
  _objc_retain(param_4);
  func_0x00010bf5f3c0(puVar1);
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010bf36d80(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  lVar3 = param_2;
  func_0x00010bddce80(dVar7 - param_1,param_2);
  if (param_5 != 0) {
    FUN_107cdd954(*(undefined8 *)(param_2 + 0x88),lVar3);
  }
  FUN_107cdd954(*(undefined8 *)(param_2 + 0x98),lVar3);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(dVar7 - param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107cddb08; end: 107cddc3f; -[SCProfileChatMediaContentDownloadingLogger _incrementChatMediaThumbnailFetchWithType:value:] */

void FUN_107cddb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_3);
  func_0x00010bf36d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


