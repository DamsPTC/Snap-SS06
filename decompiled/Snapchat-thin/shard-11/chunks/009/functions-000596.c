/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b9322c; end: 108b932e3; -[SCLogoutBusinessLogic _logApplicationLogoutAttempt:] */

void FUN_108b9322c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dae58;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar3 = param_3;
  func_0x00010c073500(param_3);
  _objc_release(param_3);
  func_0x00010c19ea40(puVar1,param_2,uVar3);
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b932e4; end: 108b93333; -[SCLogoutBusinessLogic .cxx_destruct] */

void FUN_108b932e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b93334; end: 108b936d7; -[SCLogoutEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b93334(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010beb9be0();
  lVar9 = (long)_DAT_112777d2c;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0b46c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2354a0();
  if ((int)lVar3 == 0) {
    uStack_70 = (long)_DAT_112777d30;
    lVar3 = param_1 + uStack_70;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c08d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c06fd40();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar6 == 0) {
      uStack_78 = PTR_PTR_1126dae68;
      _objc_alloc();
      lVar1 = param_1 + _DAT_112777d34;
      _objc_loadWeakRetained(lVar1);
      uStack_70 = param_1 + uStack_70;
      _objc_loadWeakRetained();
      lVar3 = uStack_70;
      func_0x00010c08d7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_112777d38;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bfcdfa0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0b47a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108b93520;
    }
  }
  else {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uStack_78 = PTR_PTR_1126dae60;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112777d34;
  _objc_loadWeakRetained(lVar1);
  uStack_70 = param_1 + _DAT_112777d30;
  _objc_loadWeakRetained();
  lVar3 = uStack_70;
  func_0x00010c08d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112777d38;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b47a0();
  _objc_retainAutoreleasedReturnValue();
LAB_108b93520:
  lVar11 = (long)_DAT_112777d3c;
  lVar12 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar12);
  lVar7 = lVar12;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f5c0(uStack_78,param_2,lVar1,lVar3,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uStack_70);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126dae70;
  _objc_alloc();
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0b46c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar4 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112777d40;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar6 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027b00(puVar8,param_2,lVar3,uStack_78,lVar4,lVar5,lVar6);
  lVar12 = (long)_DAT_112777d44;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar8;
  _objc_release(uVar10);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar12));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_78);
  return;
}



/* Entry: 108b936d8; end: 108b9375b; -[SCLogoutEntryPoint _showLogoutSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b936d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_108b94d14(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777d48);
  *(long *)(param_1 + _DAT_112777d48) = lVar1;
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112777d2c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9375c; end: 108b9378f; -[SCLogoutEntryPoint _hideLogoutSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9375c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112777d48;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b93790; end: 108b937db; -[SCLogoutEntryPoint end] */

void FUN_108b93790(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be35960();
  puStack_28 = PTR_PTR_1126fd508;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b937dc; end: 108b93873; -[SCLogoutEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b937dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112777d3c);
  _objc_destroyWeak(param_1 + _DAT_112777d30);
  _objc_destroyWeak(param_1 + _DAT_112777d34);
  _objc_destroyWeak(param_1 + _DAT_112777d38);
  _objc_destroyWeak(param_1 + _DAT_112777d40);
  _objc_destroyWeak(param_1 + _DAT_112777d2c);
  _objc_storeStrong(param_1 + _DAT_112777d48,0);
  _objc_storeStrong(param_1 + _DAT_112777d44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777d4c,0);
  return;
}



/* Entry: 108b93874; end: 108b9396f; -[SCDefaultLogoutService initWithNetworkServices:oneTapLoginRegistry:graphene:userTrackedLogger:] */

undefined1 *
FUN_108b93874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fd510;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b93970; end: 108b93c53; -[SCDefaultLogoutService performLogoutRequest:] */

