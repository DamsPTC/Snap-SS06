/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085db0c0; end: 1085db0eb; -[SCPresenceVisibilityObserver _extendChatMediaSendMode] */

long FUN_1085db0c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110ee50d8,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1085db0ec; end: 1085db1bb; -[SCPresenceVisibilityObserver .cxx_destruct] */

void FUN_1085db0ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085db1bc; end: 1085db293; -[SCCallStateProvider removeSessionForTalkContext:] */

void FUN_1085db1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085db294; end: 1085db30b;  */

void FUN_1085db294(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf4e8a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 8),param_2,lVar2);
      func_0x00010bed9d80(lVar1);
      func_0x00010bed30e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085db30c; end: 1085db3e3; -[SCCallStateProvider updateWithPresencePlatformActiveConversationsInfo:] */

void FUN_1085db30c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085db3e4; end: 1085db43b;  */

void FUN_1085db3e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010beddb60(lVar1);
    func_0x00010be64680(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085db43c; end: 1085db443; -[SCCallStateProvider conversationIdsToCalls] */

void FUN_1085db43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1085db444; end: 1085db44b; -[SCCallStateProvider callForConversationId:] */

void FUN_1085db444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1085db44c; end: 1085db4bf; -[SCCallStateProvider activeCallForTalkContext:] */

void FUN_1085db44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085db4c0; end: 1085db517; -[SCCallStateProvider hasCallKitCall] */

long FUN_1085db4c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd4f60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1085db518; end: 1085db567; -[SCCallStateProvider screenSharingState] */

long FUN_1085db518(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c151340(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1085db568; end: 1085db667; -[SCCallStateProvider sessionWrapper:updatedState:] */

void FUN_1085db568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085db668; end: 1085db783;  */

void FUN_1085db668(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c2688a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4e8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126b60f8;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2688a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c252440(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f2b40(puVar6,param_2,uVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 8),param_2,puVar6,lVar3);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x00010bed9d80(lVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2688a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed30e0(lVar1,param_2,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085db784; end: 1085db7bb; -[SCCallStateProvider _notifyTalkContextToActiveCall] */

void FUN_1085db784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085db7bc; end: 1085db7f3; -[SCCallStateProvider _notifyConvoIdToCall] */

void FUN_1085db7bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085db7f4; end: 1085db837; -[SCCallStateProvider _updateInternals] */

void FUN_1085db7f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf04a00(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a5a080);
  *(char *)(param_1 + 0x50) = (char)uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf04a00(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a5a0a0);
  *(char *)(param_1 + 0x51) = (char)uVar1;
  return;
}



/* Entry: 1085db838; end: 1085db90b;  */

bool FUN_1085db838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c154b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf282e0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return (int)uVar2 != 0;
}



/* Entry: 1085db90c; end: 1085dbf07; -[SCCallStateProvider _updateAndNotifyForTalkContext:] */

undefined * FUN_1085db90c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x26;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long unaff_x28;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  long lStack_220;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  undefined4 uStack_18c;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
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
  lVar11 = *(long *)(param_1 + 8);
  puVar18 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar11,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  lVar1 = lVar11;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf28140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lStack_148 = param_1;
    lStack_140 = lVar11;
    puStack_138 = param_3;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar2 = lVar1;
    func_0x00010c12a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010bf52a60();
    if (lVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      lVar17 = *plStack_120;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(lVar2);
          }
          lVar13 = *(long *)(lStack_128 + unaff_x28 * 8);
          lVar4 = lVar13;
          func_0x00010bf282e0();
          if (((int)lVar4 != 0) && (lVar4 = lVar13, func_0x00010bf282e0(), (int)lVar4 != 2)) {
            lVar4 = lVar13;
            func_0x00010c244240();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = lVar4;
            func_0x0001085db128();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3,param_2,unaff_x26);
            _objc_release(unaff_x26);
            _objc_release(lVar4);
          }
          if (lVar15 == 0) {
            lVar15 = lVar13;
            func_0x00010bf282e0();
            if ((int)lVar15 == 1) {
              _objc_retain(lVar13);
              lVar15 = lVar13;
            }
            else {
              lVar15 = 0;
            }
          }
          unaff_x28 = unaff_x28 + 1;
        } while (lVar11 != unaff_x28);
        lVar11 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar11 != 0);
    }
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010bf282e0();
    _objc_release(lVar2);
    if ((int)lVar11 == 0) {
      puVar18 = (undefined *)0x0;
      param_1 = lStack_148;
    }
    else {
      puVar18 = PTR_PTR_1126da550;
      _objc_alloc();
      lVar2 = lVar1;
      func_0x00010bf50280(lVar1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = lVar1;
      func_0x00010c09dd00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = unaff_x28;
      func_0x00010bf282e0();
      lVar17 = lVar1;
      func_0x00010c09dd00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar17;
      func_0x00010c0c6080();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      iVar10 = (int)lVar11;
      lStack_150 = lVar17;
      if (iVar10 < 3) {
        uVar9 = 2;
        if (iVar10 != 2) {
          uVar9 = 0;
        }
        uStack_178 = 1;
        if (iVar10 != 1) {
          uStack_178 = uVar9;
        }
      }
      else if (iVar10 == 3) {
        uStack_178 = 3;
      }
      else if (iVar10 == 4) {
        lVar11 = lVar4;
        func_0x00010bf0ed00();
        _objc_retainAutoreleasedReturnValue();
        uStack_178 = 0;
        if (lVar11 != 0) {
          uStack_178 = 4;
        }
        _objc_release();
      }
      else {
        uStack_178 = 0;
      }
      lStack_158 = lVar4;
      _objc_release(lVar4);
      lVar11 = lVar1;
      func_0x00010bf28140();
      _objc_retainAutoreleasedReturnValue();
      lStack_160 = lVar11;
      func_0x0001085f8688();
      lVar17 = lVar1;
      func_0x00010c09dd00();
      _objc_retainAutoreleasedReturnValue();
      lStack_168 = lVar17;
      func_0x00010c0c6080();
      _objc_retainAutoreleasedReturnValue();
      lStack_170 = lVar17;
      func_0x0001085f8610();
      unaff_x26 = lVar1;
      func_0x00010c09dd00();
      _objc_retainAutoreleasedReturnValue();
      lStack_180 = unaff_x26;
      func_0x00010c0c6080();
      _objc_retainAutoreleasedReturnValue();
      lStack_188 = unaff_x26;
      func_0x00010bf0ed00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = unaff_x26;
      func_0x00010c078420();
      uStack_18c = (undefined4)lVar4;
      puVar5 = puVar3;
      func_0x00010bf51e00(puVar3);
      if (lVar15 == 0) {
        lStack_1b0 = 0;
        func_0x00010c005100(puVar18,param_2,lVar2,uStack_178,lVar11,lVar17,uStack_18c,puVar5);
      }
      else {
        lVar4 = lVar15;
        func_0x00010c244240();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar4;
        lStack_1a0 = lVar17;
        func_0x0001085db128();
        _objc_retainAutoreleasedReturnValue();
        lStack_1b0 = lVar13;
        lStack_198 = unaff_x28;
        func_0x00010c005100(puVar18,param_2,lVar2,uStack_178,lVar11,lStack_1a0,uStack_18c,puVar5);
        unaff_x28 = lStack_198;
        _objc_release(lVar13);
        _objc_release(lVar4);
      }
      param_1 = lStack_148;
      _objc_release(puVar5);
      _objc_release(unaff_x26);
      _objc_release(lStack_188);
      _objc_release(lStack_180);
      _objc_release(lStack_170);
      _objc_release(lStack_168);
      _objc_release(lStack_160);
      _objc_release(lStack_158);
      _objc_release(lStack_150);
      _objc_release(unaff_x28);
      _objc_release(lVar2);
    }
    _objc_release(puVar3);
    _objc_release(lVar15);
    param_3 = puStack_138;
    lVar11 = lStack_140;
  }
  _objc_release(lVar1);
  puVar12 = *(undefined **)(param_1 + 0x18);
  puVar3 = param_3;
  func_0x00010bf4e8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar12,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar12;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar3);
  if ((puVar5 != puVar18) &&
     (puVar6 = puVar5, func_0x00010c071ae0(puVar5,param_2,puVar18), ((ulong)puVar6 & 1) == 0)) {
    puVar6 = param_3;
    func_0x00010bf4e8a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      if (puVar18 == (undefined *)0x0) {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,0,puVar6);
      }
      else {
        puVar12 = PTR_PTR_1126b60f8;
        func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,param_3,puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar12,puVar6);
        _objc_release(puVar12);
      }
      func_0x00010be65160(param_1);
      _objc_release(puVar6);
      puVar3 = puVar6;
    }
  }
  _objc_release(puVar5);
  _objc_release(puVar18);
  _objc_release(lVar1);
  lVar2 = lVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_1085dbf08;
  lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_210 = unaff_x28;
  lStack_208 = param_1;
  lStack_200 = unaff_x26;
  puStack_1f8 = puVar18;
  lStack_1f0 = lVar11;
  puStack_1e8 = param_3;
  lStack_1e0 = lVar1;
  puStack_1d8 = puVar3;
  puStack_1d0 = puVar5;
  puStack_1c8 = puVar12;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lVar11 = *(long *)(lVar2 + 0x10);
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010bf52a60(lVar11,param_2,&uStack_2e0,auStack_2a0,0x10);
  if (lVar1 != 0) {
    lVar15 = *plStack_2d0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_2d0 != lVar15) {
          _objc_enumerationMutation(lVar11);
        }
        lVar16 = *(long *)(lStack_2d8 + lVar17 * 8);
        lVar4 = lVar16;
        func_0x00010bf50280(lVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(lVar16);
        lVar13 = lVar16;
        func_0x00010bef0500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar13 == 0) {
          puVar18 = (undefined *)0x0;
        }
        else {
          lVar13 = lVar16;
          func_0x00010bef0500();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar13;
          func_0x00010c11af40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar7 == 0) {
            puVar18 = (undefined *)0x0;
          }
          else {
            lVar7 = lVar13;
            func_0x00010c11af40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010bf1f3c0();
            uVar9 = 1;
            if ((int)lVar8 != 0) {
              uVar9 = 2;
            }
            _objc_release(lVar7);
            lVar7 = lVar13;
            func_0x00010c09dde0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar7 == 0) {
              uVar19 = 0;
            }
            else {
              lVar7 = lVar13;
              func_0x00010c09dde0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010bf1f3c0();
              uVar19 = 1;
              if ((int)lVar8 != 0) {
                uVar19 = 2;
              }
              _objc_release(lVar7);
            }
            lVar7 = lVar13;
            func_0x00010bf28720();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar3 = (undefined *)0x0;
            if (lVar7 != 0) {
              puVar3 = PTR_PTR_1126da548;
              _objc_alloc();
              lVar7 = lVar13;
              func_0x00010bf28720(lVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c05ac00(puVar3,param_2,lVar7);
              _objc_release(lVar7);
            }
            lVar7 = lVar13;
            func_0x00010bf28720();
            _objc_retainAutoreleasedReturnValue();
            if (lVar7 == 0) {
LAB_1085dc14c:
              lVar7 = lVar13;
              func_0x00010c09dde0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar7 == 0) {
                lVar7 = lVar13;
                func_0x00010c11af40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar7 != 0) {
                  uVar14 = 2;
                  goto LAB_1085dc1cc;
                }
              }
              else {
                _objc_release();
              }
              lVar7 = lVar13;
              func_0x00010bf28720();
              _objc_retainAutoreleasedReturnValue();
              if (lVar7 == 0) {
                lVar7 = lVar13;
                func_0x00010c11af40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                uVar14 = 0;
                if (lVar7 != 0) {
                  uVar14 = 4;
                }
              }
              else {
                _objc_release();
                uVar14 = 0;
              }
            }
            else {
              lVar8 = lVar13;
              func_0x00010c09dde0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar7);
              if (lVar8 == 0) goto LAB_1085dc14c;
              uVar14 = 1;
            }
