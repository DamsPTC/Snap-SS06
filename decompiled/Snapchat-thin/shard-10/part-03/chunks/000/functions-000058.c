/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107df0a04; end: 107df0a0b; -[SCWebServerRequest acceptsGzipContentEncoding] */

undefined1 FUN_107df0a04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 107df0a0c; end: 107df0a13; -[SCWebServerRequest usesChunkedTransferEncoding] */

undefined1 FUN_107df0a0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 107df0a14; end: 107df0a1b; -[SCWebServerRequest localAddressData] */

undefined8 FUN_107df0a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107df0a1c; end: 107df0a4b; -[SCWebServerRequest setLocalAddressData:] */

void FUN_107df0a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df0a4c; end: 107df0a53; -[SCWebServerRequest remoteAddressData] */

undefined8 FUN_107df0a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107df0a54; end: 107df0a83; -[SCWebServerRequest setRemoteAddressData:] */

void FUN_107df0a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df0a84; end: 107df0b2b; -[SCWebServerRequest .cxx_destruct] */

void FUN_107df0a84(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 107df0b2c; end: 107df0b77; -[SCWebServerBodyEncoder initWithResponse:reader:] */

void FUN_107df0b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb380;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107df0b78; end: 107df0b7f; -[SCWebServerBodyEncoder open:] */

void FUN_107df0b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_open__112617da8);
  return;
}



/* Entry: 107df0b80; end: 107df0b87; -[SCWebServerBodyEncoder readData:] */

void FUN_107df0b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1212b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_readData__112625ec8);
  return;
}



/* Entry: 107df0b88; end: 107df0b8f; -[SCWebServerBodyEncoder close] */

void FUN_107df0b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_close_1125ad020);
  return;
}



/* Entry: 107df0b90; end: 107df0c27; -[SCWebServerGZipEncoder initWithResponse:reader:] */

undefined1 *
FUN_107df0b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithResponse_reader__1125394a8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c182140(param_3);
    func_0x00010c2201a0(param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107df0c28; end: 107df0cf3; -[SCWebServerGZipEncoder open:] */

undefined8 FUN_107df0c28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  uVar3 = 0;
  lVar1 = param_1 + 0x18;
  _deflateInit2_(lVar1,0xffffffff,8,0x1f,8,0,&UNK_10f45dced,0x70);
  if ((int)lVar1 == 0) {
    puStack_28 = PTR_PTR_1126fb388;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_open__112617da8,param_3);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    _deflateEnd(param_1 + 0x18);
  }
  else if (param_3 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar2;
    return 0;
  }
  return 0;
}



/* Entry: 107df0cf4; end: 107df0ea7; -[SCWebServerGZipEncoder readData:] */

void FUN_107df0cf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uVar9;
  long lStack_70;
  undefined *puStack_68;
  
  puVar7 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    _objc_alloc_init();
  }
  else {
    _objc_alloc();
    func_0x00010c022640();
    puVar6 = PTR_s_readData__112625ec8;
    if (puVar7 != (undefined *)0x0) {
      do {
        puStack_68 = PTR_PTR_1126fb388;
        plVar1 = &lStack_70;
        lStack_70 = param_1;
        _objc_msgSendSuper2(&lStack_70,puVar6,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (plVar1 == (long *)0x0) {
LAB_107df0e70:
          _objc_release(plVar1);
          _objc_release(puVar7);
          puVar7 = (undefined *)0x0;
          goto LAB_107df0e84;
        }
        puVar2 = (undefined1 *)plVar1;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        *(undefined1 **)(param_1 + 0x18) = puVar2;
        puVar2 = (undefined1 *)plVar1;
        func_0x00010c08fa60();
        lVar8 = 0;
        *(int *)(param_1 + 0x20) = (int)puVar2;
        while( true ) {
          puVar3 = puVar7;
          func_0x00010c08fa60();
          puVar4 = puVar7;
          _objc_retainAutorelease();
          func_0x00010c0d3c60();
          *(undefined **)(param_1 + 0x30) = puVar4 + lVar8;
          *(int *)(param_1 + 0x38) = (int)((long)puVar3 - lVar8);
          puVar2 = (undefined1 *)plVar1;
          func_0x00010c08fa60();
          uVar9 = 4;
          if (puVar2 != (undefined1 *)0x0) {
            uVar9 = 0;
          }
          lVar5 = param_1 + 0x18;
          _deflate(lVar5,uVar9);
          if ((int)lVar5 != 0) {
            if ((int)lVar5 != 1) {
              if (param_3 != (undefined8 *)0x0) {
                puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                *param_3 = puVar6;
              }
              goto LAB_107df0e70;
            }
            *(undefined1 *)(param_1 + 0x88) = 1;
          }
          lVar8 = (((long)puVar3 - lVar8) - (ulong)*(uint *)(param_1 + 0x38)) + lVar8;
          if (*(uint *)(param_1 + 0x38) != 0) break;
          func_0x00010c08fa60(puVar7);
          func_0x00010c1ba840(puVar7);
        }
        _objc_release(plVar1);
      } while (lVar8 == 0);
      func_0x00010c1ba840(puVar7);
    }
  }
LAB_107df0e84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107df0ea8; end: 107df0eef; -[SCWebServerGZipEncoder close] */

void FUN_107df0ea8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _deflateEnd(param_1 + 0x18);
  puStack_28 = PTR_PTR_1126fb388;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_close_1125ad020);
  return;
}



