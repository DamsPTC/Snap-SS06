/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d66b54; end: 107d66bb3; -[SCNMessagingMessage isSaved] */

bool FUN_107d66b54(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c14b820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107d66bb4; end: 107d66d13; -[SCNMessagingMessage isSavedByParticipant:] */

undefined8 FUN_107d66bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c14b820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar8 = 0;
  if (lVar3 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(ulong *)(lVar9 * 8);
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          uVar8 = 1;
          goto LAB_107d66cc8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar8 = 0;
  }
LAB_107d66cc8:
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c14b820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x000100504554();
    _objc_release(uVar8);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return uVar6;
  }
  return uVar8;
}



/* Entry: 107d66d14; end: 107d66d77; -[SCNMessagingMessage savedParticipants] */

void FUN_107d66d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c14b820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d66d78; end: 107d66d7f;  */

void FUN_107d66d78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 107d66d80; end: 107d66de7; -[SCNMessagingMessage canBeErased] */

ulong FUN_107d66d80(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c07f920();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0721a0();
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c07d920(param_1);
    }
    _objc_release(uVar1);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107d66de8; end: 107d66e47; -[SCNMessagingMessage isErased] */

bool FUN_107d66de8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2533e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 5;
}



/* Entry: 107d66e48; end: 107d66e63; -[SCNMessagingMessage isSent] */

bool FUN_107d66e48(long param_1)

{
  func_0x00010c252440();
  return param_1 == 2;
}



/* Entry: 107d66e64; end: 107d66e9b; -[SCNMessagingMessage isSendingOrHasFailed] */

ulong FUN_107d66e64(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c15dfc0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_failedToSend_1125c5948);
  return param_1;
}



/* Entry: 107d66e9c; end: 107d66ec7; -[SCNMessagingMessage failedToSend] */

uint FUN_107d66e9c(ulong param_1)

{
  func_0x00010c252440();
  return (uint)(5 < param_1) | 8U >> (ulong)((uint)param_1 & 0x1f) & 1;
}



/* Entry: 107d66ec8; end: 107d66ee7; -[SCNMessagingMessage sending] */

bool FUN_107d66ec8(long param_1)

{
  func_0x00010c252440();
  return param_1 - 6U < 0xfffffffffffffffc;
}



/* Entry: 107d66ee8; end: 107d66f63; -[SCNMessagingMessage isSentBy:] */

undefined8 FUN_107d66ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c15de20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d66f64; end: 107d66fef; -[SCNMessagingMessage isOpenedBy:] */

