/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba7e0bc; end: 10ba7e0c7; -[SCAShakeReportSend getEventName] */

undefined ** FUN_10ba7e0bc(void)

{
  return &PTR____CFConstantStringClassReference_110fdb9f8;
}



/* Entry: 10ba7e0c8; end: 10ba7e0cf; -[SCAShakeReportSend getEventQoS] */

undefined8 FUN_10ba7e0c8(void)

{
  return 1;
}



/* Entry: 10ba7e0d0; end: 10ba7e123; -[SCAShakeReportSend setRetryCount:] */

void FUN_10ba7e0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ec2f38,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7e124; end: 10ba7e16b; -[SCAShakeReportSend setShakeMetadata:] */

void FUN_10ba7e124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdb938,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba7e16c; end: 10ba7e22b; -[SCAShakeReportSend prepareDictionary:] */

void FUN_10ba7e16c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270c818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba7e22c; end: 10ba7e22f; -[SCAShakeReportSend getFieldNumberToFieldDict] */

void FUN_10ba7e22c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7e230; end: 10ba7e23b; -[SCAShakeReportSend toProtoWithAllowedFields:] */

void FUN_10ba7e230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba7e23c; end: 10ba7e243; -[SCAShakeReportSend getPayloadIdentifier] */

undefined8 FUN_10ba7e23c(void)

{
  return 0x7ce;
}



/* Entry: 10ba7e244; end: 10ba7e24f; -[SCAShakeReportStart getEventName] */

undefined ** FUN_10ba7e244(void)

{
  return &PTR____CFConstantStringClassReference_110fdba18;
}



/* Entry: 10ba7e250; end: 10ba7e257; -[SCAShakeReportStart getEventQoS] */

undefined8 FUN_10ba7e250(void)

{
  return 1;
}



/* Entry: 10ba7e258; end: 10ba7e29f; -[SCAShakeReportStart setShakeMetadata:] */

void FUN_10ba7e258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdb938,2,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba7e2a0; end: 10ba7e35f; -[SCAShakeReportStart prepareDictionary:] */

void FUN_10ba7e2a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270c820;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba7e360; end: 10ba7e363; -[SCAShakeReportStart getFieldNumberToFieldDict] */

void FUN_10ba7e360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7e364; end: 10ba7e36f; -[SCAShakeReportStart toProtoWithAllowedFields:] */

void FUN_10ba7e364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba7e370; end: 10ba7e377; -[SCAShakeReportStart getPayloadIdentifier] */

undefined8 FUN_10ba7e370(void)

{
  return 1999;
}



/* Entry: 10ba7e378; end: 10ba7e383; -[SCAShakeReportUpload getEventName] */

undefined ** FUN_10ba7e378(void)

{
  return &PTR____CFConstantStringClassReference_110fdba38;
}



/* Entry: 10ba7e384; end: 10ba7e38b; -[SCAShakeReportUpload getEventQoS] */

undefined8 FUN_10ba7e384(void)

{
  return 1;
}



/* Entry: 10ba7e38c; end: 10ba7e3a3; -[SCAShakeReportUpload setIndividualFileSizes:] */

void FUN_10ba7e38c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdba58,2,param_3,0);
  return;
}



/* Entry: 10ba7e3a4; end: 10ba7e3f7; -[SCAShakeReportUpload setRetryCount:] */

void FUN_10ba7e3a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ec2f38,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7e3f8; end: 10ba7e43f; -[SCAShakeReportUpload setShakeMetadata:] */

void FUN_10ba7e3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdb938,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba7e440; end: 10ba7e493; -[SCAShakeReportUpload setTotalFileSizeKb:] */

void FUN_10ba7e440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdba78,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7e494; end: 10ba7e553; -[SCAShakeReportUpload prepareDictionary:] */

