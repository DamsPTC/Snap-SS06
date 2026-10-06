/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc7b3a4; end: 10bc7b453; -[SCFileIOErrorMetric logFileIOWithError:] */

void FUN_10bc7b3a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be0ae80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0e00e0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    func_0x00010c0df760(puVar4,param_2,(int)uVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,lVar1);
    _objc_release(puVar4);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10bc7b454; end: 10bc7b4e7; -[SCFileIOErrorMetric topErrorCodesWithLimit:] */

void FUN_10bc7b454(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c086f00(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110d95dc8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  uVar2 = uVar1;
  func_0x00010c25e980(uVar1,param_2,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf720e0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10bc7b4e8; end: 10bc7b507;  */

bool FUN_10bc7b4e8(undefined8 param_1,long param_2)

{
  func_0x00010bf433a0(param_2);
  return param_2 == 0;
}



/* Entry: 10bc7b508; end: 10bc7b54b; -[SCFileIOErrorMetric _errorDescription:] */

void FUN_10bc7b508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf3ec40();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  return;
}



/* Entry: 10bc7b54c; end: 10bc7b5bb; -[SCFileIOErrorMetric compare:] */

undefined8 FUN_10bc7b54c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c27dd80();
  if (uVar3 == uVar1) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar1 = param_3;
    func_0x00010c27dd80();
    uVar2 = 1;
    if (uVar3 < uVar1) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10bc7b5bc; end: 10bc7b6a3; -[SCFileIOErrorMetric isEqual:] */

long FUN_10bc7b5bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar2 = 1;
    goto LAB_10bc7b688;
  }
  lVar2 = param_1;
  _objc_opt_class(param_1);
  lVar1 = param_3;
  func_0x00010c077980(param_3,param_2,lVar2);
  if ((int)lVar1 == 0) {
    lVar2 = 0;
    goto LAB_10bc7b688;
  }
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c27dd80();
  if (lVar2 == *(long *)(param_1 + 8)) {
    lVar2 = param_3;
    func_0x00010bfacd80();
    if (lVar2 != *(long *)(param_1 + 0x10)) goto LAB_10bc7b67c;
    lVar2 = param_3;
    func_0x00010bfacda0();
    if (lVar2 != *(long *)(param_1 + 0x18)) goto LAB_10bc7b67c;
    lVar1 = param_3;
    func_0x00010bfacdc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c071d00();
    _objc_release(lVar1);
  }
  else {
LAB_10bc7b67c:
    lVar2 = 0;
  }
  _objc_release(param_3);
LAB_10bc7b688:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10bc7b6a4; end: 10bc7b747; -[SCFileIOErrorMetric hash] */

ulong FUN_10bc7b6a4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong auStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ulong *)(param_1 + 8);
  auStack_48[2] = *(undefined8 *)(param_1 + 0x18);
  auStack_48[1] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfde980();
  auStack_48[3] = lVar1;
  lVar2 = 8;
  do {
    uVar3 = *(ulong *)((long)auStack_48 + lVar2) | uVar3 << 0x20;
    uVar3 = ~uVar3 + uVar3 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar3;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar1 + 8);
}



/* Entry: 10bc7b748; end: 10bc7b74f; -[SCFileIOErrorMetric type] */

undefined8 FUN_10bc7b748(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc7b750; end: 10bc7b757; -[SCFileIOErrorMetric fileIOCount] */

undefined8 FUN_10bc7b750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bc7b758; end: 10bc7b75f; -[SCFileIOErrorMetric fileIOErrorCount] */

undefined8 FUN_10bc7b758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bc7b760; end: 10bc7b767; -[SCFileIOErrorMetric fileIOErrorCountByCode] */

undefined8 FUN_10bc7b760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bc7b768; end: 10bc7b773; -[SCFileIOErrorMetric .cxx_destruct] */

void FUN_10bc7b768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10bc7b774; end: 10bc7b873; -[SCFileIOErrorMonitor init] */

undefined8 * FUN_10bc7b774(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270e180;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = puVar1[1];
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10bc7b874; end: 10bc7b87b;  */

void FUN_10bc7b874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetErrorMetrics_112582460);
  return;
}



/* Entry: 10bc7b87c; end: 10bc7b8cf; +[SCFileIOErrorMonitor shared] */

