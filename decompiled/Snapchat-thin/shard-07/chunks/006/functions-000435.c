/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105800890; end: 1058008df; -[SCPollServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105800890(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a0cc);
  _objc_destroyWeak(param_1 + _DAT_11272a0c8);
  _objc_destroyWeak(param_1 + _DAT_11272a0c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a0c0);
  return;
}



/* Entry: 1058008e0; end: 1058009bf; -[SCPollsCreationManager initWithPollsDataCreator:performerProvider:] */

undefined1 *
FUN_1058008e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea678;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058009c0; end: 1058009d3; -[SCPollsCreationManager setPendingPollWithSnapSessionId:poll:] */

void FUN_1058009c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setObject_forKeyedSubscript__112651bb8,param_4,
             param_3);
  return;
}



/* Entry: 1058009d4; end: 1058009db; -[SCPollsCreationManager getPendingPollWithSnapSessionId:clientPollId:] */

void FUN_1058009d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1058009dc; end: 105800b83; -[SCPollsCreationManager createRemotePollWithSnapSessionId:clientPollId:completion:] */

void FUN_1058009dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long in_x4;
  undefined8 uVar3;
  
  _objc_retain(in_x4);
  lVar1 = param_1;
  func_0x00010bfc8ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x4 + 0x10))(in_x4,0,0,puVar2);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(in_x4);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(in_x4);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(in_x4);
  return;
}



/* Entry: 105800b84; end: 105800b8f;  */

void FUN_105800b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105800b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105800b90; end: 105800bcb; -[SCPollsCreationManager .cxx_destruct] */

void FUN_105800b90(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105800bcc; end: 105800c3f; -[SCPollsDataCreator initWithPollsGRPCService:] */

undefined1 * FUN_105800bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea680;
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



/* Entry: 105800c40; end: 105800ee3; -[SCPollsDataCreator createPoll:completion:] */

void FUN_105800c40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bead8;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1deae0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105800d48;
  puStack_40 = &UNK_1108b5508;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf57c00(uVar3,param_2,puVar1,puVar2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105800ee4; end: 105800eef; -[SCPollsDataCreator .cxx_destruct] */

void FUN_105800ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105800ef0; end: 105800f7f; -[SCPollsVotingService initWithPollsGRPCService:] */

undefined1 * FUN_105800ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105800f80; end: 105800ffb; -[SCPollsVotingService _pushVotes:forPollId:] */

void FUN_105800f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126beae0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c037a80();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105800ffc; end: 1058010bb; -[SCPollsVotingService observeVotesWithPollId:] */

void FUN_105800ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058010bc;
  puStack_40 = &UNK_1108b5538;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfad7a0(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058010bc; end: 105801103;  */

undefined8 FUN_1058010bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1032a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105801104; end: 10580110b;  */

void FUN_105801104(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_votes_112685e80);
  return;
}



/* Entry: 10580110c; end: 10580128b; -[SCPollsVotingService fetchVotesWithPollId:] */

void FUN_10580110c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126beae8;
  _objc_opt_new(PTR_PTR_1126beae8);
  func_0x00010c1deac0();
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfc8ea0(uVar5);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10580128c; end: 10580144f;  */

void FUN_10580128c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [128];
  long lStack_e0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 != 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    goto LAB_105801414;
  }
  lVar1 = param_2;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_105801450();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 == 0) {
LAB_1058013c8:
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    puVar15 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained();
    func_0x00010be84f80();
  }
  else {
    lVar1 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      _objc_release(puVar4);
      _objc_release(puVar15);
      goto LAB_1058013c8;
    }
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar4);
  }
  _objc_release(puVar15);
  _objc_release(lVar2);
