/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100447d50; end: 100447e87; -[SCUserSession cache:metricsName:diskSizeLimitConfig:useMemoryCache:skipEviction:] */

void FUN_100447d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f833f8);
  func_0x000107c61180();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_100447e88;
  puStack_80 = &UNK_110d61300;
  uStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_5;
  uStack_60 = param_4;
  uStack_58 = param_6;
  uStack_57 = param_7;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c4d9d4(param_1,param_2,puVar1,&puStack_98);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100447e88; end: 100447f33;  */

void FUN_100447e88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_38 = 0;
  func_0x000107c5d30c(uVar2,param_2,0,&lStack_38);
  func_0x000107c61180();
  lVar1 = lStack_38;
  func_0x000107c61174(lStack_38);
  puVar3 = PTR_PTR_1126ced20;
  func_0x000107c610f4(PTR_PTR_1126ced20);
  if (lVar1 == 0) {
    func_0x000107c484fc();
  }
  else {
    func_0x000107c478cc();
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100447f34; end: 1004481ab; -[SCUserSession unmanaged_cacheDirectory:error:] */

void FUN_100447f34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1002b27dc;
  pcStack_50 = FUN_1002b5830;
  uStack_48 = 0;
  func_0x000107c60b18(param_2);
  func_0x000107c61180();
  func_0x000107c4d9d4(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (param_4 != (undefined8 *)0x0) {
    uVar1 = puStack_68[5];
    func_0x000107c61178();
    *param_4 = uVar1;
  }
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x000107c41e9c(param_1);
    func_0x000107c61180();
  }
  else {
    uVar1 = param_1;
    func_0x000107c41e9c(param_1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5c168();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    puVar3 = PTR_PTR_1126b24e8;
    func_0x000107c409e8();
    if (((ulong)puVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c51810();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar3 != (undefined *)0x0) {
        uVar1 = param_1;
        func_0x000107c41e9c(param_1);
        func_0x000107c61180();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c51810(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c61180();
        uVar4 = uVar1;
        func_0x000107c5c168(uVar1);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar1);
        puVar3 = PTR_PTR_1126dbe20;
        puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x000107c43474(PTR__OBJC_CLASS___NSURL_1126ae598);
        func_0x000107c61180();
        func_0x000107c4c4d0(puVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61174(uVar2);
      uVar1 = uVar2;
    }
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_1);
  func_0x000107c60bcc(&uStack_70,8);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004481ac; end: 100448267;  */

void FUN_1004481ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61158(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5d984(uVar2);
  func_0x000107c61180();
  func_0x000107c5da3c(uVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126e2d88;
  func_0x000107c610f4(PTR_PTR_1126e2d88);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  func_0x000107c465a8();
  func_0x000107c61174(uVar4);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100448268; end: 10044834b; +[SCUserSession userScopedCachePathRootForUser:] */

undefined1 * FUN_100448268(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c3abe0();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  FUN_1000f73a0();
  func_0x000107c61180();
  ppuStack_48 = &PTR____CFConstantStringClassReference_111026698;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  puStack_40 = puVar1;
  func_0x000107c3e17c();
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c4e44c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar5 = puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  func_0x000107c60e78();
  ppuVar6 = &puStack_90;
  pcStack_58 = FUN_10044834c;
  puStack_80 = puVar3;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = puVar4;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar8);
  puStack_88 = PTR_PTR_11270e1a0;
  puStack_90 = puVar5;
  func_0x000107c61154(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    puVar4 = PTR_PTR_1126b24e8;
    func_0x000107c409e8();
    if ((int)puVar4 == 0) {
      puVar9 = (undefined1 *)0x0;
      goto LAB_10044845c;
    }
    func_0x000107c61174(puVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined **)((long)ppuVar6 + 0x10) = puVar8;
    func_0x000107c61170(uVar7);
    puVar4 = PTR_PTR_1126dbe20;
    func_0x000107c610f4();
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c43478(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x000107c61180();
    func_0x000107c465a4();
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined **)((long)ppuVar6 + 8) = puVar4;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar1);
    puVar4 = PTR_PTR_1126b24d0;
    func_0x000107c5a9bc(PTR_PTR_1126b24d0);
    func_0x000107c61180();
    func_0x000107c3d758();
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61174(ppuVar6);
  puVar9 = (undefined1 *)ppuVar6;
LAB_10044845c:
  func_0x000107c61170(puVar8);
  func_0x000107c61170(ppuVar6);
  return puVar9;
}



/* Entry: 10044834c; end: 100448483; -[SCUserSessionScopedDirectory initWithDirectory:error:] */

undefined1 * FUN_10044834c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e1a0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b24e8;
    func_0x000107c409e8();
    if ((int)puVar2 == 0) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10044845c;
    }
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126dbe20;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c43478(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x000107c61180();
    func_0x000107c465a4();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
    puVar2 = PTR_PTR_1126b24d0;
    func_0x000107c5a9bc(PTR_PTR_1126b24d0);
    func_0x000107c61180();
    func_0x000107c3d758();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61174(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_10044845c:
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return puVar5;
}



/* Entry: 100448484; end: 10044849b;  */

undefined ** FUN_100448484(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10044849c; end: 1004484a3; -[SCUserSessionScopedDirectory directory] */

undefined8 FUN_10044849c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004484a4; end: 100448587; -[SCCache initWithScopedDirectory:name:metricsName:diskSizeLimitConfig:useMemoryCache:skipEviction:] */

undefined8
FUN_1004484a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3448;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  func_0x000107c478e0(param_1,param_2,param_4,param_5,puVar1,param_6,param_3,param_7,param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100448588; end: 100448647; +[SCCacheManager shared] */

void FUN_100448588(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f9cc8 != -1) {
    FUN_10002a2fc(0x1137f9cc8,&PTR___NSConcreteGlobalBlock_110d60df8);
  }
  uVar1 = uRam00000001137f9cc0;
  func_0x000107c61174(uRam00000001137f9cc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100448648; end: 100448713; -[SCCacheManager initWithQueuePerformer:] */

undefined1 * FUN_100448648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270aee0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126e13e0;
    func_0x000107c5a9cc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b24d0;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100448714; end: 100448767; +[PINMemoryCache sharedCache] */

void FUN_100448714(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f9df0 != -1) {
    FUN_10002a2fc(0x1137f9df0,&PTR___NSConcreteGlobalBlock_110d616b0);
  }
  uVar1 = uRam00000001137f9de8;
  func_0x000107c61174(uRam00000001137f9de8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100448768; end: 100448793;  */

void FUN_100448768(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e13e0;
  func_0x000107c610fc();
  uVar1 = puRam00000001137f9de8;
  puRam00000001137f9de8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100448794; end: 10044880b; -[PINMemoryCache init] */

undefined8 FUN_100448794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1420;
  func_0x000107c5aa0c(PTR_PTR_1126e1420);
  func_0x000107c61180();
  func_0x000107c47c80(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 10044880c; end: 10044885f; +[PINOperationQueue sharedOperationQueue] */

void FUN_10044880c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f9e00 != -1) {
    FUN_10002a2fc(0x1137f9e00,&PTR___NSConcreteGlobalBlock_110d61760);
  }
  uVar1 = uRam00000001137f9df8;
  func_0x000107c61174(uRam00000001137f9df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100448860; end: 1004488ef;  */

/* WARNING: Possible PIC construction at 0x0001004488a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004488a8) */
/* WARNING: Removing unreachable block (ram,0x0001004488b0) */

void FUN_100448860(void)

{
  undefined *puVar1;
  
  func_0x000107c610f4(PTR_PTR_1126e1420);
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c61180();
  func_0x000107c3d18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1004488f0; end: 100448963; -[PINOperationQueue initWithMaxConcurrentOperations:] */

undefined8 FUN_1004488f0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f7aeba3;
  func_0x000107c60f50(&UNK_10f7aeba3,PTR___dispatch_queue_attr_concurrent_11034be28);
  func_0x000107c47610(param_1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100448964; end: 100448b77; -[PINOperationQueue initWithMaxConcurrentOperations:concurrentQueue:] */

undefined8 *
FUN_100448964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  puStack_50 = PTR_PTR_11270af70;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[9] = 0;
    puVar1[10] = param_3;
    func_0x000107c61270(auStack_48);
    func_0x000107c61278(auStack_48,2);
    puVar2 = puVar1 + 1;
    func_0x000107c6125c(puVar2,auStack_48);
    func_0x000107c60f34();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    func_0x000107c61170(uVar5);
    puVar3 = &UNK_10f7aebc6;
    func_0x000107c60f50(&UNK_10f7aebc6,0);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_4);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_4;
    func_0x000107c61170(uVar5);
    lVar4 = puVar1[10] + -1;
    func_0x000107c60f6c();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = lVar4;
    func_0x000107c61170(uVar5);
    puVar3 = &UNK_10f7aebe5;
    func_0x000107c60f50(&UNK_10f7aebe5,0);
    uVar5 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x000107c610fc();
    uVar5 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x000107c610fc();
    uVar5 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x000107c610fc();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x000107c610fc();
    uVar5 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5e168();
    func_0x000107c61180();
    uVar5 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5e168();
    func_0x000107c61180();
    uVar5 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    func_0x000107c61170(uVar5);
  }
  puVar2 = param_4;
  func_0x000107c61170(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_4);
  func_0x000107c60bd8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c02d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar2;
}



/* Entry: 100448b78; end: 100448b87; -[PINMemoryCache initWithOperationQueue:] */

void FUN_100448b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_operationQueue__1125e9008,
             &PTR____CFConstantStringClassReference_110f83638,param_3);
  return;
}



/* Entry: 100448b88; end: 100448e07; -[PINMemoryCache initWithName:operationQueue:] */

undefined1 *
FUN_100448b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270af60;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c6125c((undefined1 *)((long)puVar1 + 0xb0),0);
    uVar2 = param_3;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined2 *)((long)puVar1 + 9) = 0x101;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100448e08; end: 100448eab; -[SCNMessagingTweaks initWithTweaks:] */

undefined1 * FUN_100448e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112707260;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100448eac; end: 1004491eb; -[SCCache initWithName:metricsName:cacheManager:diskSizeLimitConfig:cacheDirectory:useMemoryCache:skipEviction:] */

undefined1 *
FUN_100448eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,int param_8,byte param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_11270aed8;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar5;
    func_0x000107c61170(uVar4);
    uVar5 = param_4;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar5;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126e13c8;
    func_0x000107c610f4();
    func_0x000107c478bc();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126e13d0;
    func_0x000107c610f4();
    func_0x000107c47618();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c5ac60();
    if ((int)puVar2 != 0) {
      puVar2 = PTR_PTR_1126e13d8;
      func_0x000107c610fc();
      uVar5 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar2;
      func_0x000107c61170(uVar5);
    }
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    func_0x000107c61170(uVar5);
    if (param_8 != 0) {
      puVar2 = PTR_PTR_1126e13e0;
      func_0x000107c5a9cc();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
      *(undefined **)((long)puVar1 + 0x48) = puVar2;
      func_0x000107c61170(uVar5);
    }
    *(bool *)((long)puVar1 + 0x28) = param_7 != 0;
    puVar2 = PTR_PTR_1126e13e8;
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x000107c42b18(uVar5);
    func_0x000107c61180();
    if (param_7 == 0) {
      func_0x000107c4edd8();
      func_0x000107c61180();
    }
    else {
      func_0x000107c4ee18();
      func_0x000107c61180();
    }
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c3b7d0(puVar1);
    func_0x000107c61180();
    func_0x000107c540d4(uVar5);
    func_0x000107c61170(puVar3);
    *(byte *)((long)puVar1 + 0x29) = param_9;
    if ((param_9 & 1) == 0) {
      func_0x000107c3b120(puVar1);
      puVar2 = PTR_PTR_1126b24d0;
      func_0x000107c5a9bc(PTR_PTR_1126b24d0);
      func_0x000107c61180();
      func_0x000107c3d758();
      func_0x000107c61170(puVar2);
    }
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004491ec; end: 10044921b; +[SCNMessagingUUID UUIDWithString:] */

void FUN_1004491ec(void)

{
  func_0x000107c610f8(PTR_PTR_1126b0cd8);
  func_0x000107c48af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10044921c; end: 100449243; -[SCNMessagingUUID initWithString:] */

void FUN_10044921c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_100449244();
  return;
}



/* Entry: 100449244; end: 1004494bb;  */

undefined8 FUN_100449244(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar1 = 0x112d3bc20;
  FUN_1000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_c0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea8(puVar6,param_1,param_2);
  func_0x000107c6142c(param_2);
  puVar2 = puVar6;
  (**(code **)(lVar9 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001018d3afc(puVar6);
    func_0x000107c614f0();
    func_0x000107c61464();
    unaff_x20 = 0;
  }
  else {
    uVar3 = uVar8;
    (**(code **)(lVar9 + 0x20))(uVar8,puVar6,lVar1);
    func_0x000107c5eec0();
    uStack_b8 = uVar3 >> 0x28;
    uStack_b0 = uVar3 >> 0x30;
    uStack_a8 = uVar3 >> 0x38;
    uStack_a0 = (ulong)puVar6 >> 8;
    uStack_98 = (ulong)puVar6 >> 0x10;
    uStack_90 = (ulong)puVar6 >> 0x18;
    uStack_88 = (ulong)puVar6 >> 0x20;
    uStack_80 = (ulong)puVar6 >> 0x28;
    uStack_78 = (ulong)puVar6 >> 0x30;
    uStack_70 = (ulong)puVar6 >> 0x38;
    lVar4 = 0x112d48d68;
    FUN_1000285a8(0x112d48d68,&UNK_10d912150);
    uVar7 = 0x30;
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 0x20;
    *(undefined8 *)(lVar4 + 0x10) = 0x10;
    *(char *)(lVar4 + 0x20) = (char)uVar3;
    *(char *)(lVar4 + 0x21) = (char)(uVar3 >> 8);
    *(char *)(lVar4 + 0x22) = (char)(uVar3 >> 0x10);
    *(char *)(lVar4 + 0x23) = (char)(uVar3 >> 0x18);
    *(char *)(lVar4 + 0x24) = (char)(uVar3 >> 0x20);
    *(char *)(lVar4 + 0x25) = (char)uStack_b8;
    *(char *)(lVar4 + 0x26) = (char)uStack_b0;
    *(char *)(lVar4 + 0x27) = (char)uStack_a8;
    *(char *)(lVar4 + 0x28) = (char)puVar6;
    *(char *)(lVar4 + 0x29) = (char)uStack_a0;
    *(char *)(lVar4 + 0x2a) = (char)uStack_98;
    *(char *)(lVar4 + 0x2b) = (char)uStack_90;
    *(char *)(lVar4 + 0x2c) = (char)uStack_88;
    *(char *)(lVar4 + 0x2d) = (char)uStack_80;
    *(char *)(lVar4 + 0x2e) = (char)uStack_78;
    *(char *)(lVar4 + 0x2f) = (char)uStack_70;
    lVar5 = lVar4;
    FUN_1004496cc();
    func_0x000107c61574(lVar4);
    lVar4 = lVar5;
    func_0x000107c5ee20(lVar5,uVar7);
    func_0x00010006c090(lVar5,uVar7);
    func_0x000107c46d34(unaff_x20);
    func_0x000107c61170(lVar4);
    (**(code **)(lVar9 + 8))(uVar8,lVar1);
  }
  return unaff_x20;
}



/* Entry: 1004494bc; end: 100449543; -[SCMemoryCacheKeyGenerator initWithName:] */

undefined1 * FUN_1004494bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270af30;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c5c170();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100449544; end: 1004495ab; -[SCDiskCacheKeyGenerator initWithMaxLength:] */

undefined8 FUN_100449544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x000107c3f804(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110f83038);
  func_0x000107c61180();
  func_0x000107c4761c(param_1,param_2,param_3,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1004495ac; end: 100449633; -[SCDiskCacheKeyGenerator initWithMaxLength:charactersForPercentEncoding:] */

undefined1 *
FUN_1004495ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270af00;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100449634; end: 1004496cb;  */

undefined1 FUN_100449634(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x1004496a8;
  puStack_20 = &UNK_110848088;
  if (lRam00000001137fbad0 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1137fbad0,&puStack_38);
  }
  return uRam00000001137fbac1;
}



/* Entry: 1004496cc; end: 10044975f;  */

undefined1  [16] FUN_1004496cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long alStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  uVar2 = 0x112deef08;
  FUN_1000285a8(0x112deef08,&UNK_10d9bc0a0);
  uVar3 = uVar2;
  uStack_50 = uVar2;
  FUN_100449760();
  plVar4 = alStack_68;
  alStack_68[0] = param_1;
  uStack_48 = uVar3;
  FUN_1000a8868(plVar4,uVar2);
  lVar1 = *plVar4 + 0x20;
  lVar5 = *(long *)(*plVar4 + 0x10);
  func_0x000107c61434(param_1);
  FUN_1004497b8(auStack_40,lVar1,lVar1 + lVar5);
  FUN_100449a50(alStack_68);
  return auStack_40;
}



/* Entry: 100449760; end: 1004497af;  */

void FUN_100449760(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112deef10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112deef08;
  FUN_10002969c(0x112deef08,&UNK_10d9bc0a0);
  puVar2 = PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_110351038;
  func_0x000107c61520(PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_110351038,uVar1);
  puRam0000000112deef10 = puVar2;
  return;
}



/* Entry: 1004497b0; end: 1004497b7; -[SCCacheSizePolicy evictPolicyBlock] */

undefined8 FUN_1004497b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1004497b8; end: 1004498a7;  */

void FUN_1004497b8(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((param_2 != 0) && (param_3 != param_2)) {
    if (param_3 - param_2 < 0xf) {
      func_0x000100e36f4c();
      param_3 = param_3 & 0xffffffffffffff;
    }
    else if (param_3 - param_2 < 0x7fffffff) {
      func_0x000100449844();
      param_3 = param_3 | 0x4000000000000000;
    }
    else {
      func_0x000100e37000();
      param_3 = param_3 | 0x8000000000000000;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xc000000000000000;
  return;
}



/* Entry: 1004498a8; end: 100449a4f; +[SCCacheUtil prepareScopedDiskCacheInstance:baseDirectory:evictPolicy:] */

void FUN_1004498a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c3c4c8(param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c4e430(uVar1);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c43418(puVar2,param_2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000107c3bf38(param_1,param_2,param_3,uVar1);
  }
  puVar4 = PTR_PTR_1126e1418;
  func_0x000107c610f4(PTR_PTR_1126e1418);
  uVar3 = param_1;
  func_0x000107c41fe0(param_1);
  func_0x000107c61180();
  func_0x000107c41fdc(param_1);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126e1420;
  func_0x000107c5aa0c();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1133e0f78;
  if (param_5 != (undefined *)0x0) {
    puVar2 = param_5;
  }
  func_0x000107c478f0(puVar4,param_2,param_3,&PTR____CFConstantStringClassReference_110f82fd8,
                      param_4,uVar3,param_1,0,puVar5,puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100449a50; end: 100449a6f;  */

void FUN_100449a50(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100449a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100449a70; end: 100449a8f; +[SCCacheUtil _scopedCacheURLForName:baseDirectory:] */

void FUN_100449a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf26df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e1418,PTR_s_cacheURLWithRootPath_prefix_name_1125a7520,param_4,
             &PTR____CFConstantStringClassReference_110f82fd8,param_3);
  return;
}



/* Entry: 100449a90; end: 100449beb; +[PINDiskCache cacheURLWithRootPath:prefix:name:] */

undefined1 *
FUN_100449a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f4();
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x000107c4699c();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_58 = param_3;
  puStack_50 = puVar1;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c4347c(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  uVar5 = param_3;
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8(uVar5);
  puVar4 = &uStack_b0;
  pcStack_78 = FUN_100449bec;
  puStack_a0 = puVar1;
  uStack_98 = param_5;
  uStack_90 = param_4;
  uStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_100449c78();
  puStack_a8 = PTR_PTR_112707268;
  uStack_b0 = param_4;
  func_0x000107c61154(&uStack_b0,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000107c40794();
    uVar5 = *(undefined8 *)((long)puVar4 + 8);
    *(undefined8 *)((long)puVar4 + 8) = param_3;
    func_0x000107c61170(uVar5);
  }
  func_0x000100449c88();
  return (undefined1 *)puVar4;
}



/* Entry: 100449bec; end: 100449c77; -[SCNMessagingUUID initWithId:] */

undefined1 * FUN_100449bec(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  FUN_100449c78();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c40794();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    func_0x000107c61170(uVar2);
  }
  func_0x000100449c88();
  return puVar1;
}



/* Entry: 100449c78; end: 100449c8f;  */

void FUN_100449c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100449c90; end: 100449e4b; -[SCNMessagingSessionParameters initWithDatabaseLocation:userId:userAgentPrefix:debug:tweaks:cofOverrides:launchTrigger:] */

undefined1 *
FUN_100449c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1127071b0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100449e4c; end: 100449e67;  */

void FUN_100449e4c(void)

{
  func_0x000107c61160(PTR_PTR_1126ba5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100449e68; end: 100449ff7; +[SCFideliusUserDatabaseManager userDatabaseV2UrlWithName:version:fileManager:] */

void FUN_100449e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puVar1 = &UNK_10f311147;
  FUN_1000ba800(&UNK_10f311147);
  puVar2 = PTR_PTR_1126c0388;
  func_0x000107c5d92c(PTR_PTR_1126c0388,param_2,param_4);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc4658);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c3ac04(puVar2,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = puVar4;
  func_0x000107c4e430(puVar4);
  func_0x000107c61180();
  uVar5 = param_5;
  func_0x000107c43418(param_5,param_2,puVar2);
  func_0x000107c61170(puVar2);
  if ((uVar5 & 1) == 0) {
    func_0x000107c409e4(param_5,param_2,puVar4,1,0,0);
    func_0x000107c57e54(puVar4,param_2,PTR____kCFBooleanTrue_11034ab68,
                        *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_11034ab18,0);
  }
  puVar2 = puVar4;
  func_0x000107c3ac04(puVar4,param_2,&PTR____CFConstantStringClassReference_110e10e18);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100449ff8; end: 10044a05b; -[SCArroyoStoryDataUpdateAnnouncer init] */

undefined1 * FUN_100449ff8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8d58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ba468;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10044a05c; end: 10044a07b; -[SCArroyoStoryDataUpdateListenerAnnouncer .cxx_construct] */

void FUN_10044a05c(long param_1)

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



/* Entry: 10044a07c; end: 10044a0fb; -[SCArroyoFeedDataUpdateAnnouncer init] */

undefined1 * FUN_10044a07c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8d50;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ba458;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10044a0fc; end: 10044a11b; -[SCArroyoFeedDataUpdateListenerAnnouncer .cxx_construct] */

void FUN_10044a0fc(long param_1)

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



/* Entry: 10044a11c; end: 10044a197; +[SCNativeMessagingSessionManager _mapSchedulerPriorityCOFValueToNativePriorityString:] */

undefined ** FUN_10044a11c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  func_0x000107c61174(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db00f8;
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110de9d38);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110de9d78);
      ppuVar2 = &PTR____CFConstantStringClassReference_110de9d98;
      if ((int)uVar1 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db00f8;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110de9d58;
    }
  }
  func_0x000107c61170(param_3);
  return ppuVar2;
}



/* Entry: 10044a198; end: 10044a237; -[SCNotificationServiceExtensionArroyoConfig initWithEnableDebugTracing:useArroyoForNewConversations:disableArroyoOneOnOne:tweaks:] */

undefined1 *
FUN_10044a198(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f3918;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10044a238; end: 10044a2c7; -[SCMessagingNotificationExtensionUserDefaults setArroyoConfig:] */

/* WARNING: Possible PIC construction at 0x00010044a294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044a2b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044a298) */
/* WARNING: Removing unreachable block (ram,0x00010044a2b4) */

void FUN_10044a238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3e100(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10044a2c8; end: 10044a2f7;  */

void FUN_10044a2c8(void)

{
  func_0x000107c610f4(PTR_PTR_1126deb70);
  func_0x000107c478b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10044a2f8; end: 10044a39b; -[SCUserExtensionDefaultsImpl initWithNSUserDefaults:withUserId:] */

undefined1 *
FUN_10044a2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702b50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044a39c; end: 10044a423; -[SCNotificationServiceExtensionArroyoConfig encodeWithCoder:] */

void FUN_10044a39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c42724(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e632d8);
  func_0x000107c42724(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110e632f8);
  func_0x000107c42724(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110e63318);
  func_0x000107c51740(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e63338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10044a424; end: 10044a42f; +[SCCacheUtil diskCacheSerializer] */

undefined ** FUN_10044a424(void)

{
  return &PTR___NSConcreteGlobalBlock_110d60ea8;
}



/* Entry: 10044a430; end: 10044a43b; +[SCCacheUtil diskCacheDeserializer] */

undefined ** FUN_10044a430(void)

{
  return &PTR___NSConcreteGlobalBlock_110d60ee8;
}



/* Entry: 10044a43c; end: 10044a83f; -[PINDiskCache initWithName:prefix:rootPath:serializer:deserializer:fileExtension:operationQueue:evictionPolicy:] */

undefined8 ***
FUN_10044a43c(undefined8 ***param_1,undefined8 param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 param_5,undefined8 ***param_6,undefined8 ***param_7,undefined8 **param_8,
             undefined8 **param_9,undefined8 **param_10)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  if (param_3 == (undefined8 **)0x0) {
    pppuVar6 = (undefined8 ***)0x0;
  }
  else {
    if ((param_6 == (undefined8 ***)0x0) == (param_7 != (undefined8 ***)0x0)) {
      func_0x000107c42b28(PTR__OBJC_CLASS___NSException_1126af520);
      func_0x000107c61180();
      func_0x000107c61104();
      func_0x000107c61130();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10044a7ec);
      (*pcVar1)();
    }
    puStack_68 = PTR_PTR_11270af58;
    pppuVar6 = &ppuStack_70;
    ppuStack_70 = param_1;
    func_0x000107c61154(pppuVar6,PTR_s_init_1125d9248);
    if (pppuVar6 != (undefined8 ***)0x0) {
      ppuVar2 = param_3;
      func_0x000107c40794();
      ppuVar5 = pppuVar6[0x13];
      pppuVar6[0x13] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      ppuVar2 = param_4;
      func_0x000107c40794();
      ppuVar5 = pppuVar6[0xf];
      pppuVar6[0xf] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      ppuVar2 = param_8;
      func_0x000107c40794();
      ppuVar5 = pppuVar6[0x12];
      pppuVar6[0x12] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      func_0x000107c61174(param_9);
      ppuVar2 = pppuVar6[0x14];
      pppuVar6[0x14] = param_9;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSConditionLock_1126e1480;
      func_0x000107c610f4();
      func_0x000107c45f5c();
      ppuVar5 = pppuVar6[1];
      pppuVar6[1] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      ppuVar2 = pppuVar6[5];
      pppuVar6[5] = (undefined8 **)0x0;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = pppuVar6[6];
      pppuVar6[6] = (undefined8 **)0x0;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = pppuVar6[7];
      pppuVar6[7] = (undefined8 **)0x0;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = pppuVar6[8];
      pppuVar6[8] = (undefined8 **)0x0;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = pppuVar6[9];
      pppuVar6[9] = (undefined8 **)0x0;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = pppuVar6[10];
      pppuVar6[10] = (undefined8 **)0x0;
      func_0x000107c61170(ppuVar2);
      ppuVar2 = param_10;
      func_0x000107c40794();
      ppuVar5 = pppuVar6[0xd];
      pppuVar6[0xd] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      pppuVar6[0x11] = (undefined8 **)0x0;
      pppuVar6[0xb] = (undefined8 **)0x0;
      pppuVar6[0xc] = (undefined8 **)0x0;
      pppuVar6[0xe] = (undefined8 **)0x10000000;
      ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c610fc();
      ppuVar5 = pppuVar6[0x15];
      pppuVar6[0x15] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c610fc();
      ppuVar5 = pppuVar6[0x16];
      pppuVar6[0x16] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c610fc();
      ppuVar5 = pppuVar6[0x17];
      pppuVar6[0x17] = ppuVar2;
      func_0x000107c61170(ppuVar5);
      pppuVar3 = pppuVar6;
      func_0x000107c61158();
      func_0x000107c3ef44();
      func_0x000107c61180();
      ppuVar2 = pppuVar6[0x10];
      pppuVar6[0x10] = pppuVar3;
      func_0x000107c61170(ppuVar2);
      if (param_6 == (undefined8 ***)0x0) {
        pppuVar3 = pppuVar6;
        func_0x000107c41610();
        func_0x000107c61180();
      }
      else {
        pppuVar3 = param_6;
        func_0x000107c40794();
      }
      ppuVar2 = pppuVar6[2];
      pppuVar6[2] = pppuVar3;
      func_0x000107c61170(ppuVar2);
      if (param_7 == (undefined8 ***)0x0) {
        pppuVar3 = pppuVar6;
        func_0x000107c41588();
        func_0x000107c61180();
      }
      else {
        pppuVar3 = param_7;
        func_0x000107c40794();
      }
      ppuVar2 = pppuVar6[3];
      pppuVar6[3] = pppuVar3;
      func_0x000107c61170(ppuVar2);
      uVar4 = 0x15;
      FUN_1000819a8(0x15,0);
      func_0x000107c61180();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x10044ae18;
      puStack_80 = &UNK_11087bb00;
      func_0x000107c61174(pppuVar6);
      ppuStack_78 = pppuVar6;
      FUN_10007380c(uVar4,&puStack_98);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(ppuStack_78);
    }
    func_0x000107c61174(pppuVar6);
    param_1 = pppuVar6;
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return pppuVar6;
}



/* Entry: 10044a840; end: 10044a843;  */

void FUN_10044a840(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_encodeObject_forKey__1125c25b0);
  return;
}



/* Entry: 10044a844; end: 10044a8ff; -[SCCache _generateDiskRemovalBlock] */

void FUN_10044a844(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_10b7bf710;
  puStack_50 = &UNK_110d60d08;
  uStack_48 = uVar2;
  func_0x000107c61174(uVar2);
  func_0x000107c6111c(auStack_40,auStack_38);
  ppuVar1 = &puStack_68;
  func_0x000107c61184(ppuVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10044a900; end: 10044aa1f; -[PINDiskCache setDidRemoveObjectBlock:] */

void FUN_10044a900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c4dfa0(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c3d7d4(param_1);
  func_0x000107c611b0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10044aa20; end: 10044aa27; -[PINDiskCache operationQueue] */

undefined8 FUN_10044aa20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10044aa28; end: 10044ab87; -[PINOperationQueue addOperation:withPriority:] */

void FUN_10044aa28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR_PTR_1126e1490;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10044bcac;
  puStack_50 = &UNK_110d61780;
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  uStack_48 = param_3;
  func_0x000107c4d680(param_1);
  func_0x000107c61180();
  func_0x000107c4dfac(puVar2,param_2,&puStack_68,uVar1,param_4,0,0,0);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c4b940(param_1);
  func_0x000107c4b984(param_1,param_2,puVar2);
  func_0x000107c5d278(param_1);
  func_0x000107c51908(param_1,param_2,0);
  puVar3 = puVar2;
  func_0x000107c4fb44(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10044ab88; end: 10044abeb; -[PINOperationQueue nextOperationReference] */

void FUN_10044ab88(long param_1)

{
  undefined *puVar1;
  
  func_0x000107c4b940();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  func_0x000107c4d974(puVar1);
  func_0x000107c61180();
  func_0x000107c5d278(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10044abec; end: 10044abf3; -[PINOperationQueue lock] */

void FUN_10044abec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_lock_11034c908)(param_1 + 8);
  return;
}



/* Entry: 10044abf4; end: 10044abfb; -[PINOperationQueue unlock] */

void FUN_10044abf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 8);
  return;
}



/* Entry: 10044abfc; end: 10044ad2f; +[PINOperation operationWithBlock:reference:priority:identifier:data:completion:] */

void FUN_10044abfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c610fc(param_1);
  func_0x000107c52d90();
  func_0x000107c57c24(param_1,param_2,param_4);
  func_0x000107c5784c(param_1,param_2,param_5);
  func_0x000107c5521c(param_1,param_2,param_6);
  func_0x000107c53df0(param_1,param_2,param_7);
  func_0x000107c3d62c(param_1,param_2,param_8);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10044ad30; end: 10044ad47; -[PINOperation setBlock:] */

void FUN_10044ad30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10044ad48; end: 10044ad7f;  */

void FUN_10044ad48(long param_1,long param_2)

{
  func_0x000107c60bc8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 10044ad80; end: 10044adaf; -[PINOperation setReference:] */

void FUN_10044ad80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10044adb0; end: 10044adb7; -[PINOperation setPriority:] */

void FUN_10044adb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10044adb8; end: 10044ade7; -[PINOperation setIdentifier:] */

void FUN_10044adb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10044ade8; end: 10044ae5f; -[PINOperation setData:] */

void FUN_10044ade8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10044ae60; end: 10044af0f; -[PINOperation addCompletion:] */

/* WARNING: Possible PIC construction at 0x00010044aeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044aed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044aeb0) */

void FUN_10044ae60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e15c();
      func_0x000107c61180();
      param_3 = *(long *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar1;
    }
    else {
      func_0x000107c61184(param_3);
      func_0x000107c3d798(lVar2,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10044af10; end: 10044b047; -[PINOperationQueue locked_addOperation:] */

/* WARNING: Possible PIC construction at 0x00010044afa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044afb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044afec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044afa4) */
/* WARNING: Removing unreachable block (ram,0x00010044afbc) */
/* WARNING: Removing unreachable block (ram,0x00010044aff0) */
/* WARNING: Removing unreachable block (ram,0x00010044afc0) */

void FUN_10044af10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4f248(param_3);
  lVar2 = param_1;
  func_0x000107c4dfa4(param_1,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c60f38(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c3d798(lVar2,param_2,param_3);
  func_0x000107c3d798(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = param_3;
  func_0x000107c4fb44(param_3);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar3,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10044b048; end: 10044b04f; -[PINOperation priority] */

undefined8 FUN_10044b048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10044b050; end: 10044b093; -[PINOperationQueue operationQueueWithPriority:] */

void FUN_10044b050(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0xa0;
  if (param_3 != 2) {
    lVar1 = 0x98;
  }
  lVar2 = 0x90;
  if (param_3 != 0) {
    lVar2 = lVar1;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x000107c61174(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10044b094; end: 10044b1a7; -[PINDiskCache _locked_createCacheDirectory] */

undefined * FUN_10044b094(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c4e430(uVar2);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c43418(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  if ((int)puVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c409e4();
    func_0x000107c61174(0);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(0);
  }
  else {
    func_0x000107c4c4d0(PTR_PTR_1126dbe20,param_2,*(undefined8 *)(param_1 + 0x80));
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}



/* Entry: 10044b1a8; end: 10044b1af; -[PINOperation reference] */

undefined8 FUN_10044b1a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10044b1b0; end: 10044b1b7; -[PINOperation identifier] */

undefined8 FUN_10044b1b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10044b1b8; end: 10044b2b3; -[PINOperationQueue scheduleNextOperations:] */

void FUN_10044b1b8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c4b940();
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    lVar1 = param_1;
    func_0x000107c4b98c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10044bae4;
      puStack_48 = &UNK_110883780;
      func_0x000107c61174(lVar1);
      lStack_40 = lVar1;
      lStack_38 = param_1;
      FUN_10007380c(uVar2,&puStack_60);
      func_0x000107c61170(lStack_40);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5d278(param_1);
  if ((param_3 & 1) == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10044c1ec;
    puStack_70 = &UNK_11087bb00;
    lStack_68 = param_1;
    FUN_10007380c(*(undefined8 *)(param_1 + 0x80),&puStack_88);
  }
  return;
}



/* Entry: 10044b2b4; end: 10044b307; -[PINOperationQueue locked_nextOperationByQueue] */

void FUN_10044b2b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c43638(uVar1);
  func_0x000107c61180();
  func_0x000107c4b990(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10044b308; end: 10044b39f; -[PINOperationQueue locked_removeOperation:] */

/* WARNING: Possible PIC construction at 0x00010044b364: Changing call to branch */

void FUN_10044b308(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c4f248(param_3);
    lVar2 = param_1;
    func_0x000107c4dfa4(param_1,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c4ff80();
    func_0x000107c4ff80(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10044b3a0; end: 10044b3cb; -[SCCache _configureDiskQuota] */

void FUN_10044b3a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c446b0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c174c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setByteLimit__11263ad40,uVar1);
  return;
}



/* Entry: 10044b3cc; end: 10044b41f; -[SCCacheSizePolicy hardSizeLimit] */

long FUN_10044b3cc(ulong param_1)

{
  double dVar1;
  
  func_0x000107c5b088();
  if (param_1 < 0x1e00001) {
    dVar1 = (double)param_1 + (double)param_1;
  }
  else {
    if (param_1 < 0xc800001) {
      dVar1 = 1.5;
    }
    else {
      dVar1 = 1.2;
    }
    dVar1 = (double)param_1 * dVar1;
  }
  return (long)dVar1;
}



/* Entry: 10044b420; end: 10044b42b; -[SCCacheSizePolicy sizeLimit] */

long FUN_10044b420(long param_1)

{
  return *(long *)(param_1 + 0x10) << 0x14;
}



/* Entry: 10044b42c; end: 10044b517; -[PINDiskCache setByteLimit:] */

void FUN_10044b42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c4dfa0(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c3d7d4(param_1);
  func_0x000107c611b0();
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10044b518; end: 10044b5bb; -[SCStoriesMediaStore initWithCache:diskStore:] */

undefined1 *
FUN_10044b518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fa6e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044b5bc; end: 10044b5db;  */

void FUN_10044b5bc(void)

{
  func_0x000107c61168(&PTR_PTR_11292f4b0);
  return;
}



/* Entry: 10044b5dc; end: 10044b633; -[_TtC21SCDiscoverCrashLogger21SCDiscoverCrashLogger initWithCrashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044b5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112fee540) = param_3;
  lVar2 = param_1;
  FUN_10044b5bc();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10044b634; end: 10044b8ef; -[SCStoriesThumbnailCoordinator initWithStoriesMediaStore:sessionRequestManager:contentDelivery:grapheneMetricsEmitter:crashLogger:] */

undefined1 *
FUN_10044b634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_1126fa700;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d7610;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126d7618;
    func_0x000107c610f4();
    func_0x000107c47e04();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126d7620;
    func_0x000107c610f4();
    func_0x000107c47e3c();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126d7600;
    func_0x000107c610f4();
    func_0x000107c47de8();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044b8f0; end: 10044b9a3; -[SCStoriesThumbnailCoordinatingListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044b8f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_1130804e0;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_1130804e8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_1130804d0;
  uVar2 = 0x1130802a8;
  FUN_1000285a8(0x1130802a8,&UNK_10dd0b600);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_10044b9a4();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10044b9a4; end: 10044b9c3;  */

void FUN_10044b9a4(void)

{
  func_0x000107c61168(&PTR_PTR_1129c2d98);
  return;
}



/* Entry: 10044b9c4; end: 10044bae3; -[SCMyStoriesMediaThumbnailGenerator initWithPerformer:cachingDelegate:] */

undefined1 *
FUN_10044b9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fa6f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_4);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d7600;
    func_0x000107c610f4();
    func_0x000107c47de8();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044bae4; end: 10044bc9b;  */

long FUN_10044bae4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c3eae4();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c41214(uVar3);
  func_0x000107c61180();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x000107c3ff20();
  func_0x000107c61180();
  lVar2 = lVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar4);
      }
      (**(code **)(*(long *)(lVar7 * 8) + 0x10))();
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar4);
  plVar6 = (long *)(param_1 + 0x28);
  func_0x000107c60f3c(*(undefined8 *)(*plVar6 + 0x58));
  func_0x000107c4b940(*plVar6);
  *(undefined1 *)(*plVar6 + 0x68) = 0;
  func_0x000107c5d278(*plVar6);
  lVar2 = *plVar6;
  func_0x000107c51908();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar4);
  func_0x000107c60bd8();
  return *(long *)(lVar2 + 8);
}



/* Entry: 10044bc9c; end: 10044bca3; -[PINOperation block] */

undefined8 FUN_10044bc9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10044bca4; end: 10044bcb7; -[PINOperation data] */

undefined8 FUN_10044bca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10044bcb8; end: 10044bd23;  */

/* WARNING: Possible PIC construction at 0x00010044bcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044bcf8) */

void FUN_10044bcb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c4b940(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c40794();
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10044bd24; end: 10044bd2f; -[PINDiskCache lock] */

void FUN_10044bd24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lockWhenCondition__1126059a0,1);
  return;
}



/* Entry: 10044bd30; end: 10044c133; -[PINDiskCache _locked_initializeDiskProperties] */

/* WARNING: Possible PIC construction at 0x00010044bdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044be98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044bf74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044bf84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044bf94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044bfcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044bfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c19c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044c124) */
/* WARNING: Removing unreachable block (ram,0x00010044c12c) */
/* WARNING: Removing unreachable block (ram,0x00010044c114) */
/* WARNING: Removing unreachable block (ram,0x00010044c06c) */
/* WARNING: Removing unreachable block (ram,0x00010044c104) */
/* WARNING: Removing unreachable block (ram,0x00010044c01c) */
/* WARNING: Removing unreachable block (ram,0x00010044c05c) */
/* WARNING: Removing unreachable block (ram,0x00010044c03c) */
/* WARNING: Removing unreachable block (ram,0x00010044c00c) */
/* WARNING: Removing unreachable block (ram,0x00010044bff0) */
/* WARNING: Removing unreachable block (ram,0x00010044bff8) */
/* WARNING: Removing unreachable block (ram,0x00010044c004) */
/* WARNING: Removing unreachable block (ram,0x00010044bfd0) */
/* WARNING: Removing unreachable block (ram,0x00010044bf98) */
/* WARNING: Removing unreachable block (ram,0x00010044bfa4) */
/* WARNING: Removing unreachable block (ram,0x00010044bfc0) */
/* WARNING: Removing unreachable block (ram,0x00010044bf88) */
/* WARNING: Removing unreachable block (ram,0x00010044bf78) */
/* WARNING: Removing unreachable block (ram,0x00010044be9c) */
/* WARNING: Removing unreachable block (ram,0x00010044bf14) */
/* WARNING: Removing unreachable block (ram,0x00010044bf18) */
/* WARNING: Removing unreachable block (ram,0x00010044bf64) */
/* WARNING: Removing unreachable block (ram,0x00010044bf1c) */
/* WARNING: Removing unreachable block (ram,0x00010044bf70) */
/* WARNING: Removing unreachable block (ram,0x00010044bdf4) */
/* WARNING: Removing unreachable block (ram,0x00010044bfc4) */
/* WARNING: Removing unreachable block (ram,0x00010044bfc8) */
/* WARNING: Removing unreachable block (ram,0x00010044be40) */
/* WARNING: Removing unreachable block (ram,0x00010044be50) */
/* WARNING: Removing unreachable block (ram,0x00010044be54) */
/* WARNING: Removing unreachable block (ram,0x00010044be68) */
/* WARNING: Removing unreachable block (ram,0x00010044be70) */
/* WARNING: Removing unreachable block (ram,0x00010044bf90) */
/* WARNING: Removing unreachable block (ram,0x00010044be94) */
/* WARNING: Removing unreachable block (ram,0x00010044c1a0) */

void FUN_10044bd30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  uStack_78 = *(undefined8 *)PTR__NSURLTotalFileAllocatedSizeKey_11034ab28;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,2);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  func_0x000107c4052c();
  func_0x000107c61180();
  func_0x000107c61174(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10044c134; end: 10044c1bb; -[SCUserExtensionDefaultsImpl setObject:forKey:] */

/* WARNING: Possible PIC construction at 0x00010044c19c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044c1a0) */

void FUN_10044c134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c5c1f8(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar1,param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10044c1bc; end: 10044c1eb; -[PINDiskCache setDeadFiles:] */

void FUN_10044c1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10044c1ec; end: 10044c2cf;  */

void FUN_10044c1ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60f74(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),0xffffffffffffffff);
  func_0x000107c4b940(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c4b988();
  func_0x000107c61180();
  func_0x000107c5d278(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 == 0) {
    func_0x000107c60f70(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10044c358;
    puStack_48 = &UNK_110883780;
    func_0x000107c61174(lVar1);
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    lStack_40 = lVar1;
    FUN_10007380c(uVar2,&puStack_60);
    func_0x000107c61170(lStack_40);
  }
  func_0x000107c61170(lVar1);
  return;
}