void FUN_10bc7b87c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fd950 != -1) {
    func_0x000107c27d9c(0x1137fd950,&PTR___NSConcreteGlobalBlock_110d95de8);
  }
  uVar1 = uRam00000001137fd948;
  _objc_retain(uRam00000001137fd948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc7b8d0; end: 10bc7b8fb;  */

void FUN_10bc7b8d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e06d8;
  _objc_alloc_init();
  uVar1 = puRam00000001137fd948;
  puRam00000001137fd948 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7b8fc; end: 10bc7b96b; -[SCFileIOErrorMonitor _resetErrorMetrics] */

void FUN_10bc7b8fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126e2d68;
  _objc_alloc(PTR_PTR_1126e2d68);
  func_0x00010c012c20();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc7b96c; end: 10bc7b987; -[SCFileIOErrorMonitor _nameForFileIOType:] */

undefined ** FUN_10bc7b96c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_1110266f8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  return ppuVar1;
}



/* Entry: 10bc7b988; end: 10bc7ba1f; -[SCFileIOErrorMonitor logFileWriteWithError:type:] */

void FUN_10bc7b988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10bc7ba20;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc7ba20; end: 10bc7ba63;  */

void FUN_10bc7ba20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c14da60(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a66a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7ba64; end: 10bc7bb33; -[SCFileIOErrorMonitor generateReport:] */

void FUN_10bc7ba64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10bc7bb34;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_40);
  _objc_release(uStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc7bb34; end: 10bc7bc0f;  */

void FUN_10bc7bb34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c14da60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be61d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 != 0) {
    func_0x00010bef7f60(puVar1);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  func_0x00010be92b00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc7bc10; end: 10bc7bc3f; -[SCFileIOErrorMonitor .cxx_destruct] */

void FUN_10bc7bc10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc7bc40; end: 10bc7bc4b; -[SCFileTrasher moveFileToTrash:error:] */

void FUN_10bc7bc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be61330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__moveItemAtURL_isDirectory_error_112575e68,param_3,0,param_4);
  return;
}



/* Entry: 10bc7bc4c; end: 10bc7bc57; -[SCFileTrasher moveDirectoryToTrash:error:] */

void FUN_10bc7bc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be61330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__moveItemAtURL_isDirectory_error_112575e68,param_3,1,param_4);
  return;
}



/* Entry: 10bc7bc58; end: 10bc7bdd7; -[SCFileTrasher clearTrashAsync:] */

void FUN_10bc7bc58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
    uVar2 = 0x11;
    func_0x000107c312b8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10bc7bd54;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = lVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(lVar1);
    func_0x000107c27d8c(uVar2,&puStack_60);
    _objc_release(uVar2);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bc7bdd8; end: 10bc7bee7; -[SCFileTrasher _determineTrashDirectory] */

