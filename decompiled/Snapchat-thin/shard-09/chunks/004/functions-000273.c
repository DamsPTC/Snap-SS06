/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ce18d4; end: 106ce19e3;  */

void FUN_106ce18d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ce19e4;
  puStack_50 = &UNK_110974e50;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  func_0x00010c0c0800(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b80();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106ce19e4; end: 106ce1a17;  */

void FUN_106ce19e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ce1a18; end: 106ce1acf;  */

void FUN_106ce1a18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010bf3ec40();
  _objc_release(param_2);
  func_0x00010b5f3648();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72fe0(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ce1ad0; end: 106ce1ad7; -[SCGallerySnapsTabController onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:] */

undefined8 FUN_106ce1ad0(void)

{
  return 0;
}



/* Entry: 106ce1ad8; end: 106ce1dab; -[SCGallerySnapsTabController _didTriggerCreateMashupForStory] */

void FUN_106ce1ad8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126aff58;
  _objc_alloc();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c038f60();
    _objc_release(lVar4);
  }
  else {
    func_0x00010c038f60();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_78,param_1);
  puVar5 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106ce1dac;
  puStack_98 = &UNK_1108e3768;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar1);
  puStack_90 = puVar1;
  lStack_88 = param_1;
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(puVar1);
  func_0x00010c0311a0(puVar5);
  puVar6 = PTR_PTR_1126aff70;
  _objc_alloc(PTR_PTR_1126aff70);
  func_0x00010c053560();
  uVar8 = *(undefined8 *)(param_1 + 0x188);
  puVar7 = PTR_PTR_1126aff78;
  func_0x00010bf61160(PTR_PTR_1126aff78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24140(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  param_1 = param_1 + 0x180;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  return;
}



/* Entry: 106ce1dac; end: 106ce1e83;  */

void FUN_106ce1dac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x1c0);
    *(undefined8 *)(lVar3 + 0x1c0) = param_2;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ce1e84; end: 106ce1f33; -[SCGallerySnapsTabController _persentMashupCreationResult:detailedError:] */

void FUN_106ce1e84(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x180;
  _objc_loadWeakRetained();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106ce1f34;
  puStack_58 = &UNK_110858b70;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(lVar1);
  return;
}



/* Entry: 106ce1f34; end: 106ce1ff7;  */

void FUN_106ce1f34(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ce1ff8;
  puStack_48 = &UNK_110858b70;
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined1 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_30 = uVar3;
  _objc_retainBlock();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x1c8);
  if (lVar2 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf84b00(lVar2,param_2,1,ppuVar1);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c8) = 0;
    _objc_release(uVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_30);
  return;
}



/* Entry: 106ce1ff8; end: 106ce21b3;  */

void FUN_106ce1ff8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(*(long *)(param_1 + 0x20) + 8);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  _objc_release();
  puVar4 = PTR_PTR_1126aed70;
  if (puVar1 != (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar2);
    _objc_release(puVar5);
    func_0x00010c10eda0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c0));
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    puVar2 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(puVar2 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(puVar2 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106ce21b4; end: 106ce21fb;  */

void FUN_106ce21b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106ce21fc; end: 106ce2327; -[SCGallerySnapsTabController _presentStartMashupGenerationDialog] */

void FUN_106ce21fc(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x1c8) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0();
    _objc_release(puVar4);
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x1c0));
    uVar5 = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined **)(param_1 + 0x1c8) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106ce2328; end: 106ce232b;  */

void FUN_106ce2328(void)

{
  return;
}



/* Entry: 106ce232c; end: 106ce237b; -[SCGallerySnapsTabController _prepareIsLoadingSnapsFlagIfNeeded:] */

void FUN_106ce232c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bf1f440(param_3,param_2,&PTR____CFConstantStringClassReference_110e83678,1,0);
  lVar1 = 0x60;
  if ((int)param_3 == 0) {
    lVar1 = 0x208;
  }
  *(undefined1 *)(param_1 + lVar1) = 1;
  return;
}



/* Entry: 106ce237c; end: 106ce245b; -[SCGallerySnapsTabController _fireDelayedMemoriesNotLoadingEvent] */

void FUN_106ce237c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + 0x278) == 3) && (*(long *)(param_1 + 0x238) != 0)) {
    uVar1 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    uVar2 = 0;
    _dispatch_time(0,22000000000);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106ce245c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010058c530(uVar2,uVar1,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106ce245c; end: 106ce2553;  */

void FUN_106ce245c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(double *)(param_1 + 0x220) == -1.0)) {
    puVar1 = PTR_PTR_1126b3e90;
    _objc_alloc_init(PTR_PTR_1126b3e90);
    func_0x00010c1c5b60();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e839d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x238);
    func_0x00010bf53fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar3,param_2,puVar1,0,puVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ce2554; end: 106ce2567; -[SCGallerySnapsTabController scrollContentInset] */

undefined8 FUN_106ce2554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 106ce2568; end: 106ce256f; -[SCGallerySnapsTabController visible] */

undefined1 FUN_106ce2568(long param_1)

{
  return *(undefined1 *)(param_1 + 0x268);
}



/* Entry: 106ce2570; end: 106ce2577; -[SCGallerySnapsTabController focused] */

undefined1 FUN_106ce2570(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}



/* Entry: 106ce2578; end: 106ce257f; -[SCGallerySnapsTabController loading] */

undefined1 FUN_106ce2578(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26a);
}



/* Entry: 106ce2580; end: 106ce2587; -[SCGallerySnapsTabController selectMode] */

undefined1 FUN_106ce2580(long param_1)

{
  return *(undefined1 *)(param_1 + 0x26b);
}



/* Entry: 106ce2588; end: 106ce259f; -[SCGallerySnapsTabController delegate] */

void FUN_106ce2588(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ce25a0; end: 106ce25ab; -[SCGallerySnapsTabController setDelegate:] */

void FUN_106ce25a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x270,param_3);
  return;
}



/* Entry: 106ce25ac; end: 106ce25b3; -[SCGallerySnapsTabController tabType] */

undefined8 FUN_106ce25ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 106ce25b4; end: 106ce28ab; -[SCGallerySnapsTabController .cxx_destruct] */

void FUN_106ce25b4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x270);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_destroyWeak(param_1 + 0x200);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_destroyWeak(param_1 + 0x1f0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_destroyWeak(param_1 + 0x1d8);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_destroyWeak(param_1 + 0x180);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ce28ac; end: 106ce2fbf; -[SCGallerySnapsTabDataSource initWithSnapClustererOption:tabType:configuration:dataObjectContext:inlineSearchDataSource:containerViewController:circumstanceEngine:spectaclesContentDataSource:grapheneRegistry:memoriesMergedDataSource:memoriesProfile:memoriesHighlightDataSource:memoriesSaveLogger:capabilitiesManager:snapsTabCRSectionPluginFuture:smartTemplateService:coreConfigProvider:pageLoadMetricManager:memoriesExperimentService:userTrackingLogger:memoriesSnapDocValidator:memoriesMonetizationServices:memoriesUserDefaultsManager:] */

undefined8 *
FUN_106ce28ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
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
  _objc_retain();
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_80 = PTR_PTR_1126f6718;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x149) = 0;
    puVar1[0x26] = 0xbff0000000000000;
    puVar1[0x27] = 0;
    _objc_retain(param_6);
    uVar4 = puVar1[0x11];
    puVar1[0x11] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_9;
    _objc_release(uVar4);
    puVar1[0x1e] = param_4;
    _objc_retain(param_25);
    uVar4 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar4);
    puVar1[0xc] = 0;
    _objc_retain(param_11);
    uVar4 = puVar1[2];
    puVar1[2] = param_11;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d2188;
    _objc_alloc();
    func_0x00010c032040();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = puVar1[4];
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106ce2fc0;
    puStack_98 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_90 = puVar1;
    func_0x00010c0f7fc0(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[0x1f];
    puVar1[0x1f] = param_5;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 0xe,param_7);
    _objc_retain();
    func_0x00010bef9980(param_7);
    _objc_release(param_7);
    _objc_storeWeak(puVar1 + 0x10,param_8);
    _objc_retain(param_12);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar4 = puVar1[0x13];
    puVar1[0x13] = param_14;
    _objc_release(uVar4);
    _objc_retain(param_16);
    uVar4 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar4);
    _objc_retain(param_23);
    uVar4 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar4);
    _objc_retain(param_18);
    uVar4 = puVar1[0x1c];
    puVar1[0x1c] = param_18;
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar4 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar4);
    _objc_retain(param_24);
    uVar4 = puVar1[0x2a];
    puVar1[0x2a] = param_24;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar4);
    puVar1[0x2d] = 0x7fffffffffffffff;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_20);
    uVar4 = puVar1[0x20];
    puVar1[0x20] = param_20;
    _objc_release();
    func_0x000107e902bc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x28];
    puVar1[0x28] = uVar4;
    _objc_release(uVar5);
    if (param_4 != 6) {
      uVar4 = puVar1[0x12];
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980();
      _objc_release(uVar4);
    }
    func_0x00010be661a0(puVar1);
    _objc_initWeak(auStack_b8,puVar1);
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010c297260(param_17);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[0x1b];
    puVar1[0x1b] = 0;
    _objc_release(uVar4);
    uVar4 = param_21;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x21];
    puVar1[0x21] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_21;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x24];
    puVar1[0x24] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_21;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x25];
    puVar1[0x25] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_21;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x22];
    puVar1[0x22] = uVar4;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puStack_90);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ce2fc0; end: 106ce312b;  */

void FUN_106ce2fc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf27500();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ce312c; end: 106ce31c3; -[SCGallerySnapsTabDataSource setSelectMode:] */

void FUN_106ce312c(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x158) != param_3) &&
     (*(char *)(param_1 + 0x158) = (char)param_3, (param_3 & 1) == 0)) {
    func_0x00010bea3e40(param_1,param_2,*(undefined8 *)(param_1 + 0x40));
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfc3c80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106ce31c4; end: 106ce31d3;  */

void FUN_106ce31c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__setMomentViewModels_withUpdateR_112587080,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),1);
  return;
}



/* Entry: 106ce31d4; end: 106ce320b; -[SCGallerySnapsTabDataSource isSearching] */

long FUN_106ce31d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07d540();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106ce320c; end: 106ce323f; -[SCGallerySnapsTabDataSource isShowingRankedSearchResults] */

bool FUN_106ce320c(long param_1)

