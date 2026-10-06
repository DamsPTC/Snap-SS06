/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10600397c; end: 106003a7b; -[SCScanGRPCMetadataProvider categoryMetadataForCategoryWithId:] */

void FUN_10600397c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf33540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106003a7c;
    puStack_50 = &UNK_11085fb08;
    puStack_48 = puVar2;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    lStack_40 = param_3;
    lStack_38 = param_1;
    _objc_retain(puVar2);
    func_0x00010c297260(lVar1,param_2,&puStack_68,uVar3);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_40);
    _objc_release(puStack_48);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106003a7c; end: 106003c33;  */

/* WARNING: Possible PIC construction at 0x000106003bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106003bd8) */

long FUN_106003a7c(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  if (param_3 == (undefined *)0x0) {
    lVar4 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar4);
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar1 = *(long *)(param_1 + 0x20);
    if (param_2 != 0) {
      func_0x00010bf43d60(lVar1);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
        return lVar4;
      }
      goto LAB_106003c30;
    }
    _objc_opt_class(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
LAB_106003c30:
      ___stack_chk_fail();
      func_0x00010bf33480(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      return lVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_completeWithError__1125ae8d0,param_3);
  return lVar1;
}



/* Entry: 106003c34; end: 106003c7b;  */

undefined8 FUN_106003c34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf33480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106003c7c; end: 106003cfb; -[SCScanGRPCMetadataProvider _cacheMetadata:] */

