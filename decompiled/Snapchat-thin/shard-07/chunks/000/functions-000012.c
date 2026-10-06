/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10502be30; end: 10502c123; -[SCBestFriendPinningAction _setUp] */

void FUN_10502be30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fbf20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c252440();
  if ((lVar2 != 0) && (lVar2 = lVar3, func_0x00010c252440(), lVar2 != 2)) {
    lVar2 = lVar3;
    func_0x00010c252440();
    if (lVar2 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106c74468();
      _objc_release(uVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb8280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a0c0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    lVar2 = param_1;
    func_0x00010bddc3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_78,param_1);
    puVar7 = PTR_PTR_1126b10a0;
    func_0x00010c1588e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10502c124;
    puStack_88 = &UNK_110852cd0;
    _objc_copyWeak(auStack_80,auStack_78);
    puVar8 = puVar7;
    func_0x00010bf1d200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar8;
    _objc_release(uVar4);
    _objc_release(puVar7);
    func_0x00010c195460(*(undefined8 *)(param_1 + 0x60));
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0fc3a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010c0e0ec0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10502c124; end: 10502c1b3;  */

void FUN_10502c124(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502c1b4; end: 10502c2a3; -[SCBestFriendPinningAction _onPinnedBFUpdate:] */

void FUN_10502c1b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar2);
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x60));
  func_0x00010be409a0(param_1);
  puVar3 = PTR_PTR_1126b10a0;
  uVar6 = *(ulong *)(param_1 + 0x60);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (uVar1 != 0) {
    lVar5 = param_1;
    func_0x00010bddc3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216540(uVar6);
    _objc_release(lVar5);
  }
  func_0x00010c1fade0(*(undefined8 *)(param_1 + 0x60));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10502c2a4; end: 10502c383; -[SCBestFriendPinningAction _cellStringForPinned:] */

void FUN_10502c2a4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf8e420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_3 & 1) == 0) {
    func_0x00010502d4f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010502d510();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar4,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10502c384; end: 10502c51f; -[SCBestFriendPinningAction _onTapWithActionSheet:] */

void FUN_10502c384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fbf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 10502c520; end: 10502c587;  */

void FUN_10502c520(long param_1,long param_2)

{
  func_0x00010c252440();
  if (param_2 == 1) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be48900();
  }
  else {
    if (param_2 != 3) {
      return;
    }
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010becce00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502c588; end: 10502c5bf; -[SCBestFriendPinningAction _togglePinning] */

void FUN_10502c588(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be409a0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed1c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unpinFriend_1125920b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed0530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tryToPinFriend_112591af0);
  return;
}



/* Entry: 10502c5c0; end: 10502c6b7; -[SCBestFriendPinningAction _tryToPinFriend] */

void FUN_10502c5c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10502c6b8;
  puStack_58 = &UNK_110863ad8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0bf0a0(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10502c6b8; end: 10502c6e3;  */

void FUN_10502c6b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502c6e4; end: 10502c79f;  */

void FUN_10502c6e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bde6120(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10502c7a0; end: 10502c7cb;  */

void FUN_10502c7a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502c7cc; end: 10502cacf; -[SCBestFriendPinningAction _confirmAnotherFriendPinned:confirmBlock:] */

void FUN_10502c7cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar12 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  uVar10 = param_3;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar10;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010502d558();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126aed70;
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aed70;
  puVar5 = puVar4;
  func_0x00010502d570();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010502d528();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010502d540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0cfc40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(lVar1 + 0x20));
  return;
}



/* Entry: 10502cad0; end: 10502caef;  */

void FUN_10502cad0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10502caf0; end: 10502cc63; -[SCBestFriendPinningAction _pinFriend] */

void FUN_10502caf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0xcb);
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x60));
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fbf60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0e0ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10502cc64; end: 10502ccab;  */

void FUN_10502cc64(long param_1,ulong param_2)