void FUN_10ba7e494(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270c828;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10ba7e554; end: 10ba7e557; -[SCAShakeReportUpload getFieldNumberToFieldDict] */

void FUN_10ba7e554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7e558; end: 10ba7e563; -[SCAShakeReportUpload toProtoWithAllowedFields:] */

void FUN_10ba7e558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba7e564; end: 10ba7e56b; -[SCAShakeReportUpload getPayloadIdentifier] */

undefined8 FUN_10ba7e564(void)

{
  return 2000;
}



/* Entry: 10ba7e56c; end: 10ba7e577; -[SCAShakeToReportDataPurge getEventName] */

undefined ** FUN_10ba7e56c(void)

{
  return &PTR____CFConstantStringClassReference_110fdba98;
}



/* Entry: 10ba7e578; end: 10ba7e57f; -[SCAShakeToReportDataPurge getEventQoS] */

undefined8 FUN_10ba7e578(void)

{
  return 1;
}



/* Entry: 10ba7e580; end: 10ba7e5ff; -[SCAShakeToReportDataPurge setSource:] */

void FUN_10ba7e580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7bb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7e600; end: 10ba7e603; -[SCAShakeToReportDataPurge getFieldNumberToFieldDict] */

void FUN_10ba7e600(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7e604; end: 10ba7e60f; -[SCAShakeToReportDataPurge toProtoWithAllowedFields:] */

void FUN_10ba7e604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba7e610; end: 10ba7e617; -[SCAShakeToReportDataPurge getPayloadIdentifier] */

undefined8 FUN_10ba7e610(void)

{
  return 0x7d4;
}



/* Entry: 10ba7e618; end: 10ba7e623; -[SCAShakeToReportSettingEnable getEventName] */

undefined ** FUN_10ba7e618(void)

{
  return &PTR____CFConstantStringClassReference_110fdbab8;
}



/* Entry: 10ba7e624; end: 10ba7e62b; -[SCAShakeToReportSettingEnable getEventQoS] */

undefined8 FUN_10ba7e624(void)

{
  return 1;
}



/* Entry: 10ba7e62c; end: 10ba7e67f; -[SCAShakeToReportSettingEnable setEnable:] */

void FUN_10ba7e62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f19f38,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7e680; end: 10ba7e6d3; -[SCAShakeToReportSettingEnable setInSettingReportEnabled:] */

void FUN_10ba7e680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdbad8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7e6d4; end: 10ba7e6d7; -[SCAShakeToReportSettingEnable getFieldNumberToFieldDict] */

void FUN_10ba7e6d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7e6d8; end: 10ba7e6e3; -[SCAShakeToReportSettingEnable toProtoWithAllowedFields:] */

void FUN_10ba7e6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba7e6e4; end: 10ba7e85f; -[SCAShakeToReportSettingEnable getPayloadIdentifier] */

undefined8 FUN_10ba7e6e4(void)

{
  return 0x7d5;
}



/* Entry: 10ba7e860; end: 10ba7e94f;  */

undefined8 FUN_10ba7e860(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fdbcd8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbcd8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fdbcf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbcf8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fdbd18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbd18,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f16ef8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16ef8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fdbd38;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbd38,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fdbd58;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbd58,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fdbd78;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbd78,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba7e950; end: 10ba7e973;  */

undefined ** FUN_10ba7e950(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110fdbd58;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e3ddf8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba7e974; end: 10ba7e9d7;  */

undefined8 FUN_10ba7e974(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3ddf8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fdbd58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbd58,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba7e9d8; end: 10ba7ea17;  */

undefined * FUN_10ba7e9d8(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d85c18)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba7ea18; end: 10ba7ece3;  */

undefined8 FUN_10ba7ea18(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fdbdf8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbdf8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fdbe18;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbe18,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fdbe38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbe38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fdbe58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbe58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fdbe78;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbe78,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e2a058;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2a058,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fdbe98;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbe98,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fdbeb8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbeb8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fdbed8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbed8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fdbef8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbef8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fdbf18;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbf18,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fdbf38;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbf38,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fdbf58;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbf58,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fdbf78;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbf78,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110fdbf98;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbf98,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110fdbfb8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdbfb8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110fdbfd8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdbfd8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110fdbff8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdbff8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110fdc018;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdc018,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110fdc038;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdc038,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110fdc058
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdc058,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fdc078;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdc078,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fdc098;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdc098,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fdc0b8;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdc0b8,
                                                  param_2,param_1);
                                                uVar2 = 0x17;
                                                if (ppuVar1 != (undefined **)0x0) {
                                                  uVar2 = 0xffffffffffffffff;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba7ece4; end: 10ba7f01b;  */

undefined * FUN_10ba7ece4(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d85cf0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba7f01c; end: 10ba7f09b;  */

undefined8 FUN_10ba7f01c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fdcc98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdcc98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fdccb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdccb8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fdccd8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdccd8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba7f09c; end: 10ba7f163;  */

undefined ** FUN_10ba7f09c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb5278;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba7f164; end: 10ba7f16f; -[SCAARKitSessionActivated getEventName] */

undefined ** FUN_10ba7f164(void)

{
  return &PTR____CFConstantStringClassReference_110fdce18;
}



/* Entry: 10ba7f170; end: 10ba7f177; -[SCAARKitSessionActivated getEventQoS] */

undefined8 FUN_10ba7f170(void)

{
  return 1;
}



/* Entry: 10ba7f178; end: 10ba7f183; -[SCAARKitSessionActivated getPerUserSamplingRateV2] */

undefined8 FUN_10ba7f178(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba7f184; end: 10ba7f1a7; -[SCAARKitSessionActivated getFieldNumberToFieldDict] */

void FUN_10ba7f184(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7f1a8; end: 10ba7f1df; -[SCAARKitSessionActivated addToProtoDictionary] */

void FUN_10ba7f1a8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba7f1e0; end: 10ba7f237; -[SCAARKitSessionActivated toProtoWithAllowedFields:] */

void FUN_10ba7f1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba7f238; end: 10ba7f23f; -[SCAARKitSessionActivated getPayloadIdentifier] */

undefined8 FUN_10ba7f238(void)

{
  return 0xe96;
}



/* Entry: 10ba7f240; end: 10ba7f24b; -[SCAARKitSessionReceivedFirstFrame getEventName] */

undefined ** FUN_10ba7f240(void)

{
  return &PTR____CFConstantStringClassReference_110fdce38;
}



/* Entry: 10ba7f24c; end: 10ba7f253; -[SCAARKitSessionReceivedFirstFrame getEventQoS] */

undefined8 FUN_10ba7f24c(void)

{
  return 1;
}



/* Entry: 10ba7f254; end: 10ba7f25f; -[SCAARKitSessionReceivedFirstFrame getPerUserSamplingRateV2] */

undefined8 FUN_10ba7f254(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba7f260; end: 10ba7f283; -[SCAARKitSessionReceivedFirstFrame getFieldNumberToFieldDict] */

void FUN_10ba7f260(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7f284; end: 10ba7f2bb; -[SCAARKitSessionReceivedFirstFrame addToProtoDictionary] */

void FUN_10ba7f284(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba7f2bc; end: 10ba7f313; -[SCAARKitSessionReceivedFirstFrame toProtoWithAllowedFields:] */

void FUN_10ba7f2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba7f314; end: 10ba7f31b; -[SCAARKitSessionReceivedFirstFrame getPayloadIdentifier] */

undefined8 FUN_10ba7f314(void)

{
  return 0xe97;
}



/* Entry: 10ba7f31c; end: 10ba7f397; -[SCACameraFlipBase setAction:] */

void FUN_10ba7f31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7e6ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f398; end: 10ba7f3e7; -[SCACameraFlipBase setCamera:] */

void FUN_10ba7f398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110dad4b8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f3e8; end: 10ba7f437; -[SCACameraFlipBase setIsRecording:] */

void FUN_10ba7f3e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fdce58,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f438; end: 10ba7f487; -[SCACameraFlipBase setViewTimeSec:] */

void FUN_10ba7f438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f488; end: 10ba7f493; -[SCAConnectedLensActionInviteSent getEventName] */

undefined ** FUN_10ba7f488(void)

{
  return &PTR____CFConstantStringClassReference_110fdce78;
}



/* Entry: 10ba7f494; end: 10ba7f49b; -[SCAConnectedLensActionInviteSent getEventQoS] */

undefined8 FUN_10ba7f494(void)

{
  return 2;
}



/* Entry: 10ba7f49c; end: 10ba7f4b3; -[SCAConnectedLensActionInviteSent setChatDockId:] */

void FUN_10ba7f49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdce98,2,param_3,0);
  return;
}



/* Entry: 10ba7f4b4; end: 10ba7f507; -[SCAConnectedLensActionInviteSent setFriendsCount:] */

void FUN_10ba7f4b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdceb8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f508; end: 10ba7f55b; -[SCAConnectedLensActionInviteSent setInviteCount:] */

void FUN_10ba7f508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdced8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f55c; end: 10ba7f57f; -[SCAConnectedLensActionInviteSent getFieldNumberToFieldDict] */

void FUN_10ba7f55c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7f580; end: 10ba7f5b7; -[SCAConnectedLensActionInviteSent addToProtoDictionary] */

void FUN_10ba7f580(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba7f5b8; end: 10ba7f60f; -[SCAConnectedLensActionInviteSent toProtoWithAllowedFields:] */

void FUN_10ba7f5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba7f610; end: 10ba7f617; -[SCAConnectedLensActionInviteSent getPayloadIdentifier] */

undefined8 FUN_10ba7f610(void)

{
  return 0xb55;
}



/* Entry: 10ba7f618; end: 10ba7f623; -[SCAConnectedLensActionSnapcodeGenerated getEventName] */

undefined ** FUN_10ba7f618(void)

{
  return &PTR____CFConstantStringClassReference_110fdcf38;
}



/* Entry: 10ba7f624; end: 10ba7f62b; -[SCAConnectedLensActionSnapcodeGenerated getEventQoS] */

undefined8 FUN_10ba7f624(void)

{
  return 2;
}



/* Entry: 10ba7f62c; end: 10ba7f64f; -[SCAConnectedLensActionSnapcodeGenerated getFieldNumberToFieldDict] */

void FUN_10ba7f62c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7f650; end: 10ba7f687; -[SCAConnectedLensActionSnapcodeGenerated addToProtoDictionary] */

void FUN_10ba7f650(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba7f688; end: 10ba7f6df; -[SCAConnectedLensActionSnapcodeGenerated toProtoWithAllowedFields:] */

void FUN_10ba7f688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba7f6e0; end: 10ba7f6e7; -[SCAConnectedLensActionSnapcodeGenerated getPayloadIdentifier] */

undefined8 FUN_10ba7f6e0(void)

{
  return 0xb56;
}



/* Entry: 10ba7f6e8; end: 10ba7f6f3; -[SCAConnectedLensActionSnapcodeScanned getEventName] */

undefined ** FUN_10ba7f6e8(void)

{
  return &PTR____CFConstantStringClassReference_110fdcf58;
}



/* Entry: 10ba7f6f4; end: 10ba7f6fb; -[SCAConnectedLensActionSnapcodeScanned getEventQoS] */

undefined8 FUN_10ba7f6f4(void)

{
  return 2;
}



/* Entry: 10ba7f6fc; end: 10ba7f77b; -[SCAConnectedLensActionSnapcodeScanned setScanAction:] */

void FUN_10ba7f6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7e7b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdcf78,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f77c; end: 10ba7f7fb; -[SCAConnectedLensActionSnapcodeScanned setSessionJoinResult:] */

void FUN_10ba7f77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7e7dc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdcf98,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f7fc; end: 10ba7f81f; -[SCAConnectedLensActionSnapcodeScanned getFieldNumberToFieldDict] */

void FUN_10ba7f7fc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7f820; end: 10ba7f857; -[SCAConnectedLensActionSnapcodeScanned addToProtoDictionary] */

void FUN_10ba7f820(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba7f858; end: 10ba7f8af; -[SCAConnectedLensActionSnapcodeScanned toProtoWithAllowedFields:] */

void FUN_10ba7f858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba7f8b0; end: 10ba7f8b7; -[SCAConnectedLensActionSnapcodeScanned getPayloadIdentifier] */

undefined8 FUN_10ba7f8b0(void)

{
  return 0xb57;
}



/* Entry: 10ba7f8b8; end: 10ba7f8c3; -[SCAConnectedLensActive getEventName] */

undefined ** FUN_10ba7f8b8(void)

{
  return &PTR____CFConstantStringClassReference_110fdcfb8;
}



/* Entry: 10ba7f8c4; end: 10ba7f8cb; -[SCAConnectedLensActive getEventQoS] */

undefined8 FUN_10ba7f8c4(void)

{
  return 1;
}



/* Entry: 10ba7f8cc; end: 10ba7f8d7; -[SCAConnectedLensActive getPerUserSamplingRateV2] */

undefined8 FUN_10ba7f8cc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba7f8d8; end: 10ba7f92b; -[SCAConnectedLensActive setParticipantSize:] */

void FUN_10ba7f8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdcfd8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f92c; end: 10ba7f9ab; -[SCAConnectedLensActive setSessionContext:] */

void FUN_10ba7f92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7e778(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdcff8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7f9ac; end: 10ba7fa2b; -[SCAConnectedLensActive setSessionType:] */

void FUN_10ba7f9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7e798(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdd018,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba7fa2c; end: 10ba7fa4f; -[SCAConnectedLensActive getFieldNumberToFieldDict] */

void FUN_10ba7fa2c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba7fa50; end: 10ba7fa87; -[SCAConnectedLensActive addToProtoDictionary] */

void FUN_10ba7fa50(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba7fa88; end: 10ba7fadf; -[SCAConnectedLensActive toProtoWithAllowedFields:] */

void FUN_10ba7fa88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba7fae0; end: 10ba7fae7; -[SCAConnectedLensActive getPayloadIdentifier] */

undefined8 FUN_10ba7fae0(void)

{
  return 0xb58;
}



/* Entry: 10ba7fae8; end: 10ba7faf3; -[SCAConnectedLensAlert getEventName] */

undefined ** FUN_10ba7fae8(void)

{
  return &PTR____CFConstantStringClassReference_110fdd038;
}



/* Entry: 10ba7faf4; end: 10ba7fafb; -[SCAConnectedLensAlert getEventQoS] */

undefined8 FUN_10ba7faf4(void)

{
  return 1;
}



/* Entry: 10ba7fafc; end: 10ba7fb07; -[SCAConnectedLensAlert getPerUserSamplingRateV2] */

undefined8 FUN_10ba7fafc(void)

{
  return 0x3fb999999999999a;
}