{
  func_0x00010c154040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106ce3240; end: 106ce32af; -[SCGallerySnapsTabDataSource _isRankedSemanticSearchEnabled] */

undefined8 FUN_106ce3240(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07d540();
  if ((int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe4060();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 106ce32b0; end: 106ce32b7; -[SCGallerySnapsTabDataSource fetchSnapsForEntry:] */

void FUN_106ce32b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchSnapsForEntry__1125c82e8);
  return;
}



/* Entry: 106ce32b8; end: 106ce33c3; -[SCGallerySnapsTabDataSource buildOperaGroupsWithGroupViewModel:currentCellViewModel:callbackQueue:completion:] */

void FUN_106ce32b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106ce33c4;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ce33c4; end: 106ce38ef;  */

void FUN_106ce33c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puStack_188;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010be22a40(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  if (uVar17 != 0xffffffffffffffff) {
    if (*(long *)(param_1 + 0x30) == 0) {
      puStack_188 = (undefined *)0x7fffffffffffffff;
      goto LAB_106ce3674;
    }
    uVar3 = uVar1;
    func_0x00010bf529e0();
    puStack_188 = (undefined *)0x7fffffffffffffff;
    if (uVar3 == 0) goto LAB_106ce3674;
    func_0x00010bf529e0(uVar1);
    uVar3 = uVar1;
    func_0x00010bfecde0();
    if (uVar3 != 0x7fffffffffffffff) {
      uVar17 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
      uVar15 = uVar3 - uVar17;
      uVar15 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
      uVar10 = uVar1;
      func_0x00010bf529e0();
      lVar16 = uVar17 + uVar3;
      if (lVar16 + 1 <= (long)uVar10) {
        uVar10 = lVar16 + 1;
      }
      if ((long)uVar15 < (long)uVar10) {
        do {
          uVar17 = uVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar17;
          func_0x00010c06ece0();
          if ((int)uVar3 != 0) {
            uVar3 = uVar17;
            func_0x00010c11eb20();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar3;
            func_0x00010c252440();
            _objc_release(uVar3);
            if ((int)uVar11 != 3) {
              uVar20 = *(undefined8 *)(param_1 + 0x20);
              uVar3 = uVar17;
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar3;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar17;
              func_0x00010bf97060(uVar17);
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar17;
              func_0x00010c245680(uVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c074da0(uVar17);
              func_0x00010be6dac0(uVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(uVar20);
              _objc_release(uVar14);
              _objc_release(uVar13);
              _objc_release(uVar12);
              _objc_release(uVar11);
              _objc_release(uVar3);
              if (*(ulong *)(param_1 + 0x30) == uVar17) {
                puStack_188 = puVar2;
                func_0x00010bf529e0();
                puStack_188 = puStack_188 + -1;
              }
            }
          }
          _objc_release(uVar17);
          uVar15 = uVar15 + 1;
        } while (uVar10 != uVar15);
      }
      goto LAB_106ce3674;
    }
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(uVar1);
  uVar17 = uVar1;
  func_0x00010bf52a60();
  if (uVar17 == 0) {
    puStack_188 = (undefined *)0x7fffffffffffffff;
  }
  else {
    lVar16 = *plStack_120;
    puStack_188 = (undefined *)0x7fffffffffffffff;
    do {
      uVar3 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(uVar1);
        }
        lVar19 = *(long *)(lStack_128 + uVar3 * 8);
        lVar4 = lVar19;
        func_0x00010c06ece0();
        if ((int)lVar4 != 0) {
          lVar4 = lVar19;
          func_0x00010c11eb20();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c252440();
          _objc_release(lVar4);
          if ((int)lVar5 != 3) {
            uVar20 = *(undefined8 *)(param_1 + 0x20);
            lVar4 = lVar19;
            func_0x00010c245680(lVar19);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar19;
            func_0x00010bf97060();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar19;
            func_0x00010c245680(lVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c074da0(lVar19);
            func_0x00010be6dac0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(uVar20);
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
            if (*(long *)(param_1 + 0x30) == lVar19) {
              puStack_188 = puVar2;
              func_0x00010bf529e0();
              puStack_188 = puStack_188 + -1;
            }
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar17 != uVar3);
      uVar17 = uVar1;
      func_0x00010bf52a60();
    } while (uVar17 != 0);
  }
  _objc_release(uVar1);
LAB_106ce3674:
  puVar18 = *(undefined **)(param_1 + 0x40);
  if (puVar18 != (undefined *)0x0) {
    lVar16 = *(long *)(param_1 + 0x38);
    if (lVar16 == 0) {
      puVar9 = puVar2;
      func_0x00010bf51e00();
      (**(code **)(puVar18 + 0x10))(puVar18,puVar9,puStack_188);
    }
    else {
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_106ce38f0;
      puStack_150 = &UNK_11085b7b0;
      _objc_retain(puVar18);
      puStack_140 = puVar18;
      _objc_retain(puVar2);
      puStack_148 = puVar2;
      puStack_138 = puStack_188;
      func_0x00010007380c(lVar16,&puStack_168);
      _objc_release(puStack_148);
      puVar9 = puStack_140;
    }
    _objc_release(puVar9);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar20 = *(undefined8 *)(uVar1 + 0x20);
    lVar16 = *(long *)(uVar1 + 0x28);
    func_0x00010bf51e00(uVar20);
    (**(code **)(lVar16 + 0x10))(lVar16,uVar20,*(undefined8 *)(uVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar20);
    return;
  }
  return;
}



/* Entry: 106ce38f0; end: 106ce3937;  */

void FUN_106ce38f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ce3938; end: 106ce3af3; -[SCGallerySnapsTabDataSource getClusterBodyViewModelsForClusterTitle:] */

void FUN_106ce3938(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar4);
  if ((uVar1 & 1) == 0) {
    func_0x000106e39574();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106e39580();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (lVar3 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106ce3a74;
    puStack_48 = &UNK_110974f20;
    _objc_retain(lVar3);
    lStack_40 = lVar3;
    _objc_retain(puVar2);
    puStack_38 = puVar2;
    func_0x00010bf97e80(uVar1,param_2,&puStack_60);
    _objc_retain(puVar2);
    _objc_release(puStack_38);
    _objc_release(lStack_40);
    puVar5 = puVar2;
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106ce3af4; end: 106ce3c8f; -[SCGallerySnapsTabDataSource getClusterBodyViewModelsForSnapId:] */

void FUN_106ce3af4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *unaff_x20;
  long unaff_x22;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    unaff_x20 = PTR_PTR_1126cfb18;
    func_0x00010bf65540(PTR_PTR_1126cfb18,param_2,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    param_1 = *(long *)(param_1 + 0x48);
    _objc_retain(param_1);
    lVar9 = param_1;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar8 = *plStack_120;
      unaff_x22 = lVar9;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_1);
          }
          puVar7 = *(undefined1 **)(lStack_128 + lVar9 * 8);
          puVar2 = puVar7;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x20;
          puVar6 = (undefined8 *)puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if (((ulong)puVar3 & 1) != 0) {
            _objc_retain(puVar7);
            goto LAB_106ce3c30;
          }
          lVar9 = lVar9 + 1;
        } while (unaff_x22 != lVar9);
        unaff_x22 = param_1;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (unaff_x22 != 0);
    }
    puVar7 = (undefined1 *)0x0;
LAB_106ce3c30:
    _objc_release(param_1);
    _objc_release(unaff_x20);
    param_3 = (undefined1 *)puVar6;
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106ce3c90;
  lStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = unaff_x20;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar1 = puVar3 + 0x70;
  _objc_loadWeakRetained();
  puVar4 = puVar1;
  func_0x00010c07d540();
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(puVar3 + 8);
    func_0x00010bfc3c80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_106ce3d5c;
    puStack_178 = &UNK_110841f80;
    puStack_170 = puVar3;
    _objc_retain(param_3);
    puStack_168 = param_3;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_190);
    _objc_release(uVar5);
    _objc_release(puStack_168);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ce3c90; end: 106ce3d5b; -[SCGallerySnapsTabDataSource clusterTitlesDidAppear:] */

void FUN_106ce3c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c07d540();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfc3c80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106ce3d5c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
    _objc_release(uVar3);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ce3d5c; end: 106ce3d9f;  */

void FUN_106ce3d5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  *(long *)(*(long *)(param_1 + 0x20) + 0xd0) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c283f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 200),
             PTR_s_updateCRViewModelForDateMetadata_11267ea08,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0));
  return;
}



/* Entry: 106ce3da0; end: 106ce3df7; -[SCGallerySnapsTabDataSource forceReload] */

void FUN_106ce3da0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ce3df8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 106ce3df8; end: 106ce3e4b;  */

void FUN_106ce3df8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x18) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar2);
  func_0x00010bed7780(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ce3e4c; end: 106ce3ed3; -[SCGallerySnapsTabDataSource _reclusterCompletion] */

void FUN_106ce3e4c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ce3ed4;
  puStack_38 = &UNK_1108942c0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106ce3ed4; end: 106ce3f77;  */

void FUN_106ce3ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be1b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5b60(param_1);
    func_0x00010bea4d40(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ce3f78; end: 106ce3ff7; -[SCGallerySnapsTabDataSource forceUpdateFeaturedStoriesViewModel] */

void FUN_106ce3f78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x000107e763b0(uVar2,*(undefined8 *)(param_1 + 0xa0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea3e40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ce3ff8; end: 106ce402b; -[SCGallerySnapsTabDataSource forceReRankStories] */

void FUN_106ce3ff8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ce402c; end: 106ce4033; -[SCGallerySnapsTabDataSource firstDataFetchFinishedTimeSec] */

undefined8 FUN_106ce402c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 106ce4034; end: 106ce403b; -[SCGallerySnapsTabDataSource numSnapsInFirstDataFetch] */

undefined8 FUN_106ce4034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 106ce403c; end: 106ce40a7; -[SCGallerySnapsTabDataSource setVisible:] */

void FUN_106ce403c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + 0x148) = (char)param_3;
  if (((param_3 != 0) && (*(long *)(param_1 + 0xf0) == 6)) &&
     ((*(byte *)(param_1 + 0x149) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x149) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ce40a8; end: 106ce476f; -[SCGallerySnapsTabDataSource _operaGroupWithGroudId:entry:snaps:isFavorited:] */

void FUN_106ce40a8(long param_1,undefined8 param_2,long param_3,long param_4,undefined *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  double dVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x68));
  puVar3 = PTR_PTR_1126cdc10;
  func_0x00010c0eb500();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar4 != 8) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    puVar6 = param_5;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_5);
        }
        puVar7 = PTR_PTR_1126af4d0;
        uVar16 = *(ulong *)((long)puVar19 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar7);
        uVar8 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar7);
        uVar1 = uVar16;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar16);
        uVar8 = uVar1;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = PTR_PTR_1126b2608;
        if (uVar8 == 0) {
          func_0x00010c243fe0(PTR_PTR_1126b2608);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c23fe20();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241220(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar17);
        _objc_release(uVar16);
        _objc_release(puVar7);
        _objc_release(uVar1);
        puVar19 = puVar19 + 1;
      } while (puVar6 != puVar19);
      puVar6 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    puVar6 = PTR_PTR_1126b2610;
    _objc_alloc();
    puVar19 = puVar5;
    func_0x00010bf51e00();
    puVar7 = puVar17;
    func_0x00010bf51e00();
    puVar13 = puVar19;
    puVar14 = puVar7;
    func_0x00010c019020();
    goto LAB_106ce46f0;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bf81160();
  puVar5 = PTR_PTR_1126af4d0;
  if (iVar2 == 0) {
    puVar5 = param_5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar6);
  }
  puVar6 = puVar5;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar5);