/* Entry: 107df0ef0; end: 107df0f07; +[SCWebServerResponse response] */

void FUN_107df0ef0(void)

{
  _objc_opt_class();
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df0f08; end: 107df0fa3; -[SCWebServerResponse init] */

undefined1 * FUN_107df0f08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb390;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 200;
    *(undefined8 *)((long)puVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107df0fa4; end: 107df0fab; -[SCWebServerResponse setValue:forAdditionalHeader:] */

void FUN_107df0fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setValue_forKey__112665ab0);
  return;
}



/* Entry: 107df0fac; end: 107df0fbb; -[SCWebServerResponse hasBody] */

bool FUN_107df0fac(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 107df0fbc; end: 107df0fdb; -[SCWebServerResponse usesChunkedTransferEncoding] */

bool FUN_107df0fbc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    return *(long *)(param_1 + 0x10) == -1;
  }
  return false;
}



/* Entry: 107df0fdc; end: 107df0fe3; -[SCWebServerResponse open:] */

undefined8 FUN_107df0fdc(void)

{
  return 1;
}



/* Entry: 107df0fe4; end: 107df0fef; -[SCWebServerResponse readData:] */

void FUN_107df0fe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_data_1125b6738);
  return;
}



/* Entry: 107df0ff0; end: 107df0ff3; -[SCWebServerResponse close] */

void FUN_107df0ff0(void)

{
  return;
}



/* Entry: 107df0ff4; end: 107df0ffb; -[SCWebServerResponse prepareForReading] */

void FUN_107df0ff4(long param_1)

{
  *(long *)(param_1 + 0x50) = param_1;
  return;
}



/* Entry: 107df0ffc; end: 107df101b; -[SCWebServerResponse performOpen:] */

undefined8 FUN_107df0ffc(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010c0e8e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_open__112617da8);
  return uVar1;
}



/* Entry: 107df101c; end: 107df10db; -[SCWebServerResponse performReadDataWithCompletion:] */

void FUN_107df101c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x50);
  _objc_opt_respondsToSelector(uVar1,PTR_s_asyncReadDataWithCompletion__1125a0a00);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  if ((uVar1 & 1) == 0) {
    func_0x00010c1212a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 0;
    _objc_retain(0);
    (**(code **)(param_3 + 0x10))(param_3,uVar2,0);
    _objc_release(uVar2);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010bf0c160(uVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107df10dc; end: 107df10e3; -[SCWebServerResponse performClose] */

void FUN_107df10dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_close_1125ad020);
  return;
}



/* Entry: 107df10e4; end: 107df10eb; -[SCWebServerResponse contentType] */

undefined8 FUN_107df10e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107df10ec; end: 107df10f3; -[SCWebServerResponse setContentType:] */

void FUN_107df10ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107df10f4; end: 107df10fb; -[SCWebServerResponse contentLength] */

undefined8 FUN_107df10f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107df10fc; end: 107df1103; -[SCWebServerResponse setContentLength:] */

void FUN_107df10fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107df1104; end: 107df110b; -[SCWebServerResponse statusCode] */

undefined8 FUN_107df1104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107df110c; end: 107df1113; -[SCWebServerResponse setStatusCode:] */

