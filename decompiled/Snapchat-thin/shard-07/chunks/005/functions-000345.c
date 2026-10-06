/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10564616c; end: 105646177;  */

long FUN_10564616c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108a32f8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105646178; end: 1056461b3;  */

void FUN_105646178(void)

{
  func_0x0001056463c0();
  return;
}



/* Entry: 1056461b4; end: 10564620b;  */

void FUN_1056461b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001056463a0();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_105646cf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6c80(uVar1,param_2,unaff_x20);
  func_0x000105646398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10564620c; end: 105646263;  */

void FUN_10564620c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001056463a0();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010bcc1ca8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f00(uVar1,param_2,unaff_x20);
  func_0x000105646398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105646264; end: 1056462f7;  */

long FUN_105646264(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108a32f8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1056462f8; end: 105646307;  */

void FUN_1056462f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3338;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105646308; end: 105646357;  */

long FUN_105646308(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105646358; end: 1056463df;  */

void FUN_105646358(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1056463e0; end: 105646457; -[SCNUploadUploadLocationManager initWithCpp:] */

undefined1 * FUN_1056463e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9780;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000105646a54();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105646a18(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105646458; end: 105646673; +[SCNUploadUploadLocationManager create:cronetPointer:cdnPopProvider:dbPath:userAgent:] */

void FUN_105646458(undefined8 param_1,ulong param_2)

{
  undefined8 in_x6;
  int extraout_w10;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined ***pppuVar1;
  undefined **appuStack_b0 [3];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  pppuVar1 = appuStack_b0;
  func_0x000105646ab8();
  func_0x000105646a98();
  func_0x000105646a90();
  func_0x000105646a88();
  _objc_retain();
  _objc_retain(in_x6);
  func_0x000100459fd0(auStack_70);
  func_0x00010011b600();
  func_0x000105646a88();
  if (unaff_x21 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    FUN_10564581c(&uStack_80);
  }
  func_0x000105646a44();
  func_0x0001000fbca4(&lStack_98);
  func_0x0001000fbca4(appuStack_b0,in_x6);
  FUN_105647364(&lStack_60,auStack_70,unaff_x20,param_2 & 0xff,&uStack_80,&lStack_98,appuStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_b0);
  func_0x000105646a80();
  func_0x000105645c74(&uStack_80);
  func_0x00010048b850(auStack_70);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_b0[0] = &PTR_DAT_1108a33e8;
    lStack_98 = lStack_60;
    lStack_90 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x000105646a54();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(appuStack_b0,&lStack_98,FUN_1056469a4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_98);
  }
  FUN_105646a18(&lStack_60);
  _objc_release(in_x6);
  func_0x000105646a78();
  func_0x000105646a44();
  func_0x000105646a4c();
  func_0x000105646a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 105646674; end: 10564675f; -[SCNUploadUploadLocationManager getUploadLocation:callback:] */

void FUN_105646674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [56];
  
  func_0x000105646a98();
  func_0x000105646a90();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_105646acc(auStack_68,param_3);
  FUN_105645ea8(auStack_78,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_68,auStack_78);
  func_0x000105646330(auStack_78);
  func_0x000105646a80();
  func_0x000105646a4c();
  func_0x000105646a64();
  return;
}



/* Entry: 105646760; end: 1056467bf; -[SCNUploadUploadLocationManager prefetch] */

void FUN_105646760(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 1056467c0; end: 10564690b; -[SCNUploadUploadLocationManager storeUploadResult:uploadUrl:statusCode:headers:] */

long * FUN_1056467c0(long param_1)

{
  ulong unaff_x21;
  long *plVar1;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000105646ab8();
  func_0x000105646a98();
  func_0x000105646a90();
  func_0x000105646a88();
  _objc_retain();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_58);
  func_0x0001000fbca4(auStack_70);
  func_0x0001004a2160();
  func_0x000100626d7c(auStack_98);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_58,auStack_70,unaff_x21 & 0xffffffffff,auStack_98);
  func_0x00010028ad98(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000105646a78();
  func_0x000105646a44();
  func_0x000105646a4c();
  func_0x000105646a64();
  return plVar1;
}



/* Entry: 10564690c; end: 10564695f; -[SCNUploadUploadLocationManager .cxx_destruct] */

void FUN_10564690c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a33e8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_105646a18((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105646960; end: 1056469a3; -[SCNUploadUploadLocationManager .cxx_construct] */

undefined8 * FUN_105646960(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000105646a54();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1056469a4; end: 105646a17;  */

void FUN_1056469a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bc4f8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105646a54();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_105646a18(&uStack_30);
  return;
}



/* Entry: 105646a18; end: 105646a43;  */

long FUN_105646a18(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105646a44; end: 105646acb;  */

void FUN_105646a44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105646acc; end: 105646be3;  */

void FUN_105646acc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c135700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_68);
  uVar3 = param_2;
  func_0x00010bf0b700();
  uVar4 = param_2;
  func_0x00010bf0b760();
  uVar5 = param_2;
  func_0x00010bf394c0();
  uVar6 = param_2;
  func_0x00010bf99860();
  uVar7 = param_2;
  func_0x00010c0c46a0();
  uVar8 = param_2;
  func_0x00010c0c6c20();
  uVar1 = uStack_58;
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(int *)(param_1 + 4) = (int)uVar4;
  *(char *)((long)param_1 + 0x24) = (char)uVar5;
  param_1[5] = uVar6;
  *(int *)(param_1 + 6) = (int)uVar7;
  *(int *)((long)param_1 + 0x34) = (int)uVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105646be4; end: 105646cf3;  */

void FUN_105646be4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c28e2e0();
  func_0x00010c28e060(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_60);
  func_0x00010bf0e960(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_78);
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = uStack_58;
  *(undefined8 *)(param_1 + 2) = uStack_60;
  *(undefined8 *)(param_1 + 6) = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 10) = uStack_70;
  *(undefined8 *)(param_1 + 8) = uStack_78;
  *(undefined8 *)(param_1 + 0xc) = uStack_68;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  _objc_release(param_2);
  func_0x000100100fec(&uStack_60);
  FUN_105646d98();
  func_0x000105646da0();
  return;
}



/* Entry: 105646cf4; end: 105646d97;  */

void FUN_105646cf4(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar2 = PTR_PTR_1126bc720;
  _objc_alloc(PTR_PTR_1126bc720);
  puVar3 = param_1 + 8;
  uVar1 = *param_1;
  param_1 = param_1 + 2;
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059b60(puVar2,param_2,uVar1,param_1,puVar3);
  FUN_105646d98();
  func_0x000105646da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105646d98; end: 105646da7;  */

void FUN_105646d98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105646da8; end: 105646e83; -[SCNUploadUploadLocationRequest initWithRequestId:assetSizeInBytes:assetType:chunkUploadSupportRequired:estimatedTimeToUploadMs:mediaContextType:mediaType:] */

undefined1 *
FUN_105646da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e9788;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105646e84; end: 105646e8b; -[SCNUploadUploadLocationRequest requestId] */

undefined8 FUN_105646e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105646e8c; end: 105646e93; -[SCNUploadUploadLocationRequest assetSizeInBytes] */

undefined8 FUN_105646e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105646e94; end: 105646e9b; -[SCNUploadUploadLocationRequest assetType] */

undefined4 FUN_105646e94(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 105646e9c; end: 105646ea3; -[SCNUploadUploadLocationRequest chunkUploadSupportRequired] */

undefined1 FUN_105646e9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105646ea4; end: 105646eab; -[SCNUploadUploadLocationRequest estimatedTimeToUploadMs] */

undefined8 FUN_105646ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105646eac; end: 105646eb3; -[SCNUploadUploadLocationRequest mediaContextType] */

undefined8 FUN_105646eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105646eb4; end: 105646ebb; -[SCNUploadUploadLocationRequest mediaType] */

undefined8 FUN_105646eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105646ebc; end: 105646ec7; -[SCNUploadUploadLocationRequest .cxx_destruct] */

void FUN_105646ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105646ec8; end: 105646fb3; -[SCNUploadUploadLocationResult initWithUploadMethod:uploadLocation:attribution:] */

undefined1 *
FUN_105646ec8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e9790;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105646fb4; end: 105646fbb; -[SCNUploadUploadLocationResult uploadMethod] */

undefined4 FUN_105646fb4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105646fbc; end: 105646fc3; -[SCNUploadUploadLocationResult uploadLocation] */

undefined8 FUN_105646fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105646fc4; end: 105646fcb; -[SCNUploadUploadLocationResult attribution] */

undefined8 FUN_105646fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105646fcc; end: 105646ffb; -[SCNUploadUploadLocationResult .cxx_destruct] */

void FUN_105646fcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105646ffc; end: 10564726b;  */

undefined8 *
FUN_105646ffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 auStack_90 [2];
  long lStack_88;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  *param_1 = &PTR_FUN_1108a3408;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_90[0] = 4;
  puVar5 = param_1;
  func_0x00010046e484();
  func_0x00010046e628(auStack_60,&DAT_10f2ded2d,auStack_90,puVar5);
  func_0x00010055c758(&uStack_68);
  func_0x0001004695d8(&lStack_78);
  lVar4 = lStack_78;
  func_0x00010002b838(auStack_90,"aws.api.snapchat.com");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar4 + 0x98,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  *(undefined8 *)(lStack_78 + 0x90) = 10000;
  *(undefined8 *)(lStack_78 + 0x68) = 20000;
  *(undefined1 *)(lStack_78 + 0x70) = 1;
  func_0x0001002a8234(lStack_78 + 8,param_5);
  if ((param_4 & 1) == 0) {
    *(undefined4 *)(lStack_78 + 0x8c) = 3;
    func_0x00010046a890(uStack_68,3);
  }
  else {
    *(undefined8 *)(lStack_78 + 0x78) = param_3;
    *(undefined1 *)(lStack_78 + 0x80) = 1;
  }
  lStack_88 = lStack_70;
  if (lStack_70 != 0) {
    plVar1 = (long *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010046a2d4(uStack_68,auStack_90);
  func_0x00010046e224(auStack_90);
  func_0x0001004896c8(auStack_b0,param_2);
  func_0x00010061a77c(auStack_c0);
  uStack_c4 = 0;
  func_0x000105637f7c(auStack_a0,auStack_60,auStack_b0,auStack_c0,&uStack_68,&uStack_c4);
  func_0x000105637f5c(auStack_90,auStack_a0);
  FUN_105637fac(param_1 + 1,auStack_90);
  func_0x000105638260(auStack_90);
  func_0x000100561f40(auStack_a0);
  func_0x000100561d44(auStack_c0);
  func_0x00010048b4e8(auStack_b0);
  func_0x00010046e248(&lStack_78);
  func_0x00010055f5a0(&uStack_68);
  func_0x000100450be4(auStack_60);
  return param_1;
}



/* Entry: 10564726c; end: 1056472ef;  */

void FUN_10564726c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [176];
  undefined1 uStack_28;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  auStack_d8[0] = 0;
  uStack_28 = 0;
  uStack_e8 = param_3[1];
  uStack_f0 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b213900(uVar4,param_2,auStack_d8,&uStack_f0);
  func_0x000105647334(&uStack_f0);
  func_0x000100609698(auStack_d8);
  return;
}



/* Entry: 1056472f0; end: 1056472f3;  */

undefined8 * FUN_1056472f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3408;
  func_0x000105638260(param_1 + 1);
  return param_1;
}



/* Entry: 1056472f4; end: 105647307;  */

void FUN_1056472f4(void)

{
  FUN_105647308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105647308; end: 10564735b;  */

undefined8 * FUN_105647308(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3408;
  func_0x000105638260(param_1 + 1);
  return param_1;
}



/* Entry: 10564735c; end: 105647363;  */

void FUN_10564735c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 105647364; end: 105647407;  */

void FUN_105647364(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_2;
  func_0x00010564c528();
  func_0x00010564c5c4();
  FUN_105652470();
  FUN_105647408(&uStack_60,param_2,param_3,param_4,param_5,param_6,param_7,auStack_78,uVar1);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010564c6fc();
  func_0x00010564c388();
  return;
}



/* Entry: 105647408; end: 105647e03;  */

void FUN_105647408(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  undefined **extraout_x11;
  undefined **extraout_x11_00;
  undefined **extraout_x11_01;
  undefined8 extraout_x12;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  long *plVar17;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [24];
  ulong auStack_1a0 [4];
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 auStack_160 [24];
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 uStack_131;
  undefined8 *puStack_130;
  long lStack_128;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined **ppuStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  undefined8 **ppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined4 uStack_c8;
  uint uStack_c4;
  ulong auStack_c0 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  char cStack_78;
  
  func_0x0001005d1848(&puStack_130);
  puVar3 = puStack_130;
  func_0x00010564c770();
  func_0x00010564c518();
  func_0x0001005d1b10(puVar3,4,param_8,&lStack_b0,&uStack_131);
  puStack_1c8 = puVar3;
  func_0x00010564c3c4();
  puStack_148 = (undefined8 *)0x0;
  puStack_140 = (undefined8 *)0x0;
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010002b838(auStack_160,&UNK_10f2e18b8);
    func_0x00010564c4ac();
    func_0x00010564c56c();
    lStack_b0 = 0;
    uStack_a8 = 0;
    func_0x0001005d1988(&puStack_130,&lStack_b0);
    func_0x0001005d1964(&lStack_b0);
    puStack_1c8 = (undefined8 *)0x0;
    puStack_1c0 = (undefined8 *)0x0;
  }
  else {
    func_0x00010564c6c0();
    puStack_1c8[1] = 0;
    puStack_1c8[2] = 0;
    puStack_1c0 = puStack_1c8 + 3;
    *puStack_1c8 = &PTR_FUN_1108a3690;
    FUN_10564d174(puStack_1c0,&puStack_130);
    ppuStack_108 = (undefined **)0x0;
    puStack_100 = (undefined8 *)0x0;
    lStack_b0 = 0;
    uStack_a8 = 0;
    puStack_148 = puStack_1c0;
    puStack_140 = puStack_1c8;
    func_0x00010564b204(&lStack_b0);
    func_0x00010564b204(&ppuStack_108);
  }
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  plVar17 = puVar4 + 1;
  *plVar17 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1108a36e0;
  puVar3 = puVar4 + 3;
  FUN_105646ffc(puVar3,param_2,param_3,param_4,param_7);
  puVar24 = param_6;
  puStack_170 = puVar3;
  puStack_168 = puVar4;
  FUN_10564d970(&lStack_b0);
  lVar19 = lStack_b0;
  lStack_180 = lStack_b0;
  if (lStack_b0 == 0) {
    puVar24 = (undefined8 *)0x0;
  }
  else {
    func_0x00010564c680();
    *puVar24 = &PTR_FUN_1108a3730;
    puVar24[1] = 0;
    puVar24[2] = 0;
    puVar24[3] = lVar19;
  }
  lStack_b0 = 0;
  puStack_178 = puVar24;
  func_0x00010564b2a8(&lStack_b0);
  if (lVar19 == 0) {
    func_0x00010564c670();
    func_0x00010564c4ac();
    func_0x00010564c508();
  }
  FUN_1056501bc(auStack_1a0,param_6);
  if (auStack_1a0[0] == 0) {
    func_0x00010002b838(auStack_1b8,&UNK_10f2e18d2);
    func_0x00010564c4ac();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
  }
  pppuVar5 = (undefined8 ***)&UNK_10f2e1a4a;
  func_0x0001003ba264(&UNK_10f2e1a4a,0x3c,0);
  puVar7 = puStack_130;
  if (((long)pppuVar5 < 1) || (puStack_130 == (undefined8 *)0x0)) goto LAB_105647704;
  func_0x00010564c518();
  func_0x00010b491b9c(puVar7,&lStack_b0);
  func_0x00010564c3c4();
  puVar21 = puStack_130;
  if (((ulong)puVar7 & 1) != 0) {
    func_0x00010002b838();
    func_0x00010b4911fc(&ppuStack_108,puVar21,&lStack_b0);
    func_0x00010564c3c4();
    if (ppuStack_108 == (undefined **)0x0) {
LAB_105647684:
      lVar14 = 0;
    }
    else {
      lStack_b0 = 0;
      ppuVar6 = ppuStack_108;
      func_0x00010b4925bc(ppuStack_108,&lStack_b0,8);
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x00010b4926c0(ppuStack_108);
        goto LAB_105647684;
      }
      func_0x00010b4926c0(ppuStack_108);
      lVar14 = lStack_b0;
    }
    FUN_105640484(&ppuStack_108);
    if ((long)pppuVar5 <= lVar14) goto LAB_105647704;
  }
  if (puStack_1c0 != (undefined8 *)0x0) {
    FUN_10564d4dc(puStack_1c0);
  }
  if (lVar19 != 0) {
    FUN_10564df38(lVar19);
  }
  puVar7 = puStack_130;
  ppuStack_e0 = pppuVar5;
  func_0x00010564c518();
  func_0x00010b4912d0(&ppuStack_108,puVar7,&lStack_b0,0);
  func_0x00010564c3c4();
  if (ppuStack_108 != (undefined **)0x0) {
    func_0x00010b4928b4(ppuStack_108,&ppuStack_e0,8);
    func_0x00010b4929dc(ppuStack_108);
  }
  func_0x000105640438(&ppuStack_108);
LAB_105647704:
  puVar7 = (undefined8 *)0x1e8;
  __Znwm();
  uVar22 = auStack_1a0[0];
  plVar13 = puVar7 + 1;
  *plVar13 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_1108a3790;
  uStack_118 = auStack_1a0[0];
  if (auStack_1a0[0] == 0) {
    puVar21 = (undefined8 *)0x0;
    puVar8 = puVar7;
  }
  else {
    puVar21 = puVar7;
    func_0x00010564c680();
    *puVar21 = &PTR_DAT_1108a37e0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    puVar21[3] = auStack_1a0[0];
    puVar8 = puVar21;
  }
  auStack_1a0[0] = 0;
  puStack_110 = puVar21;
  FUN_105652470();
  puVar9 = puVar8;
  FUN_105652744();
  ppuVar6 = (undefined **)(puVar7 + 3);
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[3] = &PTR_FUN_1108a3440;
  puVar7[6] = puVar3;
  puVar7[7] = puVar4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar2) {
      *plVar17 = *plVar17 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar18 = puVar7 + 8;
  *puVar18 = (ulong)puStack_1c0;
  puVar7[9] = puStack_1c8;
  if (puStack_1c8 != (undefined8 *)0x0) {
    do {
      func_0x00010564c334();
      ppuVar6 = extraout_x11;
    } while (extraout_w10 != 0);
  }
  puVar7[10] = lVar19;
  puVar7[0xb] = puVar24;
  if (puVar24 != (undefined8 *)0x0) {
    do {
      func_0x00010564c334();
      ppuVar6 = extraout_x11_00;
    } while (extraout_w10_00 != 0);
  }
  uVar27 = *param_5;
  puVar26 = puVar7 + 0xe;
  puVar7[0xf] = param_5[1];
  *puVar26 = uVar27;
  puVar25 = puVar7 + 0xc;
  *puVar25 = uVar22;
  puVar7[0xd] = puVar21;
  uStack_118 = 0;
  puStack_110 = (undefined8 *)0x0;
  if (param_5[1] != 0) {
    do {
      func_0x00010564c334();
      ppuVar6 = extraout_x11_01;
    } while (extraout_w10_01 != 0);
  }
  puVar11 = puVar7 + 0x10;
  puVar7[0x11] = lStack_128;
  *puVar11 = (ulong)puStack_130;
  if (lStack_128 != 0) {
    do {
      func_0x00010564c334();
    } while (extraout_w10_02 != 0);
  }
  puVar3 = puVar7 + 0x14;
  *(undefined1 *)puVar3 = 0;
  puVar7[0x12] = puVar8;
  puVar7[0x13] = puVar9;
  *(undefined1 *)(puVar7 + 0x1b) = 0;
  puVar20 = puVar7 + 0x1c;
  *puVar20 = 0x32aaaba7;
  puVar15 = puVar7 + 0x27;
  *puVar15 = 0x32aaaba7;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x22] = 0;
  puVar7[0x21] = 0;
  puVar7[0x24] = 0;
  puVar7[0x23] = 0;
  puVar7[0x26] = 0;
  puVar7[0x25] = 0;
  puVar7[0x29] = 0;
  puVar7[0x28] = 0;
  puVar7[0x2b] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x2d] = 0;
  puVar7[0x2c] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2f] = 0x32aaaba7;
  puVar7[0x39] = 0;
  puVar7[0x3a] = 0;
  puVar7[0x38] = 0;
  *(undefined8 *)((long)puVar7 + 0x1b1) = 0;
  *(undefined8 *)((long)puVar7 + 0x1a9) = 0;
  puVar7[0x33] = 0;
  puVar7[0x32] = 0;
  puVar7[0x35] = 0;
  puVar7[0x34] = 0;
  puVar7[0x31] = 0;
  puVar7[0x30] = 0;
  func_0x00010564c518();
  func_0x00010044fc54(puVar7 + 0x3b);
  func_0x00010564c3c4();
  uVar22 = *puVar11;
  if (uVar22 != 0) {
    func_0x00010002b838();
    func_0x00010b491b9c(uVar22,&lStack_b0);
    func_0x00010564c3c4();
    if ((uVar22 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(puVar15);
      uVar22 = *puVar11;
      func_0x00010564c518();
      func_0x00010b4911fc(auStack_c0,uVar22,&lStack_b0);
      func_0x00010564c3c4();
      if (auStack_c0[0] != 0) {
        uStack_c4 = 0;
        uVar22 = auStack_c0[0];
        func_0x00010b4925bc(auStack_c0[0],&uStack_c4,4);
        if ((int)uVar22 != 0) {
          for (puVar23 = (ulong *)0x0; (uint)puVar23 < uStack_c4;
              puVar23 = (ulong *)(ulong)((uint)puVar23 + 1)) {
            uStack_c8 = 0;
            uVar22 = auStack_c0[0];
            func_0x00010b4925bc(auStack_c0[0],&uStack_c8,4);
            if ((uVar22 & 1) == 0) break;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
                      (&ppuStack_e0,uStack_c8,0);
            uVar22 = auStack_c0[0];
            func_0x00010b4925bc(auStack_c0[0],&ppuStack_e0,uStack_c8);
            if ((uVar22 & 1) == 0) {
              func_0x00010564c6d0();
              break;
            }
            ppuStack_108 = &PTR_DAT_110ceacc8;
            puStack_100 = (undefined8 *)0x0;
            puStack_f8 = &DAT_11383d918;
            puStack_f0 = &DAT_11383d918;
            uStack_e8 = 0;
            uVar22 = uStack_d8;
            pppuVar5 = (undefined8 ***)ppuStack_e0;
            if (-1 < (char)bStack_c9) {
              uVar22 = (ulong)bStack_c9;
              pppuVar5 = &ppuStack_e0;
            }
            pppuVar10 = &ppuStack_108;
            func_0x0001001a3c94(pppuVar10,pppuVar5,uVar22);
            puVar12 = puVar11;
            puVar16 = puVar15;
            if ((int)pppuVar10 != 0) {
              uVar22 = puVar7[0x25];
              if (uVar22 < (ulong)puVar7[0x26]) {
                func_0x00010564c574();
                FUN_10564aa10();
                lVar19 = uVar22 + 0x28;
              }
              else {
                func_0x00010564c750(uVar22 - puVar7[0x24]);
                puVar24 = puVar7 + 0x24;
                FUN_10564a8c4(puVar24,extraout_x8 + 1);
                FUN_10564a99c(&lStack_b0,puVar24,(long)(puVar7[0x25] - puVar7[0x24]) / 0x28,
                              puVar7 + 0x26);
                func_0x00010564c574();
                FUN_10564aa10(lStack_a0,&ppuStack_108);
                lStack_a0 = lStack_a0 + 0x28;
                FUN_10564a90c(puVar7 + 0x24,&lStack_b0);
                lVar19 = puVar7[0x25];
                FUN_10564aa34(&lStack_b0);
              }
              puVar7[0x25] = lVar19;
              puVar12 = puVar26;
              puVar16 = puVar18;
              puVar18 = puVar11;
              puVar20 = puVar25;
              puVar25 = puVar15;
              puVar26 = puVar23;
            }
            func_0x00010b480eb4(&ppuStack_108);
            func_0x00010564c6d0();
            puVar11 = puVar12;
            puVar15 = puVar16;
          }
          if (5 < (ulong)((long)(puVar7[0x25] - puVar7[0x24]) / 0x28)) {
            FUN_105649748(puVar7 + 0x24,puVar7[0x24],puVar7[0x25] + -200);
          }
        }
        func_0x00010b4926c0(auStack_c0[0]);
      }
      FUN_105640484(auStack_c0);
      __ZNSt3__15mutex6unlockEv(puVar15);
    }
  }
  FUN_10564b438(&uStack_118);
  *param_1 = (long)ppuVar6;
  param_1[1] = (long)puVar7;
  if ((puVar7[5] == 0) || (*(long *)(puVar7[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      ppuStack_108 = ppuVar6;
      puStack_100 = puVar7;
    } while (cVar1 != '\0');
    do {
      func_0x00010564c5ec();
    } while (extraout_w11 != 0);
    lStack_b0 = puVar7[4];
    puVar7[4] = extraout_x12;
    puVar7[5] = puVar7;
    uStack_a8 = extraout_x8_00;
    func_0x00010564b1bc(&lStack_b0);
    func_0x00010564b1e0(&ppuStack_108);
  }
  if (*puVar18 != 0) {
    FUN_10564d2fc(&lStack_b0);
    if (cStack_78 == '\x01') {
      __ZNSt3__15mutex4lockEv(puVar20);
      cVar1 = *(char *)(puVar7 + 0x1b);
      if (cVar1 == cStack_78) {
        if (cVar1 != '\0') {
          FUN_10564abe0(puVar3,&lStack_b0);
        }
      }
      else if (cVar1 == '\0') {
        FUN_10564ac44(puVar3,&lStack_b0);
        *(undefined1 *)(puVar7 + 0x1b) = 1;
      }
      else {
        FUN_10564a694(puVar3);
      }
      __ZNSt3__15mutex6unlockEv(puVar20);
    }
    FUN_10564a304(&lStack_b0);
  }
  func_0x00010564b36c(auStack_1a0);
  func_0x00010564b348(&lStack_180);
  func_0x00010564b284(&puStack_170);
  func_0x00010564b204(&puStack_148);
  func_0x0001005d1964(&puStack_130);
  return;
}



/* Entry: 105647e04; end: 105647eb7;  */

undefined8 * FUN_105647e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3440;
  if (param_1[0x38] != 0) {
    (**(code **)(**(long **)(param_1[0x38] + 0x18) + 0x38))();
  }
  func_0x000100450be4(param_1 + 0x38);
  func_0x00010564a29c(param_1 + 0x35);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  func_0x00010564a2d0(param_1 + 0x21);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  FUN_10564a304(param_1 + 0x11);
  func_0x0001005d1964(param_1 + 0xd);
  func_0x000105645c74(param_1 + 0xb);
  FUN_10564b438(param_1 + 9);
  FUN_10564b348(param_1 + 7);
  func_0x00010564b204(param_1 + 5);
  FUN_10564b284(param_1 + 3);
  func_0x00010564b1bc(param_1 + 1);
  return param_1;
}



/* Entry: 105647eb8; end: 105647ebb;  */

undefined8 * FUN_105647eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3440;
  if (param_1[0x38] != 0) {
    (**(code **)(**(long **)(param_1[0x38] + 0x18) + 0x38))();
  }
  func_0x000100450be4(param_1 + 0x38);
  func_0x00010564a29c(param_1 + 0x35);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  func_0x00010564a2d0(param_1 + 0x21);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  FUN_10564a304(param_1 + 0x11);
  func_0x0001005d1964(param_1 + 0xd);
  func_0x000105645c74(param_1 + 0xb);
  FUN_10564b438(param_1 + 9);
  FUN_10564b348(param_1 + 7);
  func_0x00010564b204(param_1 + 5);
  FUN_10564b284(param_1 + 3);
  func_0x00010564b1bc(param_1 + 1);
  return param_1;
}



/* Entry: 105647ebc; end: 105647ef7;  */

void FUN_105647ebc(void)

{
  FUN_105647e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105647ef8; end: 10564833b;  */

void FUN_105647ef8(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [23];
  undefined1 uStack_e9;
  char cStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *apuStack_d0 [3];
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10564833c(auStack_138,param_1,param_2,0);
  uVar5 = cStack_e8 == '\x01';
  if ((bool)uVar5) {
    func_0x00010564c590(uStack_e9);
    if (extraout_x8 != 0) {
      iVar6 = 0xf2e1929;
      func_0x00010564c654(&UNK_10f2e1929,0x28);
      if ((iVar6 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
        iVar6 = 0xf2e1952;
        func_0x00010564c654(&UNK_10f2e1952,0x21);
        if (iVar6 == 0) {
          lVar14 = param_1;
          FUN_105648b1c(param_1,auStack_100);
          if ((int)lVar14 != 0) {
            func_0x00010002b838(&ppuStack_a8,&UNK_10f2e1974);
            FUN_10564905c(param_1,&ppuStack_a8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_a8);
          }
        }
        else {
          FUN_10564b530(&ppuStack_a8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
          ppuStack_b8 = ppuStack_a8;
          ppuStack_b0 = ppuStack_a0;
          if (ppuStack_a0 != (undefined **)0x0) {
            do {
              func_0x00010564c334();
            } while (extraout_w10 != 0);
          }
          func_0x00010564b1e0(&ppuStack_a8);
          plVar12 = *(long **)(param_1 + 0x1c0);
          ppuStack_e0 = ppuStack_a8;
          ppuStack_d8 = ppuStack_a0;
          if (ppuStack_a0 != (undefined **)0x0) {
            do {
              func_0x00010564c334();
            } while (extraout_w10_00 != 0);
          }
          ppuVar7 = apuStack_d0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (ppuVar7,auStack_100);
          ppuStack_a8 = (undefined **)FUN_10564b804;
          ppuStack_a0 = &PTR_FUN_1108a3900;
          func_0x00010564c6c0();
          ppuVar7[1] = (undefined *)ppuStack_d8;
          *ppuVar7 = (undefined *)ppuStack_e0;
          ppuStack_e0 = (undefined **)0x0;
          ppuStack_d8 = (undefined **)0x0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (ppuVar7 + 2,apuStack_d0);
          ppuStack_98 = ppuVar7;
          func_0x00010564c520(*(undefined8 *)(*plVar12 + 0x10));
          func_0x00010564c3b8(ppuStack_a0);
          FUN_1056491a0(&ppuStack_e0);
          func_0x00010564b1bc(&ppuStack_b8);
        }
      }
    }
    param_3 = (long *)*param_3;
    if (param_3 != (long *)0x0) {
      (**(code **)(*param_3 + 0x10))(param_3,auStack_138);
    }
LAB_105648250:
    FUN_10564a548(auStack_138);
    func_0x00010564c730(uStack_48);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010002b838(&ppuStack_e0,&UNK_10f2e18f1);
    __ZNSt3__15mutex4lockEv(param_1 + 0x160);
    uVar5 = *(char *)(param_1 + 0x1a0) == '\x01';
    if (!(bool)uVar5) {
      *(undefined1 *)(param_1 + 0x1a0) = 1;
      FUN_10564997c(param_1,param_2,param_3,&ppuStack_e0,0);
LAB_105648244:
      func_0x00010564c4f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_e0);
      goto LAB_105648250;
    }
    if (*param_3 == 0) goto LAB_105648244;
    uVar1 = *(ulong *)(param_1 + 0x1b0);
    uVar11 = *(ulong *)(param_1 + 0x1b8);
    uVar5 = uVar1 == uVar11;
    if (uVar1 < uVar11) {
      func_0x00010564c5a4();
      lVar14 = uVar1 + 0x48;
      *(long *)(param_1 + 0x1b0) = lVar14;
LAB_105648240:
      *(long *)(param_1 + 0x1b0) = lVar14;
      goto LAB_105648244;
    }
    lVar14 = uVar1 - *(long *)(param_1 + 0x1a8);
    uVar1 = lVar14 / 0x48 + 1;
    if (uVar1 < 0x38e38e38e38e38f) {
      lStack_88 = param_1 + 0x1b8;
      uVar3 = (long)(uVar11 - *(long *)(param_1 + 0x1a8)) / 0x48;
      uVar11 = uVar3 * 2;
      if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
        uVar11 = uVar1;
      }
      if (0x1c71c71c71c71c6 < uVar3) {
        uVar11 = 0x38e38e38e38e38e;
      }
      if (uVar11 == 0) {
        ppuVar7 = (undefined **)0x0;
      }
      else {
        if (0x38e38e38e38e38e < uVar11) {
          func_0x000104bd35f4();
          goto LAB_10564828c;
        }
        ppuVar7 = (undefined **)(uVar11 * 0x48);
        __Znwm();
      }
      lVar14 = (long)ppuVar7 + lVar14;
      ppuStack_a8 = ppuVar7;
      ppuStack_a0 = (undefined **)lVar14;
      ppuStack_98 = (undefined **)lVar14;
      ppuStack_90 = ppuVar7 + uVar11 * 9;
      func_0x00010564c5a4();
      puVar8 = *(undefined8 **)(param_1 + 0x1a8);
      puVar2 = *(undefined8 **)(param_1 + 0x1b0);
      puVar13 = (undefined8 *)(lVar14 + (((long)puVar2 - (long)puVar8) / -0x48) * 0x48);
      puVar9 = puVar13;
      for (puVar10 = puVar8; puVar10 != puVar2; puVar10 = puVar10 + 9) {
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        puVar9[2] = puVar10[2];
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        uVar16 = puVar10[4];
        uVar15 = puVar10[3];
        uVar17 = puVar10[5];
        puVar9[6] = puVar10[6];
        puVar9[5] = uVar17;
        puVar9[4] = uVar16;
        puVar9[3] = uVar15;
        uVar15 = puVar10[7];
        puVar9[8] = puVar10[8];
        puVar9[7] = uVar15;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar9 = puVar9 + 9;
      }
      for (; uVar5 = puVar8 == puVar2, !(bool)uVar5; puVar8 = puVar8 + 9) {
        func_0x00010564ab74();
      }
      lVar14 = lVar14 + 0x48;
      ppuStack_a8 = *(undefined ***)(param_1 + 0x1a8);
      *(undefined8 **)(param_1 + 0x1a8) = puVar13;
      *(long *)(param_1 + 0x1b0) = lVar14;
      ppuStack_90 = *(undefined ***)(param_1 + 0x1b8);
      *(undefined ***)(param_1 + 0x1b8) = ppuVar7 + uVar11 * 9;
      ppuStack_a0 = ppuStack_a8;
      ppuStack_98 = ppuStack_a8;
      func_0x00010564ab98(&ppuStack_a8);
      goto LAB_105648240;
    }
  }
  FUN_10564ab68();
LAB_10564828c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x105648290);
  (*pcVar4)();
}



/* Entry: 10564833c; end: 105648953;  */

void FUN_10564833c(undefined4 *param_1,long param_2,long param_3,uint param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 *puVar16;
  byte bVar17;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined4 auStack_1f8 [2];
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  uint uStack_180;
  uint uStack_17c;
  long lStack_178;
  char cStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [32];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  byte bStack_a8;
  undefined1 auStack_a0 [16];
  byte bStack_90;
  undefined **ppuStack_70;
  char cStack_68;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    return;
  }
  puVar16 = param_1;
  __ZNSt3__16chrono12system_clock3nowEv();
  auStack_a0[0] = 0;
  cStack_68 = '\0';
  __ZNSt3__15mutex4lockEv(param_2 + 200);
  if (cStack_68 == *(char *)(param_2 + 0xc0)) {
    if (cStack_68 != '\0') {
      func_0x00010b48151c(auStack_a0,param_2 + 0x88);
    }
  }
  else if (cStack_68 == '\0') {
    func_0x00010564a6b8(auStack_a0,param_2 + 0x88);
  }
  else {
    FUN_10564a694(auStack_a0);
  }
  lVar6 = (long)puVar16 / 1000000;
  __ZNSt3__15mutex6unlockEv(param_2 + 200);
  auStack_118[0] = 0;
  bStack_a8 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  if (cStack_68 != '\x01') {
    bVar17 = 1;
    goto joined_r0x00010564848c;
  }
  uStack_158 = *(undefined8 *)(param_2 + 0x60);
  uStack_160 = *(undefined8 *)(param_2 + 0x58);
  if (*(long *)(param_2 + 0x60) != 0) {
    do {
      FUN_10564c330();
    } while (extraout_w10 != 0);
  }
  FUN_10564c79c(&uStack_180,&uStack_160,auStack_a0,param_3);
  if (cStack_168 == '\x01') {
    FUN_10564dc4c(auStack_1f8,*(undefined8 *)(param_2 + 0x38),&uStack_180,lVar6);
    func_0x00010564c640();
    FUN_10564a800(auStack_1f8);
    if (bStack_a8 == 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_130,&uStack_180);
    }
    else {
      FUN_10564daf8(auStack_1f8,*(undefined8 *)(param_2 + 0x38),&uStack_180);
      puVar2 = &UNK_10f2e19b2;
      if ((char)uStack_1c0 == '\0') {
        puVar2 = &UNK_10f2e19be;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_148,puVar2);
      func_0x00010564a568(auStack_1f8);
    }
    __ZNSt3__15mutex4lockEv(param_2 + 0x120);
    if (*(long *)(param_2 + 0x108) != *(long *)(param_2 + 0x110)) {
      FUN_105649624(param_2 + 0x108);
      FUN_10564962c(param_2);
    }
LAB_1056485ec:
    __ZNSt3__15mutex6unlockEv(param_2 + 0x120);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (&uStack_148,&UNK_10f2e19cc);
    if ((bStack_90 & 1) != 0) {
      __ZNSt3__15mutex4lockEv(param_2 + 0x120);
      uVar20 = *(ulong *)(param_2 + 0x110);
      func_0x00010564c750(uVar20 - *(long *)(param_2 + 0x108));
      if (4 < extraout_x8) {
        FUN_105649748(param_2 + 0x108);
        uVar20 = *(ulong *)(param_2 + 0x110);
      }
      ppuVar1 = &PTR_PTR_113372590;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar1 = ppuStack_70;
      }
      if (uVar20 < *(ulong *)(param_2 + 0x118)) {
        FUN_10564a8b8(uVar20,ppuVar1);
        lVar18 = uVar20 + 0x28;
        *(long *)(param_2 + 0x110) = lVar18;
      }
      else {
        func_0x00010564c750(uVar20 - *(long *)(param_2 + 0x108));
        lVar18 = param_2 + 0x108;
        FUN_10564a8c4(lVar18,extraout_x8_00 + 1);
        FUN_10564a99c(auStack_1f8,lVar18,
                      (*(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x108)) / 0x28,
                      param_2 + 0x118);
        FUN_10564a8b8(lStack_1e8,ppuVar1);
        lStack_1e8 = lStack_1e8 + 0x28;
        FUN_10564a90c(param_2 + 0x108,auStack_1f8);
        lVar18 = *(long *)(param_2 + 0x110);
        func_0x00010564aa34(auStack_1f8);
      }
      *(long *)(param_2 + 0x110) = lVar18;
      FUN_10564962c(param_2);
      goto LAB_1056485ec;
    }
  }
  func_0x0001001148fc(&uStack_180);
  func_0x000105645c74(&uStack_160);
  bVar17 = bStack_a8 ^ 1;