LAB_106ce44c0:
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_5);
    puVar6 = param_5;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_5);
        }
        puVar19 = PTR_PTR_1126af4d0;
        uVar16 = *(ulong *)((long)puVar17 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar19);
        uVar8 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar19);
        uVar1 = uVar16;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar16);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar5);
        }
        _objc_release(uVar1);
        puVar17 = puVar17 + 1;
      } while (puVar6 != puVar17);
      puVar6 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    puVar17 = PTR_PTR_1126bc808;
    func_0x00010bfa6fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126b2608;
    func_0x00010c270300();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2610;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    puVar14 = puVar12;
    func_0x00010c019020();
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  else {
    if (puVar5 == (undefined *)0x0) goto LAB_106ce44c0;
    puVar17 = PTR_PTR_1126b2608;
    func_0x00010c23fe20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2610;
    _objc_alloc();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar19;
    puVar14 = puVar10;
    func_0x00010c019020();
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
LAB_106ce46f0:
  _objc_release(puVar7);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  lVar4 = param_3 + 0x70;
  _objc_loadWeakRetained();
  lVar15 = lVar4;
  func_0x00010c07d540();
  _objc_release(lVar4);
  puVar3 = puVar13;
  if ((int)lVar15 == 0) {
    dVar20 = *(double *)(param_3 + 0x130);
    if (dVar20 == -1.0) {
      _CACurrentMediaTime();
      *(double *)(param_3 + 0x130) = dVar20;
      puVar6 = puVar13;
      func_0x00010bf529e0();
      *(undefined **)(param_3 + 0x138) = puVar6;
    }
    puVar6 = puVar14;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      puVar3 = PTR____NSArray0__struct_11034ab48;
      if (puVar13 != (undefined *)0x0) {
        puVar3 = puVar13;
      }
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
    }
    uVar18 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(puVar14);
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(uVar18);
    _objc_release(puVar3);
    _objc_release(puVar14);
  }
  else {
    func_0x00010bedf0e0(param_3);
  }
  _objc_release(puVar14);
  _objc_release(puVar3);
  return;
}



/* Entry: 106ce4770; end: 106ce48bf; -[SCGallerySnapsTabDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106ce4770(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07d540();
  _objc_release(lVar1);
  puVar4 = param_4;
  if ((int)lVar2 == 0) {
    dVar6 = *(double *)(param_1 + 0x130);
    if (dVar6 == -1.0) {
      _CACurrentMediaTime();
      *(double *)(param_1 + 0x130) = dVar6;
      puVar3 = param_4;
      func_0x00010bf529e0();
      *(undefined **)(param_1 + 0x138) = puVar3;
    }
    lVar1 = param_5;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if (param_4 != (undefined *)0x0) {
        puVar4 = param_4;
      }
      func_0x00010bf09f80(puVar4,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106ce48c0;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    _objc_retain(param_5);
    lStack_50 = param_5;
    _objc_retain(puVar4);
    puStack_48 = puVar4;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_78);
    _objc_release(puStack_48);
    _objc_release(lStack_50);
  }
  else {
    func_0x00010bedf0e0(param_1);
  }
  _objc_release(param_5);
  _objc_release(puVar4);
  return;
}



/* Entry: 106ce48c0; end: 106ce4903;  */

void FUN_106ce48c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bed7790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateEntries__112593788,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106ce4904; end: 106ce4b07; -[SCGallerySnapsTabDataSource _observeFeaturedStories] */

void FUN_106ce4904(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  uVar9 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar9);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0a20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ce4b08;
  puStack_88 = &UNK_110974f50;
  _objc_retain(uVar9);
  uVar5 = uVar4;
  uStack_80 = uVar9;
  func_0x00010c0b8600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e0e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar9);
  return;
}



/* Entry: 106ce4b08; end: 106ce4b17;  */

void FUN_106ce4b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(uVar2);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d2138;
  _objc_alloc(PTR_PTR_1126d2138);
  func_0x00010c0122c0();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ce4b18; end: 106ce4b6b;  */

void FUN_106ce4b18(long param_1,long param_2)

{
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bdf85c0(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ce4b6c; end: 106ce4c6f; -[SCGallerySnapsTabDataSource _debounceUpdateWithFeaturedStoriesSectionModelIfNeeded:] */

void FUN_106ce4b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be3d8e0(param_1);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    _objc_release(lVar2);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x148);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    if ((bVar1 & 1) != 0) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_106ce4c70;
      puStack_48 = &UNK_1108bae08;
      lStack_40 = param_1;
      _objc_retain(param_3);
      uStack_38 = param_3;
      func_0x00010c150360(0x3ff8000000000000,puVar4,param_2,0,&puStack_60);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x118);
      *(undefined **)(param_1 + 0x118) = puVar4;
      _objc_release(uVar5);
      _objc_release(uStack_38);
      goto LAB_106ce4c54;
    }
  }
  func_0x00010bea3e40(param_1,param_2,param_3);
LAB_106ce4c54:
  _objc_release(param_3);
  return;
}



/* Entry: 106ce4c70; end: 106ce4c9b;  */

void FUN_106ce4c70(long param_1,undefined8 param_2)

{
  func_0x00010bea3e40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be3d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__invalidateFeaturedStoriesUpdati_11256cfd8);
  return;
}



/* Entry: 106ce4c9c; end: 106ce4cc7; -[SCGallerySnapsTabDataSource _invalidateFeaturedStoriesUpdatingTimer] */

void FUN_106ce4c9c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x118));
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ce4cc8; end: 106ce4d2f; -[SCGallerySnapsTabDataSource _updateSearchResults] */

void FUN_106ce4cc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07d540();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    func_0x00010c289880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106ce4d30; end: 106ce4e77; -[SCGallerySnapsTabDataSource _filteredEntriesWithEntries:] */

void FUN_106ce4d30(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106ce4e78;
  puStack_70 = &UNK_11085a518;
  lVar3 = param_3;
  lStack_68 = param_1;
  func_0x00010c14cca0(param_3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c0ec1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c242660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  lVar4 = lVar3;
  if (lVar5 != 0) {
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106ce4ee0;
    puStack_98 = &UNK_11085a518;
    lStack_90 = param_1;
    func_0x00010c14cca0(lVar3,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = lVar4;
  func_0x00010bf529e0();
  if (0 < lVar2 - lVar3) {
    func_0x00010bfb0660(PTR_PTR_1126b24e0,param_2,lVar2 - lVar3,lVar2,
                        *(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106ce4e78; end: 106ce4edf;  */

undefined8 FUN_106ce4e78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c0ec1e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf99a80();
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106ce4ee0; end: 106ce5043;  */

undefined1 * FUN_106ce4ee0(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bfaa500();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          puVar6 = *(undefined8 **)(lStack_118 + lVar8 * 8);
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010c0ec1e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010bf99ac0();
          _objc_release(uVar3);
          if ((int)uVar5 == 0) {
            puVar4 = (undefined1 *)0x0;
            goto LAB_106ce4ff0;
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar1;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    puVar4 = (undefined1 *)0x1;
LAB_106ce4ff0:
    _objc_release(lVar1);
    param_2 = (undefined1 *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f88c0(uVar5);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_2;
}



/* Entry: 106ce5044; end: 106ce50d3; -[SCGallerySnapsTabDataSource _updateEntries:] */

void FUN_106ce5044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ce50d4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ce50d4; end: 106ce50df;  */

void FUN_106ce50d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be871d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reclusterWithEntriesIfNeeded__11257f610,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ce50e0; end: 106ce5857; -[SCGallerySnapsTabDataSource _reclusterWithEntriesIfNeeded:] */

void FUN_106ce50e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bea4d40(param_1);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c296d80();
  if (iVar3 == 0) {
    func_0x00010bec0200(param_1);
    _objc_retain(param_3);
    uVar19 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar19);
    func_0x00010bfec280(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bea4d40(param_1);
    goto LAB_106ce5814;
  }
  uVar4 = param_1;
  func_0x00010be16520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar21);
  lVar6 = lVar21;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar21);
      }
      uVar19 = *(undefined8 *)(lVar24 * 8);
      func_0x00010bf97200(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar19);
      lVar24 = lVar24 + 1;
    } while (lVar6 != lVar24);
    lVar6 = lVar21;
    func_0x00010bf52a60();
  }
  _objc_release(lVar21);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(uVar4);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  uVar23 = uVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (uVar23 != 0) {
    uVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(uVar4);
      }
      puVar25 = *(undefined **)(uVar22 * 8);
      puVar10 = puVar25;
      func_0x00010bf97200(puVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(puVar10);
      puVar10 = puVar25;
      func_0x00010bf97200(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      if (puVar11 == (undefined *)0x0) {
LAB_106ce542c:
        func_0x00010befa120(puVar8);
      }
      else {
        puVar10 = puVar25;
        func_0x00010c071ae0();
        if ((int)puVar10 == 0) {
LAB_106ce5420:
          func_0x00010befa120(puVar7);
          goto LAB_106ce542c;
        }
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar11;
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar25);
        _objc_retain(puVar10);
        if (puVar25 != puVar10) {
          if (puVar10 == (undefined *)0x0) {
            _objc_release();
            _objc_release(puVar25);
          }
          else {
            puVar12 = puVar25;
            func_0x00010c0720c0();
            _objc_release(puVar10);
            _objc_release(puVar25);
            _objc_release(puVar10);
            _objc_release(puVar25);
            if (((ulong)puVar12 & 1) != 0) goto LAB_106ce5438;
          }
          goto LAB_106ce5420;
        }
        _objc_release(puVar10);
        _objc_release(puVar25);
        _objc_release(puVar10);
        _objc_release(puVar25);
      }
LAB_106ce5438:
      _objc_release(puVar11);
      uVar22 = uVar22 + 1;
    } while (uVar23 != uVar22);
    uVar23 = uVar4;
    func_0x00010bf52a60();
  }
  _objc_release(uVar4);
  lVar21 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar21);
  lVar6 = lVar21;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar21);
      }
      uVar19 = *(undefined8 *)(lVar24 * 8);
      func_0x00010bf97200(uVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf4b900();
      _objc_release(uVar19);
      if (((ulong)puVar10 & 1) == 0) {
        func_0x00010befa120(puVar7);
      }
      lVar24 = lVar24 + 1;
    } while (lVar6 != lVar24);
    lVar6 = lVar21;
    func_0x00010bf52a60();
  }
  _objc_release(lVar21);
  puVar10 = puVar7;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = puVar8;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      uVar22 = *(ulong *)(param_1 + 0x18);
      func_0x00010bf529e0();
      uVar23 = uVar4;
      func_0x00010bf529e0();
      if (uVar22 == uVar23) {
        uVar23 = uVar4;
        func_0x00010bf529e0();
        if (uVar23 == 0) {
          bVar2 = false;
          uVar20 = 0;
        }
        else {
          uVar23 = 0;
          do {
            uVar13 = *(ulong *)(param_1 + 0x18);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar13;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar4;
            func_0x00010c0dfd40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar14;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar22;
            func_0x00010c0720c0();
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar22);
            _objc_release(uVar13);
            if ((uVar16 & 1) == 0) break;
            uVar23 = uVar23 + 1;
            uVar22 = uVar4;
            func_0x00010bf529e0();
          } while (uVar23 < uVar22);
          bVar2 = false;
          uVar20 = (uint)uVar16 ^ 1;
        }
      }
      else {
        bVar2 = false;
        uVar20 = 1;
      }
    }
    else {
      uVar20 = 0;
      bVar2 = true;
    }
  }
  else {
    uVar20 = 0;
    bVar2 = true;
  }
  lVar6 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar17 = lVar6;
  func_0x00010c07d540();
  _objc_release(lVar6);
  puVar10 = PTR_PTR_1126b24e0;
  bVar1 = *(byte *)(param_1 + 0x78);
  if (((bVar2) || ((uVar20 & 1) != 0)) || ((uint)bVar1 != (uint)lVar17)) {
    uVar23 = param_1;
    if (bVar2) {
      uVar19 = *(undefined8 *)(param_1 + 8);
      func_0x00010be871a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c120580(uVar19);
LAB_106ce57d4:
      _objc_release(uVar23);
    }
    else {
      func_0x00010bea4d40(param_1);
      if ((uint)bVar1 != (uint)lVar17) {
        uVar19 = *(undefined8 *)(param_1 + 8);
        func_0x00010be871a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c120560(uVar19);
        goto LAB_106ce57d4;
      }
    }
    *(char *)(param_1 + 0x78) = (char)lVar17;
    _objc_retain(uVar4);
    uVar19 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar4;
    _objc_release(uVar19);
  }
  else {
    func_0x00010bf529e0(uVar4);
    func_0x00010bfb06e0(puVar10);
    _objc_retain(uVar4);
    uVar19 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar4;
    _objc_release(uVar19);
    uVar23 = uVar4;
    func_0x00010bf529e0();
    if (uVar23 == 0) {
      uVar19 = *(undefined8 *)(param_1 + 8);
      func_0x00010bfc3c80(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(uVar19);
      func_0x00010bea4d40(param_1);
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  param_3 = uVar4;
LAB_106ce5814:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bea5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__setMomentViewModels_withUpdateR_112587080,
             PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 106ce5858; end: 106ce586b;  */

void FUN_106ce5858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setMomentViewModels_withUpdateR_112587080,
             PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 106ce586c; end: 106ce598b; -[SCGallerySnapsTabDataSource _startInitialClustering] */

void FUN_106ce586c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bea4d40(param_1,param_2,1);
  if (*(long *)(param_1 + 0xf0) == 3) {
    func_0x00010bf63d40(*(undefined8 *)(param_1 + 0x100));
  }
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106ce598c;
  puStack_58 = &UNK_1108942c0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bf3e780(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ce598c; end: 106ce5baf;  */

void FUN_106ce598c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106ce5b80;
  func_0x00010be56ca0(param_1);
  lVar1 = param_1;
  func_0x00010be1b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be56ce0(param_1);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
LAB_106ce5b20:
      lVar7 = *(long *)(param_1 + 0x48);
      if (lVar7 == 0) {
        *(undefined **)(param_1 + 0x48) = PTR____NSArray0__struct_11034ab48;
        _objc_release();
        lVar7 = *(long *)(param_1 + 0x48);
      }
      func_0x00010bf09f80(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea5b60(param_1);
    }
    else {
      lVar4 = lVar3;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c2711a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c071ae0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar7);
      if ((int)lVar6 == 0) goto LAB_106ce5b20;
      lVar7 = *(long *)(param_1 + 0x48);
      func_0x00010c0d3c80(lVar7);
      func_0x00010c12d360();
      lVar4 = param_1;
      func_0x00010be5f880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(lVar7);
      func_0x00010c12d360(lVar1);
      lVar5 = lVar1;
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        func_0x00010befa160(lVar7);
      }
      func_0x00010bea5b60(param_1);
      _objc_release(lVar4);
    }
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_106ce5b80:
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ce5bb0; end: 106ce5caf;  */

void FUN_106ce5bb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106ce5c10;
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) {
      func_0x00010bea5b60(param_1);
    }
    else {
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        lVar1 = *(long *)(param_1 + 8);
        func_0x00010bfc3c80(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f7fc0();
        goto LAB_106ce5bfc;
      }
    }
  }
  else {
    lVar1 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar1);
    func_0x000107dffcbc();