void FUN_107df110c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107df1114; end: 107df111b; -[SCWebServerResponse cacheControlMaxAge] */

undefined8 FUN_107df1114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107df111c; end: 107df1123; -[SCWebServerResponse setCacheControlMaxAge:] */

void FUN_107df111c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107df1124; end: 107df112b; -[SCWebServerResponse lastModifiedDate] */

undefined8 FUN_107df1124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107df112c; end: 107df115b; -[SCWebServerResponse setLastModifiedDate:] */

void FUN_107df112c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df115c; end: 107df1163; -[SCWebServerResponse eTag] */

undefined8 FUN_107df115c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107df1164; end: 107df116b; -[SCWebServerResponse setETag:] */

void FUN_107df1164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107df116c; end: 107df1173; -[SCWebServerResponse isGZipContentEncodingEnabled] */

undefined1 FUN_107df116c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 107df1174; end: 107df117b; -[SCWebServerResponse setGzipContentEncodingEnabled:] */

void FUN_107df1174(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 107df117c; end: 107df1183; -[SCWebServerResponse additionalHeaders] */

undefined8 FUN_107df117c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107df1184; end: 107df11d7; -[SCWebServerResponse .cxx_destruct] */

void FUN_107df1184(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107df11d8; end: 107df125f; -[SCWebServerResponse initWithRedirect:] */

long FUN_107df11d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    func_0x00010c20a3c0(param_1,param_2,0x12e);
    uVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2201a0(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110df2f78);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107df1260; end: 107df12cb; +[SCWebServerStreamedResponse responseWithContentType:streamBlock:] */

void FUN_107df1260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c003e40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107df12cc; end: 107df133b; +[SCWebServerStreamedResponse responseWithContentType:asyncStreamBlock:] */

void FUN_107df12cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c003d40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107df133c; end: 107df146b; -[SCWebServerStreamedResponse initWithContentType:streamBlock:] */

undefined8
FUN_107df133c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x107df13dc;
  puStack_40 = &UNK_110a0d548;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c003d40(param_1,param_2,param_3,&puStack_58,0);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107df146c; end: 107df154b; -[SCWebServerStreamedResponse initWithContentType:asyncStreamBlock:connectionClosedBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107df146c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fb398;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c182a00(puVar1);
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276fcf0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fcf0) = uVar4;
    _objc_release(uVar3);
    if (param_5 != 0) {
      lVar2 = param_5;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276fcf4);
      *(long *)((long)puVar1 + (long)_DAT_11276fcf4) = lVar2;
      _objc_release(uVar4);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107df154c; end: 107df162f; -[SCWebServerStreamedResponse asyncReadDataWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df154c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = *(long *)(param_1 + _DAT_11276fcf0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107df1630;
  puStack_50 = &UNK_1108cec38;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107df1630; end: 107df16bb;  */

void FUN_107df1630(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 != 0) || (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c18d760();
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107df16bc; end: 107df174f; -[SCWebServerStreamedResponse close] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df16bc(ulong param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + (long)_DAT_11276fcf4) != 0) &&
     (func_0x00010bf76f00(), (param_1 & 1) == 0)) {
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 107df1750; end: 107df1767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df1750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107df1764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fcf4) + 0x10))();
  return;
}



/* Entry: 107df1768; end: 107df177b; -[SCWebServerStreamedResponse didFinishSendingData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107df1768(long param_1)

{
  return *(byte *)(param_1 + _DAT_11276fcec) & 1;
}



/* Entry: 107df177c; end: 107df178b; -[SCWebServerStreamedResponse setDidFinishSendingData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df177c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276fcec) = param_3;
  return;
}



/* Entry: 107df178c; end: 107df17cb; -[SCWebServerStreamedResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df178c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fcf4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fcf0,0);
  return;
}



/* Entry: 107df17cc; end: 107df1817; +[SCWebServerConnStatus closed] */

void FUN_107df17cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107df1818; end: 107df1863; +[SCWebServerConnStatus connected] */

