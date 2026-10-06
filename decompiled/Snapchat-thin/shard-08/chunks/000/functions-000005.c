/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bc3948; end: 105bc3bbb; -[SCFriendsFeedComponentView _updateAvatarFriendmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc3948(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  
  lVar5 = (long)_DAT_1127315a4;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf132e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + _DAT_1127315c4);
  func_0x00010bf132e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    goto LAB_105bc3b88;
  }
  if (uVar2 == 0) {
    _objc_release();
    _objc_release(uVar1);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c071ae0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf132e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb9a40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010bf152e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) goto LAB_105bc3a64;
    puVar6 = (ulong *)(param_1 + _DAT_112731560);
  }
  else {
    _objc_release();
LAB_105bc3a64:
    puVar6 = (ulong *)(param_1 + _DAT_112731560);
    uVar2 = *puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 == 0) {
      func_0x00010bf57500(*puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *puVar6;
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010bf152e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = uVar1;
    if (uVar2 == 0) {
      func_0x00010bfb9a40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *puVar6;
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a06e0();
      _objc_release(uVar4);
    }
    else {
      func_0x00010bf152e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *puVar6;
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ec60();
    }
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  uVar2 = *puVar6;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
LAB_105bc3b88:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc3bbc; end: 105bc3dc3; -[SCFriendsFeedComponentView _updateFriendsFeedFriendmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc3bbc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127315a4;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bfb9b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + _DAT_1127315c4);
  func_0x00010bfb9b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0(uVar1,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010bfb9b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb9a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    lVar4 = (long)_DAT_11273155c;
    uVar1 = *(ulong *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c1a7f60();
      goto LAB_105bc3dac;
    }
    _objc_release();
    uVar6 = *(undefined8 *)(param_1 + lVar4);
    if (uVar1 == 0) {
      func_0x00010bf57500(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar6);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(param_1,param_2,uVar6);
    }
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar6);
    uVar1 = *(ulong *)(param_1 + lVar7);
    func_0x00010bfb9b00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
  }
  _objc_release(uVar2);
LAB_105bc3dac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc3dc4; end: 105bc407b; -[SCFriendsFeedComponentView _handleAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc3dc4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = *(ulong *)(param_1 + (long)_DAT_1127315a4);
  func_0x00010bf03de0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127315a0;
  uVar7 = *(ulong *)(param_1 + lVar9);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  uVar2 = uVar1;
  if (uVar7 != uVar1) {
    if (uVar1 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar2 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar1);
      _objc_release(uVar7);
      if ((uVar2 & 1) != 0) goto LAB_105bc405c;
    }
    uVar7 = uVar1;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar7;
    _objc_release(uVar6);
    uVar7 = uVar1;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2dd8;
    _objc_opt_class(PTR_PTR_1126c2dd8);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar2 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010c0f6f20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2dce0(param_1);
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112731604;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    uVar7 = uVar2;
    func_0x00010bf12c00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112731540);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1c640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar7);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    uVar7 = uVar2;
    func_0x00010c0b69e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112731544);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    uVar7 = uVar2;
    func_0x00010c25e640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112731548);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    uVar7 = uVar2;
    func_0x00010bfa3cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bfa3ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar6);
    uVar2 = param_1;
  }
  _objc_release(uVar2);
  _objc_release(uVar7);
