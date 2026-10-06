/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ca0140; end: 106ca023f;  */

void FUN_106ca0140(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  puVar3 = auStack_c8;
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar4);
        }
        if (*(long *)(lStack_108 + lVar6 * 8) != 0) {
          func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar3 = auStack_c8;
      lVar1 = lVar4;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106ca0240;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = lVar4;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if ((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined1 *)0x0)) {
    uVar5 = *(undefined8 *)(lVar1 + 8);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106ca0304;
    puStack_160 = &UNK_110848ba8;
    lStack_158 = lVar1;
    _objc_retain(puVar2);
    puStack_150 = (undefined1 *)puVar2;
    _objc_retain(puVar3);
    puStack_148 = puVar3;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_178);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 106ca0240; end: 106ca0303; -[SCContextPostSnapChatResetTracker onSnapViewed:snapId:] */

void FUN_106ca0240(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ca0304;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca0304; end: 106ca036b;  */

void FUN_106ca0304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0e00e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,puVar1,
                        *(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010befa120(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ca036c; end: 106ca04a3; -[SCContextPostSnapChatResetTracker viewedSnapsForConversation:completion:] */

void FUN_106ca036c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca04a4; end: 106ca04d3; -[SCContextPostSnapChatResetTracker .cxx_destruct] */

void FUN_106ca04a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ca04d4; end: 106ca0547; -[SCContextPostSnapCleanupJob initWithPostSnapDataStore:] */

undefined1 * FUN_106ca04d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6188;
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



/* Entry: 106ca0548; end: 106ca064b; -[SCContextPostSnapCleanupJob processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106ca0548(long param_1)

{
  long lVar1;
  long in_x5;
  
  _objc_retain(in_x5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,2,0);
  }
  else {
    _objc_retain(in_x5);
    func_0x00010bf3a4c0(lVar1);
    _objc_retain(in_x5);
    func_0x00010bf3a620(lVar1);
    _objc_release(in_x5);
    _objc_release(in_x5);
  }
  _objc_release(lVar1);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106ca064c; end: 106ca0673;  */

void FUN_106ca064c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ca065c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 106ca0674; end: 106ca067f; -[SCContextPostSnapCleanupJob .cxx_destruct] */

void FUN_106ca0674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ca0680; end: 106ca0753; -[SCContextPostSnapSendingDataCoordinator initWithUserSession:conversationDataUpdateAnnouncer:conversationManager:actionBarDataFetcher:] */

undefined8
FUN_106ca0680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c05d4e0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106ca0754; end: 106ca089b; -[SCContextPostSnapSendingDataCoordinator initWithUserSession:conversationDataUpdateAnnouncer:conversationManager:actionBarDataFetcher:performer:] */

undefined1 *
FUN_106ca0754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f6190;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ca089c; end: 106ca089f; -[SCContextPostSnapSendingDataCoordinator didCreateConversation:] */

void FUN_106ca089c(void)

{
  return;
}



/* Entry: 106ca08a0; end: 106ca08ab; -[SCContextPostSnapSendingDataCoordinator didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_106ca08a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be817f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__processMessagesForContextData_c_11257df98,param_5,param_3);
  return;
}



/* Entry: 106ca08ac; end: 106ca08af; -[SCContextPostSnapSendingDataCoordinator didRemoveConversation:] */

void FUN_106ca08ac(void)

{
  return;
}



/* Entry: 106ca08b0; end: 106ca08b3; -[SCContextPostSnapSendingDataCoordinator didSendStart:] */

void FUN_106ca08b0(void)

{
  return;
}



/* Entry: 106ca08b4; end: 106ca08b7; -[SCContextPostSnapSendingDataCoordinator didSendComplete:] */

void FUN_106ca08b4(void)

{
  return;
}



/* Entry: 106ca08b8; end: 106ca08bb; -[SCContextPostSnapSendingDataCoordinator didConfirmConversationServerCreation:] */

void FUN_106ca08b8(void)

{
  return;
}



/* Entry: 106ca08bc; end: 106ca091f; -[SCContextPostSnapSendingDataCoordinator didConversationReset:messages:] */

void FUN_106ca08bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be817e0(param_1,param_2,param_4,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ca0920; end: 106ca095b; -[SCContextPostSnapSendingDataCoordinator beginObservingDataUpdates] */

void FUN_106ca0920(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ca095c; end: 106ca0997; -[SCContextPostSnapSendingDataCoordinator endObservingDataUpdates] */

void FUN_106ca095c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ca0998; end: 106ca0abb; -[SCContextPostSnapSendingDataCoordinator _processMessagesForContextData:conversationId:] */

void FUN_106ca0998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca0abc; end: 106ca0dfb;  */

void FUN_106ca0abc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **unaff_x28;
  long lStack_270;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    lVar8 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar8);
    lStack_270 = lVar8;
    func_0x00010bf52a60();
    if (lStack_270 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      lVar6 = *plStack_1c0;
      unaff_x28 = &puStack_258;
      do {
        lVar7 = 0;
        do {
          if (*plStack_1c0 != lVar6) {
            _objc_enumerationMutation(lVar8);
          }
          uVar13 = *(undefined8 *)(lStack_1c8 + lVar7 * 8);
          lVar2 = lVar1;
          func_0x00010be3fe40();
          if ((int)lVar2 == 0) goto LAB_106ca0d88;
          lVar2 = lVar1;
          func_0x00010bebd9e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf529e0();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar3 == 0) {
            _objc_release(lVar2);
            goto LAB_106ca0d88;
          }
          func_0x00010bf6e760(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cb5a0();
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(uVar13);
          uVar13 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 == 0) {
            lVar11 = lVar1;
            func_0x00010be15680();
            _objc_retainAutoreleasedReturnValue();
          }
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          lStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          plStack_200 = (long *)0x0;
          _objc_retain(lVar2);
          lVar3 = lVar2;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar10 = *plStack_200;
            do {
              lVar12 = 0;
              do {
                if (*plStack_200 != lVar10) {
                  _objc_enumerationMutation(lVar2);
                }
                uVar9 = *(undefined8 *)(lStack_208 + lVar12 * 8);
                puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_250 = 0xc2000000;
                pcStack_248 = FUN_106ca0dfc;
                puStack_240 = &UNK_11096ee20;
                param_2 = param_1 + 0x38;
                _objc_copyWeak(auStack_218);
                uStack_220 = *(undefined8 *)(param_1 + 0x30);
                uStack_238 = uVar9;
                uStack_230 = uVar13;
                puStack_228 = puVar5;
                func_0x00010c297260(lVar11);
                _objc_destroyWeak(auStack_218);
                lVar12 = lVar12 + 1;
              } while (lVar3 != lVar12);
              lVar3 = lVar2;
              func_0x00010bf52a60();
            } while (lVar3 != 0);
          }
          _objc_release(lVar2);
          _objc_release(uVar13);
          _objc_release(puVar5);
          _objc_release(lVar2);
          lVar7 = lVar7 + 1;
        } while (lVar7 != lStack_270);
        lStack_270 = lVar8;
        func_0x00010bf52a60();
      } while (lStack_270 != 0);
    }
LAB_106ca0d88:
    _objc_release(lVar8);
    _objc_release(lVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x28 + 8);
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar1 = lVar1 + 0x40;
    _objc_loadWeakRetained();
    if ((param_2 != 0) && (lVar1 != 0)) {
      func_0x00010c074920(param_2);
      lVar8 = param_2;
      func_0x00010c0f4aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar8;
      func_0x00010bf51e00();
      func_0x00010be13de0(lVar1);
      _objc_release(lVar11);
      _objc_release(lVar8);
    }
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106ca0dfc; end: 106ca0ec7;  */

void FUN_106ca0dfc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c074920(param_2);
    lVar1 = param_2;
    func_0x00010c0f4aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    func_0x00010be13de0(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ca0ec8; end: 106ca0fa7; -[SCContextPostSnapSendingDataCoordinator _fetchedConversationWithId:] */

void FUN_106ca0ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ca0fa8;
  puStack_40 = &UNK_110907c78;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bfa5f80(uVar2,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ca0fa8; end: 106ca101b;  */

void FUN_106ca0fa8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if ((param_2 != 0) && (param_3 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e81b98,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ca101c; end: 106ca119b; -[SCContextPostSnapSendingDataCoordinator _snapdocsForMessage:] */

undefined * FUN_106ca101c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_40;
  long lStack_38;
  
  puVar13 = PTR_PTR_1126ba668;
  ppuVar11 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar1 = param_3;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c008360();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = puVar13;
  func_0x00010bf4ce20();
  puVar4 = puVar13;
  if ((int)puVar3 == 3) {
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
LAB_106ca1158:
    _objc_release(puVar4);
  }
  else {
    puVar12 = (undefined *)0x0;
    if ((int)puVar3 == 0xb) {
      func_0x00010c2453e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar13;
        func_0x00010c2453e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_40 = puVar3;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar10 = (undefined1 *)ppuVar11;
      }
      goto LAB_106ca1158;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar1 = puVar10;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dac0();
  if (puVar2 == (undefined1 *)0x3) {
    puVar2 = puVar10;
    func_0x00010c252440();
    _objc_release(puVar1);
    if (puVar2 == (undefined1 *)0x2) {
      puVar13 = (undefined *)0x1;
      goto LAB_106ca1390;
    }
  }
  else {
    _objc_release(puVar1);
  }
  uVar5 = *(undefined8 *)(puVar13 + 8);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c0720c0();
  if (((ulong)puVar6 & 1) == 0) {
LAB_106ca1374:
    _objc_release(puVar2);
LAB_106ca137c:
    puVar13 = (undefined *)0x0;
LAB_106ca1380:
    _objc_release(puVar1);
  }
  else {
    puVar6 = puVar10;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf4dac0();
    if (puVar7 != (undefined1 *)0x1) {
LAB_106ca136c:
      _objc_release(puVar6);
      goto LAB_106ca1374;
    }
    puVar7 = puVar10;
    func_0x00010c252440();
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar7 == (undefined1 *)0x2) {
      puVar2 = puVar10;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c157500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bf529e0();
      if ((undefined1 *)0x1 < puVar2) goto LAB_106ca137c;
      puVar2 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined1 *)0x0) {
        puVar6 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0720c0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar2);
        if ((int)puVar8 == 0) goto LAB_106ca137c;
      }
      puVar2 = puVar10;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0e9d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      if (puVar7 != (undefined1 *)0x0) goto LAB_106ca136c;
      puVar7 = puVar10;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c14b820();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf529e0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
      if (puVar9 != (undefined1 *)0x0) goto LAB_106ca137c;
      puVar13 = (undefined *)0x1;
      goto LAB_106ca1380;
    }
    puVar13 = (undefined *)0x0;
  }
  _objc_release(uVar5);
LAB_106ca1390:
  _objc_release(puVar10);
  return puVar13;
}



/* Entry: 106ca119c; end: 106ca1413; -[SCContextPostSnapSendingDataCoordinator _isEligibleForFetchingContextDataMessage:] */

undefined8 FUN_106ca119c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4dac0();
  if (uVar2 == 3) {
    uVar2 = param_3;
    func_0x00010c252440();
    _objc_release(uVar1);
    if (uVar2 == 2) {
      uVar8 = 1;
      goto LAB_106ca1390;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
LAB_106ca1374:
    _objc_release(uVar2);
LAB_106ca137c:
    uVar8 = 0;
LAB_106ca1380:
    _objc_release(uVar1);
  }
  else {
    uVar4 = param_3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4dac0();
    if (uVar5 != 1) {
LAB_106ca136c:
      _objc_release(uVar4);
      goto LAB_106ca1374;
    }
    uVar5 = param_3;
    func_0x00010c252440();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar5 == 2) {
      uVar2 = param_3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c157500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010bf529e0();
      if (1 < uVar2) goto LAB_106ca137c;
      uVar2 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 != 0) {
        uVar4 = uVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if ((int)uVar6 == 0) goto LAB_106ca137c;
      }
      uVar2 = param_3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e9d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      if (uVar5 != 0) goto LAB_106ca136c;
      uVar5 = param_3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c14b820();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if (uVar7 != 0) goto LAB_106ca137c;
      uVar8 = 1;
      goto LAB_106ca1380;
    }
    uVar8 = 0;
  }
  _objc_release(uVar3);
LAB_106ca1390:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 106ca1414; end: 106ca15a3; -[SCContextPostSnapSendingDataCoordinator _fetchSessionParamsAndFetchContextData:isGroupConversation:conversationId:chatMessageId:currentUserId:participants:] */

void FUN_106ca1414(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_7);
  uStack_60 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca15a4; end: 106ca174f;  */

void FUN_106ca15a4(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar11 = *(ulong *)(param_1 + 0x20);
    _objc_retain(uVar11);
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      lVar12 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar12);
      lVar3 = lVar12;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar13 = uVar11, lVar3 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar12);
          }
          uVar13 = *(ulong *)(lVar14 * 8);
          uVar4 = uVar13;
          func_0x00010c0720c0();
          if ((uVar4 & 1) == 0) {
            func_0x00010bf51e00();
            _objc_release(uVar11);
            goto LAB_106ca16b8;
          }
          lVar14 = lVar14 + 1;
        } while (lVar3 != lVar14);
        lVar3 = lVar12;
        func_0x00010bf52a60();
      }
