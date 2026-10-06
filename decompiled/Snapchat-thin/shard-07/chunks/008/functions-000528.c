/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059cc58c; end: 1059cc593; -[SCRecipientListsDataCoordinator addDataUpdateListener:] */

void FUN_1059cc58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1059cc594; end: 1059cc59b; -[SCRecipientListsDataCoordinator removeDataUpdateListener:] */

void FUN_1059cc594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1059cc59c; end: 1059cc7a3; -[SCRecipientListsDataCoordinator initWithDocObjectContext:networkService:preferences:] */

undefined1 *
FUN_1059cc59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126eb350;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b4990;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    func_0x00010bfdd1a0(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059cc7a4; end: 1059cc95b; -[SCRecipientListsDataCoordinator listsWithCompletionQueue:completion:] */

void FUN_1059cc7a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1059cc880;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = uVar2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059cc95c; end: 1059cc96f;  */

void FUN_1059cc95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059cc96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1059cc970; end: 1059cca77; -[SCRecipientListsDataCoordinator listWithListId:completionQueue:completion:] */

void FUN_1059cc970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059cca78;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = uVar1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059cca78; end: 1059ccb3f;  */

void FUN_1059cca78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106e795d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059ccb40;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  return;
}



/* Entry: 1059ccb40; end: 1059ccb53;  */

void FUN_1059ccb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059ccb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1059ccb54; end: 1059ccd4b; -[SCRecipientListsDataCoordinator syncFromServerWithCompletionQueue:successBlock:failureBlock:] */

void FUN_1059ccb54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1059ccd4c;
  puStack_90 = &UNK_11084e370;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  ppuVar1 = &puStack_a8;
  uStack_88 = param_4;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126c0b28;
  _objc_alloc_init(PTR_PTR_1126c0b28);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c114a60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ccd4c; end: 1059cce03;  */

void FUN_1059ccd4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beda580();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059cce04; end: 1059ccfb7; -[SCRecipientListsDataCoordinator createLists:completionQueue:successBlock:failureBlock:] */

void FUN_1059cce04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c0b30;
  _objc_alloc(PTR_PTR_1126c0b30);
  func_0x00010c0348c0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c1147c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ccfb8; end: 1059cd00f;  */

void FUN_1059ccfb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee6100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059cd010; end: 1059cd1c3; -[SCRecipientListsDataCoordinator updateLists:completionQueue:successBlock:failureBlock:] */

void FUN_1059cd010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c0b38;
  _objc_alloc(PTR_PTR_1126c0b38);
  func_0x00010c0598c0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c115620(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059cd1c4; end: 1059cd21b;  */

void FUN_1059cd1c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee6100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059cd21c; end: 1059cd3e3; -[SCRecipientListsDataCoordinator deleteListsWithListIds:completionQueue:successBlock:failureBlock:] */

void FUN_1059cd21c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c0b40;
  _objc_alloc(PTR_PTR_1126c0b40);
  func_0x00010c026380();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c1148c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059cd3e4; end: 1059cd41b;  */

void FUN_1059cd3e4(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059cd41c; end: 1059cd51b; -[SCRecipientListsDataCoordinator removeRecipientFromAllListsWithRecipientIdToRemove:] */

void FUN_1059cd41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c09a6c0(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059cd51c; end: 1059cd85f;  */

void FUN_1059cd51c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        puVar12 = *(undefined **)(lVar14 * 8);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar12;
        func_0x00010c09a120();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        if (puVar7 == (undefined *)0x0) {
LAB_1059cd770:
          _objc_release(puVar6);
        }
        else {
          bVar13 = false;
          do {
            puVar11 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar6);
              }
              uVar15 = *(ulong *)((long)puVar11 * 8);
              func_0x00010c122b80();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar15;
              func_0x00010c0720c0();
              _objc_release(uVar15);
              if ((uVar8 & 1) == 0) {
                func_0x00010befa120(puVar5);
              }
              else {
                bVar13 = true;
              }
              puVar11 = puVar11 + 1;
            } while (puVar7 != puVar11);
            puVar7 = puVar6;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined *)0x0);
          _objc_release(puVar6);
          if (bVar13) {
            puVar6 = PTR_PTR_1126c0b48;
            _objc_alloc(PTR_PTR_1126c0b48);
            puVar7 = puVar12;
            func_0x00010c09a080(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar12;
            func_0x00010c0d4f60(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11f520(puVar12);
            func_0x00010bf5ab40(puVar12);
            func_0x00010c026300(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar7);
            func_0x00010befa120(puVar3);
            goto LAB_1059cd770;
          }
        }
        _objc_release(puVar5);
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar4);
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar5 = puVar3;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      lVar4 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar4);
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
      func_0x00010c11de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2874c0(lVar4);
      _objc_release(uVar9);
      _objc_release(lVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1059cd860; end: 1059cd863;  */

void FUN_1059cd860(void)

{
  return;
}



/* Entry: 1059cd864; end: 1059cd867; -[SCRecipientListsDataCoordinator handleDataRequest:] */

void FUN_1059cd864(void)

{
  return;
}



/* Entry: 1059cd868; end: 1059cd9bf; -[SCRecipientListsDataCoordinator _flushAndUpsertClientLocalLists:completionQueue:successBlock:failureBlock:] */

void FUN_1059cd868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bddee60(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059cd9c0; end: 1059cd9f7;  */

void FUN_1059cd9c0(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee6100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059cd9f8; end: 1059cdb4f; -[SCRecipientListsDataCoordinator _upsertClientLocalLists:completionQueue:successBlock:failureBlock:] */

void FUN_1059cd9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059cdb50;
  puStack_60 = &UNK_11085adb8;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_3;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1059cdb60;
  puStack_98 = &UNK_1108cbf30;
  uStack_90 = param_3;
  uStack_88 = param_5;
  uStack_80 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar2,param_2,&puStack_78,uVar3,&puStack_b0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 1059cdb50; end: 1059cdb5f;  */

void FUN_1059cdb50(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 uStack_514;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined **ppuStack_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4e0;
  undefined ***pppuStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long *plStack_498;
  long *plStack_490;
  undefined1 uStack_481;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined2 uStack_468;
  undefined2 uStack_466;
  undefined1 *puStack_448;
  undefined ***pppuStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_311;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong auStack_290 [17];
  undefined **appuStack_208 [9];
  undefined8 auStack_1c0 [3];
  long *plStack_1a8;
  long *plStack_1a0;
  long lStack_188;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = lVar9;
  _objc_retain();
  _objc_retain(lVar9);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar9);
      }
      uVar3 = *(undefined8 *)(lVar14 * 8);
      lVar10 = 0;
      func_0x000106e7abbc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  _objc_release(lVar9);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar9);
  _objc_release(lVar9);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar10);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (lVar2 == 0) {
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_310,lVar2);
  }
  puVar4 = &uStack_311;
  func_0x000106e7a060(puVar4);
  _objc_retain(lVar10);
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_330 = 0;
  lVar5 = lVar10;
  func_0x00010bf529e0(lVar10);
  func_0x0001004c2bb4(&uStack_330,lVar5);
  puStack_2c8 = (undefined8 *)0x0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  _objc_retain(lVar10);
  lVar5 = lVar10;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar9 = *plStack_2c0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_2c0 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        uVar13 = *(ulong *)((long)puStack_2c8 + lVar12 * 8);
        _objc_retain(uVar13);
        auStack_290[0] = uVar13;
        func_0x0001004c2d3c(&uStack_330,auStack_290);
        _objc_release(auStack_290[0]);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar10;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar10);
  _objc_release(lVar10);
  func_0x0001004c2e3c(appuStack_208,0xc,puVar4,&uStack_330);
  puStack_2d0 = (undefined8 *)0x0;
  puStack_2c8 = (undefined8 *)0x0;
  plStack_2c0 = (long *)0x0;
  auStack_290[0] = auStack_290[0] & 0xffffffff00000000;
  puVar6 = &uStack_310;
  pppuVar11 = appuStack_208;
  func_0x0001000e77a0(puVar6,pppuVar11,&puStack_2d0,auStack_290);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2d0 != (undefined8 *)0x0) {
    puStack_2c8 = puStack_2d0;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  appuStack_208[0] = &PTR_FUN_110862700;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2d0 = auStack_1c0;
  func_0x000100105004(&puStack_2d0);
  puStack_2d0 = &uStack_330;
  func_0x000100105004(&puStack_2d0);
  func_0x0001000e76e0(&uStack_2e8);
  _objc_release(uStack_2f8);
  _objc_release(uStack_300);
  _objc_retain(puVar6);
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar7 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar6);
      }
      pppuVar11 = *(undefined ****)((long)puVar15 * 8);
      puVar8 = PTR_PTR_1126d2e90;
      func_0x000106e7ab48();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined *)0x0) {
        func_0x00010c25ed40(lVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar8);
      puVar15 = (undefined8 *)((long)puVar15 + 1);
    } while (puVar7 != puVar15);
    puVar7 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(lVar10);
  lVar5 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(lVar10);
  _objc_release(lVar2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pppuVar11);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (lVar5 == 0) {
    uStack_3e0 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_410,lVar5);
  }
  puVar4 = &uStack_481;
  func_0x000106e7a060();
  uStack_4f0 = 0xf;
  uStack_4e0 = 0x100;
  _objc_retain(pppuVar11);
  ppuStack_4f8 = &PTR_SUB_110862760;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  plStack_498 = (long *)0x0;
  uStack_4a0 = 0;
  plStack_490 = (long *)0x0;
  uStack_466 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_478 = 10;
  uStack_468 = 0x100;
  ppuStack_480 = &PTR_FUN_110862700;
  uStack_430 = 0;
  uStack_438 = 0;
  plStack_420 = (long *)0x0;
  uStack_428 = 0;
  plStack_418 = (long *)0x0;
  puStack_510 = (undefined8 *)0x0;
  puStack_508 = (undefined8 *)0x0;
  uStack_500 = 0;
  uStack_514 = 0;
  puVar7 = &uStack_410;
  pppuStack_4c8 = pppuVar11;
  puStack_448 = puVar4;
  pppuStack_440 = &ppuStack_4f8;
  func_0x0001000e77a0(puVar7,&ppuStack_480,&puStack_510,&uStack_514);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puStack_510 != (undefined8 *)0x0) {
    puStack_508 = puStack_510;
    __ZdlPv();
  }
  plVar1 = plStack_418;
  ppuStack_480 = &PTR_FUN_110862700;
  plStack_418 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_420;
  plStack_420 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_510 = &uStack_438;
  func_0x000100105004(&puStack_510);
  plVar1 = plStack_490;
  ppuStack_4f8 = &PTR_SUB_110862760;
  plStack_490 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_498;
  plStack_498 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_510 = &uStack_4b0;
  func_0x000100105004(&puStack_510);
  _objc_release(pppuStack_4c8);
  func_0x0001000e76e0(&uStack_3e8);
  _objc_release(uStack_3f8);
  _objc_release(uStack_400);
  _objc_release(pppuVar11);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1059cdb60; end: 1059cdc7f;  */

void FUN_1059cdb60(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    puVar2 = param_1;
    if (lVar1 != 0) {
      uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_40 = &PTR____CFConstantStringClassReference_110e14978;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1
                         );
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar2;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar3;
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      _objc_release(puVar3);
      _objc_release();
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    puVar2 = (undefined *)0x0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059cdbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)(puVar2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f8500(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_5);
    return;
  }
  return;
}



/* Entry: 1059cdc80; end: 1059cddd7; -[SCRecipientListsDataCoordinator _deleteClientListsWithIds:completionQueue:successBlock:failureBlock:] */