LAB_105801414:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar13 = param_2;
  func_0x00010c15ad60();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar13 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar13 = param_2;
    func_0x00010c15ad40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296de0();
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar13 = param_2;
  func_0x00010c2a1060(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x105801c18;
  puStack_170 = &UNK_1108b5608;
  _objc_retain(puVar4);
  puStack_168 = puVar4;
  func_0x00010bf97c60(lVar13);
  _objc_release(lVar13);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(puVar4);
  puVar11 = &uStack_1d0;
  puVar12 = auStack_160;
  puVar6 = puVar4;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar13 = *plStack_1c0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_1c0 != lVar13) {
          _objc_enumerationMutation(puVar4);
        }
        uVar16 = *(undefined8 *)(lStack_1c8 + (long)puVar14 * 8);
        lVar1 = param_2;
        func_0x00010c2a1060(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282760(uVar16);
        func_0x00010bfc4f00(lVar1);
        _objc_release(lVar1);
        lVar1 = param_2;
        func_0x00010c2a1080(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282760(uVar16);
        func_0x00010bfcb880(lVar1);
        _objc_release(lVar1);
        if (puVar15 != (undefined *)0x0) {
          func_0x00010c282760(uVar16);
          func_0x00010c282760(puVar15);
        }
        puVar7 = PTR_PTR_1126beb08;
        _objc_alloc();
        func_0x00010c282760(uVar16);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c062740(0);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar8);
        puVar14 = puVar14 + 1;
      } while (puVar6 != puVar14);
      puVar11 = &uStack_1d0;
      puVar12 = auStack_160;
      puVar6 = puVar4;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar6 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(puStack_168);
  _objc_release(puVar4);
  _objc_release(puVar15);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    puVar9 = puVar11;
    func_0x00010c08fa60();
    if (puVar9 == (undefined8 *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR_PTR_1126beaf0;
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain(0);
      if ((puVar15 != (undefined *)0x0) &&
         (puVar10 = puVar12, func_0x00010c08fa60(), puVar10 != (undefined1 *)0x0)) {
        puVar4 = puVar15;
        FUN_105801450(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be84f80(param_2);
        _objc_release(puVar4);
      }
    }
    _objc_release(puVar15);
    _objc_release(0);
    _objc_release(puVar12);
    _objc_release(puVar11);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105801450; end: 105801777;  */

void FUN_105801450(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar17 = param_1;
  func_0x00010c15ad60();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar17 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar17 = param_1;
    func_0x00010c15ad40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar17;
    func_0x00010c296de0();
    func_0x00010c0df820(puVar15,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar17 = param_1;
  func_0x00010c2a1060(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x105801c18;
  puStack_110 = &UNK_1108b5608;
  _objc_retain(puVar4);
  puStack_108 = puVar4;
  func_0x00010bf97c60(lVar17,param_2,&puStack_128);
  _objc_release(lVar17);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(puVar4);
  puVar12 = &uStack_170;
  puVar13 = auStack_100;
  puVar6 = puVar4;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar17 = *plStack_160;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_160 != lVar17) {
          _objc_enumerationMutation(puVar4);
        }
        uVar16 = *(undefined8 *)(lStack_168 + (long)puVar14 * 8);
        uStack_180 = 0;
        uStack_178 = 0;
        lVar3 = param_1;
        func_0x00010c2a1060(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar16;
        func_0x00010c282760(uVar16);
        func_0x00010bfc4f00(lVar3,param_2,&uStack_178,uVar7);
        _objc_release(lVar3);
        lVar3 = param_1;
        func_0x00010c2a1080(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar16;
        func_0x00010c282760(uVar16);
        func_0x00010bfcb880(lVar3,param_2,&uStack_180,uVar7);
        _objc_release(lVar3);
        if (puVar15 == (undefined *)0x0) {
          bVar2 = false;
        }
        else {
          uVar7 = uVar16;
          func_0x00010c282760(uVar16);
          puVar8 = puVar15;
          func_0x00010c282760(puVar15);
          bVar2 = (int)uVar7 == (int)puVar8;
        }
        puVar8 = PTR_PTR_1126beb08;
        _objc_alloc();
        func_0x00010c282760(uVar16);
        uVar1 = uStack_178;
        uVar7 = uStack_180;
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c062740(uVar1,puVar8,param_2,uVar16,uVar7,puVar9);
        func_0x00010befa120(puVar5,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar9);
        puVar14 = puVar14 + 1;
      } while (puVar6 != puVar14);
      puVar12 = &uStack_170;
      puVar13 = auStack_100;
      puVar6 = puVar4;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar6 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(puStack_108);
  _objc_release(puVar4);
  _objc_release(puVar15);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  puVar10 = puVar12;
  func_0x00010c08fa60();
  if (puVar10 == (undefined8 *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126beaf0;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    if ((puVar15 != (undefined *)0x0) &&
       (puVar11 = puVar13, func_0x00010c08fa60(), puVar11 != (undefined1 *)0x0)) {
      puVar4 = puVar15;
      FUN_105801450(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be84f80(param_1,param_2,puVar4,puVar13);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar15);
  _objc_release(0);
  _objc_release(puVar13);
  _objc_release(puVar12);
  return;
}



/* Entry: 105801778; end: 105801863; -[SCPollsVotingService publishVotesWithSerializedInteractions:pollId:] */

void FUN_105801778(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126beaf0;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    if ((puVar3 != (undefined *)0x0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
      puVar2 = puVar3;
      FUN_105801450(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be84f80(param_1,param_2,puVar2,param_4);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105801864; end: 105801a23; -[SCPollsVotingService vote:pollId:] */

void FUN_105801864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126beaf8;
  func_0x00010c0cb140(PTR_PTR_1126beaf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1deac0();
  puVar3 = PTR_PTR_1126beb00;
  _objc_alloc_init(PTR_PTR_1126beb00);
  func_0x00010befc800();
  func_0x00010c1d5e60(puVar2);
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c2a1120(uVar6);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105801a24; end: 105801be7;  */

void FUN_105801a24(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 != 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    goto LAB_105801bac;
  }
  lVar1 = param_2;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_105801450();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 == 0) {
LAB_105801b60:
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    puVar4 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar4);
    func_0x00010be84f80();
  }
  else {
    lVar1 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_105801b60;
    }
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
LAB_105801bac:
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 105801be8; end: 105801c5f; -[SCPollsVotingService .cxx_destruct] */

void FUN_105801be8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105801c60; end: 105801d0b; -[SCPollsVoteUpdate initWithPollId:votes:] */

undefined1 *
FUN_105801c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105801d0c; end: 105801d2f; -[SCPollsVoteUpdate copyWithZone:] */

undefined8 FUN_105801d0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105801d30; end: 105801da3; -[SCPollsVoteUpdate hash] */

undefined8 * FUN_105801d30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105801e24:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105801e30;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105801e30;
        }
        goto LAB_105801e24;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105801e30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105801da4; end: 105801e4b; -[SCPollsVoteUpdate isEqual:] */

long FUN_105801da4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105801e24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105801e30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105801e30;
        }
        goto LAB_105801e24;
      }
    }
    lVar3 = 0;
  }
LAB_105801e30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105801e4c; end: 105801e53; -[SCPollsVoteUpdate pollId] */

undefined8 FUN_105801e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105801e54; end: 105801e5b; -[SCPollsVoteUpdate votes] */

undefined8 FUN_105801e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105801e5c; end: 105801e8b; -[SCPollsVoteUpdate .cxx_destruct] */

void FUN_105801e5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105801e8c; end: 105801eff; -[UNISCPPollService initWithUnifiedGrpcService:] */

undefined1 * FUN_105801e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea698;
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



/* Entry: 105801f00; end: 105801fe3; -[UNISCPPollService createPollWithRequest:callOptionsBuilder:handler:] */

void FUN_105801f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126beb10;
  _objc_opt_class(PTR_PTR_1126beb10);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e049d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105801fe4; end: 1058020c7; -[UNISCPPollService getPollWithRequest:callOptionsBuilder:handler:] */

void FUN_105801fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126beb18;
  _objc_opt_class(PTR_PTR_1126beb18);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e049f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058020c8; end: 1058021ab; -[UNISCPPollService voteWithRequest:callOptionsBuilder:handler:] */

void FUN_1058020c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126beb20;
  _objc_opt_class(PTR_PTR_1126beb20);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e04a18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058021ac; end: 1058021b7; -[UNISCPPollService .cxx_destruct] */

void FUN_1058021ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058021b8; end: 10580221f; +[SCPGetPollRequest descriptor] */

void FUN_1058021b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d5a0,
                        &PTR____CFConstantStringClassReference_110e04a38,&PTR_DAT_1131023d0,
                        &PTR_DAT_1131024a8,3,0x18,0x1c);
    puRam00000001136c0870 = puVar1;
  }
  return;
}



/* Entry: 105802220; end: 105802287; +[SCPGetPollResponse descriptor] */

void FUN_105802220(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d5f0,
                        &PTR____CFConstantStringClassReference_110e04a58,&PTR_DAT_1131023d0,
                        &PTR_DAT_113102508,3,0x18,0x1c);
    puRam00000001136c0878 = puVar1;
  }
  return;
}



