/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bed25c; end: 108bed263;  */

void FUN_108bed25c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c271c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toDictionary_11267a140);
  return;
}



/* Entry: 108bed264; end: 108bed2eb; -[SCSnapchatterObserver initWithDocObjectContext:fetchBlock:] */

undefined8
FUN_108bed264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = 0x11;
  func_0x000107c312b8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00dd20(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bed2ec; end: 108bed38b; -[SCSnapchatterObserver snapchatterWithUserId:] */

void FUN_108bed2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,lVar2);
    _objc_release(lVar2);
    if ((int)uVar1 != 0) {
      _objc_retain(param_1);
      lVar2 = param_1;
      goto LAB_108bed368;
    }
  }
  lVar2 = 0;
LAB_108bed368:
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108bed38c; end: 108bed42b; -[SCSnapchatterObserver snapchatterWithUsername:] */

void FUN_108bed38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,lVar2);
    _objc_release(lVar2);
    if ((int)uVar1 != 0) {
      _objc_retain(param_1);
      lVar2 = param_1;
      goto LAB_108bed408;
    }
  }
  lVar2 = 0;
LAB_108bed408:
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108bed42c; end: 108bed523; -[SCSnapchattersAToZObserver initWithSnapchattersFetchedResultObserver:] */

undefined8 * FUN_108bed42c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126fdce0;
  puVar3 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110eecd18;
    ppuStack_40 = &PTR___NSConcreteGlobalBlock_110ab74f0;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2b35a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[1];
    puVar3[1] = lVar2;
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined8 **)(param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c24f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_startObservationIfNecessary_112671808);
  return puVar3;
}



/* Entry: 108bed524; end: 108bed52b; -[SCSnapchattersAToZObserver beginObservationWithStartupGuard:] */

void FUN_108bed524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startObservationIfNecessary_112671808);
  return;
}



/* Entry: 108bed52c; end: 108bed58b; -[SCSnapchattersAToZObserver snapchatterFetchedResult] */

void FUN_108bed52c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0ab8;
  _objc_opt_class(PTR_PTR_1126c0ab8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bed58c; end: 108bed5f3; -[SCSnapchattersAToZObserver snapchatterAToZMap] */

void FUN_108bed58c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c297320(uVar2,param_2,&PTR____CFConstantStringClassReference_110eecd18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bed5f4; end: 108bed5ff; -[SCSnapchattersAToZObserver .cxx_destruct] */

void FUN_108bed5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bed600; end: 108bed647;  */

void FUN_108bed600(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_10901f604();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bed648; end: 108bed777; -[SCSnapchattersBestFriendMetadataObserver initWithDocObjectContext:] */

undefined8 * FUN_108bed648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fdce8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0ab0;
    uVar3 = 0x11;
    func_0x000107c312b8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108bed778; end: 108bed783;  */

void FUN_108bed778(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db278);
  if (lVar2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,lVar2);
  }
  puVar3 = &uStack_101;
  FUN_108c3c4f8();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 0;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110ab8570;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_110ab8510;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  puStack_c8 = puVar3;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110ab8510;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab8570;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bed784; end: 108bed78b; -[SCSnapchattersBestFriendMetadataObserver startObservationIfNecessary] */

void FUN_108bed784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startObservationIfNecessary_112671808);
  return;
}



/* Entry: 108bed78c; end: 108bed793; -[SCSnapchattersBestFriendMetadataObserver fetchedResult] */

void FUN_108bed78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_fetchedResult_1125c87e0)
  ;
  return;
}



/* Entry: 108bed794; end: 108bed7f7; -[SCSnapchattersBestFriendMetadataObserver bestFriendUserIds] */