void FUN_1059cdc80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059cddd8;
  puStack_60 = &UNK_11085adb8;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_3;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1059cdde8;
  puStack_98 = &UNK_1108cbf30;
  uStack_90 = param_3;
  uStack_88 = param_5;
  uStack_80 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar2,param_2,&puStack_78,uVar3,&puStack_b0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 1059cddd8; end: 1059cdde7;  */

void FUN_1059cddd8(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uStack_3f4;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined ***pppuStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined2 uStack_348;
  undefined2 uStack_346;
  undefined1 *puStack_328;
  undefined ***pppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong auStack_170 [17];
  undefined **appuStack_e8 [9];
  undefined8 auStack_a0 [3];
  long *plStack_88;
  long *plStack_80;
  long lStack_68;
  
  lVar7 = *(long *)(param_1 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar7);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (param_2 == 0) {
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1f0,param_2);
  }
  puVar2 = &uStack_1f1;
  func_0x000106e7a060(puVar2);
  _objc_retain(lVar7);
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_210 = 0;
  lVar3 = lVar7;
  func_0x00010bf529e0(lVar7);
  func_0x0001004c2bb4(&uStack_210,lVar3);
  puStack_1a8 = (undefined8 *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        uVar9 = *(ulong *)((long)puStack_1a8 + lVar11 * 8);
        _objc_retain(uVar9);
        auStack_170[0] = uVar9;
        func_0x0001004c2d3c(&uStack_210,auStack_170);
        _objc_release(auStack_170[0]);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar7;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar7);
  _objc_release(lVar7);
  func_0x0001004c2e3c(appuStack_e8,0xc,puVar2,&uStack_210);
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  plStack_1a0 = (long *)0x0;
  auStack_170[0] = auStack_170[0] & 0xffffffff00000000;
  puVar4 = &uStack_1f0;
  pppuVar8 = appuStack_e8;
  func_0x0001000e77a0(puVar4,pppuVar8,&puStack_1b0,auStack_170);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_80;
  appuStack_e8[0] = &PTR_FUN_110862700;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = auStack_a0;
  func_0x000100105004(&puStack_1b0);
  puStack_1b0 = &uStack_210;
  func_0x000100105004(&puStack_1b0);
  func_0x0001000e76e0(&uStack_1c8);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar8 = *(undefined ****)((long)puVar12 * 8);
      puVar6 = PTR_PTR_1126d2e90;
      func_0x000106e7ab48();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar5 != puVar12);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(lVar7);
  lVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(lVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_opt_class(PTR_PTR_1126c0b48);
  if (lVar3 == 0) {
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_2f0,lVar3);
  }
  puVar2 = &uStack_361;
  func_0x000106e7a060();
  uStack_3d0 = 0xf;
  uStack_3c0 = 0x100;
  _objc_retain(pppuVar8);
  ppuStack_3d8 = &PTR_SUB_110862760;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  plStack_378 = (long *)0x0;
  uStack_380 = 0;
  plStack_370 = (long *)0x0;
  uStack_346 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_358 = 10;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_FUN_110862700;
  uStack_310 = 0;
  uStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  puStack_3f0 = (undefined8 *)0x0;
  puStack_3e8 = (undefined8 *)0x0;
  uStack_3e0 = 0;
  uStack_3f4 = 0;
  puVar5 = &uStack_2f0;
  pppuStack_3a8 = pppuVar8;
  puStack_328 = puVar2;
  pppuStack_320 = &ppuStack_3d8;
  func_0x0001000e77a0(puVar5,&ppuStack_360,&puStack_3f0,&uStack_3f4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_3f0 != (undefined8 *)0x0) {
    puStack_3e8 = puStack_3f0;
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_FUN_110862700;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_3f0 = &uStack_318;
  func_0x000100105004(&puStack_3f0);
  plVar1 = plStack_370;
  ppuStack_3d8 = &PTR_SUB_110862760;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_378;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_3f0 = &uStack_390;
  func_0x000100105004(&puStack_3f0);
  _objc_release(pppuStack_3a8);
  func_0x0001000e76e0(&uStack_2c8);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2e0);
  _objc_release(pppuVar8);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059cdde8; end: 1059cdf07;  */

