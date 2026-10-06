/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068733e4; end: 1068733ef; -[SCMapDefaultPersonLocationStringsProvider .cxx_destruct] */

void FUN_1068733e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068733f0; end: 1068734a3; +[SCMapBitmojiLabelUtil bitmojiLabelNameFromPersonLocation:friendsProvider:currentUserId:] */

void FUN_1068733f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0b96e0(param_4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bdd48a0(param_1,param_2,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1068734a4; end: 10687355f; +[SCMapBitmojiLabelUtil bitmojiLabelLastSeenFromPersonLocations:currentUserId:showAgo:] */

void FUN_1068734a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 1)) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd4880(param_1,param_2,lVar1,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106873560; end: 10687372f; +[SCMapBitmojiLabelUtil bitmojiLabelTrailingTextFromPersonLocations:friendsProvider:currentUserId:] */

void FUN_106873560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bf529e0(param_5);
  func_0x00010bffc4a0(puVar2);
  uVar9 = 0;
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      uVar4 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_6;
      func_0x00010c0b96e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar5 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  puVar6 = puVar2;
  uVar4 = param_7;
  func_0x00010bdd48c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  func_0x00010bf51c80(puVar6);
  uVar10 = uVar9;
  uVar11 = param_2;
  func_0x00010bf51c80(uVar4);
  _objc_release(uVar4);
  func_0x000108d312a8(uVar9,param_2,uVar10,uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010be053d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__distanceStringFormatted__11255ee90);
  return;
}



/* Entry: 106873730; end: 1068737b3; +[SCMapBitmojiLabelUtil bitmojiLabelDistanceFromPersonLocation:currentUserLocation:] */

void FUN_106873730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  func_0x00010bf51c80(param_5);
  uVar1 = param_1;
  uVar2 = param_2;
  func_0x00010bf51c80(param_6);
  _objc_release(param_6);
  func_0x000108d312a8(param_1,param_2,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be053d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__distanceStringFormatted__11255ee90);
  return;
}



/* Entry: 1068737b4; end: 106873ac7; +[SCMapBitmojiLabelUtil _bitmojiLabelNameFromPeople:currentUserId:] */

