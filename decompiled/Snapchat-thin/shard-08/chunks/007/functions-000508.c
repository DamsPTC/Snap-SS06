/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065830e4; end: 106583113; -[SCChatInputViewController stickerTappedEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065830e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aabc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106583114; end: 10658326b; -[SCChatInputViewController registerPlugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010c268560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10658326c; end: 1065832b3;  */

void FUN_10658326c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065832b4; end: 10658340b; -[SCChatInputViewController registerObservers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065832b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010c268560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10658340c; end: 106583453;  */

void FUN_10658340c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106583454; end: 10658370b; -[SCChatInputViewController _registerPlugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583454(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11274ab14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = param_3;
  _objc_release(uVar1);
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c64a8;
  lVar2 = param_3;
  func_0x00010bd86870(param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c64a8,
                      &PTR___NSConcreteGlobalBlock_11092b258);
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      lVar12 = *(long *)(lVar11 * 8);
      func_0x00010c1ad280(lVar12);
      lVar4 = lVar12;
      func_0x00010c101d20();
      if (lVar4 != 3) {
        puVar5 = PTR_PTR_1126cb958;
        _objc_opt_new();
        func_0x00010c1ad460(lVar12);
        func_0x00010bf47140(lVar12);
        func_0x00010c20eaa0(puVar5);
        func_0x00010c104260();
        if (lVar12 == 3) {
          if (lVar3 < 2) {
            func_0x00010c1ba020();
          }
          else {
            func_0x00010c065cc0();
          }
        }
        lVar4 = param_1;
        func_0x00010c065720(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066d20();
        _objc_release(lVar4);
        _objc_release(puVar5);
      }
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    lVar10 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (1 < lVar3) {
    func_0x00010bdeaaa0(param_1);
  }
  lVar10 = param_1;
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010c2794e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47160();
  _objc_release(lVar6);
  _objc_release(lVar10);
  func_0x00010befaa20(*(undefined8 *)(param_1 + _DAT_11274ab08));
  puVar5 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010bf43d60(*(undefined8 *)(param_1 + _DAT_11274aaf8));
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010c104260();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar7 == (undefined **)0x3) {
    func_0x00010c067fc0(puVar5);
    func_0x00010c0df780(puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar8 = puVar5;
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10658370c; end: 106583787;  */

void FUN_10658370c(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010c104260();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 == 3) {
    func_0x00010c067fc0(param_3);
    func_0x00010c0df780(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106583788; end: 106583797; -[SCChatInputViewController _registerObservers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),PTR_s_addObservers__11259c260);
  return;
}



/* Entry: 106583798; end: 106583827; -[SCChatInputViewController addFeature:atPosition:] */

void FUN_106583798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc6bc0(param_1,param_2,param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c065bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef93e0(param_1,param_2,uVar1,param_4,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106583828; end: 1065838b7; -[SCChatInputViewController prependFeature:position:] */

void FUN_106583828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc6bc0(param_1,param_2,param_3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c065bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10a640(param_1,param_2,uVar1,param_4,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065838b8; end: 1065839b3; -[SCChatInputViewController _addFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065838b8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126cb958;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bf47140(param_3,param_2,puVar1);
  func_0x00010c1ad460(param_3,param_2,puVar1);
  func_0x00010c20eaa0(puVar1,param_2,*(undefined8 *)(param_1 + (long)_DAT_11274ab04));
  func_0x00010bef8300(*(undefined8 *)(param_1 + (long)_DAT_11274ab08),param_2,param_3);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2794e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  func_0x00010c1a9e40(*(undefined8 *)(param_1 + (long)_DAT_11274ab0c),param_2,uVar5 < 4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065839b4; end: 106583a97; -[SCChatInputViewController _shouldEnableKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065839b4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = param_1;
  func_0x00010c073040();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11274ab08);
    func_0x00010c075ec0();
    if (iVar1 != 0) {
      lVar5 = (long)_DAT_11274ab20;
      lVar3 = param_1 + lVar5;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        lVar5 = param_1 + lVar5;
        _objc_loadWeakRetained();
        lVar4 = lVar5;
        func_0x00010c0799c0();
        _objc_release(lVar5);
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          return;
        }
      }
      if (*(char *)(param_1 + (long)_DAT_11274aae4) == '\x01') {
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c075e80();
        _objc_release(uVar2);
        _objc_release(param_1);
      }
    }
  }
  return;
}



/* Entry: 106583a98; end: 106583aa3; -[SCChatInputViewController enableKeyboard] */

void FUN_106583a98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enableKeyboardAsynchronously_co_11255fcd0,0,0);
  return;
}



/* Entry: 106583aa4; end: 106583aab; -[SCChatInputViewController enableKeyboardAsynchronously] */

void FUN_106583aa4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf90950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enableKeyboardAsynchronously__1125c1bf8,0);
  return;
}



/* Entry: 106583aac; end: 106583ab7; -[SCChatInputViewController enableKeyboardAsynchronously:] */

void FUN_106583aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enableKeyboardAsynchronously_co_11255fcd0,1,param_3);
  return;
}



/* Entry: 106583ab8; end: 106583ac3; -[SCChatInputViewController enableKeyboardAsynchronouslyForLegacyOS] */

void FUN_106583ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enableKeyboardAsynchronously_co_11255fcd0,0,0);
  return;
}



/* Entry: 106583ac4; end: 106583acb; -[SCChatInputViewController enableKeyboardIfNecessary] */

void FUN_106583ac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessaryAsynch_11255fcf0,0)
  ;
  return;
}



