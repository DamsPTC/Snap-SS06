/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c699cc; end: 105c69a47;  */

undefined * FUN_105c699cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2148 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e25778,
                        &UNK_10ddcf990,&UNK_10ddcf9dc,5,FUN_105c69a48,0);
    do {
      if (puRam00000001136c2148 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2148;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2148,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2148 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2148;
}



/* Entry: 105c69a48; end: 105c69a53;  */

bool FUN_105c69a48(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105c69a54; end: 105c69acf;  */

undefined * FUN_105c69a54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2150 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e25798,
                        &UNK_10ddcf900,&UNK_10ddcf9f0,3,FUN_105c69ad0,0);
    do {
      if (puRam00000001136c2150 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2150;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2150,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2150 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2150;
}



/* Entry: 105c69ad0; end: 105c69adb;  */

bool FUN_105c69ad0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c69adc; end: 105c69b57;  */

undefined * FUN_105c69adc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2158 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e257b8,
                        &UNK_10ddcf8c4,&UNK_10ddcf9fc,3,FUN_105c69b58,0);
    do {
      if (puRam00000001136c2158 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2158;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2158,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2158 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2158;
}



/* Entry: 105c69b58; end: 105c69b63;  */

bool FUN_105c69b58(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c69b64; end: 105c69bcb; +[StorySubscribeState descriptor] */

void FUN_105c69b64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96f90,
                        &PTR____CFConstantStringClassReference_110e257d8,&PTR_DAT_1131251e0,
                        &PTR_DAT_1131254d8,4,0x20,0x1c);
    puRam00000001136c2160 = puVar1;
  }
  return;
}



/* Entry: 105c69bcc; end: 105c69c33; +[StoryHideState descriptor] */

void FUN_105c69bcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96fe0,
                        &PTR____CFConstantStringClassReference_110e257f8,&PTR_DAT_1131251e0,
                        &PTR_DAT_113125758,6,0x28,0x1c);
    puRam00000001136c2168 = puVar1;
  }
  return;
}



/* Entry: 105c69c34; end: 105c69c9b; +[LensCreatorSubscribeState descriptor] */

void FUN_105c69c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97030,
                        &PTR____CFConstantStringClassReference_110e25818,&PTR_DAT_1131251e0,
                        &PTR_DAT_113125418,3,0x18,0x1c);
    puRam00000001136c2170 = puVar1;
  }
  return;
}



/* Entry: 105c69c9c; end: 105c69d03; +[LensHideState descriptor] */

void FUN_105c69c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97080,
                        &PTR____CFConstantStringClassReference_110e25838,&PTR_DAT_1131251e0,
                        &PTR_DAT_113125558,4,0x20,0x1c);
    puRam00000001136c2178 = puVar1;
  }
  return;
}



/* Entry: 105c69d04; end: 105c69d6b; +[UserSubscribedStories descriptor] */

void FUN_105c69d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a970d0,
                        &PTR____CFConstantStringClassReference_110e25858,&PTR_DAT_1131251e0,
                        &PTR_s_userId_113125218,2,0x18,0x1c);
    puRam00000001136c2180 = puVar1;
  }
  return;
}



/* Entry: 105c69d6c; end: 105c69dd3; +[UserHiddenStories descriptor] */

void FUN_105c69d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97120,
                        &PTR____CFConstantStringClassReference_110e25878,&PTR_DAT_1131251e0,
                        &PTR_s_userId_113125258,2,0x18,0x1c);
    puRam00000001136c2188 = puVar1;
  }
  return;
}



/* Entry: 105c69dd4; end: 105c69e3b; +[UserSubscribedLensCreators descriptor] */

void FUN_105c69dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97170,
                        &PTR____CFConstantStringClassReference_110e25898,&PTR_DAT_1131251e0,
                        &PTR_s_userId_113125298,2,0x18,0x1c);
    puRam00000001136c2190 = puVar1;
  }
  return;
}



/* Entry: 105c69e3c; end: 105c69ea3; +[UserHiddenLenses descriptor] */

void FUN_105c69e3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a971c0,
                        &PTR____CFConstantStringClassReference_110e258b8,&PTR_DAT_1131251e0,
                        &PTR_s_userId_1131252d8,2,0x18,0x1c);
    puRam00000001136c2198 = puVar1;
  }
  return;
}



/* Entry: 105c69ea4; end: 105c69f0b; +[PublisherSubscribeDetail descriptor] */

void FUN_105c69ea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97210,
                        &PTR____CFConstantStringClassReference_110e258d8,&PTR_DAT_1131251e0,
                        &PTR_DAT_1131255d8,4,0x20,0x1c);
    puRam00000001136c21a0 = puVar1;
  }
  return;
}



/* Entry: 105c69f0c; end: 105c69f73; +[UserSubscribedPublishers descriptor] */

void FUN_105c69f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97260,
                        &PTR____CFConstantStringClassReference_110e258f8,&PTR_DAT_1131251e0,
                        &PTR_s_userId_113125318,2,0x18,0x1c);
    puRam00000001136c21a8 = puVar1;
  }
  return;
}



/* Entry: 105c69f74; end: 105c69fdb; +[EditionHideDetail descriptor] */

void FUN_105c69f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a972b0,
                        &PTR____CFConstantStringClassReference_110e25918,&PTR_DAT_1131251e0,
                        &PTR_s_publisherId_113125658,4,0x20,0x1c);
    puRam00000001136c21b0 = puVar1;
  }
  return;
}



/* Entry: 105c69fdc; end: 105c6a043; +[UserHiddenEditions descriptor] */

void FUN_105c69fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97300,
                        &PTR____CFConstantStringClassReference_110e25938,&PTR_DAT_1131251e0,
                        &PTR_s_userId_113125358,2,0x18,0x1c);
    puRam00000001136c21b8 = puVar1;
  }
  return;
}



/* Entry: 105c6a044; end: 105c6a0ab; +[LiveSubscribeDetail descriptor] */

void FUN_105c6a044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97350,
                        &PTR____CFConstantStringClassReference_110e25958,&PTR_DAT_1131251e0,
                        &PTR_DAT_1131256d8,4,0x20,0x1c);
    puRam00000001136c21c0 = puVar1;
  }
  return;
}



/* Entry: 105c6a0ac; end: 105c6a113; +[UserSubscribedLives descriptor] */

