/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f06ec8; end: 104f06f03; -[SCMemoriesChatMediaPlaybackParticipants .cxx_destruct] */

void FUN_104f06ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f06f04; end: 104f06fff; -[SCFriendshipFlashbacksFriendProfileSectionActionHandler initWithPlaybackScopeExposer:chatIdentifier:logger:profileSessionId:] */

undefined1 *
FUN_104f06f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4fa0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f07000; end: 104f07257; -[SCFriendshipFlashbacksFriendProfileSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_104f07000(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar7 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0720c0();
  _objc_release(uVar7);
  if ((int)uVar6 != 0) {
    uVar1 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afdb8;
    _objc_opt_class(PTR_PTR_1126afdb8);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar7 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar1);
    uVar1 = uVar7;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126b02a8;
    _objc_opt_class(PTR_PTR_1126b02a8);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar7 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar1);
    uVar1 = uVar7;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126b2408;
    _objc_opt_class(PTR_PTR_1126b2408);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar7 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar1);
    if (uVar7 != 0) {
      puVar2 = PTR_PTR_1126b2410;
      _objc_alloc(PTR_PTR_1126b2410);
      lVar4 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar4);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033fa0(puVar2);
      _objc_release(puVar5);
      _objc_release(lVar4);
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        *(undefined1 *)(param_1 + 8) = 1;
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
        func_0x00010c0ac580(*(undefined8 *)(param_1 + 0x28));
      }
      _objc_release(puVar2);
    }
    _objc_release(uVar7);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return uVar6;
  }
  ___stack_chk_fail();
  uVar6 = *(ulong *)(param_4 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  _objc_release();
  if (uVar6 != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18);
    func_0x00010c12e1c0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(undefined1 *)(param_4 + 8) = 0;
  }
  return uVar7;
}



/* Entry: 104f07258; end: 104f072a3; -[SCFriendshipFlashbacksFriendProfileSectionActionHandler playbackScopeDidTearDownWithScope:] */