/* Entry: 106583acc; end: 106583ad3; -[SCChatInputViewController enableKeyboardIfNecessaryAsynchronouslyForLegacyOS] */

void FUN_106583acc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessaryAsynch_11255fcf0,0)
  ;
  return;
}



/* Entry: 106583ad4; end: 106583b4f; -[SCChatInputViewController _enableKeyboardIfNecessaryAsynchronously:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583ad4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + (long)_DAT_11274ab24) == '\x01') &&
     (uVar1 = param_1, func_0x00010beb3720(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be08cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__enableKeyboardAsynchronously_co_11255fcd0,param_3,0);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11274ab08);
  func_0x00010bf5e780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106583b50; end: 106583c73; -[SCChatInputViewController _enableKeyboardAsynchronously:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583b50(ulong param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + (long)_DAT_11274ab24) = 0;
  uVar1 = param_1;
  func_0x00010beb3720();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11274ab08);
    func_0x00010bf5e780(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6aa0();
    _objc_release(uVar3);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106583c74;
    puStack_48 = &UNK_11084aaa8;
    uStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    _objc_retainBlock();
    if (param_3 == 0) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    }
    else {
      _dispatch_time(0,50000000);
      func_0x00010058c530();
    }
    _objc_release(ppuVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106583c74; end: 106583d7f;  */

void FUN_106583c74(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar2 == 1) {
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010beb3720();
    if (iVar1 != 0) {
      func_0x00010bf179a0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106583d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106583d80; end: 106583de3; -[SCChatInputViewController _shouldDisableKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106583d80(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIResponder_1126c6df8;
  func_0x00010bf5eba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    lVar4 = (long)_DAT_11274ab08;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c075ec0();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf2d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_canResignFirstResponder_1125a8eb8);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 106583de4; end: 106583def; -[SCChatInputViewController disableKeyboard] */

void FUN_106583de4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__disableKeyboardAsynchronously_c_11255e0c8,0,0);
  return;
}



/* Entry: 106583df0; end: 106583df7; -[SCChatInputViewController disableKeyboardIfNecessaryAsynchronously] */

void FUN_106583df0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disableKeyboardIfNecessaryAsync_11255e0d0,0)
  ;
  return;
}



/* Entry: 106583df8; end: 106583dff; -[SCChatInputViewController disableKeyboardIfNecessary] */

void FUN_106583df8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disableKeyboardIfNecessaryAsync_11255e0d0,0)
  ;
  return;
}



/* Entry: 106583e00; end: 106583e4f; -[SCChatInputViewController _disableKeyboardIfNecessaryAsynchronously:] */

void FUN_106583e00(void)

{
  func_0x00010be01ca0();
  return;
}