joined_r0x00010564848c:
  if ((param_4 != 0) && ((bVar17 & 1) != 0)) {
    iVar15 = 0xf2e19d7;
    func_0x00010564c654(&UNK_10f2e19d7,0x27);
    if (iVar15 != 0) {
      FUN_10564db54(&uStack_180,*(undefined8 *)(param_2 + 0x38));
      for (lVar18 = CONCAT44(uStack_17c,uStack_180); lVar18 != lStack_178; lVar18 = lVar18 + 0x38) {
        FUN_10564dc4c(auStack_1f8,*(undefined8 *)(param_2 + 0x38),lVar18,lVar6);
        func_0x00010564c640();
        FUN_10564a800(auStack_1f8);
        if (bStack_a8 == 1) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_130,lVar18);
          break;
        }
      }
      func_0x00010564a4b8(&uStack_180);
    }
  }
  if ((bStack_a8 & 1) == 0) {
    if ((param_4 & 1) == 0) {
      func_0x00010564c590(uStack_138._7_1_);
      if (extraout_x8_01 != 0) {
        uVar19 = *(undefined8 *)(param_2 + 0x78);
        func_0x00010002b838(auStack_210,(&PTR_DAT_1108a3518)[*(int *)(param_3 + 0x30)]);
        func_0x00010564c694();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_240,&uStack_148);
        FUN_1056521c4(uVar19,auStack_210,auStack_228,auStack_240,1);
        func_0x00010564c49c();
        func_0x00010564c4a4();
        func_0x00010564c69c();
      }
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  else {
    lVar18 = *(long *)(param_2 + 0x48);
    if (lVar18 != 0) {
      uVar5 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x30);
      uVar4 = *(undefined4 *)(param_3 + 0x34);
      func_0x00010564c770();
      func_0x00010002b838(auStack_1f8);
      uStack_180 = uStack_180 & 0xffffff00;
      uStack_17c = uStack_17c & 0xffffff00;
      FUN_1056502a4(lVar18,uVar5,uVar3,uVar4,param_3,auStack_118,lVar6,auStack_1f8,&uStack_180,
                    auStack_100);
      func_0x00010564c6c8();
    }
    uVar14 = uStack_b8;
    uVar13 = uStack_c0;
    uVar12 = uStack_c8;
    uVar11 = uStack_d0;
    uVar10 = uStack_d8;
    uVar9 = uStack_e0;
    uVar8 = uStack_120;
    uVar7 = uStack_128;
    uVar19 = uStack_130;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_258 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    auStack_1f8[0] = uStack_b0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_1d0 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)(param_1 + 2) = uVar9;
    uStack_1b8 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    *param_1 = uStack_b0;
    *(undefined8 *)(param_1 + 6) = uVar11;
    uStack_1f0 = 0;
    lStack_1e8 = 0;
    *(undefined8 *)(param_1 + 0xc) = uVar14;
    *(undefined8 *)(param_1 + 10) = uVar13;
    *(undefined8 *)(param_1 + 8) = uVar12;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    *(undefined8 *)(param_1 + 0x12) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    *(undefined8 *)(param_1 + 0xe) = uVar19;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b0 = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    func_0x00010564aa7c(auStack_1f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_270);
    func_0x000100100fec(&uStack_258);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_148);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
  FUN_10564a800(auStack_118);
  FUN_10564a304(auStack_a0);
  return;
}