LAB_106ce5bfc:
    _objc_release(lVar1);
  }
  func_0x00010bea4d40(param_1);
LAB_106ce5c10:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106ce5cb0; end: 106ce5cb7;  */

void FUN_106ce5cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedabf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateLibraryGroupTitleWithFina_1125944a0);
  return;
}



/* Entry: 106ce5cb8; end: 106ce633f; -[SCGallerySnapsTabDataSource _buildSingleGroupViewModel:groupTitle:kind:] */

void FUN_106ce5cb8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar12 = param_3;
  func_0x00010c0d3c80();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(param_3);
  lVar20 = param_3;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar15 = *plStack_240;
    do {
      lVar17 = 0;
      do {
        if (*plStack_240 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_248 + lVar17 * 8);
        func_0x00010c0d21e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010c08fa60();
        _objc_release(lVar13);
        if (lVar2 != 0) {
          func_0x00010befa120(puVar10);
        }
        lVar17 = lVar17 + 1;
      } while (lVar20 != lVar17);
      lVar20 = param_3;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar10;
  func_0x00010bf51e00();
  puVar21 = puVar3;
  func_0x00010b5f8ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  _objc_retain(puVar21);
  puVar4 = puVar21;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar20 = *plStack_280;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_280 != lVar20) {
          _objc_enumerationMutation(puVar21);
        }
        uVar14 = *(ulong *)(lStack_288 + (long)puVar16 * 8);
        uVar8 = uVar14;
        func_0x00010bf529e0();
        if (1 < uVar8) {
          func_0x00010befa160(puVar3);
          uVar8 = uVar14;
          func_0x00010bfb1920(uVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = param_1;
          func_0x00010be4f2e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar18 = *(undefined8 *)(param_1 + 8);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar14;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c074dc0(uVar18);
          lVar17 = param_1;
          func_0x00010bdebe40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(lVar17);
          _objc_release(uVar5);
          _objc_release(uVar14);
          _objc_release(lVar15);
          _objc_release(uVar8);
        }
        puVar16 = puVar16 + 1;
      } while (puVar4 != puVar16);
      puVar4 = puVar21;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar21);
  puStack_2a8 = &uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a0 = 0x2020000000;
  uStack_298 = 0;
  _objc_retain(puVar3);
  _objc_retain(puVar11);
  func_0x00010bf97e80(lVar12);
  if (0 < (long)puStack_2a8[3]) {
    func_0x00010bfb0640(PTR_PTR_1126b24e0);
  }
  lVar20 = param_1;
  func_0x00010c154040();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar20;
  func_0x00010bf529e0();
  if (lVar15 == 0) {
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ec1e0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06eae0();
    _objc_release(uVar18);
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_190 = puVar4;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_188 = puVar16;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_180 = puVar19;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_178 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar19);
    _objc_release(puVar16);
  }
  else {
    puVar4 = puVar11;
    FUN_106cec128(puVar11,lVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a300(puVar11);
  }
  _objc_release(puVar4);
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(puVar11);
  puVar4 = puVar11;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar11);
      }
      puVar6 = PTR_PTR_1126cfc28;
      func_0x00010c23f7a0(PTR_PTR_1126cfc28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar16);
      _objc_release(puVar6);
      puVar19 = puVar19 + 1;
    } while (puVar4 != puVar19);
    puVar4 = puVar11;
    func_0x00010bf52a60();
  }
  _objc_release(puVar11);
  puVar4 = PTR_PTR_1126cfc30;
  _objc_alloc();
  func_0x00010c052dc0();
  _objc_release(puVar16);
  _objc_release(lVar20);
  _objc_release(puVar11);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_2b0,8);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar21);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  puVar11 = (undefined *)0x8;
  __Block_object_dispose(&uStack_2b0);
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  if (*(long *)(*(long *)(param_3 + 0x20) + 0xf0) != 6) {
    puVar10 = puVar11;
    func_0x00010bf93d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010c0719c0();
    _objc_release(puVar10);
    if ((int)puVar3 != 0) {
      lVar20 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      *(long *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + 1;
      goto LAB_106ce6600;
    }
  }
  uVar8 = *(ulong *)(param_3 + 0x28);
  func_0x00010bf4b900();
  if ((uVar8 & 1) != 0) goto LAB_106ce6600;
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010be4f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar9;
  func_0x00010bfbdda0();
  iVar1 = (int)uVar18;
  FUN_106cebf68();
  if (iVar1 == 0) {
    uVar22 = *(undefined8 *)(param_3 + 0x30);
    puVar21 = *(undefined **)(param_3 + 0x20);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
    puVar3 = puVar11;
    func_0x00010c241220(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074dc0(uVar18);
    func_0x00010bdebe40(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar22);
LAB_106ce65e0:
    _objc_release(puVar21);
  }
  else {
    puVar10 = *(undefined **)(*(long *)(param_3 + 0x20) + 8);
    func_0x00010bfaa500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(*(undefined8 *)(param_3 + 0x28));
    puVar21 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar10;
    func_0x00010c246cc0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar19;
    func_0x00010bf51e00();
    _objc_release(puVar19);
    _objc_release(puVar16);
    _objc_release(puVar4);
    _objc_release(puVar21);
    puVar21 = puVar10;
    func_0x00010bf529e0();
    if (puVar21 != (undefined *)0x0) {
      uVar18 = *(undefined8 *)(param_3 + 0x30);
      lVar20 = *(long *)(param_3 + 0x20);
      uVar22 = *(undefined8 *)(lVar20 + 8);
      puVar21 = puVar3;
      func_0x00010bfb1920(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar21;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074dc0(uVar22);
      func_0x00010bdebe40(lVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar18);
      _objc_release(lVar20);
      _objc_release(puVar4);
      goto LAB_106ce65e0;
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar9);
LAB_106ce6600:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfa67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar11 + 8),PTR_s_fetchEntryForGallerySnap__1125c73a0);
  return;
}



/* Entry: 106ce6340; end: 106ce6643;  */

void FUN_106ce6340(long param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xf0) != 6) {
    puVar5 = param_2;
    func_0x00010bf93d20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c0719c0();
    _objc_release(puVar5);
    if ((int)puVar2 != 0) {
      lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
      goto LAB_106ce6600;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf4b900();
  if ((uVar3 & 1) != 0) goto LAB_106ce6600;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bfbdda0();
  iVar1 = (int)uVar11;
  FUN_106cebf68();
  if (iVar1 == 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    puVar12 = *(undefined **)(param_1 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    puVar2 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074dc0(uVar11);
    func_0x00010bdebe40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar13);
LAB_106ce65e0:
    _objc_release(puVar12);
  }
  else {
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bfaa500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x28));
    puVar12 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c246cc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf51e00();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar12);
    puVar12 = puVar5;
    func_0x00010bf529e0();
    if (puVar12 != (undefined *)0x0) {
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      lVar10 = *(long *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(lVar10 + 8);
      puVar12 = puVar2;
      func_0x00010bfb1920(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074dc0(uVar13);
      func_0x00010bdebe40(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar11);
      _objc_release(lVar10);
      _objc_release(puVar6);
      goto LAB_106ce65e0;
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
LAB_106ce6600:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfa67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_fetchEntryForGallerySnap__1125c73a0);
  return;
}



/* Entry: 106ce6644; end: 106ce664b; -[SCGallerySnapsTabDataSource _localFetchEntryForGallerySnap:] */

void FUN_106ce6644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchEntryForGallerySnap__1125c73a0);
  return;
}