/* Entry: 106583e50; end: 106583e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583e50(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274ab24) = 1;
  return;
}



/* Entry: 106583e68; end: 106583f5b; -[SCChatInputViewController _disableKeyboardAsynchronously:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583e68(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010beb3060();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11274ab08);
    func_0x00010bf5e780(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a6f20();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106583f5c;
    puStack_48 = &UNK_11084aaa8;
    uStack_40 = param_1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    _objc_retainBlock();
    if (param_3 == 0) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    }
    else {
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,ppuVar2);
    }
    _objc_release(ppuVar2);
    uVar3 = uStack_38;
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 106583f5c; end: 106583fd3;  */

void FUN_106583f5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c260();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106583fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106583fd4; end: 106584193; -[SCChatInputViewController collapseKeyboardAfterExternalResign] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106583fd4(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = param_4;
  func_0x00010c073040();
  if (((uVar1 & 1) == 0) &&
     ((func_0x00010bf89dc0(param_4), 0.0 < param_1 ||
      (func_0x00010bf4c660(*(undefined8 *)(param_4 + (long)_DAT_11274aadc)), 0.0 < param_1)))) {
    uVar1 = param_4;
    func_0x00010c065720(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c260();
    _objc_release(uVar1);
    func_0x00010c1b6d80(*(undefined8 *)(param_4 + (long)_DAT_11274aadc),param_5,0);
    dVar5 = 0.0;
    func_0x00010c191880(0,param_4);
    uVar1 = param_4;
    func_0x00010c065720(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    uVar2 = param_4;
    dVar6 = dVar5;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_4 + (long)_DAT_11274aaa4);
    puVar3 = PTR_PTR_1126cb8b0;
    _objc_alloc(PTR_PTR_1126cb8b0);
    func_0x00010c02f920(dVar6,dVar5 + param_3);
    func_0x00010c0d9840(uVar4,param_5,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126cb8a8;
    uVar4 = *(undefined8 *)(param_4 + (long)_DAT_11274aaa8);
    func_0x00010bf89dc0(param_4);
    func_0x00010c28c6e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_5,puVar3);
    _objc_release(puVar3);
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 106584194; end: 10658421b; -[SCChatInputViewController becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106584194(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c074c20();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x00010c2a59a0(*(undefined8 *)(param_1 + (long)_DAT_11274ab08));
    func_0x00010c065720(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf179a0();
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10658421c; end: 1065842af; -[SCChatInputViewController resignFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658421c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + (long)_DAT_11274ab24) = 0;
  uVar2 = param_1;
  func_0x00010c073040();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c252440(), uVar2 != 0)) {
    func_0x00010c27a900(param_1,param_2,0,0,0);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11274ab08);
    func_0x00010bf2d440();
    if (iVar1 != 0) {
      func_0x00010c065720(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a0e0();
      _objc_release(param_1);
    }
  }
  return;
}



/* Entry: 1065842b0; end: 1065842eb; -[SCChatInputViewController isFirstResponder] */

undefined8 FUN_1065842b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c073040();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1065842ec; end: 10658433b; -[SCChatInputViewController selectAll:] */

void FUN_1065842ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1586c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10658433c; end: 10658434b; -[SCChatInputViewController transitionDrawerToState:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658433c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),
             PTR_s_transitionDrawerToState_animated_11267c468);
  return;
}



/* Entry: 10658434c; end: 10658435b; -[SCChatInputViewController registerPanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658434c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),PTR_s_registerPanGesture__112627568);
  return;
}



/* Entry: 10658435c; end: 10658436b; -[SCChatInputViewController unregisterPanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658435c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c282110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),PTR_s_unregisterPanGesture__11267e268);
  return;
}



/* Entry: 10658436c; end: 106584713; -[SCChatInputViewController restoreAttributedString:coloredRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658436c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139ac0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0d3c80();
  uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  lVar2 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1065845b4;
  puStack_68 = &UNK_11092b278;
  uStack_60 = param_4;
  _objc_retain(lVar1);
  lStack_58 = lVar1;
  _objc_retain(param_4);
  func_0x00010bf97b00(lVar1,param_2,uVar7,0,lVar2,0,&puStack_80);
  lVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0();
  func_0x00010c14c860(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar5 != 0) goto LAB_106584540;
    lVar2 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cb00(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
LAB_106584540:
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274aab4);
  puVar6 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106584714; end: 10658475b; -[SCChatInputViewController restoreDefaultAttributesInRange:] */

void FUN_106584714(undefined8 param_1)

{
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10658475c; end: 10658476b; -[SCChatInputViewController selectItemWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10658475c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274ab08),
             PTR_s_selectItemWithDeeplinkIdentifier_112633d08);
  return;
}