void FUN_106003c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf5f320(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106003cfc; end: 106003d73; -[SCScanGRPCMetadataProvider _metadataFromCache] */

void FUN_106003cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106003d74; end: 106003e3f; -[SCScanGRPCMetadataProvider _acceptLanguagesComponents] */

void FUN_106003d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106003e40;
  puStack_30 = &UNK_110860380;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf97e80(puVar2,param_2,&puStack_48);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106003e40; end: 106003edf;  */

void FUN_106003e40(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbf058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
  *(bool *)param_4 = (float)((double)param_3 * -0.10000000149011612 + 1.0) <= 0.5;
  return;
}



/* Entry: 106003ee0; end: 106003f27; -[SCScanGRPCMetadataProvider .cxx_destruct] */

void FUN_106003ee0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106003f28; end: 106003f9b; -[UNISCPCNV3ScanService initWithUnifiedGrpcService:] */

undefined1 * FUN_106003f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef028;
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



/* Entry: 106003f9c; end: 10600407f; -[UNISCPCNV3ScanService scanMetadataWithRequest:callOptionsBuilder:handler:] */

void FUN_106003f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c7050;
  _objc_opt_class(PTR_PTR_1126c7050);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e36df8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106004080; end: 10600414f; -[UNISCPCNV3ScanService scanStreamWithOptionsBuilder:eventHandler:] */

void FUN_106004080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8580;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c7058;
  _objc_opt_class(PTR_PTR_1126c7058);
  func_0x00010c0199c0(puVar1,param_2,param_4,puVar2);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf19be0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e36e18,param_3,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b8590;
  _objc_alloc(PTR_PTR_1126b8590);
  func_0x00010c0199a0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106004150; end: 106004233; -[UNISCPCNV3ScanService scanTrayMetadataWithRequest:callOptionsBuilder:handler:] */

void FUN_106004150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c7060;
  _objc_opt_class(PTR_PTR_1126c7060);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e36e38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106004234; end: 10600431b; -[UNISCPCNV3ScanService scanLensesForObjectsWithRequest:callOptionsBuilder:handler:] */

void FUN_106004234(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  if (param_3 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    puVar2 = PTR_PTR_1126c7068;
    _objc_opt_class(PTR_PTR_1126c7068);
    func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
    _objc_release(param_5);
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e36e58,lVar3,param_4
                        ,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10600431c; end: 106004403; -[UNISCPCNV3ScanService postScanFeedbackWithRequest:callOptionsBuilder:handler:] */

void FUN_10600431c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  if (param_3 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    puVar2 = PTR_PTR_1126c7070;
    _objc_opt_class(PTR_PTR_1126c7070);
    func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
    _objc_release(param_5);
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e36e78,lVar3,param_4
                        ,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106004404; end: 10600440f; -[UNISCPCNV3ScanService .cxx_destruct] */

void FUN_106004404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106004410; end: 10600448b;  */

undefined * FUN_106004410(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2560 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36e98,
                        &UNK_10ddd1f38,&UNK_10ddd1f90,6,FUN_10600448c,0);
    do {
      if (puRam00000001136c2560 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2560;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2560,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2560 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2560;
}



/* Entry: 10600448c; end: 106004497;  */

bool FUN_10600448c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106004498; end: 106004513;  */

undefined * FUN_106004498(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2568 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36eb8,
                        &UNK_10ddd1fa8,&UNK_10ddd1fdc,3,FUN_106004514,0);
    do {
      if (puRam00000001136c2568 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2568;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2568,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2568 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2568;
}



/* Entry: 106004514; end: 10600451f;  */

bool FUN_106004514(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106004520; end: 10600459b;  */

undefined * FUN_106004520(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2570 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36ed8,
                        &UNK_10ddd1fe8,&UNK_10ddd2104,0xd,FUN_10600459c,0);
    do {
      if (puRam00000001136c2570 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2570;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2570,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2570 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2570;
}



/* Entry: 10600459c; end: 1060045a7;  */

bool FUN_10600459c(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 1060045a8; end: 106004623;  */

undefined * FUN_1060045a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2578 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36ef8,
                        &UNK_10ddd2138,&UNK_10ddd2170,3,FUN_106004624,0);
    do {
      if (puRam00000001136c2578 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2578;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2578,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2578 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2578;
}



/* Entry: 106004624; end: 10600462f;  */

bool FUN_106004624(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106004630; end: 1060046ab;  */

undefined * FUN_106004630(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2580 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36f18,
                        &UNK_10ddd23d0,&UNK_10ddd217c,2,FUN_1060046ac,0);
    do {
      if (puRam00000001136c2580 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2580;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2580,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2580 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2580;
}



/* Entry: 1060046ac; end: 1060046b7;  */

bool FUN_1060046ac(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1060046b8; end: 106004733;  */

undefined * FUN_1060046b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2588 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36f38,
                        &UNK_10ddd2184,&UNK_10ddd2198,3,FUN_106004734,0);
    do {
      if (puRam00000001136c2588 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2588;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2588,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2588 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2588;
}



/* Entry: 106004734; end: 10600473f;  */

bool FUN_106004734(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106004740; end: 1060047cf;  */

undefined * FUN_106004740(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2590 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36f58,
                        &UNK_10ddd21a4,&UNK_10ddd2208,8,FUN_1060047d0,0,&UNK_10ddd2228);
    do {
      if (puRam00000001136c2590 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2590;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2590,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2590 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2590;
}



/* Entry: 1060047d0; end: 1060047db;  */

bool FUN_1060047d0(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 1060047dc; end: 106004857;  */

undefined * FUN_1060047dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2598 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36f78,
                        &UNK_10ddd1fa8,&UNK_10ddd2244,3,FUN_106004858,0);
    do {
      if (puRam00000001136c2598 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2598;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2598,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2598 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2598;
}



/* Entry: 106004858; end: 106004863;  */

bool FUN_106004858(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106004864; end: 1060048f3;  */

undefined * FUN_106004864(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c25a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36f98,
                        &UNK_10ddd2250,&UNK_10ddd22a4,8,FUN_1060048f4,0,&UNK_10ddd22c4);
    do {
      if (puRam00000001136c25a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c25a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c25a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c25a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c25a0;
}



/* Entry: 1060048f4; end: 1060048ff;  */

bool FUN_1060048f4(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 106004900; end: 10600497b;  */

undefined * FUN_106004900(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c25a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e36fb8,
                        &UNK_10ddd22ca,&UNK_10ddd2320,3,FUN_10600497c,0);
    do {
      if (puRam00000001136c25a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c25a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c25a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c25a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c25a8;
}



/* Entry: 10600497c; end: 106004987;  */

bool FUN_10600497c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106004988; end: 1060049ef; +[SCPCNV3ScanMetadataRequest descriptor] */

void FUN_106004988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9680,
                        &PTR____CFConstantStringClassReference_110e36fd8,&PTR_DAT_1131354c0,
                        &PTR_s_requestId_1131357b8,2,0x18,0x1c);
    puRam00000001136c25b0 = puVar1;
  }
  return;
}



/* Entry: 1060049f0; end: 106004a57; +[SCPCNV3ScanMetadataResponse descriptor] */

void FUN_1060049f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab96d0,
                        &PTR____CFConstantStringClassReference_110e36ff8,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131354d8,1,0x10,0x1c);
    puRam00000001136c25b8 = puVar1;
  }
  return;
}



/* Entry: 106004a58; end: 106004af3; +[SCPCNV3ScanMetadataResponse_Metadata descriptor] */

undefined * FUN_106004a58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9720,
                        &PTR____CFConstantStringClassReference_110dae2d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131354f8,1,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112ab96d0);
    puRam00000001136c25c0 = puVar1;
  }
  return puRam00000001136c25c0;
}



/* Entry: 106004af4; end: 106004b73; +[SCPCNV3ScanCategoryMetadata descriptor] */

undefined * FUN_106004af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9770,
                        &PTR____CFConstantStringClassReference_110e37018,&PTR_DAT_1131354c0,
                        &PTR_s_categoryId_113137758,9,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c25c8 = puVar1;
  }
  return puRam00000001136c25c8;
}



/* Entry: 106004b74; end: 106004bff; +[SCPCNV3TrayPillMetadata descriptor] */

undefined * FUN_106004b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb2c8,
                        &PTR____CFConstantStringClassReference_110e37038,&PTR_DAT_1131354c0,
                        &PTR_DAT_113136358,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c25d0 = puVar1;
  }
  return puRam00000001136c25d0;
}



/* Entry: 106004c00; end: 106004c83; +[SCPCNV3TrayPillMetadata_ShowAllResults descriptor] */

undefined * FUN_106004c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb2f0,
                        &PTR____CFConstantStringClassReference_110e37058,&PTR_DAT_1131354c0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c25d8 = puVar1;
  }
  return puRam00000001136c25d8;
}



/* Entry: 106004c84; end: 106004d07; +[SCPCNV3TrayPillMetadata_ShowOnlyResultsWithMatchingPillId descriptor] */

undefined * FUN_106004c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb318,
                        &PTR____CFConstantStringClassReference_110e37078,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135518,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c25e0 = puVar1;
  }
  return puRam00000001136c25e0;
}



/* Entry: 106004d08; end: 106004d6f; +[SCPCNV3ClientCategoryMetadata descriptor] */

void FUN_106004d08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9838,
                        &PTR____CFConstantStringClassReference_110e37098,&PTR_DAT_1131354c0,
                        &PTR_s_categoryId_1131357f8,2,0x18,0x1c);
    puRam00000001136c25e8 = puVar1;
  }
  return;
}



