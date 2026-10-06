/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10081a7e8; end: 10081a963; -[SCImpalaManagedBusinessProfilesCache initWithCache:performer:handlers:currentUserId:appStartExperimentReader:] */

undefined1 *
FUN_10081a7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126ff3c0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dc838;
    func_0x000107c610f4();
    func_0x000107c61158(PTR_PTR_1126dc858);
    func_0x000107c45b24();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar3);
    uVar3 = param_6;
    func_0x000107c40794();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126b10e0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10081a964; end: 10081aa0b; +[IMPListManagedBusinessProfilesResponse descriptor] */

void FUN_10081a964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c53b58,
                        &PTR____CFConstantStringClassReference_110f4e1d8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335be60,8,0x28,0x1c);
    puRam00000001137f2990 = puVar1;
  }
  return;
}



/* Entry: 10081aa0c; end: 10081ab6b;  */

void FUN_10081aa0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR__CGPointZero_110347540;
  if (*(char *)(param_3 + 0x48) == '\x01') {
    param_1 = *(undefined8 *)PTR__CGPointZero_110347540;
    param_2 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c3e8a4(param_1,param_2,*(undefined8 *)(param_3 + 0x38),
                        *(undefined8 *)(param_3 + 0x40),PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c61178();
    func_0x000107c3ab30();
    func_0x000107c608c8(param_4,puVar4);
    func_0x000107c608dc(param_4);
    func_0x000107c61170(puVar3);
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if (lVar5 != 0) {
    func_0x000107c61178();
    func_0x000107c3ab24();
    func_0x000107c60910(param_4,lVar5);
    param_1 = *(undefined8 *)puVar2;
    param_2 = *(undefined8 *)(puVar2 + 8);
    if (*(char *)(param_3 + 0x48) == '\x01') {
      func_0x000107c609d0();
      func_0x000107c608ec(param_4);
    }
    else {
      func_0x000107c608f0(param_1,param_2,*(undefined8 *)(param_3 + 0x38),
                          *(undefined8 *)(param_3 + 0x40),param_4);
    }
  }
  cVar1 = *(char *)(param_3 + 0x49);
  func_0x000107c5b078(*(undefined8 *)(param_3 + 0x28));
  uVar7 = *(undefined8 *)(param_3 + 0x38);
  uVar8 = *(undefined8 *)(param_3 + 0x40);
  if (cVar1 == '\x01') {
    FUN_10081ab6c();
  }
  else {
    func_0x000107c308d0();
  }
  if ((*(byte *)(param_3 + 0x4a) & 1) != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x30);
    func_0x000107c61178(uVar6);
    func_0x000107c3ab24();
    func_0x000107c60910(param_4,uVar6);
    func_0x000107c608f0(param_1,param_2,uVar7,uVar8,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,uVar7,uVar8,*(undefined8 *)(param_3 + 0x28),PTR_s_drawInRect__1125bfff0
            );
  return;
}



/* Entry: 10081ab6c; end: 10081ac27;  */

double FUN_10081ab6c(double param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(dVar2))) {
    bVar1 = param_2 == dVar2;
  }
  if (!bVar1) {
    bVar1 = false;
    if ((param_3 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(param_4) && !NAN(dVar2))) {
      bVar1 = param_4 == dVar2;
    }
    if (!bVar1) {
      dVar2 = (double)(long)(param_4 * (double)(float)(param_1 / param_2));
      if (param_1 / param_2 <= param_3 / param_4) {
        dVar2 = param_3;
      }
      return (double)(float)(int)((param_3 - (double)(float)dVar2) * 0.5);
    }
  }
  return *(double *)PTR__CGRectZero_110347608;
}



/* Entry: 10081ac28; end: 10081ac9b; -[PINDiskCache keyForEncodedFileURL:] */

