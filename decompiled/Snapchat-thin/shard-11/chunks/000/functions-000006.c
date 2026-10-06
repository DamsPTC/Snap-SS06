/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10801c680; end: 10801c693;  */

void FUN_10801c680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10801c694; end: 10801c7c3;  */

void FUN_10801c694(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  ppuVar4 = (undefined **)PTR_PTR_1126bc808;
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    ppuVar4 = &PTR____CFConstantStringClassReference_110ecf5d8;
    FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf5d8,0xc9);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,ppuVar4,0);
  }
  else {
    func_0x00010b6979dc(*(undefined8 *)(param_1 + 0x38));
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4f80(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x28);
    ppuVar3 = ppuVar4;
    func_0x00010bf0b8e0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,0,ppuVar3);
    _objc_release(0);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar4);
  _objc_release(lVar1);
  return;
}



/* Entry: 10801c7c4; end: 10801c93f; -[SCMemoriesSnapInfoFetcher fetchEntrySnapDocForEntryId:completionQueue:completion:] */

void FUN_10801c7c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10801c940;
  puStack_68 = &UNK_110a17990;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_80;
  uStack_58 = param_5;
  _objc_retainBlock();
  _objc_initWeak(auStack_88,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10801c940; end: 10801ca07;  */

void FUN_10801c940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10801ca08;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10801ca08; end: 10801ca1b;  */

void FUN_10801ca08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10801ca1c; end: 10801cd03;  */

void FUN_10801ca1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  ppuVar5 = (undefined **)PTR_PTR_1126bc800;
  if (lVar1 == 0) {
    lVar10 = *(long *)(param_1 + 0x28);
    ppuVar5 = &PTR____CFConstantStringClassReference_110ecf5d8;
    FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf5d8,0xc9);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))(lVar10,ppuVar5,0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa71a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    ppuVar3 = ppuVar5;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = 0;
    ppuVar4 = ppuVar3;
    FUN_108020568();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uStack_78;
    _objc_retain(uStack_78);
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x0) {
      puVar6 = PTR_PTR_1126d8e50;
      _objc_opt_new();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010befa120();
      func_0x00010c1968e0(puVar6);
      _objc_initWeak(auStack_80,lVar1);
      uVar8 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c11de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_80);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar12);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar13);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar11);
      func_0x00010c25f420(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar11);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2,ppuVar4);
    }
    _objc_release(ppuVar4);
    _objc_release(uVar2);
  }
  _objc_release(ppuVar5);
  _objc_release(lVar1);
  return;
}



/* Entry: 10801cd04; end: 10801cd9f;  */

void FUN_10801cd04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    ppuVar2 = &PTR____CFConstantStringClassReference_110ecf618;
    FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf618,0xc9);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2,0);
    _objc_release(ppuVar2);
  }
  else {
    func_0x00010be81380(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10801cda0; end: 10801cdb3;  */

void FUN_10801cda0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010801cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,0);
  return;
}



/* Entry: 10801cdb4; end: 10801d0fb; -[SCMemoriesSnapInfoFetcher _processGetEntriesWithResponseData:entryId:completionHandler:] */

void FUN_10801cdb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110ecf678;
    FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf678,0xcd);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,ppuVar6,0);
  }
  else {
    ppuVar6 = (undefined **)PTR_PTR_1126d8e58;
    _objc_alloc();
    func_0x00010c008360();
    ppuVar1 = ppuVar6;
    func_0x00010bf96fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf529e0();
    _objc_release(ppuVar1);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ecf658;
      FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf658,0xcc);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,ppuVar1,0);
    }
    else {
      ppuVar2 = ppuVar6;
      func_0x00010bf96fe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      ppuVar2 = ppuVar1;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110ecf638;
        FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf638,0xcb);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,ppuVar7,0);
        _objc_release(ppuVar7);
      }
      else {
        _objc_initWeak(auStack_78,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(param_5);
        _objc_retain(ppuVar2);
        _objc_retain(param_4);
        _objc_retain(ppuVar3);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_5);
        _objc_retain(ppuVar2);
        func_0x00010c0f8520(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(ppuVar2);
        _objc_release(param_5);
        _objc_release(ppuVar3);
        _objc_release(param_4);
        _objc_release(ppuVar2);
        _objc_release(param_5);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
      }
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10801d0fc; end: 10801d27f;  */

void FUN_10801d0fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  ppuVar7 = (undefined **)PTR_PTR_1126af4c0;
  if (lVar1 == 0) {
    lVar8 = *(long *)(param_1 + 0x38);
    ppuVar7 = &PTR____CFConstantStringClassReference_110ecf618;
    FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf618,0xc9);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(lVar8,ppuVar7,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bc830;
    func_0x00010bf35080(PTR_PTR_1126bc830);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bc800;
    func_0x00010bfbd7a0(PTR_PTR_1126bc800);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bc828;
    func_0x00010bf5aa00(PTR_PTR_1126bc828);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0fd900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f00(puVar3);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c0fd900(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210f20(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10801d280; end: 10801d293;  */

void FUN_10801d280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010801d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10801d294; end: 10801d32f; -[SCMemoriesSnapInfoFetcher _shouldFetchRemotely:requireEdits:forceRemoteFetch:] */

ulong FUN_10801d294(long param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc7b8;
  if (((param_5 & 1) == 0) && (param_4 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160(puVar1,param_2,param_3,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
    param_5 = (ulong)(puVar1 == (undefined *)0x0);
    _objc_release(puVar1);
  }
  return param_5;
}



/* Entry: 10801d330; end: 10801da87; -[SCMemoriesSnapInfoFetcher _remoteFetchSnapInfoWithSnaps:requireEdits:forceRemoteFetch:memoriesGrapheneContext:resultHandler:] */

void FUN_10801d330(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  long lVar20;
  byte bVar21;
  long lVar22;
  uint uVar23;
  undefined *puVar24;
  uint uVar25;
  byte bVar26;
  long lVar27;
  long lStack_258;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lStack_258 = param_3;
  func_0x00010bf52a60();
  lVar22 = lRam0000000000000000;
  bVar6 = false;
  if (lStack_258 == 0) {
    bVar5 = false;
    bVar4 = false;
    bVar21 = 0;
    uVar25 = 0;
    bVar26 = 0;
  }
  else {
    bVar5 = false;
    bVar4 = false;
    bVar21 = 0;
    uVar25 = 0;
    bVar26 = 0;
    do {
      lVar27 = 0;
      do {
        if (lRam0000000000000000 != lVar22) {
          _objc_enumerationMutation(param_3);
        }
        puVar15 = PTR_PTR_1126bc7b8;
        puVar24 = *(undefined **)(lVar27 * 8);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar24;
        func_0x00010b5f7718(puVar24,uVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        if (puVar11 == (undefined *)0x0) {
          ppuVar14 = &PTR____CFConstantStringClassReference_110ecf698;
          FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf698,0xce);
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = (undefined **)0x0;
          (**(code **)(param_7 + 0x10))(param_7,ppuVar14,0,0);
          lVar22 = param_3;
          goto LAB_10801da00;
        }
        func_0x00010c1d0640(puVar7);
        func_0x00010befa120(ppuVar8);
        puVar12 = puVar24;
        func_0x00010c0c7520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 == (undefined *)0x0) {
          puVar12 = PTR_PTR_1126d2c48;
          _objc_alloc(PTR_PTR_1126d2c48);
          func_0x00010c010420();
        }
        else {
          puVar12 = puVar24;
          func_0x00010c0c7520(puVar24);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar9);
        _objc_release(puVar12);
        puVar12 = puVar24;
        func_0x00010c0c4ae0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 == (undefined *)0x0) {
          puVar13 = puVar24;
          func_0x00010c0c6140();
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar13 == (undefined *)0x0;
          _objc_release();
        }
        else {
          bVar2 = false;
        }
        _objc_release(puVar12);
        puVar12 = puVar24;
        func_0x00010c0ef7c0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 == (undefined *)0x0) {
          puVar13 = puVar24;
          func_0x00010c0efd00();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = (uint)(puVar13 == (undefined *)0x0);
          _objc_release();
        }
        else {
          uVar23 = 0;
        }
        _objc_release(puVar12);
        puVar12 = puVar24;
        func_0x00010c26da80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 == (undefined *)0x0) {
          puVar13 = puVar24;
          func_0x00010c26e220();
          _objc_retainAutoreleasedReturnValue();
          bVar3 = puVar13 == (undefined *)0x0;
          _objc_release();
        }
        else {
          bVar3 = false;
        }
        _objc_release(puVar12);
        if (uVar25 == 0) {
          puVar12 = puVar24;
          func_0x00010bfd9dc0();
          uVar25 = (uint)puVar12 & uVar23;
        }
        else {
          uVar25 = 1;
        }
        if (bVar4 == false) {
          puVar12 = puVar15;
          func_0x00010c0ef4a0();
          _objc_retainAutoreleasedReturnValue();
          bVar4 = puVar12 == (undefined *)0x0;
          _objc_release();
        }
        else {
          bVar4 = true;
        }
        if (bVar5 == false) {
          puVar12 = puVar24;
          func_0x00010c15e1a0();
          _objc_retainAutoreleasedReturnValue();
          bVar5 = puVar12 == (undefined *)0x0;
          _objc_release();
        }
        else {
          bVar5 = true;
        }
        if (bVar6 == false) {
          func_0x00010b5fa088();
          bVar6 = puVar24 == (undefined *)0x8;
        }
        else {
          bVar6 = true;
        }
        bVar26 = bVar26 | bVar2;
        bVar21 = bVar21 | bVar3;
        _objc_release(puVar11);
        _objc_release(puVar15);
        lVar27 = lVar27 + 1;
      } while (lStack_258 != lVar27);
      lStack_258 = param_3;
      func_0x00010bf52a60();
    } while (lStack_258 != 0);
  }
  _objc_release(param_3);
  ppuVar14 = ppuVar8;
  FUN_10801e908(ppuVar8,bVar26,uVar25,bVar21,bVar4,0,bVar5,bVar6,puVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar27;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  puVar15 = *(undefined **)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(ppuVar14);
  _objc_retain(param_6);
  _objc_retain(puVar7);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(ppuVar14);
  ppuVar19 = &PTR____CFConstantStringClassReference_110e87d78;
  func_0x00010c25f400(uVar10);
  _objc_release(uVar16);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar14);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(param_6);
  _objc_release(ppuVar14);
  _objc_release(param_3);
  _objc_release(param_7);
LAB_10801da00:
  _objc_release(ppuVar14);
  _objc_release(puVar15);
  _objc_release(lVar22);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126d2c50;
  _objc_retain(ppuVar19);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar19);
  if ((ppuVar19 == (undefined **)0x0) || (puVar7 != (undefined *)0x0)) {
    puVar9 = puVar7;
    func_0x00010c15f8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c067fc0();
    _objc_release(puVar9);
    if (puVar15 != (undefined *)0x7d0) {
      uVar10 = *(undefined8 *)(param_3 + 0x38);
      uVar16 = *(undefined8 *)(param_3 + 0x40);
      bVar26 = *(byte *)(param_3 + 0x60);
      bVar21 = *(byte *)(param_3 + 0x61);
      bVar1 = *(byte *)(param_3 + 0x62);
      uVar17 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bfca780(uVar17);
      uVar18 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bf93a40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      FUN_10801dbfc(uVar10,uVar16,(bVar26 ^ 0xff) & 1,(bVar21 ^ 0xff) & 1,(bVar1 ^ 0xff) & 1,puVar15
                    ,uVar17,uVar18);
      _objc_release(uVar18);
      if (puVar15 == (undefined *)0x7d1) {
        lVar22 = *(long *)(param_3 + 0x58);
        ppuVar8 = &PTR____CFConstantStringClassReference_110ecf6d8;
        uVar10 = 0xd0;
        goto LAB_10801daf0;
      }
    }
    func_0x00010be80dc0(*(undefined8 *)(param_3 + 0x48));
  }
  else {
    lVar22 = *(long *)(param_3 + 0x58);
    ppuVar8 = &PTR____CFConstantStringClassReference_110ecf6b8;
    uVar10 = 0xcf;
LAB_10801daf0:
    FUN_10801ec4c(ppuVar8,uVar10);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar22 + 0x10))(lVar22,ppuVar8,0,0);
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10801da88; end: 10801dbfb;  */

void FUN_10801da88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar5 = PTR_PTR_1126d2c50;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  if ((param_3 == 0) || (puVar5 != (undefined *)0x0)) {
    puVar7 = puVar5;
    func_0x00010c15f8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c067fc0();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x7d0) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      bVar2 = *(byte *)(param_1 + 0x60);
      bVar3 = *(byte *)(param_1 + 0x61);
      bVar4 = *(byte *)(param_1 + 0x62);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfca780(uVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf93a40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      FUN_10801dbfc(uVar11,uVar1,(bVar2 ^ 0xff) & 1,(bVar3 ^ 0xff) & 1,(bVar4 ^ 0xff) & 1,puVar8,
                    uVar9,uVar10);
      _objc_release(uVar10);
      if (puVar8 == (undefined *)0x7d1) {
        lVar12 = *(long *)(param_1 + 0x58);
        ppuVar6 = &PTR____CFConstantStringClassReference_110ecf6d8;
        uVar11 = 0xd0;
        goto LAB_10801daf0;
      }
    }
    func_0x00010be80dc0(*(undefined8 *)(param_1 + 0x48));
  }
  else {
    lVar12 = *(long *)(param_1 + 0x58);
    ppuVar6 = &PTR____CFConstantStringClassReference_110ecf6b8;
    uVar11 = 0xcf;
LAB_10801daf0:
    FUN_10801ec4c(ppuVar6,uVar11);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar12 + 0x10))(lVar12,ppuVar6,0,0);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10801dbfc; end: 10801dcd7;  */