/* Entry: 10658476c; end: 106584793; -[SCChatInputViewController drawerMode] */

undefined8 FUN_10658476c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c252440();
  uVar1 = 1;
  if (param_1 == 0) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_1 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106584794; end: 106584897; -[SCChatInputViewController insertTextAtRange:range:] */

void FUN_106584794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c130d20(uVar3,param_2,param_4,param_5,param_3);
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010bf51e00(uVar3);
  uVar2 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26cb00(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106584898; end: 106584907; -[SCChatInputViewController _setAttributedTextInTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274aa90;
  *(undefined1 *)(param_1 + lVar2) = 1;
  func_0x00010bf51e00(param_3);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(lVar1);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + lVar2) = 0;
  return;
}



/* Entry: 106584908; end: 106584a13; -[SCChatInputViewController insertAttributedTextAtRange:range:] */

void FUN_106584908(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c08fa60(uVar3);
  uVar1 = uVar3;
  func_0x00010c08fa60();
  if (param_4 < uVar1) {
    uVar1 = uVar3;
    func_0x00010c08fa60(uVar3);
    _NSIntersectionRange(param_4,param_5,0,uVar1);
    func_0x00010c130d00(uVar3);
    func_0x00010bea2060(param_1);
    uVar1 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cb00(param_1);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106584a14; end: 106584b2f; -[SCChatInputViewController clearText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584a14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c065720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c260();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c380();
  _objc_release(lVar1);
  func_0x00010c1f5fe0(0,param_1);
  puVar2 = PTR_PTR_1126cb960;
  _objc_alloc(PTR_PTR_1126cb960);
  func_0x00010c0310c0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274aa94),param_2,puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274aa98),param_2,puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274aab8);
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2140();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106584b30; end: 106584b3f; -[SCChatInputViewController presentInputBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_presentInputBar_112620c30);
  return;
}



/* Entry: 106584b40; end: 106584b4f; -[SCChatInputViewController dismissInputBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_dismissInputBar_1125be890);
  return;
}



/* Entry: 106584b50; end: 106584c87; -[SCChatInputViewController collapseInputItemsInContainingStackView:withCollapseAnimation:excludingInputItemWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584b50(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aaf8);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uVar2 = param_5;
  uStack_50 = param_3;
  uStack_4f = param_4;
  _objc_retain(param_5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 106584c88; end: 106584ceb;  */

void FUN_106584c88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c065720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3fa60();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106584cec; end: 106584cfb; -[SCChatInputViewController addTextViewListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aac0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106584cfc; end: 106584d0b; -[SCChatInputViewController removeTextViewListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aac0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106584d0c; end: 106584d13; -[SCChatInputViewController hideSubmenu] */

void FUN_106584d0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSubmenuWithEventLog__11256b120,1);
  return;
}