void FUN_108bed794(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c294400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bed7f8; end: 108bed85b; -[SCSnapchattersBestFriendMetadataObserver bestFriendUsernames] */

void FUN_108bed7f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c294860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bed85c; end: 108bed8bf; -[SCSnapchattersBestFriendMetadataObserver extendedBestFriendUserIds] */

void FUN_108bed85c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9db60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bed8c0; end: 108bed8cb; -[SCSnapchattersBestFriendMetadataObserver .cxx_destruct] */

void FUN_108bed8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bed8cc; end: 108bed8d7; -[SCSnapchattersCountSummaryObserver .cxx_destruct] */

void FUN_108bed8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bed8d8; end: 108bed8eb; -[SCSnapchattersDeltaSyncMetadataObserver .cxx_destruct] */

void FUN_108bed8d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bed8ec; end: 108bed913;  */

void FUN_108bed8ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bed914; end: 108bed91b;  */

void FUN_108bed914(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 108bed91c; end: 108bed943;  */

void FUN_108bed91c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bed944; end: 108bed9e3; +[SCSnapchattersFetchedResultObserver observerForDocObjectContext:observationQueue:fetchBlock:mappers:] */

void FUN_108bed944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00dd40();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108bed9e4; end: 108beda63; -[SCSnapchattersFetchedResultObserver snapchatterWithUsername:] */

void FUN_108bed9e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c294800(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108beda64; end: 108beda73; -[SCSnapchattersFetchedResultObserver usernameToSnapchatterMap] */

void FUN_108beda64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_valueWithRegisteredIdentifier__1126836f0,
             &PTR____CFConstantStringClassReference_110eecd58);
  return;
}



/* Entry: 108beda74; end: 108beda7b; -[SCSnapchattersFetchedResultObserver withMappers:] */

void FUN_108beda74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2b35b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_withMappers__11268a790);
  return;
}



/* Entry: 108beda7c; end: 108beda87; -[SCSnapchattersFetchedResultObserver .cxx_destruct] */

void FUN_108beda7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108beda88; end: 108bedbdf; -[SCSnapchattersHiddenSuggestionFetchedResultObserver initWithDocObjectContext:fetchBlock:] */

undefined8 *
FUN_108beda88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fdd08;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0ab0;
    _objc_alloc();
    uVar4 = 0x11;
    func_0x000107c312b8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00dda0();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108bedbe0; end: 108bedbef;  */

void FUN_108bedbe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bedbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bedbf0; end: 108bedbf7; -[SCSnapchattersHiddenSuggestionFetchedResultObserver startObservationIfNecessary] */

void FUN_108bedbf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startObservationIfNecessary_112671808);
  return;
}



/* Entry: 108bedbf8; end: 108bedc57; -[SCSnapchattersHiddenSuggestionFetchedResultObserver hiddenSuggestionsSnapchatters] */