void FUN_10801dbfc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain();
  _objc_retain(param_8);
  func_0x00010c232d60(0x4024000000000000);
  if (param_2 != 0) {
    func_0x00010b5f10f8(param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(param_1);
    func_0x00010b5f0fa8(param_6,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(param_1);
    _objc_release(param_6);
    _objc_release(param_3);
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10801dcd8; end: 10801de27;  */

void FUN_10801dcd8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x00010c252ee0();
  if (param_3 == 0) {
    iVar6 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bdde2a0();
    if (iVar6 != 0) {
      _CACurrentMediaTime();
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40) = param_1;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10801de28;
      puStack_70 = &UNK_110842e18;
      uStack_68 = *(undefined8 *)(param_2 + 0x20);
      func_0x000100162d98("APPSTORE",&puStack_88);
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  bVar3 = *(byte *)(param_2 + 0x58);
  bVar4 = *(byte *)(param_2 + 0x59);
  bVar5 = *(byte *)(param_2 + 0x5a);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfca780(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf93a40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  FUN_10801dbfc(uVar1,uVar2,(bVar3 ^ 0xff) & 1,(bVar4 ^ 0xff) & 1,(bVar5 ^ 0xff) & 1,param_3,uVar7,
                uVar8);
  _objc_release(uVar8);
  lVar10 = *(long *)(param_2 + 0x50);
  ppuVar9 = &PTR____CFConstantStringClassReference_110ecf6f8;
  FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf6f8,0xd1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(lVar10,ppuVar9,0,0);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 10801de28; end: 10801debf;  */

void FUN_10801de28(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e49a58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10801dec0; end: 10801def3; -[SCMemoriesSnapInfoFetcher _checkShowDisplayNoNetworkBanner] */

bool FUN_10801dec0(double param_1,long param_2)

{
  _CACurrentMediaTime();
  return 5.0 < param_1 - *(double *)(param_2 + 0x40);
}



/* Entry: 10801def4; end: 10801e2af; -[SCMemoriesSnapInfoFetcher _processDownloadURLWithResponse:snapIdToSnap:resultHandler:] */

void FUN_10801def4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _dispatch_group_create();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar6 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar6;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar15 = *plStack_140;
    do {
      lVar16 = 0;
      do {
        if (*plStack_140 != lVar15) {
          _objc_enumerationMutation(lVar6);
        }
        uVar18 = *(undefined8 *)(lStack_148 + lVar16 * 8);
        uVar5 = uVar18;
        func_0x00010c241220(uVar18);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (lVar17 != 0) {
          uVar5 = uVar18;
          FUN_10801eb18();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_group_enter(puVar3);
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_180 = 0xc2000000;
          pcStack_178 = FUN_10801e2b0;
          puStack_170 = &UNK_110848ba8;
          _objc_retain(lVar17);
          uVar19 = *(undefined8 *)(param_1 + 0x20);
          lStack_168 = lVar17;
          uStack_160 = uVar18;
          uStack_158 = uVar5;
          _objc_retain(uVar5);
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          puStack_1d0 = puVar7;
          uStack_1c8 = 0xc2000000;
          pcStack_1c0 = FUN_10801e738;
          puStack_1b8 = &UNK_110969f58;
          _objc_retain(lVar17);
          lStack_1b0 = lVar17;
          lStack_1a8 = param_1;
          _objc_retain(puVar2);
          puStack_1a0 = puVar2;
          _objc_retain(puVar1);
          puStack_198 = puVar1;
          _objc_retain(puVar3);
          puStack_190 = puVar3;
          func_0x00010c0f8520(uVar4);
          _objc_release(uVar19);
          _objc_release(uVar4);
          _objc_release(puStack_190);
          _objc_release(puStack_198);
          _objc_release(puStack_1a0);
          _objc_release(lStack_1b0);
          _objc_release(uStack_158);
          _objc_release(lStack_168);
          _objc_release(uVar5);
        }
        _objc_release(lVar17);
        lVar16 = lVar16 + 1;
      } while (lVar14 != lVar16);
      lVar14 = lVar6;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(lVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_10801e838;
  puStack_1f0 = &UNK_11084a9e8;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar1;
  uStack_1d8 = param_5;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(param_5);
  func_0x000100bc0718(puVar3,uVar5,&puStack_208);
  _objc_release(uVar5);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1e8);
  _objc_release(uStack_1d8);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010c0c6160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0c6160(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c50c0(puVar1);
    _objc_release(uVar5);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010c0efd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0efd20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d77c0(puVar1);
    _objc_release(uVar5);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010c26e240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c26e240(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214320(puVar1);
    _objc_release(uVar5);
    func_0x00010bfdd4e0(*(undefined8 *)(param_3 + 0x28));
    func_0x00010c1a70a0(puVar1);
  }
  FUN_10801ec68(puVar1,*(undefined8 *)(param_3 + 0x28));
  lVar15 = *(long *)(param_3 + 0x28);
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x00010bf529e0();
  _objc_release(lVar15);
  if (lVar6 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(param_3 + 0x28);
    func_0x00010bf0bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar16;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar16);
        }
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d81e0;
        _objc_alloc();
        func_0x00010c008360();
        puVar8 = PTR_PTR_1126d83d8;
        _objc_alloc();
        puVar9 = puVar7;
        func_0x00010bf0af00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010bf0af00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b9b2414();
        puVar12 = puVar7;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4420(puVar8);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        func_0x00010befa120(puVar2);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar3);
        lVar17 = lVar17 + 1;
      } while (lVar6 != lVar17);
      lVar6 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c203960(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (*(long *)(param_3 + 0x30) != 0) {
    puVar2 = PTR_PTR_1126bf8e8;
    func_0x00010bf5a9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7460();
    puVar3 = puVar2;
    func_0x00010c0fd8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010c15e1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c15e1a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcca0(puVar1);
    _objc_release(uVar5);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0c41a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4140(puVar1);
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126af4d0;
    uVar5 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c241220(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(*(long *)(puVar1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    _objc_release(uVar5);
    if (puVar2 == (undefined *)0x0) {
      ppuVar13 = &PTR____CFConstantStringClassReference_110ecf718;
      FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf718,0xd2);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(puVar1 + 0x30);
      uVar5 = *(undefined8 *)(puVar1 + 0x20);
      func_0x00010c241220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar18);
      _objc_release(uVar5);
      _objc_release(ppuVar13);
    }
    else {
      func_0x00010befa120(*(undefined8 *)(puVar1 + 0x38));
    }
    _dispatch_group_leave(*(undefined8 *)(puVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10801e2b0; end: 10801e737;  */

void FUN_10801e2b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0c6160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c6160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c50c0(puVar1);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0efd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0efd20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d77c0(puVar1);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c26e240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c26e240(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214320(puVar1);
    _objc_release(uVar3);
    func_0x00010bfdd4e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1a70a0(puVar1);
  }
  FUN_10801ec68(puVar1,*(undefined8 *)(param_1 + 0x28));
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar2 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010bf0bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126d81e0;
        _objc_alloc();
        func_0x00010c008360();
        puVar9 = PTR_PTR_1126d83d8;
        _objc_alloc();
        puVar10 = puVar8;
        func_0x00010bf0af00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar8;
        func_0x00010bf0af00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b9b2414();
        puVar13 = puVar8;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff4420(puVar9);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        func_0x00010befa120(puVar5);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        lVar17 = lVar17 + 1;
      } while (lVar2 != lVar17);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    puVar7 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010c203960(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar5 = PTR_PTR_1126bf8e8;
    func_0x00010bf5a9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7460();
    puVar7 = puVar5;
    func_0x00010c0fd8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c15e1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15e1a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcca0(puVar1);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c41a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4140(puVar1);
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126af4d0;
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(*(long *)(puVar1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar3);
    if (puVar5 == (undefined *)0x0) {
      ppuVar15 = &PTR____CFConstantStringClassReference_110ecf718;
      FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf718,0xd2);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(puVar1 + 0x30);
      uVar3 = *(undefined8 *)(puVar1 + 0x20);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar14);
      _objc_release(uVar3);
      _objc_release(ppuVar15);
    }
    else {
      func_0x00010befa120(*(undefined8 *)(puVar1 + 0x38));
    }
    _dispatch_group_leave(*(undefined8 *)(puVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10801e738; end: 10801e837;  */

void FUN_10801e738(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar3 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (puVar3 == (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110ecf718;
    FUN_10801ec4c(&PTR____CFConstantStringClassReference_110ecf718,0xd2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(uVar1);
    _objc_release(ppuVar4);
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10801e838; end: 10801e89b;  */

void FUN_10801e838(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar3 + 0x10))(lVar3,0,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10801e89c; end: 10801e907; -[SCMemoriesSnapInfoFetcher .cxx_destruct] */

void FUN_10801e89c(long param_1)

{
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



/* Entry: 10801e908; end: 10801eb17;  */

void FUN_10801e908(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  puVar1 = PTR_PTR_1126d8e60;
  _objc_retain(param_1);
  func_0x00010c2b1d60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf51e00(param_1);
  func_0x00010c2046e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c1c55c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d7700(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214520(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a4e40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c8140(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1fccc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2079c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207a60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1c47c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(param_1);
  func_0x00010bf529e0();
  func_0x00010c1c5820(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(in_stack_00000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10801eb18; end: 10801ec4b;  */

void FUN_10801eb18(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar3 = param_1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010bfcfd00();
    if ((int)puVar3 == 0) {
      puVar3 = param_1;
      func_0x00010c0ef4a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      puVar1 = param_1;
      func_0x00010c0ef4a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b20(puVar3,param_2,puVar1,0);
      _objc_release(puVar1);
      puVar1 = puVar3;
      func_0x00010c14df40(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bcdd8;
    _objc_alloc(PTR_PTR_1126bcdd8);
    func_0x00010c0206e0();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10801ec4c; end: 10801ec67;  */

void FUN_10801ec4c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110ecf738,param_1,param_2);
  return;
}



/* Entry: 10801ec68; end: 10801ee27;  */

void FUN_10801ec68(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c0c4a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4520(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010c0ef7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ef7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7560(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010c26da20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c26da20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213fc0(param_1);
    _objc_release(uVar1);
    func_0x00010bfdd4e0(param_2);
    func_0x00010c1a70a0(param_1);
  }
  uVar1 = param_2;
  func_0x00010c0c5040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    uVar2 = param_2;
    func_0x00010c0c5040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x00010b77c6b4(0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) goto LAB_10801ee08;
    uVar1 = param_2;
    func_0x00010c0c5040(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd840(param_1);
  }
  _objc_release(uVar1);
LAB_10801ee08:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10801ee28; end: 10801ee8f; +[MemoriesEntry descriptor] */

void FUN_10801ee28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728b98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b92f20,
                        &PTR____CFConstantStringClassReference_110ecf758,
                        &PTR_s_snapchat_memories_113250230,&PTR_DAT_1132502a8,0xf,0x70,0x1c);
    puRam0000000113728b98 = puVar1;
  }
  return;
}



/* Entry: 10801ee90; end: 10801eef7; +[MemoriesSnapOrder descriptor] */

void FUN_10801ee90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728ba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b92f70,
                        &PTR____CFConstantStringClassReference_110ecf778,
                        &PTR_s_snapchat_memories_113250230,&PTR_s_value_113250248,1,0x10,0x1c);
    puRam0000000113728ba0 = puVar1;
  }
  return;
}



/* Entry: 10801eef8; end: 10801ef5f; +[GetEntriesRequest descriptor] */

void FUN_10801eef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728ba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b92fc0,
                        &PTR____CFConstantStringClassReference_110ecf798,
                        &PTR_s_snapchat_memories_113250230,&PTR_DAT_113250268,1,0x10,0x1c);
    puRam0000000113728ba8 = puVar1;
  }
  return;
}



/* Entry: 10801ef60; end: 10801efc7; +[GetEntriesResponse descriptor] */

void FUN_10801ef60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728bb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93010,
                        &PTR____CFConstantStringClassReference_110ecf7b8,
                        &PTR_s_snapchat_memories_113250230,&PTR_DAT_113250288,1,0x10,0x1c);
    puRam0000000113728bb0 = puVar1;
  }
  return;
}



/* Entry: 10801efc8; end: 10801f043; +[MemoriesAsset descriptor] */

undefined * FUN_10801efc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728bb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b930b0,
                        &PTR____CFConstantStringClassReference_110ecf7d8,
                        &PTR_s_snapchat_memories_113250488,&PTR_DAT_1132504c0,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam0000000113728bb8 = puVar1;
  }
  return puRam0000000113728bb8;
}



/* Entry: 10801f044; end: 10801f0ab; +[MemoriesAssetList descriptor] */

void FUN_10801f044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728bc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93100,
                        &PTR____CFConstantStringClassReference_110ecf7f8,
                        &PTR_s_snapchat_memories_113250488,&PTR_DAT_1132504a0,1,0x10,0x1c);
    puRam0000000113728bc0 = puVar1;
  }
  return;
}



/* Entry: 10801f0ac; end: 10801f113; +[SCMemoriesCOFGetSnapNoNetworkBanner descriptor] */

void FUN_10801f0ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b931a0,
                        &PTR____CFConstantStringClassReference_110ecf818,&PTR_DAT_1132505c0,
                        &PTR_s_enabled_1132505d8,2,0x10,0x1c);
    puRam0000000113728bc8 = puVar1;
  }
  return;
}



/* Entry: 10801f114; end: 10801f1ab;  */

void FUN_10801f114(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10801f1ac();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = uVar2;
  FUN_10801f33c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10801f1ac; end: 10801f33b;  */

void FUN_10801f1ac(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar5 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c0ff5c0(uVar6);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,uVar6,puVar4);
        _objc_release(puVar4);
        puVar8 = puVar8 + 1;
      } while (puVar5 != puVar8);
      puVar5 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    puVar1 = param_1;
    func_0x00010c08c3a0();
    if ((int)puVar1 == 1) {
      puVar5 = param_1;
      func_0x00010c0c3fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10801f33c; end: 10801f3e7;  */

void FUN_10801f33c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08c3a0();
  if ((int)uVar1 == 1) {
    uVar1 = param_1;
    func_0x00010c0c3fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10801f3e8; end: 10801f73b;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010801ff30 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

long * FUN_10801f3e8(undefined *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined *puVar27;
  long *plVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined *puVar31;
  ulong uVar32;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = puVar29;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar31 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar29);
      }
      plVar26 = *(long **)((long)puVar31 * 8);
      plVar22 = plVar26;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      plVar24 = plVar22;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      plVar5 = plVar24;
      func_0x00010c0c55e0();
      _objc_release(plVar24);
      _objc_release(plVar22);
      if (plVar5 == param_2) {
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        plVar22 = plVar26;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(plVar26);
        goto LAB_10801f538;
      }
      puVar31 = puVar31 + 1;
    } while (puVar4 != puVar31);
    puVar4 = puVar29;
    func_0x00010bf52a60();
  }
  plVar22 = (long *)0x0;
LAB_10801f538:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar24 = plVar23;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar29;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
    puVar4 = puVar31;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar31);
        }
        plVar22 = *(long **)((long)puVar29 * 8);
        plVar5 = plVar22;
        func_0x00010c08c3a0();
        if ((int)plVar5 == 1) {
          plVar5 = plVar22;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          plVar26 = plVar5;
          func_0x00010bf0b760();
          _objc_release(plVar5);
          if ((int)plVar26 == 5) {
            FUN_10801f33c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            goto LAB_10801f6fc;
          }
        }
        puVar29 = puVar29 + 1;
      } while (puVar4 != puVar29);
      puVar4 = puVar31;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (plVar23 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      puVar31 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      plVar22 = (long *)0x0;
      *plVar23 = (long)puVar31;
    }
LAB_10801f6fc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar31;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar4;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar29;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar29);
      _objc_release(puVar4);
      _objc_release(puVar31);
      puVar4 = puVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      plVar23 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        do {
          puVar29 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar6);
            }
            iVar3 = (int)*(undefined8 *)((long)puVar29 * 8);
            func_0x00010c14fb60();
            if (iVar3 == 2) {
              plVar23 = (long *)((long)&lRam0000000000000000 + 1);
              goto LAB_10801f84c;
            }
            puVar29 = puVar29 + 1;
          } while (puVar4 != puVar29);
          puVar4 = puVar6;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
        plVar23 = (long *)0x0;
      }
