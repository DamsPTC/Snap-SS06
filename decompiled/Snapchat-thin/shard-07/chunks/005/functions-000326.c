/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055ec124; end: 1055ec18b; +[SCLGTextShadow descriptor] */

void FUN_1055ec124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd220 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50770,
                        &PTR____CFConstantStringClassReference_110df02d8,&PTR_DAT_1130ed0a0,
                        &PTR_DAT_1130ed0b8,4,0x28,0x1c);
    puRam00000001136bd220 = puVar1;
  }
  return;
}



/* Entry: 1055ec18c; end: 1055ec1f3; +[SCLGTextColor descriptor] */

void FUN_1055ec18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd228 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50810,
                        &PTR____CFConstantStringClassReference_110df02f8,&PTR_DAT_1130ed138,
                        &PTR_DAT_1130ed150,5,0x30,0x1c);
    puRam00000001136bd228 = puVar1;
  }
  return;
}



/* Entry: 1055ec1f4; end: 1055ec25b; +[SCLGUnlockablesSchedule descriptor] */

void FUN_1055ec1f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd230 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a508b0,
                        &PTR____CFConstantStringClassReference_110df0318,&PTR_DAT_1130ed1f0,
                        &PTR_DAT_1130ed288,9,0x48,0x1c);
    puRam00000001136bd230 = puVar1;
  }
  return;
}



/* Entry: 1055ec25c; end: 1055ec353; +[SCLGUnlockablesSchedule_UnlockablesScheduleInterval descriptor] */

undefined * FUN_1055ec25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd238 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50900,
                        &PTR____CFConstantStringClassReference_110df0338,&PTR_DAT_1130ed1f0,
                        &PTR_DAT_1130ed208,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bd238 = puVar1;
  }
  return puRam00000001136bd238;
}



/* Entry: 1055ec354; end: 1055ec35f;  */

bool FUN_1055ec354(uint param_1)

{
  return param_1 < 0x17;
}



/* Entry: 1055ec360; end: 1055ec3db;  */

undefined * FUN_1055ec360(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd248 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df0378,
                        &UNK_10ddb5618,&UNK_10ddb5650,5,FUN_1055ec3dc,0);
    do {
      if (puRam00000001136bd248 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd248;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd248,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd248 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd248;
}



/* Entry: 1055ec3dc; end: 1055ec3e7;  */

bool FUN_1055ec3dc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1055ec3e8; end: 1055ec463;  */

undefined * FUN_1055ec3e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd250 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df0398,
                        &UNK_10ddb5664,&UNK_10ddb5690,4,FUN_1055ec464,0);
    do {
      if (puRam00000001136bd250 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd250;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd250,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd250 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd250;
}



/* Entry: 1055ec464; end: 1055ec46f;  */

bool FUN_1055ec464(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1055ec470; end: 1055ec4eb;  */

undefined * FUN_1055ec470(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd258 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df03b8,
                        &UNK_10ddb56a0,&UNK_10ddb56d8,5,FUN_1055ec4ec,0);
    do {
      if (puRam00000001136bd258 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd258;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd258,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd258 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd258;
}



/* Entry: 1055ec4ec; end: 1055ec4f7;  */

bool FUN_1055ec4ec(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1055ec4f8; end: 1055ec573;  */

undefined * FUN_1055ec4f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd260 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df03d8,
                        &UNK_10ddb56ec,&UNK_10ddb5714,3,FUN_1055ec574,0);
    do {
      if (puRam00000001136bd260 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd260;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd260,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd260 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd260;
}



/* Entry: 1055ec574; end: 1055ec57f;  */

bool FUN_1055ec574(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055ec580; end: 1055ec5fb;  */

undefined * FUN_1055ec580(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd268 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df03f8,
                        &UNK_10ddb5720,&UNK_10ddb5764,4,FUN_1055ec5fc,0);
    do {
      if (puRam00000001136bd268 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd268;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd268,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd268 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd268;
}



/* Entry: 1055ec5fc; end: 1055ec607;  */

bool FUN_1055ec5fc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1055ec608; end: 1055ec66f; +[SCAddUnlockRequest descriptor] */

void FUN_1055ec608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a509f0,
                        &PTR____CFConstantStringClassReference_110df0418,&PTR_DAT_1130ed3b0,
                        &PTR_s_unlockableId_1130ed9a8,8,0x38,0x1c);
    puRam00000001136bd270 = puVar1;
  }
  return;
}



/* Entry: 1055ec670; end: 1055ec6fb; +[SCUnlockMetadata descriptor] */

undefined * FUN_1055ec670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50a40,
                        &PTR____CFConstantStringClassReference_110df0438,&PTR_DAT_1130ed3b0,
                        &PTR_DAT_1130ed548,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bd278 = puVar1;
  }
  return puRam00000001136bd278;
}



/* Entry: 1055ec6fc; end: 1055ec763; +[SCRemoveUnlockRequest descriptor] */

void FUN_1055ec6fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50a90,
                        &PTR____CFConstantStringClassReference_110df0458,&PTR_DAT_1130ed3b0,
                        &PTR_s_unlockableId_1130ed488,3,0x18,0x1c);
    puRam00000001136bd280 = puVar1;
  }
  return;
}