void FUN_10bc7bdd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    lVar5 = param_1;
    func_0x000107c3129c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c25ce00(lVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55d80();
    _objc_retain(0);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(0);
    _objc_release(lVar2);
    lVar5 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10bc7bee8; end: 10bc7c00f; -[SCFileTrasher _moveItemAtURL:isDirectory:error:] */

bool FUN_10bc7bee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x00010bdfbc80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdc2c80(param_1,param_2,puVar4,param_4);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c0d1580(puVar3,param_2,param_3,lVar5,&lStack_58);
    lVar1 = lStack_58;
    _objc_retain(lStack_58);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    bVar2 = lVar1 == 0;
    if ((param_5 != (long *)0x0) && (lVar1 != 0)) {
      _objc_retainAutorelease(lVar1);
      *param_5 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 10bc7c010; end: 10bc7c01b; -[SCFileTrasher .cxx_destruct] */

void FUN_10bc7c010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc7c01c; end: 10bc7c06f; +[SCFreeDiskSpaceMonitor performer] */

void FUN_10bc7c01c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fd968 != -1) {
    func_0x000107c27d9c(0x1137fd968,&PTR___NSConcreteGlobalBlock_110d95e08);
  }
  uVar1 = uRam00000001137fd960;
  _objc_retain(uRam00000001137fd960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc7c070; end: 10bc7c0b3;  */

void FUN_10bc7c070(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar1 = puRam00000001137fd960;
  puRam00000001137fd960 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7c0b4; end: 10bc7c107; +[SCFreeDiskSpaceMonitor sharedInstance] */

void FUN_10bc7c0b4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fd970 != -1) {
    func_0x000107c27d9c(0x1137fd970,&PTR___NSConcreteGlobalBlock_110d95e28);
  }
  uVar1 = uRam00000001137fd978;
  _objc_retain(uRam00000001137fd978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc7c108; end: 10bc7c133;  */

void FUN_10bc7c108(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e2d70;
  _objc_alloc_init();
  uVar1 = puRam00000001137fd978;
  puRam00000001137fd978 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7c134; end: 10bc7c1bb; -[SCFreeDiskSpaceMonitor init] */

undefined1 * FUN_10bc7c134(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126e2d78;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 8) = 99;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc7c1bc; end: 10bc7c267; -[SCFreeDiskSpaceMonitor addListener:] */

void FUN_10bc7c1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e2d70;
  func_0x00010c0f98a0(PTR_PTR_1126e2d70);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10bc7c268;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1,param_2,&puStack_60);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc7c268; end: 10bc7c29f;  */

void FUN_10bc7c268(long param_1)

{
  func_0x00010bec05c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf79580(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_addListener__11259c008,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10bc7c2a0; end: 10bc7c2a7; -[SCFreeDiskSpaceMonitor removeListener:] */

void FUN_10bc7c2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10bc7c2a8; end: 10bc7c3b3; -[SCFreeDiskSpaceMonitor _startMonitoring] */

void FUN_10bc7c2a8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bfec280();
  if (iVar1 == 1) {
    func_0x00010be86f80(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be63a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d860(puVar2,param_2,param_1,lVar3);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10bc7c3b4; end: 10bc7c42f; -[SCFreeDiskSpaceMonitor _processDiskChangeNotificationUpdate] */

void FUN_10bc7c3b4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2d70;
  func_0x00010c0f98a0(PTR_PTR_1126e2d70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(puVar1);
  return;
}



/* Entry: 10bc7c430; end: 10bc7c47f;  */

void FUN_10bc7c430(double param_1,long param_2)

{
  _CACurrentMediaTime();
  if (5.0 < param_1 - *(double *)(*(long *)(param_2 + 0x20) + 0x20)) {
    func_0x00010be86f80();
    *(double *)(*(long *)(param_2 + 0x20) + 0x20) = param_1;
  }
  return;
}



/* Entry: 10bc7c480; end: 10bc7c53b; -[SCFreeDiskSpaceMonitor _recheckFileSystemFreeDiskSpace] */

void FUN_10bc7c480(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,0);
  lVar3 = 2;
  if (0x7c < (ulong)puVar2 >> 0x16) {
    lVar3 = 3;
  }
  lVar1 = 1;
  if (0x18 < (ulong)puVar2 >> 0x17) {
    lVar1 = lVar3;
  }
  lVar3 = 0;
  if (4 < (ulong)puVar2 >> 0x17) {
    lVar3 = lVar1;
  }
  *(long *)(param_1 + 8) = lVar3;
  if (lVar4 != lVar3) {
    func_0x00010bf79580(*(undefined8 *)(param_1 + 0x10));
  }
  puVar2 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be63a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2254a0(puVar2,param_2,lVar3,param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bc7c53c; end: 10bc7c59f; -[SCFreeDiskSpaceMonitor runWithServiceTerm:] */

void FUN_10bc7c53c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010be86f80(param_2);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  func_0x00010be63a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95760(param_4,param_3,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bc7c5a0; end: 10bc7c5e7; -[SCFreeDiskSpaceMonitor dedicatedQueue] */

void FUN_10bc7c5a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_opt_class();
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc7c5e8; end: 10bc7c5f7; -[SCFreeDiskSpaceMonitor _nextNotifier] */

void FUN_10bc7c5e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4024000000000000,PTR_PTR_1126c3c40,PTR_s_scheduleAfterSeconds__112631918);
  return;
}



/* Entry: 10bc7c5f8; end: 10bc7c67b; -[SCFreeDiskSpaceMonitor .cxx_destruct] */

void FUN_10bc7c5f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc7c67c; end: 10bc7c6f7; +[SCGlobalDirectories globalDocumentDirectory:error:] */

void FUN_10bc7c67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be240e0(param_1,param_2,param_3,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc7c6f8; end: 10bc7c773; +[SCGlobalDirectories globalCacheDirectory:error:] */

void FUN_10bc7c6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be240e0(param_1,param_2,param_3,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc7c774; end: 10bc7c80b; +[SCGlobalDirectories globalDocumentDirectory:migratedFromSubdirectory:error:] */

void FUN_10bc7c774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be240e0(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc7c80c; end: 10bc7c8a3; +[SCGlobalDirectories globalCacheDirectory:migratedFromSubdirectory:error:] */

void FUN_10bc7c80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be240e0(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc7c8a4; end: 10bc7c96f; +[SCGlobalDirectories _migrateFromPath:toPath:] */

undefined1
FUN_10bc7c8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b24e8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c25ce80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55dc0(puVar2,param_2,uVar1,1,0,0);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1560();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  return 1;
}



/* Entry: 10bc7c970; end: 10bc7ca43; -[SCManagedDatastoreCollector retrieveManagedDatastore:] */

void FUN_10bc7c970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10bc7ca44;
  puStack_50 = &UNK_110848ba8;
  puStack_48 = puVar1;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(puStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc7ca44; end: 10bc7ca8b;  */

void FUN_10bc7ca44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c0dff20(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bc7ca8c; end: 10bc7cb9b; -[SCManagedDatastoreCollector allManagedDatastores] */

void FUN_10bc7ca8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10bc7cb34;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
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



/* Entry: 10bc7cb9c; end: 10bc7cc67; -[SCManagedDatastoreCollector blockingAllManagedDatastores] */

void FUN_10bc7cb9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10bc7cc68;
  uStack_30 = 0x10bc7cc78;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10bc7cc80;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc7cc68; end: 10bc7cc7f;  */

void FUN_10bc7cc68(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bc7cc80; end: 10bc7ccdb;  */

void FUN_10bc7cc80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7ccdc; end: 10bc7cd0b; -[SCManagedDatastoreCollector .cxx_destruct] */

void FUN_10bc7ccdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc7cd0c; end: 10bc7cd8f; -[SCSpaceSaverModeNotifier init] */

undefined1 * FUN_10bc7cd0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0x41b2cc0300000000;
    *(undefined1 *)((long)puVar1 + 0x10) = 1;
    puVar2 = PTR_PTR_1126e2d70;
    func_0x00010c22ba80(PTR_PTR_1126e2d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc7cd90; end: 10bc7cd97; -[SCSpaceSaverModeNotifier waitUntil:] */

undefined8 FUN_10bc7cd90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc7cd98; end: 10bc7ce1f; -[SCSpaceSaverModeNotifier didReceiveUpdatedFreeDiskSpaceSpaceMode:] */

void FUN_10bc7cd98(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8b40();
  _objc_release(puVar1);
  return;
}



/* Entry: 10bc7ce20; end: 10bc7ce67;  */

void FUN_10bc7ce20(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) == '\x01') {
    if (*(ulong *)(param_1 + 0x28) != 3) {
      return;
    }
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    if (1 < *(ulong *)(param_1 + 0x28)) {
      return;
    }
    uVar1 = 1;
    uVar2 = 0x41b2cc0300000000;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = uVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
  return;
}



/* Entry: 10bc7ce68; end: 10bc7cf3b; +[SCSpaceSaverModeNotifier notifierWithSpaceSaver:] */

void FUN_10bc7ce68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e2d80;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126c3c38;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0dcdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e2d80,PTR_s_notifierWithSpaceSaver__112614d80,puVar1);
  return;
}



/* Entry: 10bc7cf3c; end: 10bc7cf4b;  */

void FUN_10bc7cf3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e2d80,PTR_s_notifierWithSpaceSaver__112614d80,param_1);
  return;
}



/* Entry: 10bc7cf4c; end: 10bc7d02b; +[SCStorageCleanupMetrics entryForError:filename:] */

void FUN_10bc7cf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf3ec40(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2817f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7d02c; end: 10bc7d02f; -[SCUserSession cacheDirectory:error:] */

void FUN_10bc7d02c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2817f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unmanaged_cacheDirectory_error__11267e020);
  return;
}



/* Entry: 10bc7d030; end: 10bc7d133; +[SCUserSession cleanUpOutOfScopeDocumentFilesExceptForUser:] */

void FUN_10bc7d030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e1468;
  _objc_alloc_init(PTR_PTR_1126e1468);
  puVar3 = puVar2;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bddf1e0(param_1,param_2,puVar4,puVar1,puVar2);
  func_0x00010bddf1e0(param_1,param_2,puVar5,puVar1,puVar2);
  func_0x00010bf3c460(puVar2,param_2,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc7d134; end: 10bc7d2cb; +[SCUserSession _cleanUpOutOfScopeDirectoriesIn:forUserIdHash:trash:] */

undefined *
FUN_10bc7d134(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c25ce00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfad000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b24e8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(puVar3);
  uVar1 = param_3;
  func_0x00010c27b060(puVar2);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar6 = param_2;
    func_0x00010bfad000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      func_0x00010c0d1400(*(undefined8 *)(puVar3 + 0x28));
    }
  }
  _objc_release(param_2);
  return (undefined *)0x1;
}



/* Entry: 10bc7d2cc; end: 10bc7d37b;  */

undefined8 FUN_10bc7d2cc(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bfad000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010c0d1400(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 10bc7d37c; end: 10bc7d487; +[SCUserSession userScopedApplicationSupportPathRootForUser:] */

void FUN_10bc7d37c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c13b400();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_111026698;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5a20(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 0x10) != 0) {
    puVar5 = PTR_PTR_1126e1468;
    _objc_alloc_init(PTR_PTR_1126e1468);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(puVar1 + 0x10),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1400(puVar5,param_2,puVar2,0);
    _objc_release(puVar2);
    func_0x00010bf3c460(puVar5,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10bc7d488; end: 10bc7d507; -[SCUserSessionScopedDirectory invalidate] */

void FUN_10bc7d488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126e1468;
    _objc_alloc_init(PTR_PTR_1126e1468);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad320(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x10),1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1400(puVar1,param_2,puVar2,0);
    _objc_release(puVar2);
    func_0x00010bf3c460(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10bc7d508; end: 10bc7d537; -[SCUserSessionScopedDirectory .cxx_destruct] */

void FUN_10bc7d508(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc7d538; end: 10bc7d7e3; -[SCFreeDiskSpaceMonitorListenerAnnouncer addListener:] */

undefined8 FUN_10bc7d538(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110d95f28;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10bc7d7e4(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10bc7d924(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10bc7d6ec:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10bc7d70c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10bc7d7e4(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10bc7d7e4(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10bc7d924(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10bc7d6ec;
    }
  }
  uVar9 = 1;
LAB_10bc7d70c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10bc7d7e4; end: 10bc7d923;  */

void FUN_10bc7d7e4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10bc7dcec();
LAB_10bc7d920:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10bc7d920;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10bc7d924; end: 10bc7d96b;  */

void FUN_10bc7d924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10bc7d96c; end: 10bc7db9b; -[SCFreeDiskSpaceMonitorListenerAnnouncer removeListener:] */

void FUN_10bc7d96c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10bc7db20;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10bc7d9d4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10bc7d924(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10bc7db20;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10bc7d9d4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110d95f28;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10bc7d7e4(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10bc7d924(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10bc7db20;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10bc7db20:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc7db9c; end: 10bc7dca3; -[SCFreeDiskSpaceMonitorListenerAnnouncer didReceiveUpdatedFreeDiskSpaceSpaceMode:] */

void FUN_10bc7db9c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1 + 0x48;
  __ZNSt3__112__get_sp_mutEPKv(lVar8);
  __ZNSt3__18__sp_mut4lockEv();
  plVar2 = *(long **)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  __ZNSt3__18__sp_mut6unlockEv(lVar8);
  if (plVar2 != (long *)0x0) {
    lVar4 = plVar2[1];
    for (lVar8 = *plVar2; lVar8 != lVar4; lVar8 = lVar8 + 8) {
      lVar7 = lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00010bf79580();
      _objc_release(lVar7);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10bc7dca4; end: 10bc7dccb; -[SCFreeDiskSpaceMonitorListenerAnnouncer .cxx_destruct] */

void FUN_10bc7dca4(long param_1)

{
  FUN_10bc7dd9c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10bc7dccc; end: 10bc7dceb; -[SCFreeDiskSpaceMonitorListenerAnnouncer .cxx_construct] */

void FUN_10bc7dccc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10bc7dcec; end: 10bc7dcff;  */

void FUN_10bc7dcec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110d95f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bc7dd00; end: 10bc7dd0f;  */

void FUN_10bc7dd00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d95f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bc7dd10; end: 10bc7dd2f;  */

void FUN_10bc7dd10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d95f28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bc7dd30; end: 10bc7dd97;  */

void FUN_10bc7dd30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10bc7dd98; end: 10bc7dd9b;  */

void FUN_10bc7dd98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bc7dd9c; end: 10bc7ddf3;  */

long FUN_10bc7dd9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10bc7ddf4; end: 10bc7df8b;  */

void FUN_10bc7ddf4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110d95f68;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f829f84;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x23 = auStack_60;
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      param_4 = (undefined8 *)((long)param_3 * 100);
      puVar2 = &UNK_110d95f68;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d95f68,&uStack_80,param_4);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar4 = puVar8;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar4 = puVar8;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_100;
  pcStack_88 = FUN_10bc7df8c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar8 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar6 = &UNK_110d95fb8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f829f84;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x23 = auStack_e0;
      func_0x000107c278b8(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar6 = &UNK_110d95fb8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d95fb8,&uStack_100,puVar4);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      puVar8 = puVar9;
      param_4 = puVar4;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar8 = puVar9;
        param_4 = puVar4;
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_108 = FUN_10bc7e120;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar4 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar2 = &UNK_110d96008;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96008,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar4 = puVar9;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = puVar9;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume();
  puVar9 = &uStack_200;
  pcStack_188 = FUN_10bc7e294;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar8 = puVar4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f829f84;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_1e0;
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar6 = &UNK_110d96058;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96058,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar8 = puVar9;
    param_4 = puVar4;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = puVar9;
      param_4 = puVar4;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_208 = FUN_10bc7e408;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar4 = puVar8;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  puVar9 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_278;
    func_0x000107c278b8(auStack_278,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f829f84;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar4 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_260,puVar4);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x000107c27984(&uStack_298,auStack_278,&lStack_248,2);
    puVar2 = &UNK_110d960a8;
    unaff_x23 = &uStack_298;
    puVar4 = &uStack_298;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d960a8,puVar4,param_4);
    puStack_280 = unaff_x23;
    func_0x000107c278ac(&puStack_280);
    lVar12 = 0;
    puVar9 = auStack_278;
    do {
      if ((&cStack_249)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar11 = &uStack_320;
  pcStack_2a8 = FUN_10bc7e638;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar10 = puVar4;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar9;
  puStack_2c8 = puVar3;
  puStack_2c0 = puVar8;
  puStack_2b8 = puVar6;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar2);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f829f84;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar3);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar7 = &UNK_110d960f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d960f8,&uStack_320,puVar4);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar10 = puVar11;
    puVar9 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar10 = puVar11;
      puVar9 = &uStack_320;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_3a0;
  pcStack_328 = FUN_10bc7e7ac;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar4 = puVar10;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar9;
  plStack_348 = plVar1;
  puStack_340 = puVar3;
  puStack_338 = puVar2;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar7);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar2);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar6 = &UNK_110d96148;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96148,&uStack_3a0,puVar10);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar4 = puVar8;
    puVar9 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar4 = puVar8;
      puVar9 = &uStack_3a0;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_420;
  pcStack_3a8 = FUN_10bc7e920;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar8 = puVar4;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar9;
  plStack_3c8 = plVar1;
  puStack_3c0 = puVar2;
  puStack_3b8 = puVar7;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar6);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_400;
    func_0x000107c278b8(auStack_400,puVar2);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar3 = &UNK_110d96198;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96198,&uStack_420,puVar4);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    puVar8 = puVar10;
    puVar9 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar8 = puVar10;
      puVar9 = &uStack_420;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_4a0;
  pcStack_428 = FUN_10bc7ea94;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar4 = puVar8;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar9;
  plStack_448 = plVar1;
  puStack_440 = puVar2;
  puStack_438 = puVar6;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar3);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_480;
    func_0x000107c278b8(auStack_480,puVar2);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x000107c27984(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar7 = &UNK_110d961e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d961e8,&uStack_4a0,puVar8);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x000107c278ac(&puStack_488);
    puVar4 = puVar10;
    puVar9 = &uStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      puVar4 = puVar10;
      puVar9 = &uStack_4a0;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_4a8 = FUN_10bc7ec08;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4e0 = unaff_x24;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar9;
  plStack_4c8 = plVar1;
  puStack_4c0 = puVar2;
  puStack_4b8 = puVar3;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_500,puVar2);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x000107c27984(&uStack_520,auStack_500,&lStack_4e8,1);
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96238,&uStack_520,puVar4);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x000107c278ac(&puStack_508);
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
    }
  }
  puVar2 = puVar7;
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7df8c; end: 10bc7e11f;  */

void FUN_10bc7df8c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110d95fb8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f829f84;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x23 = auStack_60;
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110d95fb8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d95fb8,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar8 = puVar4;
      param_4 = param_3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar8 = puVar4;
        param_4 = param_3;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_100;
  pcStack_88 = FUN_10bc7e120;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar4 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f829f84;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = &UNK_110d96008;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96008,&uStack_100,puVar8);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar4 = puVar9;
    param_4 = puVar8;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar4 = puVar9;
      param_4 = puVar8;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_108 = FUN_10bc7e294;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar8 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar2 = &UNK_110d96058;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96058,&uStack_180,puVar4);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar8 = puVar9;
    param_4 = puVar4;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar8 = puVar9;
      param_4 = puVar4;
    }
  }
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume();
  pcStack_188 = FUN_10bc7e408;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar4 = puVar8;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  puVar9 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f829f84;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_1f8;
    func_0x000107c278b8(auStack_1f8,puVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f829f84;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar4 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_1e0,puVar4);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar6 = &UNK_110d960a8;
    unaff_x23 = &uStack_218;
    puVar4 = &uStack_218;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d960a8,puVar4,param_4);
    puStack_200 = unaff_x23;
    func_0x000107c278ac(&puStack_200);
    lVar12 = 0;
    puVar9 = auStack_1f8;
    do {
      if ((&cStack_1c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar11 = &uStack_2a0;
  pcStack_228 = FUN_10bc7e638;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar10 = puVar4;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar9;
  puStack_248 = puVar3;
  puStack_240 = puVar8;
  puStack_238 = puVar2;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(puVar6);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar2);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar7 = &UNK_110d960f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d960f8,&uStack_2a0,puVar4);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar10 = puVar11;
    puVar9 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar10 = puVar11;
      puVar9 = &uStack_2a0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar4 = &uStack_320;
  pcStack_2a8 = FUN_10bc7e7ac;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar8 = puVar10;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar9;
  plStack_2c8 = plVar1;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar6;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar7);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar2);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar3 = &UNK_110d96148;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96148,&uStack_320,puVar10);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar8 = puVar4;
    puVar9 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar8 = puVar4;
      puVar9 = &uStack_320;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_3a0;
  pcStack_328 = FUN_10bc7e920;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar4 = puVar8;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar9;
  plStack_348 = plVar1;
  puStack_340 = puVar2;
  puStack_338 = puVar7;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar3);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar2);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar6 = &UNK_110d96198;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96198,&uStack_3a0,puVar8);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar4 = puVar10;
    puVar9 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar4 = puVar10;
      puVar9 = &uStack_3a0;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_420;
  pcStack_3a8 = FUN_10bc7ea94;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar4;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar9;
  plStack_3c8 = plVar1;
  puStack_3c0 = puVar2;
  puStack_3b8 = puVar3;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar6);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_400;
    func_0x000107c278b8(auStack_400,puVar2);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar7 = &UNK_110d961e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d961e8,&uStack_420,puVar4);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    puVar8 = puVar10;
    puVar9 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar8 = puVar10;
      puVar9 = &uStack_420;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_428 = FUN_10bc7ec08;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar9;
  plStack_448 = plVar1;
  puStack_440 = puVar2;
  puStack_438 = puVar6;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_480,puVar2);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x000107c27984(&uStack_4a0,auStack_480,&lStack_468,1);
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d96238,&uStack_4a0,puVar8);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x000107c278ac(&puStack_488);
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
    }
  }
  puVar2 = puVar7;
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7e120; end: 10bc7e293;  */