LAB_1085dc1cc:
            puVar18 = PTR_PTR_1126da550;
            _objc_alloc();
            lVar7 = lVar13;
            func_0x00010c129b80(lVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c0b8600();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c005100(puVar18,param_2,lVar4,uVar14,uVar9,uVar19,0,lVar8,puVar3);
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(puVar3);
          }
          _objc_release(lVar13);
        }
        _objc_release(lVar16);
        _objc_release(lVar4);
        if (puVar18 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar6,param_2,puVar18,lVar4);
        }
        _objc_release(puVar18);
        _objc_release(lVar4);
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_2e0,auStack_2a0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  puVar18 = puVar6;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined **)(lVar2 + 0x20) = puVar18;
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_220) {
    ___stack_chk_fail();
    return (undefined *)(ulong)(byte)puVar6[0x50];
  }
  return puVar6;
}



/* Entry: 1085dbf08; end: 1085dc31f; -[SCCallStateProvider _updatePresencePlatformActiveConvo] */

undefined * FUN_1085dbf08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
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
  lVar9 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar12 = *(long *)(lStack_128 + lVar15 * 8);
        lVar3 = lVar12;
        func_0x00010bf50280(lVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(lVar12);
        lVar4 = lVar12;
        func_0x00010bef0500();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          lVar4 = lVar12;
          func_0x00010bef0500();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c11af40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 == 0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            lVar5 = lVar4;
            func_0x00010c11af40();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bf1f3c0();
            uVar8 = 1;
            if ((int)lVar6 != 0) {
              uVar8 = 2;
            }
            _objc_release(lVar5);
            lVar5 = lVar4;
            func_0x00010c09dde0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar5 == 0) {
              uVar14 = 0;
            }
            else {
              lVar5 = lVar4;
              func_0x00010c09dde0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010bf1f3c0();
              uVar14 = 1;
              if ((int)lVar6 != 0) {
                uVar14 = 2;
              }
              _objc_release(lVar5);
            }
            lVar5 = lVar4;
            func_0x00010bf28720();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar7 = (undefined *)0x0;
            if (lVar5 != 0) {
              puVar7 = PTR_PTR_1126da548;
              _objc_alloc();
              lVar5 = lVar4;
              func_0x00010bf28720(lVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c05ac00(puVar7,param_2,lVar5);
              _objc_release(lVar5);
            }
            lVar5 = lVar4;
            func_0x00010bf28720();
            _objc_retainAutoreleasedReturnValue();
            if (lVar5 == 0) {
LAB_1085dc14c:
              lVar5 = lVar4;
              func_0x00010c09dde0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 == 0) {
                lVar5 = lVar4;
                func_0x00010c11af40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar5 != 0) {
                  uVar11 = 2;
                  goto LAB_1085dc1cc;
                }
              }
              else {
                _objc_release();
              }
              lVar5 = lVar4;
              func_0x00010bf28720();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 == 0) {
                lVar5 = lVar4;
                func_0x00010c11af40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                uVar11 = 0;
                if (lVar5 != 0) {
                  uVar11 = 4;
                }
              }
              else {
                _objc_release();
                uVar11 = 0;
              }
            }
            else {
              lVar6 = lVar4;
              func_0x00010c09dde0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar5);
              if (lVar6 == 0) goto LAB_1085dc14c;
              uVar11 = 1;
            }