{
  func_0x00010bf1f3c0();
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502ccac; end: 10502cdf3; -[SCBestFriendPinningAction _unpinFriend] */

void FUN_10502ccac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0xcc);
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x60));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c281d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10502cdf4; end: 10502ce3b;  */

void FUN_10502cdf4(long param_1,ulong param_2)

{
  func_0x00010bf1f3c0();
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502ce3c; end: 10502cef7; -[SCBestFriendPinningAction _launchUpsell] */

void FUN_10502ce3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0xcb);
  puVar1 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0cfc40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23e60(uVar3,param_2,uVar2,puVar1,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10502cef8; end: 10502cf7f; -[SCBestFriendPinningAction _isFriendPinned] */

undefined8 FUN_10502cef8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0ec5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c071ae0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 10502cf80; end: 10502cffb; -[SCBestFriendPinningAction _showErrorBannerAndEnableActionCell] */

void FUN_10502cf80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,&PTR____CFConstantStringClassReference_110dc3078,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x60),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10502cffc; end: 10502d043; -[SCBestFriendPinningAction plusSubscribeDidDismiss] */

void FUN_10502cffc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10502d044; end: 10502d04b; -[SCBestFriendPinningAction actionSheetCell] */

undefined8 FUN_10502d044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10502d04c; end: 10502d053; -[SCBestFriendPinningAction position] */

undefined8 FUN_10502d04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10502d054; end: 10502d05b; -[SCBestFriendPinningAction prominentActionButton] */

undefined8 FUN_10502d054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10502d05c; end: 10502d10f; -[SCBestFriendPinningAction .cxx_destruct] */

void FUN_10502d05c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 10502d110; end: 10502d467; -[SCBestFriendPinningActionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502d110(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
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
  
  lVar21 = (long)_DAT_112719dec;
  uVar1 = param_1 + lVar21;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112719df0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0720c0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar6 & 1) == 0) {
    lVar4 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x000100bf119c();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((int)lVar7 != 0) {
      uVar1 = param_1 + lVar21;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100bf0d4c();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        puVar8 = PTR_PTR_1126b3f38;
        _objc_alloc();
        lVar4 = param_1 + lVar21;
        _objc_loadWeakRetained();
        lVar9 = lVar4;
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1 + lVar21;
        _objc_loadWeakRetained();
        lVar10 = lVar5;
        func_0x00010bf4e080();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1 + _DAT_112719df4;
        _objc_loadWeakRetained();
        lVar11 = lVar7;
        func_0x00010bfa2420();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_1 + _DAT_112719df8;
        _objc_loadWeakRetained();
        lVar13 = lVar12;
        func_0x00010c0fbf40();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = param_1 + _DAT_112719dfc;
        _objc_loadWeakRetained();
        lVar15 = lVar14;
        func_0x00010c0dc640();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = param_1 + _DAT_112719e04;
        _objc_loadWeakRetained();
        lVar17 = param_1 + _DAT_112719e08;
        _objc_loadWeakRetained();
        lVar18 = lVar17;
        func_0x00010bfb9940();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = param_1 + _DAT_112719e0c;
        _objc_loadWeakRetained();
        lVar20 = lVar19;
        func_0x00010bfcdfa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c015320();
        _objc_release(lVar20);
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar7);
        _objc_release(lVar10);
        _objc_release(lVar5);
        _objc_release(lVar9);
        _objc_release(lVar4);
        param_1 = param_1 + lVar21;
        _objc_loadWeakRetained(param_1);
        lVar4 = param_1;
        func_0x00010c1018e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c125b60();
        _objc_release(lVar4);
        _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10502d468; end: 10502d4f7; -[SCBestFriendPinningActionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502d468(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719e00,0);
  _objc_destroyWeak(param_1 + _DAT_112719e04);
  _objc_destroyWeak(param_1 + _DAT_112719dfc);
  _objc_destroyWeak(param_1 + _DAT_112719df0);
  _objc_destroyWeak(param_1 + _DAT_112719df4);
  _objc_destroyWeak(param_1 + _DAT_112719df8);
  _objc_destroyWeak(param_1 + _DAT_112719e0c);
  _objc_destroyWeak(param_1 + _DAT_112719e08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112719dec);
  return;
}



/* Entry: 10502d4f8; end: 10502d587;  */

void FUN_10502d4f8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3098;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc3098,
                      &PTR____CFConstantStringClassReference_110dc30b8,0);
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