/* Entry: 105802288; end: 1058022ef; +[SCPVoteRequest descriptor] */

void FUN_105802288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d640,
                        &PTR____CFConstantStringClassReference_110e04a78,&PTR_DAT_1131023d0,
                        &PTR_DAT_113102428,2,0x18,0x1c);
    puRam00000001136c0880 = puVar1;
  }
  return;
}



/* Entry: 1058022f0; end: 105802357; +[SCPVoteResponse descriptor] */

void FUN_1058022f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d690,
                        &PTR____CFConstantStringClassReference_110e04a98,&PTR_DAT_1131023d0,
                        &PTR_DAT_113102468,2,0x18,0x1c);
    puRam00000001136c0888 = puVar1;
  }
  return;
}



/* Entry: 105802358; end: 1058023bf; +[SCPCreatePollRequest descriptor] */

void FUN_105802358(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d6e0,
                        &PTR____CFConstantStringClassReference_110e04ab8,&PTR_DAT_1131023d0,
                        &PTR_DAT_1131023e8,1,0x10,0x1c);
    puRam00000001136c0890 = puVar1;
  }
  return;
}



/* Entry: 1058023c0; end: 105802427; +[SCPCreatePollResponse descriptor] */

void FUN_1058023c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d730,
                        &PTR____CFConstantStringClassReference_110e04ad8,&PTR_DAT_1131023d0,
                        &PTR_DAT_113102568,3,0x20,0x1c);
    puRam00000001136c0898 = puVar1;
  }
  return;
}



/* Entry: 105802428; end: 10580248f; +[SCPVoter descriptor] */

void FUN_105802428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d780,
                        &PTR____CFConstantStringClassReference_110e04af8,&PTR_DAT_1131023d0,
                        &PTR_s_uuid_1131025c8,5,0x30,0x1c);
    puRam00000001136c08a0 = puVar1;
  }
  return;
}



/* Entry: 105802490; end: 1058024f7; +[SCPVoters descriptor] */