LAB_10801f84c:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
        return plVar23;
      }
      ___stack_chk_fail();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      puVar29 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      plVar23 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar31 = puVar6;
      FUN_10801f1ac();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar4;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar27;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar27);
      _objc_release(puVar4);
      puVar17 = (undefined8 *)0x10;
      puVar4 = puVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar27 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar8);
          }
          uVar19 = *(ulong *)((long)puVar27 * 8);
          uVar20 = uVar19;
          func_0x00010c074780();
          if ((int)uVar20 == 0) {
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar19;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (uVar30 = uVar19, uVar20 != 0) {
              uVar30 = 0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(uVar19);
                }
                uVar32 = *(ulong *)(uVar30 * 8);
                puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_opt_new();
                uVar21 = uVar32;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar21;
                func_0x00010bf529e0();
                _objc_release(uVar21);
                if (uVar9 != 0) {
                  uVar21 = 0;
                  do {
                    uVar9 = uVar32;
                    func_0x00010c0ff660(uVar32);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c296de0();
                    _objc_release(uVar9);
                    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar31;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar10);
                    puVar10 = puVar11;
                    FUN_10801f33c();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar10 != (undefined *)0x0) {
                      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010bf0b760(puVar10);
                      func_0x00010c0df760(puVar13);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar7);
                      _objc_release(puVar13);
                      _objc_release(puVar12);
                    }
                    _objc_release(puVar10);
                    _objc_release(puVar11);
                    uVar21 = uVar21 + 1;
                    uVar9 = uVar32;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    uVar14 = uVar9;
                    func_0x00010bf529e0();
                    _objc_release(uVar9);
                  } while (uVar21 < uVar14);
                }
                puVar10 = PTR_PTR_1126d8e68;
                _objc_alloc(PTR_PTR_1126d8e68);
                func_0x00010bff4520();
                func_0x00010befa120(plVar23);
                _objc_release(puVar10);
                _objc_release(puVar7);
                uVar30 = uVar30 + 1;
              } while (uVar30 != uVar20);
              uVar20 = uVar19;
              func_0x00010bf52a60();
            }
          }
          else {
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar30 = uVar19;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar19);
            uVar20 = uVar30;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar20;
            func_0x00010bf529e0();
            _objc_release(uVar20);
            if (uVar19 != 0) {
              uVar20 = 0;
              do {
                uVar19 = uVar30;
                func_0x00010c0ff660(uVar30);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c296de0();
                _objc_release(uVar19);
                puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar31;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                puVar7 = puVar10;
                FUN_10801f33c();
                _objc_retainAutoreleasedReturnValue();
                if (puVar7 != (undefined *)0x0) {
                  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010bf0b760(puVar7);
                  func_0x00010c0df760(puVar11);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar29);
                  _objc_release(puVar11);
                  _objc_release(puVar13);
                }
                _objc_release(puVar7);
                _objc_release(puVar10);
                uVar20 = uVar20 + 1;
                uVar19 = uVar30;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar21 = uVar19;
                func_0x00010bf529e0();
                _objc_release(uVar19);
              } while (uVar20 < uVar21);
            }
          }
          _objc_release(uVar30);
          puVar27 = puVar27 + 1;
        } while (puVar27 != puVar4);
        puVar17 = (undefined8 *)0x10;
        puVar4 = puVar8;
        func_0x00010bf52a60();
      }
      _objc_release(puVar8);
      puVar4 = PTR_PTR_1126d8e68;
      _objc_alloc();
      puVar27 = puVar29;
      func_0x00010bf51e00(puVar29);
      func_0x00010bff4520();
      _objc_release(puVar27);
      plVar22 = (long *)PTR_PTR_1126d8e70;
      _objc_alloc();
      plVar5 = plVar23;
      func_0x00010bf51e00();
      plVar26 = plVar5;
      puVar27 = puVar4;
      func_0x00010bfff240();
      _objc_release(plVar5);
      _objc_release(puVar4);
      _objc_release(puVar31);
      _objc_release(plVar23);
      _objc_release(puVar29);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        ___stack_chk_fail();
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar23 = plVar24;
        _objc_retain(plVar26);
        _objc_retain(puVar27);
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar29 = puVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (puVar29 != (undefined *)0x0) {
          do {
            puVar31 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(puVar4);
              }
              plVar28 = *(long **)((long)puVar31 * 8);
              plVar22 = plVar28;
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              plVar5 = plVar22;
              func_0x00010c0c5180();
              _objc_retainAutoreleasedReturnValue();
              plVar25 = plVar5;
              func_0x00010c0c55e0();
              _objc_release(plVar5);
              _objc_release(plVar22);
              if (plVar25 == plVar24) {
                if (plVar26 == (long *)0x0 || puVar27 == (undefined *)0x0) {
                  if (puVar17 == (undefined8 *)0x0) goto LAB_10801ffbc;
                  puVar29 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x00010bf99260();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_autorelease();
                  *puVar17 = puVar29;
                }
                else {
                  plVar22 = plVar28;
                  func_0x00010c0c3fe0(plVar28);
                  _objc_retainAutoreleasedReturnValue();
                  plVar24 = plVar22;
                  func_0x00010bf93e60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1b6b40();
                  _objc_release(plVar24);
                  _objc_release(plVar22);
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  plVar22 = plVar28;
                  func_0x00010bf93e60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1b64a0();
                  _objc_release(plVar22);
                  _objc_release(plVar28);
                }
                _objc_release(puVar4);
                goto LAB_1080200e8;
              }
LAB_10801ffbc:
              puVar31 = puVar31 + 1;
            } while (puVar29 != puVar31);
            puVar29 = puVar4;
            func_0x00010bf52a60();
          } while (puVar29 != (undefined *)0x0);
        }
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar17 = puVar4;
LAB_1080200e8:
        _objc_release(puVar27);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
          return plVar26;
        }
        ___stack_chk_fail();
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        plVar22 = plVar26;
        func_0x00010c0c4c40();
        _objc_retainAutoreleasedReturnValue();
        plVar24 = plVar22;
        func_0x00010c08c260();
        _objc_retainAutoreleasedReturnValue();
        plVar5 = plVar24;
        func_0x00010c2791c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(plVar24);
        _objc_release(plVar22);
        _objc_release(plVar26);
        plVar22 = plVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (plVar22 == (long *)0x0) {
          plVar24 = (long *)0x0;
        }
        else {
          plVar24 = (long *)0x0;
          do {
            plVar26 = (long *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(plVar5);
              }
              uVar19 = *(ulong *)((long)plVar26 * 8);
              uVar20 = uVar19;
              func_0x00010c074780();
              if ((uVar20 & 1) == 0) {
                func_0x00010c2787a0();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar19;
                func_0x00010bf529e0();
                plVar24 = (long *)(uVar20 + (long)plVar24);
                _objc_release(uVar19);
              }
              plVar26 = (long *)((long)plVar26 + 1);
            } while (plVar22 != plVar26);
            plVar22 = plVar5;
            func_0x00010bf52a60();
          } while (plVar22 != (long *)0x0);
        }
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
          return plVar24;
        }
        ___stack_chk_fail();
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        plVar22 = plVar5;
        FUN_10801f1ac();
        _objc_retainAutoreleasedReturnValue();
        plVar24 = plVar5;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        plVar26 = plVar24;
        func_0x00010c0c4c40();
        _objc_retainAutoreleasedReturnValue();
        plVar25 = plVar26;
        func_0x00010c08c260();
        _objc_retainAutoreleasedReturnValue();
        plVar28 = plVar25;
        func_0x00010c2791c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(plVar25);
        _objc_release(plVar26);
        _objc_release(plVar24);
        plVar24 = plVar28;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (plVar24 == (long *)0x0) {
          plVar26 = (long *)0x0;
        }
        else {
          plVar26 = (long *)0x0;
          do {
            plVar25 = (long *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(plVar28);
              }
              uVar19 = *(ulong *)((long)plVar25 * 8);
              uVar20 = uVar19;
              func_0x00010c074780();
              if ((int)uVar20 != 0) {
                func_0x00010c2787a0();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar19;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar19);
                uVar19 = uVar20;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar30 = uVar19;
                func_0x00010bf529e0();
                _objc_release(uVar19);
                if (uVar30 != 0) {
                  uVar19 = 0;
                  do {
                    uVar30 = uVar20;
                    func_0x00010c0ff660(uVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c296de0();
                    _objc_release(uVar30);
                    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    plVar15 = plVar22;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar4);
                    plVar16 = plVar15;
                    FUN_10801f33c();
                    _objc_retainAutoreleasedReturnValue();
                    if (plVar16 != (long *)0x0) {
                      plVar26 = (long *)((long)plVar26 + 1);
                    }
                    _objc_release();
                    _objc_release(plVar15);
                    uVar19 = uVar19 + 1;
                    uVar30 = uVar20;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    uVar21 = uVar30;
                    func_0x00010bf529e0();
                    _objc_release(uVar30);
                  } while (uVar19 < uVar21);
                }
                _objc_release(uVar20);
              }
              plVar25 = (long *)((long)plVar25 + 1);
            } while (plVar25 != plVar24);
            plVar24 = plVar28;
            func_0x00010bf52a60();
          } while (plVar24 != (long *)0x0);
        }
        _objc_release(plVar28);
        _objc_release(plVar22);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
          return plVar26;
        }
        ___stack_chk_fail();
        _objc_retain();
        plVar22 = plVar5;
        func_0x00010c08fa60();
        if (plVar22 == (long *)0x0) {
          if (plVar23 == (long *)0x0) {
            plVar22 = (long *)0x0;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            plVar22 = (long *)0x0;
            *plVar23 = (long)puVar4;
          }
        }
        else {
          plVar22 = (long *)PTR_PTR_1126b25c0;
          _objc_alloc();
          func_0x00010c008360();
          if (plVar22 != (long *)0x0) {
            puVar4 = PTR_PTR_1126c7c50;
            _objc_alloc(PTR_PTR_1126c7c50);
            func_0x00010c029140();
            puVar29 = puVar4;
            func_0x00010bf220e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            plVar24 = plVar22;
            FUN_108022988(plVar22,puVar29);
            _objc_retainAutoreleasedReturnValue();
            if ((plVar23 != (long *)0x0) && (plVar24 != (long *)0x0)) {
              _objc_retainAutorelease(plVar24);
              *plVar23 = (long)plVar24;
            }
            _objc_retain(plVar22);
            _objc_release(plVar24);
            _objc_release(puVar29);
          }
          _objc_release(plVar22);
        }
        _objc_release(plVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar22);
  return plVar22;
}



