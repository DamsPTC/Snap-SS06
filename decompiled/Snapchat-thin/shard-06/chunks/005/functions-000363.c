/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a1c5dc; end: 104a1c653; +[GTLRUploadParameters uploadParametersWithFileURL:MIMEType:] */

void FUN_104a1c5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010bfee200();
  func_0x00010c19bbc0();
  _objc_release(param_3);
  func_0x00010c1c12c0(param_1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1c654; end: 104a1c797; -[GTLRUploadParameters copyWithZone:] */

undefined8 FUN_104a1c654(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010bdc1c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c12c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189480(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfacca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bac0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfad160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbc0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c28e120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ce40(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c235180(param_1);
  func_0x00010c2014e0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c2330e0(param_1);
  func_0x00010c201000(uVar1,param_2,uVar2);
  func_0x00010c28fe40(param_1);
  func_0x00010c21d5e0(uVar1,param_2,param_1);
  return uVar1;
}



/* Entry: 104a1c798; end: 104a1c7a3; -[GTLRUploadParameters MIMEType] */

void FUN_104a1c798(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 104a1c7a4; end: 104a1c7ab; -[GTLRUploadParameters setMIMEType:] */

void FUN_104a1c7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a1c7ac; end: 104a1c7b7; -[GTLRUploadParameters data] */

void FUN_104a1c7ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 104a1c7b8; end: 104a1c7bf; -[GTLRUploadParameters setData:] */

void FUN_104a1c7b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1c7c0; end: 104a1c7cb; -[GTLRUploadParameters fileHandle] */

void FUN_104a1c7c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 104a1c7cc; end: 104a1c7d3; -[GTLRUploadParameters setFileHandle:] */

void FUN_104a1c7cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1c7d4; end: 104a1c7df; -[GTLRUploadParameters uploadLocationURL] */

void FUN_104a1c7d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 104a1c7e0; end: 104a1c7e7; -[GTLRUploadParameters setUploadLocationURL:] */

void FUN_104a1c7e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1c7e8; end: 104a1c7f3; -[GTLRUploadParameters fileURL] */

void FUN_104a1c7e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 104a1c7f4; end: 104a1c7fb; -[GTLRUploadParameters setFileURL:] */

void FUN_104a1c7f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a1c7fc; end: 104a1c807; -[GTLRUploadParameters shouldUploadWithSingleRequest] */

byte FUN_104a1c7fc(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 104a1c808; end: 104a1c80f; -[GTLRUploadParameters setShouldUploadWithSingleRequest:] */

void FUN_104a1c808(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104a1c810; end: 104a1c81b; -[GTLRUploadParameters shouldSendUploadOnly] */

byte FUN_104a1c810(long param_1)

{
  return *(byte *)(param_1 + 9) & 1;
}



/* Entry: 104a1c81c; end: 104a1c823; -[GTLRUploadParameters setShouldSendUploadOnly:] */

void FUN_104a1c81c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 104a1c824; end: 104a1c82f; -[GTLRUploadParameters useBackgroundSession] */

byte FUN_104a1c824(long param_1)

{
  return *(byte *)(param_1 + 10) & 1;
}



/* Entry: 104a1c830; end: 104a1c837; -[GTLRUploadParameters setUseBackgroundSession:] */

void FUN_104a1c830(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 104a1c838; end: 104a1c88b; -[GTLRUploadParameters .cxx_destruct] */

void FUN_104a1c838(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104a1c88c; end: 104a1ca1b; +[GTLRUtilities objectsFromArray:withValue:forKeyPath:] */

undefined *
FUN_104a1c88c(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      param_2 = param_4;
      FUN_104a1ca1c();
      if ((int)uVar3 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(uVar6);
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar7);
    puVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  if (param_3 == param_2) {
    puVar5 = (undefined *)0x1;
  }
  else {
    puVar5 = (undefined *)0x0;
    if ((param_3 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) {
      puVar5 = param_3;
      func_0x00010c071ae0(param_3);
    }
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 104a1ca1c; end: 104a1ca93;  */

long FUN_104a1ca1c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain();
  if (param_1 == param_2) {
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
    if ((param_1 != 0) && (param_2 != 0)) {
      lVar1 = param_1;
      func_0x00010c071ae0(param_1);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104a1ca94; end: 104a1cc17; +[GTLRUtilities firstObjectFromArray:withValue:forKeyPath:] */

ulong FUN_104a1ca94(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain();
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar8 = 0;
  if (lVar3 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar4 = uVar8;
        func_0x00010c296f80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        uVar6 = param_4;
        FUN_104a1ca1c();
        param_2 = (uint)uVar6;
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar8);
          _objc_release(uVar4);
          goto LAB_104a1cbb8;
        }
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar8 = 0;
  }
LAB_104a1cbb8:
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = (uint)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    return (ulong)(uVar2 ^ param_2 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return uVar8;
}



/* Entry: 104a1cc18; end: 104a1cc23;  */

uint FUN_104a1cc18(uint param_1,uint param_2)

{
  return param_1 ^ param_2 ^ 1;
}



/* Entry: 104a1cc24; end: 104a1cdc3;  */

void FUN_104a1cc24(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar1 = param_1;
  func_0x00010c075f00();
  puVar3 = param_1;
  if ((int)puVar1 != 0) {
    _objc_retain();
    puVar1 = param_1;
    func_0x00010c11f420();
    if (puVar1 == (undefined *)0x7fffffffffffffff) {
      puVar1 = param_1;
      func_0x00010bfda7c0();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar1 == 0) {
        _objc_retainAutorelease(param_1);
        func_0x00010bdc3520();
        _strtoull();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0b4ca0(param_1);
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar1 = PTR_PTR_1126ae198;
      func_0x00010bf39c40(PTR_PTR_1126ae198);
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      if (puRam00000001136a05b0 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
        _objc_alloc();
        func_0x00010c026a60();
        puVar3 = puRam00000001136a05b0;
        puRam00000001136a05b0 = puVar2;
        _objc_release(puVar3);
      }
      puVar2 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
      func_0x00010bf66820();
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_exit(puVar1);
      _objc_release(puVar1);
    }
    puVar3 = param_1;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      _objc_retain(puVar2);
      _objc_release(param_1);
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a1cdc4; end: 104a1cdeb;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a1cdc4(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107bdfb0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107bdfb0);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107bdfb0);
  func_0x000107c61180();
  (*pcVar3)(0x1136a0538,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a1cdec; end: 104a1cef7;  */

void FUN_104a1cdec(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
  func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "const GTLRDynamicImpInfo *DynamicImpInfoForProperty(objc_property_t, __unsafe_unretained Class *)"
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd11a0(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110da6bb8,0x1f0,
                      &PTR____CFConstantStringClassReference_110da6bd8,in_x6,in_x7,*param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a1cef8; end: 104a1cf1f;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_104a1cef8(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107be780;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107be780);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107be780);
  func_0x000107c61180();
  (*pcVar3)(0x1136a0588,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 104a1cf20; end: 104a1cfb7; +[GTLRPeopleService_BatchCreateContactsRequest arrayPropertyToClassMap] */

/* WARNING: Possible PIC construction at 0x000104a1cf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1cfe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1d0ec) */
/* WARNING: Removing unreachable block (ram,0x000104a1d134) */
/* WARNING: Removing unreachable block (ram,0x000104a1d128) */
/* WARNING: Removing unreachable block (ram,0x000104a1d06c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d0b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d0a8) */
/* WARNING: Removing unreachable block (ram,0x000104a1cfec) */
/* WARNING: Removing unreachable block (ram,0x000104a1d034) */
/* WARNING: Removing unreachable block (ram,0x000104a1d028) */
/* WARNING: Removing unreachable block (ram,0x000104a1cf54) */
/* WARNING: Removing unreachable block (ram,0x000104a1cfb4) */
/* WARNING: Removing unreachable block (ram,0x000104a1cfa8) */
/* WARNING: Removing unreachable block (ram,0x000104a1d16c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1a8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a1cf20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae1a0,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1cfb8; end: 104a1d037; +[GTLRPeopleService_BatchCreateContactsResponse arrayPropertyToClassMap] */

/* WARNING: Possible PIC construction at 0x000104a1cfe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1d0ec) */
/* WARNING: Removing unreachable block (ram,0x000104a1d134) */
/* WARNING: Removing unreachable block (ram,0x000104a1d128) */
/* WARNING: Removing unreachable block (ram,0x000104a1d06c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d0b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d0a8) */
/* WARNING: Removing unreachable block (ram,0x000104a1cfec) */
/* WARNING: Removing unreachable block (ram,0x000104a1d034) */
/* WARNING: Removing unreachable block (ram,0x000104a1d028) */
/* WARNING: Removing unreachable block (ram,0x000104a1d16c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1a8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a1cfb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae1a8,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1d038; end: 104a1d0b7; +[GTLRPeopleService_BatchDeleteContactsRequest arrayPropertyToClassMap] */

/* WARNING: Possible PIC construction at 0x000104a1d068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1d0ec) */
/* WARNING: Removing unreachable block (ram,0x000104a1d134) */
/* WARNING: Removing unreachable block (ram,0x000104a1d128) */
/* WARNING: Removing unreachable block (ram,0x000104a1d06c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d0b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d0a8) */
/* WARNING: Removing unreachable block (ram,0x000104a1d16c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1a8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a1d038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_class_1125ac0b8)
  ;
  return;
}



/* Entry: 104a1d0b8; end: 104a1d137; +[GTLRPeopleService_BatchGetContactGroupsResponse arrayPropertyToClassMap] */

/* WARNING: Possible PIC construction at 0x000104a1d0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1d168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1d0ec) */
/* WARNING: Removing unreachable block (ram,0x000104a1d134) */
/* WARNING: Removing unreachable block (ram,0x000104a1d128) */
/* WARNING: Removing unreachable block (ram,0x000104a1d16c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1a8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a1d0b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae1b0,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1d138; end: 104a1d1b7; +[GTLRPeopleService_BatchUpdateContactsRequest arrayPropertyToClassMap] */

/* WARNING: Possible PIC construction at 0x000104a1d168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1d16c) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1b4) */
/* WARNING: Removing unreachable block (ram,0x000104a1d1a8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a1d138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_class_1125ac0b8)
  ;
  return;
}



/* Entry: 104a1d1b8; end: 104a1d1c3; +[GTLRPeopleService_BatchUpdateContactsRequest_Contacts classForAdditionalProperties] */

void FUN_104a1d1b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126a72e0,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1d1c4; end: 104a1d1cf; +[GTLRPeopleService_BatchUpdateContactsResponse_UpdateResult classForAdditionalProperties] */

void FUN_104a1d1c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae1a8,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1d1d0; end: 104a1d247; +[GTLRPeopleService_ContactGroup propertyToJSONKeyMap] */

undefined ** FUN_104a1d1d0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ea53f8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f9cdd8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1d248;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110da7378;
    puVar2 = PTR_PTR_1126ae1b8;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110da7398;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_58 = puVar2;
    func_0x00010bf39c40();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      pcStack_78 = FUN_104a1d2e0;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f6e6b8;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_80 = &puStack_40;
      func_0x00010bf39c40();
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&ppuStack_98,
                          1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_104a1d360;
        lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110da73b8;
        ppuStack_c0 = &PTR____CFConstantStringClassReference_110dc3a38;
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_b0 = &ppuStack_80;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,
                            &ppuStack_c8,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
          ___stack_chk_fail();
          pcStack_d8 = FUN_104a1d3d8;
          lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_f8 = &PTR____CFConstantStringClassReference_110da7358;
          puVar2 = PTR_PTR_1126ae1a8;
          ppuStack_e0 = &ppuStack_b0;
          func_0x00010bf39c40();
          ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_f0 = puVar2;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f0,
                              &ppuStack_f8,1);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
            ___stack_chk_fail();
            pcStack_108 = FUN_104a1d458;
            lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_128 = &PTR____CFConstantStringClassReference_110da73d8;
            puVar2 = PTR_PTR_1126a72e0;
            ppuStack_110 = &ppuStack_e0;
            func_0x00010bf39c40();
            ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_120 = puVar2;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_120,
                                &ppuStack_128,1);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
              ___stack_chk_fail();
              return &PTR____CFConstantStringClassReference_110da73d8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar1;
}



/* Entry: 104a1d248; end: 104a1d2df; +[GTLRPeopleService_ContactGroup arrayPropertyToClassMap] */

undefined ** FUN_104a1d248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110da7378;
  puVar1 = PTR_PTR_1126ae1b8;
  func_0x00010bf39c40();
  ppuStack_30 = &PTR____CFConstantStringClassReference_110da7398;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_28 = puVar1;
  func_0x00010bf39c40();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_28,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104a1d2e0;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      pcStack_78 = FUN_104a1d360;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110da73b8;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110dc3a38;
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_80 = &puStack_50;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&ppuStack_98
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_104a1d3d8;
        lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110da7358;
        puVar1 = PTR_PTR_1126ae1a8;
        ppuStack_b0 = &ppuStack_80;
        func_0x00010bf39c40();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_c0 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,
                            &ppuStack_c8,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
          ___stack_chk_fail();
          pcStack_d8 = FUN_104a1d458;
          lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_f8 = &PTR____CFConstantStringClassReference_110da73d8;
          puVar1 = PTR_PTR_1126a72e0;
          ppuStack_e0 = &ppuStack_b0;
          func_0x00010bf39c40();
          ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_f0 = puVar1;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f0,
                              &ppuStack_f8,1);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
            ___stack_chk_fail();
            return &PTR____CFConstantStringClassReference_110da73d8;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar3;
}



/* Entry: 104a1d2e0; end: 104a1d35f; +[GTLRPeopleService_CopyOtherContactToMyContactsGroupRequest arrayPropertyToClassMap] */

undefined ** FUN_104a1d2e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1d360;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110da73b8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110dc3a38;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1
                       );
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      pcStack_68 = FUN_104a1d3d8;
      lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110da7358;
      puVar1 = PTR_PTR_1126ae1a8;
      ppuStack_70 = &puStack_40;
      func_0x00010bf39c40();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_88,
                          1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        pcStack_98 = FUN_104a1d458;
        lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_b8 = &PTR____CFConstantStringClassReference_110da73d8;
        puVar1 = PTR_PTR_1126a72e0;
        ppuStack_a0 = &ppuStack_70;
        func_0x00010bf39c40();
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_b0 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,
                            &ppuStack_b8,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
          ___stack_chk_fail();
          return &PTR____CFConstantStringClassReference_110da73d8;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar2;
}



/* Entry: 104a1d360; end: 104a1d3d7; +[GTLRPeopleService_CoverPhoto propertyToJSONKeyMap] */

undefined ** FUN_104a1d360(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da73b8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dc3a38;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1d3d8;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110da7358;
    puVar2 = PTR_PTR_1126ae1a8;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      pcStack_68 = FUN_104a1d458;
      lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110da73d8;
      puVar2 = PTR_PTR_1126a72e0;
      ppuStack_70 = &puStack_40;
      func_0x00010bf39c40();
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_88,
                          1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        return &PTR____CFConstantStringClassReference_110da73d8;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar1;
}



/* Entry: 104a1d3d8; end: 104a1d457; +[GTLRPeopleService_GetPeopleResponse arrayPropertyToClassMap] */

undefined ** FUN_104a1d3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da7358;
  puVar1 = PTR_PTR_1126ae1a8;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1d458;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110da73d8;
    puVar1 = PTR_PTR_1126a72e0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      return &PTR____CFConstantStringClassReference_110da73d8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar2;
}



/* Entry: 104a1d458; end: 104a1d4d7; +[GTLRPeopleService_ListConnectionsResponse arrayPropertyToClassMap] */

undefined ** FUN_104a1d458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da73d8;
  puVar1 = PTR_PTR_1126a72e0;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110da73d8;
}



/* Entry: 104a1d4d8; end: 104a1d4e3; +[GTLRPeopleService_ListConnectionsResponse collectionItemsKey] */

undefined ** FUN_104a1d4d8(void)

{
  return &PTR____CFConstantStringClassReference_110da73d8;
}



/* Entry: 104a1d4e4; end: 104a1d563; +[GTLRPeopleService_ListContactGroupsResponse arrayPropertyToClassMap] */

undefined ** FUN_104a1d4e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da73f8;
  puVar1 = PTR_PTR_1126ae1c0;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110da73f8;
}



/* Entry: 104a1d564; end: 104a1d56f; +[GTLRPeopleService_ListContactGroupsResponse collectionItemsKey] */

undefined ** FUN_104a1d564(void)

{
  return &PTR____CFConstantStringClassReference_110da73f8;
}



/* Entry: 104a1d570; end: 104a1d5ef; +[GTLRPeopleService_ListDirectoryPeopleResponse arrayPropertyToClassMap] */

undefined ** FUN_104a1d570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ec74d8;
  puVar1 = PTR_PTR_1126a72e0;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110ec74d8;
}



/* Entry: 104a1d5f0; end: 104a1d5fb; +[GTLRPeopleService_ListDirectoryPeopleResponse collectionItemsKey] */

undefined ** FUN_104a1d5f0(void)

{
  return &PTR____CFConstantStringClassReference_110ec74d8;
}



/* Entry: 104a1d5fc; end: 104a1d67b; +[GTLRPeopleService_ListOtherContactsResponse arrayPropertyToClassMap] */

undefined ** FUN_104a1d5fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da7418;
  puVar1 = PTR_PTR_1126a72e0;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110da7418;
}



/* Entry: 104a1d67c; end: 104a1d687; +[GTLRPeopleService_ListOtherContactsResponse collectionItemsKey] */

undefined ** FUN_104a1d67c(void)

{
  return &PTR____CFConstantStringClassReference_110da7418;
}



/* Entry: 104a1d688; end: 104a1d723; +[GTLRPeopleService_ModifyContactGroupMembersRequest arrayPropertyToClassMap] */

undefined ** FUN_104a1d688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_408;
  undefined *puStack_400;
  long lStack_3f8;
  undefined8 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  undefined8 **ppuStack_3c0;
  code *pcStack_3b8;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  long lStack_398;
  undefined8 **ppuStack_390;
  code *pcStack_388;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  long lStack_348;
  undefined8 **ppuStack_330;
  code *pcStack_328;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110da7438;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7458;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_38 = puVar1;
  func_0x00010bf39c40();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_38,&ppuStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    pcStack_58 = FUN_104a1d724;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110da7478;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110da7498;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_88 = puVar1;
    func_0x00010bf39c40();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_98,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_a8 = FUN_104a1d7c0;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110ea53f8;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110f9cdd8;
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_b0 = &puStack_60;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,&ppuStack_c8
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_d8 = FUN_104a1d838;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_318 = &PTR____CFConstantStringClassReference_110da74b8;
        puVar1 = PTR_PTR_1126ae1c8;
        ppuStack_e0 = &ppuStack_b0;
        func_0x00010bf39c40();
        ppuStack_310 = &PTR____CFConstantStringClassReference_110da74d8;
        puVar2 = PTR_PTR_1126ae1d0;
        puStack_208 = puVar1;
        func_0x00010bf39c40();
        ppuStack_308 = &PTR____CFConstantStringClassReference_110da74f8;
        puVar1 = PTR_PTR_1126ae1d8;
        puStack_200 = puVar2;
        func_0x00010bf39c40();
        ppuStack_300 = &PTR____CFConstantStringClassReference_110ef3a38;
        puVar2 = PTR_PTR_1126a72e8;
        puStack_1f8 = puVar1;
        func_0x00010bf39c40();
        ppuStack_2f8 = &PTR____CFConstantStringClassReference_110da7518;
        puVar1 = PTR_PTR_1126ae1e0;
        puStack_1f0 = puVar2;
        func_0x00010bf39c40();
        ppuStack_2f0 = &PTR____CFConstantStringClassReference_110da7538;
        puVar2 = PTR_PTR_1126ae1e8;
        puStack_1e8 = puVar1;
        func_0x00010bf39c40();
        ppuStack_2e8 = &PTR____CFConstantStringClassReference_110da7378;
        puVar1 = PTR_PTR_1126ae1f0;
        puStack_1e0 = puVar2;
        func_0x00010bf39c40();
        ppuStack_2e0 = &PTR____CFConstantStringClassReference_110da7558;
        puVar2 = PTR_PTR_1126a72f0;
        puStack_1d8 = puVar1;
        func_0x00010bf39c40();
        ppuStack_2d8 = &PTR____CFConstantStringClassReference_110da7578;
        puVar1 = PTR_PTR_1126a7308;
        puStack_1d0 = puVar2;
        func_0x00010bf39c40();
        ppuStack_2d0 = &PTR____CFConstantStringClassReference_110f15f38;
        puVar2 = PTR_PTR_1126ae1f8;
        puStack_1c8 = puVar1;
        func_0x00010bf39c40();
        ppuStack_2c8 = &PTR____CFConstantStringClassReference_110da7598;
        puVar1 = PTR_PTR_1126ae200;
        puStack_1c0 = puVar2;
        func_0x00010bf39c40();
        ppuStack_2c0 = &PTR____CFConstantStringClassReference_110da75b8;
        puVar2 = PTR_PTR_1126ae208;
        puStack_1b8 = puVar1;
        func_0x00010bf39c40();
        ppuStack_2b8 = &PTR____CFConstantStringClassReference_110da75d8;
        puVar1 = PTR_PTR_1126ae210;
        puStack_1b0 = puVar2;
        func_0x00010bf39c40();
        ppuStack_2b0 = &PTR____CFConstantStringClassReference_110da75f8;
        puVar2 = PTR_PTR_1126ae218;
        puStack_1a8 = puVar1;
        func_0x00010bf39c40();
        ppuStack_2a8 = &PTR____CFConstantStringClassReference_110da7618;
        puVar1 = PTR_PTR_1126ae220;
        puStack_1a0 = puVar2;
        func_0x00010bf39c40();
        ppuStack_2a0 = &PTR____CFConstantStringClassReference_110da7638;
        puVar2 = PTR_PTR_1126ae228;
        puStack_198 = puVar1;
        func_0x00010bf39c40();
        ppuStack_298 = &PTR____CFConstantStringClassReference_110e07e58;
        puVar1 = PTR_PTR_1126ae230;
        puStack_190 = puVar2;
        func_0x00010bf39c40();
        ppuStack_290 = &PTR____CFConstantStringClassReference_110da7658;
        puVar2 = PTR_PTR_1126ae238;
        puStack_188 = puVar1;
        func_0x00010bf39c40();
        ppuStack_288 = &PTR____CFConstantStringClassReference_110da7678;
        puVar1 = PTR_PTR_1126ae240;
        puStack_180 = puVar2;
        func_0x00010bf39c40();
        ppuStack_280 = &PTR____CFConstantStringClassReference_110da7698;
        puVar2 = PTR_PTR_1126a7310;
        puStack_178 = puVar1;
        func_0x00010bf39c40();
        ppuStack_278 = &PTR____CFConstantStringClassReference_110da76b8;
        puVar1 = PTR_PTR_1126ae248;
        puStack_170 = puVar2;
        func_0x00010bf39c40();
        ppuStack_270 = &PTR____CFConstantStringClassReference_110da76d8;
        puVar2 = PTR_PTR_1126ae250;
        puStack_168 = puVar1;
        func_0x00010bf39c40();
        ppuStack_268 = &PTR____CFConstantStringClassReference_110da76f8;
        puVar1 = PTR_PTR_1126ae258;
        puStack_160 = puVar2;
        func_0x00010bf39c40();
        ppuStack_260 = &PTR____CFConstantStringClassReference_110da7718;
        puVar2 = PTR_PTR_1126a7300;
        puStack_158 = puVar1;
        func_0x00010bf39c40();
        ppuStack_258 = &PTR____CFConstantStringClassReference_110dad518;
        puVar1 = PTR_PTR_1126a72f8;
        puStack_150 = puVar2;
        func_0x00010bf39c40();
        ppuStack_250 = &PTR____CFConstantStringClassReference_110da7738;
        puVar2 = PTR_PTR_1126ae260;
        puStack_148 = puVar1;
        func_0x00010bf39c40();
        ppuStack_248 = &PTR____CFConstantStringClassReference_110da7758;
        puVar1 = PTR_PTR_1126ae268;
        puStack_140 = puVar2;
        func_0x00010bf39c40();
        ppuStack_240 = &PTR____CFConstantStringClassReference_110da7778;
        puVar2 = PTR_PTR_1126ae270;
        puStack_138 = puVar1;
        func_0x00010bf39c40();
        ppuStack_238 = &PTR____CFConstantStringClassReference_110da7798;
        puVar1 = PTR_PTR_1126ae278;
        puStack_130 = puVar2;
        func_0x00010bf39c40();
        ppuStack_230 = &PTR____CFConstantStringClassReference_110da77b8;
        puVar2 = PTR_PTR_1126ae280;
        puStack_128 = puVar1;
        func_0x00010bf39c40();
        ppuStack_228 = &PTR____CFConstantStringClassReference_110da77d8;
        puVar1 = PTR_PTR_1126ae288;
        puStack_120 = puVar2;
        func_0x00010bf39c40();
        ppuStack_220 = &PTR____CFConstantStringClassReference_110da77f8;
        puVar2 = PTR_PTR_1126ae290;
        puStack_118 = puVar1;
        func_0x00010bf39c40();
        ppuStack_218 = &PTR____CFConstantStringClassReference_110da7818;
        puVar1 = PTR_PTR_1126ae298;
        puStack_110 = puVar2;
        func_0x00010bf39c40();
        ppuStack_210 = &PTR____CFConstantStringClassReference_110da7838;
        puVar2 = PTR_PTR_1126ae2a0;
        puStack_108 = puVar1;
        func_0x00010bf39c40();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_100 = puVar2;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_208,
                            &ppuStack_318,0x22);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          ___stack_chk_fail();
          pcStack_328 = FUN_104a1dc5c;
          lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_378 = &PTR____CFConstantStringClassReference_110da7858;
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuStack_330 = &ppuStack_e0;
          func_0x00010bf39c40();
          ppuStack_370 = &PTR____CFConstantStringClassReference_110da7878;
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_360 = puVar1;
          func_0x00010bf39c40();
          ppuStack_368 = &PTR____CFConstantStringClassReference_110f6e6b8;
          puVar1 = PTR_PTR_1126ae2a8;
          puStack_358 = puVar2;
          func_0x00010bf39c40();
          ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_350 = puVar1;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_360,
                              &ppuStack_378,3);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
            ___stack_chk_fail();
            pcStack_388 = FUN_104a1dd18;
            lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_3a8 = &PTR____CFConstantStringClassReference_110da73b8;
            ppuStack_3a0 = &PTR____CFConstantStringClassReference_110dc3a38;
            ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
            ppuStack_390 = &ppuStack_330;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_3a0,
                                &ppuStack_3a8,1);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
              ___stack_chk_fail();
              pcStack_3b8 = FUN_104a1dd90;
              lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              ppuStack_3d8 = &PTR____CFConstantStringClassReference_110da7898;
              puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              ppuStack_3c0 = &ppuStack_390;
              func_0x00010bf39c40();
              ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_3d0 = puVar1;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_3d0,
                                  &ppuStack_3d8,1);
              _objc_retainAutoreleasedReturnValue();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
                ___stack_chk_fail();
                pcStack_3e8 = FUN_104a1de10;
                lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                ppuStack_408 = &PTR____CFConstantStringClassReference_110ec74d8;
                puVar1 = PTR_PTR_1126a72e0;
                ppuStack_3f0 = &ppuStack_3c0;
                func_0x00010bf39c40();
                ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
                puStack_400 = puVar1;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_400,
                                    &ppuStack_408,1);
                _objc_retainAutoreleasedReturnValue();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
                  ___stack_chk_fail();
                  return &PTR____CFConstantStringClassReference_110ec74d8;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar3;
}