/* Entry: 106004d70; end: 106004e0f; +[SCPCNV3ScanAffordance descriptor] */

undefined * FUN_106004d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb340,
                        &PTR____CFConstantStringClassReference_110e370b8,&PTR_DAT_1131354c0,
                        &PTR_s_iconURL_1131367d8,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd8a810);
    puRam00000001136c25f0 = puVar1;
  }
  return puRam00000001136c25f0;
}



/* Entry: 106004e10; end: 106004ea3; +[SCPCNV3ScanAffordance_ViewfinderAffordance descriptor] */

undefined * FUN_106004e10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c25f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb368,
                        &PTR____CFConstantStringClassReference_110e370d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135f38,3,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112abb340);
    puRam00000001136c25f8 = puVar1;
  }
  return puRam00000001136c25f8;
}



/* Entry: 106004ea4; end: 106004f37; +[SCPCNV3ScanAffordance_ShazamAffordance descriptor] */

undefined * FUN_106004ea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb390,
                        &PTR____CFConstantStringClassReference_110e370f8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135538,1,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112abb340);
    puRam00000001136c2600 = puVar1;
  }
  return puRam00000001136c2600;
}



/* Entry: 106004f38; end: 106004fc7; +[SCPCNV3ScanStreamRequest descriptor] */