/* Entry: 10801f73c; end: 10801f88b;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010801ff30 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_10801f73c(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  ulong uVar32;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  _objc_release(lVar2);
  _objc_release(param_1);
  lVar21 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar25 = (undefined *)0x0;
  if (lVar21 != 0) {
    do {
      lVar28 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        iVar1 = (int)*(undefined8 *)(lVar28 * 8);
        func_0x00010c14fb60();
        if (iVar1 == 2) {
          puVar25 = (undefined *)((long)&lRam0000000000000000 + 1);
          goto LAB_10801f84c;
        }
        lVar28 = lVar28 + 1;
      } while (lVar21 != lVar28);
      lVar21 = lVar3;
      func_0x00010bf52a60();
    } while (lVar21 != 0);
    puVar25 = (undefined *)0x0;
  }
LAB_10801f84c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return puVar25;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar19 = lVar3;
  FUN_10801f1ac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar2;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar21;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar28;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  _objc_release(lVar21);
  _objc_release(lVar2);
  puVar18 = (undefined8 *)0x10;
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar21 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar28 = 0;
    do {
      if (lRam0000000000000000 != lVar21) {
        _objc_enumerationMutation(lVar4);
      }
      uVar22 = *(ulong *)(lVar28 * 8);
      uVar23 = uVar22;
      func_0x00010c074780();
      if ((int)uVar23 == 0) {
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar22;
        func_0x00010bf52a60();
        lVar5 = lRam0000000000000000;
        while (uVar31 = uVar22, uVar23 != 0) {
          uVar31 = 0;
          do {
            if (lRam0000000000000000 != lVar5) {
              _objc_enumerationMutation(uVar22);
            }
            uVar32 = *(ulong *)(uVar31 * 8);
            puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            uVar24 = uVar32;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar24;
            func_0x00010bf529e0();
            _objc_release(uVar24);
            if (uVar7 != 0) {
              uVar24 = 0;
              do {
                uVar7 = uVar32;
                func_0x00010c0ff660(uVar32);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c296de0();
                _objc_release(uVar7);
                puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar19;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar29);
                lVar9 = lVar8;
                FUN_10801f33c();
                _objc_retainAutoreleasedReturnValue();
                if (lVar9 != 0) {
                  puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010bf0b760(lVar9);
                  func_0x00010c0df760(puVar29);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar6);
                  _objc_release(puVar29);
                  _objc_release(puVar27);
                }
                _objc_release(lVar9);
                _objc_release(lVar8);
                uVar24 = uVar24 + 1;
                uVar7 = uVar32;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar7;
                func_0x00010bf529e0();
                _objc_release(uVar7);
              } while (uVar24 < uVar10);
            }
            puVar29 = PTR_PTR_1126d8e68;
            _objc_alloc(PTR_PTR_1126d8e68);
            func_0x00010bff4520();
            func_0x00010befa120(puVar26);
            _objc_release(puVar29);
            _objc_release(puVar6);
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar23);
          uVar23 = uVar22;
          func_0x00010bf52a60();
        }
      }
      else {
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar22;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar22);
        uVar23 = uVar31;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar23;
        func_0x00010bf529e0();
        _objc_release(uVar23);
        if (uVar22 != 0) {
          uVar23 = 0;
          do {
            uVar22 = uVar31;
            func_0x00010c0ff660(uVar31);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296de0();
            _objc_release(uVar22);
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar19;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            lVar8 = lVar5;
            FUN_10801f33c();
            _objc_retainAutoreleasedReturnValue();
            if (lVar8 != 0) {
              puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bf0b760(lVar8);
              func_0x00010c0df760(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar25);
              _objc_release(puVar6);
              _objc_release(puVar29);
            }
            _objc_release(lVar8);
            _objc_release(lVar5);
            uVar23 = uVar23 + 1;
            uVar22 = uVar31;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar24 = uVar22;
            func_0x00010bf529e0();
            _objc_release(uVar22);
          } while (uVar23 < uVar24);
        }
      }
      _objc_release(uVar31);
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar2);
    puVar18 = (undefined8 *)0x10;
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126d8e68;
  _objc_alloc();
  puVar29 = puVar25;
  func_0x00010bf51e00(puVar25);
  func_0x00010bff4520();
  _objc_release(puVar29);
  puVar29 = PTR_PTR_1126d8e70;
  _objc_alloc();
  puVar27 = puVar26;
  func_0x00010bf51e00();
  puVar14 = puVar27;
  puVar15 = puVar6;
  func_0x00010bfff240();
  _objc_release(puVar27);
  _objc_release(puVar6);
  _objc_release(lVar19);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = param_2;
    _objc_retain(puVar14);
    _objc_retain(puVar15);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar21;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar3 != 0) {
      do {
        lVar28 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar21);
          }
          puVar30 = *(undefined8 **)(lVar28 * 8);
          puVar11 = puVar30;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c0c55e0();
          _objc_release(puVar12);
          _objc_release(puVar11);
          if (puVar13 == param_2) {
            if (puVar14 == (undefined *)0x0 || puVar15 == (undefined *)0x0) {
              if (puVar18 == (undefined8 *)0x0) goto LAB_10801ffbc;
              puVar25 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99260();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *puVar18 = puVar25;
            }
            else {
              puVar18 = puVar30;
              func_0x00010c0c3fe0(puVar30);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar18;
              func_0x00010bf93e60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1b6b40();
              _objc_release(puVar11);
              _objc_release(puVar18);
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar30;
              func_0x00010bf93e60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1b64a0();
              _objc_release(puVar18);
              _objc_release(puVar30);
            }
            _objc_release(lVar21);
            goto LAB_1080200e8;
          }
LAB_10801ffbc:
          lVar28 = lVar28 + 1;
        } while (lVar3 != lVar28);
        lVar3 = lVar21;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar21);
    puVar25 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar18 = puVar25;
LAB_1080200e8:
    _objc_release(puVar15);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      return puVar14;
    }
    ___stack_chk_fail();
    lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar14;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar26;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar14);
    puVar25 = puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (puVar25 == (undefined *)0x0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar26 = (undefined *)0x0;
      do {
        puVar29 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar6);
          }
          uVar22 = *(ulong *)((long)puVar29 * 8);
          uVar23 = uVar22;
          func_0x00010c074780();
          if ((uVar23 & 1) == 0) {
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar23 = uVar22;
            func_0x00010bf529e0();
            puVar26 = puVar26 + uVar23;
            _objc_release(uVar22);
          }
          puVar29 = puVar29 + 1;
        } while (puVar25 != puVar29);
        puVar25 = puVar6;
        func_0x00010bf52a60();
      } while (puVar25 != (undefined *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
      return puVar26;
    }
    ___stack_chk_fail();
    lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar25 = puVar6;
    FUN_10801f1ac();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar6;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar26;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar29;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar27;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    _objc_release(puVar29);
    _objc_release(puVar26);
    puVar26 = puVar14;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (puVar26 == (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
    }
    else {
      puVar29 = (undefined *)0x0;
      do {
        puVar27 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar14);
          }
          uVar22 = *(ulong *)((long)puVar27 * 8);
          uVar23 = uVar22;
          func_0x00010c074780();
          if ((int)uVar23 != 0) {
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar23 = uVar22;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar22);
            uVar22 = uVar23;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar31 = uVar22;
            func_0x00010bf529e0();
            _objc_release(uVar22);
            if (uVar31 != 0) {
              uVar22 = 0;
              do {
                uVar31 = uVar23;
                func_0x00010c0ff660(uVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c296de0();
                _objc_release(uVar31);
                puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                puVar16 = puVar25;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar15);
                puVar15 = puVar16;
                FUN_10801f33c();
                _objc_retainAutoreleasedReturnValue();
                if (puVar15 != (undefined *)0x0) {
                  puVar29 = puVar29 + 1;
                }
                _objc_release();
                _objc_release(puVar16);
                uVar22 = uVar22 + 1;
                uVar31 = uVar23;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar24 = uVar31;
                func_0x00010bf529e0();
                _objc_release(uVar31);
              } while (uVar22 < uVar24);
            }
            _objc_release(uVar23);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 != puVar26);
        puVar26 = puVar14;
        func_0x00010bf52a60();
      } while (puVar26 != (undefined *)0x0);
    }
    _objc_release(puVar14);
    _objc_release(puVar25);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
      return puVar29;
    }
    ___stack_chk_fail();
    _objc_retain();
    puVar25 = puVar6;
    func_0x00010c08fa60();
    if (puVar25 == (undefined *)0x0) {
      if (puVar17 == (undefined8 *)0x0) {
        puVar29 = (undefined *)0x0;
      }
      else {
        puVar25 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar29 = (undefined *)0x0;
        *puVar17 = puVar25;
      }
    }
    else {
      puVar29 = PTR_PTR_1126b25c0;
      _objc_alloc();
      func_0x00010c008360();
      if (puVar29 != (undefined *)0x0) {
        puVar25 = PTR_PTR_1126c7c50;
        _objc_alloc(PTR_PTR_1126c7c50);
        func_0x00010c029140();
        puVar26 = puVar25;
        func_0x00010bf220e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar25);
        puVar25 = puVar29;
        FUN_108022988(puVar29,puVar26);
        _objc_retainAutoreleasedReturnValue();
        if ((puVar17 != (undefined8 *)0x0) && (puVar25 != (undefined *)0x0)) {
          _objc_retainAutorelease(puVar25);
          *puVar17 = puVar25;
        }
        _objc_retain(puVar29);
        _objc_release(puVar25);
        _objc_release(puVar26);
      }
      _objc_release(puVar29);
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return puVar29;
}



/* Entry: 10801f88c; end: 108020133;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010801ff30 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_10801f88c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong uVar30;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1;
  FUN_10801f1ac();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar3;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar19;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar26;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  _objc_release(lVar19);
  _objc_release(lVar3);
  puVar17 = (undefined8 *)0x10;
  lVar3 = lVar25;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar26 = 0;
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(lVar25);
      }
      uVar20 = *(ulong *)(lVar26 * 8);
      uVar21 = uVar20;
      func_0x00010c074780();
      if ((int)uVar21 == 0) {
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        while (uVar29 = uVar20, uVar21 != 0) {
          uVar29 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(uVar20);
            }
            uVar30 = *(ulong *)(uVar29 * 8);
            puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            uVar22 = uVar30;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar22;
            func_0x00010bf529e0();
            _objc_release(uVar22);
            if (uVar6 != 0) {
              uVar22 = 0;
              do {
                uVar6 = uVar30;
                func_0x00010c0ff660(uVar30);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c296de0();
                _objc_release(uVar6);
                puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar2;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar27);
                lVar8 = lVar7;
                FUN_10801f33c();
                _objc_retainAutoreleasedReturnValue();
                if (lVar8 != 0) {
                  puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010bf0b760(lVar8);
                  func_0x00010c0df760(puVar27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar5);
                  _objc_release(puVar27);
                  _objc_release(puVar24);
                }
                _objc_release(lVar8);
                _objc_release(lVar7);
                uVar22 = uVar22 + 1;
                uVar6 = uVar30;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar6;
                func_0x00010bf529e0();
                _objc_release(uVar6);
              } while (uVar22 < uVar9);
            }
            puVar27 = PTR_PTR_1126d8e68;
            _objc_alloc(PTR_PTR_1126d8e68);
            func_0x00010bff4520();
            func_0x00010befa120(puVar23);
            _objc_release(puVar27);
            _objc_release(puVar5);
            uVar29 = uVar29 + 1;
          } while (uVar29 != uVar21);
          uVar21 = uVar20;
          func_0x00010bf52a60();
        }
      }
      else {
        func_0x00010c2787a0();
        _objc_retainAutoreleasedReturnValue();
        uVar29 = uVar20;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        uVar21 = uVar29;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar21;
        func_0x00010bf529e0();
        _objc_release(uVar21);
        if (uVar20 != 0) {
          uVar21 = 0;
          do {
            uVar20 = uVar29;
            func_0x00010c0ff660(uVar29);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296de0();
            _objc_release(uVar20);
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            lVar7 = lVar4;
            FUN_10801f33c();
            _objc_retainAutoreleasedReturnValue();
            if (lVar7 != 0) {
              puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bf0b760(lVar7);
              func_0x00010c0df760(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar1);
              _objc_release(puVar5);
              _objc_release(puVar27);
            }
            _objc_release(lVar7);
            _objc_release(lVar4);
            uVar21 = uVar21 + 1;
            uVar20 = uVar29;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar20;
            func_0x00010bf529e0();
            _objc_release(uVar20);
          } while (uVar21 < uVar22);
        }
      }
      _objc_release(uVar29);
      lVar26 = lVar26 + 1;
    } while (lVar26 != lVar3);
    puVar17 = (undefined8 *)0x10;
    lVar3 = lVar25;
    func_0x00010bf52a60();
  }
  _objc_release(lVar25);
  puVar5 = PTR_PTR_1126d8e68;
  _objc_alloc();
  puVar27 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bff4520();
  _objc_release(puVar27);
  puVar27 = PTR_PTR_1126d8e70;
  _objc_alloc();
  puVar24 = puVar23;
  func_0x00010bf51e00();
  puVar13 = puVar24;
  puVar14 = puVar5;
  func_0x00010bfff240();
  _objc_release(puVar24);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar23);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar16 = param_2;
    _objc_retain(puVar13);
    _objc_retain(puVar14);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar19;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lVar2 != 0) {
      do {
        lVar25 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar19);
          }
          puVar28 = *(undefined8 **)(lVar25 * 8);
          puVar10 = puVar28;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c0c55e0();
          _objc_release(puVar11);
          _objc_release(puVar10);
          if (puVar12 == param_2) {
            if (puVar13 == (undefined *)0x0 || puVar14 == (undefined *)0x0) {
              if (puVar17 == (undefined8 *)0x0) goto LAB_10801ffbc;
              puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99260();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *puVar17 = puVar1;
            }
            else {
              puVar17 = puVar28;
              func_0x00010c0c3fe0(puVar28);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar17;
              func_0x00010bf93e60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1b6b40();
              _objc_release(puVar10);
              _objc_release(puVar17);
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar28;
              func_0x00010bf93e60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1b64a0();
              _objc_release(puVar17);
              _objc_release(puVar28);
            }
            _objc_release(lVar19);
            goto LAB_1080200e8;
          }
LAB_10801ffbc:
          lVar25 = lVar25 + 1;
        } while (lVar2 != lVar25);
        lVar2 = lVar19;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar19);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar17 = puVar1;
LAB_1080200e8:
    _objc_release(puVar14);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
      return puVar13;
    }
    ___stack_chk_fail();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar1;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar23;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    _objc_release(puVar1);
    _objc_release(puVar13);
    puVar1 = puVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (puVar1 == (undefined *)0x0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar23 = (undefined *)0x0;
      do {
        puVar27 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar5);
          }
          uVar20 = *(ulong *)((long)puVar27 * 8);
          uVar21 = uVar20;
          func_0x00010c074780();
          if ((uVar21 & 1) == 0) {
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar20;
            func_0x00010bf529e0();
            puVar23 = puVar23 + uVar21;
            _objc_release(uVar20);
          }
          puVar27 = puVar27 + 1;
        } while (puVar1 != puVar27);
        puVar1 = puVar5;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      return puVar23;
    }
    ___stack_chk_fail();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar1 = puVar5;
    FUN_10801f1ac();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar5;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar23;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar27;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar24;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar27);
    _objc_release(puVar23);
    puVar23 = puVar13;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (puVar23 == (undefined *)0x0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar27 = (undefined *)0x0;
      do {
        puVar24 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar13);
          }
          uVar20 = *(ulong *)((long)puVar24 * 8);
          uVar21 = uVar20;
          func_0x00010c074780();
          if ((int)uVar21 != 0) {
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar21 = uVar20;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar20);
            uVar20 = uVar21;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar29 = uVar20;
            func_0x00010bf529e0();
            _objc_release(uVar20);
            if (uVar29 != 0) {
              uVar20 = 0;
              do {
                uVar29 = uVar21;
                func_0x00010c0ff660(uVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c296de0();
                _objc_release(uVar29);
                puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar1;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar14);
                puVar14 = puVar15;
                FUN_10801f33c();
                _objc_retainAutoreleasedReturnValue();
                if (puVar14 != (undefined *)0x0) {
                  puVar27 = puVar27 + 1;
                }
                _objc_release();
                _objc_release(puVar15);
                uVar20 = uVar20 + 1;
                uVar29 = uVar21;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar22 = uVar29;
                func_0x00010bf529e0();
                _objc_release(uVar29);
              } while (uVar20 < uVar22);
            }
            _objc_release(uVar21);
          }
          puVar24 = puVar24 + 1;
        } while (puVar24 != puVar23);
        puVar23 = puVar13;
        func_0x00010bf52a60();
      } while (puVar23 != (undefined *)0x0);
    }
    _objc_release(puVar13);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      return puVar27;
    }
    ___stack_chk_fail();
    _objc_retain();
    puVar1 = puVar5;
    func_0x00010c08fa60();
    if (puVar1 == (undefined *)0x0) {
      if (puVar16 == (undefined8 *)0x0) {
        puVar27 = (undefined *)0x0;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar27 = (undefined *)0x0;
        *puVar16 = puVar1;
      }
    }
    else {
      puVar27 = PTR_PTR_1126b25c0;
      _objc_alloc();
      func_0x00010c008360();
      if (puVar27 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126c7c50;
        _objc_alloc(PTR_PTR_1126c7c50);
        func_0x00010c029140();
        puVar23 = puVar1;
        func_0x00010bf220e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = puVar27;
        FUN_108022988(puVar27,puVar23);
        _objc_retainAutoreleasedReturnValue();
        if ((puVar16 != (undefined8 *)0x0) && (puVar1 != (undefined *)0x0)) {
          _objc_retainAutorelease(puVar1);
          *puVar16 = puVar1;
        }
        _objc_retain(puVar27);
        _objc_release(puVar1);
        _objc_release(puVar23);
      }
      _objc_release(puVar27);
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return puVar27;
}



/* Entry: 108020134; end: 1080202b3;  */