/* Entry: 104a1d724; end: 104a1d7bf; +[GTLRPeopleService_ModifyContactGroupMembersResponse arrayPropertyToClassMap] */

undefined ** FUN_104a1d724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  long lStack_3a8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined **ppuStack_388;
  undefined *puStack_380;
  long lStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  long lStack_348;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110da7478;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7498;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_38 = puVar1;
  func_0x00010bf39c40();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_38,&ppuStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    pcStack_58 = FUN_104a1d7c0;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110ea53f8;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f9cdd8;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_78,1
                       );
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      pcStack_88 = FUN_104a1d838;
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_2c8 = &PTR____CFConstantStringClassReference_110da74b8;
      puVar1 = PTR_PTR_1126ae1c8;
      ppuStack_90 = &puStack_60;
      func_0x00010bf39c40();
      ppuStack_2c0 = &PTR____CFConstantStringClassReference_110da74d8;
      puVar2 = PTR_PTR_1126ae1d0;
      puStack_1b8 = puVar1;
      func_0x00010bf39c40();
      ppuStack_2b8 = &PTR____CFConstantStringClassReference_110da74f8;
      puVar1 = PTR_PTR_1126ae1d8;
      puStack_1b0 = puVar2;
      func_0x00010bf39c40();
      ppuStack_2b0 = &PTR____CFConstantStringClassReference_110ef3a38;
      puVar2 = PTR_PTR_1126a72e8;
      puStack_1a8 = puVar1;
      func_0x00010bf39c40();
      ppuStack_2a8 = &PTR____CFConstantStringClassReference_110da7518;
      puVar1 = PTR_PTR_1126ae1e0;
      puStack_1a0 = puVar2;
      func_0x00010bf39c40();
      ppuStack_2a0 = &PTR____CFConstantStringClassReference_110da7538;
      puVar2 = PTR_PTR_1126ae1e8;
      puStack_198 = puVar1;
      func_0x00010bf39c40();
      ppuStack_298 = &PTR____CFConstantStringClassReference_110da7378;
      puVar1 = PTR_PTR_1126ae1f0;
      puStack_190 = puVar2;
      func_0x00010bf39c40();
      ppuStack_290 = &PTR____CFConstantStringClassReference_110da7558;
      puVar2 = PTR_PTR_1126a72f0;
      puStack_188 = puVar1;
      func_0x00010bf39c40();
      ppuStack_288 = &PTR____CFConstantStringClassReference_110da7578;
      puVar1 = PTR_PTR_1126a7308;
      puStack_180 = puVar2;
      func_0x00010bf39c40();
      ppuStack_280 = &PTR____CFConstantStringClassReference_110f15f38;
      puVar2 = PTR_PTR_1126ae1f8;
      puStack_178 = puVar1;
      func_0x00010bf39c40();
      ppuStack_278 = &PTR____CFConstantStringClassReference_110da7598;
      puVar1 = PTR_PTR_1126ae200;
      puStack_170 = puVar2;
      func_0x00010bf39c40();
      ppuStack_270 = &PTR____CFConstantStringClassReference_110da75b8;
      puVar2 = PTR_PTR_1126ae208;
      puStack_168 = puVar1;
      func_0x00010bf39c40();
      ppuStack_268 = &PTR____CFConstantStringClassReference_110da75d8;
      puVar1 = PTR_PTR_1126ae210;
      puStack_160 = puVar2;
      func_0x00010bf39c40();
      ppuStack_260 = &PTR____CFConstantStringClassReference_110da75f8;
      puVar2 = PTR_PTR_1126ae218;
      puStack_158 = puVar1;
      func_0x00010bf39c40();
      ppuStack_258 = &PTR____CFConstantStringClassReference_110da7618;
      puVar1 = PTR_PTR_1126ae220;
      puStack_150 = puVar2;
      func_0x00010bf39c40();
      ppuStack_250 = &PTR____CFConstantStringClassReference_110da7638;
      puVar2 = PTR_PTR_1126ae228;
      puStack_148 = puVar1;
      func_0x00010bf39c40();
      ppuStack_248 = &PTR____CFConstantStringClassReference_110e07e58;
      puVar1 = PTR_PTR_1126ae230;
      puStack_140 = puVar2;
      func_0x00010bf39c40();
      ppuStack_240 = &PTR____CFConstantStringClassReference_110da7658;
      puVar2 = PTR_PTR_1126ae238;
      puStack_138 = puVar1;
      func_0x00010bf39c40();
      ppuStack_238 = &PTR____CFConstantStringClassReference_110da7678;
      puVar1 = PTR_PTR_1126ae240;
      puStack_130 = puVar2;
      func_0x00010bf39c40();
      ppuStack_230 = &PTR____CFConstantStringClassReference_110da7698;
      puVar2 = PTR_PTR_1126a7310;
      puStack_128 = puVar1;
      func_0x00010bf39c40();
      ppuStack_228 = &PTR____CFConstantStringClassReference_110da76b8;
      puVar1 = PTR_PTR_1126ae248;
      puStack_120 = puVar2;
      func_0x00010bf39c40();
      ppuStack_220 = &PTR____CFConstantStringClassReference_110da76d8;
      puVar2 = PTR_PTR_1126ae250;
      puStack_118 = puVar1;
      func_0x00010bf39c40();
      ppuStack_218 = &PTR____CFConstantStringClassReference_110da76f8;
      puVar1 = PTR_PTR_1126ae258;
      puStack_110 = puVar2;
      func_0x00010bf39c40();
      ppuStack_210 = &PTR____CFConstantStringClassReference_110da7718;
      puVar2 = PTR_PTR_1126a7300;
      puStack_108 = puVar1;
      func_0x00010bf39c40();
      ppuStack_208 = &PTR____CFConstantStringClassReference_110dad518;
      puVar1 = PTR_PTR_1126a72f8;
      puStack_100 = puVar2;
      func_0x00010bf39c40();
      ppuStack_200 = &PTR____CFConstantStringClassReference_110da7738;
      puVar2 = PTR_PTR_1126ae260;
      puStack_f8 = puVar1;
      func_0x00010bf39c40();
      ppuStack_1f8 = &PTR____CFConstantStringClassReference_110da7758;
      puVar1 = PTR_PTR_1126ae268;
      puStack_f0 = puVar2;
      func_0x00010bf39c40();
      ppuStack_1f0 = &PTR____CFConstantStringClassReference_110da7778;
      puVar2 = PTR_PTR_1126ae270;
      puStack_e8 = puVar1;
      func_0x00010bf39c40();
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110da7798;
      puVar1 = PTR_PTR_1126ae278;
      puStack_e0 = puVar2;
      func_0x00010bf39c40();
      ppuStack_1e0 = &PTR____CFConstantStringClassReference_110da77b8;
      puVar2 = PTR_PTR_1126ae280;
      puStack_d8 = puVar1;
      func_0x00010bf39c40();
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110da77d8;
      puVar1 = PTR_PTR_1126ae288;
      puStack_d0 = puVar2;
      func_0x00010bf39c40();
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110da77f8;
      puVar2 = PTR_PTR_1126ae290;
      puStack_c8 = puVar1;
      func_0x00010bf39c40();
      ppuStack_1c8 = &PTR____CFConstantStringClassReference_110da7818;
      puVar1 = PTR_PTR_1126ae298;
      puStack_c0 = puVar2;
      func_0x00010bf39c40();
      ppuStack_1c0 = &PTR____CFConstantStringClassReference_110da7838;
      puVar2 = PTR_PTR_1126ae2a0;
      puStack_b8 = puVar1;
      func_0x00010bf39c40();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_b0 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1b8,
                          &ppuStack_2c8,0x22);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
        ___stack_chk_fail();
        pcStack_2d8 = FUN_104a1dc5c;
        lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_328 = &PTR____CFConstantStringClassReference_110da7858;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_2e0 = &ppuStack_90;
        func_0x00010bf39c40();
        ppuStack_320 = &PTR____CFConstantStringClassReference_110da7878;
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puStack_310 = puVar1;
        func_0x00010bf39c40();
        ppuStack_318 = &PTR____CFConstantStringClassReference_110f6e6b8;
        puVar1 = PTR_PTR_1126ae2a8;
        puStack_308 = puVar2;
        func_0x00010bf39c40();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_300 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_310,
                            &ppuStack_328,3);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
          ___stack_chk_fail();
          pcStack_338 = FUN_104a1dd18;
          lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_358 = &PTR____CFConstantStringClassReference_110da73b8;
          ppuStack_350 = &PTR____CFConstantStringClassReference_110dc3a38;
          ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppuStack_340 = &ppuStack_2e0;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_350,
                              &ppuStack_358,1);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
            ___stack_chk_fail();
            pcStack_368 = FUN_104a1dd90;
            lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_388 = &PTR____CFConstantStringClassReference_110da7898;
            puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuStack_370 = &ppuStack_340;
            func_0x00010bf39c40();
            ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_380 = puVar1;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_380,
                                &ppuStack_388,1);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
              ___stack_chk_fail();
              pcStack_398 = FUN_104a1de10;
              lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              ppuStack_3b8 = &PTR____CFConstantStringClassReference_110ec74d8;
              puVar1 = PTR_PTR_1126a72e0;
              ppuStack_3a0 = &ppuStack_370;
              func_0x00010bf39c40();
              ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_3b0 = puVar1;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_3b0,
                                  &ppuStack_3b8,1);
              _objc_retainAutoreleasedReturnValue();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
                ___stack_chk_fail();
                return &PTR____CFConstantStringClassReference_110ec74d8;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar3;
}