void FUN_104f07258(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 104f072a4; end: 104f072bb; -[SCFriendshipFlashbacksFriendProfileSectionActionHandler presentingViewController] */

void FUN_104f072a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f072bc; end: 104f072c7; -[SCFriendshipFlashbacksFriendProfileSectionActionHandler setPresentingViewController:] */

void FUN_104f072bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104f072c8; end: 104f07317; -[SCFriendshipFlashbacksFriendProfileSectionActionHandler .cxx_destruct] */

void FUN_104f072c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f07318; end: 104f074c7; -[SCFriendshipFlashbacksFriendProfileSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07318(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f074c8;
  puStack_78 = &UNK_11085a8b8;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_112716bf8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104f074c8; end: 104f07547;  */

void FUN_104f074c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f07548; end: 104f07847; -[SCFriendshipFlashbacksFriendProfileSectionEntryPoint _dataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07548(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  
  lVar18 = (long)_DAT_112716bfc;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar17 = (undefined *)0x0;
  if ((int)lVar3 != 0) {
    lVar1 = param_1 + _DAT_112716bf8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c08fa60();
    puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      func_0x000108dfde0c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar17,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
  puVar4 = PTR_PTR_1126b2418;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112716c00;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bfba7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b01c0;
  lVar2 = param_1 + _DAT_112716bf8;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260(puVar8,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112716c04;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bdefb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112716c08;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1 + lVar18;
  _objc_loadWeakRetained();
  uVar15 = uVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf1f440();
  func_0x00010c0166c0(puVar4,param_2,lVar5,puVar8,lVar9,lVar10,lVar13,puVar17,uVar16 & 0xff);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f07848; end: 104f07933; -[SCFriendshipFlashbacksFriendProfileSectionEntryPoint _section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2420;
  _objc_alloc();
  func_0x00010c04f820();
  func_0x00010bdf7e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9240(puVar1,param_2,param_1);
  _objc_release(param_1);
  ppuStack_38 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f12398;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1,param_2,puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b2428;
    _objc_alloc(PTR_PTR_1126b2428);
    puVar6 = PTR_PTR_1126b01c0;
    uVar9 = *(undefined8 *)(puVar2 + _DAT_112716c0c);
    lVar10 = (long)_DAT_112716bf8;
    puVar3 = puVar2 + lVar10;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bdefb00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar2 + lVar10;
    _objc_loadWeakRetained(puVar2);
    puVar8 = puVar2;
    func_0x00010c117240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036f80(puVar1,param_2,uVar9,puVar6,puVar7,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f07934; end: 104f07a67; -[SCFriendshipFlashbacksFriendProfileSectionEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b2428;
  _objc_alloc(PTR_PTR_1126b2428);
  puVar5 = PTR_PTR_1126b01c0;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112716c0c);
  lVar8 = (long)_DAT_112716bf8;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bdefb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036f80(puVar1,param_2,uVar7,puVar5,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f07a68; end: 104f07b1b; -[SCFriendshipFlashbacksFriendProfileSectionEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07a68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b2430;
  _objc_alloc(PTR_PTR_1126b2430);
  param_1 = param_1 + _DAT_112716c10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018080(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f07b1c; end: 104f07bab; -[SCFriendshipFlashbacksFriendProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07b1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716c0c,0);
  _objc_destroyWeak(param_1 + _DAT_112716c10);
  _objc_destroyWeak(param_1 + _DAT_112716c04);
  _objc_destroyWeak(param_1 + _DAT_112716c00);
  _objc_destroyWeak(param_1 + _DAT_112716c18);
  _objc_destroyWeak(param_1 + _DAT_112716bfc);
  _objc_destroyWeak(param_1 + _DAT_112716c14);
  _objc_destroyWeak(param_1 + _DAT_112716c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716bf8);
  return;
}



/* Entry: 104f07bac; end: 104f07d5b; -[SCFriendshipFlashbacksGroupProfileSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07bac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f07d5c;
  puStack_78 = &UNK_11085a8b8;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_112716c1c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104f07d5c; end: 104f07ddb;  */

void FUN_104f07d5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f07ddc; end: 104f080f3; -[SCFriendshipFlashbacksGroupProfileSectionEntryPoint _dataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f07ddc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  
  lVar15 = (long)_DAT_112716c20;
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar16 = (undefined *)0x0;
  if ((int)lVar3 != 0) {
    lVar1 = param_1 + _DAT_112716c24;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112716c1c;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf85ee0(lVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = lVar6;
    func_0x00010c08fa60();
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      func_0x000108dfddf4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar16,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    _objc_release(lVar6);
  }
  puVar7 = PTR_PTR_1126b2418;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112716c28;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bfba7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b01c0;
  lVar2 = param_1 + _DAT_112716c1c;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf680(puVar8,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112716c2c;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bdefb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112716c30;
  _objc_loadWeakRetained(lVar4);
  lVar11 = lVar4;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1 + lVar15;
  _objc_loadWeakRetained();
  uVar13 = uVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf1f440();
  func_0x00010c0166c0(puVar7,param_2,lVar5,puVar8,lVar9,lVar10,lVar11,puVar16,uVar14 & 0xff);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104f080f4; end: 104f081df; -[SCFriendshipFlashbacksGroupProfileSectionEntryPoint _section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f080f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2420;
  _objc_alloc();
  func_0x00010c04f820();
  func_0x00010bdf7e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9240(puVar1,param_2,param_1);
  _objc_release(param_1);
  ppuStack_38 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f12398;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1,param_2,puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b2428;
    _objc_alloc(PTR_PTR_1126b2428);
    puVar5 = PTR_PTR_1126b01c0;
    uVar8 = *(undefined8 *)(puVar2 + _DAT_112716c34);
    lVar9 = (long)_DAT_112716c1c;
    puVar3 = puVar2 + lVar9;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcf680(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bdefb00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar2 + lVar9;
    _objc_loadWeakRetained(puVar2);
    puVar7 = puVar2;
    func_0x00010c117240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036f80(puVar1,param_2,uVar8,puVar5,puVar6,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f081e0; end: 104f082f3; -[SCFriendshipFlashbacksGroupProfileSectionEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f081e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b2428;
  _objc_alloc(PTR_PTR_1126b2428);
  puVar4 = PTR_PTR_1126b01c0;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112716c34);
  lVar7 = (long)_DAT_112716c1c;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf680(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bdefb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036f80(puVar1,param_2,uVar6,puVar4,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f082f4; end: 104f083a7; -[SCFriendshipFlashbacksGroupProfileSectionEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f082f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b2430;
  _objc_alloc(PTR_PTR_1126b2430);
  param_1 = param_1 + _DAT_112716c38;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018080(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f083a8; end: 104f08443; -[SCFriendshipFlashbacksGroupProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f083a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716c34,0);
  _objc_destroyWeak(param_1 + _DAT_112716c24);
  _objc_destroyWeak(param_1 + _DAT_112716c38);
  _objc_destroyWeak(param_1 + _DAT_112716c2c);
  _objc_destroyWeak(param_1 + _DAT_112716c28);
  _objc_destroyWeak(param_1 + _DAT_112716c40);
  _objc_destroyWeak(param_1 + _DAT_112716c20);
  _objc_destroyWeak(param_1 + _DAT_112716c3c);
  _objc_destroyWeak(param_1 + _DAT_112716c30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716c1c);
  return;
}



/* Entry: 104f08444; end: 104f084b7; -[SCMemoriesFriendshipFlashbackProfileLogger initWithGraphene:] */

undefined1 * FUN_104f08444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4fa8;
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



/* Entry: 104f084b8; end: 104f0850f; -[SCMemoriesFriendshipFlashbackProfileLogger logThumbnailDisplay] */

void FUN_104f084b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfac0c0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  *(undefined1 *)(param_1 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f08510; end: 104f08553; -[SCMemoriesFriendshipFlashbackProfileLogger logPlaybackAttempt] */

void FUN_104f08510(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfabe80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f08554; end: 104f0855f; -[SCMemoriesFriendshipFlashbackProfileLogger .cxx_destruct] */

void FUN_104f08554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f08560; end: 104f0857b; -[SCMemoriesFriendshipFlashbackProfileSection sectionInsets] */

void FUN_104f08560(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 104f0857c; end: 104f086db; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider initWithFriendshipFlashbacksDataManager:chatIdentifier:thumbnailProvider:logger:flashbackId:overrideTitle:forceSyncIfMissing:] */

undefined1 *
FUN_104f0857c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e4fb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x40) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f086dc; end: 104f086e7; +[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider announcerIdentifier] */

undefined ** FUN_104f086dc(void)

{
  return &PTR____CFConstantStringClassReference_110dbaa38;
}



/* Entry: 104f086e8; end: 104f086ef; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider addListener:] */

void FUN_104f086e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104f086f0; end: 104f086f7; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider removeListener:] */

void FUN_104f086f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104f086f8; end: 104f0872f; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider setSectionDataModel:] */

void FUN_104f086f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed5eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContainerCellViewModel_112593150);
  return;
}



/* Entry: 104f08730; end: 104f0873f; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider numberOfItemsInSection:] */

bool FUN_104f08730(long param_1)

{
  return *(long *)(param_1 + 0x50) != 0;
}



/* Entry: 104f08740; end: 104f0880b; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104f08740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104f087cc;
  puStack_30 = &UNK_110845ab0;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x000100504554(param_3,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104f0880c; end: 104f0888f; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104f0880c(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar2);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104f089c0;
    puStack_90 = &UNK_110845ae0;
    puVar8 = auStack_80;
    _objc_copyWeak(auStack_88);
    ppuVar3 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dbaa58;
    ppuVar4 = ppuVar3;
    _objc_retainBlock();
    ppuStack_70 = ppuVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_88);
    puVar5 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume();
      _objc_retain(puVar8);
      puVar5 = puVar5 + 0x20;
      _objc_loadWeakRetained();
      puVar2 = PTR_PTR_1126b2440;
      if (puVar5 != (undefined1 *)0x0) {
        _objc_retain(puVar8);
        _objc_opt_class(puVar2);
        puVar6 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar2);
        puVar1 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar1 = (undefined1 *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar8);
        uVar7 = *(undefined8 *)(puVar5 + 0x10);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214300(puVar1);
        _objc_release(puVar1);
        _objc_release(uVar7);
      }
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f08890; end: 104f089bf; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104f08890(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
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
  pcStack_68 = FUN_104f089c0;
  puStack_60 = &UNK_110845ae0;
  puVar8 = auStack_50;
  _objc_copyWeak(auStack_58);
  ppuVar2 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dbaa58;
  ppuVar3 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_58);
  puVar5 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume();
  _objc_retain(puVar8);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126b2440;
  if (puVar5 != (undefined1 *)0x0) {
    _objc_retain(puVar8);
    _objc_opt_class(puVar4);
    puVar6 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar4);
    puVar1 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar8);
    uVar7 = *(undefined8 *)(puVar5 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214300(puVar1);
    _objc_release(puVar1);
    _objc_release(uVar7);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 104f089c0; end: 104f08a77;  */

void FUN_104f089c0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b2440;
  if (param_1 != 0) {
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
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214300(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f08a78; end: 104f08aab; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider _updateContainerCellViewModel] */

void FUN_104f08a78(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x48));
  func_0x00010bee46c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be66210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeFlashbacksDataModelUpdat_112577220);
  return;
}



/* Entry: 104f08aac; end: 104f08b6b; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider _updateWithContainerCellViewModel:] */

void FUN_104f08aac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x50);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_104f08b58;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x58;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  _objc_release(uVar3);
LAB_104f08b58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f08b6c; end: 104f08c9b; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider _observeFlashbacksDataModelUpdate] */

void FUN_104f08b6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104f08c9c; end: 104f08ce3;  */

void FUN_104f08c9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29e20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f08ce4; end: 104f08eeb; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider _handleFlashbacksDataModelUpdate:] */

void FUN_104f08ce4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar10 = param_3;
    func_0x00010c0c58c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010bf529e0();
    _objc_release(lVar10);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      lVar10 = param_3;
      func_0x00010c0c58c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar10 = param_3;
      func_0x00010bfba820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x30) != 0;
      }
      _objc_release();
      lVar10 = *(long *)(param_1 + 0x38);
      if (lVar10 == 0) {
        lVar10 = param_3;
        func_0x00010c2711a0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar10);
      }
      puVar4 = PTR_PTR_1126b2448;
      _objc_alloc(PTR_PTR_1126b2448);
      lVar5 = param_3;
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf4df40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c0cba00(lVar2);
      func_0x00010c0534e0(puVar4,param_2,lVar10,lVar5,lVar7,lVar8,puVar3,bVar1);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar9 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      func_0x00010bee46c0(param_1,param_2,puVar9);
      func_0x00010c0b19a0(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(lVar10);
      _objc_release(lVar2);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f08eec; end: 104f08f03; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider dataProviderDelegate] */

void FUN_104f08eec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f08f04; end: 104f08f0f; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider setDataProviderDelegate:] */

void FUN_104f08f04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 104f08f10; end: 104f08f17; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider sectionDataModel] */

undefined8 FUN_104f08f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104f08f18; end: 104f08f1f; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104f08f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104f08f20; end: 104f08f4f; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104f08f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f08f50; end: 104f08ff3; -[SCMemoriesFriendshipFlashbacksProfileSectionDataProvider .cxx_destruct] */

void FUN_104f08f50(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104f08ff4; end: 104f090bf; -[SCMemoriesFriendshipFlashbacksProfileViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104f08ff4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e4fb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20eaa0(puVar1);
    func_0x00010beb0d80(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_112716c80;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f090c0; end: 104f090c3; -[SCMemoriesFriendshipFlashbacksProfileViewCell setSelected:] */

void FUN_104f090c0(void)

{
  return;
}



/* Entry: 104f090c4; end: 104f090c7; -[SCMemoriesFriendshipFlashbacksProfileViewCell setHighlighted:] */

void FUN_104f090c4(void)

{
  return;
}



/* Entry: 104f090c8; end: 104f0918b; -[SCMemoriesFriendshipFlashbacksProfileViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f090c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112716c84;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_104f09174;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    func_0x00010bee4fe0(param_1);
  }
LAB_104f09174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f0918c; end: 104f091cf; +[SCMemoriesFriendshipFlashbacksProfileViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_104f0918c(double param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = param_1;
  func_0x00010b86a780(1,0xf,0,0);
  auVar2._8_8_ = param_3 + dVar1 + 120.0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 104f091d0; end: 104f09333; -[SCMemoriesFriendshipFlashbacksProfileViewCell _handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f091d0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126b2448;
  uVar6 = *(ulong *)(param_1 + _DAT_112716c84);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  uVar3 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  uVar5 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0880(puVar4);
  func_0x00010c01b460(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112716c88);
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar7);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f09334; end: 104f09f57; -[SCMemoriesFriendshipFlashbacksProfileViewCell _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f09334(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c16e520(0x4030000000000000);
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar8;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(lVar13);
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126b0648;
  _objc_alloc_init();
  lVar12 = (long)_DAT_112716c8c;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar10);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puStack_160 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  uStack_130 = uVar10;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  lStack_140 = uVar10;
  uStack_c0 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_150 = uVar3;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = (undefined *)lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_168 = uVar3;
  uStack_b8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_b0 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_160);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(uVar4);
  _objc_release(uStack_168);
  _objc_release(puStack_158);
  _objc_release(lStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar13 = (long)_DAT_112716c90;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar2;
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar13));
  _objc_release(puVar7);
  _objc_release(puVar2);
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  puStack_160 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  uStack_130 = uVar10;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  lStack_140 = uVar10;
  uStack_e0 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_150 = uVar3;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = (undefined *)lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_168 = uVar3;
  uStack_d8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_d0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_160);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release(uStack_168);
  _objc_release(puStack_158);
  _objc_release(lStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar14 = (long)_DAT_112716c94;
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar14));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  lVar8 = param_1;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puStack_158 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  uStack_130 = uVar10;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar8;
  func_0x00010bf493c0(0x4043800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  lStack_140 = uVar10;
  uStack_100 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_150 = uVar3;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = (undefined *)lVar8;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_168 = uVar3;
  uStack_f8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  uStack_170 = uVar4;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_f0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493c0(0xc04c800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_158);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(puStack_160);
  _objc_release(lStack_148);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
  lVar13 = (long)_DAT_112716c98;
  uVar10 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar2;
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar13));
  _objc_release(puVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  lVar8 = param_1;
  func_0x00010c27f7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  puStack_158 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  lStack_128 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_130 = uVar10;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  lStack_138 = lVar8;
  lStack_120 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_148 = uVar4;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar8;
  func_0x00010bf493c0(0xc043800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_118 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar13);
  uStack_110 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar15;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_158);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(lStack_148);
  _objc_release(lStack_138);
  _objc_release(uStack_130);
  lVar13 = lStack_128;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126b2448;
  pcStack_178 = FUN_104f09f58;
  uVar11 = *(ulong *)(lVar13 + _DAT_112716c84);
  lStack_1c0 = lVar12;
  puStack_1b8 = puVar2;
  uStack_1b0 = uVar10;
  lStack_1a8 = lVar8;
  uStack_1a0 = uVar15;
  uStack_198 = uVar3;
  lStack_190 = lVar6;
  lStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(uVar11);
  _objc_opt_class(puVar7);
  uVar9 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar7);
  uVar1 = uVar11;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar11);
  func_0x00010c1a9f00(*(undefined8 *)(lVar13 + _DAT_112716c8c));
  lVar8 = (long)_DAT_112716c9c;
  func_0x00010bf2dba0(*(undefined8 *)(lVar13 + lVar8));
  if (uVar1 == 0) {
    func_0x00010c16b720(*(undefined8 *)(lVar13 + _DAT_112716c94));
    func_0x00010c16b720(*(undefined8 *)(lVar13 + _DAT_112716c98));
  }
  else {
    _objc_initWeak(auStack_1c8,lVar13);
    lVar12 = lVar13;
    func_0x00010c26e200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar11;
    func_0x00010c0c45e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1d0,auStack_1c8);
    _objc_retain(uVar11);
    lVar6 = lVar12;
    func_0x00010c125c20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar13 + lVar8);
    *(long *)(lVar13 + lVar8) = lVar6;
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar12);
    uVar9 = uVar11;
    func_0x00010c2711a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(lVar13 + _DAT_112716c94));
    _objc_release(uVar9);
    func_0x00010c25e840(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(lVar13 + _DAT_112716c98));
    _objc_release(uVar11);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_1d0);
    _objc_destroyWeak(auStack_1c8);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 104f09f58; end: 104f0a18f; -[SCMemoriesFriendshipFlashbacksProfileViewCell _updateWithViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f09f58(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar2 = PTR_PTR_1126b2448;
  uVar7 = *(ulong *)(param_1 + _DAT_112716c84);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112716c8c));
  lVar8 = (long)_DAT_112716c9c;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar8));
  if (uVar1 == 0) {
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112716c94));
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112716c98));
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    lVar4 = param_1;
    func_0x00010c26e200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c0c45e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar7);
    lVar5 = lVar4;
    func_0x00010c125c20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(long *)(param_1 + lVar8) = lVar5;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(lVar4);
    uVar3 = uVar7;
    func_0x00010c2711a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112716c94));
    _objc_release(uVar3);
    func_0x00010c25e840(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112716c98));
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 104f0a190; end: 104f0a243;  */

void FUN_104f0a190(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c22e020(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bea48a0(lVar1);
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c45e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be55b00(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f0a244; end: 104f0a323; -[SCMemoriesFriendshipFlashbacksProfileViewCell _setImageOnMainThread:shouldAutoPlayFlashback:] */

void FUN_104f0a244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f0a324;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f0a324; end: 104f0a453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0a324(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112716c8c));
    lVar2 = *(long *)(param_1 + 0x20);
    if ((lVar2 != 0) && (*(char *)(param_1 + 0x30) == '\x01')) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      uStack_50 = 0x104f0a3e8;
      puStack_48 = &UNK_110841f80;
      lStack_40 = lVar1;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_60);
      _objc_release(lStack_38);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104f0a454; end: 104f0a4b3; -[SCMemoriesFriendshipFlashbacksProfileViewCell _logMediaConsumptionForMediaId:] */

void FUN_104f0a454(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c26e200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a39a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f0a4b4; end: 104f0a4c3; -[SCMemoriesFriendshipFlashbacksProfileViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f0a4b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112716c84);
}



/* Entry: 104f0a4c4; end: 104f0a4d3; -[SCMemoriesFriendshipFlashbacksProfileViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f0a4c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112716c88);
}



/* Entry: 104f0a4d4; end: 104f0a513; -[SCMemoriesFriendshipFlashbacksProfileViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0a4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112716c88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f0a514; end: 104f0a523; -[SCMemoriesFriendshipFlashbacksProfileViewCell thumbnailProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f0a514(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112716ca0);
}



/* Entry: 104f0a524; end: 104f0a563; -[SCMemoriesFriendshipFlashbacksProfileViewCell setThumbnailProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0a524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112716ca0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f0a564; end: 104f0a613; -[SCMemoriesFriendshipFlashbacksProfileViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0a564(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716ca0,0);
  _objc_storeStrong(param_1 + _DAT_112716c88,0);
  _objc_storeStrong(param_1 + _DAT_112716c84,0);
  _objc_storeStrong(param_1 + _DAT_112716c80,0);
  _objc_storeStrong(param_1 + _DAT_112716c98,0);
  _objc_storeStrong(param_1 + _DAT_112716c94,0);
  _objc_storeStrong(param_1 + _DAT_112716c90,0);
  _objc_storeStrong(param_1 + _DAT_112716c9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716c8c,0);
  return;
}



/* Entry: 104f0a614; end: 104f0a737; -[SCFriendshipFlashbacksProfileSectionCellViewModel initWithTitle:subTitle:mediaContent:contentMessageType:tapActionModel:shouldAutoPlayFlashback:] */

undefined1 *
FUN_104f0a614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

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
  puStack_58 = PTR_PTR_1126e4fc0;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f0a738; end: 104f0a75b; -[SCFriendshipFlashbacksProfileSectionCellViewModel copyWithZone:] */

undefined8 FUN_104f0a738(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f0a75c; end: 104f0a7f7; -[SCFriendshipFlashbacksProfileSectionCellViewModel hash] */

undefined8 * FUN_104f0a75c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104f0a8c8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f0a8d4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[5] == param_3[5] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[6];
            if (puVar6 != (undefined8 *)param_3[6]) {
              func_0x00010c071ae0();
              goto LAB_104f0a8d4;
            }
            goto LAB_104f0a8c8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f0a8d4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f0a7f8; end: 104f0a8ef; -[SCFriendshipFlashbacksProfileSectionCellViewModel isEqual:] */

long FUN_104f0a7f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f0a8c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f0a8d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_104f0a8d4;
            }
            goto LAB_104f0a8c8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f0a8d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f0a8f0; end: 104f0a8f7; -[SCFriendshipFlashbacksProfileSectionCellViewModel title] */

undefined8 FUN_104f0a8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f0a8f8; end: 104f0a8ff; -[SCFriendshipFlashbacksProfileSectionCellViewModel subTitle] */

undefined8 FUN_104f0a8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f0a900; end: 104f0a907; -[SCFriendshipFlashbacksProfileSectionCellViewModel mediaContent] */

undefined8 FUN_104f0a900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f0a908; end: 104f0a90f; -[SCFriendshipFlashbacksProfileSectionCellViewModel contentMessageType] */

undefined8 FUN_104f0a908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f0a910; end: 104f0a917; -[SCFriendshipFlashbacksProfileSectionCellViewModel tapActionModel] */

undefined8 FUN_104f0a910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f0a918; end: 104f0a91f; -[SCFriendshipFlashbacksProfileSectionCellViewModel shouldAutoPlayFlashback] */

undefined1 FUN_104f0a918(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f0a920; end: 104f0a967; -[SCFriendshipFlashbacksProfileSectionCellViewModel .cxx_destruct] */

void FUN_104f0a920(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f0a968; end: 104f0aa6b; -[SCMemoriesPreviewExportLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0a968(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112716cbc);
  puVar2 = PTR_PTR_1126b2450;
  _objc_alloc(PTR_PTR_1126b2450);
  func_0x00010c0399e0();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f0aa6c; end: 104f0aaab;  */

void FUN_104f0aa6c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be7fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f0aaac; end: 104f0aae7; -[SCMemoriesPreviewExportLoggerEntryPoint end] */

void FUN_104f0aaac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4fc8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f0aae8; end: 104f0ab6b; -[SCMemoriesPreviewExportLoggerEntryPoint _previewExportLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0aae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b2458;
  _objc_alloc(PTR_PTR_1126b2458);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112716cc4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfcdfa0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f0ab6c; end: 104f0abb3; -[SCMemoriesPreviewExportLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0ab6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716cbc,0);
  _objc_destroyWeak(param_1 + _DAT_112716cc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716cc0);
  return;
}



/* Entry: 104f0abb4; end: 104f0ac27; -[SCMemoriesPreviewExportLoggerImpl initWithGrapheneRegistry:] */

undefined1 * FUN_104f0abb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4fd0;
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



/* Entry: 104f0ac28; end: 104f0ac3b; -[SCMemoriesPreviewExportLoggerImpl markExportStart:exportSessionId:numberOfSnaps:] */

void FUN_104f0ac28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b2460,PTR_s_markExportStart_exportSessionId__11260c770);
  return;
}



/* Entry: 104f0ac3c; end: 104f0ac97; -[SCMemoriesPreviewExportLoggerImpl didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:contextActionSource:numberOfSnaps:success:errorType:errorSource:cancelled:galleryEntryType:saveToCameraRoll:collectionCategory:exportContext:exportMatchId:inputSource:userTrackedLogger:] */

void FUN_104f0ac3c(void)

{
  func_0x00010bf73d60(PTR_PTR_1126b2460);
  return;
}



/* Entry: 104f0ac98; end: 104f0acab; -[SCMemoriesPreviewExportLoggerImpl logExportLowDiskSpaceError] */

void FUN_104f0ac98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b2460,PTR_s_logExportLowDiskSpaceErrorWithGr_112607180,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104f0acac; end: 104f0acb7; -[SCMemoriesPreviewExportLoggerImpl exportItemWithItemProvider:shareChannel:dataObjectContext:currentGalleryTab:userTrackedLogger:spectaclesAppLogger:] */

void FUN_104f0acac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b2460,PTR_s_exportItemWithItemProvider_share_1125c4dd0);
  return;
}



/* Entry: 104f0acb8; end: 104f0acc3; -[SCMemoriesPreviewExportLoggerImpl .cxx_destruct] */

void FUN_104f0acb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f0acc4; end: 104f0b31b; -[SCMemoriesPreviewShareSheetExportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0acc4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  undefined8 uStack_a8;
  undefined8 uStack_80;
  
  if (param_1 == 0) {
    uVar34 = 0;
  }
  else {
    uVar34 = param_1 + _DAT_112716cd4;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar34;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar34);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar34 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar34 = 0;
  }
  _objc_retain();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2468;
  _objc_alloc();
  if (param_1 == 0) {
    uStack_a8 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)(param_1 + _DAT_112716d0c);
  }
  _objc_retain(uStack_a8);
  func_0x00010c0c5ae0();
  func_0x00010c0c6c20();
  uVar1 = uVar34;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_80 = 0;
    lVar23 = 0;
  }
  else {
    uStack_80 = param_1 + _DAT_112716ce4;
    _objc_loadWeakRetained();
    lVar23 = param_1 + _DAT_112716cdc;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar23;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_104f0b31c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112716ce0;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar24;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112716ce8;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar25;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112716cec;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar26;
  func_0x00010c110be0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000104f0b340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112716cf0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar27;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112716cf4;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar28;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112716cf8;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar29;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_112716cfc;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar30;
  func_0x00010c0c7ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  FUN_104f0b31c();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112716d00;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar31;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_112716d04;
    _objc_loadWeakRetained();
  }
  lVar21 = param_1;
  func_0x00010bf39940();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b800();
  lVar33 = (long)_DAT_112716ccc;
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar2;
  _objc_release(uVar32);
  _objc_release(uStack_a8);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar35);
  _objc_release(lVar20);
  _objc_release(lVar31);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar30);
  _objc_release(lVar16);
  _objc_release(lVar29);
  _objc_release(lVar15);
  _objc_release(lVar28);
  _objc_release(lVar14);
  _objc_release(lVar27);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar26);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar25);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar23);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  lVar23 = param_1;
  func_0x000104f0b340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar23;
  func_0x00010bf9d120();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000104f0b340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c10fbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x000104f0b340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar24;
  func_0x00010c1120e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar34;
  func_0x00010c2440e0(uVar34);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar34);
  func_0x00010c2917c0(uVar1);
  func_0x000104f0b340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd4160();
  func_0x00010c22b320(uVar32);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar23);
  return;
}