void FUN_10bc7e120(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d96008;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d96008,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar7;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_10bc7e294;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110d96058;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d96058,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_10bc7e408;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_178;
    func_0x000107c278b8(auStack_178,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f829f84;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_110d960a8;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d960a8,puVar3,param_4);
    puStack_180 = unaff_x23;
    func_0x000107c278ac(&puStack_180);
    lVar12 = 0;
    puVar8 = auStack_178;
    do {
      if ((&cStack_149)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_220;
  pcStack_1a8 = FUN_10bc7e638;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar3;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar2);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar6 = &UNK_110d960f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d960f8,&uStack_220,puVar3);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar9 = puVar10;
    puVar8 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar9 = puVar10;
      puVar8 = &uStack_220;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar7 = &uStack_2a0;
  pcStack_228 = FUN_10bc7e7ac;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puVar3 = puVar9;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar8;
  plStack_248 = plVar11;
  puStack_240 = puVar2;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar5 = &UNK_110d96148;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d96148,&uStack_2a0,puVar9);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar3 = puVar7;
    puVar8 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar3 = puVar7;
      puVar8 = &uStack_2a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_320;
  pcStack_2a8 = FUN_10bc7e920;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar7 = puVar3;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar8;
  plStack_2c8 = plVar11;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar6;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar2 = &UNK_110d96198;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d96198,&uStack_320,puVar3);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar7 = puVar9;
    puVar8 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar7 = puVar9;
      puVar8 = &uStack_320;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3a0;
  pcStack_328 = FUN_10bc7ea94;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar7;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar8;
  plStack_348 = plVar11;
  puStack_340 = puVar1;
  puStack_338 = puVar5;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar6 = &UNK_110d961e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d961e8,&uStack_3a0,puVar7);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar3 = puVar9;
    puVar8 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar3 = puVar9;
      puVar8 = &uStack_3a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_3a8 = FUN_10bc7ec08;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar8;
  plStack_3c8 = plVar11;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar2;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_400,puVar1);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d96238,&uStack_420,puVar3);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7e294; end: 10bc7e407;  */