void FUN_105802490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d7d0,
                        &PTR____CFConstantStringClassReference_110e04b18,&PTR_DAT_1131023d0,
                        &PTR_DAT_113102408,1,0x10,0x1c);
    puRam00000001136c08a8 = puVar1;
  }
  return;
}



/* Entry: 1058024f8; end: 10580255f; +[SCPPollInteractions descriptor] */

void FUN_1058024f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6d820,
                        &PTR____CFConstantStringClassReference_110e04b38,&PTR_DAT_1131023d0,
                        &PTR_DAT_113102668,5,0x30,0x1c);
    puRam00000001136c08b0 = puVar1;
  }
  return;
}



/* Entry: 105802560; end: 105802597; -[CTPSearchQueriesDeltaSyncProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105802560(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a0f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a0f4);
  return;
}



/* Entry: 105802598; end: 1058026d7; -[CTPSearchQueriesServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105802598(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11272a100;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126beb48;
  _objc_alloc(PTR_PTR_1126beb48);
  func_0x00010c00f6a0();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058026d8; end: 1058027bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058026d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126beb40;
    _objc_alloc(PTR_PTR_1126beb40);
    lVar2 = lVar1 + _DAT_11272a104;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_11272a108;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf6d580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d9c0(puVar6,param_2,lVar3,lVar5,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058027c0; end: 10580280f; -[CTPSearchQueriesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058027c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a108);
  _objc_destroyWeak(param_1 + _DAT_11272a104);
  _objc_destroyWeak(param_1 + _DAT_11272a100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a0fc);
  return;
}



/* Entry: 105802810; end: 105802953; -[CTPEmojiQueriesDeltaSyncRepository initWithDocObjectContext:deltaSyncService:circumstanceEngine:] */

undefined1 *
FUN_105802810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ea6a0;
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
    puVar3 = PTR_PTR_1126beb28;
    func_0x00010bf8e7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126beb28;
    func_0x00010bf8e7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105802954; end: 105802ac7; -[CTPEmojiQueriesDeltaSyncRepository fetchQueriesForEmojis:performer:completion:] */