/* Entry: 104a1d7c0; end: 104a1d837; +[GTLRPeopleService_Person propertyToJSONKeyMap] */

undefined ** FUN_104a1d7c0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined **ppuStack_338;
  undefined *puStack_330;
  long lStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined8 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ea53f8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f9cdd8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1d838;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_278 = &PTR____CFConstantStringClassReference_110da74b8;
    puVar2 = PTR_PTR_1126ae1c8;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuStack_270 = &PTR____CFConstantStringClassReference_110da74d8;
    puVar3 = PTR_PTR_1126ae1d0;
    puStack_168 = puVar2;
    func_0x00010bf39c40();
    ppuStack_268 = &PTR____CFConstantStringClassReference_110da74f8;
    puVar2 = PTR_PTR_1126ae1d8;
    puStack_160 = puVar3;
    func_0x00010bf39c40();
    ppuStack_260 = &PTR____CFConstantStringClassReference_110ef3a38;
    puVar3 = PTR_PTR_1126a72e8;
    puStack_158 = puVar2;
    func_0x00010bf39c40();
    ppuStack_258 = &PTR____CFConstantStringClassReference_110da7518;
    puVar2 = PTR_PTR_1126ae1e0;
    puStack_150 = puVar3;
    func_0x00010bf39c40();
    ppuStack_250 = &PTR____CFConstantStringClassReference_110da7538;
    puVar3 = PTR_PTR_1126ae1e8;
    puStack_148 = puVar2;
    func_0x00010bf39c40();
    ppuStack_248 = &PTR____CFConstantStringClassReference_110da7378;
    puVar2 = PTR_PTR_1126ae1f0;
    puStack_140 = puVar3;
    func_0x00010bf39c40();
    ppuStack_240 = &PTR____CFConstantStringClassReference_110da7558;
    puVar3 = PTR_PTR_1126a72f0;
    puStack_138 = puVar2;
    func_0x00010bf39c40();
    ppuStack_238 = &PTR____CFConstantStringClassReference_110da7578;
    puVar2 = PTR_PTR_1126a7308;
    puStack_130 = puVar3;
    func_0x00010bf39c40();
    ppuStack_230 = &PTR____CFConstantStringClassReference_110f15f38;
    puVar3 = PTR_PTR_1126ae1f8;
    puStack_128 = puVar2;
    func_0x00010bf39c40();
    ppuStack_228 = &PTR____CFConstantStringClassReference_110da7598;
    puVar2 = PTR_PTR_1126ae200;
    puStack_120 = puVar3;
    func_0x00010bf39c40();
    ppuStack_220 = &PTR____CFConstantStringClassReference_110da75b8;
    puVar3 = PTR_PTR_1126ae208;
    puStack_118 = puVar2;
    func_0x00010bf39c40();
    ppuStack_218 = &PTR____CFConstantStringClassReference_110da75d8;
    puVar2 = PTR_PTR_1126ae210;
    puStack_110 = puVar3;
    func_0x00010bf39c40();
    ppuStack_210 = &PTR____CFConstantStringClassReference_110da75f8;
    puVar3 = PTR_PTR_1126ae218;
    puStack_108 = puVar2;
    func_0x00010bf39c40();
    ppuStack_208 = &PTR____CFConstantStringClassReference_110da7618;
    puVar2 = PTR_PTR_1126ae220;
    puStack_100 = puVar3;
    func_0x00010bf39c40();
    ppuStack_200 = &PTR____CFConstantStringClassReference_110da7638;
    puVar3 = PTR_PTR_1126ae228;
    puStack_f8 = puVar2;
    func_0x00010bf39c40();
    ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e07e58;
    puVar2 = PTR_PTR_1126ae230;
    puStack_f0 = puVar3;
    func_0x00010bf39c40();
    ppuStack_1f0 = &PTR____CFConstantStringClassReference_110da7658;
    puVar3 = PTR_PTR_1126ae238;
    puStack_e8 = puVar2;
    func_0x00010bf39c40();
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110da7678;
    puVar2 = PTR_PTR_1126ae240;
    puStack_e0 = puVar3;
    func_0x00010bf39c40();
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110da7698;
    puVar3 = PTR_PTR_1126a7310;
    puStack_d8 = puVar2;
    func_0x00010bf39c40();
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110da76b8;
    puVar2 = PTR_PTR_1126ae248;
    puStack_d0 = puVar3;
    func_0x00010bf39c40();
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110da76d8;
    puVar3 = PTR_PTR_1126ae250;
    puStack_c8 = puVar2;
    func_0x00010bf39c40();
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110da76f8;
    puVar2 = PTR_PTR_1126ae258;
    puStack_c0 = puVar3;
    func_0x00010bf39c40();
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110da7718;
    puVar3 = PTR_PTR_1126a7300;
    puStack_b8 = puVar2;
    func_0x00010bf39c40();
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dad518;
    puVar2 = PTR_PTR_1126a72f8;
    puStack_b0 = puVar3;
    func_0x00010bf39c40();
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110da7738;
    puVar3 = PTR_PTR_1126ae260;
    puStack_a8 = puVar2;
    func_0x00010bf39c40();
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110da7758;
    puVar2 = PTR_PTR_1126ae268;
    puStack_a0 = puVar3;
    func_0x00010bf39c40();
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110da7778;
    puVar3 = PTR_PTR_1126ae270;
    puStack_98 = puVar2;
    func_0x00010bf39c40();
    ppuStack_198 = &PTR____CFConstantStringClassReference_110da7798;
    puVar2 = PTR_PTR_1126ae278;
    puStack_90 = puVar3;
    func_0x00010bf39c40();
    ppuStack_190 = &PTR____CFConstantStringClassReference_110da77b8;
    puVar3 = PTR_PTR_1126ae280;
    puStack_88 = puVar2;
    func_0x00010bf39c40();
    ppuStack_188 = &PTR____CFConstantStringClassReference_110da77d8;
    puVar2 = PTR_PTR_1126ae288;
    puStack_80 = puVar3;
    func_0x00010bf39c40();
    ppuStack_180 = &PTR____CFConstantStringClassReference_110da77f8;
    puVar3 = PTR_PTR_1126ae290;
    puStack_78 = puVar2;
    func_0x00010bf39c40();
    ppuStack_178 = &PTR____CFConstantStringClassReference_110da7818;
    puVar2 = PTR_PTR_1126ae298;
    puStack_70 = puVar3;
    func_0x00010bf39c40();
    ppuStack_170 = &PTR____CFConstantStringClassReference_110da7838;
    puVar3 = PTR_PTR_1126ae2a0;
    puStack_68 = puVar2;
    func_0x00010bf39c40();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_168,&ppuStack_278,
                        0x22);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      pcStack_288 = FUN_104a1dc5c;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_2d8 = &PTR____CFConstantStringClassReference_110da7858;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_290 = &puStack_40;
      func_0x00010bf39c40();
      ppuStack_2d0 = &PTR____CFConstantStringClassReference_110da7878;
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_2c0 = puVar2;
      func_0x00010bf39c40();
      ppuStack_2c8 = &PTR____CFConstantStringClassReference_110f6e6b8;
      puVar2 = PTR_PTR_1126ae2a8;
      puStack_2b8 = puVar3;
      func_0x00010bf39c40();
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_2b0 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2c0,
                          &ppuStack_2d8,3);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
        ___stack_chk_fail();
        pcStack_2e8 = FUN_104a1dd18;
        lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_308 = &PTR____CFConstantStringClassReference_110da73b8;
        ppuStack_300 = &PTR____CFConstantStringClassReference_110dc3a38;
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_2f0 = &ppuStack_290;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_300,
                            &ppuStack_308,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
          ___stack_chk_fail();
          pcStack_318 = FUN_104a1dd90;
          lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_338 = &PTR____CFConstantStringClassReference_110da7898;
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuStack_320 = &ppuStack_2f0;
          func_0x00010bf39c40();
          ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_330 = puVar2;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_330,
                              &ppuStack_338,1);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
            ___stack_chk_fail();
            pcStack_348 = FUN_104a1de10;
            lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_368 = &PTR____CFConstantStringClassReference_110ec74d8;
            puVar2 = PTR_PTR_1126a72e0;
            ppuStack_350 = &ppuStack_320;
            func_0x00010bf39c40();
            ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_360 = puVar2;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_360,
                                &ppuStack_368,1);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
              ___stack_chk_fail();
              return &PTR____CFConstantStringClassReference_110ec74d8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar1;
}



