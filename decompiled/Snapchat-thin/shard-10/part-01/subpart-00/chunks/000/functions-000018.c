/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795a6d8; end: 10795aa3b; -[SCSnapDocManagerImpl _validateSnapDocPlaybackMediaForKey:snapDoc:error:] */

void FUN_10795a6d8(long param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
                  long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_130;
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
  ppuVar7 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar8 == (undefined *)0x0) {
    if (param_5 == (long *)0x0) goto LAB_10795a9e0;
    ppuVar7 = &PTR____CFConstantStringClassReference_110ea6818;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar3 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    ppuVar7 = &puStack_130;
    puVar3 = auStack_f0;
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,ppuVar7,puVar3,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar10 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(puVar1);
          }
          lVar9 = *(long *)(lStack_128 + (long)puVar8 * 8);
          lVar4 = lVar9;
          func_0x00010c08c3a0();
          if ((int)lVar4 == 1) {
            lVar4 = lVar9;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar4);
            if (lVar5 == 0) {
              if (param_5 != (long *)0x0) {
                ppuVar7 = &PTR____CFConstantStringClassReference_110ea6838;
                func_0x00010be3d700(param_1,param_2,&PTR____CFConstantStringClassReference_110ea6838
                                   );
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                *param_5 = param_1;
              }
              goto LAB_10795a9d8;
            }
            func_0x00010c0c3fe0(lVar9);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar9;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = param_3;
            puVar3 = param_4;
            func_0x00010bee77e0(param_1,param_2,param_3,param_4,lVar4,param_5);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar4);
            _objc_release(lVar9);
            if ((param_5 != (long *)0x0) && (*param_5 != 0)) goto LAB_10795a9d8;
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        ppuVar7 = &puStack_130;
        puVar3 = auStack_f0;
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,ppuVar7,puVar3,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfdcf00();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) goto LAB_10795a9e0;
    puVar1 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c261180();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bfd8fc0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (((ulong)puVar8 & 1) != 0) {
      puVar1 = param_4;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c261180();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_3;
      puVar3 = param_4;
      func_0x00010bee77e0(param_1,param_2,param_3,param_4,puVar8,param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar2);
LAB_10795a9d8:
      _objc_release(puVar1);
      goto LAB_10795a9e0;
    }
    if (param_5 == (long *)0x0) goto LAB_10795a9e0;
    ppuVar7 = &PTR____CFConstantStringClassReference_110ea6858;
  }
  func_0x00010be3d700(param_1,param_2,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_5 = param_1;
LAB_10795a9e0:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(ppuVar7);
  puVar1 = puVar3;
  func_0x00010c09d820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bcf20;
    _objc_alloc_init(PTR_PTR_1126bcf20);
    puVar2 = puVar3;
    func_0x00010c0c55e0(puVar3);
    _objc_release(puVar3);
    func_0x00010c1c4aa0(puVar1,param_2,puVar2);
    puVar2 = PTR_PTR_1126bc860;
    func_0x00010bf4c8c0(PTR_PTR_1126bc860,param_2,ppuVar7,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
  else {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    puVar1 = puVar3;
    func_0x00010c09d820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bfc90;
    ppuVar6 = ppuVar7;
    func_0x00010c0c46a0(ppuVar7);
    _objc_release(ppuVar7);
    func_0x00010c119380(puVar3,param_2,ppuVar6);
    func_0x00010c0295e0(puVar2,param_2,puVar1,puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10795b28c; end: 10795b3fb; -[SCSnapDocManagerImpl _authClaimInMemoryDataWithKey:mediaReference:] */

bool FUN_10795b28c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bde7e60(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = lVar2;
  func_0x00010b0ee738(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar5 = param_4;
    func_0x00010c09d7e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    bVar1 = lVar4 != 0;
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = lVar2;
      func_0x00010b0ee738(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,lVar4,lVar3);
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10795b7bc; end: 10795b857; -[SCSnapDocManagerImpl .cxx_destruct] */

void FUN_10795b7bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10795ba4c; end: 10795ba53; -[SCSnapDocPlaybackMediaResultImpl getStatus] */

undefined8 FUN_10795ba4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10795bfec; end: 10795c0e7; -[SCSnapDocThumbnailResolverImpl _localImageContentKeyFromKey:thumbnailSize:] */

void FUN_10795bfec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ea68b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  puVar4 = PTR_PTR_1126bfc90;
  uVar1 = param_3;
  func_0x00010c0c46a0(param_3);
  _objc_release(param_3);
  func_0x00010c119380(puVar4,param_2,uVar1);
  func_0x00010c0295e0(puVar3,param_2,puVar2,puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10795cab4; end: 10795cc5b; -[SCSnapDocThumbnailResolverImpl _generateThumbnailAndCacheFromBaseMediaResult:overlayImageResult:snapDoc:snapDocKey:thumbnailRequestConfig:completion:] */

void FUN_10795cab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_3);
  func_0x00010c09da20(param_9);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010be1c220(param_1,param_2,param_3);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10795d550; end: 10795d58b; -[SCSnapDocThumbnailResolverImpl .cxx_destruct] */

void FUN_10795d550(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10795da60; end: 10795dd1f;  */

void FUN_10795da60(undefined8 param_1,uint param_2,uint param_3,int param_4,undefined8 param_5,
                  undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  if (((param_2 & 1) == 0) && (param_3 == 0)) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = param_6;
    _objc_retain();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    if ((param_2 & 1) != 0) {
      puVar4 = PTR_PTR_1126c46c8;
      _objc_opt_new(PTR_PTR_1126c46c8);
      func_0x00010c20a620();
      func_0x00010c1d5de0(puVar4);
      func_0x00010c206c40(puVar4);
      func_0x00010c1f59c0(puVar4);
      func_0x00010c0b2e60(param_5);
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126c46d0;
    _objc_opt_new(PTR_PTR_1126c46d0);
    puVar5 = PTR_PTR_1126c4748;
    _objc_opt_new(PTR_PTR_1126c4748);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e29e98;
    if ((param_2 & param_3) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
    }
    if (param_2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e29e78;
    }
    _objc_retain(ppuVar1);
    func_0x00010c1f5ac0(puVar4);
    puVar6 = puVar5;
    func_0x00010c1f5ac0(puVar5);
    func_0x00010795d8b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar6);
    ppuVar2 = &PTR____CFConstantStringClassReference_110ea68d8;
    if (param_4 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e9c0b8;
    }
    _objc_retain(ppuVar2);
    func_0x00010c1f5a00(puVar4);
    func_0x00010c1f5a00(puVar5);
    func_0x00010c0b2e60(param_5);
    func_0x00010bfb03c0(PTR_PTR_1126b24e0);
    _objc_release(param_6);
    func_0x00010c2053c0(puVar5);
    puVar6 = PTR_PTR_1126d57c0;
    _objc_alloc(PTR_PTR_1126d57c0);
    _CACurrentMediaTime();
    func_0x00010c0415c0(puVar6);
    puVar7 = puVar6;
    func_0x00010795d830();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10795e2b4; end: 10795e2bb; -[SCMemoriesStorySavingLoggingStatus savingStartTime] */

undefined8 FUN_10795e2b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10795e568; end: 10795e59b;  */

void FUN_10795e568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,param_3,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10795ec4c; end: 10795ec63; -[SCS2RBaseAdapter emailInfoProvider] */

void FUN_10795ec4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10795f080; end: 10795f0e3; -[SCShakeSeparatorView _updateConstraintsForLine:leftAligned:] */

void FUN_10795f080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  puStack_30 = &UNK_10795f0e4;
  puStack_28 = &UNK_11086b060;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0bbfe0(param_3,param_2,&puStack_40);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10795f504; end: 10795f50f; -[SCSnapchatAirPerformer workQueue] */

void FUN_10795f504(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam0000000113726ff0,PTR_s_queue_1126251a0);
  return;
}



/* Entry: 10795f700; end: 10795f70b; -[SCSnapchatNotificationHandler .cxx_destruct] */

void FUN_10795f700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10795fbac; end: 10795fd5b;  */

void FUN_10795fbac(long param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_willDumpLogGivenProject__1126872d0);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = param_2, func_0x00010c2a62a0(), puVar2 = PTR_s_shouldWaitForLog_11266b018,
     (int)uVar3 == 0)) goto LAB_10795fd3c;
  uVar3 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_shouldWaitForLog_11266b018);
  if (((uVar3 & 1) == 0) ||
     ((uVar3 = param_2, _objc_opt_respondsToSelector(param_2,puVar2), (uVar3 & 1) != 0 &&
      (uVar3 = param_2, func_0x00010c2357c0(), (uVar3 & 1) != 0)))) {
    uVar3 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_getLogPathAsync__1125cf670);
    if ((uVar3 & 1) != 0) {
      _dispatch_group_enter(*(undefined8 *)(param_1 + 0x28));
      bVar1 = true;
      goto LAB_10795fc74;
    }
    uVar3 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_provideLogContentAsync__112624060);
    if ((uVar3 & 1) == 0) goto LAB_10795fd3c;
LAB_10795fcdc:
    _dispatch_group_enter(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar3 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_getLogPathAsync__1125cf670);
    if ((uVar3 & 1) == 0) {
      uVar3 = param_2;
      _objc_opt_respondsToSelector(param_2,PTR_s_provideLogContentAsync__112624060);
      if ((uVar3 & 1) == 0) goto LAB_10795fd3c;
    }
    else {
      bVar1 = false;
LAB_10795fc74:
      func_0x00010bfc7320(param_2);
      uVar3 = param_2;
      _objc_opt_respondsToSelector(param_2,PTR_s_provideLogContentAsync__112624060);
      if ((uVar3 & 1) == 0) goto LAB_10795fd3c;
      if (bVar1) goto LAB_10795fcdc;
    }
  }
  func_0x00010c119900(param_2);
LAB_10795fd3c:
  _objc_release(param_2);
  return;
}



/* Entry: 10796041c; end: 1079604f3; +[SCShakeLogFileManager saveExtraFile:file:inPath:] */

undefined8
FUN_10796041c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    uVar1 = param_1;
    func_0x00010bfc2e00(param_1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0899c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9a80(param_1,param_2,param_4,uVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(uVar1);
    if ((param_1 & 1) != 0) {
      uVar3 = 1;
      goto LAB_1079604c4;
    }
  }
  uVar3 = 0;
LAB_1079604c4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107960e60; end: 107960fa7; +[SCShakeLogFileManager getBaseURL:inPath:] */

void FUN_107960e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0();
  func_0x00010bf06ba0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6dad8);
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bdc2c60(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    uStack_48 = 0;
    func_0x00010bf55da0(puVar1,param_2,puVar4,1,0,&uStack_48);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107961390; end: 1079613cb; -[SCShakeSyncManager _isIdleState] */

bool FUN_107961390(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c0b5d00();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010c0b5d00(param_1);
    bVar1 = param_1 == 3;
  }
  return bVar1;
}



/* Entry: 1079618ac; end: 107961b03;  */

void FUN_1079618ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0b5e20();
  if ((uVar1 & 1) == 0) {
    iVar5 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c0b5de0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec780();
    _objc_release(uVar2);
    if (iVar5 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x00010bf99fe0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      func_0x00010c0b5de0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0af5a0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar4 = *(long *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(lVar4 + 0x18);
      func_0x00010c0b5de0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde34e0(lVar4);
      _objc_release(uVar2);
    }
    func_0x00010c1c1200(*(undefined8 *)(param_1 + 0x20));
    func_0x00010becf280(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107961c74; end: 107961c7f; -[SCShakeSyncManager mLastBackoffTicketId] */

void FUN_107961c74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1079622ac; end: 1079622b3; -[SCShakeTicket mId] */

undefined8 FUN_1079622ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079622ec; end: 1079622f3; -[SCShakeTicket mShouldCreateJiraTicket] */

undefined1 FUN_1079622ec(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10796232c; end: 107962333; -[SCShakeTicket mViewControllerFeature] */

undefined8 FUN_10796232c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10796236c; end: 10796239b; -[SCShakeTicket setMOtherInfo:] */

void FUN_10796236c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079623d4; end: 1079623db; -[SCShakeTicket safeModeEnabled] */

undefined1 FUN_1079623d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107962620; end: 107962627; -[SCShakeTicketBuilder mReportType] */

undefined8 FUN_107962620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107962660; end: 107962667; -[SCShakeTicketBuilder selfAssign] */

undefined1 FUN_107962660(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1079626a0; end: 1079626a7; -[SCShakeTicketBuilder mWithScreenshot] */

undefined1 FUN_1079626a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107962708; end: 10796270f; -[SCShakeTicketBuilder mCreateTimeStamp] */

undefined8 FUN_107962708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107962770; end: 107962777; -[SCShakeTicketBuilder mJiraMetaInfo] */

undefined8 FUN_107962770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1079627b0; end: 1079627b7; -[SCShakeTicketBuilder mCameraRollAttachmentsFileNames] */

undefined8 FUN_1079627b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107962840; end: 107962847; -[SCShakeTicketBuilder carrierInfo] */

undefined8 FUN_107962840(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107962880; end: 107962887; -[SCShakeTicketBuilder lastCaptureSessionID] */

undefined8 FUN_107962880(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1079628c0; end: 1079628c7; -[SCShakeTicketBuilder uploadUrl] */

undefined8 FUN_1079628c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107962cd0; end: 107962d7f; -[SCShakeTicketAdapter _submitShakeQueue] */

void FUN_107962cd0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727038 != -1) {
    func_0x00010002a2fc(0x113727038,&PTR___NSConcreteGlobalBlock_1109f1c30);
  }
  uVar1 = uRam0000000113727030;
  _objc_retain(uRam0000000113727030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079643b4; end: 10796448b;  */

void FUN_1079643b4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_provideMetaInfoFiles__112624078);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    func_0x00010c119960(param_2);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1079658f8; end: 10796598f; -[SCShakeTicketManager initWithQueue:] */

undefined1 * FUN_1079658f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8f68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d57f0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107965e90; end: 107965ec7;  */

void FUN_107965e90(long param_1,undefined8 param_2)

{
  func_0x00010bee5d20(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 10796702c; end: 1079675b3; -[SCShakeTicketManager _unauthorizedRequestPayload:] */

void FUN_10796702c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  uVar9 = param_3;
  func_0x00010c0cc860();
  if ((uVar9 & 1) == 0) {
    uVar9 = param_3;
    func_0x00010c0b5f80(param_3);
  }
  else {
    uVar9 = 0;
  }
  puVar1 = PTR_PTR_1126d5848;
  _objc_alloc_init(PTR_PTR_1126d5848);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185180(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = param_3;
  func_0x00010c0b6000(param_3);
  func_0x00010c0df6e0(puVar2,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ce60(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1a1160(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c0b5e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6660(puVar1,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5840;
  _objc_alloc_init(PTR_PTR_1126d5840);
  uVar9 = param_3;
  func_0x00010c0b5de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99a0(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5f40(param_3);
  func_0x00010b767e90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb5c0(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be46660(param_1,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c120(puVar4,param_2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a840(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ec80(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = param_3;
  func_0x00010c15ac60(param_3);
  func_0x00010c0df6e0(puVar2,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbba0(puVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar9 = param_3;
  func_0x00010c0b5e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eec0(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5ea0(param_3);
  func_0x00010b767794();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180f60(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5f60(param_3);
  func_0x00010b767fb8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe940(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6ae0(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce020(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c0b5f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb540(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010c1eb4e0(puVar4,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf32d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5ca0(puVar4,param_2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar6 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = puVar6;
  func_0x00010c271c60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar7,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = param_3;
  func_0x00010c149240(param_3);
  func_0x00010c0df6e0(puVar2,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cbba0;
  func_0x00010c149260(PTR_PTR_1126cbba0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar7,param_2,puVar2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010be46640(param_1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72040(puVar2,param_2,param_1,&PTR____CFConstantStringClassReference_110e69858);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar9 = param_3;
  func_0x00010c2776c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar9 != 0) {
    uVar9 = param_3;
    func_0x00010c2776c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar9,&PTR____CFConstantStringClassReference_110e698f8);
    _objc_release(uVar9);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079679dc; end: 1079679eb; -[SCShakeTicketTable deleteAllPendingTickets] */

void FUN_1079679dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_executeUpdate__1125c45c0,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107969154; end: 1079691bf; -[SCShakeTicketTable .cxx_destruct] */

void FUN_107969154(long param_1)

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



/* Entry: 107969748; end: 107969757;  */

void FUN_107969748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107969754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x38) + 0x10))();
  return;
}



/* Entry: 107969d18; end: 107969db3; -[SCShakeTicketUploader _reportShakeTicketSend] */

void FUN_107969d18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b5de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc45e0(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf99fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b5de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af5c0(uVar1,param_2,uVar2,uVar3,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10796a028; end: 10796a0e7; -[SCShakeUploadThrottleController computBackoffMillisecondsForId:] */

long FUN_10796a028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
    lVar4 = param_1;
    func_0x00010bde42c0(param_1,param_2,lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c0dff20(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  if (lVar3 != 0) {
    func_0x00010c067fc0();
  }
  if (lVar4 <= lVar2) {
    lVar4 = lVar2;
  }
  if (29999 < lVar4) {
    lVar4 = 30000;
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10796a428; end: 10796a42f; -[SCSnapAirConfiguration networkRequestSender] */

undefined8 FUN_10796a428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10796a4cc; end: 10796a4ef; -[SCAppNotification copyWithZone:] */

undefined8 FUN_10796a4cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10796a710; end: 10796a78f; -[SCNativeNotificationProcessedEvent hash] */

undefined8 * FUN_10796a710(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
code_r0x00010796a830:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto code_r0x00010796a83c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto code_r0x00010796a83c;
        }
        goto code_r0x00010796a830;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
code_r0x00010796a83c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10796a8b0; end: 10796a8bb; -[SCRemixOperaServices .cxx_destruct] */

void FUN_10796a8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10796abdc; end: 10796abe3; -[SCRemixOperaMetadata remixPermission] */

undefined8 FUN_10796abdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10796ae1c; end: 10796aeff; +[MFCRankingSignals descriptor] */

void FUN_10796ae1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65bb0,
                        &PTR____CFConstantStringClassReference_110e30fd8,&PTR_DAT_11323b050,
                        &PTR_DAT_11323b0c8,7,4,0x1c);
    puRam0000000113727078 = puVar1;
  }
  return;
}



/* Entry: 10796b158; end: 10796b217; -[SCDeepLinkingUrlInterceptor initWithInitialConfig:circumstanceEngine:] */

undefined8
FUN_10796b158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01db80(param_1,param_2,param_3,param_4,puVar1,puVar2,
                      &PTR___NSConcreteGlobalBlock_1109f1f50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10796ba04; end: 10796ba1b;  */

void FUN_10796ba04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010796ba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10796c148; end: 10796c15b;  */

void FUN_10796c148(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10796c4a4; end: 10796c807; -[SCDeepLinkingUrlInterceptor showAlert:isWebViewLoadedSuccessfully:completion:] */

void FUN_10796c4a4(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_98,param_1);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8ff8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_10796c808;
  puStack_b8 = &UNK_1109f1fa0;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(param_3);
  lStack_b0 = param_3;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar5;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_10796c83c;
  puStack_f0 = &UNK_1109f1fd0;
  _objc_copyWeak(auStack_e0,auStack_98);
  _objc_retain(param_3);
  lStack_e8 = param_3;
  uStack_d8 = param_4;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9018;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9018,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc9038;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9038,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  puStack_88 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_110,auStack_98);
  func_0x00010c235c40(param_1);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_110);
  _objc_release(puVar3);
  _objc_release(lStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar2);
  _objc_release(uStack_a8);
  _objc_release(lStack_b0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010bde8840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796cc44; end: 10796ced7; -[SCDeepLinkingUrlInterceptor presentLeaveAppAlertForURL:continueHandler:cancelHandler:dismissHandler:] */

void FUN_10796cc44(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc8ff8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9018;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9018,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc9038;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9038,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c235c40(param_1);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010796cee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
  return;
}



/* Entry: 10796d230; end: 10796d23b; -[SCDeepLinkingUrlInterceptor setInterceptorDataSource:] */

void FUN_10796d230(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10796e264; end: 10796e3c3; -[SCStoriesChromeInteractionSession _updateFavoriteStatusForPage:params:] */

void FUN_10796e264(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x000107b2883c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107b288cc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010bfa1100(PTR_PTR_1126b5bf0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf1f3c0(uVar5);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010bf1f3c0();
  if ((int)puVar4 == 0) {
    func_0x000107b28768(*(undefined8 *)(param_1 + 0xa0),uVar2,uVar3,0,0);
  }
  else {
    func_0x000107b28694();
  }
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10796edd4; end: 10796ef9f; -[SCStoriesChromeInteractionSession _showBusinessProfileWithProfileId:pageEntryType:] */

void FUN_10796edd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain();
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afea0;
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar7 = uVar2;
    func_0x00010beecc40(uVar2,param_2,puVar3,&PTR___NSConcreteGlobalBlock_1109f2050);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar7;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  puVar3 = PTR_PTR_1126b4158;
  _objc_alloc(PTR_PTR_1126b4158);
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x11;
  func_0x00010bc9107c(0x11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x39);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd00(puVar3,param_2,param_3,param_1,lVar6,uVar7,param_4,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x60),param_2,puVar3,param_1);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796f518; end: 10796f75b; -[SCStoriesChromeInteractionSession _handleConfirmationUnsubscribeAction:params:] */

void FUN_10796f518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar8 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar8);
  lVar3 = lVar8;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5b080(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_10796f75c;
  puStack_80 = &UNK_110850cf8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar1);
  uStack_78 = uVar1;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  ppuVar7 = &puStack_98;
  uStack_68 = param_4;
  _objc_retainBlock();
  lVar8 = *(long *)(param_1 + 0x98);
  if (lVar8 == 0) {
    (*(code *)ppuVar7[2])(ppuVar7);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251ac0();
    _objc_release(lVar8);
  }
  _objc_release(ppuVar7);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107970424; end: 107970483;  */

void FUN_107970424(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108faa93c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 107971be4; end: 107971d4f;  */

void FUN_107971be4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  if (param_2 != 0) {
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010bf11fe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x160);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010853a704(*(undefined8 *)(param_1 + 0x10));
      func_0x00010bf54840(uVar2);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079726c0; end: 1079726cf;  */

undefined8 FUN_1079726c0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x128);
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = uVar10;
  _objc_retain();
  func_0x00010c079e00();
  if ((int)uVar10 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1f3c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126aed70;
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010c135f60(uVar1);
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      puVar3 = PTR_PTR_1126aed70;
      ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      puVar4 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      ppuVar5 = &PTR____CFConstantStringClassReference_110ead038;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ead038,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e5f7f8;
      uVar11 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f7f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar4);
      _objc_release(puVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      uVar8 = 0;
      func_0x0001008cd514(0);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      func_0x00010c10eda0(uVar9);
      _objc_release(uVar9);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return uVar10;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar11,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1109faa70);
  return uVar11;
}



/* Entry: 107973780; end: 10797383b;  */

void FUN_107973780(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c11d620(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107974788; end: 1079749a7;  */

void FUN_107974788(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_107973530;
  puStack_60 = &UNK_107973540;
  lStack_58 = 0;
  _objc_initWeak(auStack_88,*(undefined8 *)(param_1 + 0x20));
  uVar1 = 0;
  _dispatch_semaphore_create();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc();
  func_0x00010c04e820();
  _objc_copyWeak(auStack_90,auStack_88);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  func_0x00010bf88fa0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puStack_78[5] != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = puStack_78[5];
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  lVar4 = lStack_58;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    uVar1 = 8;
    __Block_object_dispose(&uStack_80,8);
    __Unwind_Resume();
    _objc_retain(uVar1);
    _objc_copyWeak(auStack_118,lVar4 + 0x38);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(uVar1);
    _dispatch_semaphore_signal(*(undefined8 *)(lVar4 + 0x28));
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_118);
    _objc_release(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107974e64; end: 107974f9b; -[SCStoriesSharingSession _savedStoryDeepLinkWithUsername:snapId:] */

void FUN_107974e64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010853acb4(lVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  lVar1 = lVar5;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = lVar5;
    _objc_retain(lVar5);
    lVar7 = lVar5;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfe5ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
  }
  func_0x000107d51d8c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfbf940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10797569c; end: 1079757eb; -[SCStoriesSharingSession _didDetachUIWithSendToSelection:sendToSessionId:shareSheetConfiguration:] */

void FUN_10797569c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf94c40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107976960; end: 1079769c3;  */

void FUN_107976960(long param_1,undefined8 param_2)

{
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea07c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079773d8; end: 107977923; -[SCStoriesSharingSession _sendStorySnapPlaybackInfo:toConversationIds:additionalText:platformAnalytics:additionalTextPlatformAnalytics:completion:] */

void FUN_1079773d8(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 == 0) goto LAB_107977820;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_107977924;
  puStack_70 = &UNK_110852668;
  _objc_retain(param_8);
  ppuVar3 = &puStack_88;
  uStack_68 = param_8;
  _objc_retainBlock();
  puVar4 = param_3;
  func_0x00010853b70c();
  puVar7 = param_3;
  if ((int)puVar4 == 0) {
    puVar4 = param_3;
    func_0x00010853b888();
    if ((int)puVar4 == 0) {
      puVar7 = PTR_PTR_1126c2810;
      _objc_alloc(PTR_PTR_1126c2810);
      puVar11 = *(undefined **)(param_1 + 0x10);
      func_0x00010c15f2e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0c5340(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c27dd80();
      func_0x00010c04e240(puVar7,param_2,puVar11,uVar9,0,param_5);
      _objc_release(uVar6);
      _objc_release(puVar11);
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c1440;
      _objc_opt_class(PTR_PTR_1126c1440);
      puVar8 = puVar11;
      func_0x00010beecc40(puVar11,param_2,puVar4,&PTR___NSConcreteGlobalBlock_1109f2660);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar4 = puVar8;
      func_0x00010bfe63a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar8);
      func_0x00010c15d8c0(puVar11,param_2,puVar7,param_4,param_6,param_7,
                          PTR___dispatch_main_q_11034be20,ppuVar3);
    }
    else {
      func_0x00010853bae8();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126d5888;
      _objc_alloc();
      puVar4 = param_3;
      func_0x00010c15f2e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_3;
      func_0x00010c0c5340(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010c27dd80();
      lVar2 = param_1;
      func_0x00010be756a0(param_1,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d960(puVar11,param_2,puVar4,puVar5,lVar2,param_5);
      _objc_release(lVar2);
      _objc_release(puVar8);
      _objc_release(puVar4);
      uVar6 = *(undefined8 *)(param_1 + 200);
      func_0x00010bfe63a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c140();
      _objc_release(uVar9);
      _objc_release(uVar6);
    }
  }
  else {
    func_0x00010853bdd8(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5bd8;
    func_0x00010c24b300(PTR_PTR_1126b5bd8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(long *)(param_1 + 0x30) - 0x42;
    puVar8 = PTR_PTR_1126b5bd8;
    if (uVar10 < 0x27) {
      if ((1L << (uVar10 & 0x3f) & 0x4000000701U) == 0) {
        if ((1L << (uVar10 & 0x3f) & 0x840000U) == 0) goto LAB_107977758;
        goto LAB_107977760;
      }
      func_0x00010c2753a0(PTR_PTR_1126b5bd8);
      _objc_retainAutoreleasedReturnValue();
LAB_107977770:
      puVar11 = (undefined *)0x0;
      puVar5 = puVar4;
LAB_10797777c:
      puVar4 = puVar8;
      _objc_release(puVar5);
    }
    else {
LAB_107977758:
      if (*(long *)(param_1 + 0x30) == 7) {
LAB_107977760:
        func_0x00010c25a340(PTR_PTR_1126b5bd8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107977770;
      }
      puVar5 = param_3;
      func_0x00010befd0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c08fa60();
      if (puVar11 == (undefined *)0x0) {
        _objc_release(puVar8);
        puVar11 = (undefined *)0x0;
        puVar8 = puVar4;
        goto LAB_10797777c;
      }
      iVar1 = (int)*(undefined8 *)(param_1 + 0xe8);
      func_0x000108f4b79c();
      _objc_release(puVar8);
      _objc_release(puVar5);
      if (iVar1 != 0) {
        puVar8 = param_3;
        func_0x00010befd0c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar8;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = PTR_PTR_1126b5bd8;
        func_0x00010c24b380(PTR_PTR_1126b5bd8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        goto LAB_10797777c;
      }
      puVar11 = (undefined *)0x0;
    }
    puVar8 = PTR_PTR_1126b5bd0;
    _objc_alloc(PTR_PTR_1126b5bd0);
    func_0x00010c000c00();
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cbe0();
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar4);
  }
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(ppuVar3);
  _objc_release(uStack_68);
LAB_107977820:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079785ec; end: 107978667; -[SCStoriesSharingSession _didSendOperaEvent:] */

void FUN_1079785ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107979378; end: 107979413; -[SCStoriesSharingSession _photoPermissionCoordinator] */

void FUN_107979378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bc858;
  _objc_opt_class(PTR_PTR_1126bc858);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1109f2600);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079795a0; end: 107979707; -[SCStoriesSharingSession _shareSpotlightWithMediaInfo:storiesConfig:businessIds:additionalText:] */

void FUN_1079795a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d20;
  func_0x00010c24afc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ae720;
  _objc_opt_class(PTR_PTR_1126ae720);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar5 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cc20();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079797dc; end: 107979a0f; -[SCStoriesSharingSession .cxx_destruct] */

void FUN_1079797dc(long param_1)

{
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
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
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107979b3c; end: 107979b43; -[SCDiscoverFriendStoryTileTapPrecomputedContext upNextFallbackStories] */

undefined8 FUN_107979b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10797a840; end: 10797a897;  */

void FUN_10797a840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10797c290; end: 10797c2cf;  */

void FUN_10797c290(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be01120(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10797c63c; end: 10797c747; -[SCDiscoverFeedActionHandler _didTapPostStoryReplyWithActionModel:sourceView:showStoryReplyPopUp:] */

void FUN_10797c63c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c2108;
    _objc_alloc(PTR_PTR_1126c2108);
    lVar1 = param_3;
    func_0x00010c0644a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf004c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01dd20(puVar5,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar4 = param_1;
  func_0x00010be411a0();
  if ((int)uVar4 != 0) {
    func_0x00010be3a0a0(param_1,param_2,puVar5,param_4,param_5);
  }
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10797d26c; end: 10797d46f; -[SCDiscoverFeedActionHandler _operaPresenterFinishTeardown] */

void FUN_10797d26c(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      uVar12 = *(undefined8 *)(lVar14 * 8);
      lVar3 = param_1 + 0x238;
      _objc_loadWeakRetained(lVar3);
      puVar13 = PTR_DAT_1126a4e80;
      _objc_retain(uVar12);
      uVar4 = uVar12;
      func_0x00010010fab4(uVar12,puVar13);
      uVar5 = uVar12;
      if ((int)uVar4 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar12);
      func_0x00010c1e1580(uVar5);
      _objc_release(uVar5);
      _objc_release(lVar3);
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = 0;
  _objc_release(uVar5);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  uVar5 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c12eea0();
  _objc_release(uVar5);
  uVar6 = param_1;
  func_0x00010be411a0();
  if ((int)uVar6 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    _objc_release(uVar5);
    func_0x00010bde0220(param_1);
  }
  lVar2 = param_1 + 0x250;
  _objc_loadWeakRetained();
  func_0x00010bf7d8e0();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar5);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  puVar13 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar7 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar13);
  uVar6 = uVar9;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  if (uVar6 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar7 = uVar9;
    func_0x000108535b00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    if (uVar8 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR_PTR_1126d58b0;
      func_0x00010bfb8f20(PTR_PTR_1126d58b0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10797d8d8; end: 10797d95b; -[SCDiscoverFeedActionHandler _isVerticalOperaForFeedType:] */

undefined8 FUN_10797d8d8(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_3 == 3) {
    uVar1 = *(ulong *)(param_1 + 0x188);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c11f8;
    func_0x00010bf824c0(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f320(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10797dbe0; end: 10797dc7f; -[SCDiscoverFeedActionHandler _showStoryDebugViewCallback] */

void FUN_10797dbe0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_10797dc80;
  puStack_48 = &UNK_11092f800;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10797e1d8; end: 10797e93f; -[SCDiscoverFeedActionHandler _playCheetahStoriesWithBaseView:initialCheetahStory:sectionKey:interactionContext:startingEntryEvent:cellSize:tapLocation:actionIdentifier:itemSource:precomputedComposition:] */

void FUN_10797e1d8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,ulong param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  uVar5 = param_1;
  func_0x00010bdd9d60();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar5 & 1) == 0) {
    func_0x00010bf95660(puVar1);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf18ba0(puVar1);
    _objc_release(puVar1);
    func_0x00010be575c0(param_1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar1);
    uVar15 = param_4;
    func_0x00010c0ea200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_5;
    func_0x000108481f00(param_5,uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x000108481fac(param_4,uVar13,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar13);
    _objc_release(uVar15);
    uVar15 = param_5;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar15);
    _objc_initWeak(auStack_70,param_1);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_10797e940;
    puStack_b8 = &UNK_1109f2730;
    _objc_copyWeak(auStack_90,auStack_70);
    _objc_retain(param_3);
    uStack_b0 = param_3;
    _objc_retain(uVar2);
    uStack_a8 = uVar2;
    _objc_retain(param_5);
    uStack_a0 = param_5;
    uStack_88 = param_6;
    uStack_80 = param_7;
    _objc_retain(param_10);
    uStack_98 = param_10;
    uStack_78 = param_11;
    ppuVar3 = &puStack_d0;
    _objc_retainBlock();
    _objc_retain(param_12);
    if (param_12 == 0) {
      uVar5 = *(ulong *)(param_1 + 400);
      func_0x00010bf447a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = param_12;
      func_0x00010c0822c0();
      uVar5 = param_12;
      if ((int)uVar4 != 0) {
        uVar4 = param_12;
        func_0x00010c282f80(param_12);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107d00798();
        _objc_release(uVar4);
      }
    }
    uVar4 = uVar5;
    func_0x00010bf009c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c072a80();
    if (((uVar6 & 1) == 0) && (uVar6 = uVar5, func_0x00010c0822c0(), (int)uVar6 != 0)) {
      func_0x00010bed2340();
      uVar6 = uVar4;
      func_0x000100504554(uVar4,&PTR___NSConcreteGlobalBlock_1109f2760);
      uVar7 = uVar5;
      func_0x00010c283020();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c283020(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010c282f80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be488a0(param_1);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      uVar7 = uVar4;
      func_0x00010bf529e0();
      if (uVar7 == 0) {
        lVar14 = 0;
      }
      else {
        uVar7 = uVar4;
        func_0x00010bf529e0();
        lVar14 = uVar7 - 1;
      }
      *(long *)(param_1 + 0x1e0) = lVar14;
      _objc_release(uVar6);
    }
    uVar13 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf67ac0();
    uVar6 = uVar4;
    func_0x00010799b108(uVar4,uVar15,0,*(undefined8 *)(param_1 + 0x158),0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar13);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar1);
    uVar13 = *(undefined8 *)(param_1 + 0xc0);
    uVar15 = *(undefined8 *)(param_1 + 0x108);
    uVar16 = *(undefined8 *)(param_1 + 0x188);
    _objc_retain(uVar16);
    _objc_retain(uVar15);
    _objc_retain(uVar13);
    uVar4 = uVar6;
    func_0x0001006372a4(uVar6,&PTR___NSConcreteGlobalBlock_1109f2a70);
    puVar1 = PTR_PTR_1126c6988;
    _objc_alloc();
    func_0x00010c00cf80();
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar4);
    uVar15 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR_PTR_1126d58c0;
    _objc_alloc();
    func_0x00010c01db20();
    uVar15 = *(undefined8 *)(param_1 + 0x140);
    *(undefined **)(param_1 + 0x140) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR_PTR_1126d58b0;
    func_0x00010bf82160();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    uVar4 = uVar6;
    func_0x00010bf51e00(uVar6);
    (*(code *)ppuVar3[2])(ppuVar3,uVar4);
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(ppuVar3);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_70);
    param_4 = uVar2;
  }
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10797f414; end: 10797f52f;  */

void FUN_10797f414(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5ed80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11f7a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf00080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf00040(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = uVar1;
  func_0x00010bf9b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be746e0(lVar3,param_2,uVar4,uVar5,uVar6,uVar7,uVar1,uVar2,uVar10,uVar9,uVar8,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10798062c; end: 1079809eb; -[SCDiscoverFeedActionHandler _playTriggeringActionCheetahStory:withBaseView:feedType:source:triggeringItemId:sectionKey:triggeringSection:actionIdentifier:] */

void FUN_10798062c(long param_1,undefined8 param_2,long *param_3,undefined ***param_4,long *param_5,
                  long *param_6,undefined *param_7,undefined *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined ***pppuVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  undefined *unaff_x25;
  long *unaff_x27;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  long lStack_180;
  undefined ***pppuStack_170;
  long *plStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  undefined ***pppuStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_3;
  pppuVar15 = param_4;
  plVar16 = param_5;
  plVar17 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  lVar18 = param_1;
  func_0x00010bdd9d60();
  if ((int)lVar18 != 0) {
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110e5f218;
    plStack_f0 = param_6;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad98;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110f41878;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110eb6298;
    lStack_e8 = lVar18;
    pppuStack_e0 = param_4;
    lStack_a0 = lVar18;
    if (param_7 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110f42398;
      puVar19 = PTR__OBJC_CLASS___NSNull_1126aef28;
      puStack_108 = puVar2;
      puStack_90 = puVar2;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110f42398;
      puVar19 = param_7;
      puStack_90 = param_7;
    }
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110f41cb8;
    puVar2 = param_8;
    puStack_100 = puVar19;
    puStack_88 = puVar19;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      unaff_x25 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110f41c18;
    uStack_f8 = param_9;
    unaff_x27 = (long *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = unaff_x25;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    param_6 = unaff_x27;
    if (unaff_x27 == (long *)0x0) {
      param_6 = (long *)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    plVar4 = &lStack_a0;
    pppuVar15 = &ppuStack_d0;
    plVar16 = (long *)0x6;
    plVar3 = (long *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    plStack_78 = param_6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    plStack_d8 = plVar3;
    if (unaff_x27 == (long *)0x0) {
      _objc_release(param_6);
    }
    _objc_release(unaff_x27);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(unaff_x25);
    }
    _objc_release(puVar2);
    if (param_7 == (undefined *)0x0) {
      _objc_release(puStack_100);
      _objc_release(puStack_108);
    }
    _objc_release(lStack_e8);
    plVar3 = param_3;
    func_0x00010c25b720();
    param_4 = pppuStack_e0;
    if ((((plVar3 == (long *)0x3) ||
         (plVar3 = param_3, func_0x00010c25b720(), plVar3 == (long *)0xe)) ||
        (plVar3 = param_3, func_0x00010c25b720(), plVar3 == (long *)0x2)) ||
       ((plVar3 = param_3, func_0x00010c25b720(), plVar3 == (long *)0xb ||
        (plVar3 = param_3, func_0x00010c25b720(), plVar3 == (long *)0xf)))) {
      plVar4 = param_3;
      func_0x00010bf454e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      plVar16 = plVar4;
      func_0x00010bf52680();
      func_0x000107b018f8(1,plVar16,*(undefined8 *)(param_1 + 0x1a0));
      _objc_release(plVar4);
      plVar4 = param_3;
      func_0x00010bf454e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      plVar16 = plVar4;
      func_0x00010bf52680();
      func_0x000107b018f8(2,plVar16,*(undefined8 *)(param_1 + 0x1a0));
      _objc_release(plVar4);
      param_6 = param_3;
      func_0x00010c0ea200();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = param_8;
      func_0x000108481f00(param_8,param_6);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = param_3;
      func_0x000108481fac(param_3,unaff_x25,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      _objc_release(param_6);
      uStack_110 = uStack_f8;
      plVar4 = unaff_x27;
      pppuVar15 = param_4;
      plVar16 = plStack_d8;
      plVar17 = param_5;
      func_0x00010be74820(param_1);
      _objc_release(unaff_x27);
    }
    _objc_release(plStack_d8);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  plVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_150 = param_10;
  puStack_118 = &UNK_1079809ec;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_170 = param_4;
  plStack_168 = unaff_x27;
  lStack_160 = param_1;
  puStack_158 = unaff_x25;
  puStack_148 = param_8;
  puStack_140 = param_7;
  plStack_138 = param_5;
  plStack_130 = param_6;
  plStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(plVar4);
  _objc_retain(pppuVar15);
  _objc_retain(plVar16);
  _objc_retain(plVar17);
  plVar5 = (long *)plVar3[10];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  plVar6 = plVar5;
  func_0x00010c0fed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(plVar5);
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar4;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar6;
    func_0x00010bf52680();
    func_0x000107b018f8(3,plVar5,plVar3[0x34]);
    _objc_release(plVar6);
    goto code_r0x000107981088;
  }
  plVar5 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
  plStack_188 = plVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  plVar7 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
  plStack_190 = plVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  plVar10 = plVar17;
  func_0x00010c067ec0();
  puVar2 = PTR_PTR_1126b1118;
  _objc_alloc();
  plVar8 = plVar10;
  func_0x000108f53fe8(plVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043160();
  _objc_release(plVar8);
  iVar1 = (int)plVar3[0x32];
  func_0x00010c230260();
  puVar19 = PTR_PTR_1126d58b0;
  func_0x00010bf82160();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = plVar3[0x14];
  plVar3[0x14] = (long)puVar19;
  _objc_release(lVar18);
  puVar19 = PTR_PTR_1126d58c0;
  _objc_alloc();
  func_0x00010c01db20();
  lVar18 = plVar3[0x28];
  plVar3[0x28] = (long)puVar19;
  _objc_release(lVar18);
  plVar8 = plVar4;
  if (iVar1 == 0) {
    if (plVar17 != (long *)0x0) {
      plVar10 = (long *)plVar3[0x32];
      func_0x00010bfc0360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar7);
      lVar18 = plVar3[10];
      func_0x00010c269d40(lVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010799ad20(plVar4,plVar10,plVar6,lVar18,0);
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar10;
      goto code_r0x000107980e58;
    }
  }
  else {
    plVar11 = plVar7;
    if ((int)plVar10 == 2) {
      lVar9 = plVar3[0x31];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar9;
      func_0x00010c2830e0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar18;
      func_0x00010c25fb40();
      _objc_release(lVar18);
      _objc_release(lVar9);
      if ((int)lVar14 != 1) {
        plVar10 = (long *)plVar3[0x32];
        func_0x00010bfc0360();
        _objc_retainAutoreleasedReturnValue();
        plVar11 = plVar10;
        if ((int)lVar14 == 0) {
          _objc_retain();
        }
        else {
          func_0x00010bf529e0();
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(plVar7);
        _objc_release(plVar10);
      }
    }
    lVar18 = plVar3[0x32];
    func_0x00010c283100(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed2340(plVar3);
    plVar10 = plVar11;
    func_0x000100504554(plVar11,&PTR___NSConcreteGlobalBlock_1109f27f0);
    plVar7 = plVar11;
    func_0x00010bfb1920(plVar11);
    _objc_retainAutoreleasedReturnValue();
    plVar12 = plVar7;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    plVar13 = plVar12;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be488a0(plVar3);
    _objc_release(plVar13);
    _objc_release(plVar12);
    _objc_release(plVar7);
    plVar7 = plVar11;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar11);
    lVar14 = plVar3[10];
    func_0x00010c269d40(lVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010799ad20(plVar4,plVar7,plVar6,lVar14,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar5);
    _objc_release(lVar14);
    plVar5 = plVar8;
    func_0x00010bf529e0();
    if (plVar5 == (long *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      plVar5 = plVar8;
      func_0x00010bf529e0();
      puVar19 = (undefined *)((long)plVar5 + -1);
    }
    plVar3[0x3c] = (long)puVar19;
    plVar5 = plVar10;
code_r0x000107980e58:
    _objc_release(plVar5);
    _objc_release(lVar18);
    plVar5 = plVar8;
  }
  plVar10 = plVar5;
  func_0x00010bfecde0();
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc0000000;
  puStack_1a8 = &UNK_10799b018;
  puStack_1a0 = &UNK_1109f2f90;
  uStack_198 = 0;
  plVar8 = plVar5;
  func_0x00010bd86420(plVar5,&puStack_1b8);
  _objc_release(plVar5);
  plVar11 = plVar6;
  if (plVar10 != (long *)0x7fffffffffffffff) {
    plVar11 = plVar8;
    func_0x00010c0dfd40(plVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar6);
  }
  lVar18 = plVar3[0x18];
  lVar14 = plVar3[0x21];
  lVar9 = plVar3[0x31];
  _objc_retain(lVar18);
  _objc_retain(lVar14);
  _objc_retain(lVar9);
  plVar6 = plVar7;
  func_0x0001006372a4(plVar7,&PTR___NSConcreteGlobalBlock_1109f2a70);
  puVar19 = PTR_PTR_1126c6988;
  _objc_alloc();
  func_0x00010c00cf80();
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar18);
  _objc_release(plVar6);
  lVar18 = plVar3[0x16];
  plVar3[0x16] = (long)puVar19;
  _objc_release(lVar18);
  plVar6 = plVar4;
  func_0x00010bf454e0(plVar4);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar6;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be62540();
  func_0x00010be78160(plVar3);
  _objc_release(plVar5);
  _objc_release(plVar6);
  plVar6 = plVar4;
  func_0x00010bf454e0(plVar4);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar6;
  func_0x00010bf52680();
  func_0x000107b018f8(0,plVar5,plVar3[0x34]);
  _objc_release(plVar6);
  _objc_release(puVar2);
  _objc_release(plVar7);
  _objc_release(plVar8);
  _objc_release(plVar11);
code_r0x000107981088:
  _objc_release(plVar17);
  _objc_release(plVar16);
  _objc_release(pppuVar15);
  _objc_release(plVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf454e0(plVar5);
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plVar5;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10798230c; end: 107982403;  */

void FUN_10798230c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10797c980;
  puStack_30 = &UNK_10797c990;
  uStack_28 = 0;
  func_0x00010c0bdf60(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107982b98; end: 107982c83;  */

void FUN_107982b98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_2);
  _objc_alloc();
  uVar3 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259580(param_2);
  func_0x000107a88008();
  func_0x00010c04dcc0();
  _objc_release(uVar3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  uVar3 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar1;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079833a8; end: 107983533; -[SCDiscoverFeedActionHandler _logPromotedStoryTappedIfNeeded:sectionKey:cellSize:tapLocation:] */

void FUN_1079833a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c25b720();
  if (lVar1 == 5) {
    lVar1 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 200);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010bfa4340(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c2827c0();
      uVar5 = uVar3;
      func_0x00010bf009e0(uVar3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfecde0(uVar5,param_2,param_3);
      if (param_5 != 0) {
        func_0x00010bdc10a0(param_5);
      }
      func_0x00010c0ad240(uVar6,param_2,lVar2,uVar4,param_6,0);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079840dc; end: 10798412f; -[SCDiscoverFeedActionHandler contextOperaPluginWillPresent:presentationContext:] */

void FUN_1079840dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010c2a6f40();
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__announceActionWithActionModel_c_112550748,0,0,0,0xffffffffffffffff,
               &PTR____CFConstantStringClassReference_110eb6098);
    return;
  }
  return;
}



/* Entry: 107984ae4; end: 107984b7b; -[SCDiscoverFeedActionHandler operaPresenterDidFinishDismissing:] */

void FUN_107984ae4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x250;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf752a0();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x260;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0eb3c0();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3240();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb31a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107985414; end: 107985417; -[SCDiscoverFeedActionHandler playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_107985414(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFailToPresent__1126185a8);
  return;
}



/* Entry: 107985640; end: 1079857bf; -[SCDiscoverFeedActionHandler isPresentingOtherViewController] */

void FUN_107985640(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **unaff_x21;
  undefined *unaff_x22;
  long lVar16;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  undefined *puVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar14 = *(undefined ***)(param_1 + 0x28);
  _objc_retain(ppuVar14);
  ppuVar4 = ppuVar14;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_s_isOverlaySeparatedFromImageMedia_1125fc000;
    unaff_x27 = &PTR_DAT_1126a4000;
    unaff_x21 = ppuVar4;
    do {
      unaff_x22 = PTR_s_isPresentingOtherViewController_1125fc518;
      unaff_x28 = (undefined **)0x0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(ppuVar14);
        }
        puVar7 = PTR_DAT_1126a4e80;
        unaff_x24 = *(ulong *)(lStack_128 + (long)unaff_x28 * 8);
        _objc_retain(unaff_x24);
        uVar5 = unaff_x24;
        func_0x00010010fab4(unaff_x24,puVar7);
        unaff_x23 = unaff_x24;
        if ((int)uVar5 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x24);
        uVar5 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if (((uVar5 & 1) != 0) && (uVar5 = unaff_x23, func_0x00010c07ac20(), (uVar5 & 1) != 0)) {
          _objc_release(unaff_x23);
          _objc_release(ppuVar14);
          lVar6 = 1;
          goto LAB_107985784;
        }
        _objc_release(unaff_x23);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (unaff_x21 != unaff_x28);
      unaff_x21 = ppuVar14;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined **)0x0);
  }
  _objc_release(ppuVar14);
  lVar6 = *(long *)(param_1 + 0x280);
  func_0x00010c07ac20();
LAB_107985784:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_260;
  puStack_138 = &UNK_1079857c0;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = (int)*(undefined8 *)(lVar6 + 0x280);
  ppuStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  ppuStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  ppuStack_158 = unaff_x21;
  ppuStack_150 = ppuVar14;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c07ab40();
  if (iVar3 != 0) {
    func_0x00010bf84cc0(*(undefined8 *)(lVar6 + 0x280));
  }
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  ppuVar13 = *(undefined ***)(lVar6 + 0x28);
  _objc_retain(ppuVar13);
  ppuVar4 = ppuVar13;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = *plStack_250;
    unaff_x27 = &PTR_s_canStopEditingCaption__1125a9000;
    unaff_x28 = &PTR_DAT_1126a4000;
    do {
      unaff_x21 = (undefined **)PTR_s_isPresenting_1125fc4e0;
      unaff_x22 = PTR_s_cancelPresentation_1125a9470;
      unaff_x26 = (undefined **)0x0;
      do {
        if (*plStack_250 != unaff_x25) {
          _objc_enumerationMutation(ppuVar13);
        }
        puVar7 = PTR_DAT_1126a4e80;
        unaff_x24 = *(ulong *)(lStack_258 + (long)unaff_x26 * 8);
        _objc_retain(unaff_x24);
        uVar5 = unaff_x24;
        func_0x00010010fab4(unaff_x24,puVar7);
        unaff_x23 = unaff_x24;
        if ((int)uVar5 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x24);
        uVar5 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x21);
        if ((((uVar5 & 1) != 0) && (uVar5 = unaff_x23, func_0x00010c07ab40(), (int)uVar5 != 0)) &&
           (uVar5 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22), (uVar5 & 1) != 0))
        {
          func_0x00010bf2eb20(unaff_x23);
        }
        _objc_release(unaff_x23);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      ppuVar4 = ppuVar13;
      puVar9 = &uStack_260;
      func_0x00010bf52a60();
      ppuVar14 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  ppuVar4 = ppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_390;
  puStack_268 = &UNK_107985958;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  uStack_2a0 = unaff_x24;
  uStack_298 = unaff_x23;
  puStack_290 = unaff_x22;
  ppuStack_288 = unaff_x21;
  ppuStack_280 = ppuVar14;
  ppuStack_278 = ppuVar13;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar9);
  _objc_storeWeak(ppuVar4 + 0x47,puVar9);
  uVar18 = 0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar15 = ppuVar4[5];
  _objc_retain(puVar15);
  puVar7 = puVar15;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar6 = *plStack_380;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_380 != lVar6) {
          _objc_enumerationMutation(puVar15);
        }
        puVar2 = PTR_DAT_1126a4e80;
        lVar16 = *(long *)(lStack_388 + (long)puVar17 * 8);
        _objc_retain(lVar16);
        lVar8 = lVar16;
        func_0x00010010fab4(lVar16,puVar2);
        lVar1 = lVar16;
        if ((int)lVar8 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar16);
        if (lVar1 != 0) {
          func_0x00010c1e1580(lVar16);
        }
        _objc_release(lVar1);
        puVar17 = puVar17 + 1;
      } while (puVar7 != puVar17);
      puVar7 = puVar15;
      puVar12 = &uStack_390;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  if ((*(byte *)((long)puVar9 + 0x164) & 1) == 0) {
    if (puVar12 == (undefined8 *)0x0) {
      puVar10 = (undefined1 *)((long)puVar9 + 0x238);
      _objc_loadWeakRetained(puVar10);
      puVar11 = puVar10;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxY();
      uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010bc8525c(uVar19,uVar20,uVar21,uVar22,uVar18);
      _objc_release(puVar11);
      _objc_release(puVar10);
      func_0x00010c283ba0(*(undefined8 *)((long)puVar9 + 0x280));
      func_0x00010c283c00(uVar19,uVar20,uVar21,uVar22,*(undefined8 *)((long)puVar9 + 0x280));
    }
    else {
      func_0x00010c283ba0(*(undefined8 *)((long)puVar9 + 0x280));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 107985c20; end: 107985c2f; -[SCDiscoverFeedActionHandler operaModalPresentationDidEnd] */

void FUN_107985c20(long param_1)

{
  if (*(long *)(param_1 + 0x280) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0cfbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x280),PTR_s_modalPresentationDidEnd_112611900);
    return;
  }
  return;
}



/* Entry: 1079861b4; end: 1079861ef; -[SCDiscoverFeedActionHandler _clearCurrentPlaylist] */

void FUN_1079861b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x288);
  *(undefined **)(param_1 + 0x288) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079863b4; end: 1079863bb; -[SCDiscoverFeedActionHandler storyPositionProvider] */

undefined8 FUN_1079863b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 107986444; end: 10798644b; -[SCDiscoverFeedActionHandler shouldHandleAction] */

undefined1 FUN_107986444(long param_1)

{
  return *(undefined1 *)(param_1 + 0x230);
}



/* Entry: 107986498; end: 10798649f; -[SCDiscoverFeedActionHandler eventAnnouncer] */

undefined8 FUN_107986498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 1079868e4; end: 10798694b;  */

bool FUN_1079868e4(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c25b720();
  if ((lVar2 == 3) || (lVar2 = param_2, func_0x00010c25b720(), lVar2 == 0xe)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c25b720(param_2);
    bVar1 = lVar2 == 0xd;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107987594; end: 107987dd7; -[SCDiscoverFeedActionSheetActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107987594(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      uVar6 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d58e8;
      _objc_opt_class(PTR_PTR_1126d58e8);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar2 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar6);
      uVar6 = param_1 + 0x1d0;
      _objc_loadWeakRetained();
      puVar7 = PTR_PTR_1126d58e0;
      _objc_opt_class(PTR_PTR_1126d58e0);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      _objc_release(uVar6);
      if ((uVar8 & 1) != 0) {
        uVar6 = uVar2;
        func_0x00010c25a160(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be7e880(param_1);
        goto LAB_10798786c;
      }
      func_0x00010be023c0(param_1);
      goto LAB_107987904;
    }
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      uVar6 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d58f0;
      _objc_opt_class(PTR_PTR_1126d58f0);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar2 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar6);
      uVar6 = param_1 + 0x1d0;
      _objc_loadWeakRetained();
      puVar7 = PTR_PTR_1126d58e0;
      _objc_opt_class(PTR_PTR_1126d58e0);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      _objc_release(uVar6);
      if ((uVar8 & 1) != 0) {
        uVar6 = uVar2;
        func_0x00010c244280(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x00010c2923e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf24ec0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c25a160(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be7dec0(param_1);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar8);
        goto LAB_10798786c;
      }
      func_0x00010be02360(param_1);
      goto LAB_107987904;
    }
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      uVar6 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d58f8;
      _objc_opt_class(PTR_PTR_1126d58f8);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar2 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar6);
      func_0x00010be9fbc0(param_1);
      goto LAB_107987904;
    }
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      uVar6 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d5900;
      _objc_opt_class(PTR_PTR_1126d5900);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar2 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar6);
      func_0x00010bea10a0(param_1);
      goto LAB_107987904;
    }
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 != 0) {
      uVar6 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d5908;
      _objc_opt_class(PTR_PTR_1126d5908);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar2 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar6);
      func_0x00010be02d60(param_1);
      goto LAB_107987904;
    }
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        uVar2 = uVar1;
        func_0x00010c0720c0();
        if ((int)uVar2 == 0) {
          uVar2 = uVar1;
          func_0x00010c0720c0();
          if ((int)uVar2 != 0) {
            func_0x00010be26dc0(param_1);
            goto LAB_107987908;
          }
          uVar2 = uVar1;
          func_0x00010c0720c0();
          if ((int)uVar2 == 0) {
            uVar2 = uVar1;
            func_0x00010c0720c0();
            if ((int)uVar2 == 0) {
              uVar2 = uVar1;
              func_0x00010c0720c0();
              if ((int)uVar2 == 0) {
                uVar2 = uVar1;
                func_0x00010c0720c0();
                if ((int)uVar2 == 0) {
                  uVar2 = uVar1;
                  func_0x00010c0720c0();
                  if ((int)uVar2 == 0) {
                    uVar2 = uVar1;
                    func_0x00010c0720c0();
                    if ((int)uVar2 != 0) {
                      func_0x00010be7ae40(param_1);
                    }
                  }
                  else {
                    uVar6 = param_4;
                    func_0x00010beee2e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = PTR_PTR_1126d5948;
                    _objc_opt_class(PTR_PTR_1126d5948);
                    uVar8 = uVar6;
                    _objc_opt_isKindOfClass(uVar6,puVar7);
                    uVar2 = uVar6;
                    if ((uVar8 & 1) == 0) {
                      uVar2 = 0;
                    }
                    _objc_retain(uVar2);
                    _objc_release(uVar6);
                    func_0x00010be79f00(param_1);
                    _objc_release(uVar2);
                  }
                }
                else {
                  uVar6 = param_4;
                  func_0x00010beee2e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = PTR_PTR_1126d5940;
                  _objc_opt_class(PTR_PTR_1126d5940);
                  uVar8 = uVar6;
                  _objc_opt_isKindOfClass(uVar6,puVar7);
                  uVar2 = uVar6;
                  if ((uVar8 & 1) == 0) {
                    uVar2 = 0;
                  }
                  _objc_retain(uVar2);
                  _objc_release(uVar6);
                  func_0x00010c259740(uVar2);
                  _objc_release(uVar2);
                  func_0x00010be02320(param_1);
                }
                uVar9 = 0;
                goto LAB_10798790c;
              }
              uVar6 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126d5938;
              _objc_opt_class(PTR_PTR_1126d5938);
              uVar8 = uVar6;
              _objc_opt_isKindOfClass(uVar6,puVar7);
              uVar2 = uVar6;
              if ((uVar8 & 1) == 0) {
                uVar2 = 0;
              }
              _objc_retain(uVar2);
              _objc_release(uVar6);
              puVar7 = PTR_PTR_1126c55c0;
              puVar5 = PTR_PTR_1126c5760;
              func_0x00010c086160(PTR_PTR_1126c5760);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1f9640(puVar7);
              _objc_release(puVar5);
              func_0x00010be023a0(param_1);
            }
            else {
              uVar6 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126d5930;
              _objc_opt_class(PTR_PTR_1126d5930);
              uVar8 = uVar6;
              _objc_opt_isKindOfClass(uVar6,puVar7);
              uVar2 = uVar6;
              if ((uVar8 & 1) == 0) {
                uVar2 = 0;
              }
              _objc_retain(uVar2);
              _objc_release(uVar6);
              func_0x00010be26720(param_1);
            }
          }
          else {
            uVar6 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126d5928;
            _objc_opt_class(PTR_PTR_1126d5928);
            uVar8 = uVar6;
            _objc_opt_isKindOfClass(uVar6,puVar7);
            uVar2 = uVar6;
            if ((uVar8 & 1) == 0) {
              uVar2 = 0;
            }
            _objc_retain(uVar2);
            _objc_release(uVar6);
            func_0x00010be7e260(param_1);
          }
        }
        else {
          uVar6 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126d5920;
          _objc_opt_class(PTR_PTR_1126d5920);
          uVar8 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar7);
          uVar2 = uVar6;
          if ((uVar8 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar6);
          func_0x00010be2d760(param_1);
        }
      }
      else {
        uVar6 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d5918;
        _objc_opt_class(PTR_PTR_1126d5918);
        uVar8 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar7);
        uVar2 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar6);
        func_0x00010be2ac40(param_1);
      }
      goto LAB_107987904;
    }
    uVar6 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d5910;
    _objc_opt_class(PTR_PTR_1126d5910);
    uVar8 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uVar2 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar6);
    func_0x00010c259740(uVar2);
    _objc_release(uVar2);
    func_0x00010be9ec00(param_1);
  }
  else {
    uVar6 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d58d8;
    _objc_opt_class(PTR_PTR_1126d58d8);
    uVar8 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uVar2 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar6);
    uVar6 = param_1 + 0x1d0;
    _objc_loadWeakRetained();
    puVar7 = PTR_PTR_1126d58e0;
    _objc_opt_class(PTR_PTR_1126d58e0);
    uVar8 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    _objc_release(uVar6);
    if ((uVar8 & 1) == 0) {
      func_0x00010be02380(param_1);
    }
    else {
      uVar6 = uVar2;
      func_0x00010c25a160(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7df00(param_1);
LAB_10798786c:
      _objc_release(uVar6);
    }
LAB_107987904:
    _objc_release(uVar2);
  }
LAB_107987908:
  uVar9 = 1;
LAB_10798790c:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar9;
}



/* Entry: 107988898; end: 1079888cb;  */

void FUN_107988898(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107989188; end: 107989467; -[SCDiscoverFeedActionSheetActionHandler _sendUserForActionDataModel:] */

void FUN_107989188(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b40d0;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c11aae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c048fa0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b40d8;
  func_0x00010c22b300();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_1);
  lVar4 = param_1 + 0x1c8;
  _objc_loadWeakRetained(lVar4);
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(puVar5);
  func_0x00010bf83dc0(lVar4);
  _objc_release(lVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ea8b98;
  func_0x00010c259740(param_3);
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ea8c18;
  puVar10 = *(undefined **)(param_1 + 0x18);
  puVar7 = puVar10;
  puStack_78 = puVar6;
  if (puVar10 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar9);
  _objc_release(puVar8);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume();
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (param_3 != 0) {
      func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x78));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1079897a0; end: 1079897a3; -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerDidCompleteExport:completed:activityError:] */

void FUN_1079897a0(void)

{
  return;
}



/* Entry: 107989ba4; end: 107989bcf;  */

void FUN_107989ba4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