undefined8 FUN_107d66f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  FUN_107d6c0ac(param_1,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d66ff0; end: 107d6707b; -[SCNMessagingMessage isOpenedByOtherThan:] */

undefined8 FUN_107d66ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  FUN_107d6c110(param_1,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d6707c; end: 107d67107; -[SCNMessagingMessage isReleasedBy:] */

undefined8 FUN_107d6707c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  FUN_107d6bef0(param_1,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d67108; end: 107d67167; -[SCNMessagingMessage isReadBy:] */

undefined8 FUN_107d67108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07ea80();
  if ((int)uVar1 == 0) {
    func_0x00010c07c1e0(param_1,param_2,param_3);
  }
  else {
    func_0x00010c0791e0(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107d67168; end: 107d671eb; -[SCNMessagingMessage readByParticipants] */

void FUN_107d67168(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c07ea80();
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    func_0x00010c157500();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e9d40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x000100817178(uVar2,&PTR___NSConcreteGlobalBlock_110a0b3d0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d671ec; end: 107d671f3;  */

void FUN_107d671ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toString_11267a308);
  return;
}



/* Entry: 107d671f4; end: 107d672a7; -[SCNMessagingMessage isOneTimeOnly] */

long FUN_107d671f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c2421a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c2421a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e8a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 107d672a8; end: 107d6735f; -[SCNMessagingMessage isSelfDestruct] */

bool FUN_107d672a8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2421a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c2421a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15aca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    bVar1 = 0 < lVar4;
  }
  return bVar1;
}



/* Entry: 107d67360; end: 107d6744b; -[SCNMessagingMessage hasSelfDestructed] */

void FUN_107d67360(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c07d6a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2421a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15aca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a4a0();
    _objc_release(param_1);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 107d6744c; end: 107d6756f; -[SCNMessagingMessage actionPerformingUserId] */

void FUN_107d6744c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x22;
  
  uVar2 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4ce20();
  if ((int)uVar3 == 8) {
    uVar3 = uVar2;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2533e0();
    uVar1 = (uint)uVar4;
    if (uVar1 - 6 < 0x1d || uVar1 < 5) {
      func_0x00010c0cb8c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = param_1;
    }
    else if (uVar1 == 5) {
      uVar4 = uVar3;
      func_0x00010c0cb4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfde100();
      if ((int)uVar5 == 0) {
        func_0x00010c0cb8c0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar5 = uVar4;
        func_0x00010c2923e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        param_1 = uVar5;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
      }
      _objc_release(uVar4);
      unaff_x22 = param_1;
    }
    _objc_release(uVar3);
    param_1 = unaff_x22;
  }
  else {
    func_0x00010c0cb8c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d67570; end: 107d675ff; -[SCNMessagingMessage isStickerMessage] */

bool FUN_107d67570(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 4) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_1;
      func_0x00010c242c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131be0();
      bVar1 = (int)uVar3 == 0xd;
      _objc_release(uVar2);
    }
    else {
      bVar1 = false;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d67600; end: 107d6765b; -[SCNMessagingMessage isStickerReaction] */

undefined8 FUN_107d67600(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0cbf20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfebc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07bbc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d6765c; end: 107d676ab; -[SCNMessagingMessage messagingSticker] */

void FUN_107d6765c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60020(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d676ac; end: 107d6777b; -[SCNMessagingMessage _messagingStickerForContents:] */

void FUN_107d676ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 4) {
    uVar2 = param_3;
    func_0x00010c253880(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_3;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_3;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c131be0();
      _objc_release(uVar2);
      if ((int)uVar1 == 0xd) {
        uVar1 = param_3;
        func_0x00010c242c40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c132140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        goto LAB_107d67760;
      }
    }
    uVar2 = 0;
  }
LAB_107d67760:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d6777c; end: 107d6786f; -[SCNMessagingMessage ctpItemInstance] */

void FUN_107d6777c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf4ce20();
  if ((int)lVar4 == 0xe) {
    lVar4 = lVar1;
    func_0x00010bf5ae40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = param_1;
    func_0x00010c07fa00();
    if ((int)lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x00010c0cbf20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        func_0x00010c0c3fe0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x000108e08360(lVar2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(param_1);
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107d67870; end: 107d67927; -[SCNMessagingMessage quotedCtpItemInstance] */

void FUN_107d67870(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be60020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010c0c3fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000108e08360(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d67928; end: 107d67943; -[SCNMessagingMessage isBloopMessage] */

bool FUN_107d67928(long param_1)

{
  func_0x00010c0c6c20();
  return param_1 == 0xb;
}



/* Entry: 107d67944; end: 107d67a5b; -[SCNMessagingMessage cameoStickerId] */

void FUN_107d67944(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010c06d600();
  if ((int)lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfc0800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    if ((lVar4 == 0) ||
       (lVar1 = lVar4, func_0x00010bf36040(), puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       lVar1 < 1)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar1 = lVar4;
      func_0x00010bf36040(lVar4);
      func_0x00010c0df7c0(puVar5,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d67a5c; end: 107d67c93; -[SCNMessagingMessage isBitmojiSticker] */

bool FUN_107d67a5c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  func_0x00010c07fa00();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0cbf20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfebc60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2551e0();
    bVar1 = (int)uVar3 == 1;
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 107d67c94; end: 107d67de3;  */

uint FUN_107d67c94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bf4ce20();
  uVar2 = param_1;
  if ((int)uVar4 == 7) {
    func_0x00010c242c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c242940();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = param_1;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bfdcce0();
    _objc_release(uVar4);
    if ((int)uVar1 == 0) {
      uVar4 = 0;
      goto LAB_107d67d5c;
    }
    func_0x00010bf676a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c25ada0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c242940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
LAB_107d67d5c:
  uVar2 = param_1;
  func_0x000107d67ad4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd58a0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = uVar2;
    func_0x00010bf454e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf52680();
    uVar5 = (uint)((int)uVar3 == 0x11);
    _objc_release(uVar1);
  }
  uVar1 = uVar4;
  func_0x00010c131c80(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_1);
  return (uint)uVar1 & 1 | uVar5;
}



/* Entry: 107d67de4; end: 107d67e57; -[SCNMessagingMessage isStoryReplyMessage] */

undefined8 FUN_107d67de4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar1 == 7) {
    uVar2 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf676a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdcce0();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d67e58; end: 107d67edf; -[SCNMessagingMessage isStoryReplyMediaDeleted] */

void FUN_107d67e58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c07fd80();
  if ((int)uVar1 != 0) {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0cba20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c242c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25a420();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107d67ee0; end: 107d67f67; -[SCNMessagingMessage isStoryReplyMediaPresent] */

void FUN_107d67ee0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c07fd80();
  if ((int)uVar1 != 0) {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0cba20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c242c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25a420();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107d67f68; end: 107d67fe3; -[SCNMessagingMessage storyReplyMediaOwnerId] */

void FUN_107d67f68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c07fd80();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x000107d67ad4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c105840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d67fe4; end: 107d68027; -[SCNMessagingMessage storyReplySnapStoryId] */

void FUN_107d67fe4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107d67ad4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d68028; end: 107d680eb; -[SCNMessagingMessage isExternalMediaStoryReply] */

ulong FUN_107d68028(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 7) {
    uVar2 = uVar1;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = uVar1;
      func_0x00010c242c40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131be0();
      param_1 = (ulong)((int)uVar3 == 0xc);
      _objc_release(uVar2);
      goto LAB_107d680d0;
    }
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdcce0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      func_0x00010c06e580(param_1);
      goto LAB_107d680d0;
    }
  }
  param_1 = 0;
LAB_107d680d0:
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d680ec; end: 107d6816f; -[SCNMessagingMessage storyReplyOriginalSnapId] */

void FUN_107d680ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000107d67ad4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08f740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d68170; end: 107d68227; -[SCNMessagingMessage hasCancelledStream] */

bool FUN_107d68170(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25c8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c25c8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf44160();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    bVar1 = lVar4 == 2;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 107d68228; end: 107d6832b; -[SCNMessagingMessage hasSuccessfulStream] */

bool FUN_107d68228(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25c8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25c8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c06eda0();
    if ((int)lVar4 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c25c8e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44160();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c067fc0();
      bVar1 = lVar6 == 0;
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(param_1);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 107d6832c; end: 107d683bf; -[SCNMessagingMessage isIncompleteBotResponse] */

bool FUN_107d6832c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4ce20();
  if ((int)uVar3 == 0x18) {
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf1fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252d60();
    bVar1 = (int)uVar4 != 4;
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 107d683c0; end: 107d68487; -[SCNMessagingMessage textContent] */

void FUN_107d683c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar1 == 7) {
    uVar1 = param_1;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c131be0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0xb) {
      uVar1 = param_1;
      func_0x00010c242c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c132180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_107d6846c;
    }
  }
  else if ((int)uVar1 == 2) {
    uVar2 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107d6846c;
  }
  uVar2 = 0;
LAB_107d6846c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d68488; end: 107d684cb; -[SCNMessagingMessage text] */

void FUN_107d68488(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26bac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d684cc; end: 107d685bf; -[SCNMessagingMessage getUrls] */

void FUN_107d684cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0e740();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107d685c0;
    puStack_40 = &UNK_110a0b3f0;
    _objc_retain(param_1);
    lVar3 = lVar2;
    lStack_38 = param_1;
    func_0x000100504554(lVar2,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d685c0; end: 107d68713;  */

void FUN_107d685c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010bf0dec0();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if ((int)uVar5 == 4) {
    uVar5 = param_2;
    func_0x00010bdc2c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
    puVar3 = puVar2;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c0720c0();
    if ((((ulong)puVar3 & 1) == 0) && (puVar3 = puVar4, func_0x00010c0720c0(), (int)puVar3 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar1 = param_2;
      func_0x00010bdc2c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107d68714; end: 107d68807; -[SCNMessagingMessage getAddresses] */

void FUN_107d68714(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0e740();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107d68808;
    puStack_40 = &UNK_110a0b3f0;
    _objc_retain(param_1);
    lVar3 = lVar2;
    lStack_38 = param_1;
    func_0x000100504554(lVar2,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d68808; end: 107d6894f;  */

void FUN_107d68808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(uVar4);
  uVar5 = param_2;
  func_0x00010bf0dec0();
  if ((int)uVar5 == 3) {
    uVar1 = param_2;
    func_0x00010c0c4180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c26c3c0();
    if ((int)uVar5 == 0) {
      uVar5 = param_2;
      func_0x00010c11f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ea00();
      uVar2 = param_2;
      func_0x00010c11f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(uVar2);
      _objc_release(uVar5);
      uVar2 = uVar4;
      func_0x00010c26b700(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107d68950; end: 107d68a7b; -[SCNMessagingMessage textFormatAttributes:] */

void FUN_107d68950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0e740();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107d68a7c;
    puStack_58 = &UNK_110a0b420;
    _objc_retain(param_1);
    lStack_50 = param_1;
    _objc_retain(param_3);
    lVar3 = lVar2;
    uStack_48 = param_3;
    func_0x000100504554(lVar2,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d68a7c; end: 107d68e2f;  */

void FUN_107d68a7c(long param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  puVar10 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c09ea00();
  puVar3 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar10);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08fa60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (uVar6 < ((ulong)puVar9 & 0xffffffff) + ((ulong)puVar2 & 0xffffffff)) {
    puVar10 = (undefined *)0x0;
    goto LAB_107d68e04;
  }
  puVar9 = *(undefined **)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(puVar9);
  puVar3 = param_2;
  func_0x00010bf0dec0();
  puVar2 = PTR_PTR_1126d7aa8;
  puVar10 = (undefined *)0x0;
  iVar1 = (int)puVar3;
  puVar3 = param_2;
  if (iVar1 < 6) {
    if (iVar1 == 2) {
      puVar2 = param_2;
      func_0x00010bfb58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c26c020();
      if ((uint)puVar10 < 6) {
        puVar10 = PTR_PTR_1126d7aa8;
        func_0x00010bfb5f00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        puVar2 = puVar10;
        goto LAB_107d68d6c;
      }
      puVar10 = (undefined *)0x0;
      goto LAB_107d68de4;
    }
    if (iVar1 == 5) {
      func_0x00010c0ca400(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar9);
      puVar10 = puVar3;
      func_0x00010c2923e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010c0ecc20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar8 = puVar10;
      func_0x000108ef4364(puVar10,puVar7,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar2 = PTR_PTR_1126d7aa8;
      func_0x00010c0ca6c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107d68d18;
    }
  }
  else {
    if (iVar1 == 6) {
      func_0x00010c14e140(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d7aa8;
      func_0x00010c14e120();
      func_0x00010c14e500();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 7) {
      func_0x00010c0dae20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d7aa8;
      func_0x00010c0dae40();
      _objc_retainAutoreleasedReturnValue();
LAB_107d68d18:
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    else {
      if (iVar1 != 8) goto LAB_107d68df4;
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf36180();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_107d68d6c:
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = param_2;
      func_0x00010c11f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ea00();
      puVar3 = param_2;
      func_0x00010c11f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar3);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126d7ab0;
      _objc_alloc(PTR_PTR_1126d7ab0);
      func_0x00010c03cbe0();
LAB_107d68de4:
      _objc_release(puVar2);
    }
  }
LAB_107d68df4:
  _objc_release(puVar9);
  _objc_release(param_2);
LAB_107d68e04:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107d68e30; end: 107d68f23; -[SCNMessagingMessage mentionedNonParticipantsUserIds] */

void FUN_107d68e30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0e740();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107d68f24;
    puStack_40 = &UNK_110a0b3f0;
    _objc_retain(param_1);
    lVar3 = lVar2;
    lStack_38 = param_1;
    func_0x000100504554(lVar2,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d68f24; end: 107d69053;  */

void FUN_107d68f24(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c09ea00();
  uVar2 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c08fa60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((uVar2 < (uVar3 & 0xffffffff) + (uVar1 & 0xffffffff)) ||
     (uVar5 = param_2, func_0x00010bf0dec0(), (int)uVar5 != 7)) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c0dae20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107d69054; end: 107d69147; -[SCNMessagingMessage textMediaAttributes] */

void FUN_107d69054(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0e740();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107d69148;
    puStack_40 = &UNK_110902be0;
    _objc_retain(param_1);
    lVar3 = lVar2;
    lStack_38 = param_1;
    func_0x000100504554(lVar2,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d69148; end: 107d69457;  */

void FUN_107d69148(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09ea00();
  puVar3 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08fa60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (uVar6 < ((ulong)puVar10 & 0xffffffff) + ((ulong)puVar2 & 0xffffffff)) {
    puVar10 = (undefined *)0x0;
    goto LAB_107d69430;
  }
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf0dec0();
  puVar2 = param_2;
  if ((int)puVar1 == 3) {
    func_0x00010c0c4180();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c11f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c09ea00(puVar1);
    func_0x00010c08fa60(puVar1);
    puVar3 = puVar2;
    func_0x00010c26c3c0();
    _objc_release(puVar2);
    if ((uint)puVar3 < 3) {
      puVar3 = PTR_PTR_1126c6aa8;
      func_0x00010c0c7280();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126c6ab0;
        _objc_alloc(PTR_PTR_1126c6ab0);
        func_0x00010c03cbe0();
        goto LAB_107d69414;
      }
    }
    puVar10 = (undefined *)0x0;
LAB_107d69418:
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  else {
    if ((int)puVar1 == 4) {
      func_0x00010bdc2c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c11f2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010bdc2c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c065360();
      _objc_retain(puVar3);
      _objc_retain(puVar1);
      func_0x00010c09ea00(puVar3);
      func_0x00010c08fa60(puVar3);
      _objc_release(puVar3);
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar8 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR_PTR_1126c6aa8;
        func_0x00010c28fb80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 == (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = PTR_PTR_1126c6ab0;
          _objc_alloc(PTR_PTR_1126c6ab0);
          func_0x00010c03cbe0();
        }
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
LAB_107d69414:
      _objc_release(puVar3);
      goto LAB_107d69418;
    }
    puVar10 = (undefined *)0x0;
  }
  _objc_release(param_2);
LAB_107d69430:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107d69458; end: 107d69643; -[SCNMessagingMessage hasMentionForUserId:] */

bool FUN_107d69458(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
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
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0e740();
  _objc_release(lVar2);
  bVar1 = false;
  if (lVar3 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    bVar1 = false;
    if (lVar2 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          uVar9 = *(ulong *)(lStack_128 + lVar11 * 8);
          uVar4 = uVar9;
          func_0x00010bf0dec0();
          if ((int)uVar4 == 5) {
            func_0x00010c0ca400();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar9;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c0720c0();
            _objc_release(uVar5);
            _objc_release(uVar4);
            _objc_release(uVar9);
            if ((uVar6 & 1) != 0) {
              bVar1 = true;
              goto LAB_107d695ec;
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
      bVar1 = false;
    }
LAB_107d695ec:
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf4ce20();
  if ((int)uVar7 == 3) {
    bVar1 = true;
  }
  else {
    uVar7 = param_3;
    func_0x00010bf4ce20();
    if ((int)uVar7 == 7) {
      uVar7 = param_3;
      func_0x00010c242c40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c131be0();
      bVar1 = (int)uVar8 == 0xc;
      _objc_release(uVar7);
    }
    else {
      bVar1 = false;
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d69644; end: 107d696d3; -[SCNMessagingMessage isChatMediaMessage] */

bool FUN_107d69644(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 3) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_1;
      func_0x00010c242c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131be0();
      bVar1 = (int)uVar3 == 0xc;
      _objc_release(uVar2);
    }
    else {
      bVar1 = false;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d696d4; end: 107d6970b; -[SCNMessagingMessage isSingleImageOrVideoChatMedia] */

ulong FUN_107d696d4(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07e240();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be43c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSingleVideoChatMedia_11256e8a0);
  return param_1;
}



/* Entry: 107d6970c; end: 107d697a7; -[SCNMessagingMessage isSingleImageChatMedia] */

uint FUN_107d6970c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  func_0x00010c06e580();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0c72c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 == 1) {
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c0c6c20();
      _objc_release(param_1);
      uVar3 = 0;
      if (uVar1 < 0x14) {
        uVar3 = 0x9c081 >> (ulong)((uint)uVar1 & 0x1f);
      }
      goto LAB_107d69794;
    }
  }
  uVar3 = 0;
LAB_107d69794:
  return uVar3 & 1;
}



/* Entry: 107d697a8; end: 107d69833; -[SCNMessagingMessage isSingleNonSpectaclesImageChatMedia] */

void FUN_107d697a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c06e580();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0c72c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      func_0x00010c0c3fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      _objc_release(param_1);
    }
  }
  return;
}



/* Entry: 107d69834; end: 107d698cf; -[SCNMessagingMessage _isSingleVideoChatMedia] */

uint FUN_107d69834(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  func_0x00010c06e580();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0c72c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 == 1) {
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c0c6c20();
      _objc_release(param_1);
      uVar3 = 0;
      if (uVar1 < 0x16) {
        uVar3 = 0x363f36 >> (ulong)((uint)uVar1 & 0x1f);
      }
      goto LAB_107d698bc;
    }
  }
  uVar3 = 0;
LAB_107d698bc:
  return uVar3 & 1;
}



/* Entry: 107d698d0; end: 107d6999b; -[SCNMessagingMessage isOnePersonFriendCameo] */

long FUN_107d698d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c0c6c20();
  if (lVar4 == 0xb) {
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfc0800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(param_1);
    lVar4 = lVar3;
    func_0x00010c0790c0(lVar3);
    _objc_release(lVar3);
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}



/* Entry: 107d6999c; end: 107d699db; -[SCNMessagingMessage isStatusMessage] */

bool FUN_107d6999c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  _objc_release(param_1);
  return (int)uVar1 == 8;
}



/* Entry: 107d699dc; end: 107d69a1b; -[SCNMessagingMessage isTextMessage] */

bool FUN_107d699dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  _objc_release(param_1);
  return (int)uVar1 == 2;
}



/* Entry: 107d69a1c; end: 107d69aef; -[SCNMessagingMessage isSystemConversationRetentionMessage] */

bool FUN_107d69a1c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar2 != 8) {
    bVar1 = false;
    goto LAB_107d69ad4;
  }
  uVar2 = param_1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2533e0();
  uVar4 = uVar2;
  if ((int)uVar3 == 0x18) {
    func_0x00010c242600(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c253560();
    bVar1 = (int)uVar3 == 2;
LAB_107d69abc:
    _objc_release(uVar4);
  }
  else {
    if ((int)uVar3 == 8) {
      func_0x00010bf34dc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf86760();
      bVar1 = (int)uVar3 != 1;
      goto LAB_107d69abc;
    }
    bVar1 = false;
  }
  _objc_release(uVar2);
LAB_107d69ad4:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d69af0; end: 107d69b67; -[SCNMessagingMessage isSpotlightStoryShareMessage] */

uint FUN_107d69af0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22ac80();
  if ((int)uVar3 == 0x10) {
    func_0x00010be44140(param_1);
    uVar4 = (uint)param_1 ^ 1;
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107d69b68; end: 107d69bdf; -[SCNMessagingMessage isLensSpotlightStoryShareMessage] */

undefined8 FUN_107d69b68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22ac80();
  if ((int)uVar3 == 0x10) {
    func_0x00010be44140(param_1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107d69be0; end: 107d69c3f; -[SCNMessagingMessage isSavedFriendStoryMessage] */

bool FUN_107d69be0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22ac80();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 0x18;
}



/* Entry: 107d69c40; end: 107d69c9f; -[SCNMessagingMessage isSpotlightCommentShareMessage] */

bool FUN_107d69c40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22ac80();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 0x19;
}



/* Entry: 107d69ca0; end: 107d69cbb; -[SCNMessagingMessage hasUnknownReleasePolicy] */

bool FUN_107d69ca0(long param_1)

{
  func_0x00010c128640();
  return param_1 == 3;
}



/* Entry: 107d69cbc; end: 107d69cfb; -[SCNMessagingMessage isPromptLensResponseMessage] */

bool FUN_107d69cbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  _objc_release(param_1);
  return (int)uVar1 == 0x12;
}



/* Entry: 107d69cfc; end: 107d69dcb; -[SCNMessagingMessage snapchatterUserId] */

void FUN_107d69cfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c22ac80();
  _objc_release(uVar4);
  if ((int)uVar1 == 7) {
    uVar1 = param_1;
    func_0x00010c22a700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107d69dcc; end: 107d69e47; -[SCNMessagingMessage isContentShareMessage] */

bool FUN_107d69dcc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4ce20();
  if ((int)lVar3 == 5) {
    bVar1 = true;
  }
  else {
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf4dac0();
    bVar1 = lVar3 == 3;
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107d69e48; end: 107d69e87; -[SCNMessagingMessage isTinySnapMessage] */

bool FUN_107d69e48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4ce20();
  _objc_release(param_1);
  return (int)uVar1 == 0x13;
}



/* Entry: 107d69e88; end: 107d69ea3; -[SCNMessagingMessage isInfiniteMessage] */

bool FUN_107d69e88(long param_1)

{
  func_0x00010c128640();
  return param_1 == 5;
}



/* Entry: 107d69ea4; end: 107d69f1b; -[SCNMessagingMessage isKickedUserScreenCapture] */

bool FUN_107d69ea4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c150ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf31900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar3 == 2;
}



/* Entry: 107d69f1c; end: 107d69f93; -[SCNMessagingMessage isScreenRecording] */

bool FUN_107d69f1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c150ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf31460();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar3 == 1;
}



/* Entry: 107d69f94; end: 107d6a00b; -[SCNMessagingMessage isErasedSnapStatusMessage] */

bool FUN_107d69f94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cba00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar3 == 2;
}



/* Entry: 107d6a00c; end: 107d6a07f; -[SCNMessagingMessage isBitmojiUserShare] */

undefined8 FUN_107d6a00c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdc580();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107d6a080; end: 107d6a0f7; -[SCNMessagingMessage isBotWelcomeCardMessage] */

bool FUN_107d6a080(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  func_0x00010c07f920();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf4df40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2533e0();
    bVar1 = (int)uVar3 == 0x1f;
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 107d6a0f8; end: 107d6a16f; -[SCNMessagingMessage _isSpotlightStoryShareSourceFeedLenses] */

bool FUN_107d6a0f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24c520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c247520();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar3 == 5;
}



/* Entry: 107d6a170; end: 107d6a25f; -[SCNMessagingMessage isVoiceNote] */

bool FUN_107d6a170(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4ce20();
  uVar4 = param_1;
  if ((int)uVar2 == 6) {
    func_0x00010c0dba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0dbae0();
    iVar5 = (int)uVar2;
LAB_107d6a1b8:
    bVar1 = iVar5 == 1;
    _objc_release(uVar4);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4ce20();
    if ((int)uVar2 == 7) {
      uVar2 = param_1;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c131be0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0xf) {
        func_0x00010c242c40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dbae0();
        iVar5 = (int)uVar3;
        _objc_release(uVar2);
        goto LAB_107d6a1b8;
      }
    }
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d6a260; end: 107d6a403; -[SCNMessagingMessage voiceNoteDurationMS] */

void FUN_107d6a260(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf4ce20();
  lVar5 = param_1;
  if ((int)lVar1 == 6) {
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf0ed00();
    _objc_retainAutoreleasedReturnValue();
LAB_107d6a2b4:
    _objc_release(lVar5);
    if (lVar1 != 0) {
      lVar5 = lVar1;
      func_0x00010c0dba60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar5 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        lVar2 = lVar5;
        func_0x00010c0c4bc0(lVar5);
        func_0x00010c0df820(puVar6,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar5);
LAB_107d6a3dc:
      _objc_release(lVar1);
      goto LAB_107d6a3e4;
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bf4ce20();
    if ((int)lVar1 == 7) {
      lVar1 = param_1;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c131be0();
      if ((int)lVar2 != 0xf) {
        puVar6 = (undefined *)0x0;
        goto LAB_107d6a3dc;
      }
      lVar2 = param_1;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c131e00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dbae0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar4 == 1) {
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010bf0ed00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        goto LAB_107d6a2b4;
      }
    }
  }
  puVar6 = (undefined *)0x0;
LAB_107d6a3e4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d6a404; end: 107d6a4bb; -[SCNMessagingQuotedMessage contents] */

void FUN_107d6a404(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c252d60();
  if (lVar3 == 1) {
    lVar3 = param_1;
    _objc_getAssociatedObject(param_1,&UNK_10f45a0eb);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar1 = param_1;
      func_0x00010bf4bc60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000100bc5a10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_setAssociatedObject(param_1,&UNK_10f45a0eb,lVar3,0x301);
    }
  }
  else {
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d6a4bc; end: 107d6a4ff; -[SCNMessagingQuotedMessage media] */

void FUN_107d6a4bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0c72c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d6a500; end: 107d6a7a7; -[SCNMessagingQuotedMessage medias] */

void FUN_107d6a500(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar1 = param_1;
  _objc_getAssociatedObject(param_1,&UNK_10f45a104);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c12a260();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c09dc00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c26df20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c242620();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar11 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb5a0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
    lVar14 = param_1;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a4a0();
    func_0x00010bf651a0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1;
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c07d080();
    lVar1 = lVar2;
    func_0x000100be4d64(lVar2,lVar4,lVar6,lVar8,lVar10,puVar15,lVar18,lVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_setAssociatedObject(param_1,&UNK_10f45a104,lVar1,0x301);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d6a7a8; end: 107d6a83b; -[SCNMessagingQuotedMessage isSentOrReceivedSnapOpened:isSelfConversation:] */

undefined8 FUN_107d6a7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if (((param_4 & 1) == 0) && ((int)uVar2 != 0)) {
    func_0x00010be42740(param_1);
  }
  else {
    func_0x00010be42720(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107d6a83c; end: 107d6a8bb; -[SCNMessagingQuotedMessage _isOpenedByAtLeastOneRecipient] */

bool FUN_107d6a83c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010be42760();
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0e9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(param_1);
  bVar1 = 1 < uVar4;
  if ((int)uVar2 == 0) {
    bVar1 = uVar4 != 0;
  }
  return bVar1;
}



/* Entry: 107d6a8bc; end: 107d6a943; -[SCNMessagingQuotedMessage _isOpenedBy:] */

undefined8 FUN_107d6a8bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 107d6a944; end: 107d6a9e7; -[SCNMessagingQuotedMessage _isOpenedBySender] */

undefined8 FUN_107d6a944(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e9d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107d6a9e8; end: 107d6aa4b; -[SCNMessagingQuotedMessage _messageSender] */

void FUN_107d6a9e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d6aa4c; end: 107d6ad3b;  */

void FUN_107d6aa4c(long param_1,undefined8 param_2)

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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar2 = param_1;
  func_0x00010c0c72c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        lVar6 = *(long *)(lStack_1a8 + lVar9 * 8);
        lVar3 = lVar6;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c0c5180(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar6);
          _objc_release(lVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c131d80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar8 != 0) {
    lVar2 = param_1;
    func_0x00010c131d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar2);
  }
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar2 = param_1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c11ec40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c0c72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar2 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_1f0,auStack_168,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_1e0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1e0 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        lVar6 = *(long *)(lStack_1e8 + lVar9 * 8);
        lVar3 = lVar6;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c0c5180(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar6);
          _objc_release(lVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_1f0,auStack_168,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126c3108;
    _objc_retain();
    _objc_alloc(puVar4);
    lVar2 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c27dd80();
    _objc_release(param_1);
    if (lVar8 + 1U < 0x1c) {
      uVar5 = *(undefined8 *)(&UNK_10dee67b0 + (lVar8 + 1U) * 8);
    }
    else {
      uVar5 = 2;
    }
    func_0x00010c02df60(puVar4,param_2,0,lVar2,0,0,uVar5,0,0,0);
    _objc_release(lVar2);
    puVar1 = puVar4;
    FUN_107d6ae14(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d6ad3c; end: 107d6ae13;  */

void FUN_107d6ad3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c3108;
  _objc_retain();
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  if (lVar3 + 1U < 0x1c) {
    uVar5 = *(undefined8 *)(&UNK_10dee67b0 + (lVar3 + 1U) * 8);
  }
  else {
    uVar5 = 2;
  }
  func_0x00010c02df60(puVar1,param_2,0,lVar2,0,0,uVar5,0,0,0);
  _objc_release(lVar2);
  puVar4 = puVar1;
  FUN_107d6ae14(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d6ae14; end: 107d6ae73;  */

void FUN_107d6ae14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d7ab8;
  _objc_alloc(PTR_PTR_1126d7ab8);
  func_0x00010c01b1c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d6ae74; end: 107d6ae7b;  */

void FUN_107d6ae74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc300();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c075000();
  }
  uVar1 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3108;
  _objc_retain();
  _objc_retain(param_1);
  _objc_alloc(puVar5);
  func_0x00010bfdc680();
  _objc_release(uVar2);
  func_0x00010c02df60(puVar5);
  _objc_release(param_1);
  puVar6 = puVar5;
  FUN_107d6ae14(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d6ae7c; end: 107d6b0af;  */

void FUN_107d6ae7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc300();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c075000();
  }
  uVar1 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3108;
  _objc_retain();
  _objc_retain(param_1);
  _objc_alloc(puVar5);
  func_0x00010bfdc680();
  _objc_release(uVar2);
  func_0x00010c02df60(puVar5);
  _objc_release(param_1);
  puVar6 = puVar5;
  FUN_107d6ae14(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d6b0b0; end: 107d6b0b7;  */

void FUN_107d6b0b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc300();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c075000();
  }
  uVar1 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c3108;
  _objc_retain();
  _objc_retain(param_1);
  _objc_alloc(puVar5);
  func_0x00010bfdc680();
  _objc_release(uVar2);
  func_0x00010c02df60(puVar5);
  _objc_release(param_1);
  puVar6 = puVar5;
  FUN_107d6ae14(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d6b0b8; end: 107d6b14b;  */

bool FUN_107d6b0b8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c0c6f00();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c0c6500(param_1);
    bVar1 = lVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107d6b14c; end: 107d6b2eb;  */

void FUN_107d6b14c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain();
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bfe5d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfeea60();
  _objc_release(uVar2);
  func_0x00010c1ec620(puVar1);
  puVar3 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3108;
  _objc_opt_class(PTR_PTR_1126c3108);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  puVar4 = puVar3;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  if (puVar4 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d6b2ec; end: 107d6b30b;  */

undefined8 FUN_107d6b2ec(ulong param_1)

{
  if (param_1 < 0x1b) {
    return *(undefined8 *)(&UNK_10dee6890 + param_1 * 8);
  }
  return 0;
}



/* Entry: 107d6b30c; end: 107d6b607;  */

void FUN_107d6b30c(double param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d7ad0;
  _objc_alloc_init();
  uVar2 = param_2;
  func_0x00010bf93e00(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d7ac0;
  _objc_retain();
  _objc_alloc_init(puVar3);
  uVar4 = uVar2;
  func_0x00010c086560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar3,param_3,uVar5);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c085300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar6 = uVar5;
  func_0x00010bf64920(uVar5,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b64a0(puVar3,param_3,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c195c60(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0ed100();
  if (uVar2 != 0) {
    uVar2 = param_2;
    func_0x00010c0ed100(param_2);
    func_0x00010c1d6440(puVar1,param_3,(uVar2 & 0xfffffffffffffffa) != 0);
  }
  uVar2 = param_2;
  func_0x00010bf7ee20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_2;
    func_0x00010bf7ee20(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d7ac8;
    _objc_retain();
    _objc_alloc_init(puVar3);
    func_0x00010c2a5040(uVar2);
    dVar8 = (double)(ulong)(uint)(float)param_1;
    func_0x00010c2256c0(puVar3,param_3,(int)param_1);
    func_0x00010bfe0640(uVar2);
    _objc_release(uVar2);
    func_0x00010c1a7d00(puVar3,param_3,(int)dVar8);
    func_0x00010c18e020(puVar1,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_2;
  func_0x00010bf8b160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_2;
    func_0x00010bf8b160(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x107d6b60c;
    puStack_70 = &UNK_1108484c8;
    _objc_retain(puVar1);
    puStack_68 = puVar1;
    func_0x00010c0be620(uVar2,param_3,&PTR___NSConcreteGlobalBlock_110a0b450,&puStack_88,
                        &PTR___NSConcreteGlobalBlock_110a0b470);
    _objc_release(uVar2);
    _objc_release(puStack_68);
  }
  uVar2 = param_2;
  func_0x00010c27dd80(param_2);
  func_0x00010c1a6de0(puVar1,param_3,
                      (uint)(0x1b < uVar2 + 1) | 0x4b4a644U >> (ulong)((uint)(uVar2 + 1) & 0x1f) & 1
                     );
  uVar2 = param_2;
  func_0x00010c27dd80();
  if (uVar2 + 1 < 0x1c) {
    uVar7 = *(undefined4 *)(&UNK_10dee6968 + (uVar2 + 1) * 4);
  }
  else {
    uVar7 = 0;
  }
  func_0x00010c21acc0(puVar1,param_3,uVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d6b608; end: 107d6b643;  */

void FUN_107d6b608(void)

{
  return;
}


