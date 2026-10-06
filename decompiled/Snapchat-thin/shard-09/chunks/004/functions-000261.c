/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cb61a4; end: 106cb61c3; -[SCBatchJob isBatchCompleted] */

bool FUN_106cb61a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  return lVar1 == 0;
}



/* Entry: 106cb61c4; end: 106cb620b; -[SCBatchJob .cxx_destruct] */

void FUN_106cb61c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb620c; end: 106cb628f; -[SCInternalBGTaskManager initWithBGTaskWrapper:] */

undefined1 * FUN_106cb620c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cb6290; end: 106cb62d3; -[SCInternalBGTaskManager beginTask] */

void FUN_106cb6290(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17d00();
  *(undefined8 *)(param_1 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cb62d4; end: 106cb6337; -[SCInternalBGTaskManager endTask] */

void FUN_106cb62d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
    _objc_release(uVar1);
    *(long *)(param_1 + 0x10) = lVar2;
  }
  return;
}



/* Entry: 106cb6338; end: 106cb6343; -[SCInternalBGTaskManager .cxx_destruct] */

void FUN_106cb6338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb6344; end: 106cb63f7; -[SCInternalBGJobProcessorWrapper initWithJobProcessor:backgroundExecutionWrapper:] */

undefined1 *
FUN_106cb6344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6250;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2048;
    _objc_alloc();
    func_0x00010bff6320();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cb63f8; end: 106cb6563; -[SCInternalBGJobProcessorWrapper processJobWithJobConfig:input:context:onComplete:] */