/* Entry: 106584d14; end: 106584d7f; -[SCChatInputViewController isTouchOnSubmenuButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106584d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274ab28;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 != 0) {
    func_0x00010c09ef00(param_3,param_2,lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf20c00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return uVar1;
  }
  return 0;
}



/* Entry: 106584d80; end: 106584dbf; -[SCChatInputViewController resetSubmenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584d80(long param_1)

{
  if (*(char *)(param_1 + _DAT_11274ab2c) == '\x01') {
    func_0x00010bea8140(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSubmenuWithEventLog__11256b120,1);
  return;
}



/* Entry: 106584dc0; end: 106584e87; -[SCChatInputViewController updateSubmenuForSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274ab28);
  func_0x00010c159820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x40000087);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff80000087);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa060(uVar3,param_2,param_3,puVar1,puVar2,0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + _DAT_11274ab2c) = 1;
  return;
}



/* Entry: 106584e88; end: 106584f5f; -[SCChatInputViewController _createAndAddSubmenuButtonWithModalities:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cb958;
  _objc_opt_new();
  func_0x00010c223c40();
  func_0x00010c1ad540(puVar1,param_2,param_3);
  func_0x00010c1ba020(puVar1,param_2,0);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e54278);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__submenuButtonTapped_112531230,0x40);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274ab28);
  *(undefined **)(param_1 + _DAT_11274ab28) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar2);
  func_0x00010bea8140(param_1);
  func_0x00010c065720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066d20();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106584f60; end: 106585077; -[SCChatInputViewController _setSubmenuIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106584f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x21a,0xcd);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x21a,0x87);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274ab28;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000cd);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000cc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa060(uVar5,param_2,puVar1,puVar3,puVar4,puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar6),param_2,
                      *(undefined8 *)(param_1 + _DAT_11274ab04));
  *(undefined1 *)(param_1 + _DAT_11274ab2c) = 0;
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106585078; end: 106585097; -[SCChatInputViewController _submenuButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585078(long param_1)

{
  if (*(char *)(param_1 + _DAT_11274ab30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be35e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSubmenuWithEventLog__11256b120);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebb470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showSubmenuWithEventLog__11258c6c0,1);
  return;
}



/* Entry: 106585098; end: 106585173; -[SCChatInputViewController _showSubmenuWithEventLog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585098(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274ab34;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  lVar3 = (long)_DAT_11274ab30;
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    if (*(char *)(param_1 + _DAT_11274ab2c) == '\x01') {
      func_0x00010bea8140(param_1);
      lVar2 = param_1;
      func_0x00010bf51de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65d80();
      _objc_release(lVar2);
    }
    func_0x00010bee1340(param_1,param_2,1);
    *(undefined1 *)(param_1 + lVar3) = 1;
    if (param_3 != 0) {
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b1380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106585174; end: 106585213; -[SCChatInputViewController _hideSubmenuWithEventLog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585174(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274ab34;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_11274ab30;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    func_0x00010bee1340(param_1,param_2,0);
    *(undefined1 *)(param_1 + lVar2) = 0;
    if (param_3 != 0) {
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b1380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106585214; end: 106585397; -[SCChatInputViewController _updateSubmenuForExpandedState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585214(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c1fadc0(*(undefined8 *)(param_1 + _DAT_11274ab28));
  if (param_3 == 0) {
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    _CGAffineTransformMakeRotation(&uStack_60,0xbfe921fb54442d18);
  }
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_a0,auStack_68);
  uStack_90 = uStack_58;
  uStack_98 = uStack_60;
  uStack_80 = uStack_48;
  uStack_88 = uStack_50;
  uStack_70 = uStack_38;
  uStack_78 = uStack_40;
  func_0x00010bf03400(0x3fd0000000000000,puVar1);
  if (param_3 == 0) {
    func_0x00010c065720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c25ec80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe29c0();
  }
  else {
    func_0x00010c065720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c25ec80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a4a0();
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106585398; end: 1065853fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585398(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    uStack_28 = *(undefined8 *)(param_1 + 0x50);
    uStack_30 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c219960(*(undefined8 *)(lVar1 + _DAT_11274ab28),param_2,&uStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1065853fc; end: 10658548f; -[SCChatInputViewController _showSubmenuWithDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065853fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar3 = (long)_DAT_11274ab34;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106585490;
  puStack_30 = &UNK_1108d8ce0;
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  lStack_28 = param_1;
  func_0x00010c150360(0x3fe0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,0,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 106585490; end: 106585513;  */