LAB_106ca16b8:
      _objc_release(lVar12);
      uVar11 = uVar13;
    }
    param_3 = *(undefined **)(param_1 + 0x30);
    puVar5 = PTR_PTR_1126b2390;
    func_0x00010c0f3a40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      param_3 = puVar5;
      func_0x00010be13260(lVar2);
    }
    _objc_release(puVar5);
    _objc_release(uVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar5 = param_3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_1a8,lVar2);
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_106ca1928;
  puStack_1c0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_1b0,auStack_1a8);
  ppuVar6 = &puStack_1d8;
  puStack_1b8 = puVar5;
  _objc_retainBlock();
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0e0980();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1e0,auStack_1a8);
  uVar9 = uVar8;
  func_0x00010c25ff20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x30));
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_1e0);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca1750; end: 106ca1927; -[SCContextPostSnapSendingDataCoordinator _fetchPostSnapActionsDataForSessionParams:] */

void FUN_106ca1750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106ca1928;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar2 = &puStack_a8;
  uStack_88 = uVar1;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0980();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca1928; end: 106ca19df;  */

void FUN_106ca1928(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ca19e0; end: 106ca19eb;  */

void FUN_106ca19e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ca19e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106ca19ec; end: 106ca1a4b; -[SCContextPostSnapSendingDataCoordinator .cxx_destruct] */

void FUN_106ca19ec(long param_1)

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



/* Entry: 106ca1a4c; end: 106ca1b8b; -[SCContextPostSnapDataFetcher initWithDocContext:resetTracker:nglStudySettings:] */

undefined1 *
FUN_106ca1a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f6198;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ca1b8c; end: 106ca1e2f; -[SCContextPostSnapDataFetcher conversationActionsObservable:] */

void FUN_106ca1b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 uStack_e9;
  undefined **ppuStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined1 *puStack_b0;
  undefined ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126ae568;
    _objc_alloc_init(PTR_PTR_1126ae568);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d1f90);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8fc0(auStack_78,lVar2);
    puVar4 = &uStack_e9;
    FUN_106ca7e2c();
    uStack_158 = 0xf;
    uStack_148 = 0x100;
    _objc_retain(param_3);
    ppuStack_160 = &PTR_DAT_110862760;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    plStack_100 = (long *)0x0;
    uStack_108 = 0;
    plStack_f8 = (long *)0x0;
    uStack_ce = *(undefined2 *)(puVar4 + 0x1a);
    uStack_e0 = 10;
    uStack_d0 = 0x100;
    ppuStack_e8 = &PTR_SUB_110862700;
    uStack_98 = 0;
    uStack_a0 = 0;
    plStack_88 = (long *)0x0;
    uStack_90 = 0;
    plStack_80 = (long *)0x0;
    puStack_178 = (undefined8 *)0x0;
    puStack_170 = (undefined8 *)0x0;
    uStack_168 = 0;
    uStack_17c = 0;
    puVar5 = auStack_78;
    uStack_130 = param_3;
    puStack_b0 = puVar4;
    pppuStack_a8 = &ppuStack_160;
    func_0x000108c7f678(puVar5,&ppuStack_e8,&puStack_178,&uStack_17c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_178 != (undefined8 *)0x0) {
      puStack_170 = puStack_178;
      __ZdlPv();
    }
    plVar1 = plStack_80;
    ppuStack_e8 = &PTR_SUB_110862700;
    plStack_80 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_178 = &uStack_a0;
    func_0x000100105004(&puStack_178);
    plVar1 = plStack_f8;
    ppuStack_160 = &PTR_DAT_110862760;
    plStack_f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_100;
    plStack_100 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_178 = &uStack_118;
    func_0x000100105004(&puStack_178);
    _objc_release(uStack_130);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uVar3);
    puVar6 = puVar5;
    func_0x00010c0b8600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106ca1e30; end: 106ca1e8b;  */

void FUN_106ca1e30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ca1e8c; end: 106ca2013; -[SCContextPostSnapDataFetcher fetchActionsForConversationId:isGroupConversation:completionPerformer:completion:] */

void FUN_106ca1e8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 != 0) {
    _objc_initWeak(auStack_58,param_2);
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(param_4);
    uStack_60 = param_5;
    _objc_retain(param_7);
    _objc_retain(param_6);
    uStack_68 = param_1;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 106ca2014; end: 106ca2397;  */

void FUN_106ca2014(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_106ca2398;
    uStack_80 = 0x106ca23a8;
    uStack_78 = 0;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_106ca2398;
    uStack_b0 = 0x106ca23a8;
    uStack_a8 = 0;
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_106ca2398;
    uStack_e0 = 0x106ca23a8;
    uStack_d8 = 0;
    lVar3 = lVar2;
    puStack_98 = &uStack_a0;
    _dispatch_group_create();
    _dispatch_group_enter();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_106ca23b0;
    puStack_118 = &UNK_11096ee70;
    puStack_108 = &uStack_a0;
    _objc_retain(lVar3);
    lStack_110 = lVar3;
    func_0x00010be0f160(lVar2);
    _dispatch_group_enter(lVar3);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar1;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x106ca240c;
    puStack_148 = &UNK_11096eea0;
    puStack_138 = &uStack_d0;
    _objc_retain(lVar3);
    lStack_140 = lVar3;
    func_0x00010c29ed80(uVar4);
    _objc_release(uVar4);
    _dispatch_group_enter(lVar3);
    puStack_190 = puVar1;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x106ca2468;
    puStack_178 = &UNK_11096ee70;
    puStack_168 = &uStack_100;
    _objc_retain(lVar3);
    lStack_170 = lVar3;
    func_0x00010be15520(lVar2);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f0 = puVar1;
    uStack_1e8 = 0xc2000000;
    pcStack_1e0 = FUN_106ca24c4;
    puStack_1d8 = &UNK_11096ef00;
    _objc_copyWeak(auStack_1a0,param_1 + 0x38);
    puStack_1b8 = &uStack_a0;
    puStack_1b0 = &uStack_d0;
    puStack_1a8 = &uStack_100;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_1c0 = uVar5;
    _objc_retain(uVar6);
    uStack_198 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_1d0 = uVar6;
    _objc_retain(uVar5);
    uStack_1c8 = uVar5;
    func_0x000100bc0718(lVar3,uVar4,&puStack_1f0);
    _objc_release(uVar4);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1c0);
    _objc_destroyWeak(auStack_1a0);
    _objc_release(lStack_170);
    _objc_release(lStack_140);
    _objc_release(lStack_110);
    _objc_release(lVar3);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106ca2398; end: 106ca23af;  */

void FUN_106ca2398(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ca23b0; end: 106ca24c3;  */

void FUN_106ca23b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ca24c4; end: 106ca2f83;  */

void FUN_106ca24c4(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long lStack_4b0;
  long lStack_4a0;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar14 != 0) {
    if ((*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0) ||
       ((*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) == 0 &&
        (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) == 0)))) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,0);
      }
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar4 = *(long *)(lVar14 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar4;
      func_0x00010c27d380();
      _objc_release(lVar4);
      lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      _objc_retain(lVar18);
      lVar4 = lVar18;
      func_0x00010bf52a60();
      lVar16 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar16) {
            _objc_enumerationMutation(lVar18);
          }
          uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar5);
          lVar19 = lVar19 + 1;
        } while (lVar4 != lVar19);
        lVar4 = lVar18;
        func_0x00010bf52a60();
      }
      _objc_release(lVar18);
      dVar24 = 0.0;
      lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      _objc_retain(lVar18);
      lVar4 = lVar18;
      func_0x00010bf52a60();
      lVar16 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar16) {
            _objc_enumerationMutation(lVar18);
          }
          uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar5);
          lVar19 = lVar19 + 1;
        } while (lVar4 != lVar19);
        lVar4 = lVar18;
        func_0x00010bf52a60();
      }
      _objc_release(lVar18);
      dVar22 = dVar24;
      if (0 < lVar21) {
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(puVar6);
        dVar22 = 0.0;
        lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        _objc_retain(lVar18);
        lVar16 = lVar18;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        if (lVar16 != 0) {
          dVar22 = (double)(ulong)(lVar21 * 0x3c);
          dVar24 = dVar24 - dVar22;
          do {
            lVar21 = 0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(lVar18);
              }
              lVar19 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar19 != 0) {
                lVar7 = lVar19;
                func_0x00010c105080(lVar19);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar14;
                func_0x00010be34940();
                _objc_release(lVar7);
                if (((int)lVar8 != 0) && (func_0x00010c29eae0(lVar19), dVar24 <= dVar22)) {
                  func_0x00010c1d0640(puVar3);
                }
              }
              _objc_release(lVar19);
              lVar21 = lVar21 + 1;
            } while (lVar16 != lVar21);
            lVar16 = lVar18;
            func_0x00010bf52a60();
          } while (lVar16 != 0);
        }
        _objc_release(lVar18);
      }
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar24 = dVar22;
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar6);
      lVar16 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      _objc_retain(lVar16);
      lStack_4b0 = lVar16;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      if (lStack_4b0 != 0) {
        dVar23 = -86400.0;
        do {
          lStack_4a0 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar16);
            }
            uVar9 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
            func_0x00010bf4b900();
            if ((uVar9 & 1) == 0) {
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar10;
              func_0x00010bfda3c0();
              if ((int)uVar5 == 0) {
                bVar1 = false;
              }
              else {
                uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
                func_0x00010c0e00e0(uVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c29eae0();
                bVar1 = dVar23 < dVar24 + -86400.0;
                _objc_release(uVar5);
              }
              _objc_release(uVar10);
              uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar10;
              func_0x00010bfd90a0();
              if ((int)uVar5 == 0) {
                bVar2 = false;
              }
              else {
                uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
                func_0x00010c0e00e0(uVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c29eae0();
                bVar2 = dVar23 < dVar22 + -300.0;
                _objc_release(uVar5);
              }
              _objc_release(uVar10);
              if (bVar1 || bVar2) {
                puVar6 = puVar3;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar6 != (undefined *)0x0) {
                  func_0x00010c105080();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                  dVar23 = 0.0;
                  _objc_retain(puVar6);
                  puVar12 = puVar6;
                  func_0x00010bf52a60();
                  lVar21 = lRam0000000000000000;
                  while (puVar12 != (undefined *)0x0) {
                    puVar20 = (undefined *)0x0;
                    do {
                      if (lRam0000000000000000 != lVar21) {
                        _objc_enumerationMutation(puVar6);
                      }
                      uVar17 = *(undefined8 *)((long)puVar20 * 8);
                      func_0x00010beedca0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar5 = uVar17;
                      func_0x00010c0ccaa0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar10 = uVar5;
                      func_0x00010bf31ca0();
                      _objc_release(uVar5);
                      _objc_release(uVar17);
                      if ((!(bool)((int)uVar10 == 5 & bVar2)) && (!(bool)((int)uVar10 == 2 & bVar1))
                         ) {
                        func_0x00010befa120(puVar11);
                      }
                      puVar20 = puVar20 + 1;
                    } while (puVar12 != puVar20);
                    puVar12 = puVar6;
                    func_0x00010bf52a60();
                  }
                  _objc_release(puVar6);
                  puVar12 = PTR_PTR_1126d1f98;
                  func_0x00010bf4ee60(PTR_PTR_1126d1f98);
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = puVar12;
                  func_0x00010c2b5880();
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar20;
                  func_0x00010bf21f60();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar20);
                  _objc_release(puVar12);
                  func_0x00010c1d0640(puVar3);
                  _objc_release(puVar13);
                  _objc_release(puVar11);
                  _objc_release(puVar6);
                }
                _objc_release();
              }
            }
            lStack_4a0 = lStack_4a0 + 1;
          } while (lStack_4a0 != lStack_4b0);
          lStack_4b0 = lVar16;
          func_0x00010bf52a60();
        } while (lStack_4b0 != 0);
      }
      _objc_release(lVar16);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar10);
      _objc_retain(puVar3);
      uVar17 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar17);
      func_0x00010c0f7fc0(uVar5);
      _objc_release(uVar17);
      _objc_release(puVar3);
      _objc_release(uVar10);
      _objc_release(puVar3);
    }
  }
  lVar4 = lVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar14);
  __Unwind_Resume();
  _CACurrentMediaTime();
  lVar14 = *(long *)(lVar4 + 0x30);
  if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106ca2fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x10))(lVar14,*(undefined8 *)(lVar4 + 0x28));
    return;
  }
  return;
}