undefined * FUN_106004f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb3b8,
                        &PTR____CFConstantStringClassReference_110e37118,&PTR_DAT_1131354c0,
                        &PTR_s_sessionId_113137118,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001136c2608 = puVar1;
  }
  return puRam00000001136c2608;
}



/* Entry: 106004fc8; end: 10600504b; +[SCPCNV3ScanStreamRequest_NoBarcodeDetected descriptor] */

undefined * FUN_106004fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb3e0,
                        &PTR____CFConstantStringClassReference_110e37138,&PTR_DAT_1131354c0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c2610 = puVar1;
  }
  return puRam00000001136c2610;
}



/* Entry: 10600504c; end: 1060050b3; +[SCPCNV3ScanConfigurationRequest descriptor] */

void FUN_10600504c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9950,
                        &PTR____CFConstantStringClassReference_110e37158,&PTR_DAT_1131354c0,
                        &PTR_s_context_113135838,2,0x18,0x1c);
    puRam00000001136c2618 = puVar1;
  }
  return;
}



/* Entry: 1060050b4; end: 10600511f; +[SCPCNV3ScanContext descriptor] */

void FUN_1060050b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb408,
                        &PTR____CFConstantStringClassReference_110e37178,&PTR_DAT_1131354c0,
                        &PTR_s_location_113137b18,0xc,0x50,0x1c);
    puRam00000001136c2620 = puVar1;
  }
  return;
}



/* Entry: 106005120; end: 1060051a3; +[SCPCNV3ScanContext_IntrospectionRequest descriptor] */

undefined * FUN_106005120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb430,
                        &PTR____CFConstantStringClassReference_110e37198,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135558,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001136c2628 = puVar1;
  }
  return puRam00000001136c2628;
}



/* Entry: 1060051a4; end: 10600520b; +[SCPCNV3Point descriptor] */

void FUN_1060051a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab99f0,
                        &PTR____CFConstantStringClassReference_110e06b78,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135878,2,0x18,0x1c);
    puRam00000001136c2630 = puVar1;
  }
  return;
}



/* Entry: 10600520c; end: 106005273; +[SCPCNV3ScanCOFConfig descriptor] */

void FUN_10600520c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9a40,
                        &PTR____CFConstantStringClassReference_110e371b8,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131358b8,2,0x18,0x1c);
    puRam00000001136c2638 = puVar1;
  }
  return;
}



/* Entry: 106005274; end: 1060052db; +[SCPCNV3ScanCOFConfigs descriptor] */

void FUN_106005274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9a90,
                        &PTR____CFConstantStringClassReference_110e371d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135578,1,0x10,0x1c);
    puRam00000001136c2640 = puVar1;
  }
  return;
}



/* Entry: 1060052dc; end: 106005367; +[SCPCNV3ScanExperiment descriptor] */

undefined * FUN_1060052dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9ae0,
                        &PTR____CFConstantStringClassReference_110e371f8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135f98,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c2648 = puVar1;
  }
  return puRam00000001136c2648;
}



/* Entry: 106005368; end: 1060053f7; +[SCPCNV3ScanSubscriptionRequest descriptor] */

undefined * FUN_106005368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9b30,
                        &PTR____CFConstantStringClassReference_110e37218,&PTR_DAT_1131354c0,
                        &PTR_DAT_113136e18,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136c2650 = puVar1;
  }
  return puRam00000001136c2650;
}



/* Entry: 1060053f8; end: 10600545f; +[SCPCNV3CreativeLensSubscriptionRequestV1 descriptor] */

