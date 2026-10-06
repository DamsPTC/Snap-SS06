/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9db90c; end: 10b9db923; -[SCAAdsTrackBindingParity setAdProductType:] */

void FUN_10b9db90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dfb298,3,param_3,0);
  return;
}



/* Entry: 10b9db924; end: 10b9db93b; -[SCAAdsTrackBindingParity setAdType:] */

void FUN_10b9db924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ddfd98,4,param_3,0);
  return;
}



/* Entry: 10b9db93c; end: 10b9db98f; -[SCAAdsTrackBindingParity setTotalMismatchCount:] */

void FUN_10b9db93c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad438,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9db990; end: 10b9db9a7; -[SCAAdsTrackBindingParity setTriggerType:] */

void FUN_10b9db990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de7778,7,param_3,0);
  return;
}



/* Entry: 10b9db9a8; end: 10b9db9ef; -[SCAAdsTrackBindingParity setBindingDiffs:] */

void FUN_10b9db9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad458,8,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9db9f0; end: 10b9dbb97; -[SCAAdsTrackBindingParity prepareDictionary:] */

void FUN_10b9db9f0(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_138 = PTR_PTR_11270c2a8;
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



/* Entry: 10b9dbb98; end: 10b9dbb9b; -[SCAAdsTrackBindingParity getFieldNumberToFieldDict] */

void FUN_10b9dbb98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dbb9c; end: 10b9dbba7; -[SCAAdsTrackBindingParity toProtoWithAllowedFields:] */

void FUN_10b9dbb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9dbba8; end: 10b9dbbaf; -[SCAAdsTrackBindingParity getPayloadIdentifier] */

undefined8 FUN_10b9dbba8(void)

{
  return 0x185d;
}



/* Entry: 10b9dbbb0; end: 10b9dbbc7; -[SCAAdsTrackBindingParityEntry setBindingId:] */

void FUN_10b9dbbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad478,2,param_3,0);
  return;
}



/* Entry: 10b9dbbc8; end: 10b9dbc47; -[SCAAdsTrackBindingParityEntry setMatchStatus:] */

void FUN_10b9dbbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9c8c74(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fad498,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dbc48; end: 10b9dbc4b; -[SCAAdsTrackBindingParityEntry getFieldNumberToFieldDict] */

void FUN_10b9dbc48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dbc4c; end: 10b9dbc57; -[SCAAdsTrackBindingParityEntry toProtoWithAllowedFields:] */

void FUN_10b9dbc4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10b9dbc58; end: 10b9dbc5f; -[SCAAdsTrackBindingParityEntry getPayloadIdentifier] */

undefined8 FUN_10b9dbc58(void)

{
  return 0x185e;
}



/* Entry: 10b9dbc60; end: 10b9dbc6b; -[SCAAdsTrackBindingParityError getEventName] */

undefined ** FUN_10b9dbc60(void)

{
  return &PTR____CFConstantStringClassReference_110fad4b8;
}



/* Entry: 10b9dbc6c; end: 10b9dbc73; -[SCAAdsTrackBindingParityError getEventQoS] */

undefined8 FUN_10b9dbc6c(void)

{
  return 1;
}



/* Entry: 10b9dbc74; end: 10b9dbc7f; -[SCAAdsTrackBindingParityError getPerUserSamplingRateV2] */

undefined8 FUN_10b9dbc74(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9dbc80; end: 10b9dbc97; -[SCAAdsTrackBindingParityError setAdIdentifier:] */

void FUN_10b9dbc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad318,2,param_3,0);
  return;
}



/* Entry: 10b9dbc98; end: 10b9dbcaf; -[SCAAdsTrackBindingParityError setAdType:] */

void FUN_10b9dbc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ddfd98,3,param_3,0);
  return;
}



/* Entry: 10b9dbcb0; end: 10b9dbcc7; -[SCAAdsTrackBindingParityError setBindingId:] */

void FUN_10b9dbcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad478,4,param_3,0);
  return;
}



/* Entry: 10b9dbcc8; end: 10b9dbcdf; -[SCAAdsTrackBindingParityError setErrorType:] */

void FUN_10b9dbcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd6078,5,param_3,0);
  return;
}



/* Entry: 10b9dbce0; end: 10b9dbce3; -[SCAAdsTrackBindingParityError getFieldNumberToFieldDict] */

void FUN_10b9dbce0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dbce4; end: 10b9dbcef; -[SCAAdsTrackBindingParityError toProtoWithAllowedFields:] */

void FUN_10b9dbce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9dbcf0; end: 10b9dbcf7; -[SCAAdsTrackBindingParityError getPayloadIdentifier] */

undefined8 FUN_10b9dbcf0(void)

{
  return 0x185f;
}