void FUN_10bc7e294(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d96058;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d96058,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10bc7e408;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar12 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f829f84;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = &UNK_110d960a8;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d960a8,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_10bc7e638;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar2;
  puStack_140 = puVar7;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_110d960f8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d960f8,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar8 = puVar9;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar12 = &uStack_1a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_220;
  pcStack_1a8 = FUN_10bc7e7ac;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar7 = puVar8;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar2 = &UNK_110d96148;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d96148,&uStack_220,puVar8);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar7 = puVar3;
    puVar12 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar7 = puVar3;
      puVar12 = &uStack_220;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_2a0;
  pcStack_228 = FUN_10bc7e920;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar3 = puVar7;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar12;
  plStack_248 = plVar10;
  puStack_240 = puVar1;
  puStack_238 = puVar6;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar2);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar5 = &UNK_110d96198;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d96198,&uStack_2a0,puVar7);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar3 = puVar8;
    puVar12 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar3 = puVar8;
      puVar12 = &uStack_2a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_320;
  pcStack_2a8 = FUN_10bc7ea94;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar7 = puVar3;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar12;
  plStack_2c8 = plVar10;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar2;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar6 = &UNK_110d961e8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d961e8,&uStack_320,puVar3);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar7 = puVar8;
    puVar12 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar7 = puVar8;
      puVar12 = &uStack_320;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_10bc7ec08;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar12;
  plStack_348 = plVar10;
  puStack_340 = puVar1;
  puStack_338 = puVar5;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d96238,&uStack_3a0,puVar7);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7e408; end: 10bc7e637;  */