void FUN_1060053f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9b80,
                        &PTR____CFConstantStringClassReference_110e37238,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135598,1,0x10,0x1c);
    puRam00000001136c2658 = puVar1;
  }
  return;
}



/* Entry: 106005460; end: 1060054eb; +[SCPCNV3GTQRequest descriptor] */

undefined * FUN_106005460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9bd0,
                        &PTR____CFConstantStringClassReference_110e37258,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131358f8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c2660 = puVar1;
  }
  return puRam00000001136c2660;
}



/* Entry: 1060054ec; end: 106005553; +[SCPCNV3GTQMockRequest descriptor] */

void FUN_1060054ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9c20,
                        &PTR____CFConstantStringClassReference_110e37278,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131355b8,1,8,0x1c);
    puRam00000001136c2668 = puVar1;
  }
  return;
}



/* Entry: 106005554; end: 1060055bb; +[SCPCNV3AllUtilityLensMetadataSubscriptionRequestV1 descriptor] */

void FUN_106005554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9c70,
                        &PTR____CFConstantStringClassReference_110e37298,&PTR_DAT_1131354c0,0,0,4,
                        0x1c);
    puRam00000001136c2670 = puVar1;
  }
  return;
}



/* Entry: 1060055bc; end: 106005647; +[SCPCNV3ScanCardSubscriptionRequestV1 descriptor] */

undefined * FUN_1060055bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9cc0,
                        &PTR____CFConstantStringClassReference_110e372b8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135938,2,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c2678 = puVar1;
  }
  return puRam00000001136c2678;
}



/* Entry: 106005648; end: 1060056af; +[SCPCNV3CategorySubscriptionRequestV1 descriptor] */

void FUN_106005648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9d10,
                        &PTR____CFConstantStringClassReference_110e372d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135978,2,0x18,0x1c);
    puRam00000001136c2680 = puVar1;
  }
  return;
}



/* Entry: 1060056b0; end: 10600573f; +[SCPCNV3ScanDataRequest descriptor] */

undefined * FUN_1060056b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9d60,
                        &PTR____CFConstantStringClassReference_110e372f8,&PTR_DAT_1131354c0,
                        &PTR_s_image_1131363d8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c2688 = puVar1;
  }
  return puRam00000001136c2688;
}



/* Entry: 106005740; end: 1060057a7; +[SCPCNV3Text descriptor] */

void FUN_106005740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9db0,
                        &PTR____CFConstantStringClassReference_110dac6b8,&PTR_DAT_1131354c0,
                        &PTR_s_text_1131355d8,1,0x10,0x1c);
    puRam00000001136c2690 = puVar1;
  }
  return;
}



/* Entry: 1060057a8; end: 106005813; +[SCPCNV3Image descriptor] */

void FUN_1060057a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9e00,
                        &PTR____CFConstantStringClassReference_110dac698,&PTR_DAT_1131354c0,
                        &PTR_s_imageBytes_113136878,5,0x28,0x1c);
    puRam00000001136c2698 = puVar1;
  }
  return;
}



/* Entry: 106005814; end: 10600587b; +[SCPCNV3Barcode descriptor] */

void FUN_106005814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9e50,
                        &PTR____CFConstantStringClassReference_110e37318,&PTR_DAT_1131354c0,
                        &PTR_s_format_1131359b8,2,0x10,0x1c);
    puRam00000001136c26a0 = puVar1;
  }
  return;
}



/* Entry: 10600587c; end: 10600590b; +[SCPCNV3ScanStreamResponse descriptor] */

undefined * FUN_10600587c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9ea0,
                        &PTR____CFConstantStringClassReference_110e37338,&PTR_DAT_1131354c0,
                        &PTR_DAT_113137658,8,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001136c26a8 = puVar1;
  }
  return puRam00000001136c26a8;
}



/* Entry: 10600590c; end: 106005987; +[SCPCNV3ScanStreamResponse_IntrospectionData descriptor] */

undefined * FUN_10600590c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9ef0,
                        &PTR____CFConstantStringClassReference_110e37358,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131355f8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c26b0 = puVar1;
  }
  return puRam00000001136c26b0;
}



