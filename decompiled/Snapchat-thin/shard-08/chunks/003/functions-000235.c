/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106013180; end: 106013197; -[SCScanCardsURLInterceptor interceptorDataSource] */

void FUN_106013180(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106013198; end: 1060131a3; -[SCScanCardsURLInterceptor setInterceptorDataSource:] */

void FUN_106013198(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1060131a4; end: 1060131eb; -[SCScanCardsURLInterceptor .cxx_destruct] */

void FUN_1060131a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060131ec; end: 1060133b3; +[SCScanURLParser urlFromQRCodeData:] */

void FUN_1060131ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((((ulong)puVar5 & 1) != 0) || (uVar2 = param_3, func_0x00010c08fa60(), uVar2 < 8)) {
    puVar5 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
    goto LAB_106013388;
  }
  uVar2 = param_3;
  func_0x00010bfda7e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e38858);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = param_3,
     func_0x00010bfda7e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e38878),
     (int)uVar2 == 0)) {
LAB_1060132c0:
    puVar5 = PTR_PTR_1126c6ea0;
    uStack_48 = param_3;
    func_0x00010c0bc760(PTR_PTR_1126c6ea0,param_2,&uStack_48);
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    _objc_release(param_3);
    uVar2 = uVar1;
    if (((ulong)puVar5 & 1) == 0) {
      uStack_50 = uVar1;
      func_0x00010c0bc780(PTR_PTR_1126c6ea0,param_2,&uStack_50);
      uVar2 = uStack_50;
      _objc_retain(uStack_50);
      _objc_release(uVar1);
    }
    puVar5 = PTR_PTR_1126c6ea0;
    func_0x00010c0bc720(PTR_PTR_1126c6ea0,param_2,uVar2);
    param_3 = uVar2;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR_PTR_1126c6ea0;
      uStack_58 = uVar2;
      func_0x00010c0bc740(PTR_PTR_1126c6ea0,param_2,&uStack_58);
      param_3 = uStack_58;
      _objc_retain(uStack_58);
      _objc_release(uVar2);
      if ((int)puVar5 == 0) {
        puVar5 = (undefined *)0x0;
        goto LAB_10601337c;
      }
    }
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x00010c04e820();
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    func_0x00010c04e820();
    puVar4 = PTR_PTR_1126c6ea0;
    if (puVar5 == (undefined *)0x0) goto LAB_1060132c0;
    puVar3 = puVar5;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296900(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    if ((int)puVar4 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_106013388;
    }
  }
LAB_10601337c:
  _objc_retain(puVar5);
  puVar4 = puVar5;
LAB_106013388:
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060133b4; end: 1060134d7; +[SCScanURLParser matchAgainstDomainWithProtocol:] */

undefined8 FUN_1060133b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c034740(puVar2,param_2,puVar3,1,&lStack_38);
  lVar1 = lStack_38;
  _objc_release(puVar3);
  uVar5 = param_3;
  func_0x00010c08fa60(param_3);
  if (puVar2 != (undefined *)0x0 && lVar1 == 0) {
    puVar3 = puVar2;
    func_0x00010c0defc0(puVar2,param_2,param_3,0,0,uVar5);
    puVar4 = puVar2;
    func_0x00010c11f400(puVar2,param_2,param_3,0,0,uVar5);
    if (puVar3 == (undefined *)0x1 && puVar4 == (undefined *)0x0) {
      uVar5 = 1;
      goto LAB_1060134b0;
    }
  }
  uVar5 = 0;
LAB_1060134b0:
  _objc_release(puVar2);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1060134d8; end: 10601355b; +[SCScanURLParser validateHostName:] */

undefined * FUN_1060134d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(param_3);
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3198);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf99aa0();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10601355c; end: 1060136a3; +[SCScanURLParser matchAgainstDomainWithoutProtocol:] */

undefined8 FUN_10601355c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc5ed8);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = 0;
  func_0x00010c034740(puVar2,param_2,puVar3,1,&uStack_48);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  _objc_release(puVar3);
  uVar4 = *param_3;
  func_0x00010c08fa60(uVar4);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010c0defc0(puVar2,param_2,*param_3,0,0,uVar4);
    puVar5 = puVar2;
    func_0x00010c11f400(puVar2,param_2,*param_3,0,0,uVar4);
    if (puVar3 == (undefined *)0x1 && puVar5 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c013ce0();
      _objc_autorelease();
      *param_3 = puVar3;
      uVar4 = 1;
      goto LAB_106013678;
    }
  }
  uVar4 = 0;
LAB_106013678:
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1060136a4; end: 1060136ff; +[SCScanURLParser matchAgainstURLPrefix:] */

bool FUN_1060136a4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_3;
  func_0x00010c11f440(lVar1,param_2,&PTR____CFConstantStringClassReference_110e38898,1);
  if (lVar1 == 0) {
    lVar2 = *param_3;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = lVar2;
  }
  return lVar1 == 0;
}



/* Entry: 106013700; end: 10601379f; +[SCScanURLParser matchAgainstURLTOPrefix:] */

bool FUN_106013700(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_3;
  func_0x00010c11f440(lVar1,param_2,&PTR____CFConstantStringClassReference_110e388b8,1);
  if (lVar1 == 0) {
    func_0x00010c08fa60(*param_3);
    lVar2 = *param_3;
    func_0x00010c11f460();
    if (lVar2 != 0x7fffffffffffffff) {
      lVar2 = *param_3;
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_3 = lVar2;
    }
  }
  return lVar1 == 0;
}



/* Entry: 1060137a0; end: 106013813; -[SCSnapcodeActionHandlerServices initWithActionHandler:] */

undefined1 * FUN_1060137a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef100;
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



/* Entry: 106013814; end: 10601381b; -[SCSnapcodeActionHandlerServices actionHandler] */

undefined8 FUN_106013814(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10601381c; end: 106013827; -[SCSnapcodeActionHandlerServices .cxx_destruct] */

void FUN_10601381c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106013828; end: 1060138a3;  */

undefined * FUN_106013828(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2c10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e388d8,
                        &UNK_10ddd3988,&UNK_10ddd399c,3,FUN_1060138a4,0);
    do {
      if (puRam00000001136c2c10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2c10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2c10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2c10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2c10;
}



/* Entry: 1060138a4; end: 1060138af;  */

bool FUN_1060138a4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1060138b0; end: 106013917; +[SCSnapcodePayloadAdCreativePreview descriptor] */

void FUN_1060138b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abe040,
                        &PTR____CFConstantStringClassReference_110e388f8,&PTR_DAT_11313a130,
                        &PTR_DAT_11313a148,5,0x20,0x1c);
    puRam00000001136c2c18 = puVar1;
  }
  return;
}