void FUN_105c6a0ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a973a0,
                        &PTR____CFConstantStringClassReference_110e25978,&PTR_DAT_1131251e0,
                        &PTR_s_userId_113125398,2,0x18,0x1c);
    puRam00000001136c21c8 = puVar1;
  }
  return;
}



/* Entry: 105c6a114; end: 105c6a17b; +[SubscribedUserScore descriptor] */

void FUN_105c6a114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a973f0,
                        &PTR____CFConstantStringClassReference_110e25998,&PTR_DAT_1131251e0,
                        &PTR_s_userId_113125478,3,0x18,0x1c);
    puRam00000001136c21d0 = puVar1;
  }
  return;
}



/* Entry: 105c6a17c; end: 105c6a1e3; +[SubscribedPublisherScore descriptor] */

void FUN_105c6a17c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97440,
                        &PTR____CFConstantStringClassReference_110e259b8,&PTR_DAT_1131251e0,
                        &PTR_DAT_1131251f8,1,0x10,0x1c);
    puRam00000001136c21d8 = puVar1;
  }
  return;
}



/* Entry: 105c6a1e4; end: 105c6a24b; +[Subscriptions descriptor] */

void FUN_105c6a1e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97490,
                        &PTR____CFConstantStringClassReference_110e259d8,&PTR_DAT_1131251e0,
                        &PTR_DAT_113125818,0xf,0x78,0x1c);
    puRam00000001136c21e0 = puVar1;
  }
  return;
}



/* Entry: 105c6a24c; end: 105c6a2b3; +[OptInStatus descriptor] */

void FUN_105c6a24c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a974e0,
                        &PTR____CFConstantStringClassReference_110e259f8,&PTR_DAT_1131251e0,
                        &PTR_DAT_1131253d8,2,0x10,0x1c);
    puRam00000001136c21e8 = puVar1;
  }
  return;
}



/* Entry: 105c6a2b4; end: 105c6a32f; +[DiscoverUserEmbedding descriptor] */

undefined * FUN_105c6a2b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97580,
                        &PTR____CFConstantStringClassReference_110e25a18,&PTR_DAT_1131259f8,
                        &PTR_DAT_113125a10,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c21f0 = puVar1;
  }
  return puRam00000001136c21f0;
}



/* Entry: 105c6a330; end: 105c6a3a3; -[SCSearchHistoryServices initWithHistoryManager:] */

undefined1 * FUN_105c6a330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec9e8;
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



/* Entry: 105c6a3a4; end: 105c6a3ab; -[SCSearchHistoryServices historyManager] */

undefined8 FUN_105c6a3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c6a3ac; end: 105c6a3b7; -[SCSearchHistoryServices .cxx_destruct] */

void FUN_105c6a3ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c6a3b8; end: 105c6a483; -[SCBackgroundMediaLinkUpdaterProcessor initWithSocialSmsSender:boltUploader:grapheneLogger:] */

undefined1 *
FUN_105c6a3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ec9f0;
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



/* Entry: 105c6a484; end: 105c6a6c3; -[SCBackgroundMediaLinkUpdaterProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined *
FUN_105c6a484(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_4);
  _objc_alloc();
  puStack_70 = (undefined *)0x0;
  func_0x00010bfeea60();
  _objc_release(param_4);
  puVar5 = puStack_70;
  _objc_retain(puStack_70);
  if (puVar5 == (undefined *)0x0) {
    func_0x00010c1ec620(puVar1);
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c37c0;
    _objc_opt_class(PTR_PTR_1126c37c0);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar3 == (undefined *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e25a38;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)0x0;
      param_5 = puVar2;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      (**(code **)(param_6 + 0x10))(param_6,2,puVar4);
      _objc_release(puVar4);
    }
    else {
      puVar4 = puVar2;
      func_0x00010c0c8ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099720();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      ppuVar7 = (undefined **)puVar2;
      param_5 = param_6;
      func_0x00010bedb580(param_1);
      param_1 = puVar4;
    }
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  else {
    puVar6 = puVar5;
    (**(code **)(param_6 + 0x10))(param_6,2,puVar5);
  }
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(ppuVar7);
  _objc_retain(param_5);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105c6a858;
  puStack_e0 = &UNK_1108e10a8;
  puVar1 = puVar6;
  puStack_d8 = param_6;
  func_0x000100504554(puVar6,&puStack_f8);
  _objc_initWeak(auStack_100,param_6);
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_108,auStack_100);
  _objc_retain(ppuVar7);
  func_0x00010c297260(puVar5);
  _objc_release(puVar5);
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_108);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  return puVar6;
}



/* Entry: 105c6a6c4; end: 105c6a857; -[SCBackgroundMediaLinkUpdaterProcessor _updateMediaInBackgroundWithMemoriesMissingMedia:linkId:completionCallback:] */

