/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0041df20; end: 0041df7f;  */

void FUN_0041df20(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*(undefined8 *)(param_2 + 0x30));
  return;
}



/* Entry: 0041df80; end: 0041e02f; -[SCNSEStaticDependency initWithCreationBlock:destructionBlock:] */

undefined1 *
FUN_0041df80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3a08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041e030; end: 0041e14f; -[SCNSEStaticDependency objectForParams:] */

void FUN_0041e030(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSObject_00ac2b58;
    _objc_opt_class(PTR__OBJC_CLASS___NSObject_00ac2b58);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
        uVar5 = 1;
      }
      else {
        uVar2 = param_3;
        func_0x007877e0();
        uVar5 = (uint)uVar2 ^ 1;
      }
      func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((uVar5 & 1) != 0) {
        func_0x0077c7c0(param_1);
        _objc_retain(param_3);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        *(ulong *)(param_1 + 0x10) = param_3;
        _objc_release(uVar3);
        lVar4 = *(long *)(param_1 + 0x20);
        (**(code **)(lVar4 + 0x10))(lVar4,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        *(long *)(param_1 + 0x18) = lVar4;
        _objc_release(uVar3);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(uVar3);
      goto LAB_0041e114;
    }
  }
  uVar3 = 0;
LAB_0041e114:
  _os_unfair_lock_unlock(param_1 + 8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0041e150; end: 0041e1a7; -[SCNSEStaticDependency dealloc] */

void FUN_0041e150(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _os_unfair_lock_lock(param_1 + 8);
  func_0x0077c7c0(param_1);
  _os_unfair_lock_unlock(param_1 + 8);
  puStack_28 = PTR_PTR_00ac3a08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0041e1a8; end: 0041e1fb; -[SCNSEStaticDependency _dispose] */

void FUN_0041e1a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _os_unfair_lock_assert_owner(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0041e1fc; end: 0041e243; -[SCNSEStaticDependency .cxx_destruct] */

void FUN_0041e1fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0041e244; end: 0041e297; +[SCNSEStaticDependencyProvider shared] */

void FUN_0041e244(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b5fd40 != -1) {
    _dispatch_once(0xb5fd40,&PTR___NSConcreteGlobalBlock_009e2fd8);
  }
  uVar1 = uRam0000000000b5fd38;
  _objc_retain(uRam0000000000b5fd38);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0041e298; end: 0041e2c3;  */

void FUN_0041e298(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_00ac2a28;
  _objc_alloc_init();
  uVar1 = puRam0000000000b5fd38;
  puRam0000000000b5fd38 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0041e2c4; end: 0041e357; -[SCNSEStaticDependencyProvider init] */

undefined1 * FUN_0041e2c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR__OBJC_CLASS___SCNSEStaticDependencyProvider_00ac3a10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0041e358; end: 0041e46b; -[SCNSEStaticDependencyProvider processedNotificationStorage:recoveryMessagingPushTypes:recoveryGrowthPushTypes:] */

void FUN_0041e358(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 8);
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar1 = PTR_PTR_00ac2b60;
      _objc_alloc();
      func_0x007851a0();
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar1;
      _objc_release(uVar2);
    }
    puVar1 = PTR_PTR_00ac2b68;
    _objc_alloc(PTR_PTR_00ac2b68);
    func_0x00786de0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00789f20(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0041e46c; end: 0041e513;  */

void FUN_0041e46c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x007933e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x0078b040(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x0078b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar1;
  FUN_0041dbec(uVar1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
  return;
}



/* Entry: 0041e514; end: 0041e5cb; -[SCNSEStaticDependencyProvider nativeAnnouncer:] */

void FUN_0041e514(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_00ac2b60;
      _objc_alloc();
      func_0x007851a0();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    func_0x00789f20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 0041e5cc; end: 0041e5df;  */

void FUN_0041e5cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___SCLazy_00ac29d0,PTR_s_automaticCreationWithInitializat_00abaa90,
             &PTR___NSConcreteGlobalBlock_009e3098);
  return;
}



/* Entry: 0041e5e0; end: 0041e5fb;  */

void FUN_0041e5e0(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___SCNSENativeAnnouncer_00ac2b70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0041e5fc; end: 0041e6ef; -[SCNSEStaticDependencyProvider nativeAckDelegate:replayBufferSize:] */

void FUN_0041e5fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_00ac2b60;
      _objc_alloc();
      func_0x007851a0();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x20);
    }
    func_0x00789f20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 0041e6f0; end: 0041e757;  */

void FUN_0041e6f0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_0041e758;
  puStack_20 = &UNK_009e30b8;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077f660(PTR__OBJC_CLASS___SCLazy_00ac29d0,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0041e758; end: 0041e787;  */

void FUN_0041e758(void)

{
  _objc_alloc(PTR_PTR_00ac2b78);
  func_0x007865c0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0041e788; end: 0041e83f; -[SCNSEStaticDependencyProvider prefetchedMediaStore:] */

void FUN_0041e788(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_00ac2b60;
      _objc_alloc();
      func_0x007851a0();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    func_0x00789f20(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 0041e840; end: 0041e847;  */

void FUN_0041e840(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_0041dac4;
  puStack_50 = &UNK_009e2f48;
  uStack_48 = param_2;
  _objc_retain(param_2);
  ppuVar1 = &puStack_68;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  _objc_retain();
  func_0x0077f660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0041e848; end: 0041e943; -[SCNSEStaticDependencyProvider blizzardExtensionLogger:username:] */

void FUN_0041e848(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 8);
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar1 = PTR_PTR_00ac2b60;
      _objc_alloc();
      func_0x007851a0();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
      _objc_release(uVar2);
    }
    puVar1 = PTR_PTR_00ac2b88;
    _objc_alloc(PTR_PTR_00ac2b88);
    func_0x00786e20();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00789f20(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0041e944; end: 0041e9db;  */

void FUN_0041e944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCBlizzardExtensionLogger_00ac2b80;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x007933e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00793520(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00786e20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0041e9dc; end: 0041ebab; -[SCNSEStaticDependencyProvider nativeHandler:announcer:ackDelegate:grapheneLogger:nativeConfigDict:nativeAckEnabled:nativeSuppressAckingEnabled:] */

void FUN_0041e9dc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 8);
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar1 = PTR_PTR_00ac2b60;
      _objc_alloc();
      puStack_98 = PTR___NSConcreteStackBlock_00999f30;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_0041ebac;
      puStack_80 = &UNK_009e3188;
      _objc_retain(param_4);
      lStack_78 = param_4;
      _objc_retain(param_5);
      uStack_70 = param_5;
      _objc_retain(param_6);
      uStack_68 = param_6;
      func_0x007851a0(puVar1,param_2,&puStack_98,&PTR___NSConcreteGlobalBlock_009e31d8);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar1;
      _objc_release(uVar2);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
    }
    puVar1 = PTR_PTR_00ac2b98;
    _objc_alloc(PTR_PTR_00ac2b98);
    func_0x00786dc0();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00789f20(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0041ebac; end: 0041ec97;  */

void FUN_0041ebac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___SCLazy_00ac29d0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x0077f660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0041ec98; end: 0041ed5f;  */

void FUN_0041ec98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar5 = PTR__OBJC_CLASS___SCNSENativeHandler_00ac2b90;
  _objc_alloc(PTR__OBJC_CLASS___SCNSENativeHandler_00ac2b90);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x007933e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00789820(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00789800(uVar8);
  uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00789840();
  func_0x00786d40(puVar5,param_2,uVar6,uVar3,uVar1,uVar2,uVar7,uVar8,uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0041ed60; end: 0041ee03;  */

void FUN_0041ed60(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*(undefined8 *)(param_2 + 0x38));
  return;
}



/* Entry: 0041ee04; end: 0041ee73; -[SCNSEStaticDependencyProvider resetForLogout] */

void FUN_0041ee04(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(param_1 + 8);
  return;
}



/* Entry: 0041ee74; end: 0041eed3; -[SCNSEStaticDependencyProvider .cxx_destruct] */

void FUN_0041ee74(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0041eed4; end: 0041ef7f; -[SCBlizzardExtensionLoggerParams initWithUserId:username:] */

undefined1 *
FUN_0041eed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3a18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041ef80; end: 0041efa3; -[SCBlizzardExtensionLoggerParams copyWithZone:] */

undefined8 FUN_0041ef80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0041efa4; end: 0041f017; -[SCBlizzardExtensionLoggerParams hash] */

undefined8 * FUN_0041efa4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x007843a0();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x0076fd30(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_0041f098:
    puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_0041f0a4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x007877e0();
          goto LAB_0041f0a4;
        }
        goto LAB_0041f098;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_0041f0a4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 0041f018; end: 0041f0bf; -[SCBlizzardExtensionLoggerParams isEqual:] */

long FUN_0041f018(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_0041f098:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_0041f0a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x007877e0();
          goto LAB_0041f0a4;
        }
        goto LAB_0041f098;
      }
    }
    lVar3 = 0;
  }
LAB_0041f0a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0041f0c0; end: 0041f0c7; -[SCBlizzardExtensionLoggerParams userId] */

undefined8 FUN_0041f0c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0041f0c8; end: 0041f0cf; -[SCBlizzardExtensionLoggerParams username] */

undefined8 FUN_0041f0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0041f0d0; end: 0041f0ff; -[SCBlizzardExtensionLoggerParams .cxx_destruct] */

void FUN_0041f0d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041f100; end: 0041f1d7; -[SCProcessedNotificationStorageParams initWithUserId:recoveryMessagingPushTypes:recoveryGrowthPushTypes:] */

undefined1 *
FUN_0041f100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac3a20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041f1d8; end: 0041f1fb; -[SCProcessedNotificationStorageParams copyWithZone:] */

undefined8 FUN_0041f1d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0041f1fc; end: 0041f27b; -[SCProcessedNotificationStorageParams hash] */

undefined8 * FUN_0041f1fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x007843a0();
  uStack_30 = uVar1;
  func_0x0076fd30(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_0041f314:
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_0041f320;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x007877e0();
            goto LAB_0041f320;
          }
          goto LAB_0041f314;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_0041f320:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 0041f27c; end: 0041f33b; -[SCProcessedNotificationStorageParams isEqual:] */

long FUN_0041f27c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_0041f314:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_0041f320;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x007877e0();
            goto LAB_0041f320;
          }
          goto LAB_0041f314;
        }
      }
    }
    lVar3 = 0;
  }
LAB_0041f320:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0041f33c; end: 0041f343; -[SCProcessedNotificationStorageParams userId] */

undefined8 FUN_0041f33c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0041f344; end: 0041f34b; -[SCProcessedNotificationStorageParams recoveryMessagingPushTypes] */

undefined8 FUN_0041f344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0041f34c; end: 0041f353; -[SCProcessedNotificationStorageParams recoveryGrowthPushTypes] */

undefined8 FUN_0041f34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0041f354; end: 0041f38f; -[SCProcessedNotificationStorageParams .cxx_destruct] */

void FUN_0041f354(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041f390; end: 0041f453; -[SCNSENativeHandlerParams initWithUserId:nativeConfigDict:nativeAckEnabled:nativeSuppressAckingEnabled:] */

undefined1 *
FUN_0041f390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac3a28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0041f454; end: 0041f477; -[SCNSENativeHandlerParams copyWithZone:] */

undefined8 FUN_0041f454(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0041f478; end: 0041f4f7; -[SCNSENativeHandlerParams hash] */

undefined8 * FUN_0041f478(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x007843a0();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x0076fd30(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_0041f598:
    puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_0041f5a4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x007877e0();
          goto LAB_0041f5a4;
        }
        goto LAB_0041f598;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_0041f5a4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 0041f4f8; end: 0041f5bf; -[SCNSENativeHandlerParams isEqual:] */

long FUN_0041f4f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_0041f598:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_0041f5a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x007877e0();
          goto LAB_0041f5a4;
        }
        goto LAB_0041f598;
      }
    }
    lVar3 = 0;
  }
LAB_0041f5a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0041f5c0; end: 0041f5c7; -[SCNSENativeHandlerParams userId] */

undefined8 FUN_0041f5c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0041f5c8; end: 0041f5cf; -[SCNSENativeHandlerParams nativeConfigDict] */

undefined8 FUN_0041f5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0041f5d0; end: 0041f5d7; -[SCNSENativeHandlerParams nativeAckEnabled] */

undefined1 FUN_0041f5d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0041f5d8; end: 0041f5df; -[SCNSENativeHandlerParams nativeSuppressAckingEnabled] */

undefined1 FUN_0041f5d8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 0041f5e0; end: 0041f60f; -[SCNSENativeHandlerParams .cxx_destruct] */

void FUN_0041f5e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0041f610; end: 0041f683; -[SCNotificationServiceExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_0041f610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCNotificationServiceExtensionUserDefaults_00ac3a30;
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



/* Entry: 0041f684; end: 0041f75f; -[SCNotificationServiceExtensionUserDefaults getConfigs] */

void FUN_0041f684(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  func_0x00784a40();
  func_0x0078ff20();
  puVar4 = puVar3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac2a60;
  _objc_opt_class(PTR_PTR_00ac2a60);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0041f760; end: 0041f7ef; -[SCNotificationServiceExtensionUserDefaults setConfigs:] */

void FUN_0041f760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00792720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0078f4a0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_00a23720);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0041f7f0; end: 0041f8cb; -[SCNotificationServiceExtensionUserDefaults getNSEGrapheneConfigs] */

void FUN_0041f7f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  func_0x00784a40();
  func_0x0078ff20();
  puVar4 = puVar3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCGrapheneExtensionsConfigurations_00ac2ba0;
  _objc_opt_class(PTR__OBJC_CLASS___SCGrapheneExtensionsConfigurations_00ac2ba0);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0041f8cc; end: 0041f95b; -[SCNotificationServiceExtensionUserDefaults setNSEGrapheneConfigs:] */

void FUN_0041f8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00792720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0078f4a0(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_00a23740);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0041f95c; end: 0041fa6f; -[SCNotificationServiceExtensionUserDefaults nseHandlerConfigDict] */

void FUN_0041f95c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  func_0x00784a40();
  func_0x0078ff20();
  puVar4 = puVar3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    func_0x0077ca40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0041fa70; end: 0041fb03; -[SCNotificationServiceExtensionUserDefaults setNSEHandlerConfigDict:] */

void FUN_0041fa70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x0077ca40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00792720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,lVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_00a23760);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0041fb04; end: 0041fcf7; -[SCNotificationServiceExtensionUserDefaults _filterDictForNSEHandlerConfigDict:] */

/* WARNING: Removing unreachable block (ram,0x0041fba8) */

void FUN_0041fb04(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00780e20();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00780ea0();
    while (uVar2 != 0) {
      uVar6 = 0;
      do {
        uVar8 = *(ulong *)(uVar6 * 8);
        puVar7 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00ac29d8);
        _objc_opt_isKindOfClass(uVar8,puVar7);
        if ((uVar8 & 1) != 0) {
          uVar8 = param_3;
          func_0x00789f00();
          _objc_retainAutoreleasedReturnValue();
          if (uVar8 != 0) {
            uVar3 = param_3;
            func_0x00789f00();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
            uVar4 = uVar3;
            _objc_opt_isKindOfClass(uVar3,puVar7);
            _objc_release(uVar3);
            _objc_release(uVar8);
            if ((uVar4 & 1) != 0) {
              uVar8 = param_3;
              func_0x00789f00(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x0078f4e0(puVar1);
              _objc_release(uVar8);
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      uVar2 = param_3;
      func_0x00780ea0();
    }
    _objc_release(param_3);
    puVar7 = puVar1;
    func_0x00780e20(puVar1);
    _objc_release(puVar1);
    _objc_release(param_3);
    param_1 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 0041fcf8; end: 0041fd03; -[SCNotificationServiceExtensionUserDefaults .cxx_destruct] */

void FUN_0041fcf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0041fd04; end: 0041fd1f;  */

ulong _SCPushNotificationSoundIdsFromRawValue(ulong param_1)

{
  func_0x00793100();
  if (0xc < param_1) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0041fd20; end: 0041fd3f;  */

undefined * _SCPushNotificationSoundIdsToSoundFileName(ulong param_1)

{
  if (param_1 < 0xd) {
    return (&PTR_PTR_009e3248)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 0041fd40; end: 00420137; -[SCNotificationServiceExtensionConfigs initWithCoder:] */

undefined1 * FUN_0041fd40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3a38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x12) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x13) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x14) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x15) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x16) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x17) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x18) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x19) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x1a) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x1b) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x1c) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 0x1d) = (char)uVar2;
    uVar2 = param_3;
    func_0x00781ae0();
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00420138; end: 0042047b; -[SCNotificationServiceExtensionConfigs initWithIndicateProcessedInTitle:delayNotificationForTesting:showBitmojiEnabled:paddingPercentageForBitmoji:pnsRouteTag:nseProcessingDisabled:nseSimulateUNP:enableNotificationCustomSound:enableGrapheneMetricsLogging:skipSpotlightMediaDownloadInExtension:bypassChatMessageMediaTypeInPrefetch:bypassSnapMessageMediaTypeInPrefetch:skipMediaFetchWhenAppForegrounded:notificationTypeGrapheneAllowList:notificationUsersGrapheneAllowList:modifyTimeLimitInSec:grapheneTimeLimitInSec:fetchGroupBackgroundAvatarTimeoutInMs:fetchMediaTaskTimeLimitInSec:enableExtGrpcLogging:chatNotificationRateLimiterWindowSecs:networkHttpMaxConnectionPerHost:indicateSDNInBody:recoveryMessagingPushTypes:recoveryGrowthPushTypes:ffNotifStoryMetadataCapCount:addDebugPrefix:shouldDecryptTextForReplies:enablePriorityChatNsePreview:hermodNotificationEnabled:nativeAckEnabled:nativeAckCompletionReplayBufferSize:nativeAckWaitCapSecs:nativeSuppressAckingEnabled:nseMediaDbEnabled:widgetSuggestionEnabled:widgetSuggestionKind:widgetSuggestionRelevanceDurationSec:widgetSuggestionFireAndForgetEnabled:widgetSuggestionCooldownSec:] */