/* Entry: 106013918; end: 10601397f; +[SCSnapcodePayloadMessage descriptor] */

void FUN_106013918(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abe0e0,
                        &PTR____CFConstantStringClassReference_110e32298,&PTR_DAT_11313a1e8,
                        &PTR_s_message_11313a200,1,0x10,0x1c);
    puRam00000001136c2c20 = puVar1;
  }
  return;
}



/* Entry: 106013980; end: 1060139fb; +[SCSnapcodePayloadURL descriptor] */

undefined * FUN_106013980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abe180,
                        &PTR____CFConstantStringClassReference_110e2dc38,&PTR_DAT_11313a220,
                        &PTR_s_URL_11313a238,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2c28 = puVar1;
  }
  return puRam00000001136c2c28;
}



/* Entry: 1060139fc; end: 106013a63; +[SCSnapcodePayloadUserProfile descriptor] */

void FUN_1060139fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abe220,
                        &PTR____CFConstantStringClassReference_110e38918,&PTR_DAT_11313a258,
                        &PTR_s_userId_11313a270,1,0x10,0x1c);
    puRam00000001136c2c30 = puVar1;
  }
  return;
}



/* Entry: 106013a64; end: 106013b63;  */

void FUN_106013a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar2 = param_2;
  func_0x00010c244ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2448c0();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106013b64; end: 106013b7b;  */