void FUN_105c6a6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105c6a858;
  puStack_70 = &UNK_1108e10a8;
  uVar1 = param_3;
  uStack_68 = param_1;
  func_0x000100504554(param_3,&puStack_88);
  _objc_initWeak(auStack_90,param_1);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_4);
  func_0x00010c297260(puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c6a858; end: 105c6a8e7;  */

void FUN_105c6a858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf9e240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0cec40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c28e300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c6a8e8; end: 105c6aaf7;  */

void FUN_105c6a8e8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined **unaff_x24;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = param_2;
  func_0x00010bf529e0();
  if ((param_3 == 0) && (lVar3 != 0)) {
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar4 == 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e25a58;
      unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = 2;
      (**(code **)(lVar2 + 0x10))(lVar2,2,puVar1);
      _objc_release(puVar1);
      _objc_release(unaff_x24);
      _objc_release(uVar6);
    }
    else {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105c6aaf8;
      puStack_80 = &UNK_110859888;
      unaff_x24 = &puStack_98;
      lVar3 = param_1 + 0x38;
      _objc_copyWeak(auStack_70);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar6);
      uStack_78 = uVar6;
      func_0x00010bedb840(lVar4);
      _objc_release(uStack_78);
      _objc_destroyWeak(auStack_70);
    }
    _objc_release(lVar4);
  }
  else {
    lVar3 = 1;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1,param_3);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  __Unwind_Resume();
  _objc_retain(lVar3);
  lVar4 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar4);
  if (lVar3 == 0) {
    func_0x00010be55e40();
    _objc_release(lVar4);
    lVar2 = *(long *)(param_2 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    lVar4 = 0;
  }
  else {
    func_0x00010be55e00();
    _objc_release(lVar4);
    lVar2 = *(long *)(param_2 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
    lVar4 = lVar3;
  }
  (*pcVar5)(lVar2,lVar3 != 0,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105c6aaf8; end: 105c6ab7b;  */

void FUN_105c6aaf8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  if (param_2 == 0) {
    func_0x00010be55e40();
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = 0;
  }
  else {
    func_0x00010be55e00();
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = param_2;
  }
  (*pcVar3)(lVar1,param_2 != 0,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c6ab7c; end: 105c6adfb; -[SCBackgroundMediaLinkUpdaterProcessor uploadMissingMediaToBolt:missingSnapInfo:] */

void FUN_105c6ab7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105c6adfc;
  puStack_80 = &UNK_1108e10d8;
  lStack_78 = param_1;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  ppuVar2 = &puStack_98;
  uStack_68 = param_4;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar4 = param_4;
  func_0x00010c0b6b40();
  puVar5 = puVar1;
  if (((int)uVar4 == 0) || (uVar4 = param_4, func_0x00010c26dec0(), (int)uVar4 == 0)) {
    uVar4 = param_4;
    func_0x00010c0b6b40();
    if ((int)uVar4 != 0) {
      func_0x00010c28e260(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      func_0x00010c297280(puVar5);
      goto LAB_105c6ad10;
    }
    uVar4 = param_4;
    func_0x00010c26dec0();
    if ((int)uVar4 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2,puVar3,0,0,0);
      goto LAB_105c6ad6c;
    }
    _objc_retain(puVar3);
    func_0x00010bfc0420(puVar1);
    puVar5 = puVar3;
  }
  else {
    func_0x00010c28e2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010c297280(puVar5);
LAB_105c6ad10:
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
LAB_105c6ad6c:
  puVar5 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105c6adfc; end: 105c6b07f;  */

void FUN_105c6adfc(long param_1,long param_2,long param_3,long param_4,undefined *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 != (undefined *)0x0) {
    func_0x00010bf43ca0(param_2);
    goto LAB_105c6af90;
  }
  lVar1 = param_4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar3 != 0) goto LAB_105c6aec0;
    puVar5 = *(undefined **)(param_1 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar7;
    func_0x00010bf43ca0(param_2);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    _objc_release(lVar1);
LAB_105c6aec0:
    puVar5 = PTR_PTR_1126bd290;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010beec820(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    FUN_105c742d0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_105c741d8(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c052000();
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126c37c8;
    _objc_alloc();
    func_0x00010bfec9e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c029780();
    param_5 = puVar7;
    func_0x00010bf43d60(param_2);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
LAB_105c6af90:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  lVar9 = *(long *)(param_2 + 0x28);
  _objc_retain(param_5);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010c154b60(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bfb0d80(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  (**(code **)(lVar9 + 0x10))(lVar9,uVar4,lVar1,lVar2,param_5);
  _objc_release(param_5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c6b080; end: 105c6b123;  */

void FUN_105c6b080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c154b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,uVar3,uVar4,param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105c6b124; end: 105c6b15b;  */

void FUN_105c6b124(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105c6b13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,param_2,param_3);
  return;
}



/* Entry: 105c6b15c; end: 105c6b25f; -[SCBackgroundMediaLinkUpdaterProcessor _updateMemoryLinkWithLinkId:mediaUpdatesArray:completion:] */

void FUN_105c6b15c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c37d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c026260();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c6b260;
  puStack_50 = &UNK_110859a38;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010c28a220(uVar2,param_2,puVar1,&puStack_68);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c6b260; end: 105c6b273;  */

void FUN_105c6b260(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c6b26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c6b274; end: 105c6b27f; -[SCBackgroundMediaLinkUpdaterProcessor _logMemoriesUpdateLinkSucceededGraphene] */

void FUN_105c6b274(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e1f48,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c6b280; end: 105c6b28b; -[SCBackgroundMediaLinkUpdaterProcessor _logMemoriesUpdateLinkFailedGraphene] */

void FUN_105c6b280(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e1f98,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c6b28c; end: 105c6b2c7; -[SCBackgroundMediaLinkUpdaterProcessor .cxx_destruct] */

void FUN_105c6b28c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c6b2c8; end: 105c6b60f; -[SCExternalMediaLinkSendingServiceImpl initWithSocialSmsSender:socialLinkCreator:offPlatformLinkGenerationService:notificationPool:boltUploader:performerProvider:circumstanceEngine:phoneNumberProvider:inviteService:grapheneLogger:mediaLinkCreator:mediaLinkUpdater:] */

undefined8 *
FUN_105c6b2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  puStack_70 = PTR_PTR_1126ec9f8;
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
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 105c6b610; end: 105c6b657;  */

void FUN_105c6b610(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c6b658; end: 105c6b847; -[SCExternalMediaLinkSendingServiceImpl sendMemoriesLinkWithPhoneNumbers:externalLinkSendingMedia:] */

void FUN_105c6b658(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bebac60(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28e260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x105c6b784;
    puStack_60 = &UNK_1108e1138;
    lStack_58 = param_1;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = param_4;
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3,param_2,&puStack_78,uVar2);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c6b848; end: 105c6bd17; -[SCExternalMediaLinkSendingServiceImpl createMemoriesLinkWithMediaContent:shareSource:isEditedMemory:] */

void FUN_105c6b848(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_2);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105c6bd18;
  puStack_98 = &UNK_1108e1168;
  _objc_copyWeak(auStack_90,auStack_80);
  ppuVar2 = &puStack_b0;
  uStack_88 = param_5;
  _objc_retainBlock();
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105c6be28;
  puStack_e0 = &UNK_1108e11f8;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_4);
  ppuVar3 = &puStack_f8;
  lStack_d8 = param_4;
  lStack_d0 = param_2;
  uStack_c8 = uVar1;
  uStack_b8 = param_5;
  _objc_retainBlock();
  _CACurrentMediaTime();
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010be55d40(param_2);
  lVar5 = param_4;
  func_0x00010c241420();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  puVar7 = puVar4;
  if (lVar6 == 0) {
    (*(code *)ppuVar3[2])(param_1,ppuVar3,puVar4);
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = param_4;
    func_0x00010c241420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010be55da0(param_2);
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010c241420();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    if ((param_6 == 0) || (lVar6 != 1)) {
      _objc_release(lVar5);
    }
    else {
      lVar6 = *(long *)(param_2 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        func_0x00010be37de0(param_1,param_2);
        func_0x00010bfbc3e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105c6bc58;
      }
    }
    puVar8 = PTR_PTR_1126c37d8;
    _objc_alloc();
    lVar5 = param_4;
    func_0x00010c241420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047fa0();
    _objc_release(lVar5);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    _objc_retain();
    uVar16 = *(undefined8 *)(param_2 + 0x60);
    _objc_retain(uVar16);
    puVar10 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf17b60();
    _objc_release(puVar10);
    uVar12 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf570c0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    func_0x00010be55ca0(param_2);
    puStack_110 = puVar11;
    _objc_copyWeak(auStack_118,auStack_80);
    uStack_108 = param_5;
    uStack_100 = param_1;
    _objc_retain(puVar4);
    _objc_retain(param_4);
    uVar15 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar14);
    _objc_release(uVar15);
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_118);
    _objc_release(uVar14);
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(puVar8);
  }
LAB_105c6bc58:
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(lStack_d8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105c6bd18; end: 105c6bf6f;  */

void FUN_105c6bd18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010be55c40(param_1);
  func_0x00010be55d20(param_1,param_2);
  func_0x00010be55ce0(param_2);
  func_0x00010be55d60(param_2);
  func_0x00010bf43d60(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c6bf70; end: 105c6c1e3;  */

void FUN_105c6bf70(long param_1,undefined **param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  _objc_retain(param_3);
  if (param_2 == (undefined **)0x0) {
    func_0x00010be55d20(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20));
    func_0x00010be55d00(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    param_2 = (undefined **)PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = *(undefined ***)(param_1 + 0x50);
    func_0x00010bf941e0();
  }
  else {
    ppuVar3 = &PTR___NSConcreteGlobalBlock_1108e1908;
    func_0x000100504554();
    ppuVar4 = param_2;
    func_0x00010bf529e0();
    puVar1 = *(undefined **)(param_1 + 0x20);
    if (ppuVar4 == (undefined **)0x0) {
      func_0x00010be55d20(*(undefined8 *)(param_1 + 0x48));
      func_0x00010be55d00(*(undefined8 *)(param_1 + 0x20));
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_opt_class(uVar6);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e25ad8;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar5);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(uVar6);
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = *(undefined ***)(param_1 + 0x50);
      func_0x00010bf941e0();
    }
    else {
      func_0x00010bdf0000();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105c6c1e4;
      puStack_98 = &UNK_1108e1198;
      uStack_80 = *(undefined8 *)(param_1 + 0x40);
      uStack_78 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(*(undefined8 *)(param_1 + 0x28));
      uStack_70 = *(undefined8 *)(param_1 + 0x50);
      ppuVar4 = &puStack_b0;
      uStack_90 = uVar5;
      uStack_88 = uVar6;
      func_0x00010c297260(puVar1);
      _objc_release(uStack_88);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar4);
  if (ppuVar3 == (undefined **)0x0) {
    func_0x00010be55d20(*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20));
    func_0x00010be55d00(*(undefined8 *)(param_3 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x28));
  }
  else {
    func_0x00010be55d20(*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20));
    func_0x00010be55d60(*(undefined8 *)(param_3 + 0x20));
    func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x28));
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 105c6c1e4; end: 105c6c2a7;  */

void FUN_105c6c1e4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    func_0x00010be55d20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    func_0x00010be55d00(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010be55d20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    func_0x00010be55d60(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c6c2a8; end: 105c6c75b;  */

void FUN_105c6c2a8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010be55c80(lVar2);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be55c40(*(undefined8 *)(param_1 + 0x68));
    _objc_release(lVar2);
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be55c60();
    _objc_release(lVar2);
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be55c20();
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
              (*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x20));
    goto LAB_105c6c6d4;
  }
  func_0x00010be55c80(lVar2);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be55cc0();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfc0020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar2 = param_2;
  func_0x00010c0c5560(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  FUN_105c6c75c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c099720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c37e0;
  _objc_alloc();
  func_0x00010c027c40();
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar6);
  lVar9 = param_2;
  func_0x00010c0cec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 == 0) {
LAB_105c6c69c:
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
              (*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x20),puVar1);
  }
  else {
    lVar9 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar9);
    lVar7 = param_2;
    func_0x00010c0cec60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010be55d80(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar9);
    lVar9 = param_2;
    func_0x00010c0cec60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010bf529e0();
    _objc_release(lVar9);
    if (lVar7 == 0) goto LAB_105c6c69c;
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf17b60();
    _objc_release(puVar6);
    _CACurrentMediaTime();
    lVar9 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) {
      lVar9 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar9);
      func_0x00010be55c40(*(undefined8 *)(param_1 + 0x68));
      _objc_release(lVar9);
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
                (*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2;
      func_0x00010c0cec60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = puVar8;
      _objc_copyWeak(auStack_98,param_1 + 0x50);
      uStack_88 = *(undefined8 *)(param_1 + 0x60);
      uStack_80 = *(undefined8 *)(param_1 + 0x68);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar10);
      uStack_78 = uVar11;
      func_0x00010c287920(uVar3);
      _objc_release(lVar9);
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_98);
    }
  }
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(uVar4);
LAB_105c6c6d4:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105c6c75c; end: 105c6c947;  */

void FUN_105c6c75c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c04e820();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = puVar1;
  func_0x00010c11d4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  _objc_alloc();
  func_0x00010c02dc20();
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dc20();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  func_0x00010c1e6460(puVar1);
  puVar2 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar3);
  puVar3 = puVar1 + 0x40;
  _objc_loadWeakRetained(puVar3);
  if (lVar8 != 0) {
    func_0x00010be55c40(*(undefined8 *)(puVar1 + 0x58),puVar3);
    _objc_release(puVar3);
    puVar3 = puVar1 + 0x40;
    _objc_loadWeakRetained(puVar3);
    func_0x00010be55c20();
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000105c6c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + 0x30) + 0x10))
              (*(undefined8 *)(puVar1 + 0x58),*(long *)(puVar1 + 0x30),
               *(undefined8 *)(puVar1 + 0x20));
    return;
  }
  func_0x00010be55e20(*(undefined8 *)(puVar1 + 0x60),puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000105c6ca20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x38) + 0x10))
            (*(undefined8 *)(puVar1 + 0x58),*(long *)(puVar1 + 0x38),*(undefined8 *)(puVar1 + 0x20),
             *(undefined8 *)(puVar1 + 0x28));
  return;
}