/* Entry: 105648954; end: 105648b1b;  */

void FUN_105648954(ulong param_1)

{
  ulong uVar1;
  int extraout_w10;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_58 [24];
  
  func_0x00010564c678(param_1,&DAT_10f2c7057);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10564db54(&lStack_b0);
    if (lStack_b0 != lStack_a8) {
      lVar3 = lStack_b0;
      do {
        if (lVar3 == lStack_a8) {
          func_0x00010564c65c();
          goto LAB_105648a94;
        }
        puVar2 = &UNK_10f2e18fc;
        if (*(long *)(lVar3 + 0x30) < 1) break;
        uVar1 = param_1;
        FUN_105648b1c(param_1,lVar3);
        lVar3 = lVar3 + 0x38;
        puVar2 = &UNK_10f2e190a;
      } while ((uVar1 & 1) == 0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(auStack_58,puVar2)
      ;
    }
    func_0x00010564c65c();
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x160);
  if ((*(byte *)(param_1 + 0x1a0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    func_0x00010564c70c(&lStack_b0);
    FUN_10564b530(&uStack_d0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    uStack_c0 = uStack_d0;
    lStack_b8 = lStack_c8;
    if (lStack_c8 != 0) {
      do {
        func_0x00010564c334();
      } while (extraout_w10 != 0);
    }
    func_0x00010564b1e0(&uStack_d0);
    plVar4 = *(long **)(param_1 + 0x18);
    FUN_105648f94(&uStack_e0,uStack_d0,lStack_c8,auStack_58,param_1 + 0x78);
    lStack_c8 = lStack_d8;
    uStack_d0 = uStack_e0;
    uStack_e0 = 0;
    lStack_d8 = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,&lStack_b0,&uStack_d0);
    func_0x000105647334(&uStack_d0);
    FUN_10564b7e0(&uStack_e0);
    func_0x00010564b1bc(&uStack_c0);
    func_0x00010b482494(&lStack_b0);
  }
  func_0x00010564c4f8();
LAB_105648a94:
  func_0x00010564c478();
  return;
}



/* Entry: 105648b1c; end: 105648b9f;  */

bool FUN_105648b1c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_60 [48];
  ulong uStack_30;
  char cStack_28;
  
  func_0x00010564c43c();
  FUN_10564daf8(auStack_60,*(undefined8 *)(param_1 + 0x38));
  if ((cStack_28 == '\x01') && (0 < (long)uStack_30)) {
    uVar2 = *(ulong *)(unaff_x20 + 0x38);
    FUN_10564dd40(uVar2);
    bVar1 = uVar2 < uStack_30;
  }
  else {
    bVar1 = false;
  }
  func_0x00010564a568(auStack_60);
  return bVar1;
}



/* Entry: 105648ba0; end: 105648f93;  */

void FUN_105648ba0(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_d8 [24];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  char cStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  long lStack_78;
  char cStack_68;
  
  lVar7 = param_2;
  func_0x00010564c61c();
  __ZNSt3__15mutex4lockEv(lVar7 + 200);
  if ((*(char *)(param_2 + 0xc0) == '\x01') && ((*(byte *)(param_2 + 0x98) & 1) != 0)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x00010564aaa4();
      *(ulong *)(param_1 + 0x50) = uVar2;
    }
    func_0x00010b481168();
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 200);
  __ZNSt3__15mutex4lockEv(param_2 + 0x120);
  lVar5 = *(long *)(param_2 + 0x110);
  for (lVar7 = *(long *)(param_2 + 0x108); lVar7 != lVar5; lVar7 = lVar7 + 0x28) {
    func_0x000100627dec(param_1 + 0x30,0x10564aaa4);
    func_0x00010b481168();
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x120);
  lVar7 = *(long *)(param_2 + 0x38);
  if ((lVar7 != 0) && (lVar5 = *(long *)(param_2 + 0x48), lVar5 != 0)) {
    FUN_10564db54(&lStack_80,lVar7);
    lVar9 = lStack_80;
    if (lStack_80 != lStack_78) {
      for (; lVar9 != lStack_78; lVar9 = lVar9 + 0x38) {
        lVar3 = param_1 + 0x18;
        func_0x000100627dec(lVar3,0x10564a324);
        *(int *)(lVar3 + 0x30) = (int)*(undefined8 *)(lVar9 + 0x18);
        *(int *)(lVar3 + 0x28) = (int)*(undefined8 *)(lVar9 + 0x28);
        *(int *)(lVar3 + 0x2c) = (int)*(undefined8 *)(lVar9 + 0x20);
        lVar4 = lVar7;
        FUN_10564dd40(lVar7,lVar9);
        *(int *)(lVar3 + 0x34) = (int)lVar4;
        FUN_105650818(&puStack_b8,lVar5,lVar9,1000);
        puVar1 = puStack_b0;
        for (puVar10 = puStack_b8; puVar10 != puVar1; puVar10 = puVar10 + 0x78) {
          if (puVar10[0x5c] == '\x01') {
            lVar4 = lVar3 + 0x10;
            func_0x000100627dec(lVar4,0x10564a378);
            *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
            uVar2 = *(ulong *)(lVar4 + 0x38);
            if (uVar2 == 0) {
              uVar2 = *(ulong *)(lVar4 + 8);
              if ((uVar2 & 1) != 0) {
                uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
              }
              func_0x00010564a3b4();
              *(ulong *)(lVar4 + 0x38) = uVar2;
            }
            *(undefined8 *)(uVar2 + 0x10) = *(undefined8 *)(puVar10 + 0x28);
            *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(puVar10 + 0x58);
            puVar8 = (undefined8 *)(puVar10 + 0x40);
            while (puVar8 = (undefined8 *)*puVar8, puVar8 != (undefined8 *)0x0) {
              func_0x000105647ed0(lVar4 + 0x18,puVar8 + 2);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            }
          }
        }
        func_0x00010564a3f8(&puStack_b8);
      }
    }
    func_0x00010564a4b8(&lStack_80);
  }
  FUN_1056497ac(&lStack_80,param_2 + 0x58,&UNK_10f2e0182,0x10,1);
  if (cStack_68 == '\x01') {
    puStack_b8 = &DAT_10f2e1a10;
    lVar7 = param_1;
    FUN_105649824(param_1);
    lVar7 = lVar7 + 0x10;
    FUN_105649868(lVar7,&DAT_10f2e19ff);
    FUN_105649954(lVar7 + 0x10,&puStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010564c694();
    FUN_1056523a0(uVar6,auStack_98,1);
    func_0x00010564c4a4();
  }
  FUN_1056497ac(&puStack_b8,param_2 + 0x58,&UNK_10f2e018e,0x18,1);
  if (cStack_a0 == '\x01') {
    puStack_c0 = &DAT_10f2e1a3d;
    FUN_105649824(param_1);
    param_1 = param_1 + 0x10;
    FUN_105649868(param_1,&UNK_10f2e1a28);
    FUN_105649954(param_1 + 0x10,&puStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010002b838(auStack_d8,"google");
    FUN_1056523a0(uVar6,auStack_d8,1);
    func_0x00010564c4b8();
  }
  func_0x00010564c5b4();
  func_0x0001001148fc(&lStack_80);
  return;
}



/* Entry: 105648f94; end: 10564905b;  */

void FUN_105648f94(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1108a3840;
  puVar1[3] = &PTR_DAT_1108a3890;
  uVar5 = param_4[1];
  uVar4 = *param_4;
  uVar2 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uVar3 = *param_5;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010564c5ec();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  func_0x00010564c500();
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10564905c; end: 10564919f;  */

void FUN_10564905c(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  long *plVar1;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [88];
  
  func_0x00010564c744();
  __ZNSt3__15mutex4lockEv(param_1 + 0x160);
  if ((*(byte *)(unaff_x19 + 0x1a0) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x1a0) = 1;
    func_0x00010564c70c(auStack_98);
    FUN_10564b530(&uStack_e8,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
    uStack_a8 = uStack_e8;
    lStack_a0 = lStack_e0;
    if (lStack_e0 != 0) {
      do {
        func_0x00010564c334();
      } while (extraout_w10 != 0);
    }
    func_0x00010564b1e0(&uStack_e8);
    plVar1 = *(long **)(unaff_x19 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_e8);
    FUN_105648f94(&uStack_d0,uStack_e8,lStack_e0,&uStack_e8,unaff_x19 + 0x78);
    uStack_b8 = uStack_c8;
    uStack_c0 = uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_98,&uStack_c0);
    func_0x000105647334(&uStack_c0);
    FUN_10564b7e0(&uStack_d0);
    func_0x00010564c388();
    func_0x00010564b1bc(&uStack_a8);
    func_0x00010b482494(auStack_98);
  }
  func_0x00010564c4f8();
  return;
}



/* Entry: 1056491a0; end: 1056491c7;  */

undefined8 FUN_1056491a0(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x00010564c4c8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1056491c8; end: 105649623;  */

long FUN_1056491c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  uint uStack_190;
  int iStack_18c;
  int iStack_188;
  undefined8 uStack_108;
  uint uStack_100;
  char cStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    return 0;
  }
  uStack_f0 = param_4;
  FUN_1056503f0(lVar1,param_3,&uStack_f0,param_5);
  FUN_105650538(&uStack_190,*(undefined8 *)(param_1 + 0x48),param_3);
  if (cStack_f8 != '\x01') goto LAB_1056494fc;
  uVar2 = (ulong)uStack_190;
  if (uStack_190 < 0x16) {
    func_0x00010b51f160();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58,uVar2);
    func_0x00010002b838(auStack_70,&UNK_10f2e1b1f);
    func_0x00010564c664(auStack_1a8);
    func_0x00010564c494();
    func_0x00010564c478();
  }
  else {
    func_0x00010564c670(uVar2,"unknown");
  }
  __ZNSt3__19to_stringEx(auStack_1c0,uStack_108);
  if (iStack_18c == 3) {
    pcVar5 = "messaging";
  }
  else if (iStack_18c == 0x13) {
    pcVar5 = "memories";
  }
  else if (iStack_18c == 0x22) {
    pcVar5 = "pre_upload";
  }
  else if (iStack_18c == 0x28) {
    pcVar5 = "spotlight";
  }
  else {
    pcVar5 = (&PTR_DAT_1108a3518)[iStack_18c];
  }
  func_0x00010002b838(auStack_1d8,pcVar5);
  func_0x00010002b838(auStack_1f0,(&PTR_DAT_1108a34c0)[iStack_188]);
  uVar2 = (ulong)uStack_100;
  if (uStack_100 < 4) {
    func_0x00010b483ea4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58,uVar2);
    func_0x00010002b838(auStack_70,&UNK_10f2e1b83);
    func_0x00010564c664(auStack_208);
    func_0x00010564c494();
    func_0x00010564c478();
  }
  else {
    func_0x00010564c5c4(uVar2,"unknown");
  }
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  if ((uStack_f0 >> 0x20 & 1) == 0) {
    func_0x00010564c678(uStack_f0,"unknown");
LAB_1056493dc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70,auStack_1a8)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,auStack_1c0)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a0,auStack_1d8)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,auStack_1f0)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d0,auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,auStack_208)
    ;
    FUN_105652664(uVar6,auStack_70,auStack_88,auStack_a0,auStack_b8,auStack_d0,auStack_e8,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  }
  else {
    if ((int)uStack_f0 != 200) {
      __ZNSt3__19to_stringEi(auStack_58);
      goto LAB_1056493dc;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58,auStack_1a8)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70,auStack_1c0)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,auStack_1d8)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a0,auStack_1f0)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,auStack_208)
    ;
    FUN_10565259c(uVar6,auStack_58,auStack_70,auStack_88,auStack_a0,auStack_b8,1);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x00010564c554();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  func_0x00010564c494();
  func_0x00010564c478();
  func_0x00010564c388();
  func_0x00010564c704();
  func_0x00010564c5bc();
  func_0x00010564c54c();
  func_0x00010564c508();
  if (((uStack_f0._4_1_ == '\x01') && (399 < (int)uStack_f0)) && (*(long *)(param_1 + 0x48) != 0)) {
    puVar3 = &UNK_10f2e198d;
    func_0x0001003ba264(&UNK_10f2e198d,0x24,3);
    if (0 < (long)puVar3) {
      lVar4 = *(long *)(param_1 + 0x48);
      FUN_105650f20(lVar4,uStack_108);
      if ((long)puVar3 <= lVar4) {
        func_0x00010564c678();
        FUN_10564905c(param_1,auStack_58);
        func_0x00010564c478();
      }
    }
  }