void FUN_1059cdde8(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    puVar2 = param_1;
    if (lVar1 != 0) {
      uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_40 = &PTR____CFConstantStringClassReference_110e14998;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1
                         );
      _objc_retainAutoreleasedReturnValue();
      param_4 = 1;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar3;
      (**(code **)(lVar1 + 0x10))(lVar1,0,puVar3);
      _objc_release(puVar3);
      _objc_release();
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    puVar2 = (undefined *)0x0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059cde40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(puVar2 + 8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8500();
    _objc_release(param_4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1059cdf08; end: 1059cdf7f; -[SCRecipientListsDataCoordinator _cleanAllDataWithCompletionQueue:completionHandler:] */

void FUN_1059cdf08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059cdf80; end: 1059cdf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1059cdf80(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 in_x5;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = param_2;
  func_0x000106e79854();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain();
  puVar10 = auStack_d8;
  uVar6 = 0x10;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_110;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        puVar3 = PTR_PTR_1126d2e90;
        func_0x000106e7ab48(PTR_PTR_1126d2e90,*(undefined8 *)(lStack_118 + (long)puVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(puVar3);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar10 = auStack_d8;
      uVar6 = 0x10;
      puVar2 = puVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar4 = &puStack_180;
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  _objc_retain(in_x5);
  puStack_178 = PTR_PTR_1126f7920;
  puStack_180 = puVar2;
  _objc_msgSendSuper2(&puStack_180,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    puVar1 = (undefined1 *)puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603a0);
    *(undefined1 **)((long)ppuVar4 + (long)_DAT_1127603a0) = puVar1;
    _objc_release(uVar7);
    puVar1 = puVar10;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603a4);
    *(undefined1 **)((long)ppuVar4 + (long)_DAT_1127603a4) = puVar1;
    _objc_release(uVar7);
    *(undefined4 *)((long)ppuVar4 + (long)_DAT_1127603a8) = uVar6;
    *(ulong *)((long)ppuVar4 + (long)_DAT_1127603ac) =
         CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
    uVar7 = in_x5;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603b0);
    *(undefined8 *)((long)ppuVar4 + (long)_DAT_1127603b0) = uVar7;
    _objc_release(uVar8);
  }
  _objc_release(in_x5);
  _objc_release(puVar10);
  _objc_release(puVar5);
  return (undefined1 *)ppuVar4;
}



/* Entry: 1059cdf88; end: 1059ce087; -[SCRecipientListsDataCoordinator cleanAllDataWithCompletionQueue:completionHandler:] */

void FUN_1059cdf88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ce088; end: 1059ce0bb;  */

void FUN_1059ce088(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ce0bc; end: 1059ce127; -[SCRecipientListsDataCoordinator .cxx_destruct] */

void FUN_1059ce0bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1059ce128; end: 1059ce1cb; -[SCRecipientListsDataInitializer initWithRecipientListsDataMutator:userSessionContext:] */

undefined1 *
FUN_1059ce128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb358;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059ce1cc; end: 1059ce20f; -[SCRecipientListsDataInitializer updateUponLoginOrRegistration] */

void FUN_1059ce1cc(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c073c40();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c073d80();
    if (iVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec9b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncListsWithServer_112590078);
  return;
}



/* Entry: 1059ce210; end: 1059ce27b; -[SCRecipientListsDataInitializer _syncListsWithServer] */

void FUN_1059ce210(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265f80(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059ce27c; end: 1059ce283;  */

void FUN_1059ce27c(void)

{
  return;
}



/* Entry: 1059ce284; end: 1059ce2b3; -[SCRecipientListsDataInitializer .cxx_destruct] */

void FUN_1059ce284(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059ce2b4; end: 1059ce7bb;  */

void FUN_1059ce2b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 uVar14;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar15;
  long unaff_x28;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_148;
  long lStack_140;
  long lStack_138;
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
  _objc_retain();
  ppuVar12 = (undefined **)PTR_PTR_1126c0b50;
  _objc_alloc_init();
  lVar13 = param_1;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 != 0) {
    lVar13 = param_1;
    func_0x00010c09a080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar13;
    func_0x000109189420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be000(ppuVar12,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar13);
  }
  lVar13 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(ppuVar12,param_2,lVar13);
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010c11f520(param_1);
  ppuStack_148 = ppuVar12;
  func_0x00010c1e7000(ppuVar12,param_2,lVar13);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar13 = param_1;
  func_0x00010c09a120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  func_0x00010bf529e0();
  func_0x00010bffc4a0(puVar2,param_2,lVar1);
  _objc_release(lVar13);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lStack_140 = param_1;
  func_0x00010c09a120();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = param_1;
  func_0x00010bf52a60();
  if (param_1 != 0) {
    unaff_x28 = *plStack_120;
    ppuVar12 = &PTR_PTR_1126c0000;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(lStack_138);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        unaff_x25 = PTR_PTR_1126c0b58;
        _objc_alloc_init();
        unaff_x26 = unaff_x24;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x26;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e88e0(unaff_x25,param_2,unaff_x27);
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        uVar3 = unaff_x24;
        func_0x00010c27dd80();
        uVar10 = 1;
        if ((int)uVar3 != 0) {
          uVar10 = 2;
        }
        func_0x00010c1e8a40(unaff_x25,param_2,uVar10);
        func_0x00010befa120(puVar2,param_2,unaff_x25);
        _objc_release(unaff_x25);
        lVar13 = lVar13 + 1;
      } while (param_1 != lVar13);
      param_1 = lStack_138;
      func_0x00010bf52a60(lStack_138,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x23 = 0;
    } while (param_1 != 0);
  }
  _objc_release(lStack_138);
  ppuVar7 = ppuStack_148;
  func_0x00010c1be0e0(ppuStack_148,param_2,puVar2);
  _objc_release(puVar2);
  lVar1 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuStack_168 = ppuVar7;
    uStack_158 = 0x1059ce550;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1b0 = unaff_x28;
    uStack_1a8 = unaff_x27;
    uStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    uStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    lStack_180 = lVar13;
    puStack_178 = puVar2;
    ppuStack_170 = ppuVar12;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar13 = lVar1;
    func_0x00010c09a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 != 0) {
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      lVar13 = lVar1;
      func_0x00010c09a140();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar13;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar15 = *plStack_270;
        do {
          lVar11 = 0;
          do {
            if (*plStack_270 != lVar15) {
              _objc_enumerationMutation(lVar13);
            }
            uVar14 = *(undefined8 *)(lStack_278 + lVar11 * 8);
            uVar3 = uVar14;
            func_0x00010c122de0();
            if ((int)uVar3 != 0) {
              uVar3 = uVar14;
              func_0x00010c122de0(uVar14);
              puVar5 = PTR_PTR_1126c0b60;
              _objc_alloc(PTR_PTR_1126c0b60);
              func_0x00010c122b80(uVar14);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar14;
              func_0x000109189508();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c055fc0(puVar5,param_2,(int)uVar3 == 2,uVar6);
              _objc_release(uVar6);
              _objc_release(uVar14);
              func_0x00010befa120(puVar2,param_2,puVar5);
              _objc_release(puVar5);
            }
            lVar11 = lVar11 + 1;
          } while (lVar4 != lVar11);
          lVar4 = lVar13;
          func_0x00010bf52a60(lVar13,param_2,&uStack_280,auStack_240,0x10);
        } while (lVar4 != 0);
      }
      _objc_release(lVar13);
    }
    ppuVar7 = (undefined **)PTR_PTR_1126c0b48;
    _objc_alloc();
    lVar13 = lVar1;
    func_0x00010c09a080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x000109189508();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1;
    func_0x00010c0d4f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c11f520(lVar1);
    lVar8 = lVar1;
    func_0x00010bf5aac0(lVar1);
    func_0x00010c026300((double)lVar8,ppuVar7,param_2,lVar4,lVar15,lVar11,puVar2);
    _objc_release(lVar15);
    _objc_release(lVar4);
    _objc_release(lVar13);
    _objc_release(puVar2);
    _objc_release(lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      ppuVar9 = (undefined **)PTR_PTR_1126ae748;
      func_0x00010bf24820(PTR_PTR_1126ae748);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      ppuVar12 = &PTR____CFConstantStringClassReference_110daafd8;
      func_0x00010c08fa60();
      ppuVar7 = ppuVar9;
      if (ppuVar12 != (undefined **)0x0) {
        func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                            &PTR____CFConstantStringClassReference_110dadcb8);
        func_0x00010bef9140(ppuVar9,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
      }
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1059ce7bc; end: 1059ce85b;  */

void FUN_1059ce7bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  puVar4 = puVar1;
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dadcb8);
    func_0x00010bef9140(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059ce85c; end: 1059ce96b;  */

void FUN_1059ce85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0b68;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_opt_new(puVar1);
    puVar2 = puVar1;
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bfa80a0(param_2);
    _objc_release(param_2);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1059ce96c; end: 1059cf8af;  */

void FUN_1059ce96c(long param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined **unaff_x23;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long lVar15;
  undefined **unaff_x27;
  undefined **ppuVar16;
  long unaff_x28;
  undefined *puStack_910;
  long lStack_908;
  long *plStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long lStack_848;
  long lStack_840;
  undefined **ppuStack_838;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined *puStack_820;
  undefined **ppuStack_818;
  undefined **ppuStack_810;
  undefined **ppuStack_808;
  undefined **ppuStack_800;
  undefined **ppuStack_7f8;
  undefined8 ***pppuStack_7f0;
  undefined8 uStack_7e8;
  undefined **ppuStack_7d8;
  undefined *puStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined *puStack_7b8;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  long *plStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  long lStack_6e0;
  long lStack_6d0;
  undefined **ppuStack_6c8;
  undefined **ppuStack_6c0;
  undefined **ppuStack_6b8;
  undefined *puStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined **ppuStack_688;
  undefined8 ***pppuStack_680;
  undefined8 uStack_678;
  undefined *puStack_670;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *apuStack_628 [16];
  long lStack_5a8;
  long lStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined *puStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined8 ***pppuStack_550;
  undefined8 uStack_548;
  undefined **ppuStack_538;
  undefined *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_440;
  long lStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined *puStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined1 ***pppuStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *apuStack_388 [16];
  long lStack_308;
  long lStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_e8 [16];
  long lStack_68;
  
  ppuVar8 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  ppuVar7 = param_3;
  _objc_retain(param_2);
  _objc_retain(lVar15);
  _objc_retain(lVar5);
  if (param_3 == (undefined **)0x0) {
    ppuVar12 = param_2;
    func_0x00010bf990e0();
    if ((int)ppuVar12 != 0) {
      ppuVar7 = param_2;
      func_0x00010bf990e0();
      pcVar11 = *(code **)(lVar5 + 0x10);
      param_3 = (undefined **)0x0;
      goto LAB_1059ce9fc;
    }
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    ppuVar4 = param_2;
    func_0x00010c09a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x23 = (undefined **)0x0;
    param_3 = ppuVar7;
    if (ppuVar4 != (undefined **)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      puStack_130 = (undefined *)0x0;
      uStack_118 = 0;
      puStack_120 = (undefined8 *)0x0;
      unaff_x23 = param_2;
      func_0x00010c09a520();
      _objc_retainAutoreleasedReturnValue();
      param_4 = apuStack_e8;
      param_5 = (undefined **)0x10;
      ppuVar7 = unaff_x23;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        unaff_x26 = (undefined **)*puStack_120;
        do {
          unaff_x27 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_120 != unaff_x26) {
              _objc_enumerationMutation(unaff_x23);
            }
            unaff_x25 = *(undefined ***)(lStack_128 + (long)unaff_x27 * 8);
            func_0x0001059ce550();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x25 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar12);
            }
            _objc_release(unaff_x25);
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar7 != unaff_x27);
          param_4 = apuStack_e8;
          param_5 = (undefined **)0x10;
          ppuVar7 = unaff_x23;
          ppuVar8 = &puStack_130;
          func_0x00010bf52a60();
          unaff_x24 = (undefined *)0x0;
        } while (ppuVar7 != (undefined **)0x0);
      }
      _objc_release(unaff_x23);
      param_3 = ppuVar8;
    }
    ppuVar7 = ppuVar12;
    (**(code **)(lVar15 + 0x10))(lVar15);
    _objc_release(ppuVar12);
  }
  else {
    pcVar11 = *(code **)(lVar5 + 0x10);
    ppuVar7 = (undefined **)0x0;
LAB_1059ce9fc:
    (*pcVar11)(lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x1059ceb58;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar7;
  ppuVar12 = param_4;
  ppuVar8 = param_5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != (undefined **)0x0) {
    unaff_x23 = (undefined **)PTR_PTR_1126c0b70;
    ppuStack_2a0 = ppuVar7;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    ppuVar7 = param_2;
    func_0x00010c0f77a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar7);
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    ppuVar7 = param_2;
    func_0x00010c0f77a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      unaff_x28 = *plStack_250;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_250 != unaff_x28) {
            _objc_enumerationMutation(ppuVar7);
          }
          unaff_x27 = *(undefined ***)(lStack_258 + (long)ppuVar12 * 8);
          FUN_1059ce2b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x27);
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar8 != ppuVar12);
        ppuVar8 = ppuVar7;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar8 != (undefined **)0x0);
    }
    _objc_release(ppuVar7);
    unaff_x25 = unaff_x23;
    func_0x00010c1be2c0();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    uStack_288 = 0x1059cedd4;
    puStack_280 = &UNK_1108cbff0;
    ppuStack_278 = unaff_x23;
    _objc_retain(param_4);
    ppuStack_270 = param_4;
    _objc_retain(param_5);
    ppuStack_268 = param_5;
    _objc_retain(unaff_x23);
    ppuVar7 = ppuStack_2a0;
    ppuVar8 = &puStack_298;
    param_3 = unaff_x23;
    ppuVar12 = unaff_x25;
    func_0x00010bf56ea0(ppuStack_2a0);
    _objc_release(unaff_x25);
    _objc_release(ppuStack_268);
    _objc_release(ppuStack_270);
    _objc_release(ppuStack_278);
    _objc_release(unaff_x23);
    _objc_release(unaff_x24);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar7);
  ppuVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_3d0;
  uStack_2a8 = 0x1059cedd4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = ppuVar16[5];
  puVar1 = ppuVar16[6];
  ppuVar16 = param_3;
  lStack_300 = unaff_x28;
  ppuStack_2f8 = unaff_x27;
  ppuStack_2f0 = unaff_x26;
  ppuStack_2e8 = unaff_x25;
  puStack_2e0 = unaff_x24;
  ppuStack_2d8 = unaff_x23;
  ppuStack_2d0 = param_5;
  ppuStack_2c8 = param_4;
  ppuStack_2c0 = ppuVar7;
  ppuStack_2b8 = param_2;
  ppuStack_2b0 = &puStack_140;
  _objc_retain(ppuVar4);
  _objc_retain(puVar6);
  _objc_retain(puVar1);
  if (param_3 == (undefined **)0x0) {
    ppuVar7 = ppuVar4;
    func_0x00010bf990e0();
    if ((int)ppuVar7 != 0) {
      ppuVar7 = ppuVar4;
      func_0x00010bf990e0();
      pcVar11 = *(code **)(puVar1 + 0x10);
      ppuVar16 = (undefined **)0x0;
      goto LAB_1059cee64;
    }
    param_3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    ppuVar7 = ppuVar4;
    func_0x00010c09a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x23 = (undefined **)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      lStack_3c8 = 0;
      puStack_3d0 = (undefined *)0x0;
      uStack_3b8 = 0;
      puStack_3c0 = (undefined8 *)0x0;
      unaff_x23 = ppuVar4;
      func_0x00010c09a520();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = apuStack_388;
      ppuVar8 = (undefined **)0x10;
      ppuVar7 = unaff_x23;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        unaff_x26 = (undefined **)*puStack_3c0;
        do {
          unaff_x27 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_3c0 != unaff_x26) {
              _objc_enumerationMutation(unaff_x23);
            }
            unaff_x25 = *(undefined ***)(lStack_3c8 + (long)unaff_x27 * 8);
            func_0x0001059ce550();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x25 != (undefined **)0x0) {
              func_0x00010befa120(param_3);
            }
            _objc_release(unaff_x25);
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar7 != unaff_x27);
          ppuVar12 = apuStack_388;
          ppuVar8 = (undefined **)0x10;
          ppuVar7 = unaff_x23;
          ppuVar2 = &puStack_3d0;
          func_0x00010bf52a60();
          unaff_x24 = (undefined *)0x0;
        } while (ppuVar7 != (undefined **)0x0);
      }
      _objc_release(unaff_x23);
      ppuVar16 = ppuVar2;
    }
    ppuVar7 = param_3;
    (**(code **)(puVar6 + 0x10))(puVar6);
    _objc_release(param_3);
  }
  else {
    pcVar11 = *(code **)(puVar1 + 0x10);
    ppuVar7 = (undefined **)0x0;
    ppuVar16 = param_3;
LAB_1059cee64:
    (*pcVar11)(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
  ppuVar2 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  uStack_3d8 = 0x1059cefc0;
  lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar7;
  ppuVar10 = ppuVar12;
  ppuVar13 = ppuVar8;
  lStack_430 = unaff_x28;
  ppuStack_428 = unaff_x27;
  ppuStack_420 = unaff_x26;
  ppuStack_418 = unaff_x25;
  puStack_410 = unaff_x24;
  ppuStack_408 = unaff_x23;
  ppuStack_400 = param_3;
  puStack_3f8 = puVar1;
  puStack_3f0 = puVar6;
  ppuStack_3e8 = ppuVar4;
  pppuStack_3e0 = &ppuStack_2b0;
  _objc_retain();
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar8);
  ppuVar4 = unaff_x27;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR_PTR_1126c0b78;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_538 = ppuVar4;
    _objc_alloc();
    ppuVar4 = ppuVar2;
    func_0x00010c09a100(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar4);
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    lStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    plStack_4f0 = (long *)0x0;
    unaff_x25 = ppuVar2;
    func_0x00010c09a100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = unaff_x25;
    func_0x00010bf52a60();
    if (ppuVar16 != (undefined **)0x0) {
      unaff_x28 = *plStack_4f0;
      do {
        ppuVar13 = (undefined **)0x0;
        ppuVar4 = unaff_x27;
        do {
          if (*plStack_4f0 != unaff_x28) {
            _objc_enumerationMutation(unaff_x25);
          }
          unaff_x27 = *(undefined ***)(lStack_4f8 + (long)ppuVar13 * 8);
          func_0x000109189420();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x27 == (undefined **)0x0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e149d8;
            ppuVar13 = (undefined **)0x1;
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = (undefined **)0x0;
            ppuVar16 = unaff_x26;
            (*(code *)ppuVar8[2])(ppuVar8);
            _objc_release(unaff_x26);
            unaff_x23 = ppuStack_538;
            goto LAB_1059cf208;
          }
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x27);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          ppuVar4 = unaff_x27;
        } while (ppuVar16 != ppuVar13);
        ppuVar16 = unaff_x25;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar16 != (undefined **)0x0);
    }
    _objc_release(unaff_x25);
    unaff_x23 = ppuStack_538;
    ppuVar4 = ppuStack_538;
    func_0x00010c1be040();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_530 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_528 = 0xc2000000;
    uStack_520 = 0x1059cf27c;
    puStack_518 = &UNK_1108cc020;
    _objc_retain(ppuVar12);
    ppuStack_510 = ppuVar12;
    _objc_retain(ppuVar8);
    ppuVar13 = &puStack_530;
    ppuVar16 = unaff_x23;
    ppuVar10 = ppuVar4;
    ppuStack_508 = ppuVar8;
    func_0x00010bf6c2a0(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_508);
    unaff_x25 = ppuStack_510;
    ppuVar4 = unaff_x27;