/* Entry: 105c6c948; end: 105c6ca23;  */

void FUN_105c6c948(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  if (param_2 != 0) {
    func_0x00010be55c40(*(undefined8 *)(param_1 + 0x58),lVar2);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be55c20();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000105c6c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  func_0x00010be55e20(*(undefined8 *)(param_1 + 0x60),lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000105c6ca20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c6ca24; end: 105c6d013; -[SCExternalMediaLinkSendingServiceImpl _improvedUploadFlowForEditedMemoriesWithMediaContent:promise:startTime:shareSource:backendPromiseCompletion:] */

void FUN_105c6ca24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_2);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105c6d014;
  puStack_a0 = &UNK_1108e1288;
  _objc_copyWeak(auStack_90,auStack_80);
  ppuVar3 = &puStack_b8;
  uStack_98 = uVar1;
  uStack_88 = param_6;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126c37d8;
  _objc_alloc();
  uVar5 = param_4;
  func_0x00010c241420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047fa0();
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain();
  lVar7 = param_2;
  func_0x00010be55ca0();
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_105c6d26c;
  uStack_c8 = 0x105c6d27c;
  uStack_c0 = 0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_105c6d26c;
  uStack_f8 = 0x105c6d27c;
  uStack_f0 = 0;
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x3032000000;
  pcStack_130 = FUN_105c6d26c;
  uStack_128 = 0x105c6d27c;
  uStack_120 = 0;
  puStack_170 = &uStack_178;
  uStack_178 = 0;
  uStack_168 = 0x3032000000;
  pcStack_160 = FUN_105c6d26c;
  uStack_158 = 0x105c6d27c;
  uStack_150 = 0;
  puStack_1a0 = &uStack_1a8;
  uStack_1a8 = 0;
  uStack_198 = 0x3032000000;
  pcStack_190 = FUN_105c6d26c;
  uStack_188 = 0x105c6d27c;
  uStack_180 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar8 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf17b60();
  _objc_release(puVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf570c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_105c6d284;
  puStack_1e8 = &UNK_1108e12b8;
  puStack_1d8 = &uStack_e8;
  puStack_1d0 = &uStack_118;
  puStack_1c0 = puVar9;
  _objc_copyWeak(auStack_1c8,auStack_80);
  uStack_1b8 = param_6;
  uStack_1b0 = param_1;
  _objc_retain(lVar7);
  lStack_1e0 = lVar7;
  func_0x00010c297260(uVar12);
  _dispatch_group_enter(lVar7);
  puVar8 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf17b60();
  _objc_release(puVar8);
  uVar5 = param_4;
  func_0x00010c08d600(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x105c6d398;
  puStack_230 = &UNK_1108e12e8;
  puStack_220 = &uStack_148;
  puStack_218 = &uStack_178;
  puStack_210 = &uStack_1a8;
  puStack_208 = puVar9;
  _objc_retain(lVar7);
  lStack_228 = lVar7;
  func_0x00010c279bc0(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d0 = 0xc2000000;
  pcStack_2c8 = FUN_105c6d48c;
  puStack_2c0 = &UNK_1108e1348;
  puStack_288 = &uStack_118;
  puStack_280 = &uStack_1a8;
  puStack_278 = &uStack_178;
  puStack_270 = &uStack_e8;
  puStack_268 = &uStack_148;
  uStack_2b8 = uVar6;
  uStack_2b0 = uVar2;
  uStack_258 = param_6;
  _objc_copyWeak(auStack_260,auStack_80);
  uStack_2a8 = param_5;
  uStack_2a0 = param_4;
  ppuStack_298 = ppuVar3;
  uStack_290 = param_7;
  uStack_250 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x000100bc0718(lVar7,uVar5,&puStack_2d8);
  _objc_release(uVar5);
  _objc_release(uStack_2a0);
  _objc_release(uStack_290);
  _objc_release(uStack_2a8);
  _objc_destroyWeak(auStack_260);
  _objc_release(lStack_228);
  _objc_release(lStack_1e0);
  _objc_destroyWeak(auStack_1c8);
  _objc_release(uVar12);
  _objc_release(lVar7);
  __Block_object_dispose(&uStack_1a8,8);
  _objc_release(uStack_180);
  __Block_object_dispose(&uStack_178,8);
  _objc_release(uStack_150);
  __Block_object_dispose(&uStack_148,8);
  _objc_release(uStack_120);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c6d014; end: 105c6d1a7;  */

void FUN_105c6d014(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_4);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  lVar3 = param_2 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bdf0000(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105c6d1a8;
  puStack_a0 = &UNK_1108e1198;
  uStack_88 = *(undefined8 *)(param_2 + 0x30);
  lStack_98 = lVar3;
  lStack_90 = param_3;
  uStack_80 = param_1;
  puStack_78 = puVar2;
  _objc_retain(param_3);
  ppuVar6 = &puStack_b8;
  func_0x00010c297260(lVar4);
  _objc_release(lStack_90);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(ppuVar6);
  if (lVar5 == 0) {
    func_0x00010be55d20(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x20));
    func_0x00010be55d00(*(undefined8 *)(lVar3 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(lVar3 + 0x28));
  }
  else {
    func_0x00010be55d20(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x20));
    func_0x00010be55d60(*(undefined8 *)(lVar3 + 0x20));
    func_0x00010bf43d60(*(undefined8 *)(lVar3 + 0x28));
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105c6d1a8; end: 105c6d26b;  */

void FUN_105c6d1a8(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    func_0x00010be55d20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    func_0x00010be55d00(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010be55d20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    func_0x00010be55d60(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c6d26c; end: 105c6d283;  */

void FUN_105c6d26c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c6d284; end: 105c6d48b;  */

void FUN_105c6d284(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be55c80(*(undefined8 *)(param_1 + 0x50));
  _objc_release(lVar3);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  if (param_2 == 0 || param_3 != 0) {
    func_0x00010be55c60();
  }
  else {
    func_0x00010be55cc0();
  }
  _objc_release(lVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c6d48c; end: 105c6d8ab;  */

void FUN_105c6d48c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28) == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28);
    if (((lVar8 == 0) && (*(long *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28) != 0)) &&
       (*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28) != 0)) {
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b60();
      _objc_release(puVar1);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfc0020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
      func_0x00010c0c5560(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      FUN_105c6c75c();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar4);
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
      func_0x00010c099720();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126c37e0;
      _objc_alloc();
      func_0x00010c027c40();
      puVar6 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf941e0();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf17b60();
      _objc_release(puVar6);
      _CACurrentMediaTime();
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      puStack_98 = puVar7;
      _objc_copyWeak(auStack_a0,param_2 + 0x78);
      uStack_90 = *(undefined8 *)(param_2 + 0x80);
      uStack_88 = *(undefined8 *)(param_2 + 0x88);
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      _objc_retain(uVar9);
      uVar10 = *(undefined8 *)(param_2 + 0x48);
      uStack_80 = param_1;
      _objc_retain(uVar10);
      uVar11 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(uVar11);
      func_0x00010c287ae0(uVar4);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_a0);
      _objc_release(puVar1);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar3);
      return;
    }
    if (*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28) != 0) goto LAB_105c6d534;
  }
  lVar8 = param_2 + 0x78;
  _objc_loadWeakRetained(lVar8);
  func_0x00010be55c40(*(undefined8 *)(param_2 + 0x88));
  _objc_release(lVar8);
  lVar8 = param_2 + 0x78;
  _objc_loadWeakRetained(lVar8);
  func_0x00010be55c20();
  _objc_release(lVar8);
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28);
LAB_105c6d534:
  if (lVar8 == 0) {
    if (*(long *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c6d5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_2 + 0x40) + 0x10))
                (*(undefined8 *)(param_2 + 0x88),*(long *)(param_2 + 0x40),
                 *(undefined8 *)(param_2 + 0x30));
      return;
    }
  }
  lVar8 = param_2 + 0x78;
  _objc_loadWeakRetained(lVar8);
  func_0x00010be55d20(*(undefined8 *)(param_2 + 0x88));
  _objc_release(lVar8);
  lVar8 = param_2 + 0x78;
  _objc_loadWeakRetained(lVar8);
  func_0x00010be55d00();
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x30),PTR_s_completeWithError__1125ae8d0,
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28));
  return;
}



