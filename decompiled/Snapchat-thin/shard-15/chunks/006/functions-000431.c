/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bb4185c; end: 10bb41873; -[SCABitmojiIdentityViewClose setIdentityViewSessionId:] */

void FUN_10bb4185c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc43f8,5,param_3,0);
  return;
}



/* Entry: 10bb41874; end: 10bb4188b; -[SCABitmojiIdentityViewClose setOldAvatarOptionIds:] */

void FUN_10bb41874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016598,6,param_3,0);
  return;
}



/* Entry: 10bb4188c; end: 10bb418a3; -[SCABitmojiIdentityViewClose setProfileSessionId:] */

void FUN_10bb4188c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,7,param_3,0);
  return;
}



/* Entry: 10bb418a4; end: 10bb418f7; -[SCABitmojiIdentityViewClose setViewTimeSec:] */

void FUN_10bb418a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb418f8; end: 10bb418fb; -[SCABitmojiIdentityViewClose getFieldNumberToFieldDict] */

void FUN_10bb418f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bb418fc; end: 10bb41907; -[SCABitmojiIdentityViewClose toProtoWithAllowedFields:] */

void FUN_10bb418fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bb41908; end: 10bb4190f; -[SCABitmojiIdentityViewClose getPayloadIdentifier] */

undefined8 FUN_10bb41908(void)

{
  return 0x1723;
}



/* Entry: 10bb41910; end: 10bb41bbb; -[SCABitmojiIdentityViewLaunch fromDictionary:] */

void FUN_10bb41910(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270cc78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c170a60(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1a9b20(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1a9b40(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1d0ce0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1e44c0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bb41bbc; end: 10bb41bc7; -[SCABitmojiIdentityViewLaunch getEventName] */

undefined ** FUN_10bb41bbc(void)

{
  return &PTR____CFConstantStringClassReference_110fc5278;
}



/* Entry: 10bb41bc8; end: 10bb41bcf; -[SCABitmojiIdentityViewLaunch getEventQoS] */

undefined8 FUN_10bb41bc8(void)

{
  return 1;
}



/* Entry: 10bb41bd0; end: 10bb41c23; -[SCABitmojiIdentityViewLaunch setBitmojiAvatarGender:] */

void FUN_10bb41bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc3f78,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb41c24; end: 10bb41c3b; -[SCABitmojiIdentityViewLaunch setIdentityViewReferrer:] */

void FUN_10bb41c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016958,3,param_3,0);
  return;
}



/* Entry: 10bb41c3c; end: 10bb41c53; -[SCABitmojiIdentityViewLaunch setIdentityViewSessionId:] */

void FUN_10bb41c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc43f8,4,param_3,0);
  return;
}



/* Entry: 10bb41c54; end: 10bb41c6b; -[SCABitmojiIdentityViewLaunch setOldAvatarOptionIds:] */

void FUN_10bb41c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016598,5,param_3,0);
  return;
}



/* Entry: 10bb41c6c; end: 10bb41c83; -[SCABitmojiIdentityViewLaunch setProfileSessionId:] */

void FUN_10bb41c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,6,param_3,0);
  return;
}



/* Entry: 10bb41c84; end: 10bb41c87; -[SCABitmojiIdentityViewLaunch getFieldNumberToFieldDict] */

void FUN_10bb41c84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bb41c88; end: 10bb41c93; -[SCABitmojiIdentityViewLaunch toProtoWithAllowedFields:] */

void FUN_10bb41c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bb41c94; end: 10bb41c9b; -[SCABitmojiIdentityViewLaunch getPayloadIdentifier] */

undefined8 FUN_10bb41c94(void)

{
  return 0x1725;
}



/* Entry: 10bb41c9c; end: 10bb441fb; -[SCABloopsChatDrawerActionMetadata initWithDictionary:] */

