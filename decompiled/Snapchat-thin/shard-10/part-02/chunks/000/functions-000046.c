/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a81534; end: 107a81653; -[SCStoriesTopicShareManagerImpl _sendToPreviewConfigurationWithPreviewModel:] */

void FUN_107a81534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a81654;
  puStack_50 = &UNK_110917b38;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b07e8;
  _objc_alloc(PTR_PTR_1126b07e8);
  func_0x00010c061960();
  puVar3 = PTR_PTR_1126b07f0;
  func_0x00010c0c70e0(param_3);
  func_0x00010c299100(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b07f8;
  _objc_alloc(PTR_PTR_1126b07f8);
  func_0x00010c01dde0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a81654; end: 107a8165b;  */

void FUN_107a81654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_mediaView_11260f648);
  return;
}



/* Entry: 107a8165c; end: 107a81793; -[SCStoriesTopicShareManagerImpl didSendWithSelectionState:] */

void FUN_107a8165c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1599e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0000(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107a81794;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a81794; end: 107a817bf;  */

void FUN_107a81794(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a817c0; end: 107a81807; -[SCStoriesTopicShareManagerImpl didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_107a817c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a81808; end: 107a81837; -[SCStoriesTopicShareManagerImpl _detachUI] */

void FUN_107a81808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a81838; end: 107a81b4b; -[SCStoriesTopicShareManagerImpl _sendResultShareToSelectedItems:additionalText:] */

void FUN_107a81838(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  ppuVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar12 = param_3;
  func_0x00010bf529e0();
  if (ppuVar12 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    ppuVar2 = param_3;
    func_0x00010bf52a60();
    if (ppuVar2 == (undefined **)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      lVar10 = *plStack_120;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          lVar13 = *(long *)(lStack_128 + (long)ppuVar12 * 8);
          lVar14 = lVar13;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar6 = PTR_PTR_1126b01c0;
          lVar3 = lVar13;
          func_0x00010c122a80(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar14 == 0) {
            func_0x00010c294260(puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            _objc_release(lVar4);
            lVar14 = 1;
          }
          else {
            func_0x00010bfcf680();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(lVar3);
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar13;
            func_0x00010bf529e0();
            lVar3 = lVar13;
          }
          _objc_release(lVar3);
          lVar11 = lVar14 + lVar11;
          func_0x00010befa120(puVar1);
          _objc_release(puVar6);
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar2 != ppuVar12);
        ppuVar2 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(param_3);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf51e00(puVar1);
    uVar8 = uVar7;
    func_0x00010c246920(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_107a81b4c;
    puStack_150 = &UNK_11092e638;
    uVar9 = param_4;
    lStack_148 = param_1;
    _objc_retain(param_4);
    uStack_140 = param_4;
    lStack_138 = lVar11;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &puStack_168;
    func_0x00010c297260(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_release(uStack_140);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bea06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3[4],PTR_s__sendStoryShareToConversations_a_112585b58,param_2,param_3[5],
               param_3[6],ppuVar2);
    return;
  }
  return;
}



/* Entry: 107a81b4c; end: 107a81b63;  */

void FUN_107a81b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendStoryShareToConversations_a_112585b58,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_3);
  return;
}



/* Entry: 107a81b64; end: 107a81e13; -[SCStoriesTopicShareManagerImpl _sendStoryShareToConversations:additionalText:numOfRecipients:error:] */

void FUN_107a81b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_6 == 0) {
    uVar2 = param_3;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x000108605098(uVar3,*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010853bdd8();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b5bd8;
    func_0x00010c2753a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b5bd0;
    _objc_alloc(PTR_PTR_1126b5bd0);
    func_0x00010c000c00();
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107a81e14;
    puStack_88 = &UNK_110855ea0;
    _objc_copyWeak(auStack_80,auStack_78);
    ppuVar7 = &puStack_a0;
    _objc_retainBlock();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107a81f18;
    puStack_b0 = &UNK_110852668;
    _objc_retain();
    ppuVar8 = &puStack_c8;
    ppuStack_a8 = ppuVar7;
    _objc_retainBlock(ppuVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010bf50b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010c15cbe0(uVar9);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar10);
    _objc_release(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar10);
    _objc_release(ppuVar8);
    _objc_release(ppuStack_a8);
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a81e14; end: 107a81f17;  */

void FUN_107a81e14(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0dc640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126afde0;
    if ((param_2 & 1) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e05498;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf55ce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1c5f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf54760(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
    func_0x00010c25f340(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a81f18; end: 107a81f2f;  */

void FUN_107a81f18(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107a81f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0,0);
  return;
}



/* Entry: 107a81f30; end: 107a81fd3; -[SCStoriesTopicShareManagerImpl .cxx_destruct] */

void FUN_107a81f30(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 107a81fd4; end: 107a820ef;  */

void FUN_107a81fd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d51e0;
    _objc_alloc(PTR_PTR_1126d51e0);
    lVar1 = param_1;
    func_0x00010c2475a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a9a0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a820f0; end: 107a821df;  */

ulong FUN_107a820f0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar4 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf0a8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077620();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf0a8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c07f5e0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((((uVar3 & 1) == 0) && ((int)uVar2 != 0)) &&
     (uVar4 = param_2, func_0x000109021fbc(), (uVar4 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010c24be20(param_1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107a821e0; end: 107a8242f;  */

void FUN_107a821e0(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_310;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar14 = param_2;
  FUN_107a82430(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = param_2;
  func_0x000108f41864();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar5);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      lVar7 = *(long *)(param_1 + 0x38);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar5);
      }
      lVar15 = lVar15 + 1;
    } while (lVar4 != lVar15);
    lVar4 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  puVar8 = puVar2;
  func_0x00010bf51e00();
  uVar5 = 1;
  puVar9 = param_2;
  puVar11 = puVar14;
  puVar12 = puVar8;
  FUN_107a82990();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar11);
    _objc_retain(uVar5);
    _objc_retain(puVar12);
    uStack_1c8 = 0;
    uStack_1b8 = 0x2020000000;
    uStack_1b0 = 0;
    uStack_1e8 = 0;
    uStack_1d8 = 0x2020000000;
    uStack_1d0 = 0;
    puStack_200 = &uStack_208;
    uStack_208 = 0;
    uStack_1f8 = 0x2020000000;
    uStack_1f0 = 1;
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    uStack_238 = 0x107a8823c;
    puStack_230 = &UNK_110876040;
    puStack_1e0 = &uStack_1e8;
    puStack_1c0 = &uStack_1c8;
    _objc_retain(param_2);
    puStack_228 = param_2;
    _objc_retain(uVar5);
    ppuVar10 = &puStack_248;
    uStack_220 = uVar5;
    puStack_218 = &uStack_1c8;
    puStack_210 = &uStack_1e8;
    _objc_retainBlock();
    puVar14 = param_2;
    func_0x00010bf0e700(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar10);
    _objc_retain(param_2);
    _objc_retain(uVar5);
    func_0x00010c0c1340(puVar14);
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c0d2260();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar14);
    if (puVar3 == (undefined *)0x0) {
      puStack_310 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar14 = param_2;
      func_0x00010c0d2260(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar14;
      func_0x00010bf24a40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar14);
      puVar14 = puVar3;
      func_0x00010bf529e0();
      if (puVar14 == (undefined *)0x0) {
        puStack_310 = PTR____NSArray0__struct_11034ab48;
      }
      else {
        puStack_310 = puVar3;
        func_0x000100504554(puVar3,&PTR___NSConcreteGlobalBlock_1109f8590);
      }
      _objc_release(puVar3);
    }
    puVar14 = param_2;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010c0676a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = param_2;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010c0676a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c0676c0();
    _objc_release(puVar3);
    _objc_release(puVar14);
    if ((int)puVar8 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126cc288;
      _objc_alloc();
      func_0x00010c29f0c0();
      func_0x00010c29f0c0();
      func_0x00010c151b20();
      func_0x00010c25aca0();
      func_0x00010c280780();
      func_0x00010c280760();
      func_0x00010c243e80();
      func_0x00010c2652a0();
      func_0x00010c264600();
      func_0x00010c269000();
      func_0x00010c268e00();
      func_0x00010bf1f680();
      func_0x00010c22a980();
      func_0x00010c25fe00();
      func_0x00010c0f2a80();
      func_0x00010c0f2a20();
      func_0x00010bf41980();
      func_0x00010bf41920();
      func_0x00010c01e400(puVar14);
    }
    puVar9 = PTR_PTR_1126d5180;
    _objc_alloc(PTR_PTR_1126d5180);
    func_0x00010c046240();
    _objc_release(puVar2);
    _objc_release(puVar14);
    _objc_release(puStack_310);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(ppuVar10);
    _objc_release(ppuVar10);
    _objc_release(uStack_220);
    _objc_release(puStack_228);
    __Block_object_dispose(&uStack_208,8);
    __Block_object_dispose(&uStack_1e8,8);
    __Block_object_dispose(&uStack_1c8,8);
    _objc_release(puVar12);
    _objc_release(uVar5);
    _objc_release(puVar11);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107a82430; end: 107a8298f;  */

void FUN_107a82430(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_1e0;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 1;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x107a8823c;
  puStack_100 = &UNK_110876040;
  puStack_b0 = &uStack_b8;
  puStack_90 = &uStack_98;
  _objc_retain(param_1);
  lStack_f8 = param_1;
  _objc_retain(param_3);
  ppuVar1 = &puStack_118;
  uStack_f0 = param_3;
  puStack_e8 = &uStack_98;
  puStack_e0 = &uStack_b8;
  _objc_retainBlock();
  lVar2 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  _objc_retain(param_1);
  _objc_retain(param_3);
  func_0x00010c0c1340(lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puStack_1e0 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0d2260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar7;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puStack_1e0 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puStack_1e0 = puVar7;
      func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_1109f8590);
    }
    _objc_release(puVar7);
  }
  lVar2 = param_1;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0676a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0676a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0676c0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if ((int)lVar6 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126cc288;
    _objc_alloc();
    func_0x00010c29f0c0();
    func_0x00010c29f0c0();
    func_0x00010c151b20();
    func_0x00010c25aca0();
    func_0x00010c280780();
    func_0x00010c280760();
    func_0x00010c243e80();
    func_0x00010c2652a0();
    func_0x00010c264600();
    func_0x00010c269000();
    func_0x00010c268e00();
    func_0x00010bf1f680();
    func_0x00010c22a980();
    func_0x00010c25fe00();
    func_0x00010c0f2a80();
    func_0x00010c0f2a20();
    func_0x00010bf41980();
    func_0x00010bf41920();
    func_0x00010c01e400(puVar7);
  }
  puVar5 = PTR_PTR_1126d5180;
  _objc_alloc(PTR_PTR_1126d5180);
  func_0x00010c046240();
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_release(puStack_1e0);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_f0);
  _objc_release(lStack_f8);
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a82990; end: 107a830b7;  */

void FUN_107a82990(undefined *param_1,long param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
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
  undefined8 uVar18;
  undefined *puVar19;
  undefined1 uVar20;
  undefined *puVar21;
  undefined1 uVar22;
  undefined *puVar23;
  undefined1 uVar24;
  undefined *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined1 *puStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined1 uStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined1 uStack_378;
  undefined1 uStack_377;
  long lStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined1 uStack_326;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined4 uStack_25c;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined4 uStack_234;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  puStack_1e0 = (undefined *)CONCAT44(puStack_1e0._4_4_,param_3);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  puVar3 = param_1;
  puStack_1e8 = puVar2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  FUN_107a85f14(param_1,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x000107a838d0(param_1,param_8,param_2 != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  puStack_168 = puVar5;
  func_0x000107d22a6c(param_1,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  puStack_170 = puVar6;
  func_0x000107d22fdc(param_1,1,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  puStack_178 = puVar5;
  FUN_107a83ab4();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar6;
  _objc_retain(param_4);
  lVar7 = param_4;
  func_0x00010bf529e0();
  uStack_1d8 = param_8;
  puStack_160 = puVar4;
  puStack_158 = puVar2;
  puStack_150 = puVar3;
  lStack_148 = param_2;
  if (lVar7 == 0) {
    puStack_188 = (undefined *)0x0;
  }
  else {
    uVar18 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_4);
    lVar7 = param_4;
    func_0x00010bf52a60();
    if (lVar7 == 0) {
      uVar29 = 0;
    }
    else {
      lVar27 = *plStack_130;
      do {
        lVar28 = 0;
        do {
          uVar29 = uVar18;
          if (*plStack_130 != lVar27) {
            _objc_enumerationMutation(param_4);
            uVar29 = uVar18;
          }
          uVar26 = *(ulong *)(lStack_138 + lVar28 * 8);
          func_0x00010c29ecc0(uVar26);
          uVar18 = uVar29;
          func_0x00010c29ea60();
          if ((uVar26 & 1) != 0) goto LAB_107a82ba4;
          lVar28 = lVar28 + 1;
        } while (lVar7 != lVar28);
        lVar7 = param_4;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
LAB_107a82ba4:
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126d51a8;
    _objc_alloc();
    func_0x00010c01fba0(uVar29);
    puStack_188 = puVar2;
  }
  _objc_release(param_4);
  puVar2 = param_1;
  FUN_107a83bc8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_190 = puVar2;
  FUN_107a83ca4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_1a0 = puVar3;
  FUN_107a83d44();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_198 = puVar2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar3;
  func_0x00010bf20ec0();
  puVar2 = param_1;
  puStack_218 = puVar3;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = puVar2;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_1a8 = puVar2;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = puVar3;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_1b8 = puVar3;
  func_0x000107a83e9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_228 = puVar2;
  FUN_107a81fd4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_1b0 = puVar3;
  func_0x000107a82058();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_230 = puVar2;
  func_0x00010c141c40();
  uStack_234 = SUB84(puVar3,0);
  puVar2 = param_1;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_1c0 = puVar2;
  FUN_107a85288(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_240 = puVar3;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_248 = puVar2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = puVar3;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_250 = puVar3;
  FUN_107a83f7c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_1c8 = puVar2;
  FUN_107a8408c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_1d0 = puVar3;
  FUN_107a843fc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  uVar18 = param_7;
  puStack_258 = puVar2;
  FUN_107a820f0();
  lStack_220 = CONCAT44(lStack_220._4_4_,(int)puVar3);
  puVar2 = param_1;
  func_0x00010c14ede0();
  uStack_25c = SUB84(puVar2,0);
  puVar8 = param_1;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  puStack_270 = puVar8;
  FUN_107a8450c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  puStack_278 = puVar9;
  FUN_107a8460c();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  puStack_280 = puVar10;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c25b820();
  puVar12 = param_1;
  puStack_290 = puVar2;
  FUN_107a84774();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_1;
  puStack_288 = puVar12;
  FUN_107a8496c();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = puVar14;
  func_0x00010c27dd80();
  puVar15 = param_1;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  uStack_208 = param_7;
  func_0x00010c1029e0();
  puVar1 = puStack_228;
  puVar6 = puStack_230;
  puVar5 = puStack_240;
  puVar4 = puStack_248;
  puVar3 = puStack_250;
  puVar2 = puStack_258;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  puStack_2f0 = puStack_290;
  uStack_2e8 = 0;
  uStack_300 = 0;
  uStack_308 = 0;
  uStack_326 = 0;
  uStack_327 = (undefined1)uStack_25c;
  uStack_328 = (undefined1)lStack_220;
  uStack_338 = 0;
  puStack_330 = puStack_258;
  puStack_348 = puStack_1c8;
  puStack_340 = puStack_1d0;
  puStack_358 = puStack_248;
  puStack_350 = puStack_250;
  puStack_368 = puStack_1c0;
  puStack_360 = puStack_240;
  lStack_370 = lStack_148;
  uStack_377 = SUB81(puStack_1e0,0);
  uStack_378 = (undefined1)uStack_234;
  puStack_388 = puStack_1b0;
  puStack_380 = puStack_230;
  puStack_398 = puStack_1b8;
  puStack_390 = puStack_228;
  uStack_3a0 = 0;
  uStack_3b0 = 0;
  puStack_3a8 = puStack_1a8;
  puStack_3c0 = puStack_198;
  puStack_3b8 = puStack_218;
  puStack_3d0 = puStack_190;
  puStack_3c8 = puStack_1a0;
  puStack_3e0 = puStack_180;
  puStack_3d8 = puStack_188;
  puVar17 = puStack_1e8;
  puVar19 = puStack_150;
  puVar21 = puStack_158;
  puVar23 = puStack_160;
  puVar25 = puStack_168;
  puStack_320 = puVar8;
  puStack_318 = puVar9;
  puStack_310 = puVar10;
  puStack_2f8 = puVar11;
  puStack_2e0 = puVar12;
  puStack_2d8 = puVar13;
  lStack_2c0 = (long)(int)puVar14;
  puStack_2b8 = puVar16;
  lStack_220 = param_4;
  func_0x00010c044c40();
  uVar24 = SUB81(puVar25,0);
  uVar22 = SUB81(puVar23,0);
  uVar20 = SUB81(puVar21,0);
  puStack_1e0 = puVar17;
  _objc_release(puVar15);
  _objc_release(puStack_268);
  _objc_release(puVar13);
  _objc_release(puStack_288);
  _objc_release(puVar11);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(puStack_270);
  _objc_release(puVar2);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_release(puVar3);
  _objc_release(puStack_210);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puStack_1c0);
  _objc_release(puVar6);
  _objc_release(puStack_1b0);
  _objc_release(puVar1);
  _objc_release(puStack_1b8);
  _objc_release(puStack_200);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1f8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_198);
  _objc_release(puStack_1a0);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(uStack_1d8);
  _objc_release(uStack_208);
  _objc_release(lStack_220);
  _objc_release(lStack_148);
  puVar2 = param_1;
  _objc_release(param_1);
  puVar3 = puStack_1e0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puStack_418 = puVar4;
    puStack_410 = puVar6;
    puStack_408 = puVar5;
    puStack_400 = puVar1;
    pcStack_3e8 = FUN_107a830b8;
    puStack_420 = puVar13;
    puStack_3f8 = param_1;
    puStack_3f0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar18);
    _objc_retain(puVar19);
    _objc_retain(puVar2);
    uStack_426 = uVar24;
    FUN_107a831a8();
    puStack_458 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_450 = 0xc2000000;
    uStack_448 = 0x107a83210;
    puStack_440 = &UNK_1109f83b0;
    uStack_438 = uVar18;
    puStack_430 = puVar19;
    uStack_428 = uVar20;
    uStack_427 = uVar22;
    _objc_retain(puVar19);
    _objc_retain(uVar18);
    puVar3 = puVar2;
    func_0x000100504554(puVar2,&puStack_458);
    _objc_release(puVar2);
    _objc_release(puStack_430);
    _objc_release(uStack_438);
    _objc_release(puVar19);
    _objc_release(uVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a830b8; end: 107a831a7;  */

void FUN_107a830b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  uStack_46 = param_6;
  FUN_107a831a8();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a83210;
  puStack_60 = &UNK_1109f83b0;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_47 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x000100504554(param_1,&puStack_78);
  _objc_release(param_1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a831a8; end: 107a8320f;  */

undefined8 FUN_107a831a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b12d0;
  _objc_retain();
  func_0x00010c0b6180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1f320(param_1,param_2,puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107a83210; end: 107a83ab3;  */

void FUN_107a83210(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puStack_80;
  
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  lVar4 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  lVar6 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf0aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puStack_80 = PTR_PTR_1126d5188;
  if (lVar7 == 0) {
    puStack_80 = (undefined *)0x0;
  }
  else {
    lVar6 = lVar7;
    func_0x00010c259cc0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0ed9e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c22c3a0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2;
    FUN_107a8856c(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    FUN_107a84774();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
  }
  _objc_release(lVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  lVar6 = param_2;
  func_0x000107a838d0(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x000107d22a6c(param_2,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x000107d22fdc(param_2,1,*(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31));
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  FUN_107a83ab4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  FUN_107a83bc8();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  FUN_107a83ca4();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  FUN_107a83d44();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ec0();
  lVar14 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x000107a83e9c();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2;
  FUN_107a81fd4();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x000107a82058();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141c40();
  lVar21 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  FUN_107a85288(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2;
  FUN_107a83f7c();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_2;
  FUN_107a8408c();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_2;
  FUN_107a843fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24be20();
  func_0x00010c14ede0();
  lVar29 = param_2;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_2;
  FUN_107a8450c();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_2;
  FUN_107a8460c();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b820();
  lVar33 = param_2;
  FUN_107a84774();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_2;
  FUN_107a8496c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaac0();
  lVar35 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  lVar36 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1029e0();
  func_0x00010c044c40();
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
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
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puStack_80);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a83ab4; end: 107a83bc7;  */

void FUN_107a83ab4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  func_0x00010bf12320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126d51a0;
    _objc_alloc(PTR_PTR_1126d51a0);
    lVar1 = param_1;
    func_0x00010c297e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfc11c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c259b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c096600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0607c0(puVar6,param_2,lVar1,lVar2,lVar3,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a83bc8; end: 107a83ca3;  */

void FUN_107a83bc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d51b0;
    _objc_alloc(PTR_PTR_1126d51b0);
    func_0x00010bf8b160(param_2);
    lVar1 = param_2;
    func_0x00010c071060(param_2);
    lVar2 = param_2;
    func_0x00010bf9c720(param_2);
    func_0x000109021670();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c2709c0(param_2);
    func_0x000109021670();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00eaa0(param_1,puVar4,param_3,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a83ca4; end: 107a83d43;  */

void FUN_107a83ca4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0ed100();
    if (uVar1 != 2) {
      uVar1 = (ulong)(uVar1 == 1);
    }
    puVar3 = PTR_PTR_1126d51b8;
    _objc_alloc(PTR_PTR_1126d51b8);
    uVar2 = param_1;
    func_0x00010bf93b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032400(puVar3,param_2,uVar1,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a83d44; end: 107a83f7b;  */

void FUN_107a83d44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfb73c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = (undefined *)0x0;
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfb73c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf59940();
      func_0x000100bc47dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bfb73c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247520();
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126d51c0;
      _objc_alloc(PTR_PTR_1126d51c0);
      func_0x00010c006760();
      _objc_release(lVar2);
    }
    puVar4 = PTR_PTR_1126d51c8;
    _objc_alloc(PTR_PTR_1126d51c8);
    lVar1 = param_1;
    func_0x00010bf0d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf30620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4d60(puVar4,param_2,lVar1,puVar3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a83f7c; end: 107a8408b;  */

void FUN_107a83f7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d51f0;
    _objc_alloc(PTR_PTR_1126d51f0);
    lVar1 = param_1;
    func_0x00010c24a0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c24a0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c24a0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c24a0e0();
    func_0x00010c03ae60(puVar2,param_2,lVar3,lVar5,lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a8408c; end: 107a843fb;  */

void FUN_107a8408c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined *puVar17;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_80;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar17 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bef2d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c23d7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d6238;
    _objc_alloc();
    lVar1 = lVar2;
    func_0x00010bef38a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf2bfa0();
    lVar5 = lVar2;
    func_0x00010c247820();
    lVar6 = lVar2;
    func_0x00010c270a60(lVar2);
    lVar7 = lVar2;
    func_0x00010c2475c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf3ca00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf3c980();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08fa60();
    if (lVar10 == 0) {
      uStack_80 = (undefined *)0x0;
    }
    else {
      uStack_80 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc();
      uStack_b0 = lVar2;
      func_0x00010bf3c980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c057ea0();
    }
    lVar11 = lVar2;
    func_0x00010bf3c9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010c29e460();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010c29e3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c08fa60();
    if (lVar14 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc();
      uStack_b8 = lVar2;
      func_0x00010c29e3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c057ea0();
    }
    lVar15 = lVar2;
    func_0x00010c29e400();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar2;
    func_0x00010beec120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1980(puVar3,param_2,lVar1,(long)(int)lVar4,(long)(int)lVar5,lVar6,lVar7,lVar8,
                        uStack_80,lVar11,lVar12,puVar17,lVar15,lVar16);
    _objc_release(lVar16);
    _objc_release(lVar15);
    if (lVar14 != 0) {
      _objc_release(puVar17);
      _objc_release(uStack_b8);
    }
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    if (lVar10 != 0) {
      _objc_release(uStack_80);
      _objc_release(uStack_b0);
    }
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    puVar17 = PTR_PTR_1126d6240;
    _objc_alloc(PTR_PTR_1126d6240);
    lVar1 = param_1;
    func_0x00010bef2d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c06aee0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bef2d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046be0(puVar17,param_2,puVar3,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 107a843fc; end: 107a8450b;  */

void FUN_107a843fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf28d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbec20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d6248;
    _objc_alloc(PTR_PTR_1126d6248);
    lVar1 = param_1;
    func_0x00010bf28d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbec20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf28d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa0480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017600(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a8450c; end: 107a8460b;  */

void FUN_107a8450c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d6250;
    _objc_alloc(PTR_PTR_1126d6250);
    lVar1 = param_1;
    func_0x00010c0d2260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0d2260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c158380();
    lVar6 = param_1;
    func_0x00010c0d2260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c1581e0();
    func_0x00010bff9aa0(puVar2,param_2,lVar3,lVar5,lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a8460c; end: 107a84773;  */

void FUN_107a8460c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107a88514;
  uStack_50 = 0x107a88524;
  uStack_48 = 0;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010c0c1340(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a84774; end: 107a8496b;  */

void FUN_107a84774(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c24b240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar5);
    func_0x00010bf1f680();
    func_0x00010c22a980();
    func_0x00010c29c5c0();
    func_0x00010c25fae0(lVar1);
    func_0x00010c129760(lVar1);
    func_0x00010c123100();
    lVar2 = param_2;
    func_0x00010c262140(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = 0;
    func_0x000108f50a90();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c24b7a0();
    if (0 < lVar2) {
      func_0x00010c24b7a0();
    }
    lVar2 = lVar1;
    func_0x00010c24b580();
    if (0 < lVar2) {
      func_0x00010c24b580();
    }
    lVar2 = lVar1;
    func_0x00010c24ba40();
    if (0 < lVar2) {
      func_0x00010c24ba40();
    }
    puVar5 = PTR_PTR_1126ca6f8;
    _objc_alloc(PTR_PTR_1126ca6f8);
    func_0x00010c052aa0(param_1 * 1000.0);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a8496c; end: 107a84a67;  */

void FUN_107a8496c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d6258;
    _objc_alloc(PTR_PTR_1126d6258);
    lVar2 = param_1;
    func_0x00010c0ed760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0ed780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0ed7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032520(puVar1,param_2,lVar2,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126d6260;
    _objc_alloc(PTR_PTR_1126d6260);
    func_0x00010bffaee0();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a84a68; end: 107a85187;  */

void FUN_107a84a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12)

{
  undefined8 uVar1;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_1);
  uStack_65 = param_12;
  FUN_107a831a8();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x107a84bf0;
  puStack_98 = &UNK_1109f83e0;
  uStack_70 = param_9;
  uStack_64 = param_10;
  uStack_90 = param_3;
  uStack_88 = param_2;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_68 = param_6;
  uStack_67 = param_4;
  uStack_66 = param_5;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x000100504554(param_1,&puStack_b0);
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a85188; end: 107a85287;  */

void FUN_107a85188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d5188;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_107a8856c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_107a84774(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c23ce60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a85288; end: 107a8542f;  */

void FUN_107a85288(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c24b240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c24b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c5c0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_1;
    func_0x00010c24b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f680();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar5 = param_1;
    func_0x00010c24b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a980();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126d6268;
    _objc_alloc(PTR_PTR_1126d6268);
    func_0x00010c00ff00();
    _objc_release(puVar7);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a85430; end: 107a85557;  */

void FUN_107a85430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107a85558;
  puStack_88 = &UNK_1109f8410;
  puStack_58 = &uStack_60;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_5);
  uVar1 = param_1;
  uStack_78 = param_5;
  puStack_70 = &uStack_60;
  uStack_68 = param_4;
  func_0x000100504554(param_1,&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a85558; end: 107a85f13;  */

void FUN_107a85558(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  int iVar40;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bfbaac0();
  if ((int)lVar3 != 0) {
    uVar39 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126b12d0;
    func_0x00010c0b6200(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar39);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puStack_70 = (undefined *)0x0;
    goto LAB_107a856c8;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
    iVar40 = (int)*(undefined8 *)(param_1 + 0x28);
    lVar3 = param_2;
    func_0x00010bf3cf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (iVar40 != 0) {
      _objc_release(lVar3);
      goto LAB_107a85698;
    }
    iVar40 = (int)*(undefined8 *)(param_1 + 0x28);
    lVar4 = param_2;
    func_0x00010c15f2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (iVar40 != 0) goto LAB_107a85698;
  }
  else {
LAB_107a85698:
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  puStack_70 = PTR_PTR_1126d51a8;
  _objc_alloc();
  func_0x00010c01fba0(0);
LAB_107a856c8:
  lVar3 = param_2;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = 0;
    puStack_78 = (undefined *)0x0;
  }
  else {
    lVar4 = param_2;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070680();
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d060();
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0676a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      puStack_78 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126cc288;
      _objc_alloc();
      func_0x00010c0676c0();
      func_0x00010c29f0c0();
      func_0x00010c29f0c0();
      func_0x00010c151b20();
      func_0x00010c25aca0();
      func_0x00010c280780();
      func_0x00010c280760();
      func_0x00010c243e80();
      func_0x00010c2652a0();
      func_0x00010c264600();
      func_0x00010c269000();
      func_0x00010c268e00();
      func_0x00010bf1f680();
      func_0x00010c22a980();
      func_0x00010c25fe00();
      func_0x00010c0f2a80();
      func_0x00010c0f2a20();
      func_0x00010bf41980();
      func_0x00010bf41920();
      func_0x00010c01e400(puVar1);
      puStack_78 = PTR_PTR_1126d5180;
      _objc_alloc();
      lVar4 = param_2;
      func_0x00010c0b8240(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b940();
      func_0x00010c046240();
      _objc_release(lVar4);
      _objc_release(puVar1);
    }
    _objc_release(lVar5);
  }
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  lVar4 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  FUN_107a85f14(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x000107a838d0(param_2,lVar3,lVar7 != 0);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x000107d22a6c(param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x000107d22fdc(param_2,1,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  FUN_107a83ab4();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  FUN_107a83bc8();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  FUN_107a83ca4();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  FUN_107a83d44();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ec0();
  lVar16 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x000107a83e9c();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2;
  FUN_107a81fd4();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x000107a82058();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141c40();
  lVar23 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2;
  FUN_107a85288(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_2;
  FUN_107a83f7c();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_2;
  FUN_107a8408c();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_2;
  FUN_107a843fc();
  _objc_retainAutoreleasedReturnValue();
  FUN_107a820f0(param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c14ede0();
  lVar31 = param_2;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2;
  FUN_107a8450c();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2;
  FUN_107a8460c();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b820();
  lVar35 = param_2;
  FUN_107a84774();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_2;
  FUN_107a8496c();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  lVar38 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1029e0();
  func_0x00010c044c40();
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
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
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puStack_70);
  _objc_release(lVar3);
  _objc_release(puStack_78);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a85f14; end: 107a860df;  */

void FUN_107a85f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107a88514;
  uStack_60 = 0x107a88524;
  uStack_58 = 0;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0c1340(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a860e0; end: 107a8619b;  */

void FUN_107a860e0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined1 uStack_36;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uStack_36 = param_3;
  FUN_107a831a8();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a8619c;
  puStack_48 = &UNK_1109f8440;
  uStack_38 = 0x101;
  uStack_40 = param_2;
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x000100504554(param_1,&puStack_60);
  _objc_release(param_1);
  _objc_release(uStack_40);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a8619c; end: 107a8673b;  */

void FUN_107a8619c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_107a85188(param_2,0,*(undefined8 *)(param_1 + 0x20),0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x000107a838d0(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x000107d22a6c(param_2,*(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29));
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x000107d22fdc(param_2,1,*(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29));
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  FUN_107a83ab4();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_107a83bc8();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  FUN_107a83ca4();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  FUN_107a83d44();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ec0();
  uVar13 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_2;
  func_0x000107a83e9c();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_2;
  FUN_107a81fd4();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_2;
  func_0x000107a82058();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141c40();
  uVar20 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_2;
  FUN_107a85288(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_2;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_2;
  FUN_107a83f7c();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_2;
  FUN_107a8408c();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_2;
  FUN_107a843fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24be20();
  func_0x00010c14ede0();
  uVar28 = param_2;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_2;
  FUN_107a8450c();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_2;
  FUN_107a8460c();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b820();
  uVar32 = param_2;
  FUN_107a84774();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_2;
  FUN_107a8496c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaac0();
  uVar34 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  uVar35 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1029e0();
  func_0x00010c044c40();
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a8673c; end: 107a8682b;  */

void FUN_107a8673c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107a8682c;
  puStack_68 = &UNK_1109f8470;
  uStack_60 = param_5;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_5);
  func_0x000100504554(param_1,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107a8682c; end: 107a86ee7;  */

void FUN_107a8682c(long param_1,long param_2)

{
  long lVar1;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined *puStack_80;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfbaac0();
  if ((int)lVar1 != 0) {
    uVar36 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b12d0;
    func_0x00010c0b6220(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar36);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  lVar1 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(uVar36);
  lVar5 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf0aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puStack_80 = PTR_PTR_1126d5188;
  if (lVar6 == 0) {
    puStack_80 = (undefined *)0x0;
  }
  else {
    lVar5 = lVar6;
    func_0x00010c22c3a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    FUN_107a8856c(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    FUN_107a84774(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ce60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
  }
  _objc_release(lVar6);
  _objc_release(uVar36);
  _objc_release(param_2);
  lVar5 = param_2;
  func_0x000107a838d0(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x000107d22a6c(param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x000107d22fdc(param_2,1,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  FUN_107a83ab4();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  FUN_107a83bc8();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  FUN_107a83ca4();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  FUN_107a83d44();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ec0();
  lVar13 = param_2;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x000107a83e9c();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  FUN_107a81fd4();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2;
  func_0x000107a82058();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2;
  FUN_107a85288(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  FUN_107a83f7c();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2;
  FUN_107a8408c();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_2;
  FUN_107a843fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24be20();
  func_0x00010c14ede0();
  lVar28 = param_2;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_2;
  FUN_107a8450c();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_2;
  FUN_107a8460c();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b820();
  lVar32 = param_2;
  FUN_107a84774();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2;
  FUN_107a8496c();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  lVar35 = param_2;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1029e0();
  func_0x00010c044c40();
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
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
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puStack_80);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a86ee8; end: 107a86fc7;  */

void FUN_107a86ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a86fc8;
  puStack_50 = &UNK_1109f84a0;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100504554(param_1,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107a86fc8; end: 107a8715f;  */

void FUN_107a86fc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_107a82430(param_2,PTR____NSDictionary0__struct_11034ab58,*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_1 + 0x30);
  uVar2 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar11 != 0) {
    unaff_x25 = *(undefined8 *)(param_1 + 0x30);
    unaff_x24 = param_2;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = unaff_x25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = 0;
  uVar10 = 0;
  uVar4 = param_2;
  uVar6 = uVar1;
  puVar9 = puVar3;
  FUN_107a82990();
  uVar8 = SUB81(puVar9,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    _objc_release(puVar3);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
  }
  _objc_release(lVar11);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_68 = FUN_107a87160;
    uStack_a0 = unaff_x24;
    uStack_98 = uVar4;
    lStack_90 = lVar11;
    uStack_88 = uVar2;
    uStack_80 = uVar1;
    uStack_78 = param_2;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(uVar6);
    _objc_retain(uVar10);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107a87230;
    puStack_c0 = &UNK_1109f84d0;
    uStack_b8 = uVar6;
    uStack_b0 = uVar10;
    uStack_a8 = uVar7;
    uStack_a7 = uVar8;
    _objc_retain(uVar10);
    _objc_retain(uVar6);
    func_0x000100504554(uVar5,&puStack_d8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uVar10);
    _objc_release(uVar6);
    uVar4 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107a87160; end: 107a8722f;  */

void FUN_107a87160(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a87230;
  puStack_60 = &UNK_1109f84d0;
  uStack_58 = param_2;
  uStack_50 = param_5;
  uStack_48 = param_3;
  uStack_47 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x000100504554(param_1,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107a87230; end: 107a8739f;  */

void FUN_107a87230(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar9 = *(long *)(param_1 + 0x20);
  puVar1 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar9 != 0) {
    unaff_x24 = *(undefined8 *)(param_1 + 0x20);
    unaff_x23 = param_2;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = (ulong)*(byte *)(param_1 + 0x30);
  uVar7 = (ulong)*(byte *)(param_1 + 0x31);
  puVar3 = param_2;
  puVar5 = puVar2;
  FUN_107a82990(param_2,0,0,puVar2,uVar6,uVar7,*(undefined8 *)(param_1 + 0x28),0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    _objc_release(puVar2);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  _objc_release(lVar9);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    _objc_retain(puVar5);
    puVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126cc618;
    _objc_alloc(PTR_PTR_1126cc618);
    puVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c25b340(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    FUN_107a87160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c05b080(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar7);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a873a0; end: 107a87657;  */

void FUN_107a873a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126cc618;
  _objc_alloc(PTR_PTR_1126cc618);
  lVar1 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c25b340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_107a87160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c05b080(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a87658; end: 107a8775f;  */

void FUN_107a87658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d5bf0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c11ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25b340(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  FUN_107a87160(uVar3,param_4,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c007fe0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a87760; end: 107a87fe7;  */

void FUN_107a87760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x000108f418c8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000108f41710();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107a87a14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x000108f4a260(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cc620;
  _objc_alloc();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar4);
  uVar6 = uVar4;
  func_0x000108f41ca8();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107a821e0;
  puStack_98 = &UNK_1109f8380;
  uStack_90 = uVar6;
  uStack_88 = param_4;
  uStack_80 = param_6;
  uStack_78 = param_3;
  uStack_70 = uVar1;
  uStack_68 = param_7;
  _objc_retain(param_7);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(uVar6);
  uVar7 = uVar4;
  func_0x000100504554(uVar4,&puStack_b0);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c032680(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a87fe8; end: 107a8819b;  */

undefined8 FUN_107a87fe8(ulong param_1)

{
  if (param_1 < 7) {
    return *(undefined8 *)(&UNK_10dee0d10 + param_1 * 8);
  }
  return 1;
}



/* Entry: 107a8819c; end: 107a8830f;  */

void FUN_107a8819c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c27dd80();
  if (uVar1 < 7) {
    uVar3 = *(undefined8 *)(&UNK_10dee0d10 + uVar1 * 8);
  }
  else {
    uVar3 = 1;
  }
  puVar2 = PTR_PTR_1126b4d28;
  _objc_alloc(PTR_PTR_1126b4d28);
  uVar1 = param_1;
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c04dcc0(puVar2,param_2,uVar1,uVar3,0,1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a88310; end: 107a8831b;  */

void FUN_107a88310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107a88318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107a8831c; end: 107a88383;  */

void FUN_107a8831c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107a88384; end: 107a883e3;  */

void FUN_107a88384(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = param_2;
  func_0x00010c07f5e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010c077620(), (int)uVar1 != 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a883e4; end: 107a883f3;  */

void FUN_107a883e4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107a883f4; end: 107a88513;  */

void FUN_107a883f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107a88514;
  uStack_40 = 0x107a88524;
  uVar2 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  uStack_38 = uVar2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a88514; end: 107a8852b;  */

void FUN_107a88514(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a8852c; end: 107a8856b;  */

void FUN_107a8852c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a8856c; end: 107a8868f;  */

void FUN_107a8856c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b5b20;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf1f6c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf1f6c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f9a0();
  uVar5 = param_2;
  uVar7 = param_1;
  func_0x00010bf1f6c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f740();
  uVar6 = param_2;
  uVar8 = uVar7;
  func_0x00010bf1f6c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c123160(uVar6);
  func_0x00010c04d920(param_1,uVar7,uVar8,puVar1,param_3,uVar3,0,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a88690; end: 107a8873f;  */

void FUN_107a88690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d51d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c25ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250f20(param_3);
  uVar3 = param_1;
  func_0x00010bf95780(param_3);
  func_0x00010c104340(param_3);
  _objc_release(param_3);
  func_0x00010c04eec0(param_1,uVar3,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a88740; end: 107a8888b;  */

void FUN_107a88740(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a8888c; end: 107a8897f;  */

void FUN_107a8888c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  func_0x00010c27dd80();
  func_0x00010c1143e0();
  puVar2 = PTR_PTR_1126d5188;
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf627a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a88980; end: 107a88a9b;  */

void FUN_107a88980(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08fa60();
  lVar2 = lVar1;
  if (lVar6 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c15f2e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126d5188;
  lVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f5e0(param_2);
  func_0x00010c24c380(param_2);
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_107a84774(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ee4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a88a9c; end: 107a88b4f;  */

void FUN_107a88a9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126d5188;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14bd80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a88b50; end: 107a88c7f; -[SCSendFutureImagePreviewModel initWithImageFuture:shareType:] */

undefined8 *
FUN_107a88b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f9938;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
  }
  _objc_initWeak(auStack_58,puVar1);
  uVar2 = puVar1[1];
  puVar3 = auStack_60;
  _objc_copyWeak(puVar3,auStack_58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a88c80; end: 107a88cfb;  */

void FUN_107a88c80(double param_1,double param_2,long param_3,long param_4)

{
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (((param_4 != 0) && (param_3 != 0)) && (func_0x00010c23d0a0(param_4), 0.0 < param_2)) {
    func_0x00010c23d0a0(param_4);
    func_0x00010c23d0a0(param_4);
    *(double *)(param_3 + 0x18) = param_1 / param_2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a88cfc; end: 107a88d03; -[SCSendFutureImagePreviewModel viewStyle] */

undefined8 FUN_107a88cfc(void)

{
  return 0;
}



/* Entry: 107a88d04; end: 107a88d17; -[SCSendFutureImagePreviewModel mediaViewAspectRatio] */

double FUN_107a88d04(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x18);
  if (dVar1 <= 0.0) {
    dVar1 = 1.0;
  }
  return dVar1;
}



/* Entry: 107a88d18; end: 107a88d47; -[SCSendFutureImagePreviewModel mediaView] */

void FUN_107a88d18(void)

{
  _objc_alloc(PTR_PTR_1126d6270);
  func_0x00010c01ca20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a88d48; end: 107a88d4f; -[SCSendFutureImagePreviewModel shareType] */

undefined8 FUN_107a88d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a88d50; end: 107a88d5b; -[SCSendFutureImagePreviewModel .cxx_destruct] */

void FUN_107a88d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a88d5c; end: 107a88e5b; -[SCSendImageMediaView initWithImageFuture:] */

undefined8 * FUN_107a88d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9940;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  _objc_initWeak(auStack_48,puVar1);
  puVar2 = auStack_50;
  _objc_copyWeak(puVar2,auStack_48);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a88e5c; end: 107a88eab;  */

void FUN_107a88e5c(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1a9f00();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a88eac; end: 107a88f57; -[SCSendImagePreviewModel initWithImage:shareType:textOnly:] */

undefined1 *
FUN_107a88eac(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_40;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar2 = (undefined1 **)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126f9948;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar2 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)((long)ppuVar2 + 8);
      *(long *)((long)ppuVar2 + 8) = param_3;
      _objc_release(uVar1);
      *(undefined8 *)((long)ppuVar2 + 0x10) = param_4;
      *(undefined1 *)((long)ppuVar2 + 0x18) = param_5;
    }
    _objc_retain(ppuVar2);
    param_1 = (undefined1 *)ppuVar2;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar2;
}



/* Entry: 107a88f58; end: 107a88f6b; -[SCSendImagePreviewModel viewStyle] */

undefined8 FUN_107a88f58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107a88f6c; end: 107a8900b; -[SCSendImagePreviewModel mediaViewAspectRatio] */

double FUN_107a88f6c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + 8));
  if (param_2 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = param_3 / param_4;
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c23d0a0(*(undefined8 *)(param_5 + 8));
    func_0x00010c23d0a0(*(undefined8 *)(param_5 + 8));
    param_1 = param_1 / param_2;
  }
  return param_1;
}



/* Entry: 107a8900c; end: 107a8903b; -[SCSendImagePreviewModel mediaView] */

void FUN_107a8900c(void)

{
  _objc_alloc(PTR_PTR_1126d6270);
  func_0x00010c01bf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a8903c; end: 107a89043; -[SCSendImagePreviewModel shareType] */

undefined8 FUN_107a8903c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a89044; end: 107a8904f; -[SCSendImagePreviewModel .cxx_destruct] */

void FUN_107a89044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a89050; end: 107a890af; -[SCSpotlightDefaultImageProvider initWithImageClass:] */

undefined1 * FUN_107a89050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a890b0; end: 107a89137; -[SCSpotlightDefaultImageProvider getImageWithName:] */

void FUN_107a890b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_imageNamed__1125d7a50);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe8220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107a89138; end: 107a8913f; -[SCSpotlightDefaultImageProvider imageClass] */

undefined8 FUN_107a89138(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a89140; end: 107a8914b; -[SCSpotlightDefaultImageProvider .cxx_destruct] */

void FUN_107a89140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a8914c; end: 107a891ef; -[SCLensModularReplyCameraPresenter initWithLensModularReplyCameraScopeExposer:scopeServices:] */

undefined1 *
FUN_107a8914c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9958;
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



/* Entry: 107a891f0; end: 107a891fb; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:] */

void FUN_107a891f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620780);
  return;
}



/* Entry: 107a891fc; end: 107a89207; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:preselectedLensId:onCarouselEndBlock:] */

void FUN_107a891fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620780);
  return;
}



/* Entry: 107a89208; end: 107a8925f; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:dismissBlock:] */

void FUN_107a89208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf23660(uVar1,param_2,param_3,param_5,param_4,param_1,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a89260; end: 107a89267; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:singleLensModeEnabled:dismissBlock:] */

void FUN_107a89260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620780);
  return;
}



/* Entry: 107a89268; end: 107a89273; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:lensModularCameraScopeConfiguration:] */

void FUN_107a89268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620780);
  return;
}



/* Entry: 107a89274; end: 107a89303; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:eventsHandler:] */

void FUN_107a89274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_6);
  func_0x00010c10b580(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a89304; end: 107a8930f; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:enableARBar:] */

void FUN_107a89304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620780);
  return;
}



/* Entry: 107a89310; end: 107a89313; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:preselectedLensId:onCarouselEndBlock:enableARBar:] */

void FUN_107a89310(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_1126207b8);
  return;
}



/* Entry: 107a89314; end: 107a89317; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:dismissBlock:enableARBar:] */

void FUN_107a89314(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620780);
  return;
}



/* Entry: 107a89318; end: 107a8931b; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:activationSource:singleLensModeEnabled:dismissBlock:enableARBar:] */

void FUN_107a89318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_112620790);
  return;
}



/* Entry: 107a8931c; end: 107a8931f; -[SCLensModularReplyCameraPresenter presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:eventsHandler:enableARBar:] */

void FUN_107a8931c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentCameraWithPresentingViewC_1126207c8);
  return;
}



/* Entry: 107a89320; end: 107a89323; -[SCLensModularReplyCameraPresenter dismissCameraAnimated:] */

void FUN_107a89320(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeLensModularReplyCameraSco_112580b38);
  return;
}



/* Entry: 107a89324; end: 107a89327; -[SCLensModularReplyCameraPresenter dismissCameraWithError:] */

void FUN_107a89324(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showAlertAndRemoveScopeForError_11258b7d0);
  return;
}



/* Entry: 107a89328; end: 107a8932b; -[SCLensModularReplyCameraPresenter willCompleteLensReplyCameraScope:] */

void FUN_107a89328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeLensModularReplyCameraSco_112580b38);
  return;
}



/* Entry: 107a8932c; end: 107a893b7; -[SCLensModularReplyCameraPresenter willCompleteLensReplyCameraScope:error:] */

void FUN_107a8932c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071ae0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010beb78a0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a893b8; end: 107a893ff; -[SCLensModularReplyCameraPresenter lensReplyCameraScope:didSendEvent:] */

void FUN_107a893b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d09a0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a89400; end: 107a89447; -[SCLensModularReplyCameraPresenter _removeLensModularReplyCameraScope] */

void FUN_107a89400(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}