void FUN_10bc7e408(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f829f84;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110d960a8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d960a8,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_10bc7e638;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f829f84;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110d960f8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d960f8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_10bc7e7ac;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110d96148;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d96148,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar2 = puVar8;
    puVar11 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar8;
      puVar11 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_220;
  pcStack_1a8 = FUN_10bc7e920;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar7 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar11;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_110d96198;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d96198,&uStack_220,puVar2);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar7 = puVar8;
    puVar11 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_220;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_2a0;
  pcStack_228 = FUN_10bc7ea94;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar2 = puVar7;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar11;
  plStack_248 = plVar10;
  puStack_240 = puVar1;
  puStack_238 = puVar4;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar3);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar6 = &UNK_110d961e8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d961e8,&uStack_2a0,puVar7);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar2 = puVar8;
    puVar11 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar2 = puVar8;
      puVar11 = &uStack_2a0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10bc7ec08;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar11;
  plStack_2c8 = plVar10;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d96238,&uStack_320,puVar2);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7e638; end: 10bc7e7ab;  */

void FUN_10bc7e638(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d960f8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d960f8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110d96148;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96148,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110d96198;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96198,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110d961e8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d961e8,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96238,&uStack_280,puVar6);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7e7ac; end: 10bc7e91f;  */