void FUN_107df1818(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107df1864; end: 107df18bf; +[SCWebServerConnStatus errorWithCode:] */

void FUN_107df1864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107df18c0; end: 107df1917; +[SCWebServerConnStatus requestProcessedWithStatusCode:] */

void FUN_107df18c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107df1918; end: 107df1963; +[SCWebServerConnStatus requestReceived] */

void FUN_107df1918(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107df1964; end: 107df19ab; +[SCWebServerConnStatus started] */

void FUN_107df1964(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7eb0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107df19ac; end: 107df19cf; -[SCWebServerConnStatus copyWithZone:] */

undefined8 FUN_107df19ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107df19d0; end: 107df1a33; -[SCWebServerConnStatus hash] */

void FUN_107df19d0(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126fb3a0;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df1a34; end: 107df1a77; -[SCWebServerConnStatus internalInit] */

void FUN_107df1a34(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fb3a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df1a78; end: 107df1b1f; -[SCWebServerConnStatus isEqual:] */

bool FUN_107df1a78(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107df1b20; end: 107df1c6b; -[SCWebServerConnStatus matchStarted:connected:requestReceived:requestProcessed:closed:error:] */

void FUN_107df1b20(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_107df1c28;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_107df1c28;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 2) || (param_5 == 0)) goto LAB_107df1c28;
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
LAB_107df1c24:
    (*pcVar3)(lVar2);
  }
  else {
    if (lVar2 == 3) {
      if (param_6 == 0) goto LAB_107df1c28;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    else {
      if (lVar2 == 4) {
        if (param_7 == 0) goto LAB_107df1c28;
        pcVar3 = *(code **)(param_7 + 0x10);
        lVar2 = param_7;
        goto LAB_107df1c24;
      }
      if ((lVar2 != 5) || (param_8 == 0)) goto LAB_107df1c28;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_8 + 0x10);
      lVar2 = param_8;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_107df1c28:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df1c6c; end: 107df1f3b; -[SCActionMenuTableView initWithItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107df1c6c(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  uVar2 = param_4;
  func_0x00010bf529e0(param_4);
  puStack_68 = PTR_PTR_1126fb3a8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(0,0,param_1 + -48.0,(double)uVar2 * 50.0,&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(puVar4);
    func_0x00010c17d4c0(puVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf20c00(puVar3);
    func_0x00010c013de0(puVar1);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar5);
    func_0x00010c16d4a0(puVar1);
    func_0x00010befbb60(puVar3);
    lVar7 = (long)_DAT_11276fd04;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar3 + lVar7);
    *(ulong *)((long)puVar3 + lVar7) = param_4;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___UITableView_1126aed40;
    _objc_alloc();
    func_0x00010bf20c00(puVar3);
    func_0x00010c014e80();
    lVar7 = (long)_DAT_11276fd08;
    uVar6 = *(undefined8 *)((long)puVar3 + lVar7);
    *(undefined **)((long)puVar3 + lVar7) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar3 + lVar7));
    _objc_release(puVar5);
    func_0x00010c1eeb20(0x4049000000000000,*(undefined8 *)((long)puVar3 + lVar7));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar3 + lVar7));
    func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar3 + lVar7));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(*(undefined8 *)((long)puVar3 + lVar7));
    _objc_release(puVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar3 + lVar7));
    func_0x00010c189840(*(undefined8 *)((long)puVar3 + lVar7));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar3 + lVar7));
    uVar6 = *(undefined8 *)((long)puVar3 + lVar7);
    _objc_opt_class(PTR_PTR_1126d52f8);
    puVar5 = PTR_PTR_1126d52f8;
    _objc_opt_class(PTR_PTR_1126d52f8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125fe0(uVar6);
    _objc_release(puVar5);
    func_0x00010befbb60(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar3;
}



/* Entry: 107df1f3c; end: 107df1fef; -[SCActionMenuTableView reloadActionItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df1f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  func_0x00010bfb68e0(param_4);
  uVar1 = param_6;
  func_0x00010bf529e0(param_6);
  func_0x00010c19f0e0(param_1,param_2,param_3,(double)uVar1 * 50.0,param_4);
  uVar2 = *(undefined8 *)(param_4 + _DAT_11276fd04);
  *(ulong *)(param_4 + _DAT_11276fd04) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  func_0x00010c128b60(*(undefined8 *)(param_4 + _DAT_11276fd08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107df1ff0; end: 107df1fff; -[SCActionMenuTableView tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df1ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fd04),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107df2000; end: 107df2133; -[SCActionMenuTableView tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df2000(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d52f8;
  _objc_retain(param_5);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf6e080(param_4,param_3,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar5 = (long)_DAT_11276fd04;
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  lVar3 = param_5;
  func_0x00010c142240(param_5);
  func_0x00010c0dfd40(uVar4,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6b60(uVar2,param_3,uVar4);
  _objc_release(uVar4);
  lVar3 = param_5;
  func_0x00010c142240();
  _objc_release(param_5);
  lVar5 = *(long *)(param_2 + lVar5);
  func_0x00010bf529e0();
  if (lVar3 == lVar5 + -1) {
    func_0x00010bf20c00(param_4);
    _CGRectGetWidth();
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar4 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    param_1 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  func_0x00010c1fce00(uVar4,uVar6,uVar7,param_1,uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107df2134; end: 107df227f; -[SCActionMenuTableView tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df2134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf6e880(param_3);
  lVar4 = *(long *)(param_1 + _DAT_11276fd04);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_107df2258;
  uVar2 = param_3;
  func_0x00010bf33b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf926c0();
  lVar3 = lVar4;
  if ((int)lVar1 == 0) {
    lVar1 = lVar4;
    func_0x00010bf80ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bf80ea0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107df2238;
    }
  }
  else {
    lVar1 = lVar4;
    func_0x00010c269080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c269080();
      _objc_retainAutoreleasedReturnValue();
LAB_107df2238:
      (**(code **)(lVar3 + 0x10))();
      _objc_release(lVar3);
    }
  }
  _objc_release(uVar2);
LAB_107df2258:
  _objc_release(lVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df2280; end: 107df23c3; -[SCActionMenuTableView _indexPathAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df2280(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = (long)_DAT_11276fd08;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bfed1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar3 = *(ulong *)(param_1 + lVar5);
        func_0x00010c124560(uVar3,param_2,uVar4);
        _CGRectContainsPoint();
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar4);
          goto LAB_107df237c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_107df237c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  lVar2 = lVar1;
  func_0x00010be38d80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11276fd08;
  lVar6 = *(long *)(lVar1 + lVar7);
  lVar5 = lVar6;
  func_0x00010bfed0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bf6e880(lVar6,param_2,lVar5,0);
    _objc_release(lVar5);
  }
  else {
    _objc_release(lVar5);
    if (lVar5 != lVar2) {
      func_0x00010c158fe0(*(undefined8 *)(lVar1 + lVar7),param_2,lVar2,0,0);
      uVar4 = 1;
      goto LAB_107df2458;
    }
  }
  uVar4 = 0;
LAB_107df2458:
  _objc_release(lVar2);
  return uVar4;
}



/* Entry: 107df23c4; end: 107df2477; -[SCActionMenuTableView highlightItemAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df23c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010be38d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276fd08;
  lVar4 = *(long *)(param_1 + lVar5);
  lVar2 = lVar4;
  func_0x00010bfed0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf6e880(lVar4,param_2,lVar2,0);
    _objc_release(lVar2);
  }
  else {
    _objc_release(lVar2);
    if (lVar2 != lVar1) {
      func_0x00010c158fe0(*(undefined8 *)(param_1 + lVar5),param_2,lVar1,0,0);
      uVar3 = 1;
      goto LAB_107df2458;
    }
  }
  uVar3 = 0;
LAB_107df2458:
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 107df2478; end: 107df24d3; -[SCActionMenuTableView tapItemAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107df2478(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be38d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c267f40(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11276fd08),lVar1);
  }
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 107df24d4; end: 107df2507; -[SCActionMenuTableView isLocatedInsideTableAtPoint:] */

bool FUN_107df24d4(long param_1)

{
  func_0x00010be38d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 107df2508; end: 107df2547; -[SCActionMenuTableView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df2508(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fd08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fd04,0);
  return;
}



/* Entry: 107df2548; end: 107df2b7f; -[SCActionMenuTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107df2548(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126fb3b0;
  puVar1 = &uStack_e0;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  lVar13 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    func_0x00010c1faee0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c159320(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar19 = (long)_DAT_11276fd0c;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar19));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar19));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar16;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(puVar3);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar17 = (long)_DAT_11276fd10;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar17));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar13 = *(long *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_d0 = lVar18;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar7;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar10;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar6;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar6);
    _objc_release(uVar16);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(puVar15);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(puVar9);
    _objc_release(uVar14);
    _objc_release(lVar18);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(lVar13 + _DAT_11276fd10));
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bfe5400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11276fd0c;
    func_0x00010c1a9f00(*(undefined8 *)(lVar13 + lVar18));
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf926c0();
    uVar16 = 0x3ff0000000000000;
    if ((int)puVar1 == 0) {
      uVar16 = 0x3fe0000000000000;
    }
    func_0x00010c1677c0(uVar16,*(undefined8 *)(lVar13 + lVar18));
    puVar1 = param_3;
    func_0x00010beecea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(lVar13);
    _objc_release(puVar1);
  }
  puVar1 = param_3;
  func_0x00010bf926c0();
  uVar16 = 0x3ff0000000000000;
  if ((int)puVar1 == 0) {
    uVar16 = 0x3fe0000000000000;
  }
  func_0x00010c1677c0(uVar16,*(undefined8 *)(lVar13 + _DAT_11276fd10));
  puVar1 = param_3;
  func_0x00010bf926c0();
  if ((int)puVar1 == 0) {
    puVar1 = param_3;
    func_0x00010bf80ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbac0(lVar13);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1fbac0(lVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 107df2b80; end: 107df2ceb; -[SCActionMenuTableViewCell setMenuItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df2b80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276fd10),param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bfe5400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = (long)_DAT_11276fd0c;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf926c0();
    uVar3 = 0x3ff0000000000000;
    if ((int)lVar1 == 0) {
      uVar3 = 0x3fe0000000000000;
    }
    func_0x00010c1677c0(uVar3,*(undefined8 *)(param_1 + lVar2));
    lVar1 = param_3;
    func_0x00010beecea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf926c0();
  uVar3 = 0x3ff0000000000000;
  if ((int)lVar1 == 0) {
    uVar3 = 0x3fe0000000000000;
  }
  func_0x00010c1677c0(uVar3,*(undefined8 *)(param_1 + _DAT_11276fd10));
  lVar1 = param_3;
  func_0x00010bf926c0();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf80ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar3 = 3;
    }
    func_0x00010c1fbac0(param_1,param_2,uVar3);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c1fbac0(param_1,param_2,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107df2cec; end: 107df2e4f; -[SCActionMenuTableViewCell animateIcon:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df2cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11276fd0c));
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107df2e50;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_4);
  func_0x00010bf03440(0x3fc3333333333333,0,puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107df2e50; end: 107df2ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df2e50(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _CGAffineTransformMakeScale(&uStack_50,0x3ff4cccccccccccd,0x3ff4cccccccccccd);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11276fd0c),param_2,&uStack_80);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107df2ec0; end: 107df2fa7;  */

void FUN_107df2ec0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf03440(0x3fb999999999999a,0,puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107df2fa8; end: 107df300b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df2fa8(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11276fd0c),param_2,&uStack_50);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107df300c; end: 107df301f;  */

void FUN_107df300c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107df3018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107df3020; end: 107df32ef; -[SCActionMenuTableViewCell setLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df3020(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11276fd14;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar15));
  if (param_3 == 0) {
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined8 *)(param_1 + lVar15) = 0;
    _objc_release(uVar14);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276fd0c));
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276fd0c));
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar14);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar15));
    lVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  func_0x00010c1cbe20(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + _DAT_11276fd14,0);
  _objc_storeStrong(param_1 + _DAT_11276fd10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fd0c,0);
  return;
}



