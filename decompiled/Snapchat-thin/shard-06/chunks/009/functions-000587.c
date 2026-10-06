/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f3d6dc; end: 104f3d777;  */

void FUN_104f3d6dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f3d778;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 104f3d778; end: 104f3d787;  */

void FUN_104f3d778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f3d784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f3d788; end: 104f3d913; -[SCSnapReplayController attemptSnapReplayForConversation:isReplayAgain:] */

void FUN_104f3d788(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_1;
  func_0x00010beb3340();
  if ((int)uVar1 == 0) {
    if (param_4 == 0) {
      func_0x00010be8eea0(param_1);
      goto LAB_104f3d8c8;
    }
    uVar1 = param_1;
    func_0x00010be43340();
    if ((uVar1 & 1) == 0) {
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c1314e0();
      _objc_release(lVar3);
      goto LAB_104f3d8c8;
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104f3d948;
    puStack_80 = &UNK_11084b7a0;
    ppuVar4 = &puStack_98;
    _objc_copyWeak(auStack_70,auStack_38);
    _objc_retain(param_3);
    uStack_78 = param_3;
    func_0x00010bee6000(param_1);
    uVar2 = uStack_78;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104f3d914;
    puStack_50 = &UNK_110841fb0;
    ppuVar4 = &puStack_68;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010beb9240(param_1);
    uVar2 = uStack_48;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(ppuVar4 + 5);
LAB_104f3d8c8:
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3d914; end: 104f3d947;  */

void FUN_104f3d914(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8eea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3d948; end: 104f3d9af;  */

void FUN_104f3d948(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c1314e0();
      _objc_release(lVar1);
    }
    else {
      func_0x00010be8eea0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3d9b0; end: 104f3dbc7; -[SCSnapReplayController _showFirstReplayAlertWithCompletion:] */

void FUN_104f3d9b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c131520();
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be8ee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdda300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar1;
  lStack_70 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000107080c54();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000107080c6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  puVar8 = (undefined8 *)(param_1 + 0x48);
  uVar7 = *puVar8;
  *puVar8 = puVar4;
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(*puVar8);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6b00();
    _objc_release(uVar7);
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f3dbc8; end: 104f3dc2b;  */

void FUN_104f3dbc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6b00();
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f3dc2c; end: 104f3de8b; -[SCSnapReplayController _handleFetchOfSnap:messageId:isGroupConversation:] */

void FUN_104f3dc2c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c131540();
  if ((1 < uVar1) || (uVar2 = param_3, func_0x00010bf2c560(), (uVar2 & 1) == 0)) {
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c1314e0();
    _objc_release(lVar5);
    goto LAB_104f3dcfc;
  }
  uVar2 = param_3;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    func_0x00010be2fe00(param_1);
    goto LAB_104f3dcfc;
  }
  _objc_initWeak(auStack_58,param_1);
  uVar2 = param_1;
  func_0x00010beb3340();
  if ((int)uVar2 == 0) {
    if (uVar1 == 1) {
      uVar1 = param_1;
      func_0x00010be43340();
      if ((uVar1 & 1) != 0) {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_104f3dec0;
        puStack_a0 = &UNK_11084b7a0;
        ppuVar6 = &puStack_b8;
        _objc_copyWeak(auStack_90,auStack_58);
        _objc_retain(param_3);
        uStack_98 = param_3;
        func_0x00010bee6000(param_1);
        uVar1 = uStack_98;
        goto LAB_104f3dd98;
      }
      lVar5 = param_1 + 8;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c1314e0();
    }
    else {
      func_0x00010be8ee60(param_1);
      lVar5 = param_1 + 8;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c1314e0();
    }
    _objc_release(lVar5);
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104f3de8c;
    puStack_70 = &UNK_110841fb0;
    ppuVar6 = &puStack_88;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_68 = param_3;
    func_0x00010beb9240(param_1);
    uVar1 = uStack_68;
LAB_104f3dd98:
    _objc_release(uVar1);
    _objc_destroyWeak(ppuVar6 + 5);
  }
  _objc_destroyWeak(auStack_58);
LAB_104f3dcfc:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3de8c; end: 104f3debf;  */

void FUN_104f3de8c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3dec0; end: 104f3df23;  */

void FUN_104f3dec0(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      func_0x00010be8ee60(param_1);
    }
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1314e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3df24; end: 104f3e0bf; -[SCSnapReplayController _handleSentSnap:isGroupConversation:] */

void FUN_104f3df24(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c131600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 < 2) {
    if (lVar4 != 0) {
      if (lVar4 == 1) {
        _objc_initWeak(auStack_58,param_1);
        _objc_copyWeak(auStack_68,auStack_58);
        _objc_retain(param_3);
        uStack_60 = param_4;
        func_0x00010be0d0e0(param_1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_68);
        _objc_destroyWeak(auStack_58);
      }
      goto LAB_104f3e080;
    }
  }
  else {
    if (lVar4 == 3) {
      func_0x00010be4e780(param_1);
      goto LAB_104f3e080;
    }
    if (lVar4 != 2) goto LAB_104f3e080;
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1314e0();
  _objc_release(param_1);
LAB_104f3e080:
  _objc_release(param_3);
  return;
}



/* Entry: 104f3e0c0; end: 104f3e12b;  */

void FUN_104f3e0c0(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c1314e0();
      _objc_release(lVar1);
    }
    else {
      func_0x00010be4e720(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3e12c; end: 104f3e1a3; -[SCSnapReplayController _loadSnapIfEligible:isGroupConversation:] */

void FUN_104f3e12c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c131540(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  if (uVar1 < 2) {
    func_0x00010be4e720(param_1,param_2,param_3,param_4);
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1314e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f3e1a4; end: 104f3e303; -[SCSnapReplayController _loadSnap:isGroupConversation:] */

void FUN_104f3e1a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c09b920(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3e304; end: 104f3e347;  */

void FUN_104f3e304(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3e348; end: 104f3e3e7; -[SCSnapReplayController _onLoadSnap:success:] */

void FUN_104f3e348(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (param_4 != 0) {
    func_0x00010be8ee60(param_1);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104f3e3b8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 104f3e3e8; end: 104f3e463; -[SCSnapReplayController _replaySnap:] */

void FUN_104f3e3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf490e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf502a0(uVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f3e464; end: 104f3e53f; -[SCSnapReplayController _replaySnapsForConversation:] */

void FUN_104f3e464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf0d9e0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3e540; end: 104f3e5bb;  */

void FUN_104f3e540(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    if (param_2 != 0) {
      func_0x00010c131500(lVar1);
      _objc_release(lVar1);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
    }
    func_0x00010c1314e0(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3e5bc; end: 104f3e5fb; -[SCSnapReplayController _shouldDisplayFirstReplayDialog] */

undefined8 FUN_104f3e5bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22f700();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104f3e5fc; end: 104f3e713; -[SCSnapReplayController _replayActionWithBlock:] */

void FUN_104f3e5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000107080c84();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010beff480(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f3e714; end: 104f3e7df;  */

void FUN_104f3e714(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 104f3e7e0; end: 104f3e8c3; -[SCSnapReplayController _cancelAction] */

void FUN_104f3e7e0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000107080c9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010beff4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f3e8c4; end: 104f3e983;  */

void FUN_104f3e8c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 104f3e984; end: 104f3e9ff; -[SCSnapReplayController _isReplayAgainEnabled] */

bool FUN_104f3e984(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c131420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 != 0;
}



/* Entry: 104f3ea00; end: 104f3eb1f; -[SCSnapReplayController _upsellReplayAgainIfNeededForPageType:callback:] */

void FUN_104f3ea00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c131420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 1) {
    func_0x00010be0d0e0(param_1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c131420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c252440();
    (**(code **)(param_4 + 0x10))(param_4,lVar4 == 3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f3eb20; end: 104f3ec1f; -[SCSnapReplayController _exposePlusSubscribeScopeWithSourcePageType:plusFeatureType:callback:] */

void FUN_104f3eb20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x58) = param_4;
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c131520();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126b1da8;
    _objc_alloc(PTR_PTR_1126b1da8);
    func_0x00010c04abe0();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf23e60(uVar3,param_2,*(undefined8 *)(param_1 + 0x40),puVar2,param_1,4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104f3ec20; end: 104f3ed47; -[SCSnapReplayController plusSubscribeDidDismiss] */

void FUN_104f3ec20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1314e0();
    goto LAB_104f3ed24;
  }
  if (*(long *)(param_1 + 0x58) == 0x36) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c131600();
    _objc_retainAutoreleasedReturnValue();
LAB_104f3ecd8:
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    (**(code **)(lVar1 + 0x10))(lVar1,lVar5 == 3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x50);
  }
  else if (*(long *)(param_1 + 0x58) == 0x13) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c131420();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_104f3ecd8;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_104f3ed24:
  _objc_release(lVar1);
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  return;
}



/* Entry: 104f3ed48; end: 104f3ed73; -[SCSnapReplayController dialogDidDismiss:] */

void FUN_104f3ed48(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1314e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3ed74; end: 104f3edff; -[SCSnapReplayController .cxx_destruct] */

void FUN_104f3ed74(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f3ee00; end: 104f3f05b; -[SCSnapReplayScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3ee00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126b2948;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127176a8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127176ac;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c08ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127176b0;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + _DAT_1127176b4);
  lVar9 = param_1 + _DAT_1127176b8;
  _objc_loadWeakRetained(lVar9);
  lVar10 = param_1 + _DAT_1127176bc;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127176c0;
  lVar13 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a300(puVar1,param_2,param_1,lVar4,lVar6,lVar8,uVar15,lVar9,lVar12,lVar14);
  uVar15 = *(undefined8 *)(param_1 + _DAT_1127176c4);
  *(undefined **)(param_1 + _DAT_1127176c4) = puVar1;
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
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
  param_1 = param_1 + lVar16;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c242ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf900();
  _objc_release(lVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 104f3f05c; end: 104f3f093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3f05c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127176c4),
             PTR_s_attemptSnapReplayForConversation_1125a1028,param_2,param_3);
  return;
}



/* Entry: 104f3f094; end: 104f3f0cf; -[SCSnapReplayScopeEntryPoint end] */

void FUN_104f3f094(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5240;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f3f0d0; end: 104f3f143; -[SCSnapReplayScopeEntryPoint replayControllerWillDisplayAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3f0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127176c0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1316a0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f3f144; end: 104f3f1b7; -[SCSnapReplayScopeEntryPoint replayControllerDidCompleteWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3f144(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127176c0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c131680(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f3f1b8; end: 104f3f24b; -[SCSnapReplayScopeEntryPoint replayControllerDidReplaySnapsInConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3f1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127176c0;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c131660(lVar2,param_2,param_1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f3f24c; end: 104f3f2d3; -[SCSnapReplayScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3f24c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127176b4,0);
  _objc_destroyWeak(param_1 + _DAT_1127176b8);
  _objc_destroyWeak(param_1 + _DAT_1127176b0);
  _objc_destroyWeak(param_1 + _DAT_1127176bc);
  _objc_destroyWeak(param_1 + _DAT_1127176ac);
  _objc_destroyWeak(param_1 + _DAT_1127176a8);
  _objc_destroyWeak(param_1 + _DAT_1127176c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127176c4,0);
  return;
}



/* Entry: 104f3f2d4; end: 104f3f427; -[SCMessagePluginForwardHandler initWithMessageForwarder:textSender:forwardablePlugin:message:focusedMessageContent:conversationParticipants:] */

undefined1 *
FUN_104f3f2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e5248;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f3f428; end: 104f3f47f; -[SCMessagePluginForwardHandler buildForwardParams] */

void FUN_104f3f428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001070b2918(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb6400(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f3f480; end: 104f3f5b7; -[SCMessagePluginForwardHandler forwardMessageWithConversations:participantCount:additionalText:completion:] */

void FUN_104f3f480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07e260();
  if (iVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104f3f5b8;
    puStack_80 = &UNK_11085d2c0;
    lStack_78 = param_1;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(param_3);
    uStack_68 = param_3;
    uStack_58 = param_4;
    _objc_retain(param_6);
    uStack_60 = param_6;
    func_0x00010bfb6380(uVar1,param_2,uVar2,uVar4,param_3,param_4,&puStack_98);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
  }
  else {
    func_0x00010be18e20(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3f5b8; end: 104f3f607;  */

void FUN_104f3f5b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((int)param_2 != 0) {
    func_0x00010be9e7e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f3f5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 104f3f608; end: 104f3f74b; -[SCMessagePluginForwardHandler _forwardMediaToConversations:participantCount:additionalText:completion:] */

void FUN_104f3f608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be74460(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_3;
  func_0x00010bf50b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104f3f74c;
  puStack_60 = &UNK_110852668;
  uStack_58 = param_6;
  _objc_retain(param_6);
  func_0x00010bfb63a0(uVar2,param_2,uVar4,5,param_5,lVar1,uVar3,0,&puStack_78);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(lVar1);
  return;
}



/* Entry: 104f3f74c; end: 104f3f767;  */

void FUN_104f3f74c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f3f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 104f3f768; end: 104f3f863; -[SCMessagePluginForwardHandler _sendAdditionalText:conversations:participantCount:] */

void FUN_104f3f768(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    lVar1 = param_1;
    func_0x00010be74460(param_1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf50b20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b620(uVar3,param_2,puVar2,0,uVar4,0,lVar1,0);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f3f864; end: 104f3f98f; -[SCMessagePluginForwardHandler _platformAnalyticsForConversations:participantCount:] */

void FUN_104f3f864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1a40;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b0820(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf026a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x0001086063f4(uVar3,param_4,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f3f990; end: 104f3f9ef; -[SCMessagePluginForwardHandler .cxx_destruct] */

void FUN_104f3f990(long param_1)

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



/* Entry: 104f3f9f0; end: 104f3f9f7;  */

void FUN_104f3f9f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f3f9f8; end: 104f3fd5b;  */

void FUN_104f3f9f8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  
  ppuVar6 = *(undefined ***)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(ppuVar6);
  puVar3 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bfe77e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  ppuVar4 = ppuVar6;
  func_0x000100504554(ppuVar6,&PTR___NSConcreteGlobalBlock_11085d310);
  _objc_release(ppuVar6);
  puVar3 = PTR_PTR_1126b0ae0;
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar4);
  ppuVar6 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbbb98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = ppuVar4;
    func_0x00010bf529e0();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar9 = ppuVar4;
    if (ppuVar7 == (undefined **)0x1) {
      FUN_104f4195c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = ppuVar4;
      func_0x00010bf529e0();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar7 == (undefined **)0x2) {
        func_0x000104f41974();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf529e0(ppuVar4);
        ppuVar7 = ppuVar4;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = &PTR____CFConstantStringClassReference_110dbbbb8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbbb8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000104f41974();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar4;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
      }
      _objc_release(ppuVar8);
    }
    _objc_release(ppuVar9);
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar4);
  func_0x00010bf57f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  uVar11 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c25f340(uVar11);
  _objc_release(uVar11);
  _objc_release(puVar3);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f3fd5c; end: 104f3ffbf; -[SCMessageForwardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3fd5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar1 = param_1;
  FUN_104f3ffc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_104f3ffc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb37e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_104f3ffc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be18ea0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be02260(param_1);
  }
  else {
    puVar5 = PTR_PTR_1126b2958;
    _objc_alloc();
    if (param_1 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = param_1 + _DAT_112717704;
      _objc_loadWeakRetained(lVar12);
    }
    lVar6 = lVar12;
    func_0x00010c0cb500(lVar12);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = param_1 + _DAT_112717700;
      _objc_loadWeakRetained(lVar14);
    }
    lVar7 = lVar14;
    func_0x00010c26c760(lVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b5c0(puVar5,param_2,lVar6,lVar7,lVar1,lVar2,lVar3,lVar4);
    lVar13 = (long)_DAT_1127176e0;
    uVar11 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar5;
    _objc_release(uVar11);
    _objc_release(lVar7);
    _objc_release(lVar14);
    _objc_release(lVar6);
    _objc_release(lVar12);
    uVar8 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf22220(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010bdd6880(param_1,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    FUN_104f3ffc0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar6;
    func_0x00010c247520();
    uVar11 = 0x1f;
    if (lVar14 != 0) {
      uVar11 = 0x20;
    }
    _objc_release(lVar6);
    uVar9 = uVar8;
    func_0x00010c0cba00(uVar8);
    uVar10 = uVar8;
    func_0x00010c0c6c20(uVar8);
    func_0x00010be6d5a0(param_1,param_2,lVar12,uVar11,uVar9,uVar10);
    _objc_release(lVar12);
    _objc_release(uVar8);
  }
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f3ffc0; end: 104f3ffe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3ffc0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127176ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f3ffe4; end: 104f4017b; -[SCMessageForwardEntryPoint _openSendToWithPreviewConfiguration:source:messageType:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3ffe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_PTR_1126b0810;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c046120();
  puVar2 = PTR_PTR_1126b0818;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  func_0x00010c044540(puVar2,param_2,puVar3,param_4,param_5,param_6,0x27,0,0,0,0,0,0);
  _objc_release(puVar3);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112717710;
    _objc_loadWeakRetained(lVar7);
  }
  lVar4 = param_1;
  FUN_104f3ffc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf23ee0(lVar7,param_2,lVar5,PTR____NSArray0__struct_11034ab48,param_3,0,puVar1,0,0,
                      puVar2,uVar8 & 0xffffffffffff0000,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127176e4),param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f4017c; end: 104f4024b; -[SCMessageForwardEntryPoint _forwardablePluginForMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4017c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127176f4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar1;
  func_0x00010c0cb800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb6460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar4 = lVar3;
  func_0x00010010fab4(lVar3,PTR_DAT_1126a4ed0);
  lVar1 = lVar3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f4024c; end: 104f403f7; -[SCMessageForwardEntryPoint _buildPreviewConfigurationWithForwardParams:] */

void FUN_104f4024c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      puVar3 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010bf11fe0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b07e8;
      _objc_alloc(PTR_PTR_1126b07e8);
      func_0x00010c061960();
      func_0x00010bee9320(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b07f8;
      _objc_alloc(PTR_PTR_1126b07f8);
      func_0x00010c01dde0();
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_104f403b0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_104f403b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f403f8; end: 104f4043f;  */

void FUN_104f403f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd68a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f40440; end: 104f405bb; -[SCMessageForwardEntryPoint _buildPreviewWithForwardParams:] */

void FUN_104f40440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_104f405bc;
  uStack_68 = 0x104f405cc;
  uStack_60 = 0;
  uVar1 = param_3;
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0bd0a0(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_80[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f405bc; end: 104f405d3;  */

void FUN_104f405bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f405d4; end: 104f40643;  */

void FUN_104f405d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bdd5ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f40644; end: 104f4067b;  */

void FUN_104f40644(long param_1,undefined8 param_2)

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



/* Entry: 104f4067c; end: 104f407df; -[SCMessageForwardEntryPoint _getOrCreateComposerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4067c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_1127176e8;
  lVar8 = *(long *)(param_1 + lVar9);
  if (lVar8 == 0) {
    _objc_retain(param_3);
    lVar8 = param_1 + _DAT_1127176f0;
    _objc_loadWeakRetained();
    lVar1 = lVar8;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf44480(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf443a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar6 = lVar2;
    func_0x00010bf55720(lVar2,param_2,uVar3,uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(long *)(param_1 + lVar9) = lVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
    lVar8 = *(long *)(param_1 + lVar9);
    _objc_retain(lVar8);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 104f407e0; end: 104f4085f; -[SCMessageForwardEntryPoint _buildComposerPluginPreviewWithContextParams:] */

void FUN_104f407e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1870;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0639c0();
  func_0x00010be21020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1ee6c0(param_1,param_2,puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f40860; end: 104f40abb; -[SCMessageForwardEntryPoint _viewConfigurationWithForwardParams:displayConfiguration:] */

void FUN_104f40860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_104f405bc;
  uStack_68 = 0x104f405cc;
  uStack_60 = 0;
  uVar2 = param_3;
  puStack_80 = &uStack_88;
  func_0x00010c1109c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104f40abc;
  puStack_a0 = &UNK_11085d390;
  puStack_90 = &uStack_88;
  _objc_retain(param_4);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x104f40b04;
  puStack_d0 = &UNK_11085d3c0;
  puStack_c0 = &uStack_88;
  uStack_98 = param_4;
  _objc_retain(param_4);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x104f40b50;
  puStack_100 = &UNK_11084b9d0;
  puStack_f0 = &uStack_88;
  uStack_c8 = param_4;
  _objc_retain(param_4);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_104f40b98;
  puStack_130 = &UNK_11085d3f0;
  uStack_f8 = param_4;
  _objc_retain(param_4);
  uStack_128 = param_4;
  puStack_120 = &uStack_88;
  _objc_copyWeak(auStack_150,auStack_58);
  _objc_retain(param_4);
  func_0x00010c0c1420(uVar2);
  _objc_release(uVar2);
  uVar2 = puStack_80[5];
  _objc_retain(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_150);
  _objc_release(uStack_128);
  _objc_release(uStack_f8);
  _objc_release(uStack_c8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f40abc; end: 104f40b97;  */

void FUN_104f40abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b07f0;
  func_0x00010c299100(PTR_PTR_1126b07f0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f40b98; end: 104f40cb7;  */

void FUN_104f40b98(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b2960;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_3;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c00d260(param_1);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b07f0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar3;
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  puVar3 = puVar1 + 0x30;
  _objc_loadWeakRetained(puVar3);
  puVar2 = puVar3;
  func_0x00010be21020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b07f0;
  func_0x00010bfbb8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28) = puVar3;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f40cb8; end: 104f40d4f;  */

void FUN_104f40cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010be21020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126b07f0;
  func_0x00010bfbb8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f40d50; end: 104f40dc7; -[SCMessageForwardEntryPoint _dismiss] */

void FUN_104f40d50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_104f3ffc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f3ffc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83980(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f40dc8; end: 104f40ed3; -[SCMessageForwardEntryPoint _dismissSendToScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f40dc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_1127176e8;
  func_0x00010bf6ef60(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127176e4);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f40ed4; end: 104f40eff;  */

void FUN_104f40ed4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f40f00; end: 104f40f57; -[SCMessageForwardEntryPoint _removeSendToScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f40f00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127176e4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f40f58; end: 104f41513; -[SCMessageForwardEntryPoint didSendWithSelectionState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f40f58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_228 [8];
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b8 = param_1;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1a8 = puVar2;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_1c0 = param_3;
  puStack_1b0 = puVar3;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010bf52a60();
  lVar14 = 0;
  if (lVar11 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar16 = *(long *)(lStack_128 + lVar13 * 8);
        lVar4 = lVar16;
        func_0x000108425b30();
        puVar2 = PTR_PTR_1126b01c0;
        if ((int)lVar4 == 0) {
          lVar4 = lVar16;
          func_0x000108425a5c();
          puVar2 = PTR_PTR_1126b01c0;
          if ((int)lVar4 != 0) {
            func_0x00010c122a80(lVar16);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar16;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar4;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c294260(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_1a8);
            _objc_release(puVar2);
            _objc_release(lVar6);
            _objc_release(lVar4);
            _objc_release(lVar16);
            lVar14 = lVar14 + 1;
            goto LAB_104f41168;
          }
        }
        else {
          lVar4 = lVar16;
          func_0x00010c122a80(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar6;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfcf680(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_1a8);
          _objc_release(puVar2);
          _objc_release(lVar5);
          _objc_release(lVar6);
          _objc_release(lVar4);
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar16;
          func_0x00010bf529e0();
          _objc_release(lVar16);
          lVar14 = lVar4 + lVar14;
LAB_104f41168:
          func_0x00010befa120(puStack_1b0);
        }
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      lVar11 = param_3;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_3);
  if (lStack_1b8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lStack_1b8 + _DAT_1127176f8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar11;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar13;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = lStack_1b8;
  uVar15 = *(undefined8 *)(lStack_1b8 + _DAT_1127176e0);
  _objc_retain(uVar15);
  lVar11 = lVar11 + _DAT_1127176ec;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = lVar12;
  _objc_release(lVar11);
  lVar11 = lStack_1b8 + _DAT_112717708;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar12;
  _objc_release(lVar11);
  lVar11 = lStack_1b8 + _DAT_11271770c;
  _objc_loadWeakRetained();
  lVar13 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lStack_1b8;
  FUN_104f3ffc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar12;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar16;
  func_0x000107d60b58();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_initWeak(auStack_138,lStack_1b8);
  lVar11 = lStack_1b8 + _DAT_1127176fc;
  _objc_loadWeakRetained();
  lVar16 = lVar11;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_104f41514;
  puStack_188 = &UNK_11085d480;
  puVar9 = auStack_138;
  _objc_copyWeak(auStack_148);
  lVar12 = lStack_1c0;
  uStack_180 = uVar15;
  lStack_140 = lVar14;
  _objc_retain(lStack_1c0);
  puVar2 = puStack_1b0;
  lStack_178 = lVar12;
  lStack_170 = lStack_1c8;
  lStack_168 = lVar6;
  _objc_retain(puStack_1b0);
  puStack_160 = puVar2;
  lStack_158 = lStack_1d0;
  ppuVar10 = &puStack_1a0;
  lStack_150 = lVar13;
  func_0x00010c297260(lVar7);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar16);
  _objc_release(lVar11);
  func_0x00010be03580(lStack_1b8);
  _objc_release(puStack_160);
  _objc_release(lStack_178);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_138);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lStack_1d0);
  _objc_release(lStack_1c8);
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a8);
  lVar14 = lStack_1c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_138);
  lVar11 = lVar14;
  __Unwind_Resume();
  pcStack_1d8 = FUN_104f41514;
  lStack_220 = lVar7;
  lStack_218 = lVar5;
  uStack_210 = uVar15;
  lStack_208 = lVar16;
  lStack_200 = lVar4;
  lStack_1f8 = lVar4;
  ppuStack_1f0 = &puStack_1a0;
  lStack_1e8 = lVar14;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(ppuVar10);
  if ((puVar9 == (undefined1 *)0x0) || (ppuVar10 != (undefined **)0x0)) {
    lVar14 = lVar11 + 0x58;
    _objc_loadWeakRetained(lVar14);
    func_0x00010be03580();
  }
  else {
    uVar15 = *(undefined8 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 0x28);
    func_0x00010befd440(uVar8);
    _objc_retainAutoreleasedReturnValue();
    auVar17 = *(undefined1 (*) [16])(lVar11 + 0x28);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(lVar11 + 0x28));
    auVar17 = NEON_ext(auVar17,auVar17,8,1);
    lVar14 = auVar17._8_8_;
    uVar1 = *(undefined8 *)(lVar11 + 0x40);
    _objc_retain(*(undefined8 *)(lVar11 + 0x40));
    _objc_copyWeak(auStack_228,lVar11 + 0x58);
    func_0x00010bfb63c0(uVar15);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_228);
    _objc_release(uVar1);
  }
  _objc_release(lVar14);
  _objc_release(ppuVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 104f41514; end: 104f41673;  */

void FUN_104f41514(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar4 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar4);
    func_0x00010be03580();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010befd440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x28);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    lVar4 = auVar5._8_8_;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(*(undefined8 *)(param_1 + 0x40));
    _objc_copyWeak(auStack_58,param_1 + 0x58);
    func_0x00010bfb63c0(uVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f41674; end: 104f41847;  */

void FUN_104f41674(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    puVar4 = PTR_PTR_1126b2950;
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    func_0x00010bf36f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(puVar4);
    uVar6 = uVar7;
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar6;
    func_0x00010bf366a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    puStack_90 = puVar3;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104f3f9f8;
    puStack_78 = &UNK_110841f80;
    uStack_70 = uVar2;
    uStack_68 = uVar1;
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104f41848;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,param_1 + 0x50);
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_destroyWeak(auStack_98);
  return;
}



/* Entry: 104f41848; end: 104f41873;  */

void FUN_104f41848(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f41874; end: 104f41877; -[SCMessageForwardEntryPoint didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_104f41874(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 104f41878; end: 104f4195b; -[SCMessageForwardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f41878(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717714);
  _objc_storeStrong(param_1 + _DAT_1127176e4,0);
  _objc_destroyWeak(param_1 + _DAT_112717710);
  _objc_destroyWeak(param_1 + _DAT_11271770c);
  _objc_destroyWeak(param_1 + _DAT_112717708);
  _objc_destroyWeak(param_1 + _DAT_112717704);
  _objc_destroyWeak(param_1 + _DAT_112717700);
  _objc_destroyWeak(param_1 + _DAT_1127176fc);
  _objc_destroyWeak(param_1 + _DAT_1127176f8);
  _objc_destroyWeak(param_1 + _DAT_1127176f4);
  _objc_destroyWeak(param_1 + _DAT_1127176f0);
  _objc_destroyWeak(param_1 + _DAT_1127176ec);
  _objc_storeStrong(param_1 + _DAT_1127176e8,0);
  _objc_storeStrong(param_1 + _DAT_112717718,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127176e0,0);
  return;
}



/* Entry: 104f4195c; end: 104f4198b;  */

void FUN_104f4195c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbbbd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbbbd8,
                      &PTR____CFConstantStringClassReference_110dbbbf8,0);
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



/* Entry: 104f4198c; end: 104f41d2b; -[SCRemoveConversationAlertEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4198c(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11271771c;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_112717720;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf85ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release();
    FUN_104f422c4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = lVar1;
    func_0x000104f422dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000104f422f4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000104f4230c();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_1);
    puVar7 = PTR_PTR_1126aed70;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104f41d2c;
    puStack_b0 = &UNK_110849410;
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(lVar2);
    lStack_a8 = lVar2;
    func_0x00010beff460();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126aed70;
    param_2 = auStack_98;
    _objc_copyWeak(auStack_d0,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar7;
    puStack_88 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar9);
    _objc_release(puVar10);
    func_0x00010c211b40(puVar9);
    func_0x00010c18b5e0(puVar9);
    param_1 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar11 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar7);
    _objc_release(lStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar1 = lVar2 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8c2e0();
  _objc_release(lVar1);
  lVar2 = lVar2 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bdfc0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f41d2c; end: 104f41d97;  */

void FUN_104f41d2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8c2e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f41d98; end: 104f41ddf;  */

void FUN_104f41d98(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f41de0; end: 104f41de3; -[SCRemoveConversationAlertEntryPoint dialogDidDismiss:] */

void FUN_104f41de0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dialogDidDismiss_11255c9c8);
  return;
}



/* Entry: 104f41de4; end: 104f41e9f; -[SCRemoveConversationAlertEntryPoint _dialogWantsDismiss:] */

void FUN_104f41de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104f41ea0; end: 104f41ecb;  */

void FUN_104f41ea0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f41ecc; end: 104f41fb3; -[SCRemoveConversationAlertEntryPoint _dialogDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f41ecc(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_11271771c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f41fb4; end: 104f41fdf;  */

void FUN_104f41fb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be64760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f41fe0; end: 104f42053; -[SCRemoveConversationAlertEntryPoint _notifyDelegateOfDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f41fe0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271771c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12bae0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f42054; end: 104f42187; -[SCRemoveConversationAlertEntryPoint _removeFromGroupWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f42054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + _DAT_112717720;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c08e240(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104f42188; end: 104f421bb;  */

void FUN_104f42188(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f421bc; end: 104f4227f; -[SCRemoveConversationAlertEntryPoint _handleError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f421bc(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  param_1 = param_1 + _DAT_112717724;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f42280; end: 104f422c3; -[SCRemoveConversationAlertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f42280(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717724);
  _objc_destroyWeak(param_1 + _DAT_112717720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271771c);
  return;
}



/* Entry: 104f422c4; end: 104f42323;  */

void FUN_104f422c4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbbc38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbbc38,
                      &PTR____CFConstantStringClassReference_110dbbc58,0);
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



/* Entry: 104f42324; end: 104f42487; -[SCRemoveFromGroupAction initWithContext:userToRemove:groupConversationId:nativeMessagingSessionManager:onDemandResourceDownloader:notificationPool:] */

undefined1 *
FUN_104f42324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e5250;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = 0x21;
    func_0x00010bdebe00(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f42488; end: 104f4269b; -[SCRemoveFromGroupAction _createCell] */

void FUN_104f42488(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  FUN_104f43364();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010bf6f180();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f4269c;
  puStack_78 = &UNK_110852cd0;
  _objc_copyWeak(auStack_70,auStack_68);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf88c20(uVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  return;
}



/* Entry: 104f4269c; end: 104f42753;  */

void FUN_104f4269c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bde6180(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104f42754; end: 104f427e3;  */

void FUN_104f42754(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8ddc0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f427e4; end: 104f428d7; -[SCRemoveFromGroupAction _attachTrailingImageToButton:] */

void FUN_104f427e4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b10a0;
  if (param_3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x38);
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 != 0) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_104f428d8;
      puStack_48 = &UNK_110841f80;
      _objc_retain(param_3);
      lStack_40 = param_3;
      _objc_retain(uVar4);
      uStack_38 = uVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_60);
      _objc_release(uStack_38);
      _objc_release(lStack_40);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f428d8; end: 104f4293b;  */

void FUN_104f428d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c182220();
  func_0x00010c19f0e0(0,0,0x4034000000000000,0x4034000000000000,puVar1);
  func_0x00010c2194c0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f4293c; end: 104f42973; -[SCRemoveFromGroupAction _dismissActionSheet] */

void FUN_104f4293c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb7880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f42974; end: 104f42c47; -[SCRemoveFromGroupAction _confirmRemoveUserWithConfirmBlock:] */

void FUN_104f42974(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104f4337c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release();
  if ((uVar5 & 1) == 0) {
    func_0x000104f43394();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104f433ac();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = uVar4;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,uVar4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000104f433c4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000104f433dc();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aed70;
  _objc_retain(param_3);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aed70;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar11);
  _objc_release(puVar12);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0cfc40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,*(undefined8 *)(lVar2 + 0x20))
  ;
  return;
}



/* Entry: 104f42c48; end: 104f42c67;  */

void FUN_104f42c48(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f42c68; end: 104f42e2b; -[SCRemoveFromGroupAction _removeUser] */

void FUN_104f42c68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 8),param_2,0xd3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar5);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0 && puVar3 != (undefined *)0x0) {
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104f42e2c;
    puStack_70 = &UNK_110841f80;
    uStack_68 = uVar5;
    uStack_60 = uVar1;
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010c04f4c0(puVar4);
    func_0x00010be61f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c086f80();
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  return;
}



/* Entry: 104f42e2c; end: 104f42e2f;  */

void FUN_104f42e2c(void)

{
  return;
}


