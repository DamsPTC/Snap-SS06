/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00590d30; end: 00590d37; -[AFNetworkActivityIndicatorManager activationDelayTimer] */

undefined8 FUN_00590d30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00590d38; end: 00590d67; -[AFNetworkActivityIndicatorManager setActivationDelayTimer:] */

void FUN_00590d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00590d68; end: 00590d6f; -[AFNetworkActivityIndicatorManager completionDelayTimer] */

undefined8 FUN_00590d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00590d70; end: 00590d9f; -[AFNetworkActivityIndicatorManager setCompletionDelayTimer:] */

void FUN_00590d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00590da0; end: 00590da7; -[AFNetworkActivityIndicatorManager networkActivityActionBlock] */

undefined8 FUN_00590da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00590da8; end: 00590daf; -[AFNetworkActivityIndicatorManager setNetworkActivityActionBlock:] */

void FUN_00590da8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 00590db0; end: 00590db7; -[AFNetworkActivityIndicatorManager currentState] */

undefined8 FUN_00590db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 00590db8; end: 00590df3; -[AFNetworkActivityIndicatorManager .cxx_destruct] */

void FUN_00590db8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x28,0);
  return;
}



/* Entry: 00590df4; end: 00590e93; -[SCBlizzardExtensionLogger _createEventConfigurerWithUsername:] */