LAB_1056494fc:
  FUN_10564a63c(&uStack_190);
  return lVar1;
}



/* Entry: 105649624; end: 10564962b;  */

void FUN_105649624(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x00010b480eb4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564962c; end: 105649747;  */

void FUN_10564962c(long param_1)

{
  undefined8 ***pppuVar1;
  long lVar2;
  ulong uVar3;
  undefined4 extraout_w8;
  long lVar4;
  undefined4 auStack_60 [2];
  undefined8 **appuStack_58 [2];
  char cStack_41;
  ulong auStack_40 [2];
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    func_0x00010564c5c4(param_1,&UNK_10f2e1b0e);
    func_0x00010b4912d0(auStack_40,lVar4,appuStack_58,0);
    func_0x00010564c388();
    if (auStack_40[0] != 0) {
      uVar3 = auStack_40[0];
      func_0x00010564c750(*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108));
      func_0x00010b4928b4();
      if ((uVar3 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x110);
        for (lVar4 = *(long *)(param_1 + 0x108); lVar4 != lVar2; lVar4 = lVar4 + 0x28) {
          func_0x00010b4d1804(appuStack_58,lVar4);
          func_0x00010564c590(cStack_41);
          uVar3 = auStack_40[0];
          auStack_60[0] = extraout_w8;
          func_0x00010b4928b4(auStack_40[0],auStack_60,4);
          if ((int)uVar3 == 0) {
LAB_105649708:
            func_0x00010564c388();
            break;
          }
          pppuVar1 = (undefined8 ***)appuStack_58[0];
          if (-1 < cStack_41) {
            pppuVar1 = appuStack_58;
          }
          uVar3 = auStack_40[0];
          func_0x00010b4928b4(auStack_40[0],pppuVar1,auStack_60[0]);
          if ((uVar3 & 1) == 0) goto LAB_105649708;
          func_0x00010564c388();
        }
      }
      func_0x00010b4929dc(auStack_40[0]);
    }
    func_0x000105640438(auStack_40);
  }
  return;
}