LAB_1059cf208:
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar12);
  _objc_release(ppuVar7);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_440) {
    return;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_670;
  uStack_548 = 0x1059cf27c;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = ppuVar3[4];
  puVar1 = ppuVar3[5];
  lStack_5a0 = unaff_x28;
  ppuStack_598 = ppuVar4;
  ppuStack_590 = unaff_x26;
  ppuStack_588 = unaff_x25;
  puStack_580 = unaff_x24;
  ppuStack_578 = unaff_x23;
  ppuStack_570 = ppuVar8;
  ppuStack_568 = ppuVar12;
  ppuStack_560 = ppuVar7;
  ppuStack_558 = ppuVar2;
  pppuStack_550 = &pppuStack_3e0;
  _objc_retain(ppuVar14);
  _objc_retain(puVar6);
  _objc_retain(puVar1);
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar7 = ppuVar14;
    func_0x00010bf990e0();
    if ((int)ppuVar7 != 0) {
      ppuVar7 = ppuVar14;
      func_0x00010bf990e0();
      pcVar11 = *(code **)(puVar1 + 0x10);
      ppuVar9 = (undefined **)0x0;
      goto LAB_1059cf30c;
    }
    ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010c09a0e0(ppuVar14);
    func_0x00010bffc4a0();
    lStack_668 = 0;
    puStack_670 = (undefined *)0x0;
    uStack_658 = 0;
    puStack_660 = (undefined8 *)0x0;
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    unaff_x23 = ppuVar14;
    func_0x00010c09a0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = apuStack_628;
    ppuVar13 = (undefined **)0x10;
    ppuVar7 = unaff_x23;
    func_0x00010bf52a60();
    if (ppuVar7 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*puStack_660;
      do {
        ppuVar4 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_660 != unaff_x26) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x25 = *(undefined ***)(lStack_668 + (long)ppuVar4 * 8);
          func_0x000109189508();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar16);
          _objc_release(unaff_x25);
          ppuVar4 = (undefined **)((long)ppuVar4 + 1);
        } while (ppuVar7 != ppuVar4);
        ppuVar10 = apuStack_628;
        ppuVar13 = (undefined **)0x10;
        ppuVar7 = unaff_x23;
        ppuVar9 = &puStack_670;
        func_0x00010bf52a60();
        unaff_x24 = (undefined *)0x0;
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(unaff_x23);
    ppuVar7 = ppuVar16;
    (**(code **)(puVar6 + 0x10))(puVar6);
    _objc_release(ppuVar16);
  }
  else {
    pcVar11 = *(code **)(puVar1 + 0x10);
    ppuVar7 = (undefined **)0x0;
    ppuVar9 = ppuVar16;
LAB_1059cf30c:
    (*pcVar11)(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
  ppuVar8 = ppuVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_678 = 0x1059cf460;
  lStack_6e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = ppuVar7;
  lStack_6d0 = unaff_x28;
  ppuStack_6c8 = ppuVar4;
  ppuStack_6c0 = unaff_x26;
  ppuStack_6b8 = unaff_x25;
  puStack_6b0 = unaff_x24;
  ppuStack_6a8 = unaff_x23;
  ppuStack_6a0 = ppuVar16;
  puStack_698 = puVar1;
  puStack_690 = puVar6;
  ppuStack_688 = ppuVar14;
  pppuStack_680 = &pppuStack_550;
  _objc_retain();
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar13);
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar16 = (undefined **)PTR_PTR_1126c0b80;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_7d8 = ppuVar16;
    _objc_alloc();
    ppuVar16 = ppuVar8;
    func_0x00010c28d420(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar16);
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    lStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    plStack_790 = (long *)0x0;
    ppuVar16 = ppuVar8;
    func_0x00010c28d420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar16;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x28 = *plStack_790;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if (*plStack_790 != unaff_x28) {
            _objc_enumerationMutation(ppuVar16);
          }
          ppuVar4 = *(undefined ***)(lStack_798 + (long)ppuVar14 * 8);
          FUN_1059ce2b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x24);
          _objc_release(ppuVar4);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar2 != ppuVar14);
        ppuVar2 = ppuVar16;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar16);
    unaff_x23 = ppuStack_7d8;
    unaff_x25 = ppuStack_7d8;
    func_0x00010c1be2c0();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_7d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_7c8 = 0xc2000000;
    uStack_7c0 = 0x1059cf6c4;
    puStack_7b8 = &UNK_1108cc050;
    _objc_retain(ppuVar10);
    ppuStack_7b0 = ppuVar10;
    _objc_retain(ppuVar13);
    ppuVar9 = unaff_x23;
    ppuStack_7a8 = ppuVar13;
    func_0x00010c2874e0(ppuVar7);
    _objc_release(unaff_x25);
    _objc_release(ppuStack_7a8);
    _objc_release(ppuStack_7b0);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(ppuVar13);
  _objc_release(ppuVar10);
  _objc_release(ppuVar7);
  ppuVar16 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e0) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_910;
  uStack_7e8 = 0x1059cf6c4;
  lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = ppuVar16[4];
  puVar1 = ppuVar16[5];
  ppuVar16 = ppuVar9;
  lStack_840 = unaff_x28;
  ppuStack_838 = ppuVar4;
  ppuStack_830 = unaff_x26;
  ppuStack_828 = unaff_x25;
  puStack_820 = unaff_x24;
  ppuStack_818 = unaff_x23;
  ppuStack_810 = ppuVar13;
  ppuStack_808 = ppuVar10;
  ppuStack_800 = ppuVar7;
  ppuStack_7f8 = ppuVar8;
  pppuStack_7f0 = &pppuStack_680;
  _objc_retain(ppuVar12);
  _objc_retain(puVar6);
  _objc_retain(puVar1);
  if (ppuVar9 == (undefined **)0x0) {
    ppuVar7 = ppuVar12;
    func_0x00010bf990e0();
    if ((int)ppuVar7 == 0) {
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      ppuVar8 = ppuVar12;
      func_0x00010c09a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar9 = ppuVar16;
      if (ppuVar8 != (undefined **)0x0) {
        uStack_8e8 = 0;
        uStack_8f0 = 0;
        uStack_8d8 = 0;
        uStack_8e0 = 0;
        lStack_908 = 0;
        puStack_910 = (undefined *)0x0;
        uStack_8f8 = 0;
        plStack_900 = (long *)0x0;
        ppuVar8 = ppuVar12;
        func_0x00010c09a520();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar8;
        func_0x00010bf52a60();
        if (ppuVar4 != (undefined **)0x0) {
          lVar15 = *plStack_900;
          do {
            ppuVar16 = (undefined **)0x0;
            do {
              if (*plStack_900 != lVar15) {
                _objc_enumerationMutation(ppuVar8);
              }
              lVar5 = *(long *)(lStack_908 + (long)ppuVar16 * 8);
              func_0x0001059ce550();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 != 0) {
                func_0x00010befa120(ppuVar7);
              }
              _objc_release(lVar5);
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
            } while (ppuVar4 != ppuVar16);
            ppuVar4 = ppuVar8;
            ppuVar2 = &puStack_910;
            func_0x00010bf52a60();
          } while (ppuVar4 != (undefined **)0x0);
        }
        _objc_release(ppuVar8);
        ppuVar9 = ppuVar2;
      }
      ppuVar8 = ppuVar7;
      (**(code **)(puVar6 + 0x10))(puVar6,ppuVar7);
      _objc_release(ppuVar7);
      goto LAB_1059cf758;
    }
    ppuVar8 = ppuVar12;
    func_0x00010bf990e0(ppuVar12);
    pcVar11 = *(code **)(puVar1 + 0x10);
    ppuVar9 = (undefined **)0x0;
  }
  else {
    pcVar11 = *(code **)(puVar1 + 0x10);
    ppuVar8 = (undefined **)0x0;
  }
  (*pcVar11)(puVar1,ppuVar8);
LAB_1059cf758:
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  puVar6 = PTR_PTR_1126c0b88;
  if (ppuVar12 != (undefined **)0x0) {
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar12);
    _objc_opt_new(puVar6);
    ppuVar7 = ppuVar12;
    func_0x000109189420(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
    func_0x00010c1be000(puVar6);
    _objc_release(ppuVar7);
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar9);
    func_0x00010bf56e40(ppuVar8);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar9);
    _objc_release(puVar6);
  }
  _objc_release(ppuVar9);
  return;
}



/* Entry: 1059cf8b0; end: 1059cf9cf;  */