/* Entry: 106005988; end: 1060059ef; +[SCPCNV3CreativeLensResponseV1 descriptor] */

void FUN_106005988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9f40,
                        &PTR____CFConstantStringClassReference_110e37378,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131359f8,2,0x18,0x1c);
    puRam00000001136c26b8 = puVar1;
  }
  return;
}



/* Entry: 1060059f0; end: 106005a7b; +[SCPCNV3MoreScanCanDoCell descriptor] */

undefined * FUN_1060059f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9f90,
                        &PTR____CFConstantStringClassReference_110e37398,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135618,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c26c0 = puVar1;
  }
  return puRam00000001136c26c0;
}



/* Entry: 106005a7c; end: 106005afb; +[SCPCNV3RecipeCell descriptor] */

undefined * FUN_106005a7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ab9fe0,
                        &PTR____CFConstantStringClassReference_110e373b8,&PTR_DAT_1131354c0,
                        &PTR_s_title_1131371f8,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c26c8 = puVar1;
  }
  return puRam00000001136c26c8;
}



/* Entry: 106005afc; end: 106005b7b; +[SCPCNV3UtilityServiceCell descriptor] */

undefined * FUN_106005afc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba030,
                        &PTR____CFConstantStringClassReference_110e373d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131372d8,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c26d0 = puVar1;
  }
  return puRam00000001136c26d0;
}



/* Entry: 106005b7c; end: 106005be3; +[SCPCNV3AllUtilityLensMetadataResponseV1 descriptor] */

void FUN_106005b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba080,
                        &PTR____CFConstantStringClassReference_110e373f8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135638,1,0x10,0x1c);
    puRam00000001136c26d8 = puVar1;
  }
  return;
}



/* Entry: 106005be4; end: 106005c63; +[SCPCNV3UtilityLensMetadata descriptor] */

undefined * FUN_106005be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba0d0,
                        &PTR____CFConstantStringClassReference_110e37418,&PTR_DAT_1131354c0,
                        &PTR_s_lensId_1131373b8,7,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c26e0 = puVar1;
  }
  return puRam00000001136c26e0;
}



/* Entry: 106005c64; end: 106005cef; +[SCPCNV3UtilityLensViewModel descriptor] */

undefined * FUN_106005c64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba120,
                        &PTR____CFConstantStringClassReference_110e37438,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135ff8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c26e8 = puVar1;
  }
  return puRam00000001136c26e8;
}



/* Entry: 106005cf0; end: 106005d57; +[SCPCNV3UtilityLensUnsupportedAffordanceViewModel descriptor] */

void FUN_106005cf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba170,
                        &PTR____CFConstantStringClassReference_110e37458,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135658,1,0x10,0x1c);
    puRam00000001136c26f0 = puVar1;
  }
  return;
}



/* Entry: 106005d58; end: 106005dc3; +[SCPCNV3UtilityLensViewFinderAffordanceViewModel descriptor] */

void FUN_106005d58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c26f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba1c0,
                        &PTR____CFConstantStringClassReference_110e37478,&PTR_DAT_1131354c0,
                        &PTR_DAT_113136918,5,0x30,0x1c);
    puRam00000001136c26f8 = puVar1;
  }
  return;
}



/* Entry: 106005dc4; end: 106005e2b; +[SCPCNV3RectRatio descriptor] */

void FUN_106005dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba210,
                        &PTR____CFConstantStringClassReference_110e37498,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135a38,2,0x18,0x1c);
    puRam00000001136c2700 = puVar1;
  }
  return;
}



/* Entry: 106005e2c; end: 106005e97; +[SCPCNV3UtilityLensWaveAffordanceViewModel descriptor] */

void FUN_106005e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba260,
                        &PTR____CFConstantStringClassReference_110e374b8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113136458,4,0x28,0x1c);
    puRam00000001136c2708 = puVar1;
  }
  return;
}