/* Entry: 1055ec764; end: 1055ec7cb; +[SCMetadataRequest descriptor] */

void FUN_1055ec764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50ae0,
                        &PTR____CFConstantStringClassReference_110df0478,&PTR_DAT_1130ed3b0,
                        &PTR_s_unlockableId_1130ed5c8,4,0x20,0x1c);
    puRam00000001136bd288 = puVar1;
  }
  return;
}



/* Entry: 1055ec7cc; end: 1055ec833; +[SCGetUnlocksRequest descriptor] */

void FUN_1055ec7cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50b30,
                        &PTR____CFConstantStringClassReference_110df0498,&PTR_DAT_1130ed3b0,
                        &PTR_DAT_1130ed648,5,0x28,0x1c);
    puRam00000001136bd290 = puVar1;
  }
  return;
}



/* Entry: 1055ec834; end: 1055ec89b; +[SCUnlockGroup descriptor] */

void FUN_1055ec834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50b80,
                        &PTR____CFConstantStringClassReference_110df04b8,&PTR_DAT_1130ed3b0,
                        &PTR_DAT_1130ed3c8,2,0xc,0x1c);
    puRam00000001136bd298 = puVar1;
  }
  return;
}



/* Entry: 1055ec89c; end: 1055ec903; +[SCUnlockGroupRequest descriptor] */

void FUN_1055ec89c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50bd0,
                        &PTR____CFConstantStringClassReference_110df04d8,&PTR_DAT_1130ed3b0,
                        &PTR_DAT_1130ed6e8,5,0x18,0x1c);
    puRam00000001136bd2a0 = puVar1;
  }
  return;
}



/* Entry: 1055ec904; end: 1055ec96b; +[SCBasicUnlocksRequest descriptor] */

void FUN_1055ec904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50c20,
                        &PTR____CFConstantStringClassReference_110df04f8,&PTR_DAT_1130ed3b0,
                        &PTR_s_userId_1130ed828,6,0x28,0x1c);
    puRam00000001136bd2a8 = puVar1;
  }
  return;
}



/* Entry: 1055ec96c; end: 1055ec9d3; +[SCBasicUnlocksResponse descriptor] */

void FUN_1055ec96c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50c70,
                        &PTR____CFConstantStringClassReference_110df0518,&PTR_DAT_1130ed3b0,
                        &PTR_DAT_1130ed408,2,0x10,0x1c);
    puRam00000001136bd2b0 = puVar1;
  }
  return;
}



/* Entry: 1055ec9d4; end: 1055eca3b; +[SCBasicUnlock descriptor] */

void FUN_1055ec9d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50cc0,
                        &PTR____CFConstantStringClassReference_110df0538,&PTR_DAT_1130ed3b0,
                        &PTR_s_unlockableId_1130ed788,5,0x30,0x1c);
    puRam00000001136bd2b8 = puVar1;
  }
  return;
}



/* Entry: 1055eca3c; end: 1055ecaa3; +[SCAddBasicUnlockRequest descriptor] */

void FUN_1055eca3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50d10,
                        &PTR____CFConstantStringClassReference_110df0558,&PTR_DAT_1130ed3b0,
                        &PTR_s_unlock_1130ed4e8,3,0x18,0x1c);
    puRam00000001136bd2c0 = puVar1;
  }
  return;
}



