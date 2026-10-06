/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c95880; end: 104c95917; -[SCBillboardProfileActivityCardSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104c95880(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_120;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_d0,puVar1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_104c95acc;
    puStack_e0 = &UNK_110845ae0;
    _objc_copyWeak(auStack_d8,auStack_d0);
    ppuVar2 = &puStack_f8;
    _objc_retainBlock();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x104c95b14;
    puStack_108 = &UNK_110845ae0;
    puVar6 = auStack_d0;
    _objc_copyWeak(auStack_100,puVar6);
    _objc_retainBlock();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dacc78;
    ppuVar4 = ppuVar2;
    _objc_retainBlock();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dacc98;
    puVar5 = (undefined1 *)ppuVar3;
    ppuStack_b8 = ppuVar4;
    _objc_retainBlock();
    puStack_b0 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_100);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_d8);
    puVar5 = auStack_d0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_100);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_d0);
      __Unwind_Resume(puVar5);
      _objc_retain(puVar6);
      puVar5 = puVar5 + 0x20;
      _objc_loadWeakRetained(puVar5);
      func_0x00010bde4d40();
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c95918; end: 104c95acb; -[SCBillboardProfileActivityCardSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104c95918(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  ppuVar2 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_90,param_1);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104c95acc;
  puStack_a0 = &UNK_110845ae0;
  _objc_copyWeak(auStack_98,auStack_90);
  ppuVar1 = &puStack_b8;
  _objc_retainBlock();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104c95b14;
  puStack_c8 = &UNK_110845ae0;
  puVar6 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar6);
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dacc78;
  ppuVar3 = ppuVar1;
  _objc_retainBlock();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dacc98;
  puVar4 = (undefined1 *)ppuVar2;
  ppuStack_78 = ppuVar3;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_98);
  puVar4 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar6);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde4d40();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104c95acc; end: 104c95b5b;  */

void FUN_104c95acc(long param_1,undefined8 param_2)

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



/* Entry: 104c95b5c; end: 104c95bcb; -[SCBillboardProfileActivityCardSectionDataProvider _configureCell:] */

