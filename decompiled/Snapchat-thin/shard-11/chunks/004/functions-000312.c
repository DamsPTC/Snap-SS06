/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085f82e0; end: 1085f83fb;  */

undefined * FUN_1085f82e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x00010c27dd80();
        if (lVar2 == param_3) {
          puVar4 = (undefined *)0x1;
          goto LAB_1085f83b4;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  puVar4 = (undefined *)0x0;
LAB_1085f83b4:
  _objc_release(param_4);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126da720;
  _objc_alloc_init(PTR_PTR_1126da720);
  puVar3 = PTR_PTR_1126da578;
  _objc_alloc_init(PTR_PTR_1126da578);
  func_0x00010c17bec0();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 1085f83fc; end: 1085f8447; +[SCCPresencePlatformUserAction chatVisibleAction] */

void FUN_1085f83fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da720;
  _objc_alloc_init(PTR_PTR_1126da720);
  puVar2 = PTR_PTR_1126da578;
  _objc_alloc_init(PTR_PTR_1126da578);
  func_0x00010c17bec0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085f8448; end: 1085f8493; +[SCCPresencePlatformUserAction chatHiddenAction] */

void FUN_1085f8448(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da728;
  _objc_alloc_init(PTR_PTR_1126da728);
  puVar2 = PTR_PTR_1126da578;
  _objc_alloc_init(PTR_PTR_1126da578);
  func_0x00010c17b5c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085f8494; end: 1085f84df; +[SCCPresencePlatformUserAction startPeekingAction] */

void FUN_1085f8494(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da730;
  _objc_alloc_init(PTR_PTR_1126da730);
  puVar2 = PTR_PTR_1126da578;
  _objc_alloc_init(PTR_PTR_1126da578);
  func_0x00010c209720();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085f84e0; end: 1085f852b; +[SCCPresencePlatformUserAction typingAction:] */

void FUN_1085f84e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da578;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21adc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085f852c; end: 1085f8577; +[SCCPresencePlatformUserAction usingReplyCameraAction] */

void FUN_1085f852c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da738;
  _objc_alloc_init(PTR_PTR_1126da738);
  puVar2 = PTR_PTR_1126da578;
  _objc_alloc_init(PTR_PTR_1126da578);
  func_0x00010c21fb60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085f8578; end: 1085f85c3; +[SCCPresencePlatformUserAction viewingChatMediaAction] */

void FUN_1085f8578(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da740;
  _objc_alloc_init(PTR_PTR_1126da740);
  puVar2 = PTR_PTR_1126da578;
  _objc_alloc_init(PTR_PTR_1126da578);
  func_0x00010c223220();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085f85c4; end: 1085f872b; +[SCCPresencePlatformUserAction extendChatMediaVisibleAction] */

void FUN_1085f85c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da748;
  _objc_alloc_init(PTR_PTR_1126da748);
  puVar2 = PTR_PTR_1126da578;
  _objc_alloc_init(PTR_PTR_1126da578);
  func_0x00010c199180();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085f872c; end: 1085f87fb;  */

void FUN_1085f872c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126da618;
  puVar4 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    lVar2 = param_1;
    func_0x00010bf0ed00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078420();
    lVar3 = param_1;
    func_0x00010c299160(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bff51e0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c1f6e20(puVar1);
    _objc_release(param_2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085f87fc; end: 1085f8853;  */

void FUN_1085f87fc(void)

{
  _objc_alloc(PTR_PTR_1126da750);
  func_0x00010c00d6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085f8854; end: 1085f8bb3; -[SCTAudioManagerImpl initWithAudioServices:mutableAudioSession:grapheneLogger:delegate:applicationLifecycleEvents:] */

undefined8 *
FUN_1085f8854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126fd0c0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar7 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 4,param_6);
    puVar1[5] = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126da758;
    _objc_alloc_init();
    uVar7 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126da760;
    _objc_alloc_init();
    uVar7 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    _objc_release(uVar7);
    _objc_initWeak(auStack_88,puVar1);
    uVar7 = param_7;
    func_0x00010c2a6420(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1085f8bb4;
    puStack_98 = &UNK_110846510;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar3 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar7);
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x1085f8bec;
    puStack_c0 = &UNK_11084d688;
    _objc_copyWeak(auStack_b8,auStack_88);
    ppuVar4 = &puStack_d8;
    _objc_retainBlock(ppuVar4);
    puVar2 = PTR_PTR_1126da4a8;
    _objc_alloc();
    func_0x00010c050dc0();
    uVar7 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar7);
    puVar5 = puVar1 + 2;
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175c80();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085f8bb4; end: 1085f8c4f;  */

void FUN_1085f8bb4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be67b80(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f8c50; end: 1085f8c77; -[SCTAudioManagerImpl audioState] */

void FUN_1085f8c50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085f8c78; end: 1085f8ce7; -[SCTAudioManagerImpl selectAudioDevice:] */

void FUN_1085f8c78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c28bbe0(*(undefined8 *)(param_1 + 0x78));
  func_0x00010bf99980(*(undefined8 *)(param_1 + 0x78),param_2,1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf9c320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf08140(lVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085f8ce8; end: 1085f8cf3; -[SCTAudioManagerImpl setDelegate:] */

void FUN_1085f8ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1085f8cf4; end: 1085f8df3; -[SCTAudioManagerImpl sessionWrapper:updatedState:] */

void FUN_1085f8cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1085f8df4;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f8df4; end: 1085f8e27;  */

void FUN_1085f8df4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea17e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f8e28; end: 1085f9197; -[SCTAudioManagerImpl _sessionWrapper:updatedState:] */

void FUN_1085f8e28(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong unaff_x25;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf282e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010be91800(param_1,param_2,param_3);
  func_0x00010be81d20(param_1,param_2,param_3);
  uVar2 = param_4;
  func_0x00010c121ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010beb4c60(param_1,param_2,uVar2);
  *(char *)(param_1 + 0x50) = (char)lVar6;
  _objc_release(uVar2);
  iVar8 = (int)uVar3;
  if ((iVar8 == 4) || (iVar8 == 1)) {
    uVar4 = param_3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0c6080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(ulong *)(param_1 + 0x78);
    func_0x00010c09e120();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != uVar4) {
      func_0x00010c2875c0(*(undefined8 *)(param_1 + 0x78),param_2,uVar2);
      uVar3 = uVar4;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar3 = uVar2;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010bf4b900(uVar7,param_2,param_3);
          if ((int)uVar7 != 0) {
            func_0x00010bed07c0(param_1);
          }
        }
      }
      else {
        _objc_release();
      }
    }
    if (uVar4 == 0) {
      func_0x00010bddcaa0(param_1,param_2,0);
    }
    unaff_x25 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf4b900(unaff_x25,param_2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
    if ((unaff_x25 & 1) == 0) {
      unaff_x25 = *(ulong *)(param_1 + 0x98);
      uVar3 = param_3;
      func_0x00010c2688a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf4e8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43980(unaff_x25,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  if ((iVar8 == 4) || (iVar8 == 1)) {
    uVar2 = param_4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = uVar4;
    func_0x00010c0c6080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x25;
    func_0x0001085f8610();
    bVar1 = uVar3 == 1;
  }
  else {
    bVar1 = false;
  }
  if ((((iVar8 == 4) || (iVar8 == 1)) && ((_objc_release(unaff_x25), iVar8 == 4 || (iVar8 == 1))))
     && ((_objc_release(uVar4), iVar8 == 4 || (iVar8 == 1)))) {
    _objc_release(uVar2);
  }
  if (bVar1) {
    func_0x00010befa120();
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  }
  if (iVar8 == 4) {
    func_0x00010befa120();
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  }
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x98);
    func_0x00010c0c6b80();
    func_0x00010c139720(*(undefined8 *)(param_1 + 0x78));
    *(undefined1 *)(param_1 + 0x90) = 0;
    if (lVar6 != 0) {
      func_0x00010c2840a0(*(undefined8 *)(param_1 + 0x78),param_2,lVar6);
    }
    func_0x00010c0dbb00(*(undefined8 *)(param_1 + 0x98));
    func_0x00010bede260(param_1,param_2,0);
  }
  func_0x00010be917e0(param_1,param_2,param_3);
  func_0x00010c0f8c00(*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085f9198; end: 1085f921f; -[SCTAudioManagerImpl _turnOnSpeakerBecauseOfChangingToVideoCall] */

void FUN_1085f9198(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c06fcc0();
  if (iVar1 != 0) {
    func_0x00010c28bc00(*(undefined8 *)(param_1 + 0x78));
    func_0x00010bf99980(*(undefined8 *)(param_1 + 0x78),param_2,0);
    *(undefined1 *)(param_1 + 0x90) = 0;
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf9c320(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08140(lVar2,param_2,uVar3,0);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1085f9220; end: 1085f926f; -[SCTAudioManagerImpl callKitIncomingCallStarted:] */

void FUN_1085f9220(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar1;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c285230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x78),PTR_s_updateDidReceiveFromCallKit__11267eeb0,1);
    return;
  }
  return;
}



/* Entry: 1085f9270; end: 1085f939f; -[SCTAudioManagerImpl requestCallKitAudioSessionWithCompletion:] */

void FUN_1085f9270(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 1) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c1624a0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085f93a0; end: 1085f93d3;  */

void FUN_1085f93a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f93d4; end: 1085f9413; -[SCTAudioManagerImpl releaseCallKitAudioSession] */

void FUN_1085f93d4(long param_1,undefined8 param_2)

{
  func_0x00010c285220(*(undefined8 *)(param_1 + 0x78),param_2,0);
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed3610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateAudioSessionConfig_isForC_112592728,0,1,0);
  return;
}



/* Entry: 1085f9414; end: 1085f9567; -[SCTAudioManagerImpl callKitDidActivateAudioSession:] */

void FUN_1085f9414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28000();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1085f94f0;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f9568; end: 1085f95cf; -[SCTAudioManagerImpl callKitWillDeactivateAudioSession:] */

void FUN_1085f9568(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28080();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f95d0; end: 1085f9633; -[SCTAudioManagerImpl recordOutgoingCallStartMedia:forTalkContextId:] */

undefined8 FUN_1085f95d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  func_0x00010c2840a0(uVar1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c123500(uVar1,param_2,param_3,param_4);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 1085f9634; end: 1085f966f; -[SCTAudioManagerImpl withdrawOutgoingCallStartMediaWithToken:] */

void FUN_1085f9634(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
  func_0x00010c2bd2c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2840b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x78),PTR_s_updateCallStartMedia__11267ea50,0);
    return;
  }
  return;
}



/* Entry: 1085f9670; end: 1085f973b; -[SCTAudioManagerImpl _clearSpeakerOverrideMarkerForFailedApplyWithGeneration:] */

void FUN_1085f9670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1085f9700;
  puStack_40 = &UNK_110846540;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085f973c; end: 1085f9793; -[SCTAudioManagerImpl audioSessionDidBeginCallInterruption:] */

void FUN_1085f973c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1085f9794;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bcbe2c4("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1085f9794; end: 1085f97c7;  */

void FUN_1085f9794(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c175ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085f97c8; end: 1085f981f; -[SCTAudioManagerImpl audioSessionDidEndCallInterruption:] */

void FUN_1085f97c8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1085f9820;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1085f9820; end: 1085f9853;  */

void FUN_1085f9820(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c175ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085f9854; end: 1085f9a27; -[SCTAudioManagerImpl audioSessionRouteDidChange:notification:] */

void FUN_1085f9854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2827c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf5e0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010bf129a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_initWeak(auStack_58,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1085f9a28;
  puStack_88 = &UNK_110871ae8;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_80 = uVar2;
  lStack_78 = lVar5;
  lStack_70 = lVar6;
  uStack_60 = uVar3;
  func_0x000107c312cc("APPSTORE",&puStack_a0);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f9a28; end: 1085f9a63;  */

void FUN_1085f9a28(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be674a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f9a64; end: 1085f9b0f; -[SCTAudioManagerImpl _onAppWillEnterForegroundChangeRouteIfNeeded] */

void FUN_1085f9a64(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010c2851e0(*(undefined8 *)(param_1 + 0x78),param_2,1);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010be41d00(param_1);
  func_0x00010c285200(uVar4);
  uVar2 = *(ulong *)(param_1 + 0x78);
  func_0x00010bf129a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (2 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c06fcc0();
  _objc_release(uVar2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddcab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__changeRouteIfNeeded__112554c48,0);
    return;
  }
  return;
}



/* Entry: 1085f9b10; end: 1085f9bcf; -[SCTAudioManagerImpl _onAppWillEnterForeground:] */

void FUN_1085f9b10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010be41100();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be67bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onAppWillEnterForegroundChangeR_112577888)
    ;
    return;
  }
  uVar1 = param_1;
  func_0x00010be33c80();
  if ((int)uVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1085f9ba0;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 1085f9bd0; end: 1085f9e5b; -[SCTAudioManagerImpl _onAVAudioSessionRouteChangedWithReason:previousRoute:currentRoute:availableRoutes:] */

void FUN_1085f9bd0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c283a20(*(undefined8 *)(param_1 + 0x78));
  uVar1 = param_1;
  func_0x00010be41100();
  if (((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010be33c80(), (int)uVar1 != 0)) {
    func_0x00010bf99980(*(undefined8 *)(param_1 + 0x78));
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf07b60();
    uVar1 = param_1;
    func_0x00010be43480();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    if (*(char *)(param_1 + 0x90) == '\x01') {
      if ((uVar1 & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0x78);
        func_0x00010bef1a60();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c27dd80();
        if (lVar4 == 2) {
          uVar5 = *(undefined8 *)(param_1 + 0x78);
          func_0x00010bf9c320(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
          _objc_release(uVar5);
        }
        _objc_release(lVar3);
      }
      if (param_3 == 4) {
        *(undefined1 *)(param_1 + 0x90) = 0;
        puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010bef1a60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        _objc_release(uVar5);
        puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      }
    }
    PTR__OBJC_CLASS___NSNotificationCenter_1126aed48 = puVar2;
    if ((int)uVar1 == 0) {
      func_0x00010bf68fa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c104980();
      _objc_release(puVar2);
      func_0x00010bede260(param_1);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x78);
      func_0x00010bf9c320();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0xa0) + 1;
      *(long *)(param_1 + 0xa0) = lVar4;
      lVar3 = lVar6;
      func_0x00010c27dd80();
      *(bool *)(param_1 + 0x90) = lVar3 == 2;
      _objc_initWeak(auStack_58,param_1);
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      _objc_copyWeak(auStack_68,auStack_58);
      lStack_60 = lVar4;
      func_0x00010bf08140(lVar3);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar6);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1085f9e5c; end: 1085f9ea7;  */

void FUN_1085f9e5c(long param_1,ulong param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 & 1) == 0) && (param_1 != 0)) {
    func_0x00010bde0fc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f9ea8; end: 1085f9ee3; -[SCTAudioManagerImpl _hasEventJustHappenedForTimestamp:threshold:] */

bool FUN_1085f9ea8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  
  if (param_4 != 0) {
    dVar1 = param_1;
    func_0x00010c26f3a0(param_4);
    return -param_1 < dVar1;
  }
  return false;
}



/* Entry: 1085f9ee4; end: 1085f9eef; -[SCTAudioManagerImpl _hasCallKitIncomingCallJustStarted] */

void FUN_1085f9ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4000000000000000,param_1,PTR_s__hasEventJustHappenedForTimestam_11256a928,
             *(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 1085f9ef0; end: 1085fa01b; -[SCTAudioManagerImpl _isInCallOrCallingAccordingToTalkSession] */

bool FUN_1085f9ef0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long lVar18;
  bool bVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar18 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar18);
  lVar1 = lVar18;
  func_0x00010bf52a60(lVar18,param_2,&uStack_120,auStack_d8,0x10);
  bVar19 = false;
  if (lVar1 != 0) {
    lVar20 = *plStack_110;
    do {
      lVar21 = 0;
      do {
        if (*plStack_110 != lVar20) {
          _objc_enumerationMutation(lVar18);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar21 * 8);
        func_0x00010c09dd00();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar2;
        func_0x00010bf282e0();
        _objc_release(uVar2);
        if ((int)uVar17 == 1 || (int)uVar17 == 4) {
          bVar19 = true;
          goto LAB_1085f9fd8;
        }
        lVar21 = lVar21 + 1;
      } while (lVar1 != lVar21);
      lVar1 = lVar18;
      func_0x00010bf52a60(lVar18,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
    bVar19 = false;
  }
LAB_1085f9fd8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return bVar19;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar18 = *(long *)(lVar18 + 0x38);
  _objc_retain(lVar18);
  puVar16 = auStack_208;
  uVar17 = 0x10;
  lVar1 = lVar18;
  func_0x00010bf52a60();
  bVar19 = false;
  if (lVar1 != 0) {
    lVar20 = *plStack_240;
    do {
      lVar21 = 0;
      do {
        if (*plStack_240 != lVar20) {
          _objc_enumerationMutation(lVar18);
        }
        lVar3 = *(long *)(lStack_248 + lVar21 * 8);
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c09dd00();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0c6080();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar6 != 0) {
          bVar19 = true;
          goto LAB_1085fa13c;
        }
        lVar21 = lVar21 + 1;
      } while (lVar1 != lVar21);
      puVar16 = auStack_208;
      uVar17 = 0x10;
      lVar1 = lVar18;
      puVar15 = &uStack_250;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    bVar19 = false;
  }
LAB_1085fa13c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return bVar19;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
  uVar2 = *(undefined8 *)(lVar18 + 0x78);
  _objc_retain(uVar17);
  func_0x00010bf129a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cd00(puVar7,param_2,0,uVar2);
  _objc_release(uVar2);
  puVar14 = PTR_PTR_1126da770;
  uVar8 = *(undefined8 *)(lVar18 + 0x78);
  func_0x00010bef1a60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c27dd80();
  uVar9 = *(undefined8 *)(lVar18 + 0x78);
  func_0x00010bf9c320(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c27dd80();
  uVar11 = *(undefined8 *)(lVar18 + 0x78);
  func_0x00010bf129a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf529e0();
  uVar13 = uVar17;
  func_0x00010c0796e0(uVar17);
  _objc_release(uVar17);
  func_0x00010c137d00(puVar14,param_2,puVar15,puVar16,uVar2,uVar10,uVar12,uVar13,(char)puVar7);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  return puVar14 != (undefined *)0x0;
}



/* Entry: 1085fa01c; end: 1085fa183; -[SCTAudioManagerImpl _isMediaHavingVideo] */

bool FUN_1085fa01c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  bool bVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar14 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar17 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar17);
  puVar15 = auStack_e8;
  uVar16 = 0x10;
  lVar1 = lVar17;
  func_0x00010bf52a60();
  bVar18 = false;
  if (lVar1 != 0) {
    lVar20 = *plStack_120;
    do {
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar20) {
          _objc_enumerationMutation(lVar17);
        }
        lVar2 = *(long *)(lStack_128 + lVar21 * 8);
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c09dd00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0c6080();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar5 != 0) {
          bVar18 = true;
          goto LAB_1085fa13c;
        }
        lVar21 = lVar21 + 1;
      } while (lVar1 != lVar21);
      puVar15 = auStack_e8;
      uVar16 = 0x10;
      lVar1 = lVar17;
      puVar14 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    bVar18 = false;
  }
LAB_1085fa13c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar18;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
  uVar19 = *(undefined8 *)(lVar17 + 0x78);
  _objc_retain(uVar16);
  func_0x00010bf129a0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cd00(puVar6,param_2,0,uVar19);
  _objc_release(uVar19);
  puVar13 = PTR_PTR_1126da770;
  uVar7 = *(undefined8 *)(lVar17 + 0x78);
  func_0x00010bef1a60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar7;
  func_0x00010c27dd80();
  uVar8 = *(undefined8 *)(lVar17 + 0x78);
  func_0x00010bf9c320(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c27dd80();
  uVar10 = *(undefined8 *)(lVar17 + 0x78);
  func_0x00010bf129a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf529e0();
  uVar12 = uVar16;
  func_0x00010c0796e0(uVar16);
  _objc_release(uVar16);
  func_0x00010c137d00(puVar13,param_2,puVar14,puVar15,uVar19,uVar9,uVar11,uVar12,(char)puVar6);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  return puVar13 != (undefined *)0x0;
}



/* Entry: 1085fa184; end: 1085fa2d3; -[SCTAudioManagerImpl _isRerouteRequiredNativeSelector:routeChangeReason:previousRoute:] */

bool FUN_1085fa184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_5);
  func_0x00010bf129a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cd00(puVar1,param_2,0,uVar9);
  _objc_release(uVar9);
  puVar8 = PTR_PTR_1126da770;
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bef1a60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c27dd80();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf9c320(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27dd80();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf129a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  uVar7 = param_5;
  func_0x00010c0796e0(param_5);
  _objc_release(param_5);
  func_0x00010c137d00(puVar8,param_2,param_3,param_4,uVar9,uVar4,uVar6,uVar7,(char)puVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return puVar8 != (undefined *)0x0;
}



/* Entry: 1085fa2d4; end: 1085fa54f; -[SCTAudioManagerImpl _performUpdateWithCompletion:] */

void FUN_1085fa2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar5 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if ((lVar5 == 0) && (*(char *)(param_1 + 0x32) != '\x01')) {
    bVar1 = false;
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    bVar1 = true;
  }
  lVar5 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((bVar1) && (*(long *)(param_1 + 0x28) == 0)) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1085fa550;
    puStack_90 = &UNK_110a59b60;
    ppuVar6 = &puStack_a8;
    lStack_88 = param_1;
    uStack_80 = param_2;
    _objc_retainBlock(ppuVar6);
    func_0x00010befa120(puVar4);
    _objc_release(ppuVar6);
  }
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) && (lVar5 != 0)) {
    puStack_d8 = puVar3;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1085fa568;
    puStack_c0 = &UNK_110a59b60;
    ppuVar6 = &puStack_d8;
    lStack_b8 = param_1;
    uStack_b0 = param_2;
    _objc_retainBlock(ppuVar6);
    func_0x00010befa120(puVar4);
    _objc_release(ppuVar6);
  }
  puStack_108 = puVar3;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x1085fa5d8;
  puStack_f0 = &UNK_110a59b60;
  ppuVar6 = &puStack_108;
  lStack_e8 = param_1;
  uStack_e0 = param_2;
  _objc_retainBlock(ppuVar6);
  func_0x00010befa120(puVar4);
  _objc_release(ppuVar6);
  if ((*(char *)(param_1 + 0x31) == '\x01') && (lVar5 == 0)) {
    puStack_138 = puVar3;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x1085fa61c;
    puStack_120 = &UNK_110a59b60;
    ppuVar6 = &puStack_138;
    lStack_118 = param_1;
    uStack_110 = param_2;
    _objc_retainBlock(ppuVar6);
    func_0x00010befa120(puVar4);
    _objc_release(ppuVar6);
  }
  bVar1 = (bool)(bVar2 ^ 1);
  if (*(long *)(param_1 + 0x28) != 1) {
    bVar1 = true;
  }
  if (!bVar1) {
    puStack_168 = puVar3;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x1085fa694;
    puStack_150 = &UNK_110a59b60;
    ppuVar6 = &puStack_168;
    lStack_148 = param_1;
    uStack_140 = param_2;
    _objc_retainBlock(ppuVar6);
    func_0x00010befa120(puVar4);
    _objc_release(ppuVar6);
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
    puStack_198 = puVar3;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1085fa740;
    puStack_180 = &UNK_110a59b60;
    ppuVar6 = &puStack_198;
    lStack_178 = param_1;
    uStack_170 = param_2;
    _objc_retainBlock(ppuVar6);
    func_0x00010befa120(puVar4);
    _objc_release(ppuVar6);
  }
  FUN_1086179c0(puVar4,param_3);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085fa550; end: 1085fa567;  */

void FUN_1085fa550(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed3650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateAudioSessionConfigForNonC_112592738,
             param_2);
  return;
}



/* Entry: 1085fa568; end: 1085fa72b;  */

void FUN_1085fa568(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31) = 1;
  puVar1 = PTR_PTR_1126da390;
  func_0x00010c22ba80(PTR_PTR_1126da390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af400();
  _objc_release(puVar1);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085fa72c; end: 1085fa73f;  */

void FUN_1085fa72c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085fa738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085fa740; end: 1085fa79b;  */

void FUN_1085fa740(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0fe860();
  _objc_release(lVar1);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085fa79c; end: 1085fa843; -[SCTAudioManagerImpl _updateAudioSessionConfigForNonCallKit:] */

void FUN_1085fa79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085fa844;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  func_0x00010bed3600(param_1,param_2,1,0,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085fa844; end: 1085fa8c3;  */

void FUN_1085fa844(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1085fa8c4;
  puStack_28 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = uVar1;
  uStack_18 = uVar2;
  func_0x000100c749e0(0x3e4ccccd,"APPSTORE",&puStack_40);
  _objc_release(uStack_18);
  return;
}



/* Entry: 1085fa8c4; end: 1085fa8cf;  */

void FUN_1085fa8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateRoutesAndChangeRouteIfNee_1125954d8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085fa8d0; end: 1085fa8eb; -[SCTAudioManagerImpl _updateAudioSessionConfigForCallKitWithCompletion:] */

void FUN_1085fa8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined8 *)(param_1 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed3610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateAudioSessionConfig_isForC_112592728,1,1,param_3);
  return;
}



/* Entry: 1085fa8ec; end: 1085fa94f; -[SCTAudioManagerImpl _updateAudioSessionConfig:isForCallKit:completion:] */

void FUN_1085fa8ec(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2838c0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085fa950; end: 1085faa03; -[SCTAudioManagerImpl _updateProximityIfNeeded:] */

void FUN_1085fa950(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
    func_0x00010bef1a60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c27dd80();
    bVar1 = lVar2 == 1;
    _objc_release(lVar3);
  }
  if ((bool)*(char *)(param_1 + 0x30) == bVar1) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    *(bool *)(param_1 + 0x30) = bVar1;
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c288e60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085faa04; end: 1085faab7; -[SCTAudioManagerImpl _updateRoutesAndChangeRouteIfNeeded:] */

void FUN_1085faa04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf129a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf5e0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283a20(uVar4,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010bddcaa0(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1085faab8; end: 1085fac67; -[SCTAudioManagerImpl _changeRouteIfNeeded:] */

void FUN_1085faab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf99980(*(undefined8 *)(param_1 + 0x78));
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf9c320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bef1a60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x78);
    func_0x00010bf9c320();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0xa0) + 1;
    *(long *)(param_1 + 0xa0) = lVar1;
    lVar6 = lVar5;
    func_0x00010c27dd80();
    *(bool *)(param_1 + 0x90) = lVar6 == 2;
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_48);
    uStack_58 = param_2;
    lStack_50 = lVar1;
    _objc_retain(param_3);
    _objc_retain(lVar5);
    func_0x00010bf08140(param_1);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar5);
  }
  else {
    func_0x00010bede260(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085fac68; end: 1085facff;  */

void FUN_1085fac68(long param_1,ulong param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      func_0x00010bde0fc0(param_1);
    }
    else {
      func_0x00010c2833e0(*(undefined8 *)(param_1 + 0x78));
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c104980();
      _objc_release(puVar1);
    }
    func_0x00010bede260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085fad00; end: 1085fad43; -[SCTAudioManagerImpl _shouldLockRinging:] */

bool FUN_1085fad00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c09dd00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf282e0();
  _objc_release(param_3);
  return (int)uVar1 == 4;
}



/* Entry: 1085fad44; end: 1085fae2f; -[SCTAudioManagerImpl _requestRingingLock:] */

void FUN_1085fad44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf4e8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010beb4540(param_1,param_2,param_3);
      if ((int)lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar3 = param_1 + 8;
        _objc_loadWeakRetained(lVar3);
        lVar2 = lVar3;
        func_0x00010c09fca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,lVar2,lVar1);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085fae30; end: 1085faf03; -[SCTAudioManagerImpl _requestRingingUnlock:] */

void FUN_1085fae30(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf4e8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 != 0) &&
       (uVar3 = param_1, func_0x00010beb4540(param_1,param_2,param_3), (uVar3 & 1) == 0)) {
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c280d40();
      _objc_release(lVar4);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,0,lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085faf04; end: 1085fb17f; -[SCTAudioManagerImpl _processPlaybackOfRingingSound:] */

void FUN_1085faf04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) goto LAB_1085fb140;
  lVar1 = param_3;
  func_0x00010c09dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf282e0();
  _objc_release(lVar1);
  iVar6 = (int)lVar3;
  if (iVar6 < 3) {
    if (iVar6 == 0) goto LAB_1085faff8;
    if (iVar6 == 1) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      lVar1 = param_3;
      func_0x00010bf27f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf2c0();
      _objc_release(lVar1);
      if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
        _objc_storeWeak(param_1 + 0x58,param_3);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68));
      }
      __Block_object_dispose(&uStack_60,8);
      goto LAB_1085fb140;
    }
    if (iVar6 != 2) goto LAB_1085fb140;
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250400(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
  }
  else {
    if (1 < iVar6 - 3U) goto LAB_1085fb140;
LAB_1085faff8:
    _objc_storeWeak(param_1 + 0x58,0);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    if ((int)uVar4 == 0) goto LAB_1085fb140;
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256860(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
  }
  func_0x00010c1d0640(uVar4);
LAB_1085fb140:
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1085fb180; end: 1085fb19b;  */

void FUN_1085fb180(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 1085fb19c; end: 1085fb24b; -[SCTAudioManagerImpl _processPlaybackOfRingingSoundAfterEnablingAudioIfNeeded] */

void FUN_1085fb19c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  _objc_storeWeak(param_1 + 0x58,0);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c09dd00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf282e0();
    _objc_release(lVar2);
    if ((int)lVar3 == 1) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar2 = lVar1;
      func_0x00010c2688a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c250400(param_1);
      _objc_release(lVar2);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085fb24c; end: 1085fb30f; -[SCTAudioManagerImpl _shouldPlayHangupSoundForReason:] */

undefined1 FUN_1085fb24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bdc24c0(PTR_PTR_1126da430);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1085fb310; end: 1085fb333;  */

void FUN_1085fb310(long param_1,uint param_2)

{
  if (param_2 < 9) {
    *(undefined *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (&UNK_10df3627c)[param_2];
  }
  return;
}



/* Entry: 1085fb334; end: 1085fb3ef; -[SCTAudioManagerImpl .cxx_destruct] */

void FUN_1085fb334(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1085fb3f0; end: 1085fb48f; +[SCTAudioRerouteDecider rerouteReasonWithApplicationState:routeChangeReason:currentRouteType:expectedRouteType:availableRouteCount:previousRouteIsBluetoothOutput:bluetoothRouteAvailable:appInitiatedSpeakerOverrideInFlight:] */

undefined8
FUN_1085fb3f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
             long param_6,ulong param_7,byte param_8,uint param_9)

{
  byte bVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    if (((param_7 < 3) && ((param_5 & 0xfffffffffffffffd) == 1)) && (param_6 == 2)) {
      return 1;
    }
    if (((param_7 < 3) && (param_4 == 4)) &&
       ((param_6 == 1 && ((param_5 == 2 && ((param_9 & 0x100) != 0)))))) {
      return 2;
    }
  }
  else {
    bVar2 = param_5 == 1 && param_6 == 2;
    if ((param_4 == 2) && (bVar2)) {
      return 3;
    }
    bVar1 = 0;
    if (param_4 == 4) {
      bVar1 = param_8;
    }
    if (((param_9 & 1) == 0) && ((bVar2 & bVar1) != 0)) {
      return 4;
    }
  }
  return 0;
}



/* Entry: 1085fb490; end: 1085fb567;  */

uint FUN_1085fb490(int3 param_1,long param_2,int3 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0 && param_4 == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = param_2;
    func_0x00010bf4e8a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf4e8a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0(lVar2);
    uVar1 = (uint)lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return param_1 == param_3 & uVar1;
}



/* Entry: 1085fb568; end: 1085fb5bf; +[SCTAudioRouteRequest requestWithPriority:route:] */

void FUN_1085fb568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_alloc(param_1);
  func_0x00010c03a180();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085fb5c0; end: 1085fb643; -[SCTAudioRouteRequest initWithPriority:route:] */

undefined1 *
FUN_1085fb5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd0c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1085fb644; end: 1085fb64b; -[SCTAudioRouteRequest priority] */

undefined8 FUN_1085fb644(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1085fb64c; end: 1085fb653; -[SCTAudioRouteRequest route] */

undefined8 FUN_1085fb64c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085fb654; end: 1085fb65f; -[SCTAudioRouteRequest .cxx_destruct] */

void FUN_1085fb654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1085fb660; end: 1085fb6cb; -[SCTAudioState init] */

undefined1 * FUN_1085fb660(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd0d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    func_0x00010c139720(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1085fb6cc; end: 1085fb81b; -[SCTAudioState evaluateExpectedRouteWithNativeAudioSelector:] */

void FUN_1085fb6cc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1085fb7b0;
  puStack_48 = &UNK_110a5b040;
  lStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retainBlock();
  lVar2 = param_1;
  func_0x00010be97960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c141f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1085fb81c; end: 1085fba07; -[SCTAudioState _routeRequestsWithNativeAudioSelector:] */

void FUN_1085fb81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010bee70c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126da778;
    func_0x00010c137120(PTR_PTR_1126da778,param_2,500,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  lVar4 = param_1;
  func_0x00010beeb540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    puVar3 = PTR_PTR_1126da778;
    func_0x00010c137120(PTR_PTR_1126da778,param_2,400,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  lVar5 = param_1;
  func_0x00010be61220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    puVar3 = PTR_PTR_1126da778;
    func_0x00010c137120(PTR_PTR_1126da778,param_2,300,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  lVar6 = param_1;
  func_0x00010be846a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar6);
  }
  lVar7 = param_1;
  func_0x00010bdd8dc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar7);
  }
  func_0x00010bebe880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    puVar3 = PTR_PTR_1126da778;
    func_0x00010c137120(PTR_PTR_1126da778,param_2,100,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fba08; end: 1085fbb3f; -[SCTAudioState _highestPriorityRouteRequest:] */

void FUN_1085fba08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  iVar5 = (int)&uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_118 + lVar10 * 8);
        if (lVar6 == 0) {
LAB_1085fbab8:
          _objc_retain(lVar7);
          _objc_release(lVar6);
          lVar6 = lVar7;
        }
        else {
          lVar2 = lVar7;
          func_0x00010c113c80();
          lVar3 = lVar6;
          func_0x00010c113c80();
          if (lVar3 < lVar2) goto LAB_1085fbab8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      iVar5 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010be61280();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_3 + 0x38) == 0) {
LAB_1085fbbc4:
    lVar6 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x40);
    lVar6 = lVar1;
    func_0x00010bf12ac0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(uVar8,param_2,lVar6);
    _objc_release(lVar6);
    if ((double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))))) <=
        0.0) goto LAB_1085fbbc4;
    if (iVar5 != 0) {
      uVar4 = *(ulong *)(param_3 + 0x18);
      func_0x00010bf529e0();
      if (2 < uVar4) goto LAB_1085fbbc4;
    }
    lVar6 = *(long *)(param_3 + 0x38);
    _objc_retain(lVar6);
  }
  _objc_release(lVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1085fbb40; end: 1085fbbfb; -[SCTAudioState _userSelectedRouteIfChosenWithNativeAudioSelector:] */

void FUN_1085fbb40(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  func_0x00010be61280();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    lVar2 = lVar1;
    func_0x00010bf12ac0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(uVar4,param_3,lVar2);
    _objc_release(lVar2);
    if (0.0 < param_1) {
      if (param_4 != 0) {
        uVar3 = *(ulong *)(param_2 + 0x18);
        func_0x00010bf529e0();
        if (2 < uVar3) goto LAB_1085fbbc4;
      }
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(uVar4);
      goto LAB_1085fbbd8;
    }
  }
LAB_1085fbbc4:
  uVar4 = 0;
LAB_1085fbbd8:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085fbbfc; end: 1085fbc4f; -[SCTAudioState _publishedMediaRouteRequest] */

void FUN_1085fbbfc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010be06dc0(param_1,param_2,200,lVar1 == 0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085fbc50; end: 1085fbc87; -[SCTAudioState _callStartMediaRouteRequest] */

void FUN_1085fbc50(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010be06dc0(param_1,param_2,0x96,*(long *)(param_1 + 0x30) == 1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085fbc88; end: 1085fbcff; -[SCTAudioState _earpieceOrSpeakerRequestWithPriority:useEarpiece:] */

void FUN_1085fbc88(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  if (param_4 == 0) {
    func_0x00010bebe880();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be06de0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126da778;
    func_0x00010c137120(PTR_PTR_1126da778,param_2,param_3,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085fbd00; end: 1085fbd5f; -[SCTAudioState resetState] */

void FUN_1085fbd00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c162f40(param_1,param_2,0);
  func_0x00010c1989c0(param_1);
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c175930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCallStartMedia__11263b068,0);
  return;
}



/* Entry: 1085fbd60; end: 1085fbda7; -[SCTAudioState updateActualRouteToAppliedRoute:] */

void FUN_1085fbd60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c27dd80(), lVar1 != 0)) {
    func_0x00010c162f40(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085fbda8; end: 1085fbdf7; -[SCTAudioState updateAvailableRoutes:actualRoute:] */

void FUN_1085fbda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bed3780(param_1,param_2,param_3);
  func_0x00010bed29a0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085fbdf8; end: 1085fbdff; -[SCTAudioState updateDidAnswerFromUnlockedScreen:] */

void FUN_1085fbdf8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1085fbe00; end: 1085fbe07; -[SCTAudioState updateDidForegroundInCall:] */

void FUN_1085fbe00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1085fbe08; end: 1085fbe0f; -[SCTAudioState updateDidReceiveFromCallKit:] */

void FUN_1085fbe08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 1085fbe10; end: 1085fbe7b; -[SCTAudioState isCurrentRouteEarpiece] */

undefined8 FUN_1085fbe10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bef1a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1085fbe7c; end: 1085fbe83; -[SCTAudioState updateDidForegroundWithVideo:] */

void FUN_1085fbe7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1085fbe84; end: 1085fbedb; -[SCTAudioState updateUserSelectedRouteToSpeaker] */

void FUN_1085fbe84(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bebe880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1085fbedc; end: 1085fbf1b; -[SCTAudioState updateUserSelectedAudioDevice:] */

void FUN_1085fbedc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdd1400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bee3120(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085fbf1c; end: 1085fbf8b; -[SCTAudioState _updateUserSelectedRoute:] */

void FUN_1085fbf1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085fbf8c; end: 1085fbfbb; -[SCTAudioState updateLocalUserMedia:] */

void FUN_1085fbf8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1085fbfbc; end: 1085fbfbf; -[SCTAudioState updateCallStartMedia:] */

void FUN_1085fbfbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c175930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCallStartMedia__11263b068);
  return;
}



/* Entry: 1085fbfc0; end: 1085fbfc7; -[SCTAudioState _earpieceRoute] */

void FUN_1085fbfc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd1b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__availableRouteWithType__112552078,1);
  return;
}



/* Entry: 1085fbfc8; end: 1085fc15f; -[SCTAudioState _mostRecentBluetoothOrOthersRoute] */

void FUN_1085fbfc8(long param_1)

{
  double dVar1;
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
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  lVar6 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 == 0) {
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar11 = 0;
      lVar9 = lVar8;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar4 = lVar10;
        func_0x00010c27dd80();
        lVar8 = lVar9;
        if (lVar4 == 0) {
          if (lVar9 != 0) {
            lVar4 = lVar10;
            func_0x00010bf12ac0(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            dVar1 = (double)CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13
                                                  (uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12))))
                                                  )));
            _objc_release(lVar4);
            if (dVar1 <= 0.0) goto LAB_1085fc0d8;
          }
          lVar8 = lVar10;
          func_0x00010bf12ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          _objc_retain(lVar10);
          _objc_release(lVar7);
          lVar7 = lVar10;
        }