/* Entry: 1055ecaa4; end: 1055ecb0b; +[SCCacheInvalidationRequest descriptor] */

void FUN_1055ecaa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50d60,
                        &PTR____CFConstantStringClassReference_110df0578,&PTR_DAT_1130ed3b0,
                        &PTR_s_userId_1130ed448,2,0x10,0x1c);
    puRam00000001136bd2c8 = puVar1;
  }
  return;
}



/* Entry: 1055ecb0c; end: 1055ecbb3; +[SCUnlockCreationEvent descriptor] */

void FUN_1055ecb0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50db0,
                        &PTR____CFConstantStringClassReference_110df0598,&PTR_DAT_1130ed3b0,
                        &PTR_s_unlockableId_1130ed8e8,6,0x30,0x1c);
    puRam00000001136bd2d0 = puVar1;
  }
  return;
}



/* Entry: 1055ecbb4; end: 1055ecc2f; -[SCVoiceMLLoggingServicesServiceProvider _createVoiceMLLensLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ecbb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc030;
  _objc_alloc(PTR_PTR_1126bc030);
  param_1 = param_1 + _DAT_11272689c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ecc30; end: 1055ecc67; -[SCVoiceMLLoggingServicesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ecc30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272689c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127268a0);
  return;
}



/* Entry: 1055ecc68; end: 1055ecce3; -[SCVoiceMLLoggerImpl initWithUserTrackedLogger:] */

undefined1 * FUN_1055ecc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055ecce4; end: 1055ecceb; -[SCVoiceMLLoggerImpl setSnapSource:] */

void FUN_1055ecce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1055eccec; end: 1055eccf3; -[SCVoiceMLLoggerImpl _userTrackedLogger] */

void FUN_1055eccec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1055eccf4; end: 1055ecda7; -[SCVoiceMLLoggerImpl _logGeolensCustomEventWithName:interactionValue:] */

void FUN_1055eccf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc038;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c19c240();
  func_0x00010c1ae1e0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1ae280(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bee7220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055ecda8; end: 1055ecdd7; -[SCVoiceMLLoggerImpl setLensId:] */

void FUN_1055ecda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055ecdd8; end: 1055ecdeb; -[SCVoiceMLLoggerImpl logEventVoiceActivationModalDialogShown] */

void FUN_1055ecdd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df05b8,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ecdec; end: 1055ecdff; -[SCVoiceMLLoggerImpl logEventVoiceActivationModalDialogAccepted] */

void FUN_1055ecdec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df05d8,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece00; end: 1055ece13; -[SCVoiceMLLoggerImpl logEventVoiceActivationModalDialogCanceled] */

void FUN_1055ece00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df05f8,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece14; end: 1055ece27; -[SCVoiceMLLoggerImpl logEventVoiceActivationModalDialogTappedOutside] */

void FUN_1055ece14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df0618,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece28; end: 1055ece3b; -[SCVoiceMLLoggerImpl logEventUserLeftLensWithoutInteractingWithDialog] */

void FUN_1055ece28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df0638,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece3c; end: 1055ece4f; -[SCVoiceMLLoggerImpl logEventVoiceActivationModalDialogUserLeftApplication] */

void FUN_1055ece3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df0658,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece50; end: 1055ece63; -[SCVoiceMLLoggerImpl logEventRecurringUserVoiceActivationShown] */

void FUN_1055ece50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df0678,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece64; end: 1055ece77; -[SCVoiceMLLoggerImpl logEventRecurringUserActivatedVoice] */

void FUN_1055ece64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df0698,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece78; end: 1055ece8b; -[SCVoiceMLLoggerImpl logEventUserLeftLensWithoutActivatingVoice] */

void FUN_1055ece78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df06b8,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ece8c; end: 1055ece9f; -[SCVoiceMLLoggerImpl logEventRecurringUserLeftApplication] */

void FUN_1055ece8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df06d8,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 1055ecea0; end: 1055ecec3; -[SCVoiceMLLoggerImpl logEventIsVoiceActivationBannerShown:] */

void FUN_1055ecea0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1158;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be54050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGeolensCustomEventWithName_i_1125729b0,
             &PTR____CFConstantStringClassReference_110df06f8,ppuVar1);
  return;
}