/* Entry: 10502d588; end: 10502d89f; -[SCBitmojiInAppTakeoverCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502d588(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long lVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10502d8a0;
  puStack_90 = &UNK_110862fe8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3f40;
  _objc_alloc();
  lVar4 = param_1 + _DAT_112719e10;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112719e14;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112719e1c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112719e20;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112719e24;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112719e28;
  lVar14 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe6a0(puVar3);
  _objc_release(lVar15);
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
  param_1 = param_1 + lVar16;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 10502d8a0; end: 10502d9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502d8a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112719e30;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bf1cf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10502d9b8; end: 10502da53; -[SCBitmojiInAppTakeoverCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502d9b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719e18,0);
  _objc_destroyWeak(param_1 + _DAT_112719e34);
  _objc_destroyWeak(param_1 + _DAT_112719e30);
  _objc_destroyWeak(param_1 + _DAT_112719e20);
  _objc_destroyWeak(param_1 + _DAT_112719e1c);
  _objc_destroyWeak(param_1 + _DAT_112719e10);
  _objc_destroyWeak(param_1 + _DAT_112719e14);
  _objc_destroyWeak(param_1 + _DAT_112719e28);
  _objc_destroyWeak(param_1 + _DAT_112719e24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112719e2c);
  return;
}



/* Entry: 10502da54; end: 10502db57;  */

void FUN_10502da54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126af7d0;
  _objc_retain();
  _objc_opt_new(puVar2);
  uVar3 = param_1;
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dc3178,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b3f48;
  _objc_alloc(PTR_PTR_1126b3f48);
  uVar4 = uVar3;
  func_0x00010c296d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  func_0x00010c008360(puVar2,param_2,uVar4,&lStack_48);
  lVar1 = lStack_48;
  _objc_release(uVar4);
  if (lVar1 == 0) {
    _objc_retain(puVar2);
    puVar5 = puVar2;
  }
  else {
    puVar5 = PTR_PTR_1126b3f48;
    _objc_alloc_init(PTR_PTR_1126b3f48);
    func_0x00010c21a0a0();
  }
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10502db58; end: 10502dcaf;  */

void FUN_10502db58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  
  _objc_retain();
  iVar4 = 0x110bea08;
  func_0x00010c067fc0();
  if (iVar4 == 0) {
    uVar1 = param_1;
    FUN_10502da54();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27b7e0();
    iVar4 = (int)uVar2;
    _objc_release(uVar1);
  }
  else {
    iVar4 = 0x110bea08;
    func_0x00010c067fc0();
  }
  if (iVar4 - 1U < 5) {
    ppuVar3 = (undefined **)(&PTR_PTR_110863b28)[iVar4 - 1U];
  }
  else {
    ppuVar3 = &PTR_PTR_1130c0850;
  }
  puVar5 = *ppuVar3;
  _objc_retain(puVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10502dcb0; end: 10502dcbb; -[SCFeatureSettingsService hasBitmojiTakeoverTimestampSeconds] */

void FUN_10502dcb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc3198);
  return;
}



/* Entry: 10502dcbc; end: 10502dcc7; -[SCFeatureSettingsService bitmojiTakeoverTimestampSecondsServerParam] */

undefined ** FUN_10502dcbc(void)

{
  return &PTR____CFConstantStringClassReference_110dc3198;
}



/* Entry: 10502dcc8; end: 10502dcd7; -[SCFeatureSettingsService setBitmojiTakeoverTimestampSeconds:] */