/* Entry: 106ca2f84; end: 106ca3093;  */

void FUN_106ca2f84(long param_1)

{
  long lVar1;
  
  _CACurrentMediaTime();
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106ca2fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 106ca3094; end: 106ca323b; -[SCContextPostSnapDataFetcher _fetchActionsForConversationId:isGroupConversation:completionPerformer:completion:] */

void FUN_106ca3094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ca323c;
    puStack_50 = &UNK_11087bb60;
    _objc_retain(param_6);
    uStack_48 = param_6;
    func_0x00010c0f7fc0(param_5,param_2,&puStack_68);
    uVar2 = uStack_48;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106ca324c;
    puStack_90 = &UNK_11096ef60;
    lStack_88 = lVar1;
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_6);
    uStack_70 = param_6;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_a8);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    uVar2 = uStack_80;
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca323c; end: 106ca324b;  */

void FUN_106ca323c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ca3248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ca324c; end: 106ca37df;  */

void FUN_106ca324c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puStack_240;
  undefined4 uStack_234;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_opt_class(PTR_PTR_1126d1f90);
  if (lVar10 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,lVar10);
  }
  puVar3 = &uStack_1a1;
  FUN_106ca7e2c();
  uStack_210 = 0xf;
  uStack_200 = 0x100;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar12);
  ppuStack_218 = &PTR_DAT_110862760;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 10;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_SUB_110862700;
  pppuStack_160 = &ppuStack_218;
  uStack_150 = 0;
  uStack_158 = 0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  puStack_230 = (undefined8 *)0x0;
  puStack_228 = (undefined8 *)0x0;
  uStack_220 = 0;
  uStack_234 = 0;
  puVar4 = &uStack_130;
  uStack_1e8 = uVar12;
  puStack_168 = puVar3;
  func_0x0001000e77a0(puVar4,&ppuStack_1a0,&puStack_230,&uStack_234);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_230 != (undefined8 *)0x0) {
    puStack_228 = puStack_230;
    __ZdlPv();
  }
  plVar2 = plStack_138;
  ppuStack_1a0 = &PTR_SUB_110862700;
  plStack_138 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_230 = &uStack_158;
  func_0x000100105004(&puStack_230);
  plVar2 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_110862760;
  plStack_1b0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_230 = &uStack_1d0;
  func_0x000100105004(&puStack_230);
  _objc_release(uStack_1e8);
  func_0x0001000e76e0(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  if (puVar4 == (undefined8 *)0x0) {
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    puVar5 = *(undefined **)(param_1 + 0x38);
    _objc_retain(puVar5);
    func_0x00010c0f7fc0(uVar12);
    puStack_240 = puVar5;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar6 = puVar4;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar6 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar4);
        }
        puVar14 = *(undefined **)((long)puVar13 * 8);
        puVar7 = puVar14;
        func_0x00010c15e960();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c08fa60();
        if (puVar8 == (undefined *)0x0) {
LAB_106ca35c0:
          _objc_release(puVar7);
        }
        else {
          puVar8 = puVar14;
          func_0x00010bf4f080();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c08fa60();
          _objc_release(puVar8);
          _objc_release(puVar7);
          if (puVar9 != (undefined *)0x0) {
            puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
            puVar8 = puVar14;
            func_0x00010c15e960(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff6b20(puVar7);
            _objc_release(puVar8);
            puVar8 = PTR_PTR_1126d1f78;
            func_0x00010c0f40e0(PTR_PTR_1126d1f78);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            FUN_1070bbed8();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0cb5a0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(puVar14);
            _objc_release(puVar9);
            _objc_release(puVar8);
            goto LAB_106ca35c0;
          }
        }
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar6 != puVar13);
      puVar6 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar11);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar11);
    _objc_release(uVar12);
  }
  _objc_release(puVar5);
  puVar6 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_240);
  _objc_release(puVar4);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000106ca37ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar6[4] + 0x10))(puVar6[4],0);
  return;
}



/* Entry: 106ca37e0; end: 106ca3803;  */

void FUN_106ca37e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ca37ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ca3804; end: 106ca3953; -[SCContextPostSnapDataFetcher _fetchViewedSnapsForPostSnapActionsInConversation:completion:] */