/* Entry: 104a1d838; end: 104a1dc5b; +[GTLRPeopleService_Person arrayPropertyToClassMap] */

undefined ** FUN_104a1d838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_338;
  undefined *puStack_330;
  long lStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined **ppuStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined8 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110da74b8;
  puVar1 = PTR_PTR_1126ae1c8;
  func_0x00010bf39c40();
  ppuStack_240 = &PTR____CFConstantStringClassReference_110da74d8;
  puVar2 = PTR_PTR_1126ae1d0;
  puStack_138 = puVar1;
  func_0x00010bf39c40();
  ppuStack_238 = &PTR____CFConstantStringClassReference_110da74f8;
  puVar1 = PTR_PTR_1126ae1d8;
  puStack_130 = puVar2;
  func_0x00010bf39c40();
  ppuStack_230 = &PTR____CFConstantStringClassReference_110ef3a38;
  puVar2 = PTR_PTR_1126a72e8;
  puStack_128 = puVar1;
  func_0x00010bf39c40();
  ppuStack_228 = &PTR____CFConstantStringClassReference_110da7518;
  puVar1 = PTR_PTR_1126ae1e0;
  puStack_120 = puVar2;
  func_0x00010bf39c40();
  ppuStack_220 = &PTR____CFConstantStringClassReference_110da7538;
  puVar2 = PTR_PTR_1126ae1e8;
  puStack_118 = puVar1;
  func_0x00010bf39c40();
  ppuStack_218 = &PTR____CFConstantStringClassReference_110da7378;
  puVar1 = PTR_PTR_1126ae1f0;
  puStack_110 = puVar2;
  func_0x00010bf39c40();
  ppuStack_210 = &PTR____CFConstantStringClassReference_110da7558;
  puVar2 = PTR_PTR_1126a72f0;
  puStack_108 = puVar1;
  func_0x00010bf39c40();
  ppuStack_208 = &PTR____CFConstantStringClassReference_110da7578;
  puVar1 = PTR_PTR_1126a7308;
  puStack_100 = puVar2;
  func_0x00010bf39c40();
  ppuStack_200 = &PTR____CFConstantStringClassReference_110f15f38;
  puVar2 = PTR_PTR_1126ae1f8;
  puStack_f8 = puVar1;
  func_0x00010bf39c40();
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110da7598;
  puVar1 = PTR_PTR_1126ae200;
  puStack_f0 = puVar2;
  func_0x00010bf39c40();
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110da75b8;
  puVar2 = PTR_PTR_1126ae208;
  puStack_e8 = puVar1;
  func_0x00010bf39c40();
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110da75d8;
  puVar1 = PTR_PTR_1126ae210;
  puStack_e0 = puVar2;
  func_0x00010bf39c40();
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110da75f8;
  puVar2 = PTR_PTR_1126ae218;
  puStack_d8 = puVar1;
  func_0x00010bf39c40();
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110da7618;
  puVar1 = PTR_PTR_1126ae220;
  puStack_d0 = puVar2;
  func_0x00010bf39c40();
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110da7638;
  puVar2 = PTR_PTR_1126ae228;
  puStack_c8 = puVar1;
  func_0x00010bf39c40();
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e07e58;
  puVar1 = PTR_PTR_1126ae230;
  puStack_c0 = puVar2;
  func_0x00010bf39c40();
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110da7658;
  puVar2 = PTR_PTR_1126ae238;
  puStack_b8 = puVar1;
  func_0x00010bf39c40();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110da7678;
  puVar1 = PTR_PTR_1126ae240;
  puStack_b0 = puVar2;
  func_0x00010bf39c40();
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110da7698;
  puVar2 = PTR_PTR_1126a7310;
  puStack_a8 = puVar1;
  func_0x00010bf39c40();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110da76b8;
  puVar1 = PTR_PTR_1126ae248;
  puStack_a0 = puVar2;
  func_0x00010bf39c40();
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110da76d8;
  puVar2 = PTR_PTR_1126ae250;
  puStack_98 = puVar1;
  func_0x00010bf39c40();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110da76f8;
  puVar1 = PTR_PTR_1126ae258;
  puStack_90 = puVar2;
  func_0x00010bf39c40();
  ppuStack_190 = &PTR____CFConstantStringClassReference_110da7718;
  puVar2 = PTR_PTR_1126a7300;
  puStack_88 = puVar1;
  func_0x00010bf39c40();
  ppuStack_188 = &PTR____CFConstantStringClassReference_110dad518;
  puVar1 = PTR_PTR_1126a72f8;
  puStack_80 = puVar2;
  func_0x00010bf39c40();
  ppuStack_180 = &PTR____CFConstantStringClassReference_110da7738;
  puVar2 = PTR_PTR_1126ae260;
  puStack_78 = puVar1;
  func_0x00010bf39c40();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110da7758;
  puVar1 = PTR_PTR_1126ae268;
  puStack_70 = puVar2;
  func_0x00010bf39c40();
  ppuStack_170 = &PTR____CFConstantStringClassReference_110da7778;
  puVar2 = PTR_PTR_1126ae270;
  puStack_68 = puVar1;
  func_0x00010bf39c40();
  ppuStack_168 = &PTR____CFConstantStringClassReference_110da7798;
  puVar1 = PTR_PTR_1126ae278;
  puStack_60 = puVar2;
  func_0x00010bf39c40();
  ppuStack_160 = &PTR____CFConstantStringClassReference_110da77b8;
  puVar2 = PTR_PTR_1126ae280;
  puStack_58 = puVar1;
  func_0x00010bf39c40();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110da77d8;
  puVar1 = PTR_PTR_1126ae288;
  puStack_50 = puVar2;
  func_0x00010bf39c40();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110da77f8;
  puVar2 = PTR_PTR_1126ae290;
  puStack_48 = puVar1;
  func_0x00010bf39c40();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110da7818;
  puVar1 = PTR_PTR_1126ae298;
  puStack_40 = puVar2;
  func_0x00010bf39c40();
  ppuStack_140 = &PTR____CFConstantStringClassReference_110da7838;
  puVar2 = PTR_PTR_1126ae2a0;
  puStack_38 = puVar1;
  func_0x00010bf39c40();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_138,&ppuStack_248,
                      0x22);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    pcStack_258 = FUN_104a1dc5c;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_2a8 = &PTR____CFConstantStringClassReference_110da7858;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_260 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuStack_2a0 = &PTR____CFConstantStringClassReference_110da7878;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_290 = puVar1;
    func_0x00010bf39c40();
    ppuStack_298 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar1 = PTR_PTR_1126ae2a8;
    puStack_288 = puVar2;
    func_0x00010bf39c40();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_280 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_290,&ppuStack_2a8,
                        3);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      pcStack_2b8 = FUN_104a1dd18;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_2d8 = &PTR____CFConstantStringClassReference_110da73b8;
      ppuStack_2d0 = &PTR____CFConstantStringClassReference_110dc3a38;
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_2c0 = &puStack_260;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_2d0,
                          &ppuStack_2d8,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        pcStack_2e8 = FUN_104a1dd90;
        lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_308 = &PTR____CFConstantStringClassReference_110da7898;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_2f0 = &ppuStack_2c0;
        func_0x00010bf39c40();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_300 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_300,
                            &ppuStack_308,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
          ___stack_chk_fail();
          pcStack_318 = FUN_104a1de10;
          lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_338 = &PTR____CFConstantStringClassReference_110ec74d8;
          puVar1 = PTR_PTR_1126a72e0;
          ppuStack_320 = &ppuStack_2f0;
          func_0x00010bf39c40();
          ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_330 = puVar1;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_330,
                              &ppuStack_338,1);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
            ___stack_chk_fail();
            return &PTR____CFConstantStringClassReference_110ec74d8;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar3;
}