undefined * FUN_108020134(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    do {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar15 = *(ulong *)(lVar16 * 8);
        uVar4 = uVar15;
        func_0x00010c074780();
        if ((uVar4 & 1) == 0) {
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar15;
          func_0x00010bf529e0();
          puVar14 = puVar14 + uVar4;
          _objc_release(uVar15);
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar14;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = lVar3;
  FUN_10801f1ac();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar12;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar16;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar12);
  _objc_release(lVar1);
  lVar12 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar12 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    do {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar15 = *(ulong *)(lVar16 * 8);
        uVar4 = uVar15;
        func_0x00010c074780();
        if ((int)uVar4 != 0) {
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar15;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          uVar15 = uVar4;
          func_0x00010c0ff660();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar15;
          func_0x00010bf529e0();
          _objc_release(uVar15);
          if (uVar6 != 0) {
            uVar15 = 0;
            do {
              uVar6 = uVar4;
              func_0x00010c0ff660(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296de0();
              _objc_release(uVar6);
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              lVar9 = lVar8;
              FUN_10801f33c();
              _objc_retainAutoreleasedReturnValue();
              if (lVar9 != 0) {
                puVar14 = puVar14 + 1;
              }
              _objc_release();
              _objc_release(lVar8);
              uVar15 = uVar15 + 1;
              uVar6 = uVar4;
              func_0x00010c0ff660();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar6;
              func_0x00010bf529e0();
              _objc_release(uVar6);
            } while (uVar15 < uVar10);
          }
          _objc_release(uVar4);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar12);
      lVar12 = lVar5;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain();
    lVar1 = lVar3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      if (param_2 == (undefined8 *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar14 = (undefined *)0x0;
        *param_2 = puVar7;
      }
    }
    else {
      puVar14 = PTR_PTR_1126b25c0;
      _objc_alloc();
      func_0x00010c008360();
      if (puVar14 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126c7c50;
        _objc_alloc(PTR_PTR_1126c7c50);
        func_0x00010c029140();
        puVar11 = puVar7;
        func_0x00010bf220e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar14;
        FUN_108022988(puVar14,puVar11);
        _objc_retainAutoreleasedReturnValue();
        if ((param_2 != (undefined8 *)0x0) && (puVar7 != (undefined *)0x0)) {
          _objc_retainAutorelease(puVar7);
          *param_2 = puVar7;
        }
        _objc_retain(puVar14);
        _objc_release(puVar7);
        _objc_release(puVar11);
      }
      _objc_release(puVar14);
    }
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  return puVar14;
}



/* Entry: 1080202b4; end: 108020567;  */

undefined * FUN_1080202b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  FUN_10801f1ac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar4);
        }
        uVar15 = *(ulong *)(lVar13 * 8);
        uVar5 = uVar15;
        func_0x00010c074780();
        if ((int)uVar5 != 0) {
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar15;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          uVar15 = uVar5;
          func_0x00010c0ff660();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar15;
          func_0x00010bf529e0();
          _objc_release(uVar15);
          if (uVar6 != 0) {
            uVar15 = 0;
            do {
              uVar6 = uVar5;
              func_0x00010c0ff660(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296de0();
              _objc_release(uVar6);
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar1;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              lVar9 = lVar8;
              FUN_10801f33c();
              _objc_retainAutoreleasedReturnValue();
              if (lVar9 != 0) {
                puVar14 = puVar14 + 1;
              }
              _objc_release();
              _objc_release(lVar8);
              uVar15 = uVar15 + 1;
              uVar6 = uVar5;
              func_0x00010c0ff660();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar6;
              func_0x00010bf529e0();
              _objc_release(uVar6);
            } while (uVar15 < uVar10);
          }
          _objc_release(uVar5);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar3);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain();
    lVar2 = param_1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      if (param_2 == (undefined8 *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar14 = (undefined *)0x0;
        *param_2 = puVar7;
      }
    }
    else {
      puVar14 = PTR_PTR_1126b25c0;
      _objc_alloc();
      func_0x00010c008360();
      if (puVar14 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126c7c50;
        _objc_alloc(PTR_PTR_1126c7c50);
        func_0x00010c029140();
        puVar11 = puVar7;
        func_0x00010bf220e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar7 = puVar14;
        FUN_108022988(puVar14,puVar11);
        _objc_retainAutoreleasedReturnValue();
        if ((param_2 != (undefined8 *)0x0) && (puVar7 != (undefined *)0x0)) {
          _objc_retainAutorelease(puVar7);
          *param_2 = puVar7;
        }
        _objc_retain(puVar14);
        _objc_release(puVar7);
        _objc_release(puVar11);
      }
      _objc_release(puVar14);
    }
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  return puVar14;
}



/* Entry: 108020568; end: 108020693;  */

void FUN_108020568(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_2 == (undefined8 *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar4 = (undefined *)0x0;
      *param_2 = puVar3;
    }
  }
  else {
    puVar4 = PTR_PTR_1126b25c0;
    _objc_alloc();
    func_0x00010c008360();
    if (puVar4 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c7c50;
      _objc_alloc(PTR_PTR_1126c7c50);
      func_0x00010c029140();
      puVar2 = puVar3;
      func_0x00010bf220e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      FUN_108022988(puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      if ((param_2 != (undefined8 *)0x0) && (puVar3 != (undefined *)0x0)) {
        _objc_retainAutorelease(puVar3);
        *param_2 = puVar3;
      }
      _objc_retain(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108020694; end: 1080207d3;  */

undefined1 * FUN_108020694(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined8 unaff_d9;
  undefined1 *puStack_6e0;
  undefined *puStack_6d8;
  undefined1 *puStack_6d0;
  undefined1 *puStack_6c8;
  undefined8 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_5e8;
  undefined8 ***pppuStack_5a0;
  code *pcStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_4c8;
  undefined8 uStack_4c0;
  double dStack_4b8;
  undefined1 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        puVar10 = *(undefined1 **)(lStack_118 + lVar14 * 8);
        puVar1 = puVar10;
        func_0x00010c0c55e0();
        puVar12 = param_1;
        func_0x00010c0c55e0();
        if (puVar1 == puVar12) {
          func_0x00010c0c6c20();
          goto LAB_108020788;
        }
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      lVar15 = param_2;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  puVar10 = (undefined1 *)0x3;
LAB_108020788:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1080207d4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar12 = puVar1;
  func_0x00010bf52a60();
  if (puVar12 != (undefined1 *)0x0) {
    lVar15 = *plStack_250;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar15) {
          _objc_enumerationMutation(puVar1);
        }
        lVar14 = *(long *)(lStack_258 + (long)puVar10 * 8);
        lVar13 = lVar14;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 != 0) {
          lVar2 = lVar14;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf0b760();
          _objc_release(lVar2);
          _objc_release(lVar13);
          if ((int)lVar3 == 5) {
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c4bc0();
            _objc_release(lVar14);
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar12 != puVar10);
      puVar12 = puVar1;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_108020980;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  plStack_400 = (long *)0x0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  ppuStack_270 = &puStack_130;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010bf52a60();
  dVar16 = -1.0;
  if (puVar1 != (undefined1 *)0x0) {
    lVar15 = *plStack_400;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_400 != lVar15) {
          _objc_enumerationMutation(puVar4);
        }
        puVar9 = *(undefined1 **)(lStack_408 + (long)puVar12 * 8);
        puVar10 = puVar9;
        func_0x00010c278a40();
        if (((int)puVar10 == 1) && (puVar10 = puVar9, func_0x00010c074780(), (int)puVar10 == 0)) {
          _objc_retain(puVar9);
          _objc_release();
          if (puVar9 == (undefined1 *)0x0) {
            dVar16 = -1.0;
            goto LAB_108020bb8;
          }
          uStack_428 = 0;
          uStack_430 = 0;
          uStack_418 = 0;
          uStack_420 = 0;
          lStack_448 = 0;
          uStack_450 = 0;
          uStack_438 = 0;
          plStack_440 = (long *)0x0;
          puVar1 = puVar9;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar1;
          func_0x00010bf52a60();
          if (puVar12 == (undefined1 *)0x0) {
            dVar16 = 0.0;
            goto LAB_108020ba8;
          }
          lVar15 = *plStack_440;
          dVar16 = 0.0;
          unaff_d9 = 0x408f400000000000;
          goto LAB_108020b0c;
        }
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar1 = puVar4;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  goto LAB_108020bb0;
LAB_108020b0c:
  do {
    puVar10 = (undefined1 *)0x0;
    do {
      if (*plStack_440 != lVar15) {
        _objc_enumerationMutation(puVar1);
      }
      uVar11 = *(ulong *)(lStack_448 + (long)puVar10 * 8);
      uVar5 = uVar11;
      func_0x00010bfdda80();
      if ((int)uVar5 == 0) {
        dVar16 = -1.0;
        goto LAB_108020ba8;
      }
      func_0x00010c27c540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar11;
      func_0x00010bf8b160();
      dVar16 = dVar16 + (double)uVar5 / 1000.0;
      _objc_release(uVar11);
      puVar10 = puVar10 + 1;
    } while (puVar12 != puVar10);
    puVar12 = puVar1;
    func_0x00010bf52a60();
  } while (puVar12 != (undefined1 *)0x0);
LAB_108020ba8:
  _objc_release(puVar1);
  puVar4 = puVar9;
LAB_108020bb0:
  _objc_release();
LAB_108020bb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_458 = FUN_108020bf8;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  plStack_580 = (long *)0x0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_4c0 = unaff_d9;
  dStack_4b8 = dVar16;
  pppuStack_460 = &ppuStack_270;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar12 = puVar1;
  func_0x00010bf52a60();
  if (puVar12 != (undefined1 *)0x0) {
    lVar15 = *plStack_580;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_580 != lVar15) {
          _objc_enumerationMutation(puVar1);
        }
        lVar14 = *(long *)(lStack_588 + (long)puVar10 * 8);
        lVar13 = lVar14;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar13 != 0) {
          lVar2 = lVar14;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf0b760();
          _objc_release(lVar2);
          _objc_release(lVar13);
          if ((int)lVar3 == 5) {
            lVar15 = lVar14;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar15;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar14;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe0640();
            _objc_release(lVar2);
            _objc_release(lVar14);
            _objc_release(lVar13);
            _objc_release(lVar15);
            goto LAB_108020da4;
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar12 != puVar10);
      puVar12 = puVar1;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined1 *)0x0);
  }
LAB_108020da4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_6b0;
  pcStack_598 = FUN_108020df4;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  plStack_6a0 = (long *)0x0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  pppuStack_5a0 = &pppuStack_460;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf52a60();
  if (puVar12 != (undefined1 *)0x0) {
    lVar15 = *plStack_6a0;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_6a0 != lVar15) {
          _objc_enumerationMutation(puVar1);
        }
        lVar14 = *(long *)(lStack_6a8 + (long)puVar10 * 8);
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar14;
        func_0x00010c08fa60();
        _objc_release(lVar14);
        if (lVar13 == 0) {
          puVar12 = (undefined1 *)0x0;
          goto LAB_108020ed8;
        }
        puVar10 = puVar10 + 1;
      } while (puVar12 != puVar10);
      puVar12 = puVar1;
      puVar7 = &uStack_6b0;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined1 *)0x0);
  }
  puVar12 = (undefined1 *)0x1;