void FUN_106585490(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_2;
  func_0x00010c082b20();
  if ((uVar1 & 1) != 0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    func_0x00010bebb480();
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 106585514; end: 1065855af; -[SCChatInputViewController _showSubmenuWithTimeout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bebb460(param_1,param_2,0);
  func_0x00010bece1e0(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1065855b0;
  puStack_30 = &UNK_1108d8ce0;
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  lStack_28 = param_1;
  func_0x00010c150360(0x4000000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,0,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274ab34);
  *(undefined **)(param_1 + _DAT_11274ab34) = puVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 1065855b0; end: 1065855bb;  */

void FUN_1065855b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__hideSubmenuWithEventLog__11256b120,0);
  return;
}



/* Entry: 1065855bc; end: 106585737; -[SCChatInputViewController _observeActiveConversationInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065855bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + _DAT_11274aad0) != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274aac8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106585738;
    puStack_68 = &UNK_1108a6c78;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c2656e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106585738; end: 1065858d3;  */

void FUN_106585738(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126ae6b8;
  if ((param_1 == 0) || (puVar1 == (undefined *)0x0)) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf50920();
    puVar4 = PTR_PTR_1126ae750;
    puVar3 = PTR_PTR_1126ae6b8;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b60f8;
      func_0x00010c0f2b40(PTR_PTR_1126b60f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec800(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar1);
      func_0x00010bf54280(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065858d4; end: 106585a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065858d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274aad4);
  func_0x00010bf50280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010bfa5fc0(uVar4);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106585a4c; end: 106585a4f;  */

void FUN_106585a4c(void)

{
  return;
}



/* Entry: 106585a50; end: 106585b5f;  */

void FUN_106585a50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010bfb0d80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c154b60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdddc80(param_1);
      lVar4 = param_1;
      func_0x00010bdca380();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106585b60;
      puStack_58 = &UNK_110848c48;
      lStack_50 = param_1;
      lStack_48 = lVar4;
      func_0x000100162d98("APPSTORE",&puStack_70);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106585b60; end: 106585b9b;  */

void FUN_106585b60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106585b9c; end: 106585d4f; -[SCChatInputViewController _allowedModalitiesForConversationInformation:conversationSubtypeMetadata:] */

ulong FUN_106585b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar6 = param_4;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = param_4;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf36600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06b340();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar6 != 0 && (uVar4 & 1) == 0) {
    puStack_68[3] = puStack_68[3] | 0x10;
  }
  uVar5 = param_3;
  func_0x00010bf36840(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0c11e0(uVar5);
  _objc_release(uVar5);
  uVar6 = puStack_68[3];
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return ~uVar6;
}



/* Entry: 106585d50; end: 106585de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585d50(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c122be0();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11274aad8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c080e80();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(ulong *)(lVar4 + 0x18) = *(ulong *)(lVar4 + 0x18) | 6;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c122bc0();
  if (iVar1 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(ulong *)(lVar4 + 0x18) = *(ulong *)(lVar4 + 0x18) | 0xe0;
  }
  return;
}



/* Entry: 106585de8; end: 106585deb;  */

void FUN_106585de8(void)

{
  return;
}



/* Entry: 106585dec; end: 106585e9b; -[SCChatInputViewController _trackSubmenuImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585dec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274aad0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106585e9c; end: 106585fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585e9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar5 = (long)_DAT_11274aac4;
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf36900();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b6c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274aacc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106585fa4; end: 106586117; -[SCChatInputViewController _checkImpressionsAndShowSubmenuIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106585fa4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + _DAT_11274aac4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf36900();
  _objc_release(lVar1);
  if (4 < lVar2) {
    return;
  }
  if (*(long *)(param_2 + _DAT_11274ab28) == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + _DAT_11274aacc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar4);
  if (param_1 <= 0.0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar5);
      if (param_1 < 86400.0) goto LAB_1065860f0;
    }
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106586118;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_68);
LAB_1065860f0:
  _objc_release(puVar6);
  _objc_release(uVar3);
  return;
}



/* Entry: 106586118; end: 10658611f;  */

void FUN_106586118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebb450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showSubmenuWithDelay_11258c6b8);
  return;
}



/* Entry: 106586120; end: 106586177; -[SCChatInputViewController announceMessageEditAttemptFromPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106586120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274ab20;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101ae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106586178; end: 1065861cf; -[SCChatInputViewController announceMessageSendAttemptFromPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106586178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274ab20;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101b00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065861d0; end: 10658622f; -[SCChatInputViewController announceMessageEditResult:fromPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065861d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274ab20;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1019c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106586230; end: 10658628f; -[SCChatInputViewController announceMessageSendResult:fromPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106586230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274ab20;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1019e0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106586290; end: 1065862e7; -[SCChatInputViewController announcePresentFullscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106586290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274ab20;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101de0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065862e8; end: 10658633f; -[SCChatInputViewController announceDismissFullscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065862e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274ab20;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101b40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106586340; end: 106586373; -[SCChatInputViewController pluginDidAttachToAccessoryContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106586340(long param_1)

{
  param_1 = param_1 + _DAT_11274ab20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106586374; end: 1065863a7; -[SCChatInputViewController pluginDidDetachFromAccessoryContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106586374(long param_1)

{
  param_1 = param_1 + _DAT_11274ab20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065863a8; end: 106586547; -[SCChatInputViewController interceptMessageSendAttemptForPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065863a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar9 = (long)_DAT_11274ab20;
  uVar2 = param_1 + lVar9;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar9 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar4 = lVar9;
    func_0x00010c068ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    if (lVar4 != 0) {
      func_0x00010befa120(puVar1);
    }
    _objc_release(lVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274ab08);
  func_0x00010c068ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  puVar6 = PTR_PTR_1126ae558;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else {
    _objc_retain(puVar7);
    puVar6 = puVar7;
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106586548; end: 10658656f;  */

void FUN_106586548(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd86870(param_2,PTR____kCFBooleanTrue_11034ab68,&PTR___NSConcreteGlobalBlock_11092b368
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106586570; end: 1065865e7;  */

void FUN_106586570(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    func_0x00010bf1f3c0(param_3);
  }
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065865e8; end: 1065866e3; -[SCChatInputViewController textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065865e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010be160c0(param_1);
  func_0x00010c066360(*(undefined8 *)(param_1 + _DAT_11274aac0));
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274aab0);
  uVar4 = param_3;
  func_0x00010bf0e540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
  puVar1 = PTR_PTR_1126cb968;
  func_0x00010bf73880(PTR_PTR_1126cb968);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_11274ab38;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274aa98));
    uVar4 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe29b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideSubmenu_1125d6428);
  return;
}



