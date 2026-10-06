/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108424750; end: 108424757; -[SCFeatureSettingsService clipboard_detector_enabled_client_value:] */

undefined * FUN_108424750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108424758; end: 10842475f; -[SCFeatureSettingsService clipboard_detector_enabled_server_value:] */

void FUN_108424758(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108424760; end: 10842476f; -[SCFeatureSettingsService allowedClipboardAccess] */

void FUN_108424760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed7cf8,0);
  return;
}



/* Entry: 108424770; end: 1084247d3; -[SCPreferences lastRecipients] */

void FUN_108424770(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
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



/* Entry: 1084247d4; end: 1084247df; -[SCPreferences setLastRecipients:] */

void FUN_1084247d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ed7d18);
  return;
}



/* Entry: 1084247e0; end: 108424843; -[SCPreferences lastRecipientsRecordedTimestamp] */

void FUN_1084247e0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7d38);
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



/* Entry: 108424844; end: 10842484f; -[SCPreferences setLastRecipientsRecordedTimestamp:] */

void FUN_108424844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ed7d38);
  return;
}



/* Entry: 108424850; end: 1084248b3; -[SCPreferences lastRecipientsSelectionString] */

void FUN_108424850(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7d58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_opt_class(PTR__OBJC_CLASS___NSAttributedString_1126af068);
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



/* Entry: 1084248b4; end: 1084248bf; -[SCPreferences setLastRecipientsSelectionString:] */

void FUN_1084248b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ed7d58);
  return;
}



/* Entry: 1084248c0; end: 108424923; -[SCPreferences lastSnapTime] */

void FUN_1084248c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7d78);
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



/* Entry: 108424924; end: 10842492f; -[SCPreferences setLastSnapTime:] */

void FUN_108424924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ed7d78);
  return;
}



/* Entry: 108424930; end: 108424993; -[SCPreferences lastSnapItems] */

void FUN_108424930(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
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



/* Entry: 108424994; end: 10842499f; -[SCPreferences setLastSnapItems:] */

void FUN_108424994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ed7d98);
  return;
}



/* Entry: 1084249a0; end: 108424a03; -[SCPreferences lastSnapTitle] */

void FUN_1084249a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7db8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_opt_class(PTR__OBJC_CLASS___NSAttributedString_1126af068);
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



/* Entry: 108424a04; end: 108424a0f; -[SCPreferences setLastSnapTitle:] */

void FUN_108424a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110ed7db8);
  return;
}



/* Entry: 108424a10; end: 108424ed3;  */

void FUN_108424a10(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    uVar1 = param_1;
    func_0x00010bf529e0();
    if (uVar1 < 4) {
      uVar4 = param_1;
      func_0x00010bf529e0();
      uVar1 = uVar4;
      if (2 < uVar4) {
        uVar1 = 3;
      }
      if (uVar4 != 0) {
        lVar9 = 0;
        while( true ) {
          uVar4 = param_1;
          func_0x00010c0dfd40(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x000108424c64();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf069e0(puVar8);
          _objc_release(uVar3);
          _objc_release(uVar4);
          if (uVar1 - 1 == lVar9) break;
          func_0x00010bf069e0(puVar8);
          lVar9 = lVar9 + 1;
        }
      }
    }
    else {
      lVar9 = 0;
      do {
        uVar1 = param_1;
        func_0x00010c0dfd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x000108424c64();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf069e0(puVar8);
        _objc_release(uVar4);
        _objc_release(uVar1);
        func_0x00010bf069e0(puVar8);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      uVar1 = param_1;
      func_0x00010bf529e0();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar1 == 4) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110ed7dd8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ed7dd8,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110ed7df8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ed7df8,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(ppuVar5);
      }
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010bf069e0(puVar8);
      _objc_release(puVar6);
      _objc_release(ppuVar7);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108424ed4; end: 108424f3b;  */

undefined8 FUN_108424ed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c08a100(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_108424f3c();
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108424f3c; end: 108424fbf;  */

bool FUN_108424f3c(double param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain();
    func_0x00010bf5e5e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(param_2);
    bVar1 = param_1 < (double)param_3;
    _objc_release(param_4);
  }
  return bVar1;
}



/* Entry: 108424fc0; end: 108425167;  */

undefined8 FUN_108424fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c08a100(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_108424f3c();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108425168; end: 1084252b7;  */

void FUN_108425168(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00010bf529e0();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_2;
      func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110a48470);
      puVar2 = puVar1;
      func_0x000100504554();
      _objc_release(puVar1);
    }
    _objc_release(param_2);
    puVar1 = puVar2;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      FUN_1084255f0(param_1,param_2);
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1084252b8;
      puStack_58 = &UNK_110860d58;
      _objc_retain(param_2);
      puStack_50 = param_2;
      _objc_retain(param_1);
      uStack_48 = param_1;
      func_0x00010842502c(puVar2,param_3,&puStack_70);
      _objc_release(uStack_48);
      _objc_release(puStack_50);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1084252b8; end: 1084255ef;  */

void FUN_1084252b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar13 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar13);
  uVar2 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110a484b0);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc();
  func_0x00010c0309e0();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar13);
  lVar5 = lVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar13);
      }
      uVar15 = *(undefined8 *)(lVar14 * 8);
      uVar6 = uVar15;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      if (((int)uVar9 == 0) && (uVar6 = uVar15, func_0x000108425bb0(), (int)uVar6 == 0)) {
        uVar6 = uVar15;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        if (puVar10 != (undefined *)0x0) {
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar15;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x000108ef82c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar15);
          func_0x00010befa120(puVar4);
          _objc_release(puVar11);
        }
      }
      else {
        func_0x00010befa120(puVar4);
      }
      lVar14 = lVar14 + 1;
    } while (lVar5 != lVar14);
    lVar5 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  puVar10 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar13);
  puVar3 = puVar10;
  FUN_1084255f0(*(undefined8 *)(param_1 + 0x28),puVar10);
  _objc_release(puVar10);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(puVar3);
  _objc_retain(param_2);
  func_0x00010bf64de0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8920(param_2);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c1b8880(param_2);
  _objc_release(puVar4);
  puVar4 = puVar3;
  FUN_108424a10(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1b8940(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1084255f0; end: 1084256ab;  */

void FUN_1084255f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8920(param_1);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010bf51e00(param_2);
  func_0x00010c1b8880(param_1);
  _objc_release(uVar2);
  uVar2 = param_2;
  FUN_108424a10(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1b8940(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084256ac; end: 1084256c3;  */

ulong FUN_1084256ac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar4 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_recipient_1126264c0);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar1 = param_2;
      func_0x00010c122a80(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1084256c4; end: 10842578f;  */

void FUN_1084256c4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c0dfd40(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar3,uVar2);
      _objc_release(puVar3);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar2 = param_1;
      func_0x00010bf529e0();
    } while (uVar4 < uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108425790; end: 10842594f;  */

void FUN_108425790(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(undefined8 *)((long)puVar9 * 8);
      func_0x00010c122a80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar8);
      if (lVar5 != 0) {
        puVar6 = param_1;
        func_0x00010c0e00e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar6);
      }
      _objc_release(lVar5);
      puVar9 = puVar9 + 1;
    } while (puVar3 != puVar9);
    puVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108425950; end: 108425a17;  */

void FUN_108425950(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108425a18; end: 108425a5b;  */

void FUN_108425a18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108425a5c; end: 108425b2f;  */

ulong FUN_108425a5c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_recipient_1126264c0);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010c122a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 108425b30; end: 108425d5f;  */

undefined8 FUN_108425b30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108425d60; end: 108425f4b;  */

void FUN_108425d60(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar10 = *(undefined8 *)((long)puVar9 * 8);
      uVar4 = uVar10;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar7 != 0) {
        func_0x00010c122a80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar10);
      }
      puVar9 = puVar9 + 1;
    } while (puVar3 != puVar9);
    puVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x000100504554();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108425f4c; end: 108425fd7;  */