void FUN_10502dcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc3198,param_3);
  return;
}



/* Entry: 10502dcd8; end: 10502dcdf; -[SCFeatureSettingsService bitmoji_takeover_timestamp_seconds_client_value:] */

void FUN_10502dcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10502dce0; end: 10502dce7; -[SCFeatureSettingsService bitmoji_takeover_timestamp_seconds_server_value:] */

void FUN_10502dce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10502dce8; end: 10502dcf7; -[SCFeatureSettingsService bitmojiTakeoverTimestampSeconds] */

void FUN_10502dce8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc3198,0);
  return;
}



/* Entry: 10502dcf8; end: 10502dd03; -[SCFeatureSettingsService hasBitmojiTakeoverImpressionCount] */

void FUN_10502dcf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc31b8);
  return;
}



/* Entry: 10502dd04; end: 10502dd0f; -[SCFeatureSettingsService bitmojiTakeoverImpressionCountServerParam] */

undefined ** FUN_10502dd04(void)

{
  return &PTR____CFConstantStringClassReference_110dc31b8;
}



/* Entry: 10502dd10; end: 10502dd1f; -[SCFeatureSettingsService setBitmojiTakeoverImpressionCount:] */

void FUN_10502dd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc31b8,param_3);
  return;
}



/* Entry: 10502dd20; end: 10502dd27; -[SCFeatureSettingsService bitmoji_takeover_impression_count_client_value:] */

void FUN_10502dd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10502dd28; end: 10502dd2f; -[SCFeatureSettingsService bitmoji_takeover_impression_count_server_value:] */

void FUN_10502dd28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10502dd30; end: 10502dd3f; -[SCFeatureSettingsService bitmojiTakeoverImpressionCount] */

void FUN_10502dd30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc31b8,0);
  return;
}



/* Entry: 10502dd40; end: 10502df0f; -[SCBitmojiInAppTakeoverProvider initWithCircumstanceEngine:featureSettings:bitmojiAvatarBuilderScopeExposer:avatarProvider:valdiRuntimeProvider:blizzardLogger:cofStore:fstCampaignDataProvider:additionalMetricsData:] */

undefined1 *
FUN_10502dd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126e5b28;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
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



/* Entry: 10502df10; end: 10502df57; -[SCBitmojiInAppTakeoverProvider canShowCampaign:] */

undefined8 FUN_10502df10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10502df58; end: 10502e0cb; -[SCBitmojiInAppTakeoverProvider showCampaign:uiContainer:onComplete:] */

void FUN_10502df58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10502e0cc;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1c4a0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1716c0(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1716a0();
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10502e0cc; end: 10502e117;  */

void FUN_10502e0cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb8030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showBitmojiTakeoverView_11258b9b0);
  return;
}



/* Entry: 10502e118; end: 10502e16b; -[SCBitmojiInAppTakeoverProvider _showBitmojiTakeoverView] */

void FUN_10502e118(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3f50;
  _objc_alloc();
  func_0x00010bffe6c0();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 10502e16c; end: 10502e1b7; -[SCBitmojiInAppTakeoverProvider _showBitmojiAvatarBuilderFlow] */

void FUN_10502e16c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10502e1b8; end: 10502e1f7; -[SCBitmojiInAppTakeoverProvider bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_10502e1b8(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010502e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x58) + 0x10))();
  return;
}



/* Entry: 10502e1f8; end: 10502e2ab; -[SCBitmojiInAppTakeoverProvider acceptClicked] */

void FUN_10502e1f8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10502e280;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10502e2ac; end: 10502e357; -[SCBitmojiInAppTakeoverProvider _dismissTakeoverVCAndStartAvatarBuilder] */

void FUN_10502e2ac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10502e358; end: 10502e383;  */