/* Entry: 104a1dc5c; end: 104a1dd17; +[GTLRPeopleService_PersonMetadata arrayPropertyToClassMap] */

undefined ** FUN_104a1dc5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110da7858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110da7878;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_40 = puVar1;
  func_0x00010bf39c40();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR_PTR_1126ae2a8;
  puStack_38 = puVar2;
  func_0x00010bf39c40();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_58,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    pcStack_68 = FUN_104a1dd18;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110da73b8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110dc3a38;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_88,1
                       );
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_98 = FUN_104a1dd90;
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110da7898;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_a0 = &puStack_70;
      func_0x00010bf39c40();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_b0 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,&ppuStack_b8,
                          1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_104a1de10;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110ec74d8;
        puVar1 = PTR_PTR_1126a72e0;
        ppuStack_d0 = &ppuStack_a0;
        func_0x00010bf39c40();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_e0 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e0,
                            &ppuStack_e8,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
          ___stack_chk_fail();
          return &PTR____CFConstantStringClassReference_110ec74d8;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar3;
}



/* Entry: 104a1dd18; end: 104a1dd8f; +[GTLRPeopleService_Photo propertyToJSONKeyMap] */

undefined ** FUN_104a1dd18(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da73b8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dc3a38;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1dd90;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110da7898;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      pcStack_68 = FUN_104a1de10;
      lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110ec74d8;
      puVar2 = PTR_PTR_1126a72e0;
      ppuStack_70 = &puStack_40;
      func_0x00010bf39c40();
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_88,
                          1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        return &PTR____CFConstantStringClassReference_110ec74d8;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar1;
}



/* Entry: 104a1dd90; end: 104a1de0f; +[GTLRPeopleService_ProfileMetadata arrayPropertyToClassMap] */

undefined ** FUN_104a1dd90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da7898;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1de10;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110ec74d8;
    puVar1 = PTR_PTR_1126a72e0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      return &PTR____CFConstantStringClassReference_110ec74d8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return ppuVar2;
}



/* Entry: 104a1de10; end: 104a1de8f; +[GTLRPeopleService_SearchDirectoryPeopleResponse arrayPropertyToClassMap] */

undefined ** FUN_104a1de10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110ec74d8;
  puVar1 = PTR_PTR_1126a72e0;
  func_0x00010bf39c40();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110ec74d8;
}



/* Entry: 104a1de90; end: 104a1de9b; +[GTLRPeopleService_SearchDirectoryPeopleResponse collectionItemsKey] */

undefined ** FUN_104a1de90(void)

{
  return &PTR____CFConstantStringClassReference_110ec74d8;
}



/* Entry: 104a1de9c; end: 104a1df1b; +[GTLRPeopleService_SearchResponse arrayPropertyToClassMap] */

/* WARNING: Possible PIC construction at 0x000104a1decc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a1dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1ded0) */
/* WARNING: Removing unreachable block (ram,0x000104a1df18) */
/* WARNING: Removing unreachable block (ram,0x000104a1dfa4) */
/* WARNING: Removing unreachable block (ram,0x000104a1df98) */
/* WARNING: Removing unreachable block (ram,0x000104a1df0c) */
/* WARNING: Removing unreachable block (ram,0x000104a1dfdc) */
/* WARNING: Removing unreachable block (ram,0x000104a1e024) */
/* WARNING: Removing unreachable block (ram,0x000104a1e018) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a1de9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae2b0,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1df1c; end: 104a1dfa7; +[GTLRPeopleService_Source propertyToJSONKeyMap] */

/* WARNING: Possible PIC construction at 0x000104a1dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1dfdc) */
/* WARNING: Removing unreachable block (ram,0x000104a1e024) */
/* WARNING: Removing unreachable block (ram,0x000104a1e018) */

void FUN_104a1df1c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110ea53f8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dae8f8;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f9cdd8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dbf6f8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_28,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae2b8,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1dfa8; end: 104a1e027; +[GTLRPeopleService_Status arrayPropertyToClassMap] */

/* WARNING: Possible PIC construction at 0x000104a1dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a1dfdc) */
/* WARNING: Removing unreachable block (ram,0x000104a1e024) */
/* WARNING: Removing unreachable block (ram,0x000104a1e018) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_104a1dfa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae2b8,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a1e028; end: 104a1e033; +[GTLRPeopleService_Status_Details_Item classForAdditionalProperties] */

void FUN_104a1e028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSObject_1126b1300,PTR_s_class_1125ac0b8)
  ;
  return;
}



/* Entry: 104a1e034; end: 104a1e0b3; +[GTLRPeopleService_UpdateContactPhotoRequest arrayPropertyToClassMap] */

void FUN_104a1e034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1e0b4;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110da7338;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      _objc_alloc();
      func_0x00010c0346e0();
      puVar1 = PTR_PTR_1126ae2c0;
      func_0x00010bf39c40(PTR_PTR_1126ae2c0);
      func_0x00010c198940(puVar2,param_2,puVar1);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da78d8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1e0b4; end: 104a1e133; +[GTLRPeopleServiceQuery_ContactGroupsBatchGet arrayPropertyToClassMap] */

void FUN_104a1e0b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da7338;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc();
    func_0x00010c0346e0();
    puVar1 = PTR_PTR_1126ae2c0;
    func_0x00010bf39c40(PTR_PTR_1126ae2c0);
    func_0x00010c198940(puVar2,param_2,puVar1);
    func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da78d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1e134; end: 104a1e193; +[GTLRPeopleServiceQuery_ContactGroupsBatchGet query] */

void FUN_104a1e134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126ae2c0;
  func_0x00010bf39c40(PTR_PTR_1126ae2c0);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da78d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e194; end: 104a1e227; +[GTLRPeopleServiceQuery_ContactGroupsCreate queryWithObject:] */

void FUN_104a1e194(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    puVar1 = PTR_PTR_1126ae1c0;
    func_0x00010bf39c40(PTR_PTR_1126ae1c0);
    func_0x00010c198940(param_1,param_2,puVar1);
    func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7918);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e228; end: 104a1e323; +[GTLRPeopleServiceQuery_ContactGroupsDelete queryWithResourceName:] */