LAB_108020ed8:
  puVar10 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5e8) {
    ___stack_chk_fail();
    ppuVar6 = &puStack_6e0;
    pcStack_6b8 = FUN_108020f1c;
    puStack_6d0 = puVar12;
    puStack_6c8 = puVar1;
    pppuStack_6c0 = &pppuStack_5a0;
    _objc_retain(puVar7);
    puStack_6d8 = PTR_PTR_1126fc260;
    puStack_6e0 = puVar10;
    _objc_msgSendSuper2(&puStack_6e0,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined1 **)0x0) {
      puVar1 = (undefined1 *)puVar7;
      func_0x00010bf51e00();
      uVar8 = *(undefined8 *)((long)ppuVar6 + 8);
      *(undefined1 **)((long)ppuVar6 + 8) = puVar1;
      _objc_release(uVar8);
    }
    _objc_release(puVar7);
    return (undefined1 *)ppuVar6;
  }
  return puVar12;
}



/* Entry: 1080207d4; end: 10802097f;  */

undefined1 * FUN_1080207d4(undefined1 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  double dVar16;
  undefined8 unaff_d9;
  undefined1 *puStack_5c0;
  undefined *puStack_5b8;
  undefined1 *puStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 ***pppuStack_5a0;
  code *pcStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_4c8;
  undefined1 ***pppuStack_480;
  code *pcStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_3a8;
  undefined8 uStack_3a0;
  double dStack_398;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_1a8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar13 = puVar1;
  func_0x00010bf52a60();
  if (puVar13 != (undefined1 *)0x0) {
    lVar14 = *plStack_130;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        lVar11 = *(long *)(lStack_138 + (long)puVar15 * 8);
        lVar2 = lVar11;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar11;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf0b760();
          _objc_release(lVar3);
          _objc_release(lVar2);
          if ((int)lVar4 == 5) {
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c4bc0();
            _objc_release(lVar11);
          }
        }
        puVar15 = puVar15 + 1;
      } while (puVar13 != puVar15);
      puVar13 = puVar1;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108020980;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x00010bf52a60();
  dVar16 = -1.0;
  if (puVar1 != (undefined1 *)0x0) {
    lVar14 = *plStack_2e0;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_2e0 != lVar14) {
          _objc_enumerationMutation(puVar5);
        }
        puVar10 = *(undefined1 **)(lStack_2e8 + (long)puVar13 * 8);
        puVar15 = puVar10;
        func_0x00010c278a40();
        if (((int)puVar15 == 1) && (puVar15 = puVar10, func_0x00010c074780(), (int)puVar15 == 0)) {
          _objc_retain(puVar10);
          _objc_release();
          if (puVar10 == (undefined1 *)0x0) {
            dVar16 = -1.0;
            goto LAB_108020bb8;
          }
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          lStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          plStack_320 = (long *)0x0;
          puVar1 = puVar10;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar1;
          func_0x00010bf52a60();
          if (puVar13 == (undefined1 *)0x0) {
            dVar16 = 0.0;
            goto LAB_108020ba8;
          }
          lVar14 = *plStack_320;
          dVar16 = 0.0;
          unaff_d9 = 0x408f400000000000;
          goto LAB_108020b0c;
        }
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar1 = puVar5;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  goto LAB_108020bb0;
LAB_108020b0c:
  do {
    puVar15 = (undefined1 *)0x0;
    do {
      if (*plStack_320 != lVar14) {
        _objc_enumerationMutation(puVar1);
      }
      uVar12 = *(ulong *)(lStack_328 + (long)puVar15 * 8);
      uVar6 = uVar12;
      func_0x00010bfdda80();
      if ((int)uVar6 == 0) {
        dVar16 = -1.0;
        goto LAB_108020ba8;
      }
      func_0x00010c27c540();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar12;
      func_0x00010bf8b160();
      dVar16 = dVar16 + (double)uVar6 / 1000.0;
      _objc_release(uVar12);
      puVar15 = puVar15 + 1;
    } while (puVar13 != puVar15);
    puVar13 = puVar1;
    func_0x00010bf52a60();
  } while (puVar13 != (undefined1 *)0x0);