/* Entry: 1065866e4; end: 1065867bb; -[SCChatInputViewController textViewDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065866e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cb8d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aaa0);
  _objc_retain(param_3);
  func_0x00010bfeb8a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010c066380(*(undefined8 *)(param_1 + _DAT_11274aac0));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
  puVar1 = PTR_PTR_1126cb968;
  func_0x00010bf759e0(PTR_PTR_1126cb968);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b6d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_setKeyboardActive__11264b588,0);
  return;
}



/* Entry: 1065867bc; end: 10658685f; -[SCChatInputViewController textViewDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065867bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aac0);
  _objc_retain(param_3);
  func_0x00010c066340(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
  puVar1 = PTR_PTR_1126cb968;
  func_0x00010bf72940(PTR_PTR_1126cb968);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b6d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274aadc),PTR_s_setKeyboardActive__11264b588,1);
  return;
}



/* Entry: 106586860; end: 10658690b; -[SCChatInputViewController textView:shouldChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106586860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + _DAT_11274aa90) & 1) == 0) {
    uVar1 = param_6;
    FUN_1065790c4();
    if ((int)uVar1 == 0) {
      func_0x00010bddcbe0(param_1,param_2,param_3,param_4,param_5,param_6);
      goto LAB_1065868e4;
    }
    func_0x00010be97180(param_1,param_2,param_3);
  }
  param_1 = 0;
LAB_1065868e4:
  _objc_release(param_6);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10658690c; end: 106586c8f; -[SCChatInputViewController _changeWithTextView:textInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10658690c(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 < (ulong)(param_4 + param_5)) {
    uVar12 = 0;
  }
  else {
    lVar3 = param_6;
    func_0x00010c08fa60();
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c08fa60();
    lVar13 = (long)_DAT_11274aafc;
    uVar11 = *(ulong *)(param_1 + lVar13);
    uVar1 = (lVar3 - param_5) + uVar1;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c08fa60();
    _objc_release(uVar10);
    lVar3 = param_6;
    func_0x00010c08fa60();
    func_0x00010c066320(*(undefined8 *)(param_1 + _DAT_11274aac0));
    uVar9 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
    puVar5 = PTR_PTR_1126cb968;
    func_0x00010c2a5bc0(PTR_PTR_1126cb968);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar5);
    if (uVar11 < uVar1) {
      uVar10 = 0;
      uVar8 = *(ulong *)(param_1 + lVar13);
      if ((uVar4 - param_5 < uVar8) && (uVar8 < (uVar4 - param_5) + lVar3)) {
        lVar3 = param_6;
        FUN_106579258(param_6,param_4,param_5,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(param_3);
        _objc_release(lVar3);
        uVar10 = param_3;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26cb00(param_1);
      }
    }
    else {
      uVar10 = 0;
    }
    if ((param_6 != 0) && (uVar10 == 0)) {
      uVar4 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c25cf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    uVar4 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_6;
    FUN_1065790d0(param_6,param_4,param_5,uVar4);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126cb960;
    _objc_alloc();
    func_0x00010c0310c0();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11274ab38);
    *(undefined **)(param_1 + _DAT_11274ab38) = puVar5;
    _objc_release(uVar9);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274aa94));
    lVar13 = param_1;
    func_0x00010c26ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar13;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0720c0();
    _objc_release(lVar6);
    _objc_release(lVar13);
    uVar12 = 0;
    if (uVar1 <= uVar11) {
      uVar12 = (undefined4)lVar7;
    }
    uVar9 = *(undefined8 *)(param_1 + _DAT_11274aaa0);
    FUN_1065791a4(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar10);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar12;
}



/* Entry: 106586c90; end: 106586e4b; -[SCChatInputViewController _filterImageGlyphs:] */