void FUN_104c95b5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa0;
  _objc_opt_class(PTR_PTR_1126aeaa0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c95bcc; end: 104c95c3b; -[SCBillboardProfileActivityCardSectionDataProvider _configureNonTemplatedCell:] */

void FUN_104c95bcc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa8;
  _objc_opt_class(PTR_PTR_1126aeaa8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c95c3c; end: 104c95d03; -[SCBillboardProfileActivityCardSectionDataProvider updateSectionWithViewModelList:] */

void FUN_104c95c3c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (param_3 != 0 || uVar4 != 0) {
    if ((param_3 == 0) || (uVar4 == 0)) {
      _objc_release(param_3);
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071b60(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_104c95cf0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c155aa0();
    _objc_release(lVar3);
    func_0x00010c0bbc80(*(undefined8 *)(param_1 + 0x30));
  }
LAB_104c95cf0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c95d04; end: 104c95dbb; -[SCBillboardProfileActivityCardSectionDataProvider _asyncAnnounceSectionWillAppearOnScreen] */

void FUN_104c95d04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104c95dbc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104c95dbc; end: 104c95de7;  */

void FUN_104c95dbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becfc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c95de8; end: 104c95eab; -[SCBillboardProfileActivityCardSectionDataProvider _triggerLifecycleEvent] */

void FUN_104c95de8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f122b8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f12078,0,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c95eac; end: 104c95ec3; -[SCBillboardProfileActivityCardSectionDataProvider dataProviderDelegate] */

void FUN_104c95eac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c95ec4; end: 104c95ecf; -[SCBillboardProfileActivityCardSectionDataProvider setDataProviderDelegate:] */

void FUN_104c95ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104c95ed0; end: 104c95ed7; -[SCBillboardProfileActivityCardSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104c95ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104c95ed8; end: 104c95f07; -[SCBillboardProfileActivityCardSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104c95ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c95f08; end: 104c95f0f; -[SCBillboardProfileActivityCardSectionDataProvider sectionDataModel] */

undefined8 FUN_104c95f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104c95f10; end: 104c95f17; -[SCBillboardProfileActivityCardSectionDataProvider lifecycleAnnouncer] */

undefined8 FUN_104c95f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104c95f18; end: 104c95f47; -[SCBillboardProfileActivityCardSectionDataProvider setLifecycleAnnouncer:] */

void FUN_104c95f18(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104c95f48; end: 104c95fc3; -[SCBillboardProfileActivityCardSectionDataProvider .cxx_destruct] */

void FUN_104c95f48(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c95fc4; end: 104c9610b; -[SCBillboardProfileActivityCardSectionDataSource initWithResourceDownloader:pacCampaignDataProvider:actionHandlers:] */

undefined1 *
FUN_104c95fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e38a8;
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
    puVar3 = PTR_PTR_1126aeab0;
    _objc_alloc();
    func_0x00010c03f8e0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeab8;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    func_0x00010beaa600(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c9610c; end: 104c9623f; -[SCBillboardProfileActivityCardSectionDataSource _setupActionHandlersMap:] */

void FUN_104c9610c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar3 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104c96240; end: 104c963c3;  */

void FUN_104c96240(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_2);
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010beee6c0(*(undefined8 *)(lStack_128 + lVar8 * 8));
          func_0x00010c0df760(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar6);
          _objc_release(puVar3);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = param_2;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(param_2);
    param_1 = *(long *)(param_1 + 0x20);
    _objc_retain(param_1);
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    *(long *)(lVar1 + 0x18) = param_1;
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104c963c4;
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uStack_160 = unaff_x22;
  lStack_158 = param_1;
  lStack_150 = lVar1;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfc9220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_initWeak(auStack_168,lVar2);
  puVar5 = auStack_170;
  _objc_copyWeak(puVar5,auStack_168);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(uVar6);
  return;
}



/* Entry: 104c963c4; end: 104c964bf; -[SCBillboardProfileActivityCardSectionDataSource loadNextCard] */

void FUN_104c963c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc9220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puVar3 = auStack_40;
  _objc_copyWeak(puVar3,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 104c964c0; end: 104c96543;  */

void FUN_104c964c0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010bf529e0();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    if (lVar1 == 0) {
      func_0x00010bddfd20();
    }
    else {
      func_0x00010be050c0();
    }
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bedf420();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c96544; end: 104c966e3; -[SCBillboardProfileActivityCardSectionDataSource _displayViewWithCampaignInfoList:] */

/* WARNING: Possible PIC construction at 0x000104c9669c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c966a0) */
/* WARNING: Removing unreachable block (ram,0x000104c966e0) */
/* WARNING: Removing unreachable block (ram,0x000104c966c0) */

void FUN_104c96544(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010bddfd20(param_1);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = uVar3;
      func_0x00010bf3f4c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf3f4c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar5);
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bb1e0();
      _objc_release(uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bedf430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionWithCurrentCampaig_1125956b0);
  return;
}



/* Entry: 104c966e4; end: 104c96713; -[SCBillboardProfileActivityCardSectionDataSource _clearAllCard] */

void FUN_104c966e4(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bedf430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionWithCurrentCampaig_1125956b0);
  return;
}



/* Entry: 104c96714; end: 104c96953; -[SCBillboardProfileActivityCardSectionDataSource _updateSectionWithCurrentCampaignInfo] */

undefined * FUN_104c96714(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar13 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60(lVar13,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar13);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(lStack_128 + lVar14 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126aeac0;
        _objc_alloc(PTR_PTR_1126aeac0);
        uVar5 = uVar3;
        func_0x00010c2711a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c260dc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010bfe5be0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c233d00(uVar3);
        uVar9 = uVar3;
        func_0x00010bf3f4c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010bf2bf80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar3;
        func_0x00010c077da0();
        func_0x00010c0536e0(puVar4,param_2,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,(char)uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar3);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar13);
  func_0x00010c289940(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0xd;
}



/* Entry: 104c96954; end: 104c9695b; -[SCBillboardProfileActivityCardSectionDataSource order] */

undefined8 FUN_104c96954(void)

{
  return 0xd;
}



/* Entry: 104c9695c; end: 104c96a73; -[SCBillboardProfileActivityCardSectionDataSource section] */

void FUN_104c9695c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126aeac8;
    _objc_alloc();
    func_0x00010c04f820();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110f122b8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    lVar4 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1bd8e0(*(undefined8 *)(param_1 + 0x28),param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010c1f9240(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
    lVar4 = *(long *)(param_1 + 0x20);
  }
  lVar2 = lVar4;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar4 = *(long *)(lVar2 + 0x30);
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104c96a74; end: 104c96a9b; -[SCBillboardProfileActivityCardSectionDataSource actionHandler] */

void FUN_104c96a74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c96a9c; end: 104c96cab; -[SCBillboardProfileActivityCardSectionDataSource tapItem:] */

void FUN_104c96a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    lVar9 = lVar1;
    func_0x00010c0d66a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e500(puVar2,param_2,lVar9,&PTR___NSConcreteGlobalBlock_110845b30);
    _objc_release(lVar9);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0dff20(uVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae9c0;
    _objc_alloc(PTR_PTR_1126ae9c0);
    uVar8 = uVar4;
    func_0x00010c0e6f20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02eca0(puVar5,param_2,puVar2,puVar3,uVar8,3,0);
    _objc_release(uVar8);
    uVar8 = uVar4;
    func_0x00010c0e6f20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010beeed20();
    _objc_release(uVar8);
    lVar9 = *(long *)(param_1 + 0x18);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar9,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (lVar9 != 0) {
      func_0x00010bfd1a40(lVar9,param_2,puVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bb220();
      _objc_release(uVar8);
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
      func_0x00010bedf420(param_1);
    }
    _objc_release(lVar9);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c96cac; end: 104c96cb3;  */

undefined8 FUN_104c96cac(void)

{
  return 1;
}



/* Entry: 104c96cb4; end: 104c96d4f; -[SCBillboardProfileActivityCardSectionDataSource dismissItem:] */

void FUN_104c96cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0dff20(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb1a0();
  _objc_release(uVar1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  _objc_release(param_3);
  func_0x00010bedf420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c96d50; end: 104c96d67; -[SCBillboardProfileActivityCardSectionDataSource lifecycleAnnouncer] */

void FUN_104c96d50(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c96d68; end: 104c96d73; -[SCBillboardProfileActivityCardSectionDataSource setLifecycleAnnouncer:] */

void FUN_104c96d68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 104c96d74; end: 104c96df3; -[SCBillboardProfileActivityCardSectionDataSource .cxx_destruct] */

void FUN_104c96d74(long param_1)

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



/* Entry: 104c96df4; end: 104c96dfb; -[SCMyUnifiedProfilePACSection minimumSectionInteritemSpacing] */

undefined8 FUN_104c96df4(void)

{
  return 0x4024000000000000;
}



/* Entry: 104c96dfc; end: 104c96e03; -[SCMyUnifiedProfilePACSection minimumSectionLineSpacing] */

undefined8 FUN_104c96dfc(void)

{
  return 0x4024000000000000;
}



/* Entry: 104c96e04; end: 104c96f53; -[SCBillboardPacViewModel initWithTitle:subtitle:leftIconUrl:shouldBadge:campaignCofName:accessibilityIdentifier:isMiniCard:] */

undefined1 *
FUN_104c96e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e38b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c96f54; end: 104c96f77; -[SCBillboardPacViewModel copyWithZone:] */

undefined8 FUN_104c96f54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104c96f78; end: 104c97017; -[SCBillboardPacViewModel hash] */

undefined8 * FUN_104c96f78(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104c97100:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104c9710c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_104c9710c;
              }
              goto LAB_104c97100;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104c9710c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104c97018; end: 104c97127; -[SCBillboardPacViewModel isEqual:] */

long FUN_104c97018(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104c97100:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104c9710c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_104c9710c;
              }
              goto LAB_104c97100;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104c9710c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104c97128; end: 104c9712f; -[SCBillboardPacViewModel title] */

undefined8 FUN_104c97128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104c97130; end: 104c97137; -[SCBillboardPacViewModel subtitle] */

undefined8 FUN_104c97130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104c97138; end: 104c9713f; -[SCBillboardPacViewModel leftIconUrl] */

undefined8 FUN_104c97138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104c97140; end: 104c97147; -[SCBillboardPacViewModel shouldBadge] */

undefined1 FUN_104c97140(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104c97148; end: 104c9714f; -[SCBillboardPacViewModel campaignCofName] */

undefined8 FUN_104c97148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104c97150; end: 104c97157; -[SCBillboardPacViewModel accessibilityIdentifier] */

undefined8 FUN_104c97150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104c97158; end: 104c9715f; -[SCBillboardPacViewModel isMiniCard] */

undefined1 FUN_104c97158(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104c97160; end: 104c971b3; -[SCBillboardPacViewModel .cxx_destruct] */

void FUN_104c97160(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104c971b4; end: 104c974f7; -[SCSettingsUsernameEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c971b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_90,param_1);
  puVar1 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae568;
  _objc_opt_new();
  lVar15 = (long)_DAT_11270fe4c;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar2;
  _objc_release(uVar14);
  lVar3 = param_1 + _DAT_11270fe50;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104c974f8;
  puStack_a0 = &UNK_110845b50;
  _objc_copyWeak(auStack_98,auStack_90);
  lVar7 = lVar6;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126aeae8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126ae6b8;
  uStack_80 = *(undefined8 *)(param_1 + lVar15);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar13);
  func_0x00010c0435c0();
  _objc_release(puVar2);
  _objc_release(puVar10);
  param_1 = param_1 + _DAT_11270fe54;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_c0);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  puVar11 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar11);
  _objc_retain(puVar13);
  puVar11 = puVar11 + 0x20;
  _objc_loadWeakRetained(puVar11);
  puVar12 = puVar11;
  func_0x00010be5cd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104c974f8; end: 104c9755b;  */

void FUN_104c974f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5cd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c9755c; end: 104c975a3;  */

void FUN_104c9755c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c975a4; end: 104c975e3; -[SCSettingsUsernameEntryPoint _mapRowViewModelFromUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c975a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270fe58);
  *(undefined8 *)(param_1 + _DAT_11270fe58) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be97b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__rowViewModel_112583880);
  return;
}



/* Entry: 104c975e4; end: 104c9773f; -[SCSettingsUsernameEntryPoint _rowViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c975e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_d0 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104c97740;
  uStack_30 = 0x104c97750;
  uStack_28 = 0;
  puStack_e0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104c97740;
  uStack_60 = 0x104c97750;
  uStack_58 = 0;
  puStack_d8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 1;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104c97758;
  puStack_b0 = &UNK_110845bb0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_104c9779c;
  puStack_e8 = &UNK_110845be0;
  puStack_a8 = puStack_d0;
  puStack_98 = puStack_d8;
  puStack_78 = puStack_e0;
  puStack_48 = puStack_d0;
  func_0x00010c0bf0a0(*(undefined8 *)(param_1 + _DAT_11270fe58),param_2,&puStack_c8,&puStack_100);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c97740; end: 104c97757;  */

void FUN_104c97740(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104c97758; end: 104c9779b;  */

void FUN_104c97758(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c9779c; end: 104c978a3;  */

void FUN_104c9779c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_retain(param_2);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104c980d8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104c980f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053bc0(puVar1);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c2468a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c978a4; end: 104c9792b;  */

void FUN_104c978a4(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 104c9792c; end: 104c97993; -[SCSettingsUsernameEntryPoint _onSettingsRowHandleContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9792c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a7a0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11270fe5c);
  *(undefined8 *)(param_1 + _DAT_11270fe5c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c97994; end: 104c97b4f; -[SCSettingsUsernameEntryPoint _presentChangeUsernameSettingsPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c97994(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  lVar4 = (long)_DAT_11270fe60;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071800();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104c97b50;
    puStack_68 = &UNK_110845c10;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_3);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c0311a0(puVar2);
    puVar3 = PTR_PTR_1126aeb00;
    _objc_alloc(PTR_PTR_1126aeb00);
    func_0x00010c00afc0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4));
    uVar5 = *(undefined8 *)(param_1 + _DAT_11270fe4c);
    func_0x00010be97b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_88);
    _objc_release(param_3);
    _objc_release(uStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104c97b50; end: 104c97b5f;  */

void FUN_104c97b50(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,param_2,1)
  ;
  return;
}



/* Entry: 104c97b60; end: 104c97bc7;  */

void FUN_104c97b60(long param_1,long param_2)

{
  _objc_retain(param_2);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee72a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c97bc8; end: 104c97f7b; -[SCSettingsUsernameEntryPoint _presentLegacyShareUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c97bc8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar1 = param_5 + _DAT_11270fe50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_5 = param_5 + _DAT_11270fe64;
  _objc_loadWeakRetained();
  lVar1 = param_5;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_104c980c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_5);
  puVar6 = PTR_PTR_1126aeb08;
  _objc_alloc(PTR_PTR_1126aeb08);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0f80(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197fe0(puVar6);
  func_0x00010c17fc60(puVar6);
  puVar8 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar9 & 1) != 0) {
    puVar9 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c292ac0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (puVar10 == (undefined *)0x0) goto LAB_104c97ef8;
    func_0x00010c1c8b80(puVar6);
    puVar8 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c103ba0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2072a0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    puVar9 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    puVar10 = puVar6;
    func_0x00010c103ba0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207040(param_3 * 0.5,param_4 * 0.25,0,0);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
LAB_104c97ef8:
  func_0x00010c10eda0(param_7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104c97f7c; end: 104c97f7f;  */

void FUN_104c97f7c(void)

{
  return;
}



/* Entry: 104c97f80; end: 104c97f83; -[SCSettingsUsernameEntryPoint usernameChangeComplete] */

void FUN_104c97f80(void)

{
  return;
}



/* Entry: 104c97f84; end: 104c97fdb; -[SCSettingsUsernameEntryPoint usernameChangeShareComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c97f84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11270fe5c);
  if (lVar1 != 0) {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7c1a0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104c97fdc; end: 104c97fdf; -[SCSettingsUsernameEntryPoint usernameChangeCanceled] */

void FUN_104c97fdc(void)

{
  return;
}



/* Entry: 104c97fe0; end: 104c97fe3; -[SCSettingsUsernameEntryPoint usernameChangeDismissed] */

void FUN_104c97fe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__usernameChangeRemoveScope_112597650);
  return;
}



/* Entry: 104c97fe4; end: 104c9803b; -[SCSettingsUsernameEntryPoint _usernameChangeRemoveScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c97fe4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11270fe60;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104c9803c; end: 104c980bf; -[SCSettingsUsernameEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9803c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270fe60,0);
  _objc_destroyWeak(param_1 + _DAT_11270fe64);
  _objc_destroyWeak(param_1 + _DAT_11270fe50);
  _objc_destroyWeak(param_1 + _DAT_11270fe54);
  _objc_storeStrong(param_1 + _DAT_11270fe5c,0);
  _objc_storeStrong(param_1 + _DAT_11270fe58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270fe4c,0);
  return;
}



/* Entry: 104c980c0; end: 104c98107;  */

void FUN_104c980c0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daccf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daccf8,
                      &PTR____CFConstantStringClassReference_110dacd18,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104c98108; end: 104c983f3; -[SCContactsPermissionRepromptEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c98108(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104c983f4;
  puStack_90 = &UNK_110845cb0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aeb18;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11270fe68;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11270fe6c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11270fe70;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11270fe74;
  lVar10 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11270fe80;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0354c0();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11270fe84);
  *(undefined **)(param_1 + _DAT_11270fe84) = puVar3;
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  param_1 = param_1 + lVar15;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 104c983f4; end: 104c98473;  */

void FUN_104c983f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c98474; end: 104c9850b; -[SCContactsPermissionRepromptEntryPoint _createUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c98474(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + _DAT_11270fe88;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9850c; end: 104c985a3; -[SCContactsPermissionRepromptEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9850c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270fe7c,0);
  _objc_storeStrong(param_1 + _DAT_11270fe78,0);
  _objc_destroyWeak(param_1 + _DAT_11270fe80);
  _objc_destroyWeak(param_1 + _DAT_11270fe70);
  _objc_destroyWeak(param_1 + _DAT_11270fe6c);
  _objc_destroyWeak(param_1 + _DAT_11270fe68);
  _objc_destroyWeak(param_1 + _DAT_11270fe88);
  _objc_destroyWeak(param_1 + _DAT_11270fe74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270fe84,0);
  return;
}



/* Entry: 104c985a4; end: 104c98607; -[SCPreferences userPromptedDate] */

void FUN_104c985a4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dacd58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c98608; end: 104c9867f; -[SCPreferences userPromptedCount] */

ulong FUN_104c98608(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dacd78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c2827c0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 104c98680; end: 104c9868b; -[SCPreferences setUserPromptedDate:] */

void FUN_104c98680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110dacd58);
  return;
}



/* Entry: 104c9868c; end: 104c986d7; -[SCPreferences setUserPromptedCount:] */

void FUN_104c9868c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110dacd78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c986d8; end: 104c986e3; -[SCFeatureSettingsService isContactsEnableDialogLastSeenTimestampAvailable] */

void FUN_104c986d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dacdb8);
  return;
}



/* Entry: 104c986e4; end: 104c986ef; -[SCFeatureSettingsService contactsEnableDialogLastSeenTimestampServerParam] */

undefined ** FUN_104c986e4(void)

{
  return &PTR____CFConstantStringClassReference_110dacdb8;
}



/* Entry: 104c986f0; end: 104c986ff; -[SCFeatureSettingsService setContactsEnableDialogLastSeenTimestamp:] */

void FUN_104c986f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dacdb8,param_3);
  return;
}



/* Entry: 104c98700; end: 104c98707; -[SCFeatureSettingsService contacts_enable_dialog_last_seen_timestamp_client_value:] */

void FUN_104c98700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104c98708; end: 104c9870f; -[SCFeatureSettingsService contacts_enable_dialog_last_seen_timestamp_server_value:] */

void FUN_104c98708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104c98710; end: 104c9871f; -[SCFeatureSettingsService contactsEnableDialogLastSeenTimestamp] */

void FUN_104c98710(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dacdb8,0);
  return;
}



/* Entry: 104c98720; end: 104c9872b; -[SCFeatureSettingsService isContactsEnableDialogSeenCountAvailable] */

void FUN_104c98720(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dacdd8);
  return;
}



/* Entry: 104c9872c; end: 104c98737; -[SCFeatureSettingsService contactsEnableDialogSeenCountServerParam] */

undefined ** FUN_104c9872c(void)

{
  return &PTR____CFConstantStringClassReference_110dacdd8;
}



/* Entry: 104c98738; end: 104c98747; -[SCFeatureSettingsService setContactsEnableDialogSeenCount:] */

void FUN_104c98738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dacdd8,param_3);
  return;
}



/* Entry: 104c98748; end: 104c9874f; -[SCFeatureSettingsService contacts_enable_dialog_seen_count_client_value:] */

void FUN_104c98748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104c98750; end: 104c98757; -[SCFeatureSettingsService contacts_enable_dialog_seen_count_server_value:] */

void FUN_104c98750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104c98758; end: 104c98767; -[SCFeatureSettingsService contactsEnableDialogSeenCount] */

void FUN_104c98758(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dacdd8,0);
  return;
}



/* Entry: 104c98768; end: 104c98af3; -[SCContactsPermissionRepromptWorkflow initWithPermissionPromptUIContainer:allContactsUIContainer:preferences:featureSettingsService:fstCampaignDataProvider:additionalMetricsData:contactPermissionRequestScopeExposer:allContactsScopeExposer:circumstanceEngine:] */

undefined8 *
FUN_104c98768(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e38b8;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    uVar3 = puVar1[3];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4a920();
    _objc_release(uVar3);
    if (0 < (long)uVar4) {
      param_1 = (double)uVar4;
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      if (31536000.0 < param_1) {
        uVar2 = puVar1[3];
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1817e0();
        _objc_release(uVar2);
      }
      _objc_release(puVar5);
    }
    uVar6 = puVar1[6];
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c293320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar2);
    _objc_release(uVar6);
    if ((long)uVar4 < (long)param_1) {
      uVar2 = puVar1[3];
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1817e0();
      _objc_release(uVar2);
    }
    uVar3 = puVar1[6];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c293300();
    _objc_release(uVar3);
    uVar7 = puVar1[3];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf4a940();
    _objc_release(uVar7);
    if (uVar3 < uVar4) {
      uVar2 = puVar1[3];
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181800();
      _objc_release(uVar2);
    }
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 104c98af4; end: 104c98c7f; -[SCContactsPermissionRepromptWorkflow contactPermissionWorkflowCompletedWithPermissionGranted:] */

void FUN_104c98af4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c0bb1c0();
  }
  else {
    func_0x00010c0bb240();
  }
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104c98b9c;
  puStack_48 = &UNK_110845ce0;
  uStack_38 = (undefined1)param_3;
  lStack_40 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  return;
}



/* Entry: 104c98c80; end: 104c98c83; -[SCContactsPermissionRepromptWorkflow contactPermissionWorkflowSkipped] */

void FUN_104c98c80(void)

{
  return;
}



/* Entry: 104c98c84; end: 104c98cdf; -[SCContactsPermissionRepromptWorkflow contactPermissionWorkflowCompletedWithGoToSettings:] */

void FUN_104c98c84(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010bdfb620();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c0bb1c0();
  }
  else {
    func_0x00010c0bb240();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c98ce0; end: 104c98cff; -[SCContactsPermissionRepromptWorkflow allContactsWorkflowCompleted] */

void FUN_104c98ce0(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104c98d00; end: 104c98d47; -[SCContactsPermissionRepromptWorkflow canShowCampaign:] */

undefined8 FUN_104c98d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104c98d48; end: 104c98eeb; -[SCContactsPermissionRepromptWorkflow showCampaign:uiContainer:onComplete:] */

void FUN_104c98d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  uVar6 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1817e0();
  _objc_release(uVar6);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4a940();
  func_0x00010c181800(lVar3,param_2,lVar4 + 1);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126aeb30;
  _objc_alloc(PTR_PTR_1126aeb30);
  func_0x00010c01f0a0();
  puVar5 = PTR_PTR_1126aeb38;
  _objc_alloc(PTR_PTR_1126aeb38);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056700(puVar5,param_2,uVar6,puVar2,param_1,2);
  _objc_release(uVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c98eec; end: 104c98fa7; -[SCContactsPermissionRepromptWorkflow _detachPermissionPromptUIAndRemoveScope] */

void FUN_104c98eec(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104c98f6c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 104c98fa8; end: 104c99043; -[SCContactsPermissionRepromptWorkflow .cxx_destruct] */

void FUN_104c98fa8(long param_1)

{
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



/* Entry: 104c99044; end: 104c990b7; -[SCGrapheneFacebookLinkingMetric2 init] */

undefined1 * FUN_104c99044(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e38c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}