/* Entry: 105c6d8ac; end: 105c6d9eb;  */

void FUN_105c6d8ac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  lVar3 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar3);
  if (param_2 != 0) {
    func_0x00010be55c40(*(undefined8 *)(param_1 + 0x80),lVar3);
    _objc_release(lVar3);
    lVar3 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be55c20();
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000105c6d95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
              (*(undefined8 *)(param_1 + 0x80),*(long *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28));
    return;
  }
  func_0x00010be55e20(*(undefined8 *)(param_1 + 0x88),lVar3);
  _objc_release(lVar3);
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
            (*(undefined8 *)(param_1 + 0x80),*(long *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08d600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28);
  func_0x00010c0cec60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287900(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105c6d9ec; end: 105c6dc2f;  */

void FUN_105c6d9ec(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 105c6dc30; end: 105c6dd5b; -[SCExternalMediaLinkSendingServiceImpl deleteMemoryLinkId:completion:] */

void FUN_105c6dc30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  func_0x00010be55480(param_2);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_5);
  func_0x00010bf6c9a0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105c6dd5c; end: 105c6dddb;  */

void FUN_105c6dd5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be55440(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be55460();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c6dddc; end: 105c6e06b; -[SCExternalMediaLinkSendingServiceImpl _createMemoriesLinkWithExternalLinkSendingMedia:] */

void FUN_105c6dddc(undefined *param_1,undefined **param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar4 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e25b78;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126ae4e8;
    puVar5 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar5);
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar4);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105c6e06c;
    puStack_88 = &UNK_1108e13d8;
    param_2 = &puStack_a0;
    puVar3 = param_3;
    puStack_80 = puVar5;
    func_0x000100504554(param_3);
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(puVar2);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    param_1 = puVar2;
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar5 = *(undefined **)(param_3 + 0x20);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c28e2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    puVar4 = puVar3;
    func_0x00010c0b8600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_2);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c6e06c; end: 105c6e13f;  */

void FUN_105c6e06c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28e2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c6e140; end: 105c6e24b;  */

void FUN_105c6e140(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bd290;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c154b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar4;
  func_0x00010beec820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_105c742d0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c741d8(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c052000(puVar1);
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



/* Entry: 105c6e24c; end: 105c6e3b7;  */

void FUN_105c6e24c(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  if (param_3 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010bf529e0();
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar1 != (undefined *)0x0) {
      param_4 = *(undefined8 *)(param_1 + 0x28);
      puVar1 = param_2;
      func_0x00010bdf0020(*(undefined8 *)(param_1 + 0x20));
      goto LAB_105c6e2ec;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar7);
  }
  puVar1 = param_3;
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
LAB_105c6e2ec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bfc0020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar3);
  lVar11 = param_6;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  puVar4 = PTR_PTR_1126bd290;
  _objc_alloc();
  func_0x00010c052000();
  puVar5 = PTR_PTR_1126bd258;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051dc0();
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar1 = PTR_PTR_1126bd190;
  _objc_alloc();
  puVar6 = puVar2;
  func_0x00010bf51e00();
  func_0x00010c035ba0();
  _objc_release(param_4);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cb20();
  _objc_release(uVar7);
  uVar7 = 1;
  uVar3 = 0;
  func_0x00010bebac40(param_2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain(uVar3);
  uVar8 = *(undefined8 *)(param_6 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfc0020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar1 = PTR_PTR_1126bd258;
  _objc_alloc(PTR_PTR_1126bd258);
  uVar8 = uVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051dc0(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126c37e8;
  _objc_alloc(PTR_PTR_1126c37e8);
  func_0x00010c029880();
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf17b60();
  _objc_release(puVar4);
  uVar10 = *(undefined8 *)(param_6 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c15cb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_initWeak(auStack_128,param_6);
  puStack_130 = puVar5;
  _objc_copyWeak(auStack_138,auStack_128);
  _objc_retain(uVar3);
  _objc_retain(uVar9);
  func_0x00010c297260(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_128);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar7);
  return;
}



/* Entry: 105c6e3b8; end: 105c6e5eb; -[SCExternalMediaLinkSendingServiceImpl _sendMemoriesLinkRequestWithMemoriesURL:phoneNumberStrings:isImage:lensId:] */

void FUN_105c6e3b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bfc0020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar2);
  lVar3 = param_6;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  puVar4 = PTR_PTR_1126bd290;
  _objc_alloc();
  func_0x00010c052000();
  puVar5 = PTR_PTR_1126bd258;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051dc0();
  _objc_release(param_3);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126bd190;
  _objc_alloc();
  puVar7 = puVar1;
  func_0x00010bf51e00();
  func_0x00010c035ba0();
  _objc_release(param_4);
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cb20();
  _objc_release(uVar8);
  uVar8 = 1;
  uVar2 = 0;
  func_0x00010bebac40(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar8);
  _objc_retain(uVar2);
  uVar9 = *(undefined8 *)(param_6 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfc0020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126bd258;
  _objc_alloc(PTR_PTR_1126bd258);
  uVar9 = uVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051dc0(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126c37e8;
  _objc_alloc(PTR_PTR_1126c37e8);
  func_0x00010c029880();
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf17b60();
  _objc_release(puVar5);
  uVar11 = *(undefined8 *)(param_6 + 0x10);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010c15cb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_initWeak(auStack_c8,param_6);
  puStack_d0 = puVar6;
  _objc_copyWeak(auStack_d8,auStack_c8);
  _objc_retain(uVar2);
  _objc_retain(uVar10);
  func_0x00010c297260(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar8);
  return;
}



/* Entry: 105c6e5ec; end: 105c6e82f; -[SCExternalMediaLinkSendingServiceImpl _createMemoriesLinkWithSocialLinks:responsePromise:] */

void FUN_105c6e5ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc0020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bd258;
  _objc_alloc(PTR_PTR_1126bd258);
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051dc0(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c37e8;
  _objc_alloc(PTR_PTR_1126c37e8);
  func_0x00010c029880();
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf17b60();
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c15cb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_initWeak(auStack_68,param_1);
  puStack_70 = puVar6;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c6e830; end: 105c6e8c7;  */

void FUN_105c6e830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be309a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c6e8c8; end: 105c6eb5b; -[SCExternalMediaLinkSendingServiceImpl _handleSocialLinkCreateResponse:error:responsePromise:shareId:] */

void FUN_105c6e8c8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *unaff_x24;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == (undefined *)0x0) {
    puVar6 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      FUN_105c6c75c();
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010bf17b60();
      _objc_release(puVar6);
      unaff_x24 = *(undefined **)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105c6eb5c;
      puStack_98 = &UNK_1108e1438;
      puStack_90 = param_4;
      puStack_70 = puVar4;
      _objc_retain(param_3);
      puStack_88 = param_3;
      _objc_retain(param_5);
      uStack_80 = param_5;
      lStack_78 = param_1;
      _objc_retain(param_4);
      puVar6 = param_4;
      func_0x00010bf56aa0(unaff_x24);
      _objc_release(unaff_x24);
      _objc_release(uStack_80);
      _objc_release(puStack_88);
      _objc_release(puStack_90);
      goto LAB_105c6ea74;
    }
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e25bf8;
    unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    _objc_release(param_1);
  }
  puVar6 = param_4;
  func_0x00010bf43ca0(param_5);
LAB_105c6ea74:
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ae4e8;
  pcStack_b8 = FUN_105c6eb5c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = unaff_x24;
  lStack_e8 = param_1;
  puStack_e0 = param_4;
  uStack_d8 = param_6;
  uStack_d0 = param_5;
  puStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar7 = *(long *)(puVar4 + 0x20);
  puVar1 = puVar6;
  func_0x00010beec820(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar2 = *(undefined8 *)(puVar4 + 0x28);
  func_0x00010c099720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar7);
  _objc_retain(puVar1);
  lVar3 = lVar7;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c37e0;
    _objc_alloc();
    func_0x00010c027c40();
  }
  _objc_release(puVar1);
  _objc_release(lVar7);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar2 = *(undefined8 *)(puVar4 + 0x30);
  if (puVar6 == (undefined *)0x0) {
    puVar4 = *(undefined **)(puVar4 + 0x38);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110e25c38;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bf43d60(uVar2);
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105c6ed4c;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  puStack_130 = puVar6;
  puStack_128 = puVar4;
  ppuStack_120 = &puStack_c0;
  _objc_retain(uVar2);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_105c6edd0;
  puStack_140 = &UNK_110842e18;
  uStack_138 = uVar2;
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_158);
  _objc_release(uStack_138);
  _objc_release(uVar2);
  return;
}



/* Entry: 105c6eb5c; end: 105c6ed4b;  */

void FUN_105c6eb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar5 = PTR_PTR_1126ae4e8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar5);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar6 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c099720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar7);
  _objc_retain(uVar6);
  lVar2 = lVar7;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c37e0;
    _objc_alloc();
    func_0x00010c027c40();
  }
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (puVar5 == (undefined *)0x0) {
    param_1 = *(long *)(param_1 + 0x38);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e25c38;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  else {
    func_0x00010bf43d60(uVar6);
  }
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_105c6ed4c;
  uVar6 = *(undefined8 *)(puVar4 + 0x20);
  puStack_80 = puVar5;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c6edd0;
  puStack_90 = &UNK_110842e18;
  uStack_88 = uVar6;
  _objc_retain(uVar6);
  func_0x0001000d76cc("APPSTORE",&puStack_a8);
  _objc_release(uStack_88);
  _objc_release(uVar6);
  return;
}