void FUN_108425f4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108425fd8; end: 10842614f;  */

long * FUN_108425fd8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  plVar1 = (long *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  puVar7 = auStack_d8;
  lVar8 = 0x10;
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        uVar2 = uVar9;
        FUN_108425a5c();
        if ((int)uVar2 == 0) {
          uVar2 = uVar9;
          FUN_108425b30();
          if ((int)uVar2 != 0) {
            FUN_108425f4c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(plVar1);
            goto LAB_1084260d4;
          }
        }
        else {
          FUN_108425950();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(plVar1);
LAB_1084260d4:
          _objc_release(uVar9);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      puVar7 = auStack_d8;
      lVar8 = 0x10;
      lVar3 = param_1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(lVar8);
  puStack_178 = PTR_PTR_1126fc7b0;
  plVar1 = &lStack_180;
  lStack_180 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
  if (plVar1 != (long *)0x0) {
    _objc_retain(puVar6);
    lVar3 = plVar1[0xd];
    plVar1[0xd] = (long)puVar6;
    _objc_release(lVar3);
    _objc_retain(puVar7);
    lVar3 = plVar1[0xf];
    plVar1[0xf] = (long)puVar7;
    _objc_release(lVar3);
    _objc_retain(lVar8);
    lVar3 = plVar1[0x10];
    plVar1[0x10] = lVar8;
    _objc_release(lVar3);
    _objc_initWeak(auStack_188,plVar1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_190,auStack_188);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = plVar1[0x11];
    plVar1[0x11] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = plVar1[1];
    plVar1[1] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = plVar1[2];
    plVar1[2] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = plVar1[3];
    plVar1[3] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = plVar1[4];
    plVar1[4] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = plVar1[5];
    plVar1[5] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar3 = plVar1[6];
    plVar1[6] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    lVar3 = plVar1[0xb];
    plVar1[0xb] = (long)puVar4;
    _objc_release(lVar3);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar3 = plVar1[7];
    plVar1[7] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar3 = plVar1[8];
    plVar1[8] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar3 = plVar1[9];
    plVar1[9] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar3 = plVar1[10];
    plVar1[10] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = &UNK_10f497233;
    _dispatch_queue_create(&UNK_10f497233,0);
    lVar3 = plVar1[0xc];
    plVar1[0xc] = (long)puVar4;
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = plVar1[0xe];
    plVar1[0xe] = (long)puVar4;
    _objc_release(lVar3);
    lVar10 = plVar1[0xd];
    func_0x00010c244b40(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(lVar3);
    _objc_release(lVar10);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
  }
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return plVar1;
}



/* Entry: 108426150; end: 1084264bf; -[SCSelectionTracker initWithSnapchatterServices:sigNotificationPool:circumstanceEngine:] */

undefined8 *
FUN_108426150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fc7b0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = &UNK_10f497233;
    _dispatch_queue_create(&UNK_10f497233,0);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    uVar5 = puVar1[0xd];
    func_0x00010c244b40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1084264c0; end: 1084264ff;  */

void FUN_1084264c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be20680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108426500; end: 10842652f; -[SCSelectionTracker registerSelectionInterceptors:] */

void FUN_108426500(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108426530; end: 1084265cf; -[SCSelectionTracker setSelectionItems:disabled:] */

void FUN_108426530(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1084265d0;
    puStack_50 = &UNK_11084d5f8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    lStack_40 = param_1;
    uStack_38 = param_4;
    func_0x000107c27da4(uVar2,&puStack_68);
    _objc_release(lStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084265d0; end: 10842673f;  */

ulong FUN_1084265d0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  ulong uStack_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  ulong uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar10 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar10);
  uVar8 = SUB81(auStack_f0,0);
  uVar9 = 0x10;
  uVar1 = uVar10;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar14 = *plStack_120;
    do {
      uVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(uVar10);
        }
        uVar12 = *(undefined8 *)(lStack_128 + uVar15 * 8);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar12;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar13);
        _objc_release(uVar9);
        _objc_release(uVar12);
        _objc_release(puVar2);
        uVar15 = uVar15 + 1;
      } while (uVar1 != uVar15);
      uVar8 = SUB81(auStack_f0,0);
      uVar9 = 0x10;
      uVar1 = uVar10;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(uVar9);
  puVar3 = (undefined1 *)puVar7;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_108426adc();
  _objc_release(puVar3);
  if ((int)puVar4 == 0) {
    uVar11 = 0;
    goto LAB_108426a5c;
  }
  puStack_1e0 = &uStack_1d8;
  uStack_1d8 = 0;
  uVar12 = 0x3032000000;
  uStack_1c8 = 0x3032000000;
  pcStack_1c0 = FUN_108426b3c;
  uStack_1b8 = 0x108426b4c;
  uStack_1b0 = 0;
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_108426b54;
  puStack_1f0 = &UNK_11084b9d0;
  uStack_1e8 = uVar10;
  puStack_1d0 = puStack_1e0;
  func_0x000107c27da4(*(undefined8 *)(uVar10 + 0x60),&puStack_208);
  uVar1 = uVar10;
  func_0x00010beb3160();
  if ((int)uVar1 == 0) {
    lVar14 = puStack_1d0[5];
    puVar3 = (undefined1 *)puVar7;
    func_0x00010c122a80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 == 0) {
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      uVar15 = puStack_1d0[5];
      puVar5 = (undefined1 *)puVar7;
      func_0x00010c122a80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar15;
      func_0x00010bf1f3c0();
      _objc_release(uVar15);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar14);
      _objc_release(puVar4);
      _objc_release(puVar3);
      if ((uVar1 & 1) != 0) goto LAB_108426964;
    }
    _CACurrentMediaTime();
    uStack_250 = 0;
    uStack_240 = 0x2020000000;
    uStack_238 = 0;
    uVar13 = *(undefined8 *)(uVar10 + 0x60);
    puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_298 = 0xc2000000;
    pcStack_290 = FUN_108426bbc;
    puStack_288 = &UNK_110a484f0;
    uStack_280 = uVar10;
    puStack_248 = &uStack_250;
    _objc_retain(puVar7);
    puStack_278 = (undefined1 *)puVar7;
    puStack_268 = &uStack_250;
    uStack_258 = uVar8;
    _objc_retain(uVar9);
    uStack_270 = uVar9;
    uStack_260 = uVar12;
    func_0x000107c27da4(uVar13,&puStack_2a0);
    uVar12 = *(undefined8 *)(uVar10 + 0x30);
    func_0x00010c0ecca0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar12);
    _objc_release(uVar10);
    uVar11 = (uint)*(byte *)(puStack_248 + 3);
    _objc_release(uStack_270);
    _objc_release(puStack_278);
    __Block_object_dispose(&uStack_250,8);
  }
  else {
    _objc_initWeak(&uStack_250,uVar10);
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    uStack_220 = 0x108426b90;
    puStack_218 = &UNK_1108434b0;
    _objc_copyWeak(auStack_210,&uStack_250);
    func_0x000107c312cc("APPSTORE",&puStack_230);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(&uStack_250);
LAB_108426964:
    uVar11 = 0;
  }
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(uStack_1b0);
LAB_108426a5c:
  _objc_release(uVar9);
  _objc_release(puVar7);
  return (ulong)(uVar11 & 1);
}