/* Entry: 10b9dbcf8; end: 10b9dbd03; -[SCAAdsUnlockableBuilderDiff getEventName] */

undefined ** FUN_10b9dbcf8(void)

{
  return &PTR____CFConstantStringClassReference_110fad4d8;
}



/* Entry: 10b9dbd04; end: 10b9dbd0b; -[SCAAdsUnlockableBuilderDiff getEventQoS] */

undefined8 FUN_10b9dbd04(void)

{
  return 1;
}



/* Entry: 10b9dbd0c; end: 10b9dbd17; -[SCAAdsUnlockableBuilderDiff getPerUserSamplingRateV2] */

undefined8 FUN_10b9dbd0c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9dbd18; end: 10b9dbd2f; -[SCAAdsUnlockableBuilderDiff setAdIdentifier:] */

void FUN_10b9dbd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad318,2,param_3,0);
  return;
}



/* Entry: 10b9dbd30; end: 10b9dbd47; -[SCAAdsUnlockableBuilderDiff setBuilderMode:] */

void FUN_10b9dbd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad338,3,param_3,0);
  return;
}



/* Entry: 10b9dbd48; end: 10b9dbd9b; -[SCAAdsUnlockableBuilderDiff setDidReachCap:] */

void FUN_10b9dbd48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad358,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dbd9c; end: 10b9dbdef; -[SCAAdsUnlockableBuilderDiff setDiffCount:] */

void FUN_10b9dbd9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad378,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dbdf0; end: 10b9dbe37; -[SCAAdsUnlockableBuilderDiff setDiffs:] */

void FUN_10b9dbdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad398,6,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9dbe38; end: 10b9dbe8b; -[SCAAdsUnlockableBuilderDiff setLatencyMs:] */

void FUN_10b9dbe38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dbe8c; end: 10b9dc033; -[SCAAdsUnlockableBuilderDiff prepareDictionary:] */

void FUN_10b9dbe8c(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_138 = PTR_PTR_11270c2b0;
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



/* Entry: 10b9dc034; end: 10b9dc037; -[SCAAdsUnlockableBuilderDiff getFieldNumberToFieldDict] */

void FUN_10b9dc034(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dc038; end: 10b9dc043; -[SCAAdsUnlockableBuilderDiff toProtoWithAllowedFields:] */

void FUN_10b9dc038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9dc044; end: 10b9dc04b; -[SCAAdsUnlockableBuilderDiff getPayloadIdentifier] */

undefined8 FUN_10b9dc044(void)

{
  return 0x180c;
}



/* Entry: 10b9dc04c; end: 10b9dc063; -[SCAAdsUnlockableBuilderDiffEntry setLegacyValue:] */

void FUN_10b9dc04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad3b8,2,param_3,0);
  return;
}



/* Entry: 10b9dc064; end: 10b9dc07b; -[SCAAdsUnlockableBuilderDiffEntry setPath:] */

void FUN_10b9dc064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbfab8,3,param_3,0);
  return;
}



/* Entry: 10b9dc07c; end: 10b9dc093; -[SCAAdsUnlockableBuilderDiffEntry setSwiftValue:] */

void FUN_10b9dc07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad3d8,4,param_3,0);
  return;
}



/* Entry: 10b9dc094; end: 10b9dc097; -[SCAAdsUnlockableBuilderDiffEntry getFieldNumberToFieldDict] */

void FUN_10b9dc094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dc098; end: 10b9dc0a3; -[SCAAdsUnlockableBuilderDiffEntry toProtoWithAllowedFields:] */

void FUN_10b9dc098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10b9dc0a4; end: 10b9dc0ab; -[SCAAdsUnlockableBuilderDiffEntry getPayloadIdentifier] */

undefined8 FUN_10b9dc0a4(void)

{
  return 0x180d;
}



/* Entry: 10b9dc0ac; end: 10b9dc0b7; -[SCAAdsUnlockableBuilderDiffError getEventName] */

undefined ** FUN_10b9dc0ac(void)

{
  return &PTR____CFConstantStringClassReference_110fad4f8;
}



/* Entry: 10b9dc0b8; end: 10b9dc0bf; -[SCAAdsUnlockableBuilderDiffError getEventQoS] */

undefined8 FUN_10b9dc0b8(void)

{
  return 1;
}



/* Entry: 10b9dc0c0; end: 10b9dc0cb; -[SCAAdsUnlockableBuilderDiffError getPerUserSamplingRateV2] */

undefined8 FUN_10b9dc0c0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9dc0cc; end: 10b9dc0e3; -[SCAAdsUnlockableBuilderDiffError setAdIdentifier:] */

void FUN_10b9dc0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad318,2,param_3,0);
  return;
}



/* Entry: 10b9dc0e4; end: 10b9dc0fb; -[SCAAdsUnlockableBuilderDiffError setBuilderMode:] */