/* Entry: 1055ecec4; end: 1055ececb; -[SCVoiceMLLoggerImpl snapSource] */

undefined8 FUN_1055ecec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055ececc; end: 1055ecefb; -[SCVoiceMLLoggerImpl .cxx_destruct] */

void FUN_1055ececc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ecefc; end: 1055ecf2b; +[SCLensInteractionHistoryConfig defaultConfig] */

void FUN_1055ecefc(void)

{
  _objc_alloc(PTR_PTR_1126bc040);
  func_0x00010c00faa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055ecf2c; end: 1055ecf5f; +[SCLensInteractionHistoryConfig tweaksConfig] */

void FUN_1055ecf2c(void)

{
  _objc_alloc(PTR_PTR_1126bc040);
  func_0x00010c00faa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055ecf60; end: 1055ecf77; -[SCLensDataConfigProvider limitBackgroundPrefetchForNonActiveLensUser] */

void FUN_1055ecf60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0858,0,0);
  return;
}



/* Entry: 1055ecf78; end: 1055ecfa3; -[SCLensDataConfigProvider backgroundPrefetchFactor] */

double FUN_1055ecf78(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  func_0x00010bfb2cc0(0x3f800000,*(undefined8 *)(param_1 + 0x18),param_2,
                      &PTR____CFConstantStringClassReference_110df0878,0);
  return (double)fVar1;
}



/* Entry: 1055ecfa4; end: 1055ecfbb; -[SCLensDataConfigProvider nonThrottlingBackgroundPrefetcher] */

void FUN_1055ecfa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0898,0,0);
  return;
}



/* Entry: 1055ecfbc; end: 1055ecfd3; -[SCLensDataConfigProvider unrestrictedLensProcessingEffectFetcher] */

void FUN_1055ecfbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df08b8,0,0);
  return;
}



/* Entry: 1055ecfd4; end: 1055ed043; -[SCLensDataConfigProvider mixerReloadConfigs] */

void FUN_1055ecfd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d5280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ed044; end: 1055ed093; -[SCLensDataConfigProvider selectedLensPrefetchTurnedOff] */

undefined8 FUN_1055ed044(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1055ed094; end: 1055ed12b; -[SCLensDataConfigProvider cachedIdsCleanupType] */

undefined8 FUN_1055ed094(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110df09b8,
                      &PTR____CFConstantStringClassReference_110df09d8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110df09d8);
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110df09f8);
      uVar3 = 2;
      if ((int)uVar2 == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1055ed12c; end: 1055ed143; -[SCLensDataConfigProvider relyOnMuteSwitchCheckerOnly] */

void FUN_1055ed12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0838,0,0);
  return;
}



/* Entry: 1055ed144; end: 1055ed16f; -[SCLensDataConfigProvider maxItemsPerNamespace] */

uint FUN_1055ed144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110df08d8,0,0);
  return (uint)uVar1 & ((int)(uint)uVar1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1055ed170; end: 1055ed187; -[SCLensDataConfigProvider fetchOnlyNonCachedItems] */

void FUN_1055ed170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0938,0,0);
  return;
}



/* Entry: 1055ed188; end: 1055ed1bf; -[SCLensDataConfigProvider lensPrefetchDebounceInterval] */

double FUN_1055ed188(long param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  
  fVar1 = 0.5;
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x18),param_2,
                      &PTR____CFConstantStringClassReference_110df0958,0);
  dVar2 = (double)fVar1;
  if (fVar1 <= 0.0) {
    dVar2 = 0.5;
  }
  return dVar2;
}



/* Entry: 1055ed1c0; end: 1055ed1d7; -[SCLensDataConfigProvider shouldShowUCOSaveProgress] */

void FUN_1055ed1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0a18,0,0);
  return;
}



/* Entry: 1055ed1d8; end: 1055ed1ef; -[SCLensDataConfigProvider shouldShowUCOSaveProgressAsCircle] */

void FUN_1055ed1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0a38,0,0);
  return;
}



/* Entry: 1055ed1f0; end: 1055ed227; -[SCLensDataConfigProvider _resolvedMode] */

void FUN_1055ed1f0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_1055ed3a8();
  if (uVar1 < 5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0cfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_mode_112611968);
  return;
}