void FUN_106cb63f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf18be0(uVar3);
  puVar2 = PTR_PTR_1126b2798;
  _objc_opt_new(PTR_PTR_1126b2798);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106cb6564;
  puStack_70 = &UNK_110842e18;
  uStack_68 = uVar3;
  func_0x00010bef7480();
  lVar4 = *(long *)(param_1 + 8);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106cb656c;
  puStack_a0 = &UNK_11096f2f0;
  uStack_98 = uVar3;
  uStack_90 = param_6;
  _objc_retain(param_6);
  func_0x00010c114dc0(lVar4,param_2,param_3,param_4,param_5,&puStack_b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (lVar4 != 0) {
    func_0x00010bef7460(puVar2,param_2,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(uStack_90);
  _objc_release(uVar3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cb6564; end: 106cb656b;  */

void FUN_106cb6564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_endTask_1125c2f68);
  return;
}



/* Entry: 106cb656c; end: 106cb65c3;  */

void FUN_106cb656c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf95700(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cb65c4; end: 106cb65f3; -[SCInternalBGJobProcessorWrapper .cxx_destruct] */

void FUN_106cb65c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb65f4; end: 106cb6623; -[SCJobExecutor setUserJobProviders:] */

void FUN_106cb65f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cb6624; end: 106cb6653; -[SCJobExecutor setSystemJobProviders:] */

void FUN_106cb6624(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106cb6654; end: 106cb6933; -[SCJobExecutor executeJobWithType:jobInput:jobInfo:wrapInBGProcessor:scope:queuePerformer:onComplete:] */

void FUN_106cb6654(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_1;
  func_0x00010be464c0(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar4,param_2,puVar3,&PTR____CFConstantStringClassReference_110e81f38,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106cb6934;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_9);
    puStack_68 = param_9;
    puStack_70 = puVar4;
    _objc_retain(puVar4);
    func_0x00010c0f7fc0(param_8,param_2,&puStack_90);
    _objc_release(puStack_70);
    puVar3 = puStack_68;
  }
  else {
    puVar4 = param_1;
    func_0x00010be46480(param_1,param_2,param_3,param_7,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110e81f58,6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x106cb6948;
      puStack_a8 = &UNK_11084aaa8;
      _objc_retain(param_9);
      puStack_98 = param_9;
      puStack_a0 = puVar3;
      _objc_retain(puVar3);
      func_0x00010c0f7fc0(param_8,param_2,&puStack_c0);
      _objc_release(puStack_a0);
      _objc_release(puStack_98);
      _objc_release(puVar3);
      puVar4 = (undefined *)0x0;
      goto LAB_106cb68dc;
    }
    puVar3 = puVar4;
    func_0x00010c0856a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0bc00(param_1,param_2,puVar2,param_4,param_5,param_3,param_6,param_7,param_8,
                        param_9);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
LAB_106cb68dc:
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb6934; end: 106cb695b;  */

void FUN_106cb6934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cb6944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106cb695c; end: 106cb6d4f; -[SCJobExecutor _executeJobProcessor:jobInput:jobInfo:jobTypeIdentifier:wrapInBGProcessor:scope:queuePerformer:onComplete:] */

void FUN_106cb695c(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106cb6d50;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(param_10);
    uStack_80 = param_10;
    puStack_88 = puVar4;
    _objc_retain(puVar4);
    func_0x00010c0f7fc0(param_9);
    _objc_release(puStack_88);
    _objc_release(uStack_80);
  }
  else {
    puVar4 = param_3;
    if (param_7 != 0) {
      puVar4 = PTR_PTR_1126d2058;
      _objc_alloc();
      func_0x00010c020800();
      _objc_release(param_3);
    }
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x2020000000;
    uStack_b0 = 0;
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar1 = PTR_PTR_1126b7228;
    _objc_alloc();
    uVar5 = param_5;
    func_0x00010bf45e20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126d1660;
    _objc_alloc();
    func_0x00010bf0d8c0(param_5);
    func_0x00010bff4da0();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(puVar4);
    _objc_retain(param_4);
    _objc_retain(param_9);
    _objc_retain(param_6);
    _objc_retain(param_10);
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    func_0x00010be464e0(param_1);
    _objc_retain(param_6);
    _objc_retain(puVar3);
    _objc_retain(param_10);
    func_0x00010c0f7fe0((double)param_1,param_9);
    _objc_release(param_10);
    _objc_release(puVar3);
    _objc_release(param_6);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(param_10);
    _objc_release(param_6);
    _objc_release(param_9);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_c8,8);
  }
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106cb6d50; end: 106cb6d63;  */

void FUN_106cb6d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cb6d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106cb6d64; end: 106cb6f33;  */

void FUN_106cb6d64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106cb6e5c;
  puStack_70 = &UNK_11096f350;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uStack_50 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar5;
  _objc_retain(uVar6);
  uStack_48 = *(undefined4 *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar6;
  _objc_retain(uVar5);
  uStack_58 = uVar5;
  func_0x00010c114dc0(uVar4,param_2,uVar2,uVar1,uVar3,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x50),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  return;
}



/* Entry: 106cb6f34; end: 106cb6f63;  */

void FUN_106cb6f34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000106cb6f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106cb6f64; end: 106cb6fd7;  */

void FUN_106cb6f64(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 106cb6fd8; end: 106cb7107;  */

void FUN_106cb6fd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) == 0) {
    puVar1 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfbc3e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    func_0x00010c297280(uVar3);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,puVar2);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 106cb7108; end: 106cb711b;  */

void FUN_106cb7108(undefined8 param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cancel_1125a9090);
    return;
  }
  return;
}



/* Entry: 106cb711c; end: 106cb729f; -[SCJobExecutor notifyJobProviderJobDeletion:jobInput:jobDeletionReason:] */

void FUN_106cb711c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c085940(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0857c0(param_3);
  func_0x00010c0857c0(param_3);
  uVar2 = param_1;
  func_0x00010be464c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x00010c0856a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = param_1;
      func_0x00010c0856a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar5 & 1) != 0) {
        uVar2 = param_1;
        func_0x00010c0856a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6c180();
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cb72a0; end: 106cb72e7; -[SCJobExecutor _jobProvidersWithScope:] */

void FUN_106cb72a0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    lVar1 = 8;
  }
  else {
    if (param_3 != 1) {
      uVar2 = 0;
      goto LAB_106cb72d8;
    }
    lVar1 = 0x10;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
LAB_106cb72d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cb72e8; end: 106cb7447; -[SCJobExecutor _jobProviderWithType:scope:jobProviders:] */

ulong FUN_106cb72e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  uVar5 = (uint)&uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_5);
        }
        uVar6 = *(ulong *)(lStack_128 + lVar8 * 8);
        uVar2 = uVar6;
        func_0x00010c085940();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        uVar4 = param_3;
        func_0x00010c0720c0();
        uVar5 = (uint)uVar4;
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar6);
          goto LAB_106cb73f0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_5;
      uVar5 = (uint)&uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar6 = 0;