void FUN_10502e358(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502e384; end: 10502e437; -[SCBitmojiInAppTakeoverProvider cancelClicked] */

void FUN_10502e384(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10502e40c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10502e438; end: 10502e467; -[SCBitmojiInAppTakeoverProvider _dismissBitmojiTakeoverViewAndEndFlow] */

void FUN_10502e438(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x18),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010502e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x58) + 0x10))();
  return;
}



/* Entry: 10502e468; end: 10502e50f; -[SCBitmojiInAppTakeoverProvider .cxx_destruct] */

void FUN_10502e468(long param_1)

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



/* Entry: 10502e510; end: 10502e683; -[SCBitmojiInAppTakeoverViewController initWithCircumstanceEngine:featureSettings:valdiRuntimeProvider:delegate:blizzardLogger:cofStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10502e510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e5b30;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112719e68;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112719e6c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112719e70;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112719e74),param_6);
    lVar3 = (long)_DAT_112719e78;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112719e7c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
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



/* Entry: 10502e684; end: 10502e727; -[SCBitmojiInAppTakeoverViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502e684(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beb05a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112719e80);
  *(long *)(param_1 + _DAT_112719e80) = lVar2;
  _objc_release(uVar3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502e728; end: 10502e797; -[SCBitmojiInAppTakeoverViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502e728(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5b30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112719e80));
  _objc_release(lVar1);
  return;
}



/* Entry: 10502e798; end: 10502ea0f; -[SCBitmojiInAppTakeoverViewController _setupTakeoverValdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502e798(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126b3f58;
  _objc_alloc(PTR_PTR_1126b3f58);
  lVar8 = (long)_DAT_112719e68;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  FUN_10502db58(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010502dc04(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8fe0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_78,param_1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10502ea10;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar4 = &puStack_a0;
  _objc_retainBlock(ppuVar4);
  puStack_c8 = puVar6;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10502ea5c;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,auStack_78);
  ppuVar5 = &puStack_c8;
  _objc_retainBlock(ppuVar5);
  puVar6 = PTR_PTR_1126b3f60;
  _objc_alloc(PTR_PTR_1126b3f60);
  func_0x00010bfefcc0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112719e78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a20(puVar6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112719e7c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar6);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b3f68;
  _objc_alloc(PTR_PTR_1126b3f68);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112719e70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10502ea10; end: 10502eaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502ea10(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112719e74;
    _objc_loadWeakRetained(lVar1);
    func_0x00010beec9c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502eaa8; end: 10502eb33; -[SCBitmojiInAppTakeoverViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10502eaa8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719e80,0);
  _objc_storeStrong(param_1 + _DAT_112719e7c,0);
  _objc_storeStrong(param_1 + _DAT_112719e78,0);
  _objc_destroyWeak(param_1 + _DAT_112719e74);
  _objc_storeStrong(param_1 + _DAT_112719e70,0);
  _objc_storeStrong(param_1 + _DAT_112719e6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719e68,0);
  return;
}



/* Entry: 10502eb34; end: 10502eb3f; +[SCCBitmojiTakeoverView componentPath] */

undefined ** FUN_10502eb34(void)

{
  return &PTR____CFConstantStringClassReference_110dc31f8;
}



/* Entry: 10502eb40; end: 10502eb73; -[SCCBitmojiTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_10502eb40(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5b38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10502eb74; end: 10502ebc3; -[SCCBitmojiTakeoverView setViewModel:] */

void FUN_10502eb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502ebc4; end: 10502ec07; -[SCCBitmojiTakeoverView viewModel] */

void FUN_10502ebc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10502ec08; end: 10502ec5f; -[SCCBitmojiTakeoverBody__Enum init] */