void FUN_106ca3804(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_4);
      _objc_release(param_3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ca3954; end: 106ca3ebf;  */

long * FUN_106ca3954(double param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_39c;
  long lStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  undefined4 uStack_378;
  undefined4 uStack_368;
  double dStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  byte bStack_2ee;
  byte bStack_2ed;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined4 uStack_280;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  byte bStack_196;
  byte bStack_195;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  long alStack_140 [23];
  long lStack_88;
  
  plVar12 = &lStack_3e0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  lVar9 = *(long *)(param_2 + 0x20);
  _objc_opt_class(PTR_PTR_1126d1fa0);
  if (lVar9 == 0) {
    alStack_140[6] = 0;
    alStack_140[3] = 0;
    alStack_140[2] = 0;
    alStack_140[5] = 0;
    alStack_140[4] = 0;
    alStack_140[1] = 0;
    alStack_140[0] = 0;
  }
  else {
    func_0x00010bfa6be0(alStack_140,lVar9);
  }
  puVar3 = &uStack_221;
  FUN_106caa4dc();
  uStack_290 = 0xf;
  uStack_280 = 0x100;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar10);
  ppuStack_298 = &PTR_DAT_110862760;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (undefined *)0x0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  plStack_230 = (long *)0x0;
  uStack_206 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_218 = 10;
  uStack_208 = 0x100;
  ppuStack_220 = &PTR_SUB_110862700;
  pppuStack_1e0 = &ppuStack_298;
  uStack_1d0 = 0;
  puStack_1d8 = (undefined *)0x0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  plStack_1b8 = (long *)0x0;
  puVar4 = &uStack_309;
  uStack_268 = uVar10;
  puStack_1e8 = puVar3;
  FUN_106caa654();
  uStack_378 = 0xf;
  uStack_368 = 0x100;
  ppuStack_380 = &PTR_DAT_11086d7d0;
  uStack_340 = 0;
  uStack_348 = 0;
  lStack_330 = 0;
  lStack_338 = 0;
  plStack_320 = (long *)0x0;
  uStack_328 = 0;
  plStack_318 = (long *)0x0;
  bStack_2ee = puVar4[0x1a];
  bStack_2ed = puVar4[0x1b];
  uStack_300 = 9;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_DAT_11089b010;
  pppuStack_2c8 = &ppuStack_380;
  plStack_2a0 = (long *)0x0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  bStack_196 = (byte)uStack_206 | bStack_2ee;
  bStack_195 = uStack_206._1_1_ & bStack_2ed;
  uStack_1a8 = 4;
  uStack_198 = 0x100;
  ppuStack_1b0 = &PTR_DAT_1108629c8;
  pppuStack_170 = &ppuStack_308;
  uStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  lStack_398 = 0;
  lStack_390 = 0;
  uStack_388 = 0;
  uStack_39c = 0;
  plVar5 = alStack_140;
  plVar6 = &lStack_398;
  dStack_350 = param_1 + -3600.0;
  puStack_2d0 = puVar4;
  pppuStack_178 = &ppuStack_220;
  func_0x0001000e77a0(plVar5,&ppuStack_1b0,plVar6,&uStack_39c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_398 != 0) {
    lStack_390 = lStack_398;
    __ZdlPv();
  }
  plVar1 = plStack_148;
  ppuStack_1b0 = &PTR_DAT_1108629c8;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_168 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2a0;
  ppuStack_308 = &PTR_DAT_11089b010;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar1 = plStack_318;
  ppuStack_380 = &PTR_DAT_11086d7d0;
  plStack_318 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_320;
  plStack_320 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_338 != 0) {
    lStack_330 = lStack_338;
    __ZdlPv();
  }
  plVar1 = plStack_1b8;
  ppuStack_220 = &PTR_SUB_110862700;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_308 = &puStack_1d8;
  func_0x000100105004(&ppuStack_308);
  plVar1 = plStack_230;
  ppuStack_298 = &PTR_DAT_110862760;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_308 = &puStack_250;
  func_0x000100105004(&ppuStack_308);
  _objc_release(uStack_268);
  func_0x0001000e76e0(alStack_140 + 5);
  _objc_release(alStack_140[3]);
  _objc_release(alStack_140[2]);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    lStack_3d8 = 0;
    lStack_3e0 = 0;
    uStack_3c8 = 0;
    plStack_3d0 = (long *)0x0;
    _objc_retain(plVar5);
    plVar6 = plVar5;
    func_0x00010bf52a60();
    if (plVar6 != (long *)0x0) {
      lVar9 = *plStack_3d0;
      do {
        plVar12 = (long *)0x0;
        do {
          if (*plStack_3d0 != lVar9) {
            _objc_enumerationMutation(plVar5);
          }
          uVar10 = *(undefined8 *)(lStack_3d8 + (long)plVar12 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar10);
          plVar12 = (long *)((long)plVar12 + 1);
        } while (plVar6 != plVar12);
        plVar6 = plVar5;
        plVar12 = &lStack_3e0;
        func_0x00010bf52a60();
      } while (plVar6 != (long *)0x0);
    }
    _objc_release(plVar5);
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),puVar2);
    _objc_release(puVar2);
    plVar6 = plVar12;
  }
  plVar12 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plVar12;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  __Unwind_Resume(plVar12);
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(plVar6);
  _objc_retain(plVar6);
  plVar5 = plVar6;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  plVar12 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    do {
      plVar12 = (long *)0x0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(plVar6);
        }
        uVar11 = *(undefined8 *)((long)plVar12 * 8);
        uVar10 = uVar11;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar10;
        func_0x00010beeed20();
        _objc_release(uVar10);
        if ((int)uVar7 == 0x46) {
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar11;
          func_0x00010c118680();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar10;
          func_0x00010c11cb60();
          _objc_release(uVar10);
          _objc_release(uVar11);
          if ((int)uVar7 == 3) {
            plVar12 = (long *)0x1;
            goto LAB_106ca3ff4;
          }
        }
        plVar12 = (long *)((long)plVar12 + 1);
      } while (plVar5 != plVar12);
      plVar5 = plVar6;
      func_0x00010bf52a60();
    } while (plVar5 != (long *)0x0);
    plVar12 = (long *)0x0;
  }
LAB_106ca3ff4:
  _objc_release(plVar6);
  plVar5 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    __Unwind_Resume(plVar5);
    _objc_storeStrong(plVar5 + 4,0);
    _objc_storeStrong(plVar5 + 3,0);
    _objc_storeStrong(plVar5 + 2,0);
    plVar5 = plVar5 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(plVar5,0);
    return plVar5;
  }
  return plVar12;
}



/* Entry: 106ca3ec0; end: 106ca409f; -[SCContextPostSnapDataFetcher _hasTurnBasedPromptLensAction:] */

long FUN_106ca3ec0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  lVar7 = 0;
  if (lVar1 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        uVar2 = uVar6;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010beeed20();
        _objc_release(uVar2);
        if ((int)uVar3 == 0x46) {
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar6;
          func_0x00010c118680();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c11cb60();
          _objc_release(uVar2);
          _objc_release(uVar6);
          if ((int)uVar3 == 3) {
            lVar7 = 1;
            goto LAB_106ca3ff4;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar7 = 0;
  }
LAB_106ca3ff4:
  _objc_release(param_3);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume(lVar4);
    _objc_storeStrong(lVar4 + 0x20,0);
    _objc_storeStrong(lVar4 + 0x18,0);
    _objc_storeStrong(lVar4 + 0x10,0);
    lVar4 = lVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar4,0);
    return lVar4;
  }
  return lVar7;
}



/* Entry: 106ca40a0; end: 106ca40e7; -[SCContextPostSnapDataFetcher .cxx_destruct] */

void FUN_106ca40a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ca40e8; end: 106ca42a3; -[SCContextPostSnapDataStore initWithDocContext:lastViewedMemoryStore:nglStudySettings:actionsObserver:] */

undefined1 *
FUN_106ca40e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f61a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ca42a4; end: 106ca487b; -[SCContextPostSnapDataStore storeActions:forConversationId:messageId:senderParams:contextSessionId:isFromSendSide:isGroupConversation:shouldAddDwebUpsellPSA:isStory:lensPromptId:shouldAddGameLensCTA:] */

void FUN_106ca42a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9,undefined4 param_10,undefined4 param_11,long param_12,char param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_2e0 [8];
  undefined8 uStack_2d8;
  undefined2 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined2 uStack_25f;
  undefined1 auStack_258 [8];
  long lStack_1f0;
  long lStack_1e0;
  undefined8 uStack_1a8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_6;
  if (lVar1 != 0) {
    lStack_1e0 = param_4;
    func_0x00010c0d3c80();
    if (param_10._1_1_ != '\0') {
      lVar2 = lStack_1e0;
      FUN_1070bb8d4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(lStack_1e0);
      _objc_release(lVar2);
    }
    if ((((param_9 & 1) == 0) && (param_13 != '\0')) &&
       (lVar2 = param_12, func_0x00010c08fa60(), lVar2 == 0)) {
      lVar2 = lStack_1e0;
      func_0x00010bf51e00();
      lVar3 = lVar2;
      FUN_1070bb0c4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        func_0x00010befa160(lStack_1e0);
      }
      _objc_release(lVar3);
    }
    lVar2 = lStack_1e0;
    func_0x00010bf51e00();
    lVar3 = lVar2;
    FUN_1070bbbf0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar4 = lVar3;
    func_0x00010beef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar5 == 0) {
      uStack_1a8 = 0;
    }
    else {
      uStack_1a8 = 0;
      do {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar4);
          }
          uVar8 = *(undefined8 *)(lVar15 * 8);
          uVar9 = uVar8;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c0ccaa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf31ca0();
          _objc_release(uVar10);
          _objc_release(uVar9);
          uVar9 = uVar8;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010beeed20();
          if ((int)uVar10 == 0x46) {
            uVar10 = uVar8;
            func_0x00010c25e260();
            _objc_release(uVar9);
            if ((int)uVar10 == 2) {
              func_0x00010beedca0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              func_0x00010c118680();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uStack_1a8);
              uVar9 = uVar8;
              uStack_1a8 = uVar10;
              goto LAB_106ca4544;
            }
          }
          else {
LAB_106ca4544:
            _objc_release(uVar9);
          }
          lVar15 = lVar15 + 1;
        } while (lVar5 != lVar15);
        lVar5 = lVar4;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    param_1 = 0xc2000000;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(lVar1);
    _objc_retain(param_12);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain();
    func_0x00010c0f7fc0(uVar9);
    _objc_release(uStack_1a8);
    _objc_release(param_7);
    _objc_release(param_8);
    _objc_release(param_12);
    _objc_release(lVar1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(uStack_1a8);
    _objc_release(lVar3);
    _objc_release(lStack_1e0);
    lStack_1f0 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_release(uVar9);
    _objc_release(lStack_1e0);
    _objc_release(lStack_1f0);
    _objc_release(param_12);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    __Unwind_Resume();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar6);
    func_0x00010c257e60(param_1,*(undefined8 *)(lVar1 + 0x20));
    _objc_initWeak(auStack_258,*(undefined8 *)(lVar1 + 0x20));
    puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2c0 = 0xc2000000;
    pcStack_2b8 = FUN_106ca4b54;
    puStack_2b0 = &UNK_11096efd0;
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    uVar10 = *(undefined8 *)(lVar1 + 0x40);
    _objc_retain(uVar10);
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    uStack_2a8 = uVar10;
    _objc_retain(uVar8);
    uVar10 = *(undefined8 *)(lVar1 + 0x28);
    uStack_2a0 = uVar8;
    _objc_retain(uVar10);
    uStack_290 = *(undefined8 *)(lVar1 + 0x48);
    uVar8 = *(undefined8 *)(lVar1 + 0x30);
    uStack_298 = uVar10;
    _objc_retain(uVar8);
    uVar10 = *(undefined8 *)(lVar1 + 0x50);
    uStack_288 = uVar8;
    _objc_retain(uVar10);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uStack_280 = uVar10;
    _objc_retain(uVar8);
    uStack_260 = *(undefined1 *)(lVar1 + 0x6a);
    uStack_25f = *(undefined2 *)(lVar1 + 0x6b);
    uStack_270 = *(undefined8 *)(lVar1 + 0x20);
    uStack_278 = uVar8;
    uStack_268 = param_1;
    _objc_copyWeak(auStack_2e0,auStack_258);
    uVar10 = *(undefined8 *)(lVar1 + 0x40);
    _objc_retain(uVar10);
    uVar8 = *(undefined8 *)(lVar1 + 0x60);
    _objc_retain(uVar8);
    uVar11 = *(undefined8 *)(lVar1 + 0x58);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(lVar1 + 0x30);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(lVar1 + 0x50);
    _objc_retain(uVar14);
    uStack_2d0 = *(undefined2 *)(lVar1 + 0x6a);
    uStack_2d8 = param_1;
    func_0x00010c0f8500(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_2e0);
    _objc_release(uStack_278);
    _objc_release(uStack_280);
    _objc_release(uStack_288);
    _objc_release(uStack_298);
    _objc_release(uStack_2a0);
    _objc_release(uStack_2a8);
    _objc_destroyWeak(auStack_258);
    return;
  }
  return;
}



/* Entry: 106ca487c; end: 106ca4b53;  */