/* Entry: 108426740; end: 108426adb; -[SCSelectionTracker setSelectionItem:isSelected:source:] */

byte FUN_108426740(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar9 = param_3;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  FUN_108426adc();
  _objc_release(uVar9);
  if ((int)uVar6 == 0) {
    bVar5 = 0;
    goto LAB_108426a5c;
  }
  puStack_b0 = &uStack_a8;
  uStack_a8 = 0;
  uVar9 = 0x3032000000;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108426b3c;
  uStack_88 = 0x108426b4c;
  uStack_80 = 0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108426b54;
  puStack_c0 = &UNK_11084b9d0;
  lStack_b8 = param_1;
  puStack_a0 = puStack_b0;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x60),&puStack_d8);
  lVar7 = param_1;
  func_0x00010beb3160();
  if ((int)lVar7 == 0) {
    lVar7 = puStack_a0[5];
    uVar6 = param_3;
    func_0x00010c122a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      _objc_release(uVar1);
      _objc_release(uVar6);
    }
    else {
      uVar8 = puStack_a0[5];
      uVar2 = param_3;
      func_0x00010c122a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010bf1f3c0();
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(lVar7);
      _objc_release(uVar1);
      _objc_release(uVar6);
      if ((uVar4 & 1) != 0) goto LAB_108426964;
    }
    _CACurrentMediaTime();
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    uStack_108 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_108426bbc;
    puStack_158 = &UNK_110a484f0;
    lStack_150 = param_1;
    puStack_118 = &uStack_120;
    _objc_retain(param_3);
    uStack_148 = param_3;
    puStack_138 = &uStack_120;
    uStack_128 = param_4;
    _objc_retain(param_5);
    uStack_140 = param_5;
    uStack_130 = uVar9;
    func_0x000107c27da4(uVar6,&puStack_170);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0ecca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(param_1);
    bVar5 = *(byte *)(puStack_118 + 3);
    _objc_release(uStack_140);
    _objc_release(uStack_148);
    __Block_object_dispose(&uStack_120,8);
  }
  else {
    _objc_initWeak(&uStack_120,param_1);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x108426b90;
    puStack_e8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e0,&uStack_120);
    func_0x000107c312cc("APPSTORE",&puStack_100);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(&uStack_120);
LAB_108426964:
    bVar5 = 0;
  }
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
LAB_108426a5c:
  _objc_release(param_5);
  _objc_release(param_3);
  return bVar5 & 1;
}



/* Entry: 108426adc; end: 108426b3b;  */

bool FUN_108426adc(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 108426b3c; end: 108426b53;  */

void FUN_108426b3c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108426b54; end: 108426bbb;  */

void FUN_108426b54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108426bbc; end: 1084270ff;  */

void FUN_108426bbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x28);
  puVar10 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar5 = *(undefined **)(param_1 + 0x20);
  uVar8 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010beb4300();
  if (((ulong)puVar5 & 1) != 0) {
    uVar9 = 0;
    goto LAB_1084270bc;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (puVar10 == (undefined *)0x0) {
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x000108425ce0();
      if ((uVar3 & 1) == 0) {
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
        func_0x00010c122a80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar12;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar11);
        _objc_release(uVar6);
        _objc_release(uVar12);
        func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
      }
      puVar10 = PTR_PTR_1126c5120;
      _objc_alloc();
      func_0x00010c01fd00(*(undefined8 *)(param_1 + 0x40));
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c122a80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar12;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar12);
      uStack_68 = *(undefined8 *)(param_1 + 0x28);
      puStack_60 = PTR____kCFBooleanTrue_11034ab68;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = *(undefined **)(param_1 + 0x28);
      if (lVar4 == 0) {
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar5;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        param_2 = *(undefined8 *)(param_1 + 0x28);
        puVar2 = puVar7;
        FUN_108427100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      else {
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = *(undefined8 *)(param_1 + 0x28);
        puVar2 = puVar5;
        FUN_108427100();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126b5650;
      _objc_alloc();
      func_0x00010c043e20();
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar12);
      _objc_release(puVar7);
      func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
      puVar7 = puVar2;
      func_0x00010be63b40(*(undefined8 *)(param_1 + 0x20));
      uVar8 = SUB81(puVar7,0);
      _objc_release(puVar5);
LAB_1084270a0:
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar5 = puVar10;
      _objc_release(puVar10);
    }
  }
  else if (puVar10 != (undefined *)0x0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x000108425ce0();
    if ((uVar3 & 1) == 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c122a80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar12;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar12);
      func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
    }
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c122a80(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar12;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar12);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    puStack_80 = PTR____kCFBooleanFalse_11034ab60;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = *(undefined **)(param_1 + 0x28);
    if (lVar4 == 0) {
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_2 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = puVar2;
      FUN_108427100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = puVar5;
      FUN_108427100();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    puVar2 = PTR_PTR_1126b5650;
    _objc_alloc();
    func_0x00010c043e20();
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar12);
    _objc_release(puVar5);
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    puVar5 = puVar1;
    func_0x00010be63b40(*(undefined8 *)(param_1 + 0x20));
    uVar8 = SUB81(puVar5,0);
    goto LAB_1084270a0;
  }
  uVar9 = 1;