void FUN_1059cf8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0b88;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_opt_new(puVar1);
    lVar2 = param_1;
    func_0x000109189420(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1be000(puVar1);
    _objc_release(lVar2);
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf56e40(param_2);
    _objc_release(param_2);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059cf9d0; end: 1059cfa6b;  */

void FUN_1059cf9d0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bfd78e0();
  if ((uVar1 & 1) == 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
  else {
    uVar1 = param_2;
    func_0x00010bfcf3a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000109189508();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059cfa6c; end: 1059cfc17; -[SCRecipientListsNetworkService initWithGRPCClientFactory:performerProvider:] */

undefined1 *
FUN_1059cfa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126eb360;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126c0b90;
    _objc_alloc();
    func_0x00010c058f80();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059cfc18; end: 1059cfc2f; -[SCRecipientListsNetworkService processFetchAllListsDataRequest:callbackQueue:successBlock:failureBlock:] */

void FUN_1059cfc18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5,uVar3,param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c0b68;
  if (param_3 != 0) {
    _objc_retain(uVar3);
    _objc_opt_new(puVar1);
    puVar2 = puVar1;
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bfa80a0(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1059cfc30; end: 1059cfc47; -[SCRecipientListsNetworkService processCreateListsDataRequest:callbackQueue:successBlock:failureBlock:] */

void FUN_1059cfc30(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  code *pcVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined **unaff_x25;
  long lVar16;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  long unaff_x28;
  undefined *puStack_7e0;
  long lStack_7d8;
  long *plStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_718;
  long lStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined *puStack_6f0;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined **ppuStack_6d0;
  undefined **ppuStack_6c8;
  undefined8 ***pppuStack_6c0;
  undefined8 uStack_6b8;
  undefined **ppuStack_6a8;
  undefined *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined *puStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5b0;
  long lStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined *puStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined **ppuStack_558;
  undefined8 ***pppuStack_550;
  undefined8 uStack_548;
  undefined *puStack_540;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined *apuStack_4f8 [16];
  long lStack_478;
  long lStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined *puStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined1 ***pppuStack_420;
  undefined8 uStack_418;
  undefined **ppuStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_310;
  long lStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *apuStack_258 [16];
  long lStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppuVar9 = *(undefined ***)(param_1 + 8);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar9;
  ppuVar8 = param_5;
  ppuVar7 = param_6;
  _objc_retain();
  _objc_retain(ppuVar9);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    unaff_x23 = (undefined **)PTR_PTR_1126c0b70;
    ppuStack_170 = ppuVar9;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    lVar16 = param_3;
    func_0x00010c0f77a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(lVar16);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar16 = param_3;
    func_0x00010c0f77a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar16;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      unaff_x28 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(lVar16);
          }
          unaff_x27 = *(undefined ***)(lStack_128 + lVar13 * 8);
          FUN_1059ce2b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x27);
          lVar13 = lVar13 + 1;
        } while (lVar5 != lVar13);
        lVar5 = lVar16;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (lVar5 != 0);
    }
    _objc_release(lVar16);
    unaff_x25 = unaff_x23;
    func_0x00010c1be2c0();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x1059cedd4;
    puStack_150 = &UNK_1108cbff0;
    ppuStack_148 = unaff_x23;
    _objc_retain(param_5);
    ppuStack_140 = param_5;
    _objc_retain(param_6);
    ppuStack_138 = param_6;
    _objc_retain(unaff_x23);
    ppuVar9 = ppuStack_170;
    ppuVar7 = &puStack_168;
    param_4 = unaff_x23;
    ppuVar8 = unaff_x25;
    func_0x00010bf56ea0(ppuStack_170);
    _objc_release(unaff_x25);
    _objc_release(ppuStack_138);
    _objc_release(ppuStack_140);
    _objc_release(ppuStack_148);
    _objc_release(unaff_x23);
    _objc_release(unaff_x24);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar9);
  lVar16 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_2a0;
  uStack_178 = 0x1059cedd4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(lVar16 + 0x28);
  lVar16 = *(long *)(lVar16 + 0x30);
  ppuVar17 = param_4;
  lStack_1d0 = unaff_x28;
  ppuStack_1c8 = unaff_x27;
  ppuStack_1c0 = unaff_x26;
  ppuStack_1b8 = unaff_x25;
  puStack_1b0 = unaff_x24;
  ppuStack_1a8 = unaff_x23;
  ppuStack_1a0 = param_6;
  ppuStack_198 = param_5;
  ppuStack_190 = ppuVar9;
  lStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(lVar5);
  _objc_retain(lVar16);
  if (param_4 == (undefined **)0x0) {
    ppuVar9 = ppuVar4;
    func_0x00010bf990e0();
    if ((int)ppuVar9 != 0) {
      ppuVar9 = ppuVar4;
      func_0x00010bf990e0();
      pcVar12 = *(code **)(lVar16 + 0x10);
      ppuVar17 = (undefined **)0x0;
      goto LAB_1059cee64;
    }
    param_4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    ppuVar9 = ppuVar4;
    func_0x00010c09a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x23 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      lStack_298 = 0;
      puStack_2a0 = (undefined *)0x0;
      uStack_288 = 0;
      puStack_290 = (undefined8 *)0x0;
      unaff_x23 = ppuVar4;
      func_0x00010c09a520();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = apuStack_258;
      ppuVar7 = (undefined **)0x10;
      ppuVar9 = unaff_x23;
      func_0x00010bf52a60();
      if (ppuVar9 != (undefined **)0x0) {
        unaff_x26 = (undefined **)*puStack_290;
        do {
          unaff_x27 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_290 != unaff_x26) {
              _objc_enumerationMutation(unaff_x23);
            }
            unaff_x25 = *(undefined ***)(lStack_298 + (long)unaff_x27 * 8);
            func_0x0001059ce550();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x25 != (undefined **)0x0) {
              func_0x00010befa120(param_4);
            }
            _objc_release(unaff_x25);
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar9 != unaff_x27);
          ppuVar8 = apuStack_258;
          ppuVar7 = (undefined **)0x10;
          ppuVar9 = unaff_x23;
          ppuVar2 = &puStack_2a0;
          func_0x00010bf52a60();
          unaff_x24 = (undefined *)0x0;
        } while (ppuVar9 != (undefined **)0x0);
      }
      _objc_release(unaff_x23);
      ppuVar17 = ppuVar2;
    }
    ppuVar9 = param_4;
    (**(code **)(lVar5 + 0x10))(lVar5);
    _objc_release(param_4);
  }
  else {
    pcVar12 = *(code **)(lVar16 + 0x10);
    ppuVar9 = (undefined **)0x0;
    ppuVar17 = param_4;
LAB_1059cee64:
    (*pcVar12)(lVar16);
  }
  _objc_release(lVar16);
  _objc_release(lVar5);
  ppuVar2 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_2a8 = 0x1059cefc0;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = ppuVar9;
  ppuVar11 = ppuVar8;
  ppuVar14 = ppuVar7;
  lStack_300 = unaff_x28;
  ppuStack_2f8 = unaff_x27;
  ppuStack_2f0 = unaff_x26;
  ppuStack_2e8 = unaff_x25;
  puStack_2e0 = unaff_x24;
  ppuStack_2d8 = unaff_x23;
  ppuStack_2d0 = param_4;
  lStack_2c8 = lVar16;
  lStack_2c0 = lVar5;
  ppuStack_2b8 = ppuVar4;
  ppuStack_2b0 = &puStack_180;
  _objc_retain();
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar7);
  ppuVar4 = unaff_x27;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR_PTR_1126c0b78;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_408 = ppuVar4;
    _objc_alloc();
    ppuVar4 = ppuVar2;
    func_0x00010c09a100(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar4);
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    lStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    plStack_3c0 = (long *)0x0;
    unaff_x25 = ppuVar2;
    func_0x00010c09a100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = unaff_x25;
    func_0x00010bf52a60();
    if (ppuVar17 != (undefined **)0x0) {
      unaff_x28 = *plStack_3c0;
      do {
        ppuVar14 = (undefined **)0x0;
        ppuVar4 = unaff_x27;
        do {
          if (*plStack_3c0 != unaff_x28) {
            _objc_enumerationMutation(unaff_x25);
          }
          unaff_x27 = *(undefined ***)(lStack_3c8 + (long)ppuVar14 * 8);
          func_0x000109189420();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x27 == (undefined **)0x0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e149d8;
            ppuVar14 = (undefined **)0x1;
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = (undefined **)0x0;
            ppuVar17 = unaff_x26;
            (*(code *)ppuVar7[2])(ppuVar7);
            _objc_release(unaff_x26);
            unaff_x23 = ppuStack_408;
            goto LAB_1059cf208;
          }
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x27);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          ppuVar4 = unaff_x27;
        } while (ppuVar17 != ppuVar14);
        ppuVar17 = unaff_x25;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar17 != (undefined **)0x0);
    }
    _objc_release(unaff_x25);
    unaff_x23 = ppuStack_408;
    ppuVar4 = ppuStack_408;
    func_0x00010c1be040();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3f8 = 0xc2000000;
    uStack_3f0 = 0x1059cf27c;
    puStack_3e8 = &UNK_1108cc020;
    _objc_retain(ppuVar8);
    ppuStack_3e0 = ppuVar8;
    _objc_retain(ppuVar7);
    ppuVar14 = &puStack_400;
    ppuVar17 = unaff_x23;
    ppuVar11 = ppuVar4;
    ppuStack_3d8 = ppuVar7;
    func_0x00010bf6c2a0(ppuVar9);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_3d8);
    unaff_x25 = ppuStack_3e0;
    ppuVar4 = unaff_x27;
LAB_1059cf208:
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar8);
  _objc_release(ppuVar9);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_540;
  uStack_418 = 0x1059cf27c;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = ppuVar3[4];
  puVar1 = ppuVar3[5];
  lStack_470 = unaff_x28;
  ppuStack_468 = ppuVar4;
  ppuStack_460 = unaff_x26;
  ppuStack_458 = unaff_x25;
  puStack_450 = unaff_x24;
  ppuStack_448 = unaff_x23;
  ppuStack_440 = ppuVar7;
  ppuStack_438 = ppuVar8;
  ppuStack_430 = ppuVar9;
  ppuStack_428 = ppuVar2;
  pppuStack_420 = &ppuStack_2b0;
  _objc_retain(ppuVar15);
  _objc_retain(puVar6);
  _objc_retain(puVar1);
  if (ppuVar17 == (undefined **)0x0) {
    ppuVar7 = ppuVar15;
    func_0x00010bf990e0();
    if ((int)ppuVar7 != 0) {
      ppuVar7 = ppuVar15;
      func_0x00010bf990e0();
      pcVar12 = *(code **)(puVar1 + 0x10);
      ppuVar10 = (undefined **)0x0;
      goto LAB_1059cf30c;
    }
    ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010c09a0e0(ppuVar15);
    func_0x00010bffc4a0();
    lStack_538 = 0;
    puStack_540 = (undefined *)0x0;
    uStack_528 = 0;
    puStack_530 = (undefined8 *)0x0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    unaff_x23 = ppuVar15;
    func_0x00010c09a0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = apuStack_4f8;
    ppuVar14 = (undefined **)0x10;
    ppuVar7 = unaff_x23;
    func_0x00010bf52a60();
    if (ppuVar7 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*puStack_530;
      do {
        ppuVar4 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_530 != unaff_x26) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x25 = *(undefined ***)(lStack_538 + (long)ppuVar4 * 8);
          func_0x000109189508();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar17);
          _objc_release(unaff_x25);
          ppuVar4 = (undefined **)((long)ppuVar4 + 1);
        } while (ppuVar7 != ppuVar4);
        ppuVar11 = apuStack_4f8;
        ppuVar14 = (undefined **)0x10;
        ppuVar7 = unaff_x23;
        ppuVar10 = &puStack_540;
        func_0x00010bf52a60();
        unaff_x24 = (undefined *)0x0;
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(unaff_x23);
    ppuVar7 = ppuVar17;
    (**(code **)(puVar6 + 0x10))(puVar6);
    _objc_release(ppuVar17);
  }
  else {
    pcVar12 = *(code **)(puVar1 + 0x10);
    ppuVar7 = (undefined **)0x0;
    ppuVar10 = ppuVar17;
LAB_1059cf30c:
    (*pcVar12)(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
  ppuVar8 = ppuVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
    return;
  }
  ___stack_chk_fail();
  uStack_548 = 0x1059cf460;
  lStack_5b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar7;
  lStack_5a0 = unaff_x28;
  ppuStack_598 = ppuVar4;
  ppuStack_590 = unaff_x26;
  ppuStack_588 = unaff_x25;
  puStack_580 = unaff_x24;
  ppuStack_578 = unaff_x23;
  ppuStack_570 = ppuVar17;
  puStack_568 = puVar1;
  puStack_560 = puVar6;
  ppuStack_558 = ppuVar15;
  pppuStack_550 = &pppuStack_420;
  _objc_retain();
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar14);
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar17 = (undefined **)PTR_PTR_1126c0b80;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_6a8 = ppuVar17;
    _objc_alloc();
    ppuVar17 = ppuVar8;
    func_0x00010c28d420(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar17);
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    lStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    plStack_660 = (long *)0x0;
    ppuVar17 = ppuVar8;
    func_0x00010c28d420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar17;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x28 = *plStack_660;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if (*plStack_660 != unaff_x28) {
            _objc_enumerationMutation(ppuVar17);
          }
          ppuVar4 = *(undefined ***)(lStack_668 + (long)ppuVar15 * 8);
          FUN_1059ce2b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x24);
          _objc_release(ppuVar4);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuVar2 != ppuVar15);
        ppuVar2 = ppuVar17;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar17);
    unaff_x23 = ppuStack_6a8;
    unaff_x25 = ppuStack_6a8;
    func_0x00010c1be2c0();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_6a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_698 = 0xc2000000;
    uStack_690 = 0x1059cf6c4;
    puStack_688 = &UNK_1108cc050;
    _objc_retain(ppuVar11);
    ppuStack_680 = ppuVar11;
    _objc_retain(ppuVar14);
    ppuVar10 = unaff_x23;
    ppuStack_678 = ppuVar14;
    func_0x00010c2874e0(ppuVar7);
    _objc_release(unaff_x25);
    _objc_release(ppuStack_678);
    _objc_release(ppuStack_680);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar11);
  _objc_release(ppuVar7);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b0) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_7e0;
  uStack_6b8 = 0x1059cf6c4;
  lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = ppuVar17[4];
  puVar1 = ppuVar17[5];
  ppuVar17 = ppuVar10;
  lStack_710 = unaff_x28;
  ppuStack_708 = ppuVar4;
  ppuStack_700 = unaff_x26;
  ppuStack_6f8 = unaff_x25;
  puStack_6f0 = unaff_x24;
  ppuStack_6e8 = unaff_x23;
  ppuStack_6e0 = ppuVar14;
  ppuStack_6d8 = ppuVar11;
  ppuStack_6d0 = ppuVar7;
  ppuStack_6c8 = ppuVar8;
  pppuStack_6c0 = &pppuStack_550;
  _objc_retain(ppuVar9);
  _objc_retain(puVar6);
  _objc_retain(puVar1);
  if (ppuVar10 == (undefined **)0x0) {
    ppuVar7 = ppuVar9;
    func_0x00010bf990e0();
    if ((int)ppuVar7 == 0) {
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      ppuVar8 = ppuVar9;
      func_0x00010c09a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar10 = ppuVar17;
      if (ppuVar8 != (undefined **)0x0) {
        uStack_7b8 = 0;
        uStack_7c0 = 0;
        uStack_7a8 = 0;
        uStack_7b0 = 0;
        lStack_7d8 = 0;
        puStack_7e0 = (undefined *)0x0;
        uStack_7c8 = 0;
        plStack_7d0 = (long *)0x0;
        ppuVar8 = ppuVar9;
        func_0x00010c09a520();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar8;
        func_0x00010bf52a60();
        if (ppuVar4 != (undefined **)0x0) {
          lVar16 = *plStack_7d0;
          do {
            ppuVar17 = (undefined **)0x0;
            do {
              if (*plStack_7d0 != lVar16) {
                _objc_enumerationMutation(ppuVar8);
              }
              lVar5 = *(long *)(lStack_7d8 + (long)ppuVar17 * 8);
              func_0x0001059ce550();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 != 0) {
                func_0x00010befa120(ppuVar7);
              }
              _objc_release(lVar5);
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (ppuVar4 != ppuVar17);
            ppuVar4 = ppuVar8;
            ppuVar2 = &puStack_7e0;
            func_0x00010bf52a60();
          } while (ppuVar4 != (undefined **)0x0);
        }
        _objc_release(ppuVar8);
        ppuVar10 = ppuVar2;
      }
      ppuVar8 = ppuVar7;
      (**(code **)(puVar6 + 0x10))(puVar6,ppuVar7);
      _objc_release(ppuVar7);
      goto LAB_1059cf758;
    }
    ppuVar8 = ppuVar9;
    func_0x00010bf990e0(ppuVar9);
    pcVar12 = *(code **)(puVar1 + 0x10);
    ppuVar10 = (undefined **)0x0;
  }
  else {
    pcVar12 = *(code **)(puVar1 + 0x10);
    ppuVar8 = (undefined **)0x0;
  }
  (*pcVar12)(puVar1,ppuVar8);
