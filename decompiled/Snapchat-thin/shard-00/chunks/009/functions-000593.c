/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b6ccf4; end: 100b6ce0f;  */

void FUN_100b6ccf4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xe0);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4da50();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_48,param_1 + 0x20);
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100b6ce10; end: 100b6ce7f;  */

void FUN_100b6ce10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c43bf4(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3b2d4(lVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100b6ce80; end: 100b6d06b; -[SCMemoriesMergedDataSourceServiceProvider _createMergedDataSourceWithPluginFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6ce80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126d1440;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  lVar2 = param_1;
  FUN_100b6d06c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4cc44();
  func_0x000107c61180();
  lVar4 = param_1;
  FUN_100b6d06c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11275a870;
    func_0x000107c61148();
  }
  lVar7 = lVar12;
  func_0x000107c3fc48();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11275a878;
    func_0x000107c61148(lVar13);
  }
  lVar9 = lVar13;
  func_0x000107c4cb94(lVar13);
  func_0x000107c61180();
  lVar10 = 0;
  if (param_1 != 0) {
    lVar10 = param_1 + _DAT_11275a87c;
    func_0x000107c61148(lVar10);
  }
  lVar11 = lVar10;
  func_0x000107c444a4(lVar10);
  func_0x000107c61180();
  func_0x000107c48138(puVar1,param_2,lVar3,lVar6,param_3,lVar8,lVar9,lVar11);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b6d06c; end: 100b6d08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6d06c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11275a874);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b6d090; end: 100b6d0cf;  */