LAB_108020ba8:
  _objc_release(puVar1);
  puVar5 = puVar10;
LAB_108020bb0:
  _objc_release();
LAB_108020bb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_108020bf8;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_3a0 = unaff_d9;
  dStack_398 = dVar16;
  ppuStack_340 = &puStack_150;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar13 = puVar1;
  func_0x00010bf52a60();
  if (puVar13 != (undefined1 *)0x0) {
    lVar14 = *plStack_460;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_460 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        lVar11 = *(long *)(lStack_468 + (long)puVar15 * 8);
        lVar2 = lVar11;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar11;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf0b760();
          _objc_release(lVar3);
          _objc_release(lVar2);
          if ((int)lVar4 == 5) {
            lVar14 = lVar11;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar14;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar11;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe0640();
            _objc_release(lVar3);
            _objc_release(lVar11);
            _objc_release(lVar2);
            _objc_release(lVar14);
            goto LAB_108020da4;
          }
        }
        puVar15 = puVar15 + 1;
      } while (puVar13 != puVar15);
      puVar13 = puVar1;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined1 *)0x0);
  }
LAB_108020da4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_590;
  pcStack_478 = FUN_108020df4;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  plStack_580 = (long *)0x0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  pppuStack_480 = &ppuStack_340;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bf52a60();
  if (puVar13 != (undefined1 *)0x0) {
    lVar14 = *plStack_580;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_580 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        lVar11 = *(long *)(lStack_588 + (long)puVar15 * 8);
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar11;
        func_0x00010c08fa60();
        _objc_release(lVar11);
        if (lVar2 == 0) {
          puVar13 = (undefined1 *)0x0;
          goto LAB_108020ed8;
        }
        puVar15 = puVar15 + 1;
      } while (puVar13 != puVar15);
      puVar13 = puVar1;
      puVar8 = &uStack_590;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined1 *)0x0);
  }
  puVar13 = (undefined1 *)0x1;
LAB_108020ed8:
  puVar15 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_5c0;
    pcStack_598 = FUN_108020f1c;
    puStack_5b0 = puVar13;
    puStack_5a8 = puVar1;
    pppuStack_5a0 = &pppuStack_480;
    _objc_retain(puVar8);
    puStack_5b8 = PTR_PTR_1126fc260;
    puStack_5c0 = puVar15;
    _objc_msgSendSuper2(&puStack_5c0,PTR_s_init_1125d9248);
    if (ppuVar7 != (undefined1 **)0x0) {
      puVar1 = (undefined1 *)puVar8;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)ppuVar7 + 8);
      *(undefined1 **)((long)ppuVar7 + 8) = puVar1;
      _objc_release(uVar9);
    }
    _objc_release(puVar8);
    return (undefined1 *)ppuVar7;
  }
  return puVar13;
}



/* Entry: 108020980; end: 108020bf7;  */

undefined1 * FUN_108020980(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  double dVar16;
  undefined8 unaff_d9;
  undefined1 *puStack_480;
  undefined *puStack_478;
  undefined1 *puStack_470;
  undefined1 *puStack_468;
  undefined1 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined8 uStack_260;
  double dStack_258;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = puVar15;
  func_0x00010bf52a60();
  dVar16 = -1.0;
  if (puVar1 != (undefined1 *)0x0) {
    lVar12 = *plStack_1a0;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(puVar15);
        }
        puVar10 = *(undefined1 **)(lStack_1a8 + (long)puVar14 * 8);
        puVar2 = puVar10;
        func_0x00010c278a40();
        if (((int)puVar2 == 1) && (puVar2 = puVar10, func_0x00010c074780(), (int)puVar2 == 0)) {
          _objc_retain(puVar10);
          _objc_release();
          if (puVar10 == (undefined1 *)0x0) {
            dVar16 = -1.0;
            goto LAB_108020bb8;
          }
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          puVar1 = puVar10;
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar1;
          func_0x00010bf52a60();
          if (puVar14 == (undefined1 *)0x0) {
            dVar16 = 0.0;
            goto LAB_108020ba8;
          }
          lVar12 = *plStack_1e0;
          dVar16 = 0.0;
          unaff_d9 = 0x408f400000000000;
          goto LAB_108020b0c;
        }
        puVar14 = puVar14 + 1;
      } while (puVar1 != puVar14);
      puVar1 = puVar15;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  goto LAB_108020bb0;
LAB_108020b0c:
  do {
    puVar15 = (undefined1 *)0x0;
    do {
      if (*plStack_1e0 != lVar12) {
        _objc_enumerationMutation(puVar1);
      }
      uVar13 = *(ulong *)(lStack_1e8 + (long)puVar15 * 8);
      uVar3 = uVar13;
      func_0x00010bfdda80();
      if ((int)uVar3 == 0) {
        dVar16 = -1.0;
        goto LAB_108020ba8;
      }
      func_0x00010c27c540();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010bf8b160();
      dVar16 = dVar16 + (double)uVar3 / 1000.0;
      _objc_release(uVar13);
      puVar15 = puVar15 + 1;
    } while (puVar14 != puVar15);
    puVar14 = puVar1;
    func_0x00010bf52a60();
  } while (puVar14 != (undefined1 *)0x0);
LAB_108020ba8:
  _objc_release(puVar1);
  puVar15 = puVar10;
LAB_108020bb0:
  _objc_release();
LAB_108020bb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar15;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_108020bf8;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_260 = unaff_d9;
  dStack_258 = dVar16;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar15;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar14 = puVar1;
  func_0x00010bf52a60();
  if (puVar14 != (undefined1 *)0x0) {
    lVar12 = *plStack_320;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar12) {
          _objc_enumerationMutation(puVar1);
        }
        lVar11 = *(long *)(lStack_328 + (long)puVar15 * 8);
        lVar4 = lVar11;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = lVar11;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf0b760();
          _objc_release(lVar5);
          _objc_release(lVar4);
          if ((int)lVar6 == 5) {
            lVar12 = lVar11;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar12;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar11;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe0640();
            _objc_release(lVar5);
            _objc_release(lVar11);
            _objc_release(lVar4);
            _objc_release(lVar12);
            goto LAB_108020da4;
          }
        }
        puVar15 = puVar15 + 1;
      } while (puVar14 != puVar15);
      puVar14 = puVar1;
      func_0x00010bf52a60();
    } while (puVar14 != (undefined1 *)0x0);
  }
LAB_108020da4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_450;
  pcStack_338 = FUN_108020df4;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  ppuStack_340 = &puStack_200;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bf52a60();
  if (puVar14 != (undefined1 *)0x0) {
    lVar12 = *plStack_440;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_440 != lVar12) {
          _objc_enumerationMutation(puVar1);
        }
        lVar11 = *(long *)(lStack_448 + (long)puVar15 * 8);
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar11;
        func_0x00010c08fa60();
        _objc_release(lVar11);
        if (lVar4 == 0) {
          puVar14 = (undefined1 *)0x0;
          goto LAB_108020ed8;
        }
        puVar15 = puVar15 + 1;
      } while (puVar14 != puVar15);
      puVar14 = puVar1;
      puVar8 = &uStack_450;
      func_0x00010bf52a60();
    } while (puVar14 != (undefined1 *)0x0);
  }
  puVar14 = (undefined1 *)0x1;