/* Entry: 106005e98; end: 106005eff; +[SCPCNV3ScanCardResponseV1 descriptor] */

void FUN_106005e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba2b0,
                        &PTR____CFConstantStringClassReference_110e374d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135678,1,0x10,0x1c);
    puRam00000001136c2710 = puVar1;
  }
  return;
}



/* Entry: 106005f00; end: 106005f67; +[SCPCNV3CategoryResponseV1 descriptor] */

void FUN_106005f00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb458,
                        &PTR____CFConstantStringClassReference_110e374f8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135a78,2,0x18,0x1c);
    puRam00000001136c2718 = puVar1;
  }
  return;
}



/* Entry: 106005f68; end: 106006007; +[SCPCNV3CategoryResponseV1_Result descriptor] */

undefined * FUN_106005f68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb480,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131379b8,0xb,0x60,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112abb458);
    puRam00000001136c2720 = puVar1;
  }
  return puRam00000001136c2720;
}



/* Entry: 106006008; end: 10600608b; +[SCPCNV3CategoryResponseV1_Result_PillCategoryDone descriptor] */

undefined * FUN_106006008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb4a8,
                        &PTR____CFConstantStringClassReference_110e37518,&PTR_DAT_1131354c0,
                        &PTR_s_categoryId_113135698,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c2728 = puVar1;
  }
  return puRam00000001136c2728;
}



/* Entry: 10600608c; end: 10600611b; +[SCPCNV3ScanCard descriptor] */

undefined * FUN_10600608c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba378,
                        &PTR____CFConstantStringClassReference_110e37538,&PTR_DAT_1131354c0,
                        &PTR_DAT_113137c98,0x10,0x88,0x1c);
    func_0x00010c229040();
    puRam00000001136c2730 = puVar1;
  }
  return puRam00000001136c2730;
}



/* Entry: 10600611c; end: 106006183; +[SCPCNV3ScanCardShowcaseModel descriptor] */

void FUN_10600611c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba3c8,
                        &PTR____CFConstantStringClassReference_110e37558,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135ab8,2,0x18,0x1c);
    puRam00000001136c2738 = puVar1;
  }
  return;
}



/* Entry: 106006184; end: 1060061eb; +[SCPCNV3ScanToLensResult descriptor] */

void FUN_106006184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba418,
                        &PTR____CFConstantStringClassReference_110e37578,&PTR_DAT_1131354c0,
                        &PTR_s_lensIdsArray_113135af8,2,0x18,0x1c);
    puRam00000001136c2740 = puVar1;
  }
  return;
}



/* Entry: 1060061ec; end: 10600626b; +[SCPCNV3CameraShortcut descriptor] */

undefined * FUN_1060061ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba468,
                        &PTR____CFConstantStringClassReference_110e37598,&PTR_DAT_1131354c0,
                        &PTR_s_title_1131369b8,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2748 = puVar1;
  }
  return puRam00000001136c2748;
}



/* Entry: 10600626c; end: 1060062d3; +[SCPCNV3Snapcode descriptor] */

void FUN_10600626c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba4b8,
                        &PTR____CFConstantStringClassReference_110e375b8,&PTR_DAT_1131354c0,
                        &PTR_s_version_113135b38,2,0x10,0x1c);
    puRam00000001136c2750 = puVar1;
  }
  return;
}



/* Entry: 1060062d4; end: 106006363; +[SCPCNV3CameraShortcutAction descriptor] */

undefined * FUN_1060062d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb4d0,
                        &PTR____CFConstantStringClassReference_110e375d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131364d8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c2758 = puVar1;
  }
  return puRam00000001136c2758;
}



/* Entry: 106006364; end: 1060063e7; +[SCPCNV3CameraShortcutAction_ShowLenses descriptor] */

undefined * FUN_106006364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb4f8,
                        &PTR____CFConstantStringClassReference_110e375f8,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131356b8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c2760 = puVar1;
  }
  return puRam00000001136c2760;
}



/* Entry: 1060063e8; end: 10600647b; +[SCPCNV3CameraShortcutAction_AddMusic descriptor] */