void FUN_10081ac28(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c4aa34();
  func_0x000107c61180();
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c4148c(param_1,param_2,param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10081ac9c; end: 10081ad03; -[PINDiskCache decodedString:] */

void FUN_10081ac9c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  func_0x000107c61174(param_3);
  ppuVar1 = param_3;
  func_0x000107c4adac();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x000107c61174(param_3);
    ppuVar1 = param_3;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10081ad04; end: 10081ae8b; -[PINDiskCache metadataForFileUrl:] */

void FUN_10081ad04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c4e430(param_3);
    func_0x000107c61180();
    uStack_48 = 0;
    puVar4 = puVar2;
    func_0x000107c41234(puVar2,param_2,&PTR____CFConstantStringClassReference_110f83578,lVar3,
                        &uStack_48);
    func_0x000107c61180();
    uVar1 = uStack_48;
    func_0x000107c61174(uStack_48);
    func_0x000107c61170(lVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      func_0x000107c45424();
      func_0x000107c57e2c();
      puVar6 = puVar5;
      func_0x000107c41478(puVar5,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10081ae8c; end: 10081afef;  */

void FUN_10081ae8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c61178();
  func_0x000107c4345c();
  uVar2 = param_3;
  func_0x000107c61178(param_3);
  func_0x000107c4345c();
  func_0x000107c61024(lVar1,uVar2,0,0,0,1);
  if (lVar1 == -1) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x000107c41304(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x000107c61180();
    lVar4 = param_4;
    func_0x000107c61178();
    func_0x000107c4345c();
    uVar2 = param_3;
    func_0x000107c61178(param_3);
    func_0x000107c3ac4c();
    puVar5 = puVar3;
    func_0x000107c61178(puVar3);
    func_0x000107c4d2d0();
    func_0x000107c61024(lVar4,uVar2,puVar5,lVar1,0,1);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_5 != (undefined8 *)0x0) && (lVar4 != lVar1)) {
      func_0x000107c60e5c();
      func_0x000107c42a58();
      func_0x000107c61180();
      func_0x000107c61104();
      *param_5 = puVar5;
    }
    puVar5 = puVar3;
    func_0x000107c40794(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10081aff0; end: 10081b13f; -[SCCacheKeyKindEntry initWithCoder:] */

undefined1 * FUN_10081aff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270af78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41454();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10081b140; end: 10081b147; -[PINDiskCache setByteCount:] */

void FUN_10081b140(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10081b148; end: 10081b1f3; -[SCCacheDataHandlerCache initWithCache:cacheKey:dataClass:] */

undefined1 *
FUN_10081b148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ff440;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10081b1f4; end: 10081b223; -[SCDataHandler setCache:] */

void FUN_10081b1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10081b224; end: 10081b36f; -[SCImpalaManagedBusinessProfilesLoader initWithRPC:performer:handlers:runtimeProvider:circumstanceEngine:userId:] */

undefined1 *
FUN_10081b224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126ff3c8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x28),param_6);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10081b370; end: 10081b39f; -[SCDataHandler setLoader:] */

void FUN_10081b370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10081b3a0; end: 10081b3a3; -[SCDataHandler data] */

void FUN_10081b3a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_atomicData_1125a0ac0);
  return;
}



/* Entry: 10081b3a4; end: 10081b3af; -[SCDataHandler atomicData] */

void FUN_10081b3a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 10081b3b0; end: 10081b517; -[SCSnapProUserProfileIdProviderImpl _businessIdFromDataHandlers:] */

/* WARNING: Possible PIC construction at 0x00010081b478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010081b4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010081b550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010081b4d0) */
/* WARNING: Removing unreachable block (ram,0x00010081b514) */
/* WARNING: Removing unreachable block (ram,0x00010081b564) */
/* WARNING: Removing unreachable block (ram,0x00010081b51c) */
/* WARNING: Removing unreachable block (ram,0x00010081b4f0) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010081b47c) */
/* WARNING: Removing unreachable block (ram,0x00010081b4b4) */
/* WARNING: Removing unreachable block (ram,0x00010081b488) */
/* WARNING: Removing unreachable block (ram,0x00010081b494) */
/* WARNING: Removing unreachable block (ram,0x00010081b4b0) */
/* WARNING: Removing unreachable block (ram,0x00010081b554) */

void FUN_10081b3b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    if (*plStack_120 != *plStack_120) {
      func_0x000107c61128(param_3);
    }
    param_3 = *plStack_128;
    func_0x000107c41214(param_3);
    func_0x000107c61180();
    func_0x000107c5d918();
    func_0x000107c61180();
    func_0x000107c49ec8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10081b518; end: 10081b567;  */

/* WARNING: Possible PIC construction at 0x00010081b550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010081b554) */

void FUN_10081b518(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61148(param_1 + 0x20);
    func_0x000107c3b9f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10081b568; end: 10081b5a3; -[SCDataHandler addObserverWithBlock:] */

void FUN_10081b568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3d7c8(uVar1);
  func_0x000107c61180();
  func_0x000107c3b488(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10081b5a4; end: 10081b6fb; -[SCDataHandlerObserverList addObserverWithBlock:] */

void FUN_10081b5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126dc908;
  func_0x000107c610f4();
  func_0x000107c45a20();
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c3d798(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x10) = 1;
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61144(auStack_38,param_1);
  puVar2 = PTR_PTR_1126afd78;
  func_0x000107c610f4(PTR_PTR_1126afd78);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(puVar1);
  func_0x000107c45b74(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10081b6fc; end: 10081b773; -[SCDataHandlerObserver initWithBlock:] */

undefined1 * FUN_10081b6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ff470;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10081b774; end: 10081b827; -[SCDataHandler _didAddDataObserver] */

void FUN_10081b774(undefined8 param_1)

{
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c4e590();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10081b828; end: 10081b937; -[SCDataHandler _scheduleRefreshIfNeeded] */

void FUN_10081b828(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  dVar4 = *(double *)(param_1 + 0x50);
  if ((0.0 < dVar4) && (*(long *)(param_1 + 0x38) == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000107c449d0();
    if (iVar1 != 0) {
      func_0x000107c61144(auStack_48,param_1);
      puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c5c9dc(param_1);
      func_0x000107c6111c(auStack_50,auStack_48);
      func_0x000107c51924(dVar4);
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar2;
      func_0x000107c61170(uVar3);
      func_0x000107c61120(auStack_50);
      func_0x000107c61120(auStack_48);
    }
  }
  return;
}



/* Entry: 10081b938; end: 10081b93f; -[SCDataHandlerObserverList hasObservers] */

undefined1 FUN_10081b938(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10081b940; end: 10081ba0b; -[SCDataHandler timeIntervalBeforeExpiration] */

double FUN_10081b940(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  if (*(double *)(param_1 + 0x50) <= 0.0) {
    dVar4 = INFINITY;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x000107c4aa3c();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c421a8(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
    }
    else {
      func_0x000107c61174(puVar1);
      puVar2 = puVar1;
    }
    func_0x000107c61170(puVar1);
    dVar3 = *(double *)(param_1 + 0x50);
    puVar1 = puVar2;
    func_0x000107c4132c(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c5c9f0(puVar1);
    dVar4 = 0.0;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    func_0x000107c61170(puVar1);
  }
  return dVar4;
}



/* Entry: 10081ba0c; end: 10081ba13; -[SCDataHandlerMetadata lastRefreshDate] */

undefined8 FUN_10081ba0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10081ba14; end: 10081ba73; -[SCDataHandler shouldLoad] */

void FUN_10081ba14(long param_1)

{
  ulong uVar1;
  
  if (((*(byte *)(param_1 + 0x29) & 1) != 0) || (*(long *)(param_1 + 0x60) == 0)) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x000107c5e11c();
    if (((uVar1 & 1) != 0) || (*(long *)(param_1 + 0x58) == 0)) {
      func_0x000107c4d568();
    }
  }
  return;
}



/* Entry: 10081ba74; end: 10081bc67; -[SCDataHandler loadIfNeeded] */

void FUN_10081ba74(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x000107c49fe0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000107c3f3e4(), (int)uVar1 != 0)) {
    func_0x000107c55704(param_1);
    func_0x000107c61144(auStack_48,param_1);
    if (((*(byte *)(param_1 + 0x29) & 1) == 0) && (lVar4 = *(long *)(param_1 + 0x60), lVar4 != 0)) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      puStack_60 = &UNK_100c691ec;
      puStack_58 = &UNK_110acbab8;
      func_0x000107c6111c(auStack_50,auStack_48);
      func_0x000107c43074(lVar4);
      func_0x000107c61120(auStack_50);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c4d684();
      func_0x000107c61180();
      uVar1 = param_1;
      func_0x000107c4d568();
      if ((int)uVar1 != 0) {
        func_0x000107c61170(uVar2);
        uVar2 = 0;
      }
      func_0x000107c611ec(param_1 + 8);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      uVar1 = param_1;
      func_0x000107c3e298(param_1);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_78,auStack_48);
      func_0x000107c61174(uVar2);
      func_0x000107c4b728();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar1);
      func_0x000107c611f0(param_1 + 8);
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_78);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c4d89c(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61120(auStack_48);
  }
  return;
}



/* Entry: 10081bc68; end: 10081bc9b; -[SCDataHandler isLoading] */

undefined1 FUN_10081bc68(long param_1)

{
  undefined1 uVar1;
  
  func_0x000107c611ec(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c611f0(param_1 + 8);
  return uVar1;
}



/* Entry: 10081bc9c; end: 10081bcf7; -[SCDataHandler canLoad] */

bool FUN_10081bc9c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1;
  func_0x000107c5ac54();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x000107c4d684();
    func_0x000107c61180();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(long *)(param_1 + 0x58) != 0;
    }
    func_0x000107c61170();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10081bcf8; end: 10081bd27; -[SCDataHandler setIsLoading:] */

void FUN_10081bcf8(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x000107c611ec(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10081bd28; end: 10081bdff; -[SCImpalaManagedBusinessProfilesCache fetchDataWithCompletion:] */

void FUN_10081bd28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c43074(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10081be00; end: 10081bf5b; -[SCCacheDataHandlerCache fetchDataWithCompletion:] */

void FUN_10081be00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10081c0f4;
  pcStack_80 = FUN_10083b6c4;
  uStack_78 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c4d9c4(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c60bcc(&uStack_a0,8);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10081bf5c; end: 10081bf6b; -[SCCache objectForKey:dataDecoding:block:] */

void FUN_10081bf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f0,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10081bf6c; end: 10081bf73; -[SCCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:] */

void FUN_10081bf6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey_dataDecoding_resetE_1126159f8);
  return;
}



/* Entry: 10081bf74; end: 10081c0f3; -[SCCache objectForKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:] */

void FUN_10081bf74(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  if ((param_4 != 0) && (param_7 != 0)) {
    func_0x000107c61144(auStack_68,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    func_0x000107c6111c(auStack_80,auStack_68);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    uStack_78 = param_1;
    func_0x000107c61174(param_7);
    uStack_70 = param_8;
    func_0x000107c4e524(uVar1);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10081c0f4; end: 10081c103;  */

void FUN_10081c0f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10081c104; end: 10081c13f;  */

/* WARNING: Possible PIC construction at 0x00010081c124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010081c128) */

void FUN_10081c104(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  return;
}



/* Entry: 10081c140; end: 10081c2bb; -[SCDataHandlerObserverList notifyWithHandler:] */

void FUN_10081c140(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c40794();
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61174(lVar2);
  lVar3 = lVar2;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar2);
      }
      lVar4 = *(long *)(lVar8 * 8);
      func_0x000107c3eae4();
      func_0x000107c61180();
      (**(code **)(lVar4 + 0x10))();
      func_0x000107c61170(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(0);
  func_0x000107c60bd8();
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c42d60();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10081c2bc; end: 10081c303; -[SCMyStoriesDataCoordinator failedSnapCountObservable] */

void FUN_10081c2bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42d60();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10081c304; end: 10081c377;  */

void FUN_10081c304(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3b354(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10081c378; end: 10081c51f;  */

void FUN_10081c378(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61148();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2b) & 1) == 0)) {
    func_0x000107c45308(*(undefined8 *)(lVar1 + 8));
    if (*(long *)(lVar1 + 0x48) == 0) {
      func_0x000107c3c214(*(undefined8 *)(param_1 + 0x48),lVar1);
    }
    else {
      func_0x000107c61144(auStack_48,lVar1);
      uVar4 = *(undefined8 *)(lVar1 + 0x48);
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      func_0x000107c4a8c8(uVar2);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_60,auStack_48);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c61174(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x000107c61174(uVar7);
      uStack_50 = *(undefined1 *)(param_1 + 0x50);
      uStack_58 = *(undefined8 *)(param_1 + 0x48);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x000107c61174(uVar3);
      func_0x000107c4d9e4(uVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61120(auStack_60);
      func_0x000107c61120(auStack_48);
    }
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10081c520; end: 10081c54b; -[SCMemoryCacheKeyGenerator key:] */

void FUN_10081c520(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c5c170(*(undefined8 *)(param_1 + 8));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10081c54c; end: 10081c6af; -[PINMemoryCache objectForKeyAsync:completion:] */

void FUN_10081c54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_4 != 0) {
    func_0x000107c61144(auStack_48,param_1);
    func_0x000107c4dfa0(param_1);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c3d7d4(param_1);
    func_0x000107c611b0();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10081c6b0; end: 10081c6b7; -[PINMemoryCache operationQueue] */

undefined8 FUN_10081c6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10081c6b8; end: 10081ced3; -[SCLegacyStoriesServicesEntryPoint _createSnapPostCoordinatorWithPerformer:storyMentionMessageSender:snapProPendingSnapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081c6b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_11275429c;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar4 = lVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_112754310;
  func_0x000107c61148();
  lVar35 = lVar2;
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar5 = lVar35;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_1127542b0;
  func_0x000107c61148();
  lVar7 = lVar2;
  func_0x000107c444a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_112754314;
  func_0x000107c61148();
  lVar8 = lVar2;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar9 = PTR_PTR_1126b0e28;
  func_0x000107c610f4();
  lVar2 = lVar8;
  func_0x000107c5c734(lVar8);
  func_0x000107c61180();
  func_0x000107c4660c();
  func_0x000107c61170(lVar2);
  lVar35 = (long)_DAT_1127542a0;
  lVar2 = param_1 + lVar35;
  func_0x000107c61148();
  lVar10 = lVar2;
  func_0x000107c5bf98();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_1127542d4;
  func_0x000107c61148();
  lVar11 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar12 = PTR_PTR_1126cf4a0;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112754318;
  func_0x000107c61148(lVar2);
  lVar13 = lVar2;
  func_0x000107c4c95c();
  func_0x000107c61180();
  lVar35 = param_1 + lVar35;
  func_0x000107c61148(lVar35);
  lVar14 = lVar35;
  func_0x000107c5bf64();
  func_0x000107c61180();
  lVar33 = (long)_DAT_11275431c;
  lVar5 = param_1 + lVar33;
  func_0x000107c61148();
  lVar15 = lVar5;
  func_0x000107c5c024();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_112754320;
  func_0x000107c61148();
  lVar17 = lVar16;
  func_0x000107c5b3d4();
  func_0x000107c61180();
  func_0x000107c46688();
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_112754324;
  func_0x000107c61148();
  lVar18 = lVar2;
  func_0x000107c3eabc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar34 = (long)_DAT_1127542dc;
  lVar2 = param_1 + lVar34;
  func_0x000107c61148();
  lVar35 = lVar2;
  func_0x000107c406f4();
  func_0x000107c61180();
  lVar19 = lVar35;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar2);
  puVar20 = PTR_PTR_1126cf4a8;
  func_0x000107c610f4();
  lVar21 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_1127542ec;
  func_0x000107c61148();
  lVar22 = lVar2;
  func_0x000107c4456c();
  func_0x000107c61180();
  lVar35 = param_1 + _DAT_112754328;
  func_0x000107c61148();
  lVar23 = lVar35;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_1127542e4;
  func_0x000107c61148();
  lVar24 = lVar5;
  func_0x000107c5c054();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_11275432c;
  func_0x000107c61148();
  lVar25 = lVar16;
  func_0x000107c5bd34();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_112754330;
  func_0x000107c61148();
  lVar26 = lVar13;
  func_0x000107c40688();
  func_0x000107c61180();
  lVar33 = param_1 + lVar33;
  func_0x000107c61148();
  lVar27 = lVar33;
  func_0x000107c5c024();
  func_0x000107c61180();
  lVar14 = param_1 + _DAT_1127542e8;
  func_0x000107c61148();
  lVar28 = lVar14;
  func_0x000107c5b484();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_112754334;
  func_0x000107c61148();
  lVar29 = lVar15;
  func_0x000107c5ca9c();
  func_0x000107c61180();
  lVar17 = param_1 + _DAT_112754338;
  func_0x000107c61148();
  lVar30 = lVar17;
  func_0x000107c5a994();
  func_0x000107c61180();
  lVar31 = param_1 + _DAT_11275433c;
  func_0x000107c61148();
  lVar32 = lVar31;
  func_0x000107c3e5d8();
  func_0x000107c61180();
  func_0x000107c46690();
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar21);
  lVar2 = param_1 + lVar34;
  func_0x000107c61148();
  lVar5 = lVar2;
  func_0x000107c5bfd4();
  func_0x000107c61180();
  lVar35 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3d740();
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  param_1 = param_1 + lVar34;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c452cc();
  func_0x000107c61180();
  lVar35 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c59958();
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 10081ced4; end: 10081cf13;  */

void FUN_10081ced4(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 10081cf14; end: 10081cfe7;  */

void FUN_10081cf14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4d9dc(lVar3);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar5 = *(code **)(lVar2 + 0x10);
    func_0x000107c61174(0);
    (*pcVar5)(lVar2,lVar3,uVar1,0,lVar4);
    func_0x000107c61170(0);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10081cfe8; end: 10081d173; -[PINMemoryCache objectForKey:metadata:] */

void FUN_10081cfe8(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
    goto LAB_10081d108;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c610fc(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c4b940(param_1);
  if ((*(char *)(param_1 + 8) != '\x01') || (dVar4 = *(double *)(param_1 + 0x18), dVar4 <= 0.0)) {
LAB_10081d084:
    lVar3 = *(long *)(param_1 + 0x78);
    func_0x000107c4d9e8(lVar3,param_2,param_3);
    func_0x000107c61180();
    if ((param_4 != (undefined8 *)0x0) && (lVar3 != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      func_0x000107c4d9e8(uVar2,param_2,param_3);
      func_0x000107c61180();
      func_0x000107c61104();
      *param_4 = uVar2;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107c4d9c0(uVar2,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c5c9ec();
    dVar5 = *(double *)(param_1 + 0x18);
    func_0x000107c61170(uVar2);
    if (ABS(dVar4) < dVar5) goto LAB_10081d084;
    lVar3 = 0;
  }
  func_0x000107c5d278(param_1);
  if (lVar3 != 0) {
    func_0x000107c4b940(param_1);
    func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x80),param_2,puVar1,param_3);
    func_0x000107c5d278(param_1);
  }
  func_0x000107c61170(puVar1);
LAB_10081d108:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10081d174; end: 10081d17b; -[PINMemoryCache lock] */

void FUN_10081d174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_lock_11034c908)(param_1 + 0xb0);
  return;
}



/* Entry: 10081d17c; end: 10081d183; -[PINMemoryCache unlock] */

void FUN_10081d17c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_1 + 0xb0);
  return;
}



/* Entry: 10081d184; end: 10081d2af;  */

/* WARNING: Possible PIC construction at 0x00010081d1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010081d244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010081d1f4) */
/* WARNING: Removing unreachable block (ram,0x00010081d1fc) */
/* WARNING: Removing unreachable block (ram,0x00010081d200) */
/* WARNING: Removing unreachable block (ram,0x00010081d26c) */
/* WARNING: Removing unreachable block (ram,0x00010081d294) */
/* WARNING: Removing unreachable block (ram,0x00010081d298) */
/* WARNING: Removing unreachable block (ram,0x00010081d29c) */
/* WARNING: Removing unreachable block (ram,0x00010081d2a0) */
/* WARNING: Removing unreachable block (ram,0x00010081d204) */
/* WARNING: Removing unreachable block (ram,0x00010081d214) */
/* WARNING: Removing unreachable block (ram,0x00010081d248) */

void FUN_10081d184(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar1 = param_1 + 0x40;
  func_0x000107c61148();
  if (lVar1 != 0) {
    if ((param_4 == 0) || (param_5 == 0)) {
      func_0x000107c3c214(*(undefined8 *)(param_1 + 0x48),lVar1,param_2,
                          *(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x50));
    }
    else {
      func_0x000107c42bcc(param_4);
      func_0x000107c61180();
      func_0x000107c5c9f0();
      lVar1 = param_4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10081d2b0; end: 10081d44f; -[SCCache _readObjectFromDiskCache:originalKey:dataDecoding:resetExpiration:whenLessThanDelta:block:returnExpired:] */

void FUN_10081d2b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61144(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c6111c(auStack_80,auStack_68);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uStack_78 = param_1;
  uStack_70 = param_9;
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10081d450; end: 10081d47f;  */

/* WARNING: Possible PIC construction at 0x00010081d46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010081d470) */

void FUN_10081d450(long param_1)

{
  func_0x000107c61120(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10081d480; end: 10081d5ef;  */

void FUN_10081d480(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x48;
  func_0x000107c61148();
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x2b) & 1) == 0)) {
    func_0x000107c61144(auStack_48,lVar2);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c4a8c8(uVar3);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_48);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c61174(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c61174(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c61174(uVar7);
    uStack_50 = *(undefined1 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c4d9e4(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10081d5f0; end: 10081d6f7; -[SCDiskCacheKeyGenerator key:] */

void FUN_10081d5f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3b5d0(param_1,param_2,param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4adac();
  uVar3 = uVar1;
  if (*(ulong *)(param_1 + 8) < uVar2) {
    uVar2 = param_3;
    func_0x000107c3abac();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4adac();
    uVar6 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2;
    if (uVar6 < uVar3) {
      func_0x000107c5c37c(uVar2,param_2,uVar6);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      uVar6 = *(ulong *)(param_1 + 8);
    }
    uVar2 = uVar4;
    func_0x000107c4adac(uVar4);
    uVar5 = uVar1;
    func_0x000107c5c37c(uVar1,param_2,uVar6 - uVar2);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5c170();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10081d6f8; end: 10081d77f; -[SCDiskCacheKeyGenerator _encodedString:] */

void FUN_10081d6f8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  ppuVar1 = param_3;
  func_0x000107c4adac();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c49930(uVar2);
    func_0x000107c61180();
    ppuVar1 = param_3;
    func_0x000107c5c160(param_3,param_2,uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10081d780; end: 10081d8df; -[PINDiskCache objectForKeyAsync:completion:] */

void FUN_10081d780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_48,param_1);
  func_0x000107c4dfa0(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3d7d4(param_1);
  func_0x000107c611b0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10081d8e0; end: 10081d9df;  */

void FUN_10081d8e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4d9d0(lVar3);
    func_0x000107c61180();
    func_0x000107c61174(0);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar5 = *(code **)(lVar2 + 0x10);
    func_0x000107c61174(0);
    (*pcVar5)(lVar2,lVar3,uVar1,0,0,lVar4);
    func_0x000107c61170(0);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(0);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10081d9e0; end: 10081dd87; -[PINDiskCache objectForKey:fileURL:metadata:] */

void FUN_10081d9e0(long param_1,undefined8 param_2,long param_3,long *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c610fc(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_3 == 0) {
    lVar5 = 0;
    goto LAB_10081dbf4;
  }
  lVar2 = param_1;
  func_0x000107c42774();
  func_0x000107c61180();
  func_0x000107c4b940(param_1);
  if ((*(char *)(param_1 + 0x20) != '\x01') || (dVar7 = *(double *)(param_1 + 0x60), dVar7 <= 0.0))
  {
LAB_10081daa8:
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4();
    lVar5 = lVar2;
    func_0x000107c4e430(lVar2);
    func_0x000107c61180();
    func_0x000107c46110();
    func_0x000107c61170(lVar5);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x000107c4d9e8(uVar3);
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
LAB_10081dbb4:
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar4);
      goto LAB_10081dbc4;
    }
    func_0x000107c5d278(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar5 + 0x10))(lVar5,puVar4,param_3,uVar3);
    func_0x000107c61180();
    if ((param_5 != (undefined8 *)0x0) && (lVar5 != 0)) {
      func_0x000107c4b940(param_1);
      uVar6 = *(undefined8 *)(param_1 + 0xb8);
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61104();
      *param_5 = uVar6;
      func_0x000107c5d278(param_1);
    }
    func_0x000107c4b940(param_1);
    if (lVar5 == 0) goto LAB_10081dbb4;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      func_0x000107c3e28c(param_1);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x000107c4d9c0(uVar3);
    func_0x000107c61180();
    func_0x000107c5c9ec();
    dVar8 = *(double *)(param_1 + 0x60);
    func_0x000107c61170(uVar3);
    if (ABS(dVar7) < dVar8) goto LAB_10081daa8;
LAB_10081dbc4:
    lVar5 = 0;
    func_0x000107c3bdd4(param_1);
  }
  func_0x000107c5d278(param_1);
  if (param_4 != (long *)0x0) {
    func_0x000107c61178(lVar2);
    *param_4 = lVar2;
  }
  func_0x000107c61170(lVar2);
LAB_10081dbf4:
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10081dd88; end: 10081de3b; -[PINDiskCache encodedFileURLForKey:] */

void FUN_10081dd88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107c4277c(param_1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c3ac08(uVar2,param_2,param_1,0);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10081de3c; end: 10081df23; -[PINDiskCache encodedString:] */

void FUN_10081de3c(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  func_0x000107c61174(param_3);
  ppuVar3 = param_3;
  func_0x000107c4adac();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar1 = param_1;
    func_0x000107c43420();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4adac();
    func_0x000107c61170(lVar1);
    ppuVar3 = param_3;
    if (lVar2 == 0) {
      func_0x000107c61174(param_3);
    }
    else {
      func_0x000107c43420(param_1);
      func_0x000107c61180();
      func_0x000107c5c16c(param_3,param_2,param_1);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
    }
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10081df24; end: 10081df2f; -[PINDiskCache fileExtension] */

void FUN_10081df24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 10081df30; end: 10081df37; -[SCStoriesServices storiesThumbnailCoordinator] */

undefined8 FUN_10081df30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10081df38; end: 10081df3f; -[SCStoriesServices storiesMediaCoordinator] */

undefined8 FUN_10081df38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10081df40; end: 10081df4f; -[_TtC28SCStoriesPreferencesServices28SCStoriesPreferencesServices storyPrivacySettingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081df40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077440));
  return;
}



/* Entry: 10081df50; end: 10081df5f; -[_TtC19SnapSendingServices19SnapSendingServices snapSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081df50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff58a0));
  return;
}



/* Entry: 10081df60; end: 10081e23b; -[SCStoriesSnapPoster initWithDocObjectContext:performer:myStoriesStore:mediaInjestor:mediaCoordinator:thumbnailCoordinator:storyPrivacySettingManager:grapheneMetricsEmitter:currentUserId:currentUsername:snapSender:circumstanceEngine:] */

undefined8 *
FUN_10081df60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_1126f3e38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10081e23c; end: 10081e24b; -[_TtC27SCStoryShareSendingServices27SCStoryShareSendingServices storyShareSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081e23c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff6288));
  return;
}



/* Entry: 10081e24c; end: 10081e25b; -[_TtC14TinselServices14TinselServices tinsel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081e24c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113046cb0));
  return;
}



/* Entry: 10081e25c; end: 10081e263; -[CTPNetworkServices shareYoursClient] */

undefined8 FUN_10081e25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10081e264; end: 10081e953; -[SCStoriesSnapPostCoordinator initWithDocObjectContext:performer:myStoriesStore:storySendManager:storyMentionMessageSender:groupsDataFetcher:snapProPendingSnapManager:snapPoster:thumbnailCoordinator:grapheneMetricsEmitter:currentUserId:currentUsername:blizzardLogger:arroyoEventPublisher:circumstanceEngine:appStartExperimentReader:storyShareSender:statusSender:conversationIdResolver:storyPrivacySettingManager:snapchatterPublicInfoFetcher:tinsel:shareYoursClient:backgroundTaskWrapper:] */

undefined8 *
FUN_10081e264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  puStack_70 = PTR_PTR_1126f3e30;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_3);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = puVar1[0x10];
    puVar1[0x10] = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = puVar1[0x11];
    puVar1[0x11] = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_8);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_8;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_9);
    uVar4 = puVar1[0x13];
    puVar1[0x13] = param_9;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_10);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_10;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_11);
    uVar4 = puVar1[0x15];
    puVar1[0x15] = param_11;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_12);
    uVar4 = puVar1[0x16];
    puVar1[0x16] = param_12;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_13);
    uVar4 = puVar1[0x17];
    puVar1[0x17] = param_13;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_14);
    uVar4 = puVar1[0x18];
    puVar1[0x18] = param_14;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_15);
    uVar4 = puVar1[0x19];
    puVar1[0x19] = param_15;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_17);
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = param_17;
    func_0x000107c61170(uVar4);
    uVar4 = param_18;
    func_0x000107c3ebd4();
    *(char *)(puVar1 + 0x1b) = (char)uVar4;
    func_0x000107c61174(param_19);
    uVar4 = puVar1[0x1c];
    puVar1[0x1c] = param_19;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_20);
    uVar4 = puVar1[0x1d];
    puVar1[0x1d] = param_20;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_21);
    uVar4 = puVar1[0x1e];
    puVar1[0x1e] = param_21;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_22);
    uVar4 = puVar1[0x21];
    puVar1[0x21] = param_22;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_23);
    uVar4 = puVar1[0x22];
    puVar1[0x22] = param_23;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_24);
    uVar4 = puVar1[0x23];
    puVar1[0x23] = param_24;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_25);
    uVar4 = puVar1[0x24];
    puVar1[0x24] = param_25;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_26);
    uVar4 = puVar1[0x25];
    puVar1[0x25] = param_26;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = puVar1[0x20];
    puVar1[0x20] = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_80,puVar1);
    uVar4 = param_16;
    func_0x000107c51dc8(param_16);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_88,auStack_80);
    uVar3 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10081e954; end: 10081e95b; -[SCNativeMessagingServices storyDataUpdateAnnouncer] */