void FUN_106013b64(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106013b7c; end: 106013c13;  */

void FUN_106013b7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  puVar4 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    lVar2 = param_1;
    func_0x00010bfe2ee0(param_1);
    lVar3 = param_1;
    func_0x00010c0b5940(param_1);
    _objc_release(param_1);
    func_0x000100c4a928(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ea0(puVar1);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106013c14; end: 106013d07;  */

void FUN_106013c14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_1, func_0x00010c07c800(), (int)lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c7140;
    _objc_alloc(PTR_PTR_1126c7140);
    func_0x00010c25be80(param_1);
    lVar1 = param_1;
    func_0x00010c270aa0(param_1);
    lVar2 = param_1;
    func_0x00010c13c380(param_1);
    func_0x00010c0054c0((double)lVar1 / 1000.0,(double)lVar2 / 1000.0,puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106013d08; end: 106013eeb;  */

void FUN_106013d08(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106013eec;
  uStack_60 = 0x106013efc;
  uStack_58 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar2 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef0c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9caa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = puStack_78[5];
  uVar1 = *(undefined1 *)(puStack_98 + 3);
  uVar4 = param_1;
  func_0x00010bef0c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  FUN_106013c14(uVar3,uVar7,uVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106013eec; end: 106013f03;  */

void FUN_106013eec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106013f04; end: 106013f5b;  */

void FUN_106013f04(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106013f5c; end: 106013f6f;  */

void FUN_106013f5c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106013f70; end: 1060141bb;  */

void FUN_106013f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar2 = param_2;
  func_0x00010bf50600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5f80();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060141bc; end: 1060143c3;  */

void FUN_1060141bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b1440;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c040f20();
  puVar2 = PTR_PTR_1126c7148;
  _objc_alloc();
  uVar3 = param_2;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  puVar7 = puVar4;
  func_0x00010c004b40();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(uVar9);
    func_0x000106014100(puVar1,uVar5,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar9);
    _objc_retain(uVar6);
    puVar2 = puVar1;
    func_0x00010c0b8600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060143c4; end: 10601441f;  */

void FUN_1060143c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7150;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c005800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106014420; end: 106014643;  */

void FUN_106014420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfa7660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106014644; end: 10601468f;  */

void FUN_106014644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0341e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106014690; end: 10601478b;  */

void FUN_106014690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  FUN_106014420(param_1,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10601478c; end: 1060147e7;  */

void FUN_10601478c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7150;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c005800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060147e8; end: 106014913;  */

void FUN_1060147e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_2);
  _objc_opt_new();
  uVar2 = param_2;
  func_0x00010c257940(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106014914; end: 1060149e3;  */

void FUN_106014914(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0bf0a0(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1060149e4; end: 106014a93;  */

void FUN_1060149e4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111174a68;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174a68);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  ppuVar3 = (undefined **)0x0;
  if (lVar2 != 0) {
    ppuVar3 = ppuVar1;
    func_0x00010c1d0640(ppuVar1);
  }
  func_0x000106c776b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(ppuVar1);
  _objc_release(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e389b8;
  func_0x000106c77258(&PTR____CFConstantStringClassReference_110e389b8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar4);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106014a94; end: 106014a9f;  */

void FUN_106014a94(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106014aa0; end: 106014d03;  */

void FUN_106014aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7158;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c183b80();
  func_0x00010c218e40(puVar1);
  _objc_release(param_2);
  lVar2 = param_4;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    puVar4 = puVar1;
    func_0x00010bf9c680(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar4);
  }
  puVar5 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar4 = PTR_PTR_1126c7168;
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_opt_class(puVar4);
  func_0x00010c0199c0(puVar6);
  uVar7 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar7);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(uVar7);
  puVar4 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106014d04; end: 106014f2f;  */

void FUN_106014d04(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    goto LAB_106014e78;
  }
  uVar5 = param_2;
  func_0x00010bf987e0();
  if ((int)uVar5 == -0x4524111) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110db88b8;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110db88b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar5);
    _objc_release(ppuVar1);
LAB_106014df4:
    uVar5 = param_2;
    func_0x00010c0dde40();
    if (((int)uVar5 == 0) &&
       (uVar5 = param_2, func_0x00010c0dde20(), puVar4 = PTR_PTR_1126c7160, (int)uVar5 == 0)) {
      uVar5 = param_2;
      func_0x00010bf074a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_2;
      func_0x00010bf9e140(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_106013b7c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c089a80(param_2);
      func_0x00010c0d9d60(param_2);
      func_0x00010c11bc80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
    else {
      puVar4 = PTR_PTR_1126c7160;
      func_0x00010c0dde40(param_2);
      func_0x00010c0dde20(param_2);
      func_0x00010c089a80(param_2);
      func_0x00010c0d9d60(param_2);
      func_0x00010bfb7560(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if ((int)uVar5 != 1) goto LAB_106014df4;
    puVar4 = *(undefined **)(param_1 + 0x28);
    func_0x000106c74fa8(puVar4,0,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
  }
  _objc_release(puVar4);
LAB_106014e78:
  _objc_release(param_2);
  return;
}



/* Entry: 106014f30; end: 106014f73;  */

void FUN_106014f30(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e389f8;
  func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e389f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106014f74; end: 10601515b;  */

void FUN_106014f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7170;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c183b80();
  func_0x00010c218e40(puVar1);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar5 = PTR_PTR_1126c7178;
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_opt_class(puVar5);
  func_0x00010c0199c0(puVar3);
  uVar4 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10601515c; end: 106015323;  */

/* WARNING: Possible PIC construction at 0x0001060151dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106015220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060151e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000106015224) */

void FUN_10601515c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == (undefined **)0x0) {
    func_0x00010bf987e0();
    if ((int)param_2 == -0x4524111) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      param_3 = &PTR____CFConstantStringClassReference_110db88b8;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110db88b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((int)param_2 != 1) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_106015324;
        puStack_58 = &UNK_110863958;
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar1);
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        uStack_50 = uVar1;
        _objc_retain(uVar2);
        uVar1 = param_2;
        uStack_48 = uVar2;
        func_0x000106c778cc(param_2,&puStack_70);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar1);
        _objc_release(param_2);
        _objc_release(uVar1);
        _objc_release(uStack_48);
        _objc_release(uStack_50);
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      param_3 = &PTR____CFConstantStringClassReference_110e38a38;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38a38);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0,param_3);
  return;
}



/* Entry: 106015324; end: 106015333;  */

/* WARNING: Removing unreachable block (ram,0x000106c750ec) */

void FUN_106015324(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  lVar3 = lVar1;
  func_0x00010c08fa60();
  puVar11 = PTR_PTR_1126ae558;
  if (lVar3 == 0) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110e7d458;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e7d458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar10 = (undefined **)PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b41e0;
    _objc_alloc(PTR_PTR_1126b41e0);
    func_0x00010c004e00();
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar6 = PTR_PTR_1126be918;
    _objc_alloc(PTR_PTR_1126be918);
    func_0x00010c04f4c0();
    uVar7 = uVar2;
    func_0x00010c0d5c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010c2665a0(uVar9);
    puVar11 = puVar5;
    func_0x00010bfbc3e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(ppuVar10);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106015334; end: 106015377;  */

void FUN_106015334(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106015378; end: 106015443; -[SCCRestorePageActionHandlerImpl initWithUIContainer:supportScopeFactoryServices:loggingContext:] */

undefined1 *
FUN_106015378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef108;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106015444; end: 10601549b; -[SCCRestorePageActionHandlerImpl presentSupportPage] */

void FUN_106015444(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10601549c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10601549c; end: 10601556b;  */

void FUN_10601549c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x20) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b3578;
  _objc_alloc(PTR_PTR_1126b3578);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c25c240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aba0(puVar1,param_2,0x9c,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b3580;
  _objc_alloc(PTR_PTR_1126b3580);
  func_0x00010c056e40();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf21f80(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10601556c; end: 10601557b; -[SCCRestorePageActionHandlerImpl streakSupportPageDismissed] */

void FUN_10601556c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10601557c; end: 1060155c3; -[SCCRestorePageActionHandlerImpl .cxx_destruct] */

void FUN_10601557c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060155c4; end: 1060158d7; -[SCCStreakRestoreServiceImpl initWithCurrentUserId:displayNameProvider:conversationId:traceId:storeKitServices:conversationServices:conversationIdServices:nativeMessagingServices:snapchatterServices:groupsDataFetcher:friendsFeedServices:circumstanceEngine:grpcClient:delegate:] */

undefined8 *
FUN_1060155c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126ef110;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_16);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060158d8; end: 106015a4f; -[SCCStreakRestoreServiceImpl fetchConversationMetadataWithCallback:] */

void FUN_1060158d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    _objc_retain(uVar6);
    _objc_retain(uVar3);
    uVar5 = uVar3;
    FUN_106013f70(uVar3,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c297260(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106015a50; end: 106015c07;  */

void FUN_106015a50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c074920();
  if ((int)uVar1 == 0) {
    uVar3 = param_2;
    func_0x00010c122e40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000106014100(uVar4,uVar3,*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar5 = uVar4;
    func_0x00010c0b8600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    FUN_106014420(uVar1,uVar3,uVar5,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar5 = uVar1;
    func_0x00010c0b8600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
    param_2 = uVar2;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106015c08; end: 106015c8f;  */

void FUN_106015c08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c25c080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf9ca60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_106015c90(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106015c90; end: 106015d73;  */

void FUN_106015c90(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c7198;
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c0057a0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c71a0;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  lVar3 = param_2;
  func_0x00010c25be80(param_2);
  lVar4 = param_2;
  func_0x00010c270aa0(param_2);
  lVar5 = param_2;
  func_0x00010c13c380(param_2);
  _objc_release(param_2);
  func_0x00010c04e4c0((double)(int)lVar3,(double)lVar4,(double)lVar5,puVar2);
  func_0x00010c1ed240(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106015d74; end: 106015dfb;  */

void FUN_106015d74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c25c080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf9ca60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_106015c90(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106015dfc; end: 106015e5b;  */

void FUN_106015dfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_3 != 0) {
    func_0x000106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106015e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1);
  return;
}



/* Entry: 106015e5c; end: 106016007; -[SCCStreakRestoreServiceImpl fetchProductWithCallback:] */

void FUN_106015e5c(long param_1,undefined8 param_2,long param_3)

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
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    _objc_copyWeak(auStack_68,param_1 + 0x70);
    uVar1 = uVar2;
    FUN_106014aa0(uVar2,uVar7,uVar3,uVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106016008; end: 1060161a3;  */

void FUN_106016008(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060161a4;
    puStack_88 = &UNK_110907ed8;
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x50);
    _objc_retain(lVar3);
    uStack_78 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    lStack_60 = lVar3;
    _objc_copyWeak(auStack_58,param_1 + 0x58);
    _objc_copyWeak(auStack_a8,param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar2);
    func_0x00010c0bf720(param_2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_58);
    lVar3 = lStack_60;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar3 = param_3;
    func_0x000106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,0,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1060161a4; end: 1060162ef;  */

void FUN_1060161a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  FUN_1060147e8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_68,param_1 + 0x48);
  uStack_60 = param_4;
  uStack_58 = param_5;
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1060162f0; end: 1060165d3;  */

void FUN_1060162f0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126c7180;
    _objc_alloc(PTR_PTR_1126c7180);
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    func_0x00010c005520(param_3);
    _objc_release(lVar3);
    puVar1 = PTR_PTR_1126c7188;
    _objc_alloc(PTR_PTR_1126c7188);
    func_0x00010c03a580(0);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8560(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd4c0(puVar1);
    _objc_release(puVar2);
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),puVar1,0);
    _objc_release(puVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x50);
    func_0x000106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060165d4; end: 106016a0f; -[SCCStreakRestoreServiceImpl fetchConversationBulkProductWithCallback:] */

void FUN_1060165d4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x58);
    func_0x00010bfb9e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfba060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = uVar3;
    func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_110907f88);
    uVar1 = uVar2;
    func_0x00010bf529e0();
    if (uVar1 < 2) {
      (**(code **)(param_3 + 0x10))(param_3,0,0);
    }
    else {
      uVar1 = uVar2;
      func_0x00010050471c(uVar2,&PTR___NSConcreteGlobalBlock_110907fc8,
                          &PTR___NSConcreteGlobalBlock_110908008);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain();
      uVar5 = *(undefined8 *)(param_1 + 8);
      _objc_retain();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain();
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain();
      uVar8 = *(undefined8 *)(param_1 + 0x68);
      _objc_retain();
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain();
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain();
      uVar19 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar19);
      _objc_copyWeak(auStack_a8,param_1 + 0x70);
      uVar11 = uVar1;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126c71a8;
      _objc_retain(uVar8);
      _objc_retain(uVar19);
      _objc_retain(uVar11);
      _objc_opt_new(puVar12);
      uVar13 = uVar11;
      func_0x00010c0d3c80(uVar11);
      _objc_release(uVar11);
      func_0x00010c183bc0(puVar12);
      _objc_release(uVar13);
      func_0x00010c218e40(puVar12);
      _objc_release(uVar19);
      puVar14 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar15 = PTR_PTR_1126ae988;
      _objc_alloc(PTR_PTR_1126ae988);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106017800;
      puStack_88 = &UNK_1109080b8;
      puStack_80 = puVar14;
      _objc_opt_class(PTR_PTR_1126c71b0);
      func_0x00010c0199c0(puVar15);
      uVar16 = uVar8;
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar17 = puVar12;
      func_0x00010bf63640(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126ae748;
      func_0x00010bf24820(PTR_PTR_1126ae748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27f2c0(uVar16);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(uVar16);
      puVar17 = puVar14;
      func_0x00010bfbc3e0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_retain(param_3);
      _objc_retain(uVar1);
      _objc_copyWeak(auStack_b0,auStack_a8);
      func_0x00010c297260(puVar17);
      _objc_release(puVar17);
      _objc_release(uVar11);
      _objc_destroyWeak(auStack_b0);
      _objc_release(uVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_a8);
      _objc_release(uVar19);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106016a10; end: 106016a1f;  */

void FUN_106016a10(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106013eec;
  uStack_60 = 0x106013efc;
  uStack_58 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar2 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9caa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = puStack_78[5];
  uVar1 = *(undefined1 *)(puStack_98 + 3);
  uVar4 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  FUN_106013c14(uVar3,uVar7,uVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106016a20; end: 106016a47;  */

void FUN_106016a20(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106016a48; end: 106016d7b;  */

void FUN_106016a48(long param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined **unaff_x26;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  long lStack_398;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined **ppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_240;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    lVar24 = param_2;
    func_0x00010bf50b60();
    if (lVar24 == 0) {
      ppuVar19 = (undefined **)0x0;
      ppuVar21 = (undefined **)0x0;
      (**(code **)(*(long *)(param_1 + 0x60) + 0x10))();
    }
    else {
      _objc_retain(param_2);
      puVar22 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = param_2;
      func_0x00010bf074a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar22);
      _objc_release(lVar24);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lStack_128 = 0;
      uStack_130 = 0;
      lVar24 = param_2;
      func_0x00010bf50b40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar24;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar25 = *plStack_120;
        do {
          lVar27 = 0;
          do {
            if (*plStack_120 != lVar25) {
              _objc_enumerationMutation(lVar24);
            }
            uVar4 = *(undefined8 *)(lStack_128 + lVar27 * 8);
            func_0x00010bf074a0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar22);
            _objc_release(uVar4);
            lVar27 = lVar27 + 1;
          } while (lVar3 != lVar27);
          lVar3 = lVar24;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar24);
      _objc_release(param_2);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c257940();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c296a60();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_106016d7c;
      puStack_190 = &UNK_110908058;
      uVar26 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain(uVar26);
      uStack_140 = uVar26;
      _objc_retain(param_2);
      uVar26 = *(undefined8 *)(param_1 + 0x28);
      lStack_188 = param_2;
      _objc_retain(uVar26);
      uStack_170 = *(undefined8 *)(param_1 + 0x38);
      uStack_178 = *(undefined8 *)(param_1 + 0x30);
      uStack_160 = *(undefined8 *)(param_1 + 0x48);
      uStack_168 = *(undefined8 *)(param_1 + 0x40);
      uStack_158 = *(undefined8 *)(param_1 + 0x20);
      uStack_148 = *(undefined8 *)(param_1 + 0x58);
      uStack_150 = *(undefined8 *)(param_1 + 0x50);
      unaff_x26 = &puStack_1a8;
      ppuVar19 = (undefined **)(param_1 + 0x68);
      uStack_180 = uVar26;
      _objc_copyWeak(auStack_138);
      ppuVar21 = &puStack_1a8;
      func_0x00010c297260(uVar6);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_138);
      _objc_release(uStack_180);
      _objc_release(lStack_188);
      _objc_release(uStack_140);
      _objc_release(puVar22);
    }
  }
  else {
    lVar24 = *(long *)(param_1 + 0x60);
    ppuVar2 = param_3;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = (undefined **)0x0;
    ppuVar21 = ppuVar2;
    (**(code **)(lVar24 + 0x10))(lVar24);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 0xe);
  __Unwind_Resume();
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar19);
  if (ppuVar21 == (undefined **)0x0) {
    lVar3 = *(long *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    lVar25 = *(long *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    lVar27 = *(long *)(param_2 + 0x40);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar26 = *(undefined8 *)(param_2 + 0x58);
    uVar28 = *(undefined8 *)(param_2 + 0x60);
    lVar24 = param_2 + 0x70;
    _objc_loadWeakRetained();
    _objc_retain(lVar3);
    _objc_retain(ppuVar19);
    _objc_retain(lVar1);
    _objc_retain(lVar25);
    _objc_retain(uVar6);
    _objc_retain(lVar27);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    _objc_retain(uVar26);
    _objc_retain(uVar28);
    _objc_retain(lVar24);
    puVar7 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar8 = lVar3;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    FUN_106013b7c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar17 = PTR_PTR_1126ae558;
    puVar22 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar9 == 0) {
      ppuVar21 = &PTR____CFConstantStringClassReference_110e38a98;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38a98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9c80(puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar21);
    }
    else {
      lVar8 = lVar3;
      func_0x00010bf074a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      puVar17 = PTR_PTR_1126ae558;
      if (ppuVar21 == (undefined **)0x0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e38ab8;
        func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38ab8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe9c80(puVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        dVar31 = 0.0;
        lStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        plStack_2f0 = (long *)0x0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        lVar8 = lVar3;
        func_0x00010bf50b40();
        _objc_retainAutoreleasedReturnValue();
        lStack_398 = lVar8;
        func_0x00010bf52a60();
        if (lStack_398 != 0) {
          lVar20 = *plStack_2f0;
          do {
            lVar23 = 0;
            do {
              dVar30 = dVar31;
              if (*plStack_2f0 != lVar20) {
                _objc_enumerationMutation(lVar8);
                dVar30 = dVar31;
              }
              lVar29 = *(long *)(lStack_2f8 + lVar23 * 8);
              lVar11 = lVar29;
              func_0x00010bf074a0(lVar29);
              _objc_retainAutoreleasedReturnValue();
              ppuVar2 = ppuVar19;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar11);
              puVar17 = PTR_PTR_1126ae558;
              if (ppuVar2 == (undefined **)0x0) {
                ppuVar2 = &PTR____CFConstantStringClassReference_110e38ad8;
                func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38ad8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfe9c80(puVar17);
                _objc_retainAutoreleasedReturnValue();
LAB_106017468:
                _objc_release(ppuVar2);
                _objc_release(lVar8);
                puVar22 = PTR___NSConcreteStackBlock_11034bd00;
                goto LAB_106017494;
              }
              lVar11 = lVar29;
              func_0x00010bf50280(lVar29);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lVar1;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar11);
              puVar22 = PTR_PTR_1126c71a0;
              puVar17 = PTR_PTR_1126ae558;
              if (lVar12 == 0) {
                ppuVar18 = &PTR____CFConstantStringClassReference_110e38af8;
                func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38af8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfe9c80(puVar17);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar18);
                goto LAB_106017468;
              }
              _objc_retain(lVar12);
              _objc_alloc(puVar22);
              lVar11 = lVar12;
              func_0x00010c25be80(lVar12);
              dVar31 = (double)lVar11;
              func_0x00010c25bf40(lVar12);
              dVar32 = dVar30 * 1000.0;
              func_0x00010c13c360(lVar12);
              _objc_release(lVar12);
              func_0x00010c04e4c0(dVar31,dVar32,dVar30 * 1000.0,puVar22);
              ppuVar18 = ppuVar2;
              func_0x00010c112a80(ppuVar2);
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar18;
              func_0x000106c6ab60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar18);
              lVar11 = lVar12;
              func_0x00010c0748c0();
              if ((int)lVar11 == 0) {
                lVar11 = lVar12;
                func_0x00010c244280();
                _objc_retainAutoreleasedReturnValue();
                lVar15 = lVar11;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar11);
                if (lVar15 != 0) {
                  func_0x00010bf50280(lVar29);
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar12;
                  func_0x00010c244280(lVar12);
                  _objc_retainAutoreleasedReturnValue();
                  lVar15 = lVar11;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar16 = lVar29;
                  func_0x0001060142d0(lVar29,lVar15,puVar22,ppuVar13,uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar10);
                  goto LAB_1060171ec;
                }
              }
              else {
                func_0x00010bf50280(lVar29);
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar25;
                func_0x00010c269d40(lVar25);
                _objc_retainAutoreleasedReturnValue();
                lVar15 = lVar27;
                func_0x00010c269d40(lVar27);
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar15;
                func_0x00010bf60aa0();
                _objc_retainAutoreleasedReturnValue();
                lVar14 = lVar29;
                FUN_106014690(lVar29,puVar22,ppuVar13,lVar11,uVar6,lVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar10);
                _objc_release(lVar14);
LAB_1060171ec:
                _objc_release(lVar16);
                _objc_release(lVar15);
                _objc_release(lVar11);
                _objc_release(lVar29);
              }
              _objc_release(ppuVar13);
              _objc_release(puVar22);
              _objc_release(lVar12);
              _objc_release(ppuVar2);
              lVar23 = lVar23 + 1;
            } while (lStack_398 != lVar23);
            lStack_398 = lVar8;
            func_0x00010bf52a60();
            puVar22 = PTR___NSConcreteStackBlock_11034bd00;
          } while (lStack_398 != 0);
        }
        _objc_release(lVar8);
        puVar17 = PTR_PTR_1126ae558;
        func_0x00010beffb40(PTR_PTR_1126ae558);
        _objc_retainAutoreleasedReturnValue();
        uStack_350 = 0xc2000000;
        pcStack_348 = FUN_106017814;
        puStack_340 = &UNK_1109080e8;
        puStack_358 = puVar22;
        puStack_338 = puVar7;
        _objc_retain(uVar28);
        uStack_330 = uVar28;
        lStack_328 = lVar9;
        ppuStack_320 = ppuVar21;
        _objc_retain(uVar4);
        uStack_318 = uVar4;
        _objc_retain(uVar26);
        uStack_310 = uVar26;
        _objc_retain(lVar24);
        lStack_308 = lVar24;
        func_0x00010c297260(puVar17);
        _objc_release(puVar17);
        puVar17 = puVar7;
        func_0x00010bfbc3e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_308);
        _objc_release(uStack_310);
        _objc_release(uStack_318);
        _objc_release(uStack_330);
LAB_106017494:
        _objc_release(puVar10);
      }
      _objc_release(ppuVar21);
    }
    _objc_release(lVar9);
    _objc_release(puVar7);
    _objc_release(lVar24);
    _objc_release(uVar28);
    _objc_release(uVar26);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(lVar27);
    _objc_release(uVar6);
    _objc_release(lVar25);
    _objc_release(lVar1);
    _objc_release(ppuVar19);
    _objc_release(lVar3);
    uStack_378 = 0xc2000000;
    pcStack_370 = FUN_1060175b0;
    puStack_368 = &UNK_110908028;
    ppuVar21 = *(undefined ***)(param_2 + 0x68);
    puStack_380 = puVar22;
    _objc_retain(ppuVar21);
    ppuVar2 = &puStack_380;
    ppuStack_360 = ppuVar21;
    func_0x00010c297260(puVar17);
    _objc_release(puVar17);
    _objc_release(lVar24);
    ppuVar21 = ppuStack_360;
  }
  else {
    lVar24 = *(long *)(param_2 + 0x68);
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar21;
    (**(code **)(lVar24 + 0x10))(lVar24,0);
  }
  _objc_release(ppuVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    return;
  }
  ___stack_chk_fail();
  puVar22 = ppuVar19[4];
  if (ppuVar2 != (undefined **)0x0) {
    func_0x000106c7758c(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar22 + 0x10))(puVar22,0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010601760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar22 + 0x10))(puVar22);
  return;
}



/* Entry: 106016d7c; end: 1060175af;  */

void FUN_106016d7c(long param_1,undefined **param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  long lStack_1e8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == (undefined **)0x0) {
    lVar1 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    uVar27 = *(undefined8 *)(param_1 + 0x60);
    lVar25 = param_1 + 0x70;
    _objc_loadWeakRetained();
    _objc_retain(lVar1);
    _objc_retain(param_2);
    _objc_retain(lVar5);
    _objc_retain(lVar2);
    _objc_retain(uVar6);
    _objc_retain(lVar3);
    _objc_retain(uVar7);
    _objc_retain(uVar4);
    _objc_retain(uVar8);
    _objc_retain(uVar27);
    _objc_retain(lVar25);
    puVar9 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar10 = lVar1;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    FUN_106013b7c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar20 = PTR_PTR_1126ae558;
    puVar24 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar11 == 0) {
      ppuVar19 = &PTR____CFConstantStringClassReference_110e38a98;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38a98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9c80(puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar19);
    }
    else {
      lVar10 = lVar1;
      func_0x00010bf074a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar20 = PTR_PTR_1126ae558;
      if (ppuVar19 == (undefined **)0x0) {
        ppuVar23 = &PTR____CFConstantStringClassReference_110e38ab8;
        func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38ab8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe9c80(puVar20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar23);
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        dVar30 = 0.0;
        lStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        plStack_140 = (long *)0x0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        lVar10 = lVar1;
        func_0x00010bf50b40();
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = lVar10;
        func_0x00010bf52a60();
        if (lStack_1e8 != 0) {
          lVar22 = *plStack_140;
          do {
            lVar26 = 0;
            do {
              dVar29 = dVar30;
              if (*plStack_140 != lVar22) {
                _objc_enumerationMutation(lVar10);
                dVar29 = dVar30;
              }
              lVar28 = *(long *)(lStack_148 + lVar26 * 8);
              lVar13 = lVar28;
              func_0x00010bf074a0(lVar28);
              _objc_retainAutoreleasedReturnValue();
              ppuVar23 = param_2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar13);
              puVar20 = PTR_PTR_1126ae558;
              if (ppuVar23 == (undefined **)0x0) {
                ppuVar23 = &PTR____CFConstantStringClassReference_110e38ad8;
                func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38ad8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfe9c80(puVar20);
                _objc_retainAutoreleasedReturnValue();
LAB_106017468:
                _objc_release(ppuVar23);
                _objc_release(lVar10);
                puVar24 = PTR___NSConcreteStackBlock_11034bd00;
                goto LAB_106017494;
              }
              lVar13 = lVar28;
              func_0x00010bf50280(lVar28);
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar13);
              puVar24 = PTR_PTR_1126c71a0;
              puVar20 = PTR_PTR_1126ae558;
              if (lVar14 == 0) {
                ppuVar21 = &PTR____CFConstantStringClassReference_110e38af8;
                func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38af8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfe9c80(puVar20);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar21);
                goto LAB_106017468;
              }
              _objc_retain(lVar14);
              _objc_alloc(puVar24);
              lVar13 = lVar14;
              func_0x00010c25be80(lVar14);
              dVar30 = (double)lVar13;
              func_0x00010c25bf40(lVar14);
              dVar31 = dVar29 * 1000.0;
              func_0x00010c13c360(lVar14);
              _objc_release(lVar14);
              func_0x00010c04e4c0(dVar30,dVar31,dVar29 * 1000.0,puVar24);
              ppuVar21 = ppuVar23;
              func_0x00010c112a80(ppuVar23);
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar21;
              func_0x000106c6ab60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar21);
              lVar13 = lVar14;
              func_0x00010c0748c0();
              if ((int)lVar13 == 0) {
                lVar13 = lVar14;
                func_0x00010c244280();
                _objc_retainAutoreleasedReturnValue();
                lVar17 = lVar13;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar13);
                if (lVar17 != 0) {
                  func_0x00010bf50280(lVar28);
                  _objc_retainAutoreleasedReturnValue();
                  lVar13 = lVar14;
                  func_0x00010c244280(lVar14);
                  _objc_retainAutoreleasedReturnValue();
                  lVar17 = lVar13;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar18 = lVar28;
                  func_0x0001060142d0(lVar28,lVar17,puVar24,ppuVar15,uVar7);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar12);
                  goto LAB_1060171ec;
                }
              }
              else {
                func_0x00010bf50280(lVar28);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar2;
                func_0x00010c269d40(lVar2);
                _objc_retainAutoreleasedReturnValue();
                lVar17 = lVar3;
                func_0x00010c269d40(lVar3);
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lVar17;
                func_0x00010bf60aa0();
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar28;
                FUN_106014690(lVar28,puVar24,ppuVar15,lVar13,uVar6,lVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar12);
                _objc_release(lVar16);
LAB_1060171ec:
                _objc_release(lVar18);
                _objc_release(lVar17);
                _objc_release(lVar13);
                _objc_release(lVar28);
              }
              _objc_release(ppuVar15);
              _objc_release(puVar24);
              _objc_release(lVar14);
              _objc_release(ppuVar23);
              lVar26 = lVar26 + 1;
            } while (lStack_1e8 != lVar26);
            lStack_1e8 = lVar10;
            func_0x00010bf52a60();
            puVar24 = PTR___NSConcreteStackBlock_11034bd00;
          } while (lStack_1e8 != 0);
        }
        _objc_release(lVar10);
        puVar20 = PTR_PTR_1126ae558;
        func_0x00010beffb40(PTR_PTR_1126ae558);
        _objc_retainAutoreleasedReturnValue();
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_106017814;
        puStack_190 = &UNK_1109080e8;
        puStack_1a8 = puVar24;
        puStack_188 = puVar9;
        _objc_retain(uVar27);
        uStack_180 = uVar27;
        lStack_178 = lVar11;
        ppuStack_170 = ppuVar19;
        _objc_retain(uVar4);
        uStack_168 = uVar4;
        _objc_retain(uVar8);
        uStack_160 = uVar8;
        _objc_retain(lVar25);
        lStack_158 = lVar25;
        func_0x00010c297260(puVar20);
        _objc_release(puVar20);
        puVar20 = puVar9;
        func_0x00010bfbc3e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_158);
        _objc_release(uStack_160);
        _objc_release(uStack_168);
        _objc_release(uStack_180);
LAB_106017494:
        _objc_release(puVar12);
      }
      _objc_release(ppuVar19);
    }
    _objc_release(lVar11);
    _objc_release(puVar9);
    _objc_release(lVar25);
    _objc_release(uVar27);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(param_2);
    _objc_release(lVar1);
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_1060175b0;
    puStack_1b8 = &UNK_110908028;
    ppuVar23 = *(undefined ***)(param_1 + 0x68);
    puStack_1d0 = puVar24;
    _objc_retain(ppuVar23);
    ppuVar19 = &puStack_1d0;
    ppuStack_1b0 = ppuVar23;
    func_0x00010c297260(puVar20);
    _objc_release(puVar20);
    _objc_release(lVar25);
    param_3 = ppuStack_1b0;
  }
  else {
    lVar25 = *(long *)(param_1 + 0x68);
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = param_3;
    (**(code **)(lVar25 + 0x10))(lVar25,0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puVar24 = param_2[4];
  if (ppuVar19 != (undefined **)0x0) {
    func_0x000106c7758c(ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar24 + 0x10))(puVar24,0,ppuVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar19);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010601760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar24 + 0x10))(puVar24);
  return;
}