/* Entry: 107df32f0; end: 107df333f; -[SCActionMenuTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df32f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fd14,0);
  _objc_storeStrong(param_1 + _DAT_11276fd10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fd0c,0);
  return;
}



/* Entry: 107df3340; end: 107df3347; -[SCActionMenuItemConfig initWithTitle:icon:enabled:tapHandler:disabledTapHandler:] */

void FUN_107df3340(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c053030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithTitle_icon_enabled_tapHa_1125f2610);
  return;
}



/* Entry: 107df3348; end: 107df3497; -[SCActionMenuItemConfig initWithTitle:icon:enabled:tapHandler:disabledTapHandler:accessibilityId:] */

undefined1 *
FUN_107df3348(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb3b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(long *)((long)puVar2 + 0x10) = param_3;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = uVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar2 + 8) = param_5;
    uVar3 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_7;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = uVar3;
    _objc_release(uVar4);
    lVar1 = param_3;
    if (param_8 != 0) {
      lVar1 = param_8;
    }
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(long *)((long)puVar2 + 0x30) = lVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107df3498; end: 107df349f; -[SCActionMenuItemConfig title] */

undefined8 FUN_107df3498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107df34a0; end: 107df34a7; -[SCActionMenuItemConfig icon] */

undefined8 FUN_107df34a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107df34a8; end: 107df34af; -[SCActionMenuItemConfig enabled] */