undefined8 FUN_10081e954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10081e95c; end: 10081e963; -[SCArroyoStoryDataUpdateAnnouncer addListener:] */

void FUN_10081e95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10081e964; end: 10081ec0f; -[SCArroyoStoryDataUpdateListenerAnnouncer addListener:] */

undefined8 FUN_10081e964(long param_1,undefined8 param_2,long param_3)

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
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110ca99f0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_10081ec10(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
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
    FUN_10081ed50(puVar8,&plStack_a0);
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
LAB_10081eb18:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
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
        func_0x000107c61148();
        func_0x000107c61170();
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
      goto LAB_10081eb38;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_10081ec10(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_10081ec10(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
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
    FUN_10081ed50(puVar8,&plStack_88);
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
      goto LAB_10081eb18;
    }
  }
  uVar9 = 1;
LAB_10081eb38:
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
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 10081ec10; end: 10081ed4f;  */

void FUN_10081ec10(long *param_1,long *param_2)

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
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c2bcb4();
LAB_10081ed4c:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
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
      if (uVar7 >> 0x3d != 0) goto LAB_10081ed4c;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10081ed50; end: 10081ed97;  */

void FUN_10081ed50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
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



/* Entry: 10081ed98; end: 10081ed9f; -[SCNativeMessagingServices incidentalAttachmentUpdateForwarder] */

undefined8 FUN_10081ed98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10081eda0; end: 10081eda3; -[SCNativeSendDelegateImpl setStoryIncidentalAttachmentUpdater:] */

void FUN_10081eda0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16aeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAtomicStoryIncidentalAttachme_1126385c8);
  return;
}