LAB_106cb73f0:
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return uVar6;
  }
  ___stack_chk_fail();
  func_0x00010c0858a0();
  if (0x31 < uVar5 - 1) {
    uVar5 = 0x32;
  }
  return (ulong)uVar5;
}



/* Entry: 106cb7448; end: 106cb746f; -[SCJobExecutor _jobTimeoutInSecondsWithJobConfig:] */

int FUN_106cb7448(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010c0858a0();
  if (0x31 < param_3 - 1U) {
    param_3 = 0x32;
  }
  return param_3;
}



/* Entry: 106cb7470; end: 106cb74b7; -[SCJobExecutor .cxx_destruct] */

void FUN_106cb7470(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cb74b8; end: 106cb74eb; -[SCJobQueue jobExistsWithUUID:scope:] */

bool FUN_106cb74b8(long param_1)

{
  func_0x00010bfa7c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106cb74ec; end: 106cb75a3; -[SCJobQueue jobExistsWithType:jobSubtypeIdentifier:scope:] */

bool FUN_106cb74ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be05960(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfa7c20(lVar2,param_2,lVar1,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf529e0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 106cb75a4; end: 106cb764f; -[SCJobQueue fetchAllJobs] */

void FUN_106cb75a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfa7c00(uVar1,param_2,*(undefined8 *)(param_1 + 0x10),1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa7c00(uVar3,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cb7650; end: 106cb76af; -[SCJobQueue fetchAllJobsForScope:] */

void FUN_106cb7650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be05960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfa7c00(uVar2,param_2,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cb76b0; end: 106cb772f; -[SCJobQueue fetchJobWithUUID:scope:] */

void FUN_106cb76b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be05960(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfa7c40(uVar2,param_2,lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cb7730; end: 106cb7a5f; -[SCJobQueue enqueueJobWithInput:jobConfig:queue:onComplete:] */

void FUN_106cb7730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_106cb7a60;
  uStack_80 = 0x106cb7a70;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_106cb7a60;
  uStack_b0 = 0x106cb7a70;
  uStack_a8 = 0;
  func_0x00010c0857c0(param_4);
  lVar1 = param_1;
  func_0x00010be05960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_c8[5];
    puStack_c8[5] = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x106cb7a78;
    puStack_f0 = &UNK_110849cb0;
    _objc_retain(param_6);
    puStack_e0 = &uStack_a0;
    puStack_d8 = &uStack_d0;
    uStack_e8 = param_6;
    func_0x00010007380c(param_5,&puStack_108);
    uVar4 = uStack_e8;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_110,param_1);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_106cb7a9c;
    puStack_140 = &UNK_11096f410;
    _objc_retain(uVar4);
    uStack_138 = uVar4;
    _objc_retain(param_4);
    puStack_120 = &uStack_d0;
    puStack_118 = &uStack_a0;
    uStack_130 = param_4;
    _objc_retain(param_3);
    uStack_128 = param_3;
    _objc_copyWeak(auStack_160,auStack_110);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c0f8500(lVar1);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_160);
    _objc_release(uStack_128);
    _objc_release(uStack_130);
    _objc_release(uStack_138);
    _objc_destroyWeak(auStack_110);
  }
  _objc_release(uVar4);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb7a60; end: 106cb7a9b;  */

void FUN_106cb7a60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106cb7a9c; end: 106cb7dc7;  */

void FUN_106cb7a9c(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c085940(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c085840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0857c0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bfa7c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  lVar11 = lVar3;
  func_0x00010bf529e0();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (lVar11 == 0) {
LAB_106cb7c70:
    uVar7 = *(ulong *)(param_1 + 0x30);
    FUN_106cc1064();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    lVar11 = *(long *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = uVar4;
LAB_106cb7c94:
    _objc_release(lVar11);
LAB_106cb7c98:
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0857c0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c28f180(uVar4);
  }
  else {
    func_0x00010bf9b380();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    iVar1 = (int)uVar4;
    puVar5 = PTR_PTR_1126d2050;
    if (iVar1 < 1) {
      if (iVar1 != -0x4524111) {
        if (iVar1 == 0) {
          _objc_retain(lVar3);
          lVar11 = lVar3;
          func_0x00010bf52a60();
          lVar9 = lRam0000000000000000;
          while (lVar11 != 0) {
            lVar10 = 0;
            do {
              if (lRam0000000000000000 != lVar9) {
                _objc_enumerationMutation(lVar3);
              }
              uVar4 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010c0857c0(*(undefined8 *)(param_1 + 0x28));
              func_0x00010bf6c160(uVar4);
              lVar10 = lVar10 + 1;
            } while (lVar11 != lVar10);
            lVar11 = lVar3;
            func_0x00010bf52a60();
          }
          _objc_release(lVar3);
          goto LAB_106cb7c6c;
        }
        goto LAB_106cb7c98;
      }
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 == 3) {
        lVar11 = lVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(ulong *)(param_1 + 0x28);
        _CFAbsoluteTimeGetCurrent();
        lVar9 = lVar11;
        FUN_106cc1354(lVar11,uVar7,*(undefined8 *)(param_1 + 0x30));
        _objc_retainAutoreleasedReturnValue();
        lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        uVar4 = *(undefined8 *)(lVar10 + 0x28);
        *(long *)(lVar10 + 0x28) = lVar9;
        _objc_release(uVar4);
        goto LAB_106cb7c94;
      }
      if (iVar1 == 2) {
LAB_106cb7c6c:
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        goto LAB_106cb7c70;
      }
      if (iVar1 != 1) goto LAB_106cb7c98;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar4 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar6;
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = param_2 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if ((uVar7 & 1) == 0) {
      lVar11 = *(long *)(*(long *)(param_2 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(lVar11 + 0x28) = 0;
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar5 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0857c0(*(undefined8 *)(param_2 + 0x20));
      func_0x00010be1ed40(lVar3);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_2 + 0x38) + 8);
      uVar4 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined **)(lVar11 + 0x28) = puVar6;
      _objc_release(uVar4);
      _objc_release(puVar5);
    }
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
              (*(long *)(param_2 + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106cb7dc8; end: 106cb7eb3;  */

void FUN_106cb7dc8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar3 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0857c0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010be1ed40(lVar1);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar4;
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cb7eb4; end: 106cb7f13;  */

void FUN_106cb7eb4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 106cb7f14; end: 106cb820b; -[SCJobQueue deleteJobWithType:jobSubtypeIdentifier:scope:queue:onComplete:] */

void FUN_106cb7f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined4 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106cb7a60;
  uStack_88 = 0x106cb7a70;
  uStack_80 = 0;
  lVar2 = param_1;
  func_0x00010be05960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puStack_a0[5];
    puStack_a0[5] = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106cb820c;
    puStack_c0 = &UNK_1108647e8;
    _objc_retain(param_7);
    puStack_b0 = &uStack_a8;
    uStack_b8 = param_7;
    func_0x00010007380c(param_6,&puStack_d8);
    _objc_release(uStack_b8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_e0,param_1);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106cb8224;
  puStack_118 = &UNK_11096f470;
  _objc_copyWeak(auStack_f0,auStack_e0);
  _objc_retain(uVar5);
  uStack_110 = uVar5;
  _objc_retain(param_3);
  uStack_108 = param_3;
  _objc_retain(param_4);
  puStack_f8 = &uStack_a8;
  uStack_100 = param_4;
  uStack_e8 = param_5;
  _objc_copyWeak(auStack_140,auStack_e0);
  uStack_138 = param_5;
  _objc_retain(param_7);
  func_0x00010c0f8500(lVar2);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_140);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uVar5);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb820c; end: 106cb8223;  */

void FUN_106cb820c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cb8220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 106cb8224; end: 106cb83f3;  */

void FUN_106cb8224(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfa7c20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf529e0();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar8 == (undefined *)0x0) {
      puVar8 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ed40(lVar1);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined **)(lVar7 + 0x28) = puVar3;
      _objc_release(uVar6);
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (puVar8 = puVar2, puVar3 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(puVar2);
          }
          func_0x00010bf6c160(*(undefined8 *)(param_1 + 0x20));
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar3 = puVar2;
        func_0x00010bf52a60();
      }
    }
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 != 0) {
    if ((uVar4 & 1) == 0) {
      puVar3 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ed40(lVar1);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 8);
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar2;
      _objc_release(uVar6);
      _objc_release(puVar3);
    }
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))
              (*(long *)(param_2 + 0x20),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cb83f4; end: 106cb84b7;  */

void FUN_106cb83f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      puVar2 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ed40(lVar1);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cb84b8; end: 106cb877f; -[SCJobQueue deleteJobWithUUID:scope:queue:onComplete:] */

void FUN_106cb84b8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [8];
  undefined4 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined4 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106cb7a60;
  uStack_88 = 0x106cb7a70;
  uStack_80 = 0;
  lVar2 = param_1;
  func_0x00010be05960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puStack_a0[5];
    puStack_a0[5] = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106cb8780;
    puStack_c0 = &UNK_1108647e8;
    _objc_retain(param_6);
    puStack_b0 = &uStack_a8;
    uStack_b8 = param_6;
    func_0x00010007380c(param_5,&puStack_d8);
    _objc_release(uStack_b8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_e0,param_1);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_106cb8798;
  puStack_110 = &UNK_11096f4d0;
  _objc_copyWeak(auStack_f0,auStack_e0);
  _objc_retain(uVar5);
  uStack_108 = uVar5;
  _objc_retain(param_3);
  puStack_f8 = &uStack_a8;
  uStack_100 = param_3;
  uStack_e8 = param_4;
  _objc_copyWeak(auStack_138,auStack_e0);
  uStack_130 = param_4;
  _objc_retain(param_6);
  func_0x00010c0f8500(lVar2);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uVar5);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb8780; end: 106cb8797;  */

void FUN_106cb8780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cb8794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 106cb8798; end: 106cb889b;  */

void FUN_106cb8798(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfa7c40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ed40(lVar1);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar4;
      _objc_release(uVar5);
      _objc_release(puVar3);
    }
    else {
      func_0x00010bf6c160(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cb889c; end: 106cb895f;  */

void FUN_106cb889c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      puVar2 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ed40(lVar1);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined **)(lVar5 + 0x28) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cb8960; end: 106cb8c1b; -[SCJobQueue updateJobScheduledTimeWithUUID:scheduledTime:attemptCount:scope:queue:onComplete:] */

void FUN_106cb8960(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106cb7a60;
  uStack_88 = 0x106cb7a70;
  uStack_80 = 0;
  lVar2 = param_2;
  func_0x00010be05960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puStack_a0[5];
    puStack_a0[5] = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106cb8c1c;
    puStack_c0 = &UNK_1108647e8;
    _objc_retain(param_8);
    puStack_b0 = &uStack_a8;
    uStack_b8 = param_8;
    func_0x00010007380c(param_7,&puStack_d8);
    _objc_release(uStack_b8);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_e0,param_2);
  _objc_copyWeak(auStack_f8,auStack_e0);
  _objc_retain(uVar5);
  _objc_retain(param_4);
  uStack_f0 = param_1;
  uStack_e8 = param_6;
  uStack_e4 = param_5;
  _objc_retain(param_8);
  func_0x00010c0f8500(lVar2);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uVar5);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 106cb8c1c; end: 106cb8c33;  */

void FUN_106cb8c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cb8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 106cb8c34; end: 106cb8d53;  */

void FUN_106cb8c34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfa7c40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126d2050;
      func_0x00010bf98a40(PTR_PTR_1126d2050);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ed40(lVar1);
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar4;
      _objc_release(uVar5);
    }
    else {
      puVar3 = puVar2;
      FUN_106cc12b8(*(undefined8 *)(param_1 + 0x40),puVar2,*(undefined4 *)(param_1 + 0x4c));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28f180(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cb8d54; end: 106cb8dfb;  */

void FUN_106cb8d54(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_2 & 1) == 0) {
    puVar1 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1ed40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000106cb8df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 106cb8dfc; end: 106cb8e47; -[SCJobQueue _docObjectContextWithScope:] */

void FUN_106cb8dfc(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    param_1 = *(long *)(param_1 + 0x10);
    _objc_retain(param_1);
  }
  else if (param_3 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cb8e48; end: 106cb8e7f; -[SCJobQueue _getErrorCodeWhenTransactionFails:scope:] */

undefined8 FUN_106cb8e48(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((param_4 != 1) && (func_0x00010be45180(), param_1 == 0)) {
    param_3 = 9;
  }
  return param_3;
}



/* Entry: 106cb8e80; end: 106cb8eaf; -[SCJobQueue _isUserSessionAlive] */

bool FUN_106cb8e80(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106cb8eb0; end: 106cb9003; -[SCJobQueue .cxx_destruct] */

void FUN_106cb8eb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106cb9004; end: 106cb900b; -[SCJobSchedulerImplementation _submitJobWithInput:jobConfig:queue:onComplete:] */

void FUN_106cb9004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_submitJobWithInput_jobConfig_que_1126756a8);
  return;
}



/* Entry: 106cb900c; end: 106cb9173; -[SCJobSchedulerImplementation cancelJobWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:] */

void FUN_106cb900c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb9174; end: 106cb91af;  */

void FUN_106cb9174(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb91b0; end: 106cb91b7; -[SCJobSchedulerImplementation _cancelJobWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:] */

void FUN_106cb91b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_cancelJobWithTypeIdentifier_jobS_1125a9318);
  return;
}



/* Entry: 106cb91b8; end: 106cb931f; -[SCJobSchedulerImplementation jobExistsWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:] */

void FUN_106cb91b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb9320; end: 106cb935b;  */

void FUN_106cb9320(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be463c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb935c; end: 106cb9363; -[SCJobSchedulerImplementation _jobExistsWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:] */

void FUN_106cb935c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0855f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_jobExistsWithTypeIdentifier_jobS_1125fef88);
  return;
}



/* Entry: 106cb9364; end: 106cb9463; -[SCJobSchedulerImplementation runningJobsWithQueue:onComplete:] */

void FUN_106cb9364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb9464; end: 106cb956b;  */

void FUN_106cb9464(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  puVar3 = auStack_38;
  _objc_loadWeakRetained();
  _objc_release();
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x28);
    if (puVar3 == (undefined1 *)0x0) goto LAB_106cb953c;
    puVar4 = *(undefined **)(param_1 + 0x20);
    puVar2 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puVar3 = *(undefined1 **)(param_1 + 0x28);
      puVar2 = puVar1;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106cb956c;
    puStack_48 = &UNK_110849530;
    _objc_retain(puVar3);
    puStack_40 = puVar3;
    func_0x00010007380c(puVar2,&puStack_60);
    puVar3 = puStack_40;
    if (puVar4 == (undefined *)0x0) {
      _objc_release(PTR___dispatch_main_q_11034be20);
      puVar3 = puStack_40;
    }
  }
  else {
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    func_0x00010be98280();
  }
  _objc_release(puVar3);
LAB_106cb953c:
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106cb956c; end: 106cb95b3;  */

void FUN_106cb956c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cb95b4; end: 106cb95bb; -[SCJobSchedulerImplementation _runningJobsWithQueue:onComplete:] */

void FUN_106cb95b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_runningJobsWithQueue_onComplete__11262e578);
  return;
}