LAB_1085dc1cc:
            puVar13 = PTR_PTR_1126da550;
            _objc_alloc();
            lVar5 = lVar4;
            func_0x00010c129b80(lVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c0b8600();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c005100(puVar13,param_2,lVar3,uVar11,uVar8,uVar14,0,lVar6,puVar7);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(puVar7);
          }
          _objc_release(lVar4);
        }
        _objc_release(lVar12);
        _objc_release(lVar3);
        if (puVar13 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar1,param_2,puVar13,lVar3);
        }
        _objc_release(puVar13);
        _objc_release(lVar3);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puVar13 = puVar1;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar13;
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return (undefined *)(ulong)(byte)puVar1[0x50];
  }
  return puVar1;
}



/* Entry: 1085dc320; end: 1085dc327; -[SCCallStateProvider hasAnyCallingActivity] */

undefined1 FUN_1085dc320(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1085dc328; end: 1085dc32f; -[SCCallStateProvider isParticipatingInAnyCall] */

undefined1 FUN_1085dc328(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 1085dc330; end: 1085dc3af; -[SCCallStateProvider .cxx_destruct] */

void FUN_1085dc330(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1085dc3b0; end: 1085dc3b7; -[SCContinueUserActivityHandlerCallPlugin uniquePluginType] */

undefined8 FUN_1085dc3b0(void)

{
  return 2;
}



/* Entry: 1085dc3b8; end: 1085dc5a3; -[SCContinueUserActivityHandlerCallPlugin processEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085dc3b8(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar2;
  
  uVar2 = param_3;
  _objc_retain();
  iVar1 = (int)uVar2;
  FUN_108614d48();
  puVar3 = PTR__OBJC_CLASS___NSUserActivity_1126b27c0;
  if (iVar1 == 0) {
    uVar6 = 3;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar4 = uVar2;
    func_0x00010bf27f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar7 = (long)_DAT_1127770dc;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    if (uVar4 == 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bfd5980();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf27f60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06dba0(uVar2);
      if ((int)uVar5 == 0) {
        func_0x00010c1335e0(uVar6);
      }
      else {
        func_0x00010c0dd3c0();
      }
      _objc_release(uVar4);
    }
    else {
      _objc_retain(uVar6);
      func_0x00010c06dba0();
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127770e0);
      uVar4 = uVar2;
      func_0x00010bf27f80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar6);
      func_0x00010c13abc0(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar6 = 1;
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1085dc5a4; end: 1085dc607;  */

void FUN_1085dc5a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1335e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085dc608; end: 1085dc647; -[SCContinueUserActivityHandlerCallPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085dc608(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127770e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127770dc,0);
  return;
}



/* Entry: 1085dc648; end: 1085dc6eb; -[SCIncomingCallRequestTSBridge initWithIncomingCallRequestSubject:identityServices:] */

undefined1 *
FUN_1085dc648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcfd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085dc6ec; end: 1085dc84b; -[SCIncomingCallRequestTSBridge onIncomingCallRequestReceivedWithRequest:] */

void FUN_1085dc6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0748c0();
  if ((int)uVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c15df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_2;
    _objc_retain(param_3);
    func_0x00010bf2d2e0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010be07dc0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085dc84c; end: 1085dc887;  */

void FUN_1085dc84c(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be07dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1085dc888; end: 1085dc98b; -[SCIncomingCallRequestTSBridge _emitIncomingCallRequest:] */

void FUN_1085dc888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126da558;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  uVar3 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c083140();
  uVar1 = 1;
  if ((int)uVar4 != 0) {
    uVar1 = 2;
  }
  uVar4 = param_3;
  func_0x00010c15df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0f6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0748c0(param_3);
  _objc_release(param_3);
  func_0x00010c005140(puVar2,param_2,uVar3,uVar1,uVar4,uVar5,uVar6,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085dc98c; end: 1085dc9bb; -[SCIncomingCallRequestTSBridge .cxx_destruct] */

void FUN_1085dc98c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085dc9bc; end: 1085dcba7; -[SCPipCallSessionImpl initWithSessionWrapper:identityServices:cameraServices:] */

undefined1 *
FUN_1085dc9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126fcfe0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    uVar6 = param_3;
    func_0x00010bf59a00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar6;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    puVar2 = PTR_PTR_1126da418;
    _objc_alloc(PTR_PTR_1126da418);
    puVar3 = (undefined1 *)((long)puVar1 + 8);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04bde0(puVar2);
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = 0;
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar6);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x40));
    func_0x00010bef9980(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085dcba8; end: 1085dcdc3; -[SCPipCallSessionImpl pipInfoObservable] */

void FUN_1085dcba8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar11 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf50700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bf50700(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar11 = *(undefined **)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010c09de20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + 8;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c0f4a20();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    lVar10 = lVar9;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    FUN_1085b7fa0(puVar11,lVar5,lVar6,uVar1,lVar7,lVar9,uVar12,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1085dcdc4; end: 1085dce6f;  */

void FUN_1085dcdc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf517c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085dce70; end: 1085dcecf; -[SCPipCallSessionImpl lensToRestore] */

void FUN_1085dce70(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c097660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085dced0; end: 1085dcf07; -[SCPipCallSessionImpl cameraType] */

long FUN_1085dced0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b540();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1085dcf08; end: 1085dcf87; -[SCPipCallSessionImpl hasLocalVideoPublishIntent] */

bool FUN_1085dcf08(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3 != 0;
}



/* Entry: 1085dcf88; end: 1085dcf8f; -[SCPipCallSessionImpl isStashed] */

undefined1 FUN_1085dcf88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 1085dcf90; end: 1085dcfd7; -[SCPipCallSessionImpl setIsStashed:] */

void FUN_1085dcf90(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x38) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085dcfd8; end: 1085dd01f; -[SCPipCallSessionImpl activateForIsInAppPip:] */

void FUN_1085dcfd8(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_3 == 0) {
    uVar1 = 2;
  }
  func_0x00010c21b2e0(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb3300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085dd020; end: 1085dd05f; -[SCPipCallSessionImpl background] */

void FUN_1085dd020(long param_1,undefined8 param_2)

{
  func_0x00010c21b2e0(*(undefined8 *)(param_1 + 0x10),param_2,3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb3300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085dd060; end: 1085dd09b; -[SCPipCallSessionImpl setLocalVideoPaused:] */

void FUN_1085dd060(long param_1)

{
  func_0x00010c1b2500(*(undefined8 *)(param_1 + 0x10));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb3300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085dd09c; end: 1085dd0eb; -[SCPipCallSessionImpl dispose] */

void FUN_1085dd09c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c06a220();
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085dd0ec; end: 1085dd14f; -[SCPipCallSessionImpl createVideoViewWithType:] */

void FUN_1085dd0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da428;
  _objc_alloc(PTR_PTR_1126da428);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c03e240(puVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085dd150; end: 1085dd1c3; -[SCPipCallSessionImpl onUserVideoStreamVisibilityChanged:] */

void FUN_1085dd150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da560;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c062500();
  _objc_release(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15d8e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085dd1c4; end: 1085dd1cf; -[SCPipCallSessionImpl sessionWrapper:updatedState:] */

void FUN_1085dd1c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,param_4);
  return;
}



/* Entry: 1085dd1d0; end: 1085dd1db; -[SCPipCallSessionImpl sessionWrapper:updatedUsersTalking:] */

void FUN_1085dd1d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_next__112614028,param_4);
  return;
}



/* Entry: 1085dd1dc; end: 1085dd23b; -[SCPipCallSessionImpl .cxx_destruct] */

void FUN_1085dd1dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1085dd23c; end: 1085dd28f; -[SCPlatformActiveConversationsInfoObservableProvider platformActiveConversationsInfoObservable] */

void FUN_1085dd23c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1085dd290; end: 1085dd403; -[SCPlatformActiveConversationsInfoObservableProvider initWithActiveUserScopedValdiRuntimeServices:errorReporter:performer:] */

undefined8 *
FUN_1085dd290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fcfe8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085dd404; end: 1085dd463;  */

void FUN_1085dd404(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010bdecde0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085dd464; end: 1085dd51b; -[SCPlatformActiveConversationsInfoObservableProvider _createDeferredPlatformActiveConversationsInfoObservable] */

void FUN_1085dd464(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085dd51c; end: 1085dd57b;  */

void FUN_1085dd51c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010bdf1720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085dd57c; end: 1085dd5d3; -[SCPlatformActiveConversationsInfoObservableProvider _createPlatformActiveConversationsInfoObservableFuture] */

void FUN_1085dd57c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  func_0x00010be9b9e0(param_1,param_2,puVar1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085dd5d4; end: 1085dd71b; -[SCPlatformActiveConversationsInfoObservableProvider _scheduleValdiRuntimeAccessWithPromise:] */

void FUN_1085dd5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bdea0;
  func_0x00010bef0740(PTR_PTR_1126bdea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aeec0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf0caa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085dd71c; end: 1085dd79b;  */

void FUN_1085dd71c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((param_2 & 1) == 0) && (lVar1 != 0)) {
    func_0x00010bdc3ee0(lVar1);
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085dd79c; end: 1085dd8b3; -[SCPlatformActiveConversationsInfoObservableProvider _accessValdiRuntimeAndCompletePromise:] */

void FUN_1085dd79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c295440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9d00(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085dd8b4; end: 1085dd943;  */

void FUN_1085dd8b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bdf0ae0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085dd944; end: 1085dda43; -[SCPlatformActiveConversationsInfoObservableProvider _createObservableWithJSRuntime:promise:] */

void FUN_1085dd944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126da568;
  func_0x00010bfbc0e0(PTR_PTR_1126da568,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc8dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(param_4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085dda44; end: 1085ddb93; -[SCPlatformActiveConversationsInfoObservableProvider _handleObservableCreationException:promise:] */

void FUN_1085dda44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c121ea0();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = param_3;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c133800(*(undefined8 *)(param_1 + 0x10));
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  uStack_58 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf43ca0(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1085ddb94;
  puStack_90 = puVar2;
  puStack_88 = puVar3;
  puStack_80 = puVar1;
  uStack_78 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_98,puVar4);
  func_0x00010bdf1740(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bfbc400(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  puVar3 = puVar1;
  func_0x00010bfb2660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085ddb94; end: 1085ddc97; -[SCPlatformActiveConversationsInfoObservableProvider _createPlatformActiveConversationsInfoObservable] */

void FUN_1085ddb94(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bdf1740(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bfbc400(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  puVar2 = puVar1;
  func_0x00010bfb2660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085ddc98; end: 1085ddd1b;  */

void FUN_1085ddc98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010be2d1c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085ddd1c; end: 1085dde63; -[SCPlatformActiveConversationsInfoObservableProvider _handleObservableResult:] */

void FUN_1085ddd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x3032000000;
  pcStack_50 = FUN_1085dde64;
  uStack_48 = 0x1085dde74;
  uStack_40 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1085dde7c;
  puStack_78 = &UNK_110a5a0f0;
  puStack_60 = puStack_70;
  _objc_copyWeak(auStack_98,auStack_38);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_60[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_68,8);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085dde64; end: 1085dde7b;  */

void FUN_1085dde64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1085dde7c; end: 1085ddeb3;  */

void FUN_1085dde7c(long param_1,undefined8 param_2)

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



/* Entry: 1085ddeb4; end: 1085ddf43;  */

void FUN_1085ddeb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010be2d1a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085ddf44; end: 1085ddfcb; -[SCPlatformActiveConversationsInfoObservableProvider _handleObservableError:] */

void FUN_1085ddf44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee5178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085ddfcc; end: 1085ddffb; -[SCPlatformActiveConversationsInfoObservableProvider setPlatformActiveConversationsInfoObservable:] */

void FUN_1085ddfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085ddffc; end: 1085de04f; -[SCPlatformActiveConversationsInfoObservableProvider .cxx_destruct] */

void FUN_1085ddffc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085de050; end: 1085de1a3; -[SCPlatformPresenceServiceProvider initWithActiveUserScopedValdiRuntimeServices:performer:] */

undefined8 *
FUN_1085de050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fcff0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcfa0(puVar1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085de1a4; end: 1085de1f3;  */

void FUN_1085de1a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf1780(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1085de1f4; end: 1085de32b; -[SCPlatformPresenceServiceProvider _createPlatformPresenceServiceFuture] */

void FUN_1085de1f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c295440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = param_2;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9d00(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085de32c; end: 1085de43b;  */

void FUN_1085de32c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126da570;
    func_0x00010bfbc0e0(PTR_PTR_1126da570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf57dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e3040(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085de43c; end: 1085de533;  */

void FUN_1085de43c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      _objc_opt_class();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar3);
    }
    else {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085de534; end: 1085de53b; -[SCPlatformPresenceServiceProvider platformPresenceServiceFuture] */

undefined8 FUN_1085de534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085de53c; end: 1085de56b; -[SCPlatformPresenceServiceProvider setPlatformPresenceServiceFuture:] */

void FUN_1085de53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085de56c; end: 1085de5a7; -[SCPlatformPresenceServiceProvider .cxx_destruct] */

void FUN_1085de56c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085de5a8; end: 1085de76f; -[SCPlatformPresenceSession initWithPlatformPresenceSession:platformUserActionSubject:crashLogger:] */

undefined8 *
FUN_1085de5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fcff8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c160460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c272160();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = puVar1[5];
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085de770; end: 1085de7c7;  */

void FUN_1085de770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085de7c8; end: 1085de957; -[SCPlatformPresenceSession _isDisposedForCommand:errorCode:messageDetail:] */

bool FUN_1085de7c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_5);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    if (param_5 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(param_3);
      puVar3 = PTR_PTR_1126b3e90;
      _objc_alloc_init(PTR_PTR_1126b3e90);
      func_0x00010b7ea784();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b3e98;
      func_0x00010bf60460(PTR_PTR_1126b3e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133420(uVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_5);
  return lVar7 == 0;
}



/* Entry: 1085de958; end: 1085de9bf; -[SCPlatformPresenceSession chatVisible] */

void FUN_1085de958(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3fc00(param_1,param_2,param_2,0x25a,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126da578;
  func_0x00010bf37aa0(PTR_PTR_1126da578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085de9c0; end: 1085dea27; -[SCPlatformPresenceSession chatHidden] */

void FUN_1085de9c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3fc00(param_1,param_2,param_2,0x25b,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126da578;
  func_0x00010bf36800(PTR_PTR_1126da578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085dea28; end: 1085dea8f; -[SCPlatformPresenceSession startPeeking] */

void FUN_1085dea28(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3fc00(param_1,param_2,param_2,0x25c,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126da578;
  func_0x00010c24fd60(PTR_PTR_1126da578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085dea90; end: 1085debe3; -[SCPlatformPresenceSession processTypingActivity:typingActivityType:] */

void FUN_1085dea90(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be3fc00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126da578;
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126da580;
  _objc_alloc(PTR_PTR_1126da580);
  func_0x00010c056420();
  func_0x00010c27e180(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085debe4; end: 1085dec4b; -[SCPlatformPresenceSession replyCameraVisible] */

void FUN_1085debe4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3fc00(param_1,param_2,param_2,0x25e,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126da578;
  func_0x00010c294c20(PTR_PTR_1126da578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085dec4c; end: 1085decb3; -[SCPlatformPresenceSession chatMediaVisible] */

void FUN_1085dec4c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3fc00(param_1,param_2,param_2,0x25f,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126da578;
  func_0x00010c29f2c0(PTR_PTR_1126da578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085decb4; end: 1085ded1b; -[SCPlatformPresenceSession extendChatMediaVisible] */

void FUN_1085decb4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3fc00(param_1,param_2,param_2,0x25f,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126da578;
  func_0x00010bf9da20(PTR_PTR_1126da578);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1085ded1c; end: 1085ded77; -[SCPlatformPresenceSession dispose] */

void FUN_1085ded1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf86d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1085ded78; end: 1085ded83; -[SCPlatformPresenceSession sessionStateObservable] */

void FUN_1085ded78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1085ded84; end: 1085ded8f; -[SCPlatformPresenceSession lastPlatformSessionState] */

void FUN_1085ded84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1085ded90; end: 1085dedef; -[SCPlatformPresenceSession .cxx_destruct] */

void FUN_1085ded90(long param_1)

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



/* Entry: 1085dedf0; end: 1085def3b;  */

void FUN_1085dedf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126da588;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27e300();
  func_0x00010c27e1c0(param_2);
  _objc_release(param_2);
  func_0x00010c05bc20(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085def3c; end: 1085def7b;  */

uint FUN_1085def3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1085def7c; end: 1085defc7;  */

void FUN_1085def7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da598;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c05ac00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085defc8; end: 1085df067;  */

void FUN_1085defc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085df068; end: 1085df13b;  */

void FUN_1085df068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ea0();
  _objc_release(uVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126da5a8;
    _objc_alloc(PTR_PTR_1126da5a8);
    uVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbdfa0(param_2);
    func_0x00010c05b320(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085df13c; end: 1085df1db;  */

void FUN_1085df13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085df1dc; end: 1085df23b; -[SCPresenceStateProvider init] */

undefined8 FUN_1085df1dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  func_0x00010c034960(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1085df23c; end: 1085df383; -[SCPresenceStateProvider initWithPerformer:] */

undefined1 * FUN_1085df23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fd000;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085df384; end: 1085df45b; -[SCPresenceStateProvider updateWithPresencePlatformActiveConversationsInfo:] */

void FUN_1085df384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