void FUN_106ca487c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined2 uStack_5f;
  undefined1 auStack_58 [8];
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010c257e60(param_1,*(undefined8 *)(param_2 + 0x20));
  _objc_initWeak(auStack_58,*(undefined8 *)(param_2 + 0x20));
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106ca4b54;
  puStack_b0 = &UNK_11096efd0;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uStack_a8 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uStack_a0 = uVar3;
  _objc_retain(uVar4);
  uStack_90 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uStack_98 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uStack_88 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uStack_80 = uVar4;
  _objc_retain(uVar3);
  uStack_60 = *(undefined1 *)(param_2 + 0x6a);
  uStack_5f = *(undefined2 *)(param_2 + 0x6b);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = uVar3;
  uStack_68 = param_1;
  _objc_copyWeak(auStack_e0,auStack_58);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar8);
  uStack_d0 = *(undefined2 *)(param_2 + 0x6a);
  uStack_d8 = param_1;
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106ca4b54; end: 106ca561f;  */

ulong FUN_106ca4b54(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 *puStack_440;
  undefined8 *puStack_3f0;
  undefined4 uStack_39c;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  undefined4 uStack_378;
  undefined4 uStack_368;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  byte bStack_2ee;
  byte bStack_2ed;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined4 uStack_280;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  byte bStack_196;
  byte bStack_195;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    _objc_opt_class(PTR_PTR_1126d1f90);
    if (lVar2 == 0) {
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_140,lVar2);
    }
    puVar3 = &uStack_221;
    FUN_106ca7e2c();
    uStack_290 = 0xf;
    uStack_280 = 0x100;
    uVar20 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar20);
    ppuStack_298 = &PTR_DAT_110862760;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    puStack_250 = (undefined *)0x0;
    plStack_238 = (long *)0x0;
    uStack_240 = 0;
    plStack_230 = (long *)0x0;
    uStack_206 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_218 = 10;
    uStack_208 = 0x100;
    ppuStack_220 = &PTR_SUB_110862700;
    pppuStack_1e0 = &ppuStack_298;
    uStack_1d0 = 0;
    puStack_1d8 = (undefined *)0x0;
    plStack_1c0 = (long *)0x0;
    uStack_1c8 = 0;
    plStack_1b8 = (long *)0x0;
    puVar4 = &uStack_309;
    uStack_268 = uVar20;
    puStack_1e8 = puVar3;
    FUN_106ca80ec();
    uStack_378 = 0xf;
    uStack_368 = 0x100;
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar20);
    ppuStack_380 = &PTR_DAT_110862760;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_330 = 0;
    uStack_338 = 0;
    plStack_320 = (long *)0x0;
    uStack_328 = 0;
    plStack_318 = (long *)0x0;
    bStack_2ee = puVar4[0x1a];
    bStack_2ed = puVar4[0x1b];
    uStack_300 = 10;
    uStack_2f0 = 0x100;
    ppuStack_308 = &PTR_SUB_110862700;
    pppuStack_178 = &ppuStack_220;
    pppuStack_2c8 = &ppuStack_380;
    pppuStack_170 = &ppuStack_308;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    plStack_2a8 = (long *)0x0;
    uStack_2b0 = 0;
    plStack_2a0 = (long *)0x0;
    bStack_196 = (byte)uStack_206 | bStack_2ee;
    bStack_195 = uStack_206._1_1_ & bStack_2ed;
    uStack_1a8 = 4;
    uStack_198 = 0x100;
    ppuStack_1b0 = &PTR_DAT_1108629c8;
    plStack_148 = (long *)0x0;
    plStack_150 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_168 = 0;
    puStack_398 = (undefined8 *)0x0;
    puStack_390 = (undefined8 *)0x0;
    uStack_388 = 0;
    uStack_39c = 0;
    puStack_440 = &uStack_140;
    uStack_350 = uVar20;
    puStack_2d0 = puVar4;
    func_0x0001000e77a0(puStack_440,&ppuStack_1b0,&puStack_398,&uStack_39c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_398 != (undefined8 *)0x0) {
      puStack_390 = puStack_398;
      __ZdlPv();
    }
    plVar1 = plStack_148;
    ppuStack_1b0 = &PTR_DAT_1108629c8;
    plStack_148 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_150;
    plStack_150 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_168 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_2a0;
    ppuStack_308 = &PTR_SUB_110862700;
    plStack_2a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2a8;
    plStack_2a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_398 = &uStack_2c0;
    func_0x000100105004(&puStack_398);
    plVar1 = plStack_318;
    ppuStack_380 = &PTR_DAT_110862760;
    plStack_318 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_320;
    plStack_320 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_398 = &uStack_338;
    func_0x000100105004(&puStack_398);
    _objc_release(uStack_350);
    plVar1 = plStack_1b8;
    ppuStack_220 = &PTR_SUB_110862700;
    plStack_1b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1c0;
    plStack_1c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_308 = &puStack_1d8;
    func_0x000100105004(&ppuStack_308);
    plVar1 = plStack_230;
    ppuStack_298 = &PTR_DAT_110862760;
    plStack_230 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_238;
    plStack_238 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_308 = &puStack_250;
    func_0x000100105004(&ppuStack_308);
    _objc_release(uStack_268);
    func_0x0001000e76e0(&uStack_118);
    _objc_release(uStack_128);
    _objc_release(uStack_130);
    uVar20 = 0;
    _objc_retain(puStack_440);
    puVar5 = puStack_440;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar5 != (undefined8 *)0x0) {
      puStack_3f0 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puStack_440);
        }
        uVar19 = *(undefined8 *)((long)puStack_3f0 * 8);
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc();
        uVar14 = uVar19;
        func_0x00010c15e960(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff6b20();
        _objc_release(uVar14);
        puVar7 = PTR_PTR_1126d1f78;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010beef4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bfaea20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = puVar9;
        func_0x00010c0d3c80(puVar9);
        func_0x00010c162160(puVar7);
        _objc_release(puVar8);
        puVar8 = PTR_PTR_1126d1f90;
        _objc_alloc(PTR_PTR_1126d1f90);
        uVar14 = uVar19;
        func_0x00010bf50280(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar19;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf15da0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar19;
        func_0x00010bf4f080();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar19;
        func_0x00010c15df40(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar19;
        func_0x00010c15df60(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar19;
        func_0x00010c15db00();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar19;
        func_0x00010c15dba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c073e00();
        func_0x00010c29eae0(uVar19);
        func_0x00010c074920();
        func_0x00010c07fbc0();
        func_0x00010c096520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c005280(uVar20,puVar8);
        _objc_release(uVar19);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar18);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(uVar15);
        _objc_release(uVar14);
        puVar10 = puVar8;
        FUN_106ca9268(puVar8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puStack_3f0 = (undefined8 *)((long)puStack_3f0 + 1);
      } while (puVar5 != puStack_3f0);
      puVar5 = puStack_440;
      func_0x00010bf52a60();
    }
    _objc_release(puStack_440);
    _objc_release(puStack_440);
  }
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar14;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  puVar6 = PTR_PTR_1126d1f90;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar15;
  func_0x000108437e88();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c294420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005280(*(undefined8 *)(param_1 + 0x60));
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar15);
  uVar14 = 0;
  puVar7 = puVar6;
  FUN_106ca9268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c286fc0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x20));
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar20);
  uVar21 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar21;
  }
  ___stack_chk_fail();
  _objc_release(puStack_440);
  _objc_release(puStack_440);
  _objc_release(param_2);
  __Unwind_Resume(uVar21);
  _objc_retain(uVar14);
  uVar20 = uVar14;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar20;
  func_0x00010beeed20();
  if ((int)uVar15 == 0x46) {
    uVar21 = 0;
  }
  else {
    uVar15 = uVar14;
    func_0x00010beedca0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010beeed20();
    uVar21 = (ulong)((int)uVar16 != 0xe);
    _objc_release(uVar15);
  }
  _objc_release(uVar20);
  _objc_release(uVar14);
  return uVar21;
}



/* Entry: 106ca5620; end: 106ca56e7;  */

bool FUN_106ca5620(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beeed20();
  if ((int)uVar3 == 0x46) {
    bVar1 = false;
  }
  else {
    uVar3 = param_2;
    func_0x00010beedca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010beeed20();
    bVar1 = (int)uVar4 != 0xe;
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106ca56e8; end: 106ca573f;  */

void FUN_106ca56e8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x58));
  return;
}



/* Entry: 106ca5740; end: 106ca587f;  */

void FUN_106ca5740(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + 0x28);
      _objc_retain(lVar5);
      if (lVar5 != 0) {
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x00010c08fa60();
        if (lVar2 != 0) {
          if (*(long *)(param_1 + 0x28) == 0) {
            func_0x00010bf4eda0(lVar5);
          }
          else {
            uVar3 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010bfe5ec0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x000108437e88();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            func_0x00010bf4edc0(*(undefined8 *)(param_1 + 0x58),lVar5);
            _objc_release(uVar4);
          }
        }
      }
      _objc_release(lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106ca5880; end: 106ca5997;  */

void FUN_106ca5880(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 106ca5998; end: 106ca5ad7; -[SCContextPostSnapDataStore storeViewedSnapsWithPostSnapActions:messageId:hasPlaces:hasMentions:viewedAtTimestamp:] */

void FUN_106ca5998(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106ca5ad8;
    puStack_80 = &UNK_11096f0b0;
    lStack_78 = lVar1;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    uStack_60 = param_1;
    uStack_58 = param_6;
    uStack_57 = param_7;
    func_0x00010c0f7fc0(uVar2,param_3,&puStack_98);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106ca5ad8; end: 106ca5ba3;  */

void FUN_106ca5ad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106ca5ba4;
  puStack_58 = &UNK_11096f060;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined2 *)(param_1 + 0x40);
  uStack_48 = uVar3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_70,0,&PTR___NSConcreteGlobalBlock_11096f090);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  return;
}



/* Entry: 106ca5ba4; end: 106ca5c6b;  */

void FUN_106ca5ba4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d1fa0;
  _objc_alloc(PTR_PTR_1126d1fa0);
  func_0x00010c0054a0(*(undefined8 *)(param_1 + 0x30));
  puVar2 = puVar1;
  FUN_106caafd8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ca5c6c; end: 106ca5c6f;  */

void FUN_106ca5c6c(void)

{
  return;
}



/* Entry: 106ca5c70; end: 106ca605b; -[SCContextPostSnapDataStore cleanupPostSnapActions:] */