LAB_1084270bc:
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_108427100;
  puStack_d0 = puVar2;
  puStack_c8 = puVar1;
  puStack_c0 = puVar10;
  lStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_108429a6c;
  puStack_e8 = &UNK_110a48550;
  uStack_e0 = param_2;
  uStack_d8 = uVar8;
  _objc_retain(param_2);
  func_0x000100504554(puVar5,&puStack_100);
  _objc_release(uStack_e0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108427100; end: 10842719b;  */

void FUN_108427100(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108429a6c;
  puStack_48 = &UNK_110a48550;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x000100504554(param_1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10842719c; end: 108427453; -[SCSelectionTracker setSelectionItems:isSelected:source:] */

byte FUN_10842719c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf529e0(param_4);
    lVar1 = param_2;
    func_0x00010beb3160();
    if ((int)lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(param_4);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      uStack_b8 = 0;
      uStack_a8 = 0x2020000000;
      uStack_a0 = 0;
      uVar6 = *(undefined8 *)(param_2 + 0x60);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_108427480;
      puStack_108 = &UNK_110a48520;
      puStack_b0 = &uStack_b8;
      _objc_retain(param_4);
      lStack_100 = param_4;
      uStack_c0 = param_5;
      _objc_retain(param_6);
      uStack_f8 = param_6;
      lStack_f0 = param_2;
      puStack_d0 = &uStack_b8;
      uStack_c8 = param_1;
      _objc_retain(puVar2);
      puStack_e8 = puVar2;
      _objc_retain(puVar3);
      puStack_e0 = puVar3;
      _objc_retain(puVar4);
      puStack_d8 = puVar4;
      func_0x000107c27da4(uVar6,&puStack_120);
      uVar6 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c0ecca0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(param_2);
      bVar5 = *(byte *)(puStack_b0 + 3);
      _objc_release(puStack_d8);
      _objc_release(puStack_e0);
      _objc_release(puStack_e8);
      _objc_release(uStack_f8);
      _objc_release(lStack_100);
      __Block_object_dispose(&uStack_b8,8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_1084273ec;
    }
    _objc_initWeak(&uStack_b8,param_2);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108427454;
    puStack_80 = &UNK_1108434b0;
    _objc_copyWeak(auStack_78,&uStack_b8);
    func_0x000107c312cc("APPSTORE",&puStack_98);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(&uStack_b8);
  }
  bVar5 = 0;
LAB_1084273ec:
  _objc_release(param_6);
  _objc_release(param_4);
  return bVar5 & 1;
}



/* Entry: 108427454; end: 10842747f;  */

void FUN_108427454(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108427480; end: 108427a2f;  */

void FUN_108427480(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long lVar10;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 uVar11;
  undefined *unaff_x26;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined1 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
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
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar8 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  uVar9 = SUB81(auStack_f0,0);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x21 = *plStack_130;
    unaff_x22 = lVar4;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_130 != unaff_x21) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x24 = *(undefined **)(lStack_138 + unaff_x23 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        FUN_108426adc();
        _objc_release(unaff_x25);
        if ((int)unaff_x26 == 0) goto LAB_108427950;
        unaff_x25 = *(undefined **)(*(long *)(param_1 + 0x30) + 0x10);
        unaff_x26 = unaff_x24;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = unaff_x26;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar1);
        _objc_release(unaff_x26);
        uVar2 = *(ulong *)(param_1 + 0x30);
        uVar9 = *(undefined1 *)(param_1 + 0x60);
        puVar8 = (undefined8 *)unaff_x24;
        func_0x00010beb4300();
        if ((uVar2 & 1) != 0) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 0;
          lVar4 = lVar10;
          _objc_release();
          goto LAB_1084279f4;
        }
        if (*(char *)(param_1 + 0x60) == '\x01') {
          if (unaff_x25 == (undefined *)0x0) {
            puVar1 = unaff_x24;
            func_0x000108425ce0();
            if (((ulong)puVar1 & 1) == 0) {
              uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
              puVar1 = unaff_x24;
              func_0x00010c122a80(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar1;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar11);
              _objc_release(puVar3);
              _objc_release(puVar1);
              func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58));
            }
            unaff_x25 = PTR_PTR_1126c5120;
            _objc_alloc();
            func_0x00010c01fd00(*(undefined8 *)(param_1 + 0x58));
            uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
            puVar1 = unaff_x24;
            func_0x00010c122a80(unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar11);
            _objc_release(puVar3);
            _objc_release(puVar1);
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
            puVar1 = unaff_x24;
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar1 == (undefined *)0x0) {
              func_0x00010c122a80();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_f8 = unaff_x24;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = puVar1;
              FUN_108427100();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar1);
            }
            else {
              func_0x00010c0f4aa0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = unaff_x24;
              FUN_108427100();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(unaff_x24);
            func_0x00010befa160(*(undefined8 *)(param_1 + 0x40));
            unaff_x24 = PTR_PTR_1126b5650;
            _objc_alloc();
            func_0x00010c043e20();
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
            _objc_release(unaff_x24);
LAB_108427940:
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
        }
        else if (unaff_x25 != (undefined *)0x0) {
          puVar1 = unaff_x24;
          func_0x000108425ce0();
          if (((ulong)puVar1 & 1) == 0) {
            uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
            puVar1 = unaff_x24;
            func_0x00010c122a80(unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar1;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(uVar11);
            _objc_release(puVar3);
            _objc_release(puVar1);
            func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58));
          }
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
          puVar1 = unaff_x24;
          func_0x00010c122a80(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(uVar11);
          _objc_release(puVar3);
          _objc_release(puVar1);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
          puVar1 = unaff_x24;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar3 = unaff_x24;
          if (puVar1 == (undefined *)0x0) {
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_100 = puVar3;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar1;
            FUN_108427100();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
          }
          else {
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar3;
            FUN_108427100();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar3);
          func_0x00010befa160(*(undefined8 *)(param_1 + 0x40));
          unaff_x26 = PTR_PTR_1126b5650;
          _objc_alloc();
          func_0x00010c043e20();
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
          goto LAB_108427940;
        }