undefined8 ***
FUN_10502ec08(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  
  func_0x00010502edec();
  func_0x00010502edd4(PTR_PTR_1130c0848);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010502edc4();
  pppuVar1 = param_1;
  func_0x00010502ee28();
  func_0x00010502ee04();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010502edec();
    func_0x00010502edd4(PTR_PTR_1130c0858);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010502edc4();
    pppuVar2 = pppuVar1;
    func_0x00010502ee28();
    func_0x00010502ee04();
    param_1 = pppuVar1;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      _objc_retain(param_4);
      _objc_retainBlock();
      uVar3 = param_4;
      _objc_retainBlock();
      _objc_release(param_4);
      puStack_b8 = PTR_PTR_1126e5b40;
      pppuVar1 = &ppuStack_c0;
      ppuStack_c0 = pppuVar2;
      _objc_msgSendSuper2(pppuVar1,PTR_s_initWithFieldValues__1125e24b8,0);
      _objc_release(uVar3);
      func_0x00010502ee28();
      return pppuVar1;
    }
  }
  return param_1;
}



/* Entry: 10502ec60; end: 10502ecb7; -[SCCBitmojiTakeoverCtaButton__Enum init] */

undefined8 ***
FUN_10502ec60(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  
  func_0x00010502edec();
  func_0x00010502edd4(PTR_PTR_1130c0858);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010502edc4();
  pppuVar1 = param_1;
  func_0x00010502ee28();
  func_0x00010502ee04();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_78 = PTR_PTR_1126e5b40;
  pppuVar3 = &ppuStack_80;
  ppuStack_80 = pppuVar1;
  _objc_msgSendSuper2(pppuVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  func_0x00010502ee28();
  return pppuVar3;
}



/* Entry: 10502ecb8; end: 10502ed4f; -[SCCBitmojiTakeoverContext initWithAcceptClicked:cancelClicked:] */

undefined8 *
FUN_10502ecb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126e5b40;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  func_0x00010502ee28();
  return puVar2;
}



/* Entry: 10502ed50; end: 10502ed63; +[SCCBitmojiTakeoverContext valdiMarshallableObjectDescriptor] */

void FUN_10502ed50(undefined8 *param_1)

{
  *param_1 = &PTR_s_acceptClicked_110863b78;
  param_1[1] = &PTR_s_SCCBlizzardLogging_110863bf0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10502ed64; end: 10502ed9f; -[SCCBitmojiTakeoverViewModel initWithBody:ctaButton:] */

void FUN_10502ed64(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5b48;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10502eda0; end: 10502ee2f; +[SCCBitmojiTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_10502eda0(undefined8 *param_1)

{
  *param_1 = &PTR_s_body_110863c08;
  param_1[1] = &PTR_s_SCCBitmojiTakeoverBody_110863c50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10502ee30; end: 10502eeab;  */

undefined * FUN_10502ee30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b92d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dc3278,
                        &UNK_10dd8df68,&UNK_10dd8dfe4,6,FUN_10502eeac,0);
    do {
      if (puRam00000001136b92d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b92d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b92d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b92d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b92d8;
}



/* Entry: 10502eeac; end: 10502eeb7;  */

bool FUN_10502eeac(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10502eeb8; end: 10502ef1f; +[SCPrivateProfilePbBitmojiTakeoverConfig descriptor] */

void FUN_10502eeb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b92e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a12510,
                        &PTR____CFConstantStringClassReference_110dc3298,
                        &PTR_s_snapchat_private_profile_cof_1130c0868,&PTR_s_enabled_1130c0880,5,
                        0x14,0x1c);
    puRam00000001136b92e0 = puVar1;
  }
  return;
}



/* Entry: 10502ef20; end: 10502f19f; -[SCEditDisplayNameAlertDialog initWithUserSession:snapchatter:userInfoServices:snapchatterServices:uiContainer:] */

undefined1 *
FUN_10502ef20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e5b50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined ***)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    ppuVar3 = param_4;
    func_0x00010901d778();
    if ((int)ppuVar3 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_4;
      func_0x00010bf85d80(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be3af20(puVar1);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc32b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32b8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined ***)((long)puVar1 + 0x58) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc32d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32d8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined ***)((long)puVar1 + 0x60) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db2cf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined ***)((long)puVar1 + 0x68) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined ***)((long)puVar1 + 0x70) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc32f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32f8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined ***)((long)puVar1 + 0x78) = ppuVar4;
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc3318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3318,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined ***)((long)puVar1 + 0x80) = ppuVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = 0;
    _objc_release(uVar2);
    _objc_release(ppuVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10502f1a0; end: 10502f1cb; -[SCEditDisplayNameAlertDialog showAlert] */

void FUN_10502f1a0(long param_1)

{
  func_0x00010bdd5bc0();
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 10502f1cc; end: 10502f23f; -[SCEditDisplayNameAlertDialog textFieldShouldReturn:] */

undefined8 FUN_10502f1cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + 0x38)) {
    func_0x00010bf179a0();
  }
  else {
    if (param_3 != *(long *)(param_1 + 0x40)) {
      uVar1 = 1;
      goto LAB_10502f228;
    }
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x30),param_2,1,0);
    func_0x00010be2f7a0(param_1);
  }
  uVar1 = 0;