void FUN_104a1e228(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
  _objc_retain();
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x00010c0346e0();
  func_0x00010c1ecd20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae2c8;
  func_0x00010bf39c40(PTR_PTR_1126ae2c8);
  func_0x00010c198940(param_1,param_2,puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110da7978;
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7978);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110da7938;
    _objc_retain(ppuVar3);
    func_0x00010bf0a140(puVar2,param_2,&ppuStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    func_0x00010c0346e0();
    func_0x00010c1ecd20();
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126ae1c0;
    func_0x00010bf39c40(PTR_PTR_1126ae1c0);
    func_0x00010c198940(puVar1,param_2,puVar4);
    func_0x00010c1c0780(puVar1,param_2,&PTR____CFConstantStringClassReference_110da7998);
    _objc_release(puVar2);
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      _objc_alloc();
      func_0x00010c0346e0();
      puVar1 = PTR_PTR_1126ae2d0;
      func_0x00010bf39c40(PTR_PTR_1126ae2d0);
      func_0x00010c198940(puVar2,param_2,puVar1);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da79b8);
      param_1 = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e324; end: 104a1e41b; +[GTLRPeopleServiceQuery_ContactGroupsGet queryWithResourceName:] */

void FUN_104a1e324(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x00010c0346e0();
  func_0x00010c1ecd20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae1c0;
  func_0x00010bf39c40(PTR_PTR_1126ae1c0);
  func_0x00010c198940(param_1,param_2,puVar2);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7998);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_alloc();
    func_0x00010c0346e0();
    puVar2 = PTR_PTR_1126ae2d0;
    func_0x00010bf39c40(PTR_PTR_1126ae2d0);
    func_0x00010c198940(puVar1,param_2,puVar2);
    func_0x00010c1c0780(puVar1,param_2,&PTR____CFConstantStringClassReference_110da79b8);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e41c; end: 104a1e47b; +[GTLRPeopleServiceQuery_ContactGroupsList query] */

void FUN_104a1e41c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126ae2d0;
  func_0x00010bf39c40(PTR_PTR_1126ae2d0);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da79b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e47c; end: 104a1e5a7; +[GTLRPeopleServiceQuery_ContactGroupsMembersModify queryWithObject:resourceName:] */

void FUN_104a1e47c(undefined *param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined **unaff_x22;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined **)0x0) {
    puVar7 = (undefined *)0x0;
    puVar2 = param_1;
    ppuVar4 = param_3;
    ppuVar3 = param_4;
  }
  else {
    ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
    _objc_retain();
    _objc_retain();
    func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dada18;
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    func_0x00010c1ecd20(param_1,param_2,param_4);
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126ae2d8;
    func_0x00010bf39c40(PTR_PTR_1126ae2d8);
    func_0x00010c198940(param_1,param_2,puVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110da79f8;
    func_0x00010c1c0780(param_1);
    puVar2 = puVar1;
    _objc_release();
    puVar7 = param_1;
    unaff_x20 = param_3;
    unaff_x21 = puVar1;
    unaff_x22 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pcStack_48 = FUN_104a1e5a8;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_70 = unaff_x22;
    puStack_68 = unaff_x21;
    ppuStack_60 = unaff_x20;
    puStack_58 = puVar7;
    puStack_50 = &stack0xfffffffffffffff0;
    if (ppuVar4 == (undefined **)0x0) {
      puVar8 = (undefined *)0x0;
      ppuVar6 = (undefined **)0x0;
      puVar7 = puVar2;
      ppuVar5 = ppuVar3;
    }
    else {
      ppuStack_80 = &PTR____CFConstantStringClassReference_110da7938;
      _objc_retain();
      _objc_retain();
      func_0x00010bf0a140(puVar1,param_2,&ppuStack_80,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc();
      ppuVar5 = &PTR____CFConstantStringClassReference_110deecb8;
      func_0x00010c0346e0();
      func_0x00010c172d40();
      _objc_release(ppuVar4);
      func_0x00010c1ecd20(puVar2,param_2,ppuVar3);
      _objc_release(ppuVar3);
      puVar7 = PTR_PTR_1126ae1c0;
      func_0x00010bf39c40(PTR_PTR_1126ae1c0);
      func_0x00010c198940(puVar2,param_2,puVar7);
      ppuVar6 = &PTR____CFConstantStringClassReference_110da7a18;
      func_0x00010c1c0780(puVar2);
      puVar7 = puVar1;
      _objc_release();
      puVar8 = puVar2;
      unaff_x20 = ppuVar4;
      unaff_x21 = puVar1;
      unaff_x22 = ppuVar3;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pcStack_88 = FUN_104a1e6d4;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_b0 = unaff_x22;
      puStack_a8 = unaff_x21;
      ppuStack_a0 = unaff_x20;
      puStack_98 = puVar8;
      ppuStack_90 = &puStack_50;
      if (ppuVar6 != (undefined **)0x0) {
        ppuStack_c0 = &PTR____CFConstantStringClassReference_110da7938;
        _objc_retain(ppuVar5);
        _objc_retain();
        func_0x00010bf0a140(puVar1,param_2,&ppuStack_c0,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_alloc();
        func_0x00010c0346e0();
        func_0x00010c172d40();
        _objc_release(ppuVar6);
        func_0x00010c1ecd20(puVar7,param_2,ppuVar5);
        _objc_release(ppuVar5);
        puVar2 = PTR_PTR_1126a72e0;
        func_0x00010bf39c40(PTR_PTR_1126a72e0);
        func_0x00010c198940(puVar7,param_2,puVar2);
        func_0x00010c1c0780(puVar7,param_2,&PTR____CFConstantStringClassReference_110da7a58);
        _objc_release(puVar1);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
        ___stack_chk_fail();
        pcStack_c8 = FUN_104a1e800;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110f6e6b8;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        pppuStack_d0 = &ppuStack_90;
        func_0x00010bf39c40();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_e0 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e0,
                            &ppuStack_e8,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
          ___stack_chk_fail();
          _objc_alloc();
          func_0x00010c0346e0();
          puVar1 = PTR_PTR_1126a72d8;
          func_0x00010bf39c40(PTR_PTR_1126a72d8);
          func_0x00010c198940(puVar2,param_2,puVar1);
          func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7a98);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1e5a8; end: 104a1e6d3; +[GTLRPeopleServiceQuery_ContactGroupsUpdate queryWithObject:resourceName:] */

void FUN_104a1e5a8(undefined *param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *unaff_x21;
  undefined **unaff_x22;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
    ppuVar4 = (undefined **)0x0;
    puVar2 = param_1;
    ppuVar3 = param_4;
  }
  else {
    ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
    _objc_retain();
    _objc_retain();
    func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    ppuVar3 = &PTR____CFConstantStringClassReference_110deecb8;
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    func_0x00010c1ecd20(param_1,param_2,param_4);
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126ae1c0;
    func_0x00010bf39c40(PTR_PTR_1126ae1c0);
    func_0x00010c198940(param_1,param_2,puVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110da7a18;
    func_0x00010c1c0780(param_1);
    puVar2 = puVar1;
    _objc_release();
    puVar5 = param_1;
    unaff_x20 = param_3;
    unaff_x21 = puVar1;
    unaff_x22 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pcStack_48 = FUN_104a1e6d4;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_70 = unaff_x22;
    puStack_68 = unaff_x21;
    lStack_60 = unaff_x20;
    puStack_58 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    if (ppuVar4 != (undefined **)0x0) {
      ppuStack_80 = &PTR____CFConstantStringClassReference_110da7938;
      _objc_retain(ppuVar3);
      _objc_retain();
      func_0x00010bf0a140(puVar1,param_2,&ppuStack_80,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc();
      func_0x00010c0346e0();
      func_0x00010c172d40();
      _objc_release(ppuVar4);
      func_0x00010c1ecd20(puVar2,param_2,ppuVar3);
      _objc_release(ppuVar3);
      puVar5 = PTR_PTR_1126a72e0;
      func_0x00010bf39c40(PTR_PTR_1126a72e0);
      func_0x00010c198940(puVar2,param_2,puVar5);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7a58);
      _objc_release(puVar1);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      pcStack_88 = FUN_104a1e800;
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110f6e6b8;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_90 = &puStack_50;
      func_0x00010bf39c40();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a0 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a0,&ppuStack_a8,
                          1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
        ___stack_chk_fail();
        _objc_alloc();
        func_0x00010c0346e0();
        puVar1 = PTR_PTR_1126a72d8;
        func_0x00010bf39c40(PTR_PTR_1126a72d8);
        func_0x00010c198940(puVar2,param_2,puVar1);
        func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7a98);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1e6d4; end: 104a1e7ff; +[GTLRPeopleServiceQuery_OtherContactsCopyOtherContactToMyContactsGroup queryWithObject:resourceName:] */

void FUN_104a1e6d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
    _objc_retain(param_4);
    _objc_retain();
    func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    func_0x00010c1ecd20(param_1,param_2,param_4);
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126a72e0;
    func_0x00010bf39c40(PTR_PTR_1126a72e0);
    func_0x00010c198940(param_1,param_2,puVar2);
    func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7a58);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104a1e800;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      _objc_alloc();
      func_0x00010c0346e0();
      puVar1 = PTR_PTR_1126a72d8;
      func_0x00010bf39c40(PTR_PTR_1126a72d8);
      func_0x00010c198940(puVar2,param_2,puVar1);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7a98);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1e800; end: 104a1e87f; +[GTLRPeopleServiceQuery_OtherContactsList arrayPropertyToClassMap] */

void FUN_104a1e800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc();
    func_0x00010c0346e0();
    puVar1 = PTR_PTR_1126a72d8;
    func_0x00010bf39c40(PTR_PTR_1126a72d8);
    func_0x00010c198940(puVar2,param_2,puVar1);
    func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7a98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1e880; end: 104a1e8df; +[GTLRPeopleServiceQuery_OtherContactsList query] */

void FUN_104a1e880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126a72d8;
  func_0x00010bf39c40(PTR_PTR_1126a72d8);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e8e0; end: 104a1e93f; +[GTLRPeopleServiceQuery_OtherContactsSearch query] */

void FUN_104a1e8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126ae2e0;
  func_0x00010bf39c40(PTR_PTR_1126ae2e0);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e940; end: 104a1e9d3; +[GTLRPeopleServiceQuery_PeopleBatchCreateContacts queryWithObject:] */

void FUN_104a1e940(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    puVar1 = PTR_PTR_1126ae2e8;
    func_0x00010bf39c40(PTR_PTR_1126ae2e8);
    func_0x00010c198940(param_1,param_2,puVar1);
    func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7b18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1e9d4; end: 104a1ea67; +[GTLRPeopleServiceQuery_PeopleBatchDeleteContacts queryWithObject:] */

void FUN_104a1e9d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    puVar1 = PTR_PTR_1126ae2c8;
    func_0x00010bf39c40(PTR_PTR_1126ae2c8);
    func_0x00010c198940(param_1,param_2,puVar1);
    func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7b58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1ea68; end: 104a1eafb; +[GTLRPeopleServiceQuery_PeopleBatchUpdateContacts queryWithObject:] */

void FUN_104a1ea68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    puVar1 = PTR_PTR_1126ae2f0;
    func_0x00010bf39c40(PTR_PTR_1126ae2f0);
    func_0x00010c198940(param_1,param_2,puVar1);
    func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7b98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1eafc; end: 104a1eb73; +[GTLRPeopleServiceQuery_PeopleConnectionsList parameterNameMap] */

void FUN_104a1eafc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da7bb8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da7bd8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1eb74;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar3 = &puStack_50;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pcStack_68 = FUN_104a1ebf4;
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110da7938;
      ppuStack_70 = &puStack_40;
      _objc_retain(ppuVar3);
      func_0x00010bf0a140(puVar1,param_2,&ppuStack_a0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc();
      func_0x00010c0346e0();
      func_0x00010c1ecd20();
      _objc_release(ppuVar3);
      puVar4 = PTR_PTR_1126a7320;
      func_0x00010bf39c40(PTR_PTR_1126a7320);
      func_0x00010c198940(puVar2,param_2,puVar4);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7c18);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_104a1ecec;
        lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110f6e6b8;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        pppuStack_b0 = &ppuStack_70;
        func_0x00010bf39c40();
        ppuVar3 = &puStack_c0;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_c0 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_c8,1)
        ;
        _objc_retainAutoreleasedReturnValue();
        if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) &&
           (___stack_chk_fail(), ppuVar3 != (undefined **)0x0)) {
          _objc_retain(ppuVar3);
          _objc_alloc(puVar2);
          func_0x00010c0346e0();
          func_0x00010c172d40();
          _objc_release(ppuVar3);
          puVar1 = PTR_PTR_1126a72e0;
          func_0x00010bf39c40(PTR_PTR_1126a72e0);
          func_0x00010c198940(puVar2,param_2,puVar1);
          func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7c58);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1eb74; end: 104a1ebf3; +[GTLRPeopleServiceQuery_PeopleConnectionsList arrayPropertyToClassMap] */

void FUN_104a1eb74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar3 = &puStack_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pcStack_38 = FUN_104a1ebf4;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110da7938;
    puStack_40 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    func_0x00010bf0a140(puVar1,param_2,&ppuStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    func_0x00010c0346e0();
    func_0x00010c1ecd20();
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126a7320;
    func_0x00010bf39c40(PTR_PTR_1126a7320);
    func_0x00010c198940(puVar2,param_2,puVar4);
    func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7c18);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      pcStack_78 = FUN_104a1ecec;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f6e6b8;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_80 = &puStack_40;
      func_0x00010bf39c40();
      ppuVar3 = &puStack_90;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_98,1);
      _objc_retainAutoreleasedReturnValue();
      if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) &&
         (___stack_chk_fail(), ppuVar3 != (undefined **)0x0)) {
        _objc_retain(ppuVar3);
        _objc_alloc(puVar2);
        func_0x00010c0346e0();
        func_0x00010c172d40();
        _objc_release(ppuVar3);
        puVar1 = PTR_PTR_1126a72e0;
        func_0x00010bf39c40(PTR_PTR_1126a72e0);
        func_0x00010c198940(puVar2,param_2,puVar1);
        func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7c58);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1ebf4; end: 104a1eceb; +[GTLRPeopleServiceQuery_PeopleConnectionsList queryWithResourceName:] */