LAB_108427950:
        unaff_x23 = unaff_x23 + 1;
      } while (unaff_x22 != unaff_x23);
      uVar9 = SUB81(auStack_f0,0);
      unaff_x22 = lVar10;
      puVar8 = &uStack_140;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  _objc_release(lVar10);
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x38);
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
  }
  lVar4 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x40);
    func_0x00010be63b40(*(undefined8 *)(param_1 + 0x30));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0();
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    func_0x00010c0d9840();
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 1;
LAB_1084279f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108427a30;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  lStack_160 = lVar10;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puVar1 = (undefined *)puVar8;
  FUN_108426adc();
  if ((int)puVar1 != 0) {
    lVar10 = lVar4;
    func_0x00010beb3160();
    if ((int)lVar10 == 0) {
      puVar3 = (undefined *)puVar8;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b3568;
      _objc_alloc();
      func_0x00010c03d400();
      puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      puVar7 = PTR_PTR_1126d95b8;
      _objc_alloc(PTR_PTR_1126d95b8);
      func_0x00010c034200();
      func_0x00010c0ecd80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      uVar11 = *(undefined8 *)(lVar4 + 0x60);
      puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_208 = 0xc2000000;
      pcStack_200 = FUN_108427ca4;
      puStack_1f8 = &UNK_110867cb8;
      lStack_1f0 = lVar4;
      puStack_1e8 = puVar3;
      puStack_1e0 = puVar6;
      uStack_1c8 = uVar9;
      _objc_retain(puVar8);
      puStack_1d8 = (undefined *)puVar8;
      puStack_1d0 = puVar1;
      _objc_retain(puVar1);
      _objc_retain(puVar6);
      _objc_retain(puVar3);
      func_0x000107c27da4(uVar11,&puStack_210);
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
      func_0x00010c0ecca0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar11);
      _objc_release(lVar4);
      _objc_release(puStack_1d0);
      _objc_release(puStack_1d8);
      _objc_release(puStack_1e0);
      _objc_release(puStack_1e8);
      _objc_release(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
    else {
      _objc_initWeak(auStack_198,lVar4);
      puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b8 = 0xc2000000;
      pcStack_1b0 = FUN_108427c78;
      puStack_1a8 = &UNK_1108434b0;
      _objc_copyWeak(auStack_1a0,auStack_198);
      func_0x000107c312cc("APPSTORE",&puStack_1c0);
      _objc_destroyWeak(auStack_1a0);
      _objc_destroyWeak(auStack_198);
    }
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 108427a30; end: 108427c77; -[SCSelectionTracker setSelectionParticipant:isSelected:] */

void FUN_108427a30(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_108426adc();
  if ((int)uVar1 != 0) {
    lVar2 = param_1;
    func_0x00010beb3160();
    if ((int)lVar2 == 0) {
      uVar1 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b3568;
      _objc_alloc();
      func_0x00010c03d400();
      puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      puVar4 = PTR_PTR_1126d95b8;
      _objc_alloc(PTR_PTR_1126d95b8);
      func_0x00010c034200();
      func_0x00010c0ecd80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_108427ca4;
      puStack_b8 = &UNK_110867cb8;
      lStack_b0 = param_1;
      uStack_a8 = uVar1;
      puStack_a0 = puVar3;
      uStack_88 = param_4;
      _objc_retain(param_3);
      uStack_98 = param_3;
      puStack_90 = puVar5;
      _objc_retain(puVar5);
      _objc_retain(puVar3);
      _objc_retain(uVar1);
      func_0x000107c27da4(uVar6,&puStack_d0);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0ecca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(param_1);
      _objc_release(puStack_90);
      _objc_release(uStack_98);
      _objc_release(puStack_a0);
      _objc_release(uStack_a8);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(uVar1);
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_108427c78;
      puStack_68 = &UNK_1108434b0;
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x000107c312cc("APPSTORE",&puStack_80);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108427c78; end: 108427ca3;  */

void FUN_108427c78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108427ca4; end: 10842807b;  */

void FUN_108427ca4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined **ppuStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  puVar3 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  bVar1 = *(byte *)(param_1 + 0x48);
  puVar10 = (undefined *)(ulong)bVar1;
  puStack_208 = puVar14;
  func_0x00010bf529e0();
  if (bVar1 == 1) {
    if (puVar14 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c2268e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
      _objc_release(puVar3);
      func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
      puVar9 = *(undefined8 **)(param_1 + 0x40);
      func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    }
  }
  else if (puVar14 != (undefined *)0x0) {
    puStack_210 = puVar2;
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    puVar10 = puStack_208;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(puStack_208);
    puVar9 = &uStack_1b0;
    puVar14 = puVar10;
    func_0x00010bf52a60();
    puStack_1f8 = puVar14;
    if (puVar14 != (undefined *)0x0) {
      lStack_200 = *plStack_1a0;
      ppuStack_218 = &PTR____CFConstantStringClassReference_110f52eb8;
      do {
        puVar3 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lStack_200) {
            _objc_enumerationMutation(puStack_208);
          }
          puVar14 = *(undefined **)(lStack_1a8 + (long)puVar3 * 8);
          lVar4 = *(long *)(param_1 + 0x20);
          func_0x00010bdcfc40();
          _objc_retainAutoreleasedReturnValue();
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          _objc_retain();
          lVar5 = lVar4;
          func_0x00010bf52a60();
          if (lVar5 != 0) {
            lVar11 = *plStack_1e0;
            do {
              lVar13 = 0;
              do {
                if (*plStack_1e0 != lVar11) {
                  _objc_enumerationMutation(lVar4);
                }
                uVar12 = *(undefined8 *)(lStack_1e8 + lVar13 * 8);
                puVar15 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x28);
                func_0x00010bfe5ec0(uVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar15;
                func_0x00010bf529e0();
                _objc_release(puVar15);
                _objc_release(uVar12);
                if (puVar10 != (undefined *)0x0) {
                  _objc_release(lVar4);
                  goto LAB_108427fd4;
                }
                lVar13 = lVar13 + 1;
              } while (lVar5 != lVar13);
              lVar5 = lVar4;
              func_0x00010bf52a60();
            } while (lVar5 != 0);
          }
          _objc_release(lVar4);
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
          func_0x00010c0e00e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar6;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_210);
          _objc_release(uVar12);
          _objc_release(uVar6);
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar14;
          func_0x00010c0720c0();
          _objc_release(puVar14);
          if (((ulong)puVar10 & 1) == 0) {
            func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
            func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
          }
          func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
          puVar10 = puVar14;
LAB_108427fd4:
          _objc_release(lVar4);
          puVar3 = puVar3 + 1;
        } while (puVar3 != puStack_1f8);
        puVar9 = &uStack_1b0;
        puVar14 = puStack_208;
        func_0x00010bf52a60();
        puStack_1f8 = puVar14;
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puStack_208);
    puVar2 = puStack_210;
  }
  puVar7 = puVar2;
  func_0x00010bf529e0();
  if (puVar7 != (undefined8 *)0x0) {
    puVar9 = puVar2;
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  }
  _objc_release(puStack_208);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_10842807c;
  puStack_250 = puVar3;
  puStack_248 = puVar2;
  lStack_240 = param_1;
  puStack_238 = puVar10;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  puVar2 = puVar9;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  FUN_108426adc();
  _objc_release(puVar2);
  if ((int)puVar8 != 0) {
    uVar12 = puVar7[0xc];
    puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_278 = 0xc2000000;
    pcStack_270 = FUN_108428134;
    puStack_268 = &UNK_110841f80;
    puStack_260 = puVar7;
    _objc_retain(puVar9);
    puStack_258 = puVar9;
    func_0x000107c27da4(uVar12,&puStack_280);
    _objc_release(puStack_258);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10842807c; end: 108428133; -[SCSelectionTracker updateSelectionItemTitle:] */

void FUN_10842807c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_108426adc();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108428134;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x000107c27da4(uVar2,&puStack_60);
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108428134; end: 1084283db;  */

void FUN_108428134(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x28);
  puVar9 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar9 != (undefined *)0x0) {
    puVar1 = puVar9;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d5140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x28);
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d5140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puVar7 = puVar5;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      puVar2 = PTR_PTR_1126c5120;
      _objc_alloc();
      puVar7 = puVar9;
      func_0x00010c247520(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15a220(puVar9);
      func_0x00010c01fd00();
      _objc_release(puVar7);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c122a80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(uVar8);
      _objc_release(uVar10);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c122a80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0(uVar11);
      _objc_release(uVar8);
      _objc_release(uVar10);
      uStack_68 = *(undefined8 *)(param_1 + 0x28);
      param_1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar3;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c0d9840(param_1);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  puVar3 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1084283dc;
  puStack_a0 = puVar2;
  lStack_98 = param_1;
  puStack_90 = puVar1;
  puStack_88 = puVar9;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar1 = puVar7;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_108426adc();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    uVar10 = *(undefined8 *)(puVar3 + 0x60);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_108428494;
    puStack_b8 = &UNK_110841f80;
    puStack_b0 = puVar3;
    _objc_retain(puVar7);
    puStack_a8 = puVar7;
    func_0x000107c27da4(uVar10,&puStack_d0);
    _objc_release(puStack_a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1084283dc; end: 108428493; -[SCSelectionTracker updateSelectionItemAdditionalData:] */

void FUN_1084283dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_108426adc();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108428494;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x000107c27da4(uVar2,&puStack_60);
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108428494; end: 10842864f;  */

void FUN_108428494(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c122a80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar9);
  if (uVar7 != 0) {
    uVar1 = uVar7;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010befcf80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c122a80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010befcf80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      puVar6 = PTR_PTR_1126c5120;
      _objc_alloc(PTR_PTR_1126c5120);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = uVar7;
      func_0x00010c247520(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15a220(uVar7);
      func_0x00010c01fd00(puVar6,param_2,uVar9,uVar2);
      _objc_release(uVar2);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c122a80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8,param_2,puVar6,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(puVar6);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 108428650; end: 10842888b; -[SCSelectionTracker selectionStatesForIdentifiers:] */

void FUN_108428650(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_128 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_108426b3c;
  uStack_100 = 0x108426b4c;
  uStack_f8 = 0;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10842888c;
  puStack_138 = &UNK_11084b9d0;
  lStack_130 = param_1;
  puStack_118 = puStack_128;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x60),&puStack_150);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar8 * 8);
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      if (lVar3 != 0) {
        uVar4 = puStack_118[5];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar4);
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume();
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
  func_0x00010bf51e00();
  lVar6 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10842888c; end: 1084288c7;  */

void FUN_10842888c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084288c8; end: 108428aef; -[SCSelectionTracker disabledStatesForIdentifiers:] */

void FUN_1084288c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_120 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_108426b3c;
  uStack_f8 = 0x108426b4c;
  uStack_f0 = 0;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_108428af0;
  puStack_130 = &UNK_11084b9d0;
  lStack_128 = param_1;
  puStack_110 = puStack_120;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x60),&puStack_148);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar8 * 8);
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c08fa60();
      _objc_release(lVar7);
      if (lVar3 != 0) {
        uVar4 = puStack_110[5];
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar4);
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_118,8);
  __Unwind_Resume();
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
  func_0x00010bf51e00();
  lVar6 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108428af0; end: 108428b2b;  */

void FUN_108428af0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108428b2c; end: 108428cab; -[SCSelectionTracker orderedSelectedItems] */

void FUN_108428b2c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  pcStack_38 = FUN_108426b3c;
  uStack_30 = 0x108426b4c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108428be0;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x60),&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428cac; end: 108428cd3; -[SCSelectionTracker selectedItemsObservable] */