undefined8 * FUN_10bb41c9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uStack_c78;
  undefined *puStack_c70;
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_c70 = PTR_PTR_11270cc80;
  puVar1 = &uStack_c78;
  uStack_c78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  _objc_retain();
  _objc_release(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c171e60(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c171e80(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c171ea0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c171ec0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c171ee0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c171f00(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c171f40(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c171f60(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c171f80(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c171fa0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c171fc0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c171fe0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172000(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10baed474();
      func_0x00010c172320(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c172340(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c172360(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172380(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c1723e0(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            puVar7 = PTR_PTR_1126e2bc0;
            _objc_alloc(PTR_PTR_1126e2bc0);
            func_0x00010c00c560();
            func_0x00010befa120(puVar4);
            _objc_release(puVar7);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172400(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172420(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172440(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172460(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172480(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c1724a0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c1724c0(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172540(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c172560(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c172600(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c172620(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172680(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c1726e0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172700(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c172720(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172740(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172760(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c172780(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c1727c0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c1727e0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172800(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c172820(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172880(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c172940(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c172960(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c172980(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1729a0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172580(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1725a0(puVar1);
      _objc_release(lVar2);
    }
  }
  puVar8 = puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  puVar3 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 10bb441fc; end: 10bb4424f; -[SCABloopsChatDrawerActionMetadata setBloopsActionMenuOpenCount:] */

void FUN_10bb441fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016978,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44250; end: 10bb44297; -[SCABloopsChatDrawerActionMetadata setBloopsAllPreviewsMedianLatencyPerCategory:] */

void FUN_10bb44250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016998,3,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44298; end: 10bb442df; -[SCABloopsChatDrawerActionMetadata setBloopsAttributionWebSeen:] */

void FUN_10bb44298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110169b8,4,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb442e0; end: 10bb44333; -[SCABloopsChatDrawerActionMetadata setBloopsAveragePreviewGenerationTime:] */

void FUN_10bb442e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110169d8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44334; end: 10bb4437b; -[SCABloopsChatDrawerActionMetadata setBloopsAveragePreviewLatencyPerCategory:] */

void FUN_10bb44334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110169f8,6,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb4437c; end: 10bb443cf; -[SCABloopsChatDrawerActionMetadata setBloopsAveragePreviewResourcesDownloadingTime:] */

void FUN_10bb4437c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016a18,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb443d0; end: 10bb44423; -[SCABloopsChatDrawerActionMetadata setBloopsCacheSize:] */

void FUN_10bb443d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016a38,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44424; end: 10bb4446b; -[SCABloopsChatDrawerActionMetadata setBloopsCacheStatusByCategoryDetailedPosition:] */

void FUN_10bb44424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016a58,9,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb4446c; end: 10bb444b3; -[SCABloopsChatDrawerActionMetadata setBloopsCategoriesSeen:] */

void FUN_10bb4446c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016a78,10,param_3,7)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb444b4; end: 10bb444fb; -[SCABloopsChatDrawerActionMetadata setBloopsCategoriesSeenDetailed:] */

void FUN_10bb444b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016a98,0xb,param_3,7
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb444fc; end: 10bb44543; -[SCABloopsChatDrawerActionMetadata setBloopsCategoriesSeenDetailedPosition:] */

void FUN_10bb444fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016ab8,0xc,param_3,7
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44544; end: 10bb44597; -[SCABloopsChatDrawerActionMetadata setBloopsCategoryWasVisibleToCustomer:] */

void FUN_10bb44544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016ad8,0xd,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44598; end: 10bb445eb; -[SCABloopsChatDrawerActionMetadata setBloopsChangeSecondTargetCount:] */

void FUN_10bb44598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016af8,0xe,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb445ec; end: 10bb4466b; -[SCABloopsChatDrawerActionMetadata setBloopsEnableTwoPersonButtonWasPressed:] */

void FUN_10bb445ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baed454(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111016b18,0xf,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb4466c; end: 10bb446bf; -[SCABloopsChatDrawerActionMetadata setBloopsEnableTwoPersonPanelWasClosed:] */

void FUN_10bb4466c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016b38,0x10,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb446c0; end: 10bb44713; -[SCABloopsChatDrawerActionMetadata setBloopsFeatureEnabled:] */

void FUN_10bb446c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016b58,0x11,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44714; end: 10bb44767; -[SCABloopsChatDrawerActionMetadata setBloopsFeatureInitLatency:] */

void FUN_10bb44714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016b78,0x12,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44768; end: 10bb4477f; -[SCABloopsChatDrawerActionMetadata setBloopsFeatureSwitchOnError:] */

void FUN_10bb44768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016b98,0x13,param_3,0);
  return;
}



/* Entry: 10bb44780; end: 10bb447c7; -[SCABloopsChatDrawerActionMetadata setBloopsFirstPreviewAndFullscreenCodecParameters:] */

void FUN_10bb44780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016bb8,0x14,param_3,
                      0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb447c8; end: 10bb4480f; -[SCABloopsChatDrawerActionMetadata setBloopsFirstPreviewLatencyPerCategory:] */

void FUN_10bb447c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016bd8,0x15,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44810; end: 10bb44857; -[SCABloopsChatDrawerActionMetadata setBloopsFourPreviewsAverageLatencyPerCategory:] */

void FUN_10bb44810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016bf8,0x16,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44858; end: 10bb4489f; -[SCABloopsChatDrawerActionMetadata setBloopsFourPreviewsMedianLatencyPerCategory:] */

void FUN_10bb44858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016c18,0x17,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb448a0; end: 10bb448e7; -[SCABloopsChatDrawerActionMetadata setBloopsFullscreenRenderingStatus:] */

void FUN_10bb448a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016c38,0x18,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb448e8; end: 10bb4492f; -[SCABloopsChatDrawerActionMetadata setBloopsFullscreensSeen:] */

void FUN_10bb448e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016c58,0x19,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44930; end: 10bb44947; -[SCABloopsChatDrawerActionMetadata setBloopsFullscreensSeenString:] */

void FUN_10bb44930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016c78,0x1a,param_3,0);
  return;
}



/* Entry: 10bb44948; end: 10bb4498f; -[SCABloopsChatDrawerActionMetadata setBloopsGenerationMetricsPerCategory:] */

void FUN_10bb44948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016c98,0x1b,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44990; end: 10bb449a7; -[SCABloopsChatDrawerActionMetadata setBloopsGenerationMetricsPerCategoryString:] */

void FUN_10bb44990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2f18,0x1c,param_3,0);
  return;
}



/* Entry: 10bb449a8; end: 10bb449fb; -[SCABloopsChatDrawerActionMetadata setBloopsHoldGuideWasHeld:] */

void FUN_10bb449a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016cb8,0x1d,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb449fc; end: 10bb44a4f; -[SCABloopsChatDrawerActionMetadata setBloopsHoldGuideWasSkipped:] */

void FUN_10bb449fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016cd8,0x1e,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44a50; end: 10bb44a97; -[SCABloopsChatDrawerActionMetadata setBloopsLensProcessingResults:] */

void FUN_10bb44a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016cf8,0x1f,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44a98; end: 10bb44adf; -[SCABloopsChatDrawerActionMetadata setBloopsOnboardingVideoSelectionCount:] */

void FUN_10bb44a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016d18,0x20,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44ae0; end: 10bb44b27; -[SCABloopsChatDrawerActionMetadata setBloopsOnboardingVideoViewCount:] */

void FUN_10bb44ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016d38,0x21,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44b28; end: 10bb44b7b; -[SCABloopsChatDrawerActionMetadata setBloopsPresentedWithFriendsPhoto:] */

void FUN_10bb44b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016d58,0x22,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44b7c; end: 10bb44bc3; -[SCABloopsChatDrawerActionMetadata setBloopsPreviewsRenderingStatus:] */

void FUN_10bb44b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016d78,0x23,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44bc4; end: 10bb44c0b; -[SCABloopsChatDrawerActionMetadata setBloopsPreviewsSeen:] */

void FUN_10bb44bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016d98,0x24,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44c0c; end: 10bb44c23; -[SCABloopsChatDrawerActionMetadata setBloopsPreviewsSeenString:] */

void FUN_10bb44c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016db8,0x25,param_3,0);
  return;
}



/* Entry: 10bb44c24; end: 10bb44c6b; -[SCABloopsChatDrawerActionMetadata setBloopsRankingBestCustomizedFeatures:] */

void FUN_10bb44c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016dd8,0x26,param_3,
                      9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44c6c; end: 10bb44cb3; -[SCABloopsChatDrawerActionMetadata setBloopsRankingBestPrerenderFeatures:] */

void FUN_10bb44c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016df8,0x27,param_3,
                      9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44cb4; end: 10bb44cfb; -[SCABloopsChatDrawerActionMetadata setBloopsRankingQueryVector:] */

void FUN_10bb44cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016e18,0x28,param_3,
                      9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44cfc; end: 10bb44d13; -[SCABloopsChatDrawerActionMetadata setBloopsSearchConfigurationName:] */

void FUN_10bb44cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016e38,0x29,param_3,0);
  return;
}



/* Entry: 10bb44d14; end: 10bb44d5b; -[SCABloopsChatDrawerActionMetadata setBloopsSentDuringSession:] */

void FUN_10bb44d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016e58,0x2a,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44d5c; end: 10bb44d73; -[SCABloopsChatDrawerActionMetadata setBloopsSuggestionId:] */

void FUN_10bb44d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111016e78,0x2b,param_3,0);
  return;
}



/* Entry: 10bb44d74; end: 10bb44dc7; -[SCABloopsChatDrawerActionMetadata setBloopsTargetWasInitialized:] */

void FUN_10bb44d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016e98,0x2c,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44dc8; end: 10bb44e0f; -[SCABloopsChatDrawerActionMetadata setBloopsTargetsGenderTypes:] */

void FUN_10bb44dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016eb8,0x2d,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb44e10; end: 10bb44e63; -[SCABloopsChatDrawerActionMetadata setBloopsTotalSelectionCount:] */

void FUN_10bb44e10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016ed8,0x2e,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44e64; end: 10bb44eb7; -[SCABloopsChatDrawerActionMetadata setBloopsGlMajorVersion:] */

void FUN_10bb44e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016ef8,0x30,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44eb8; end: 10bb44f0b; -[SCABloopsChatDrawerActionMetadata setBloopsGlMinorVersion:] */

void FUN_10bb44eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016f18,0x31,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb44f0c; end: 10bb450b3; -[SCABloopsChatDrawerActionMetadata prepareDictionary:] */

void FUN_10bb44f0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          func_0x00010bf0a640(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c1d0640(param_3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_11270cc80;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bb450b4; end: 10bb450b7; -[SCABloopsChatDrawerActionMetadata getFieldNumberToFieldDict] */

void FUN_10bb450b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bb450b8; end: 10bb450c3; -[SCABloopsChatDrawerActionMetadata toProtoWithAllowedFields:] */

void FUN_10bb450b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,6,0);
  return;
}



/* Entry: 10bb450c4; end: 10bb450cb; -[SCABloopsChatDrawerActionMetadata getPayloadIdentifier] */

undefined8 FUN_10bb450c4(void)

{
  return 0x13d;
}



/* Entry: 10bb450cc; end: 10bb4575f; -[SCABloopsCodecParameters initWithDictionary:] */

undefined1 * FUN_10bb450cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270cc88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172060(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172080(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1720a0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1720c0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1720e0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172100(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172120(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c172140(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172160(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172180(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1721a0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1721c0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1721e0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c172200(puVar1);
      _objc_release(uVar2);
    }
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bb45760; end: 10bb457b3; -[SCABloopsCodecParameters setBloopsCodecColorFormat:] */

void FUN_10bb45760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016f38,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb457b4; end: 10bb45807; -[SCABloopsCodecParameters setBloopsCodecCropRectBottom:] */

void FUN_10bb457b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016f58,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45808; end: 10bb4585b; -[SCABloopsCodecParameters setBloopsCodecCropRectLeft:] */

void FUN_10bb45808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016f78,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb4585c; end: 10bb458af; -[SCABloopsCodecParameters setBloopsCodecCropRectRight:] */

void FUN_10bb4585c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016f98,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb458b0; end: 10bb45903; -[SCABloopsCodecParameters setBloopsCodecCropRectTop:] */

void FUN_10bb458b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016fb8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45904; end: 10bb45957; -[SCABloopsCodecParameters setBloopsCodecGridColumns:] */

void FUN_10bb45904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016fd8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45958; end: 10bb459ab; -[SCABloopsCodecParameters setBloopsCodecGridRows:] */

void FUN_10bb45958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111016ff8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb459ac; end: 10bb459c3; -[SCABloopsCodecParameters setBloopsCodecName:] */

void FUN_10bb459ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111017018,9,param_3,0);
  return;
}



/* Entry: 10bb459c4; end: 10bb45a17; -[SCABloopsCodecParameters setBloopsCodecSliceHeight:] */

void FUN_10bb459c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111017038,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45a18; end: 10bb45a6b; -[SCABloopsCodecParameters setBloopsCodecStride:] */

void FUN_10bb45a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111017058,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45a6c; end: 10bb45abf; -[SCABloopsCodecParameters setBloopsCodecTileHeight:] */

void FUN_10bb45a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111017078,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45ac0; end: 10bb45b13; -[SCABloopsCodecParameters setBloopsCodecTileWidth:] */

void FUN_10bb45ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111017098,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45b14; end: 10bb45b67; -[SCABloopsCodecParameters setBloopsCodecVideoHeight:] */

void FUN_10bb45b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110170b8,0xe,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45b68; end: 10bb45bbb; -[SCABloopsCodecParameters setBloopsCodecVideoWidth:] */

void FUN_10bb45b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110170d8,0xf,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45bbc; end: 10bb45bbf; -[SCABloopsCodecParameters getFieldNumberToFieldDict] */

void FUN_10bb45bbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bb45bc0; end: 10bb45bcb; -[SCABloopsCodecParameters toProtoWithAllowedFields:] */

void FUN_10bb45bc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,0);
  return;
}



/* Entry: 10bb45bcc; end: 10bb45bd3; -[SCABloopsCodecParameters getPayloadIdentifier] */

undefined8 FUN_10bb45bcc(void)

{
  return 0x13e;
}



/* Entry: 10bb45bd4; end: 10bb45c53; -[SCABloopsGeneratedResult setBloopsConfigGenderType:] */

void FUN_10bb45bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baed118(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_1110170f8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45c54; end: 10bb45c6b; -[SCABloopsGeneratedResult setBloopsConfigUrl:] */

void FUN_10bb45c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111017118,3,param_3,0);
  return;
}



/* Entry: 10bb45c6c; end: 10bb45c83; -[SCABloopsGeneratedResult setBloopsCoreApiVersion:] */

void FUN_10bb45c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd17b8,4,param_3,0);
  return;
}



/* Entry: 10bb45c84; end: 10bb45cd7; -[SCABloopsGeneratedResult setBloopsGeneratedResultSize:] */

void FUN_10bb45c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111017138,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45cd8; end: 10bb45d57; -[SCABloopsGeneratedResult setBloopsGeneratedResultType:] */

void FUN_10bb45cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baed4f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111017158,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45d58; end: 10bb45d9f; -[SCABloopsGeneratedResult setBloopsGenerationInternalMetrics:] */

void FUN_10bb45d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111017178,7,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb45da0; end: 10bb45df3; -[SCABloopsGeneratedResult setBloopsGridIndex:] */

void FUN_10bb45da0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111017198,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45df4; end: 10bb45e47; -[SCABloopsGeneratedResult setBloopsHasCustomText:] */

void FUN_10bb45df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110171b8,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45e48; end: 10bb45e5f; -[SCABloopsGeneratedResult setBloopsId:] */

void FUN_10bb45e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_1110171d8,10,param_3,0);
  return;
}



/* Entry: 10bb45e60; end: 10bb45eb3; -[SCABloopsGeneratedResult setBloopsIsFromCache:] */

void FUN_10bb45e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110171f8,0xb,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45eb4; end: 10bb45f07; -[SCABloopsGeneratedResult setBloopsIsTwoPerson:] */

void FUN_10bb45eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd1338,0xc,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb45f08; end: 10bb45f1f; -[SCABloopsGeneratedResult setBloopsLensId:] */

void FUN_10bb45f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111017218,0xd,param_3,0);
  return;
}