/* Entry: 1055ed228; end: 1055ed243; -[SCLensDataConfigProvider deviceDependentAssetShouldUseBackendURL] */

bool FUN_1055ed228(long param_1)

{
  func_0x00010be94ee0();
  return param_1 != 0;
}



/* Entry: 1055ed244; end: 1055ed25f; -[SCLensDataConfigProvider deviceDependentAssetCanResolveFromCOF] */

bool FUN_1055ed244(ulong param_1)

{
  func_0x00010be94ee0();
  return param_1 < 2;
}



/* Entry: 1055ed260; end: 1055ed27f; -[SCLensDataConfigProvider deviceDependentAssetShouldUseEndpoint] */

bool FUN_1055ed260(long param_1)

{
  func_0x00010be94ee0();
  return param_1 - 3U < 2;
}



/* Entry: 1055ed280; end: 1055ed2a7; -[SCLensDataConfigProvider deviceDependentAssetEndpointCacheTTL] */

double FUN_1055ed280(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bfeb720(lVar1);
  return (double)lVar1 / 1000.0;
}



/* Entry: 1055ed2a8; end: 1055ed2cb; -[SCLensDataConfigProvider deviceDependentAssetShouldReport] */

bool FUN_1055ed2a8(long param_1)

{
  func_0x00010be94ee0();
  return param_1 == 4 || param_1 - 1U < 2;
}



/* Entry: 1055ed2cc; end: 1055ed2d3; -[SCLensDataConfigProvider deviceDependentAssetIsAllowlisted:] */

void FUN_1055ed2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_isAllowlisted__1125f89e0);
  return;
}



/* Entry: 1055ed2d4; end: 1055ed34b; -[SCLensDataConfigProvider .cxx_destruct] */

void FUN_1055ed2d4(long param_1)

{
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



/* Entry: 1055ed34c; end: 1055ed3a7; -[SCLensDataConfigServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ed34c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127268e0);
  _objc_destroyWeak(param_1 + _DAT_1127268dc);
  _objc_destroyWeak(param_1 + _DAT_1127268d8);
  _objc_destroyWeak(param_1 + _DAT_1127268d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127268d4);
  return;
}



/* Entry: 1055ed3a8; end: 1055ed3b3;  */

void FUN_1055ed3a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0d48,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1055ed3b4; end: 1055ed3d7; -[SCLensMixerReloadConfig copyWithZone:] */

undefined8 FUN_1055ed3b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055ed3d8; end: 1055ed443; -[SCLensMixerReloadConfig hash] */

undefined8 * FUN_1055ed3d8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1055ed4c8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1055ed4c8;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1055ed4c8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1055ed4c8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1055ed444; end: 1055ed4e3; -[SCLensMixerReloadConfig isEqual:] */

long FUN_1055ed444(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055ed4c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1055ed4c8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1055ed4c8;
    }
  }
  lVar3 = 1;
LAB_1055ed4c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055ed4e4; end: 1055ed4ef; -[SCLensMixerReloadConfig .cxx_destruct] */

void FUN_1055ed4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ed4f0; end: 1055ed557; +[SCBackgroundPrefetchConfig descriptor] */

void FUN_1055ed4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50fe0,
                        &PTR____CFConstantStringClassReference_110df0a98,&PTR_DAT_1130edb68,
                        &PTR_DAT_1130edb80,3,4,0x1c);
    puRam00000001136bd2d8 = puVar1;
  }
  return;
}



/* Entry: 1055ed558; end: 1055ed5bf; +[SCLensMetadataCentralizedStoreAB descriptor] */

void FUN_1055ed558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51080,
                        &PTR____CFConstantStringClassReference_110df0ab8,&PTR_DAT_1130edbe0,
                        &PTR_DAT_1130edbf8,2,4,0x1c);
    puRam00000001136bd2e0 = puVar1;
  }
  return;
}



/* Entry: 1055ed5c0; end: 1055ed633; -[SCDeepScanConfig initWithCircumstanceEngine:] */

undefined1 * FUN_1055ed5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94c8;
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



/* Entry: 1055ed634; end: 1055ed64b; -[SCDeepScanConfig deepScanOdinEnabled] */