void FUN_10b9dc0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad338,3,param_3,0);
  return;
}



/* Entry: 10b9dc0fc; end: 10b9dc113; -[SCAAdsUnlockableBuilderDiffError setErrorType:] */

void FUN_10b9dc0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd6078,4,param_3,0);
  return;
}



/* Entry: 10b9dc114; end: 10b9dc117; -[SCAAdsUnlockableBuilderDiffError getFieldNumberToFieldDict] */

void FUN_10b9dc114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dc118; end: 10b9dc123; -[SCAAdsUnlockableBuilderDiffError toProtoWithAllowedFields:] */

void FUN_10b9dc118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9dc124; end: 10b9dc12b; -[SCAAdsUnlockableBuilderDiffError getPayloadIdentifier] */

undefined8 FUN_10b9dc124(void)

{
  return 0x180e;
}



/* Entry: 10b9dc12c; end: 10b9dc137; -[SCAApplePromptView getEventName] */

undefined ** FUN_10b9dc12c(void)

{
  return &PTR____CFConstantStringClassReference_110f263f8;
}



/* Entry: 10b9dc138; end: 10b9dc13f; -[SCAApplePromptView getEventQoS] */

undefined8 FUN_10b9dc138(void)

{
  return 1;
}



/* Entry: 10b9dc140; end: 10b9dc1bf; -[SCAApplePromptView setOptInStatus:] */

void FUN_10b9dc140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9c8c94(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f24c98,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc1c0; end: 10b9dc23f; -[SCAApplePromptView setAdProductSourceType:] */

void FUN_10b9dc1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7a70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f0d3d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc240; end: 10b9dc2bf; -[SCAApplePromptView setApplePromptUxType:] */

void FUN_10b9dc240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9c8cb4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fad518,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc2c0; end: 10b9dc313; -[SCAApplePromptView setTimeViewedInSec:] */

void FUN_10b9dc2c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad538,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc314; end: 10b9dc32b; -[SCAApplePromptView setAdvertisingId:] */

void FUN_10b9dc314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad558,6,param_3,0);
  return;
}



/* Entry: 10b9dc32c; end: 10b9dc343; -[SCAApplePromptView setAppsScopeId:] */

void FUN_10b9dc32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad578,7,param_3,0);
  return;
}



/* Entry: 10b9dc344; end: 10b9dc347; -[SCAApplePromptView getFieldNumberToFieldDict] */

void FUN_10b9dc344(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dc348; end: 10b9dc353; -[SCAApplePromptView toProtoWithAllowedFields:] */

void FUN_10b9dc348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9dc354; end: 10b9dc35b; -[SCAApplePromptView getPayloadIdentifier] */

undefined8 FUN_10b9dc354(void)

{
  return 0xae1;
}



/* Entry: 10b9dc35c; end: 10b9dc367; -[SCAArExperienceEvent getEventName] */

undefined ** FUN_10b9dc35c(void)

{
  return &PTR____CFConstantStringClassReference_110fad598;
}



/* Entry: 10b9dc368; end: 10b9dc36f; -[SCAArExperienceEvent getEventQoS] */

undefined8 FUN_10b9dc368(void)

{
  return 1;
}



/* Entry: 10b9dc370; end: 10b9dc387; -[SCAArExperienceEvent setAdId:] */

void FUN_10b9dc370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dfbb78,2,param_3,0);
  return;
}



/* Entry: 10b9dc388; end: 10b9dc3db; -[SCAArExperienceEvent setIsShopping:] */

void FUN_10b9dc388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad5b8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc3dc; end: 10b9dc3f3; -[SCAArExperienceEvent setServeItemId:] */

void FUN_10b9dc3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ddff18,4,param_3,0);
  return;
}



/* Entry: 10b9dc3f4; end: 10b9dc447; -[SCAArExperienceEvent setTryOnButtonClicked:] */

void FUN_10b9dc3f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad5d8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc448; end: 10b9dc45f; -[SCAArExperienceEvent setUnlockableId:] */

void FUN_10b9dc448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad5f8,6,param_3,0);
  return;
}



/* Entry: 10b9dc460; end: 10b9dc477; -[SCAArExperienceEvent setTrackingId:] */

void FUN_10b9dc460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f60158,7,param_3,0);
  return;
}



/* Entry: 10b9dc478; end: 10b9dc4cb; -[SCAArExperienceEvent setTryOnButtonClickTime:] */

void FUN_10b9dc478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad618,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc4cc; end: 10b9dc51f; -[SCAArExperienceEvent setCtaAnimationDurationMs:] */

void FUN_10b9dc4cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad638,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc520; end: 10b9dc573; -[SCAArExperienceEvent setCtaIsLightBackground:] */