void FUN_105802954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be11000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c297260(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105802ac8; end: 105802b53;  */

void FUN_105802ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be21d60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ff60();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105802b54; end: 105802c67; -[CTPEmojiQueriesDeltaSyncRepository _fetchEmojiQueries] */

void FUN_105802b54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc(PTR_PTR_1126b0440);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180(puVar1,param_2,uVar4,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0448;
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
  uVar4 = uVar3;
  func_0x00010c266020(uVar3,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105802c68; end: 105802fa3; -[CTPEmojiQueriesDeltaSyncRepository _getQueriesForEmojis:] */

void FUN_105802c68(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined **appuStack_d8 [9];
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126beb50);
  if (lVar2 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_160,lVar2);
  }
  puVar3 = &uStack_161;
  FUN_105803b4c(puVar3);
  _objc_retain(param_3);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  lVar4 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x0001004c2bb4(&uStack_180,lVar4);
  puStack_118 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(ulong *)((long)puStack_118 + lVar11 * 8);
        _objc_retain(uVar9);
        uStack_e0 = uVar9;
        func_0x0001004c2d3c(&uStack_180,&uStack_e0);
        _objc_release(uStack_e0);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  func_0x0001004c2e3c(appuStack_d8,0xc,puVar3,&uStack_180);
  puStack_120 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  plStack_110 = (long *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puVar5 = &uStack_160;
  func_0x0001000e77a0(puVar5,appuStack_d8,&puStack_120,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_120 != (undefined1 *)0x0) {
    puStack_118 = puStack_120;
    __ZdlPv();
  }
  plVar1 = plStack_70;
  appuStack_d8[0] = &PTR_FUN_110862700;
  plStack_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_120 = auStack_90;
  func_0x000100105004(&puStack_120);
  puStack_120 = (undefined1 *)&uStack_180;
  func_0x000100105004(&puStack_120);
  func_0x0001000e76e0(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar7 = puVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    iVar8 = (int)puVar7;
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(param_3);
    __Unwind_Resume(lVar2);
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    _objc_storeStrong(lVar2 + 0x20,0);
    _objc_storeStrong(lVar2 + 0x18,0);
    _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105802fa4; end: 105802feb; -[CTPEmojiQueriesDeltaSyncRepository .cxx_destruct] */

void FUN_105802fa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105802fec; end: 105803013; -[CTPSearchQueriesDeltaSyncProcessor type] */

void FUN_105802fec(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105803014; end: 10580302b;  */

void FUN_105803014(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10580302c; end: 1058038c7; -[CTPSearchQueriesDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_10580302c(undefined8 param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  long param_6,long param_7)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined ***pppuVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b1;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined ***pppuStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong auStack_288 [49];
  undefined **ppuStack_100;
  undefined ***pppuStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 auStack_b8 [3];
  long *plStack_a0;
  long *plStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 != 0) {
    _objc_opt_class(PTR_PTR_1126beb50);
    if (param_7 == 0) {
      uStack_d0 = 0;
      pcStack_e8 = (code *)0x0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      pppuStack_f8 = (undefined ***)0x0;
      ppuStack_100 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_100);
    }
    puStack_2d0 = (undefined8 *)0x0;
    puStack_2c8 = (undefined8 *)0x0;
    plStack_2c0 = (long *)0x0;
    uStack_3b0 = (ulong)uStack_3b0._4_4_ << 0x20;
    pppuVar11 = &ppuStack_100;
    func_0x00010054c81c(pppuVar11,&puStack_2d0,&uStack_3b0);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_2d0 != (undefined8 *)0x0) {
      puStack_2c8 = puStack_2d0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_d8);
    _objc_release(pcStack_e8);
    _objc_release(uStack_f0);
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    _objc_retain(pppuVar11);
    pppuVar2 = pppuVar11;
    func_0x00010bf52a60();
    if (pppuVar2 != (undefined ***)0x0) {
      lVar14 = *plStack_300;
      do {
        pppuVar16 = (undefined ***)0x0;
        do {
          if (*plStack_300 != lVar14) {
            _objc_enumerationMutation(pppuVar11);
          }
          puVar3 = PTR_PTR_1126beb58;
          FUN_1058043e8(PTR_PTR_1126beb58,*(undefined8 *)(lStack_308 + (long)pppuVar16 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar3);
          pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
        } while (pppuVar2 != pppuVar16);
        pppuVar2 = pppuVar11;
        func_0x00010bf52a60();
      } while (pppuVar2 != (undefined ***)0x0);
    }
    _objc_release(pppuVar11);
    _objc_release(pppuVar11);
  }
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  _objc_retain(param_5);
  lVar14 = param_5;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    lVar15 = *plStack_340;
    do {
      lVar19 = 0;
      do {
        if (*plStack_340 != lVar15) {
          _objc_enumerationMutation(param_5);
        }
        uVar20 = *(undefined8 *)(lStack_348 + lVar19 * 8);
        uVar12 = uVar20;
        func_0x00010c118b40(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        ppuStack_100 = (undefined **)0x0;
        uStack_f0 = 0x3032000000;
        pcStack_e8 = FUN_105803014;
        uStack_e0 = 0x105803024;
        uStack_d8 = 0;
        puStack_378 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_370 = 0xc2000000;
        pcStack_368 = FUN_1058038c8;
        puStack_360 = &UNK_11084f5b8;
        pppuStack_358 = &ppuStack_100;
        pppuStack_f8 = &ppuStack_100;
        func_0x00010c0c0580(uVar4);
        puVar3 = PTR_PTR_1126beb50;
        _objc_alloc(PTR_PTR_1126beb50);
        func_0x00010c084700(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar20;
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar12;
        FUN_105803938();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = pppuStack_f8[5];
        func_0x00010c11d9a0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02d9c0(puVar3);
        _objc_release(ppuVar6);
        _objc_release(uVar5);
        _objc_release(uVar12);
        _objc_release(uVar20);
        puVar7 = PTR_PTR_1126beb58;
        FUN_105803ec8(PTR_PTR_1126beb58,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar3);
        __Block_object_dispose(&ppuStack_100,8);
        _objc_release(uStack_d8);
        _objc_release(uVar4);
        lVar19 = lVar19 + 1;
      } while (lVar14 != lVar19);
      lVar14 = param_5;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(param_5);
  lVar14 = param_6;
  func_0x000100504554(param_6,&PTR___NSConcreteGlobalBlock_1108b5698);
  _objc_opt_class(PTR_PTR_1126beb50);
  if (param_7 == 0) {
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3b0);
  }
  puVar8 = &uStack_3b1;
  FUN_105803b4c(puVar8);
  _objc_retain(lVar14);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3d0 = 0;
  lVar15 = lVar14;
  func_0x00010bf529e0(lVar14);
  func_0x0001004c2bb4(&uStack_3d0,lVar15);
  puStack_2c8 = (undefined8 *)0x0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  _objc_retain(lVar14);
  lVar15 = lVar14;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar19 = *plStack_2c0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_2c0 != lVar19) {
          _objc_enumerationMutation(lVar14);
        }
        uVar13 = *(ulong *)((long)puStack_2c8 + lVar17 * 8);
        _objc_retain(uVar13);
        auStack_288[0] = uVar13;
        func_0x0001004c2d3c(&uStack_3d0,auStack_288);
        _objc_release(auStack_288[0]);
        lVar17 = lVar17 + 1;
      } while (lVar15 != lVar17);
      lVar15 = lVar14;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lVar14);
  _objc_release(lVar14);
  func_0x0001004c2e3c(&ppuStack_100,0xc,puVar8,&uStack_3d0);
  puStack_2d0 = (undefined8 *)0x0;
  puStack_2c8 = (undefined8 *)0x0;
  plStack_2c0 = (long *)0x0;
  auStack_288[0] = auStack_288[0] & 0xffffffff00000000;
  puVar9 = &uStack_3b0;
  pppuVar11 = &ppuStack_100;
  func_0x0001000e77a0(puVar9,pppuVar11,&puStack_2d0,auStack_288);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2d0 != (undefined8 *)0x0) {
    puStack_2c8 = puStack_2d0;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110862700;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2d0 = auStack_b8;
  func_0x000100105004(&puStack_2d0);
  puStack_2d0 = &uStack_3d0;
  func_0x000100105004(&puStack_2d0);
  func_0x0001000e76e0(&uStack_388);
  _objc_release(uStack_398);
  _objc_release(uStack_3a0);
  _objc_retain(puVar9);
  puVar10 = puVar9;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (puVar10 != (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar9);
      }
      pppuVar11 = *(undefined ****)((long)puVar18 * 8);
      puVar3 = PTR_PTR_1126beb58;
      FUN_1058043e8(PTR_PTR_1126beb58,pppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar18 = (undefined8 *)((long)puVar18 + 1);
    } while (puVar10 != puVar18);
    puVar10 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(lVar14);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  lVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar14);
  _objc_release(lVar14);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pppuVar11);
  puVar3 = PTR_PTR_1126beb60;
  _objc_alloc();
  func_0x00010c008360();
  lVar14 = *(long *)(*(long *)(lVar15 + 0x20) + 8);
  uVar12 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined **)(lVar14 + 0x28) = puVar3;
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar11);
  return;
}