/* Entry: 106cb95bc; end: 106cb9693; -[SCJobSchedulerImplementation setUserJobProviders:] */

void FUN_106cb95bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb9694; end: 106cb96c7;  */

void FUN_106cb9694(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea9ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb96c8; end: 106cb96f7; -[SCJobSchedulerImplementation _setUserJobProviders:] */

void FUN_106cb96c8(long param_1)

{
  func_0x00010c21e9c0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c292b60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010beaac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBackgroundObserverIfNecess_1125884c0);
  return;
}



/* Entry: 106cb96f8; end: 106cb97cf; -[SCJobSchedulerImplementation setSystemJobProviders:] */

void FUN_106cb96f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106cb97d0; end: 106cb9803;  */

void FUN_106cb97d0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea83a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb9804; end: 106cb9833; -[SCJobSchedulerImplementation _setSystemJobProviders:] */

void FUN_106cb9804(long param_1)

{
  func_0x00010c2110c0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c267000(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010beaac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBackgroundObserverIfNecess_1125884c0);
  return;
}



/* Entry: 106cb9834; end: 106cb98db; -[SCJobSchedulerImplementation _applicationEnteredForeground] */

void FUN_106cb9834(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106cb98dc; end: 106cb990b;  */

void FUN_106cb98dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb990c; end: 106cb99b3; -[SCJobSchedulerImplementation _applicationEnteredBackground] */

void FUN_106cb990c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106cb99b4; end: 106cb99e3;  */

void FUN_106cb99b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb99e4; end: 106cb99f3; -[SCJobSchedulerImplementation _appStateDidChange:] */

void FUN_106cb99e4(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf051f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_appForegrounded_11259ee20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf04df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_appBackgrounded_11259ed20);
  return;
}