void FUN_108bedbf8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0ab8;
  _objc_opt_class(PTR_PTR_1126c0ab8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bedc58; end: 108bedc63; -[SCSnapchattersHiddenSuggestionFetchedResultObserver .cxx_destruct] */

void FUN_108bedc58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bedc64; end: 108bedd03; +[SCSnapchattersPublicInfoFetchedResultObserver observerForDocObjectContext:grapheneLogger:observationQueue:fetchBlock:] */

void FUN_108bedc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00db80();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108bedd04; end: 108bedeff; -[SCSnapchattersPublicInfoFetchedResultObserver initWithDocObjectContext:grapheneLogger:observationQueue:fetchBlock:] */

undefined8 *
FUN_108bedd04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126fdd10;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0ab0;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110eecd78;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110eecd98;
    ppuStack_68 = &PTR___NSConcreteGlobalBlock_110ab76a0;
    ppuStack_60 = &PTR___NSConcreteGlobalBlock_110ab7720;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfab980();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar5 = *(undefined8 **)(param_3 + 0x30);
  (*(code *)puVar5[2])(puVar5,*(undefined8 *)(param_3 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf529e0();
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf529e0(puVar5);
    func_0x00010c0a1e60(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 108bedf00; end: 108bedf5b;  */

void FUN_108bedf00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf529e0(lVar1);
    func_0x00010c0a1e60(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108bedf5c; end: 108bee003; -[SCSnapchattersPublicInfoFetchedResultObserver initWithDocObjectContext:grapheneLogger:fetchBlock:] */

undefined8
FUN_108bedf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = 0x11;
  func_0x000107c312b8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00db80(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108bee004; end: 108bee00b; -[SCSnapchattersPublicInfoFetchedResultObserver startObservationIfNecessary] */

void FUN_108bee004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startObservationIfNecessary_112671808);
  return;
}



/* Entry: 108bee00c; end: 108bee05f; -[SCSnapchattersPublicInfoFetchedResultObserver snapchattersPublicInfoWithUserIds:] */

void FUN_108bee00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108bee060;
  puStack_20 = &UNK_110ab7670;
  uStack_18 = param_1;
  func_0x000107c31908(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bee060; end: 108bee0cb;  */

void FUN_108bee060(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c292640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bee0cc; end: 108bee14b; -[SCSnapchattersPublicInfoFetchedResultObserver snapchattersPublicInfoWithUsername:] */

void FUN_108bee0cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c294820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bee14c; end: 108bee1b3; -[SCSnapchattersPublicInfoFetchedResultObserver userIdToSnapchattersPublicInfoMap] */

void FUN_108bee14c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c297320(uVar2,param_2,&PTR____CFConstantStringClassReference_110eecd78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bee1b4; end: 108bee21b; -[SCSnapchattersPublicInfoFetchedResultObserver usernameToSnapchattersPublicInfoMap] */

void FUN_108bee1b4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c297320(uVar2,param_2,&PTR____CFConstantStringClassReference_110eecd98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bee21c; end: 108bee227; -[SCSnapchattersPublicInfoFetchedResultObserver .cxx_destruct] */

void FUN_108bee21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bee228; end: 108bee24f;  */

void FUN_108bee228(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31914(param_2,&PTR___NSConcreteGlobalBlock_110ab76c0,
                      &PTR___NSConcreteGlobalBlock_110ab7700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bee250; end: 108bee257;  */

void FUN_108bee250(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bee258; end: 108bee27f;  */

void FUN_108bee258(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bee280; end: 108bee2a7;  */

void FUN_108bee280(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31914(param_2,&PTR___NSConcreteGlobalBlock_110ab7740,
                      &PTR___NSConcreteGlobalBlock_110ab7760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bee2a8; end: 108bee2af;  */

void FUN_108bee2a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 108bee2b0; end: 108bee303;  */

void FUN_108bee2b0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bee304; end: 108bee30b; -[SCViewedIncomingFriendsDefaultTracker incomingFriendsLastViewedTimestampObservable] */

void FUN_108bee304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 108bee30c; end: 108bee353; -[SCViewedIncomingFriendsDefaultTracker incomingFriendsLastViewedTimestamp] */

void FUN_108bee30c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010befcbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bee354; end: 108bee3db; -[SCViewedIncomingFriendsDefaultTracker markIncomingFriendsViewedWithTimestamp:] */

void FUN_108bee354(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfebee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b4ca0();
  lVar3 = param_3;
  func_0x00010c0b4ca0();
  if (lVar2 < lVar3) {
    _objc_retain(param_3);
    _objc_release(lVar1);
    lVar1 = param_3;
  }
  func_0x00010c165760(param_1,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bee3dc; end: 108bee493; -[SCViewedIncomingFriendsDefaultTracker setAddedFriendsTimestamp:] */

void FUN_108bee3dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0b4ca0();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befcbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b4ca0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 < lVar1) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165760();
    _objc_release(uVar5);
  }
  func_0x00010be638c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bee494; end: 108bee517; -[SCViewedIncomingFriendsDefaultTracker .cxx_destruct] */

void FUN_108bee494(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bee518; end: 108bee55f; -[SCDocObjectSnapchattersUserInfoRepository bestFriendsUserIds] */

void FUN_108bee518(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf19600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bee560; end: 108bee5a7; -[SCDocObjectSnapchattersUserInfoRepository extendedBestFriendsUserIds] */

void FUN_108bee560(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9dac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bee5a8; end: 108bee5ef; -[SCDocObjectSnapchattersUserInfoRepository bestFriendsUsernames] */

void FUN_108bee5a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf19660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bee5f0; end: 108bee637; -[SCDocObjectSnapchattersUserInfoRepository userId] */

void FUN_108bee5f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108bee638; end: 108bee63f; -[SCDocObjectSnapchattersUserInfoRepository incomingFriendsLastViewedTimestamp] */

void FUN_108bee638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfebef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_incomingFriendsLastViewedTimesta_1125d8980);
  return;
}



/* Entry: 108bee640; end: 108bee6ab; -[SCDocObjectSnapchattersUserInfoRepository .cxx_destruct] */

void FUN_108bee640(long param_1)

{
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



/* Entry: 108bee6ac; end: 108beec2b;  */

void FUN_108bee6ac(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db148;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010bfb7fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bfb7fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb83e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb8400();
    _objc_retain(uVar3);
    uVar13 = uVar3;
    func_0x00010bf529e0();
    if (uVar13 <= uVar4) {
      uVar4 = uVar3;
      func_0x00010bf529e0();
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    if (0 < (long)uVar4) {
      uVar13 = 0;
      do {
        puVar6 = PTR_PTR_1126db140;
        _objc_opt_new(PTR_PTR_1126db140);
        uVar7 = uVar3;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c08f840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cafa0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00010c0d3e20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ca5e0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf48dc0();
        func_0x00010c0df780(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        uVar8 = uVar7;
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010bfe2ee0();
        uVar11 = uVar7;
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0b5940();
        func_0x000100c4a928(uVar10,uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar10;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(uVar10);
        _objc_release(uVar11);
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00010bf85d80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18f960(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010befce20(uVar7);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21a840(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c13ff20(uVar7);
        func_0x00010c0df880(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ede20(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0d41c0(uVar7);
        func_0x00010c0df6e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b4b40(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        func_0x00010c18e180(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar9);
        _objc_release(uVar7);
        _objc_release(puVar6);
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
    }
    _objc_release(uVar3);
    _objc_release(uVar3);
    func_0x00010c1a0740(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf196a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf196c0();
    _objc_retain(uVar3);
    uVar13 = uVar3;
    func_0x00010bf529e0();
    if (uVar13 <= uVar4) {
      uVar4 = uVar3;
      func_0x00010bf529e0();
    }
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (0 < (long)uVar4) {
      uVar13 = 0;
      do {
        uVar7 = uVar3;
        func_0x00010c0dfd20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfe2ee0();
        uVar10 = uVar7;
        func_0x00010c0b5940(uVar7);
        func_0x000100c4a928(uVar8,uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(uVar7);
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
    }
    _objc_release(uVar3);
    _objc_release(uVar3);
    func_0x00010c16ff20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a0b40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a0b20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b3f20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(uVar2);
  }
  puVar5 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108beec2c; end: 108beecdb;  */

bool FUN_108beec2c(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c06d560();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0737e0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = param_2;
      FUN_10901c828(param_1);
      if ((uVar2 & 1) == 0) {
        uVar2 = param_2;
        func_0x00010bfb8280(param_2);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar2 == 0;
        _objc_release();
      }
      else {
        bVar1 = true;
      }
      goto LAB_108beec84;
    }
  }
  bVar1 = false;
LAB_108beec84:
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108beecdc; end: 108beee03;  */

void FUN_108beecdc(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
    puVar3 = puVar4;
  }
  else {
    func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd9438);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar3 = puVar4;
  _objc_retain();
  iVar2 = (int)puVar3;
  _qos_class_self();
  iVar1 = 0x19;
  if (iVar2 != 0x21) {
    iVar1 = iVar2;
  }
  uVar5 = 0x20;
  func_0x000107c27d94(0x20,iVar1,0,param_2);
  _objc_release(param_2);
  func_0x000107c27d8c(puVar4,uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108beee04; end: 108beee7f;  */

void FUN_108beee04(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_1;
  _objc_retain();
  iVar2 = (int)uVar3;
  _qos_class_self();
  iVar1 = 0x19;
  if (iVar2 != 0x21) {
    iVar1 = iVar2;
  }
  uVar3 = 0x20;
  func_0x000107c27d94(0x20,iVar1,0,param_2);
  _objc_release(param_2);
  func_0x000107c27d8c(param_1,uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108beee80; end: 108bef1bf; -[SCUnviewedSuggestedSnapchatterRepository initWithSnapchattersDataProvider:dataTracker:docObjectContext:performerProvider:circumstanceEngine:userPreferences:pinnedSuggestedSnapchattersObservable:] */

undefined8 *
FUN_108beee80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fdd28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    func_0x00010bef9980(puVar1[1]);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_9;
    func_0x00010c0e0ea0(param_9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
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



/* Entry: 108bef1c0; end: 108bef233;  */

void FUN_108bef1c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdff740(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bef234; end: 108bef25b; -[SCUnviewedSuggestedSnapchatterRepository unviewedSuggestedFriendsForAddFriends] */

void FUN_108bef234(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bef25c; end: 108bef25f; -[SCUnviewedSuggestedSnapchatterRepository didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108bef25c(void)

{
  return;
}



/* Entry: 108bef260; end: 108bef263; -[SCUnviewedSuggestedSnapchatterRepository didStartSnapchattersUpdateDataRequest:] */

void FUN_108bef260(void)

{
  return;
}



/* Entry: 108bef264; end: 108bef30b; -[SCUnviewedSuggestedSnapchatterRepository didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_108bef264(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108bef30c; end: 108bef34b;  */

void FUN_108bef30c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bef34c; end: 108bef417; -[SCUnviewedSuggestedSnapchatterRepository _didReceiveNewPinnedSuggestedSnapchatters:] */

void FUN_108bef34c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  else {
    if (uVar2 == 0) {
      _objc_release(param_3);
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108bef3d8;
    }
    func_0x00010be0f260(param_1);
  }
LAB_108bef3d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bef418; end: 108bef4ff; -[SCUnviewedSuggestedSnapchatterRepository _fetchAddFriendsSuggestionsAndTriggerTimerBadgeIfNecessary] */

void FUN_108bef418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0x11;
  func_0x000107c312b8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2622c0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108bef500; end: 108bef58b;  */

void FUN_108bef500(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffae0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bef58c; end: 108bef72f; -[SCUnviewedSuggestedSnapchatterRepository _didReceiveSuggestions:error:] */

void FUN_108bef58c(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x000107c31910(param_4,&PTR___NSConcreteGlobalBlock_110ab7810);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar3 = param_2;
    func_0x00010be419c0();
    if ((uVar3 & 1) != 0) {
      uVar3 = param_2;
      func_0x00010becc220();
      func_0x00010becd500(param_2);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0893a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      if ((double)(uVar3 * 0xe10) <= param_1) {
        func_0x00010be5d940(param_2);
      }
      else {
        func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x18));
      }
      goto LAB_108bef698;
    }
  }
  else {
    func_0x00010beda420(param_2);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x18));
LAB_108bef698:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108bef730; end: 108bef7ff;  */

bool FUN_108bef730(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c083540();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      uVar4 = param_2;
      func_0x00010bfebe20(param_2);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar4 == 0;
      _objc_release();
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108bef800; end: 108befa2b; -[SCUnviewedSuggestedSnapchatterRepository _markTopKSuggestionsAsUnviewedFromSnapchatters:topK:] */

void FUN_108bef800(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  if ((param_4 != 0) && (uVar1 = param_3, func_0x00010bf529e0(), uVar1 != 0)) {
    uVar1 = param_3;
    func_0x00010bf529e0();
    if (uVar1 < param_4) {
      func_0x00010bf529e0(param_3);
    }
    uVar1 = param_3;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_108befa2c;
    uStack_60 = 0x108befa3c;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_78 = &uStack_80;
    _objc_opt_new();
    puStack_58 = puVar2;
    _objc_initWeak(auStack_88,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108befa44;
    puStack_a0 = &UNK_11092da68;
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = uVar1;
    puStack_90 = &uStack_80;
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_88);
    func_0x00010c0f8500(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(puStack_58);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108befa2c; end: 108befa43;  */

void FUN_108befa2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108befa44; end: 108befbe7;  */

void FUN_108befa44(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  iVar4 = (int)lVar5;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar3 = lVar8;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar3 = lVar8;
        func_0x00010bfebe20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          FUN_108c1f3f8(param_2,lVar8,0);
          func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
          lVar5 = lVar8;
        }
      }
      else {
        _objc_release();
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar7;
    func_0x00010bf52a60();
    iVar4 = (int)lVar5;
  }
  _objc_release(lVar7);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  if (iVar4 != 0) {
    lVar2 = lVar2 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010beda420();
    func_0x00010c0d9840(*(undefined8 *)(lVar2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108befbe8; end: 108befc4f;  */

void FUN_108befbe8(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    func_0x00010beda420();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108befc50; end: 108befcb3;  */

void FUN_108befc50(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 108befcb4; end: 108befccb; -[SCUnviewedSuggestedSnapchatterRepository _isLocalTimerBadgeEnabled] */

void FUN_108befcb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eece58,0,0);
  return;
}



/* Entry: 108befccc; end: 108befcf7; -[SCUnviewedSuggestedSnapchatterRepository _timerBadgeTTLHours] */

long FUN_108befccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110eece78,0xc,0);
  return (long)(int)uVar1;
}



/* Entry: 108befcf8; end: 108befd23; -[SCUnviewedSuggestedSnapchatterRepository _topKToBeBadged] */

long FUN_108befcf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110eece98,3,0);
  return (long)(int)uVar1;
}



/* Entry: 108befd24; end: 108befe13; -[SCUnviewedSuggestedSnapchatterRepository _updateLastLocalTimerBadgeSetIfNewer] */

void FUN_108befd24(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0893a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar3 == 0) || (func_0x00010c26f380(puVar1,param_3,lVar3), 0.0 < param_1)) {
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b80a0();
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108befe14; end: 108befea3; -[SCUnviewedSuggestedSnapchatterRepository .cxx_destruct] */

void FUN_108befe14(long param_1)

{
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



/* Entry: 108befea4; end: 108beff3b; -[SCSnapchattersDataRequestTracker inProcessingSnapchatterIds] */

void FUN_108befea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108beff3c; end: 108beffdb; -[SCSnapchattersDataRequestTracker inProcessingSnapchatterRequestForUserId:] */

void FUN_108beff3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    __ZNSt3__15mutex4lockEv(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108beffdc; end: 108bf01eb; -[SCSnapchattersDataRequestTracker didStartSnapchattersUpdateDataRequest:] */

void FUN_108beffdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108bf01ec;
  puStack_58 = &UNK_110ab7860;
  lStack_50 = param_1;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108bf024c;
  puStack_88 = &UNK_110ab7890;
  lStack_80 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_108bf02ac;
  puStack_b8 = &UNK_110ab78c0;
  lStack_b0 = param_1;
  uStack_78 = param_3;
  _objc_retain(param_3);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_108bf030c;
  puStack_e8 = &UNK_110ab78f0;
  lStack_e0 = param_1;
  uStack_a8 = param_3;
  _objc_retain(param_3);
  uStack_d8 = param_3;
  func_0x00010c0bc6c0(param_3);
  _objc_initWeak(auStack_108,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_110,auStack_108);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_d8);
  _objc_release(uStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108bf01ec; end: 108bf024b;  */

void FUN_108bf01ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec1260(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bf024c; end: 108bf02ab;  */

void FUN_108bf024c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec1260(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bf02ac; end: 108bf030b;  */

void FUN_108bf02ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec1260(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bf030c; end: 108bf036b;  */

void FUN_108bf030c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec1260(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bf036c; end: 108bf03bb;  */

void FUN_108bf036c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf7bea0(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bf03bc; end: 108bf0613; -[SCSnapchattersDataRequestTracker didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108bf03bc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [8];
  undefined1 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108bf0614;
  puStack_68 = &UNK_110ab7860;
  lStack_60 = param_1;
  _objc_retain(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108bf0674;
  puStack_98 = &UNK_110ab7890;
  lStack_90 = param_1;
  uStack_58 = param_3;
  _objc_retain(param_3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108bf06d4;
  puStack_c8 = &UNK_110ab78c0;
  lStack_c0 = param_1;
  uStack_88 = param_3;
  _objc_retain(param_3);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_108bf0734;
  puStack_f8 = &UNK_110ab78f0;
  lStack_f0 = param_1;
  uStack_b8 = param_3;
  _objc_retain(param_3);
  uStack_e8 = param_3;
  func_0x00010c0bc6c0(param_3);
  _objc_initWeak(auStack_118,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_128,auStack_118);
  _objc_retain(param_3);
  uStack_120 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_118);
  _objc_release(uStack_e8);
  _objc_release(uStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bf0614; end: 108bf0673;  */

void FUN_108bf0614(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be09c20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bf0674; end: 108bf06d3;  */

void FUN_108bf0674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be09c20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bf06d4; end: 108bf0733;  */

void FUN_108bf06d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be09c20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bf0734; end: 108bf0793;  */

void FUN_108bf0734(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be09c20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