LAB_1059cf758:
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  puVar6 = PTR_PTR_1126c0b88;
  if (ppuVar9 != (undefined **)0x0) {
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar9);
    _objc_opt_new(puVar6);
    ppuVar7 = ppuVar9;
    func_0x000109189420(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    func_0x00010c1be000(puVar6);
    _objc_release(ppuVar7);
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar10);
    func_0x00010bf56e40(ppuVar8);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar10);
    _objc_release(puVar6);
  }
  _objc_release(ppuVar10);
  return;
}



/* Entry: 1059cfc48; end: 1059cfc5f; -[SCRecipientListsNetworkService processUpdateListsDataRequest:callbackQueue:successBlock:failureBlock:] */

void FUN_1059cfc48(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar11;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = *(undefined **)(param_1 + 8);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  _objc_retain();
  _objc_retain(puVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    puVar6 = PTR_PTR_1126c0b80;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_168 = puVar6;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c28d420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_3;
    func_0x00010c28d420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      unaff_x28 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(lVar1);
          }
          unaff_x27 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          FUN_1059ce2b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x27);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar1;
        func_0x00010bf52a60();
        unaff_x26 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    unaff_x23 = puStack_168;
    unaff_x25 = puStack_168;
    func_0x00010c1be2c0();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x1059cf6c4;
    puStack_148 = &UNK_1108cc050;
    _objc_retain(param_5);
    uStack_140 = param_5;
    _objc_retain(param_6);
    param_4 = unaff_x23;
    uStack_138 = param_6;
    func_0x00010c2874e0(puVar7);
    _objc_release(unaff_x25);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar7);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_2a0;
  uStack_178 = 0x1059cf6c4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(lVar1 + 0x20);
  lVar1 = *(long *)(lVar1 + 0x28);
  puVar6 = param_4;
  lStack_1d0 = unaff_x28;
  uStack_1c8 = unaff_x27;
  uStack_1c0 = unaff_x26;
  puStack_1b8 = unaff_x25;
  puStack_1b0 = unaff_x24;
  puStack_1a8 = unaff_x23;
  uStack_1a0 = param_6;
  uStack_198 = param_5;
  puStack_190 = puVar7;
  lStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(lVar2);
  _objc_retain(lVar1);
  if (param_4 == (undefined *)0x0) {
    puVar7 = puVar3;
    func_0x00010bf990e0();
    if ((int)puVar7 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar4 = puVar3;
      func_0x00010c09a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      param_4 = puVar6;
      if (puVar4 != (undefined *)0x0) {
        uStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        lStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        plStack_290 = (long *)0x0;
        puVar6 = puVar3;
        func_0x00010c09a520();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bf52a60();
        if (puVar4 != (undefined *)0x0) {
          lVar10 = *plStack_290;
          do {
            puVar11 = (undefined *)0x0;
            do {
              if (*plStack_290 != lVar10) {
                _objc_enumerationMutation(puVar6);
              }
              lVar5 = *(long *)(lStack_298 + (long)puVar11 * 8);
              func_0x0001059ce550();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 != 0) {
                func_0x00010befa120(puVar7);
              }
              _objc_release(lVar5);
              puVar11 = puVar11 + 1;
            } while (puVar4 != puVar11);
            puVar4 = puVar6;
            puVar8 = &uStack_2a0;
            func_0x00010bf52a60();
          } while (puVar4 != (undefined *)0x0);
        }
        _objc_release(puVar6);
        param_4 = (undefined *)puVar8;
      }
      puVar6 = puVar7;
      (**(code **)(lVar2 + 0x10))(lVar2,puVar7);
      _objc_release(puVar7);
      goto LAB_1059cf758;
    }
    puVar6 = puVar3;
    func_0x00010bf990e0(puVar3);
    pcVar9 = *(code **)(lVar1 + 0x10);
    param_4 = (undefined *)0x0;
  }
  else {
    pcVar9 = *(code **)(lVar1 + 0x10);
    puVar6 = (undefined *)0x0;
  }
  (*pcVar9)(lVar1,puVar6);