void FUN_10b9dc520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad658,10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc574; end: 10b9dc5c7; -[SCAArExperienceEvent setCtaShowDelayMs:] */

void FUN_10b9dc574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad678,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc5c8; end: 10b9dc5df; -[SCAArExperienceEvent setCtaType:] */

void FUN_10b9dc5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f24db8,0xc,param_3,0);
  return;
}



/* Entry: 10b9dc5e0; end: 10b9dc633; -[SCAArExperienceEvent setCtaXPositionPercent:] */

void FUN_10b9dc5e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad698,0xd,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc634; end: 10b9dc687; -[SCAArExperienceEvent setCtaYPositionPercent:] */

void FUN_10b9dc634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad6b8,0xe,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc688; end: 10b9dc68b; -[SCAArExperienceEvent getFieldNumberToFieldDict] */

void FUN_10b9dc688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dc68c; end: 10b9dc697; -[SCAArExperienceEvent toProtoWithAllowedFields:] */

void FUN_10b9dc68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10b9dc698; end: 10b9dc69f; -[SCAArExperienceEvent getPayloadIdentifier] */

undefined8 FUN_10b9dc698(void)

{
  return 0x13aa;
}



/* Entry: 10b9dc6a0; end: 10b9dc6ab; -[SCABackToBackAdEvent getEventName] */

undefined ** FUN_10b9dc6a0(void)

{
  return &PTR____CFConstantStringClassReference_110fad6d8;
}



/* Entry: 10b9dc6ac; end: 10b9dc6b3; -[SCABackToBackAdEvent getEventQoS] */

undefined8 FUN_10b9dc6ac(void)

{
  return 1;
}



/* Entry: 10b9dc6b4; end: 10b9dc6cb; -[SCABackToBackAdEvent setFromAdId:] */

void FUN_10b9dc6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad6f8,2,param_3,0);
  return;
}



/* Entry: 10b9dc6cc; end: 10b9dc74b; -[SCABackToBackAdEvent setFromAdProductSourceType:] */

void FUN_10b9dc6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7a70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fad718,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc74c; end: 10b9dc7cb; -[SCABackToBackAdEvent setFromAdType:] */

void FUN_10b9dc74c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9c8b70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fad738,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc7cc; end: 10b9dc7e3; -[SCABackToBackAdEvent setFromServeItemId:] */

void FUN_10b9dc7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad758,5,param_3,0);
  return;
}



/* Entry: 10b9dc7e4; end: 10b9dc7fb; -[SCABackToBackAdEvent setToAdId:] */

void FUN_10b9dc7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad778,6,param_3,0);
  return;
}



/* Entry: 10b9dc7fc; end: 10b9dc87b; -[SCABackToBackAdEvent setToAdProductSourceType:] */

void FUN_10b9dc7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7a70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fad798,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc87c; end: 10b9dc8fb; -[SCABackToBackAdEvent setToAdType:] */

void FUN_10b9dc87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9c8b70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fad7b8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc8fc; end: 10b9dc913; -[SCABackToBackAdEvent setToServeItemId:] */

void FUN_10b9dc8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad7d8,9,param_3,0);
  return;
}



/* Entry: 10b9dc914; end: 10b9dc993; -[SCABackToBackAdEvent setFromAdExitEvent:] */

void FUN_10b9dc914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31194(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fad7f8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc994; end: 10b9dc9e7; -[SCABackToBackAdEvent setHasSeenToAd:] */

void FUN_10b9dc994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad818,0xb,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9dc9e8; end: 10b9dc9eb; -[SCABackToBackAdEvent getFieldNumberToFieldDict] */

void FUN_10b9dc9e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9dc9ec; end: 10b9dc9f7; -[SCABackToBackAdEvent toProtoWithAllowedFields:] */

void FUN_10b9dc9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10b9dc9f8; end: 10b9dc9ff; -[SCABackToBackAdEvent getPayloadIdentifier] */

undefined8 FUN_10b9dc9f8(void)

{
  return 0x1433;
}



/* Entry: 10b9dca00; end: 10b9dca0b; -[SCACOInfo getEventName] */

undefined ** FUN_10b9dca00(void)

{
  return &PTR____CFConstantStringClassReference_110fad838;
}



/* Entry: 10b9dca0c; end: 10b9dca13; -[SCACOInfo getEventQoS] */

undefined8 FUN_10b9dca0c(void)

{
  return 1;
}



/* Entry: 10b9dca14; end: 10b9dca5b; -[SCACOInfo setCoResultList:] */

void FUN_10b9dca14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fad858,2,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9dca5c; end: 10b9dca73; -[SCACOInfo setSaid:] */

void FUN_10b9dca5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ee8a78,3,param_3,0);
  return;
}