void FUN_10bc7e7ac(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d96148;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96148,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110d96198;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96198,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110d961e8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d961e8,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96238,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7e920; end: 10bc7ea93;  */

void FUN_10bc7e920(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d96198;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96198,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110d961e8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d961e8,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d96238,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7ea94; end: 10bc7ec07;  */

void FUN_10bc7ea94(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d961e8;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110d961e8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f829f84;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110d96238,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7ec08; end: 10bc7ed7b;  */

void FUN_10bc7ec08(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f829f84;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110d96238,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7ed7c; end: 10bc7ed7f; +[SCExtensionSharedDirectory directoryForLoggedOut] */

void FUN_10bc7ed7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loggedOutDirectory_11260a7c8);
  return;
}



/* Entry: 10bc7ed80; end: 10bc7ed93; +[SCExtensionSharedDirectory loggedOutDirectory] */

void FUN_10bc7ed80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__topLevelDirectoryWithName_skipB_112590ef0,
             &PTR____CFConstantStringClassReference_111026798,0x1137fd998);
  return;
}



/* Entry: 10bc7ed94; end: 10bc7edcf; +[SCExtensionSharedDirectory removeUserScopedDirectory] */

void FUN_10bc7ed94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c293540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8bde0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7edd0; end: 10bc7ee0b; +[SCExtensionSharedDirectory removeLoggedOutDirectory] */

void FUN_10bc7edd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0b36e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8bde0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7ee0c; end: 10bc7ee5b; +[SCExtensionSharedDirectory databasesDirectoryForLoggedOut] */

void FUN_10bc7ee0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf7f900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc7ee5c; end: 10bc7ef0f; -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:] */

undefined1 * FUN_10bc7ee5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e1b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010bf7f920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_10bc7eee8;
    }
  }
  _objc_retain(puVar1);
  puVar3 = (undefined1 *)puVar1;
LAB_10bc7eee8:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}