LAB_10502f228:
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10502f240; end: 10502fddb; -[SCEditDisplayNameAlertDialog _buildAlertDialog] */

void FUN_10502f240(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined *puVar45;
  undefined8 uVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined1 *puVar49;
  undefined8 uVar50;
  undefined8 *puVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar52 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar53 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar54 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar55 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
  func_0x00010c219b60();
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
  func_0x00010c212f20();
  func_0x00010c213040(puVar2);
  func_0x00010c165e00(puVar2);
  func_0x00010c21ad00(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar2);
  func_0x00010c219b60(puVar2);
  func_0x00010c23d620(puVar2);
  func_0x00010befbb60(puVar1);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
  func_0x00010c219b60();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar1);
  puVar5 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
  func_0x00010c212f20();
  func_0x00010c213040(puVar5);
  func_0x00010c21ad00(puVar5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar5);
  _objc_release(puVar3);
  func_0x00010c219b60(puVar5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar5);
  _objc_release(puVar3);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar5);
  func_0x00010c193a00(puVar5);
  func_0x00010c1f7b20(puVar5);
  func_0x00010befbb60(puVar1);
  puVar3 = PTR_PTR_1126b3f70;
  _objc_alloc();
  func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
  uVar50 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar3;
  _objc_release(uVar50);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010befbb60(puVar1);
  puVar3 = PTR_PTR_1126b3f70;
  _objc_alloc();
  func_0x00010c013de0(uVar52,uVar53,uVar54,uVar55);
  uVar50 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar3;
  _objc_release(uVar50);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c16d0a0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010befbb60(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  puStack_110 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  puStack_108 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  puStack_100 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  puStack_f8 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  puStack_f0 = puVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar5;
  puStack_e8 = puVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar5;
  puStack_e0 = puVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar5;
  puStack_d8 = puVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + 0x38);
  puStack_d0 = puVar31;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = uVar32;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + 0x38);
  uStack_c8 = uVar55;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar34;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + 0x38);
  uStack_c0 = uVar36;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar37;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_1 + 0x40);
  uStack_b8 = uVar39;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar40;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = uVar50;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar42;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + 0x40);
  uStack_a8 = uVar52;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar44;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar46 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar53;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = uVar46;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar54;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar48);
  _objc_release(uVar54);
  _objc_release(puVar47);
  _objc_release(uVar46);
  _objc_release(uVar53);
  _objc_release(puVar45);
  _objc_release(uVar44);
  _objc_release(uVar52);
  _objc_release(puVar43);
  _objc_release(uVar42);
  _objc_release(uVar50);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(puVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(uVar55);
  _objc_release(puVar33);
  _objc_release(uVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_initWeak(auStack_128,param_1);
  puVar3 = PTR_PTR_1126aed70;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10502fddc;
  puStack_138 = &UNK_1108482a8;
  _objc_copyWeak(auStack_130,auStack_128);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aed70;
  puVar49 = auStack_128;
  _objc_copyWeak(auStack_158,puVar49);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar3;
  puStack_118 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefec0();
  puVar51 = (undefined8 *)(param_1 + 0x30);
  uVar50 = *puVar51;
  *puVar51 = puVar7;
  _objc_release(uVar50);
  _objc_release(puVar8);
  func_0x00010c1611e0(*puVar51);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar49);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be2f7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10502fddc; end: 10502fe5b;  */

void FUN_10502fddc(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10502fe5c; end: 10502ff17; -[SCEditDisplayNameAlertDialog _initalDisplayName:] */

void FUN_10502fe5c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  if (ppuVar1 == (undefined **)0x7fffffffffffffff) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined ***)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = param_3;
    func_0x00010c260c20(param_3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined ***)(param_1 + 0x48) = ppuVar3;
    _objc_release(uVar2);
    ppuVar3 = param_3;
    func_0x00010c260c00(param_3,param_2,(long)ppuVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined ***)(param_1 + 0x50) = ppuVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10502ff18; end: 10502ffeb; -[SCEditDisplayNameAlertDialog _displayNameFromFirstName:lastName:] */

void FUN_10502ff18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  puVar1 = puVar3;
  func_0x00010c114ac0(puVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c114ac0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db27b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c114ac0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10502ffec; end: 10503017f; -[SCEditDisplayNameAlertDialog _handleSaveButtonAction] */

void FUN_10502ffec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c26b700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be04980(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_105030154;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c244ae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae5c0;
    func_0x00010c1900e0(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2960(uVar1);
    _objc_release(puVar5);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf85f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285360();
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_105030154:
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105030180; end: 105030193; -[SCEditDisplayNameAlertDialog _handleCancelButtonAction] */

void FUN_105030180(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010503018c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x98) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105030194; end: 105030197; -[SCEditDisplayNameAlertDialog dialogDidDismiss:] */

void FUN_105030194(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be26df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCancelButtonAction_112567518);
  return;
}



/* Entry: 105030198; end: 10503019f; -[SCEditDisplayNameAlertDialog initialFirstName] */

undefined8 FUN_105030198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1050301a0; end: 1050301cf; -[SCEditDisplayNameAlertDialog setInitialFirstName:] */

void FUN_1050301a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050301d0; end: 1050301d7; -[SCEditDisplayNameAlertDialog initialLastName] */

undefined8 FUN_1050301d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1050301d8; end: 105030207; -[SCEditDisplayNameAlertDialog setInitialLastName:] */

void FUN_1050301d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105030208; end: 10503020f; -[SCEditDisplayNameAlertDialog firstNamePlaceHolder] */

undefined8 FUN_105030208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105030210; end: 10503023f; -[SCEditDisplayNameAlertDialog setFirstNamePlaceHolder:] */

void FUN_105030210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105030240; end: 105030247; -[SCEditDisplayNameAlertDialog lastNamePlaceHolder] */

undefined8 FUN_105030240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105030248; end: 105030277; -[SCEditDisplayNameAlertDialog setLastNamePlaceHolder:] */

void FUN_105030248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105030278; end: 10503027f; -[SCEditDisplayNameAlertDialog saveButtonText] */

undefined8 FUN_105030278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105030280; end: 1050302af; -[SCEditDisplayNameAlertDialog setSaveButtonText:] */

void FUN_105030280(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1050302b0; end: 1050302b7; -[SCEditDisplayNameAlertDialog cancelButtonText] */

undefined8 FUN_1050302b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1050302b8; end: 1050302e7; -[SCEditDisplayNameAlertDialog setCancelButtonText:] */

void FUN_1050302b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1050302e8; end: 1050302ef; -[SCEditDisplayNameAlertDialog alertTitle] */

undefined8 FUN_1050302e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