/* Entry: 1060175b0; end: 10601760f;  */

void FUN_1060175b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
    func_0x000106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010601760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1);
  return;
}



/* Entry: 106017610; end: 1060176e3; -[SCCStreakRestoreServiceImpl syncConversationWithCallback:] */

void FUN_106017610(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    uVar1 = uVar3;
    func_0x000106c74fa8(uVar3,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060176e4; end: 106017743;  */

void FUN_1060176e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_3 != 0) {
    func_0x000106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106017740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  return;
}



/* Entry: 106017744; end: 1060177ff; -[SCCStreakRestoreServiceImpl .cxx_destruct] */

void FUN_106017744(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 106017800; end: 106017813;  */

void FUN_106017800(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106017814; end: 1060178d3;  */

void FUN_106017814(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    ppuVar1 = (undefined **)PTR_PTR_1126c71b8;
    _objc_alloc(PTR_PTR_1126c71b8);
    func_0x00010c054aa0();
    puVar2 = PTR_PTR_1126c71c0;
    _objc_alloc(PTR_PTR_1126c71c0);
    func_0x00010c03a5c0();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e38b18;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e38b18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060178d4; end: 106017b0b; -[SCPlusStreakRestoreBulkPaidProduct initWithTraceId:externalId:product:storeKitServices:circumstanceEngine:delegate:] */

undefined8 *
FUN_1060178d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ef118;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_8);
    uVar2 = param_5;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000106c6ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[7];
    puVar1[7] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cd460();
    uVar5 = param_5;
    func_0x00010c112a80(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c6a9c0(uVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[8];
    puVar1[8] = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106017b0c; end: 106017ccf; -[SCPlusStreakRestoreBulkPaidProduct purchaseWithPurchaseId:domainInfo:] */

void FUN_106017b0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x000106c78c58();
  puVar6 = PTR_PTR_1126b3540;
  if ((uVar1 & 1) == 0) {
    puVar5 = PTR_PTR_1126c71c8;
    _objc_alloc(PTR_PTR_1126c71c8);
    func_0x00010c03fc80();
    func_0x00010c13b080(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    puVar6 = PTR_PTR_1126b1588;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c257940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11bbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = uVar4;
    func_0x00010c13ca20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106017cd0; end: 106017d93;  */

void FUN_106017cd0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010c27dd80();
    if ((8 < uVar1) || ((1L << (uVar1 & 0x3f) & 0x1e9U) == 0)) {
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf7a1c0();
      _objc_release(lVar3);
    }
    func_0x00010c27dd80(param_2);
    func_0x000106c6c5d8();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126c71c8;
  _objc_alloc(PTR_PTR_1126c71c8);
  func_0x00010c03fc80();
  func_0x00010bfbb700(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106017d94; end: 106017d9b; -[SCPlusStreakRestoreBulkPaidProduct price] */

undefined8 FUN_106017d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106017d9c; end: 106017dcb; -[SCPlusStreakRestoreBulkPaidProduct setPrice:] */

void FUN_106017d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106017dcc; end: 106017dd3; -[SCPlusStreakRestoreBulkPaidProduct localizedPrice] */

undefined8 FUN_106017dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106017dd4; end: 106017ddb; -[SCPlusStreakRestoreBulkPaidProduct setLocalizedPrice:] */

void FUN_106017dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106017ddc; end: 106017e4f; -[SCPlusStreakRestoreBulkPaidProduct .cxx_destruct] */

void FUN_106017ddc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106017e50; end: 1060180c7; -[SCPlusStreakRestoreFreeProduct initWithConversationId:traceId:nativeMessagingServices:grpcClient:delegate:] */

undefined8 *
FUN_106017e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
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
  double dVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ef120;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_7);
    puVar3 = PTR_PTR_1126c71d0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf5dec0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 0.0;
    func_0x00010c02bf60();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c0cd460(puVar1[6]);
    lVar11 = (long)dVar12;
    uVar2 = puVar1[6];
    func_0x00010bf5de80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c6a9c0(lVar11,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[7];
    puVar1[7] = lVar11;
    _objc_release(uVar10);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060180c8; end: 1060181f7; -[SCPlusStreakRestoreFreeProduct purchaseWithPurchaseId:domainInfo:] */

void FUN_1060180c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  FUN_106014f74(uVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060181f8; end: 106018267;  */

void FUN_1060181f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7a1c0();
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126c71c8;
  _objc_alloc(PTR_PTR_1126c71c8);
  func_0x00010c03fc80();
  func_0x00010bfbb700(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106018268; end: 10601826f; -[SCPlusStreakRestoreFreeProduct price] */

undefined8 FUN_106018268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106018270; end: 10601829f; -[SCPlusStreakRestoreFreeProduct setPrice:] */

void FUN_106018270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060182a0; end: 1060182a7; -[SCPlusStreakRestoreFreeProduct localizedPrice] */

undefined8 FUN_1060182a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060182a8; end: 1060182af; -[SCPlusStreakRestoreFreeProduct setLocalizedPrice:] */

void FUN_1060182a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060182b0; end: 106018317; -[SCPlusStreakRestoreFreeProduct .cxx_destruct] */

void FUN_1060182b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106018318; end: 10601857f; -[SCPlusStreakRestorePaidProduct initWithConversationId:traceId:externalId:product:storeKitServices:circumstanceEngine:delegate:] */

undefined8 *
FUN_106018318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ef128;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_9);
    uVar2 = param_6;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000106c6ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cd460();
    uVar5 = param_6;
    func_0x00010c112a80(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c6a9c0(uVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[9];
    puVar1[9] = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106018580; end: 106018743; -[SCPlusStreakRestorePaidProduct purchaseWithPurchaseId:domainInfo:] */

void FUN_106018580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x000106c78c58();
  puVar6 = PTR_PTR_1126b3540;
  if ((uVar1 & 1) == 0) {
    puVar5 = PTR_PTR_1126c71c8;
    _objc_alloc(PTR_PTR_1126c71c8);
    func_0x00010c03fc80();
    func_0x00010c13b080(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    puVar6 = PTR_PTR_1126b1588;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c257940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11bc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = uVar4;
    func_0x00010c13ca20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106018744; end: 106018807;  */

void FUN_106018744(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x00010c27dd80();
    if ((8 < uVar1) || ((1L << (uVar1 & 0x3f) & 0x1e9U) == 0)) {
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf7a1c0();
      _objc_release(lVar3);
    }
    func_0x00010c27dd80(param_2);
    func_0x000106c6c5d8();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126c71c8;
  _objc_alloc(PTR_PTR_1126c71c8);
  func_0x00010c03fc80();
  func_0x00010bfbb700(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106018808; end: 10601880f; -[SCPlusStreakRestorePaidProduct price] */

undefined8 FUN_106018808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106018810; end: 10601883f; -[SCPlusStreakRestorePaidProduct setPrice:] */

void FUN_106018810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106018840; end: 106018847; -[SCPlusStreakRestorePaidProduct localizedPrice] */

undefined8 FUN_106018840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106018848; end: 10601884f; -[SCPlusStreakRestorePaidProduct setLocalizedPrice:] */

void FUN_106018848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106018850; end: 1060188cf; -[SCPlusStreakRestorePaidProduct .cxx_destruct] */

void FUN_106018850(long param_1)

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



/* Entry: 1060188d0; end: 106019107; -[SCPlusStreakRestorePurchaseTrayViewController initWithCurrentUserId:displayNameProvider:conversationId:composerServices:composerCoreUIServices:plusServices:storeKitServices:conversationServices:conversationIdServices:nativeMessagingServices:snapchatterServices:groupsDataFetcher:friendsFeedServices:circumstanceEngine:valdiBlizzardLoggingServices:grpcClient:friendmojiRegistry:loggingContext:supportScopeFactoryServices:subscribeScopeExposer:subscribeScopeServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:source:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060188d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined **param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b33f0;
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010c295440(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80();
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_17;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_17);
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c71d8;
  _objc_alloc();
  uVar3 = param_20;
  func_0x00010c25c240(param_20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e5e0();
  _objc_release(uVar3);
  uVar3 = param_20;
  func_0x00010c247a20(param_20);
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206fa0(puVar5);
  _objc_release(uVar3);
  uVar3 = param_20;
  func_0x00010c243400(param_20);
  func_0x0001008cc2b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2056c0(puVar5);
  _objc_release(uVar3);
  uVar3 = param_20;
  func_0x00010c243340(param_20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar5);
  _objc_release(uVar3);
  uVar3 = param_20;
  func_0x00010bf31200(param_20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar5);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x000106c733fc();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_7;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar6 = uVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar21);
  puVar8 = PTR_PTR_1126c71e0;
  _objc_alloc();
  func_0x00010c057440();
  _objc_release(param_21);
  puVar9 = PTR_PTR_1126c71e8;
  _objc_alloc();
  uVar21 = param_20;
  func_0x00010c25c240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_20);
  func_0x00010c007680();
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar21);
  ppuVar10 = param_19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_19);
  ppuVar11 = ppuVar10;
  func_0x00010bf8e420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcb2f8;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar1 = ppuVar11;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  puVar12 = PTR_PTR_1126b34d8;
  _objc_alloc();
  func_0x00010c037880();
  _objc_release(param_9);
  puVar13 = PTR_PTR_1126b1da8;
  _objc_alloc();
  func_0x00010c04abe0();
  puVar14 = PTR_PTR_1126b35c8;
  _objc_alloc();
  func_0x00010c057140();
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_8);
  puVar15 = PTR_PTR_1126b34e8;
  _objc_alloc();
  uVar21 = param_1;
  func_0x000106c733fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046960();
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(uVar21);
  uVar21 = param_6;
  func_0x00010c295440(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar6 = uVar21;
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar21);
  puVar17 = PTR_PTR_1126c71f0;
  _objc_alloc_init(PTR_PTR_1126c71f0);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar17);
  _objc_release(puVar18);
  puVar18 = PTR_PTR_1126c71f8;
  _objc_alloc(PTR_PTR_1126c71f8);
  func_0x00010c02ed80();
  func_0x00010c20f5e0();
  func_0x00010c20f420(puVar18);
  func_0x00010c1ab5e0(puVar18);
  puVar19 = PTR_PTR_1126c7200;
  _objc_alloc(PTR_PTR_1126c7200);
  func_0x00010c061d40();
  puStack_70 = PTR_PTR_1126ef130;
  puVar20 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar20,PTR_s_initWithValdiView_presentationTy_1125272a0,puVar19,4);
  if (puVar20 != (undefined8 *)0x0) {
    func_0x00010c1c1bc0(puVar2);
    lVar22 = (long)_DAT_11273cf24;
    _objc_retain(puVar2);
    uVar21 = *(undefined8 *)((long)puVar20 + lVar22);
    *(undefined **)((long)puVar20 + lVar22) = puVar2;
    _objc_release(uVar21);
    _objc_storeWeak((long)puVar20 + (long)_DAT_11273cf28,param_28);
  }
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar19);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(ppuVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_28);
  return puVar20;
}



/* Entry: 106019108; end: 10601915f; -[SCPlusStreakRestorePurchaseTrayViewController didRestore] */

void FUN_106019108(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106019160;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106019160; end: 106019177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106019160(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273cf2c) = 1;
  return;
}



/* Entry: 106019178; end: 1060191c7; -[SCPlusStreakRestorePurchaseTrayViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106019178(long param_1)

{
  param_1 = param_1 + _DAT_11273cf28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060191c8; end: 1060191cf; -[SCPlusStreakRestorePurchaseTrayViewController pageViewName] */

undefined8 FUN_1060191c8(void)

{
  return 0xc9;
}