/* Entry: 1058038c8; end: 105803937;  */

void FUN_1058038c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126beb60;
  _objc_alloc();
  func_0x00010c008360();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105803938; end: 105803aab;  */

void FUN_105803938(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105803014;
    uStack_40 = 0x105803024;
    uStack_38 = 0;
    lVar1 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bee60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    ppuVar3 = (undefined **)puStack_58[5];
    _objc_retain(ppuVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105803aac; end: 105803b07;  */

void FUN_105803aac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0f5860(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_105803938();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105803b08; end: 105803b13; -[CTPSearchQueriesDeltaSyncProcessor .cxx_destruct] */

void FUN_105803b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105803b14; end: 105803b4b;  */

void FUN_105803b14(long param_1,undefined8 param_2)

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



/* Entry: 105803b4c; end: 105803baf;  */

undefined ** FUN_105803b4c(void)

{
  int iVar1;
  
  if ((bRam000000011381a2d0 & 1) == 0) {
    iVar1 = 0x1381a2d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113102768,0x100000000);
      ___cxa_guard_release(0x11381a2d0);
    }
  }
  return &PTR_PTR_113102768;
}



/* Entry: 105803bb0; end: 105803c37;  */

void FUN_105803bb0(uint *param_1,undefined1 *param_2)

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



/* Entry: 105803c38; end: 105803cc3;  */

void FUN_105803c38(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d4f60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105803cc4; end: 105803ccf; +[SCCTPSearchQueryData table] */

undefined * FUN_105803cc4(void)

{
  return &UNK_10f2fd215;
}



/* Entry: 105803cd0; end: 105803ea3; +[SCCTPSearchQueryData immutableObjectParse:bufferSize:] */

void FUN_105803cd0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126beb50;
  _objc_alloc(PTR_PTR_1126beb50);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar10 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar10 + (ulong)*puVar10 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    if ((6 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6)), uVar7 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar10 + (ulong)*puVar10 + 4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 != (undefined *)0x0) {
            func_0x00010befa120(puVar5,param_2,puVar9);
          }
          _objc_release(puVar9);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2 + 1 + *puVar2);
      }
      puVar9 = puVar5;
      func_0x00010bf51e00(puVar5);
      _objc_release(puVar5);
      goto LAB_105803e20;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_105803e20:
  func_0x00010c02d9c0(puVar4,param_2,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105803ea4; end: 105803ec7; +[SCCTPSearchQueryData objectClassFunctionPointer] */

undefined1  [16] FUN_105803ea4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105803ec0;
  auVar1._0_8_ = 0x105803eb8;
  return auVar1;
}



/* Entry: 105803ec8; end: 105803fc3;  */