/* Entry: 106ce664c; end: 106ce6c93; -[SCGallerySnapsTabDataSource _createCellViewModelWithSnapGroup:entry:isFavorited:] */

void FUN_106ce664c(undefined **param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010b5fc5e4();
  uVar4 = param_4;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  func_0x00010bf977c0();
  dVar18 = 0.0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 == 0) {
    _objc_release(param_3);
    ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    dVar19 = 0.0;
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar16 = *(ulong *)(lVar14 * 8);
        if ((uVar15 & 1) == 0) {
          uVar15 = 0;
LAB_106ce6914:
          uVar9 = uVar16;
          func_0x00010b5fa088();
          fVar17 = SUB84(dVar18,0);
          if (uVar9 < 0xd && (1L << (uVar9 & 0x3f) & 0x1566U) != 0) {
LAB_106ce6930:
            func_0x00010bf8b160(uVar16);
            dVar18 = (double)fVar17;
            dVar19 = dVar19 + dVar18;
          }
          else if (uVar4 == 8) {
            uVar9 = uVar16;
            func_0x00010b5fa088();
            iVar2 = (int)uVar9;
            func_0x00010b5fa4c8();
            fVar17 = SUB84(dVar18,0);
            if (iVar2 != 0) goto LAB_106ce6930;
          }
        }
        else {
          uVar15 = uVar16;
          func_0x00010b5fc690();
          if ((int)uVar15 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar16;
            func_0x00010bf30e80();
            puVar12 = PTR_PTR_1126af4d0;
            if ((int)uVar15 == 0) {
              uVar15 = 1;
              goto LAB_106ce6914;
            }
            _objc_retain(uVar16);
            uVar15 = uVar16;
            func_0x00010c241220(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa72e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar16);
            _objc_release(uVar15);
            puVar6 = puVar12;
            func_0x00010c23ff80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar6 == (undefined *)0x0) {
              _objc_release(puVar12);
              uVar15 = 1;
            }
            else {
              puVar6 = puVar12;
              func_0x00010c23ff80();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar6;
              func_0x000108020568();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
              if (puVar11 != (undefined *)0x0) {
                puVar7 = param_1[0x1c];
                func_0x00010c23ef20();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar7;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf4b640();
                _objc_release(puVar6);
                _objc_release(puVar7);
                puVar7 = param_1[0x25];
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar7;
                func_0x00010bf1f3c0();
                _objc_release(puVar7);
                if ((int)puVar6 == 0) {
                  puVar7 = param_1[0x16];
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar7;
                  func_0x00010c2968e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar7);
                  uVar15 = (ulong)(puVar6 == (undefined *)0x0);
                  _objc_release(puVar6);
                }
                else {
                  puVar7 = param_1[0x15];
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar7;
                  func_0x00010c06ed40();
                  _objc_release(puVar7);
                  if ((int)puVar6 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    puVar6 = puVar11;
                    func_0x00010bf8c3a0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar6;
                    func_0x00010bfdc300();
                    if (((ulong)puVar7 & 1) == 0) {
                      _objc_release(puVar6);
                      uVar15 = 1;
                    }
                    else {
                      puVar8 = param_1[0x24];
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      puVar7 = puVar8;
                      func_0x00010bf1f3c0();
                      _objc_release(puVar8);
                      _objc_release(puVar6);
                      uVar15 = (ulong)((uint)puVar7 ^ 1);
                    }
                  }
                }
                _objc_release(puVar11);
                _objc_release(puVar12);
                goto LAB_106ce6914;
              }
              _objc_release(puVar12);
              uVar15 = 0;
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar5 != lVar14);
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    _objc_release(param_3);
    if (dVar19 <= 0.0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar10 = param_1;
      func_0x00010be23d00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar11 = param_1[0x2a];
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar12;
  func_0x00010c07e5c0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  if ((int)puVar6 != 0) {
    puVar12 = param_1[0x17];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234580();
    _objc_release(puVar12);
  }
  puVar11 = param_1[0x2a];
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar12;
  func_0x00010c11eb40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126cfb58;
    func_0x00010c27f660();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar12 = PTR_PTR_1126cfb60;
  _objc_alloc(PTR_PTR_1126cfb60);
  puVar6 = PTR_PTR_1126cfb60;
  func_0x00010bf7ece0(PTR_PTR_1126cfb60);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1[0x21];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c00c720(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(ppuVar10);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ce6c94; end: 106ce6d17; -[SCGallerySnapsTabDataSource _getVideoDurationDisplayWithTotalDuration:] */

void FUN_106ce6c94(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  if ((long)uVar2 < 2) {
    uVar2 = 1;
  }
  if ((uVar2 / 0x3c) % 0x3c == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc44d8;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc44b8;
  }
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ce6d18; end: 106ce70cf; -[SCGallerySnapsTabDataSource _mergeGroupViewModel:withAnotherGroupViewModel:] */

void FUN_106ce6d18(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar10 = 0;
  if ((param_3 != (undefined *)0x0) && (param_4 != (undefined *)0x0)) {
    puVar1 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puVar4 = puVar2;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == 0) {
      lVar10 = 0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010be22a40();
      _objc_retainAutoreleasedReturnValue();
      lStack_208 = param_1;
      func_0x00010be22a40();
      _objc_retainAutoreleasedReturnValue();
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      _objc_retain(lVar5);
      lVar10 = lVar5;
      func_0x00010bf52a60();
      if (lVar10 != 0) {
        lVar9 = *plStack_1b0;
        do {
          lVar11 = 0;
          do {
            if (*plStack_1b0 != lVar9) {
              _objc_enumerationMutation(lVar5);
            }
            uVar6 = *(undefined8 *)(lStack_1b8 + lVar11 * 8);
            func_0x00010c245680(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar4);
            _objc_release(uVar6);
            lVar11 = lVar11 + 1;
          } while (lVar10 != lVar11);
          lVar10 = lVar5;
          func_0x00010bf52a60();
        } while (lVar10 != 0);
      }
      _objc_release(lVar5);
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      _objc_retain(param_1);
      lVar10 = param_1;
      func_0x00010bf52a60();
      if (lVar10 != 0) {
        lVar9 = *plStack_1f0;
        do {
          lVar11 = 0;
          do {
            if (*plStack_1f0 != lVar9) {
              _objc_enumerationMutation(param_1);
            }
            uVar6 = *(undefined8 *)(lStack_1f8 + lVar11 * 8);
            func_0x00010c245680(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar4);
            _objc_release(uVar6);
            lVar11 = lVar11 + 1;
          } while (lVar10 != lVar11);
          lVar10 = param_1;
          func_0x00010bf52a60();
        } while (lVar10 != 0);
      }
      _objc_release(param_1);
      puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      puStack_180 = puVar1;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_178 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c246cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d3c80();
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c087060(param_3);
      lVar10 = lStack_208;
      puVar4 = puVar8;
      func_0x00010bdd6b00(lStack_208);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(param_1);
      _objc_release(lVar5);
      _objc_release(puVar8);
    }
  }
  _objc_release(param_4);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_106ce70d0;
  puStack_230 = param_4;
  puStack_228 = param_3;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar4);
  uVar6 = *(undefined8 *)(puVar1 + 0x40);
  *(undefined **)(puVar1 + 0x40) = puVar4;
  _objc_release(uVar6);
  if ((puVar1[0x158] & 1) == 0) {
    _objc_initWeak(auStack_238,puVar1);
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_106ce71bc;
    puStack_250 = &UNK_110841fb0;
    _objc_copyWeak(auStack_240,auStack_238);
    _objc_retain(puVar4);
    puStack_248 = puVar4;
    func_0x0001000d76cc("APPSTORE",&puStack_268);
    _objc_release(puStack_248);
    _objc_destroyWeak(auStack_240);
    _objc_destroyWeak(auStack_238);
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 106ce70d0; end: 106ce71bb; -[SCGallerySnapsTabDataSource _setFeaturedStoriesViewModel:] */

void FUN_106ce70d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106ce71bc;
    puStack_40 = &UNK_110841fb0;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(uStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ce71bc; end: 106ce7213;  */

void FUN_106ce71bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x160;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfbd9a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ce7214; end: 106ce731f; -[SCGallerySnapsTabDataSource _getCameraRollSectionModelWithCRSectionDictionary:curClusterTitle:] */

void FUN_106ce7214(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar1 = 0;
    if (lVar4 == 0) goto LAB_106ce72fc;
    uVar5 = *(ulong *)(param_1 + 0x50);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2690;
    _objc_opt_class(PTR_PTR_1126b2690);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
  }
  _objc_release(uVar5);
LAB_106ce72fc:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ce7320; end: 106ce7b33; -[SCGallerySnapsTabDataSource _insertMonthlyCRSectionModelsWithCRSectionDictionary:] */

void FUN_106ce7320(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *unaff_x22;
  long lVar15;
  undefined *unaff_x24;
  undefined *puVar16;
  long lStack_268;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar12 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar12);
  lStack_268 = lVar12;
  func_0x00010bf52a60();
  if (lStack_268 != 0) {
    lVar9 = *plStack_1b0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1b0 != lVar9) {
          _objc_enumerationMutation(lVar12);
        }
        puVar16 = *(undefined **)(lStack_1b8 + lVar11 * 8);
        unaff_x22 = *(undefined **)(param_1 + 0x50);
        puVar4 = puVar16;
        func_0x00010c2711a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = unaff_x22;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        if (puVar8 != (undefined *)0x0) {
          puVar4 = puVar16;
          func_0x00010c2711a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = puVar2;
          func_0x00010bf4b900();
          _objc_release(puVar4);
          if (((ulong)unaff_x22 & 1) == 0) {
            puVar4 = puVar16;
            func_0x00010c2711a0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(puVar4);
            puVar4 = puVar16;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = puVar4;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            if ((int)unaff_x22 != 0) {
              puVar4 = puVar16;
              func_0x00010c2711a0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = param_1;
              func_0x00010be1d8e0(param_1);
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = *(undefined **)(param_1 + 0x50);
              puVar8 = puVar16;
              func_0x00010c2711a0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = unaff_x24;
              func_0x00010c0e00e0(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640();
              _objc_release(puVar13);
              _objc_release(puVar8);
              _objc_release(unaff_x22);
              _objc_release(puVar4);
            }
            puVar4 = puVar16;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            func_0x00010c0720c0();
            if (((ulong)puVar8 & 1) == 0) {
              func_0x000106e39574();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000106e39580();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(puVar4);
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            plStack_1f0 = (long *)0x0;
            _objc_retain(puVar8);
            puVar4 = puVar8;
            func_0x00010bf52a60();
            if (puVar4 != (undefined *)0x0) {
              lVar15 = *plStack_1f0;
              do {
                puVar13 = (undefined *)0x0;
                do {
                  if (*plStack_1f0 != lVar15) {
                    _objc_enumerationMutation(puVar8);
                  }
                  unaff_x24 = *(undefined **)(param_1 + 0x50);
                  puVar5 = puVar16;
                  func_0x00010c2711a0(puVar16);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = unaff_x24;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x24);
                  _objc_release(puVar5);
                  puVar5 = PTR_PTR_1126b2690;
                  _objc_opt_class(PTR_PTR_1126b2690);
                  puVar7 = puVar6;
                  _objc_opt_isKindOfClass(puVar6,puVar5);
                  unaff_x22 = puVar6;
                  if (((ulong)puVar7 & 1) == 0) {
                    unaff_x22 = (undefined *)0x0;
                  }
                  _objc_retain(unaff_x22);
                  _objc_release(puVar6);
                  if (unaff_x22 != (undefined *)0x0) {
                    unaff_x24 = puVar6;
                    func_0x00010bfe5ec0(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puVar3;
                    func_0x00010bf4b900();
                    _objc_release(unaff_x24);
                    if (((ulong)puVar5 & 1) == 0) {
                      func_0x00010bfe5ec0(puVar6);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar3);
                      _objc_release(puVar6);
                      func_0x00010befa120(puVar1);
                      unaff_x24 = puVar6;
                    }
                  }
                  _objc_release(unaff_x22);
                  puVar13 = puVar13 + 1;
                } while (puVar4 != puVar13);
                puVar4 = puVar8;
                func_0x00010bf52a60();
              } while (puVar4 != (undefined *)0x0);
            }
            _objc_release(puVar8);
            _objc_release(puVar8);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lStack_268);
      lStack_268 = lVar12;
      func_0x00010bf52a60();
    } while (lStack_268 != 0);
  }
  _objc_release(lVar12);
  lVar12 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
    unaff_x24 = *(undefined **)(param_1 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x24;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x22 != (undefined *)0x0) goto LAB_106ce77d4;
  }
  else {
LAB_106ce77d4:
    lVar11 = *(long *)(param_1 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    if (lVar12 == 0) {
      _objc_release(unaff_x22);
      _objc_release(unaff_x24);
      unaff_x24 = PTR_PTR_1126b2690;
    }
    else {
      _objc_release(lVar12);
      unaff_x24 = PTR_PTR_1126b2690;
    }
    PTR_PTR_1126b2690 = unaff_x24;
    if (lVar9 != 0) goto LAB_106ce7aa0;
    _objc_alloc();
    uVar10 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c25ce40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b26a0;
    func_0x00010bfdfe80(PTR_PTR_1126b26a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b980();
    _objc_release(puVar4);
    _objc_release(uVar10);
    lVar12 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 == 0) {
      puVar8 = *(undefined **)(param_1 + 0x50);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    else {
      puVar4 = param_1;
      func_0x00010be1d8e0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined8 *)(param_1 + 0x50);
    func_0x00010c1d0640(*puVar14);
    _objc_release(puVar8);
    uVar10 = *puVar14;
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar10);
    uVar10 = *puVar14;
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar10);
    puStack_218 = &uStack_220;
    uStack_220 = 0;
    uStack_210 = 0x2020000000;
    uStack_208 = 1;
    puVar8 = puVar4;
    func_0x00010c156980(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be2a0();
    _objc_release(puVar8);
    if (((puVar4 != (undefined *)0x0) && (unaff_x24 != (undefined *)0x0)) &&
       (*(char *)(puStack_218 + 3) == '\x01')) {
      func_0x00010c066b00(puVar1);
      func_0x00010c066b00(puVar1);
    }
    __Block_object_dispose(&uStack_220,8);
    _objc_release(puVar4);
  }
  _objc_release(unaff_x24);
LAB_106ce7aa0:
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar4;
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_220,8);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 106ce7b34; end: 106ce7b3b;  */

void FUN_106ce7b34(void)

{
  return;
}



/* Entry: 106ce7b3c; end: 106ce7b73;  */

void FUN_106ce7b3c(long param_1,long param_2)

{
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 != 0;
  return;
}



/* Entry: 106ce7b74; end: 106ce829b; -[SCGallerySnapsTabDataSource _generateSectionControllerViewModels] */

undefined ** FUN_106ce7b74(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined8 uStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar20);
  ppuVar16 = apuStack_f0;
  lVar3 = lVar20;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar26 = 0;
    do {
      if (lRam0000000000000000 != lVar18) {
        _objc_enumerationMutation(lVar20);
      }
      uVar23 = *(ulong *)(lVar26 * 8);
      uVar4 = uVar23;
      func_0x00010c2711a0(uVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      if (puVar19 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b2690;
        _objc_alloc();
        uVar4 = uVar23;
        func_0x00010c2711a0(uVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar4;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126b26a0;
        func_0x00010c245900(PTR_PTR_1126b26a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b980();
        _objc_release(puVar19);
        _objc_release(uVar24);
        _objc_release(uVar4);
        func_0x00010c1d0640(puVar5);
        puVar7 = PTR_PTR_1126b2690;
        _objc_alloc(PTR_PTR_1126b2690);
        uVar4 = uVar23;
        func_0x00010c2711a0(uVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar4;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126b26a0;
        uVar8 = uVar23;
        func_0x00010c2711a0(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdfe80(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b980(puVar7);
        _objc_release(puVar19);
        _objc_release(uVar8);
        _objc_release(uVar24);
        _objc_release(uVar4);
        func_0x00010c1d0640(puVar5);
        uVar4 = param_1 + 0x70;
        _objc_loadWeakRetained();
        uVar24 = uVar4;
        func_0x00010c07d540();
        _objc_release(uVar4);
        if ((uVar24 & 1) == 0) {
          uVar4 = uVar23;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((int)uVar24 != 0) {
            uVar4 = uVar23;
            func_0x00010c2711a0(uVar23);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = param_1;
            func_0x00010be1d8e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(lVar9);
            _objc_release(uVar4);
          }
        }
        uVar4 = uVar23;
        func_0x00010c2711a0(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar13);
        _objc_release(uVar4);
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar23;
        func_0x00010c0720c0();
        if ((uVar4 & 1) == 0) {
          func_0x000106e39574();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000106e39580();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar23);
        _objc_retain(uVar4);
        uVar23 = uVar4;
        func_0x00010bf52a60();
        lVar9 = lRam0000000000000000;
        while (uVar23 != 0) {
          uVar24 = 0;
          do {
            if (lRam0000000000000000 != lVar9) {
              _objc_enumerationMutation(uVar4);
            }
            puVar10 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = PTR_PTR_1126b2690;
            _objc_opt_class(PTR_PTR_1126b2690);
            puVar11 = puVar10;
            _objc_opt_isKindOfClass(puVar10,puVar19);
            puVar19 = puVar10;
            if (((ulong)puVar11 & 1) == 0) {
              puVar19 = (undefined *)0x0;
            }
            _objc_retain(puVar19);
            _objc_release(puVar10);
            if (puVar19 != (undefined *)0x0) {
              func_0x00010befa120(ppuVar2);
            }
            _objc_release(puVar19);
            uVar24 = uVar24 + 1;
          } while (uVar23 != uVar24);
          uVar23 = uVar4;
          func_0x00010bf52a60();
        }
        _objc_release(uVar4);
        _objc_release(uVar4);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != lVar3);
    ppuVar16 = apuStack_f0;
    lVar3 = lVar20;
    func_0x00010bf52a60();
  }
  _objc_release(lVar20);
  func_0x00010befa120(puVar22);
  puVar19 = puVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8e60;
  puVar5 = puVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar19);
  if (puVar5 == (undefined *)0x0) {
    puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = *(undefined ***)(param_1 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8e78;
    ppuVar15 = ppuVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
    ppuVar12 = *(undefined ***)(param_1 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
    ppuVar12 = ppuVar15;
    func_0x00010c1d0640(puVar19);
    uVar4 = param_1 + 0x70;
    _objc_loadWeakRetained();
    uVar23 = uVar4;
    func_0x00010c07d540();
    _objc_release(uVar4);
    if ((uVar23 & 1) == 0) {
      ppuVar16 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8e48;
      ppuVar12 = ppuVar21;
      func_0x00010c1d0640(puVar19);
    }
    if ((ppuVar21 != (undefined **)0x0) && (ppuVar15 != (undefined **)0x0)) {
      uVar4 = param_1 + 0x70;
      _objc_loadWeakRetained();
      uVar23 = uVar4;
      func_0x00010c07d540();
      _objc_release(uVar4);
      if ((uVar23 & 1) == 0) {
        func_0x00010c1d0640(puVar13);
        func_0x00010c066b00(ppuVar2);
        ppuVar16 = (undefined **)0x0;
        ppuVar12 = ppuVar15;
        func_0x00010c066b00(ppuVar2);
      }
    }
    _objc_release(ppuVar21);
    _objc_release(ppuVar15);
    _objc_release(puVar19);
  }
  puVar19 = puVar13;
  func_0x00010c0d3c80();
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar19;
  _objc_release(uVar17);
  ppuVar15 = ppuVar2;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x58) = ppuVar15;
  _objc_release(uVar17);
  puVar19 = puVar22;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar19;
  _objc_release(uVar17);
  _objc_release(puVar22);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar12);
  puVar13 = ppuVar2[9];
  ppuVar2[9] = (undefined *)ppuVar12;
  _objc_release(puVar13);
  _objc_retain(ppuVar12);
  ppuVar15 = ppuVar12;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (ppuVar15 == (undefined **)0x0) {
    ppuVar21 = (undefined **)0x0;
  }
  else {
    ppuVar21 = (undefined **)0x0;
    do {
      ppuVar25 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(ppuVar12);
        }
        lVar26 = *(long *)((long)ppuVar25 * 8);
        func_0x00010bf343c0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar26;
        func_0x00010bf529e0();
        ppuVar21 = (undefined **)((long)ppuVar21 + lVar20);
        _objc_release(lVar26);
        ppuVar25 = (undefined **)((long)ppuVar25 + 1);
      } while (ppuVar15 != ppuVar25);
      ppuVar15 = ppuVar12;
      func_0x00010bf52a60();
    } while (ppuVar15 != (undefined **)0x0);
  }
  _objc_release(ppuVar12);
  ppuVar15 = &PTR____CFConstantStringClassReference_110e83a58;
  func_0x00010bfb06a0(PTR_PTR_1126b24e0);
  if (*(char *)(ppuVar2 + 0x2b) == '\x01') {
    if (ppuVar16 == (undefined **)0x0) {
      *(undefined1 *)(ppuVar2 + 0x1d) = 1;
    }
  }
  else {
    if (*(char *)(ppuVar2 + 0x1d) == '\x01') {
      ppuVar16 = (undefined **)0x0;
      *(undefined1 *)(ppuVar2 + 0x1d) = 0;
    }
    puVar13 = ppuVar2[9];
    func_0x00010bf529e0();
    if (puVar13 == (undefined *)0x0) {
      puVar13 = PTR____NSArray0__struct_11034ab48;
      func_0x00010bf51e00();
      puVar22 = ppuVar2[0xb];
      ppuVar2[0xb] = puVar13;
LAB_106ce842c:
      _objc_release(puVar22);
    }
    else if ((ppuVar16 == (undefined **)0x0) &&
            (func_0x00010be1bb40(ppuVar2), ppuVar2[0x19] != (undefined *)0x0)) {
      func_0x00010c27ee20();
      ppuVar16 = ppuVar2 + 0xe;
      _objc_loadWeakRetained();
      ppuVar15 = ppuVar16;
      func_0x00010c07d540();
      _objc_release(ppuVar16);
      if (((ulong)ppuVar15 & 1) == 0) {
        puVar22 = ppuVar2[0x1b];
        _objc_retain(puVar22);
        puVar13 = puVar22;
        func_0x00010bf529e0();
        if (puVar13 != (undefined *)0x0) {
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = ppuVar2[0x1a];
          ppuVar2[0x1a] = puVar13;
          _objc_release(puVar19);
          puVar19 = ppuVar2[0x19];
          puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c283f80(puVar19);
          _objc_release(puVar13);
        }
        goto LAB_106ce842c;
      }
    }
    ppuVar25 = (undefined **)ppuVar2[0xb];
    func_0x00010bf51e00();
    ppuVar15 = (undefined **)ppuVar2[9];
    ppuVar16 = ppuVar2;
    ppuVar21 = ppuVar25;
    func_0x00010be4f9c0();
    ppuVar2[0x2d] = (undefined *)ppuVar16;
    ppuVar16 = ppuVar2 + 0x2c;
    _objc_loadWeakRetained();
    _objc_release();
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar16 = ppuVar2 + 0x2c;
      _objc_loadWeakRetained();
      ppuVar14 = ppuVar16;
      _objc_opt_respondsToSelector();
      _objc_release(ppuVar16);
      if (((ulong)ppuVar14 & 1) != 0) {
        ppuVar16 = ppuVar2 + 0x2c;
        _objc_loadWeakRetained();
        ppuVar21 = ppuVar25;
        func_0x00010bfbd980();
        _objc_release(ppuVar16);
        ppuVar15 = ppuVar2;
      }
    }
    _objc_release(ppuVar25);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar15);
  _objc_retain(ppuVar21);
  ppuVar12 = ppuVar12 + 0xe;
  _objc_loadWeakRetained();
  ppuVar16 = ppuVar12;
  func_0x00010c07d540();
  _objc_release(ppuVar12);
  if (((ulong)ppuVar16 & 1) != 0) {
    ppuVar16 = (undefined **)0x7fffffffffffffff;
    goto LAB_106ce87cc;
  }
  ppuVar2 = ppuVar15;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar2;
  func_0x00010c087060();
  if ((ppuVar16 == (undefined **)0x2) &&
     (ppuVar16 = ppuVar15, func_0x00010bf529e0(), ppuVar16 < (undefined **)0x3)) {
    ppuVar16 = ppuVar15;
    func_0x00010bf529e0();
    if ((undefined **)0x1 < ppuVar16) {
      ppuVar16 = ppuVar15;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar16;
      func_0x00010c087060();
      _objc_release(ppuVar16);
      if (ppuVar12 != (undefined **)0x1) goto LAB_106ce87b8;
    }
    ppuVar12 = ppuVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar21;
    func_0x00010bf529e0();
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
      do {
        uStack_400 = 0;
        uStack_3f0 = 0x2020000000;
        uStack_3e8 = 0;
        ppuVar25 = ppuVar21;
        puStack_3f8 = &uStack_400;
        func_0x00010c0dfd40(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar25;
        func_0x00010c156980();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar12);
        func_0x00010c0be2a0(ppuVar14);
        _objc_release(ppuVar14);
        _objc_release(ppuVar25);
        bVar1 = *(byte *)(puStack_3f8 + 3);
        _objc_release(ppuVar12);
        __Block_object_dispose(&uStack_400,8);
        if ((bVar1 & 1) != 0) goto LAB_106ce87ac;
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        ppuVar25 = ppuVar21;
        func_0x00010bf529e0();
      } while (ppuVar16 < ppuVar25);
    }
    ppuVar16 = ppuVar21;
    func_0x00010bf529e0(ppuVar21);
LAB_106ce87ac:
    _objc_release(ppuVar12);
  }
  else {
LAB_106ce87b8:
    ppuVar16 = ppuVar21;
    func_0x00010bf529e0(ppuVar21);
  }
  _objc_release(ppuVar2);
LAB_106ce87cc:
  _objc_release(ppuVar21);
  _objc_release(ppuVar15);
  return ppuVar16;
}



/* Entry: 106ce829c; end: 106ce85ab; -[SCGallerySnapsTabDataSource _setMomentViewModels:withUpdateReason:] */

undefined * FUN_106ce829c(undefined **param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar3 = param_1[9];
  param_1[9] = param_3;
  _objc_release(puVar3);
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (puVar3 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = (undefined *)0x0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)((long)puVar13 * 8);
        func_0x00010bf343c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        puVar12 = puVar12 + lVar5;
        _objc_release(lVar4);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar3 = param_3;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  ppuVar10 = &PTR____CFConstantStringClassReference_110e83a58;
  func_0x00010bfb06a0(PTR_PTR_1126b24e0);
  if (*(char *)(param_1 + 0x2b) == '\x01') {
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x1d) == '\x01') {
      param_4 = 0;
      *(undefined1 *)(param_1 + 0x1d) = 0;
    }
    puVar3 = param_1[9];
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR____NSArray0__struct_11034ab48;
      func_0x00010bf51e00();
      puVar12 = param_1[0xb];
      param_1[0xb] = puVar3;
LAB_106ce842c:
      _objc_release(puVar12);
    }
    else if ((param_4 == 0) && (func_0x00010be1bb40(param_1), param_1[0x19] != (undefined *)0x0)) {
      func_0x00010c27ee20();
      ppuVar10 = param_1 + 0xe;
      _objc_loadWeakRetained();
      ppuVar6 = ppuVar10;
      func_0x00010c07d540();
      _objc_release(ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        puVar12 = param_1[0x1b];
        _objc_retain(puVar12);
        puVar3 = puVar12;
        func_0x00010bf529e0();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = param_1[0x1a];
          param_1[0x1a] = puVar3;
          _objc_release(puVar13);
          puVar13 = param_1[0x19];
          puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c283f80(puVar13);
          _objc_release(puVar3);
        }
        goto LAB_106ce842c;
      }
    }
    puVar3 = param_1[0xb];
    func_0x00010bf51e00();
    ppuVar10 = (undefined **)param_1[9];
    ppuVar6 = param_1;
    puVar12 = puVar3;
    func_0x00010be4f9c0();
    param_1[0x2d] = (undefined *)ppuVar6;
    ppuVar6 = param_1 + 0x2c;
    _objc_loadWeakRetained();
    _objc_release();
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar6 = param_1 + 0x2c;
      _objc_loadWeakRetained();
      ppuVar7 = ppuVar6;
      _objc_opt_respondsToSelector();
      _objc_release(ppuVar6);
      if (((ulong)ppuVar7 & 1) != 0) {
        ppuVar10 = param_1 + 0x2c;
        _objc_loadWeakRetained();
        puVar12 = puVar3;
        func_0x00010bfbd980();
        _objc_release(ppuVar10);
        ppuVar10 = param_1;
      }
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(puVar12);
  param_3 = param_3 + 0x70;
  _objc_loadWeakRetained();
  puVar3 = param_3;
  func_0x00010c07d540();
  _objc_release(param_3);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = (undefined *)0x7fffffffffffffff;
    goto LAB_106ce87cc;
  }
  ppuVar6 = ppuVar10;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c087060();
  if ((ppuVar7 == (undefined **)0x2) &&
     (ppuVar7 = ppuVar10, func_0x00010bf529e0(), ppuVar7 < (undefined **)0x3)) {
    ppuVar7 = ppuVar10;
    func_0x00010bf529e0();
    if ((undefined **)0x1 < ppuVar7) {
      ppuVar7 = ppuVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c087060();
      _objc_release(ppuVar7);
      if (ppuVar8 != (undefined **)0x1) goto LAB_106ce87b8;
    }
    ppuVar7 = ppuVar6;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
      do {
        uStack_1c0 = 0;
        uStack_1b0 = 0x2020000000;
        uStack_1a8 = 0;
        puVar13 = puVar12;
        puStack_1b8 = &uStack_1c0;
        func_0x00010c0dfd40(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar13;
        func_0x00010c156980();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar7);
        func_0x00010c0be2a0(puVar9);
        _objc_release(puVar9);
        _objc_release(puVar13);
        bVar1 = *(byte *)(puStack_1b8 + 3);
        _objc_release(ppuVar7);
        __Block_object_dispose(&uStack_1c0,8);
        if ((bVar1 & 1) != 0) goto LAB_106ce87ac;
        puVar3 = puVar3 + 1;
        puVar13 = puVar12;
        func_0x00010bf529e0();
      } while (puVar3 < puVar13);
    }
    puVar3 = puVar12;
    func_0x00010bf529e0(puVar12);
LAB_106ce87ac:
    _objc_release(ppuVar7);
  }
  else {
LAB_106ce87b8:
    puVar3 = puVar12;
    func_0x00010bf529e0(puVar12);
  }
  _objc_release(ppuVar6);
