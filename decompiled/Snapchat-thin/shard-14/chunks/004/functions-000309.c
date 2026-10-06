/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b258c80; end: 10b258cbb; -[SCNetworkActivity .cxx_destruct] */

void FUN_10b258c80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b258cbc; end: 10b258f33; -[SCNNetworkManagerRequestManagerWrapper submit:requestKey:callback:requestContext:httpHeaders:requestMediaType:loggingInfo:] */

void FUN_10b258cbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar2 = param_3;
  FUN_10b258f34(param_3,param_4,param_6,param_7,param_8,0,param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bfc99c0();
  if ((lVar3 == 1) || (lVar3 = param_3, func_0x00010bfc99c0(), lVar3 == 2)) {
    func_0x00010bee5b20(param_1);
    func_0x00010c1c3460(lVar2);
  }
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c25f660(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b258f34; end: 10b259943;  */

void FUN_10b258f34(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_90;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_5 == 1) {
    puVar1 = param_3;
    func_0x00010c11fca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa96c0();
    _objc_release(puVar1);
  }
  puVar1 = param_3;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf6db00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5480();
  _objc_release(puVar9);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar9 = param_1;
  func_0x00010bfc62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(puVar9);
  func_0x00010bef7f60(puVar1);
  puVar9 = param_1;
  func_0x00010bfc99c0();
  if (puVar9 == (undefined *)0x1) {
    puVar9 = param_3;
    func_0x00010c11fca0();
    _objc_retainAutoreleasedReturnValue();
    if ((((puVar9 != (undefined *)0x0) &&
         (puVar2 = puVar9, func_0x00010c0c46a0(), puVar2 != (undefined *)0x3)) &&
        (puVar2 = puVar9, func_0x00010c0c46a0(), puVar2 != (undefined *)0x4)) &&
       (puVar2 = puVar9, func_0x00010c0c46a0(), puVar2 != (undefined *)0x22)) {
      func_0x00010c0c46a0();
    }
    _objc_release(puVar9);
    puVar9 = param_1;
    func_0x00010bfc8980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = param_1;
    puVar3 = param_1;
    if (puVar9 == (undefined *)0x0) {
      puVar9 = param_1;
      func_0x00010bfc89e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar10 = PTR_PTR_1126b4960;
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar9 != (undefined *)0x0) {
        func_0x00010bfcbc40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc8800(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
        puVar5 = param_1;
        func_0x00010bfc89e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf51e00(puVar1);
        func_0x00010bf59d20(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar9);
        puVar9 = (undefined *)0x0;
        goto LAB_10b2596b4;
      }
      puVar9 = (undefined *)0x0;
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = param_1;
      func_0x00010bfc8980();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010c08fa60();
      if (puVar9 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = param_1;
        func_0x00010bfc8980(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126b4960;
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfcbc40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc8800(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010bf587e0(0x404e000000000000,puVar10);
      _objc_retainAutoreleasedReturnValue();
LAB_10b2596b4:
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    func_0x00010c1c3460(puVar10);
    func_0x00010c17d180(puVar10);
  }
  else {
    puVar9 = param_1;
    func_0x00010bfc99c0();
    if (puVar9 == (undefined *)0x2) {
      puVar2 = param_1;
      func_0x00010bfc89e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar10 = PTR_PTR_1126b4960;
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar2 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        goto LAB_10b2598c4;
      }
      puVar3 = param_1;
      func_0x00010bfcbc40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bfc8800(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar5 = param_1;
      func_0x00010bfc89e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad300(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010bf54bc0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar3);
      func_0x00010c1c3460(puVar10);
      func_0x00010c17d180(puVar10);
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = param_1;
      func_0x00010bfc8980();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      puVar9 = (undefined *)0x0;
      if (puVar3 != (undefined *)0x0) {
        puVar9 = puVar2;
      }
      _objc_retain(puVar9);
      puVar4 = param_1;
      func_0x00010bfc6880();
      puVar10 = PTR_PTR_1126dfd58;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar5 = param_1;
      if ((int)puVar4 == 0) {
        func_0x00010bfcbc40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_1;
        func_0x00010bfc8800();
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = puVar1;
        func_0x00010bf51e00();
        puVar6 = param_3;
        func_0x00010c27ef40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0f1260();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126bbf20;
        func_0x00010bdc1d20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc99a0();
        func_0x00010bfc67e0();
        _CACurrentMediaTime();
        func_0x00010c057b60(puVar10);
        _objc_release(puVar8);
      }
      else {
        func_0x00010bfcbc40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        func_0x00010bfc8800();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf51e00();
        puStack_90 = param_3;
        func_0x00010c27ef40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puStack_90;
        func_0x00010c0f1260();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126bbf20;
        func_0x00010bdc1d20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc99a0();
        func_0x00010bfc67e0();
        _CACurrentMediaTime();
        func_0x00010c00fe40(puVar10);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puStack_90);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
  }
  puVar2 = param_3;
  func_0x00010c265580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d180(puVar10);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bfcb680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c278ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c27dd80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0c6c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf4d300(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010c11fca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c219360(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c11fca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfea580();
  func_0x00010c1ab100(puVar10);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c11fca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f12c0();
  func_0x00010c1d8220(puVar10);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c11fca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27bc40();
  func_0x00010c1ec1e0(puVar10);
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bfc55a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a180(puVar10);
  _objc_release(puVar3);
  if (param_7 != 0) {
    func_0x00010c1c0700(puVar10);
  }
  _objc_retain(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar10);
LAB_10b2598c4:
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b259944; end: 10b2599cf;  */

void FUN_10b259944(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be316e0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2599d0; end: 10b259bb3;  */

void FUN_10b2599d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_PTR_1126dfd48;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c252ee0(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  uVar4 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf001c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010b291b94(uVar7);
  uVar8 = param_4;
  func_0x00010b7f5650(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar9 = param_2;
  func_0x00010c135700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010bf9ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03fbe0(puVar2);
  func_0x00010bdc1da0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b259bb4; end: 10b259e3f; -[SCNNetworkManagerRequestManagerWrapper submitProgressiveDownloadRequest:requestKey:requestContext:httpHeaders:isStreaming:requestMediaType:callback:loggingInfo:] */

void FUN_10b259bb4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar5 = 6;
  if ((param_7 & *(byte *)(param_1 + 0x30)) == 0) {
    uVar5 = 0;
  }
  uVar3 = uVar5;
  if ((param_7 != 0) && ((*(byte *)(param_1 + 0x31) & 1) != 0)) {
    uVar1 = param_3;
    func_0x00010bfcb680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x10;
    func_0x00010b7f519c(0x10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar3 = 6;
    if ((uVar4 & 1) == 0) {
      uVar3 = uVar5;
    }
  }
  uVar1 = param_3;
  FUN_10b258f34(param_3,param_4,param_5,param_6,param_8,uVar3,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4c40();
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(uVar1);
  uStack_70 = (undefined1)param_7;
  _objc_retain(param_9);
  func_0x00010c25f620(uVar3);
  _objc_release(uVar5);
  _objc_release(param_9);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b259e40; end: 10b259ee3;  */

void FUN_10b259e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e7a0();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b259ee4; end: 10b25a05b; -[SCNNetworkManagerRequestManagerWrapper monitorProgress:progressCallback:] */

void FUN_10b259ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b259fac;
  puStack_40 = &UNK_110a12860;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c2512a0(uVar1,param_2,param_3,uVar2,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b25a05c; end: 10b25a063; -[SCNNetworkManagerRequestManagerWrapper cancelRequest:] */

void FUN_10b25a05c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelRequestWithKey__1125a9540);
  return;
}



/* Entry: 10b25a064; end: 10b25a16f; -[SCNNetworkManagerRequestManagerWrapper updateRequestContext:requestContext:] */

void FUN_10b25a064(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010c11fca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6db00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a5480();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa96c0();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c11fca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = lVar1;
  func_0x00010bfea580(lVar1);
  _objc_release(lVar1);
  if (lVar2 - 1U < 4) {
    uVar5 = *(undefined8 *)(&UNK_10e56faf8 + (lVar2 - 1U) * 8);
  }
  else {
    uVar5 = 0;
  }
  func_0x00010c289460(*(undefined8 *)(param_1 + 8),param_2,param_3,uVar5,lVar4,(uint)lVar3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25a170; end: 10b25a1df; -[SCNNetworkManagerRequestManagerWrapper _uploadNetworkRetryCount] */

ulong FUN_10b25a170(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x40);
  uVar3 = *(ulong *)(param_1 + 0x38);
  if (uVar3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110f5f878,0x18,0);
    uVar1 = (uint)uVar2;
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    *(ulong *)(param_1 + 0x38) = uVar3;
  }
  _os_unfair_lock_unlock(param_1 + 0x40);
  return uVar3;
}



/* Entry: 10b25a1e0; end: 10b25a41f; -[SCNNetworkManagerRequestManagerWrapper _handleSuccessWithNativeRequest:request:response:data:callback:] */

void FUN_10b25a1e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126dfd48;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = param_5;
  func_0x00010c252ee0(param_5);
  func_0x00010c0df780(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c067ec0();
  puVar5 = param_5;
  func_0x00010bdc2b80(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_5;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar7 != (undefined *)0x0) {
    puVar2 = puVar7;
  }
  puVar8 = param_5;
  func_0x00010bf001c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar9 = puVar8;
  func_0x00010b291b94(puVar8);
  uVar10 = param_4;
  func_0x00010c135700(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c03fbe0(puVar1,param_2,puVar4,puVar6,puVar2,puVar9,0,uVar10,0);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  lVar11 = param_3;
  func_0x00010bfc99c0();
  if ((lVar11 != 1) && (lVar11 = param_3, func_0x00010bfc99c0(), lVar11 != 2)) {
    puVar2 = PTR_PTR_1126dfd50;
    _objc_alloc(PTR_PTR_1126dfd50);
    func_0x00010c0083e0();
    uVar12 = param_7;
    func_0x00010bdc1dc0(param_7,param_2,param_3,puVar1,puVar2);
    _objc_release(puVar2);
    if ((uVar12 & 1) != 0) goto LAB_10b25a3e4;
  }
  func_0x00010c0e6d20(param_7,param_2,param_3,puVar1,param_6);
LAB_10b25a3e4:
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25a420; end: 10b25a6ff; -[SCNNetworkManagerRequestManagerWrapper _handleProgressiveDownloadCallbackForData:platformRequest:statusCode:headers:isStreaming:error:callback:] */

void FUN_10b25a420(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  ulong param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126dfce0;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar9 = param_4;
  func_0x00010c135700(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010b291b94(param_6);
  _objc_release(param_6);
  uVar2 = param_4;
  func_0x00010bf9ff80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c03ef80(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar10);
  _objc_release(uVar9);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_8 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_8;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    FUN_10b2802ac(uVar9,puVar10,puVar5,puVar7,1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(lVar3);
  }
  lVar3 = param_8;
  func_0x00010b7f5650(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_9;
  func_0x00010c0e7580();
  _objc_release(lVar3);
  if ((uVar8 & 1) == 0) {
    if (param_3 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126dfd50;
      _objc_alloc(PTR_PTR_1126dfd50);
      func_0x00010c0083e0();
    }
    lVar3 = param_8;
    func_0x00010b7f5650(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7520(param_9);
    _objc_release(lVar3);
    _objc_release(puVar10);
  }
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25a700; end: 10b25a753; -[SCNNetworkManagerRequestManagerWrapper .cxx_destruct] */

void FUN_10b25a700(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25a754; end: 10b25abab; -[SCNNetworkManagerUrlRequestDeprecated initWithSCRequest:] */

undefined8 * FUN_10b25a754(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_112705ed0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_10b25ab80;
  uVar2 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uVar2 = param_3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
  }
  else {
    _objc_retain(uVar3);
    uVar4 = puVar1[1];
    puVar1[1] = uVar3;
  }
  _objc_release(uVar4);
  *(bool *)(puVar1 + 2) = uVar3 == 0;
  puVar12 = PTR_PTR_1126b9f60;
  func_0x00010c0cc940(param_3);
  func_0x00010be61fc0();
  puVar1[3] = puVar12;
  puVar12 = PTR_PTR_1126b9f60;
  func_0x00010c136d60(param_3);
  func_0x00010be61fe0();
  puVar1[7] = puVar12;
  uVar2 = param_3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = puVar1[8];
  puVar1[8] = uVar2;
  _objc_release(uVar4);
  uVar2 = param_3;
  func_0x00010bf10b60();
  *(char *)(puVar1 + 9) = (char)uVar2;
  puVar12 = PTR_PTR_1126b1058;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c278f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c278f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c278f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c278f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9c780();
  func_0x00010c01b360();
  uVar4 = puVar1[10];
  puVar1[10] = puVar12;
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar12 = PTR_PTR_1126dfd58;
  _objc_retain(param_3);
  _objc_opt_class(puVar12);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar12);
  uVar2 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  if (uVar2 != 0) {
    uVar5 = param_3;
    func_0x00010befcfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_3;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[6];
    puVar1[6] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_3;
    func_0x00010c28daa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    if (uVar5 == 0) {
LAB_10b25aac8:
      uVar5 = param_3;
      func_0x00010c28daa0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        uVar7 = param_3;
        func_0x00010c28daa0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
        uVar8 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar12);
        _objc_release(uVar7);
        _objc_release(uVar5);
        if ((uVar8 & 1) != 0) {
          puVar11 = PTR_PTR_1126dfd50;
          _objc_alloc();
          func_0x00010c28daa0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0083e0();
          puVar12 = (undefined *)puVar1[5];
          puVar1[5] = puVar11;
          goto LAB_10b25ab60;
        }
      }
    }
    else {
      uVar7 = param_3;
      func_0x00010c28daa0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar12);
      _objc_release(uVar7);
      _objc_release(uVar5);
      if ((uVar8 & 1) == 0) goto LAB_10b25aac8;
      puVar11 = PTR_PTR_1126dfd50;
      _objc_alloc();
      puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010c28daa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64b60(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0083e0();
      uVar4 = puVar1[5];
      puVar1[5] = puVar11;
      _objc_release(uVar4);
LAB_10b25ab60:
      _objc_release(puVar12);
      _objc_release(uVar6);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_10b25ab80:
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b25abac; end: 10b25abd3; -[SCNNetworkManagerUrlRequestDeprecated getHeaders] */

void FUN_10b25abac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25abd4; end: 10b25abdb; -[SCNNetworkManagerUrlRequestDeprecated getIsAuthenticated] */

undefined1 FUN_10b25abd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 10b25abdc; end: 10b25abe3; -[SCNNetworkManagerUrlRequestDeprecated getIsRelativePath] */

undefined1 FUN_10b25abdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b25abe4; end: 10b25ac0b; -[SCNNetworkManagerUrlRequestDeprecated getKey] */

void FUN_10b25abe4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25ac0c; end: 10b25ac33; -[SCNNetworkManagerUrlRequestDeprecated getParameters] */

void FUN_10b25ac0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25ac34; end: 10b25ac5b; -[SCNNetworkManagerUrlRequestDeprecated getPayloadDeprecated] */

void FUN_10b25ac34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25ac5c; end: 10b25ac63; -[SCNNetworkManagerUrlRequestDeprecated getPayloadDataRef] */

void FUN_10b25ac5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_data_1125b6738);
  return;
}



/* Entry: 10b25ac64; end: 10b25ac6b; -[SCNNetworkManagerUrlRequestDeprecated getPayloadLocalUrl] */

undefined8 FUN_10b25ac64(void)

{
  return 0;
}



/* Entry: 10b25ac6c; end: 10b25ac73; -[SCNNetworkManagerUrlRequestDeprecated getPayloadStream] */

undefined8 FUN_10b25ac6c(void)

{
  return 0;
}



/* Entry: 10b25ac74; end: 10b25ac7b; -[SCNNetworkManagerUrlRequestDeprecated getRequestMethod] */

undefined8 FUN_10b25ac74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b25ac7c; end: 10b25ac83; -[SCNNetworkManagerUrlRequestDeprecated getRequestType] */

undefined8 FUN_10b25ac7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b25ac84; end: 10b25acab; -[SCNNetworkManagerUrlRequestDeprecated getTrackingInfo] */

void FUN_10b25ac84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25acac; end: 10b25acd3; -[SCNNetworkManagerUrlRequestDeprecated getUrl] */

void FUN_10b25acac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25acd4; end: 10b25acdb; -[SCNNetworkManagerUrlRequestDeprecated getSwitchboardConfigKey] */

undefined8 FUN_10b25acd4(void)

{
  return 0;
}



/* Entry: 10b25acdc; end: 10b25ace3; -[SCNNetworkManagerUrlRequestDeprecated getFallbackUrlProvider] */

undefined8 FUN_10b25acdc(void)

{
  return 0;
}



/* Entry: 10b25ace4; end: 10b25acef; +[SCNNetworkManagerUrlRequestDeprecated _nativeRequestTypeFromPlatformRequestType:] */

bool FUN_10b25ace4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 10b25acf0; end: 10b25acff; +[SCNNetworkManagerUrlRequestDeprecated _nativeRequestMethodFromPlatformRequestMethod:] */

ulong FUN_10b25acf0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (3 < param_3) {
    param_3 = 4;
  }
  return param_3;
}



/* Entry: 10b25ad00; end: 10b25ad5f; -[SCNNetworkManagerUrlRequestDeprecated .cxx_destruct] */

void FUN_10b25ad00(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25ad60; end: 10b25ae9b; -[SCUrlResponseInfo initWithResponseCode:finalRespondingUrl:responseHeaders:contentLength:networkError:requestId:failoverAdvice:] */

undefined1 *
FUN_10b25ad60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112705ed8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b25ae9c; end: 10b25aea3; -[SCUrlResponseInfo getResponseCode] */

undefined4 FUN_10b25ae9c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b25aea4; end: 10b25aecb; -[SCUrlResponseInfo getFinalRespondingUrl] */

void FUN_10b25aea4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25aecc; end: 10b25aef3; -[SCUrlResponseInfo getResponseHeaders] */

void FUN_10b25aecc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25aef4; end: 10b25aefb; -[SCUrlResponseInfo getContentLength] */

undefined8 FUN_10b25aef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b25aefc; end: 10b25af23; -[SCUrlResponseInfo getNetworkError] */

void FUN_10b25aefc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25af24; end: 10b25af4b; -[SCUrlResponseInfo getRequestId] */

void FUN_10b25af24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25af4c; end: 10b25af73; -[SCUrlResponseInfo getFailoverAdvice] */

void FUN_10b25af4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25af74; end: 10b25afc7; -[SCUrlResponseInfo .cxx_destruct] */

void FUN_10b25af74(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b25afc8; end: 10b25afd3; -[SCNativeRetryABConfigProvider .cxx_destruct] */

void FUN_10b25afc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25afd4; end: 10b25b0a3;  */

void FUN_10b25afd4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c117c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dfd70;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c13b920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4d80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c13b920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfe4dc0();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,puVar4,(long)(int)uVar6,*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b25b0a4; end: 10b25b367; -[SCHTTPRequestCallback onFailed:info:error:willRetry:] */

void FUN_10b25b0a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069360(param_5);
  func_0x00010c11e1c0(param_5);
  uVar6 = param_5;
  func_0x00010c0cb140(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c134680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar1);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf98940(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c069360(param_5);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11e1c0(param_5);
  _objc_release(param_5);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x40);
    func_0x00010c0e4500(param_1);
    _objc_release(puVar1);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x40);
    func_0x00010c0e4500(param_1);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2778e0();
  func_0x00010bf941e0(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf2ed20(*(undefined8 *)(param_4 + 0x10));
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  if (*(long *)(param_4 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4500(param_4);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c0e4500(param_4);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2778e0();
  func_0x00010bf941e0(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(*(long *)(lVar9 + 0x20) + 8);
  func_0x00010c117c40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar9 + 0x28);
  uVar2 = *(undefined8 *)(lVar9 + 0x30);
  func_0x00010bf001c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + 0x38);
  func_0x00010c13b920(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfe4dc0();
  (**(code **)(lVar10 + 0x10))(lVar10,uVar6,uVar2,(long)(int)uVar8,0);
  _objc_release(uVar7);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 10b25b368; end: 10b25b537; -[SCHTTPRequestCallback onCanceled:info:] */

void FUN_10b25b368(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf2ed20(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4500(param_1);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c0e4500(param_1);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2778e0();
  func_0x00010bf941e0(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + 8);
  func_0x00010c117c40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + 0x28);
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010bf001c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + 0x38);
  func_0x00010c13b920(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe4dc0();
  (**(code **)(lVar8 + 0x10))(lVar8,uVar4,uVar5,(long)(int)uVar7,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 10b25b538; end: 10b25b693;  */

void FUN_10b25b538(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c117c40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf001c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c13b920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe4dc0();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,uVar3,(long)(int)uVar5,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b25b694; end: 10b25b6cb; +[SCNNetworkHttpRequestConverter NativeMethodToSCHTTPMethod:] */

long FUN_10b25b694(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (3 < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 10b25b6cc; end: 10b25b847;  */

void FUN_10b25b6cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bfe4ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar7 = 0;
  if (lVar3 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar7 = *(long *)(lVar8 * 8);
        lVar4 = lVar7;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32ee0();
        _objc_release(lVar4);
        if (lVar5 == 0) {
          func_0x00010c296d80(lVar7);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10b25b7f8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar7 = 0;
  }
LAB_10b25b7f8:
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10b25b848; end: 10b25b857;  */

void FUN_10b25b848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,1);
  return;
}



/* Entry: 10b25b858; end: 10b25b883; -[SCNetworkApiRouter cancelRequestTask:] */

void FUN_10b25b858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d5980(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_cancel__1125a9098,param_3);
  return;
}



/* Entry: 10b25b884; end: 10b25b91b; -[SCNetworkApiRouter updateRankingSignalWithRequestTask:] */

void FUN_10b25b884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126dfd70;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fd00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_3;
  func_0x00010c0d5980(param_3);
  _objc_release(param_3);
  func_0x00010c283240(uVar3,param_2,uVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b25b91c; end: 10b25b923; -[SCNetworkApiRouter nativeNetworkApi] */

undefined8 FUN_10b25b91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b25b924; end: 10b25b953; -[SCNetworkApiRouter setNativeNetworkApi:] */

void FUN_10b25b924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b25b954; end: 10b25b9af; -[SCNetworkApiRouter .cxx_destruct] */

void FUN_10b25b954(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b25b9b0; end: 10b25bb3b; -[SCNetworkConnectivityChangeNotifier _handleServiceRadioAccessTechnologyDidChange:] */

void FUN_10b25b9b0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b25bb3c; end: 10b25bbc7;  */

undefined8 FUN_10b25bb3c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 4;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f5fa38);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f5fa58),
       (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,*(undefined8 *)PTR__CTRadioAccessTechnologyLTE_11034b980);
      uVar2 = 2;
      if ((int)uVar1 == 0) {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 3;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b25bbc8; end: 10b25bc1f; -[SCNetworkConnectivityChangeNotifier notifyListener:] */

void FUN_10b25bbc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b25bc20;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10b25bc20; end: 10b25bd1b;  */

void FUN_10b25bc20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c0e3120(*(undefined8 *)(lStack_108 + lVar5 * 8),param_2,
                            *(undefined8 *)(param_1 + 0x28));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10b25bd1c;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10b25bd74;
  puStack_138 = &UNK_110848c48;
  lStack_130 = lVar3;
  puStack_128 = (undefined1 *)puVar2;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c0f88c0(*(undefined8 *)(lVar3 + 8),param_2,&puStack_150);
  return;
}



/* Entry: 10b25bd1c; end: 10b25bd73; -[SCNetworkConnectivityChangeNotifier notifyRadioAccessType:] */

void FUN_10b25bd1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b25bd74;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10b25bd74; end: 10b25be77;  */

void FUN_10b25bd74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1879c0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c0e5da0(*(undefined8 *)(lStack_108 + lVar5 * 8),param_2,
                            *(undefined8 *)(param_1 + 0x28));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10b25be78;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10b25bed0;
  puStack_138 = &UNK_110848c48;
  lStack_130 = lVar3;
  puStack_128 = (undefined1 *)puVar2;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar3 + 8),param_2,&puStack_150);
  return;
}



/* Entry: 10b25be78; end: 10b25becf; -[SCNetworkConnectivityChangeNotifier _publishRadioAccessType:] */

void FUN_10b25be78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b25bed0;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10b25bed0; end: 10b25bf0f;  */

void FUN_10b25bed0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5e480();
  if (lVar1 == 4 || lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0dd4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyRadioAccessType__112614f48,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b25bf10; end: 10b25bfb7; -[SCNetworkConnectivityChangeNotifier updateCurrentReachability:] */

void FUN_10b25bf10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf5e480();
  func_0x00010c187100(param_1);
  func_0x00010bdc1d00(PTR_PTR_1126dfd70);
  func_0x00010c0dd340(param_1);
  if (lVar1 == param_3) {
    return;
  }
  if ((param_3 != 4) && (param_3 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1879d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentRadioAccessType__11263f890,0);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c2bf28(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be842d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishRadioAccessType__11257ea50,uVar2);
  return;
}



/* Entry: 10b25bfb8; end: 10b25bff3; -[SCNetworkConnectivityChangeNotifier updateCurrentReachability] */

void FUN_10b25bfb8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfd70;
  func_0x00010bf5e480();
  func_0x00010bdc1d00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyListener__112614ee8,puVar1);
  return;
}



/* Entry: 10b25bff4; end: 10b25bffb; -[SCNetworkConnectivityChangeNotifier setCurrentConnectivity:] */

void FUN_10b25bff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b25bffc; end: 10b25c043; -[SCNetworkConnectivityChangeNotifier .cxx_destruct] */

void FUN_10b25bffc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25c044; end: 10b25c04b; -[SCNetworkExecutor execute:] */

void FUN_10b25c044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_run_11262e3c0);
  return;
}



/* Entry: 10b25c04c; end: 10b25c073; -[SCUploadDataProvider getUploadFilePath] */

void FUN_10b25c04c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25c074; end: 10b25c09b; -[SCUploadDataProvider getUploadStreamDataProvider] */

void FUN_10b25c074(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25c09c; end: 10b25c10f; -[SCNativeCancelId initWithRequestToken:] */

undefined1 * FUN_10b25c09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705f20;
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



/* Entry: 10b25c110; end: 10b25c117; -[SCNativeCancelId cancel] */

void FUN_10b25c110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10b25c118; end: 10b25c123; -[SCNativeCancelId .cxx_destruct] */

void FUN_10b25c118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25c124; end: 10b25c6ff; -[SCRequestManagerHTTPMetadataService submit:callbackExecutor:callback:uploadDataProvider:] */

void FUN_10b25c124(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b7218;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7220;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar3 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc200(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126dfd70;
  lVar3 = param_3;
  func_0x00010bfe4ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc940();
  func_0x00010bdc1cc0(puVar4);
  func_0x00010c2b3f00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfe4ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar5);
  lVar6 = lVar5;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar5);
        }
        uVar14 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        uVar7 = uVar14;
        func_0x00010c296d80(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c086560(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar14);
        _objc_release(uVar7);
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  puVar8 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(lVar5);
  func_0x00010c2af6a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243980();
  func_0x00010c2b9840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf0dd40();
  _objc_release(lVar3);
  if (lVar5 == 3) {
    func_0x00010c2aa740(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar3 = param_3;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c135a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar5 != 0) {
    lVar3 = param_3;
    func_0x00010c135080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c135a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2af9a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  if (param_6 != 0) {
    lVar3 = param_6;
    func_0x00010bfcbb80(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    lVar5 = lVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a95e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_f0,param_1);
  uVar14 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_10b25c700;
  puStack_150 = &UNK_110945590;
  _objc_copyWeak(auStack_138,auStack_f0);
  _objc_retain(param_4);
  uStack_148 = param_4;
  _objc_retain(param_5);
  ppuVar11 = &puStack_168;
  puVar10 = puVar8;
  uVar7 = uVar14;
  uStack_140 = param_5;
  func_0x00010c25f600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  puVar9 = PTR_PTR_1126dfde8;
  _objc_alloc(PTR_PTR_1126dfde8);
  func_0x00010c03f5c0();
  _objc_release(param_1);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume();
  _objc_retain(ppuVar11);
  _objc_retain(uVar7);
  _objc_retain(puVar10);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2ca60();
  _objc_release(ppuVar11);
  _objc_release(uVar7);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25c700; end: 10b25c793;  */

void FUN_10b25c700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ca60();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b25c794; end: 10b25cbbf; -[SCRequestManagerHTTPMetadataService _handleNativeResponseCallback:result:data:error:callbackQueue:nativeCallback:] */

void FUN_10b25c794(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_1e8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126dfdf0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf3ec40(param_6);
    func_0x00010c027bc0(puVar2);
    func_0x00010c010800();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126dfdf8;
  _objc_alloc();
  if (param_3 == 0) {
    puStack_1e8 = (undefined *)0x0;
  }
  else {
    puStack_1e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc();
    func_0x00010c252ee0(param_3);
    func_0x00010c027bc0();
  }
  lVar3 = param_3;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(lVar3);
  lVar5 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar6 = PTR_PTR_1126dfde0;
      _objc_alloc(PTR_PTR_1126dfde0);
      lVar7 = lVar3;
      func_0x00010c0e00e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020de0(puVar6);
      func_0x00010befa120(puVar4);
      _objc_release(puVar6);
      _objc_release(lVar7);
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x00010c04f460();
  _objc_release(puVar6);
  _objc_release(lVar3);
  if (param_3 != 0) {
    _objc_release(puStack_1e8);
  }
  puVar4 = PTR_PTR_1126dfe00;
  _objc_alloc(PTR_PTR_1126dfe00);
  if (param_4 == 0) {
    _objc_retain(param_5);
    _objc_retain(puVar2);
    _objc_retain(param_8);
    func_0x00010bffada0(puVar4);
    func_0x00010c25ed40(param_7);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(param_5);
  }
  else {
    _objc_retain(puVar2);
    _objc_retain(param_8);
    func_0x00010bffada0(puVar4);
    func_0x00010c25ed40(param_7);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(puVar9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e6c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_onSucceeded_responseInfo__112617528,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 10b25cbc0; end: 10b25cbdb;  */

void FUN_10b25cbc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSucceeded_responseInfo__112617528,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b25cbdc; end: 10b25cc0f; -[SCRequestManagerHTTPRequestToken cancel] */

void FUN_10b25cbdc(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2ee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b25cc10; end: 10b25cc53; -[SCRequestManagerHTTPRequestToken cancelWithReason:] */

void FUN_10b25cc10(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2ee80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b25cc54; end: 10b25cd27;  */

void FUN_10b25cc54(double param_1,long param_2,undefined8 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = 1;
  _objc_retain(param_3);
  _CACurrentMediaTime();
  *(double *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) =
       (param_1 - *(double *)(param_2 + 0x40)) * 1000.0;
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010b25ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b25cd28; end: 10b25ceaf;  */

void FUN_10b25cd28(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    dVar6 = *(double *)(param_2 + 0x40);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c243820(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c0a59a0((param_1 - dVar6) * 1000.0,uVar5);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    uVar5 = param_3;
    func_0x00010bf87dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b25ceb0;
    puStack_70 = &UNK_11084a9e8;
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar2);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uStack_58 = uVar2;
    _objc_retain(uVar4);
    uStack_68 = uVar4;
    puStack_60 = puVar3;
    _objc_retain(puVar3);
    func_0x000107c27d8c(uVar5,&puStack_88);
    _objc_release(puStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_58);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b25ceb0; end: 10b25cecf;  */

void FUN_10b25ceb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b25cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),2,0,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b25ced0; end: 10b25ced7; -[SCRequestManagerHTTPMetadataService setContexts:withRequestManagerMode:] */

void FUN_10b25ced0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c183610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setContexts_withRequestManagerMo_11263e7a0);
  return;
}



/* Entry: 10b25ced8; end: 10b25cedf; -[SCRequestManagerHTTPMetadataService addContext:] */

void FUN_10b25ced8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addContext__11259b858);
  return;
}



/* Entry: 10b25cee0; end: 10b25cee7; -[SCRequestManagerHTTPMetadataService removeContext:] */

void FUN_10b25cee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeContext__1126288a8);
  return;
}



/* Entry: 10b25cee8; end: 10b25ceef; -[SCRequestManagerHTTPMetadataService setContexts:] */

void FUN_10b25cee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1835f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setContexts__11263e798);
  return;
}



/* Entry: 10b25cef0; end: 10b25cf57; -[SCRequestManagerHTTPMetadataService .cxx_destruct] */

void FUN_10b25cef0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b25cf58; end: 10b25cfe3; -[SCRequestConcurrencyCounter registerTask:] */

void FUN_10b25cf58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b25cfe4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25cfe4; end: 10b25cff3;  */

void FUN_10b25cfe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateTask_willRunTask__112680540,
             *(undefined8 *)(param_1 + 0x28),1);
  return;
}



/* Entry: 10b25cff4; end: 10b25d07f; -[SCRequestConcurrencyCounter unregisterTask:] */

void FUN_10b25cff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b25d080;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25d080; end: 10b25d08f;  */

void FUN_10b25d080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateTask_willRunTask__112680540,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10b25d090; end: 10b25d49b; -[SCRequestConcurrencyCounter updateTask:willRunTask:] */

void FUN_10b25d090(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_4;
  _objc_retain(param_3);
  puVar11 = *(undefined1 **)(param_1 + 8);
  puVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  iVar8 = (int)param_4;
  if (((ulong)param_4 & 1) == 0) {
    puVar6 = puVar9;
    func_0x00010c12d3e0(puVar11);
  }
  else {
    puVar6 = param_3;
    puVar12 = puVar9;
    func_0x00010c1d0640();
  }
  _objc_release(puVar9);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c136d60();
  _objc_release(puVar1);
  if ((long)puVar9 < 3) {
    if (puVar9 == (undefined1 *)0x0) {
      puVar1 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c113c80();
      if (puVar9 == (undefined1 *)0x4) {
        puVar9 = (undefined1 *)0x1;
      }
      else {
        puVar11 = param_3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar11;
        func_0x00010c081c40();
        _objc_release(puVar11);
      }
      _objc_release(puVar1);
      puVar11 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar11;
      func_0x00010c134b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar11);
      if ((int)puVar9 == 0) {
        lVar2 = param_1;
        func_0x00010c0de120();
        lVar7 = lVar2 + -1;
        if (iVar8 != 0) {
          lVar7 = lVar2 + 1;
        }
        func_0x00010c1ceee0(param_1,param_2,lVar7);
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        puVar1 = param_3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bf854e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar11;
        func_0x00010bf4f6c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar1);
        puVar12 = auStack_f0;
        puVar6 = puVar9;
        func_0x00010bf52a60();
        if (puVar6 != (undefined1 *)0x0) {
          lVar7 = *plStack_120;
          do {
            puVar12 = (undefined1 *)0x0;
            do {
              if (*plStack_120 != lVar7) {
                _objc_enumerationMutation(puVar9);
              }
              uVar10 = *(undefined8 *)(lStack_128 + (long)puVar12 * 8);
              lVar2 = *(long *)(param_1 + 0x10);
              func_0x00010c0e00e0(lVar2,param_2,uVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar2 == 0) {
                puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar3,uVar10);
                _objc_release(puVar3);
              }
              puVar11 = *(undefined1 **)(param_1 + 0x10);
              func_0x00010c0e00e0(puVar11,param_2,uVar10);
              _objc_retainAutoreleasedReturnValue();
              if (((ulong)param_4 & 1) == 0) {
                func_0x00010c12d360();
              }
              else {
                func_0x00010befa120();
              }
              _objc_release(puVar11);
              puVar12 = puVar12 + 1;
            } while (puVar6 != puVar12);
            puVar12 = auStack_f0;
            puVar6 = puVar9;
            puVar5 = &uStack_130;
            func_0x00010bf52a60();
            puVar1 = (undefined1 *)0x0;
          } while (puVar6 != (undefined1 *)0x0);
        }
        _objc_release(puVar9);
        puVar6 = (undefined1 *)puVar5;
        if (((ulong)param_4 & 1) == 0) {
          puVar6 = param_3;
          func_0x00010be98480(param_1);
        }
      }
      else if (puVar1 == (undefined1 *)0x0) {
        lVar7 = param_1;
        func_0x00010c0de300();
        if (iVar8 == 0) {
          puVar6 = (undefined1 *)(lVar7 + -1);
        }
        else {
          puVar6 = (undefined1 *)(lVar7 + 1);
        }
        func_0x00010c1cefa0(param_1);
      }
      else {
        lVar7 = param_1;
        func_0x00010c0de0a0();
        if (iVar8 == 0) {
          puVar6 = (undefined1 *)(lVar7 + -1);
        }
        else {
          puVar6 = (undefined1 *)(lVar7 + 1);
        }
        func_0x00010c1ceec0(param_1);
      }
    }
    else if (puVar9 == (undefined1 *)0x1) {
LAB_10b25d198:
      lVar7 = param_1;
      func_0x00010c0de080();
      if (iVar8 == 0) {
        puVar6 = (undefined1 *)(lVar7 + -1);
      }
      else {
        puVar6 = (undefined1 *)(lVar7 + 1);
      }
      func_0x00010c1cee80(param_1);
    }
    else if (puVar9 == (undefined1 *)0x2) {
      lVar7 = param_1;
      func_0x00010c0de460();
      if (iVar8 == 0) {
        puVar6 = (undefined1 *)(lVar7 + -1);
      }
      else {
        puVar6 = (undefined1 *)(lVar7 + 1);
      }
      func_0x00010c1cf0c0(param_1);
    }
  }
  else if (puVar9 == (undefined1 *)0x3) {
    lVar7 = param_1;
    func_0x00010c0de160();
    if (iVar8 == 0) {
      puVar6 = (undefined1 *)(lVar7 + -1);
    }
    else {
      puVar6 = (undefined1 *)(lVar7 + 1);
    }
    func_0x00010c1cef00(param_1);
  }
  else if (puVar9 == (undefined1 *)0x6) {
    lVar7 = param_1;
    func_0x00010c0de3a0();
    if (iVar8 == 0) {
      puVar6 = (undefined1 *)(lVar7 + -1);
    }
    else {
      puVar6 = (undefined1 *)(lVar7 + 1);
    }
    func_0x00010c1cf020(param_1);
  }
  else if (puVar9 == (undefined1 *)0x5) goto LAB_10b25d198;
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10b25d49c;
  puStack_170 = puVar11;
  puStack_168 = puVar1;
  puStack_160 = puVar9;
  puStack_158 = param_4;
  lStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar12);
  puVar1 = puVar12;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c136d60();
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = puVar12;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c081c40();
    _objc_release(puVar9);
    _objc_release(puVar1);
    if (((ulong)puVar11 & 1) != 0) goto LAB_10b25d58c;
    uVar10 = *(undefined8 *)(puVar4 + 0x18);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_10b25d5b0;
    puStack_190 = &UNK_110848ba8;
    puStack_188 = puVar4;
    _objc_retain(puVar12);
    puStack_180 = puVar12;
    _objc_retain(puVar6);
    puStack_178 = puVar6;
    func_0x00010c0f8240(uVar10,param_2,&puStack_1a8);
    _objc_release(puStack_178);
    puVar1 = puStack_180;
  }
  _objc_release(puVar1);
LAB_10b25d58c:
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10b25d49c; end: 10b25d5af; -[SCRequestConcurrencyCounter addContext:toTask:] */

void FUN_10b25d49c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c136d60();
  if (uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c081c40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_10b25d58c;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b25d5b0;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c0f8240(uVar4,param_2,&puStack_78);
    _objc_release(uStack_48);
    uVar1 = uStack_50;
  }
  _objc_release(uVar1);
LAB_10b25d58c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25d5b0; end: 10b25d6bb;  */

void FUN_10b25d5b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c134680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (lVar4 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0e00e0(lVar4,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,puVar2,
                          *(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b25d6bc; end: 10b25d7cf; -[SCRequestConcurrencyCounter removeContext:toTask:] */

void FUN_10b25d6bc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c136d60();
  if (uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c081c40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_10b25d7ac;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b25d7d0;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c0f8240(uVar4,param_2,&puStack_78);
    _objc_release(uStack_48);
    uVar1 = uStack_50;
  }
  _objc_release(uVar1);
LAB_10b25d7ac:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b25d7d0; end: 10b25d8a7;  */

void FUN_10b25d7d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c134680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  _objc_release(uVar2);
  if (lVar3 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0e00e0(lVar3,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10b25d8a8; end: 10b25d8ff; -[SCRequestConcurrencyCounter reset] */

void FUN_10b25d8a8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b25d900;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 10b25d900; end: 10b25d9ab;  */

void FUN_10b25d900(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined **)(*(long *)(param_1 + 0x20) + 8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cee80(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1cef00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1cf0c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1cefa0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1ceee0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1cf030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNumOfStreamingChunkRequests__112651630,0);
  return;
}



/* Entry: 10b25d9ac; end: 10b25da53; -[SCRequestConcurrencyCounter numOfRunningInContextDownloadTasks] */

undefined8 FUN_10b25d9ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b25da54;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10b25da54; end: 10b25db47;  */

void FUN_10b25da54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe18;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be65740(puVar2,param_2,uVar1,&PTR___NSConcreteGlobalBlock_110ccbc10);
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