/* Entry: 106cb99f4; end: 106cb9a9b; -[SCJobSchedulerImplementation _handleBatteryStateDidChangeNotification] */

void FUN_106cb99f4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106cb9a9c; end: 106cb9ac7;  */

void FUN_106cb9a9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd2fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb9ac8; end: 106cb9b3b; -[SCJobSchedulerImplementation _batteryStateDidChange] */

void FUN_106cb9ac8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf176e0();
  puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  func_0x00010bf17700(uVar4,param_2,puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cb9b3c; end: 106cb9c53;  */

void FUN_106cb9b3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x30) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106cb9c54; end: 106cb9c9b;  */

void FUN_106cb9c54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cb9c9c; end: 106cb9d37; -[SCJobSchedulerImplementation _onBackgroundWakeupReceived:] */

void FUN_106cb9c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106cb9d38;
  puStack_20 = &UNK_11096f590;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106cb9d4c;
  puStack_48 = &UNK_11096f5c0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106cb9d60;
  puStack_70 = &UNK_110855e40;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c0ba0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 106cb9d38; end: 106cb9d6b;  */

void FUN_106cb9d38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onBackgroundTaskStarted_complet_112577960,
             param_2,param_3,0);
  return;
}



/* Entry: 106cb9d6c; end: 106cb9e0f; -[SCJobSchedulerImplementation _onBackgroundTaskStarted:completionHandler:notificaionContext:] */