LAB_106ce87cc:
  _objc_release(puVar12);
  _objc_release(ppuVar10);
  return puVar3;
}



/* Entry: 106ce85ac; end: 106ce881b; -[SCGallerySnapsTabDataSource _lockedSnapModalCardInsertionIndexForGroupViewModels:clusterModels:] */

ulong FUN_106ce85ac(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  uVar6 = uVar2;
  func_0x00010c07d540();
  _objc_release(uVar2);
  if ((uVar6 & 1) != 0) {
    uVar6 = 0x7fffffffffffffff;
    goto LAB_106ce87cc;
  }
  uVar2 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c087060();
  if ((uVar6 == 2) && (uVar6 = param_3, func_0x00010bf529e0(), uVar6 < 3)) {
    uVar6 = param_3;
    func_0x00010bf529e0();
    if (1 < uVar6) {
      uVar6 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c087060();
      _objc_release(uVar6);
      if (uVar3 != 1) goto LAB_106ce87b8;
    }
    uVar3 = uVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uStack_90 = 0;
        uStack_80 = 0x2020000000;
        uStack_78 = 0;
        uVar4 = param_4;
        puStack_88 = &uStack_90;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c156980();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar3);
        func_0x00010c0be2a0(uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        bVar1 = *(byte *)(puStack_88 + 3);
        _objc_release(uVar3);
        __Block_object_dispose(&uStack_90,8);
        if ((bVar1 & 1) != 0) goto LAB_106ce87ac;
        uVar6 = uVar6 + 1;
        uVar4 = param_4;
        func_0x00010bf529e0();
      } while (uVar6 < uVar4);
    }
    uVar6 = param_4;
    func_0x00010bf529e0(param_4);