/* Entry: 105c6ed4c; end: 105c6edcf; -[SCExternalMediaLinkSendingServiceImpl _showSendInitiatedNotification] */

void FUN_105c6ed4c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c6edd0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c6edd0; end: 105c6ee57;  */

void FUN_105c6edd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = uVar1;
  FUN_105c74438();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c6ee58; end: 105c6ef8f; -[SCExternalMediaLinkSendingServiceImpl _showSendCompletedNotification:isForFriendInvite:] */

void FUN_105c6ee58(undefined **param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = param_1;
  if (param_3 == 0) {
    func_0x000105c74468();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_4 & 1) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbbb98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000105c74450();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  puVar3 = param_1[4];
  _objc_retain(puVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c6ef90;
  puStack_48 = &UNK_110841f80;
  puStack_40 = puVar3;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puStack_40);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105c6ef90; end: 105c6efcb;  */

void FUN_105c6ef90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c6efcc; end: 105c6f027; -[SCExternalMediaLinkSendingServiceImpl _createPerformerWithPerformerProvider:] */

void FUN_105c6efcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c6f028; end: 105c6f06b; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateStartWithShareSource:] */

void FUN_105c6f028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c74bac(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f06c; end: 105c6f0af; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestSentWithShareSource:] */

void FUN_105c6f06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c74d20(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f0b0; end: 105c6f0f3; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestSuccessWithShareSource:] */