/* Entry: 10081eda4; end: 10081edaf; -[SCNativeSendDelegateImpl setAtomicStoryIncidentalAttachmentUpdater:] */

void FUN_10081eda4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10081edb0; end: 10081edb7; -[SCStoriesSnapPostCoordinator failedSnapCountObservable] */

void FUN_10081edb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 10081edb8; end: 10081edbf; -[SCMyStoriesDataCoordinator addListener:] */

void FUN_10081edb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10081edc0; end: 10081ee0f; -[SCMyStoriesDataCoordinatingListenerAnnouncer addListener:] */

undefined8 FUN_10081edc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10081ee10(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 10081ee10; end: 10081ef53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10081ee10(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_11077bf18;
  func_0x000107c613fc(&UNK_11077bf18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0x113080280;
  FUN_1000285a8(0x113080280,&UNK_10dd0b500);
  uVar3 = uVar2;
  FUN_10081ef54();
  puVar4 = &UNK_1044d3574;
  func_0x000107c5f21c(&UNK_1044d3574,puVar1,uVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_48);
  func_0x000107c61574(puVar4);
  puVar1 = &UNK_11077bf40;
  func_0x000107c613fc(&UNK_11077bf40,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  FUN_1000285a8(0x112d518a8,&UNK_10d918730);
  FUN_100087bd4(&uStack_49,FUN_10081f094,auStack_80,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(puStack_48);
  return 1;
}



/* Entry: 10081ef54; end: 10081efa3;  */

void FUN_10081ef54(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130803a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113080280;
  FUN_10002969c(0x113080280,&UNK_10dd0b500);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  func_0x000107c61520(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam00000001130803a0 = puVar2;
  return;
}



/* Entry: 10081efa4; end: 10081f093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081efa4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_1130803b0;
  if (param_2 != 0) {
    uVar4 = *param_4;
    func_0x000107c61428(param_2 + _DAT_1130803b0,auStack_80,0x21,0);
    func_0x000107c61434(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_10049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 10081f094; end: 10081f0af;  */

void FUN_10081f094(void)

{
  long unaff_x20;
  
  FUN_10081efa4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10081f0b0; end: 10081f0b3;  */

void FUN_10081f0b0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f0b4; end: 10081f0d7;  */

void FUN_10081f0b4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f0d8; end: 10081f0df; -[SCStoriesThumbnailCoordinator addListener:] */

void FUN_10081f0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10081f0e0; end: 10081f12f; -[SCStoriesThumbnailCoordinatingListenerAnnouncer addListener:] */

undefined8 FUN_10081f0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10081f130(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 10081f130; end: 10081f273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10081f130(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_11077c058;
  func_0x000107c613fc(&UNK_11077c058,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0x1130802a8;
  FUN_1000285a8(0x1130802a8,&UNK_10dd0b600);
  uVar3 = uVar2;
  FUN_10081f274();
  puVar4 = &UNK_1044d5204;
  func_0x000107c5f21c(&UNK_1044d5204,puVar1,uVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_48);
  func_0x000107c61574(puVar4);
  puVar1 = &UNK_11077c080;
  func_0x000107c613fc(&UNK_11077c080,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  FUN_1000285a8(0x112d518a8,&UNK_10d918730);
  FUN_100087bd4(&uStack_49,FUN_10081f3b4,auStack_80,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(puStack_48);
  return 1;
}



/* Entry: 10081f274; end: 10081f2c3;  */

void FUN_10081f274(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130804d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1130802a8;
  FUN_10002969c(0x1130802a8,&UNK_10dd0b600);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  func_0x000107c61520(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam00000001130804d8 = puVar2;
  return;
}



/* Entry: 10081f2c4; end: 10081f3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081f2c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_1130804e8;
  if (param_2 != 0) {
    uVar4 = *param_4;
    func_0x000107c61428(param_2 + _DAT_1130804e8,auStack_80,0x21,0);
    func_0x000107c61434(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_10049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 10081f3b4; end: 10081f3cf;  */

void FUN_10081f3b4(void)

{
  long unaff_x20;
  
  FUN_10081f2c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10081f3d0; end: 10081f3d3;  */

void FUN_10081f3d0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f3d4; end: 10081f4c3;  */

void FUN_10081f3d4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f4c4; end: 10081f4d7;  */

undefined ** FUN_10081f4c4(void)

{
  return &PTR_DAT_112f31348;
}



/* Entry: 10081f4d8; end: 10081f57f;  */

void FUN_10081f4d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ce6e8;
  func_0x000107c613fc(&UNK_1104ce6e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10081f580;
  FUN_1000823a8(FUN_10081f580,puVar1);
  FUN_100082720("SCProfileHeaderButtonScopedServicesScopeInitializationPluginProvider",0x44,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10081f580; end: 10081f587;  */

void FUN_10081f580(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104ce4f0;
  func_0x000107c613fc(&UNK_1104ce4f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1021274d8;
  FUN_10058fa64(&UNK_1021274d8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