void FUN_106586c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106586e4c;
    uStack_50 = 0x106586e5c;
    uStack_48 = 0;
    _objc_initWeak(auStack_78,param_1);
    func_0x00010c08fa60(uVar2);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf97b00(uVar2);
    if (puStack_68[5] != 0) {
      func_0x00010c16b720(param_3);
    }
    _objc_destroyWeak(auStack_80);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106586e4c; end: 106586e63;  */

void FUN_106586e4c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106586e64; end: 106586fe3;  */

void FUN_106586e64(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSAdaptiveImageGlyph_1126cb970;
  _objc_opt_class(PTR__OBJC_CLASS___NSAdaptiveImageGlyph_1126cb970);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0d3c80();
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar7 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      _objc_release(uVar7);
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    }
    func_0x00010c130d20(lVar4);
    puVar2 = PTR_PTR_1126cb8f0;
    uVar8 = *(ulong *)(param_1 + 0x28);
    _objc_retain(uVar8);
    _objc_opt_class(puVar2);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar2);
    uVar3 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (uVar3 != 0) {
      uVar6 = param_2;
      func_0x00010bfe7260(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d040(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010c066080();
      _objc_release(param_1);
      _objc_release(puVar2);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106586fe4; end: 1065871c3; -[SCChatInputViewController textViewShouldBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106586fe4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274ab20;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained();
    lVar2 = lVar5;
    func_0x00010c065840();
    _objc_release(lVar5);
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      uVar6 = 0;
      goto LAB_1065871a0;
    }
  }
  lVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = param_3;
    func_0x00010c27e220();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    lVar2 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    if (lVar2 != lVar3) {
      lVar5 = param_3;
      func_0x00010c27e220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c0d3c80();
      _objc_release(lVar5);
      lVar5 = param_3;
      func_0x00010bfb3a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar1,param_2,lVar5,uVar6);
      _objc_release(lVar5);
      func_0x00010c21ade0(param_3,param_2,lVar1);
      goto LAB_106587138;
    }
  }
  else {
LAB_106587138:
    _objc_release(lVar1);
  }
  func_0x00010c0663c0(*(undefined8 *)(param_1 + _DAT_11274aac0),param_2,param_1,param_3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
  puVar4 = PTR_PTR_1126cb968;
  func_0x00010c2a5a00(PTR_PTR_1126cb968,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar4);
  _objc_release(puVar4);
  uVar6 = 1;
LAB_1065871a0:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1065871c4; end: 106587257; -[SCChatInputViewController textViewShouldEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065871c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aac0);
  _objc_retain(param_3);
  func_0x00010c0663e0(uVar2,param_2,param_1,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274aa9c);
  puVar1 = PTR_PTR_1126cb968;
  func_0x00010c2a6380(PTR_PTR_1126cb968,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 1;
}