/* Entry: 104f0b31c; end: 104f0b363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0b31c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716cd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f0b364; end: 104f0b383; -[SCMemoriesPreviewShareSheetExportEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0b364(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112716d08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f0b384; end: 104f0b397; -[SCMemoriesPreviewShareSheetExportEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0b384(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112716d08,param_3);
  return;
}



/* Entry: 104f0b398; end: 104f0b48b; -[SCMemoriesPreviewShareSheetExportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f0b398(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716d0c,0);
  _objc_destroyWeak(param_1 + _DAT_112716d08);
  _objc_destroyWeak(param_1 + _DAT_112716d04);
  _objc_destroyWeak(param_1 + _DAT_112716d00);
  _objc_destroyWeak(param_1 + _DAT_112716cfc);
  _objc_destroyWeak(param_1 + _DAT_112716cf8);
  _objc_destroyWeak(param_1 + _DAT_112716cf4);
  _objc_destroyWeak(param_1 + _DAT_112716cf0);
  _objc_destroyWeak(param_1 + _DAT_112716cec);
  _objc_destroyWeak(param_1 + _DAT_112716ce8);
  _objc_destroyWeak(param_1 + _DAT_112716ce4);
  _objc_destroyWeak(param_1 + _DAT_112716ce0);
  _objc_destroyWeak(param_1 + _DAT_112716cdc);
  _objc_destroyWeak(param_1 + _DAT_112716cd8);
  _objc_destroyWeak(param_1 + _DAT_112716cd4);
  _objc_destroyWeak(param_1 + _DAT_112716cd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716ccc,0);
  return;
}



/* Entry: 104f0b48c; end: 104f0b8ef; -[SCMemoriesPreviewShareSheetExportImpl initWithStandardExternalContentShareScopeExposer:mediaOrientation:mediaType:liveCameraLensId:userInfoServices:offPlatformLinkGenerationService:memoriesExportLogger:userSession:previewConfiguration:commonLoggingParamsBuilder:previewExportLogger:memoriesPreviewShareSheetExportScope:spectaclesAppLogger:userTrackedLogger:grapheneRegistry:memoriesActivityItemProviderBuilder:galleryLogger:temporaryFileWriter:previewABServices:circumstanceEngine:] */