void FUN_106cb9d6c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 < 5) && ((1L << (param_3 & 0x3f) & 0x19U) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72440();
    _objc_release(uVar1);
  }
  func_0x00010c27bd60(*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cb9e10; end: 106cb9e5f; -[SCJobSchedulerImplementation _onBackgroundTaskExpired:] */

void FUN_106cb9e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c085780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27bd80(uVar2,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cb9e60; end: 106cb9f2b; -[SCJobSchedulerImplementation .cxx_destruct] */

void FUN_106cb9e60(long param_1)

{
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



/* Entry: 106cb9f2c; end: 106cba1cb; -[SCJobSchedulingCoordinator submitJobWithInput:jobConfig:queue:onComplete:] */

void FUN_106cb9f2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c085560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar3 == 0) {
    puVar5 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if ((param_5 != 0) && (param_6 != 0)) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106cba1cc;
      puStack_68 = &UNK_11084aaa8;
      _objc_retain(param_6);
      lStack_58 = param_6;
      _objc_retain(puVar6);
      puStack_60 = puVar6;
      func_0x00010007380c(param_5,&puStack_80);
      _objc_release(puStack_60);
      _objc_release(lStack_58);
    }
    FUN_106cbec30(param_4,&PTR____CFConstantStringClassReference_110e82138,puVar6,
                  *(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar6);
  }
  else {
    FUN_106cbe87c(param_4,*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_88,param_1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bf962c0(uVar7);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_90);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cba1cc; end: 106cba1db;  */

void FUN_106cba1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cba1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106cba1dc; end: 106cba31b;  */

void FUN_106cba1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x000106cba280();
  if ((int)uVar1 != 0) {
    FUN_106cbec30(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e82138,
                  param_3,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
  }
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0857c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be69040(lVar2);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cba31c; end: 106cba45b; -[SCJobSchedulingCoordinator cancelJobWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:] */

void FUN_106cba31c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106cba45c;
  puStack_78 = &UNK_1108be878;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_6;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6c1a0(uVar2,param_2,param_3,param_4,param_5,uVar1,&puStack_90);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cba45c; end: 106cba50b;  */

void FUN_106cba45c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106cba50c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106cba50c; end: 106cba51b;  */

void FUN_106cba50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cba518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106cba51c; end: 106cba5eb; -[SCJobSchedulingCoordinator jobExistsWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:] */

void FUN_106cba51c(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(in_x6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x5);
  uStack_48 = (char)uVar1;
  func_0x00010c0855c0();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106cba5ec;
  puStack_58 = &UNK_11084a9b8;
  uStack_50 = in_x6;
  _objc_retain(in_x6);
  func_0x00010007380c(in_x5,&puStack_70);
  _objc_release(in_x5);
  _objc_release(uStack_50);
  _objc_release(in_x6);
  return;
}



/* Entry: 106cba5ec; end: 106cba5ff;  */

void FUN_106cba5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cba5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106cba600; end: 106cba8d7; -[SCJobSchedulingCoordinator runningJobsWithQueue:onComplete:] */

void FUN_106cba600(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c142d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010bfa4bc0();
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        _objc_retain();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar9 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar4);
              }
              uVar12 = *(undefined8 *)(lStack_1e8 + lVar9 * 8);
              uVar6 = uVar12;
              func_0x00010c294d60();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c0720c0();
              _objc_release(uVar6);
              if ((int)uVar7 != 0) {
                func_0x00010c27dd80(uVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar2);
                _objc_release(uVar12);
                goto LAB_106cba7d0;
              }
              lVar9 = lVar9 + 1;
            } while (lVar5 != lVar9);
            lVar5 = lVar4;
            func_0x00010bf52a60();
          } while (lVar5 != 0);
        }