LAB_106ce87ac:
    _objc_release(uVar3);
  }
  else {
LAB_106ce87b8:
    uVar6 = param_4;
    func_0x00010bf529e0(param_4);
  }
  _objc_release(uVar2);
LAB_106ce87cc:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106ce881c; end: 106ce8887;  */

void FUN_106ce881c(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 106ce8888; end: 106ce888b;  */

void FUN_106ce8888(void)

{
  return;
}



/* Entry: 106ce888c; end: 106ce896f; -[SCGallerySnapsTabDataSource _setIsLoading:] */

void FUN_106ce888c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(byte *)(param_1 + 0x28) != param_3) {
    *(char *)(param_1 + 0x28) = (char)param_3;
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x106ce8924;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106ce8970; end: 106ce8d2f; -[SCGallerySnapsTabDataSource _generateGroupViewModelsWithStorageAtRiskSnaps:clusters:isComplete:] */

void FUN_106ce8970(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  long lStack_1c0;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    func_0x000108dfdc5c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bdd6b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar11);
    _objc_release(puVar1);
    _objc_release(lVar10);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar1 = &uStack_130;
  lVar10 = param_4;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010befa160(puVar2);
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      puVar1 = &uStack_130;
      lVar10 = param_4;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) goto LAB_106ce8cb8;
  puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  if (param_5 == 0) {
    if (0 < (long)param_1[0xc]) {
      _objc_opt_new();
      func_0x00010c1d02e0();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c25d4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e83a78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e83a78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106ce8c68;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110e83a98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e83a98,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_opt_new();
    func_0x00010c1d02e0();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar2);
    func_0x00010c0df840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c25d4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e83a78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e83a78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar5 = puVar2;
    func_0x00010bf529e0();
    param_1[0xc] = puVar5;
    ppuVar4 = (undefined **)param_1[0x18];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1754e0();
LAB_106ce8c68:
    _objc_release(ppuVar4);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  func_0x00010bdd6b00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010befa120(puVar11);
  _objc_release(param_1);
  _objc_release(ppuVar7);
LAB_106ce8cb8:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar1);
    puStack_268 = &uStack_270;
    uStack_270 = 0;
    uStack_260 = 0x3032000000;
    pcStack_258 = FUN_106ce8f1c;
    uStack_250 = 0x106ce8f2c;
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar8 = puVar1;
    puStack_248 = puVar11;
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar9 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar8);
        }
        func_0x00010c0bff00(*(undefined8 *)((long)puVar14 * 8));
        puVar14 = (undefined8 *)((long)puVar14 + 1);
      } while (puVar9 != puVar14);
      puVar9 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    puVar11 = (undefined *)puStack_268[5];
    _objc_retain(puVar11);
    __Block_object_dispose(&uStack_270,8);
    _objc_release(puStack_248);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      lVar10 = 8;
      __Block_object_dispose(&uStack_270);
      __Unwind_Resume();
      puVar1[5] = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar10 + 0x28) = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106ce8d30; end: 106ce8f1b; -[SCGallerySnapsTabDataSource _getSnapCellViewModelsWithGroupViewModel:] */