void FUN_108428cac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428cd4; end: 108428e03; -[SCSelectionTracker orderedSelectionItemAttributions] */

void FUN_108428cd4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  pcStack_38 = FUN_108426b3c;
  uStack_30 = 0x108426b4c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108428d88;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x60),&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428e04; end: 108428e13;  */

void FUN_108428e04(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 108428e14; end: 108428e3b; -[SCSelectionTracker deltaSelectionStateObservable] */

void FUN_108428e14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428e3c; end: 108428e63; -[SCSelectionTracker deltaItemUpdatesObservable] */

void FUN_108428e3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428e64; end: 108428e8b; -[SCSelectionTracker orderedSelectedIdentifiersObservable] */

void FUN_108428e64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428e8c; end: 108428f7b; -[SCSelectionTracker orderedSelectedParticipants] */

void FUN_108428e8c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  pcStack_38 = FUN_108426b3c;
  uStack_30 = 0x108426b4c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108428f40;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x60),&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428f7c; end: 108428fa3; -[SCSelectionTracker selectionParticipantsUpdateObservable] */

void FUN_108428f7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428fa4; end: 108428fcb; -[SCSelectionTracker updatedSelectionItemTitleObservable] */

void FUN_108428fa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108428fcc; end: 10842904f; -[SCSelectionTracker dealloc] */

void FUN_108428fcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c244b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126fc7b0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108429050; end: 108429053; -[SCSelectionTracker didStartSnapchattersUpdateDataRequest:] */

void FUN_108429050(void)

{
  return;
}



/* Entry: 108429054; end: 10842914b; -[SCSelectionTracker didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108429054(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0bc6c0(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10842914c; end: 108429193;  */

void FUN_10842914c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108429194; end: 1084292e3; -[SCSelectionTracker _shouldInterceptSelectionWithSelectionItem:isSelected:wasSelected:] */

undefined * FUN_108429194(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x70);
  if ((lVar2 == 0) || (func_0x00010bf529e0(), lVar2 == 0)) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x70);
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        uVar3 = *(ulong *)(lVar8 * 8);
        func_0x00010c068f80();
        if ((uVar3 & 1) != 0) {
          puVar6 = (undefined *)0x1;
          goto LAB_108429298;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    }
    puVar6 = (undefined *)0x0;
LAB_108429298:
    _objc_release(lVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_3 + 0x80);
  func_0x000108f3e140(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_numberWithInteger__1126157f8,uVar4);
  return puVar6;
}



/* Entry: 1084292e4; end: 108429313; -[SCSelectionTracker _getMaxDestinationCount] */

void FUN_1084292e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x000108f3e140(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,uVar2);
  return;
}



/* Entry: 108429314; end: 1084293af; -[SCSelectionTracker _shouldDisableSelectionWithSelectionItemCount:isSelected:source:] */

bool FUN_108429314(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    iVar1 = 0x10acf8d0;
    func_0x00010b9b2ac0(&PTR_PTR_110acf8d0,0x130,param_5);
    if (iVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c0ecca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      uVar4 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c067ec0();
      _objc_release(uVar4);
      _objc_release(lVar2);
      return (ulong)(long)(int)uVar5 < (ulong)(lVar3 + param_3);
    }
  }
  return false;
}



/* Entry: 1084293b0; end: 10842943b; -[SCSelectionTracker _presentErrorToast] */

void FUN_1084293b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  FUN_108429acc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed7e18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10842943c; end: 1084297b7; -[SCSelectionTracker _nextSelectionParticipantUpdates:] */