void FUN_00590df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_00ac3118;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00786e80();
  _objc_release(param_3);
  puVar2 = PTR_PTR_00ac3120;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___SCTimeProvider_00ac2a80;
  _objc_opt_new(PTR__OBJC_CLASS___SCTimeProvider_00ac2a80);
  func_0x007854e0(puVar2,param_2,puVar1,puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00590e94; end: 00590f17; -[SCBlizzardExtensionLogger initWithUserId:username:] */

undefined8 FUN_00590e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_00590f18(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00786ec0(param_1,param_2,param_4,param_3,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 00590f18; end: 0059106f;  */

void FUN_00590f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  _objc_retain();
  func_0x007817e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x007928e0();
  func_0x00789c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00781e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar3;
  func_0x00791f80(puVar3,param_2,&PTR____CFConstantStringClassReference_00a23f60,
                  &PTR____CFConstantStringClassReference_00a212a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x0077bc60(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,
                  &PTR____CFConstantStringClassReference_00a2a9e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0077bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_00ac2ab0);
  puVar4 = puVar3;
  func_0x0077e1c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784ae0(puVar1,param_2,param_1,puVar4,0);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00591070; end: 005911b7; -[SCBlizzardExtensionLogger initWithUsername:userId:sharedFile:] */

undefined1 *
FUN_00591070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR__OBJC_CLASS___SCBlizzardExtensionLogger_00ac3f48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_4;
    func_0x00780e20();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    func_0x0077c520(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "blizzard_extension_logger.serial_queue";
    _dispatch_queue_create("blizzard_extension_logger.serial_queue",uVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(char **)((long)puVar1 + 0x28) = pcVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005911b8; end: 005911bb; -[SCBlizzardExtensionLogger logUserTrackedEvent:] */

void FUN_005911b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__logEvent__00aba168);
  return;
}



/* Entry: 005911bc; end: 005911bf; -[SCBlizzardExtensionLogger logUserNotTrackedEvent:] */

void FUN_005911bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__logEvent__00aba168);
  return;
}



/* Entry: 005911c0; end: 00591427; -[SCBlizzardExtensionLogger flush] */

void FUN_005911c0(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  _objc_alloc();
  func_0x00784aa0();
  _objc_release(uVar5);
  puVar2 = puVar1;
  func_0x007922e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lStack_38 = 0;
  puVar3 = puVar2;
  func_0x00783520();
  _objc_retainAutoreleasedReturnValue();
  if (lStack_38 == 0) {
    puVar4 = puVar3;
    func_0x00780e80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (section_000000b8.sectname + 0xf < puVar4) {
      return;
    }
  }
  else {
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x5912dc;
  puStack_48 = &UNK_009e3fc0;
  lStack_40 = param_1;
  _dispatch_async(*(undefined8 *)(param_1 + 0x28),&puStack_60);
  return;
}



/* Entry: 00591428; end: 005914b7; -[SCBlizzardExtensionLogger _logEvent:] */

void FUN_00591428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_005914b8;
  puStack_48 = &UNK_009e36d0;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _dispatch_async(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 005914b8; end: 005914ff;  */

void FUN_005914b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x007809c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00591500; end: 0059155f; -[SCBlizzardExtensionLogger .cxx_destruct] */

void FUN_00591500(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00591560; end: 00591603; -[SCExtensionEventConfigurer initWithEventFieldProvider:timeProvider:] */

undefined1 *
FUN_00591560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3f50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
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



/* Entry: 00591604; end: 0059176b; -[SCExtensionEventConfigurer configureAndSerializeEvent:] */

void FUN_00591604(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac3128;
  _objc_opt_class(PTR_PTR_00ac3128);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x0077f240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uVar4 = param_1;
      func_0x00782ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00793460();
      _objc_retainAutoreleasedReturnValue();
      func_0x007910c0(param_3);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(param_3);
  }
  puVar1 = PTR_PTR_00ac29b0;
  _objc_opt_class(PTR_PTR_00ac29b0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00792960(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x007812a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078de20(param_3);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  func_0x0077da80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0059176c; end: 005918b7; -[SCExtensionEventConfigurer _serializeEvent:] */

void FUN_0059176c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x0077f240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00785320(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00783ea0(param_3);
  FUN_0059243c();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_00ac3128;
  _objc_opt_class(PTR_PTR_00ac3128);
  _objc_opt_isKindOfClass(param_3,puVar3);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 005918b8; end: 005918bf; -[SCExtensionEventConfigurer sessionId] */

undefined8 FUN_005918b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005918c0; end: 005918c7; -[SCExtensionEventConfigurer setSessionId:] */

void FUN_005918c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 005918c8; end: 005918cf; -[SCExtensionEventConfigurer timeProvider] */

undefined8 FUN_005918c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005918d0; end: 005918d7; -[SCExtensionEventConfigurer eventFieldProvider] */

undefined8 FUN_005918d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005918d8; end: 00591913; -[SCExtensionEventConfigurer .cxx_destruct] */

void FUN_005918d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00591914; end: 00591987; -[SCExtensionEventFieldProvider initWithUserName:] */

undefined1 * FUN_00591914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3f58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00591988; end: 00591993; -[SCExtensionEventFieldProvider appVersion] */

undefined ** FUN_00591988(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 00591994; end: 0059199f; -[SCExtensionEventFieldProvider clientId] */

undefined ** FUN_00591994(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 005919a0; end: 005919ab; -[SCExtensionEventFieldProvider deviceModel] */

undefined ** FUN_005919a0(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 005919ac; end: 005919b7; -[SCExtensionEventFieldProvider devicePlatform] */

undefined ** FUN_005919ac(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 005919b8; end: 005919c3; -[SCExtensionEventFieldProvider osVersion] */

undefined ** FUN_005919b8(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 005919c4; end: 005919cf; -[SCExtensionEventFieldProvider schemeName] */

undefined ** FUN_005919c4(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 005919d0; end: 005919db; -[SCExtensionEventFieldProvider userAgent] */

undefined ** FUN_005919d0(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 005919dc; end: 005919e7; -[SCExtensionEventFieldProvider userLocale] */

undefined ** FUN_005919dc(void)

{
  return &PTR____CFConstantStringClassReference_00a212a0;
}



/* Entry: 005919e8; end: 005919ff; -[SCExtensionEventFieldProvider userName] */

void FUN_005919e8(long param_1)

{
  func_0x00780e20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00591a00; end: 00591a07; -[SCExtensionEventFieldProvider setUserName:] */

void FUN_00591a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 00591a08; end: 00591a37; -[SCExtensionEventFieldProvider .cxx_destruct] */

void FUN_00591a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00591a38; end: 00591a9b;  */

undefined8 FUN_00591a38(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2aaa0;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2aaa0,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2aac0;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2aac0,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00591a9c; end: 00591abb;  */

undefined * FUN_00591a9c(ulong param_1)

{
  if (param_1 < 0x12) {
    return (&PTR_PTR_00a02630)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00591abc; end: 00591cdf;  */

undefined8 FUN_00591abc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2aae0;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2aae0,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2ab00;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2ab00,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 3;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2ab20;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2ab20,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 1;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2ab40;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2ab40,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 2;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2ab60;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2ab60,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_00a2ab80;
            func_0x00780080(&PTR____CFConstantStringClassReference_00a2ab80,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_00a2aba0;
              func_0x00780080(&PTR____CFConstantStringClassReference_00a2aba0,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_00a2abc0;
                func_0x00780080(&PTR____CFConstantStringClassReference_00a2abc0,param_2,param_1);
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_00a2abe0;
                  func_0x00780080(&PTR____CFConstantStringClassReference_00a2abe0,param_2,param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_00a2ac00;
                    func_0x00780080(&PTR____CFConstantStringClassReference_00a2ac00,param_2,param_1)
                    ;
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_00a2ac20;
                      func_0x00780080(&PTR____CFConstantStringClassReference_00a2ac20,param_2,
                                      param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_00a2ac40;
                        func_0x00780080(&PTR____CFConstantStringClassReference_00a2ac40,param_2,
                                        param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_00a2ac60;
                          func_0x00780080(&PTR____CFConstantStringClassReference_00a2ac60,param_2,
                                          param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xe;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_00a2ac80;
                            func_0x00780080(&PTR____CFConstantStringClassReference_00a2ac80,param_2,
                                            param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xf;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_00a2aca0;
                              func_0x00780080(&PTR____CFConstantStringClassReference_00a2aca0,
                                              param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xc;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_00a2acc0;
                                func_0x00780080(&PTR____CFConstantStringClassReference_00a2acc0,
                                                param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xd;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_00a2ace0;
                                  func_0x00780080(&PTR____CFConstantStringClassReference_00a2ace0,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_00a2ad00;
                                    func_0x00780080(&PTR____CFConstantStringClassReference_00a2ad00,
                                                    param_2,param_1);
                                    uVar2 = 0x11;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00591ce0; end: 00591cff;  */

undefined * FUN_00591ce0(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_00a026c0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00591d00; end: 00591e27;  */

undefined8 FUN_00591d00(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2ad20;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2ad20,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2ad40;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2ad40,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2ad60;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2ad60,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2ad80;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2ad80,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2ada0;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2ada0,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_00a2adc0;
            func_0x00780080(&PTR____CFConstantStringClassReference_00a2adc0,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 6;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_00a2ade0;
              func_0x00780080(&PTR____CFConstantStringClassReference_00a2ade0,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 7;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_00a2ae00;
                func_0x00780080(&PTR____CFConstantStringClassReference_00a2ae00,param_2,param_1);
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 8;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_00a2a340;
                  func_0x00780080(&PTR____CFConstantStringClassReference_00a2a340,param_2,param_1);
                  uVar2 = 5;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00591e28; end: 00591e47;  */

undefined * FUN_00591e28(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_00a02708)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00591e48; end: 00591ee3;  */

undefined8 FUN_00591e48(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2a340;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2a340,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2ae20;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2ae20,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2ade0;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2ade0,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2ae40;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2ae40,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00591ee4; end: 00591f03;  */

undefined * FUN_00591ee4(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_00a02728)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00591f04; end: 00591f9f;  */

undefined8 FUN_00591f04(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2ae60;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2ae60,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2ae80;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2ae80,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2aea0;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2aea0,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2aec0;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2aec0,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00591fa0; end: 00591fbf;  */

undefined * FUN_00591fa0(ulong param_1)

{
  if (param_1 < 0x17) {
    return (&PTR_PTR_00a02748)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00591fc0; end: 0059226f;  */

undefined8 FUN_00591fc0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2aee0;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2aee0,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2af00;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2af00,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2af20;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2af20,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2af40;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2af40,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2af60;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2af60,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_00a2af80;
            func_0x00780080(&PTR____CFConstantStringClassReference_00a2af80,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_00a2afa0;
              func_0x00780080(&PTR____CFConstantStringClassReference_00a2afa0,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_00a2afc0;
                func_0x00780080(&PTR____CFConstantStringClassReference_00a2afc0,param_2,param_1);
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x13;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_00a2afe0;
                  func_0x00780080(&PTR____CFConstantStringClassReference_00a2afe0,param_2,param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 7;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_00a2b000;
                    func_0x00780080(&PTR____CFConstantStringClassReference_00a2b000,param_2,param_1)
                    ;
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 8;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_00a2b020;
                      func_0x00780080(&PTR____CFConstantStringClassReference_00a2b020,param_2,
                                      param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 9;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_00a2b040;
                        func_0x00780080(&PTR____CFConstantStringClassReference_00a2b040,param_2,
                                        param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 10;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_00a2b060;
                          func_0x00780080(&PTR____CFConstantStringClassReference_00a2b060,param_2,
                                          param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x14;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_00a2b080;
                            func_0x00780080(&PTR____CFConstantStringClassReference_00a2b080,param_2,
                                            param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xb;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_00a2b0a0;
                              func_0x00780080(&PTR____CFConstantStringClassReference_00a2b0a0,
                                              param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xc;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_00a2b0c0;
                                func_0x00780080(&PTR____CFConstantStringClassReference_00a2b0c0,
                                                param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xd;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_00a2b0e0;
                                  func_0x00780080(&PTR____CFConstantStringClassReference_00a2b0e0,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xe;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_00a2b100;
                                    func_0x00780080(&PTR____CFConstantStringClassReference_00a2b100,
                                                    param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xf;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_00a2b120;
                                      func_0x00780080(&
                                                  PTR____CFConstantStringClassReference_00a2b120,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x10;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_00a2b140;
                                        func_0x00780080(&
                                                  PTR____CFConstantStringClassReference_00a2b140,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x15;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_00a2b160;
                                          func_0x00780080(&
                                                  PTR____CFConstantStringClassReference_00a2b160,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x11;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_00a2b180;
                                            func_0x00780080(&
                                                  PTR____CFConstantStringClassReference_00a2b180,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x12;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_00a2b1a0;
                                              func_0x00780080(&
                                                  PTR____CFConstantStringClassReference_00a2b1a0,
                                                  param_2,param_1);
                                              uVar2 = 0x16;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592270; end: 0059228f;  */

undefined * FUN_00592270(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_00a02800)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00592290; end: 00592347;  */

undefined8 FUN_00592290(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2b1c0;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2b1c0,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2b1e0;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2b1e0,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2b200;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2b200,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2b220;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2b220,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2b240;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2b240,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592348; end: 00592367;  */

undefined * FUN_00592348(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_00a02828)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00592368; end: 0059243b;  */

undefined8 FUN_00592368(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2a340;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2a340,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2b260;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2b260,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2b280;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2b280,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2b2a0;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2b2a0,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2b2c0;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2b2c0,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_00a2b2e0;
            func_0x00780080(&PTR____CFConstantStringClassReference_00a2b2e0,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 0059243c; end: 0059249b;  */

undefined * FUN_0059243c(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_00a02858)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 0059249c; end: 005925a7;  */

undefined8 FUN_0059249c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2a500;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2a500,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2d2c0;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2d2c0,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2d2e0;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2d2e0,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2d300;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2d300,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2d320;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2d320,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_00a2d340;
            func_0x00780080(&PTR____CFConstantStringClassReference_00a2d340,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_00a2d360;
              func_0x00780080(&PTR____CFConstantStringClassReference_00a2d360,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_00a2d380;
                func_0x00780080(&PTR____CFConstantStringClassReference_00a2d380,param_2,param_1);
                uVar2 = 7;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005925a8; end: 005925f3; -[SCAEventBase getAppBuild] */

void FUN_005925a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005925f4; end: 00592657; -[SCAEventBase getAppMultiWindowMode] */

undefined8 FUN_005925f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592658; end: 005926bb; -[SCAEventBase getAppStartupType] */

undefined8 FUN_00592658(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00591a38();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005926bc; end: 0059271f; -[SCAEventBase getAppTravelMode] */

undefined8 FUN_005926bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592720; end: 00592783; -[SCAEventBase getAppType] */

undefined8 FUN_00592720(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00591abc();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592784; end: 005927e7; -[SCAEventBase getAppUi] */

undefined8 FUN_00592784(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788b40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005927e8; end: 0059284b; -[SCAEventBase getAppVariant] */

undefined8 FUN_005927e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00591d00();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 0059284c; end: 00592897; -[SCAEventBase getAppVersion] */

void FUN_0059284c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592898; end: 005928fb; -[SCAEventBase getApplication] */

undefined8 FUN_00592898(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00591e48();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005928fc; end: 0059295f; -[SCAEventBase getBlizzardEventSource] */

undefined8 FUN_005928fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00591f04();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592960; end: 005929ab; -[SCAEventBase getBlizzardWebSessionId] */

void FUN_00592960(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005929ac; end: 005929f7; -[SCAEventBase getBrowser] */

void FUN_005929ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005929f8; end: 00592a43; -[SCAEventBase getBrowserVersion] */

void FUN_005929f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592a44; end: 00592a8f; -[SCAEventBase getCarpenterDedupKey] */

void FUN_00592a44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592a90; end: 00592adb; -[SCAEventBase getCity] */

void FUN_00592a90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592adc; end: 00592b27; -[SCAEventBase getClientId] */

void FUN_00592adc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592b28; end: 00592bab; -[SCAEventBase getClientTs] */

void FUN_00592b28(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_00ac2c88);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782440();
  func_0x00786a60(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00592bac; end: 00592c2f; -[SCAEventBase getClientUploadTs] */

void FUN_00592bac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_00ac2c88);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782440();
  func_0x00786a60(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00592c30; end: 00592c93; -[SCAEventBase getCollection] */

undefined8 FUN_00592c30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00591fc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592c94; end: 00592cf7; -[SCAEventBase getConnectionDownloadBandwidthBps] */

undefined8 FUN_00592c94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788b40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592cf8; end: 00592d43; -[SCAEventBase getCountry] */

void FUN_00592cf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592d44; end: 00592da7; -[SCAEventBase getDeviceConnectivity] */

undefined8 FUN_00592d44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00592290();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592da8; end: 00592e0b; -[SCAEventBase getDeviceMemoryMb] */

undefined8 FUN_00592da8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788b40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00592e0c; end: 00592e57; -[SCAEventBase getDeviceModel] */

void FUN_00592e0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592e58; end: 00592ea3; -[SCAEventBase getDomain] */

void FUN_00592e58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00592ea4; end: 00592f27; -[SCAEventBase getEventHourTs] */

void FUN_00592ea4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_00ac2c88);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782440();
  func_0x00786a60(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00592f28; end: 00592f8b; -[SCAEventBase getEventSamplingRate] */

undefined8 FUN_00592f28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782440();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 00592f8c; end: 0059300f; -[SCAEventBase getEventTime] */

void FUN_00592f8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_00ac2c88);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782440();
  func_0x00786a60(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00593010; end: 00593093; -[SCAEventBase getEventTs] */

void FUN_00593010(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_00ac2c88);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782440();
  func_0x00786a60(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00593094; end: 005930f7; -[SCAEventBase getFriendCount] */

undefined8 FUN_00593094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788b40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005930f8; end: 00593143; -[SCAEventBase getGclbClientCity] */

void FUN_005930f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00593144; end: 0059318f; -[SCAEventBase getGclbClientRegion] */

void FUN_00593144(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00593190; end: 005931db; -[SCAEventBase getGclbClientRegionSubdivision] */

void FUN_00593190(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005931dc; end: 00593227; -[SCAEventBase getGpsCountry] */

void FUN_005931dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00593228; end: 0059328b; -[SCAEventBase getHasBitmoji] */

undefined8 FUN_00593228(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 0059328c; end: 005932ef; -[SCAEventBase getIsInCall] */

undefined8 FUN_0059328c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005932f0; end: 00593353; -[SCAEventBase getIsLowMemoryDevice] */

undefined8 FUN_005932f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00593354; end: 0059339f; -[SCAEventBase getLocale] */

void FUN_00593354(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005933a0; end: 005933eb; -[SCAEventBase getLogQueueName] */

void FUN_005933a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005933ec; end: 0059344f; -[SCAEventBase getLogQueueSequenceId] */

undefined8 FUN_005933ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788b40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00593450; end: 0059349b; -[SCAEventBase getMccCountry] */

void FUN_00593450(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0059349c; end: 005934e7; -[SCAEventBase getMobileCountryCode] */

void FUN_0059349c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005934e8; end: 00593533; -[SCAEventBase getOsMinorVersion] */

void FUN_005934e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00593534; end: 0059357f; -[SCAEventBase getOsType] */

void FUN_00593534(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00593580; end: 005935cb; -[SCAEventBase getOsVersion] */

void FUN_00593580(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}