void FUN_106ce8d30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_106ce8f1c;
  uStack_110 = 0x106ce8f2c;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_3;
  puStack_108 = puVar2;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010c0bff00(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar5 = puStack_128[5];
  _objc_retain(uVar5);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 106ce8f1c; end: 106ce8f4b;  */

void FUN_106ce8f1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ce8f4c; end: 106ce8f97; -[SCGallerySnapsTabDataSource _logPageLoadMetricsForDataLoadEndAndViewModelCreationStartOnHomeTab] */

void FUN_106ce8f4c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0xf0) == 3) {
    func_0x00010bf63ce0(*(undefined8 *)(param_1 + 0x100),param_2,
                        &PTR____CFConstantStringClassReference_110f59e98);
                    /* WARNING: Could not recover jumptable at 0x00010c29d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x100),PTR_s_viewModelCreationStart__112684fc8,
               &PTR____CFConstantStringClassReference_110f59e98);
    return;
  }
  return;
}



/* Entry: 106ce8f98; end: 106ce8fbb; -[SCGallerySnapsTabDataSource _logPageLoadMetricsForViewModelCreationEndOnHomeTab] */

void FUN_106ce8f98(long param_1)

{
  if (*(long *)(param_1 + 0xf0) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c29d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x100),PTR_s_viewModelCreationEnd__112684fb0,
               &PTR____CFConstantStringClassReference_110f59e98);
    return;
  }
  return;
}



/* Entry: 106ce8fbc; end: 106ce9333; -[SCGallerySnapsTabDataSource memoriesInlineSearchDataSource:didChangeSearchResults:] */

void FUN_106ce8fbc(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c07d540(param_3);
  func_0x00010c286ce0(uVar5);
  lVar7 = param_3;
  func_0x00010c07d540();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)lVar7 == 0) {
    func_0x00010c1f8820(param_1);
    puVar6 = *(undefined **)(param_1 + 0x40);
    _objc_retain(puVar6);
    puVar2 = *(undefined **)(param_1 + 0x90);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121e00();
  }
  else {
    puVar6 = PTR_PTR_1126d2138;
    _objc_alloc();
    puVar4 = PTR____NSArray0__struct_11034ab48;
    func_0x00010c0122c0();
    puVar2 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (((puVar2 == (undefined *)0x0) || (lVar7 = param_1, func_0x00010be43160(), (int)lVar7 == 0))
       || (puVar8 = puVar2, func_0x00010c1540a0(), puVar8 != (undefined *)0x4)) {
      func_0x00010c1f8820(param_1);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      _objc_retain(param_4);
      puVar4 = param_4;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar7 = *plStack_150;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_150 != lVar7) {
              _objc_enumerationMutation(param_4);
            }
            uVar5 = *(undefined8 *)(lStack_158 + (long)puVar8 * 8);
            func_0x00010c0c1c20(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar3);
            _objc_release(uVar5);
            puVar8 = puVar8 + 1;
          } while (puVar4 != puVar8);
          puVar4 = param_4;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(param_4);
      puVar4 = puVar3;
      func_0x00010bf00560(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed7780(param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    }
    else {
      puVar8 = puVar2;
      func_0x00010c0c1c20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined *)0x0) {
        puVar4 = puVar8;
      }
      _objc_retain(puVar4);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_retain(puVar4);
      _objc_opt_new();
      puStack_118 = puVar3;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_106ce99cc;
      puStack_100 = &UNK_1108bb418;
      puStack_f8 = puVar8;
      _objc_retain();
      func_0x00010bf97e80(puVar4);
      _objc_release(puVar4);
      puVar1 = puVar8;
      func_0x00010bf51e00(puVar8);
      _objc_release(puStack_f8);
      _objc_release(puVar8);
      func_0x00010c1f8820(param_1);
      _objc_release(puVar1);
      func_0x00010bed7780(param_1);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar2);
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_106ce9334;
  puStack_178 = &UNK_110841f80;
  puStack_190 = puVar3;
  lStack_170 = param_1;
  puStack_168 = puVar6;
  _objc_retain(puVar6);
  func_0x0001000d76cc("APPSTORE",&puStack_190);
  _objc_release(puStack_168);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(param_3 + 0x20) + 0x160;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bfbd9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 106ce9334; end: 106ce936b;  */

void FUN_106ce9334(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x160;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfbd9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ce936c; end: 106ce94b7; -[SCGallerySnapsTabDataSource snapsTabCRDataSourceDidUpdateCRViewModelforDataMetaDatas:forRequestUUID:shouldForceUpdate:] */

void FUN_106ce936c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc3c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106ce9414;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ce94b8; end: 106ce97a7; -[SCGallerySnapsTabDataSource _updateLibraryGroupTitleWithFinalCount] */

ulong FUN_106ce94b8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(ulong *)(param_1 + 0x48);
  _objc_retain(uVar15);
  uVar2 = uVar15;
  func_0x00010bfece40();
  if (uVar2 != 0x7fffffffffffffff) {
    uVar2 = uVar15;
    func_0x00010c0dfd40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be22a40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar4 != 0) {
        lVar16 = 0;
        do {
          lVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar3);
            }
            lVar5 = *(long *)(lVar17 * 8);
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bf529e0();
            lVar16 = lVar6 + lVar16;
            _objc_release(lVar5);
            lVar17 = lVar17 + 1;
          } while (lVar4 != lVar17);
          lVar4 = lVar3;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
        if (0 < lVar16) {
          *(long *)(param_1 + 0x60) = lVar16;
          uVar7 = *(undefined8 *)(param_1 + 0xc0);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1754e0();
          _objc_release(uVar7);
          puVar8 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
          _objc_opt_new();
          func_0x00010c1d02e0();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010c25d4c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuVar11 = &PTR____CFConstantStringClassReference_110e83a78;
          param_2 = 0;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e83a78,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar11);
          puVar12 = PTR_PTR_1126cfc30;
          _objc_alloc(PTR_PTR_1126cfc30);
          uVar13 = uVar2;
          func_0x00010bf343c0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c087060(uVar2);
          func_0x00010c052dc0(puVar12);
          _objc_release(uVar13);
          uVar13 = uVar15;
          func_0x00010c0d3c80(uVar15);
          func_0x00010c130f40();
          func_0x00010bea5b60(param_1);
          _objc_release(uVar13);
          _objc_release(puVar12);
          _objc_release(puVar9);
          _objc_release(puVar10);
          _objc_release(puVar8);
        }
      }
    }
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return uVar15;
  }
  ___stack_chk_fail();
  func_0x00010c087060(param_2);
  return (ulong)(param_2 == 2);
}



/* Entry: 106ce97a8; end: 106ce97c7;  */

bool FUN_106ce97a8(undefined8 param_1,long param_2)

{
  func_0x00010c087060(param_2);
  return param_2 == 2;
}



/* Entry: 106ce97c8; end: 106ce97df; -[SCGallerySnapsTabDataSource delegate] */

void FUN_106ce97c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ce97e0; end: 106ce97eb; -[SCGallerySnapsTabDataSource setDelegate:] */

void FUN_106ce97e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x160,param_3);
  return;
}



/* Entry: 106ce97ec; end: 106ce97f3; -[SCGallerySnapsTabDataSource selectMode] */

undefined1 FUN_106ce97ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x158);
}