void FUN_104a1ebf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x00010c0346e0();
  func_0x00010c1ecd20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126a7320;
  func_0x00010bf39c40(PTR_PTR_1126a7320);
  func_0x00010c198940(param_1,param_2,puVar2);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7c18);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104a1ecec;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar3 = &puStack_60;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) &&
       (___stack_chk_fail(), ppuVar3 != (undefined **)0x0)) {
      _objc_retain(ppuVar3);
      _objc_alloc(puVar2);
      func_0x00010c0346e0();
      func_0x00010c172d40();
      _objc_release(ppuVar3);
      puVar1 = PTR_PTR_1126a72e0;
      func_0x00010bf39c40(PTR_PTR_1126a72e0);
      func_0x00010c198940(puVar2,param_2,puVar1);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7c58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1ecec; end: 104a1ed6b; +[GTLRPeopleServiceQuery_PeopleCreateContact arrayPropertyToClassMap] */

void FUN_104a1ecec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar3 = &puStack_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) &&
     (___stack_chk_fail(), ppuVar3 != (undefined **)0x0)) {
    _objc_retain(ppuVar3);
    _objc_alloc(puVar2);
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(ppuVar3);
    puVar1 = PTR_PTR_1126a72e0;
    func_0x00010bf39c40(PTR_PTR_1126a72e0);
    func_0x00010c198940(puVar2,param_2,puVar1);
    func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7c58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1ed6c; end: 104a1edff; +[GTLRPeopleServiceQuery_PeopleCreateContact queryWithObject:] */

void FUN_104a1ed6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(param_1);
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    puVar1 = PTR_PTR_1126a72e0;
    func_0x00010bf39c40(PTR_PTR_1126a72e0);
    func_0x00010c198940(param_1,param_2,puVar1);
    func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7c58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1ee00; end: 104a1eefb; +[GTLRPeopleServiceQuery_PeopleDeleteContact queryWithResourceName:] */

void FUN_104a1ee00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
  _objc_retain();
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x00010c0346e0();
  func_0x00010c1ecd20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae2c8;
  func_0x00010bf39c40(PTR_PTR_1126ae2c8);
  func_0x00010c198940(param_1,param_2,puVar2);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7c98);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104a1eefc;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar3 = &puStack_60;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pcStack_78 = FUN_104a1ef7c;
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110da7938;
      ppuStack_80 = &puStack_50;
      _objc_retain();
      func_0x00010bf0a140(puVar1,param_2,&ppuStack_b0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc();
      func_0x00010c0346e0();
      func_0x00010c1ecd20();
      _objc_release(ppuVar3);
      puVar4 = PTR_PTR_1126ae2f8;
      func_0x00010bf39c40(PTR_PTR_1126ae2f8);
      func_0x00010c198940(puVar2,param_2,puVar4);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7cd8);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
        ___stack_chk_fail();
        pcStack_b8 = FUN_104a1f078;
        lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_d8 = &PTR____CFConstantStringClassReference_110da7bb8;
        ppuStack_d0 = &PTR____CFConstantStringClassReference_110da7bd8;
        ppuStack_c0 = &ppuStack_80;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_d0,
                            &ppuStack_d8,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
          ___stack_chk_fail();
          pcStack_e8 = FUN_104a1f0f0;
          lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_108 = &PTR____CFConstantStringClassReference_110f6e6b8;
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuStack_f0 = &ppuStack_c0;
          func_0x00010bf39c40();
          ppuVar3 = &puStack_100;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_100 = puVar1;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_108
                              ,1);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
            ___stack_chk_fail();
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pcStack_118 = FUN_104a1f170;
            lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_150 = &PTR____CFConstantStringClassReference_110da7938;
            ppuStack_120 = &ppuStack_f0;
            _objc_retain(ppuVar3);
            func_0x00010bf0a140(puVar1,param_2,&ppuStack_150,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_alloc();
            func_0x00010c0346e0();
            func_0x00010c1ecd20();
            _objc_release(ppuVar3);
            puVar4 = PTR_PTR_1126a72e0;
            func_0x00010bf39c40(PTR_PTR_1126a72e0);
            func_0x00010c198940(puVar2,param_2,puVar4);
            func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7cf8);
            _objc_release(puVar1);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
              ___stack_chk_fail();
              pcStack_158 = FUN_104a1f268;
              lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
              ppuStack_178 = &PTR____CFConstantStringClassReference_110da7bb8;
              ppuStack_170 = &PTR____CFConstantStringClassReference_110da7bd8;
              ppuStack_160 = &ppuStack_120;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_170,
                                  &ppuStack_178,1);
              _objc_retainAutoreleasedReturnValue();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
                ___stack_chk_fail();
                pcStack_188 = FUN_104a1f2e0;
                lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                ppuStack_1c8 = &PTR____CFConstantStringClassReference_110da7338;
                puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                puStack_1a0 = puVar1;
                puStack_198 = puVar2;
                ppuStack_190 = &ppuStack_160;
                func_0x00010bf39c40();
                ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f6e6b8;
                puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                puStack_1b8 = puVar4;
                func_0x00010bf39c40();
                puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                puStack_1b0 = puVar1;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1b8,
                                    &ppuStack_1c8,2);
                _objc_retainAutoreleasedReturnValue();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
                  ___stack_chk_fail();
                  _objc_alloc();
                  func_0x00010c0346e0();
                  puVar1 = PTR_PTR_1126ae300;
                  func_0x00010bf39c40(PTR_PTR_1126ae300);
                  func_0x00010c198940(puVar2,param_2,puVar1);
                  func_0x00010c1c0780(puVar2,param_2,
                                      &PTR____CFConstantStringClassReference_110da7d38);
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1eefc; end: 104a1ef7b; +[GTLRPeopleServiceQuery_PeopleDeleteContactPhoto arrayPropertyToClassMap] */

void FUN_104a1eefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar3 = &puStack_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pcStack_38 = FUN_104a1ef7c;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110da7938;
    puStack_40 = &stack0xfffffffffffffff0;
    _objc_retain();
    func_0x00010bf0a140(puVar1,param_2,&ppuStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    func_0x00010c0346e0();
    func_0x00010c1ecd20();
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126ae2f8;
    func_0x00010bf39c40(PTR_PTR_1126ae2f8);
    func_0x00010c198940(puVar2,param_2,puVar4);
    func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7cd8);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      pcStack_78 = FUN_104a1f078;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110da7bb8;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110da7bd8;
      ppuStack_80 = &puStack_40;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&ppuStack_98
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_104a1f0f0;
        lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110f6e6b8;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_b0 = &ppuStack_80;
        func_0x00010bf39c40();
        ppuVar3 = &puStack_c0;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_c0 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_c8,1)
        ;
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
          ___stack_chk_fail();
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          pcStack_d8 = FUN_104a1f170;
          lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_110 = &PTR____CFConstantStringClassReference_110da7938;
          ppuStack_e0 = &ppuStack_b0;
          _objc_retain(ppuVar3);
          func_0x00010bf0a140(puVar1,param_2,&ppuStack_110,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_alloc();
          func_0x00010c0346e0();
          func_0x00010c1ecd20();
          _objc_release(ppuVar3);
          puVar4 = PTR_PTR_1126a72e0;
          func_0x00010bf39c40(PTR_PTR_1126a72e0);
          func_0x00010c198940(puVar2,param_2,puVar4);
          func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7cf8);
          _objc_release(puVar1);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
            ___stack_chk_fail();
            pcStack_118 = FUN_104a1f268;
            lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_138 = &PTR____CFConstantStringClassReference_110da7bb8;
            ppuStack_130 = &PTR____CFConstantStringClassReference_110da7bd8;
            ppuStack_120 = &ppuStack_e0;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_130,
                                &ppuStack_138,1);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
              ___stack_chk_fail();
              pcStack_148 = FUN_104a1f2e0;
              lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
              ppuStack_188 = &PTR____CFConstantStringClassReference_110da7338;
              puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puStack_160 = puVar1;
              puStack_158 = puVar2;
              ppuStack_150 = &ppuStack_120;
              func_0x00010bf39c40();
              ppuStack_180 = &PTR____CFConstantStringClassReference_110f6e6b8;
              puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puStack_178 = puVar4;
              func_0x00010bf39c40();
              puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              puStack_170 = puVar1;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_178,
                                  &ppuStack_188,2);
              _objc_retainAutoreleasedReturnValue();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
                ___stack_chk_fail();
                _objc_alloc();
                func_0x00010c0346e0();
                puVar1 = PTR_PTR_1126ae300;
                func_0x00010bf39c40(PTR_PTR_1126ae300);
                func_0x00010c198940(puVar2,param_2,puVar1);
                func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7d38)
                ;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1ef7c; end: 104a1f077; +[GTLRPeopleServiceQuery_PeopleDeleteContactPhoto queryWithResourceName:] */

void FUN_104a1ef7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
  _objc_retain();
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x00010c0346e0();
  func_0x00010c1ecd20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ae2f8;
  func_0x00010bf39c40(PTR_PTR_1126ae2f8);
  func_0x00010c198940(param_1,param_2,puVar2);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7cd8);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104a1f078;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110da7bb8;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110da7bd8;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68,1
                       );
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      pcStack_78 = FUN_104a1f0f0;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f6e6b8;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_80 = &puStack_50;
      func_0x00010bf39c40();
      ppuVar3 = &puStack_90;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_98,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        pcStack_a8 = FUN_104a1f170;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110da7938;
        ppuStack_b0 = &ppuStack_80;
        _objc_retain(ppuVar3);
        func_0x00010bf0a140(puVar1,param_2,&ppuStack_e0,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_alloc();
        func_0x00010c0346e0();
        func_0x00010c1ecd20();
        _objc_release(ppuVar3);
        puVar4 = PTR_PTR_1126a72e0;
        func_0x00010bf39c40(PTR_PTR_1126a72e0);
        func_0x00010c198940(puVar2,param_2,puVar4);
        func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7cf8);
        _objc_release(puVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
          ___stack_chk_fail();
          pcStack_e8 = FUN_104a1f268;
          lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_108 = &PTR____CFConstantStringClassReference_110da7bb8;
          ppuStack_100 = &PTR____CFConstantStringClassReference_110da7bd8;
          ppuStack_f0 = &ppuStack_b0;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_100,
                              &ppuStack_108,1);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
            ___stack_chk_fail();
            pcStack_118 = FUN_104a1f2e0;
            lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
            ppuStack_158 = &PTR____CFConstantStringClassReference_110da7338;
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puStack_130 = puVar1;
            puStack_128 = puVar2;
            ppuStack_120 = &ppuStack_f0;
            func_0x00010bf39c40();
            ppuStack_150 = &PTR____CFConstantStringClassReference_110f6e6b8;
            puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puStack_148 = puVar4;
            func_0x00010bf39c40();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_140 = puVar1;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_148,
                                &ppuStack_158,2);
            _objc_retainAutoreleasedReturnValue();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
              ___stack_chk_fail();
              _objc_alloc();
              func_0x00010c0346e0();
              puVar1 = PTR_PTR_1126ae300;
              func_0x00010bf39c40(PTR_PTR_1126ae300);
              func_0x00010c198940(puVar2,param_2,puVar1);
              func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7d38);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f078; end: 104a1f0ef; +[GTLRPeopleServiceQuery_PeopleGet parameterNameMap] */