void FUN_105803ec8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126beb58;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c11d9a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_105803fc4(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105803fc4; end: 10580408f;  */

undefined1 * FUN_105803fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126ea6b0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105804090; end: 1058043e7;  */

void FUN_105804090(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar5,&UNK_10f2fd22a);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0d4f60(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar5,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar5;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar5;
            _sqlite3_column_int64(puVar5,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126beb50);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_105804338;
            puVar5 = PTR_PTR_1126beb58;
            _objc_alloc(PTR_PTR_1126beb58);
            puVar2 = puVar3;
            func_0x00010c0d4f60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c11d9a0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_105803fc4(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_105804178;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126beb50);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126beb58;
        _objc_alloc(PTR_PTR_1126beb58);
        puVar2 = puVar3;
        func_0x00010c0d4f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c11d9a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_105803fc4(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_105804178:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_105804340;
      }
LAB_105804338:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105804340:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058043e8; end: 10580445b;  */

void FUN_1058043e8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105804090();
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



/* Entry: 10580445c; end: 1058044bb;  */

void FUN_10580445c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126beb50;
    _objc_alloc(PTR_PTR_1126beb50);
    func_0x00010c02d9c0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058044bc; end: 1058044eb; -[SCCTPSearchQueryDataChangeRequest .cxx_destruct] */

void FUN_1058044bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1058044ec; end: 1058044f7; -[SCCTPSearchQueryDataChangeRequest table] */

undefined * FUN_1058044ec(void)

{
  return &UNK_10f2fd215;
}



/* Entry: 1058044f8; end: 10580453f; -[SCCTPSearchQueryDataChangeRequest createTableWithSQLite:] */

void FUN_1058044f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbeda8,0x7e,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105804540; end: 1058048c7; -[SCCTPSearchQueryDataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105804540(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10580445c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1058048c8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2fd29a);
    if (lVar6 == 0) goto LAB_105804864;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105804864;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126beb50);
    func_0x00010c21c9a0(puVar7);
LAB_10580484c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2fd26a);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126beb50);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105804870;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105804870;
    }
    FUN_10580445c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1058048c8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2fd2d5);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126beb50);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10580484c;
      }
    }
LAB_105804864:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105804870:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1058048c8; end: 105804b43;  */

ulong FUN_1058048c8(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  int aiStack_124 [3];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar11 = param_2;
  func_0x00010c11d9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_138 = 0;
  uStack_130 = 0;
  lStack_140 = 0;
  lStack_118 = 0;
  aiStack_124[1] = 0;
  aiStack_124[2] = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(uVar11);
  uVar4 = uVar11;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar12 = *plStack_110;
    do {
      uVar13 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(uVar11);
        }
        uVar5 = param_1;
        FUN_105804b44(param_1,*(undefined8 *)(lStack_118 + uVar13 * 8));
        aiStack_124[0] = (int)uVar5;
        if (aiStack_124[0] != 0) {
          func_0x000100c47d40(&lStack_140,aiStack_124);
        }
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
      uVar4 = uVar11;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(uVar11);
  _objc_release(uVar11);
  _objc_release(uVar11);
  uVar11 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_105804b44(param_1,uVar11);
  lVar12 = 0x1130c2400;
  if (lStack_138 - lStack_140 != 0) {
    lVar12 = lStack_140;
  }
  uVar13 = param_1;
  func_0x000100c47e34(param_1,lVar12,lStack_138 - lStack_140 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000100c47f00(param_1,6,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar4 & 0xffffffff);
  pcVar10 = (char *)(ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x0001001ce548(param_1);
  _objc_release(uVar11);
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  uVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  _objc_release(param_2);
  __Unwind_Resume(uVar11);
  _objc_retain(pcVar10);
  if (pcVar10 == (char *)0x0) {
    uVar11 = 0;
    goto LAB_105804c24;
  }
  pcVar6 = pcVar10;
  _CFStringGetCStringPtr(pcVar10,0x8000100);
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    _strlen(pcVar6);
    func_0x0001001cde08(uVar11,pcVar6,pcVar7);
    goto LAB_105804c24;
  }
  pcVar6 = pcVar10;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar10;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar6 != (char *)0x0) goto LAB_105804be4;
    uVar11 = 0;
  }
  else {
LAB_105804be4:
    pcVar8 = pcVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar9 = pcVar6;
    func_0x00010c08fa60(pcVar6);
    pcVar7 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
    }
    func_0x0001001cde08(uVar11,pcVar7,pcVar9);
  }
  _objc_release(pcVar6);
LAB_105804c24:
  _objc_release(pcVar10);
  return uVar11;
}



/* Entry: 105804b44; end: 105804c73;  */

undefined8 FUN_105804b44(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105804c24;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105804c24;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105804be4;
    param_1 = 0;
  }
  else {
LAB_105804be4:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_105804c24:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105804c74; end: 105804ce7; -[CTPSearchQueriesServices initWithEmojiQueriesRepository:] */

undefined1 * FUN_105804c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea6b8;
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



/* Entry: 105804ce8; end: 105804cef; -[CTPSearchQueriesServices emojiQueriesRepository] */

undefined8 FUN_105804ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105804cf0; end: 105804d1f; -[CTPSearchQueriesServices setEmojiQueriesRepository:] */

void FUN_105804cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105804d20; end: 105804d2b; -[CTPSearchQueriesServices .cxx_destruct] */

void FUN_105804d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105804d2c; end: 105804de7; -[SCCTPSearchQueryData initWithName:queryStrArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105804d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea6c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a134);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a134) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272a138);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a138) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105804de8; end: 105804e0b; -[SCCTPSearchQueryData copyWithZone:] */