void FUN_106ca5c70(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined4 uStack_178;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 uStack_119;
  undefined **ppuStack_118;
  undefined4 uStack_110;
  undefined2 uStack_100;
  undefined2 uStack_fe;
  undefined1 *puStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    lVar4 = *(long *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27d380();
    if (param_1 - (double)(lVar5 * 0x3c) <= param_1 + -86400.0) {
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27d380();
      _objc_release(uVar6);
    }
    _objc_release(lVar4);
    _objc_opt_class(PTR_PTR_1126d1f90);
    func_0x00010bfa6be0(auStack_a8,lVar2);
    puVar7 = &uStack_119;
    FUN_106ca7fa4();
    uStack_188 = 0xf;
    uStack_178 = 0x100;
    ppuStack_190 = &PTR_DAT_11086d7d0;
    uStack_150 = 0;
    uStack_158 = 0;
    lStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    uStack_fe = *(undefined2 *)(puVar7 + 0x1a);
    uStack_110 = 6;
    uStack_100 = 0x100;
    ppuStack_118 = &PTR_DAT_11089b010;
    pppuStack_d8 = &ppuStack_190;
    lStack_c8 = 0;
    lStack_d0 = 0;
    plStack_b8 = (long *)0x0;
    uStack_c0 = 0;
    plStack_b0 = (long *)0x0;
    lStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1ac = 0;
    puVar8 = auStack_a8;
    dStack_160 = param_1 + -86400.0;
    puStack_e0 = puVar7;
    func_0x0001000e77a0(puVar8,&ppuStack_118,&lStack_1a8,&uStack_1ac);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_1a8 != 0) {
      lStack_1a0 = lStack_1a8;
      __ZdlPv();
    }
    plVar1 = plStack_b0;
    ppuStack_118 = &PTR_DAT_11089b010;
    plStack_b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_b8;
    plStack_b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_d0 != 0) {
      lStack_c8 = lStack_d0;
      __ZdlPv();
    }
    plVar1 = plStack_128;
    ppuStack_190 = &PTR_DAT_11086d7d0;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    func_0x0001000e76e0(auStack_80);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    if (puVar8 == (undefined1 *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      _objc_retain(puVar8);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010c0f8500(lVar2);
      _objc_release(uVar6);
      _objc_release(param_4);
      _objc_release(puVar8);
    }
    _objc_release(puVar8);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106ca605c; end: 106ca620b;  */

void FUN_106ca605c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  double dVar19;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(lVar8);
      lVar4 = param_2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(lVar8);
      _objc_release(param_2);
      __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000106ca6214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x20) + 0x10))();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar9 = *(undefined8 *)(lVar10 * 8);
      func_0x00010c29eae0(uVar9);
      dVar19 = *(double *)(param_1 + 0x30);
      bVar3 = false;
      bVar1 = NAN((double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(
                                                  uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))
                                                  )));
      if (!bVar1 && !NAN(dVar19)) {
        bVar3 = (double)CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(
                                                  uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))
                                                )) < dVar19;
      }
      if (bVar3 == (bVar1 || NAN(dVar19))) {
        uVar5 = *(ulong *)(param_1 + 0x28);
        func_0x00010be34960();
        if ((uVar5 & 1) == 0) goto LAB_106ca6124;
      }
      else {
LAB_106ca6124:
        puVar6 = PTR_PTR_1126d1fa8;
        FUN_106ca91f4(PTR_PTR_1126d1fa8,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106ca620c; end: 106ca6217;  */

void FUN_106ca620c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ca6214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106ca6218; end: 106ca65bb; -[SCContextPostSnapDataStore cleanupViewedSnapsWithPostSnapActions:] */

void FUN_106ca6218(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined4 uStack_19c;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined4 uStack_168;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 uStack_109;
  undefined **ppuStack_108;
  undefined4 uStack_100;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined1 *puStack_d0;
  undefined ***pppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    _objc_opt_class(PTR_PTR_1126d1fa0);
    func_0x00010bfa6be0(auStack_98,lVar2);
    puVar4 = &uStack_109;
    FUN_106caa654();
    uStack_178 = 0xf;
    uStack_168 = 0x100;
    ppuStack_180 = &PTR_DAT_11086d7d0;
    uStack_140 = 0;
    uStack_148 = 0;
    lStack_130 = 0;
    lStack_138 = 0;
    plStack_120 = (long *)0x0;
    uStack_128 = 0;
    plStack_118 = (long *)0x0;
    uStack_ee = *(undefined2 *)(puVar4 + 0x1a);
    uStack_100 = 6;
    uStack_f0 = 0x100;
    ppuStack_108 = &PTR_DAT_11089b010;
    pppuStack_c8 = &ppuStack_180;
    lStack_b8 = 0;
    lStack_c0 = 0;
    plStack_a8 = (long *)0x0;
    uStack_b0 = 0;
    plStack_a0 = (long *)0x0;
    lStack_198 = 0;
    lStack_190 = 0;
    uStack_188 = 0;
    uStack_19c = 0;
    puVar5 = auStack_98;
    dStack_150 = param_1 + -3600.0;
    puStack_d0 = puVar4;
    func_0x0001000e77a0(puVar5,&ppuStack_108,&lStack_198,&uStack_19c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_198 != 0) {
      lStack_190 = lStack_198;
      __ZdlPv();
    }
    plVar1 = plStack_a0;
    ppuStack_108 = &PTR_DAT_11089b010;
    plStack_a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    plVar1 = plStack_118;
    ppuStack_180 = &PTR_DAT_11086d7d0;
    plStack_118 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_120;
    plStack_120 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_138 != 0) {
      lStack_130 = lStack_138;
      __ZdlPv();
    }
    func_0x0001000e76e0(auStack_70);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    if (puVar5 == (undefined1 *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      _objc_initWeak(&ppuStack_108,param_2);
      puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_106ca65bc;
      puStack_1b0 = &UNK_1108af4c0;
      _objc_retain(puVar5);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      puStack_1a8 = puVar5;
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_1d0,&ppuStack_108);
      _objc_retain(param_4);
      func_0x00010c0f8500(lVar2);
      _objc_release(uVar6);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_1d0);
      _objc_release(puStack_1a8);
      _objc_destroyWeak(&ppuStack_108);
    }
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106ca65bc; end: 106ca673b;  */

void FUN_106ca65bc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar5);
      }
      puVar2 = PTR_PTR_1126d1fb0;
      FUN_106caaf64(PTR_PTR_1126d1fb0,*(undefined8 *)(lVar6 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar3 = lVar1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106ca673c; end: 106ca678b;  */

void FUN_106ca673c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ca678c; end: 106ca6a87; -[SCContextPostSnapDataStore _hasTurnBasedPromptLensActionInStoredAction:] */

undefined * FUN_106ca678c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *unaff_x22;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c15e960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010c15e960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20();
    _objc_release(puVar3);
    puVar9 = puVar2;
    func_0x00010c08fa60();
    if (puVar9 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126d1f78;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        unaff_x22 = puVar3;
        func_0x00010beef4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = unaff_x22;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        puVar9 = (undefined *)0x0;
        if (puVar4 != (undefined *)0x0) {
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(unaff_x22);
              }
              uVar8 = *(undefined8 *)((long)puVar9 * 8);
              uVar5 = uVar8;
              func_0x00010beedca0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010beeed20();
              _objc_release(uVar5);
              if ((int)uVar6 == 0x46) {
                func_0x00010beedca0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar8;
                func_0x00010c118680();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x00010c11cb60();
                _objc_release(uVar5);
                _objc_release(uVar8);
                if ((int)uVar6 == 3) {
                  puVar9 = (undefined *)0x1;
                  goto LAB_106ca697c;
                }
              }
              puVar9 = puVar9 + 1;
            } while (puVar4 != puVar9);
            puVar4 = unaff_x22;
            func_0x00010bf52a60();
          } while (puVar4 != (undefined *)0x0);
          puVar9 = (undefined *)0x0;
        }
LAB_106ca697c:
        _objc_release(unaff_x22);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  puVar4 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_release(unaff_x22);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    __Unwind_Resume(puVar4);
    _objc_storeStrong(puVar4 + 0x28,0);
    _objc_storeStrong(puVar4 + 0x20,0);
    _objc_storeStrong(puVar4 + 0x18,0);
    _objc_storeStrong(puVar4 + 0x10,0);
    puVar4 = puVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar4,0);
    return puVar4;
  }
  return puVar9;
}



/* Entry: 106ca6a88; end: 106ca6adb; -[SCContextPostSnapDataStore .cxx_destruct] */

void FUN_106ca6a88(long param_1)

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



/* Entry: 106ca6adc; end: 106ca6c03; -[SCContextPostSnapFeedDataFetcher initWithDocContext:lastViewedMemoryStore:filter:nglStudySettings:] */

undefined1 *
FUN_106ca6adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f61a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ca6c04; end: 106ca7273; -[SCContextPostSnapFeedDataFetcher postSnapActionsForConversations:] */

void FUN_106ca6c04(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar10);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c27d380();
  _objc_release(lVar1);
  dVar16 = 480.0;
  if (0x1df < lVar4) {
    dVar16 = (double)lVar4;
  }
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  _objc_retain(param_4);
  puVar9 = &uStack_240;
  lVar4 = param_4;
  func_0x00010bf52a60();
  dVar15 = -60.0;
  param_1 = param_1 + dVar16 * -60.0;
  if (lVar4 != 0) {
    lVar1 = *plStack_230;
    do {
      lVar14 = 0;
      do {
        if (*plStack_230 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c08a620();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29eae0();
        if (param_1 <= dVar15) {
          lVar12 = param_2;
          func_0x00010be163a0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar12;
          FUN_1070bbed8();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar10);
          _objc_release(lVar3);
          _objc_release(lVar12);
        }
        _objc_release(uVar2);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      puVar9 = &uStack_240;
      lVar4 = param_4;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    _objc_retain(puVar10);
  }
  else {
    puStack_2c8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar11 = puVar10;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860(puStack_2c8);
    _objc_release(puVar5);
    _objc_release(puVar11);
    puVar6 = *(undefined8 **)(param_2 + 0x10);
    func_0x00010bf50bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0ce860(puStack_2c8);
    _objc_release(puVar6);
    puVar5 = puStack_2c8;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      _objc_retain(puVar10);
    }
    else {
      lStack_2d0 = param_2;
      func_0x00010be473a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      _objc_retain();
      lVar1 = lStack_2d0;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar14 = *plStack_270;
        do {
          lVar12 = 0;
          do {
            if (*plStack_270 != lVar14) {
              _objc_enumerationMutation(lStack_2d0);
            }
            uVar13 = *(undefined8 *)(lStack_278 + lVar12 * 8);
            lVar3 = param_2;
            func_0x00010be163a0(param_2);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar3;
            FUN_1070bbed8();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar13;
            func_0x00010bf50280(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar10);
            _objc_release(uVar2);
            _objc_release(lVar7);
            uVar2 = *(undefined8 *)(param_2 + 0x10);
            func_0x00010bf50280(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c286fc0(uVar2);
            _objc_release(uVar13);
            _objc_release(lVar3);
            lVar12 = lVar12 + 1;
          } while (lVar1 != lVar12);
          lVar1 = lStack_2d0;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(lStack_2d0);
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      plStack_2b0 = (long *)0x0;
      _objc_retain(puStack_2c8);
      puVar9 = &uStack_2c0;
      puVar5 = puStack_2c8;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar1 = *plStack_2b0;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_2b0 != lVar1) {
              _objc_enumerationMutation(puStack_2c8);
            }
            puVar8 = puVar10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar8 == (undefined *)0x0) {
              func_0x00010c1a6540(*(undefined8 *)(param_2 + 0x10));
            }
            puVar11 = puVar11 + 1;
          } while (puVar5 != puVar11);
          puVar9 = &uStack_2c0;
          puVar5 = puStack_2c8;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puStack_2c8);
      _objc_retain(puVar10);
      _objc_release(lStack_2d0);
    }
    _objc_release(puStack_2c8);
  }
  _objc_release(lVar4);
  _objc_release(puVar10);
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_release(puStack_2c8);
    _objc_release(lStack_2d0);
    _objc_release(puStack_2c8);
    _objc_release(lVar4);
    _objc_release(puVar10);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(puVar9);
    puVar6 = puVar9;
    func_0x00010c15e960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 == (undefined8 *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      puVar6 = puVar9;
      func_0x00010c15e960(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b20(puVar5);
      _objc_release(puVar6);
      puVar11 = PTR_PTR_1126d1f78;
      func_0x00010c0f40e0(PTR_PTR_1126d1f78);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined **)(lVar1 + 0x18);
      func_0x00010c269d40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bfad7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar11);
      _objc_release(puVar5);
    }
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106ca7274; end: 106ca73cf; -[SCContextPostSnapFeedDataFetcher _filterStoredAction:] */