/* Entry: 105649748; end: 1056497ab;  */

void FUN_105649748(long param_1,long param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = *(long *)(param_1 + 8);
    for (; param_3 != lVar1; param_3 = param_3 + 0x28) {
      FUN_10564a854(param_2,param_3);
      param_2 = param_2 + 0x28;
    }
    func_0x00010564c43c(param_1,param_2);
    lVar1 = *(long *)(param_1 + 8);
    while (lVar1 != unaff_x19) {
      lVar1 = lVar1 + -0x28;
      func_0x00010b480eb4();
    }
    *(long *)(unaff_x20 + 8) = unaff_x19;
    return;
  }
  return;
}



/* Entry: 1056497ac; end: 105649823;  */

void FUN_1056497ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 *apuStack_40 [2];
  
  func_0x0001005d1638(apuStack_40);
  func_0x00010002b838(auStack_58,param_3);
  (**(code **)*apuStack_40[0])(param_1,apuStack_40[0],auStack_58);
  func_0x00010564c388();
  func_0x0001005d8154(apuStack_40);
  return;
}



/* Entry: 105649824; end: 105649867;  */

void FUN_105649824(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010564aaf4();
    *(ulong *)(param_1 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 105649868; end: 105649953;  */

int * FUN_105649868(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int *unaff_x19;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x00010564c744();
  FUN_10564b8cc(param_2);
  func_0x00010564c77c();
  piVar1 = unaff_x19;
  func_0x00010564c368();
  if (piVar1 == (int *)0x0) {
    piVar1 = unaff_x19;
    func_0x00010055e6e8();
    if ((int)piVar1 != 0) {
      FUN_10564b8cc();
      func_0x00010564c77c();
      func_0x00010564c368();
    }
    piVar1 = unaff_x19;
    func_0x00010055df10();
    uVar2 = *(undefined8 *)(unaff_x19 + 6);
    func_0x00010002b838(auStack_58);
    FUN_10564b8a4(piVar1 + 2,uVar2,auStack_58);
    func_0x00010564c388();
    func_0x00010b47fa60(piVar1 + 8,*(undefined8 *)(unaff_x19 + 6));
    func_0x00010055e950();
    *unaff_x19 = *unaff_x19 + 1;
  }
  return piVar1 + 8;
}



/* Entry: 105649954; end: 10564997b;  */

long FUN_105649954(void)

{
  long alStack_30 [4];
  
  func_0x000104c60f48(alStack_30);
  return alStack_30[0] + 0x20;
}



/* Entry: 10564997c; end: 105649b8f;  */

void FUN_10564997c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar9;
  int extraout_w11;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined1 auStack_108 [88];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010564c70c(auStack_108);
  FUN_10564b530(&puStack_98,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  puVar5 = puStack_90;
  puVar4 = puStack_98;
  puStack_118 = puStack_98;
  lStack_110 = (long)puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    do {
      func_0x00010564c334();
    } while (extraout_w10 != 0);
  }
  func_0x00010564b1e0(&puStack_98);
  puVar6 = (undefined8 *)0xa0;
  __Znwm();
  plVar10 = puVar6 + 1;
  *plVar10 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1108a3928;
  func_0x00010564b190(&puStack_98,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,param_4);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  puVar6[3] = &PTR_DAT_1108a3978;
  puVar6[4] = puVar4;
  puVar6[5] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      func_0x00010564c5ec();
      uVar8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar3 = uStack_a0;
  lVar9 = param_3[1];
  uVar11 = *param_3;
  puVar6[7] = param_3[1];
  puVar6[6] = uVar11;
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6[9] = puStack_90;
  puVar6[8] = puStack_98;
  puVar6[10] = uStack_88;
  puStack_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  puStack_98 = (undefined8 *)0x0;
  puVar6[0xc] = uStack_78;
  puVar6[0xb] = uStack_80;
  puVar6[0xe] = uStack_68;
  puVar6[0xd] = uStack_70;
  puVar6[0x10] = uStack_a8;
  puVar6[0xf] = uStack_b0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  puVar6[0x11] = uVar3;
  puVar6[0x12] = uVar8;
  *(undefined4 *)(puVar6 + 0x13) = param_5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_98);
  plVar7 = *(long **)(param_1 + 0x18);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_128 = puVar6 + 3;
  puStack_120 = puVar6;
  puStack_98 = puVar6 + 3;
  puStack_90 = puVar6;
  (**(code **)(*plVar7 + 0x10))(plVar7,auStack_108,&puStack_98);
  func_0x000105647334(&puStack_98);
  FUN_10564c178(&puStack_128);
  func_0x00010564b1bc(&puStack_118);
  func_0x00010b482494(auStack_108);
  return;
}