LAB_108020ed8:
  puVar15 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_480;
    pcStack_458 = FUN_108020f1c;
    puStack_470 = puVar14;
    puStack_468 = puVar1;
    pppuStack_460 = &ppuStack_340;
    _objc_retain(puVar8);
    puStack_478 = PTR_PTR_1126fc260;
    puStack_480 = puVar15;
    _objc_msgSendSuper2(&puStack_480,PTR_s_init_1125d9248);
    if (ppuVar7 != (undefined1 **)0x0) {
      puVar1 = (undefined1 *)puVar8;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)ppuVar7 + 8);
      *(undefined1 **)((long)ppuVar7 + 8) = puVar1;
      _objc_release(uVar9);
    }
    _objc_release(puVar8);
    return (undefined1 *)ppuVar7;
  }
  return puVar14;
}



/* Entry: 108020bf8; end: 108020df3;  */

undefined1 * FUN_108020bf8(undefined1 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = puVar1;
  func_0x00010bf52a60();
  if (puVar8 != (undefined1 *)0x0) {
    lVar10 = *plStack_130;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        lVar9 = *(long *)(lStack_138 + (long)puVar11 * 8);
        lVar2 = lVar9;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar9;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf0b760();
          _objc_release(lVar3);
          _objc_release(lVar2);
          if ((int)lVar4 == 5) {
            lVar10 = lVar9;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar10;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a5040();
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar9;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe0640();
            _objc_release(lVar3);
            _objc_release(lVar9);
            _objc_release(lVar2);
            _objc_release(lVar10);
            goto LAB_108020da4;
          }
        }
        puVar11 = puVar11 + 1;
      } while (puVar8 != puVar11);
      puVar8 = puVar1;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined1 *)0x0);
  }
LAB_108020da4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  pcStack_148 = FUN_108020df4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf52a60();
  if (puVar8 != (undefined1 *)0x0) {
    lVar10 = *plStack_250;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        lVar9 = *(long *)(lStack_258 + (long)puVar11 * 8);
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar9;
        func_0x00010c08fa60();
        _objc_release(lVar9);
        if (lVar2 == 0) {
          puVar8 = (undefined1 *)0x0;
          goto LAB_108020ed8;
        }
        puVar11 = puVar11 + 1;
      } while (puVar8 != puVar11);
      puVar8 = puVar1;
      puVar6 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined1 *)0x0);
  }
  puVar8 = (undefined1 *)0x1;
LAB_108020ed8:
  puVar11 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    ppuVar5 = &puStack_290;
    pcStack_268 = FUN_108020f1c;
    puStack_280 = puVar8;
    puStack_278 = puVar1;
    ppuStack_270 = &puStack_150;
    _objc_retain(puVar6);
    puStack_288 = PTR_PTR_1126fc260;
    puStack_290 = puVar11;
    _objc_msgSendSuper2(&puStack_290,PTR_s_init_1125d9248);
    if (ppuVar5 != (undefined1 **)0x0) {
      puVar1 = (undefined1 *)puVar6;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)((long)ppuVar5 + 8);
      *(undefined1 **)((long)ppuVar5 + 8) = puVar1;
      _objc_release(uVar7);
    }
    _objc_release(puVar6);
    return (undefined1 *)ppuVar5;
  }
  return puVar8;
}



/* Entry: 108020df4; end: 108020f1b;  */

undefined1 * FUN_108020df4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = *(long *)(lStack_118 + lVar9 * 8);
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        _objc_release(lVar2);
        if (lVar3 == 0) {
          puVar7 = (undefined1 *)0x0;
          goto LAB_108020ed8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar7 = (undefined1 *)0x1;
LAB_108020ed8:
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_150;
  pcStack_128 = FUN_108020f1c;
  puStack_140 = puVar7;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_148 = PTR_PTR_1126fc260;
  lStack_150 = lVar1;
  _objc_msgSendSuper2(&lStack_150,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    puVar7 = (undefined1 *)puVar5;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)plVar4 + 8);
    *(undefined1 **)((long)plVar4 + 8) = puVar7;
    _objc_release(uVar6);
  }
  _objc_release(puVar5);
  return (undefined1 *)plVar4;
}



/* Entry: 108020f1c; end: 108020f93; -[SCMemoriesSnapDocPlaybackLayerIndexMap initWithAssetPlaybackLayerIndexMap:] */

undefined1 * FUN_108020f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc260;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108020f94; end: 108020fb7; -[SCMemoriesSnapDocPlaybackLayerIndexMap copyWithZone:] */

undefined8 FUN_108020f94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108020fb8; end: 108020fbf; -[SCMemoriesSnapDocPlaybackLayerIndexMap assetPlaybackLayerIndexMap] */

undefined8 FUN_108020fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108020fc0; end: 108020fcb; -[SCMemoriesSnapDocPlaybackLayerIndexMap .cxx_destruct] */

void FUN_108020fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108020fcc; end: 108021077; -[SCMemoriesSnapDocMediaIndexLookupTable initWithClipLevelPlaybackLayersList:globalLevelPlaybackLayerIndexMap:] */

undefined1 *
FUN_108020fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc268;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108021078; end: 10802107f; -[SCMemoriesSnapDocMediaIndexLookupTable clipLevelPlaybackLayersList] */

undefined8 FUN_108021078(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108021080; end: 108021087; -[SCMemoriesSnapDocMediaIndexLookupTable globalLevelPlaybackLayerIndexMap] */

undefined8 FUN_108021080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108021088; end: 1080210b7; -[SCMemoriesSnapDocMediaIndexLookupTable .cxx_destruct] */

void FUN_108021088(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080210b8; end: 1080210c3; -[SCLegacySpectaclesTooltipsServices .cxx_destruct] */

void FUN_1080210b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080210c4; end: 1080210cf; -[SCMemoriesSnapDocSaveServices .cxx_destruct] */

void FUN_1080210c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080210d0; end: 108021677; -[SCMemoriesSaveData initWithSnap:isEdit:isAutoSave:timeRanges:isPrivate:isFromCameraRoll:savingEventId:captureSessionId:assetIdByMediaId:entryId:savingAsDraftForRegularSnap:savingAsDirectorModeDraft:entryType:entrySource:isTemporary:title:subtitle:shouldOnlyPersistLocally:cameraRollId:clientProcessingBitMaskType:priority:createdFromSnapIds:createdFromCameraRollItemIds:templateId:collageUCOLensId:snapIdToReplace:snapIndexToInsert:featuredExpirationTimeUtc:featuredStoryTemplateName:snapId:groupName:snapCreationDate:videoCreateSessionId:externalId:originalEntryType:] */

undefined8 *
FUN_1080210d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_19);
  _objc_retain(param_20);
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
  puStack_70 = PTR_PTR_1126fc280;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xd) = param_13._1_1_;
    puVar1[8] = param_15;
    puVar1[9] = param_16;
    *(undefined1 *)((long)puVar1 + 0xe) = param_17;
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = param_21;
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_33;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_34;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_36;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_37;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_38;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    puVar1[0x1c] = param_39;
  }
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
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108021678; end: 10802167f; -[SCMemoriesSaveData snap] */

undefined8 FUN_108021678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108021680; end: 108021687; -[SCMemoriesSaveData isEdit] */

undefined1 FUN_108021680(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108021688; end: 10802168f; -[SCMemoriesSaveData isAutoSave] */

undefined1 FUN_108021688(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108021690; end: 108021697; -[SCMemoriesSaveData timeRanges] */

undefined8 FUN_108021690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108021698; end: 10802169f; -[SCMemoriesSaveData isPrivate] */

undefined1 FUN_108021698(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1080216a0; end: 1080216a7; -[SCMemoriesSaveData isFromCameraRoll] */

undefined1 FUN_1080216a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1080216a8; end: 1080216af; -[SCMemoriesSaveData savingEventId] */

undefined8 FUN_1080216a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080216b0; end: 1080216b7; -[SCMemoriesSaveData captureSessionId] */

undefined8 FUN_1080216b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1080216b8; end: 1080216bf; -[SCMemoriesSaveData assetIdByMediaId] */

undefined8 FUN_1080216b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1080216c0; end: 1080216c7; -[SCMemoriesSaveData entryId] */

undefined8 FUN_1080216c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1080216c8; end: 1080216cf; -[SCMemoriesSaveData savingAsDraftForRegularSnap] */

undefined1 FUN_1080216c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1080216d0; end: 1080216d7; -[SCMemoriesSaveData savingAsDirectorModeDraft] */

undefined1 FUN_1080216d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1080216d8; end: 1080216df; -[SCMemoriesSaveData entryType] */

undefined8 FUN_1080216d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1080216e0; end: 1080216e7; -[SCMemoriesSaveData entrySource] */

undefined8 FUN_1080216e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1080216e8; end: 1080216ef; -[SCMemoriesSaveData isTemporary] */

undefined1 FUN_1080216e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1080216f0; end: 1080216f7; -[SCMemoriesSaveData title] */

undefined8 FUN_1080216f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1080216f8; end: 1080216ff; -[SCMemoriesSaveData subtitle] */

undefined8 FUN_1080216f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108021700; end: 108021707; -[SCMemoriesSaveData shouldOnlyPersistLocally] */

undefined1 FUN_108021700(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 108021708; end: 10802170f; -[SCMemoriesSaveData cameraRollId] */

undefined8 FUN_108021708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108021710; end: 108021717; -[SCMemoriesSaveData clientProcessingBitMaskType] */

undefined8 FUN_108021710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108021718; end: 10802171f; -[SCMemoriesSaveData priority] */

undefined8 FUN_108021718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108021720; end: 108021727; -[SCMemoriesSaveData createdFromSnapIds] */

undefined8 FUN_108021720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108021728; end: 10802172f; -[SCMemoriesSaveData createdFromCameraRollItemIds] */

undefined8 FUN_108021728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108021730; end: 108021737; -[SCMemoriesSaveData templateId] */

undefined8 FUN_108021730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108021738; end: 10802173f; -[SCMemoriesSaveData collageUCOLensId] */

undefined8 FUN_108021738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108021740; end: 108021747; -[SCMemoriesSaveData snapIdToReplace] */

undefined8 FUN_108021740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108021748; end: 10802174f; -[SCMemoriesSaveData snapIndexToInsert] */

undefined8 FUN_108021748(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108021750; end: 108021757; -[SCMemoriesSaveData featuredExpirationTimeUtc] */

undefined8 FUN_108021750(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108021758; end: 10802175f; -[SCMemoriesSaveData featuredStoryTemplateName] */

undefined8 FUN_108021758(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108021760; end: 108021767; -[SCMemoriesSaveData snapId] */

undefined8 FUN_108021760(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108021768; end: 10802176f; -[SCMemoriesSaveData groupName] */

undefined8 FUN_108021768(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108021770; end: 108021777; -[SCMemoriesSaveData snapCreationDate] */

undefined8 FUN_108021770(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108021778; end: 10802177f; -[SCMemoriesSaveData videoCreateSessionId] */

undefined8 FUN_108021778(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108021780; end: 108021787; -[SCMemoriesSaveData externalId] */

undefined8 FUN_108021780(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108021788; end: 10802178f; -[SCMemoriesSaveData originalEntryType] */

undefined8 FUN_108021788(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108021790; end: 1080218c7; -[SCMemoriesSaveData .cxx_destruct] */

void FUN_108021790(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080218c8; end: 10802197b; -[SCMemoriesSaveStoryMetadata initWithStoryId:storyName:storyType:] */

undefined1 *
FUN_1080218c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fc288;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10802197c; end: 108021983; -[SCMemoriesSaveStoryMetadata storyId] */

undefined8 FUN_10802197c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108021984; end: 10802198b; -[SCMemoriesSaveStoryMetadata storyName] */

undefined8 FUN_108021984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10802198c; end: 108021993; -[SCMemoriesSaveStoryMetadata storyType] */

undefined8 FUN_10802198c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108021994; end: 1080219c3; -[SCMemoriesSaveStoryMetadata .cxx_destruct] */

void FUN_108021994(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