undefined1 FUN_107df34a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107df34b0; end: 107df34b7; -[SCActionMenuItemConfig tapHandler] */

undefined8 FUN_107df34b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107df34b8; end: 107df34bf; -[SCActionMenuItemConfig disabledTapHandler] */

undefined8 FUN_107df34b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107df34c0; end: 107df34c7; -[SCActionMenuItemConfig accessibilityId] */

undefined8 FUN_107df34c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107df34c8; end: 107df351b; -[SCActionMenuItemConfig .cxx_destruct] */

void FUN_107df34c8(long param_1)

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



/* Entry: 107df351c; end: 107df3617; -[SCAffordanceArrowView initWithPrimaryColor:secondaryColor:strokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107df351c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fb3c0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    lVar4 = (long)_DAT_11276fd30;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11276fd34;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fd38) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107df3618; end: 107df3827; -[SCAffordanceArrowView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df3618(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = *(double *)(param_1 + _DAT_11276fd38);
  fVar9 = (float)dVar5;
  func_0x00010bfb68e0(param_1);
  _CGRectGetHeight();
  dVar6 = 0.0;
  func_0x00010c0d18c0(0,dVar5,puVar2);
  func_0x00010bfb68e0(param_1);
  _CGRectGetHeight();
  dVar7 = (double)(fVar9 * 0.5);
  dVar8 = 1.5707963267948966;
  dVar5 = dVar7;
  func_0x00010bef6d40(0,dVar6 - dVar7,dVar7,0x3ff921fb54442d18,0x4012d97c7f3321d2,puVar2,param_2,1);
  func_0x00010bfb68e0(param_1);
  func_0x00010bef98c0(dVar5 * 0.5,0,puVar2);
  func_0x00010bfb68e0(param_1);
  dVar6 = dVar5;
  func_0x00010bfb68e0(param_1);
  dVar10 = (double)fVar9;
  func_0x00010bef98c0(dVar5,dVar8 - dVar10,puVar2);
  func_0x00010bfb68e0(param_1);
  func_0x00010bfb68e0(param_1);
  _CGRectGetHeight();
  func_0x00010bef6d40(dVar6,dVar5 - dVar7,dVar7,0x4012d97c7f3321d2,0x3ff921fb54442d18,puVar2,param_2
                      ,1);
  func_0x00010bfb68e0(param_1);
  func_0x00010bef98c0(dVar7 * 0.5,dVar10,puVar2);
  func_0x00010bf3dc80(puVar2);
  func_0x00010c1bdb60(puVar2,param_2,1);
  func_0x00010c1bdca0(puVar2,param_2,1);
  puVar3 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276fd30);
  func_0x00010bdc0fe0(uVar4);
  func_0x00010c19bc00(puVar1,param_2,uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276fd34);
  func_0x00010bdc0fe0(uVar4);
  func_0x00010c20e8e0(puVar1,param_2,uVar4);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107df3828; end: 107df386b; -[SCAffordanceArrowView updateStrokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df3828(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_2 + _DAT_11276fd38);
  dVar3 = ABS(dVar2 - param_1);
  dVar2 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + _DAT_11276fd38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107df386c; end: 107df38ab; -[SCAffordanceArrowView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df386c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fd34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fd30,0);
  return;
}



/* Entry: 107df38ac; end: 107df395f; +[SCFadeAnimation fadeInView:animated:] */

void FUN_107df38ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6be0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f740(puVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf9f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,PTR_PTR_1126d6be0,PTR_s_fadeInViews_animated_duration__1125c5780);
  return;
}



/* Entry: 107df3960; end: 107df3973; +[SCFadeAnimation fadeInViews:animated:] */

void FUN_107df3960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,PTR_PTR_1126d6be0,PTR_s_fadeInViews_animated_duration__1125c5780);
  return;
}