/* Entry: 105649b90; end: 105649c07;  */

undefined *** FUN_105649b90(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long **pplVar4;
  undefined ***pppuVar5;
  undefined1 *extraout_x8;
  ulong unaff_x19;
  undefined8 uVar6;
  undefined ***pppuVar7;
  long unaff_x20;
  undefined ***pppuVar8;
  long *plVar9;
  undefined1 auStack_188 [24];
  long **pplStack_170;
  undefined ***pppuStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  long lStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  long *plStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long **pplStack_d8;
  undefined8 uStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined ***apppuStack_80 [2];
  long *plStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_28;
  
  func_0x00010564c43c();
  __ZNSt3__15mutex4lockEv(param_1 + 200);
  uVar1 = *(char *)(unaff_x20 + 0xc0) == '\x01';
  if ((bool)uVar1) {
    func_0x00010b48151c(unaff_x20 + 0x88);
  }
  else {
    func_0x00010564a6b8(unaff_x20 + 0x88);
  }
  __ZNSt3__15mutex6unlockEv(unaff_x20 + 200);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x28);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined ***)0x0;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = unaff_x19;
  func_0x00010b4813b0();
  func_0x000100291d50(&plStack_70,uVar3);
  func_0x00010b4d1758();
  if ((unaff_x19 & 1) == 0) {
    pppuVar7 = (undefined ***)0x0;
  }
  else {
    uVar6 = *puVar2;
    func_0x00010002b838(&uStack_58,&UNK_10f2e1d0c);
    func_0x00010b4912d0(apppuStack_80,uVar6,&uStack_58,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
    if (apppuStack_80[0] == (undefined ***)0x0) {
      pppuVar7 = (undefined ***)0x0;
    }
    else {
      uStack_58 = 0x10564d548;
      ppuStack_50 = &PTR_DAT_1108a39e8;
      pppuVar7 = apppuStack_80[0];
      puStack_48 = (undefined1 *)apppuStack_80;
      func_0x00010b4928b4(apppuStack_80[0],plStack_70,
                          CONCAT44(uStack_64,uStack_68) - (long)plStack_70);
      func_0x0001005ed4a0(&uStack_58);
    }
    func_0x000105640438(apppuStack_80);
  }
  func_0x000100100fec();
  func_0x00010564d5b8(uStack_28);
  if ((bool)uVar1) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  func_0x000105640438(apppuStack_80);
  pplVar4 = &plStack_70;
  func_0x000100100fec();
  func_0x00010564d5a0();
  pcStack_88 = FUN_10564d2fc;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR_DAT_110ceae08;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  plStack_130 = (long *)0x0;
  uStack_128 = 0;
  plVar9 = *pplVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010002b838(&uStack_e8,&UNK_10f2e1d0c);
  func_0x00010b491b9c(plVar9,&uStack_e8);
  func_0x00010564d5a8();
  if (((ulong)plVar9 & 1) != 0) {
    plVar9 = *pplVar4;
    func_0x00010002b838();
    func_0x00010b4911fc(&lStack_148,plVar9,&uStack_e8);
    pplVar4 = &plStack_130;
    FUN_105640184(&plStack_130,&lStack_148);
    FUN_105640484(&lStack_148);
    func_0x00010564d5a8();
    if (plStack_130 != (long *)0x0) {
      uStack_e8 = 0x10564d56c;
      ppuStack_e0 = &PTR_DAT_1108a3a00;
      pplStack_d8 = pplVar4;
      func_0x000100291d50(&lStack_148,*(undefined8 *)(*plStack_130 + 8));
      plVar9 = plStack_130;
      func_0x00010b4925bc(plStack_130,lStack_148,CONCAT44(uStack_13c,iStack_140) - lStack_148);
      if (((ulong)plVar9 & 1) == 0) {
LAB_10564d430:
        *extraout_x8 = 0;
        extraout_x8[0x38] = 0;
      }
      else {
        pppuVar7 = &ppuStack_120;
        func_0x00010006369c(pppuVar7,lStack_148,iStack_140 - (int)lStack_148);
        if (((ulong)pppuVar7 & 1) == 0) goto LAB_10564d430;
        FUN_10564ac44(extraout_x8,&ppuStack_120);
        extraout_x8[0x38] = 1;
      }
      func_0x000100100fec(&lStack_148);
      func_0x0001005ed4a0(&uStack_e8);
      goto LAB_10564d448;
    }
  }
  *extraout_x8 = 0;
  extraout_x8[0x38] = 0;
LAB_10564d448:
  FUN_105640484(&plStack_130);
  pppuVar7 = &ppuStack_120;
  func_0x00010b48123c();
  func_0x00010564d5b8(uStack_b8);
  if ((bool)uVar1) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  FUN_105640484(&plStack_130);
  pppuVar5 = &ppuStack_120;
  func_0x00010b48123c();
  func_0x00010564d5a0();
  pcStack_158 = FUN_10564d4dc;
  pppuVar8 = (undefined ***)*pppuVar5;
  pplStack_170 = pplVar4;
  pppuStack_168 = pppuVar7;
  ppuStack_160 = &puStack_90;
  func_0x00010564d590();
  func_0x00010b491b9c(pppuVar8,auStack_188);
  pppuVar7 = pppuVar8;
  func_0x00010564d5b0();
  if ((int)pppuVar8 != 0) {
    pppuVar7 = (undefined ***)*pppuVar5;
    func_0x00010564d590();
    func_0x00010b491414(pppuVar7,auStack_188);
    func_0x00010564d5b0();
  }
  return pppuVar7;
}



