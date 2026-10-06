/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e95d90; end: 104e95dd7; -[SCPostRegAddFriendsPageEndObserverSnapshot .cxx_destruct] */

void FUN_104e95d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 104e95dd8; end: 104e95fdb; -[SCPostRegAddFriendsMultiSelectStateObserver initWithSnapchattersDataFetcher:snapchattersDataTracker:performer:circumstanceEngine:userPreferences:] */

undefined8 *
FUN_104e95dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e4b00;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    uVar3 = puVar1[2];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar3);
    puVar1[7] = 0xffffffff;
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    uVar3 = puVar1[10];
    puVar1[10] = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar3);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar3);
    uVar3 = puVar1[0xe];
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b1920;
    _objc_alloc();
    func_0x00010c0387e0();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e95fdc; end: 104e960b3; -[SCPostRegAddFriendsMultiSelectStateObserver setSelectedSnapchatters:] */

void FUN_104e95fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e960b4; end: 104e960eb;  */

void FUN_104e960b4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e960ec; end: 104e96113; -[SCPostRegAddFriendsMultiSelectStateObserver selectedSnapchatters] */

void FUN_104e960ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e96114; end: 104e961cb; -[SCPostRegAddFriendsMultiSelectStateObserver setMaxVisibleCellsCount:] */

void FUN_104e96114(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  lStack_40 = param_3 + -1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e961cc; end: 104e961ff;  */

void FUN_104e961cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed1fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e96200; end: 104e962a7; -[SCPostRegAddFriendsMultiSelectStateObserver infoCellWillAppear] */

void FUN_104e96200(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e962a8; end: 104e962d3;  */

void FUN_104e962a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb2140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e962d4; end: 104e9646f; -[SCPostRegAddFriendsMultiSelectStateObserver _setSelectedSnapchattersToIndexPathDictInQueuePerformer:isUserAction:] */

/* WARNING: Possible PIC construction at 0x000104e96428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e9642c) */
/* WARNING: Removing unreachable block (ram,0x000104e9646c) */
/* WARNING: Removing unreachable block (ram,0x000104e9644c) */

void FUN_104e962d4(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if ((param_4 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  lVar3 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        lVar4 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
        _objc_release(lVar4);
      }
      else {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18));
      }
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be843d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishSelectedSnapchatters_11257ea90);
  return;
}



/* Entry: 104e96470; end: 104e964c3; -[SCPostRegAddFriendsMultiSelectStateObserver _resetSelectedSnapchattersToIndexPathDictInQueuePerformer:] */

void FUN_104e96470(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bde94c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be843d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishSelectedSnapchatters_11257ea90);
  return;
}



/* Entry: 104e964c4; end: 104e96507; -[SCPostRegAddFriendsMultiSelectStateObserver _publishSelectedSnapchatters] */

void FUN_104e964c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar2);
  func_0x00010be88800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 104e96508; end: 104e9663b; -[SCPostRegAddFriendsMultiSelectStateObserver _refreshPageEndSnapshotInQueuePerformer] */