LAB_1085fc0d8:
        lVar11 = lVar11 + 1;
        lVar9 = lVar8;
      } while (lVar3 != lVar11);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdd1b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1085fc160; end: 1085fc167; -[SCTAudioState _speakerRoute] */

void FUN_1085fc160(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd1b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__availableRouteWithType__112552078,2);
  return;
}



/* Entry: 1085fc168; end: 1085fc16f; -[SCTAudioState _wiredHeadsetRoute] */

void FUN_1085fc168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd1b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__availableRouteWithType__112552078,3);
  return;
}



/* Entry: 1085fc170; end: 1085fc35f; -[SCTAudioState _audioRouteFromAudioDevice:] */

/* WARNING: Possible PIC construction at 0x0001085fca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001085fcb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085fca9c) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaa0) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaac) */
/* WARNING: Removing unreachable block (ram,0x0001085fcab8) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb30) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb34) */
/* WARNING: Removing unreachable block (ram,0x0001085fca80) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001085fc3c8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1085fc170(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_400;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  _objc_retain(param_3);
  puVar15 = param_3;
  func_0x00010c27dd80();
  iVar1 = (int)puVar15;
  puVar15 = (undefined1 *)0x0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_0x00010bebe880();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_1;
    }
    else if (iVar1 == 1) {
      func_0x00010be06de0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_1;
    }
  }
  else if (iVar1 == 2) {
    func_0x00010beeb540();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
  }
  else if (iVar1 == 3) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar13 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar13);
    lVar11 = lVar13;
    func_0x00010bf52a60();
    if (lVar11 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar13);
          }
          puVar15 = *(undefined1 **)(lStack_128 + lVar10 * 8);
          puVar14 = puVar15;
          func_0x00010c27dd80();
          if (puVar14 == (undefined1 *)0x0) {
            puVar14 = puVar15;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = param_3;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar14;
            puVar3 = (undefined8 *)puVar2;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            _objc_release(puVar14);
            if ((int)puVar17 != 0) {
              _objc_retain(puVar15);
              goto LAB_1085fc310;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar11 != lVar10);
        lVar11 = lVar13;
        puVar3 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    puVar15 = (undefined1 *)0x0;
LAB_1085fc310:
    _objc_release(lVar13);
    puVar14 = (undefined1 *)puVar3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = *(long *)(param_3 + 0x18);
    _objc_retain(lVar12);
    lVar11 = lVar12;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar12);
        }
        puVar15 = *(undefined1 **)(lVar18 * 8);
        puVar2 = puVar15;
        func_0x00010c27dd80();
        if (puVar2 == puVar14) {
          _objc_retain(puVar15);
          goto LAB_1085fc438;
        }
        lVar18 = lVar18 + 1;
      } while (lVar11 != lVar18);
      lVar11 = lVar12;
      func_0x00010bf52a60();
    }
    puVar15 = (undefined1 *)0x0;
LAB_1085fc438:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      puVar3 = &uStack_390;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      dVar19 = 0.0;
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      plStack_380 = (long *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      lVar13 = *(long *)(lVar12 + 0x18);
      _objc_retain(lVar13);
      lVar11 = lVar13;
      func_0x00010bf52a60();
      if (lVar11 == 0) {
        puVar15 = (undefined1 *)0x0;
        puVar14 = (undefined1 *)0x0;
      }
      else {
        puVar15 = (undefined1 *)0x0;
        puVar14 = (undefined1 *)0x0;
        lVar12 = *plStack_380;
        do {
          lVar10 = 0;
          puVar2 = puVar14;
          do {
            dVar20 = dVar19;
            if (*plStack_380 != lVar12) {
              _objc_enumerationMutation(lVar13);
              dVar20 = dVar19;
            }
            puVar17 = *(undefined1 **)(lStack_388 + lVar10 * 8);
            dVar19 = dVar20;
            if (puVar2 == (undefined1 *)0x0) {
LAB_1085fc54c:
              puVar14 = puVar17;
              func_0x00010bf12ac0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              _objc_retain(puVar17);
              _objc_release(puVar15);
              puVar15 = puVar17;
            }
            else {
              puVar14 = puVar17;
              func_0x00010bf12ac0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380();
              dVar19 = dVar20;
              _objc_release(puVar14);
              puVar14 = puVar2;
              if (0.0 < dVar20) goto LAB_1085fc54c;
            }
            lVar10 = lVar10 + 1;
            puVar2 = puVar14;
          } while (lVar11 != lVar10);
          lVar11 = lVar13;
          puVar3 = &uStack_390;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lVar13);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar9 = puVar3;
        func_0x00010c0ef240();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (puVar4 == (undefined8 *)0x0) {
          puVar15 = (undefined1 *)0x0;
        }
        else {
          puVar3 = puVar4;
          func_0x00010c104100();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = *(undefined8 **)PTR__AVAudioSessionPortHeadphones_11034cee8;
          puVar5 = puVar3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)puVar5 == 0) {
            puVar3 = puVar4;
            func_0x00010c104100();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInReceiver_11034ced0;
            puVar5 = puVar3;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            if ((int)puVar5 == 0) {
              puVar3 = puVar4;
              func_0x00010c104100();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInSpeaker_11034ced8;
              puVar5 = puVar3;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)puVar5 == 0) {
                uStack_498 = 0;
                uStack_4a0 = 0;
                uStack_488 = 0;
                uStack_490 = 0;
                lStack_4b8 = 0;
                uStack_4c0 = 0;
                uStack_4a8 = 0;
                plStack_4b0 = (long *)0x0;
                lVar13 = *(long *)(puVar14 + 0x18);
                _objc_retain(lVar13);
                puVar9 = &uStack_4c0;
                lVar11 = lVar13;
                func_0x00010bf52a60();
                if (lVar11 != 0) {
                  lVar12 = *plStack_4b0;
                  do {
                    lVar10 = 0;
                    do {
                      if (*plStack_4b0 != lVar12) {
                        _objc_enumerationMutation(lVar13);
                      }
                      puVar15 = *(undefined1 **)(lStack_4b8 + lVar10 * 8);
                      puVar14 = puVar15;
                      func_0x00010c065dc0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      if (puVar14 != (undefined1 *)0x0) {
                        puVar14 = puVar15;
                        func_0x00010c065dc0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = puVar14;
                        func_0x00010c104100();
                        _objc_retainAutoreleasedReturnValue();
                        puVar17 = puVar2;
                        func_0x00010c0720c0();
                        if ((int)puVar17 == 0) {
                          puVar17 = puVar15;
                          func_0x00010c065dc0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar6 = puVar17;
                          func_0x00010c104100();
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = puVar6;
                          func_0x00010c0720c0();
                          _objc_release(puVar6);
                          _objc_release(puVar17);
                          _objc_release(puVar2);
                          _objc_release(puVar14);
                          if (((ulong)puVar7 & 1) == 0) {
                            puVar14 = puVar15;
                            func_0x00010c065dc0();
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = puVar14;
                            func_0x00010bdc2a80();
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = puVar4;
                            func_0x00010bdc2a80();
                            _objc_retainAutoreleasedReturnValue();
                            puVar17 = puVar2;
                            puVar9 = puVar3;
                            func_0x00010c0720c0();
                            _objc_release(puVar3);
                            _objc_release(puVar2);
                            _objc_release(puVar14);
                            if (((ulong)puVar17 & 1) != 0) {
                              _objc_retain(puVar15);
                              _objc_release(lVar13);
                              goto LAB_1085fc74c;
                            }
                          }
                        }
                        else {
                          _objc_release(puVar2);
                          _objc_release(puVar14);
                        }
                      }
                      lVar10 = lVar10 + 1;
                    } while (lVar11 != lVar10);
                    puVar9 = &uStack_4c0;
                    lVar11 = lVar13;
                    func_0x00010bf52a60();
                  } while (lVar11 != 0);
                }
                _objc_release(lVar13);
                puVar15 = (undefined1 *)0x0;
              }
              else {
                func_0x00010bebe880();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar14;
              }
            }
            else {
              func_0x00010be06de0();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar14;
            }
          }
          else {
            func_0x00010beeb540();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
          }
        }
LAB_1085fc74c:
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_400) {
          ___stack_chk_fail();
          lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(puVar9);
          puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
          uVar16 = puVar4[3];
          _objc_retain(puVar9);
          func_0x00010c1063a0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfae5e0(uVar16);
          _objc_release(puVar8);
          _objc_retain(puVar9);
          puVar3 = puVar9;
          func_0x00010bf52a60();
          if (puVar3 == (undefined8 *)0x0) {
            _objc_release(puVar9);
            puVar8 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
            func_0x00010c07cd00();
            if ((int)puVar8 != 0) {
              uVar16 = puVar4[3];
              puVar3 = puVar4;
              func_0x00010be06de0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d360(uVar16);
              _objc_release(puVar3);
            }
            if (puVar4[7] == 0) {
              _objc_release(puVar9);
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                return;
              }
              ___stack_chk_fail();
              uVar16 = puVar9[4];
            }
            else {
              uVar16 = puVar4[3];
              param_2 = puVar4[7];
            }
          }
          else {
            uVar16 = puVar4[3];
            param_2 = lRam0000000000000000;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_containsObject__1125b07e8,param_2);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1085fc360; end: 1085fc47b; -[SCTAudioState _availableRouteWithType:] */