void FUN_108b93970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8670;
  func_0x00010bf10920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf225e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = PTR_PTR_1126dae78;
  func_0x00010c0b4920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar9);
  _objc_release();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be558a0(param_1);
  puVar6 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c25f600(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108b93c54; end: 108b93c93;  */

void FUN_108b93c54(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2901c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108b93c94; end: 108b93d53;  */

void FUN_108b93c94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_4;
  func_0x00010bf001c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ee9018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5adc0(lVar1,param_2,param_3,param_6,uVar3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108b93d54; end: 108b93f6b; -[SCDefaultLogoutService _logoutRequestCompleted:error:authSessionId:requestId:callback:] */

void FUN_108b93d54(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126dae78;
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_6);
    func_0x00010c0b4960(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4);
    _objc_release(puVar3);
    func_0x00010be558c0(param_1);
    _objc_release(param_6);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    _objc_retain(param_5);
    func_0x00010bfa4d60(uVar4);
    _objc_release(uVar4);
    _objc_release(param_5);
    puVar2 = param_7;
  }
  else {
    _objc_retain(param_6);
    func_0x00010c0b4940(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010be558c0(param_1);
    _objc_release(param_6);
    (**(code **)(param_7 + 0x10))(param_7,1,0);
  }
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108b93f6c; end: 108b93ffb;  */

void FUN_108b93f6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108b93ffc;
  puStack_38 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = uVar2;
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  return;
}



/* Entry: 108b93ffc; end: 108b9400f;  */

void FUN_108b93ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b9400c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108b94010; end: 108b9408b; -[SCDefaultLogoutService _logLogoutEndpointAttempt:] */

void FUN_108b94010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dae80;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c17ce20();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9408c; end: 108b9413f; -[SCDefaultLogoutService _logLogoutEndpointResponse:error:] */

void FUN_108b9408c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dae88;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1a6580();
  func_0x00010c17ce20(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010c196fe0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b94140; end: 108b94187; -[SCDefaultLogoutService .cxx_destruct] */

void FUN_108b94140(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b94188; end: 108b94283; -[SCOneTapLoginV3LogoutService initWithNetworkServices:oneTapLoginRegistry:graphene:userTrackedLogger:] */

undefined1 *
FUN_108b94188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fd518;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b94284; end: 108b9459f; -[SCOneTapLoginV3LogoutService performLogoutRequest:] */

void FUN_108b94284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf968e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  _objc_release(uVar8);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b8670;
  func_0x00010bf10920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf225e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = PTR_PTR_1126dae78;
  func_0x00010c0b4920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar9);
  _objc_release();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be558a0(param_1);
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_initWeak(auStack_68,param_1);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c25f600(uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 108b945a0; end: 108b945df;  */

void FUN_108b945a0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2901c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108b945e0; end: 108b9469f;  */

void FUN_108b945e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_4;
  func_0x00010bf001c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ee9018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5adc0(lVar1,param_2,param_3,param_6,uVar3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108b946a0; end: 108b948f3; -[SCOneTapLoginV3LogoutService _logoutRequestCompleted:error:authSessionId:requestId:callback:] */

void FUN_108b946a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = PTR_PTR_1126dae78;
    func_0x00010c0b4960(PTR_PTR_1126dae78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4);
    _objc_release(puVar3);
    func_0x00010be558c0(param_1);
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_7);
    _objc_retain(param_5);
    func_0x00010bfa4d60(uVar4);
    _objc_release(uVar4);
    _objc_release(param_5);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar1 = PTR_PTR_1126dae78;
    func_0x00010c0b4940(PTR_PTR_1126dae78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010be558c0(param_1);
    (**(code **)(param_7 + 0x10))(param_7,1,0);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108b948f4; end: 108b94927;  */

void FUN_108b948f4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd4700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b94928; end: 108b94a4b; -[SCOneTapLoginV3LogoutService _bitmojiFetchingCompleted:authSessionId:] */

void FUN_108b94928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108b94a4c; end: 108b94aaf;  */

void FUN_108b94a4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bee74c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b94ab0; end: 108b94b8f; -[SCOneTapLoginV3LogoutService _v3TokenFetchingCompleted:callback:authSessionId:] */

void FUN_108b94ab0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c25d8c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dae78;
  func_0x00010c0b49c0(PTR_PTR_1126dae78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(param_4 + 0x10))(param_4,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b94b90; end: 108b94c0b; -[SCOneTapLoginV3LogoutService _logLogoutEndpointAttempt:] */

void FUN_108b94b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dae80;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c17ce20();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b94c0c; end: 108b94cbf; -[SCOneTapLoginV3LogoutService _logLogoutEndpointResponse:error:] */

void FUN_108b94c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dae88;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1a6580();
  func_0x00010c17ce20(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010c196fe0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b94cc0; end: 108b94d13; -[SCOneTapLoginV3LogoutService .cxx_destruct] */

void FUN_108b94cc0(long param_1)

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



/* Entry: 108b94d14; end: 108b94e4f;  */

void FUN_108b94d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(puVar2);
  func_0x00010c1677c0(param_1,puVar1);
  func_0x00010c21e900(puVar1,param_3,0);
  puVar2 = PTR_PTR_1126afd30;
  _objc_alloc(PTR_PTR_1126afd30);
  func_0x00010bfffc60();
  func_0x00010c1a7f60();
  func_0x00010c24dbc0(puVar2);
  puVar3 = puVar1;
  func_0x00010bf4dce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108b94e50;
  puStack_50 = &UNK_1108471b0;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x00010c0bbfc0(puVar2,param_3,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b94e50; end: 108b94f87;  */

void FUN_108b94e50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108b94f88; end: 108b94fb3; +[SCGrapheneLogoutMetric logoutAsyncAttempt] */

void FUN_108b94f88(void)

{
  _objc_alloc(PTR_PTR_1126dae78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b94fb4; end: 108b94fdf; +[SCGrapheneLogoutMetric logoutAsyncSuccess] */

void FUN_108b94fb4(void)

{
  _objc_alloc(PTR_PTR_1126dae78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b94fe0; end: 108b9500b; +[SCGrapheneLogoutMetric logoutAsyncFailure] */

void FUN_108b94fe0(void)

{
  _objc_alloc(PTR_PTR_1126dae78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b9500c; end: 108b95037; +[SCGrapheneLogoutMetric logoutSyncAttempt] */

void FUN_108b9500c(void)

{
  _objc_alloc(PTR_PTR_1126dae78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b95038; end: 108b95063; +[SCGrapheneLogoutMetric logoutSyncSuccess] */

void FUN_108b95038(void)

{
  _objc_alloc(PTR_PTR_1126dae78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b95064; end: 108b9508f; +[SCGrapheneLogoutMetric logoutSyncFailure] */

void FUN_108b95064(void)

{
  _objc_alloc(PTR_PTR_1126dae78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b95090; end: 108b950bb; +[SCGrapheneLogoutMetric logoutV3Token] */

void FUN_108b95090(void)

{
  _objc_alloc(PTR_PTR_1126dae78);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b950bc; end: 108b9515b; -[SCGrapheneLogoutMetric description] */

void FUN_108b950bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8658;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df8658,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fd520;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108b9515c; end: 108b952db; -[SCGrapheneRegistry logoutGraphene] */

void FUN_108b9515c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108b951e4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372d948 != -1) {
    func_0x000107c27d9c(0x11372d948,&puStack_48);
  }
  uVar1 = uRam000000011372d940;
  _objc_retain(uRam000000011372d940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b952dc; end: 108b95307; +[SCGrapheneAcquisitionMetric iadAttributeErrorReason] */

void FUN_108b952dc(void)

{
  _objc_alloc(PTR_PTR_1126dae90);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b95308; end: 108b95333; +[SCGrapheneAcquisitionMetric iadAttribution] */

void FUN_108b95308(void)

{
  _objc_alloc(PTR_PTR_1126dae90);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b95334; end: 108b953d3; -[SCGrapheneAcquisitionMetric description] */

void FUN_108b95334(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee9138;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee9138,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fd528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108b953d4; end: 108b9551f; -[SCGrapheneRegistry acquisitionGraphene] */

void FUN_108b953d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108b9545c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372d958 != -1) {
    func_0x000107c27d9c(0x11372d958,&puStack_48);
  }
  uVar1 = uRam000000011372d950;
  _objc_retain(uRam000000011372d950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b95520; end: 108b9553f; -[SCAddFriendsScope initWithAddFriendsContext:uiContainer:deckContainerFactory:placement:usesNavigationPresentation:addFriendsWorkflowDelegate:] */

void FUN_108b95520(void)

{
  func_0x00010bff2260();
  return;
}



/* Entry: 108b95540; end: 108b9566f; -[SCAddFriendsScope initWithAddFriendsContext:uiContainer:deckContainerFactory:placement:usesNavigationPresentation:addFriendsWorkflowDelegate:onClickDone:] */

undefined1 *
FUN_108b95540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fd530;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b95670; end: 108b95677; -[SCAddFriendsScope addFriendsContext] */

undefined8 FUN_108b95670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108b95678; end: 108b9567f; -[SCAddFriendsScope uiContainer] */

undefined8 FUN_108b95678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108b95680; end: 108b95697; -[SCAddFriendsScope deckContainerFactory] */

void FUN_108b95680(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b95698; end: 108b9569f; -[SCAddFriendsScope placement] */

undefined8 FUN_108b95698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108b956a0; end: 108b956b7; -[SCAddFriendsScope addFriendsWorkflowDelegate] */

void FUN_108b956a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b956b8; end: 108b956bf; -[SCAddFriendsScope usesNavigationPresentation] */

undefined1 FUN_108b956b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108b956c0; end: 108b956c7; -[SCAddFriendsScope onClickDone] */

undefined8 FUN_108b956c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108b956c8; end: 108b95713; -[SCAddFriendsScope .cxx_destruct] */

void FUN_108b956c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108b95714; end: 108b9575b; -[SCAddFriendsContext initWithPageType:] */

void FUN_108b95714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108b9575c; end: 108b9577f; -[SCAddFriendsContext copyWithZone:] */

undefined8 FUN_108b9575c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108b95780; end: 108b9578f; -[SCAddFriendsContext hash] */

long FUN_108b95780(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 108b95790; end: 108b95817; -[SCAddFriendsContext isEqual:] */

bool FUN_108b95790(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108b95818; end: 108b9581f; -[SCAddFriendsContext pageType] */

undefined8 FUN_108b95818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b95820; end: 108b95903; -[SCBillboardStringsServiceProvider provide] */

void FUN_108b95820(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0db900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dae98;
  _objc_alloc(PTR_PTR_1126dae98);
  func_0x00010c04e8a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108b95904; end: 108b95943;  */

void FUN_108b95904(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108b95944; end: 108b95a53; -[SCBillboardStringsServiceProvider _createStringFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b95944(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_112777d94;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112777d98;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126daea0;
  param_1 = param_1 + _DAT_112777d9c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e2c0(puVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126daea8;
  _objc_alloc(PTR_PTR_1126daea8);
  func_0x00010c00dc60();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108b95a54; end: 108b95aa3; -[SCBillboardStringsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b95a54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112777d98);
  _objc_destroyWeak(param_1 + _DAT_112777d94);
  _objc_destroyWeak(param_1 + _DAT_112777d9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112777da0);
  return;
}



/* Entry: 108b95aa4; end: 108b95c93; -[SCBillboardStringsPostRegSyncEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b95aa4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar7 = (long)_DAT_112777da4;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_1 + _DAT_112777da8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126daea0;
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    lVar1 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e2c0(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar7);
    puVar5 = PTR_PTR_1126daeb0;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112777dac;
    _objc_loadWeakRetained(lVar1);
    lVar7 = lVar1;
    func_0x00010c25d220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0186c0(puVar5,param_2,lVar2,puVar4,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bdf1260();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112777db0;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar1;
    _objc_release(uVar6);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108b95c94;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    puStack_58 = puVar5;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + lVar7),param_2,&puStack_80);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 108b95c94; end: 108b95d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b95c94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_112777dbc;
    _objc_loadWeakRetained(lVar5);
  }
  lVar1 = lVar5;
  func_0x00010bf6d580(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6d500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6d480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266040(lVar2,param_2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 108b95d70; end: 108b95e03; -[SCBillboardStringsPostRegSyncEntryPoint _createPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b95d70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112777db4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108b95e04; end: 108b95e7b; -[SCBillboardStringsPostRegSyncEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b95e04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112777db4);
  _objc_destroyWeak(param_1 + _DAT_112777dac);
  _objc_destroyWeak(param_1 + _DAT_112777da4);
  _objc_destroyWeak(param_1 + _DAT_112777da8);
  _objc_destroyWeak(param_1 + _DAT_112777dbc);
  _objc_destroyWeak(param_1 + _DAT_112777db8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777db0,0);
  return;
}



/* Entry: 108b95e7c; end: 108b95f6b; -[SCBillboardStringFetcherImpl initWithDocObjectContext:locale:grapheneRegistry:] */

undefined1 *
FUN_108b95e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b95f6c; end: 108b95f8b; -[SCBillboardStringFetcherImpl stringWithKey:] */

void FUN_108b95f6c(void)

{
  func_0x00010c25da40();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b95f8c; end: 108b96067; -[SCBillboardStringFetcherImpl stringWithKey:englishFallback:] */

void FUN_108b95f8c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bec5960(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 != 0) && (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 == 0)) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110de3318);
    if ((uVar3 & 1) == 0) {
      func_0x00010bec5960(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110de3318);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108b95ffc;
    }
  }
  _objc_retain(lVar1);
  param_1 = lVar1;
LAB_108b95ffc:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108b96068; end: 108b96087; -[SCBillboardStringFetcherImpl stringFutureWithKey:] */

void FUN_108b96068(void)

{
  func_0x00010c25d600();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b96088; end: 108b962c3; -[SCBillboardStringFetcherImpl stringFutureWithKey:englishFallback:] */

void FUN_108b96088(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  lVar2 = param_1;
  func_0x00010c25da40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010c265fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = param_1;
      func_0x00010c25da40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(puVar1);
      _objc_release(lVar3);
      func_0x00010be59960(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010c265fa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_copyWeak(auStack_58,auStack_48);
      _objc_retain(param_3);
      uStack_50 = param_4;
      func_0x00010c297260(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_48);
    }
  }
  else {
    func_0x00010bf43d60(puVar1);
  }
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108b962c4; end: 108b96383;  */

void FUN_108b962c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c25da40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  else {
    func_0x00010bf43ca0(uVar2,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b96384; end: 108b963a3; -[SCBillboardStringFetcherImpl stringDictFutureWithKeys:] */

void FUN_108b96384(void)

{
  func_0x00010c25d1a0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b963a4; end: 108b965f7; -[SCBillboardStringFetcherImpl stringDictFutureWithKeys:englishFallback:] */

void FUN_108b963a4(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  lVar2 = param_1;
  func_0x00010be23160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf529e0();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == lVar4) {
    func_0x00010bf43d60(puVar1);
  }
  else {
    lVar3 = param_1;
    func_0x00010c265fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = param_1;
      func_0x00010be23160(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(puVar1);
      _objc_release(lVar3);
      func_0x00010be59960(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010c265fa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_copyWeak(auStack_58,auStack_48);
      _objc_retain(param_3);
      uStack_50 = param_4;
      func_0x00010c297260(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_48);
    }
  }
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108b965f8; end: 108b9667f;  */

void FUN_108b965f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be23160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b96680; end: 108b9675f; -[SCBillboardStringFetcherImpl onSyncWillStart] */

void FUN_108b96680(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126daeb8;
  func_0x00010c2663a0(PTR_PTR_1126daeb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf19ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108b96760; end: 108b96763; -[SCBillboardStringFetcherImpl onSyncDidStartWithFuture:] */

void FUN_108b96760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c210c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSyncFuture__112661d28);
  return;
}



/* Entry: 108b96764; end: 108b967b3; -[SCBillboardStringFetcherImpl onSyncDidEnd:] */

void FUN_108b96764(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010be53520(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b967b4; end: 108b96c27; -[SCBillboardStringFetcherImpl _stringWithKey:locale:] */

void FUN_108b967b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uStack_30c;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126daec0);
  if (lVar4 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar4);
  }
  puVar5 = &uStack_191;
  FUN_108b98b84();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(param_4);
  ppuStack_208 = &PTR_DAT_110862760;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_110862700;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar6 = &uStack_279;
  uStack_1d8 = param_4;
  bStack_176 = bVar1;
  bStack_175 = bVar2;
  puStack_158 = puVar5;
  pppuStack_150 = &ppuStack_208;
  FUN_108b98cfc();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  _objc_retain(param_3);
  ppuStack_2f0 = &PTR_DAT_110862760;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar6[0x1a];
  bStack_25d = puVar6[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_SUB_110862700;
  pppuStack_e0 = &ppuStack_278;
  uStack_228 = 0;
  uStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = bStack_25e | bVar1;
  bStack_105 = bStack_25d & bVar2;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_308 = (undefined8 *)0x0;
  puStack_300 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar7 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar6;
  pppuStack_238 = &ppuStack_2f0;
  func_0x000107c310cc(puVar7,&ppuStack_120,&puStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_308 != (undefined8 *)0x0) {
    puStack_300 = puStack_308;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_DAT_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862700;
  plStack_210 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_308 = &uStack_230;
  func_0x000107c27dd4(&puStack_308);
  plVar3 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110862760;
  plStack_288 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_308 = &uStack_2a8;
  func_0x000107c27dd4(&puStack_308);
  _objc_release(uStack_2c0);
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000107c27dd4(&ppuStack_278);
  plVar3 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000107c27dd4(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar4);
  puVar8 = puVar7;
  func_0x00010bfb1920(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108b96c28; end: 108b96dcf; -[SCBillboardStringFetcherImpl _getStringDictLocally:englishFallback:] */

void FUN_108b96c28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        uVar3 = param_1;
        func_0x00010c25da40(param_1,param_2,uVar4,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,uVar3,uVar4);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar1 = PTR_PTR_1126daeb8;
  func_0x00010c266200(PTR_PTR_1126daeb8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf19ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b96dd0; end: 108b96e83; -[SCBillboardStringFetcherImpl _logSyncFutureNil] */

void FUN_108b96dd0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126daeb8;
  func_0x00010c266200(PTR_PTR_1126daeb8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf19ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b96e84; end: 108b96f63; -[SCBillboardStringFetcherImpl _logFetchError:] */

void FUN_108b96e84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126daeb8;
  func_0x00010c265ec0(PTR_PTR_1126daeb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf19ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108b96f64; end: 108b96f6f; -[SCBillboardStringFetcherImpl syncFuture] */

void FUN_108b96f64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 108b96f70; end: 108b96f77; -[SCBillboardStringFetcherImpl setSyncFuture:] */

void FUN_108b96f70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108b96f78; end: 108b96fbf; -[SCBillboardStringFetcherImpl .cxx_destruct] */

void FUN_108b96f78(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b96fc0; end: 108b97047;  */

void FUN_108b96fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2ac460(param_1,param_2,&PTR____CFConstantStringClassReference_110db8558,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b97048; end: 108b9714b; -[SCBillboardStringsDeltaSyncProcessor initWithGrapheneRegistry:locale:stringFetcher:] */

undefined1 *
FUN_108b97048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fd548;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b9714c; end: 108b97173; -[SCBillboardStringsDeltaSyncProcessor type] */

void FUN_108b9714c(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b97174; end: 108b971cf; -[SCBillboardStringsDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_108b97174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c087060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108b971d0; end: 108b9823f; -[SCBillboardStringsDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_108b971d0(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined ***param_5,undefined ***param_6,undefined ***param_7)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined ***pppuVar21;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  code *pcStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined ***pppuStack_5c0;
  undefined ***pppuStack_5b8;
  undefined ***pppuStack_5b0;
  undefined ***pppuStack_5a8;
  undefined1 *puStack_5a0;
  code *pcStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined ***pppuStack_568;
  long lStack_560;
  int iStack_554;
  undefined ***pppuStack_550;
  long lStack_548;
  undefined ***pppuStack_540;
  undefined ***pppuStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined4 uStack_4ec;
  undefined ***pppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined8 uStack_4d8;
  undefined **ppuStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b1;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined *apuStack_468 [3];
  long *plStack_450;
  long *plStack_448;
  undefined **ppuStack_440;
  undefined8 uStack_438;
  code *pcStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined ***pppuStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 uStack_3c1;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined ***pppuStack_2d8;
  undefined ***pppuStack_2c8;
  undefined1 *puStack_2c0;
  undefined ***pppuStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_570 = param_3;
  lStack_560 = param_1;
  _objc_retain(param_3);
  pppuStack_550 = param_5;
  _objc_retain(param_5);
  pppuStack_568 = param_6;
  _objc_retain(param_6);
  pppuStack_538 = param_7;
  _objc_retain(param_7);
  iStack_554 = (int)param_4;
  if (((ulong)param_4 & 1) == 0) {
    pppuVar4 = pppuStack_550;
    func_0x00010bf529e0();
    if (pppuVar4 == (undefined ***)0x0) {
      pppuVar4 = pppuStack_568;
      func_0x00010bf529e0();
      if (pppuVar4 == (undefined ***)0x0) goto LAB_108b97f18;
    }
  }
  uVar6 = uStack_570;
  _objc_retain(uStack_570);
  ppuStack_108 = (undefined **)0x0;
  uStack_f8 = 0x3032000000;
  uStack_f0 = FUN_108b987b8;
  uStack_e8 = 0x108b987c8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110daafd8;
  uVar5 = uVar6;
  pppuStack_100 = &ppuStack_108;
  func_0x00010bfe5ec0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2f8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f0 = 0xc2000000;
  pcStack_2e8 = FUN_108b987d0;
  uStack_2e0 = &UNK_110864a68;
  pppuStack_2d8 = &ppuStack_108;
  ppuStack_440 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
  uStack_438 = 0xc2000000;
  pcStack_430 = FUN_108b98808;
  puStack_428 = &UNK_110ab5388;
  _objc_retain(uVar6);
  uStack_420 = uVar6;
  func_0x00010c0bee60(uVar5);
  _objc_release(uVar5);
  pppuStack_540 = (undefined ***)pppuStack_100[5];
  _objc_retain();
  _objc_release(uStack_420);
  __Block_object_dispose(&ppuStack_108,8);
  _objc_release(ppuStack_e0);
  _objc_release(uStack_570);
  uVar5 = *(undefined8 *)(lStack_560 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf19ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126daeb8;
  func_0x00010c2661e0(PTR_PTR_1126daeb8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  FUN_108b96fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (iStack_554 != 0) {
    _objc_opt_class(PTR_PTR_1126daec0);
    if (pppuStack_538 == (undefined ***)0x0) {
      pppuStack_410 = (undefined ***)0x0;
      puStack_428 = (undefined *)0x0;
      pcStack_430 = (code *)0x0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_438 = 0;
      ppuStack_440 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_440);
    }
    pppuVar4 = &ppuStack_4d0;
    FUN_108b98b84();
    pppuVar9 = pppuStack_540;
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xf);
    uStack_2e0 = (undefined *)CONCAT44(uStack_2e0._4_4_,0x100);
    _objc_retain(pppuStack_540);
    pppuStack_2c8 = pppuVar9;
    ppuStack_2f8 = &PTR_DAT_110862760;
    pppuStack_2b8 = (undefined ***)0x0;
    puStack_2c0 = (undefined1 *)0x0;
    uStack_2a8 = 0;
    puStack_2b0 = (undefined *)0x0;
    plStack_298 = (long *)0x0;
    uStack_2a0 = 0;
    plStack_290 = (long *)0x0;
    pppuStack_100 = (undefined ***)CONCAT44(pppuStack_100._4_4_,10);
    uStack_f0._0_4_ = CONCAT22(*(undefined2 *)((long)pppuVar4 + 0x1a),0x100);
    ppuStack_108 = &PTR_SUB_110862700;
    pppuStack_c8 = &ppuStack_2f8;
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x0;
    plStack_a8 = (long *)0x0;
    uStack_b0 = 0;
    plStack_a0 = (long *)0x0;
    ppuStack_4b0 = (undefined **)0x0;
    ppuStack_4a8 = (undefined **)0x0;
    puStack_4a0 = (undefined8 *)0x0;
    uStack_3c0 = (ulong)uStack_3c0._4_4_ << 0x20;
    pppuVar9 = &ppuStack_440;
    pppuStack_d0 = pppuVar4;
    func_0x000107c310cc(pppuVar9,&ppuStack_108,&ppuStack_4b0,&uStack_3c0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_4b0 != (undefined **)0x0) {
      ppuStack_4a8 = ppuStack_4b0;
      __ZdlPv();
    }
    plVar2 = plStack_a0;
    ppuStack_108 = &PTR_SUB_110862700;
    plStack_a0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_4b0 = &puStack_c0;
    func_0x000107c27dd4(&ppuStack_4b0);
    plVar2 = plStack_290;
    ppuStack_2f8 = &PTR_DAT_110862760;
    plStack_290 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_298;
    plStack_298 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_4b0 = &puStack_2b0;
    func_0x000107c27dd4(&ppuStack_4b0);
    _objc_release(pppuStack_2c8);
    func_0x000107c27da8(&uStack_418);
    _objc_release(puStack_428);
    _objc_release(pcStack_430);
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    puStack_330 = (undefined8 *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    _objc_retain(pppuVar9);
    pppuVar4 = pppuVar9;
    func_0x00010bf52a60();
    if (pppuVar4 != (undefined ***)0x0) {
      param_4 = (undefined **)*puStack_330;
      do {
        pppuVar21 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_330 != (undefined ***)param_4) {
            _objc_enumerationMutation(pppuVar9);
          }
          puVar7 = PTR_PTR_1126daec8;
          FUN_108b99574(PTR_PTR_1126daec8,*(undefined8 *)(lStack_338 + (long)pppuVar21 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuStack_538);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          pppuVar21 = (undefined ***)((long)pppuVar21 + 1);
        } while (pppuVar4 != pppuVar21);
        pppuVar4 = pppuVar9;
        func_0x00010bf52a60();
      } while (pppuVar4 != (undefined ***)0x0);
    }
    _objc_release(pppuVar9);
    _objc_release(pppuVar9);
  }
  uVar5 = *(undefined8 *)(lStack_560 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf19ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126daeb8;
  func_0x00010c2668a0(PTR_PTR_1126daeb8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  FUN_108b96fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(pppuStack_550);
  func_0x00010bef9180(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  pppuVar4 = pppuStack_550;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  _objc_retain(pppuStack_550);
  func_0x00010bf52a60();
  if (pppuVar4 != (undefined ***)0x0) {
    lStack_548 = *plStack_370;
    do {
      param_4 = (undefined **)0x0;
      do {
        if (*plStack_370 != lStack_548) {
          _objc_enumerationMutation(pppuStack_550);
        }
        uVar19 = *(undefined8 *)(lStack_378 + (long)param_4 * 8);
        uVar6 = uVar19;
        func_0x00010c084700(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        FUN_108b98240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar6);
        func_0x00010c118b40(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar19);
        ppuStack_108 = (undefined **)0x0;
        uStack_f8 = 0x3032000000;
        uStack_f0 = FUN_108b987b8;
        uStack_e8 = 0x108b987c8;
        ppuStack_e0 = (undefined **)0x0;
        ppuStack_2f8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
        uStack_2f0 = 0xc2000000;
        pcStack_2e8 = FUN_108b98848;
        uStack_2e0 = &UNK_110864a68;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        uStack_580 = 0;
        pppuStack_2d8 = &ppuStack_108;
        pppuStack_100 = &ppuStack_108;
        func_0x00010c0c0580(uVar6);
        ppuVar18 = pppuStack_100[5];
        _objc_retain(ppuVar18);
        __Block_object_dispose(&ppuStack_108,8);
        _objc_release(ppuStack_e0);
        ppuVar11 = ppuVar18;
        func_0x00010c08fa60();
        if (ppuVar11 == (undefined **)0x0) {
          puVar12 = *(undefined **)(lStack_560 + 8);
          func_0x00010c269d40(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar12;
          func_0x00010bf19ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126daeb8;
          func_0x00010c0ceb80(PTR_PTR_1126daeb8);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar8;
          FUN_108b96fc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0(puVar7);
          _objc_release(puVar13);
          _objc_release(puVar8);
        }
        else {
          puVar12 = PTR_PTR_1126daec0;
          _objc_alloc(PTR_PTR_1126daec0);
          func_0x00010c026a40();
          puVar7 = puVar12;
          FUN_108b995e8();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuStack_538);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(puVar7);
        _objc_release(puVar12);
        _objc_release(ppuVar18);
        _objc_release(uVar6);
        _objc_release(uVar10);
        param_4 = (undefined **)((long)param_4 + 1);
      } while (pppuVar4 != (undefined ***)param_4);
      pppuVar4 = pppuStack_550;
      func_0x00010bf52a60();
    } while (pppuVar4 != (undefined ***)0x0);
  }
  _objc_release(pppuStack_550);
  param_5 = *(undefined ****)(lStack_560 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_6 = param_5;
  func_0x00010bf19ec0();
  _objc_retainAutoreleasedReturnValue();
  param_7 = (undefined ***)PTR_PTR_1126daeb8;
  func_0x00010c265e00();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = param_7;
  FUN_108b96fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(pppuStack_568);
  func_0x00010bef9180(param_6);
  _objc_release(pppuVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  pppuVar4 = pppuStack_568;
  func_0x000107c31908(pppuStack_568,&PTR___NSConcreteGlobalBlock_110ab5368);
  pppuVar9 = pppuVar4;
  func_0x00010bf529e0();
  if (pppuVar9 != (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126daec0);
    if (pppuStack_538 == (undefined ***)0x0) {
      uStack_390 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_3c0);
    }
    puVar14 = &uStack_3c1;
    FUN_108b98b84();
    param_7 = pppuStack_540;
    uStack_438 = CONCAT44(uStack_438._4_4_,0xf);
    puStack_428 = (undefined *)CONCAT44(puStack_428._4_4_,0x100);
    _objc_retain(pppuStack_540);
    pppuStack_410 = param_7;
    ppuStack_440 = &PTR_DAT_110862760;
    uStack_400 = 0;
    uStack_408 = 0;
    uStack_3f0 = 0;
    puStack_3f8 = (undefined *)0x0;
    plStack_3e0 = (long *)0x0;
    uStack_3e8 = 0;
    plStack_3d8 = (long *)0x0;
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,10);
    uStack_2e0._0_4_ = CONCAT22(*(undefined2 *)(puVar14 + 0x1a),0x100);
    ppuStack_2f8 = &PTR_SUB_110862700;
    pppuStack_2b8 = &ppuStack_440;
    uStack_2a8 = 0;
    puStack_2b0 = (undefined *)0x0;
    plStack_298 = (long *)0x0;
    uStack_2a0 = 0;
    plStack_290 = (long *)0x0;
    puVar15 = &uStack_4b1;
    puStack_2c0 = puVar14;
    FUN_108b98cfc(puVar15);
    _objc_retain(pppuVar4);
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    ppuStack_4d0 = (undefined **)0x0;
    pppuVar9 = pppuVar4;
    func_0x00010bf529e0(pppuVar4);
    func_0x000107c281a4(&ppuStack_4d0,pppuVar9);
    ppuStack_4a8 = (undefined **)0x0;
    ppuStack_4b0 = (undefined **)0x0;
    uStack_498 = 0;
    puStack_4a0 = (undefined8 *)0x0;
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    _objc_retain(pppuVar4);
    pppuVar9 = pppuVar4;
    func_0x00010bf52a60();
    if (pppuVar9 != (undefined ***)0x0) {
      param_4 = (undefined **)*puStack_4a0;
      do {
        pppuVar21 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_4a0 != (undefined ***)param_4) {
            _objc_enumerationMutation(pppuVar4);
          }
          param_7 = (undefined ***)ppuStack_4a8[(long)pppuVar21];
          _objc_retain(param_7);
          pppuStack_4e8 = param_7;
          func_0x000107c281a8(&ppuStack_4d0,&pppuStack_4e8);
          _objc_release(pppuStack_4e8);
          pppuVar21 = (undefined ***)((long)pppuVar21 + 1);
        } while (pppuVar9 != pppuVar21);
        pppuVar9 = pppuVar4;
        func_0x00010bf52a60();
      } while (pppuVar9 != (undefined ***)0x0);
    }
    _objc_release(pppuVar4);
    _objc_release(pppuVar4);
    param_6 = &ppuStack_4b0;
    func_0x000107c281a0(&ppuStack_4b0,0xc,puVar15,&ppuStack_4d0);
    pppuStack_100 = (undefined ***)CONCAT44(pppuStack_100._4_4_,4);
    uVar1 = (ulong)CONCAT61((int6)((ulong)uStack_f0 >> 0x10),uStack_2e0._1_1_ | uStack_498._1_1_) &
            0xffffffffffff01;
    uStack_f0 = (code *)(uVar1 << 8);
    lVar3 = (long)uStack_f0;
    uStack_f0._3_5_ = (undefined5)(uVar1 >> 0x10);
    uStack_f0._0_2_ = (undefined2)lVar3;
    uStack_f0 = (code *)(CONCAT53(uStack_f0._3_5_,
                                  CONCAT12(uStack_2e0._2_1_ | uStack_498._2_1_,(undefined2)uStack_f0
                                          )) & 0xffffffffff01ffff);
    uStack_f0._0_4_ = CONCAT13(uStack_2e0._3_1_ & uStack_498._3_1_,(undefined3)uStack_f0);
    ppuStack_108 = &PTR_DAT_1108629c8;
    pppuStack_d0 = &ppuStack_2f8;
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x0;
    plStack_a8 = (long *)0x0;
    uStack_b0 = 0;
    plStack_a0 = (long *)0x0;
    pppuStack_4e8 = (undefined ***)0x0;
    ppuStack_4e0 = (undefined **)0x0;
    uStack_4d8 = 0;
    uStack_4ec = 0;
    puVar16 = &uStack_3c0;
    pppuStack_c8 = param_6;
    func_0x000107c310cc(puVar16,&ppuStack_108,&pppuStack_4e8,&uStack_4ec);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_4e8 != (undefined ***)0x0) {
      ppuStack_4e0 = (undefined **)pppuStack_4e8;
      __ZdlPv();
    }
    plVar2 = plStack_a0;
    ppuStack_108 = &PTR_DAT_1108629c8;
    plStack_a0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (puStack_c0 != (undefined *)0x0) {
      __ZdlPv();
    }
    plVar2 = plStack_448;
    ppuStack_4b0 = &PTR_SUB_110862700;
    plStack_448 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_450;
    plStack_450 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    pppuStack_4e8 = (undefined ***)apuStack_468;
    func_0x000107c27dd4(&pppuStack_4e8);
    pppuStack_4e8 = &ppuStack_4d0;
    func_0x000107c27dd4(&pppuStack_4e8);
    plVar2 = plStack_290;
    ppuStack_2f8 = &PTR_SUB_110862700;
    plStack_290 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_298;
    plStack_298 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_4b0 = &puStack_2b0;
    func_0x000107c27dd4(&ppuStack_4b0);
    plVar2 = plStack_3d8;
    ppuStack_440 = &PTR_DAT_110862760;
    plStack_3d8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_3e0;
    plStack_3e0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    ppuStack_4b0 = &puStack_3f8;
    func_0x000107c27dd4(&ppuStack_4b0);
    _objc_release(pppuStack_410);
    func_0x000107c27da8(&uStack_398);
    _objc_release(uStack_3a8);
    _objc_release(uStack_3b0);
    lStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    puStack_520 = (undefined8 *)0x0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    _objc_retain(puVar16);
    puVar17 = puVar16;
    func_0x00010bf52a60();
    if (puVar17 != (undefined8 *)0x0) {
      param_7 = (undefined ***)*puStack_520;
      param_4 = &PTR_PTR_1126da000;
      do {
        puVar20 = (undefined8 *)0x0;
        do {
          if ((undefined ***)*puStack_520 != param_7) {
            _objc_enumerationMutation(puVar16);
          }
          param_6 = (undefined ***)PTR_PTR_1126daec8;
          FUN_108b99574(PTR_PTR_1126daec8,*(undefined8 *)(lStack_528 + (long)puVar20 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuStack_538);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(param_6);
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar17 != puVar20);
        puVar17 = puVar16;
        func_0x00010bf52a60();
      } while (puVar17 != (undefined8 *)0x0);
    }
    param_5 = (undefined ***)0x0;
    _objc_release(puVar16);
    _objc_release(puVar16);
  }
  _objc_release(pppuVar4);
  _objc_release(pppuStack_540);
LAB_108b97f18:
  _objc_release(pppuStack_538);
  _objc_release(pppuStack_568);
  _objc_release(pppuStack_550);
  uVar6 = uStack_570;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(pppuStack_540);
  _objc_release(pppuStack_538);
  _objc_release(pppuStack_568);
  _objc_release(pppuStack_550);
  _objc_release(uStack_570);
  __Unwind_Resume();
  pcStack_598 = FUN_108b98240;
  pppuStack_5c0 = (undefined ***)param_4;
  pppuStack_5b8 = param_7;
  pppuStack_5b0 = param_6;
  pppuStack_5a8 = param_5;
  puStack_5a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  uVar5 = uVar6;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puStack_5e8 = &uStack_5f0;
  uStack_5f0 = 0;
  uStack_5e0 = 0x3032000000;
  pcStack_5d8 = FUN_108b987b8;
  uStack_5d0 = 0x108b987c8;
  uStack_5c8 = 0;
  _objc_retain(uVar10);
  func_0x00010c0bee60(uVar10);
  uVar5 = puStack_5e8[5];
  _objc_retain(uVar5);
  _objc_release(uVar10);
  __Block_object_dispose(&uStack_5f0,8);
  _objc_release(uStack_5c8);
  _objc_release(uVar10);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108b98240; end: 108b983bf;  */

void FUN_108b98240(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108b987b8;
  uStack_40 = 0x108b987c8;
  uStack_38 = 0;
  _objc_retain(uVar1);
  func_0x00010c0bee60(uVar1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108b983c0; end: 108b9841b;  */

void FUN_108b983c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0f5860(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_108b98240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b9841c; end: 108b98427; -[SCBillboardStringsDeltaSyncProcessor dataSyncerIdentifier] */

undefined ** FUN_108b9841c(void)

{
  return &PTR____CFConstantStringClassReference_110ee91f8;
}



/* Entry: 108b98428; end: 108b9844f; -[SCBillboardStringsDeltaSyncProcessor deltaSyncClientType] */

void FUN_108b98428(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b98450; end: 108b984cf; -[SCBillboardStringsDeltaSyncProcessor deltaSyncKey] */

void FUN_108b98450(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0440;
  _objc_alloc(PTR_PTR_1126b0440);
  puVar2 = PTR_PTR_1126b0438;
  func_0x00010c0d5160(PTR_PTR_1126b0438,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee91d8,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b984d0; end: 108b984d7; -[SCBillboardStringsDeltaSyncProcessor deltaSyncType] */

undefined8 FUN_108b984d0(void)

{
  return 2;
}



/* Entry: 108b984d8; end: 108b984db; -[SCBillboardStringsDeltaSyncProcessor onDeltaSync:isFullSync:updates:deletions:transactionContext:] */

void FUN_108b984d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processDeltaSyncWithGroupKey_isF_112622c68);
  return;
}



/* Entry: 108b984dc; end: 108b9865f; -[SCBillboardStringsDeltaSyncProcessor jobConfig] */

void FUN_108b984dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1edae0(puVar3,param_2,10);
  func_0x00010c1c35c0(puVar3,param_2,2);
  func_0x00010c1ed860(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar1,param_2,puVar4);
  func_0x00010c1b6780(puVar1,param_2,0);
  func_0x00010c1b6740(puVar1,param_2,1);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee91f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108b98660; end: 108b9869f; -[SCBillboardStringsDeltaSyncProcessor onPreSync] */

void FUN_108b98660(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e6e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