void FUN_100b6d090(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b7b0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b6d0d0; end: 100b6d383; -[SCMemoriesDataObjectStorageServiceProvider _galleryDataObjectContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6d0d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_70;
  
  lVar19 = (long)_DAT_11277b6d4;
  func_0x000107c611ec(param_1 + lVar19);
  lVar20 = (long)_DAT_11277b6dc;
  lVar1 = *(long *)(param_1 + lVar20);
  if (lVar1 == 0) {
    uVar2 = param_1 + _DAT_11277b700;
    func_0x000107c61148();
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNull_1126aef28);
    uVar4 = uVar2;
    func_0x000107c6115c(uVar2,puVar3);
    if ((uVar4 & 1) == 0) {
      lVar1 = param_1 + _DAT_11277b700;
      func_0x000107c61148();
      uStack_70 = lVar1;
      func_0x000107c436d4();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
    else {
      uStack_70 = 0;
    }
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dbd88;
    func_0x000107c610f4();
    lVar1 = param_1 + _DAT_11277b6e4;
    func_0x000107c61148();
    lVar5 = lVar1;
    func_0x000107c5da60();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5d984();
    func_0x000107c61180();
    lVar7 = param_1 + _DAT_11277b6e4;
    func_0x000107c61148();
    lVar8 = lVar7;
    func_0x000107c5da68();
    func_0x000107c61180();
    lVar9 = param_1 + _DAT_11277b6fc;
    func_0x000107c61148();
    lVar10 = lVar9;
    func_0x000107c5dac4();
    func_0x000107c61180();
    lVar11 = param_1 + _DAT_11277b704;
    func_0x000107c61148(lVar11);
    lVar12 = lVar11;
    func_0x000107c444a4();
    func_0x000107c61180();
    lVar13 = param_1 + _DAT_11277b6f0;
    func_0x000107c61148(lVar13);
    lVar14 = lVar13;
    func_0x000107c408d0();
    func_0x000107c61180();
    lVar15 = param_1 + _DAT_11277b6e8;
    func_0x000107c61148();
    lVar16 = lVar15;
    func_0x000107c3fa04();
    func_0x000107c61180();
    lVar17 = param_1 + _DAT_11277b708;
    func_0x000107c61148();
    func_0x000107c4926c();
    uVar18 = *(undefined8 *)(param_1 + lVar20);
    *(undefined **)(param_1 + lVar20) = puVar3;
    func_0x000107c61170(uVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uStack_70);
    lVar1 = *(long *)(param_1 + lVar20);
  }
  func_0x000107c41268(lVar1);
  func_0x000107c61180();
  func_0x000107c611f0(param_1 + lVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b6d384; end: 100b6d52f; -[SCGalleryDataObjectContextHandler initWithUserId:userSessionContext:userTrackedLogger:grapheneRegistry:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:] */

undefined1 *
FUN_100b6d384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126fe798;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b6d530; end: 100b6d58f; -[SCGalleryDataObjectContextHandler dataObjectContext] */

void FUN_100b6d530(long param_1)

{
  long lVar1;
  
  func_0x000107c611ec(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    func_0x000107c3b214(param_1);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  func_0x000107c61174(lVar1);
  func_0x000107c611f0(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b6d590; end: 100b6d6bf; -[SCGalleryDataObjectContextHandler _createDataObjectContext] */

void FUN_100b6d590(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x000107c3c728();
  puVar4 = PTR_PTR_1126b24d8;
  bVar1 = (int)lVar2 == 0;
  if (bVar1) {
    puVar3 = PTR_PTR_1126dbdd8;
    func_0x000107c610f4(PTR_PTR_1126dbdd8);
    func_0x000107c4940c();
    func_0x000107c5a9d8();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    func_0x000107c610f4();
    puVar3 = PTR_PTR_1126dbdd8;
    func_0x000107c610f4(PTR_PTR_1126dbdd8);
    func_0x000107c4940c();
    func_0x000107c46130();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfb01d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b24e0,PTR_s_fireGalleryCoreDataDBOpen_graphe_1125c9a18,!bVar1,uVar5);
  return;
}



/* Entry: 100b6d6c0; end: 100b6d7bf; -[SCGalleryDataObjectContextHandler _shouldCreateUserIdBasedDataContext] */

undefined8 FUN_100b6d6c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b24d8;
  func_0x000107c41fe8(PTR_PTR_1126b24d8,param_2,&PTR____CFConstantStringClassReference_110ec17f8,
                      *(undefined8 *)(param_1 + 8));
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x000107c49e14();
    if ((uVar3 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x000107c49e24();
      if (iVar1 == 0) {
        return 0;
      }
    }
    puVar2 = PTR_PTR_1126b24d8;
    func_0x000107c5a9e8(PTR_PTR_1126b24d8,param_2,&PTR____CFConstantStringClassReference_110ec17f8);
    if ((int)puVar2 != 0) {
      puVar2 = PTR_PTR_1126b24d8;
      func_0x000107c5a9d4(PTR_PTR_1126b24d8,param_2,&PTR____CFConstantStringClassReference_110ec17f8
                         );
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126b2500;
      func_0x000107c430ec(PTR_PTR_1126b2500,param_2,*(undefined8 *)(param_1 + 8),puVar2);
      func_0x000107c61180();
      if ((puVar4 == (undefined *)0x0) ||
         (func_0x000107c3c754(param_1,param_2,puVar4,puVar2), (int)param_1 != 0)) {
        func_0x000107c41850(puVar2,param_2,0,0);
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar2);
      return uVar5;
    }
  }
  return 1;
}



/* Entry: 100b6d7c0; end: 100b6d883; +[SCDataObjectContext diskFileExistsForContextName:userId:] */

undefined *
FUN_100b6d7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c415e0(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b24d8;
  func_0x000107c41fec(PTR_PTR_1126b24d8,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar3 = puVar2;
  func_0x000107c4e430(puVar2);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c43418(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 100b6d884; end: 100b6da13; +[SCDataObjectContext diskFileURLForContextName:userId:] */

void FUN_100b6d884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_100b6da14();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = uVar2;
  func_0x000107c4d9e8(uVar2,param_2,&PTR____CFConstantStringClassReference_110f71118);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  FUN_100088750();
  func_0x000107c61180();
  func_0x000107c43478(puVar4,param_2,uVar1,1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c3abe0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c51804(puVar6,param_2,&PTR____CFConstantStringClassReference_110ef7618);
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c3ac04(puVar4,param_2,puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  puVar6 = puVar7;
  func_0x000107c3ac04(puVar7,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100b6da14; end: 100b6da67;  */

void FUN_100b6da14(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7970 != -1) {
    FUN_10002a2fc(0x1137f7970,&PTR___NSConcreteGlobalBlock_110d59890);
  }
  uVar1 = uRam00000001137f7978;
  func_0x000107c61174(uRam00000001137f7978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b6da68; end: 100b6dbc3;  */

void FUN_100b6da68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f71118;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f71158;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ec17f8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_78,1);
  func_0x000107c61180();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f6de58;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x000107c419ac();
  func_0x000107c61180();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f710f8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar3;
  func_0x000107c419ac();
  func_0x000107c61180();
  ppuVar6 = &puStack_50;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar4;
  func_0x000107c419ac();
  func_0x000107c61180();
  uVar1 = puRam00000001137f7978;
  puRam00000001137f7978 = puVar5;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar6,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 100b6dbc4; end: 100b6dbcb; -[SCGalleryUserDefaultsManager _convertToBool:] */

void FUN_100b6dbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 100b6dbcc; end: 100b6dc8f;  */

void FUN_100b6dbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10bc85674;
  puStack_40 = &UNK_110d96508;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4ec5c(puVar1,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c4351c(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100b6dc90; end: 100b6e0db;  */

void FUN_100b6dc90(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  puVar3 = PTR_PTR_1126bf830;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c4a484();
    func_0x000107c61170(uVar2);
    if ((int)puVar3 == 0) {
      func_0x000107c61174(param_2);
      lVar4 = param_2;
      func_0x000107c43638();
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107e773cc();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      *(long *)(lVar1 + 0x40) = lVar5;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(lVar4);
      lVar4 = param_2;
      FUN_100b6eae4(param_2,0);
      func_0x000107c61180();
      uVar2 = *(undefined8 *)(lVar1 + 0x38);
      *(long *)(lVar1 + 0x38) = lVar4;
      func_0x000107c61170(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c40808(*(undefined8 *)(lVar1 + 0x38));
      func_0x000107c4d974();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
      *(undefined **)(lVar1 + 0x58) = puVar3;
      func_0x000107c61170(uVar2);
      lVar4 = lVar1;
      func_0x000107c3cabc();
      *(long *)(lVar1 + 0x60) = lVar4;
      uVar2 = *(undefined8 *)(lVar1 + 0x78);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c41988();
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c41988();
      func_0x000107c61180();
      func_0x000107c61174(param_2);
      lVar4 = param_2;
      func_0x000107c4080c();
      lVar5 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            func_0x000107c61128(param_2);
          }
          lVar13 = *(long *)(lVar14 * 8);
          lVar7 = lVar13;
          func_0x000107e75d08(lVar13);
          func_0x000107c61180();
          lVar8 = lVar13;
          func_0x000107c42eec();
          if (lVar8 == 1) {
            func_0x000107c408bc(lVar13);
            func_0x000107c61180();
            func_0x000107e77508();
LAB_100b6df68:
            func_0x000107c61170(lVar13);
          }
          else if (lVar8 == 0) {
            func_0x000107c4fd30(lVar13);
            func_0x000107c61180();
            lVar8 = lVar13;
            func_0x000107c5b538();
            func_0x000107c61180();
            func_0x000107c61170(lVar13);
            func_0x000107e77598(lVar8,puVar3,lVar7);
            lVar13 = lVar8;
            goto LAB_100b6df68;
          }
          func_0x000107c61170(lVar7);
          lVar14 = lVar14 + 1;
        } while (lVar4 != lVar14);
        lVar4 = param_2;
        func_0x000107c4080c();
      }
      func_0x000107c61170(param_2);
      puVar9 = puVar3;
      func_0x000107c40794();
      uVar2 = *(undefined8 *)(lVar1 + 0x48);
      *(undefined **)(lVar1 + 0x48) = puVar9;
      func_0x000107c61170(uVar2);
      puVar9 = puVar6;
      func_0x000107c40794();
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      *(undefined **)(lVar1 + 0x50) = puVar9;
      func_0x000107c61170();
      FUN_10011df08();
      func_0x000107c61180();
      uVar12 = *(undefined8 *)(lVar1 + 0xb0);
      *(undefined8 *)(lVar1 + 0xb0) = uVar2;
      func_0x000107c61170(uVar12);
      puVar9 = PTR_PTR_1126b60f8;
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
      lVar4 = param_2;
      func_0x000107c43638(param_2);
      func_0x000107c61180();
      puVar10 = puVar9;
      func_0x000107c4e310(puVar9);
      func_0x000107c61180();
      func_0x000107c4e310(puVar9);
      func_0x000107c61180();
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar3);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x98);
      func_0x000107c61174(param_2);
      func_0x000107c4e524(uVar2);
    }
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  func_0x000107c60e78();
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b6e0dc; end: 100b6e103; -[SCMemoriesSnapFeedManager nextAvailableSnapFeedItemSubject] */

void FUN_100b6e0dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b6e104; end: 100b6e123;  */

void FUN_100b6e104(void)

{
  func_0x000107c61168(&PTR_PTR_112926ff8);
  return;
}



/* Entry: 100b6e124; end: 100b6e163;  */

void FUN_100b6e124(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100b6e164; end: 100b6e1ab; -[SCMemoriesSideButtonStateProvider snapFeedAppearingObservable] */

void FUN_100b6e164(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5b2b0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b6e1ac; end: 100b6e1d3; -[SCMemoriesSnapFeedManager snapFeedAppearingObservable] */

void FUN_100b6e1ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b6e1d4; end: 100b6e1e7;  */

void FUN_100b6e1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateForSingleSnapExperienceWi_112593b08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b6e1e8; end: 100b6e287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6e1e8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_1 != 0) && (param_2 == 0)) {
      uVar1 = *(undefined8 *)(param_3 + _DAT_113038298);
      *(long *)(param_3 + _DAT_113038298) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61170(uVar1);
      FUN_100b6e288();
      func_0x000107c61170(param_3);
      param_3 = param_1;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100b6e288; end: 100b6eabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b6e288(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar12 = _DAT_113038298;
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar10 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar13 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + _DAT_113038298);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c3d1a0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar3;
      func_0x000107c4da88(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      puVar4 = &UNK_110729270;
      func_0x000107c613fc(&UNK_110729270,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_70 = FUN_100b6edbc;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_100b5fdac;
      puStack_78 = &UNK_110729558;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar3 = lVar2;
      func_0x000107c5c320(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c3e924(lVar3);
      func_0x000107c61170(lVar3);
    }
    lVar2 = *(long *)(unaff_x20 + lVar12);
    if (lVar2 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c3d168();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        lVar2 = lVar3;
        func_0x000107c4da88(lVar3);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        puVar4 = &UNK_110729270;
        func_0x000107c613fc(&UNK_110729270,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        pcStack_70 = FUN_100b6fdf0;
        puStack_90 = puVar1;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_100b5fdac;
        puStack_78 = &UNK_110729530;
        puStack_68 = puVar4;
        func_0x000107c60bc4(&puStack_90);
        func_0x000107c61574(puStack_68);
        lVar3 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c3e924(lVar3);
        func_0x000107c61170(lVar3);
      }
      lVar2 = *(long *)(unaff_x20 + lVar12);
      if (lVar2 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x000107c4ae74();
          func_0x000107c61180();
          func_0x000107c615e8(lVar2);
          lVar2 = lVar3;
          func_0x000107c4da88(lVar3);
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          puVar4 = &UNK_110729270;
          func_0x000107c613fc(&UNK_110729270,0x18,7);
          func_0x000107c61614(puVar4 + 0x10);
          pcStack_70 = (code *)&UNK_103f92128;
          puStack_90 = puVar1;
          uStack_88 = 0x42000000;
          pcStack_80 = (code *)&UNK_103470194;
          puStack_78 = &UNK_110729508;
          puStack_68 = puVar4;
          func_0x000107c60bc4(&puStack_90);
          func_0x000107c61574(puStack_68);
          lVar3 = lVar2;
          func_0x000107c5c320(lVar2);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(lVar2);
          func_0x000107c3e924(lVar3);
          func_0x000107c61170(lVar3);
        }
        lVar2 = *(long *)(unaff_x20 + lVar12);
        if (lVar2 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar3 = lVar2;
            func_0x000107c3d13c();
            func_0x000107c61180();
            func_0x000107c615e8(lVar2);
            lVar2 = lVar3;
            func_0x000107c4da88(lVar3);
            func_0x000107c61180();
            func_0x000107c61170(lVar3);
            puVar4 = &UNK_110729270;
            func_0x000107c613fc(&UNK_110729270,0x18,7);
            func_0x000107c61614(puVar4 + 0x10);
            pcStack_70 = FUN_100b6feec;
            puStack_90 = puVar1;
            uStack_88 = 0x42000000;
            pcStack_80 = FUN_100b6fe98;
            puStack_78 = &UNK_1107294e0;
            puStack_68 = puVar4;
            func_0x000107c60bc4(&puStack_90);
            func_0x000107c61574(puStack_68);
            lVar3 = lVar2;
            func_0x000107c5c320(lVar2);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c61170(lVar2);
            func_0x000107c3e924(lVar3);
            func_0x000107c61170(lVar3);
          }
          lVar2 = *(long *)(unaff_x20 + lVar12);
          if (lVar2 != 0) {
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar2 != 0) {
              lVar3 = lVar2;
              func_0x000107c3d14c();
              func_0x000107c61180();
              func_0x000107c615e8(lVar2);
              lVar2 = lVar3;
              func_0x000107c4da88(lVar3);
              func_0x000107c61180();
              func_0x000107c61170(lVar3);
              puVar4 = &UNK_110729270;
              func_0x000107c613fc(&UNK_110729270,0x18,7);
              func_0x000107c61614(puVar4 + 0x10);
              pcStack_70 = FUN_100b701ac;
              puStack_90 = puVar1;
              uStack_88 = 0x42000000;
              pcStack_80 = FUN_100b610dc;
              puStack_78 = &UNK_1107294b8;
              puStack_68 = puVar4;
              func_0x000107c60bc4(&puStack_90);
              func_0x000107c61574(puStack_68);
              lVar3 = lVar2;
              func_0x000107c5c320(lVar2);
              func_0x000107c61180();
              func_0x000107c60bd0(ppuVar9);
              func_0x000107c61170(lVar2);
              func_0x000107c3e924(lVar3);
              func_0x000107c61170(lVar3);
            }
            lVar2 = *(long *)(unaff_x20 + lVar12);
            if (lVar2 != 0) {
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar2 != 0) {
                lVar3 = lVar2;
                func_0x000107c4b2e0();
                func_0x000107c61180();
                func_0x000107c615e8(lVar2);
                lVar2 = lVar3;
                func_0x000107c4da88(lVar3);
                func_0x000107c61180();
                func_0x000107c61170(lVar3);
                puVar4 = &UNK_110729270;
                func_0x000107c613fc(&UNK_110729270,0x18,7);
                func_0x000107c61614(puVar4 + 0x10);
                pcStack_70 = (code *)&UNK_103f92108;
                puStack_90 = puVar1;
                uStack_88 = 0x42000000;
                pcStack_80 = (code *)&UNK_101218f4c;
                puStack_78 = &UNK_110729490;
                puStack_68 = puVar4;
                func_0x000107c60bc4(&puStack_90);
                func_0x000107c61574(puStack_68);
                lVar3 = lVar2;
                func_0x000107c5c320(lVar2);
                func_0x000107c61180();
                func_0x000107c60bd0(ppuVar10);
                func_0x000107c61170(lVar2);
                func_0x000107c3e924(lVar3);
                func_0x000107c61170(lVar3);
              }
              lVar2 = *(long *)(unaff_x20 + lVar12);
              if (lVar2 != 0) {
                func_0x000107c5c734();
                func_0x000107c61180();
                if (lVar2 != 0) {
                  lVar3 = lVar2;
                  func_0x000107c51c88();
                  func_0x000107c61180();
                  func_0x000107c615e8(lVar2);
                  lVar2 = lVar3;
                  func_0x000107c4da88(lVar3);
                  func_0x000107c61180();
                  func_0x000107c61170(lVar3);
                  puVar4 = &UNK_110729270;
                  func_0x000107c613fc(&UNK_110729270,0x18,7);
                  func_0x000107c61614(puVar4 + 0x10);
                  pcStack_70 = FUN_100b70708;
                  puStack_90 = puVar1;
                  uStack_88 = 0x42000000;
                  pcStack_80 = FUN_100b6fe98;
                  puStack_78 = &UNK_110729468;
                  puStack_68 = puVar4;
                  func_0x000107c60bc4(&puStack_90);
                  func_0x000107c61574(puStack_68);
                  lVar3 = lVar2;
                  func_0x000107c5c320(lVar2);
                  func_0x000107c61180();
                  func_0x000107c60bd0(ppuVar11);
                  func_0x000107c61170(lVar2);
                  func_0x000107c3e924(lVar3);
                  func_0x000107c61170(lVar3);
                }
                lVar12 = *(long *)(unaff_x20 + lVar12);
                if (lVar12 != 0) {
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (lVar12 != 0) {
                    lVar2 = lVar12;
                    func_0x000107c51c8c();
                    func_0x000107c61180();
                    func_0x000107c615e8(lVar12);
                    lVar12 = lVar2;
                    func_0x000107c4da88(lVar2);
                    func_0x000107c61180();
                    func_0x000107c61170(lVar2);
                    puVar4 = &UNK_110729270;
                    func_0x000107c613fc(&UNK_110729270,0x18,7);
                    func_0x000107c61614(puVar4 + 0x10);
                    pcStack_70 = (code *)0x100b70728;
                    puStack_90 = puVar1;
                    uStack_88 = 0x42000000;
                    pcStack_80 = FUN_100b610dc;
                    puStack_78 = &UNK_110729440;
                    puStack_68 = puVar4;
                    func_0x000107c60bc4(&puStack_90);
                    func_0x000107c61574(puStack_68);
                    lVar2 = lVar12;
                    func_0x000107c5c320(lVar12);
                    func_0x000107c61180();
                    func_0x000107c60bd0(ppuVar13);
                    func_0x000107c61170(lVar12);
                    func_0x000107c3e924(lVar2);
                    func_0x000107c61170(lVar2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100b6eabc; end: 100b6eabf;  */

void FUN_100b6eabc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100b6eac0; end: 100b6eacb; -[SCLensCarouselManager activeObservable] */

undefined8 FUN_100b6eac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100b6eacc; end: 100b6ead7; -[SCLensCarouselManager lensCarouselEventsObservable] */

undefined8 FUN_100b6eacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 100b6ead8; end: 100b6eae3; -[SCLensCarouselManager activeLensIdObservable] */

undefined8 FUN_100b6ead8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100b6eae4; end: 100b6eceb;  */

/* WARNING: Possible PIC construction at 0x000100b6ec24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6ec48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6ec5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6ec8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6eca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6ec04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b6eca4) */
/* WARNING: Removing unreachable block (ram,0x000100b6ece8) */
/* WARNING: Removing unreachable block (ram,0x000100b6ecc4) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100b6ec90) */
/* WARNING: Removing unreachable block (ram,0x000100b6ec28) */
/* WARNING: Removing unreachable block (ram,0x000100b6ec38) */
/* WARNING: Removing unreachable block (ram,0x000100b6ec08) */
/* WARNING: Removing unreachable block (ram,0x000100b6ec4c) */
/* WARNING: Removing unreachable block (ram,0x000100b6ec0c) */
/* WARNING: Removing unreachable block (ram,0x000100b6ec58) */

void FUN_100b6eae4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174();
  func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  func_0x000107c61174(param_1);
  lVar2 = param_1;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_1);
      }
      lVar4 = *(long *)(lVar5 * 8);
      lVar3 = lVar4;
      func_0x000107c42eec();
      if (lVar3 == 1) {
        func_0x000107c408bc(lVar4);
        func_0x000107c61180();
        func_0x000107c4e698();
        func_0x000107c61180();
        func_0x000107c40808();
        param_1 = lVar4;
        goto code_r0x000107c61170;
      }
      if (lVar3 == 0) {
        func_0x000107c4fd30(lVar4);
        func_0x000107c61180();
        param_1 = lVar4;
        if (param_2 == 0) {
          func_0x000107c40440();
          func_0x000107c61180();
        }
        else {
          func_0x000107c5c7bc();
          func_0x000107c61180();
        }
        goto code_r0x000107c61170;
      }
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_1;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 100b6ecec; end: 100b6ed2f; -[SCMemoriesSnapFeedManager _updateForSingleSnapExperienceWithFeaturedStories:] */

void FUN_100b6ecec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b6eae4(param_3,1);
  func_0x000107c61180();
  func_0x000107c3cbd0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100b6ed30; end: 100b6ed33;  */

void FUN_100b6ed30(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100b6ed34; end: 100b6edbb;  */

void FUN_100b6ed34(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + *param_3);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c4d664(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 100b6edbc; end: 100b6eddb;  */

void FUN_100b6edbc(void)

{
  FUN_100b6ed34();
  return;
}



/* Entry: 100b6eddc; end: 100b6eddf;  */

void FUN_100b6eddc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100b6ede0; end: 100b6fd6f; -[SCMemoriesSnapFeedManager _updateEligibleSnapFeedItems:] */

long FUN_100b6ede0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  undefined *puVar30;
  long lStack_650;
  undefined *puStack_610;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined1 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  int iStack_418;
  undefined1 uStack_414;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 8);
  FUN_100b6fd70();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5b2bc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  func_0x000107c61174(param_3);
  lVar21 = param_3;
  func_0x000107c4080c();
  if (lVar21 != 0) {
    lVar27 = *plStack_3c0;
    do {
      lVar29 = 0;
      do {
        if (*plStack_3c0 != lVar27) {
          func_0x000107c61128(param_3);
        }
        puVar13 = PTR_DAT_1126a4ec8;
        lVar25 = *(long *)(lStack_3c8 + lVar29 * 8);
        func_0x000107c61174(lVar25);
        lVar11 = lVar25;
        FUN_10010fab4(lVar25,puVar13);
        lVar1 = lVar25;
        if ((int)lVar11 == 0) {
          lVar1 = 0;
        }
        func_0x000107c61174(lVar1);
        func_0x000107c61170(lVar25);
        if (lVar1 != 0) {
          lVar11 = lVar25;
          func_0x000107c5b2c4();
          func_0x000107c61180();
          lVar12 = lVar11;
          func_0x000107c40808();
          func_0x000107c61170(lVar11);
          if (lVar12 != 0) {
            func_0x000107c5b2c4(lVar25);
            func_0x000107c61180();
            func_0x000107c3d7a0(puVar10);
            func_0x000107c61170(lVar25);
          }
        }
        func_0x000107c61170(lVar1);
        lVar29 = lVar29 + 1;
      } while (lVar21 != lVar29);
      lVar21 = param_3;
      func_0x000107c4080c();
    } while (lVar21 != 0);
  }
  func_0x000107c61170(param_3);
  puVar13 = puVar10;
  func_0x000107c40794();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_3);
  func_0x000107c61174(param_3);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  func_0x000107c61174(param_3);
  lVar21 = param_3;
  func_0x000107c4080c();
  if (lVar21 != 0) {
    lVar27 = *plStack_3c0;
    do {
      lVar29 = 0;
      do {
        if (*plStack_3c0 != lVar27) {
          func_0x000107c61128(param_3);
        }
        puVar14 = PTR_PTR_1126bf7e0;
        uVar24 = *(ulong *)(lStack_3c8 + lVar29 * 8);
        func_0x000107c61174(uVar24);
        func_0x000107c61158(puVar14);
        uVar15 = uVar24;
        func_0x000107c6115c(uVar24,puVar14);
        uVar2 = uVar24;
        if ((uVar15 & 1) == 0) {
          uVar2 = 0;
        }
        func_0x000107c61174(uVar2);
        func_0x000107c61170(uVar24);
        if (uVar2 != 0) {
          uVar15 = uVar24;
          func_0x000107c5b2c0();
          func_0x000107c61180();
          uVar16 = uVar15;
          func_0x000107c40808();
          func_0x000107c61170(uVar15);
          if (uVar16 != 0) {
            func_0x000107c5b2c0(uVar24);
            func_0x000107c61180();
            func_0x000107c3d7a0(puVar10);
            func_0x000107c61170(uVar24);
          }
        }
        func_0x000107c61170(uVar2);
        lVar29 = lVar29 + 1;
      } while (lVar21 != lVar29);
      lVar21 = param_3;
      func_0x000107c4080c();
    } while (lVar21 != 0);
  }
  func_0x000107c61170(param_3);
  puVar14 = puVar10;
  func_0x000107c40794();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_3);
  lStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  plStack_400 = (long *)0x0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  func_0x000107c61174(param_3);
  lStack_650 = param_3;
  func_0x000107c4080c();
  if (lStack_650 != 0) {
    lVar21 = *plStack_400;
    do {
      lVar27 = 0;
      do {
        if (*plStack_400 != lVar21) {
          func_0x000107c61128(param_3);
        }
        puVar30 = *(undefined **)(lStack_408 + lVar27 * 8);
        puVar28 = puVar30;
        func_0x000107c43c5c();
        puVar17 = PTR_PTR_1126bf7e0;
        puVar10 = PTR_DAT_1126a4ec8;
        puStack_600 = puVar30;
        if (puVar28 == (undefined *)0x3) {
          func_0x000107c61174(puVar30);
          func_0x000107c61158(puVar17);
          puVar10 = puVar30;
          func_0x000107c6115c(puVar30,puVar17);
          if (((ulong)puVar10 & 1) == 0) {
            puStack_600 = (undefined *)0x0;
          }
          func_0x000107c61174(puStack_600);
          func_0x000107c61170(puVar30);
          puVar10 = puStack_600;
          func_0x000107c42998();
          puVar17 = *(undefined **)(param_1 + 0x30);
          func_0x000107c5c734();
          func_0x000107c61180();
          puStack_610 = puVar17;
          func_0x000107c4cba0();
          func_0x000107c61180();
          func_0x000107c61170(puVar17);
          puVar17 = puStack_600;
          func_0x000107c4e698();
          func_0x000107c61180();
          puStack_4d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_4d0 = 0xc2000000;
          puStack_4c8 = &UNK_1058dcf88;
          puStack_4c0 = &UNK_1108bdbe0;
          puVar28 = puVar17;
          puStack_4b8 = puVar14;
          uStack_4b0 = uVar5;
          puStack_4a8 = puStack_610;
          puStack_4a0 = puVar10;
          uStack_498 = uVar3;
          func_0x000107c4c284();
          func_0x000107c61180();
          func_0x000107c61170(puVar17);
          uStack_4f8 = 0;
          uStack_500 = 0;
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          lStack_518 = 0;
          uStack_520 = 0;
          uStack_508 = 0;
          plStack_510 = (long *)0x0;
          func_0x000107c61174(puVar28);
          puVar17 = puVar28;
          func_0x000107c4080c();
          if (puVar17 != (undefined *)0x0) {
            lVar29 = *plStack_510;
            do {
              puVar23 = (undefined *)0x0;
              do {
                if (*plStack_510 != lVar29) {
                  func_0x000107c61128(puVar28);
                }
                uVar26 = *(undefined8 *)(lStack_518 + (long)puVar23 * 8);
                uVar4 = uVar26;
                func_0x000107c435e4(uVar26);
                func_0x000107c61180();
                puVar22 = puVar7;
                func_0x000107c4d9e8();
                func_0x000107c61180();
                func_0x000107c61170();
                if (puVar22 == (undefined *)0x0) {
                  func_0x000107c56bd8();
                  puVar22 = PTR_PTR_1126b60f8;
                  func_0x000107c51b0c(uVar26);
                  func_0x000107c61180();
                  puVar20 = puVar30;
                  func_0x000107c43c58(puVar30);
                  func_0x000107c61180();
                  func_0x000107c4e310(puVar22);
                  func_0x000107c61180();
                  func_0x000107c56bd8(puVar6);
                  func_0x000107c61170(puVar22);
                  func_0x000107c61170(puVar20);
                  func_0x000107c61170(uVar26);
                  puVar22 = puStack_600;
                  func_0x000107c4e698(puStack_600);
                  func_0x000107c61180();
                  puVar20 = puVar30;
                  func_0x000107c43c58(puVar30);
                  func_0x000107c61180();
                  func_0x000107c56bd8(puVar9);
                  func_0x000107c61170(puVar20);
                  func_0x000107c61170(puVar22);
                }
                else {
                  puVar20 = puVar7;
                  func_0x000107c4d9e8();
                  func_0x000107c61180();
                  puVar22 = PTR_PTR_1126bf7e0;
                  func_0x000107c61158(PTR_PTR_1126bf7e0);
                  puVar19 = puVar20;
                  func_0x000107c6115c(puVar20,puVar22);
                  puVar22 = puVar20;
                  if (((ulong)puVar19 & 1) == 0) {
                    puVar22 = (undefined *)0x0;
                  }
                  func_0x000107c61174(puVar22);
                  func_0x000107c61170(puVar20);
                  puVar20 = puStack_600;
                  func_0x000107c4f248();
                  puVar19 = puVar22;
                  func_0x000107c4f248();
                  func_0x000107c61170(puVar22);
                  if (puVar20 < puVar19) {
                    func_0x000107c56bd8(puVar7);
                    puVar22 = PTR_PTR_1126b60f8;
                    func_0x000107c51b0c(uVar26);
                    func_0x000107c61180();
                    puVar20 = puVar30;
                    func_0x000107c43c58(puVar30);
                    func_0x000107c61180();
                    func_0x000107c4e310(puVar22);
                    func_0x000107c61180();
                    func_0x000107c56bd8(puVar6);
                    func_0x000107c61170(puVar22);
                    func_0x000107c61170(puVar20);
                    func_0x000107c61170(uVar26);
                    puVar22 = puStack_600;
                    func_0x000107c4e698(puStack_600);
                    func_0x000107c61180();
                    puVar20 = puVar30;
                    func_0x000107c43c58(puVar30);
                    func_0x000107c61180();
                    func_0x000107c56bd8(puVar9);
                    func_0x000107c61170(puVar20);
                    func_0x000107c61170(puVar22);
                  }
                  func_0x000107c3077c(puStack_610,puVar10);
                }
                func_0x000107c61170(uVar4);
                puVar23 = puVar23 + 1;
              } while (puVar17 != puVar23);
              puVar17 = puVar28;
              func_0x000107c4080c();
            } while (puVar17 != (undefined *)0x0);
          }
          func_0x000107c61170(puVar28);
LAB_100b6f9a0:
          func_0x000107c61170(puVar28);
          func_0x000107c61170(puStack_610);
          func_0x000107c61170(puStack_600);
        }
        else if (puVar28 == (undefined *)0x1) {
          func_0x000107c61174(puVar30);
          puVar17 = puVar30;
          FUN_10010fab4(puVar30,puVar10);
          if ((int)puVar17 == 0) {
            puStack_600 = (undefined *)0x0;
          }
          func_0x000107c61174(puStack_600);
          func_0x000107c61170(puVar30);
          puStack_610 = PTR_PTR_1126af4d0;
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          func_0x000107c5c734(uVar4);
          func_0x000107c61180();
          func_0x000107c430fc();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          puVar10 = puStack_600;
          func_0x000107c42998();
          puVar17 = *(undefined **)(param_1 + 0x30);
          func_0x000107c5c734();
          func_0x000107c61180();
          puVar28 = puVar17;
          func_0x000107c4cba0();
          func_0x000107c61180();
          func_0x000107c61170(puVar17);
          puStack_450 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_448 = 0xc2000000;
          puStack_440 = &UNK_1058dcd8c;
          puStack_438 = &UNK_1108bdbb0;
          puVar17 = puStack_610;
          puStack_430 = puVar13;
          uStack_428 = uVar5;
          puStack_420 = puVar28;
          iStack_418 = (int)puVar10;
          uStack_414 = uVar3;
          func_0x000107c4c284();
          func_0x000107c61180();
          lStack_488 = 0;
          uStack_490 = 0;
          uStack_478 = 0;
          plStack_480 = (long *)0x0;
          uStack_468 = 0;
          uStack_470 = 0;
          uStack_458 = 0;
          uStack_460 = 0;
          puVar23 = puVar17;
          func_0x000107c4080c();
          if (puVar23 != (undefined *)0x0) {
            lVar29 = *plStack_480;
            do {
              puVar22 = (undefined *)0x0;
              do {
                if (*plStack_480 != lVar29) {
                  func_0x000107c61128(puVar17);
                }
                uVar26 = *(undefined8 *)(lStack_488 + (long)puVar22 * 8);
                uVar4 = uVar26;
                func_0x000107c435e4(uVar26);
                func_0x000107c61180();
                puVar20 = puVar7;
                func_0x000107c4d9e8();
                func_0x000107c61180();
                func_0x000107c61170();
                if (puVar20 == (undefined *)0x0) {
                  func_0x000107c56bd8();
                  puVar20 = PTR_PTR_1126b60f8;
                  func_0x000107c51b0c(uVar26);
                  func_0x000107c61180();
                  puVar19 = puVar30;
                  func_0x000107c43c58(puVar30);
                  func_0x000107c61180();
                  func_0x000107c4e310(puVar20);
                  func_0x000107c61180();
                  func_0x000107c56bd8(puVar6);
                  func_0x000107c61170(puVar20);
                  func_0x000107c61170(puVar19);
                  func_0x000107c61170(uVar26);
                  puVar20 = puVar30;
                  func_0x000107c43c58(puVar30);
                  func_0x000107c61180();
                  func_0x000107c56bd8(puVar8);
                  func_0x000107c61170(puVar20);
                }
                else {
                  puVar19 = puVar7;
                  func_0x000107c4d9e8();
                  func_0x000107c61180();
                  puVar18 = puVar19;
                  FUN_10010fab4();
                  puVar20 = puVar19;
                  if ((int)puVar18 == 0) {
                    puVar20 = (undefined *)0x0;
                  }
                  func_0x000107c61174(puVar20);
                  func_0x000107c61170(puVar19);
                  puVar19 = puStack_600;
                  func_0x000107c4f248();
                  puVar18 = puVar20;
                  func_0x000107c4f248();
                  func_0x000107c61170(puVar20);
                  if ((int)puVar19 < (int)puVar18) {
                    func_0x000107c56bd8(puVar7);
                    puVar20 = PTR_PTR_1126b60f8;
                    func_0x000107c51b0c(uVar26);
                    func_0x000107c61180();
                    puVar19 = puVar30;
                    func_0x000107c43c58(puVar30);
                    func_0x000107c61180();
                    func_0x000107c4e310(puVar20);
                    func_0x000107c61180();
                    func_0x000107c56bd8(puVar6);
                    func_0x000107c61170(puVar20);
                    func_0x000107c61170(puVar19);
                    func_0x000107c61170(uVar26);
                    puVar20 = puVar30;
                    func_0x000107c43c58(puVar30);
                    func_0x000107c61180();
                    func_0x000107c56bd8(puVar8);
                    func_0x000107c61170(puVar20);
                  }
                  func_0x000107c3077c(puVar28,(long)(int)puVar10);
                }
                func_0x000107c61170(uVar4);
                puVar22 = puVar22 + 1;
              } while (puVar23 != puVar22);
              puVar23 = puVar17;
              func_0x000107c4080c();
            } while (puVar23 != (undefined *)0x0);
          }
          func_0x000107c61170(puVar17);
          goto LAB_100b6f9a0;
        }
        lVar27 = lVar27 + 1;
      } while (lVar27 != lStack_650);
      lStack_650 = param_3;
      func_0x000107c4080c();
    } while (lStack_650 != 0);
  }
  func_0x000107c61170(param_3);
  uVar26 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar26);
  func_0x000107c61180();
  uVar4 = uVar26;
  func_0x000107c4cba0();
  func_0x000107c61180();
  puVar10 = puVar6;
  func_0x000107c40808(puVar6);
  FUN_100b72ce8(uVar4,puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar26);
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  plStack_550 = (long *)0x0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  func_0x000107c61174(puVar6);
  puVar17 = puVar6;
  func_0x000107c4080c();
  if (puVar17 != (undefined *)0x0) {
    lVar21 = *plStack_550;
    do {
      puVar28 = (undefined *)0x0;
      do {
        if (*plStack_550 != lVar21) {
          func_0x000107c61128(puVar6);
        }
        puVar30 = puVar6;
        func_0x000107c4d9e8(puVar6);
        func_0x000107c61180();
        puVar23 = puVar30;
        func_0x000107c435e4();
        func_0x000107c61180();
        func_0x000107c56bd8(puVar10);
        func_0x000107c61170(puVar23);
        func_0x000107c61170(puVar30);
        puVar28 = puVar28 + 1;
      } while (puVar17 != puVar28);
      puVar17 = puVar6;
      func_0x000107c4080c();
    } while (puVar17 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar6);
  puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c520a4();
  func_0x000107c61180();
  puVar28 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  lStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  plStack_590 = (long *)0x0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  puVar30 = puVar7;
  func_0x000107c3dbc0();
  func_0x000107c61180();
  puVar23 = puVar30;
  func_0x000107c4080c();
  if (puVar23 != (undefined *)0x0) {
    lVar21 = *plStack_590;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_590 != lVar21) {
          func_0x000107c61128(puVar30);
        }
        lVar27 = *(long *)(lStack_598 + (long)puVar22 * 8);
        func_0x000107c43c58();
        func_0x000107c61180();
        if ((lVar27 != 0) && (puVar20 = puVar17, func_0x000107c40404(), ((ulong)puVar20 & 1) == 0))
        {
          func_0x000107c3d798(puVar17);
          func_0x000107c3d798(puVar28);
        }
        func_0x000107c61170(lVar27);
        puVar22 = puVar22 + 1;
      } while (puVar23 != puVar22);
      puVar23 = puVar30;
      func_0x000107c4080c();
    } while (puVar23 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar30);
  puStack_5f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_5f0 = 0xc2000000;
  puStack_5e8 = &UNK_100c6fe58;
  puStack_5e0 = &UNK_11085fb98;
  lStack_5d8 = param_1;
  puStack_5d0 = puVar28;
  puStack_5c8 = puVar6;
  puStack_5c0 = puVar7;
  puStack_5b8 = puVar10;
  puStack_5b0 = puVar8;
  puStack_5a8 = puVar9;
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar28);
  func_0x000100162d98("APPSTORE",&puStack_5f8);
  func_0x000107c61170(puStack_5b8);
  func_0x000107c61170(puStack_5c0);
  func_0x000107c61170(puStack_5c8);
  func_0x000107c61170(puStack_5d0);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  func_0x000107c60e78();
  func_0x000107c4c270();
  func_0x000107c61180();
  lVar21 = param_3;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  lVar27 = lVar21;
  func_0x000107c3ebcc();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(param_3);
  return lVar27;
}



/* Entry: 100b6fd70; end: 100b6fdd7;  */

undefined8 FUN_100b6fd70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4c270(param_1,param_2,&PTR____CFConstantStringClassReference_110eff5b8,0);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebcc();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100b6fdd8; end: 100b6fde3; -[SCLensCarouselManager selectedLensIdObservable] */

undefined8 FUN_100b6fdd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100b6fde4; end: 100b6fdef; -[SCLensCarouselManager selectedLensObservable] */

undefined8 FUN_100b6fde4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100b6fdf0; end: 100b6fe0f;  */

void FUN_100b6fdf0(void)

{
  FUN_100b6ed34();
  return;
}



/* Entry: 100b6fe10; end: 100b6fe97;  */

/* WARNING: Possible PIC construction at 0x000100b6fe70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b6fe80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b6fe74) */
/* WARNING: Removing unreachable block (ram,0x000100b6fe84) */

void FUN_100b6fe10(long param_1,long param_2,long param_3)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    func_0x000107c5c734(param_2);
    func_0x000107c61180();
    func_0x000107c611a0(param_1 + 0x48,param_2);
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b6fe98; end: 100b6fe9f;  */

void FUN_100b6fe98(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b6fea0; end: 100b6feeb;  */

void FUN_100b6fea0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b6feec; end: 100b6ff0b;  */

void FUN_100b6feec(void)

{
  FUN_100b6ed34();
  return;
}



/* Entry: 100b6ff0c; end: 100b700b3; -[SCFeatureAutoEnableRingFlashHandler _registerLensObserversForLensCarousel] */

void FUN_100b6ff0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  lVar1 = param_1 + 0x48;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c51c8c();
  func_0x000107c61180();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100b700b4;
  puStack_68 = &UNK_11084eff0;
  func_0x000107c6111c(auStack_60,auStack_58);
  lVar3 = lVar2;
  func_0x000107c5c320(lVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  param_1 = param_1 + 0x48;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3d168();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  lVar2 = lVar1;
  func_0x000107c5c320(lVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100b700b4; end: 100b70123;  */

/* WARNING: Possible PIC construction at 0x000100b700f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7010c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b700fc) */
/* WARNING: Removing unreachable block (ram,0x000100b70110) */

void FUN_100b700b4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4dfe8(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b70124; end: 100b701ab; -[SCFeatureAutoEnableRingFlashHandler _didActivateLens:] */

void FUN_100b70124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  puStack_40 = &UNK_100c6fe08;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b701ac; end: 100b701cb;  */

void FUN_100b701ac(void)

{
  FUN_100b6ed34();
  return;
}



/* Entry: 100b701cc; end: 100b7022b;  */

/* WARNING: Possible PIC construction at 0x000100b70208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7020c) */

void FUN_100b701cc(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3ebcc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b7022c; end: 100b70293; -[SCFeatureAutoEnableRingFlashHandler _didChangeLensCarouselActive:] */

void FUN_100b7022c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(byte *)(param_1 + 0xa0) != param_3) {
    *(char *)(param_1 + 0xa0) = (char)param_3;
    uStack_30 = 0xc2000000;
    puStack_28 = &UNK_10618357c;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 100b70294; end: 100b7029b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b70294(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      *(long *)(lVar1 + _DAT_112ee3ed8) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100b7029c; end: 100b7031b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7029c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      *(long *)(param_3 + _DAT_112ee3ed8) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100b7031c; end: 100b70323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7031c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c3d14c();
        func_0x000107c61180();
        puVar3 = &UNK_11058b218;
        func_0x000107c613fc(&UNK_11058b218,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar1);
        uStack_68 = 0x100b704b4;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        pcStack_78 = FUN_100b610dc;
        puStack_70 = &UNK_11058b258;
        ppuVar4 = &puStack_88;
        puStack_60 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_60);
        lVar5 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c3e924(lVar5);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100b70324; end: 100b70477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b70324(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar1 = param_1;
        func_0x000107c3d14c();
        func_0x000107c61180();
        puVar2 = &UNK_11058b218;
        func_0x000107c613fc(&UNK_11058b218,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,param_3);
        uStack_68 = 0x100b704b4;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        pcStack_78 = FUN_100b610dc;
        puStack_70 = &UNK_11058b258;
        ppuVar3 = &puStack_88;
        puStack_60 = puVar2;
        func_0x000107c60bc4(ppuVar3);
        func_0x000107c61574(puStack_60);
        lVar4 = lVar1;
        func_0x000107c5c320(lVar1);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c3e924(lVar4);
        func_0x000107c61170(param_3);
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100b70478; end: 100b7049b;  */

void FUN_100b70478(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7049c; end: 100b704bb;  */

void FUN_100b7049c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100b704bc; end: 100b70557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b704bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ee3ff0);
    uStack_50 = param_1;
    func_0x000107c6157c(uVar1);
    FUN_100075034(FUN_100b70558,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100b70558; end: 100b705a3;  */

void FUN_100b70558(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 100b705a4; end: 100b705a7;  */

void FUN_100b705a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b705a8; end: 100b705cb;  */

void FUN_100b705a8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b705cc; end: 100b705d3;  */

void FUN_100b705cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b705d4; end: 100b705f7;  */

void FUN_100b705d4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b705f8; end: 100b705ff;  */

void FUN_100b705f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b70600; end: 100b70623;  */

void FUN_100b70600(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b70624; end: 100b70637;  */

void FUN_100b70624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b70638; end: 100b706ff;  */

void FUN_100b70638(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b70700; end: 100b70707;  */

void FUN_100b70700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b70708; end: 100b70747;  */

void FUN_100b70708(void)

{
  FUN_100b6ed34();
  return;
}



/* Entry: 100b70748; end: 100b7074b;  */

void FUN_100b70748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b7074c; end: 100b7076f;  */

void FUN_100b7074c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b70770; end: 100b7077b;  */

void FUN_100b70770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b7077c; end: 100b7079f;  */

void FUN_100b7077c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b707a0; end: 100b70923; -[SCGalleryUserDefaultsManager snapFeedSnapLevelPriorities] */

void FUN_100b707a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b70924; end: 100b70943; -[SCARBarActivationEntryPoint init] */

void FUN_100b70924(void)

{
  func_0x000100b707f0();
  return;
}



/* Entry: 100b70944; end: 100b709ef; -[SCARBarActivationEntryPoint setValue:forIvarName:] */

void FUN_100b70944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b709f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100b71038(auStack_50);
  return;
}



/* Entry: 100b709f0; end: 100b70fb3;  */

void FUN_100b709f0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x656d61436e69616d;
    if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
       (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561a0();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ecf90)) ||
         (func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef10ecd80)) ||
           (func_0x000107c605b8(0xd00000000000002e,0x800000010ef13280,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c561ac();
        }
        else {
          uVar2 = 0x7265537261427261;
          if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
             (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52898();
          }
          else {
            uVar2 = 0xd000000000000021;
            if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef1039a00)) ||
               (func_0x000107c605b8(0xd000000000000021,0x800000010efc6600,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c90();
            }
            else {
              uVar2 = 0xd00000000000001b;
              if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10dd740)) ||
                 (func_0x000107c605b8(0xd00000000000001b,0x800000010ef228c0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c52fdc();
              }
              else {
                if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef103ce90)) {
                  uVar2 = 0xd000000000000015;
                  func_0x000107c605b8(0xd000000000000015,0x800000010efc3170,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f0db70)) ||
                       (func_0x000107c605b8(0xd00000000000001c,0x800000010f0f2490,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55ca0();
                    }
                    else {
                      uVar2 = 0xd000000000000019;
                      if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e0a30)) ||
                         (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c55cbc();
                      }
                      else {
                        if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) {
                          uVar2 = 0xd000000000000015;
                          func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,
                                              0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = 0xd000000000000039;
                            if (((param_2 != -0x2fffffffffffffc7) ||
                                (param_3 != -0x7ffffffef0e90d70)) &&
                               (func_0x000107c605b8(0xd000000000000039,0x800000010f16f290,param_2,
                                                    param_3,0), (uVar2 & 1) == 0)) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "ARBarIntegration/SCARBarActivationEntryPoint.swift"
                                                  ,0x32,2,0x5d,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x100b70fb4);
                              (*pcVar1)();
                            }
                            FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c52880();
                            goto LAB_100b70a80;
                          }
                        }
                        FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c55df4();
                      }
                    }
                    goto LAB_100b70a80;
                  }
                }
                FUN_100b70fb4(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59c30();
              }
            }
          }
        }
      }
    }
  }
LAB_100b70a80:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b70fb4; end: 100b70fd7;  */

long * FUN_100b70fb4(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100b70fd8; end: 100b70fe3; -[SCARBarActivationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b70fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa33d0;
  func_0x000107c61428(param_1 + _DAT_112fa33d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b70fe4; end: 100b71037;  */

void FUN_100b70fe4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71038; end: 100b71057;  */

void FUN_100b71038(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100b7104c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100b71058; end: 100b71063; -[SCARBarActivationEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa33d8;
  func_0x000107c61428(param_1 + _DAT_112fa33d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71064; end: 100b7106f; -[SCARBarActivationEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71064(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa33e0;
  func_0x000107c61428(param_1 + _DAT_112fa33e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71070; end: 100b7107b; -[SCARBarActivationEntryPoint setMainCameraScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa33e8;
  func_0x000107c61428(param_1 + _DAT_112fa33e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7107c; end: 100b71087; -[SCARBarActivationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7107c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa33f0;
  func_0x000107c61428(param_1 + _DAT_112fa33f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71088; end: 100b71093; -[SCARBarActivationEntryPoint setLensCarouselStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71088(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa33f8;
  func_0x000107c61428(param_1 + _DAT_112fa33f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71094; end: 100b7109f; -[SCARBarActivationEntryPoint setCameraConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3400;
  func_0x000107c61428(param_1 + _DAT_112fa3400,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b710a0; end: 100b71113; -[SCSCTaskManagementServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b710a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305cbb8,0);
  func_0x000107c61614(param_1 + _DAT_11305cbc0,0);
  *(undefined8 *)(param_1 + _DAT_11305cbc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b71114; end: 100b711bf; -[SCSCTaskManagementServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b71114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b711c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b711c0; end: 100b71357;  */

void FUN_100b711c0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e14730)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f1eb8d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StartSystemScopeGraphBridge/SCSCTaskManagementServicesSaberServiceProvider.swift"
                            ,0x50,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b71358);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c597d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b71358; end: 100b71363; -[SCSCTaskManagementServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71358(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cbb8;
  func_0x000107c61428(param_1 + _DAT_11305cbb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71364; end: 100b713b7;  */

void FUN_100b71364(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b713b8; end: 100b713c3; -[SCSCTaskManagementServicesSaberServiceProvider setStartSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b713b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305cbc0;
  func_0x000107c61428(param_1 + _DAT_11305cbc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b713c4; end: 100b713f7; -[SCSCTaskManagementServicesSaberServiceProvider __safeProvide] */

void FUN_100b713c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b713f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b713f8; end: 100b714df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b713f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5bbdc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b7153c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11305cad8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11305cbc8);
      *(long *)(unaff_x20 + _DAT_11305cbc8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b714e0; end: 100b714eb; -[SCSCTaskManagementServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b714e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cbb8;
  func_0x000107c61428(param_1 + _DAT_11305cbb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b714ec; end: 100b7152f;  */

void FUN_100b714ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b71530; end: 100b7153b; -[SCSCTaskManagementServicesSaberServiceProvider startSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71530(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305cbc0;
  func_0x000107c61428(param_1 + _DAT_11305cbc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7153c; end: 100b715b7;  */

void FUN_100b7153c(undefined8 param_1)

{
  if (lRam000000011305ca18 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ed2d8);
  return;
}



/* Entry: 100b715b8; end: 100b715c3; -[SCARBarActivationEntryPoint setTaskManagmentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b715b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3408;
  func_0x000107c61428(param_1 + _DAT_112fa3408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b715c4; end: 100b71637; -[SCSCLensCollectionTabBarServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b715c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee1928,0);
  func_0x000107c61614(param_1 + _DAT_112ee1930,0);
  *(undefined8 *)(param_1 + _DAT_112ee1938) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