void FUN_104a1f078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da7bb8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da7bd8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104a1f0f0;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf39c40();
    ppuVar3 = &puStack_50;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pcStack_68 = FUN_104a1f170;
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110da7938;
      ppuStack_70 = &puStack_40;
      _objc_retain(ppuVar3);
      func_0x00010bf0a140(puVar1,param_2,&ppuStack_a0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc();
      func_0x00010c0346e0();
      func_0x00010c1ecd20();
      _objc_release(ppuVar3);
      puVar4 = PTR_PTR_1126a72e0;
      func_0x00010bf39c40(PTR_PTR_1126a72e0);
      func_0x00010c198940(puVar2,param_2,puVar4);
      func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7cf8);
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_104a1f268;
        lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110da7bb8;
        ppuStack_c0 = &PTR____CFConstantStringClassReference_110da7bd8;
        ppuStack_b0 = &ppuStack_70;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,
                            &ppuStack_c8,1);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
          ___stack_chk_fail();
          pcStack_d8 = FUN_104a1f2e0;
          lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_118 = &PTR____CFConstantStringClassReference_110da7338;
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_f0 = puVar1;
          puStack_e8 = puVar2;
          ppuStack_e0 = &ppuStack_b0;
          func_0x00010bf39c40();
          ppuStack_110 = &PTR____CFConstantStringClassReference_110f6e6b8;
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puStack_108 = puVar4;
          func_0x00010bf39c40();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_100 = puVar1;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_108,
                              &ppuStack_118,2);
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
            ___stack_chk_fail();
            _objc_alloc();
            func_0x00010c0346e0();
            puVar1 = PTR_PTR_1126ae300;
            func_0x00010bf39c40(PTR_PTR_1126ae300);
            func_0x00010c198940(puVar2,param_2,puVar1);
            func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7d38);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f0f0; end: 104a1f16f; +[GTLRPeopleServiceQuery_PeopleGet arrayPropertyToClassMap] */

void FUN_104a1f0f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar3 = &puStack_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar3,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pcStack_38 = FUN_104a1f170;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110da7938;
    puStack_40 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar3);
    func_0x00010bf0a140(puVar1,param_2,&ppuStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    func_0x00010c0346e0();
    func_0x00010c1ecd20();
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126a72e0;
    func_0x00010bf39c40(PTR_PTR_1126a72e0);
    func_0x00010c198940(puVar2,param_2,puVar4);
    func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7cf8);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      pcStack_78 = FUN_104a1f268;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110da7bb8;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110da7bd8;
      ppuStack_80 = &puStack_40;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&ppuStack_98
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        pcStack_a8 = FUN_104a1f2e0;
        lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110da7338;
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puStack_c0 = puVar1;
        puStack_b8 = puVar2;
        ppuStack_b0 = &ppuStack_80;
        func_0x00010bf39c40();
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110f6e6b8;
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puStack_d8 = puVar4;
        func_0x00010bf39c40();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_d0 = puVar1;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_d8,
                            &ppuStack_e8,2);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
          ___stack_chk_fail();
          _objc_alloc();
          func_0x00010c0346e0();
          puVar1 = PTR_PTR_1126ae300;
          func_0x00010bf39c40(PTR_PTR_1126ae300);
          func_0x00010c198940(puVar2,param_2,puVar1);
          func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7d38);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f170; end: 104a1f267; +[GTLRPeopleServiceQuery_PeopleGet queryWithResourceName:] */

void FUN_104a1f170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da7938;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x00010c0346e0();
  func_0x00010c1ecd20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126a72e0;
  func_0x00010bf39c40(PTR_PTR_1126a72e0);
  func_0x00010c198940(param_1,param_2,puVar2);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7cf8);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_104a1f268;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110da7bb8;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110da7bd8;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68,1
                       );
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      pcStack_78 = FUN_104a1f2e0;
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110da7338;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_90 = puVar1;
      uStack_88 = param_1;
      ppuStack_80 = &puStack_50;
      func_0x00010bf39c40();
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110f6e6b8;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puStack_a8 = puVar2;
      func_0x00010bf39c40();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a0 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_a8,&ppuStack_b8,
                          2);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
        ___stack_chk_fail();
        _objc_alloc();
        func_0x00010c0346e0();
        puVar1 = PTR_PTR_1126ae300;
        func_0x00010bf39c40(PTR_PTR_1126ae300);
        func_0x00010c198940(puVar2,param_2,puVar1);
        func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7d38);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f268; end: 104a1f2df; +[GTLRPeopleServiceQuery_PeopleGetBatchGet parameterNameMap] */

void FUN_104a1f268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da7bb8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da7bd8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110da7338;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f6e6b8;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_68 = puVar1;
    func_0x00010bf39c40();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      _objc_alloc();
      func_0x00010c0346e0();
      puVar2 = PTR_PTR_1126ae300;
      func_0x00010bf39c40(PTR_PTR_1126ae300);
      func_0x00010c198940(puVar1,param_2,puVar2);
      func_0x00010c1c0780(puVar1,param_2,&PTR____CFConstantStringClassReference_110da7d38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f2e0; end: 104a1f37b; +[GTLRPeopleServiceQuery_PeopleGetBatchGet arrayPropertyToClassMap] */

void FUN_104a1f2e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110da7338;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_38 = puVar1;
  func_0x00010bf39c40();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_38,&ppuStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc();
    func_0x00010c0346e0();
    puVar2 = PTR_PTR_1126ae300;
    func_0x00010bf39c40(PTR_PTR_1126ae300);
    func_0x00010c198940(puVar1,param_2,puVar2);
    func_0x00010c1c0780(puVar1,param_2,&PTR____CFConstantStringClassReference_110da7d38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f37c; end: 104a1f3db; +[GTLRPeopleServiceQuery_PeopleGetBatchGet query] */

void FUN_104a1f37c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126ae300;
  func_0x00010bf39c40(PTR_PTR_1126ae300);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7d38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1f3dc; end: 104a1f477; +[GTLRPeopleServiceQuery_PeopleListDirectoryPeople arrayPropertyToClassMap] */

void FUN_104a1f3dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110da7d58;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_38 = puVar1;
  func_0x00010bf39c40();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_38,&ppuStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc();
    func_0x00010c0346e0();
    puVar2 = PTR_PTR_1126ae308;
    func_0x00010bf39c40(PTR_PTR_1126ae308);
    func_0x00010c198940(puVar1,param_2,puVar2);
    func_0x00010c1c0780(puVar1,param_2,&PTR____CFConstantStringClassReference_110da7d98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f478; end: 104a1f4d7; +[GTLRPeopleServiceQuery_PeopleListDirectoryPeople query] */

void FUN_104a1f478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126ae308;
  func_0x00010bf39c40(PTR_PTR_1126ae308);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1f4d8; end: 104a1f557; +[GTLRPeopleServiceQuery_PeopleSearchContacts arrayPropertyToClassMap] */

void FUN_104a1f4d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc();
    func_0x00010c0346e0();
    puVar1 = PTR_PTR_1126ae2e0;
    func_0x00010bf39c40(PTR_PTR_1126ae2e0);
    func_0x00010c198940(puVar2,param_2,puVar1);
    func_0x00010c1c0780(puVar2,param_2,&PTR____CFConstantStringClassReference_110da7dd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f558; end: 104a1f5b7; +[GTLRPeopleServiceQuery_PeopleSearchContacts query] */

void FUN_104a1f558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126ae2e0;
  func_0x00010bf39c40(PTR_PTR_1126ae2e0);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1f5b8; end: 104a1f653; +[GTLRPeopleServiceQuery_PeopleSearchDirectoryPeople arrayPropertyToClassMap] */

void FUN_104a1f5b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110da7d58;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_38 = puVar1;
  func_0x00010bf39c40();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_38,&ppuStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_alloc();
    func_0x00010c0346e0();
    puVar2 = PTR_PTR_1126ae310;
    func_0x00010bf39c40(PTR_PTR_1126ae310);
    func_0x00010c198940(puVar1,param_2,puVar2);
    func_0x00010c1c0780(puVar1,param_2,&PTR____CFConstantStringClassReference_110da7e18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f654; end: 104a1f6b3; +[GTLRPeopleServiceQuery_PeopleSearchDirectoryPeople query] */

void FUN_104a1f654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_alloc();
  func_0x00010c0346e0();
  puVar1 = PTR_PTR_1126ae310;
  func_0x00010bf39c40(PTR_PTR_1126ae310);
  func_0x00010c198940(param_1,param_2,puVar1);
  func_0x00010c1c0780(param_1,param_2,&PTR____CFConstantStringClassReference_110da7e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1f6b4; end: 104a1f733; +[GTLRPeopleServiceQuery_PeopleUpdateContact arrayPropertyToClassMap] */

void FUN_104a1f6b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **unaff_x20;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f6e6b8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar4 = &puStack_20;
  pppuVar3 = &ppuStack_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar5 = ppuVar4;
    if (ppuVar4 != (undefined **)0x0) {
      _objc_retain();
      _objc_retain();
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc();
      ppuVar6 = &PTR____CFConstantStringClassReference_110f79bb8;
      func_0x00010c0346e0();
      func_0x00010c172d40();
      _objc_release(ppuVar4);
      func_0x00010c1ecd20(puVar2);
      _objc_release(pppuVar3);
      func_0x00010bf39c40(PTR_PTR_1126a72e0);
      func_0x00010c198940(puVar2);
      ppuVar5 = &PTR____CFConstantStringClassReference_110da7e58;
      func_0x00010c1c0780(puVar2);
      _objc_release(puVar1);
      puVar2 = puVar1;
      pppuVar3 = (undefined ***)ppuVar6;
      unaff_x20 = ppuVar4;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if (ppuVar5 != (undefined **)0x0) {
        _objc_retain(pppuVar3);
        _objc_retain(ppuVar5);
        func_0x00010bf0a140(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_alloc(puVar2);
        func_0x00010c0346e0();
        func_0x00010c172d40();
        _objc_release(ppuVar5);
        func_0x00010c1ecd20(puVar2);
        _objc_release(pppuVar3);
        func_0x00010bf39c40(PTR_PTR_1126ae318);
        func_0x00010c198940(puVar2);
        func_0x00010c1c0780(puVar2);
        _objc_release(puVar1);
        unaff_x20 = ppuVar5;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x10,7);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a1f734; end: 104a1f85f; +[GTLRPeopleServiceQuery_PeopleUpdateContact queryWithObject:resourceName:] */

void FUN_104a1f734(undefined *param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined **)0x0) {
    puVar5 = (undefined *)0x0;
    puVar1 = param_1;
    ppuVar2 = param_3;
  }
  else {
    _objc_retain();
    _objc_retain();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc();
    ppuVar3 = &PTR____CFConstantStringClassReference_110f79bb8;
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    func_0x00010c1ecd20(param_1);
    _objc_release(param_4);
    func_0x00010bf39c40(PTR_PTR_1126a72e0);
    func_0x00010c198940(param_1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110da7e58;
    func_0x00010c1c0780(param_1);
    _objc_release(puVar1);
    param_4 = ppuVar3;
    puVar5 = param_1;
    unaff_x20 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (ppuVar2 == (undefined **)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _objc_retain(param_4);
      _objc_retain(ppuVar2);
      func_0x00010bf0a140(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc(puVar1);
      func_0x00010c0346e0();
      func_0x00010c172d40();
      _objc_release(ppuVar2);
      func_0x00010c1ecd20(puVar1);
      _objc_release(param_4);
      func_0x00010bf39c40(PTR_PTR_1126ae318);
      func_0x00010c198940(puVar1);
      func_0x00010c1c0780(puVar1);
      _objc_release(puVar5);
      puVar5 = puVar1;
      unaff_x20 = ppuVar2;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x10,7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104a1f860; end: 104a1f98b; +[GTLRPeopleServiceQuery_PeopleUpdateContactPhoto queryWithObject:resourceName:] */

void FUN_104a1f860(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf0a140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc(param_1);
    func_0x00010c0346e0();
    func_0x00010c172d40();
    _objc_release(param_3);
    func_0x00010c1ecd20(param_1);
    _objc_release(param_4);
    func_0x00010bf39c40(PTR_PTR_1126ae318);
    func_0x00010c198940(param_1);
    func_0x00010c1c0780(param_1);
    _objc_release(puVar1);
    unaff_x20 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x10,7);
  return;
}



/* Entry: 104a1f98c; end: 104a1f99b;  */

void FUN_104a1f98c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