LAB_105bc405c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc407c; end: 105bc40fb; -[SCFriendsFeedComponentView _handlePeekAPeekAnimationsForAnimationModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc407c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3e0c0();
  if ((int)lVar1 != 0) {
    func_0x00010bedcce0(param_1);
  }
  lVar1 = param_1;
  func_0x00010be216c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0160(*(undefined8 *)(param_1 + _DAT_112731604),param_2,param_1,param_3,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bc40fc; end: 105bc4187; -[SCFriendsFeedComponentView _updatePeekAPeekView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc40fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112731538;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bc4188; end: 105bc454b; -[SCFriendsFeedComponentView _getPeekAPeekViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4188(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar6 = (long)_DAT_112731538;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar3);
    _objc_release(uVar3);
  }
  uVar4 = *(ulong *)(param_1 + _DAT_1127315a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf90a20();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    lVar6 = (long)_DAT_11273153c;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    if (*(long *)(param_1 + _DAT_1127315b4) != 0) {
      func_0x00010befa120(puVar1);
    }
    lVar6 = (long)_DAT_112731540;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112731560;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112731564;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112731544;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112731550;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112731548;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_11273154c;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112731554;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    lVar6 = (long)_DAT_112731558;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bc454c; end: 105bc4657; -[SCFriendsFeedComponentView _isSublabelAnimationActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105bc454c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127315a4);
  func_0x00010bf03de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c2dd8;
  _objc_opt_class(PTR_PTR_1126c2dd8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c25e640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar2;
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 105bc4658; end: 105bc4787; -[SCFriendsFeedComponentView handleSingleTapUnifiedActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4658(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf25ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105bc4788; end: 105bc47b3;  */

void FUN_105bc4788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handlePressOnReplyButton_1125d21e8);
  return;
}



/* Entry: 105bc47b4; end: 105bc487f; -[SCFriendsFeedComponentView handleDoubleTapUnifiedActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc47b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf25ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105bc4880; end: 105bc4887;  */

void FUN_105bc4880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handlePressOnReplyButton_1125d21e8);
  return;
}



/* Entry: 105bc4888; end: 105bc4a2f; -[SCFriendsFeedComponentView handlePressOnReplyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4888(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105bc4a30;
  uStack_50 = 0x105bc4a40;
  uStack_48 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127315a4);
  func_0x00010c1409a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf920();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2120();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105bc4a30; end: 105bc4a47;  */

void FUN_105bc4a30(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bc4a48; end: 105bc4a7f;  */

void FUN_105bc4a48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc4a80; end: 105bc4a8f;  */

void FUN_105bc4a80(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105bc4a90; end: 105bc4b53;  */

void FUN_105bc4a90(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf25ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bc4b54; end: 105bc4b87; -[SCFriendsFeedComponentView handlePressOnSnapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4b54(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4b88; end: 105bc4bbb; -[SCFriendsFeedComponentView handlePressOnMissedCall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4b88(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd20e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4bbc; end: 105bc4bef; -[SCFriendsFeedComponentView handlePressOnFriendshipFlashback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4bbc(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4bf0; end: 105bc4c23; -[SCFriendsFeedComponentView handlePressOnGroupJoinPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4bf0(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4c24; end: 105bc4c57; -[SCFriendsFeedComponentView didTapOnLensButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4c24(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd20a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4c58; end: 105bc4c5b; -[SCFriendsFeedComponentView lensReplyCameraDidCloseWith:] */

void FUN_105bc4c58(void)

{
  return;
}



/* Entry: 105bc4c5c; end: 105bc4c8f; -[SCFriendsFeedComponentView didTapOnAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4c5c(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4c90; end: 105bc4cc3; -[SCFriendsFeedComponentView didTapOnStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4c90(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4cc4; end: 105bc4cc7; -[SCFriendsFeedComponentView didTapOnPublisherProfile] */

void FUN_105bc4cc4(void)

{
  return;
}



/* Entry: 105bc4cc8; end: 105bc4cfb; -[SCFriendsFeedComponentView handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4cc8(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4cfc; end: 105bc4cff; -[SCFriendsFeedComponentView handleLongPressOnStoryIconFromAvatarView:] */

void FUN_105bc4cfc(void)

{
  return;
}



/* Entry: 105bc4d00; end: 105bc4d33; -[SCFriendsFeedComponentView handleTapOnBitmojiFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc4d00(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc4d34; end: 105bc4daf; -[SCFriendsFeedComponentView _isSublabelFriendmojiViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc4d34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112731554;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc4db0; end: 105bc4e2b; -[SCFriendsFeedComponentView _isSublabelStreakRestoreButtonVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc4db0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112731558;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc4e2c; end: 105bc4ea7; -[SCFriendsFeedComponentView _isRightFriendmojiViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc4e2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273155c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc4ea8; end: 105bc4f23; -[SCFriendsFeedComponentView _isUnifiedActionButtonViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc4ea8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112731578;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc4f24; end: 105bc4f9f; -[SCFriendsFeedComponentView _isCameraReplyButtonViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc4f24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112731570;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc4fa0; end: 105bc501b; -[SCFriendsFeedComponentView _isCameraDefaultReplyButtonViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc4fa0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112731574;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc501c; end: 105bc5043; -[SCFriendsFeedComponentView _isContextButtonViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc501c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127315b8);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010c074c20();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 105bc5044; end: 105bc506b; -[SCFriendsFeedComponentView _isContextualLensButtonViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc5044(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127315bc);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010c074c20();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 105bc506c; end: 105bc5093; -[SCFriendsFeedComponentView _isGamingButtonViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc506c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127315c0);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010c074c20();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 105bc5094; end: 105bc510f; -[SCFriendsFeedComponentView _isCallingButtonViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc5094(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273156c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc5110; end: 105bc518b; -[SCFriendsFeedComponentView _isStreakRestoreButtonV2Visible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bc5110(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273157c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105bc518c; end: 105bc5283; -[SCFriendsFeedComponentView _addTouchDownRecognizerToView:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc518c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c2313e0();
  _objc_release(lVar2);
  if ((int)lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c1c8340(0);
    func_0x00010c178280(puVar1,param_2,0);
    func_0x00010c18b5e0(puVar1,param_2,param_1);
    lVar5 = (long)_DAT_112731608;
    lVar2 = *(long *)(param_1 + lVar5);
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar4);
      lVar2 = *(long *)(param_1 + lVar5);
    }
    func_0x00010befa120(lVar2,param_2,puVar1);
    func_0x00010bef9040(param_3,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc5284; end: 105bc52bf; -[SCFriendsFeedComponentView _handleReplyButtonTouchDown:] */

void FUN_105bc5284(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be64f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyReplyButtonTouchDown_112576d80);
    return;
  }
  return;
}



/* Entry: 105bc52c0; end: 105bc53b7; -[SCFriendsFeedComponentView _handleUnifiedActionButtonTouchDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc52c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c252440();
  if (param_3 == 1) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731578);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf25ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf960();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 105bc53b8; end: 105bc53c7;  */

void FUN_105bc53b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyReplyButtonTouchDown_112576d80);
  return;
}



/* Entry: 105bc53c8; end: 105bc53fb; -[SCFriendsFeedComponentView _notifyReplyButtonTouchDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc53c8(long param_1)

{
  param_1 = param_1 + _DAT_112731600;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bc53fc; end: 105bc546b; -[SCFriendsFeedComponentView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc53fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112731608;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf4b900(uVar2,param_2,param_4);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 105bc546c; end: 105bc5743; -[SCFriendsFeedComponentView touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc546c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  double dVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  long lStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_118 = PTR_PTR_1126ec1e0;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_touchesBegan_withEvent__11267b780,param_3,param_4);
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar8 = *plStack_150;
    param_4 = lVar9;
    do {
      lVar9 = 0;
      do {
        if (*plStack_150 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(ulong *)(lStack_158 + lVar9 * 8);
        lVar7 = (long)_DAT_112731570;
        uVar2 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(unaff_x22);
        _objc_release(uVar2);
        uVar3 = *(ulong *)(param_1 + lVar7);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf20c00();
        _CGRectContainsPoint();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
LAB_105bc56f0:
          _objc_release(param_3);
          goto LAB_105bc56f8;
        }
        lVar7 = (long)_DAT_112731540;
        uVar2 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(unaff_x22);
        _objc_release(uVar2);
        uVar3 = *(ulong *)(param_1 + lVar7);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf20c00();
        _CGRectContainsPoint();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) goto LAB_105bc56f0;
        lVar7 = (long)_DAT_11273160c;
        uVar2 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c084de0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf01b40();
        dVar1 = (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))
                                                ));
        _objc_release(uVar2);
        if (dVar1 == 1.0) {
          uVar2 = *(undefined8 *)(param_1 + lVar7);
          func_0x00010c084de0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ef00(unaff_x22);
          _objc_release(uVar2);
          unaff_x22 = *(ulong *)(param_1 + lVar7);
          func_0x00010c084de0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = unaff_x22;
          func_0x00010bf20c00();
          _CGRectContainsPoint();
          _objc_release(unaff_x22);
          if ((uVar4 & 1) != 0) goto LAB_105bc56f0;
        }
        lVar9 = lVar9 + 1;
      } while (param_4 != lVar9);
      param_4 = param_3;
      func_0x00010bf52a60();
    } while (param_4 != 0);
  }
  _objc_release(param_3);
  func_0x00010c1a8880(param_1);
LAB_105bc56f8:
  lVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_105bc5744;
  puStack_198 = PTR_PTR_1126ec1e0;
  lStack_1a0 = lVar9;
  uStack_190 = unaff_x22;
  lStack_188 = param_4;
  lStack_180 = param_1;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_1a0,PTR_s_touchesEnded_withEvent__11267b788);
  lVar8 = lVar9;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorEqualToColor(lVar7,puVar6);
  _objc_release(puVar5);
  _objc_release(lVar8);
  if ((int)lVar7 != 0) {
    func_0x00010c1a8880(lVar9);
  }
  return;
}



/* Entry: 105bc5744; end: 105bc5803; -[SCFriendsFeedComponentView touchesEnded:withEvent:] */

void FUN_105bc5744(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec1e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_touchesEnded_withEvent__11267b788);
  uVar1 = param_1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorEqualToColor(uVar2,puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1a8880(param_1);
  }
  return;
}



/* Entry: 105bc5804; end: 105bc58c3; -[SCFriendsFeedComponentView touchesCancelled:withEvent:] */

void FUN_105bc5804(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec1e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_touchesCancelled_withEvent__112526c90);
  uVar1 = param_1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorEqualToColor(uVar2,puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1a8880(param_1);
  }
  return;
}



/* Entry: 105bc58c4; end: 105bc5983; -[SCFriendsFeedComponentView touchesMoved:withEvent:] */

void FUN_105bc58c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec1e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_touchesMoved_withEvent__11252ca58);
  uVar1 = param_1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorEqualToColor(uVar2,puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1a8880(param_1);
  }
  return;
}



/* Entry: 105bc5984; end: 105bc5a3f; -[SCFriendsFeedComponentView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5984(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec1e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127315dc);
  puVar1 = PTR_PTR_1126c2eb8;
  _objc_alloc(PTR_PTR_1126c2eb8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6400(0x401e000000000000,0x4025000000000000,0x401c000000000000,0x4025000000000000,
                      puVar1);
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105bc5a40; end: 105bc5c37; -[SCFriendsFeedComponentView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5a40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar4 = (long)_DAT_1127315ec;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_1;
    func_0x00010bf4ede0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c072560();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar3 = (long)_DAT_1127315b8;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
      lVar1 = param_1;
      func_0x00010bf4ede0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e1e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
    }
  }
  lVar4 = (long)_DAT_1127315f4;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_1;
    func_0x00010c094000();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c072560();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar3 = (long)_DAT_1127315bc;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
      lVar1 = param_1;
      func_0x00010c094000(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e1e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
    }
  }
  lVar4 = (long)_DAT_1127315fc;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_1;
    func_0x00010bfb9f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c072560();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar3 = (long)_DAT_1127315c0;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
      lVar1 = param_1;
      func_0x00010bfb9f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e1e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
    }
  }
  puStack_38 = PTR_PTR_1126ec1e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105bc5c38; end: 105bc5c57; -[SCFriendsFeedComponentView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5c38(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112731600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bc5c58; end: 105bc5c6b; -[SCFriendsFeedComponentView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5c58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112731600,param_3);
  return;
}



/* Entry: 105bc5c6c; end: 105bc5c7b; -[SCFriendsFeedComponentView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5c6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127315a4);
}



/* Entry: 105bc5c7c; end: 105bc5c8b; -[SCFriendsFeedComponentView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5c7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127315d0);
}



/* Entry: 105bc5c8c; end: 105bc5c9b; -[SCFriendsFeedComponentView imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5c8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127315d4);
}



/* Entry: 105bc5c9c; end: 105bc5cab; -[SCFriendsFeedComponentView avatarFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5c9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127315d8);
}



/* Entry: 105bc5cac; end: 105bc5cbb; -[SCFriendsFeedComponentView animationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5cac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731604);
}



/* Entry: 105bc5cbc; end: 105bc5cfb; -[SCFriendsFeedComponentView setAnimationHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731604;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5cfc; end: 105bc5d0b; -[SCFriendsFeedComponentView uberAvatarScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5cfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127315c8);
}



/* Entry: 105bc5d0c; end: 105bc5d1b; -[SCFriendsFeedComponentView uberAvatarScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5d0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127315cc);
}



/* Entry: 105bc5d1c; end: 105bc5d2b; -[SCFriendsFeedComponentView contextPostSnapFeedScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731610);
}



/* Entry: 105bc5d2c; end: 105bc5d6b; -[SCFriendsFeedComponentView setContextPostSnapFeedScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731610;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5d6c; end: 105bc5d7b; -[SCFriendsFeedComponentView contextPostSnapFeedScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5d6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731614);
}



/* Entry: 105bc5d7c; end: 105bc5dbb; -[SCFriendsFeedComponentView setContextPostSnapFeedScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731614;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5dbc; end: 105bc5dcb; -[SCFriendsFeedComponentView lensFriendsFeedContextButtonScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5dbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731618);
}



/* Entry: 105bc5dcc; end: 105bc5e0b; -[SCFriendsFeedComponentView setLensFriendsFeedContextButtonScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731618;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5e0c; end: 105bc5e1b; -[SCFriendsFeedComponentView lensFriendsFeedContextButtonScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5e0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273161c);
}



/* Entry: 105bc5e1c; end: 105bc5e5b; -[SCFriendsFeedComponentView setLensFriendsFeedContextButtonScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273161c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5e5c; end: 105bc5e6b; -[SCFriendsFeedComponentView friendsFeedGamingButtonScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5e5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731620);
}



/* Entry: 105bc5e6c; end: 105bc5eab; -[SCFriendsFeedComponentView setFriendsFeedGamingButtonScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731620;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5eac; end: 105bc5ebb; -[SCFriendsFeedComponentView friendsFeedGamesPresenceButtonScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5eac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731624);
}



/* Entry: 105bc5ebc; end: 105bc5efb; -[SCFriendsFeedComponentView setFriendsFeedGamesPresenceButtonScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731624;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5efc; end: 105bc5f1b; -[SCFriendsFeedComponentView baseViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5efc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112731628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bc5f1c; end: 105bc5f2f; -[SCFriendsFeedComponentView setBaseViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112731628,param_3);
  return;
}



/* Entry: 105bc5f30; end: 105bc5f3f; -[SCFriendsFeedComponentView simpleSnapchatExperimentConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5f30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731598);
}



/* Entry: 105bc5f40; end: 105bc5f4f; -[SCFriendsFeedComponentView doubleTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5f40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273159c);
}



/* Entry: 105bc5f50; end: 105bc5f5f; -[SCFriendsFeedComponentView configProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5f50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273162c);
}



/* Entry: 105bc5f60; end: 105bc5f9f; -[SCFriendsFeedComponentView setConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273162c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5fa0; end: 105bc5faf; -[SCFriendsFeedComponentView overlayItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5fa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273160c);
}



/* Entry: 105bc5fb0; end: 105bc5fef; -[SCFriendsFeedComponentView setOverlayItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc5fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273160c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc5ff0; end: 105bc5fff; -[SCFriendsFeedComponentView messagingExperimentService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc5ff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127315a8);
}



/* Entry: 105bc6000; end: 105bc6407; -[SCFriendsFeedComponentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6000(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127315a8,0);
  _objc_storeStrong(param_1 + _DAT_11273160c,0);
  _objc_storeStrong(param_1 + _DAT_11273162c,0);
  _objc_storeStrong(param_1 + _DAT_11273159c,0);
  _objc_destroyWeak(param_1 + _DAT_112731628);
  _objc_storeStrong(param_1 + _DAT_112731624,0);
  _objc_storeStrong(param_1 + _DAT_112731620,0);
  _objc_storeStrong(param_1 + _DAT_11273161c,0);
  _objc_storeStrong(param_1 + _DAT_112731618,0);
  _objc_storeStrong(param_1 + _DAT_112731614,0);
  _objc_storeStrong(param_1 + _DAT_112731610,0);
  _objc_storeStrong(param_1 + _DAT_1127315c8,0);
  _objc_storeStrong(param_1 + _DAT_112731604,0);
  _objc_storeStrong(param_1 + _DAT_1127315d8,0);
  _objc_storeStrong(param_1 + _DAT_1127315d4,0);
  _objc_storeStrong(param_1 + _DAT_1127315d0,0);
  _objc_storeStrong(param_1 + _DAT_1127315a4,0);
  _objc_destroyWeak(param_1 + _DAT_112731600);
  _objc_storeStrong(param_1 + _DAT_1127315b0,0);
  _objc_storeStrong(param_1 + _DAT_1127315ac,0);
  _objc_storeStrong(param_1 + _DAT_112731598,0);
  _objc_storeStrong(param_1 + _DAT_1127315c4,0);
  _objc_storeStrong(param_1 + _DAT_1127315a0,0);
  _objc_storeStrong(param_1 + _DAT_112731584,0);
  _objc_storeStrong(param_1 + _DAT_1127315f8,0);
  _objc_storeStrong(param_1 + _DAT_1127315fc,0);
  _objc_storeStrong(param_1 + _DAT_1127315c0,0);
  _objc_storeStrong(param_1 + _DAT_1127315f0,0);
  _objc_storeStrong(param_1 + _DAT_1127315f4,0);
  _objc_storeStrong(param_1 + _DAT_1127315bc,0);
  _objc_storeStrong(param_1 + _DAT_1127315e8,0);
  _objc_storeStrong(param_1 + _DAT_1127315ec,0);
  _objc_storeStrong(param_1 + _DAT_1127315b8,0);
  _objc_storeStrong(param_1 + _DAT_112731594,0);
  _objc_storeStrong(param_1 + _DAT_112731590,0);
  _objc_storeStrong(param_1 + _DAT_11273158c,0);
  _objc_storeStrong(param_1 + _DAT_112731588,0);
  _objc_storeStrong(param_1 + _DAT_112731580,0);
  _objc_storeStrong(param_1 + _DAT_11273157c,0);
  _objc_storeStrong(param_1 + _DAT_112731578,0);
  _objc_storeStrong(param_1 + _DAT_112731574,0);
  _objc_storeStrong(param_1 + _DAT_112731570,0);
  _objc_storeStrong(param_1 + _DAT_11273156c,0);
  _objc_storeStrong(param_1 + _DAT_112731568,0);
  _objc_storeStrong(param_1 + _DAT_112731560,0);
  _objc_storeStrong(param_1 + _DAT_112731564,0);
  _objc_storeStrong(param_1 + _DAT_11273155c,0);
  _objc_storeStrong(param_1 + _DAT_112731558,0);
  _objc_storeStrong(param_1 + _DAT_112731554,0);
  _objc_storeStrong(param_1 + _DAT_112731550,0);
  _objc_storeStrong(param_1 + _DAT_11273154c,0);
  _objc_storeStrong(param_1 + _DAT_112731548,0);
  _objc_storeStrong(param_1 + _DAT_112731544,0);
  _objc_storeStrong(param_1 + _DAT_112731540,0);
  _objc_storeStrong(param_1 + _DAT_1127315cc,0);
  _objc_storeStrong(param_1 + _DAT_1127315e4,0);
  _objc_storeStrong(param_1 + _DAT_1127315dc,0);
  _objc_storeStrong(param_1 + _DAT_112731630,0);
  _objc_storeStrong(param_1 + _DAT_1127315e0,0);
  _objc_storeStrong(param_1 + _DAT_11273153c,0);
  _objc_storeStrong(param_1 + _DAT_1127315b4,0);
  _objc_storeStrong(param_1 + _DAT_112731538,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731608,0);
  return;
}



/* Entry: 105bc6408; end: 105bc64e7; -[SCFriendsFeedFriendmojiView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105bc6408(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec1e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_112731634;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar4 = (long)_DAT_112731638;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105bc64e8; end: 105bc65b7; -[SCFriendsFeedFriendmojiView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc64e8(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ec1e8;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_112731638;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar3);
  func_0x00010c074c20();
  func_0x00010bf20c00(param_2);
  if (iVar1 == 0) {
    _CGRectGetHeight();
    dVar4 = param_1;
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    func_0x00010c19f0e0(dVar4 - param_1,0,param_1,param_1,*(undefined8 *)(param_2 + lVar3));
    uVar2 = *(undefined8 *)(param_2 + _DAT_112731634);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112731634);
  }
  func_0x00010c19f0e0(uVar2);
  return;
}



/* Entry: 105bc65b8; end: 105bc662f; -[SCFriendsFeedFriendmojiView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc65b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ec1e8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731634));
  _objc_release(param_3);
  return;
}



/* Entry: 105bc6630; end: 105bc67b7; -[SCFriendsFeedFriendmojiView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6630(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11273163c;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
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
      if ((uVar1 & 1) != 0) goto LAB_105bc67a0;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bfb9a40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfb9a60(param_3);
    func_0x00010beda260(param_1,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c279400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      lVar4 = (long)_DAT_112731638;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,0);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
    }
    else {
      uVar1 = param_3;
      func_0x00010c279400(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_112731638;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,uVar1);
      _objc_release(uVar1);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
    }
    func_0x00010c1a7f60(uVar2,param_2,uVar3 == 0);
    func_0x00010c1cbe20(param_1);
    func_0x00010bec1aa0(param_1);
  }
LAB_105bc67a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc67b8; end: 105bc6867; -[SCFriendsFeedFriendmojiView _startStreakAnimationIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc67b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11273163c);
  func_0x00010bf9cba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = (long)_DAT_112731640;
  if (lVar1 == 0) {
    if (*(long *)(param_1 + lVar4) == 0) {
      return;
    }
    func_0x00010c069d00();
    puVar2 = (undefined *)0x0;
  }
  else {
    if (*(long *)(param_1 + lVar4) != 0) {
      return;
    }
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s__animateStreakIndicator_11252ca88,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105bc6868; end: 105bc697f; -[SCFriendsFeedFriendmojiView _animateStreakIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6868(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731634);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11273163c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf9cba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  if ((int)uVar4 == 0) {
    func_0x00010bf9cba0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf51e00();
    func_0x00010bf9cbc0(*(undefined8 *)(param_1 + lVar5));
  }
  else {
    func_0x00010bfb9a40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf51e00();
    func_0x00010bfb9a60(*(undefined8 *)(param_1 + lVar5));
  }
  func_0x00010beda260(param_1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bc6980; end: 105bc69cb; -[SCFriendsFeedFriendmojiView _updateLabelWithText:size:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6980(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c16b720(*(undefined8 *)(param_3 + _DAT_112731634));
  lVar1 = (long)_DAT_112731644;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 105bc69cc; end: 105bc69df; -[SCFriendsFeedFriendmojiView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105bc69cc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112731644);
}



/* Entry: 105bc69e0; end: 105bc6a37; -[SCFriendsFeedFriendmojiView willMoveToSuperview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc69e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = (long)_DAT_112731640;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c069d00();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bc6a38; end: 105bc6a47; -[SCFriendsFeedFriendmojiView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bc6a38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273163c);
}



/* Entry: 105bc6a48; end: 105bc6aa7; -[SCFriendsFeedFriendmojiView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6a48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273163c,0);
  _objc_storeStrong(param_1 + _DAT_112731640,0);
  _objc_storeStrong(param_1 + _DAT_112731638,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731634,0);
  return;
}



/* Entry: 105bc6aa8; end: 105bc6c53; -[SCFriendsFeedLargeActionButton initWithIconType:title:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105bc6aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec1f0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    _objc_initWeak(auStack_58,puVar1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc0000000;
    pcStack_70 = FUN_105bc6c54;
    puStack_68 = &UNK_1108db480;
    puVar2 = PTR_PTR_1126ae720;
    uStack_60 = param_3;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273164c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273164c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_90,auStack_58);
    uStack_88 = param_3;
    _objc_retain(param_4);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731650);
    *(undefined **)((long)puVar1 + (long)_DAT_112731650) = puVar2;
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105bc6c54; end: 105bc6d0b;  */

void FUN_105bc6c54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bc6d0c; end: 105bc6d77; -[SCFriendsFeedLargeActionButton setButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6d0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112731648;
  if (*(long *)(param_1 + lVar1) != param_3) {
    *(long *)(param_1 + lVar1) = param_3;
    func_0x00010be94500();
    if (*(long *)(param_1 + lVar1) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showStackView_11258c638);
      return;
    }
    if (*(long *)(param_1 + lVar1) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010beb9610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showIcon_11258bf28);
      return;
    }
  }
  return;
}



/* Entry: 105bc6d78; end: 105bc6fb3; -[SCFriendsFeedLargeActionButton _stackViewWithIconType:title:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bc20(0x4034000000000000,0x4034000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                      param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c181cc0(0x447a0000,puVar1,param_2,0);
  func_0x00010c182220(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c165e00();
  func_0x00010c165e20(puVar2,param_2,1);
  func_0x00010c1c83a0(0x3fe0000000000000,puVar2);
  func_0x00010c212f20(puVar2,param_2,param_4);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar1;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c18e200(0,0x4020000000000000,0,0x4020000000000000,puVar3);
  puVar4 = puVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(puVar4);
  func_0x00010c1b9ba0(puVar3,param_2,1);
  func_0x00010c207380(0x4010000000000000,puVar3);
  func_0x00010c219b60(puVar3,param_2,0);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar1 + _DAT_11273164c);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + _DAT_112731650);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105bc6fb4; end: 105bc702b; -[SCFriendsFeedLargeActionButton _resetViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bc6fb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273164c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731650);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bc702c; end: 105bc72af; -[SCFriendsFeedLargeActionButton _showIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105bc702c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  undefined *puVar18;
  undefined8 unaff_x21;
  long lVar19;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long lVar20;
  undefined8 unaff_x28;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_11273164c;
  lVar1 = *(long *)(param_1 + lVar19);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar19));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar3);
    _objc_release(uVar3);
    puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x21 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = unaff_x21;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x21;
    func_0x00010bf493a0(unaff_x21,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = *(undefined8 *)(param_1 + lVar19);
    uStack_78 = unaff_x23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = param_1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x26;
    func_0x00010bf493a0(unaff_x26,param_2,unaff_x27);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x28;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_88,param_2,unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x23);
    _objc_release(lVar1);
    _objc_release(unaff_x21);
    _objc_release(uStack_80);
  }
  lVar4 = *(long *)(param_1 + lVar19);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  lVar5 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar5;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105bc72b0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_112731650;
  lVar6 = *(long *)(lVar5 + lVar20);
  uStack_f0 = unaff_x28;
  lStack_e8 = unaff_x27;
  uStack_e0 = unaff_x26;
  uStack_d8 = unaff_x25;
  puStack_d0 = unaff_x24;
  uStack_c8 = unaff_x23;
  lStack_c0 = lVar19;
  uStack_b8 = unaff_x21;
  lStack_b0 = lVar1;
  lStack_a8 = lVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    func_0x00010bf57500(*(undefined8 *)(lVar5 + lVar20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar5 + lVar20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar5,param_2,uVar3);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(lVar5 + lVar20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf49420(0x4053800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar5 + lVar20);
    uStack_118 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar5 + lVar20);
    uStack_110 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf34860(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf493a0(uVar13,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar5 + lVar20);
    uStack_108 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar5;
    func_0x00010bf348e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf493a0(uVar16,param_2,lVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_100 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar18);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(lVar19);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar1);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar7);
  }
  lVar1 = *(long *)(lVar5 + lVar20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + _DAT_112731648);
}