undefined * FUN_1060063e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb520,
                        &PTR____CFConstantStringClassReference_110e37618,&PTR_DAT_1131354c0,
                        &PTR_s_trackId_113135b78,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112abb4d0);
    puRam00000001136c2768 = puVar1;
  }
  return puRam00000001136c2768;
}



/* Entry: 10600647c; end: 1060064ff; +[SCPCNV3CameraShortcutAction_SetCameraOrientation descriptor] */

undefined * FUN_10600647c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb548,
                        &PTR____CFConstantStringClassReference_110e37638,&PTR_DAT_1131354c0,
                        &PTR_DAT_1131356d8,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136c2770 = puVar1;
  }
  return puRam00000001136c2770;
}



/* Entry: 106006500; end: 106006593; +[SCPCNV3CameraShortcutAction_SetCameraMode descriptor] */

undefined * FUN_106006500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb570,
                        &PTR____CFConstantStringClassReference_110e37658,&PTR_DAT_1131354c0,
                        &PTR_s_mode_113135bb8,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112abb4d0);
    puRam00000001136c2778 = puVar1;
  }
  return puRam00000001136c2778;
}



/* Entry: 106006594; end: 10600660f; +[SCPCNV3Notification descriptor] */

undefined * FUN_106006594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba5d0,
                        &PTR____CFConstantStringClassReference_110e37678,&PTR_DAT_1131354c0,
                        &PTR_s_text_113135bf8,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2780 = puVar1;
  }
  return puRam00000001136c2780;
}



/* Entry: 106006610; end: 10600667b; +[SCPCNV3AlertDialog descriptor] */

void FUN_106006610(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba620,
                        &PTR____CFConstantStringClassReference_110e37698,&PTR_DAT_1131354c0,
                        &PTR_DAT_113136558,4,0x28,0x1c);
    puRam00000001136c2788 = puVar1;
  }
  return;
}



/* Entry: 10600667c; end: 1060066fb; +[SCPCNV3ScanCardCategoryPermissionsPromptModel descriptor] */

undefined * FUN_10600667c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba670,
                        &PTR____CFConstantStringClassReference_110e376b8,&PTR_DAT_1131354c0,
                        &PTR_s_categoryId_113137498,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2790 = puVar1;
  }
  return puRam00000001136c2790;
}



/* Entry: 1060066fc; end: 106006763; +[SCPCNV3ScanCardTipsModel descriptor] */

void FUN_1060066fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb598,
                        &PTR____CFConstantStringClassReference_110e376d8,&PTR_DAT_1131354c0,
                        &PTR_DAT_113135c38,2,0x10,0x1c);
    puRam00000001136c2798 = puVar1;
  }
  return;
}



/* Entry: 106006764; end: 1060067f7; +[SCPCNV3ScanCardTipsModel_Tip descriptor] */

undefined * FUN_106006764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c27a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abb5c0,
                        &PTR____CFConstantStringClassReference_110e376f8,&PTR_DAT_1131354c0,
                        &PTR_s_title_113136058,3,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112abb598);
    puRam00000001136c27a0 = puVar1;
  }
  return puRam00000001136c27a0;
}



/* Entry: 1060067f8; end: 106006877; +[SCPCNV3ScanCardKnowledgeModel descriptor] */

undefined * FUN_1060067f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c27a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba710,
                        &PTR____CFConstantStringClassReference_110e37718,&PTR_DAT_1131354c0,
                        &PTR_s_header_113137578,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c27a8 = puVar1;
  }
  return puRam00000001136c27a8;
}



/* Entry: 106006878; end: 1060068e3; +[SCPCNV3ScanCardBitmojiFashionModel descriptor] */

void FUN_106006878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c27b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aba760,
                        &PTR____CFConstantStringClassReference_110e37738,&PTR_DAT_1131354c0,
                        &PTR_s_header_1131365d8,4,0x28,0x1c);
    puRam00000001136c27b0 = puVar1;
  }
  return;
}