void FUN_106ca7274(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c15e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar1 = param_3;
    func_0x00010c15e960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar2,param_2,lVar1,0);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d1f78;
    func_0x00010c0f40e0(PTR_PTR_1126d1f78,param_2,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfad7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106ca73d0; end: 106ca7aab; -[SCContextPostSnapFeedDataFetcher _latestPostSnapActionsForConverstionsIds:docObjectContext:latestTimestampToPersist:] */

void FUN_106ca73d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uStack_418;
  undefined1 uStack_411;
  long lStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3d9;
  undefined **appuStack_3d8 [3];
  byte bStack_3bf;
  byte bStack_3be;
  byte bStack_3bd;
  undefined8 auStack_390 [3];
  long *plStack_378;
  long *plStack_370;
  undefined **ppuStack_368;
  undefined4 uStack_360;
  undefined4 uStack_350;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined1 uStack_2f1;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined2 uStack_2d8;
  undefined2 uStack_2d6;
  undefined1 *puStack_2b8;
  undefined ***pppuStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined1 uStack_268;
  byte bStack_267;
  byte bStack_266;
  byte bStack_265;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined4 uStack_fc;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [96];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_opt_class(PTR_PTR_1126d1f90);
  if (param_5 == 0) {
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_210);
  }
  puVar2 = &uStack_2f1;
  FUN_106ca7fa4();
  uStack_360 = 0xf;
  uStack_350 = 0x100;
  ppuStack_368 = &PTR_DAT_11086d7d0;
  uStack_328 = 0;
  uStack_330 = 0;
  lStack_318 = 0;
  lStack_320 = 0;
  plStack_308 = (long *)0x0;
  uStack_310 = 0;
  plStack_300 = (long *)0x0;
  uStack_2d6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_2e8 = 9;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_11089b010;
  pppuStack_2b0 = &ppuStack_368;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  puVar3 = &uStack_3d9;
  uStack_338 = param_1;
  puStack_2b8 = puVar2;
  FUN_106ca7e2c(puVar3);
  _objc_retain(param_4);
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3f8 = 0;
  lVar4 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x0001004c2bb4(&uStack_3f8,lVar4);
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar11 = *plStack_1c0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1c0 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        lVar13 = *(long *)(lStack_1c8 + lVar15 * 8);
        _objc_retain(lVar13);
        lStack_410 = lVar13;
        func_0x0001004c2d3c(&uStack_3f8,&lStack_410);
        _objc_release(lStack_410);
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      lVar4 = param_4;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  func_0x0001004c2e3c(appuStack_3d8,0xc,puVar3,&uStack_3f8);
  bStack_265 = uStack_2d6._1_1_ & bStack_3bd;
  bStack_267 = (uStack_2d8._1_1_ | bStack_3bf) & 1;
  bStack_266 = ((byte)uStack_2d6 | bStack_3be) & 1;
  uStack_278 = 4;
  uStack_268 = 0;
  ppuStack_280 = &PTR_DAT_1108629c8;
  pppuStack_248 = &ppuStack_2f0;
  uStack_230 = 0;
  lStack_238 = 0;
  plStack_220 = (long *)0x0;
  uStack_228 = 0;
  plStack_218 = (long *)0x0;
  puVar2 = &uStack_411;
  pppuStack_240 = appuStack_3d8;
  FUN_106ca7fa4();
  puStack_108 = *(undefined8 **)(puVar2 + 0x10);
  uStack_100 = puVar2[0x19];
  uStack_ff = puVar2[0x18];
  uStack_f0 = *(undefined8 *)(puVar2 + 0x28);
  uStack_fc = 1;
  pcStack_f8 = FUN_106ca7af4;
  lStack_408 = 0;
  uStack_400 = 0;
  lStack_410 = 0;
  func_0x000100c435d0(&lStack_410,&puStack_108,auStack_e8,1);
  func_0x000100c436b8(&lStack_1d0,&lStack_410);
  uStack_418 = 0;
  puVar5 = &uStack_210;
  func_0x0001000e77a0(puVar5,&ppuStack_280,&lStack_1d0,&uStack_418);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  if (lStack_410 != 0) {
    lStack_408 = lStack_410;
    __ZdlPv();
  }
  plVar1 = plStack_218;
  ppuStack_280 = &PTR_DAT_1108629c8;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_220;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_238 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_370;
  appuStack_3d8[0] = &PTR_SUB_110862700;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_378;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_108 = auStack_390;
  func_0x000100105004(&puStack_108);
  puStack_108 = &uStack_3f8;
  func_0x000100105004(&puStack_108);
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_11089b010;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_300;
  ppuStack_368 = &PTR_DAT_11086d7d0;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_308;
  plStack_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_320 != 0) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_1e8);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain(puVar5);
  puVar8 = puVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar8 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar5);
      }
      uVar14 = *(undefined8 *)((long)puVar12 * 8);
      uVar9 = uVar14;
      func_0x00010bf50280(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010bf4b900();
      _objc_release(uVar9);
      if (((ulong)puVar10 & 1) == 0) {
        func_0x00010befa120(puVar6);
        func_0x00010bf50280(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar14);
      }
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    } while (puVar8 != puVar12);
    puVar8 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  puVar10 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_5);
  lVar4 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  __Unwind_Resume(lVar4);
  _objc_storeStrong(lVar4 + 0x20,0);
  _objc_storeStrong(lVar4 + 0x18,0);
  _objc_storeStrong(lVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + 8,0);
  return;
}



/* Entry: 106ca7aac; end: 106ca7af3; -[SCContextPostSnapFeedDataFetcher .cxx_destruct] */

void FUN_106ca7aac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ca7af4; end: 106ca7ba7;  */

undefined4 FUN_106ca7af4(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106ca7ba8; end: 106ca7c87; -[SCContextPostSnapLastViewedMemoryStore updateLastViewedSnapForConversationId:storedPostSnapAction:] */

void FUN_106ca7ba8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x18);
    lVar1 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,lVar1,param_3);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf4b900(uVar2,param_2,param_3);
    if ((int)uVar2 != 0) {
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ca7c88; end: 106ca7d2f; -[SCContextPostSnapLastViewedMemoryStore lastUnexpiredPostSnapActionForConversationId:] */

void FUN_106ca7c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ca7d30; end: 106ca7d7f; -[SCContextPostSnapLastViewedMemoryStore conversationsWithInvalidPostSnapActions] */

void FUN_106ca7d30(long param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ca7d80; end: 106ca7df3; -[SCContextPostSnapLastViewedMemoryStore setHasNoValidPostSnapActionForConversationId:] */

void FUN_106ca7d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ca7df4; end: 106ca7e2b; -[SCContextPostSnapLastViewedMemoryStore .cxx_destruct] */

void FUN_106ca7df4(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ca7e2c; end: 106ca7e8f;  */

undefined ** FUN_106ca7e2c(void)

{
  int iVar1;
  
  if ((bRam000000011381e728 & 1) == 0) {
    iVar1 = 0x1381e728;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113183fe0,0x100000000);
      ___cxa_guard_release(0x11381e728);
    }
  }
  return &PTR_PTR_113183fe0;
}



/* Entry: 106ca7e90; end: 106ca7f17;  */

void FUN_106ca7e90(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ca7f18; end: 106ca7fa3;  */

void FUN_106ca7f18(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ca7fa4; end: 106ca805b;  */

undefined8 FUN_106ca7fa4(void)

{
  int iVar1;
  
  if ((bRam000000011381e7a0 & 1) == 0) {
    iVar1 = 0x1381e7a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381e738 = 0xe;
      puRam000000011381e740 = &UNK_10f3cca4e;
      uRam000000011381e748 = 0x100;
      pcRam000000011381e750 = FUN_106ca805c;
      pcRam000000011381e758 = FUN_106ca8090;
      ppuRam000000011381e730 = &PTR_DAT_11086d7d0;
      uRam000000011381e770 = 0;
      uRam000000011381e768 = 0;
      uRam000000011381e780 = 0;
      uRam000000011381e778 = 0;
      uRam000000011381e790 = 0;
      uRam000000011381e788 = 0;
      uRam000000011381e798 = 0;
      ___cxa_atexit(&DAT_105187b98,0x11381e730,0x100000000);
      ___cxa_guard_release(0x11381e7a0);
    }
  }
  return 0x11381e730;
}



/* Entry: 106ca805c; end: 106ca808f;  */

undefined8 FUN_106ca805c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((0x1a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 106ca8090; end: 106ca80eb;  */

undefined8 FUN_106ca8090(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c29eae0(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106ca80ec; end: 106ca814f;  */

undefined ** FUN_106ca80ec(void)

{
  int iVar1;
  
  if ((bRam000000011381e7a8 & 1) == 0) {
    iVar1 = 0x1381e7a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113184050,0x100000000);
      ___cxa_guard_release(0x11381e7a8);
    }
  }
  return &PTR_PTR_113184050;
}



/* Entry: 106ca8150; end: 106ca81d7;  */

void FUN_106ca8150(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0x21) || (puVar1[0x10] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ca81d8; end: 106ca8263;  */

void FUN_106ca81d8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c096520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c096520(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ca8264; end: 106ca826f; +[SCStoredPostSnapAction table] */

undefined * FUN_106ca8264(void)

{
  return &UNK_10f3cca6d;
}



/* Entry: 106ca8270; end: 106ca8813; +[SCStoredPostSnapAction immutableObjectParse:bufferSize:] */

void FUN_106ca8270(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_70;
  undefined *puStack_68;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d1f90;
  _objc_alloc(PTR_PTR_1126d1f90);
  lVar8 = (long)*piVar1;
  uVar7 = *(ushort *)((long)piVar1 - lVar8);
  if (uVar7 < 5) {
    puStack_68 = (undefined *)0x0;
LAB_106ca8360:
    puStack_70 = (undefined *)0x0;
LAB_106ca8364:
    puVar5 = (undefined *)0x0;
LAB_106ca8368:
    puVar6 = (undefined *)0x0;
LAB_106ca836c:
    puVar10 = (undefined *)0x0;
LAB_106ca8370:
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar1 - lVar8))[2];
    if (uVar9 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puStack_68 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - lVar8);
    }
    lVar8 = -lVar8;
    if (uVar7 < 7) goto LAB_106ca8360;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 6);
    if (uVar9 == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0xb) goto LAB_106ca8364;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 10);
    if (uVar9 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0xd) goto LAB_106ca8368;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0xc);
    if (uVar9 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0xf) goto LAB_106ca836c;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0xe);
    if (uVar9 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar7 < 0x11) goto LAB_106ca8370;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x10);
    if (uVar9 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = -(long)*piVar1;
      uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0x12 < uVar7) {
      uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x12);
      if (uVar9 == 0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar9);
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = -(long)*piVar1;
        uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if (uVar7 < 0x15) {
        puVar14 = (undefined *)0x0;
        puVar13 = (undefined *)0x0;
        bVar3 = false;
        uVar15 = 0;
      }
      else {
        uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x14);
        if (uVar9 == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar9);
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = -(long)*piVar1;
          uVar7 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        uVar15 = 0;
        if (uVar7 < 0x19) {
          bVar3 = false;
        }
        else {
          uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x18);
          if (uVar9 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = *(char *)((long)piVar1 + uVar9) != '\0';
          }
          if (0x1a < uVar7) {
            uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x1a);
            if (uVar9 != 0) {
              uVar15 = *(undefined8 *)((long)piVar1 + uVar9);
            }
            if (((0x1c < uVar7) && (0x1e < uVar7)) && (0x20 < uVar7)) {
              uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x20);
              if (uVar9 == 0) {
                puVar14 = (undefined *)0x0;
              }
              else {
                puVar2 = (uint *)((long)piVar1 + uVar9);
                puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    (long)puVar2 + (ulong)*puVar2 + 4);
                _objc_retainAutoreleasedReturnValue();
              }
              goto LAB_106ca8394;
            }
          }
        }
        puVar14 = (undefined *)0x0;
      }
      goto LAB_106ca8394;
    }
  }
  puVar14 = (undefined *)0x0;
  puVar13 = (undefined *)0x0;
  puVar12 = (undefined *)0x0;
  bVar3 = false;
  uVar15 = 0;