undefined8 FUN_105804de8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105804e0c; end: 105804e8f; -[SCCTPSearchQueryData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105804e0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a134);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272a138);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105804f20:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105804f2c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11272a134);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11272a134)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11272a138);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11272a138)) {
          func_0x00010c071ae0();
          goto LAB_105804f2c;
        }
        goto LAB_105804f20;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105804f2c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105804e90; end: 105804f47; -[SCCTPSearchQueryData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105804e90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105804f20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105804f2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11272a134);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11272a134)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11272a138);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11272a138)) {
          func_0x00010c071ae0();
          goto LAB_105804f2c;
        }
        goto LAB_105804f20;
      }
    }
    lVar3 = 0;
  }
LAB_105804f2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105804f48; end: 105804f57; -[SCCTPSearchQueryData name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105804f48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a134);
}



/* Entry: 105804f58; end: 105804f67; -[SCCTPSearchQueryData queryStrArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105804f58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272a138);
}



/* Entry: 105804f68; end: 105804fa7; -[SCCTPSearchQueryData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105804f68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a138,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a134,0);
  return;
}



/* Entry: 105804fa8; end: 10580500f; +[SCCTPSearchTags descriptor] */

void FUN_105804fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6dde8,
                        &PTR____CFConstantStringClassReference_110e04bd8,&PTR_DAT_1131027d8,
                        &PTR_DAT_1131028f0,2,0x18,0x1c);
    puRam00000001136c08b8 = puVar1;
  }
  return;
}



/* Entry: 105805010; end: 105805093; +[SCCTPSearchTags_TagsList descriptor] */

undefined * FUN_105805010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6de10,
                        &PTR____CFConstantStringClassReference_110e04bf8,&PTR_DAT_1131027d8,
                        &PTR_DAT_1131027f0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c08c0 = puVar1;
  }
  return puRam00000001136c08c0;
}



/* Entry: 105805094; end: 1058050fb; +[SCCTPSearchTagsIndex descriptor] */

void FUN_105805094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6de38,
                        &PTR____CFConstantStringClassReference_110e04c18,&PTR_DAT_1131027d8,
                        &PTR_s_itemsArray_113102930,2,0x18,0x1c);
    puRam00000001136c08c8 = puVar1;
  }
  return;
}



/* Entry: 1058050fc; end: 10580517f; +[SCCTPSearchTagsIndex_CTMetadata descriptor] */

undefined * FUN_1058050fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6de60,
                        &PTR____CFConstantStringClassReference_110e04c38,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102810,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001136c08d0 = puVar1;
  }
  return puRam00000001136c08d0;
}



/* Entry: 105805180; end: 105805203; +[SCCTPSearchTagsIndex_CTResult descriptor] */

undefined * FUN_105805180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6de88,
                        &PTR____CFConstantStringClassReference_110e04c58,&PTR_DAT_1131027d8,
                        &PTR_s_id_p_113102970,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c08d8 = puVar1;
  }
  return puRam00000001136c08d8;
}



/* Entry: 105805204; end: 105805287; +[SCCTPSearchTagsIndex_IndexEntry descriptor] */

undefined * FUN_105805204(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6deb0,
                        &PTR____CFConstantStringClassReference_110e04c78,&PTR_DAT_1131027d8,
                        &PTR_s_tag_1131029b0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c08e0 = puVar1;
  }
  return puRam00000001136c08e0;
}



/* Entry: 105805288; end: 1058052ef; +[SCCTPClientSearchTags descriptor] */

void FUN_105805288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ded8,
                        &PTR____CFConstantStringClassReference_110e04c98,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102830,1,0x10,0x1c);
    puRam00000001136c08e8 = puVar1;
  }
  return;
}



/* Entry: 1058052f0; end: 105805373; +[SCCTPClientSearchTags_ItemInfo descriptor] */

undefined * FUN_1058052f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6df00,
                        &PTR____CFConstantStringClassReference_110e04cb8,&PTR_DAT_1131027d8,
                        &PTR_DAT_1131029f0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c08f0 = puVar1;
  }
  return puRam00000001136c08f0;
}



/* Entry: 105805374; end: 1058053db; +[SCCTPClientSearchTagsOpt descriptor] */

void FUN_105805374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c08f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6df28,
                        &PTR____CFConstantStringClassReference_110e04cd8,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102850,1,0x10,0x1c);
    puRam00000001136c08f8 = puVar1;
  }
  return;
}



/* Entry: 1058053dc; end: 10580545f; +[SCCTPClientSearchTagsOpt_MapEntry descriptor] */

undefined * FUN_1058053dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6df50,
                        &PTR____CFConstantStringClassReference_110e04cf8,&PTR_DAT_1131027d8,
                        &PTR_s_key_113102a30,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0900 = puVar1;
  }
  return puRam00000001136c0900;
}



/* Entry: 105805460; end: 1058054c7; +[SCCTPClientSearchTagsInverted descriptor] */

void FUN_105805460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0908 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6df78,
                        &PTR____CFConstantStringClassReference_110e04d18,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102a70,2,0x18,0x1c);
    puRam00000001136c0908 = puVar1;
  }
  return;
}


