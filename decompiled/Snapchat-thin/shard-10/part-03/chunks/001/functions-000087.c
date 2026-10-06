/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e982a4; end: 107e982ab; -[IGListAdapter updater] */

undefined8 FUN_107e982a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107e982ac; end: 107e982db; -[IGListAdapter setUpdater:] */

void FUN_107e982ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e982dc; end: 107e982e3; -[IGListAdapter experiments] */

undefined8 FUN_107e982dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107e982e4; end: 107e982eb; -[IGListAdapter setExperiments:] */

void FUN_107e982e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107e982ec; end: 107e982f3; -[IGListAdapter legacyIsInDataUpdateBlock] */

undefined1 FUN_107e982ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 107e982f4; end: 107e982fb; -[IGListAdapter setLegacyIsInDataUpdateBlock:] */

void FUN_107e982f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107e982fc; end: 107e98303; -[IGListAdapter sectionMap] */

undefined8 FUN_107e982fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107e98304; end: 107e9830b; -[IGListAdapter displayHandler] */

undefined8 FUN_107e98304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107e9830c; end: 107e98313; -[IGListAdapter workingRangeHandler] */

undefined8 FUN_107e9830c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107e98314; end: 107e9831b; -[IGListAdapter delegateProxy] */

undefined8 FUN_107e98314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107e9831c; end: 107e9834b; -[IGListAdapter setDelegateProxy:] */

void FUN_107e9831c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9834c; end: 107e98353; -[IGListAdapter emptyBackgroundView] */

undefined8 FUN_107e9834c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107e98354; end: 107e98383; -[IGListAdapter setEmptyBackgroundView:] */

void FUN_107e98354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e98384; end: 107e9838b; -[IGListAdapter isLastInteractiveMoveToLastSectionIndex] */