LAB_106ca8394:
  func_0x00010c005280(uVar15,puVar4,param_2,puStack_68,puStack_70,puVar5,puVar6,puVar10,puVar11,
                      puVar12,puVar13,bVar3);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_70);
  _objc_release(puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ca8814; end: 106ca8827; +[SCStoredPostSnapAction objectClassFunctionPointer] */

undefined1  [16] FUN_106ca8814(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_106ca8850;
  auVar1._0_8_ = FUN_106ca8828;
  return auVar1;
}



/* Entry: 106ca8828; end: 106ca884f;  */

int FUN_106ca8828(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf3cca82;
  _strcmp(&UNK_10f3cca82,param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 106ca8850; end: 106ca88eb;  */

bool FUN_106ca8850(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x0001001b9e08(param_2,&UNK_10f3cca94);
  _sqlite3_bind_int64();
  uVar3 = 0;
  if ((0x1a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  _sqlite3_bind_double(uVar3,param_2,2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 106ca88ec; end: 106ca8b63;  */

long * FUN_106ca88ec(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,
                    undefined4 param_12,undefined4 param_13,long param_14)

{
  long *plVar1;
  long lVar2;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    puStack_78 = PTR_PTR_1126f61b8;
    plVar1 = &lStack_80;
    lStack_80 = param_2;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_3;
      _objc_retain(param_4);
      lVar2 = plVar1[3];
      plVar1[3] = param_4;
      _objc_release(lVar2);
      _objc_retain(param_5);
      lVar2 = plVar1[4];
      plVar1[4] = param_5;
      _objc_release(lVar2);
      _objc_retain(param_6);
      lVar2 = plVar1[5];
      plVar1[5] = param_6;
      _objc_release(lVar2);
      _objc_retain(param_7);
      lVar2 = plVar1[6];
      plVar1[6] = param_7;
      _objc_release(lVar2);
      _objc_retain(param_8);
      lVar2 = plVar1[7];
      plVar1[7] = param_8;
      _objc_release(lVar2);
      _objc_retain(param_9);
      lVar2 = plVar1[8];
      plVar1[8] = param_9;
      _objc_release(lVar2);
      _objc_retain(param_10);
      lVar2 = plVar1[9];
      plVar1[9] = param_10;
      _objc_release(lVar2);
      _objc_retain(param_11);
      lVar2 = plVar1[10];
      plVar1[10] = param_11;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = (undefined1)param_12;
      plVar1[0xb] = param_1;
      *(undefined1 *)((long)plVar1 + 0x15) = param_12._1_1_;
      *(undefined1 *)((long)plVar1 + 0x16) = param_12._2_1_;
      _objc_retain(param_14);
      lVar2 = plVar1[0xc];
      plVar1[0xc] = param_14;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return plVar1;
}



/* Entry: 106ca8b64; end: 106ca91f3;  */

void FUN_106ca8b64(undefined8 param_1,undefined *param_2)

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
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar9 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar9 < 0) {
      puVar9 = param_2;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 != (undefined *)0x0) {
        puVar1 = param_2;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar9);
        puVar9 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_106ca90a8;
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar9;
        func_0x00010bf636c0();
        _objc_release(puVar9);
        func_0x0001001b9e08(puVar1,&UNK_10f3ccaf7);
        puVar9 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_106ca90a8;
        puVar9 = param_2;
        func_0x00010bf50280(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar9);
        _objc_release(puVar9);
        puVar9 = param_2;
        func_0x00010c0cb5a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,2,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar9);
        _objc_release(puVar9);
        puVar9 = puVar1;
        _sqlite3_step();
        if ((int)puVar9 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar9 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d1f90);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar9;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar9);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_106ca90a0;
          puVar9 = PTR_PTR_1126d1fa8;
          _objc_alloc(PTR_PTR_1126d1fa8);
          puVar1 = puVar3;
          func_0x00010bf50280(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0cb5a0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c15e960(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puStack_78 = puVar3;
          func_0x00010bf4f080();
          _objc_retainAutoreleasedReturnValue();
          puStack_80 = puVar3;
          func_0x00010c15df40();
          _objc_retainAutoreleasedReturnValue();
          puStack_88 = puVar3;
          func_0x00010c15df60();
          _objc_retainAutoreleasedReturnValue();
          puStack_90 = puVar3;
          func_0x00010c15db00();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c15dba0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c073e00();
          func_0x00010c29eae0(puVar3);
          func_0x00010c074920();
          func_0x00010c07fbc0();
          puVar8 = puVar3;
          func_0x00010c096520();
          _objc_retainAutoreleasedReturnValue();
          FUN_106ca88ec(param_1,puVar9,puVar2,puVar1,puVar4,puVar5,puStack_78,puStack_80,puStack_88,
                        puStack_90,puVar6,(char)puVar7);
          goto LAB_106ca8d4c;
        }
      }
    }
    else {
      puVar2 = param_2;
      func_0x00010c1422e0(param_2);
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d1f90);
      puVar3 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126d1fa8;
        _objc_alloc(PTR_PTR_1126d1fa8);
        puVar1 = puVar3;
        func_0x00010bf50280(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c15e960(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = puVar3;
        func_0x00010bf4f080();
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = puVar3;
        func_0x00010c15df40();
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = puVar3;
        func_0x00010c15df60();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar3;
        func_0x00010c15db00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c15dba0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c073e00();
        func_0x00010c29eae0(puVar3);
        func_0x00010c074920();
        func_0x00010c07fbc0();
        puVar8 = puVar3;
        func_0x00010c096520();
        _objc_retainAutoreleasedReturnValue();
        FUN_106ca88ec(param_1,puVar9,puVar2,puVar1,puVar4,puVar5,puStack_78,puStack_80,puStack_88,
                      puStack_90,puVar6,(char)puVar7);
LAB_106ca8d4c:
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puStack_90);
        _objc_release(puStack_88);
        _objc_release(puStack_80);
        _objc_release(puStack_78);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar1);
        param_2 = puVar3;
        goto LAB_106ca90a8;
      }
LAB_106ca90a0:
      param_2 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_106ca90a8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106ca91f4; end: 106ca9267;  */

void FUN_106ca91f4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106ca8b64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ca9268; end: 106ca97db;  */

void FUN_106ca9268(undefined8 param_1,undefined *param_2,undefined1 *param_3)

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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d1fa8;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_106ca8b64();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar12 = PTR_PTR_1126d1fa8;
    _objc_retain(param_2);
    _objc_opt_self(puVar12);
    puVar12 = PTR_PTR_1126d1fa8;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c0cb5a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c15e960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010bf4f080();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010c15df40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c15df60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010c15db00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
      func_0x00010c15dba0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_2;
      func_0x00010c073e00();
      func_0x00010c29eae0(param_2);
      func_0x00010c074920();
      func_0x00010c07fbc0();
      puVar11 = param_2;
      func_0x00010c096520();
      _objc_retainAutoreleasedReturnValue();
      FUN_106ca88ec(param_1,puVar12,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,
                    puVar8,puVar9,(char)puVar10);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar12 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar12 = param_2;
    func_0x00010bf50280(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010c0cb5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010c15e960(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010bf4f080(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010c15df40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010c15df60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010c15db00(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010c15dba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    puVar12 = param_2;
    func_0x00010c073e00();
    puVar1[0x14] = (char)puVar12;
    func_0x00010c29eae0(param_2);
    *(undefined8 *)(puVar1 + 0x58) = param_1;
    puVar12 = param_2;
    func_0x00010c074920();
    puVar1[0x15] = (char)puVar12;
    puVar12 = param_2;
    func_0x00010c07fbc0();
    puVar1[0x16] = (char)puVar12;
    puVar12 = param_2;
    func_0x00010c096520(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar12);
    _objc_retain(puVar1);
    puVar12 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106ca97dc; end: 106ca986f;  */

void FUN_106ca97dc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d1f90;
    _objc_alloc(PTR_PTR_1126d1f90);
    func_0x00010c005280(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