undefined8 *
FUN_00420138(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
            undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
            undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
            undefined8 param_25,undefined4 param_26,undefined1 param_27,undefined8 param_28,
            undefined8 param_29,undefined4 param_30,undefined4 param_31,undefined8 param_32,
            undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_32);
  puStack_70 = PTR_PTR_00ac3a38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    puVar1[4] = param_6;
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_9._3_1_;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0x11) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_10._2_1_;
    uVar2 = param_11;
    func_0x00780e20();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00780e20();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_13;
    puVar1[9] = param_14;
    puVar1[10] = param_15;
    puVar1[0xb] = param_16;
    *(undefined1 *)((long)puVar1 + 0x13) = param_17;
    puVar1[0xc] = param_19;
    puVar1[0xd] = param_20;
    *(undefined1 *)((long)puVar1 + 0x14) = param_21;
    uVar2 = param_23;
    func_0x00780e20();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00780e20();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x15) = (undefined1)param_26;
    *(undefined1 *)((long)puVar1 + 0x16) = param_26._1_1_;
    *(undefined1 *)((long)puVar1 + 0x17) = param_26._2_1_;
    *(undefined1 *)(puVar1 + 3) = param_26._3_1_;
    *(undefined1 *)((long)puVar1 + 0x19) = param_27;
    puVar1[0x10] = param_25;
    puVar1[0x11] = param_28;
    puVar1[0x12] = param_29;
    *(undefined1 *)((long)puVar1 + 0x1a) = (undefined1)param_30;
    *(undefined1 *)((long)puVar1 + 0x1b) = param_30._1_1_;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_30._2_1_;
    uVar2 = param_32;
    func_0x00780e20();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x1d) = param_34;
    puVar1[0x14] = param_33;
    puVar1[0x15] = param_36;
  }
  _objc_release(param_32);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 0042047c; end: 0042049f; -[SCNotificationServiceExtensionConfigs copyWithZone:] */