LAB_106cba7d0:
        _objc_release(lVar4);
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar3);
      lVar3 = lVar1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_106cba8d8;
  puStack_208 = &UNK_11084aaa8;
  puStack_200 = puVar2;
  uStack_1f8 = param_4;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_220);
  _objc_release(puStack_200);
  _objc_release(uStack_1f8);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    lVar3 = *(long *)(param_3 + 0x28);
    func_0x00010bf51e00(uVar6);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 106cba8d8; end: 106cba90f;  */

void FUN_106cba8d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cba910; end: 106cbacc7; -[SCJobSchedulingCoordinator scheduleBatchJob:batchStartedCallback:batchCompletionCallback:backgroundTriggerSource:] */

void FUN_106cba910(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_106cbacc8;
  uStack_100 = 0x106cbacd8;
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar4 = *(long *)(param_1 + 8);
  puStack_f8 = puVar3;
  func_0x00010bfa4bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      puVar3 = PTR_PTR_1126b7228;
      _objc_alloc(PTR_PTR_1126b7228);
      uVar8 = uVar10;
      func_0x00010bf45e20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar3);
      _objc_release(uVar8);
      lVar5 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,uVar10,puVar3);
      if ((int)lVar5 != 0) {
        func_0x00010befa120(puVar2);
        iVar7 = (int)*(undefined8 *)(param_1 + 0x28);
        uVar8 = uVar10;
        func_0x00010c294d60(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c075e00();
        _objc_release(uVar8);
        if (iVar7 != 0) {
          uVar8 = puStack_118[5];
          func_0x00010c294d60(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar8);
          _objc_release(uVar10);
        }
      }
      _objc_release(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar6 != lVar9);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  func_0x00010be9b200(param_1);
  puVar3 = PTR_PTR_1126d2088;
  _objc_alloc(PTR_PTR_1126d2088);
  func_0x00010c020960();
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  lVar6 = puStack_118[5];
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar3);
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf1f3c0();
    _objc_release(uVar10);
    if ((int)uVar8 != 0) {
      func_0x00010bfb4ba0(*(undefined8 *)(param_1 + 0x90));
    }
    func_0x00010bf16fc0(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(puStack_f8);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 106cbacc8; end: 106cbacdf;  */

void FUN_106cbacc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106cbace0; end: 106cbad27;  */

void FUN_106cbace0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c294d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cbad28; end: 106cbad4b; -[SCJobSchedulingCoordinator appForegrounded] */

void FUN_106cbad28(undefined8 param_1,long param_2)

{
  _CFAbsoluteTimeGetCurrent();
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 106cbad4c; end: 106cbad4f; -[SCJobSchedulingCoordinator appBackgrounded] */

void FUN_106cbad4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleJobs_112584618);
  return;
}