void FUN_10842943c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lStack_138 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lStack_138 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar11 = uVar12;
        func_0x00010c0f49c0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar11;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010c0e00e0(lVar2,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010c07d660();
        if ((int)uVar11 == 0) {
          lVar5 = lVar2;
          func_0x00010bf529e0();
          if (lVar5 != 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c0e00e0(uVar6,param_2,uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar12;
            func_0x00010bf0be20(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar11;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar13;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(uVar6,param_2,uVar4);
            _objc_release(uVar4);
            _objc_release(uVar13);
            _objc_release(uVar11);
            _objc_release(uVar6);
            lVar5 = lVar2;
            func_0x00010bf529e0();
            if (lVar5 == 0) {
              func_0x00010befa120(puVar7,param_2,uVar12);
              func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
              uVar11 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010c0f49c0(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d360(uVar11,param_2,uVar12);
              goto LAB_108429620;
            }
          }
        }
        else {
          if (lVar2 == 0) {
            func_0x00010befa120(puVar7,param_2,uVar12);
            uVar13 = *(undefined8 *)(param_1 + 0x20);
            uVar11 = uVar12;
            func_0x00010c0f49c0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar13,param_2,uVar11);
            _objc_release(uVar11);
            puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar3,uVar1);
            _objc_release(puVar3);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0e00e0(uVar4,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0be20(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar12;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar11;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar4,param_2,uVar13);
          _objc_release(uVar13);
          _objc_release(uVar11);
          _objc_release(uVar12);
          uVar12 = uVar4;
LAB_108429620:
          _objc_release(uVar12);
        }
        _objc_release(lVar2);
        _objc_release(uVar1);
        lVar9 = lVar9 + 1;
      } while (lStack_138 != lVar9);
      lStack_138 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lStack_138 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar7;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar7);
  }
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = *(undefined **)(param_3 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar8 = puVar3;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar3;
    func_0x00010c122a80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecd80(puVar7,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else {
    puVar7 = puVar3;
    func_0x00010c0f4aa0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1084297b8; end: 10842987f; -[SCSelectionTracker _associatedParticipantsForIdentifier:] */

void FUN_1084297b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010c122a80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecd80(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar1 = puVar2;
    func_0x00010c0f4aa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108429880; end: 108429987; -[SCSelectionTracker _removeSnapchater:] */

void FUN_108429880(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d4e0(puVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110f52c78);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    lVar1 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0(puVar3,param_2,puVar2,lVar1,0,0);
    _objc_release(lVar1);
    func_0x00010c1fba40(param_1,param_2,puVar3,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108429988; end: 108429a6b; -[SCSelectionTracker .cxx_destruct] */

void FUN_108429988(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 108429a6c; end: 108429acb;  */

void FUN_108429a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d95b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c034200();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108429acc; end: 108429ae3;  */

void FUN_108429acc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed7e38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ed7e38,
                      &PTR____CFConstantStringClassReference_110ed7e58,0);
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



/* Entry: 108429ae4; end: 108429b57; -[SCSendToLoggingServices initWithSendToLogger:] */

undefined1 * FUN_108429ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc7b8;
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



/* Entry: 108429b58; end: 108429b63; -[SCSendToLoggingServices sendToLogger] */

void FUN_108429b58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 108429b64; end: 108429b6f; -[SCSendToLoggingServices .cxx_destruct] */

void FUN_108429b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108429b70; end: 10842a13b; -[SCSendToLoggerDataModel initWithAttribution:sendStatus:eventToTimestampMapping:sectionToDataReadyTimestampMapping:sectionToRenderTimestampMapping:sectionToAvailableViewModelsMapping:sectionToAvailableContactViewModelsMapping:sectionToSeenViewModelsMapping:sectionToSeenVisibilityMapping:sectionToVisibleElements:sectionToSeenContactViewModelsMapping:selectedItemAttributions:selectedContactItemAttributions:sectionToVisibleCellsNumberMapping:sectionToVisibleContactCellsNumberMapping:contextualListsSectionToAvailableCellsNumberMapping:userGeneratedListsViewed:userGeneratedListsAvailable:userGeneratedListRecipientsAvailable:contextualListRecipientsAvailable:shareSheetAvailable:snapSendSnapchatterCount:snapSendGroupCount:snapSendMyStoryCount:snapSendOurStoryCount:snapSendSpotlightStoryCount:snapSendPublicStoryCount:snapSendUnknownStoryCount:snapSendCustomStoryCount:snapSendNewlyCreatedCustomStoryCount:sponsor:hasSeenPublicStoryNux:hasSeenPublicAttributionNuxMap:hasSeenPublicAttributionNuxSpotlight:listsSelectAllCount:bestFriendsSelectAllCount:bestFriendsDeselectAllCount:bestFriendsSelectAllLastActionType:recipientRankingFeaturesMap:hasSeenSpotlightNux:selectBarActionsMap:groupsCreationCountMap:addAChatPrefilled:addAChatUsed:lastSnapRecipientsCountByType:opsFabShown:opsFabTapped:] */

undefined8 *
FUN_108429b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined4 param_36,
             undefined4 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined1 param_43,undefined4 param_44,
             undefined8 param_45,undefined8 param_46,undefined4 param_47,undefined4 param_48,
             undefined8 param_49,undefined4 param_50)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_35);
  _objc_retain(param_42);
  _objc_retain(param_45);
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126fc7c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_19;
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_24;
    puVar1[0x15] = param_26;
    puVar1[0x16] = param_27;
    puVar1[0x17] = param_28;
    puVar1[0x18] = param_29;
    puVar1[0x19] = param_30;
    puVar1[0x1a] = param_31;
    puVar1[0x1b] = param_32;
    puVar1[0x1c] = param_33;
    puVar1[0x1d] = param_34;
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_36;
    *(undefined1 *)((long)puVar1 + 0xc) = param_36._1_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_36._2_1_;
    puVar1[0x1f] = param_38;
    puVar1[0x20] = param_39;
    puVar1[0x21] = param_40;
    puVar1[0x22] = param_41;
    uVar2 = param_42;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xe) = param_43;
    uVar2 = param_45;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_46;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = (undefined1)param_47;
    *(undefined1 *)(puVar1 + 2) = param_47._1_1_;
    uVar2 = param_49;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x11) = (undefined1)param_50;
    *(undefined1 *)((long)puVar1 + 0x12) = param_50._1_1_;
  }
  _objc_release(param_49);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_42);
  _objc_release(param_35);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
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



/* Entry: 10842a13c; end: 10842a15f; -[SCSendToLoggerDataModel copyWithZone:] */

undefined8 FUN_10842a13c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10842a160; end: 10842a34f; -[SCSendToLoggerDataModel hash] */

undefined8 * FUN_10842a160(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
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
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_1b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_1a8 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_1b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_1a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_198 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_190 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_188 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_180 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_178 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_170 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_168 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_160 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_150 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_140 = uVar2;
  func_0x00010bfde980();
  uStack_130 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_138 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_128 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_120 = uVar1;
  func_0x00010bfde980();
  uStack_110 = (ulong)*(byte *)(param_1 + 10);
  uStack_100 = *(undefined8 *)(param_1 + 0xb0);
  uStack_108 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_f8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e8 = *(undefined8 *)(param_1 + 200);
  uStack_d0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_d8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xe8);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_118 = uVar2;
  func_0x00010bfde980();
  uStack_b8 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_b0 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_a8 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_98 = *(undefined8 *)(param_1 + 0x100);
  uStack_a0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_90 = *(undefined8 *)(param_1 + 0x108);
  lVar5 = *(long *)(param_1 + 0x110);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 0xe);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_58 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x12);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_1b0,0x2f);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10842a748:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10842a754;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((((*(char *)((long)puVar3 + 8) == param_3[8] &&
            (*(char *)((long)puVar3 + 9) == param_3[9])) &&
           (*(char *)((long)puVar3 + 10) == param_3[10])) &&
          ((*(long *)((long)puVar3 + 0xa8) == *(long *)(param_3 + 0xa8) &&
           (*(long *)((long)puVar3 + 0xb0) == *(long *)(param_3 + 0xb0))))) &&
         (*(long *)((long)puVar3 + 0xb8) == *(long *)(param_3 + 0xb8))))) &&
       ((((((*(long *)((long)puVar3 + 0xc0) == *(long *)(param_3 + 0xc0) &&
            (*(long *)((long)puVar3 + 200) == *(long *)(param_3 + 200))) &&
           (*(long *)((long)puVar3 + 0xd0) == *(long *)(param_3 + 0xd0))) &&
          ((((*(long *)((long)puVar3 + 0xd8) == *(long *)(param_3 + 0xd8) &&
             (*(long *)((long)puVar3 + 0xe0) == *(long *)(param_3 + 0xe0))) &&
            (*(long *)((long)puVar3 + 0xe8) == *(long *)(param_3 + 0xe8))) &&
           ((*(char *)((long)puVar3 + 0xb) == param_3[0xb] &&
            (*(char *)((long)puVar3 + 0xc) == param_3[0xc])))))) &&
         (((*(char *)((long)puVar3 + 0xd) == param_3[0xd] &&
           ((*(long *)((long)puVar3 + 0xf8) == *(long *)(param_3 + 0xf8) &&
            (*(long *)((long)puVar3 + 0x100) == *(long *)(param_3 + 0x100))))) &&
          (*(long *)((long)puVar3 + 0x108) == *(long *)(param_3 + 0x108))))) &&
        ((((*(long *)((long)puVar3 + 0x110) == *(long *)(param_3 + 0x110) &&
           (*(char *)((long)puVar3 + 0xe) == param_3[0xe])) &&
          (*(char *)((long)puVar3 + 0xf) == param_3[0xf])) &&
         (((*(char *)((long)puVar3 + 0x10) == param_3[0x10] &&
           (*(char *)((long)puVar3 + 0x11) == param_3[0x11])) &&
          (*(char *)((long)puVar3 + 0x12) == param_3[0x12])))))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x48);
                  if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x50);
                    if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x58);
                      if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x60);
                        if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x68);
                          if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x70);
                            if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x78);
                              if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x80);
                                if ((lVar5 == *(long *)(param_3 + 0x80)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = *(long *)((long)puVar3 + 0x88);
                                  if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = *(long *)((long)puVar3 + 0x90);
                                    if ((lVar5 == *(long *)(param_3 + 0x90)) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = *(long *)((long)puVar3 + 0x98);
                                      if ((lVar5 == *(long *)(param_3 + 0x98)) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = *(long *)((long)puVar3 + 0xa0);
                                        if ((lVar5 == *(long *)(param_3 + 0xa0)) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = *(long *)((long)puVar3 + 0xf0);
                                          if ((lVar5 == *(long *)(param_3 + 0xf0)) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = *(long *)((long)puVar3 + 0x118);
                                            if ((lVar5 == *(long *)(param_3 + 0x118)) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = *(long *)((long)puVar3 + 0x120);
                                              if ((lVar5 == *(long *)(param_3 + 0x120)) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = *(long *)((long)puVar3 + 0x128);
                                                if ((lVar5 == *(long *)(param_3 + 0x128)) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  puVar6 = *(undefined1 **)((long)puVar3 + 0x130);
                                                  if (puVar6 != *(undefined1 **)(param_3 + 0x130)) {
                                                    func_0x00010c071ae0();
                                                    goto LAB_10842a754;
                                                  }
                                                  goto LAB_10842a748;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10842a754:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10842a350; end: 10842a76f; -[SCSendToLoggerDataModel isEqual:] */

long FUN_10842a350(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10842a748:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10842a754;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8) &&
           (*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0))))) &&
         (*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8))))) &&
       ((((((*(long *)(param_1 + 0xc0) == *(long *)(param_3 + 0xc0) &&
            (*(long *)(param_1 + 200) == *(long *)(param_3 + 200))) &&
           (*(long *)(param_1 + 0xd0) == *(long *)(param_3 + 0xd0))) &&
          ((((*(long *)(param_1 + 0xd8) == *(long *)(param_3 + 0xd8) &&
             (*(long *)(param_1 + 0xe0) == *(long *)(param_3 + 0xe0))) &&
            (*(long *)(param_1 + 0xe8) == *(long *)(param_3 + 0xe8))) &&
           ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
            (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
         (((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
           ((*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0xf8) &&
            (*(long *)(param_1 + 0x100) == *(long *)(param_3 + 0x100))))) &&
          (*(long *)(param_1 + 0x108) == *(long *)(param_3 + 0x108))))) &&
        ((((*(long *)(param_1 + 0x110) == *(long *)(param_3 + 0x110) &&
           (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
          (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
         (((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
           (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
          (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x70);
                            if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x78);
                              if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x80);
                                if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x88);
                                  if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x90);
                                    if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0x98);
                                      if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xa0);
                                        if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xf0);
                                          if ((lVar3 == *(long *)(param_3 + 0xf0)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0x118);
                                            if ((lVar3 == *(long *)(param_3 + 0x118)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0x120);
                                              if ((lVar3 == *(long *)(param_3 + 0x120)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0x128);
                                                if ((lVar3 == *(long *)(param_3 + 0x128)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0x130);
                                                  if (lVar3 != *(long *)(param_3 + 0x130)) {
                                                    func_0x00010c071ae0();
                                                    goto LAB_10842a754;
                                                  }
                                                  goto LAB_10842a748;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10842a754:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10842a770; end: 10842a777; -[SCSendToLoggerDataModel attribution] */

undefined8 FUN_10842a770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10842a778; end: 10842a77f; -[SCSendToLoggerDataModel sendStatus] */

undefined1 FUN_10842a778(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10842a780; end: 10842a787; -[SCSendToLoggerDataModel eventToTimestampMapping] */

undefined8 FUN_10842a780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10842a788; end: 10842a78f; -[SCSendToLoggerDataModel sectionToDataReadyTimestampMapping] */

undefined8 FUN_10842a788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10842a790; end: 10842a797; -[SCSendToLoggerDataModel sectionToRenderTimestampMapping] */

undefined8 FUN_10842a790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10842a798; end: 10842a79f; -[SCSendToLoggerDataModel sectionToAvailableViewModelsMapping] */

undefined8 FUN_10842a798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10842a7a0; end: 10842a7a7; -[SCSendToLoggerDataModel sectionToAvailableContactViewModelsMapping] */

undefined8 FUN_10842a7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10842a7a8; end: 10842a7af; -[SCSendToLoggerDataModel sectionToSeenViewModelsMapping] */

undefined8 FUN_10842a7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10842a7b0; end: 10842a7b7; -[SCSendToLoggerDataModel sectionToSeenVisibilityMapping] */

undefined8 FUN_10842a7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10842a7b8; end: 10842a7bf; -[SCSendToLoggerDataModel sectionToVisibleElements] */

undefined8 FUN_10842a7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10842a7c0; end: 10842a7c7; -[SCSendToLoggerDataModel sectionToSeenContactViewModelsMapping] */

undefined8 FUN_10842a7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10842a7c8; end: 10842a7cf; -[SCSendToLoggerDataModel selectedItemAttributions] */

undefined8 FUN_10842a7c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