/* WARNING: Possible PIC construction at 0x0001085fca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001085fcb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085fca9c) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaa0) */
/* WARNING: Removing unreachable block (ram,0x0001085fcaac) */
/* WARNING: Removing unreachable block (ram,0x0001085fcab8) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb30) */
/* WARNING: Removing unreachable block (ram,0x0001085fcb34) */
/* WARNING: Removing unreachable block (ram,0x0001085fca80) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001085fc3c8 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1085fc360(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2d0;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar11);
  lVar10 = lVar11;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar11);
      }
      uVar14 = *(ulong *)(lVar17 * 8);
      uVar13 = uVar14;
      func_0x00010c27dd80();
      if (uVar13 == param_3) {
        _objc_retain(uVar14);
        goto LAB_1085fc438;
      }
      lVar17 = lVar17 + 1;
    } while (lVar10 != lVar17);
    lVar10 = lVar11;
    func_0x00010bf52a60();
  }
  uVar14 = 0;
LAB_1085fc438:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar1 = &uStack_260;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar18 = 0.0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar12 = *(long *)(lVar11 + 0x18);
    _objc_retain(lVar12);
    lVar10 = lVar12;
    func_0x00010bf52a60();
    if (lVar10 == 0) {
      uVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar14 = 0;
      uVar13 = 0;
      lVar11 = *plStack_250;
      do {
        lVar9 = 0;
        uVar4 = uVar13;
        do {
          dVar19 = dVar18;
          if (*plStack_250 != lVar11) {
            _objc_enumerationMutation(lVar12);
            dVar19 = dVar18;
          }
          uVar16 = *(ulong *)(lStack_258 + lVar9 * 8);
          dVar18 = dVar19;
          if (uVar4 == 0) {
LAB_1085fc54c:
            uVar13 = uVar16;
            func_0x00010bf12ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_retain(uVar16);
            _objc_release(uVar14);
            uVar14 = uVar16;
          }
          else {
            uVar13 = uVar16;
            func_0x00010bf12ac0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            dVar18 = dVar19;
            _objc_release(uVar13);
            uVar13 = uVar4;
            if (0.0 < dVar19) goto LAB_1085fc54c;
          }
          lVar9 = lVar9 + 1;
          uVar4 = uVar13;
        } while (lVar10 != lVar9);
        lVar10 = lVar12;
        puVar1 = &uStack_260;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar12);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar1;
      func_0x00010c0ef240();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar2 == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        puVar1 = puVar2;
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = *(undefined8 **)PTR__AVAudioSessionPortHeadphones_11034cee8;
        puVar3 = puVar1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)puVar3 == 0) {
          puVar1 = puVar2;
          func_0x00010c104100();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInReceiver_11034ced0;
          puVar3 = puVar1;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)puVar3 == 0) {
            puVar1 = puVar2;
            func_0x00010c104100();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = *(undefined8 **)PTR__AVAudioSessionPortBuiltInSpeaker_11034ced8;
            puVar3 = puVar1;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)puVar3 == 0) {
              uStack_368 = 0;
              uStack_370 = 0;
              uStack_358 = 0;
              uStack_360 = 0;
              lStack_388 = 0;
              uStack_390 = 0;
              uStack_378 = 0;
              plStack_380 = (long *)0x0;
              lVar12 = *(long *)(uVar13 + 0x18);
              _objc_retain(lVar12);
              puVar8 = &uStack_390;
              lVar10 = lVar12;
              func_0x00010bf52a60();
              if (lVar10 != 0) {
                lVar11 = *plStack_380;
                do {
                  lVar9 = 0;
                  do {
                    if (*plStack_380 != lVar11) {
                      _objc_enumerationMutation(lVar12);
                    }
                    uVar14 = *(ulong *)(lStack_388 + lVar9 * 8);
                    uVar13 = uVar14;
                    func_0x00010c065dc0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (uVar13 != 0) {
                      uVar13 = uVar14;
                      func_0x00010c065dc0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = uVar13;
                      func_0x00010c104100();
                      _objc_retainAutoreleasedReturnValue();
                      uVar16 = uVar4;
                      func_0x00010c0720c0();
                      if ((int)uVar16 == 0) {
                        uVar16 = uVar14;
                        func_0x00010c065dc0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar5 = uVar16;
                        func_0x00010c104100();
                        _objc_retainAutoreleasedReturnValue();
                        uVar6 = uVar5;
                        func_0x00010c0720c0();
                        _objc_release(uVar5);
                        _objc_release(uVar16);
                        _objc_release(uVar4);
                        _objc_release(uVar13);
                        if ((uVar6 & 1) == 0) {
                          uVar13 = uVar14;
                          func_0x00010c065dc0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = uVar13;
                          func_0x00010bdc2a80();
                          _objc_retainAutoreleasedReturnValue();
                          puVar1 = puVar2;
                          func_0x00010bdc2a80();
                          _objc_retainAutoreleasedReturnValue();
                          uVar16 = uVar4;
                          puVar8 = puVar1;
                          func_0x00010c0720c0();
                          _objc_release(puVar1);
                          _objc_release(uVar4);
                          _objc_release(uVar13);
                          if ((uVar16 & 1) != 0) {
                            _objc_retain(uVar14);
                            _objc_release(lVar12);
                            goto LAB_1085fc74c;
                          }
                        }
                      }
                      else {
                        _objc_release(uVar4);
                        _objc_release(uVar13);
                      }
                    }
                    lVar9 = lVar9 + 1;
                  } while (lVar10 != lVar9);
                  puVar8 = &uStack_390;
                  lVar10 = lVar12;
                  func_0x00010bf52a60();
                } while (lVar10 != 0);
              }
              _objc_release(lVar12);
              uVar14 = 0;
            }
            else {
              func_0x00010bebe880();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar13;
            }
          }
          else {
            func_0x00010be06de0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar13;
          }
        }
        else {
          func_0x00010beeb540();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar13;
        }
      }
LAB_1085fc74c:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
        ___stack_chk_fail();
        lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar8);
        puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        uVar15 = puVar2[3];
        _objc_retain(puVar8);
        func_0x00010c1063a0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfae5e0(uVar15);
        _objc_release(puVar7);
        _objc_retain(puVar8);
        puVar1 = puVar8;
        func_0x00010bf52a60();
        if (puVar1 == (undefined8 *)0x0) {
          _objc_release(puVar8);
          puVar7 = PTR__OBJC_CLASS___AVAudioSessionRouteDescription_1126da768;
          func_0x00010c07cd00();
          if ((int)puVar7 != 0) {
            uVar15 = puVar2[3];
            puVar1 = puVar2;
            func_0x00010be06de0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(uVar15);
            _objc_release(puVar1);
          }
          if (puVar2[7] == 0) {
            _objc_release(puVar8);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
              return;
            }
            ___stack_chk_fail();
            uVar15 = puVar8[4];
          }
          else {
            uVar15 = puVar2[3];
            param_2 = puVar2[7];
          }
        }
        else {
          uVar15 = puVar2[3];
          param_2 = lRam0000000000000000;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar15,PTR_s_containsObject__1125b07e8,param_2);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}