undefined8 FUN_0042047c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004204a0; end: 004207f7; -[SCNotificationServiceExtensionConfigs encodeWithCoder:] */

void FUN_004204a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x007826a0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a23940);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                  &PTR____CFConstantStringClassReference_00a23960);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                  &PTR____CFConstantStringClassReference_00a23980);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                  &PTR____CFConstantStringClassReference_00a239a0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                  &PTR____CFConstantStringClassReference_00a239c0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                  &PTR____CFConstantStringClassReference_00a239e0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                  &PTR____CFConstantStringClassReference_00a23a00);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                  &PTR____CFConstantStringClassReference_00a23a20);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                  &PTR____CFConstantStringClassReference_00a23a40);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                  &PTR____CFConstantStringClassReference_00a23a60);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a23a80);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                  &PTR____CFConstantStringClassReference_00a23aa0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x12),
                  &PTR____CFConstantStringClassReference_00a23ac0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                  &PTR____CFConstantStringClassReference_00a23ae0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                  &PTR____CFConstantStringClassReference_00a23b00);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                  &PTR____CFConstantStringClassReference_00a23b20);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                  &PTR____CFConstantStringClassReference_00a23b40);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                  &PTR____CFConstantStringClassReference_00a23b60);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                  &PTR____CFConstantStringClassReference_00a23b80);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x13),
                  &PTR____CFConstantStringClassReference_00a23ba0);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                  &PTR____CFConstantStringClassReference_00a23bc0);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                  &PTR____CFConstantStringClassReference_00a23be0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x14),
                  &PTR____CFConstantStringClassReference_00a23c00);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                  &PTR____CFConstantStringClassReference_00a23c20);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                  &PTR____CFConstantStringClassReference_00a23c40);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                  &PTR____CFConstantStringClassReference_00a23c60);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x15),
                  &PTR____CFConstantStringClassReference_00a23c80);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x16),
                  &PTR____CFConstantStringClassReference_00a23ca0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x17),
                  &PTR____CFConstantStringClassReference_00a23cc0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a23ce0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x19),
                  &PTR____CFConstantStringClassReference_00a23d00);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                  &PTR____CFConstantStringClassReference_00a23d20);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                  &PTR____CFConstantStringClassReference_00a23d40);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x1a),
                  &PTR____CFConstantStringClassReference_00a23d60);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x1b),
                  &PTR____CFConstantStringClassReference_00a23d80);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x1c),
                  &PTR____CFConstantStringClassReference_00a23da0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                  &PTR____CFConstantStringClassReference_00a23dc0);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                  &PTR____CFConstantStringClassReference_00a23de0);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 0x1d),
                  &PTR____CFConstantStringClassReference_00a23e00);
  func_0x00782760(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                  &PTR____CFConstantStringClassReference_00a23e20);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004207f8; end: 0042099b; -[SCNotificationServiceExtensionConfigs hash] */