undefined8 *
FUN_104f0b48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  puStack_70 = PTR_PTR_1126e4fd8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_7);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf5f400();
    puVar1[0x13] = uVar4;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf5f400();
    puVar1[0x13] = uVar4;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_22;
    _objc_release(uVar2);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f0b8f0; end: 104f0c19f; -[SCMemoriesPreviewShareSheetExportImpl shareWithExternalShareSheet:presentingContainer:previewTranscoding:userContext:hasAnimatedOrExternalAudioContent:] */

void FUN_104f0b8f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_190;
  undefined *puStack_180;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_c8,param_1);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_5;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x90) = param_6;
  *(undefined1 *)(param_1 + 0x60) = param_7;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_4;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_104f0c1a0;
  puStack_d8 = &UNK_11085a988;
  _objc_copyWeak(auStack_d0,auStack_c8);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_120 = puVar6;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x104f0c1e0;
  puStack_108 = &UNK_11085a9b8;
  _objc_copyWeak(auStack_f8,auStack_c8);
  _objc_retain(param_3);
  lStack_100 = param_3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2470;
  _objc_copyWeak(auStack_128,auStack_c8);
  _objc_retain(param_3);
  func_0x00010c2adce0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(ulong *)(param_1 + 0xe8);
  func_0x000108ec1954();
  puVar8 = *(undefined **)(param_1 + 0x30);
  if ((uVar7 & 1) == 0) {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    puStack_180 = PTR_PTR_1126b2478;
    _objc_alloc();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021e80();
    goto LAB_104f0bce0;
  }
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar8;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar18 = puVar8;
  if (puVar16 == (undefined *)0x0) {
    puVar16 = puVar8;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar16 != (undefined *)0x0) {
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar18;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a0 = puVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104f0bc70;
    }
    puVar16 = (undefined *)0x0;
  }
  else {
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar18;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
LAB_104f0bc70:
    _objc_release(puVar19);
    _objc_release(puVar17);
    _objc_release(puVar18);
  }
  puStack_180 = PTR_PTR_1126b2478;
  _objc_alloc();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021e80();
  _objc_release(puVar18);