/* Entry: 105649c08; end: 105649edb;  */

void FUN_105649c08(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [23];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [24];
  long alStack_98 [3];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10564dea8();
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_105651080();
    }
    lStack_80 = 0;
    lStack_78 = 0;
    uStack_70 = 0;
    FUN_10564c19c(alStack_98,param_2 + 0x18);
    while (lVar5 = alStack_98[0], alStack_98[0] != 0) {
      uVar8 = *(ulong *)(alStack_98[0] + 0x20);
      puVar10 = (ulong *)(alStack_98[0] + 0x20);
      if ((uVar8 & 1) != 0) {
        puVar10 = (ulong *)(uVar8 + 7);
      }
      puVar1 = puVar10 + *(int *)(alStack_98[0] + 0x28);
      for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        uVar11 = *puVar10;
        iVar3 = *(int *)(uVar11 + 0x30);
        uVar4 = *(undefined4 *)(uVar11 + 0x34);
        FUN_105649edc(auStack_b0,*(undefined4 *)(lVar5 + 8),uVar4,iVar3);
        uVar8 = *(ulong *)(param_1 + 0x38);
        func_0x00010564da60(uVar8,auStack_b0,*(undefined4 *)(lVar5 + 8),uVar4,(long)iVar3,
                            *(undefined4 *)(uVar11 + 0x38));
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar11 + 0x10);
          puVar2 = (ulong *)(uVar11 + 0x10);
          if ((uVar8 & 1) != 0) {
            puVar2 = (ulong *)(uVar8 + 7);
          }
          for (lVar12 = (long)*(int *)(uVar11 + 0x18) << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
            uVar8 = *puVar2;
            if (*(int *)(uVar8 + 0x50) == 2) {
              puVar7 = (ulong *)(*(long *)(uVar8 + 0x48) + 0x28);
LAB_105649d20:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_c8,*puVar7 & 0xfffffffffffffffc);
            }
            else {
              if (*(int *)(uVar8 + 0x50) == 1) {
                puVar7 = (ulong *)(uVar8 + 0x48);
                goto LAB_105649d20;
              }
              func_0x00010002b838(auStack_c8,"");
            }
            func_0x00010564c590(uStack_b1);
            if (extraout_x8 != 0) {
              if ((*(byte *)(uVar8 + 0x10) & 1) == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined8 *)(*(long *)(uVar8 + 0x38) + 0x10);
              }
              uVar6 = uVar8;
              func_0x00010b47ec80(uVar8);
              func_0x000100291d50(&uStack_e0,uVar6);
              func_0x00010b4d1758(uVar8,uStack_e0,(int)uStack_d8 - (int)uStack_e0);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_148,auStack_c8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_130,auStack_b0);
              uStack_108 = uStack_d8;
              uStack_110 = uStack_e0;
              uStack_100 = uStack_d0;
              uStack_e0 = 0;
              uStack_d8 = 0;
              uStack_d0 = 0;
              uStack_118 = uVar9;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_f8,*(ulong *)(uVar11 + 0x28) & 0xfffffffffffffffc);
              func_0x00010564ac90(&lStack_80,auStack_148);
              func_0x00010564b0b8(auStack_148);
              func_0x000100100fec(&uStack_e0);
            }
            func_0x00010564c6c8();
            puVar2 = puVar2 + 1;
          }
        }
        func_0x00010564c56c();
      }
      func_0x00010063bf60(alStack_98);
    }
    if (lStack_80 != lStack_78) {
      FUN_10564dbb4(*(undefined8 *)(param_1 + 0x38),&lStack_80);
    }
    func_0x00010564b0e4(&lStack_80);
  }
  return;
}



/* Entry: 105649edc; end: 105649f8b;  */

void FUN_105649edc(undefined8 param_1)

{
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [256];
  
  FUN_1054901a8(auStack_148);
  FUN_10549023c(auStack_148,&UNK_10f2e1ca7);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  FUN_10549023c();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  FUN_10549023c();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  FUN_105491b64(param_1,auStack_140);
  FUN_105490284(auStack_148);
  return;
}



/* Entry: 105649f8c; end: 10564a233;  */