ulong * FUN_004207f8(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_178 = (ulong)*(byte *)(param_1 + 8);
  uStack_170 = (ulong)*(byte *)(param_1 + 9);
  uStack_168 = (ulong)*(byte *)(param_1 + 10);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lStack_160 = -lVar1;
  if (-1 < lVar1) {
    lStack_160 = lVar1;
  }
  func_0x007843a0();
  uVar10 = *(undefined4 *)(param_1 + 0xb);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar7);
  uVar11 = CONCAT44((int)(uVar7 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_150 = (ulong)uVar2 & 0xff;
  uStack_148 = uVar7 >> 0x10 & 0xff;
  uStack_140 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_138 = (ulong)uVar9;
  uVar10 = *(undefined4 *)(param_1 + 0xf);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar7 = CONCAT44((int)(uVar11 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_130 = (ulong)uVar2 & 0xff;
  uStack_128 = uVar7 >> 0x10 & 0xff;
  uStack_120 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_118 = (ulong)uVar9;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_158 = uVar4;
  func_0x007843a0();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = uVar3;
  func_0x007843a0();
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = (ulong)*(byte *)(param_1 + 0x13);
  lVar1 = *(long *)(param_1 + 0x60);
  uStack_d0 = *(undefined8 *)(param_1 + 0x68);
  lStack_d8 = -lVar1;
  if (-1 < lVar1) {
    lStack_d8 = lVar1;
  }
  uStack_c8 = (ulong)*(byte *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_108 = uVar4;
  func_0x007843a0();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uStack_c0 = uVar3;
  func_0x007843a0();
  uStack_b0 = *(undefined8 *)(param_1 + 0x80);
  uVar10 = *(undefined4 *)(param_1 + 0x15);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar7);
  uVar11 = CONCAT44((int)(uVar7 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_a8 = (ulong)uVar2 & 0xff;
  uStack_a0 = uVar7 >> 0x10 & 0xff;
  uStack_98 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_90 = (ulong)uVar9;
  uStack_88 = (ulong)*(byte *)(param_1 + 0x19);
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_70 = (ulong)*(byte *)(param_1 + 0x1a);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x1b);
  uStack_60 = (ulong)*(byte *)(param_1 + 0x1c);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uStack_b8 = uVar4;
  func_0x007843a0();
  uStack_50 = *(undefined8 *)(param_1 + 0xa0);
  uStack_40 = *(undefined8 *)(param_1 + 0xa8);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x1d);
  puVar5 = &uStack_178;
  uStack_58 = uVar3;
  func_0x0076fd30(puVar5,0x28);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_00420c9c:
    puVar8 = (ulong *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar8 = (ulong *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_00420ca8;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((((ulong)puVar6 & 1) != 0) &&
           (((((char)puVar5[1] == (char)param_3[1] &&
              (*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9))) &&
             (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))) &&
            ((puVar5[4] == param_3[4] &&
             (*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
          (*(char *)((long)puVar5 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
         ((((*(char *)((long)puVar5 + 0xd) == *(char *)((long)param_3 + 0xd) &&
            (*(char *)((long)puVar5 + 0xe) == *(char *)((long)param_3 + 0xe))) &&
           ((*(char *)((long)puVar5 + 0xf) == *(char *)((long)param_3 + 0xf) &&
            ((((char)puVar5[2] == (char)param_3[2] &&
              (*(char *)((long)puVar5 + 0x11) == *(char *)((long)param_3 + 0x11))) &&
             (*(char *)((long)puVar5 + 0x12) == *(char *)((long)param_3 + 0x12))))))) &&
          (((puVar5[8] == param_3[8] && (puVar5[9] == param_3[9])) &&
           ((puVar5[10] == param_3[10] &&
            (((((puVar5[0xb] == param_3[0xb] &&
                (*(char *)((long)puVar5 + 0x13) == *(char *)((long)param_3 + 0x13))) &&
               ((puVar5[0xc] == param_3[0xc] &&
                (((puVar5[0xd] == param_3[0xd] &&
                  (*(char *)((long)puVar5 + 0x14) == *(char *)((long)param_3 + 0x14))) &&
                 (puVar5[0x10] == param_3[0x10])))))) &&
              ((*(char *)((long)puVar5 + 0x15) == *(char *)((long)param_3 + 0x15) &&
               (*(char *)((long)puVar5 + 0x16) == *(char *)((long)param_3 + 0x16))))) &&
             (*(char *)((long)puVar5 + 0x17) == *(char *)((long)param_3 + 0x17))))))))))) &&
        ((((char)puVar5[3] == (char)param_3[3] &&
          (*(char *)((long)puVar5 + 0x19) == *(char *)((long)param_3 + 0x19))) &&
         ((puVar5[0x11] == param_3[0x11] &&
          ((((puVar5[0x12] == param_3[0x12] &&
             (*(char *)((long)puVar5 + 0x1a) == *(char *)((long)param_3 + 0x1a))) &&
            (*(char *)((long)puVar5 + 0x1b) == *(char *)((long)param_3 + 0x1b))) &&
           ((*(char *)((long)puVar5 + 0x1c) == *(char *)((long)param_3 + 0x1c) &&
            (puVar5[0x14] == param_3[0x14])))))))))) &&
       ((*(char *)((long)puVar5 + 0x1d) == *(char *)((long)param_3 + 0x1d) &&
        (puVar5[0x15] == param_3[0x15])))) {
      uVar7 = puVar5[5];
      if ((uVar7 == param_3[5]) || (func_0x007877e0(), (int)uVar7 != 0)) {
        uVar7 = puVar5[6];
        if ((uVar7 == param_3[6]) || (func_0x007877e0(), (int)uVar7 != 0)) {
          uVar7 = puVar5[7];
          if ((uVar7 == param_3[7]) || (func_0x007877e0(), (int)uVar7 != 0)) {
            uVar7 = puVar5[0xe];
            if ((uVar7 == param_3[0xe]) || (func_0x007877e0(), (int)uVar7 != 0)) {
              uVar7 = puVar5[0xf];
              if ((uVar7 == param_3[0xf]) || (func_0x007877e0(), (int)uVar7 != 0)) {
                puVar8 = (ulong *)puVar5[0x13];
                if (puVar8 != (ulong *)param_3[0x13]) {
                  func_0x007877e0();
                  goto LAB_00420ca8;
                }
                goto LAB_00420c9c;
              }
            }
          }
        }
      }
    }
    puVar8 = (ulong *)0x0;
  }
LAB_00420ca8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 0042099c; end: 00420cc3; -[SCNotificationServiceExtensionConfigs isEqual:] */

long FUN_0042099c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_00420c9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00420ca8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((((uVar2 & 1) != 0) &&
           ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
              (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
             (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
            ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
             (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
         ((((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
            (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
           ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
            (((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
              (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
             (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))))))) &&
          (((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
            (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
           ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
            (((((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
                (*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13))) &&
               ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
                (((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
                  (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))) &&
                 (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))))) &&
              ((*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15) &&
               (*(char *)(param_1 + 0x16) == *(char *)(param_3 + 0x16))))) &&
             (*(char *)(param_1 + 0x17) == *(char *)(param_3 + 0x17))))))))))) &&
        (((*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 0x19) == *(char *)(param_3 + 0x19))) &&
         ((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
          ((((*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90) &&
             (*(char *)(param_1 + 0x1a) == *(char *)(param_3 + 0x1a))) &&
            (*(char *)(param_1 + 0x1b) == *(char *)(param_3 + 0x1b))) &&
           ((*(char *)(param_1 + 0x1c) == *(char *)(param_3 + 0x1c) &&
            (*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0))))))))))) &&
       ((*(char *)(param_1 + 0x1d) == *(char *)(param_3 + 0x1d) &&
        (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x007877e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x70);
            if ((lVar3 == *(long *)(param_3 + 0x70)) || (func_0x007877e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x78);
              if ((lVar3 == *(long *)(param_3 + 0x78)) || (func_0x007877e0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + 0x98);
                if (lVar3 != *(long *)(param_3 + 0x98)) {
                  func_0x007877e0();
                  goto LAB_00420ca8;
                }
                goto LAB_00420c9c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_00420ca8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 00420cc4; end: 00420ccb; -[SCNotificationServiceExtensionConfigs indicateProcessedInTitle] */

undefined1 FUN_00420cc4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00420ccc; end: 00420cd3; -[SCNotificationServiceExtensionConfigs delayNotificationForTesting] */

undefined1 FUN_00420ccc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 00420cd4; end: 00420cdb; -[SCNotificationServiceExtensionConfigs showBitmojiEnabled] */

undefined1 FUN_00420cd4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 00420cdc; end: 00420ce3; -[SCNotificationServiceExtensionConfigs paddingPercentageForBitmoji] */

undefined8 FUN_00420cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00420ce4; end: 00420ceb; -[SCNotificationServiceExtensionConfigs pnsRouteTag] */

undefined8 FUN_00420ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00420cec; end: 00420cf3; -[SCNotificationServiceExtensionConfigs nseProcessingDisabled] */

undefined1 FUN_00420cec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 00420cf4; end: 00420cfb; -[SCNotificationServiceExtensionConfigs nseSimulateUNP] */

undefined1 FUN_00420cf4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 00420cfc; end: 00420d03; -[SCNotificationServiceExtensionConfigs enableNotificationCustomSound] */

undefined1 FUN_00420cfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 00420d04; end: 00420d0b; -[SCNotificationServiceExtensionConfigs enableGrapheneMetricsLogging] */

undefined1 FUN_00420d04(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 00420d0c; end: 00420d13; -[SCNotificationServiceExtensionConfigs skipSpotlightMediaDownloadInExtension] */

undefined1 FUN_00420d0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 00420d14; end: 00420d1b; -[SCNotificationServiceExtensionConfigs bypassChatMessageMediaTypeInPrefetch] */

undefined1 FUN_00420d14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 00420d1c; end: 00420d23; -[SCNotificationServiceExtensionConfigs bypassSnapMessageMediaTypeInPrefetch] */

undefined1 FUN_00420d1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 00420d24; end: 00420d2b; -[SCNotificationServiceExtensionConfigs skipMediaFetchWhenAppForegrounded] */

undefined1 FUN_00420d24(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 00420d2c; end: 00420d33; -[SCNotificationServiceExtensionConfigs notificationTypeGrapheneAllowList] */

undefined8 FUN_00420d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00420d34; end: 00420d3b; -[SCNotificationServiceExtensionConfigs notificationUsersGrapheneAllowList] */

undefined8 FUN_00420d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00420d3c; end: 00420d43; -[SCNotificationServiceExtensionConfigs modifyTimeLimitInSec] */

undefined8 FUN_00420d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 00420d44; end: 00420d4b; -[SCNotificationServiceExtensionConfigs grapheneTimeLimitInSec] */

undefined8 FUN_00420d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 00420d4c; end: 00420d53; -[SCNotificationServiceExtensionConfigs fetchGroupBackgroundAvatarTimeoutInMs] */

undefined8 FUN_00420d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 00420d54; end: 00420d5b; -[SCNotificationServiceExtensionConfigs fetchMediaTaskTimeLimitInSec] */

undefined8 FUN_00420d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 00420d5c; end: 00420d63; -[SCNotificationServiceExtensionConfigs enableExtGrpcLogging] */

undefined1 FUN_00420d5c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 00420d64; end: 00420d6b; -[SCNotificationServiceExtensionConfigs chatNotificationRateLimiterWindowSecs] */

undefined8 FUN_00420d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 00420d6c; end: 00420d73; -[SCNotificationServiceExtensionConfigs networkHttpMaxConnectionPerHost] */

undefined8 FUN_00420d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 00420d74; end: 00420d7b; -[SCNotificationServiceExtensionConfigs indicateSDNInBody] */

undefined1 FUN_00420d74(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 00420d7c; end: 00420d83; -[SCNotificationServiceExtensionConfigs recoveryMessagingPushTypes] */

undefined8 FUN_00420d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 00420d84; end: 00420d8b; -[SCNotificationServiceExtensionConfigs recoveryGrowthPushTypes] */

undefined8 FUN_00420d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 00420d8c; end: 00420d93; -[SCNotificationServiceExtensionConfigs ffNotifStoryMetadataCapCount] */

undefined8 FUN_00420d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 00420d94; end: 00420d9b; -[SCNotificationServiceExtensionConfigs addDebugPrefix] */

undefined1 FUN_00420d94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 00420d9c; end: 00420da3; -[SCNotificationServiceExtensionConfigs shouldDecryptTextForReplies] */

undefined1 FUN_00420d9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 00420da4; end: 00420dab; -[SCNotificationServiceExtensionConfigs enablePriorityChatNsePreview] */

undefined1 FUN_00420da4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 00420dac; end: 00420db3; -[SCNotificationServiceExtensionConfigs hermodNotificationEnabled] */

undefined1 FUN_00420dac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 00420db4; end: 00420dbb; -[SCNotificationServiceExtensionConfigs nativeAckEnabled] */

undefined1 FUN_00420db4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 00420dbc; end: 00420dc3; -[SCNotificationServiceExtensionConfigs nativeAckCompletionReplayBufferSize] */

undefined8 FUN_00420dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