void FUN_104e96508(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = PTR_PTR_1126b1920;
  _objc_alloc();
  uVar3 = *(undefined1 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf529e0(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf00d20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bebe2e0(param_1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf00d20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bebe2e0(param_1,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bee70a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0387e0(puVar4,param_2,uVar3,uVar5,uVar1,uVar2,lVar7,lVar9,lVar10);
  func_0x00010c1d8080(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 104e9663c; end: 104e96757; -[SCPostRegAddFriendsMultiSelectStateObserver _unselectSnapchattersBeyondLimit:] */

void FUN_104e9663c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_1 + 0x38) = param_3;
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (*(ulong *)(param_1 + 0x38) < uVar1) {
    lVar2 = param_1;
    func_0x00010be79be0();
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    lStack_40 = lVar2;
    func_0x00010c2622c0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104e96758; end: 104e967db;  */

void FUN_104e96758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf529e0();
  uVar1 = param_2;
  func_0x00010c099060(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be93a60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e967dc; end: 104e968cf; -[SCPostRegAddFriendsMultiSelectStateObserver _fetchSuggestions] */

void FUN_104e967dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2622c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e968d0; end: 104e96917;  */

void FUN_104e968d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea67e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e96918; end: 104e969bf; -[SCPostRegAddFriendsMultiSelectStateObserver _convertSnapchatterArraytoSnapchatterIndexPathDict:] */

void FUN_104e96918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e969c0;
  puStack_30 = &UNK_110856868;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c0d3c80(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e969c0; end: 104e96a33;  */

void FUN_104e969c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_2);
  func_0x00010bfed060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e96a34; end: 104e96ad7; -[SCPostRegAddFriendsMultiSelectStateObserver _setPreselectedSnapchatterToIndexPath:] */

void FUN_104e96a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be79be0(param_1);
  uVar3 = param_3;
  func_0x00010c099060(param_3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bde94c0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar2 = lVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar2;
  _objc_release(uVar3);
  func_0x00010bea7340(param_1,param_2,lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e96ad8; end: 104e96c6b; -[SCPostRegAddFriendsMultiSelectStateObserver _shiftIndexPathsByOneForPreselectedSnapchatters] */

void FUN_104e96ad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d3c80();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar2);
          }
          uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          lVar4 = *(long *)(param_1 + 0x18);
          func_0x00010c0e00e0(lVar4,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c0840e0();
          _objc_release(lVar4);
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar5 + 1,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar1,param_2,puVar6,uVar7);
          _objc_release(puVar6);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar7);
    *(undefined1 *)(param_1 + 0x40) = 1;
    func_0x00010be843c0(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104e96c6c; end: 104e96c6f; -[SCPostRegAddFriendsMultiSelectStateObserver didStartSnapchattersUpdateDataRequest:] */

void FUN_104e96c6c(void)

{
  return;
}



/* Entry: 104e96c70; end: 104e96c73; -[SCPostRegAddFriendsMultiSelectStateObserver didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_104e96c70(void)

{
  return;
}



/* Entry: 104e96c74; end: 104e96ccf; -[SCPostRegAddFriendsMultiSelectStateObserver didEndSnapchattersContactDataRequest:withResult:] */

void FUN_104e96c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e96cd0;
  puStack_20 = &UNK_1108484c8;
  uStack_18 = param_1;
  func_0x00010c0c0860(param_4,param_2,&puStack_38,0,0);
  return;
}



/* Entry: 104e96cd0; end: 104e96cd7;  */

void FUN_104e96cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchSuggestions_112562cf0);
  return;
}



/* Entry: 104e96cd8; end: 104e96de7; -[SCPostRegAddFriendsMultiSelectStateObserver _preselectedCountOfSuggestions] */

ulong FUN_104e96cd8(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(uVar3);
    uVar2 = uVar3;
  }
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(ulong *)(param_1 + 0x70) = uVar2;
  _objc_release(uVar5);
  if ((uVar2 == 0) || (uVar6 = uVar2, func_0x00010c067fc0(), (long)uVar6 < 0)) {
    *(undefined8 *)(param_1 + 0x68) = 1;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c067f00();
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((ulong)(long)iVar1 <= *(ulong *)(param_1 + 0x38)) {
      uVar6 = (long)iVar1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x68) = 2;
    uVar6 = uVar2;
    func_0x00010c2827c0();
    if (*(ulong *)(param_1 + 0x38) <= uVar6) {
      uVar6 = *(ulong *)(param_1 + 0x38);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar6;
}



/* Entry: 104e96de8; end: 104e96fc7; -[SCPostRegAddFriendsMultiSelectStateObserver _userSelectedIndicesStringInQueuePerformer] */

void FUN_104e96de8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar7);
  lVar8 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      lVar4 = lVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar4 == 0) {
        lVar4 = lVar8;
        func_0x00010c0e00e0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0();
        func_0x00010c0df780(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar5);
        _objc_release(lVar4);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar5 = puVar2;
  func_0x00010bebe300(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    func_0x000100504554(puVar5,&PTR___NSConcreteGlobalBlock_1108568b8);
    func_0x00010bebe300(lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    param_1 = lVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e96fc8; end: 104e9704b; -[SCPostRegAddFriendsMultiSelectStateObserver _sortedIndicesStringFromIndexPaths:] */

void FUN_104e96fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108568b8);
  func_0x00010bebe300(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e9704c; end: 104e970c3; -[SCPostRegAddFriendsMultiSelectStateObserver _sortedIndicesStringFromIndices:] */

void FUN_104e9704c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c246d00(param_3,param_2,PTR_s_compare__1125ae690);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  uVar2 = uVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104e970c4; end: 104e970cb;  */

void FUN_104e970c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104e970cc; end: 104e970d7; -[SCPostRegAddFriendsMultiSelectStateObserver pageEndSnapshot] */

void FUN_104e970cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 104e970d8; end: 104e970df; -[SCPostRegAddFriendsMultiSelectStateObserver setPageEndSnapshot:] */

void FUN_104e970d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104e970e0; end: 104e9717b; -[SCPostRegAddFriendsMultiSelectStateObserver .cxx_destruct] */

void FUN_104e970e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104e9717c; end: 104e97183; -[SCPostRegAddFriendsSearchQueryCoordinator canPerformQuery:] */

undefined8 FUN_104e9717c(void)

{
  return 1;
}



/* Entry: 104e97184; end: 104e9722f; -[SCPostRegAddFriendsSearchQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_104e97184(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b16f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010be9cd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042a40(puVar1);
  _objc_release(param_3);
  (**(code **)(param_4 + 0x10))(param_4,puVar1,0);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e97230; end: 104e972db; -[SCPostRegAddFriendsSearchQueryCoordinator _sectionDescriptors] */

void FUN_104e97230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be85900();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_30 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bff4000();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b16f8;
    _objc_alloc(PTR_PTR_1126b16f8);
    func_0x00010c028e00();
    puVar3 = PTR_PTR_1126b1700;
    _objc_alloc(PTR_PTR_1126b1700);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(0,0x402e000000000000,0x4020000000000000,0x402e000000000000,
                        PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b16e8;
    _objc_alloc(PTR_PTR_1126b16e8);
    func_0x00010c043740();
    func_0x00010c043020(0,puVar3,param_2,0,puVar1,puVar2,1,1,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    func_0x00010c055bc0();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e972dc; end: 104e973fb; -[SCPostRegAddFriendsSearchQueryCoordinator _quickAddSectionDescriptor] */

void FUN_104e972dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0x402e000000000000,0x4020000000000000,0x402e000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b16e8;
  _objc_alloc(PTR_PTR_1126b16e8);
  func_0x00010c043740();
  func_0x00010c043020(0,puVar2,param_2,0,puVar1,puVar3,1,1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e973fc; end: 104e9751b; -[SCPostRegAddFriendsSearchQueryCoordinator _recentlyActiveSummaryCardSectionDescriptor] */

void FUN_104e973fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0x402e000000000000,0x4020000000000000,0x402e000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b16e8;
  _objc_alloc(PTR_PTR_1126b16e8);
  func_0x00010c043740();
  func_0x00010c043020(0,puVar2,param_2,0,puVar1,puVar3,1,1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc(PTR_PTR_1126b1260);
  func_0x00010c055bc0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e9751c; end: 104e97523; -[SCPostRegAddFriendsSearchQueryCoordinator currentQuery] */

undefined8 FUN_104e9751c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e97524; end: 104e9752b; -[SCPostRegAddFriendsSearchQueryCoordinator setCurrentQuery:] */

void FUN_104e97524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104e9752c; end: 104e97533; -[SCPostRegAddFriendsSearchQueryCoordinator isLoading] */

undefined1 FUN_104e9752c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e97534; end: 104e9753f; -[SCPostRegAddFriendsSearchQueryCoordinator .cxx_destruct] */

void FUN_104e97534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e97540; end: 104e977b7; -[SCPostRegAddFriendsSearchSectionCreator initWithSnapchattersDataFetcher:snapchattersDataTracker:actionHandler:imageDownloader:collectionCellViewModelGenerator:viewStateObserver:multiSelectStateObserver:userPreferences:circumstanceEngine:friendingExperimentReader:] */

undefined8 *
FUN_104e97540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126e4b08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e977b8; end: 104e97bbf; -[SCPostRegAddFriendsSearchSectionCreator sectionForDescriptor:] */

void FUN_104e977b8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar1);
  if ((int)ppuVar2 == 0) {
    ppuVar1 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0720c0();
    _objc_release(ppuVar1);
    if ((int)ppuVar2 == 0) {
      ppuVar1 = param_3;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010c0720c0();
      _objc_release(ppuVar1);
      if ((int)ppuVar2 == 0) {
        puVar12 = (undefined *)0x0;
        goto LAB_104e97b00;
      }
      puVar12 = PTR_PTR_1126b1108;
      _objc_alloc(PTR_PTR_1126b1108);
      func_0x00010c04f820();
      puVar10 = PTR_PTR_1126b1938;
      _objc_alloc(PTR_PTR_1126b1938);
      func_0x00010c05ca20();
      func_0x00010c1f9240(puVar12);
    }
    else {
      puVar12 = PTR_PTR_1126b1930;
      _objc_opt_new(PTR_PTR_1126b1930);
      puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
      _objc_opt_new();
      func_0x00010c166c00();
      puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar4 = puVar10;
      func_0x00010b2d0b5c();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c1cd8a0(puVar12);
    }
  }
  else {
    puVar12 = PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    ppuVar2 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar13);
    ppuVar1 = ppuVar2;
    func_0x00010c0720c0();
    if ((int)ppuVar1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x00010b2d0b8c();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = ppuVar1;
    func_0x0001051745a0(ppuVar1,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b1720;
    _objc_alloc(PTR_PTR_1126b1720);
    func_0x00010c01a160();
    func_0x00010c161980();
    _objc_release(uVar13);
    _objc_release(ppuVar8);
    _objc_release(ppuVar1);
    func_0x00010c04f820(puVar12);
    _objc_release(puVar10);
    _objc_release(ppuVar2);
    func_0x00010bef9980(puVar12);
    puVar10 = PTR_PTR_1126b1928;
    _objc_alloc(PTR_PTR_1126b1928);
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar13;
    func_0x00010c104ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049ae0(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar13);
    func_0x00010c1f9240(puVar12);
    func_0x00010c161980(puVar12);
  }
  _objc_release(puVar10);
LAB_104e97b00:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3[8],PTR_s_next__112614028);
  return;
}



/* Entry: 104e97bc0; end: 104e97bc7; -[SCPostRegAddFriendsSearchSectionCreator _receiveAddFriendsPageEvent:] */

void FUN_104e97bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028);
  return;
}



/* Entry: 104e97bc8; end: 104e97bcf; -[SCPostRegAddFriendsSearchSectionCreator actionHandler] */

undefined8 FUN_104e97bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e97bd0; end: 104e97bff; -[SCPostRegAddFriendsSearchSectionCreator setActionHandler:] */

void FUN_104e97bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e97c00; end: 104e97c07; -[SCPostRegAddFriendsSearchSectionCreator pageEventObservable] */

undefined8 FUN_104e97c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104e97c08; end: 104e97c37; -[SCPostRegAddFriendsSearchSectionCreator setPageEventObservable:] */

void FUN_104e97c08(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e97c38; end: 104e97cdf; -[SCPostRegAddFriendsSearchSectionCreator .cxx_destruct] */

void FUN_104e97c38(long param_1)

{
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



/* Entry: 104e97ce0; end: 104e97dcf; -[SCPostRegAddFriendsSnapchatterViewStateObserver initWithCircumstanceEngine:] */

undefined1 * FUN_104e97ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4b10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e97dd0; end: 104e97eaf; -[SCPostRegAddFriendsSnapchatterViewStateObserver _setViewedSnapchattersFromDataUpdates:withIndex:] */

void FUN_104e97dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e97eb0; end: 104e97f43;  */

void FUN_104e97eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea6a20();
  _objc_release(lVar1);
  uVar4 = *(ulong *)(param_1 + 0x30);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar4 < uVar2) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedf560(lVar1,param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104e97f44; end: 104e98083; -[SCPostRegAddFriendsSnapchatterViewStateObserver _updateSeenSuggestedSnapchatter:] */

void FUN_104e97f44(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar5);
  }
  lVar2 = param_3;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  lVar2 = param_3;
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c262240(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2622e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010901eaa4();
  if ((int)lVar2 != 0) {
    func_0x000108f488b8(*(undefined8 *)(param_1 + 0x30),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e98084; end: 104e980b3; -[SCPostRegAddFriendsSnapchatterViewStateObserver _setQuickAddList:] */

void FUN_104e98084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e980b4; end: 104e9817f; -[SCPostRegAddFriendsSnapchatterViewStateObserver quickAddList] */

void FUN_104e980b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104e98180;
  uStack_30 = 0x104e98190;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104e98198;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e98180; end: 104e98197;  */

void FUN_104e98180(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e98198; end: 104e981d3;  */

void FUN_104e98198(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e981d4; end: 104e9829f; -[SCPostRegAddFriendsSnapchatterViewStateObserver viewedQuickAddSnapchatterUserIds] */

void FUN_104e981d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104e98180;
  uStack_30 = 0x104e98190;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104e982a0;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e982a0; end: 104e982e3;  */

void FUN_104e982a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e982e4; end: 104e983af; -[SCPostRegAddFriendsSnapchatterViewStateObserver viewedContactSnapchatterUserIds] */

void FUN_104e982e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104e98180;
  uStack_30 = 0x104e98190;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104e983b0;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e983b0; end: 104e983f3;  */

void FUN_104e983b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e983f4; end: 104e9841b; -[SCPostRegAddFriendsSnapchatterViewStateObserver firstSuggestionRenderedTimestamp] */

void FUN_104e983f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e9841c; end: 104e985a3; -[SCPostRegAddFriendsSnapchatterViewStateObserver didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104e9841c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126b1108;
    func_0x00010bf04780(PTR_PTR_1126b1108);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      uVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar1 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      uVar5 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      uVar4 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      func_0x00010c142240(uVar4);
      _objc_release(uVar4);
      uVar4 = uVar1;
      func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_110856938);
      _objc_release(uVar1);
      func_0x00010beaa1e0(param_1);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e985a4; end: 104e98747;  */

void FUN_104e985a4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b1910;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104e98180;
  uStack_40 = 0x104e98190;
  uStack_38 = 0;
  uVar3 = uVar1;
  func_0x00010c244760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beed3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bccc0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar5 = puStack_58[5];
  func_0x00010c244280(uVar5);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104e98748; end: 104e9874f; -[SCPostRegAddFriendsSnapchatterViewStateObserver viewedQuickAddSnapchatterSuggestTokenByUserId] */

undefined8 FUN_104e98748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e98750; end: 104e987af; -[SCPostRegAddFriendsSnapchatterViewStateObserver .cxx_destruct] */

void FUN_104e98750(long param_1)

{
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



/* Entry: 104e987b0; end: 104e988e7;  */

void FUN_104e987b0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010beee1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b1888;
  _objc_opt_class(PTR_PTR_1126b1888);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104e988e8; end: 104e9893f;  */

void FUN_104e988e8(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_1108569a8);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010c0d1b80(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e98940; end: 104e98a13;  */

void FUN_104e98940(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1940;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4a480();
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  func_0x00010c048c40(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e98a14; end: 104e98ca7; -[SCPostRegAddFriendsDefaultLogger initWithSignupTransitionLogger:postRegistrationLogger:postRegAddFriendsImpressionLogger:viewStateObserver:multiSelectStateObserver:registrationPerformanceLogger:hasVerifiedPhoneNumber:applicationLifecycleEvents:postRegAddFriendsGrapheneLogger:performerProvider:] */

undefined8 *
FUN_104e98a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             byte param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e4b18;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    puVar1[6] = (ulong)param_9;
    puVar1[7] = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x12];
    puVar1[0x12] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010be65b40(puVar1);
    uVar2 = param_7;
    func_0x00010c15a080(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be66ac0(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e98ca8; end: 104e98d93; -[SCPostRegAddFriendsDefaultLogger _observeApplicationEvent] */

void FUN_104e98ca8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c2a6420(uVar1);
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



/* Entry: 104e98d94; end: 104e98dbf;  */

void FUN_104e98d94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c104e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e98dc0; end: 104e98ecb; -[SCPostRegAddFriendsDefaultLogger _observePreselectedSuggestionsFromObservable:] */

void FUN_104e98dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104e98ecc; end: 104e98f33;  */

void FUN_104e98ecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(param_2);
  func_0x00010beddb00(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e98f34; end: 104e98f9b; -[SCPostRegAddFriendsDefaultLogger _updatePreselectedSnapchatters:] */

void FUN_104e98f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e98f9c; end: 104e98fd3; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsFindFriendsRequestDidStart] */

void FUN_104e98f9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e98fd4; end: 104e99107; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsFindFriendsRequestDidSucceedWithFoundSnapchatterUserIds:contactBookSize:waitTime:] */

void FUN_104e98fd4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(long *)(param_2 + 0x40) = param_4;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x60) = param_5;
  *(undefined8 *)(param_2 + 0x68) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010c0b2a20(uVar1,param_3,lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae680();
  _objc_release(uVar1);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0abca0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0adb60();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e99108; end: 104e99187; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsFindFriendsRequestDidFailWithError:] */

void FUN_104e99108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_104e99cec(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0ae660(uVar2,param_2,0,0,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e99188; end: 104e991cf; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsFindFriendsRequestDidSucceed] */

void FUN_104e99188(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e991d0; end: 104e992af; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsDidSubmitAddFriendsRequest:] */

void FUN_104e991d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2622e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    lVar2 = 0x48;
    if (lVar3 != 0) {
      lVar2 = 0x50;
    }
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e992b0; end: 104e992ef; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsDidCompleteAddFriendsRequest:] */

void FUN_104e992b0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104e992f0; end: 104e99377; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsDidContinue] */

void FUN_104e992f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2513c0();
  _objc_release(uVar1);
  func_0x00010be59700(param_1);
  func_0x00010be584c0(param_1);
  func_0x00010be58480(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be596d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logSuggestionRenderLatency_112573f50);
  return;
}



/* Entry: 104e99378; end: 104e993af; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsDidTapSkipButton] */

void FUN_104e99378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e993b0; end: 104e99477; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsDidConfirmSkip] */

void FUN_104e993b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2513c0();
  _objc_release(uVar1);
  func_0x00010be59700(param_1);
  func_0x00010be584c0(param_1);
  func_0x00010be58480(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c0adbc0(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be596d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logSuggestionRenderLatency_112573f50);
  return;
}



/* Entry: 104e99478; end: 104e994cf; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsDidCancelSkip] */

void FUN_104e99478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf529e0(uVar2);
  func_0x00010c0adbc0(uVar1,param_2,uVar2,0,0,*(undefined8 *)(param_1 + 0x30),0x29);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e994d0; end: 104e99507; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsDidAutoSkip] */

void FUN_104e994d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e99508; end: 104e99543; -[SCPostRegAddFriendsDefaultLogger postRegAddFriendsInterrupted] */

void FUN_104e99508(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e99544; end: 104e9959f; -[SCPostRegAddFriendsDefaultLogger logPageEndWithSummary:] */

void FUN_104e99544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b58;
  _NSClassFromString();
  if (ppuVar1 != (undefined **)0x0) {
    _objc_alloc();
    func_0x00010c037d00();
    func_0x00010c0abba0();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e995a0; end: 104e9973b; -[SCPostRegAddFriendsDefaultLogger _logSeenAndAddedSuggestions] */

void FUN_104e995a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29ed00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  func_0x00010c0a0d00(uVar1,param_2,uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c29eb80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010c29ed00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar3);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    _objc_release(lVar3);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29eb80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29ed00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29ece0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278200(uVar6,param_2,uVar1,uVar8,uVar2,uVar9,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 104e9973c; end: 104e997f3; -[SCPostRegAddFriendsDefaultLogger _logSeenAndAddedRecentlyActiveSuggestionsFromSkipInPerformer:] */

void FUN_104e9973c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e997f4; end: 104e99827;  */

void FUN_104e997f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e99828; end: 104e99a73; -[SCPostRegAddFriendsDefaultLogger _logSeenAndAddedRecentlyActiveSuggestionsFromSkip:] */

void FUN_104e99828(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11e220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  uVar3 = uVar2;
  func_0x000100504554();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29ed00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104e99abc;
  puStack_80 = &UNK_110856a28;
  _objc_retain(puVar4);
  uVar6 = uVar5;
  puStack_78 = puVar4;
  func_0x0001006372a4(uVar5,&puStack_98);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (((param_3 & 1) == 0) && (puVar8 = *(undefined **)(param_1 + 0x58), puVar8 != (undefined *)0x0)
     ) {
    func_0x00010bf51e00();
    puVar9 = puVar8;
    func_0x000100504554();
    puVar10 = puVar9;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puVar7 = puVar10;
  }
  else {
    func_0x00010befa160(puVar7);
    func_0x00010befa160(puVar7);
  }
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104e99ad0;
  puStack_a8 = &UNK_110856a28;
  puStack_c0 = puVar9;
  puStack_a0 = puVar4;
  _objc_retain(puVar4);
  puVar9 = puVar7;
  func_0x0001006372a4(puVar7,&puStack_c0);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(puVar4);
  func_0x00010bf529e0(uVar6);
  func_0x00010bf529e0(puVar9);
  func_0x00010c0a0e20(uVar11);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(puStack_a0);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puStack_78);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e99a74; end: 104e99ab3;  */

undefined8 FUN_104e99a74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c262240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c07be00();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104e99ab4; end: 104e99adb;  */

void FUN_104e99ab4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 104e99adc; end: 104e99bb3; -[SCPostRegAddFriendsDefaultLogger _logSuggestionsFindSuccess] */

void FUN_104e99adc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0(lVar1);
    lVar2 = *(long *)(param_1 + 0x50);
    func_0x00010bf529e0(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf529e0(uVar4);
    func_0x00010c0adb40(*(undefined8 *)(param_1 + 0x68),uVar3,param_2,1,uVar4,0,lVar2 + lVar1,0,0,
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x60));
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b27e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104e99bb4; end: 104e99c2b; -[SCPostRegAddFriendsDefaultLogger _logSuggestionRenderLatency] */

void FUN_104e99bb4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x00010bfb1dc0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(param_2 + 0x70) != 0)) {
    func_0x00010c26f380(lVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ada40(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e99c2c; end: 104e99ceb; -[SCPostRegAddFriendsDefaultLogger .cxx_destruct] */

void FUN_104e99c2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e99cec; end: 104e99e1b;  */

void FUN_104e99cec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    if ((int)lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010bf3ec40();
      if ((((lVar2 == -0x3f1) || (lVar2 = param_1, func_0x00010bf3ec40(), lVar2 == -0x3ed)) ||
          (lVar2 = param_1, func_0x00010bf3ec40(), lVar2 == -0x3e9)) ||
         (lVar2 = param_1, func_0x00010bf3ec40(), lVar2 == -0x3ec)) {
        _objc_release(lVar1);
      }
      else {
        lVar2 = param_1;
        func_0x00010bf3ec40();
        _objc_release(lVar1);
        if (lVar2 != -0x3fc) goto LAB_104e99d90;
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110db8b98;
      goto LAB_104e99ddc;
    }
    _objc_release(lVar1);
LAB_104e99d90:
    lVar1 = param_1;
    func_0x00010bf3ec40();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (0 < lVar1) {
      func_0x00010bf3ec40();
      func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110db8bb8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e99ddc;
    }
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8b78;
LAB_104e99ddc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104e99e1c; end: 104e99ebb; -[SCPostRegAddFriendsGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_104e99e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4b20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1257e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