void FUN_1068737b4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_130;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(ppuVar1,param_2,uVar2);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar9 = &puStack_130;
  puVar10 = auStack_e8;
  uVar2 = param_3;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      uVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_128 + uVar13 * 8);
        lVar3 = lVar11;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0720c0();
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          func_0x00010bf85720();
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 != 0) {
            func_0x00010befa120(ppuVar1,param_2,lVar11);
          }
        }
        else {
          func_0x000106874f5c();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c09e420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar1,param_2,lVar4);
          _objc_release(lVar4);
          lVar11 = lVar3;
        }
        _objc_release(lVar11);
        uVar13 = uVar13 + 1;
      } while (uVar2 != uVar13);
      ppuVar9 = &puStack_130;
      puVar10 = auStack_e8;
      uVar2 = param_3;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  uVar2 = param_3;
  _objc_release();
  func_0x00010bcbeb30();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((uVar2 & 1) == 0) {
    ppuVar5 = ppuVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e62738;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
  }
  else {
    ppuVar6 = ppuVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar5 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar5 < (undefined **)0x2) {
    _objc_retain(ppuVar6);
    ppuVar5 = ppuVar6;
  }
  else {
    ppuVar7 = ppuVar1;
    func_0x00010bf529e0();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar7 == (undefined **)0x2) {
      func_0x000106874ecc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar7;
      func_0x00010c14de00(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
    }
    else {
      func_0x000106874ee4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      ppuVar9 = ppuVar7;
      func_0x00010c14de00(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar9);
    _objc_retain(puVar10);
    ppuVar1 = ppuVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar1;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    _objc_release(ppuVar1);
    if ((int)ppuVar6 == 0) {
      ppuVar5 = ppuVar9;
      func_0x00010bf85720(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106874f5c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar1;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
    }
    _objc_release(ppuVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106873ac8; end: 106873b7f; +[SCMapBitmojiLabelUtil _bitmojiLabelNameFromPerson:currentUserId:] */

void FUN_106873ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(param_4);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010bf85720(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106874f5c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c09e420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106873b80; end: 106873c5f; +[SCMapBitmojiLabelUtil _bitmojiLabelLastSeenFromSinglePersonLocation:currentUserId:showAgo:] */

void FUN_106873b80(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(param_4);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf64de0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5a60(0x404e000000000000,puVar3,param_2,uVar1,param_5,0x18,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106873c60; end: 106873ddf; +[SCMapBitmojiLabelUtil _bitmojiLabelTrailingTextFromRemainingPeople:currentUserId:] */

void FUN_106873c60(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x1) {
    puVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release();
    if ((int)puVar2 == 0) {
      puVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf85720();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106874f5c();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000106874eb4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c14de00(puVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106874e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106873de0; end: 106873f47; +[SCMapBitmojiLabelUtil _distanceStringFormatted:] */

void FUN_106873de0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  dVar7 = 1000.0;
  if ((int)puVar3 == 0) {
    dVar7 = 1609.344;
  }
  if (10.0 <= param_1 / dVar7) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dba0f8;
  }
  else if (1.0 <= param_1 / dVar7) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e29f18;
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110db2378;
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  if ((int)puVar3 == 0) {
    func_0x000106874f2c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106874f44();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar2,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106873f48; end: 106873f7b; +[SCMapCalloutUtil preferredDistanceFormatter] */

void FUN_106873f48(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88;
  _objc_alloc_init(PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88);
  func_0x00010c21b920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106873f7c; end: 106874023; +[SCMapCalloutUtil locationAccuracyStringForDistance:distanceFormatter:] */

void FUN_106873f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000106874efc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c25d440(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14de00(puVar3,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106874024; end: 1068740ef; +[SCMapCalloutUtil lastSeenLocationAccuracyStringForDistance:distanceFormatter:lastSeenDateString:] */

void FUN_106874024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000106874f14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09eae0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14de00(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068740f0; end: 1068741bf; +[SCMapCalloutUtil adjustedAccuracyDistanceForDistance:] */

int FUN_1068740f0(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    param_1 = param_1 * 3.28084;
    dVar4 = 5280.0;
  }
  else {
    dVar4 = 1000.0;
  }
  if (dVar4 <= param_1) {
    param_1 = param_1 / dVar4;
  }
  dVar5 = (double)(float)param_1;
  dVar4 = dVar5;
  _log10(dVar5);
  dVar4 = (double)(long)dVar4;
  ___exp10(dVar4);
  return (int)(dVar4 * (double)(long)(dVar5 / dVar4));
}



/* Entry: 1068741c0; end: 106874467; +[SCMapCalloutUtil calloutTitleFromPersonLocations:groupsProvider:friendsProvider:currentUserId:] */

void FUN_1068741c0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar7 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar6 = param_3;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar7 = param_3;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x1) {
      puVar7 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_5;
      func_0x00010c0b96e0(param_5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar3 = puVar1;
      puVar7 = param_6;
      func_0x00010bdd8fc0(param_1,param_2,puVar1,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      puVar7 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x00010bffc4a0(puVar1,param_2,puVar7);
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(param_3);
      puVar7 = auStack_f0;
      puVar5 = (undefined *)0x10;
      puVar6 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar7,0x10);
      if (puVar6 != (undefined *)0x0) {
        lVar8 = *plStack_120;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(param_3);
            }
            uVar2 = *(undefined8 *)(lStack_128 + (long)puVar7 * 8);
            func_0x00010c2923e0(uVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = param_5;
            func_0x00010c0b96e0(param_5,param_2,uVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            if (puVar3 != (undefined *)0x0) {
              func_0x00010befa120(puVar1,param_2,puVar3);
            }
            _objc_release(puVar3);
            puVar7 = puVar7 + 1;
          } while (puVar6 != puVar7);
          puVar7 = auStack_f0;
          puVar5 = (undefined *)0x10;
          puVar6 = param_3;
          func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar7,0x10);
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(param_3);
      puVar6 = param_4;
      puVar3 = puVar1;
      func_0x00010bf85ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        puVar3 = puVar1;
        puVar7 = param_6;
        func_0x00010bdd8fa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = param_1;
      }
    }
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    puVar6 = puVar3;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar3;
      func_0x00010bf529e0();
      if (puVar6 == (undefined *)0x1) {
        puVar6 = puVar3;
        func_0x00010bfb1920(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdd8f60(param_3,param_2,puVar6,puVar7,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = param_3;
      }
      else {
        func_0x00010be4f880(param_3,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_3;
      }
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106874468; end: 10687453f; +[SCMapCalloutUtil calloutSubtitleFromPersonLocations:currentUserSharingLocation:currentUserId:] */

void FUN_106874468(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 1) {
      lVar1 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd8f60(param_1,param_2,lVar1,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    else {
      func_0x00010be4f880(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106874540; end: 1068745ff; +[SCMapCalloutUtil calloutTextFromPersonLocations:distanceFormatter:] */

void FUN_106874540(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_4;
    func_0x00010bfb1920(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe4080();
    _objc_release(lVar1);
    if (100.0 < param_1) {
      func_0x00010c09eae0(param_1,param_2,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1068745d8;
    }
  }
  param_2 = 0;
LAB_1068745d8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106874600; end: 106874643; +[SCMapCalloutUtil calloutTitleForMe] */

void FUN_106874600(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000106874f5c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c09e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106874644; end: 106874a27; +[SCMapCalloutUtil _calloutTitleFromPeople:currentUserId:] */

void FUN_106874644(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar6 = &uStack_130;
  puVar14 = auStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        lVar15 = *(long *)(lStack_128 + lVar17 * 8);
        lVar3 = lVar15;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0720c0();
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar15;
          func_0x00010901e6c8();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar15);
          if (lVar3 != 0) goto LAB_106874770;
        }
        else {
          lVar3 = param_1;
          func_0x00010bf289c0(param_1);
          _objc_retainAutoreleasedReturnValue();
LAB_106874770:
          func_0x00010befa120(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        lVar17 = lVar17 + 1;
      } while (lVar2 != lVar17);
      puVar6 = &uStack_130;
      puVar14 = auStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 < (undefined8 *)0x2) {
    puVar13 = puVar1;
    func_0x00010bfb1920(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = puVar1;
    func_0x00010bf529e0();
    puVar5 = puVar1;
    if (puVar6 < (undefined8 *)0x7) {
      puVar6 = puVar1;
      func_0x00010bf529e0(puVar1);
      puVar14 = (undefined *)((long)puVar6 + -1);
      func_0x00010c25e980(puVar1,param_2,0,puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010bfcf7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf446e0(puVar5,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar6);
      _objc_release();
      puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000106874ecc();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c14de00(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar7);
    }
    else {
      puVar14 = (undefined *)0x5;
      func_0x00010c25e980(puVar1,param_2,0,5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bfcf7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010bf446e0(puVar5,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010bf529e0();
      puVar12 = puVar5;
      func_0x00010bf529e0();
      puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000106874ee4();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010c14de00(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
    }
    _objc_release(puVar11);
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    _objc_retain(puVar14);
    puVar1 = puVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar14);
    _objc_release(puVar1);
    if ((int)puVar5 == 0) {
      puVar13 = puVar6;
      func_0x00010bf85d80(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106874f5c();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106874a28; end: 106874adf; +[SCMapCalloutUtil _calloutTitleFromPerson:currentUserId:] */

void FUN_106874a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(param_4);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106874f5c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c09e420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106874ae0; end: 106874cdb; +[SCMapCalloutUtil _calloutSubtitleFromSinglePersonLocation:currentUserSharingLocation:currentUserId:] */

void FUN_106874ae0(undefined8 param_1,undefined8 param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(param_5);
  _objc_release(ppuVar1);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)ppuVar4 == 0) {
    ppuVar4 = param_3;
    func_0x00010bf64de0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5a60(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = param_3;
    func_0x00010c297f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010c08fa60();
    ppuVar3 = param_3;
    if (ppuVar2 == (undefined **)0x0) {
      func_0x00010c09e300();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c297f60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar4);
    ppuVar2 = ppuVar3;
    func_0x00010c08fa60();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar2 == (undefined **)0x0) {
      _objc_retain(ppuVar1);
      ppuVar4 = ppuVar1;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e5acf8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5acf8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar3);
  }
  else {
    if ((param_4 & 1) == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e39578;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e39578,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106874cb0;
    }
    ppuVar1 = param_3;
    func_0x00010c297f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      ppuVar4 = param_3;
      func_0x00010c297f60(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(ppuVar1);
LAB_106874cb0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106874cdc; end: 106874e9b; +[SCMapCalloutUtil _locationStringForPersonLocations:] */

void FUN_106874cdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ba200(param_3,param_2,&PTR___NSConcreteGlobalBlock_110944b40,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 1) {
    lVar4 = lVar1;
    func_0x00010bf04a20(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c0ba200(param_3,param_2,&PTR___NSConcreteGlobalBlock_110944b60,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    lVar4 = 0;
    if (lVar3 == 1) {
      lVar4 = lVar2;
      func_0x00010bf04a20(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106874e9c; end: 10687540b;  */

void FUN_106874e9c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e62758;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e62758,
                      &PTR____CFConstantStringClassReference_110e62778,0);
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



/* Entry: 10687540c; end: 106875497;  */

void FUN_10687540c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0ea8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  FUN_106875498(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x00010c1c1d00(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106875498; end: 1068756b7;  */

void FUN_106875498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1068756b8;
  uStack_50 = 0x1068756c8;
  uStack_48 = 0;
  func_0x00010c0bd3e0(param_1);
  puVar1 = PTR_PTR_1126ce858;
  _objc_alloc_init(PTR_PTR_1126ce858);
  func_0x00010c0e9800(param_2);
  func_0x00010c1d50a0(puVar1);
  func_0x00010c0e9820(param_2);
  func_0x00010c1d50e0(puVar1);
  func_0x00010bfcdfe0(param_2);
  func_0x00010c1a4360(puVar1);
  func_0x00010c2479a0(param_2);
  func_0x00010c206f60(puVar1);
  func_0x00010c206d60(puStack_68[5]);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068756b8; end: 1068756cf;  */

void FUN_1068756b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068756d0; end: 1068757bf;  */

void FUN_1068756d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c3160;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ce860;
  _objc_alloc_init(PTR_PTR_1126ce860);
  func_0x00010c18b1a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1068757c0; end: 1068757c7;  */

void FUN_1068757c0(void)

{
  return;
}



/* Entry: 1068757c8; end: 106875a9b;  */

void FUN_1068757c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c3160;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126ce870;
  _objc_alloc_init(PTR_PTR_1126ce870);
  puVar3 = PTR_PTR_1126bf330;
  _objc_alloc_init(PTR_PTR_1126bf330);
  puVar4 = PTR_PTR_1126bc210;
  _objc_alloc_init(PTR_PTR_1126bc210);
  func_0x00010c1b9120(param_1);
  func_0x00010c1be5e0(param_2,puVar4);
  func_0x00010c1d7ca0(puVar3);
  puVar5 = PTR_PTR_1126bc210;
  _objc_alloc_init(PTR_PTR_1126bc210);
  func_0x00010c1b9120(param_3);
  func_0x00010c1be5e0(param_4,puVar5);
  func_0x00010c1d7cc0(puVar3);
  func_0x00010c1739e0(puVar2);
  if (param_6 < 3) {
    func_0x00010c1dc9a0(puVar2);
  }
  func_0x00010c1dc3a0(puVar2);
  func_0x00010c1dc680(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar1;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106875a9c; end: 106875aaf;  */

void FUN_106875a9c(void)

{
  return;
}



/* Entry: 106875ab0; end: 1068762eb;  */

void FUN_106875ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  int iVar22;
  undefined *puVar23;
  undefined8 uVar24;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1513e0();
  _objc_release(uVar2);
  puVar21 = PTR_PTR_1126b5c58;
  puVar23 = (undefined *)0x0;
  iVar22 = (int)uVar3;
  uVar2 = param_2;
  if (iVar22 < 4) {
    if (iVar22 == 1) {
LAB_106875f5c:
      puVar23 = PTR_PTR_1126b5c58;
      func_0x00010bf6a9e0(PTR_PTR_1126b5c58);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1068762b8;
    }
    if (iVar22 == 2) {
      func_0x00010c0b85e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfb36c0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb92a0(puVar21,param_3,uVar14,0,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
LAB_106875fe0:
      _objc_release(uVar3);
    }
    else {
      if (iVar22 != 3) goto LAB_1068762b8;
      _objc_retain(param_2);
      uVar3 = param_2;
      func_0x00010c0b85e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      uVar16 = param_2;
      uVar24 = param_1;
      func_0x00010c0b85e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      _CLLocationCoordinate2DMake(param_1,uVar24);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar3);
      puVar21 = PTR_PTR_1126b5c58;
      func_0x00010c0b85e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0fc8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_2;
      func_0x00010c0b85e0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010bf0de60();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = param_2;
      func_0x00010c0b85e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar20;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0fc860();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_2;
      func_0x00010c0b85e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c09e500();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar11 = param_2;
      func_0x00010c0b85e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      uVar12 = uVar11;
      func_0x00010c0fd300(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c0fd300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247b60();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fd000(param_1,uVar24,puVar21,param_3,0,0,uVar15,0,uVar19,uVar6,uVar10,
                          &PTR____CFConstantStringClassReference_110dba178,puVar23);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar3);
    }
  }
  else {
    if (iVar22 - 6U < 2) goto LAB_106875f5c;
    if (iVar22 != 4) {
      if (iVar22 != 5) goto LAB_1068762b8;
      _objc_retain(param_2);
      uVar3 = param_2;
      func_0x00010c0b85e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010c102dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08aca0();
      uVar15 = param_2;
      uVar17 = param_1;
      func_0x00010c0b85e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c102dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09abe0();
      _CLLocationCoordinate2DMake(param_1,uVar17);
      uVar18 = param_1;
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar3);
      puVar21 = PTR_PTR_1126b5c58;
      func_0x00010c0b85e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      uVar3 = uVar2;
      func_0x00010c102dc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf200();
      func_0x00010bf51d40(param_1,uVar17,uVar18,puVar21);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106875fe0;
    }
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c0fd3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c0fd680();
    _objc_release(uVar14);
    _objc_release(uVar3);
    uVar1 = 2;
    if ((int)uVar15 != 2) {
      uVar1 = (int)uVar15 == 1;
    }
    uVar3 = param_2;
    func_0x00010c0b85e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c0fd3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c0f07a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar17 = param_2;
    uVar4 = param_1;
    func_0x00010c0b85e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c0fd3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c0f07a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    _CLLocationCoordinate2DMake(param_1,uVar4);
    uVar5 = param_1;
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010c0b85e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c0fd3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c0f07c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar17 = param_2;
    uVar6 = uVar5;
    func_0x00010c0b85e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c0fd3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c0f07c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    _CLLocationCoordinate2DMake(uVar5,uVar6);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar3);
    puVar21 = PTR_PTR_1126b5c58;
    func_0x00010c0b85e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar3 = uVar2;
    func_0x00010c0fd3a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fd700(param_1,uVar4,uVar5,uVar6,puVar21,param_3,uVar1,uVar14,
                        &PTR____CFConstantStringClassReference_110daafd8,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  puVar23 = puVar21;
LAB_1068762b8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1068762ec; end: 10687639f;  */

void FUN_1068762ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c247640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b5c50;
  _objc_alloc(PTR_PTR_1126b5c50);
  uVar3 = uVar1;
  func_0x00010c0e9800(uVar1);
  uVar4 = uVar1;
  func_0x00010c0e9840(uVar1);
  uVar5 = uVar1;
  func_0x00010bfcdf60(uVar1);
  uVar6 = uVar1;
  func_0x00010c2479a0(uVar1);
  func_0x00010c031b80(puVar2,param_2,(long)(int)uVar3,(long)(int)uVar4,(long)(int)uVar5,
                      (long)(int)uVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068763a0; end: 1068764ab;  */

undefined1 FUN_1068763a0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bd3e0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1068764ac; end: 1068764e7;  */

void FUN_1068764ac(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1068764e8; end: 1068765b3; +[SCMapPlaceActionSheetOption optionWithTitle:subtitle:imageUrl:showsCaret:tapHandler:] */

void FUN_1068764e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2098;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c216240();
  _objc_release(param_3);
  func_0x00010c20f6c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1aabc0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c202580(puVar1,param_2,param_6);
  func_0x00010c211be0(puVar1,param_2,param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068765b4; end: 10687663f; +[SCMapPlaceActionSheetOption destructiveOptionWithTitle:tapHandler:] */

void FUN_1068765b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2098;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c216240();
  _objc_release(param_3);
  func_0x00010c18c540(puVar1,param_2,1);
  func_0x00010c202580(puVar1,param_2,0);
  func_0x00010c211be0(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106876640; end: 10687664f; -[SCMapPlaceActionSheetOption isTall] */

bool FUN_106876640(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 106876650; end: 106876657; -[SCMapPlaceActionSheetOption destructive] */

undefined1 FUN_106876650(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106876658; end: 10687665f; -[SCMapPlaceActionSheetOption setDestructive:] */

void FUN_106876658(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106876660; end: 106876667; -[SCMapPlaceActionSheetOption showsCaret] */

undefined1 FUN_106876660(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106876668; end: 10687666f; -[SCMapPlaceActionSheetOption setShowsCaret:] */

void FUN_106876668(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106876670; end: 106876677; -[SCMapPlaceActionSheetOption title] */

undefined8 FUN_106876670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106876678; end: 10687667f; -[SCMapPlaceActionSheetOption setTitle:] */

void FUN_106876678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106876680; end: 106876687; -[SCMapPlaceActionSheetOption subtitle] */

undefined8 FUN_106876680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106876688; end: 10687668f; -[SCMapPlaceActionSheetOption setSubtitle:] */

void FUN_106876688(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106876690; end: 106876697; -[SCMapPlaceActionSheetOption imageUrl] */

undefined8 FUN_106876690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106876698; end: 10687669f; -[SCMapPlaceActionSheetOption setImageUrl:] */

void FUN_106876698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1068766a0; end: 1068766a7; -[SCMapPlaceActionSheetOption tapHandler] */

undefined8 FUN_1068766a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068766a8; end: 1068766af; -[SCMapPlaceActionSheetOption setTapHandler:] */

void FUN_1068766a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1068766b0; end: 1068766f7; -[SCMapPlaceActionSheetOption .cxx_destruct] */

void FUN_1068766b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068766f8; end: 1068767cb; -[SCMapPlaceActionSheetController initWithContentFetcher:onDismissCallback:onDoneCallback:] */

undefined1 *
FUN_1068766f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f38e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068767cc; end: 106876dab; -[SCMapPlaceActionSheetController presentActionSheetOnViewController:title:options:] */

void FUN_1068767cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_5);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_5);
  lVar10 = param_5;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar11 = *plStack_150;
    do {
      lVar12 = 0;
      do {
        if (*plStack_150 != lVar11) {
          _objc_enumerationMutation(param_5);
        }
        uVar13 = *(ulong *)(lStack_158 + lVar12 * 8);
        uVar2 = uVar13;
        func_0x00010c080a60();
        puVar4 = PTR_PTR_1126b10a0;
        uVar3 = uVar13;
        func_0x00010c2711a0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        if ((uVar2 & 1) == 0) {
          func_0x00010c0ec240(puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c268ba0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar3);
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_106876dac;
        puStack_170 = &UNK_110861e38;
        puVar5 = puVar4;
        uStack_168 = uVar13;
        func_0x00010bf1d200(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar2 = uVar13;
        func_0x00010bf6f160();
        if ((int)uVar2 == 0) {
          uVar2 = uVar13;
          func_0x00010c260dc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar2 != 0) {
            uVar2 = uVar13;
            func_0x00010c260dc0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18c5c0(puVar5);
            _objc_release(uVar2);
          }
        }
        else {
          func_0x00010c18c540(puVar5);
        }
        uVar2 = uVar13;
        func_0x00010bfe8fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar2 != 0) {
          puVar6 = PTR_PTR_1126ae568;
          _objc_alloc_init();
          puVar4 = PTR_PTR_1126b20c0;
          uVar2 = uVar13;
          func_0x00010bfe8fe0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          FUN_10687982c(0x4043000000000000,puVar4,uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          puVar8 = PTR_PTR_1126b20c0;
          uVar7 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1a8 = 0xc2000000;
          pcStack_1a0 = FUN_106876df0;
          puStack_198 = &UNK_11086dbb8;
          puStack_190 = puVar6;
          _objc_retain(puVar6);
          FUN_106879d48(puVar8,puVar4,uVar7,&puStack_1b0);
          _objc_release(uVar7);
          puVar8 = PTR_PTR_1126b0648;
          _objc_alloc(PTR_PTR_1126b0648);
          func_0x00010c01cb60();
          func_0x00010c19f0e0(0,0,0x4043000000000000,0x4043000000000000);
          func_0x00010c1b9fe0(puVar5);
          _objc_release(puVar8);
          _objc_release(puStack_190);
          _objc_release(puVar6);
          _objc_release(puVar4);
        }
        func_0x00010c23b280();
        if ((int)uVar13 != 0) {
          func_0x00010c161a60(puVar5);
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar5);
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
      lVar10 = param_5;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_5);
  puVar4 = PTR_PTR_1126b10a0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110dbb618;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar9);
  puVar4 = PTR_PTR_1126b10a0;
  puVar8 = puVar5;
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110dbb618;
    uVar7 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar9);
  }
  puVar4 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c18b5e0();
  if (param_4 != 0) {
    uStack_118 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_110 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    func_0x00010c16b740(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  func_0x00010c10af80(param_3);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf82fe0(uVar7);
  lVar10 = *(long *)(param_3 + 0x20);
  func_0x00010c269080();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 106876dac; end: 106876def;  */

void FUN_106876dac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf82fe0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269080();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106876df0; end: 106876dfb;  */

void FUN_106876df0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 106876dfc; end: 106876e47;  */

void FUN_106876dfc(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_2);
  (*pcVar2)(lVar1);
  func_0x00010bf82fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106876e48; end: 106876e5b; -[SCMapPlaceActionSheetController actionSheetDidDismiss:] */

void FUN_106876e48(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106876e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106876e5c; end: 106876e97; -[SCMapPlaceActionSheetController .cxx_destruct] */

void FUN_106876e5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106876e98; end: 106876e9f;  */

void FUN_106876e98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 106876ea0; end: 10687710b;  */

undefined ** FUN_106876ea0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db9f18;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0fd320();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071f40();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf0de60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c08fa60();
      _objc_release(uVar1);
      if (uVar2 == 0) {
        uVar1 = param_1;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        ppuVar3 = &PTR____CFConstantStringClassReference_110e5b3d8;
        func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e5b3d8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010c0720c0(uVar2,param_2,ppuVar3);
        _objc_release(ppuVar3);
        if ((uVar1 & 1) == 0) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e5bab8;
          func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e5bab8);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar2;
          func_0x00010c0720c0(uVar2,param_2,ppuVar3);
          _objc_release(ppuVar3);
          if ((uVar1 & 1) == 0) {
            ppuVar3 = &PTR____CFConstantStringClassReference_110dba018;
            func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110dba018);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar2;
            func_0x00010c0720c0(uVar2,param_2,ppuVar3);
            _objc_release(ppuVar3);
            if ((uVar1 & 1) == 0) {
              ppuVar3 = &PTR____CFConstantStringClassReference_110e62e38;
              func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e62e38);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar2;
              func_0x00010c0720c0(uVar2,param_2,ppuVar3);
              _objc_release(ppuVar3);
              ppuVar3 = &PTR____CFConstantStringClassReference_110e62e38;
              if ((uVar1 & 1) == 0) {
                ppuVar3 = &PTR____CFConstantStringClassReference_110e62e58;
                func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e62e58);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = uVar2;
                func_0x00010c0720c0(uVar2,param_2,ppuVar3);
                _objc_release(ppuVar3);
                if ((uVar1 & 1) == 0) {
                  ppuVar3 = &PTR____CFConstantStringClassReference_110e62e78;
                  func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e62e78);
                  _objc_retainAutoreleasedReturnValue();
                  uVar1 = uVar2;
                  func_0x00010c0720c0(uVar2,param_2,ppuVar3);
                  _objc_release(ppuVar3);
                  ppuVar3 = &PTR____CFConstantStringClassReference_110e62f18;
                  if ((int)uVar1 == 0) {
                    ppuVar3 = &PTR____CFConstantStringClassReference_110db9f18;
                  }
                }
                else {
                  ppuVar3 = &PTR____CFConstantStringClassReference_110e62ef8;
                }
              }
            }
            else {
              ppuVar3 = &PTR____CFConstantStringClassReference_110e62ed8;
            }
          }
          else {
            ppuVar3 = &PTR____CFConstantStringClassReference_110e62eb8;
          }
        }
        else {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e04238;
        }
        _objc_release(uVar2);
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e62e98;
      }
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110db9e78;
    }
  }
  _objc_release(param_1);
  return ppuVar3;
}



/* Entry: 10687710c; end: 10687721f;  */

void FUN_10687710c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  _objc_retain(puVar1);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bfb2040(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106877220; end: 106877357;  */

bool FUN_106877220(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_stack_00000000;
  double in_stack_00000008;
  
  dVar7 = ABS(param_7 - param_5) * 0.4;
  dVar8 = ABS(param_8 - param_6) * 0.4;
  param_5 = param_5 + dVar7;
  param_6 = param_6 + dVar8;
  _CLLocationCoordinate2DMake();
  param_7 = param_7 - dVar7;
  param_8 = param_8 - dVar8;
  _CLLocationCoordinate2DMake();
  dVar7 = param_7;
  dVar5 = param_6;
  _CLLocationCoordinate2DMake();
  dVar8 = param_5;
  dVar6 = param_8;
  _CLLocationCoordinate2DMake();
  bVar2 = false;
  bVar3 = true;
  if (param_1 <= param_7) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_7) && !NAN(param_3)) {
      bVar2 = param_7 == param_3;
      bVar3 = param_3 <= param_7;
    }
  }
  bVar1 = true;
  bVar4 = false;
  if (!bVar3 || bVar2) {
    bVar1 = false;
    bVar4 = true;
    if (!NAN(param_8) && !NAN(param_2)) {
      bVar1 = param_8 < param_2;
      bVar4 = false;
    }
  }
  bVar2 = false;
  bVar3 = true;
  if (bVar1 == bVar4) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_8) && !NAN(param_4)) {
      bVar2 = param_8 == param_4;
      bVar3 = param_4 <= param_8;
    }
  }
  if (bVar3 && !bVar2) {
    bVar2 = false;
    bVar3 = true;
    if (param_1 <= param_5) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_5) && !NAN(param_3)) {
        bVar2 = param_5 == param_3;
        bVar3 = param_3 <= param_5;
      }
    }
    bVar1 = true;
    bVar4 = false;
    if (!bVar3 || bVar2) {
      bVar1 = false;
      bVar4 = true;
      if (!NAN(param_6) && !NAN(param_2)) {
        bVar1 = param_6 < param_2;
        bVar4 = false;
      }
    }
    bVar2 = false;
    bVar3 = true;
    if (bVar1 == bVar4) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_6) && !NAN(param_4)) {
        bVar2 = param_6 == param_4;
        bVar3 = param_4 <= param_6;
      }
    }
    if (bVar3 && !bVar2) {
      bVar2 = false;
      bVar3 = true;
      if (param_1 <= dVar7) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar7) && !NAN(param_3)) {
          bVar2 = dVar7 == param_3;
          bVar3 = param_3 <= dVar7;
        }
      }
      bVar1 = true;
      bVar4 = false;
      if (!bVar3 || bVar2) {
        bVar1 = false;
        bVar4 = true;
        if (!NAN(dVar5) && !NAN(param_2)) {
          bVar1 = dVar5 < param_2;
          bVar4 = false;
        }
      }
      bVar2 = false;
      bVar3 = true;
      if (bVar1 == bVar4) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar5) && !NAN(param_4)) {
          bVar2 = dVar5 == param_4;
          bVar3 = param_4 <= dVar5;
        }
      }
      if (bVar3 && !bVar2) {
        bVar2 = param_4 < dVar6 || (param_3 < dVar8 || (dVar6 < param_2 || dVar8 < param_1));
        goto LAB_106877328;
      }
    }
  }
  bVar2 = false;
LAB_106877328:
  if (0.75 < ABS(in_stack_00000000 - in_stack_00000008)) {
    bVar2 = true;
  }
  return bVar2;
}



/* Entry: 106877358; end: 1068773a7;  */

void FUN_106877358(undefined8 param_1)

{
  undefined **ppuVar1;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e193f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e193f8,0);
  _objc_retainAutoreleasedReturnValue();
  FUN_1068773a8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1068773a8; end: 10687742f;  */

void FUN_1068773a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  _objc_retain(param_2);
  func_0x00010bf57f80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c25f340(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106877430; end: 106877803;  */

void FUN_106877430(ulong param_1,long param_2,undefined8 param_3,int param_4,undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puVar1 = param_5;
  _objc_retain();
  if (param_4 == 0) {
    if ((param_1 & 1) == 0) {
      func_0x000106879784();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010687976c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((param_1 & 1) == 0) {
    func_0x0001068797b4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010687979c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  if (param_2 == 1) {
    func_0x0001068797fc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
  }
  else {
    func_0x0001068797e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x0001068797cc();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4035000000000000,0x4035000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c0469e0(0x4048000000000000,0x4048000000000000);
    puStack_c0 = puVar9;
    ppuStack_b8 = (undefined **)0xc2000000;
    pcStack_b0 = FUN_106877914;
    pcStack_a8 = (code *)&UNK_110944ef8;
    uStack_90 = 0x4048000000000000;
    uStack_98 = 0x4048000000000000;
    uStack_80 = 0x4045000000000000;
    uStack_88 = 0x4045000000000000;
    auVar12 = NEON_fmov(0x4035000000000000,8);
    uStack_70 = auVar12._8_8_;
    uStack_78 = auVar12._0_8_;
    puStack_a0 = puVar4;
    _objc_retain(puVar4);
    puVar6 = puVar5;
    func_0x00010bfe91c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_a0);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  puStack_c0 = (undefined *)0x0;
  pcStack_b0 = (code *)0x3032000000;
  pcStack_a8 = FUN_106877804;
  puStack_a0 = (undefined *)0x106877814;
  uStack_98 = 0;
  puStack_f0 = puVar9;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10687781c;
  puStack_d8 = &UNK_1108647e8;
  ppuStack_b8 = &puStack_c0;
  _objc_retain(param_5);
  ppuVar7 = &puStack_f0;
  puStack_d0 = param_5;
  ppuStack_c8 = &puStack_c0;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126c3378;
  puVar9 = PTR_PTR_1126b0ae0;
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c088060(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b15a0;
  func_0x00010bf25a00(PTR_PTR_1126b15a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57e60();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = ppuStack_b8[5];
  ppuStack_b8[5] = puVar9;
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar5);
  uVar10 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar10);
  _objc_release(ppuVar7);
  _objc_release(puStack_d0);
  __Block_object_dispose(&puStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106877804; end: 10687781b;  */

void FUN_106877804(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10687781c; end: 106877863;  */

void FUN_10687781c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  func_0x00010bf84200(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106877864; end: 106877913;  */

void FUN_106877864(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e62f98);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uStack_38 = 0;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar2,0,&uStack_38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106877914; end: 1068779eb;  */

void FUN_106877914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  dVar3 = *(double *)(param_1 + 0x28);
  dVar4 = *(double *)(param_1 + 0x30);
  dVar5 = *(double *)(param_1 + 0x38);
  dVar6 = *(double *)(param_1 + 0x40);
  _objc_retain(param_2);
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010bdc1000(param_2);
  _objc_release(param_2);
  _CGContextFillEllipseInRect((dVar3 - dVar5) * 0.5,(dVar4 - dVar6) * 0.5,dVar5,dVar6,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x48)) * 0.5,
             (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x50)) * 0.5,
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 1068779ec; end: 106877cdb;  */

void FUN_1068779ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2160;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c0fd0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072ac0(param_1);
  func_0x00010c0364c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c08aca0(param_1);
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c09abe0(param_1);
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(puVar1);
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010bf33240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a060(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf20ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739a0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf33440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a98a0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c112bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2920(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0870c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7020(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0fd280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0fb760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5360(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0e9e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d52c0(puVar1);
  _objc_release(uVar2);
  func_0x00010c190aa0(puVar1);
  _objc_release(param_2);
  uVar2 = param_1;
  func_0x00010c0fd060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a7a0(puVar1);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fd680(param_1);
  _objc_release(param_1);
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2520(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106877cdc; end: 106877d73;  */

undefined ** FUN_106877cdc(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  ppuVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110db9e78);
  if (((ulong)ppuVar1 & 1) == 0) {
    ppuVar2 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddf4b8);
    ppuVar1 = param_1;
    if ((int)ppuVar2 == 0) goto LAB_106877d44;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5ac98;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5ac38;
  }
  _objc_release(param_1);
LAB_106877d44:
  ppuVar2 = ppuVar1;
  func_0x00010bc92e28(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(param_1);
  return ppuVar2;
}



/* Entry: 106877d74; end: 106877df7; -[SCMapPlacesInlineOperaViewController initWithViewWillDisappearSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106877d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f38f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112752294;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106877df8; end: 106877e93; -[SCMapPlacesInlineOperaViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106877df8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b0870;
  _objc_alloc();
  func_0x00010c033f60();
  lVar4 = (long)_DAT_112752298;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c14c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_sc_constrainToSuperviewEdges_112630c70);
  return;
}



/* Entry: 106877e94; end: 106877ef3; -[SCMapPlacesInlineOperaViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106877e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112752294),param_2,
                      PTR____kCFBooleanTrue_11034ab68);
  puStack_28 = PTR_PTR_1126f38f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 106877ef4; end: 106877f2b; -[SCMapPlacesInlineOperaViewController operaPresentingContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106877ef4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09c7a0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112752298);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106877f2c; end: 106877f33; -[SCMapPlacesInlineOperaViewController pageViewName] */

undefined8 FUN_106877f2c(void)

{
  return 0x94;
}



/* Entry: 106877f34; end: 106877f73; -[SCMapPlacesInlineOperaViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106877f34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112752298,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752294,0);
  return;
}



/* Entry: 106877f74; end: 10687819b; -[SCMapPlacesComposerVideoView initWithMapStoryPlaybackScopeExposer:mapStoryPlaybackScopeServices:mapStoryFetcher:storyAnalytics:delegate:showRecencyStoryCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106877f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f38f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275229c),param_3);
    lVar6 = (long)_DAT_1127522a0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127522a4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127522a8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127522ac),param_7);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127522b0) = param_8;
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init(PTR_PTR_1126ae820);
    func_0x00010beb1420(puVar1);
    puVar4 = PTR_PTR_1126ce888;
    _objc_alloc();
    func_0x00010c062260();
    lVar6 = (long)_DAT_1127522b4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c940();
    _objc_release(uVar2);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10687819c; end: 1068781e3; -[SCMapPlacesComposerVideoView layoutSubviews] */

void FUN_10687819c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f38f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be74780(param_1);
  return;
}



/* Entry: 1068781e4; end: 10687823b; -[SCMapPlacesComposerVideoView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068781e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bec30c0();
  _objc_storeWeak(param_1 + _DAT_1127522b8,0);
  puStack_28 = PTR_PTR_1126f38f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10687823c; end: 10687826b; -[SCMapPlacesComposerVideoView mapStoryDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687823c(long param_1)

{
  func_0x00010bec30c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127522b8,0);
  return;
}



/* Entry: 10687826c; end: 106878323; +[SCMapPlacesComposerVideoView bindAttributes:] */

void FUN_10687826c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a140(param_3,param_2,&PTR____CFConstantStringClassReference_110e63018,0,
                      &PTR___NSConcreteGlobalBlock_110944f48,&PTR___NSConcreteGlobalBlock_110944f88)
  ;
  func_0x00010bf1a060(param_3,param_2,&PTR____CFConstantStringClassReference_110dcab78,0,
                      &PTR___NSConcreteGlobalBlock_110944fc8,&PTR___NSConcreteGlobalBlock_110944fe8)
  ;
  func_0x00010bf1a140(param_3,param_2,&PTR____CFConstantStringClassReference_110e63038,0,
                      &PTR___NSConcreteGlobalBlock_110945008,&PTR___NSConcreteGlobalBlock_110945028)
  ;
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110e63058,0,
                      &PTR___NSConcreteGlobalBlock_110945068,&PTR___NSConcreteGlobalBlock_110945088)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106878324; end: 10687833f;  */

undefined8 FUN_106878324(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1dc3a0(param_2);
  return 1;
}



/* Entry: 106878340; end: 10687834b;  */

void FUN_106878340(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dc3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setPlaceId__112654b10,0);
  return;
}



/* Entry: 10687834c; end: 106878367;  */

undefined8 FUN_10687834c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2046e0(param_2);
  return 1;
}



/* Entry: 106878368; end: 1068783a3;  */

void FUN_106878368(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2046e0(param_2);
  func_0x00010bec30c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068783a4; end: 1068783bf;  */

undefined8 FUN_1068783a4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2144c0(param_2);
  return 1;
}



/* Entry: 1068783c0; end: 1068783cb;  */

void FUN_1068783c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2144d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setThumbnailUrl__112662b58,0);
  return;
}



/* Entry: 1068783cc; end: 106878597;  */

undefined8 FUN_1068783cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b1eb0;
    _objc_alloc_init(PTR_PTR_1126b1eb0);
    lVar1 = param_3;
    func_0x00010c296f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222c00(puVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c296f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207200(puVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c296f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c26e0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c296f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc800(puVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c296f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c25a0(puVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c296f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2900(puVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c296f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2400(puVar2);
    _objc_release(lVar1);
  }
  func_0x00010c220b00(param_2);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return 1;
}



/* Entry: 106878598; end: 1068785a3;  */

void FUN_106878598(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setVenueStoryAnalytics__112665ce8,0);
  return;
}



/* Entry: 1068785a4; end: 106878683; -[SCMapPlacesComposerVideoView _setupViewWillDisappearObserverWithObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068785a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127522bc);
  *(undefined8 *)(param_1 + _DAT_1127522bc) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106878684; end: 1068786af;  */

void FUN_106878684(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec30c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068786b0; end: 1068787bf; -[SCMapPlacesComposerVideoView _playIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068786b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1 + _DAT_1127522b8;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 == 0) {
        _objc_initWeak(auStack_38,param_1);
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_1068787c0;
        puStack_48 = &UNK_1108434b0;
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x0001000d76cc("APPSTORE",&puStack_60);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
    }
  }
  return;
}



/* Entry: 1068787c0; end: 1068787eb;  */

void FUN_1068787c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068787ec; end: 1068789cf; -[SCMapPlacesComposerVideoView _stopInlineVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068787ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_1127522b8;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11275229c;
    lVar1 = param_1 + lVar5;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar4;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar2 == lVar3) {
      lVar1 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar1);
      func_0x0001068788d4();
      _objc_release(lVar1);
      lVar5 = param_1 + lVar5;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + lVar4,0);
      return;
    }
  }
  return;
}



/* Entry: 1068789d0; end: 106878a87; -[SCMapPlacesComposerVideoView _stopAllVideos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068789d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bec30c0();
  lVar3 = (long)_DAT_11275229c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001068788d4();
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106878a88; end: 106878da3; -[SCMapPlacesComposerVideoView _launchStoryPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106878a88(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010bec2cc0();
  lVar1 = param_1;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c298100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        lVar1 = param_1 + _DAT_1127522ac;
        _objc_loadWeakRetained();
        lVar2 = param_1;
        func_0x00010c0fd0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010bfc8f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(lVar1);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar3 == 0) {
          lVar1 = param_1;
          func_0x00010c298100();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c0fd4a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          lVar4 = param_1;
          func_0x00010c0fd0e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar2);
          _objc_release(lVar1);
          puVar6 = PTR_PTR_1126b1e48;
          lVar1 = param_1;
          func_0x00010c0fd0e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_1;
          func_0x00010c298100(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x000107948214();
          func_0x00010c0fd380(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          _objc_release(lVar1);
          _objc_initWeak(auStack_58,param_1);
          uVar7 = *(undefined8 *)(param_1 + _DAT_1127522a4);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0fd0e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_60,auStack_58);
          func_0x00010bfa9560(uVar7);
          _objc_release(param_1);
          _objc_release(uVar7);
          _objc_destroyWeak(auStack_60);
          _objc_destroyWeak(auStack_58);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        else {
          func_0x00010be0cfa0(param_1);
        }
        _objc_release(lVar3);
      }
      return;
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106878da4; end: 106878df3;  */

void FUN_106878da4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0cfa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106878df4; end: 106878ec3; -[SCMapPlacesComposerVideoView _exposeMapStoryPlaybackScopeWithMapStorySequences:] */

void FUN_106878df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106878ec4;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106878ec4; end: 106878ef7;  */

void FUN_106878ec4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106878ef8; end: 106879497; -[SCMapPlacesComposerVideoView _exposeMapStoryPlaybackScopeOnMainWithMapStorySequences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106878ef8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010bf529e0();
  if (lVar11 != 0) {
    puVar1 = param_1;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_1;
      func_0x00010c298100();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        puVar3 = param_1;
        func_0x00010c0fd0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (puVar4 == (undefined *)0x0) goto LAB_106879474;
        puVar2 = param_1;
        func_0x00010c241420();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x000107948a24();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010bf529e0();
        if (puVar2 != (undefined *)0x0) {
          func_0x00010bec2cc0(param_1);
          puVar2 = param_1;
          func_0x00010c298100();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = *(long *)(param_1 + _DAT_1127522a8);
          _objc_retain();
          _objc_retain(lVar11);
          if ((lVar11 == 0) || (lVar5 = lVar11, func_0x00010c071ae0(), (int)lVar5 != 0)) {
            _objc_retain(puVar2);
            puVar3 = puVar2;
          }
          else {
            puVar3 = PTR_PTR_1126b1eb0;
            _objc_alloc_init(PTR_PTR_1126b1eb0);
            puVar4 = puVar2;
            func_0x00010c29e220();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
              lVar5 = lVar11;
              func_0x00010c29e220(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c222c00(puVar3);
              _objc_release(lVar5);
            }
            else {
              func_0x00010c222c00(puVar3);
            }
            _objc_release(puVar4);
            puVar4 = puVar2;
            func_0x00010c247d20();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
              lVar5 = lVar11;
              func_0x00010c247d20(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c207200(puVar3);
              _objc_release(lVar5);
            }
            else {
              func_0x00010c207200(puVar3);
            }
            _objc_release(puVar4);
            puVar4 = puVar2;
            func_0x00010c0b9de0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
              lVar5 = lVar11;
              func_0x00010c0b9de0(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c26e0(puVar3);
              _objc_release(lVar5);
            }
            else {
              func_0x00010c1c26e0(puVar3);
            }
            _objc_release(puVar4);
            puVar4 = puVar2;
            func_0x00010c0fd4a0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
              lVar5 = lVar11;
              func_0x00010c0fd4a0(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1dc800(puVar3);
              _objc_release(lVar5);
            }
            else {
              func_0x00010c1dc800(puVar3);
            }
            _objc_release(puVar4);
            puVar4 = puVar2;
            func_0x00010c0b9ce0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
              lVar5 = lVar11;
              func_0x00010c0b9ce0(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c25a0(puVar3);
              _objc_release(lVar5);
            }
            else {
              func_0x00010c1c25a0(puVar3);
            }
            _objc_release(puVar4);
            puVar4 = puVar2;
            func_0x00010c0bac20();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
              lVar5 = lVar11;
              func_0x00010c0bac20(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c2900(puVar3);
              _objc_release(lVar5);
            }
            else {
              func_0x00010c1c2900(puVar3);
            }
            _objc_release(puVar4);
            puVar4 = puVar2;
            func_0x00010c0b97e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 == (undefined *)0x0) {
              lVar5 = lVar11;
              func_0x00010c0b97e0(lVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c2400(puVar3);
              _objc_release(lVar5);
            }
            else {
              func_0x00010c1c2400(puVar3);
            }
            _objc_release(puVar4);
          }
          _objc_release(lVar11);
          _objc_release(puVar2);
          _objc_release(puVar2);
          uVar6 = 10;
          func_0x00010794808c(10,puVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + _DAT_1127522a0);
          uVar7 = *(undefined8 *)(param_1 + _DAT_1127522b4);
          func_0x00010c0eb080(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010c0fd0e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_1;
          func_0x00010c241420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010bf23580(uVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar2);
          _objc_release(uVar7);
          _objc_storeWeak(param_1 + _DAT_1127522b8,uVar12);
          param_1 = param_1 + _DAT_11275229c;
          _objc_loadWeakRetained(param_1);
          func_0x00010bf9d620();
          _objc_release(param_1);
          _objc_retain(uVar12);
          uVar7 = uVar12;
          func_0x00010c100400(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar8;
          func_0x0001068796ac(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar12;
          func_0x00010bf024c0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          uVar10 = uVar9;
          func_0x00010c0b9de0(uVar9);
          func_0x00010bb01b4c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(uVar10);
          _objc_release(uVar7);
          _objc_release(uVar8);
          _objc_release(uVar12);
          _objc_release(uVar6);
          _objc_release(puVar3);
        }
      }
    }
    _objc_release(puVar1);
  }
LAB_106879474:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