LAB_104f0bce0:
  _objc_release(puVar16);
  _objc_release(puVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c06e820();
  _objc_release(uVar9);
  if ((int)uVar3 == 0) {
    puStack_190 = (undefined *)0x0;
  }
  else {
    puStack_190 = PTR_PTR_1126b2480;
    _objc_alloc();
    func_0x00010c03a960();
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c075060();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c2a29a0();
    uVar2 = (uint)uVar3;
    _objc_release(uVar9);
  }
  lVar10 = *(long *)(param_1 + 0x30);
  func_0x00010bf9e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 == 0 && (uVar2 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010bf9e5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar8 = PTR_PTR_1126b2488;
    _objc_alloc();
    func_0x00010c046300();
  }
  puVar16 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf9e5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028f20(puVar16);
  _objc_release(uVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xe8);
  func_0x000108ec1954();
  if (iVar1 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x30);
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      lVar13 = lVar11;
      func_0x00010c0c7f00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar13 == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        lVar14 = lVar10;
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar11;
        lStack_b8 = lVar14;
        func_0x00010c0c7f00();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        lStack_b0 = lVar15;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar15);
        _objc_release(lVar14);
      }
      _objc_release(lVar13);
    }
    _objc_release(lVar12);
    puVar18 = PTR_PTR_1126b2498;
    _objc_alloc(PTR_PTR_1126b2498);
    if (lVar10 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_c0 = lVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c037ea0(puVar18);
    if (lVar10 != 0) {
      _objc_release(puVar19);
    }
    _objc_release(puVar17);
    _objc_release(lVar10);
    _objc_release(lVar11);
  }
  puVar17 = PTR_PTR_1126b24a0;
  _objc_alloc(PTR_PTR_1126b24a0);
  func_0x00010c0574a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(puVar8);
  _objc_release(puStack_190);
  _objc_release(puStack_180);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar5);
  _objc_release(lStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar10 = param_3;
  func_0x00010be1c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 104f0c1a0; end: 104f0c227;  */

void FUN_104f0c1a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f0c228; end: 104f0c2b7;  */

void FUN_104f0c228(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1bd80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  (**(code **)(param_2 + 0x10))(param_2,0,lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f0c2b8; end: 104f0c2df; -[SCMemoriesPreviewShareSheetExportImpl _getLensIdFromLiveCameraLensId] */

void FUN_104f0c2b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f0c2e0; end: 104f0c40f; -[SCMemoriesPreviewShareSheetExportImpl handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_104f0c2e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (param_3 == 1) {
    func_0x00010beb9c00(param_1);
  }
  func_0x00010c0c8920(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  FUN_104f0c410();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104f0c4a8(param_3,uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfccc0(param_1);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return 0;
}



/* Entry: 104f0c410; end: 104f0c547;  */

void FUN_104f0c410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf3ec40();
    func_0x00010c0df780(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f0c548; end: 104f0c67b; -[SCMemoriesPreviewShareSheetExportImpl _didCompleteExportWithSessionId:contextActionSource:numberOfSnaps:galleryEntryType:success:errorType:errorSource:cancelled:saveToCameraRoll:] */

void FUN_104f0c548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73d40(uVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x98),param_4,param_5,param_7,param_8,param_9,
                      param_10,param_6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