void FUN_105649f8c(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long extraout_x8;
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  char cStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  char cStack_d0;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x160);
  lVar1 = *(long *)(param_1 + 0x1a8);
  uStack_78 = *(undefined8 *)(param_1 + 0x1b8);
  lVar3 = *(long *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  lStack_88 = lVar1;
  lStack_80 = lVar3;
  FUN_10564a234(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x160);
  if (lVar1 != lVar3) {
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0x48) {
      plVar2 = *(long **)(lVar1 + 0x38);
      if (plVar2 != (long *)0x0) {
        func_0x00010564c590(*(undefined1 *)(param_2 + 0x17));
        if (extraout_x8 == 0) {
          FUN_10564833c(&uStack_120,param_1,lVar1,1);
          plVar2 = *(long **)(lVar1 + 0x38);
          if (cStack_d0 == '\x01') {
            func_0x00010564c6d8(*(undefined8 *)(*plVar2 + 0x10));
          }
          else {
            func_0x00010564c528(&uStack_178);
            func_0x00010002b838();
            FUN_10564b174(&uStack_198,&UNK_10f2e1a87);
            uStack_150 = uStack_168;
            uStack_158 = uStack_170;
            uStack_160 = uStack_178;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_178 = 0;
            uStack_148 = 0;
            uStack_140 = uStack_140 & 0xffffffffffffff00;
            uStack_128 = cStack_180 == '\x01';
            if ((bool)uStack_128) {
              uStack_138 = uStack_190;
              uStack_140 = uStack_198;
              uStack_130 = uStack_188;
              uStack_190 = 0;
              uStack_188 = 0;
              uStack_198 = 0;
            }
            (**(code **)(*plVar2 + 0x18))(plVar2,&uStack_160);
            FUN_1052a03ac(&uStack_160);
            func_0x0001001148fc(&uStack_198);
            func_0x00010564c5bc();
          }
          FUN_10564a548(&uStack_120);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&uStack_a0,param_4);
          func_0x0001002a8308(&uStack_c0,param_2);
          uStack_110 = uStack_90;
          uStack_118 = uStack_98;
          uStack_120 = uStack_a0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_a0 = 0;
          uStack_100 = uStack_100 & 0xffffffffffffff00;
          uStack_e8 = cStack_a8 == '\x01';
          if ((bool)uStack_e8) {
            uStack_f8 = uStack_b8;
            uStack_100 = uStack_c0;
            uStack_f0 = uStack_b0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_c0 = 0;
          }
          lStack_108 = (long)param_3;
          func_0x00010564c6d8(*(undefined8 *)(*plVar2 + 0x18));
          FUN_1052a03ac(&uStack_120);
          func_0x0001001148fc(&uStack_c0);
          func_0x00010564c554();
        }
      }
    }
  }
  func_0x00010564a29c(&lStack_88);
  return;
}



/* Entry: 10564a234; end: 10564a303;  */

void FUN_10564a234(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x48;
    FUN_10564ab74();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10564a304; end: 10564a323;  */

void FUN_10564a304(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010b48123c();
  }
  return;
}



/* Entry: 10564a324; end: 10564a44b;  */

void FUN_10564a324(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_DAT_110ceaa00;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10564a44c; end: 10564a453;  */

void FUN_10564a44c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    func_0x00010564a488();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564a454; end: 10564a50b;  */

void FUN_10564a454(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    func_0x00010564a488();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564a50c; end: 10564a513;  */

void FUN_10564a50c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564a514; end: 10564a547;  */

void FUN_10564a514(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564a548; end: 10564a587;  */

void FUN_10564a548(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010564aa7c();
  }
  return;
}



/* Entry: 10564a588; end: 10564a61f;  */

void FUN_10564a588(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_x8;
  int unaff_w19;
  
  lVar1 = param_3;
  func_0x00010564c43c();
  func_0x00010564c590(*(undefined1 *)(param_2 + 0x17));
  uVar2 = (ulong)*(char *)(lVar1 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(param_3 + 8);
  }
  if ((uVar2 < extraout_x8) && (FUN_10564a620(), unaff_w19 == 0)) {
    func_0x000107c60c98();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 10564a620; end: 10564a63b;  */

void FUN_10564a620(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcaa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm_110346088)
            ();
  return;
}



/* Entry: 10564a63c; end: 10564a65b;  */

void FUN_10564a63c(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_10564a65c();
  }
  return;
}



/* Entry: 10564a65c; end: 10564a693;  */

long FUN_10564a65c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  func_0x00010564c6b8();
  return param_1;
}



/* Entry: 10564a694; end: 10564a6db;  */

void FUN_10564a694(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010b48123c();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10564a6dc; end: 10564a6ff;  */

undefined8 FUN_10564a6dc(undefined8 param_1)

{
  FUN_10564a700();
  return param_1;
}



/* Entry: 10564a700; end: 10564a727;  */

void FUN_10564a700(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 != *(char *)(param_2 + 0x70)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x70) == '\x01') {
        FUN_10564a7bc();
        *(undefined1 *)(param_1 + 0x70) = 0;
      }
      return;
    }
    FUN_10564a7e8();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010564c43c();
    func_0x000100066230();
    func_0x000100066230(unaff_x20 + 0x18,unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    func_0x00010065acbc(unaff_x20 + 0x38,unaff_x19 + 0x38);
    func_0x000100066230(unaff_x20 + 0x50,unaff_x19 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
    return;
  }
  return;
}



/* Entry: 10564a728; end: 10564a77b;  */

void FUN_10564a728(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c();
  func_0x000100066230();
  func_0x000100066230(unaff_x20 + 0x18,unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  func_0x00010065acbc(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x000100066230(unaff_x20 + 0x50,unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  return;
}



/* Entry: 10564a77c; end: 10564a7bb;  */

void FUN_10564a77c(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10564a7bc();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 10564a7bc; end: 10564a7e7;  */

void FUN_10564a7bc(void)

{
  long unaff_x19;
  
  func_0x00010564c6f0();
  func_0x000100100fec(unaff_x19 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10564a7e8; end: 10564a7ff;  */

void FUN_10564a7e8(long param_1,long param_2)

{
  func_0x00010564c3cc();
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return;
}



/* Entry: 10564a800; end: 10564a81f;  */

void FUN_10564a800(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10564a7bc();
  }
  return;
}



/* Entry: 10564a820; end: 10564a853;  */

void FUN_10564a820(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x00010b480eb4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564a854; end: 10564a8b7;  */

long FUN_10564a854(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b48119c(param_1);
    }
    else {
      func_0x00010b481168(param_1);
    }
  }
  return param_1;
}



/* Entry: 10564a8b8; end: 10564a8c3;  */

void FUN_10564a8b8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  
  uVar2 = 0;
  lVar1 = param_2;
  func_0x00010b4823c0();
  *(undefined8 *)(param_1 + 8) = uVar2;
  *unaff_x19 = &PTR_DAT_110ceacc8;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b48244c();
  }
  lVar1 = param_2 + 0x10;
  func_0x000107c2809c();
  unaff_x19[2] = lVar1;
  param_2 = param_2 + 0x18;
  func_0x000107c2809c();
  unaff_x19[3] = param_2;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 10564a8c4; end: 10564a90b;  */

ulong FUN_10564a8c4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 < 0x666666666666667) {
    uVar2 = (long)(param_1[2] - *param_1) / 0x28;
    uVar3 = uVar2 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x333333333333332 < uVar2) {
      uVar3 = 0x666666666666666;
    }
    return uVar3;
  }
  FUN_10564a990();
  func_0x00010564c43c();
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar5 = *(long *)(param_2 + 8) + ((long)(uVar1 - uVar4) / -0x28) * 0x28;
  uVar2 = uVar5;
  for (uVar3 = uVar4; uVar3 != uVar1; uVar3 = uVar3 + 0x28) {
    FUN_10564aa10(uVar2,uVar3);
    uVar2 = uVar2 + 0x28;
  }
  for (; uVar4 != uVar1; uVar4 = uVar4 + 0x28) {
    uVar2 = uVar4;
    func_0x00010b480eb4(uVar4);
  }
  *(ulong *)(unaff_x19 + 8) = uVar5;
  uVar3 = *unaff_x20;
  *unaff_x20 = uVar5;
  unaff_x20[1] = uVar3;
  func_0x00010564c448();
  return uVar2;
}



/* Entry: 10564a90c; end: 10564a98f;  */

void FUN_10564a90c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x00010564c43c();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x28) * 0x28;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    FUN_10564aa10(lVar2,lVar3);
    lVar2 = lVar2 + 0x28;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
    func_0x00010b480eb4(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x00010564c448();
  return;
}



/* Entry: 10564a990; end: 10564a99b;  */

long * FUN_10564a990(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010564c4d4();
  func_0x00010564c744();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if (0x666666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      *param_1 = (long)&PTR_DAT_110ceacc8;
      param_1[1] = 0;
      param_1[2] = (long)&DAT_11383d918;
      param_1[3] = (long)&DAT_11383d918;
      *(undefined4 *)(param_1 + 4) = 0;
      if (param_1 != param_2) {
        uVar2 = param_1[1];
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        uVar3 = param_2[1];
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        if (uVar2 == uVar3) {
          func_0x00010b48119c(param_1);
        }
        else {
          func_0x00010b481168(param_1);
        }
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x28;
    __Znwm();
  }
  lVar4 = lVar1 + param_3 * 0x28;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar4;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x28;
  return unaff_x19;
}



/* Entry: 10564a99c; end: 10564aa0f;  */

long * FUN_10564a99c(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010564c744();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if (0x666666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      *param_1 = (long)&PTR_DAT_110ceacc8;
      param_1[1] = 0;
      param_1[2] = (long)&DAT_11383d918;
      param_1[3] = (long)&DAT_11383d918;
      *(undefined4 *)(param_1 + 4) = 0;
      if (param_1 != param_2) {
        uVar2 = param_1[1];
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        uVar3 = param_2[1];
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        if (uVar2 == uVar3) {
          func_0x00010b48119c(param_1);
        }
        else {
          func_0x00010b481168(param_1);
        }
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x28;
    __Znwm();
  }
  lVar4 = lVar1 + param_3 * 0x28;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar4;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x28;
  return unaff_x19;
}



/* Entry: 10564aa10; end: 10564aa33;  */

undefined8 * FUN_10564aa10(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_110ceacc8;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b48119c(param_1);
    }
    else {
      func_0x00010b481168(param_1);
    }
  }
  return param_1;
}



/* Entry: 10564aa34; end: 10564ab67;  */

long * FUN_10564aa34(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x28;
    func_0x00010b480eb4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10564ab68; end: 10564ab73;  */

void FUN_10564ab68(long param_1)

{
  func_0x00010564c4d4();
  func_0x000105646330(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10564ab74; end: 10564abdf;  */

void FUN_10564ab74(long param_1)

{
  func_0x000105646330(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10564abe0; end: 10564ac43;  */

long FUN_10564abe0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b481550(param_1);
    }
    else {
      func_0x00010b48151c(param_1);
    }
  }
  return param_1;
}