LAB_1059cf758:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  puVar7 = PTR_PTR_1126c0b88;
  if (puVar3 != (undefined *)0x0) {
    _objc_retain(puVar6);
    _objc_retain(puVar3);
    _objc_opt_new(puVar7);
    puVar4 = puVar3;
    func_0x000109189420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1be000(puVar7);
    _objc_release(puVar4);
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010bf56e40(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(param_4);
    _objc_release(puVar7);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1059cfc60; end: 1059cfc77; -[SCRecipientListsNetworkService processDeleteListsDataRequest:callbackQueue:successBlock:failureBlock:] */

void FUN_1059cfc60(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined **unaff_x25;
  long lVar13;
  undefined **unaff_x26;
  undefined **ppuVar14;
  undefined **unaff_x27;
  long unaff_x28;
  undefined *puStack_540;
  long lStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_478;
  long lStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined *puStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined1 ***pppuStack_420;
  undefined8 uStack_418;
  undefined **ppuStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_310;
  long lStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *apuStack_258 [16];
  long lStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppuVar7 = *(undefined ***)(param_1 + 8);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar7;
  ppuVar11 = param_5;
  ppuVar9 = param_6;
  _objc_retain();
  _objc_retain(ppuVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar3 = unaff_x27;
  if (param_3 != (undefined **)0x0) {
    ppuVar9 = (undefined **)PTR_PTR_1126c0b78;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_168 = ppuVar9;
    _objc_alloc();
    ppuVar9 = param_3;
    func_0x00010c09a100(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar9);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x25 = param_3;
    func_0x00010c09a100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = unaff_x25;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      unaff_x28 = *plStack_120;
      do {
        ppuVar11 = (undefined **)0x0;
        ppuVar3 = unaff_x27;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(unaff_x25);
          }
          unaff_x27 = *(undefined ***)(lStack_128 + (long)ppuVar11 * 8);
          func_0x000109189420();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x27 == (undefined **)0x0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110e149d8;
            ppuVar9 = (undefined **)0x1;
            unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = (undefined **)0x0;
            param_4 = unaff_x26;
            (*(code *)param_6[2])(param_6);
            _objc_release(unaff_x26);
            unaff_x23 = ppuStack_168;
            goto LAB_1059cf208;
          }
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x27);
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          ppuVar3 = unaff_x27;
        } while (ppuVar9 != ppuVar11);
        ppuVar9 = unaff_x25;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(unaff_x25);
    unaff_x23 = ppuStack_168;
    ppuVar3 = ppuStack_168;
    func_0x00010c1be040();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x1059cf27c;
    puStack_148 = &UNK_1108cc020;
    _objc_retain(param_5);
    ppuStack_140 = param_5;
    _objc_retain(param_6);
    ppuVar9 = &puStack_160;
    param_4 = unaff_x23;
    ppuVar11 = ppuVar3;
    ppuStack_138 = param_6;
    func_0x00010bf6c2a0(ppuVar7);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_138);
    unaff_x25 = ppuStack_140;
    ppuVar3 = unaff_x27;
LAB_1059cf208:
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar7);
  ppuVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_2a0;
  uStack_178 = 0x1059cf27c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = ppuVar2[4];
  puVar1 = ppuVar2[5];
  lStack_1d0 = unaff_x28;
  ppuStack_1c8 = ppuVar3;
  ppuStack_1c0 = unaff_x26;
  ppuStack_1b8 = unaff_x25;
  puStack_1b0 = unaff_x24;
  ppuStack_1a8 = unaff_x23;
  ppuStack_1a0 = param_6;
  ppuStack_198 = param_5;
  ppuStack_190 = ppuVar7;
  ppuStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  _objc_retain(puVar6);
  _objc_retain(puVar1);
  if (param_4 == (undefined **)0x0) {
    ppuVar7 = ppuVar14;
    func_0x00010bf990e0();
    if ((int)ppuVar7 != 0) {
      ppuVar7 = ppuVar14;
      func_0x00010bf990e0();
      pcVar10 = *(code **)(puVar1 + 0x10);
      ppuVar8 = (undefined **)0x0;
      goto LAB_1059cf30c;
    }
    param_4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010c09a0e0(ppuVar14);
    func_0x00010bffc4a0();
    lStack_298 = 0;
    puStack_2a0 = (undefined *)0x0;
    uStack_288 = 0;
    puStack_290 = (undefined8 *)0x0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    unaff_x23 = ppuVar14;
    func_0x00010c09a0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = apuStack_258;
    ppuVar9 = (undefined **)0x10;
    ppuVar7 = unaff_x23;
    func_0x00010bf52a60();
    if (ppuVar7 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*puStack_290;
      do {
        ppuVar3 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_290 != unaff_x26) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x25 = *(undefined ***)(lStack_298 + (long)ppuVar3 * 8);
          func_0x000109189508();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(param_4);
          _objc_release(unaff_x25);
          ppuVar3 = (undefined **)((long)ppuVar3 + 1);
        } while (ppuVar7 != ppuVar3);
        ppuVar11 = apuStack_258;
        ppuVar9 = (undefined **)0x10;
        ppuVar7 = unaff_x23;
        ppuVar8 = &puStack_2a0;
        func_0x00010bf52a60();
        unaff_x24 = (undefined *)0x0;
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(unaff_x23);
    ppuVar7 = param_4;
    (**(code **)(puVar6 + 0x10))(puVar6);
    _objc_release(param_4);
  }
  else {
    pcVar10 = *(code **)(puVar1 + 0x10);
    ppuVar7 = (undefined **)0x0;
    ppuVar8 = param_4;
LAB_1059cf30c:
    (*pcVar10)(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
  ppuVar2 = ppuVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_2a8 = 0x1059cf460;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar7;
  lStack_300 = unaff_x28;
  ppuStack_2f8 = ppuVar3;
  ppuStack_2f0 = unaff_x26;
  ppuStack_2e8 = unaff_x25;
  puStack_2e0 = unaff_x24;
  ppuStack_2d8 = unaff_x23;
  ppuStack_2d0 = param_4;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar6;
  ppuStack_2b8 = ppuVar14;
  ppuStack_2b0 = &puStack_180;
  _objc_retain();
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar9);
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar14 = (undefined **)PTR_PTR_1126c0b80;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_408 = ppuVar14;
    _objc_alloc();
    ppuVar14 = ppuVar2;
    func_0x00010c28d420(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar14);
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    lStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    plStack_3c0 = (long *)0x0;
    ppuVar14 = ppuVar2;
    func_0x00010c28d420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar14;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      unaff_x28 = *plStack_3c0;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_3c0 != unaff_x28) {
            _objc_enumerationMutation(ppuVar14);
          }
          ppuVar3 = *(undefined ***)(lStack_3c8 + (long)ppuVar12 * 8);
          FUN_1059ce2b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x24);
          _objc_release(ppuVar3);
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar8 != ppuVar12);
        ppuVar8 = ppuVar14;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar8 != (undefined **)0x0);
    }
    _objc_release(ppuVar14);
    unaff_x23 = ppuStack_408;
    unaff_x25 = ppuStack_408;
    func_0x00010c1be2c0();
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3f8 = 0xc2000000;
    uStack_3f0 = 0x1059cf6c4;
    puStack_3e8 = &UNK_1108cc050;
    _objc_retain(ppuVar11);
    ppuStack_3e0 = ppuVar11;
    _objc_retain(ppuVar9);
    ppuVar8 = unaff_x23;
    ppuStack_3d8 = ppuVar9;
    func_0x00010c2874e0(ppuVar7);
    _objc_release(unaff_x25);
    _objc_release(ppuStack_3d8);
    _objc_release(ppuStack_3e0);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  _objc_release(ppuVar7);
  ppuVar14 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  ppuVar12 = &puStack_540;
  uStack_418 = 0x1059cf6c4;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = ppuVar14[4];
  puVar1 = ppuVar14[5];
  ppuVar14 = ppuVar8;
  lStack_470 = unaff_x28;
  ppuStack_468 = ppuVar3;
  ppuStack_460 = unaff_x26;
  ppuStack_458 = unaff_x25;
  puStack_450 = unaff_x24;
  ppuStack_448 = unaff_x23;
  ppuStack_440 = ppuVar9;
  ppuStack_438 = ppuVar11;
  ppuStack_430 = ppuVar7;
  ppuStack_428 = ppuVar2;
  pppuStack_420 = &ppuStack_2b0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar6);
  _objc_retain(puVar1);
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar9 = ppuVar4;
    func_0x00010bf990e0();
    if ((int)ppuVar9 == 0) {
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      ppuVar11 = ppuVar4;
      func_0x00010c09a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar8 = ppuVar14;
      if (ppuVar11 != (undefined **)0x0) {
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        lStack_538 = 0;
        puStack_540 = (undefined *)0x0;
        uStack_528 = 0;
        plStack_530 = (long *)0x0;
        ppuVar11 = ppuVar4;
        func_0x00010c09a520();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar11;
        func_0x00010bf52a60();
        if (ppuVar3 != (undefined **)0x0) {
          lVar13 = *plStack_530;
          do {
            ppuVar14 = (undefined **)0x0;
            do {
              if (*plStack_530 != lVar13) {
                _objc_enumerationMutation(ppuVar11);
              }
              lVar5 = *(long *)(lStack_538 + (long)ppuVar14 * 8);
              func_0x0001059ce550();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 != 0) {
                func_0x00010befa120(ppuVar9);
              }
              _objc_release(lVar5);
              ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            } while (ppuVar3 != ppuVar14);
            ppuVar3 = ppuVar11;
            ppuVar12 = &puStack_540;
            func_0x00010bf52a60();
          } while (ppuVar3 != (undefined **)0x0);
        }
        _objc_release(ppuVar11);
        ppuVar8 = ppuVar12;
      }
      ppuVar11 = ppuVar9;
      (**(code **)(puVar6 + 0x10))(puVar6,ppuVar9);
      _objc_release(ppuVar9);
      goto LAB_1059cf758;
    }
    ppuVar11 = ppuVar4;
    func_0x00010bf990e0(ppuVar4);
    pcVar10 = *(code **)(puVar1 + 0x10);
    ppuVar8 = (undefined **)0x0;
  }
  else {
    pcVar10 = *(code **)(puVar1 + 0x10);
    ppuVar11 = (undefined **)0x0;
  }
  (*pcVar10)(puVar1,ppuVar11);
LAB_1059cf758:
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  puVar6 = PTR_PTR_1126c0b88;
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(ppuVar11);
    _objc_retain(ppuVar4);
    _objc_opt_new(puVar6);
    ppuVar9 = ppuVar4;
    func_0x000109189420(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    func_0x00010c1be000(puVar6);
    _objc_release(ppuVar9);
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar8);
    func_0x00010bf56e40(ppuVar11);
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar6);
  }
  _objc_release(ppuVar8);
  return;
}



/* Entry: 1059cfc78; end: 1059cfc87; -[SCRecipientListsNetworkService createStoryForList:completionBlock:] */

void FUN_1059cfc78(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0b88;
  if (param_3 != 0) {
    _objc_retain(uVar3);
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    lVar2 = param_3;
    func_0x000109189420(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1be000(puVar1);
    _objc_release(lVar2);
    FUN_1059ce7bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010bf56e40(uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(param_4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1059cfc88; end: 1059cfc93; -[SCRecipientListsNetworkService .cxx_destruct] */

void FUN_1059cfc88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059cfc94; end: 1059cfd07; -[UNISCListsLists initWithUnifiedGrpcService:] */

undefined1 * FUN_1059cfc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb368;
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



/* Entry: 1059cfd08; end: 1059cfdeb; -[UNISCListsLists createListsWithRequest:callOptionsBuilder:handler:] */

void FUN_1059cfd08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0b98;
  _objc_opt_class(PTR_PTR_1126c0b98);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14a38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059cfdec; end: 1059cfecf; -[UNISCListsLists fetchListsWithRequest:callOptionsBuilder:handler:] */

void FUN_1059cfdec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0ba0;
  _objc_opt_class(PTR_PTR_1126c0ba0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14a58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059cfed0; end: 1059cffb3; -[UNISCListsLists updateListsWithRequest:callOptionsBuilder:handler:] */

void FUN_1059cfed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0ba8;
  _objc_opt_class(PTR_PTR_1126c0ba8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14a78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059cffb4; end: 1059d0097; -[UNISCListsLists deleteListsWithRequest:callOptionsBuilder:handler:] */

void FUN_1059cffb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0bb0;
  _objc_opt_class(PTR_PTR_1126c0bb0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14a98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d0098; end: 1059d017b; -[UNISCListsLists createListStoryWithRequest:callOptionsBuilder:handler:] */

void FUN_1059d0098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0bb8;
  _objc_opt_class(PTR_PTR_1126c0bb8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14ab8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d017c; end: 1059d025f; -[UNISCListsLists createListsIngressGatewayWithRequest:callOptionsBuilder:handler:] */

void FUN_1059d017c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0bc0;
  _objc_opt_class(PTR_PTR_1126c0bc0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14ad8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d0260; end: 1059d0343; -[UNISCListsLists fetchListsIngressGatewayWithRequest:callOptionsBuilder:handler:] */

void FUN_1059d0260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0bc8;
  _objc_opt_class(PTR_PTR_1126c0bc8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14af8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d0344; end: 1059d0427; -[UNISCListsLists deleteListsIngressGatewayWithRequest:callOptionsBuilder:handler:] */

void FUN_1059d0344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0bd0;
  _objc_opt_class(PTR_PTR_1126c0bd0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14b18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d0428; end: 1059d050b; -[UNISCListsLists createListStoryIngressGatewayWithRequest:callOptionsBuilder:handler:] */

void FUN_1059d0428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0bd8;
  _objc_opt_class(PTR_PTR_1126c0bd8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14b38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d050c; end: 1059d05ef; -[UNISCListsLists updateListsIngressGatewayWithRequest:callOptionsBuilder:handler:] */

void FUN_1059d050c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0be0;
  _objc_opt_class(PTR_PTR_1126c0be0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e14b58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d05f0; end: 1059d05fb; -[UNISCListsLists .cxx_destruct] */

void FUN_1059d05f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059d05fc; end: 1059d0663; +[SCListsListsCreateRequest descriptor] */

void FUN_1059d05fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81370,
                        &PTR____CFConstantStringClassReference_110e14b78,&PTR_DAT_1131148a0,
                        &PTR_DAT_1131148b8,2,0x10,0x1c);
    puRam00000001136c19b0 = puVar1;
  }
  return;
}



/* Entry: 1059d0664; end: 1059d06cb; +[SCListsListsCreateIngressGatewayRequest descriptor] */

void FUN_1059d0664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a813c0,
                        &PTR____CFConstantStringClassReference_110e14b98,&PTR_DAT_1131148a0,
                        &PTR_DAT_113114978,3,0x18,0x1c);
    puRam00000001136c19b8 = puVar1;
  }
  return;
}



/* Entry: 1059d06cc; end: 1059d0733; +[SCListsListsCreateResponse descriptor] */

void FUN_1059d06cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81410,
                        &PTR____CFConstantStringClassReference_110e14bb8,&PTR_DAT_1131148a0,
                        &PTR_DAT_1131148f8,2,0x10,0x1c);
    puRam00000001136c19c0 = puVar1;
  }
  return;
}



/* Entry: 1059d0734; end: 1059d079b; +[SCListsListsCreateIngressGatewayResponse descriptor] */

void FUN_1059d0734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81460,
                        &PTR____CFConstantStringClassReference_110e14bd8,&PTR_DAT_1131148a0,
                        &PTR_DAT_113114938,2,0x10,0x1c);
    puRam00000001136c19c8 = puVar1;
  }
  return;
}



/* Entry: 1059d079c; end: 1059d0803; +[SCListsListsDeleteRequest descriptor] */

void FUN_1059d079c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81500,
                        &PTR____CFConstantStringClassReference_110e14bf8,&PTR_DAT_1131149d8,
                        &PTR_DAT_1131149f0,1,0x10,0x1c);
    puRam00000001136c19d0 = puVar1;
  }
  return;
}



/* Entry: 1059d0804; end: 1059d086b; +[SCListsListsDeleteIngressGatewayRequest descriptor] */

void FUN_1059d0804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81550,
                        &PTR____CFConstantStringClassReference_110e14c18,&PTR_DAT_1131149d8,
                        &PTR_DAT_113114a10,2,0x18,0x1c);
    puRam00000001136c19d8 = puVar1;
  }
  return;
}