void FUN_105c6f0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c74e94(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f0f4; end: 105c6f137; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestFailureWithShareSource:] */

void FUN_105c6f0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c75008(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f138; end: 105c6f19b; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestLatencyWithShareSource:startTime:didSucceed:] */

void FUN_105c6f138(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  dVar2 = param_1;
  func_0x000108f94dd8(param_4);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  FUN_105c75364(dVar2 - param_1,uVar1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c6f19c; end: 105c6f1df; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateSuccessWithShareSource:] */

void FUN_105c6f19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c753e0(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f1e0; end: 105c6f223; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateFailureWithShareSource:] */

void FUN_105c6f1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c75554(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f224; end: 105c6f287; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateLatencyWithShareSource:startTime:didSucceed:] */

void FUN_105c6f224(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  dVar2 = param_1;
  func_0x000108f94dd8(param_4);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  FUN_105c758b0(dVar2 - param_1,uVar1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c6f288; end: 105c6f2cb; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateSuccessWithShareSource:] */

void FUN_105c6f288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c7592c(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f2cc; end: 105c6f30f; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateFailureWithShareSource:] */

void FUN_105c6f2cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c75aa0(uVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c6f310; end: 105c6f373; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateLatencyWithShareSource:startTime:didSucceed:] */

void FUN_105c6f310(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  dVar2 = param_1;
  func_0x000108f94dd8(param_4);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  FUN_105c75dfc(dVar2 - param_1,uVar1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c6f374; end: 105c6f3c3; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkSnapCount:shareSource:] */

void FUN_105c6f374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108f94dd8(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_105c75e78(uVar1,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c6f3c4; end: 105c6f3cf; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkMissingSnapCount:] */

void FUN_105c6f3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x50) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e1ef8,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c6f3d0; end: 105c6f427; -[SCExternalMediaLinkSendingServiceImpl _logMemoriesUpdateLinkLatencyGraphene:] */

void FUN_105c6f3d0(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_2 + 0x50);
  dVar2 = param_1;
  _CACurrentMediaTime();
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_1108e1fe8,&uStack_40,(long)((dVar2 - param_1) * 1000.0))
      ;
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  return;
}



/* Entry: 105c6f428; end: 105c6f47f; -[SCExternalMediaLinkSendingServiceImpl _logLinkDeletionRequestLatencyWithStartTime:] */

void FUN_105c6f428(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_2 + 0x50);
  dVar2 = param_1;
  _CACurrentMediaTime();
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_1108e2128,&uStack_40,(long)((dVar2 - param_1) * 1000.0))
      ;
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  return;
}