undefined1 FUN_107e98384(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 107e9838c; end: 107e98393; -[IGListAdapter setIsLastInteractiveMoveToLastSectionIndex:] */

void FUN_107e9838c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 107e98394; end: 107e9839b; -[IGListAdapter isInObjectUpdateTransaction] */

undefined1 FUN_107e98394(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



/* Entry: 107e9839c; end: 107e983a3; -[IGListAdapter setIsInObjectUpdateTransaction:] */

void FUN_107e9839c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 107e983a4; end: 107e983ab; -[IGListAdapter previousSectionMap] */

undefined8 FUN_107e983a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107e983ac; end: 107e983db; -[IGListAdapter setPreviousSectionMap:] */

void FUN_107e983ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e983dc; end: 107e983e3; -[IGListAdapter registeredCellIdentifiers] */

undefined8 FUN_107e983dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107e983e4; end: 107e98413; -[IGListAdapter setRegisteredCellIdentifiers:] */

void FUN_107e983e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107e98414; end: 107e9841b; -[IGListAdapter registeredNibNames] */

undefined8 FUN_107e98414(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107e9841c; end: 107e9844b; -[IGListAdapter setRegisteredNibNames:] */

void FUN_107e9841c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9844c; end: 107e98453; -[IGListAdapter registeredSupplementaryViewIdentifiers] */

undefined8 FUN_107e9844c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107e98454; end: 107e98483; -[IGListAdapter setRegisteredSupplementaryViewIdentifiers:] */

void FUN_107e98454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e98484; end: 107e9848b; -[IGListAdapter registeredSupplementaryViewNibNames] */

undefined8 FUN_107e98484(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107e9848c; end: 107e984bb; -[IGListAdapter setRegisteredSupplementaryViewNibNames:] */

void FUN_107e9848c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e984bc; end: 107e985bb; -[IGListAdapter .cxx_destruct] */

void FUN_107e984bc(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107e985bc; end: 107e98627; -[IGListAdapterUpdater init] */

undefined1 * FUN_107e985bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb868;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d8150;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = 1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e98628; end: 107e98663; -[IGListAdapterUpdater hasChanges] */

undefined8 FUN_107e98628(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2797a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd5320();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107e98664; end: 107e98747; -[IGListAdapterUpdater _queueUpdateIfNeeded] */

void FUN_107e98664(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010bfdad00();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c2797a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd5320();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      func_0x00010c1a6840(param_1);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_107e98748;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 107e98748; end: 107e98787;  */

void FUN_107e98748(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1a6840(param_1,param_2,0);
    func_0x00010c2831c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e98788; end: 107e989c3; -[IGListAdapterUpdater update] */

void FUN_107e98788(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010c2797a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd5320();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c279780();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c279780();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c252440();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        return;
      }
    }
    lVar2 = param_1;
    func_0x00010c2797a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar2;
    func_0x00010bf22bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
    func_0x00010c2195c0(param_1);
    lVar1 = param_1;
    func_0x00010c2797a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8ce0(param_1);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126d8150;
    _objc_opt_new(PTR_PTR_1126d8150);
    func_0x00010c2195e0(param_1);
    _objc_release(puVar4);
    if (lVar3 == 0) {
      func_0x00010c1b8ce0(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      _objc_initWeak(auStack_50,lVar3);
      _objc_copyWeak(auStack_60,auStack_48);
      _objc_copyWeak(auStack_58,auStack_50);
      func_0x00010bef7900(lVar3);
      func_0x00010bf17a60(lVar3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 107e989c4; end: 107e98a4f;  */

void FUN_107e989c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c279780();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar2);
    if (lVar2 == param_1) {
      func_0x00010c2195c0(lVar1,param_2,0);
      func_0x00010c1b8ce0(lVar1,param_2,0);
      func_0x00010be85880(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e98a50; end: 107e98a8f; -[IGListAdapterUpdater isInDataUpdateBlock] */

bool FUN_107e98a50(long param_1)

{
  long lVar1;
  
  func_0x00010c279780();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 107e98a90; end: 107e98b1f; -[IGListAdapterUpdater objectLookupPointerFunctions] */

void FUN_107e98a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSPointerFunctions_1126d8110;
  func_0x00010c102e20(PTR__OBJC_CLASS___NSPointerFunctions_1126d8110,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7480();
  func_0x00010c1b0b80(puVar1,param_2,FUN_107e98b20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e98b20; end: 107e98bdb;  */

long FUN_107e98b20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  _objc_opt_class();
  lVar2 = param_2;
  _objc_opt_class();
  if (lVar1 == lVar2) {
    lVar1 = param_1;
    func_0x00010bf7ecc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf7ecc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c071ae0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 107e98bdc; end: 107e98c9b; -[IGListAdapterUpdater performUpdateWithCollectionViewBlock:animated:sectionDataBlock:applySectionDataBlock:completion:] */

void FUN_107e98bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2797a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb2a0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be85890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__queueUpdateIfNeeded_11257efc0);
  return;
}



/* Entry: 107e98c9c; end: 107e98d7f; -[IGListAdapterUpdater performUpdateWithCollectionViewBlock:animated:itemUpdates:completion:] */

void FUN_107e98c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c0753c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c2797a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9500();
    _objc_release(uVar1);
    func_0x00010be85880(param_1);
  }
  else {
    if (param_6 != 0) {
      func_0x00010c279780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7900();
      _objc_release(param_1);
    }
    (**(code **)(param_5 + 0x10))(param_5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e98d80; end: 107e98e17; -[IGListAdapterUpdater reloadDataWithCollectionViewBlock:reloadUpdateBlock:completion:] */

void FUN_107e98d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2797a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befae20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be85890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__queueUpdateIfNeeded_11257efc0);
  return;
}



/* Entry: 107e98e18; end: 107e98f83; -[IGListAdapterUpdater performDataSourceChange:] */

void FUN_107e98e18(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c279780();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c2797a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd5320();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(param_3 + 0x10))(param_3);
      goto LAB_107e98f5c;
    }
  }
  else {
    _objc_release();
  }
  puVar3 = PTR_PTR_1126d8150;
  _objc_opt_new(PTR_PTR_1126d8150);
  func_0x00010bef7c40();
  uVar1 = param_1;
  func_0x00010c279780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2dba0();
  if ((int)uVar2 == 0) {
LAB_107e98ef8:
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010c08a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010c08a520(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef75e0(puVar3,param_2,uVar1);
      goto LAB_107e98ef8;
    }
  }
  uVar1 = param_1;
  func_0x00010c2797a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef75e0(puVar3,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c2195c0(param_1,param_2,0);
  func_0x00010c1b8ce0(param_1,param_2,0);
  func_0x00010c2195e0(param_1,param_2,puVar3);
  func_0x00010c2831c0(param_1);
  _objc_release(puVar3);
LAB_107e98f5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e98f84; end: 107e9903b; -[IGListAdapterUpdater insertItemsIntoCollectionView:indexPaths:] */

void FUN_107e98f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0753c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099e20();
    _objc_release(param_1);
    func_0x00010c066a40(param_3,param_2,param_4);
  }
  else {
    func_0x00010c279780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066a40();
    _objc_release(param_4);
    param_4 = param_1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9903c; end: 107e990f3; -[IGListAdapterUpdater deleteItemsFromCollectionView:indexPaths:] */

void FUN_107e9903c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0753c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099de0();
    _objc_release(param_1);
    func_0x00010bf6c100(param_3,param_2,param_4);
  }
  else {
    func_0x00010c279780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c100();
    _objc_release(param_4);
    param_4 = param_1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e990f4; end: 107e991d7; -[IGListAdapterUpdater moveItemInCollectionView:fromIndexPath:toIndexPath:] */

void FUN_107e990f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0753c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099e40();
    _objc_release(param_1);
    func_0x00010c0d1540(param_3,param_2,param_4,param_5);
    param_1 = param_4;
  }
  else {
    func_0x00010c279780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d15c0();
    _objc_release(param_5);
    param_5 = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e991d8; end: 107e99343; -[IGListAdapterUpdater reloadItemInCollectionView:fromIndexPath:toIndexPath:] */

void FUN_107e991d8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c0753c0();
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099ea0(puVar1,param_2,param_1,puVar2,param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar4 = 1;
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar1 = param_1;
    func_0x00010c128de0(param_3,param_2,param_1);
  }
  else {
    func_0x00010c279780();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    uVar4 = param_5;
    func_0x00010c128d80();
    _objc_release(param_4);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  _objc_retain(uVar4);
  uVar3 = param_3;
  func_0x00010c0753c0();
  if ((int)uVar3 == 0) {
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099ec0();
    _objc_release(param_3);
    func_0x00010c128fa0(puVar1,param_2,uVar4);
  }
  else {
    func_0x00010c279780(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0();
    _objc_release(uVar4);
    uVar4 = param_3;
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e99344; end: 107e993fb; -[IGListAdapterUpdater reloadCollectionView:sections:] */

void FUN_107e99344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0753c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099ec0();
    _objc_release(param_1);
    func_0x00010c128fa0(param_3,param_2,param_4);
  }
  else {
    func_0x00010c279780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0();
    _objc_release(param_4);
    param_4 = param_1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e993fc; end: 107e99527; -[IGListAdapterUpdater moveSectionInCollectionView:fromIndex:toIndex:] */

void FUN_107e993fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c128b60(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107e9e528();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099ec0(uVar1,param_2,param_1,uVar3,param_3);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107e99528;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_3;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(param_3);
  func_0x00010c0f8420(param_3,param_2,&puStack_70,&PTR___NSConcreteGlobalBlock_110a10858);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e99528; end: 107e9953f;  */

void FUN_107e99528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadSections__112627e08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e99540; end: 107e99557; -[IGListAdapterUpdater delegate] */

void FUN_107e99540(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e99558; end: 107e99563; -[IGListAdapterUpdater setDelegate:] */

void FUN_107e99558(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107e99564; end: 107e9956b; -[IGListAdapterUpdater sectionMovesAsDeletesInserts] */

undefined1 FUN_107e99564(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e9956c; end: 107e99573; -[IGListAdapterUpdater setSectionMovesAsDeletesInserts:] */

void FUN_107e9956c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107e99574; end: 107e9957b; -[IGListAdapterUpdater singleItemSectionUpdates] */

undefined1 FUN_107e99574(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107e9957c; end: 107e99583; -[IGListAdapterUpdater setSingleItemSectionUpdates:] */

void FUN_107e9957c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107e99584; end: 107e9958b; -[IGListAdapterUpdater preferItemReloadsForSectionReloads] */

undefined1 FUN_107e99584(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107e9958c; end: 107e99593; -[IGListAdapterUpdater setPreferItemReloadsForSectionReloads:] */

void FUN_107e9958c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 107e99594; end: 107e9959b; -[IGListAdapterUpdater allowsReloadingOnTooManyUpdates] */

undefined1 FUN_107e99594(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107e9959c; end: 107e995a3; -[IGListAdapterUpdater setAllowsReloadingOnTooManyUpdates:] */

void FUN_107e9959c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 107e995a4; end: 107e995ab; -[IGListAdapterUpdater allowsBackgroundDiffing] */

undefined1 FUN_107e995a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107e995ac; end: 107e995b3; -[IGListAdapterUpdater setAllowsBackgroundDiffing:] */

void FUN_107e995ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 107e995b4; end: 107e995bb; -[IGListAdapterUpdater experiments] */

undefined8 FUN_107e995b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e995bc; end: 107e995c3; -[IGListAdapterUpdater setExperiments:] */

void FUN_107e995bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107e995c4; end: 107e995cb; -[IGListAdapterUpdater transactionBuilder] */

undefined8 FUN_107e995c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e995cc; end: 107e995fb; -[IGListAdapterUpdater setTransactionBuilder:] */

void FUN_107e995cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e995fc; end: 107e99603; -[IGListAdapterUpdater lastTransactionBuilder] */

undefined8 FUN_107e995fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e99604; end: 107e99633; -[IGListAdapterUpdater setLastTransactionBuilder:] */

void FUN_107e99604(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107e99634; end: 107e9963b; -[IGListAdapterUpdater transaction] */

undefined8 FUN_107e99634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e9963c; end: 107e9966b; -[IGListAdapterUpdater setTransaction:] */

void FUN_107e9963c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9966c; end: 107e99673; -[IGListAdapterUpdater hasQueuedUpdate] */

undefined1 FUN_107e9966c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107e99674; end: 107e9967b; -[IGListAdapterUpdater setHasQueuedUpdate:] */

void FUN_107e99674(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 107e9967c; end: 107e996bf; -[IGListAdapterUpdater .cxx_destruct] */

void FUN_107e9967c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107e996c0; end: 107e998ab; -[IGListBindingSectionController updateAnimated:completion:] */

void FUN_107e996c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 0) {
    func_0x00010c209fc0(param_1);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_107e998ac;
    uStack_70 = 0x107e998bc;
    uStack_68 = 0;
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_107e998ac;
    uStack_a0 = 0x107e998bc;
    uStack_98 = 0;
    lVar1 = param_1;
    func_0x00010bf3fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3fd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    _objc_retain(param_4);
    func_0x00010c0f83e0(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(lVar1);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  else if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107e998ac; end: 107e998c3;  */

void FUN_107e998ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e998c4; end: 107e99e2b;  */

/* WARNING: Possible PIC construction at 0x000107e9998c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e99990) */
/* WARNING: Removing unreachable block (ram,0x000107e99aa8) */
/* WARNING: Removing unreachable block (ram,0x000107e99ae0) */
/* WARNING: Removing unreachable block (ram,0x000107e99b8c) */
/* WARNING: Removing unreachable block (ram,0x000107e99b98) */
/* WARNING: Removing unreachable block (ram,0x000107e99b9c) */
/* WARNING: Removing unreachable block (ram,0x000107e99bac) */
/* WARNING: Removing unreachable block (ram,0x000107e99bb4) */
/* WARNING: Removing unreachable block (ram,0x000107e99bf4) */
/* WARNING: Removing unreachable block (ram,0x000107e99c10) */

void FUN_107e998c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29db80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    _objc_release(uVar9);
    func_0x00010c0dfc60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = lVar2;
    func_0x00010c1557e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar8 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar11 = *(long *)(lVar12 * 8);
        func_0x00010bf7ecc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0 && puVar5 == (undefined *)0x0) {
          func_0x00010c1d0560(puVar4);
          func_0x00010befa120(puVar10);
        }
        _objc_release(puVar5);
        _objc_release(lVar11);
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28);
  func_0x00010c0dfd40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf7ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
  func_0x00010c0d8b00();
  if (lVar2 != 0x7fffffffffffffff) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf33b20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c29db80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a480(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107e99e2c; end: 107e99f17;  */

void FUN_107e99e2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010c0dfd40(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  func_0x00010c0d8b00();
  if (lVar3 != 0x7fffffffffffffff) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf33b20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c29db80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a480(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e99f18; end: 107e99f5b;  */

void FUN_107e99f18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c209fc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107e99f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 107e99f5c; end: 107e99f97; -[IGListBindingSectionController numberOfItems] */

undefined8 FUN_107e99f5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107e99f98; end: 107e9a043; -[IGListBindingSectionController sizeForItemAtIndex:] */

undefined1  [16]
FUN_107e99f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_3;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29db80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1557c0(uVar1,param_4,param_3,uVar3,param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107e9a044; end: 107e9a0e7; -[IGListBindingSectionController cellForItemAtIndex:] */

void FUN_107e9a044(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c155720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bf1a480(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e9a0e8; end: 107e9a1c7; -[IGListBindingSectionController didUpdateToObject:] */

void FUN_107e9a0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04a0(param_1,param_2,param_3);
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1557e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x000107e99c80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222980(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  else {
    func_0x00010c283660(param_1,param_2,1,0);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e9a1c8; end: 107e9a267; -[IGListBindingSectionController moveObjectFromIndex:toIndex:] */

void FUN_107e9a1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0dfd20(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3c0(uVar2,param_2,param_3);
  func_0x00010c066b00(uVar2,param_2,uVar1,param_4);
  func_0x00010c222980(param_1,param_2,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e9a268; end: 107e9a2f7; -[IGListBindingSectionController didSelectItemAtIndex:] */

void FUN_107e9a268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c15a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29db80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155780(uVar1,param_2,param_1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9a2f8; end: 107e9a387; -[IGListBindingSectionController didDeselectItemAtIndex:] */

void FUN_107e9a2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c15a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29db80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155740(uVar1,param_2,param_1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9a388; end: 107e9a417; -[IGListBindingSectionController didHighlightItemAtIndex:] */

void FUN_107e9a388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c15a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29db80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155760(uVar1,param_2,param_1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9a418; end: 107e9a4a7; -[IGListBindingSectionController didUnhighlightItemAtIndex:] */

void FUN_107e9a418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c15a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29db80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1557a0(uVar1,param_2,param_1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9a4a8; end: 107e9a4c7; -[IGListBindingSectionController dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a4a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770d08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9a4c8; end: 107e9a4db; -[IGListBindingSectionController setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770d08,param_3);
  return;
}



/* Entry: 107e9a4dc; end: 107e9a4fb; -[IGListBindingSectionController selectionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a4dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770d0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e9a4fc; end: 107e9a50f; -[IGListBindingSectionController setSelectionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770d0c,param_3);
  return;
}



/* Entry: 107e9a510; end: 107e9a51f; -[IGListBindingSectionController object] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9a510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d10);
}



/* Entry: 107e9a520; end: 107e9a55f; -[IGListBindingSectionController setObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770d10;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e9a560; end: 107e9a56f; -[IGListBindingSectionController viewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9a560(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d14);
}



/* Entry: 107e9a570; end: 107e9a57b; -[IGListBindingSectionController setViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107e9a57c; end: 107e9a58b; -[IGListBindingSectionController state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e9a57c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770d04);
}



/* Entry: 107e9a58c; end: 107e9a59b; -[IGListBindingSectionController setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112770d04) = param_3;
  return;
}



/* Entry: 107e9a59c; end: 107e9a5f3; -[IGListBindingSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e9a59c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770d14,0);
  _objc_storeStrong(param_1 + _DAT_112770d10,0);
  _objc_destroyWeak(param_1 + _DAT_112770d0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770d08);
  return;
}



/* Entry: 107e9a5f4; end: 107e9a5f7; -[IGListBindingSingleSectionController didSelectItemWithCell:] */

void FUN_107e9a5f4(void)

{
  return;
}



/* Entry: 107e9a5f8; end: 107e9a5fb; -[IGListBindingSingleSectionController didDeselectItemWithCell:] */

void FUN_107e9a5f8(void)

{
  return;
}



/* Entry: 107e9a5fc; end: 107e9a5ff; -[IGListBindingSingleSectionController didHighlightItemWithCell:] */

void FUN_107e9a5fc(void)

{
  return;
}



/* Entry: 107e9a600; end: 107e9a603; -[IGListBindingSingleSectionController didUnhighlightItemWithCell:] */

void FUN_107e9a600(void)

{
  return;
}