/* Entry: 1059d086c; end: 1059d08d3; +[SCListsListsDeleteResponse descriptor] */

void FUN_1059d086c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a815a0,
                        &PTR____CFConstantStringClassReference_110e14c38,&PTR_DAT_1131149d8,
                        &PTR_DAT_113114a50,2,0x10,0x1c);
    puRam00000001136c19e0 = puVar1;
  }
  return;
}



/* Entry: 1059d08d4; end: 1059d093b; +[SCListsListsDeleteIngressGatewayResponse descriptor] */

void FUN_1059d08d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a815f0,
                        &PTR____CFConstantStringClassReference_110e14c58,&PTR_DAT_1131149d8,
                        &PTR_DAT_113114a90,2,0x10,0x1c);
    puRam00000001136c19e8 = puVar1;
  }
  return;
}



/* Entry: 1059d093c; end: 1059d09a3; +[SCListsListsFetchRequest descriptor] */

void FUN_1059d093c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81690,
                        &PTR____CFConstantStringClassReference_110e14c78,&PTR_DAT_113114ad0,
                        &PTR_DAT_113114ae8,1,0x10,0x1c);
    puRam00000001136c19f0 = puVar1;
  }
  return;
}



/* Entry: 1059d09a4; end: 1059d0a0b; +[SCListsListsFetchIngressGatewayRequest descriptor] */

void FUN_1059d09a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c19f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a816e0,
                        &PTR____CFConstantStringClassReference_110e14c98,&PTR_DAT_113114ad0,
                        &PTR_DAT_113114b08,2,0x18,0x1c);
    puRam00000001136c19f8 = puVar1;
  }
  return;
}



/* Entry: 1059d0a0c; end: 1059d0a73; +[SCListsListsFetchResponse descriptor] */

void FUN_1059d0a0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81730,
                        &PTR____CFConstantStringClassReference_110e14cb8,&PTR_DAT_113114ad0,
                        &PTR_DAT_113114b48,3,0x10,0x1c);
    puRam00000001136c1a00 = puVar1;
  }
  return;
}



/* Entry: 1059d0a74; end: 1059d0adb; +[SCListsListsFetchIngressGatewayResponse descriptor] */

void FUN_1059d0a74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81780,
                        &PTR____CFConstantStringClassReference_110e14cd8,&PTR_DAT_113114ad0,
                        &PTR_DAT_113114ba8,3,0x10,0x1c);
    puRam00000001136c1a08 = puVar1;
  }
  return;
}



/* Entry: 1059d0adc; end: 1059d0b43; +[SCListsListsUpdateRequest descriptor] */

void FUN_1059d0adc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81820,
                        &PTR____CFConstantStringClassReference_110e14cf8,&PTR_DAT_113114c08,
                        &PTR_DAT_113114c20,1,0x10,0x1c);
    puRam00000001136c1a10 = puVar1;
  }
  return;
}



/* Entry: 1059d0b44; end: 1059d0bab; +[SCListsListsUpdateResponse descriptor] */

void FUN_1059d0b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81870,
                        &PTR____CFConstantStringClassReference_110e14d18,&PTR_DAT_113114c08,
                        &PTR_DAT_113114c40,2,0x10,0x1c);
    puRam00000001136c1a18 = puVar1;
  }
  return;
}



/* Entry: 1059d0bac; end: 1059d0c13; +[SCListsListsUpdateIngressGatewayRequest descriptor] */

void FUN_1059d0bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a818c0,
                        &PTR____CFConstantStringClassReference_110e14d38,&PTR_DAT_113114c08,
                        &PTR_DAT_113114c80,2,0x18,0x1c);
    puRam00000001136c1a20 = puVar1;
  }
  return;
}



/* Entry: 1059d0c14; end: 1059d0c7b; +[SCListsListsUpdateIngressGatewayResponse descriptor] */

void FUN_1059d0c14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81910,
                        &PTR____CFConstantStringClassReference_110e14d58,&PTR_DAT_113114c08,
                        &PTR_DAT_113114cc0,2,0x10,0x1c);
    puRam00000001136c1a28 = puVar1;
  }
  return;
}



/* Entry: 1059d0c7c; end: 1059d0ce3; +[SCListsListCreateStoryRequest descriptor] */

void FUN_1059d0c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81a00,
                        &PTR____CFConstantStringClassReference_110e14d78,&PTR_DAT_113114d00,
                        &PTR_DAT_113114d18,1,0x10,0x1c);
    puRam00000001136c1a30 = puVar1;
  }
  return;
}



/* Entry: 1059d0ce4; end: 1059d0d4b; +[SCListsListCreateStoryResponse descriptor] */

void FUN_1059d0ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81a50,
                        &PTR____CFConstantStringClassReference_110e14d98,&PTR_DAT_113114d00,
                        &PTR_DAT_113114d78,3,0x18,0x1c);
    puRam00000001136c1a38 = puVar1;
  }
  return;
}



/* Entry: 1059d0d4c; end: 1059d0db3; +[SCListsListCreateStoryIngressGatewayRequest descriptor] */

void FUN_1059d0d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81aa0,
                        &PTR____CFConstantStringClassReference_110e14db8,&PTR_DAT_113114d00,
                        &PTR_DAT_113114d38,2,0x18,0x1c);
    puRam00000001136c1a40 = puVar1;
  }
  return;
}



/* Entry: 1059d0db4; end: 1059d0e1b; +[SCListsListCreateStoryIngressGatewayResponse descriptor] */

void FUN_1059d0db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1a48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a81af0,
                        &PTR____CFConstantStringClassReference_110e14dd8,&PTR_DAT_113114d00,
                        &PTR_DAT_113114dd8,3,0x18,0x1c);
    puRam00000001136c1a48 = puVar1;
  }
  return;
}



/* Entry: 1059d0e1c; end: 1059d0ffb; -[SCSendToListsRecipientPickerPresenter initWithLauncher:recipientPickerScopeServices:uiContainer:delegate:listsDataManager:snapchattersDataFetcher:groupsDataFetcher:myUserId:myDisplayName:] */

undefined1 *
FUN_1059d0e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126eb370;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x000108ef1dd8(param_10,param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x70) = 0xf;
    func_0x00010bea39a0(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059d0ffc; end: 1059d10f7; -[SCSendToListsRecipientPickerPresenter presentEditListWithListId:] */

void FUN_1059d0ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c09a340(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d10f8; end: 1059d11bb;  */

void FUN_1059d10f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bf0a0(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1059d11bc; end: 1059d11bf;  */

void FUN_1059d11bc(void)

{
  return;
}



/* Entry: 1059d11c0; end: 1059d1213;  */

void FUN_1059d11c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b1c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d1214; end: 1059d137f; -[SCSendToListsRecipientPickerPresenter _presentEditListWithListId:listDataModel:] */

void FUN_1059d1214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c244720(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x21;
  func_0x0001000819a8(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d1380; end: 1059d13d3;  */

void FUN_1059d1380(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b1e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d13d4; end: 1059d18c3; -[SCSendToListsRecipientPickerPresenter _presentEditListWithListId:listDataModel:snapchatters:] */

void FUN_1059d13d4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2890;
  _objc_alloc();
  lVar2 = param_4;
  func_0x00010c0d4f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bf6b7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0539a0();
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010901f964();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_1c0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1c0 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_1c8 + lVar11 * 8);
        func_0x000108ef82c0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar4);
        _objc_release(uVar5);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar9 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bfc2300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar9 = param_4;
  func_0x00010bfceb60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar10 = *plStack_200;
    do {
      lVar12 = 0;
      do {
        if (*plStack_200 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar6 = lVar3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          lVar7 = *(long *)(param_1 + 0x40);
          (**(code **)(lVar7 + 0x10))(lVar7,lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x000108ef7600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(puVar4);
          _objc_release(lVar8);
          _objc_release(lVar7);
        }
        _objc_release(lVar6);
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = lVar9;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar9);
  _objc_initWeak(auStack_218,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar9 = param_1;
  func_0x00010be22620(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_1059d18c4;
  puStack_228 = &UNK_11086a520;
  _objc_retain(puVar1);
  puStack_220 = puVar1;
  _objc_copyWeak(auStack_248,auStack_218);
  func_0x00010bf24000(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_4;
  func_0x00010c0d4f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010c09a080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea39a0(param_1);
  _objc_release(lVar11);
  _objc_release(lVar9);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_248);
  _objc_release(puStack_220);
  _objc_destroyWeak(auStack_218);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_248);
  _objc_destroyWeak(auStack_218);
  __Unwind_Resume();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1059d18c4; end: 1059d18eb;  */

void FUN_1059d18c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059d18ec; end: 1059d199b;  */

void FUN_1059d18ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e14e58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e14e58,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde6200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059d199c; end: 1059d1b5b; -[SCSendToListsRecipientPickerPresenter presentCreateList] */

void FUN_1059d199c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126b2890;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x0001059dab8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0539a0();
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_1;
  func_0x00010be22620(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1059d1b5c;
  puStack_78 = &UNK_11086a520;
  _objc_retain(puVar1);
  puStack_70 = puVar1;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf24000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(puStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 1059d1b5c; end: 1059d1b83;  */

void FUN_1059d1b5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059d1b84; end: 1059d1c27;  */

void FUN_1059d1b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x0001059daba4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde6200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059d1c28; end: 1059d1d0f; -[SCSendToListsRecipientPickerPresenter didConfirmWithSelectedItems:title:uiContainer:] */

void FUN_1059d1c28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if ((bVar1 & 1) == 0) {
    func_0x00010c0a9a00(uVar3,param_2,&PTR____CFConstantStringClassReference_110ed8058,uVar2);
    _objc_release(uVar3);
    func_0x00010be71940(param_1,param_2,uVar2,param_4,param_3);
  }
  else {
    func_0x00010c0a9a00(uVar3,param_2,&PTR____CFConstantStringClassReference_110ed8078,uVar2);
    _objc_release(uVar3);
    func_0x00010be72d00(param_1,param_2,uVar2,param_4,param_3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059d1d10; end: 1059d1d47; -[SCSendToListsRecipientPickerPresenter didDismissWithSelectedItems:title:] */

void FUN_1059d1d10(long param_1)

{
  func_0x00010bf94c20(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fba00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059d1d48; end: 1059d205b; -[SCSendToListsRecipientPickerPresenter didViolateWithSelectedItems:titleTextField:confirmationModel:uiConainer:] */

void FUN_1059d1d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c29f8c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_1059d1fd4;
  _objc_initWeak(auStack_68,param_1);
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 != 0) {
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x1059d2090;
      puStack_b0 = &UNK_110841fb0;
      puVar5 = auStack_a0;
      _objc_copyWeak(puVar5,auStack_68);
      _objc_retain(param_4);
      uStack_a8 = param_4;
      func_0x00010be7c600(param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a9a00();
      _objc_release(uVar4);
      uVar4 = uStack_a8;
      goto LAB_1059d1fc0;
    }
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 != 0) {
      puVar5 = auStack_d0;
      _objc_copyWeak(puVar5,auStack_68);
      _objc_retain(param_4);
      func_0x00010be7a200(param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a9a00();
      _objc_release(uVar4);
      uVar4 = param_4;
      goto LAB_1059d1fc0;
    }
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1059d205c;
    puStack_80 = &UNK_110841fb0;
    puVar5 = auStack_70;
    _objc_copyWeak(puVar5,auStack_68);
    _objc_retain(param_4);
    uStack_78 = param_4;
    func_0x00010be7b2a0(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a9a00();
    _objc_release(uVar4);
    uVar4 = uStack_78;
LAB_1059d1fc0:
    _objc_release(uVar4);
    _objc_destroyWeak(puVar5);
  }
  _objc_destroyWeak(auStack_68);
LAB_1059d1fd4:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059d205c; end: 1059d20f7;  */

void FUN_1059d205c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