/* Entry: 105c6f480; end: 105c6f48b; -[SCExternalMediaLinkSendingServiceImpl _logLinkDeletionRequestSent] */

void FUN_105c6f480(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x50) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108e2038,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c6f48c; end: 105c6f49f; -[SCExternalMediaLinkSendingServiceImpl _logLinkDeletionRequestOutcome:] */

void FUN_105c6f48c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (param_3 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_1108e2088,&uStack_40,1);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
    return;
  }
  if (lVar1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(lVar1 + 8) + 0x18))(*(long **)(lVar1 + 8),&UNK_1108e20d8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c6f4a0; end: 105c6f547; -[SCExternalMediaLinkSendingServiceImpl .cxx_destruct] */

void FUN_105c6f4a0(long param_1)

{
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



/* Entry: 105c6f548; end: 105c6f6ff; -[SCMediaLinkBoltUploaderImpl initWithBoltUploader:grapheneLogger:performerProvider:circumstanceEngine:] */

undefined8 *
FUN_105c6f548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eca00;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c6f700; end: 105c6f747;  */

void FUN_105c6f700(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c6f748; end: 105c6f807; -[SCMediaLinkBoltUploaderImpl uploadMediaToBolt:] */

void FUN_105c6f748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c6f808;
  puStack_40 = &UNK_1108b9668;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bee5ac0(param_1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c6f808; end: 105c6f81b;  */

void FUN_105c6f808(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 105c6f81c; end: 105c6fb77; -[SCMediaLinkBoltUploaderImpl uploadMediaWithThumbnailToBolt:] */

void FUN_105c6f81c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  
  uVar1 = param_4;
  _objc_retain();
  _CACurrentMediaTime();
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105c6fb78;
  uStack_80 = 0x105c6fb88;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105c6fb78;
  uStack_b0 = 0x105c6fb88;
  uStack_a8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_105c6fb78;
  uStack_e0 = 0x105c6fb88;
  uStack_d8 = 0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_105c6fb78;
  uStack_110 = 0x105c6fb88;
  uStack_108 = 0;
  puStack_f8 = &uStack_100;
  puStack_98 = &uStack_a0;
  _dispatch_group_create();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _dispatch_group_enter(uVar1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_105c6fb90;
  puStack_150 = &UNK_1108e1498;
  puStack_140 = &uStack_a0;
  puStack_138 = &uStack_100;
  _objc_retain(uVar1);
  uStack_148 = uVar1;
  func_0x00010bfc0420(param_2);
  _dispatch_group_enter(uVar1);
  puStack_1a0 = puVar6;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x105c6fc20;
  puStack_188 = &UNK_1108e1498;
  puStack_178 = &uStack_d0;
  puStack_170 = &uStack_130;
  _objc_retain(uVar1);
  uStack_180 = uVar1;
  func_0x00010bee5ac0(param_2);
  _objc_initWeak(auStack_1a8,param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar7);
  uVar3 = param_4;
  FUN_105c741d8();
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = puVar6;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x105c6fcb0;
  puStack_1f8 = &UNK_1108e14c8;
  _objc_copyWeak(auStack_1c0,auStack_1a8);
  puStack_1e0 = &uStack_a0;
  puStack_1d8 = &uStack_100;
  uStack_1b0 = (undefined1)uVar3;
  uStack_1b8 = param_1;
  _objc_retain(uVar7);
  puStack_1d0 = &uStack_d0;
  puStack_1c8 = &uStack_130;
  uStack_1f0 = uVar7;
  _objc_retain(puVar2);
  puStack_1e8 = puVar2;
  func_0x000100bc0718(uVar1,uVar5,&puStack_210);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar6 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_1e8);
  _objc_release(uStack_1f0);
  _objc_destroyWeak(auStack_1c0);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(uStack_180);
  _objc_release(uStack_148);
  _objc_release(puVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


