/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10536e0b8; end: 10536e0df;  */

void FUN_10536e0b8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xe;
  return;
}



/* Entry: 10536e0e0; end: 10536e173;  */

void FUN_10536e0e0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536e174; end: 10536e19b;  */

void FUN_10536e174(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xf;
  return;
}



/* Entry: 10536e19c; end: 10536e2ef; -[SCGrpcRegistrationService _logGrpcResponse:status:grpcStatus:latencyMs:] */

void FUN_10536e19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10536d6c8;
  uStack_50 = 0x10536d6d8;
  uStack_48 = 0;
  func_0x00010c0bd3c0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b40();
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10536e2f0; end: 10536e327;  */

void FUN_10536e2f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dd47f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10536e328; end: 10536e3bb;  */

void FUN_10536e328(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10536e3bc; end: 10536e3f3;  */

void FUN_10536e3bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dd4838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10536e3f4; end: 10536e507; -[SCGrpcRegistrationService .cxx_destruct] */

void FUN_10536e3f4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 10536e508; end: 10536e673; -[SCRegistrationUsernameValidationService initWithUsernameValidator:circumstanceEngine:] */

undefined8 *
FUN_10536e508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7ae0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
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
    pcVar3 = "com.snapchat.SCRegistrationUsernameValidationService";
    _dispatch_queue_create("com.snapchat.SCRegistrationUsernameValidationService",0);
    uVar2 = puVar1[3];
    puVar1[3] = pcVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10536e674; end: 10536e6b3;  */

void FUN_10536e674(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdecbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10536e6b4; end: 10536e893; -[SCRegistrationUsernameValidationService validateUsernameLocallyAfterDelayWithUsername:completion:] */

void FUN_10536e6b4(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((param_5 != 0) && (lVar1 != 0)) {
    FUN_10536e894(*(undefined8 *)(param_2 + 0x10));
    if (param_1 == 0.0) {
      _objc_initWeak(auStack_48,param_2);
      uVar2 = 0;
      _dispatch_time(0,500000000);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x10536e974;
      puStack_a0 = &UNK_110848378;
      _objc_copyWeak(auStack_88,auStack_48);
      _objc_retain(param_4);
      lStack_98 = param_4;
      _objc_retain(param_5);
      lStack_90 = param_5;
      func_0x00010058c530(uVar2,uVar4,&puStack_b8);
      _objc_release(lStack_90);
      _objc_release(lStack_98);
      puVar3 = auStack_88;
    }
    else {
      _objc_initWeak(auStack_48,param_2);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10536e940;
      puStack_68 = &UNK_110848378;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_4);
      lStack_60 = param_4;
      _objc_retain(param_5);
      lStack_58 = param_5;
      func_0x00010bf65f00(uVar2);
      _objc_release(uVar2);
      _objc_release(lStack_58);
      _objc_release(lStack_60);
      puVar3 = auStack_50;
    }
    _objc_destroyWeak(puVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10536e894; end: 10536e93f;  */

undefined8 FUN_10536e894(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = lRam00000001136bb5a8;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10536eacc;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136bb5a8,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar2 = uRam00000001136bb5b0;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10536e940; end: 10536e9a7;  */

void FUN_10536e940(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10536e9a8; end: 10536ea43; -[SCRegistrationUsernameValidationService _performCheckUsernameValidityWithUsername:completion:] */

void FUN_10536e9a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf98b20();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,param_3,uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10536ea44; end: 10536ea83; -[SCRegistrationUsernameValidationService _createDebouncer] */

void FUN_10536ea44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7bf8;
  _objc_alloc(PTR_PTR_1126b7bf8);
  FUN_10536e894(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c009680(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10536ea84; end: 10536eacb; -[SCRegistrationUsernameValidationService .cxx_destruct] */

void FUN_10536ea84(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10536eacc; end: 10536eb0b;  */

void FUN_10536eacc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd48d8,0,0);
  dRam00000001136bb5b0 = (double)(int)uVar1 / 1000.0;
  return;
}



/* Entry: 10536eb0c; end: 10536eb93; -[SCRegistrationDefaultStateTransition initWithFromNGOPhoneEmailFirst:shouldSkipUsername:] */

undefined1 *
FUN_10536eb0c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7ae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10536eb94; end: 10536ebe3; -[SCRegistrationDefaultStateTransition getNextStateConfigFromState:action:] */

void FUN_10536eb94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10536ebe4; end: 10536ec67; -[SCRegistrationDefaultStateTransition stateConfigForState:] */

void FUN_10536ebe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7c00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c29c020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c040(puVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10536ec68; end: 10536eefb; -[SCRegistrationDefaultStateTransition viewConfigForState:] */

void FUN_10536ec68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0bd8c0(param_3);
  if (*(char *)(param_1 + 8) == '\x01') {
    *(int *)(puStack_58 + 3) = *(int *)(puStack_58 + 3) + 1;
  }
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf85d80(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    if (*(int *)(puStack_58 + 3) == 5) {
      func_0x000108b9a834();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108b9a804();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108b9a81c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010beb5a60(param_1);
  puVar3 = PTR_PTR_1126b7c08;
  _objc_alloc(PTR_PTR_1126b7c08);
  func_0x00010c007340();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10536eefc; end: 10536efcb;  */

void FUN_10536eefc(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10536efcc; end: 10536f1db; -[SCRegistrationDefaultStateTransition _getNextStateFromState:action:] */

void FUN_10536efcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10536f1dc;
  uStack_40 = 0x10536f1ec;
  uStack_38 = 0;
  func_0x00010c0bd8c0(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10536f1dc; end: 10536f1f3;  */

void FUN_10536f1dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10536f1f4; end: 10536f6b7;  */

void FUN_10536f1f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af858;
  if (*(long *)(param_1 + 0x28) == 1) {
    func_0x00010bf1a5c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      return;
    }
    func_0x00010bf9b400();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10536f6b8; end: 10536f6bf;  */

void FUN_10536f6b8(void)

{
  return;
}



/* Entry: 10536f6c0; end: 10536f787; -[SCRegistrationDefaultStateTransition _shouldShow1TLCheckboxForState:] */

undefined8 FUN_10536f6c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126af858;
    func_0x00010bf9b400(PTR_PTR_1126af858);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c078b60(param_1,param_2,param_3);
      goto LAB_10536f768;
    }
  }
  else {
    _objc_release(puVar1);
  }
  param_1 = 0;
LAB_10536f768:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10536f788; end: 10536f7f7; -[SCRegistrationDefaultStateTransition isNextStateTheLastState:] */

undefined8 FUN_10536f788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c071ae0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10536f7f8; end: 10536f947; -[SCRegistrationDefaultStateTransition isValidPageState:] */

byte FUN_10536f7f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 1;
    func_0x00010c0bd8c0(param_3);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 10536f948; end: 10536f99b;  */

void FUN_10536f948(void)

{
  return;
}



/* Entry: 10536f99c; end: 10536f9a7; -[SCRegistrationDefaultStateTransition initialState] */

void FUN_10536f99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af858,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 10536f9a8; end: 10536f9b3; -[SCRegistrationDefaultStateTransition .cxx_destruct] */

void FUN_10536f9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10536f9b4; end: 10536fa43; -[SCRegistrationDisplayNameBirthdayStateTransition initWithFromNGOPhoneEmailFirst:shouldSkipUsername:shouldSkipPassword:] */

undefined1 *
FUN_10536f9b4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7af0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10536fa44; end: 10536fa93; -[SCRegistrationDisplayNameBirthdayStateTransition getNextStateConfigFromState:action:] */

void FUN_10536fa44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10536fa94; end: 10536fb17; -[SCRegistrationDisplayNameBirthdayStateTransition stateConfigForState:] */

void FUN_10536fa94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7c00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c29c020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c040(puVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10536fb18; end: 10536fd9b; -[SCRegistrationDisplayNameBirthdayStateTransition viewConfigForState:] */

void FUN_10536fb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  iVar4 = 3;
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar4 = 4;
  }
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0bd8c0(param_3);
  if (*(char *)(param_1 + 8) == '\x01') {
    *(int *)(puStack_58 + 3) = *(int *)(puStack_58 + 3) + 1;
  }
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf85da0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    if (*(int *)(puStack_58 + 3) == iVar4) {
      func_0x000108b9a834();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108b9a804();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108b9a81c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010beb5a60(param_1);
  puVar3 = PTR_PTR_1126b7c08;
  _objc_alloc(PTR_PTR_1126b7c08);
  func_0x00010c007340();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10536fd9c; end: 10536fe4b;  */

void FUN_10536fd9c(void)

{
  return;
}



/* Entry: 10536fe4c; end: 10537005f; -[SCRegistrationDisplayNameBirthdayStateTransition _getNextStateFromState:action:] */

void FUN_10536fe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105370060;
  uStack_40 = 0x105370070;
  uStack_38 = 0;
  func_0x00010c0bd8c0(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105370060; end: 105370077;  */

void FUN_105370060(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105370078; end: 1053705fb;  */

void FUN_105370078(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf9b400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053705fc; end: 105370603;  */

void FUN_1053705fc(void)

{
  return;
}



/* Entry: 105370604; end: 1053706cb; -[SCRegistrationDisplayNameBirthdayStateTransition _shouldShow1TLCheckboxForState:] */

undefined8 FUN_105370604(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126af858;
    func_0x00010bf9b400(PTR_PTR_1126af858);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c078b60(param_1,param_2,param_3);
      goto LAB_1053706ac;
    }
  }
  else {
    _objc_release(puVar1);
  }
  param_1 = 0;
LAB_1053706ac:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1053706cc; end: 10537073b; -[SCRegistrationDisplayNameBirthdayStateTransition isNextStateTheLastState:] */

undefined8 FUN_1053706cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c071ae0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10537073c; end: 1053708fb; -[SCRegistrationDisplayNameBirthdayStateTransition isValidPageState:] */

byte FUN_10537073c(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    func_0x00010c0bd8c0(param_3);
    bVar1 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 1053708fc; end: 1053709cb;  */

void FUN_1053708fc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1053709cc; end: 1053709d7; -[SCRegistrationDisplayNameBirthdayStateTransition initialState] */

void FUN_1053709cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af858,PTR_s_displayNameAndBirthday_1125bf110);
  return;
}



/* Entry: 1053709d8; end: 1053709e3; -[SCRegistrationDisplayNameBirthdayStateTransition .cxx_destruct] */

void FUN_1053709d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053709e4; end: 105370a5b; -[SCRegistrationNoDisplayNameNoPasswordStateTransition initWithShouldSkipUsername:] */

undefined1 * FUN_1053709e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7af8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105370a5c; end: 105370aab; -[SCRegistrationNoDisplayNameNoPasswordStateTransition getNextStateConfigFromState:action:] */

void FUN_105370a5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105370aac; end: 105370b2f; -[SCRegistrationNoDisplayNameNoPasswordStateTransition stateConfigForState:] */

void FUN_105370aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7c00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c29c020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c040(puVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105370b30; end: 105370e13; -[SCRegistrationNoDisplayNameNoPasswordStateTransition viewConfigForState:] */

void FUN_105370b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bd8c0(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf1a5c0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    if (*(int *)(puStack_78 + 3) == 3) {
      func_0x000108b9a834();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108b9a804();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108b9a81c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010beb5a60(param_1);
  puVar3 = PTR_PTR_1126b7c08;
  _objc_alloc(PTR_PTR_1126b7c08);
  func_0x00010c007340();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105370e14; end: 105370ee3;  */

void FUN_105370e14(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105370ee4; end: 105371147; -[SCRegistrationNoDisplayNameNoPasswordStateTransition _getNextStateFromState:action:] */

void FUN_105370ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105371148;
  uStack_70 = 0x105371158;
  uStack_68 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bd8c0(param_3);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105371148; end: 10537115f;  */

void FUN_105371148(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105371160; end: 105371553;  */

void FUN_105371160(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf9b400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105371554; end: 10537155b;  */

void FUN_105371554(void)

{
  return;
}



/* Entry: 10537155c; end: 105371623; -[SCRegistrationNoDisplayNameNoPasswordStateTransition _shouldShow1TLCheckboxForState:] */

undefined8 FUN_10537155c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126af858;
    func_0x00010bf9b400(PTR_PTR_1126af858);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c078b60(param_1,param_2,param_3);
      goto LAB_105371604;
    }
  }
  else {
    _objc_release(puVar1);
  }
  param_1 = 0;
LAB_105371604:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105371624; end: 105371693; -[SCRegistrationNoDisplayNameNoPasswordStateTransition isNextStateTheLastState:] */

undefined8 FUN_105371624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c071ae0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105371694; end: 10537182b; -[SCRegistrationNoDisplayNameNoPasswordStateTransition isValidPageState:] */

byte FUN_105371694(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    func_0x00010c0bd8c0(param_3);
    bVar1 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 10537182c; end: 1053718af;  */

void FUN_10537182c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1053718b0; end: 1053718bb; -[SCRegistrationNoDisplayNameNoPasswordStateTransition initialState] */

void FUN_1053718b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af858,PTR_s_birthday_1125a4318);
  return;
}



/* Entry: 1053718bc; end: 1053718c7; -[SCRegistrationNoDisplayNameNoPasswordStateTransition .cxx_destruct] */

void FUN_1053718bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053718c8; end: 10537193f; -[SCRegistrationNoDisplayNameStateTransition initWithShouldSkipUsername:] */

undefined1 * FUN_1053718c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7b00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105371940; end: 10537198f; -[SCRegistrationNoDisplayNameStateTransition getNextStateConfigFromState:action:] */

void FUN_105371940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105371990; end: 105371a13; -[SCRegistrationNoDisplayNameStateTransition stateConfigForState:] */

void FUN_105371990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7c00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c29c020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c040(puVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105371a14; end: 105371c7b; -[SCRegistrationNoDisplayNameStateTransition viewConfigForState:] */

void FUN_105371a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0bd8c0(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf1a5c0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    if (*(int *)(puStack_58 + 3) == 4) {
      func_0x000108b9a834();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108b9a804();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108b9a81c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010beb5a60(param_1);
  puVar3 = PTR_PTR_1126b7c08;
  _objc_alloc(PTR_PTR_1126b7c08);
  func_0x00010c007340();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105371c7c; end: 105371d3b;  */

void FUN_105371c7c(void)

{
  return;
}



/* Entry: 105371d3c; end: 105371f3b; -[SCRegistrationNoDisplayNameStateTransition _getNextStateFromState:action:] */

void FUN_105371d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105371f3c;
  uStack_40 = 0x105371f4c;
  uStack_38 = 0;
  func_0x00010c0bd8c0(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105371f3c; end: 105371f57;  */

void FUN_105371f3c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105371f58; end: 1053723a3;  */

void FUN_105371f58(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x30) == 1) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    (**(code **)(lVar3 + 0x10))();
    puVar1 = PTR_PTR_1126af858;
    if ((int)lVar3 == 0) {
      func_0x00010c262360();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0f5360();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      return;
    }
    puVar1 = PTR_PTR_1126af858;
    func_0x00010bf9b400();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053723a4; end: 1053723ab;  */

void FUN_1053723a4(void)

{
  return;
}



/* Entry: 1053723ac; end: 105372473; -[SCRegistrationNoDisplayNameStateTransition _shouldShow1TLCheckboxForState:] */

undefined8 FUN_1053723ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126af858;
    func_0x00010bf9b400(PTR_PTR_1126af858);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c078b60(param_1,param_2,param_3);
      goto LAB_105372454;
    }
  }
  else {
    _objc_release(puVar1);
  }
  param_1 = 0;
LAB_105372454:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105372474; end: 1053724e3; -[SCRegistrationNoDisplayNameStateTransition isNextStateTheLastState:] */

undefined8 FUN_105372474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c071ae0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1053724e4; end: 10537264b; -[SCRegistrationNoDisplayNameStateTransition isValidPageState:] */

byte FUN_1053724e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    func_0x00010c0bd8c0(param_3);
    bVar1 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 10537264c; end: 1053726ab;  */

void FUN_10537264c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1053726ac; end: 1053726b7; -[SCRegistrationNoDisplayNameStateTransition initialState] */

void FUN_1053726ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af858,PTR_s_birthday_1125a4318);
  return;
}



/* Entry: 1053726b8; end: 1053726c3; -[SCRegistrationNoDisplayNameStateTransition .cxx_destruct] */

void FUN_1053726b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053726c4; end: 10537273b; -[SCRegistrationNoPasswordStateTransition initWithShouldSkipUsername:] */

undefined1 * FUN_1053726c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7b08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537273c; end: 10537278b; -[SCRegistrationNoPasswordStateTransition getNextStateConfigFromState:action:] */

void FUN_10537273c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10537278c; end: 10537280f; -[SCRegistrationNoPasswordStateTransition stateConfigForState:] */

void FUN_10537278c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7c00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c29c020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c040(puVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105372810; end: 105372adf; -[SCRegistrationNoPasswordStateTransition viewConfigForState:] */

void FUN_105372810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bd8c0(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf85d80(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    if (*(int *)(puStack_78 + 3) == 4) {
      func_0x000108b9a834();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108b9a804();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108b9a81c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010beb5a60(param_1);
  puVar3 = PTR_PTR_1126b7c08;
  _objc_alloc(PTR_PTR_1126b7c08);
  func_0x00010c007340();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105372ae0; end: 105372baf;  */

void FUN_105372ae0(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105372bb0; end: 105372e1b; -[SCRegistrationNoPasswordStateTransition _getNextStateFromState:action:] */

void FUN_105372bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105372e1c;
  uStack_70 = 0x105372e2c;
  uStack_68 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bd8c0(param_3);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105372e1c; end: 105372e33;  */

void FUN_105372e1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105372e34; end: 10537325b;  */

void FUN_105372e34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af858;
  if (*(long *)(param_1 + 0x28) == 1) {
    func_0x00010bf1a5c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      return;
    }
    func_0x00010bf9b400();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10537325c; end: 105373263;  */

void FUN_10537325c(void)

{
  return;
}



/* Entry: 105373264; end: 10537332b; -[SCRegistrationNoPasswordStateTransition _shouldShow1TLCheckboxForState:] */

undefined8 FUN_105373264(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126af858;
    func_0x00010bf9b400(PTR_PTR_1126af858);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c078b60(param_1,param_2,param_3);
      goto LAB_10537330c;
    }
  }
  else {
    _objc_release(puVar1);
  }
  param_1 = 0;
LAB_10537330c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10537332c; end: 10537339b; -[SCRegistrationNoPasswordStateTransition isNextStateTheLastState:] */

undefined8 FUN_10537332c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be20c00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf880e0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c071ae0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10537339c; end: 105373523; -[SCRegistrationNoPasswordStateTransition isValidPageState:] */

byte FUN_10537339c(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    func_0x00010c0bd8c0(param_3);
    bVar1 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return bVar1 & 1;
}



/* Entry: 105373524; end: 10537359b;  */

void FUN_105373524(void)

{
  return;
}



/* Entry: 10537359c; end: 1053735a7; -[SCRegistrationNoPasswordStateTransition initialState] */

void FUN_10537359c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af858,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 1053735a8; end: 1053735b3; -[SCRegistrationNoPasswordStateTransition .cxx_destruct] */

void FUN_1053735a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053735b4; end: 105373af7; -[SCRegistrationUIRouteActions initWithUIContainer:signupTransitionLogger:registrationFeatureLogger:registrationLogger:deviceCheckManager:registrationService:usernameSuggestionFetcher:usernameAvailabilityChecker:birthdayScopeExposer:displayNameBirthdayScopeExposer:webBrowsingScopeExposer:privacyPolicyViewFactory:shouldShowCombinedDisplayNameLabel:shouldShowKoreanUserConsentChecklist:usernameValidator:circumstanceEngine:inputValidationServiceFactory:asciiOnlyPassword:disablePredictiveText:cos:currentPageTracker:notificationPool:registrationRequestObservable:] */

undefined8 *
FUN_1053735b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126e7b10;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0x49) = param_15._1_1_;
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afc08;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    func_0x00010bf0c980(param_3);
    _objc_retain(param_8);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    uVar2 = param_20;
    _objc_retainBlock();
    uVar4 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_21;
    _objc_retainBlock();
    uVar4 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_25;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 105373af8; end: 105373b37;  */

void FUN_105373af8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105373b38; end: 105373ce3; -[SCRegistrationUIRouteActions showDisplayNamePageWithFirstName:lastName:viewConfig:delegate:] */

void FUN_105373b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af728;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c03dbc0();
  func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x68),param_2,
                      &PTR____CFConstantStringClassReference_110dd48f8,0,0);
  puVar2 = PTR_PTR_1126b7c10;
  _objc_alloc(PTR_PTR_1126b7c10);
  func_0x00010c013560();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b7c18;
  _objc_alloc(PTR_PTR_1126b7c18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0425e0(puVar3,param_2,uVar4,param_5,*(undefined8 *)(param_1 + 0x80),
                      *(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49),
                      *(undefined8 *)(param_1 + 0xb8));
  _objc_release(param_5);
  _objc_release(uVar4);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x88),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x88),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105373ce4; end: 105373d87; -[SCRegistrationUIRouteActions showBirthdayPageWithBirthday:viewConfig:delegate:] */

void FUN_105373ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af510;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b080();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x98),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105373d88; end: 105373da7; -[SCRegistrationUIRouteActions removeBirthdayPage] */

void FUN_105373d88(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x98));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105373da8; end: 105373e8f; -[SCRegistrationUIRouteActions showDisplayNameBirthdayPageWithFirstName:lastName:birthday:viewConfig:delegate:] */

void FUN_105373da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7c20;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b0a0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105373e90; end: 105373eaf; -[SCRegistrationUIRouteActions removeDisplayNameBirthdayPage] */

void FUN_105373e90(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105373eb0; end: 105374023; -[SCRegistrationUIRouteActions showPasswordPage:viewConfig:withRegistrationUser:] */

void FUN_105373eb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af728;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03dbc0();
  func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x68),param_2,
                      &PTR____CFConstantStringClassReference_110dd4918,0,0);
  puVar2 = PTR_PTR_1126b7c28;
  _objc_alloc(PTR_PTR_1126b7c28);
  func_0x00010c00ac20();
  _objc_release(param_5);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b7c30;
  _objc_alloc(PTR_PTR_1126b7c30);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042560(puVar3,param_2,uVar4,param_4,*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xb8));
  _objc_release(param_4);
  _objc_release(uVar4);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x88),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x88),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