void FUN_1055ed634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0b38,0,0);
  return;
}



/* Entry: 1055ed64c; end: 1055ed657; -[SCDeepScanConfig cofConfigKey] */

undefined ** FUN_1055ed64c(void)

{
  return &PTR____CFConstantStringClassReference_110df0b78;
}



/* Entry: 1055ed658; end: 1055ed673; -[SCDeepScanConfig modelKey] */

void FUN_1055ed658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110df0b58,
             &PTR____CFConstantStringClassReference_110df0b98,0);
  return;
}



/* Entry: 1055ed674; end: 1055ed67f; -[SCDeepScanConfig .cxx_destruct] */

void FUN_1055ed674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ed680; end: 1055ed6f3; -[SCODINConfig initWithCircumstanceEngine:] */

undefined1 * FUN_1055ed680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94d0;
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



/* Entry: 1055ed6f4; end: 1055ed71f; -[SCODINConfig logLevel] */

long FUN_1055ed6f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110df0bb8,0,0);
  return (long)(int)uVar1;
}



/* Entry: 1055ed720; end: 1055ed737; -[SCODINConfig rtsBenchmarkMode] */

void FUN_1055ed720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0bd8,0,0);
  return;
}



/* Entry: 1055ed738; end: 1055ed743; -[SCODINConfig .cxx_destruct] */

void FUN_1055ed738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ed744; end: 1055ed7b7; -[SCRealTimeScanConfig initWithCircumstanceEngine:] */

undefined1 * FUN_1055ed744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e94d8;
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



/* Entry: 1055ed7b8; end: 1055ed7cf; -[SCRealTimeScanConfig realTimeScanEnabled] */

void FUN_1055ed7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0bf8,1,0);
  return;
}



/* Entry: 1055ed7d0; end: 1055ed7eb; -[SCRealTimeScanConfig codesClassifierModelKey] */

void FUN_1055ed7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110df0c78,
             &PTR____CFConstantStringClassReference_110df0d58,0);
  return;
}



/* Entry: 1055ed7ec; end: 1055ed817; -[SCRealTimeScanConfig confidenceThreshold] */

double FUN_1055ed7ec(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.5;
  func_0x00010bfb2cc0(0x3f000000,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110df0c98,0);
  return (double)fVar1;
}



/* Entry: 1055ed818; end: 1055ed843; -[SCRealTimeScanConfig loggingThreshold] */

double FUN_1055ed818(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.5;
  func_0x00010bfb2cc0(0x3f000000,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110df0cb8,0);
  return (double)fVar1;
}



/* Entry: 1055ed844; end: 1055ed86f; -[SCRealTimeScanConfig captureFPS] */

long FUN_1055ed844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110df0c18,5,0);
  return (long)(int)uVar1;
}



/* Entry: 1055ed870; end: 1055ed887; -[SCRealTimeScanConfig bannerTimeoutMs] */

void FUN_1055ed870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_longValueForConfigKeySync_defaul_11260ae20,
             &PTR____CFConstantStringClassReference_110df0c38,3000,0);
  return;
}



/* Entry: 1055ed888; end: 1055ed89f; -[SCRealTimeScanConfig bannerIntervalMs] */

void FUN_1055ed888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_longValueForConfigKeySync_defaul_11260ae20,
             &PTR____CFConstantStringClassReference_110df0c58,1000,0);
  return;
}



/* Entry: 1055ed8a0; end: 1055ed8cb; -[SCRealTimeScanConfig scanTrayPresentationDelayMs] */

double FUN_1055ed8a0(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  func_0x00010bfb2cc0(0,*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110df0cd8,0);
  return (double)fVar1;
}



/* Entry: 1055ed8cc; end: 1055ed8e3; -[SCRealTimeScanConfig respectDeviceMotions] */

void FUN_1055ed8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0cf8,0,0);
  return;
}



/* Entry: 1055ed8e4; end: 1055ed8fb; -[SCRealTimeScanConfig cancelInferenceEnabled] */

void FUN_1055ed8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0d18,0,0);
  return;
}



/* Entry: 1055ed8fc; end: 1055ed913; -[SCRealTimeScanConfig ignoreCarouselState] */

void FUN_1055ed8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df0d38,1,0);
  return;
}


